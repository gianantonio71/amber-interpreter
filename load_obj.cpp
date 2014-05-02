#include "common.h"
#include "lexer.h"
#include "term.h"


bool is_open_bracket(const string &str)
{
  return str == "(" || str == "[" || str == "{";
}

string get_matching_bracket(const string &str)
{
  if (str == "(") return ")";
  if (str == "[") return "]";
  if (str == "{") return "}";
  halt;
}

string trim(const string &str)
{
  switch (token_type(str))
  {
    case label:
      return str.substr(0, str.length()-1);
  }

  halt;  
}

  
class Tokens
{  
public:
  Tokens(vector<Token> &tokens, int_v &bracket_matches) : tokens(tokens) //, bracket_matches(bracket_matches)
  {
    first = 0;
    left = tokens.size();
    update_print_str();
  }
  
  string get(int pos)
  {
    assert(pos >= 0 && pos < left);
    
    return tokens[first+pos].str;
  }
  
  string get_next()
  {
    return get(0);
  }
  
  bool is_at(const string &str, int pos)
  {
    assert(pos >= 0 && pos < left);
    
    return tokens[first+pos].str == str;
  }
  
  bool is_at(TokenType type, int pos)
  {
    assert(pos >= 0 && pos < left);
    
    return tokens[first+pos].token_type() == type;
  }

  bool next_is(const string &str)
  {
    return is_at(str, 0);
  }
  
  bool next_is(TokenType type)
  {
    return is_at(type, 0);
  }
  
  void consume(int count)
  {
    assert(left > 0);
    
    first += count;
    left  -= count;

    update_print_str();
  }
  
  int len()
  {
    return left;
  }
  
  void report_error()
  {
    cout << "Error reading object in file " << tokens[first].filename
         << ", line: " << tokens[first].start_line
         << ", col: " << tokens[first].start_col << endl;
    
    for (int i=0 ; i < left ; i++)
      cout << tokens[first+i].str << endl;
  }

  void update_print_str()
  {
    print_str = "";
    for (int i=0 ; i < left ; i++)
      print_str += tokens[first+i].str;    
  }
  
private:
  vector<Token> &tokens;
  int first;
  int left;
  
  string print_str;
};
  

Term read_obj(Tokens &ts);


term_v read_objs_up_to(Tokens &ts, string eof)
{
  term_v objs;
  
  if (!ts.next_is(eof))
    for ( ; ; )
    {
      objs.push_back(read_obj(ts));
      if (ts.next_is(","))
      {
        ts.consume(1);
      }
      else if (ts.next_is(eof))
      {
        break;
      }
      else
      {
        ts.report_error();
        halt;
        throw;
      }
    }
  
  ts.consume(1);
  return objs;
}


Term read_obj(Tokens &ts)
{
  // Number
  if (ts.next_is(number))
  {
    Term res = int_obj(atoi(ts.get_next().c_str()));
    ts.consume(1);
    return res;
  }
  
  // Neg number
  if (ts.next_is("-") && ts.is_at(number, 1))
  {
    Term res = int_obj(-atoi(ts.get(1).c_str()));
    ts.consume(2);
    return res;
  }
  
  // Sequence
  if (ts.next_is("["))
  {
    ts.consume(1);
    term_v elems = read_objs_up_to(ts, "]");
    return seq_obj(elems);
  }
  
  // Set
  if (ts.next_is("{"))
  {
    ts.consume(1);
    term_v elems = read_objs_up_to(ts, "}");
    return set_obj(elems);
  }

  // Map or Tuple
  if (ts.next_is("("))
  {
    ts.consume(1);
    term_v keys, values;
    if (ts.next_is(label))
    {
      for ( ; ; )
      {
        keys.push_back(symbol_obj(Symbol(trim(ts.get_next()))));
        ts.consume(1);
        values.push_back(read_obj(ts));
        if (ts.next_is(","))
        {
          ts.consume(1);
        }
        else if (ts.next_is(")"))
        {
          ts.consume(1);
          break;
        }
        else
        {
          goto error;
        }
      }
    }
    else
    {
      while (!ts.next_is(")"))
      {
        keys.push_back(read_obj(ts));
        if (!ts.next_is("=>"))
          goto error;
        ts.consume(1);
        values.push_back(read_obj(ts));
        if (ts.next_is(","))
          ts.consume(1);
        else if (!ts.next_is(")"))
          goto error;    
      }
      ts.consume(1);
    }
      
    return map_obj(keys, values);  
  }
  
  // Symbol or Tagged object
  if (ts.next_is(plain_identifier))
  {
    Symbol head = Symbol(ts.get_next());
    ts.consume(1);

    if (ts.next_is("("))
    {
      if (ts.is_at(label, 1))
      {
        Term tuple = read_obj(ts);
        return tagged_obj(head, tuple);
      }
      else
      {
        ts.consume(1);
        Term obj = read_obj(ts);
        if (!ts.next_is(")"))
          goto error;
        ts.consume(1);
        return tagged_obj(head, obj);
      }    
    }
    else
    {
      return symbol_obj(head);
    }
  }

error:  
  ts.report_error();
  halt;
}


Term load_obj(const char *filename)
{
  //cerr << "load_obj#1 - " << filename <<endl;
  
	ifstream ifs(filename, ifstream::in);

  //cerr << "load_obj#2" << endl;
	
	Lexer lex;

	int line_num = 0;

	while (!ifs.eof())
	{
		string s;
		getline(ifs, s);
		lex.consume_line(s, filename, line_num++);
	}

  //cerr << "load_obj#3 - " << lex.tokens.size() << endl;
  
  int_v bracket_matches;
  Tokens ts(lex.tokens, bracket_matches);

  //cerr << "load_obj#4 - " << bracket_matches.size() << endl;
  
  Term t = read_obj(ts);

  //cerr << "load_obj#5" << endl;
  
  if (!ts.len() == 0)
  {
    ts.report_error();
    halt;
  }

  return t;
}

#include "common.h"
#include "lexer.h"
#include "decls.h"
#include "os_interface.h"



string to_str(TokenType t)
{
  switch (t)
  {
    case invalid:             return "invalid";
    case operator_symbol:     return "operator_symbol";
    case plain_identifier:    return "plain_identifier";
    case op_function:         return "op_function";
//    case non_alnum_symbol:    return "non_alnum_symbol";
    case symbol:              return "symbol";
    case label:               return "label";
    case number:              return "number";
    case type_id:             return "type_id";
    case type_var:            return "type_var";
    case builtin:             return "builtin";
  }
  
  halt;
}



static Lexer p;

bool streq(const char *str1, const char *str2);

bool run_all_testcases = false;

int main(int argc, char **argv)
{
  //int nl  = '\n';
  //int dqs = '"';
  //int bs  = '\\';
  //int sp  = ' ';
  //
  //cout << "newline: " << nl << endl;
  //cout << "double quotes: " << dqs << endl;
  //cout << "backslash: " << bs << endl;
  //cout << "space: " << sp << endl;
  //
  //getchar();

  assert(argc >= 2);

  set_priority_idle();
  
  int start_tc = get_tick_count();

  string_v src_files;
  
	for (int i=1 ; i < argc ; i++)
	{
		char *arg = argv[i];
		
		if (streq(arg, "-t"))
		{
		  Program::get_singleton().enable_tracing();
		}
		else if (streq(arg, "-r"))
		{
			run_all_testcases = true;
		}
		else
		{
			ifstream ifs(arg, ifstream::in);
			
			while (!ifs.eof())
			{
				string s;
				getline(ifs, s);
				src_files.push_back(s);				
			}
		}
	}

  for (unsigned int i=0 ; i < src_files.size() ; i++)
  {
		// cout << "Processing file " << src_files[i] << endl;

    int line_num = 0;
		ifstream ifs(src_files[i].c_str(), ifstream::in);

    if (ifs.fail())
    {
      cout << "Cannot open file " << src_files[i] << endl;
      return 1;
    }
    			
		while (!ifs.eof())
		{
			string s;
			getline(ifs, s);
		  p.consume_line(s, src_files[i].c_str(), line_num++);
		}
  }

  //int len = p.tokens.size();
  //for (int i=0 ; i < len ; i++)
  //{
  //  Token &t = p.tokens[i];
  //  string desc = to_str(t.token_type());
  //  printf("%2d %2d - %s - %s\n", t.start_line, t.start_col, t.str.c_str(), desc.c_str());
  //}

  int lexing_done_tc = get_tick_count();

  int yyparse();

  if (yyparse() != 0)
  {
    getchar();
    return 1;
  }

  // cout << "\nParsing successful" << endl;

  int parsing_done_tc = get_tick_count();

  Program::get_singleton().freeze();

  // cout << "Lexing:         " << (lexing_done_tc - start_tc)                 << endl;
  // cout << "Parsing:        " << (parsing_done_tc - lexing_done_tc)          << endl;


  const int NUM_REP = 1;

  int times[NUM_REP];

  int titc = get_tick_count();

  for (int i=0 ; i < NUM_REP ; i++)
  {
    int itc = get_tick_count();

    Program::get_singleton().run_tests();

    int ftc = get_tick_count();
    times[i] = ftc - itc;
  }

  int tftc = get_tick_count();

  for (int i=0 ; i < NUM_REP ; i++)
    cout << "Time elapsed: " << times[i] << endl;

  if (NUM_REP > 1)
    cout << "Total time elapsed: " << tftc - titc << endl;

	//extern long long deep_com_counter;
	//extern long long deep_eq_counter;

	//cout << "deep_com_counter = " << deep_com_counter << endl;
	//cout << "deep_eq_counter = " << deep_eq_counter << endl;

  Program::get_singleton().finish();

  getchar();
}

static unsigned int next_idx = 0;

void yyerror(char const *s)
{
  if (next_idx > 0)
  {
    int l = p.tokens[next_idx-1].start_line;
    int c = p.tokens[next_idx-1].start_col;
    const char *f = p.tokens[next_idx-1].filename;

    fprintf(stderr, "%s, file %s, line %d, col %d\n", s, f, l+1, c+1);
  }
  else
  {
    fprintf(stderr, "%s, unknown position", s);
  }
}


obj get_token(unsigned int idx, char *str, int &line, int &col)
{
  static string last_file = "";
  static int last_line = -1;
  
  assert(idx == next_idx);

  if (idx >= p.tokens.size())
  {
    str[0] = '\0';
    return obj();
  }

  next_idx = idx + 1;

  Token t = p.tokens[idx];
  string s = t.str;

  strcpy(str, s.c_str());
  line = t.start_line;
  col = t.start_col;

  //cout << "line: " << line << ", column: " << col << endl;

  if (t.filename != last_file)
  {
    // cout << t.filename << endl;
    last_file = t.filename;
  }
  
  //if (line != last_line)
  //{
  //  cout << line << endl;
  //  last_line = line;
  //}
    
	return obj(new Token(t.str, t.start_line, t.start_col, t.filename));
}

#include "common.h"
#include "lexer.h"




//////////////////////////////////////////////////////////////////////////////

void on_error(string msg, const char *file, int line, int col)
{
  msg += " (file %s, line %d, column %d)\n";
  const char *s = msg.c_str();
  fprintf(stderr, s, file, line+1, col+1);
  //fflush(stdout);
  getchar();
  exit(-1);
}

void on_invalid_char(char ch, const char *file, int line, int col)
{
  if (ch == '\t')
    on_error("Tabs not allowed in source text", file, line, col);

  fprintf(stderr, "Invalid character '%c' (%d), in source text, file %s, line %d, column %d", (int) ch, (int) ch, file, line+1, col+1);
  //fflush(stdout);
  exit(-1);
}

//////////////////////////////////////////////////////////////////////////////

static const char *fixed_tokens[] = {
  "(",
  ")",
  "[",
  "]",
  "{",
  "}",
  ",",
  ";",

  "?",
  "=",
  "|",
  ":",
  "_",
  "^",
  ".",
	"~",
	"@",
	"&",
	"!",
	"#",
	"$",

  "<",
  ">",
  "+",
  "-",
  "*",
  "/",

  "..",

  "==",
  "/=",
  "<=",
  ">=",

	":=",
  "::",
  "->",
  "=>",
  "<-",
  "\\/",
  "</-",

  "..."
};

// Operators as functions
static const char *operators_as_functions[] = {
  "op_+",
  "op_-",
  "op_*",
  "op_/",
  "op_^",
  "op_&",
  "op_<",
  "op_>",
  "op_<=",
  "op_>=",
  "op_[]"
};

const int SPECIAL_TOKEN_COUNT = lengthof(fixed_tokens) + lengthof(operators_as_functions);

const char *get_special_token(int idx)
{
  if (idx < lengthof(fixed_tokens))
    return fixed_tokens[idx];
  idx -= lengthof(fixed_tokens);
  
  if (idx < lengthof(operators_as_functions))
    return operators_as_functions[idx];
  
  halt;
}

//  0: invalid symbol char
//  1: flow breaker
//  2: otherwise
int char_status(char ch)
{
  static char status[256];
  static bool inited = false;
  
  if (!inited)
  {
    for (int i=0 ; i < SPECIAL_TOKEN_COUNT ; i++)
    {
      const char *token = get_special_token(i);
      
      int tlen = strlen(token);

      for (int j=0 ; j < tlen ; j++)
      {
        char ch = token[j];
        
        if (isalnum(ch) || status[ch] == 2)
          continue;

        status[ch] = tlen == 1 ? 1 : 2;
      }
    }
    
    // These are not flow breakers because they can appear in symbols
    status[':'] = 2;
    status['_'] = 2;

    inited = true;
  }
    
  return status[ch];
}

bool is_valid_symbol_char(char ch)
{
  return char_status(ch) != 0;
}

bool is_flow_breaker(char ch)
{
  return char_status(ch) == 1;
}

bool is_valid_char(char ch)
{
  return ch == ' ' || ch == '\n' || isalnum(ch) || is_valid_symbol_char(ch);
}

//////////////////////////////////////////////////////////////////////////////

bool is_valid_operator(const string &str)
{
  for (unsigned int i=0 ; i < str.length() ; i++)
    if (!is_valid_symbol_char(str[i]))
      return false;

  for (int i=0 ; i < lengthof(fixed_tokens) ; i++)
    if (str == fixed_tokens[i])
      return true;

  return false;
}

bool is_valid_operator_as_function(const string &str)
{
  if (str.length() < 4 || str.length() > 5)
    return false;
  
  if (str.substr(0, 3) != "op_")
    return false;

  for (int i=0 ; i < lengthof(operators_as_functions) ; i++)
    if (str == operators_as_functions[i])
      return true;

  return false;
}

bool is_valid_identifier(const string &s)
{
  int len = s.length();

  if (len == 0 || !islower(s[0]) || s[len-1] == '_')
    return false;
  
  for (int i=1 ; i < len ; i++)
  {
    char ch = s[i];
    
    if (!(islower(ch) || isdigit(ch) || ch == '_'))
      return false;
    
    if (ch == '_' && s[i-1] == '_')
      return false;
  }

  return true;
}

bool is_valid_symbol(const string &s)
{
  return s.length() > 1 && s[0] == ':' && is_valid_identifier(s.substr(1));
}

bool is_valid_label(const string &str)
{
  int len = str.length();

  if (len <= 1 || str[len-1] != ':')
    return false;
  
  string s = str.substr(0, len-1);

  return is_valid_identifier(s);
}

bool is_valid_number(const string &str)
{
  assert(str.length() > 0);

  int len = str.length();

  for (int i=0 ; i < len ; i++)
    if (!isdigit(str[i]))
      return false;

  return true;
}

bool is_valid_type_name(const string &s)
{
  int len = s.length();
  
  if (len < 2 || !isupper(s[0]))
    return false;
  
  bool lower_found = false;
  for (int i=1 ; i < len ; i++)
  {
    char ch = s[i];
    
    if (islower(ch))
      lower_found = true;

    if (!( islower(ch) || isupper(ch) || isdigit(ch)))
      return false;
  }
  
  return lower_found;
}

bool is_valid_type_var(const string &s)
{
  int len = s.length();
  
  if (len == 0 || !isupper(s[0]))
    return false;
  
  for (int i=1 ; i < len ; i++)
  {
    char ch = s[i];

    if (!(isupper(ch) || isdigit(ch)))
      return false;
  }
  
  return true;
}

bool is_valid_builtin(const string &str)
{
	if (str == "_add_")
		return true;

	if (str == "_neg_")
		return true;

	if (str == "_load_")
		return true;

	if (str == "_file_")
		return true;

	if (str == "_ticks_")
		return true;

	//if (str == "_ordered_")
	//	return true;

	if (str == "_counter_")
		return true;

	if (str == "_str_")
		return true;

	if (str == "_symb_")
		return true;

	if (str == "_write_")
		return true;
  
	if (str == "_append_")
		return true;
  
	if (str == "_at_")
		return true;
  
	if (str == "_len_")
		return true;
  
	if (str == "_slice_")
		return true;
  
	if (str == "_cat_")
		return true;
  
	if (str == "_rev_")
		return true;
  
	if (str == "_set_")
		return true;
  
	if (str == "_mset_")
		return true;
  
  if (str == "_isort_")
    return true;

  if (str == "_list_to_seq_")
    return true;

  if (str == "_rand_nat_")
    return true;

  if (str == "_rand_elem_")
    return true;

  if (str == "_tag_")
    return true;

  if (str == "_obj_")
    return true;

  if (str == "_in_")
    return true;

  if (str == "_has_key_")
    return true;

  if (str == "_lookup_")
    return true;

  if (str == "_union_")
    return true;

  if (str == "_merge_")
    return true;

	return false;
}

bool is_valid_string_lit(const string &str)
{
  int l = str.length();
  
  if (l < 2)
    return false;

  if (str[0] != '"' || str[l-1] != '"')
    return false;
  
  for (int i=1 ; i < l-1 ; i++)
    if (str[i] == '\\')
    {
      if (!(++i < l-1))
        return false;
      
      char ch = str[i];
      
      if (ch != 'n' && ch != '"' && ch != '\\')
        return false;
    }
  
  return true;
}


TokenType token_type(const string &str)
{
  if (is_valid_operator(str))
    return operator_symbol;

  if (is_valid_operator_as_function(str))
    return op_function;

  if (is_valid_identifier(str))
    return plain_identifier;

  if (is_valid_symbol(str))
    return symbol;

  if (is_valid_label(str))
    return label;

  if (is_valid_number(str))
    return number;

  if (is_valid_type_name(str))
    return type_id;

  if (is_valid_type_var(str))
    return type_var;

  if (is_valid_builtin(str))
    return builtin;

  if (is_valid_string_lit(str))
    return string_lit;
    
  return invalid;
}

string get_stripped_symbol(string &str)
{
  TokenType tt = token_type(str);

  if (tt == symbol)
    return str.substr(1, str.length()-1);
  
  if (tt == label)
    return str.substr(0, str.length()-1);
  
  if (tt == plain_identifier || tt == op_function)
    return str;

  halt;
}

//////////////////////////////////////////////////////////////////////////////

bool try_to_recognize_tokens(const string &str, string_v &tokens)
{
  int len = str.length();

  if (len == 0)
    return true;

  for (int l = len ; l > 0 ; l--)
  {
    string s = str.substr(0, l);
    
    if (token_type(s) != invalid)
    {
      tokens.push_back(s);

      if (try_to_recognize_tokens(str.substr(l, len-l), tokens))
        return true;

      tokens.pop_back();
      return false;
    }
  }

  return false;
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


Token::Token(const string &s, int sline, int scol, const char *fname) : str(s)
{
  start_line = sline;
  start_col = scol;
	filename = fname;
}

TokenType Token::token_type()
{
  return ::token_type(str);
}

//////////////////////////////////////////////////////////////////////////////

Lexer::Lexer()
{
  start_line = 0;
  start_col = 0;
}

void Lexer::consume_line(string str, const char *file, int line)
{
  int len = str.length();
  while (len > 0 && isspace(str[len-1]))
    len--;

  bool is_string = false;
  string curr_block;
  
  for (int i=0 ; i < len ; i++)
  {
    char ch = str[i];
    
    assert(ch != '\r' && ch != '\n');
    
		//!!  This is wrong, because a tab replaces several spaces.
		//!!		from here on, columns numbers are likely to be wrong
		//## TABS IN STRINGS SHOULD NOT BE ALLOWED
		if (ch == '\t')
			ch = ' ';

    if (is_string)
    {
      if (ch == '"')
      {
        tokens.push_back(Token(curr_block + ch, line, i-curr_block.length(), file));
        curr_block = "";
        is_string = false;
      }
      else
      {
        curr_block += ch;
        if (ch == '\\')
        {
          if (++i >= len)
            break;
          ch = str[i];
          if (ch == 'n' || ch == '"' || ch == '\\')
            curr_block += ch;
          else
            on_invalid_char(ch, file, line, i); // Input error in string
        }
      }
    }
    else
    {
      if (ch == '/' && i+1 < len && str[i+1] == '/')
      {
        len = i;
        break;
      }
      
      if (ch == '"')
      {
        if (curr_block != "")
        {
          consume_token_block(curr_block, i-curr_block.length(), file, line);
          curr_block = "";
        }
        is_string = true;
        curr_block += ch;      
      }
      else
      {
        if (!is_valid_char(ch))
          on_invalid_char(ch, file, line, i); // Input error outside string
          
        curr_block += ch;
      }
    }
  }
  
  if (is_string)
    on_error("Non-terminated string", file, line, len);
  
  if (curr_block != "")
    consume_token_block(curr_block, len-curr_block.length(), file, line);
}

void Lexer::consume_token_block(string str, int start_idx, const char *file, int line)
{
  int len = str.length();

  for (int i=0 ; i < len ; i++)
    consume_input(str[i], file, line, start_idx++);

  consume_input(' ', file, line, start_idx);
}

void Lexer::consume_input(char ch, const char *file, int line, int col)
{
  if (isspace(ch) || is_flow_breaker(ch))
  {
    if (curr_token.length() > 0)
    {
      string_v ts;
      if (!try_to_recognize_tokens(curr_token, ts))
        on_error("Invalid token: \"" + curr_token + "\"", file, start_line, start_col);

      int col = start_col;
      for (unsigned int i=0 ; i < ts.size() ; i++)
      {
        tokens.push_back(Token(ts[i], start_line, start_col, file));
        start_col += ts[i].length();
      }

      curr_token = "";
      start_line = 0;
      start_col = 0;
    }

    if (is_flow_breaker(ch))
      tokens.push_back(Token(string(1, ch), line, col, file));

    return;
  }

  if (curr_token == "")
  {
    start_line = line;
    start_col = col;
  }

  curr_token += ch;
}

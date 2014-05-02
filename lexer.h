#ifndef _LEXER_ZH_
#define _LEXER_ZH_


enum TokenType {
  invalid,
  operator_symbol,
  plain_identifier,
  op_function,
  //non_alnum_symbol,
  symbol,
  label,
  number,
  string_lit,
  type_id,
  type_var,
  builtin
};

TokenType token_type(const string &str);
string get_stripped_symbol(string &str);


class Token : public Obj
{
public:
  Token(const string &s, int sline, int scol, const char *fname);

  TokenType token_type();

  string str;
  int start_line;
  int start_col;
	const char *filename;
};

typedef ref<Token> token;


class Lexer
{
  string curr_token;
  int start_line;
  int start_col;

public:
  vector<Token> tokens;

public:
  Lexer();

  void consume_line(string str, const char *file, int line);

private:
  void consume_token_block(string str, int start_idx, const char *file, int line);
  void consume_input(char ch, const char *file, int line, int col);
};


#endif

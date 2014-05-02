#ifndef _SYMBOL_ZH_
#define _SYMBOL_ZH_


class Symbol
{
public:
  Symbol();
  Symbol(const Symbol &s);
  Symbol(const string &name);

  bool operator == (const Symbol &) const;
  bool operator != (const Symbol &) const;    //!! There must be a better way...
  bool operator <  (const Symbol &) const;

  int index() const;
  const string &to_string() const;
  
  bool is_nil() const;

public:
  static Symbol nil();
  static Symbol empty_seq();
  static Symbol seq();
  static Symbol seq_head();
  static Symbol seq_tail();
  static Symbol empty_map();
  static Symbol map();
  static Symbol symb_true();
  static Symbol symb_false();

	static Symbol get_symbol_by_index(int idx);

private:
  static Symbol make(const string &name);
  static void init(Symbol &s, const string &name);

private:
  int idx;
  //string name;

private:
  static vector<string>     symbol_table;
  static ::map<string, int> lookup_table;
};



class PlainId
{
public:
  PlainId();
  PlainId(const PlainId &s);
  PlainId(const string &name);

  bool operator == (const PlainId &) const;
  bool operator != (const PlainId &) const;

  int index() const;
  const string &to_string() const;
  
  bool is_null() const;
  //bool is_initialized();

public:
	static PlainId get_id_by_index(int idx);

  static PlainId idx_fn();
  static PlainId mk_op(const string &op);
  static PlainId mk_fn_arg(int pos);

private:
  static PlainId make(const string &name);
  static void init(PlainId &s, const string &name);

private:
  int idx;
  string name;

private:
  static vector<string>   symbol_table;
  static map<string, int> lookup_table;
};

#endif

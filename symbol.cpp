#include "common.h"
#include "symbol.h"
#include "lexer.h"


string_v          Symbol::symbol_table;
map<string, int>  Symbol::lookup_table;


Symbol::Symbol()
{
  idx = -1;  
  //name = "INVALID ID!";
}

Symbol::Symbol(const Symbol &s)
{
  idx  = s.idx;
  //name = s.name;
}

Symbol::Symbol(const string &name)
{
  assert(token_type(name) == plain_identifier);// || token_type(name) == non_alnum_symbol);
  
  init(*this, name);
}

bool Symbol::operator == (const Symbol& s) const
{
  assert(idx != -1 && s.idx != -1);

  return idx == s.idx;
}

bool Symbol::operator != (const Symbol& s) const
{
  assert(idx != -1 && s.idx != -1);

  return idx != s.idx;
}

bool Symbol::operator < (const Symbol& s) const
{
  assert(idx != -1 && s.idx != -1);

  return symbol_table[idx] < symbol_table[s.idx];
}

int Symbol::index() const
{
  assert(idx != -1);

  return idx;
}

const string &Symbol::to_string() const
{
  assert(idx != -1);

  return symbol_table[idx];
}

bool Symbol::is_nil() const
{
  assert(idx != -1);

  return symbol_table[idx].length() == 0;
}

Symbol Symbol::nil()
{
  return make("");
}

Symbol Symbol::empty_seq()
{
  return make("empty_seq");
}

Symbol Symbol::seq()
{
  return make("seq");
}

Symbol Symbol::seq_head()
{
  return make("head");
}

Symbol Symbol::seq_tail()
{
  return make("tail");
}

Symbol Symbol::empty_map()
{
  return make("empty_map");
}

Symbol Symbol::map()
{
  return make("map");
}

Symbol Symbol::symb_true()
{
  return make("true");
}

Symbol Symbol::symb_false()
{
  return make("false");
}

Symbol Symbol::get_symbol_by_index(int idx)
{
  assert(idx < int(symbol_table.size()));
  
  Symbol s;
  s.idx = idx;
  return s;
}

Symbol Symbol::make(const string &name)
{
  Symbol s;
  init(s, name);
  return s;
}

void Symbol::init(Symbol &s, const string &name)
{
  ::map<string, int>::iterator it = lookup_table.find(name);
  
  if (it == lookup_table.end())
  {
    symbol_table.push_back(name);
    it = lookup_table.insert(pair<string, int>(name, symbol_table.size()-1)).first;
  }
  
  s.idx = it->second;
  //s.name = symbol_table[s.idx];
  //assert(s.name == name);
}


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


vector<string>   PlainId::symbol_table;
map<string, int> PlainId::lookup_table;


PlainId::PlainId()
{
  idx = -1;
  name = "INVALID ID!";
}


PlainId::PlainId(const PlainId &s)
{
  idx = s.idx;
  name = s.name;
}

PlainId::PlainId(const string &name)
{
  assert(token_type(name) == plain_identifier || token_type(name) == op_function);
  
  init(*this, name);
}


bool PlainId::operator == (const PlainId &s) const
{
  //assert(idx != -1 && s.idx != -1);

  return idx == s.idx;
}

bool PlainId::operator != (const PlainId &s) const
{
  //assert(idx != -1 && s.idx != -1);

  return idx != s.idx;
}


int PlainId::index() const
{
  assert(idx != -1);
  
  return idx;
}

const string &PlainId::to_string() const
{
  assert(idx != -1);
  
  return symbol_table[idx];
}

bool PlainId::is_null() const
{
  return idx == -1;
}


PlainId PlainId::get_id_by_index(int idx)
{
  assert(idx < int(symbol_table.size()));
  
  PlainId s;
  s.idx = idx;
  return s;
}

PlainId PlainId::make(const string &name)
{
  PlainId s;
  init(s, name);
  return s;
}

void PlainId::init(PlainId &s, const string &name)
{
  map<string, int>::iterator it = lookup_table.find(name);
  
  if (it == lookup_table.end())
  {
    symbol_table.push_back(name);
    it = lookup_table.insert(pair<string, int>(name, symbol_table.size()-1)).first;
  }
  
  s.idx = it->second;
  s.name = symbol_table[s.idx];
  //assert(s.name == name);
}

PlainId PlainId::idx_fn()
{
  return make("op_[]");
}

PlainId PlainId::mk_op(const string &op)
{
  static string ops[] = {"+", "-", "*", "/", "&", "<", ">", "<=", ">=", "**"};
  
  assert(in_unsorted_array(op, ops, lengthof(ops)));
  
  return make("op_" + op);
}

PlainId PlainId::mk_fn_arg(int pos)
{
  return make("$" + ::to_string(pos));
}

#ifndef _TERM_ZH_
#define _TERM_ZH_

#include "symbol.h"


class Term;
class AmberObj;
typedef vector<Term> term_v;

class Type;


class Term
{
public:
  Term();
  Term(const Term &obj);
  Term(AmberObj *obj);

  bool is_null();

  Term& operator = (const Term &);

  bool operator == (Term &);
  bool operator != (Term &);    //!! There must be a better way...
  bool operator <  (Term &);

  bool is_int();
  bool is_symbol();
  bool is_seq();
  bool is_set();
  bool is_map();
  bool is_tagged_obj();

  int get_int();
  Symbol get_symbol();
  int size();
  Term &item(int idx);
  term_v &items();
  Term &get_key(int idx);
  Term &get_value(int idx);
  bool has_key(Term &key);
  Term &lookup(Term &key);
  Symbol get_tag();
  Term &untag();

  int compare(Term &other);
  int get_weight();
  
  bool is_non_neg_number();
  bool is_true();
  bool is_false();
  bool is_bool();
  bool is_empty_seq();
  bool is_empty_set();
  bool is_empty_map();
  bool is_tuple();
  bool is_string();

  string get_string();
  
  void print(ostream &os);
  void print_indented(ostream &os=cout);
  string to_string(bool always=false);

  int total_number_of_nodes();

private:
  gc_ref<AmberObj> obj;
};


class AmberObj
{
public:
  AmberObj(int weight);
  
  virtual bool is_int();
  virtual bool is_symbol();
  virtual bool is_seq();
  virtual bool is_set();
  virtual bool is_map();
  virtual bool is_tagged_obj();

  virtual bool is_tuple();

  virtual int get_int();
  virtual Symbol get_symbol();
  virtual int size();
  virtual Term &item(int idx);
  virtual term_v &items();
  virtual Term &get_key(int idx);
  virtual Term &get_value(int idx);
  virtual bool has_key(Term &key);
  virtual Term &lookup(Term &key);
  virtual Symbol get_tag();
  virtual Term &untag();

  int compare(AmberObj &other);
  int get_weight();
  
  virtual bool is_non_neg_number();
  virtual bool is_true();
  virtual bool is_false();
  virtual bool is_empty_seq();
  virtual bool is_empty_set();
  virtual bool is_empty_map();
  virtual bool is_string();

  string get_string();
  
  virtual void print(ostream &os) = 0;
  virtual int total_number_of_nodes() = 0;

protected:
  virtual int get_type_tag() = 0;
  virtual int compare_same_type(AmberObj &other) = 0;

protected:
  int weight;
};


class AmberInt : public AmberObj
{
public:
  AmberInt(int value);
  
  bool is_int();
  int get_int();

  void print(ostream &os);
  int total_number_of_nodes();

protected:
  int get_type_tag();
  int compare_same_type(AmberObj &other);

private:
  int value;
};


class AmberSymbol : public AmberObj
{
public:
  AmberSymbol(Symbol value);
  
  bool is_symbol();
  Symbol get_symbol();

  void print(ostream &os);
  int total_number_of_nodes();

protected:
  int get_type_tag();
  int compare_same_type(AmberObj &other);

private:
  Symbol value;
};


class AmberSeq : public AmberObj
{
public:
  AmberSeq(term_v &elems);
  
  bool is_seq();
  int size();
  Term &item(int idx);
  term_v &items();

  void print(ostream &os);
  int total_number_of_nodes();

protected:
  int get_type_tag();
  int compare_same_type(AmberObj &other);

private:
  term_v elems;
};


class AmberSet : public AmberObj
{
public:
  AmberSet(term_v &elems);
  
  bool is_set();
  int size();
  Term &item(int idx);
  term_v &items();

  void print(ostream &os);
  int total_number_of_nodes();

protected:
  int get_type_tag();
  int compare_same_type(AmberObj &other);

private:
  term_v elems;
};


class AmberMap : public AmberObj
{
public:
  AmberMap(term_v &keys, term_v &values);
  
  bool is_map();
  bool is_tuple();
  int size();
  Term &get_key(int idx);
  Term &get_value(int idx);
  bool has_key(Term &key);
  Term &lookup(Term &key);

  void print(ostream &os);
  int total_number_of_nodes();

protected:
  int get_type_tag();
  int compare_same_type(AmberObj &other);
  int lookup_idx(Term &key);

private:
  term_v keys;
  term_v values;
};


class AmberTaggedObj : public AmberObj
{
public:
  AmberTaggedObj(Symbol tag, Term &obj);
  
  bool is_tagged_obj();
  Symbol get_tag();
  Term &untag();

  void print(ostream &os);
  int total_number_of_nodes();

protected:
  int get_type_tag();
  int compare_same_type(AmberObj &other);

private:
  Symbol tag;
  Term obj;
};


void sort(term_v &terms, bool no_dups=true);

Term int_obj(int n);
Term symbol_obj(Symbol s);
Term seq_obj(term_v &elems);
Term set_obj(term_v &elems);
Term map_obj(term_v &keys, term_v &values);
Term tagged_obj(Symbol tag, Term &obj);

Term null_obj();
Term bool_obj(bool b);
Term str_obj(const string &str);
Term str_obj(const char *str);

Term symbol_obj(const char *str);

Term empty_seq_obj();
Term empty_set_obj();
Term empty_map_obj();

Term tagged_obj(string tag, Term &obj);
Term tagged_obj(const char *tag, Term &obj);

Term map_obj(const char *lab, Term obj);
Term map_obj(const char *lab1, Term obj1, const char *lab2, Term obj2);
Term map_obj(const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3);
     
Term tagged_map( const char *tag,
                 const char *label, Term obj
               );

Term tagged_map( const char *tag,
                 const char *label1, Term obj1,
                 const char *label2, Term obj2
               );

Term tagged_map( const char *tag,
                 const char *label1, Term obj1,
                 const char *label2, Term obj2,
                 const char *label3, Term obj3
               );

Term tagged_map( const char *tag,
                 const char *label1, Term obj1,
                 const char *label2, Term obj2,
                 const char *label3, Term obj3,
                 const char *label4, Term obj4
               );

Term tagged_map( const char *tag,
                 const char *label1, Term obj1,
                 const char *label2, Term obj2,
                 const char *label3, Term obj3,
                 const char *label4, Term obj4,
                 const char *label5, Term obj5
               );

#endif

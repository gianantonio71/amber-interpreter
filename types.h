#ifndef _TYPES_ZH_
#define _TYPES_ZH_

#include "term.h"


class Type;
class Pattern;
class Program;


typedef ref<Type> type;
typedef ref_v<Type> type_v;

typedef ref<Pattern>    pattern;
typedef ref_v<Pattern>  pattern_v;


class Type : public Obj
{
public:
	Type();

  virtual bool contains(Term &) = 0;

  virtual type clone_and_bind_params(string_v &formal, type_v &actual) = 0;

	int get_id();

	static int get_max_type_id_plus_one();

private:
	int id;
	static int next_id;
};


class Enum : public Type
{
public:
  Enum(Symbol s);
  Enum(string s);
  Enum(vector<Symbol> &ss);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  vector<Symbol> symbols;
};


class IntType : public Type
{
public:
  IntType();
  IntType(int min, int max);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  int min, max;
};

///////////////////////////////////////////////////////////////////////////

class SeqType : public Type
{
public:
  SeqType();
  SeqType(type elem_type, bool nonempty=false);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  type elem_type;
  bool nonempty;
};


class FixedSeqType : public Type
{
public:
  FixedSeqType(type_v &elem_types);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  type_v elem_types;
};


class EmptySeqType : public Type
{
public:
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);
};


class SetType : public Type
{
public:
  SetType();
  SetType(type elem_type, bool nonempty=false);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  type elem_type;
  bool nonempty;
};


class EmptySetType : public Type
{
public:
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);
};


class MapType : public Type
{
public:
  MapType(type key_type, type value_type);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  type key_type;
  type value_type;
};


class EmptyMapType : public Type
{
public:
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);
};


class TupleType : public Type
{
public:
  TupleType(vector<Symbol> &keys, type_v &types, vector<bool> &optional);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  vector<Symbol> keys;
  type_v types;
  vector<bool> optional;
  int min_size;
};


class TagType : public Type
{
public:
  TagType(Symbol tag, type obj_type);
  TagType(type tag_type, type obj_type);

  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  type tag_type;
  type obj_type;
};

class UnionType : public Type
{
public:
  UnionType();
  UnionType(type_v &types);
  
  void add(type &type);

  bool contains(Term &t);

  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  type_v types;
};

class TypeRef : public Type
{
public:
  TypeRef(string &type_name);

  bool contains(Term &t);

  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  string  type_name;
  type    real_type;
};

class ParTypeRef : public Type
{
public:
  ParTypeRef(string &type_name, type_v &params);

  bool contains(Term &t);

  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  string  type_name;
  type_v  params;
  type    real_type;
};

class PseudoTypeAny : public Type
{
public:
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);
};

class SymbolType : public Type
{
public:
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);
};

class TypeVar : public Type
{
public:
  TypeVar(string &name);
  
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  string name;
};

class PtrnType : public Type
{
public:
  PtrnType(pattern ptrn);
  
  bool contains(Term &t);
  type clone_and_bind_params(string_v &formal, type_v &actual);

private:
  pattern pattern_;
};


#endif

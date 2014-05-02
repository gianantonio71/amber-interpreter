#ifndef _PATTERN_ZH_
#define _PATTERN_ZH_

#include "expression.h"
#include "types.h"



typedef ref<Pattern>    pattern;
typedef ref_v<Pattern>  pattern_v;

class Pattern : public Obj
{
public:
	virtual pattern bind_known_vars(Env &env) = 0;
	virtual bool is_fully_bound() = 0;
	
  //bool matches(Term &t, Env &in_env, Env &delta_env);
  virtual bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set) = 0;
};


class TypePtrn : public Pattern
{
public:
  TypePtrn(type _type);
  
	pattern bind_known_vars(Env &env);
	bool is_fully_bound();
	
  bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set);

private:
  type _type;
};


class ObjPtrn : public Pattern
{
public:
  ObjPtrn(Term obj);
  
	pattern bind_known_vars(Env &env);
	bool is_fully_bound();
	
  bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set);

private:
  Term obj;
};


class VarPtrn : public Pattern
{
public:
  VarPtrn(PlainId var, pattern ptrn);
  
	pattern bind_known_vars(Env &env);
	bool is_fully_bound();
	
  bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set);

private:
  PlainId var;
  pattern ptrn;
};


class ExtrVarPtrn : public Pattern
{
public:
  ExtrVarPtrn(PlainId var);
  
	pattern bind_known_vars(Env &env);
	bool is_fully_bound();
	
  bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set);

private:
  PlainId var;
};


class TagPtrn : public Pattern
{
public:
  TagPtrn(pattern tag_ptrn, pattern obj_ptrn);
  
	pattern bind_known_vars(Env &env);
	bool is_fully_bound();
	
  bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set);

private:
  pattern tag_ptrn;
  pattern obj_ptrn;
};


class TuplePtrn : public Pattern
{
public:
  TuplePtrn(vector<Symbol> &labels, pattern_v &patterns, bool is_open);
  
	pattern bind_known_vars(Env &env);
	bool is_fully_bound();
	
  bool matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set);

private:
  vector<Symbol> &labels;
  pattern_v patterns;
  bool is_open;
};


#endif


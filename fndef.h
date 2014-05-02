#ifndef _RULES_ZH_
#define _RULES_ZH_


#include "expression.h"
#include "pattern.h"


typedef ref<FnDef>    fn_def;
typedef ref_v<FnDef>  fn_def_v;


class FnDef : public Obj
{
public:
  virtual PlainId name() = 0;
  virtual int arity() = 0;

  Term evaluate_if_args_match(term_v &actual_args, LocalDefs &lds);
  Term evaluate(term_v &actual_args, LocalDefs &lds, Env &in_env);

//protected:
  virtual Term evaluate_if_args_match(term_v &actual_args, LocalDefs &lds, Env &in_env) = 0;
  
  friend class Closure;
};


class FnArg : public Obj
{
public:
  FnArg()                        : type_(new PseudoTypeAny)                {}
  FnArg(PlainId var)             : type_(new PseudoTypeAny), var(var)      {}
  FnArg(type type_)              : type_(type_),            var(PlainId()) {}
  FnArg(type type_, PlainId var) : type_(type_),            var(var)       {}
  
  type type_;
  PlainId var;
};


class StdFnDef : public FnDef
{
public:
  StdFnDef(PlainId fn_name, Expr res_expr, type ret_type);
  StdFnDef(PlainId fn_name, vector<FnArg> &args, Expr res_expr, type ret_type);
  StdFnDef(PlainId fn_name, vector<FnArg> &args, Expr res_expr, type ret_type, fn_def_v &local_fns);
  
  PlainId name();
  int arity();

//protected:
  virtual Term evaluate_if_args_match(term_v &actual_args, LocalDefs &ie, Env &in_env);

private:
  PlainId       fn_name;
  vector<FnArg> args;
  Expr          res_expr;
  type          ret_type;
  fn_def_v      local_fns;
};


class Closure : public FnDef
{
public:
  Closure(fn_def basic_fn, ref<Env> ext_env);

  PlainId name();
  int arity();

//protected:
  Term evaluate_if_args_match(term_v &actual_args, LocalDefs &lds, Env &in_env);
  
private:
  fn_def   basic_fn;
  ref<Env> ext_env;
};

#endif
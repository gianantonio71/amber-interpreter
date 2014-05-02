#ifndef _DECLS_ZH_
#define _DECLS_ZH_

#include "types.h"
#include "fndef.h"



class Typedef : public Obj
{
public:
  Typedef(string &type_name, type &type_);

public:
  string type_name;
  type   type_;
};


class ParTypedef : public Obj
{
public:
  ParTypedef(string &type_name, string_v &params, type &type_);

  type instantiate(type_v &params);

public:
  string    type_name;
  string_v  params;
  type      type_;

  struct Instance
  {
    type_v actual_params;
    ::type   type_;
  };

  vector<Instance> instances;
};

//class Signature
//{
//public:
//  Signature(type_v &par_types, type res_type);
//
//public:
//  type  in_type;
//  type  out_type;
//};


class TestInstr : public Obj
{
public:
  virtual int run(Env &env, LocalDefs &ienv) = 0;
};


class BoolTest : public TestInstr
{
public:
  BoolTest(Expr &expr);

  int run(Env &env, LocalDefs &ienv);

private:
  Expr expr;
};

class MembTest : public TestInstr
{
public:
  MembTest(Expr &expr, type &type_);

  int run(Env &env, LocalDefs &ienv);

private:
  Expr expr;
  type type_;
};

class PrintStmt : public TestInstr
{
public:
  PrintStmt(Expr &expr);

  int run(Env &env, LocalDefs &ienv);

private:
  Expr expr;
};

class ForStmtTest : public TestInstr
{
public:
  ForStmtTest(PlainId var, Expr src_expr, ref_v<TestInstr> &instrs);

  int run(Env &env, LocalDefs &ienv);

private:
  PlainId var;
  Expr src_expr;
  ref_v<TestInstr> instrs;
};

class AsgnTest : public TestInstr
{
public:
  AsgnTest(PlainId var, Expr expr);

  int run(Env &env, LocalDefs &ienv);

private:
  PlainId var;
  Expr expr;
};


class TestBlock : public Obj
{
public:
	TestBlock(bool enabled);
	
  void add_instr(ref<TestInstr> instr);
  
  int run(Env &env, LocalDefs &ienv);

private:
	bool enabled;
	ref_v<TestInstr> instrs;
};




class Program
{
public:
  Program();
  
  void add(ref<Typedef>    td  );
  void add(ref<ParTypedef> ptd );
  void add(fn_def          fnd );
  void add(ref<TestBlock>  tb  );

  void enable_tracing();
  
  void freeze();
  void finish();

  type get_type(string &name);
  type get_type(string &name, type_v &params);

  fn_def_v &get_candidate_fns(PlainId fn_name, int arity);
  
  void run_tests();

  void push_call(PlainId fn_name, term_v &params);
  void pop_call();

  void print_stack();

public:
	static Program &get_singleton();

private:
  int hash(PlainId fn_name, int arity);  

private:
  ref_v<Typedef>    typedefs;
  ref_v<ParTypedef> par_typedefs;
  fn_def_v          fndefs;
  ref_v<TestBlock>  test_blocks;

  map<int, fn_def_v> fndefs_lookup_table;
  
  class StackEntry
  {
  public:
    StackEntry(PlainId fn_name, term_v &params)
    : fn_name(fn_name), params(params) { }
    
    PlainId fn_name;
    term_v params;
  };
  
  vector<StackEntry> stack;

  bool tracing_enabled;
  
  static Program singleton;
};

#endif

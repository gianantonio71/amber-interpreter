#include "common.h"
#include "lexer.h"
#include "expression.h"
#include "scexpr.h"
#include "statements.h"
#include "decls.h"
#include "parser.h"


class Elif : public Obj
{
public:
  Elif(Expr cond, statement statement) : cond(cond), statement_(statement) { }
  
  Expr cond;
  statement statement_;
};

class IfBranch : public Obj
{
public:
  IfBranch(Expr cond, Expr value) : cond(cond), value(value) {}

  Expr cond;
  Expr value;
};

class TryBranch : public Obj
{
public:
  TryBranch(pattern_v &ps, Expr value) : patterns(ps), value(value) {}
  
  pattern_v patterns;
  Expr value;
};

class ForIter : public Obj
{
public:
  ForIter(PlainId var, PlainId idx_var, Expr src) : var(var), idx_var(idx_var), src(src) {}
  ForIter(PlainId var, Expr start, Expr end) : var(var), start(start), end(end) {}
  
  PlainId var;
  PlainId idx_var;
  Expr src;
  Expr start;
  Expr end;
};

class LabType : public Obj
{
public:
  LabType(Symbol lab, type type, bool optional) : lab(lab), type_(type), optional(optional) {}
  
  Symbol lab;
  type type_;
  bool optional;
};

class LabPtrn : public Obj
{
public:
  LabPtrn(Symbol lab, pattern ptrn) : lab(lab), ptrn(ptrn) {}
  
  Symbol lab;
  pattern ptrn;
};

class LabExpr : public Obj
{
public:
  LabExpr(Symbol lab, Expr expr) : lab(lab), expr(expr) {}
  
  Symbol lab;
  Expr expr;
};

class MapEntry : public Obj
{
public:
  MapEntry(Expr key, Expr value) : key(key), value(value) {}
  
  Expr key;
  Expr value;
};

////////////////////////////////////////////////////////////////////////////////

template <typename T> ref_v<T> unboxv(obj);

class ObjList : public Obj
{
public:
  ObjList()
  {
  
  }

  ObjList(obj obj)
  {
    objs.push_back(obj);  
  }
  
  ObjList(obj head_seq, obj tail)
  {
    objs = unboxv<Obj>(head_seq);
    objs.push_back(tail);
  }
  
  int length()
  {
    return objs.size();
  }
  
  obj get(int idx)
  {
    assert(idx >= 0 && idx < int(objs.size()));
    
    return objs[idx];
  }

private:
  ref_v<Obj> objs;
};

////////////////////////////////////////////////////////////////////////////////

template <typename T> ref<T> unbox(obj obj)
{
  assert(has_type<T>(obj));
  return downcast<T>(obj);
}

template <typename T> ref_v<T> unboxv(obj obj)
{
  ref<ObjList> ol = unbox<ObjList>(obj);
  
  ref_v<T> res(ol->length());
  for (unsigned int i=0 ; i < res.size() ; i++)
  {
    assert(has_type<T>(ol->get(i)));
    res[i] = downcast<T>(ol->get(i));
  }
  
  return res;
}

int to_int(obj obj)
{
  const char *str = unbox<Token>(obj)->str.c_str();
  int n = strlen(str);
  assert(n > (str[0] == '-' ? 1 : 0));
  assert(isdigit(str[0]) || str[0] == '-');
  for (int i=1 ; i < n ; i++)
    assert(isdigit(str[i]));
  return atoi(str);
}

obj null()
{
  return obj();
}

obj mk_seq(obj first_element)
{
  return obj(new ObjList(first_element));
}

obj mk_seq(obj seq, obj tail_element)
{
  return obj(new ObjList(seq, tail_element));
}

obj mk_seq_empty()
{
  return obj(new ObjList());
}

//obj mk_prod_type(Symbol top_symbol, obj subpretypes)
//{
//  ProdType *pt = new ProdType(top_symbol);
//  
//  ref_v<TypeBranch> bs = unboxv<TypeBranch>(subpretypes);
//  for (unsigned int i=0 ; i < bs.size() ; i++)
//    pt->add_branch(bs[i]->type, bs[i]->card);
//    
//  return obj(pt);
//}

string get_string(obj obj)
{
  return unbox<Token>(obj)->str;
}

string_v get_strings(obj obj)
{
  ref_v<Token> ts = unboxv<Token>(obj);
  
  string_v res(ts.size());
  for (unsigned int i=0 ; i < res.size() ; i++)
    res[i] = ts[i]->str;
  
  return res;
}

Symbol mk_ctor(obj symb)
{
  if (symb.is_null())
    return Symbol::nil();
  token t = unbox<Token>(symb);
  string str = get_stripped_symbol(t->str);
  return Symbol(str);
}

PlainId mk_plain_id(obj symb)
{
  token t = unbox<Token>(symb);
  string str = get_stripped_symbol(t->str);
  return PlainId(str);
}

PlainId mk_op(obj op)
{
  token t = unbox<Token>(op);
  string str = t->str;
  return PlainId::mk_op(str);
}

obj box(Term t)
{
  return obj(new HolderObj<Term>(t));
}
 
obj box(Expr e)
{
  return obj(new HolderObj<Expr>(e));
}

Expr to_expr(obj obj)
{
  ref<HolderObj<Expr> > h = unbox<HolderObj<Expr> >(obj);
  return h->obj;
}

//to_exprv(obj) = [be.obj : be <- obj];

expr_v to_exprv(obj obj)
{
  ref_v<HolderObj<Expr> > boxed_exprs = unboxv<HolderObj<Expr> >(obj);
  
  expr_v res(boxed_exprs.size());
  for (unsigned int i=0 ; i < res.size() ; i++)
    res[i] = boxed_exprs[i]->obj;
  
  return res;
}

//Expr mk_expr_char(char ch)
//{
//  return term_expr(Symbol("char"), num_expr(ch));
//}

//Expr mk_expr_seq(expr_v &exprs, Expr tail)
//{
//  Expr curr_expr = tail;
//  
//  for (int i=exprs.size()-1 ; i >= 0 ; i--)
//    curr_expr = term_expr(
//                  Symbol::seq(),
//                  mk_v(
//                    term_expr(Symbol::seq_head(), exprs[i]),
//                    term_expr(Symbol::seq_tail(), curr_expr)
//                  )
//                );
//  
//  return curr_expr;
//}

Expr mk_expr_try(expr_v matched_exprs, ref_v<TryBranch> &branches)
{
  vector<pattern_v>  ptrnss(branches.size());
  expr_v            res_exprs(branches.size());
  
  for (unsigned int i=0 ; i < branches.size() ; i++)
  {
    ptrnss[i] = branches[i]->patterns;
    res_exprs[i] = branches[i]->value;
  }
  
  return try_expr(matched_exprs, ptrnss, res_exprs);
}

ref<SCClause> and_merge(ref_v<SCClause> &cls)
{
  int n = cls.size();
  
  if (n == 1)
    return cls[0];
 
  ref<SCClause> cl = cls[n-1];
  for (int i=n-2 ; i >= 0 ; i--)
    cl = ref<SCClause>(new AndClause(cls[i], cl));

  return cl;
}

Expr and_merge(expr_v &exprs)
{
  int n = exprs.size();
  
  if (n == 1)
    return exprs[0];
  
  Expr res = exprs[n-1];
  for (int i=n-2 ; i >= 0 ; i--)
    res = and_expr(exprs[i], res);
  
  return res;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void consume_decl(obj declaration)
{
  if (declaration.is_null())
    return;

  if (has_type<FnDef>(declaration))
  {
    Program::get_singleton().add(unbox<FnDef>(declaration));
  }
  else if (has_type<Typedef>(declaration))
  {
    Program::get_singleton().add(unbox<Typedef>(declaration));
  }
  else if (has_type<ParTypedef>(declaration))
  {
    Program::get_singleton().add(unbox<ParTypedef>(declaration));
  }
  else if (has_type<TestBlock>(declaration))
  {
    Program::get_singleton().add(unbox<TestBlock>(declaration));
  }
  else
  {
    fn_def_v fndefs = unboxv<FnDef>(declaration);
    for (unsigned int i=0 ; i < fndefs.size() ; i++)
      Program::get_singleton().add(fndefs[i]);    
  }
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

obj mk_subtype_decl(obj subtype, obj supertype)
{
  return null();
}

obj mk_test_block(bool enabled, obj instructions)
{
	TestBlock *tb = new TestBlock(enabled);
	
	ref_v<TestInstr> instrs = unboxv<TestInstr>(instructions);
	
	for (unsigned int i=0 ; i < instrs.size() ; i++)
    tb->add_instr(instrs[i]);
  
  return obj(tb);
}


obj mk_test_instr_bool(obj expr)
{
  Expr e = to_expr(expr);
  return obj(new BoolTest(e));
}

obj mk_test_instr_print(obj expr)
{
  Expr e = to_expr(expr);
  return obj(new PrintStmt(e));
}

obj mk_test_instr_loop(obj iterators, obj instructions)
{
  ref_v<ForIter>   iters  = unboxv<ForIter>(iterators);
  ref_v<TestInstr> instrs = unboxv<TestInstr>(instructions);

  ref<ForIter> iter = iters[0];
  
  assert(iters.size() == 1);
  assert(iter->idx_var == PlainId());
  
  return obj(new ForStmtTest(iter->var, iter->src, instrs));
}

obj mk_test_instr_assignment(obj var, obj expr)
{
  return obj(new AsgnTest(mk_plain_id(var), to_expr(expr)));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

obj mk_using_block(obj signatures, obj fndefs)
{
  return fndefs;
}

obj mk_using_block(obj type_params, obj signatures, obj fndefs)
{
  return fndefs;
}


obj mk_signature(obj const_name, obj ret_type)
{
  return obj(new Obj);
}

obj mk_signature(obj fn_name, obj par_types, obj ret_type)
{
  return obj(new Obj);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//obj mk_typedef_any(obj name)
//{
//  halt;
//}
//
//obj mk_typedef_symb(obj name)
//{
//  halt;
//}

type merge_pretypes(obj pretypes)
{
  type_v types = unboxv<Type>(pretypes);
  
  type type;
  if (types.size() == 1)
    type = types[0];
  else
    type = ::type(new UnionType(types));
    
  return type;
}

obj mk_typedef(obj name, obj pretypes)
{
  type t = merge_pretypes(pretypes);
  string n = get_string(name);
  return obj(new Typedef(n, t));
}

obj mk_typedef_par(obj name, obj vars, obj pretypes)
{
  string n = get_string(name);
  string_v vs = get_strings(vars);
  type t = merge_pretypes(pretypes);

  return obj(new ParTypedef(n, vs, t));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

vector<FnArg> to_fn_args(obj fn_args)
{
  ref_v<FnArg> args = unboxv<FnArg>(fn_args);
  vector<FnArg> res(args.size());
  for (unsigned int i=0 ; i < args.size() ; i++)
    res[i] = *args[i];
  return res;
}

obj mk_fndef(obj ret_type, obj fn_name, obj expr)
{
  if (ret_type.is_null())
    ret_type = mk_type_any();
    
  return obj(new StdFnDef(mk_plain_id(fn_name), to_expr(expr), unbox<Type>(ret_type)));
}

obj mk_fndef(obj ret_type, obj fn_name, obj fn_args, obj expr)
{
  if (ret_type.is_null())
    ret_type = mk_type_any();

  vector<FnArg> args = to_fn_args(fn_args);
    
  return obj(
    new StdFnDef(
      mk_plain_id(fn_name),
      args,
      to_expr(expr),
      unbox<Type>(ret_type)
    )
  );
}

obj mk_fndef_switch(obj ret_type, obj fn_name, obj fn_args, obj branches)
{
  if (ret_type.is_null())
    ret_type = mk_type_any();
    
  ref_v<FnArg> args = unboxv<FnArg>(fn_args);
  ref_v<TryBranch> bs = unboxv<TryBranch>(branches);
  
  int argc = bs[0]->patterns.size();
  expr_v arg_exprs(argc);
  for (int i=0 ; i < argc ; i++)
    arg_exprs[i] = const_or_var_expr(PlainId::mk_fn_arg(i));
  
  vector<FnArg> args_ = to_fn_args(fn_args);
  return obj(
    new StdFnDef(
      mk_plain_id(fn_name),
      args_,
      mk_expr_try(arg_exprs, bs),
      unbox<Type>(ret_type)
    )
  );
}

obj mk_fndef_switch(obj ret_type, obj fn_name, obj fn_args, obj branches, obj local_fns)
{
  halt;
}

obj mk_fndef_proc(obj ret_type, obj fn_name, obj fn_args, obj statements)
{
  if (ret_type.is_null())
    ret_type = mk_type_any();
  
  statement_v stmts = unboxv<Statement>(statements);
  statement body(new StmtSeq(stmts));
  
  vector<FnArg> args = to_fn_args(fn_args);
  return obj(
    new StdFnDef(
      mk_plain_id(fn_name),
      args,
      proc_expr(body),
      unbox<Type>(ret_type)
    )
  );
}

obj mk_fndef_proc(obj ret_type, obj fn_name, obj fn_args, obj statements, obj local_fns)
{
  if (ret_type.is_null())
    ret_type = mk_type_any();
    
  statement_v stmts = unboxv<Statement>(statements);
  statement body = statement(new StmtSeq(stmts));
  fn_def_v lfns = unboxv<FnDef>(local_fns);
  
  vector<FnArg> args = to_fn_args(fn_args);
  return obj(
    new StdFnDef(
      mk_plain_id(fn_name),
      args,
      proc_expr(body),
      unbox<Type>(ret_type),
      lfns
    )
  );
}


obj mk_fnarg(obj type, obj var)
{
  if (!type.is_null() && !var.is_null())
    return obj(new FnArg(unbox<Type>(type), mk_plain_id(var)));
  
  if (!type.is_null())
    return obj(new FnArg(unbox<Type>(type)));
  
  if (!var.is_null())
    return obj(new FnArg(mk_plain_id(var)));
  
  return obj(new FnArg());  
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

obj mk_stmt_assignment(obj var, obj expr)
{
  return obj(new Assignment(mk_plain_id(var), to_expr(expr)));
}

obj mk_stmt_typed_assignment(obj var, obj type, obj expr)
{
  return obj(new Assignment(mk_plain_id(var), to_expr(expr), unbox<Type>(type)));
}

obj mk_stmt_assignment_if(obj var, obj expr, obj cond)
{
  return mk_stmt_if(
           cond,
           mk_seq(mk_stmt_assignment(var, expr)),
           mk_seq_empty()
         );
}

obj mk_stmt_return(obj expr)
{
  return obj(new ReturnStmt(to_expr(expr)));
}

obj mk_stmt_return_if(obj expr, obj cond)
{
  return mk_stmt_if(
           cond,
           mk_seq(mk_stmt_return(expr)),
           mk_seq_empty()
         );
}

obj mk_stmt_if(obj cond, obj statements, obj elifs)
{
  obj mk_stmt_if(obj, obj, obj, obj);
  return mk_stmt_if(cond, statements, elifs, mk_seq_empty());
}

obj mk_stmt_if(obj cond, obj statements, obj elifs, obj else_branch)
{
  Expr             c  = to_expr(cond);
  //statement_v ss = unboxv<Statement>(statements);
  ref_v<Elif>      es = unboxv<Elif>(elifs);
  
  statement_v stmts = unboxv<Statement>(statements);
  statement if_true_stmt(new StmtSeq(stmts));
  statement_v else_stmts = unboxv<Statement>(else_branch);
  statement if_false_stmt(new StmtSeq(else_stmts));
  
  for (int i=es.size()-1 ; i >= 0 ; i--)
    if_false_stmt = statement(new IfStmt(es[i]->cond, es[i]->statement_, if_false_stmt));
  
  return obj(new IfStmt(c, if_true_stmt, if_false_stmt));
}


obj mk_stmt_loop(obj statements)
{
  statement_v ss = unboxv<Statement>(statements);
  statement stmt(new StmtSeq(ss));
  return obj(new LoopStmt(stmt));
}

obj mk_stmt_loop(obj statements, obj condition)
{
  statement_v ss = unboxv<Statement>(statements);
  statement stmt(new StmtSeq(ss));
  return obj(new LoopStmt(to_expr(condition), true, stmt));
}

obj mk_stmt_while(obj cond, obj statements)
{
  statement_v ss = unboxv<Statement>(statements);
  statement stmt(new StmtSeq(ss));
  return obj(new LoopStmt(to_expr(cond), stmt));
}


obj mk_stmt_break()
{
  return obj(new BreakStmt);  
}

obj mk_stmt_break_if(obj cond)
{
  return mk_stmt_if(
           cond,
           mk_seq(mk_stmt_break()),
           mk_seq_empty()
         );
}

obj mk_stmt_fail()
{
  return obj(new FailStmt);
}

obj mk_stmt_fail_if(obj cond)
{
  return mk_stmt_if(
           cond,
           mk_seq(mk_stmt_fail()),
           mk_seq_empty()
         );
}

obj mk_stmt_for(obj iters, obj statements)
{
  ref_v<ForIter> its = unboxv<ForIter>(iters);
  assert(its.size() > 0);

  statement_v ss = unboxv<Statement>(statements);
  statement s(new StmtSeq(ss));
  
  for (int i=its.size()-1 ; i >= 0 ; i--)
  {
    ref<ForIter> it = its[i];
    
    if (it->src.is_null())
      s = statement(new ForStatement(it->var, it->start, it->end, s));
    else if (it->idx_var.is_null())
      s = statement(new ForStatement(it->var, it->src, s));
    else
      s = statement(new ForStatement(it->var, it->idx_var, it->src, s));
  }
  
  return obj(s);
}

obj mk_stmt_let(obj fndefs, obj statements)
{
  fn_def_v fds = unboxv<FnDef>(fndefs);

  statement_v ss = unboxv<Statement>(statements);
  statement body(new StmtSeq(ss));

  return obj(new LetStatement(fds, body));
}

obj mk_stmt_assert(obj expr)
{
  Expr e = to_expr(expr);
  return obj(new AssertStmt(e));
}

obj mk_stmt_print(obj expr)
{
  Expr e = to_expr(expr);
  return obj(new PrintStmtInFn(e));
}

obj mk_stmt_print_if(obj expr, obj cond)
{
  return mk_stmt_if(
           cond,
           mk_seq(mk_stmt_print(expr)),
           mk_seq_empty()
         );
}



obj mk_elif(obj cond, obj statements)
{
  statement_v stmts = unboxv<Statement>(statements);
  return obj(new Elif(to_expr(cond), statement(new StmtSeq(stmts))));
}



obj mk_for_iter(obj var, obj seq)
{
  return obj(new ForIter(mk_plain_id(var), PlainId(), to_expr(seq)));
}

obj mk_for_iter(obj var, obj idx_var, obj seq)
{
  return obj(new ForIter(mk_plain_id(var), mk_plain_id(idx_var), to_expr(seq)));
}

obj mk_for_iter_range(obj var, obj start_expr, obj end_expr)
{
  return obj(new ForIter(mk_plain_id(var), to_expr(start_expr), to_expr(end_expr)));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

pattern pattern_any()
{
  return pattern(new TypePtrn(type(new PseudoTypeAny)));
}

pattern pattern_any(PlainId var_name)
{
  return pattern(new VarPtrn(var_name, pattern_any()));
}


obj mk_ptrn_type(obj type)
{
  return obj(new TypePtrn(unbox<Type>(type)));
}

obj mk_ptrn_var(obj var)
{
  return obj(new VarPtrn(mk_plain_id(var), pattern_any()));
}

obj mk_ptrn_ptrn_var(obj pattern, obj var)
{
  return obj(new VarPtrn(mk_plain_id(var), unbox<Pattern>(pattern)));
}

obj mk_ptrn_ctor(obj symb)
{
  return obj(new ObjPtrn(symbol_obj(mk_ctor(symb))));
}

obj mk_ptrn_num(obj num)
{
  return obj(new ObjPtrn(int_obj(to_int(num))));
}

obj mk_ptrn_jolly()
{
  return obj(new TypePtrn(type(new PseudoTypeAny)));
}

obj mk_ptrn_expr(obj var)
{
  return obj(new ExtrVarPtrn(mk_plain_id(var)));
}

obj mk_ptrn_tuple(obj labptrns, bool open)
{
  ref_v<LabPtrn> lab_ptrns = unboxv<LabPtrn>(labptrns);

  int size(lab_ptrns.size());
  vector<Symbol> labs(size);
  pattern_v ptrns(size);

  for (int i=0 ; i < size ; i++)
  {
    labs[i] = lab_ptrns[i]->lab;
    ptrns[i] = lab_ptrns[i]->ptrn;
  }

  return obj(new TuplePtrn(labs, ptrns, open));
}

obj mk_ptrn_tag_ptrn(obj tag, obj ptrn)
{
  pattern tp(new ObjPtrn(symbol_obj(mk_ctor(tag))));
  pattern op = unbox<Pattern>(ptrn);
  return obj(new TagPtrn(tp, op));
}

obj mk_ptrn_tag_obj(obj tag_var, obj obj_var)
{
  PlainId tv = mk_plain_id(tag_var);
  PlainId ov = mk_plain_id(obj_var);
  
  return obj(new TagPtrn(pattern_any(tv), pattern_any(ov)));
}


obj mk_lab_ptrn(obj lab, obj ptrn)
{
  return obj(new LabPtrn(mk_ctor(lab), unbox<Pattern>(ptrn)));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


obj mk_type_ref(obj name)
{
  string n = get_string(name);
  return obj(new TypeRef(n));
}

obj mk_type_var(obj var_name)
{
  string vn = get_string(var_name);
  return obj(new TypeVar(vn));
}

obj mk_type_ref(obj name, obj type_pars)
{
  string n = get_string(name);
  type_v ts = unboxv<Type>(type_pars);
  return obj(new ParTypeRef(n, ts));
}

obj mk_type_inline(obj pretypes)
{
  type_v ts = unboxv<Type>(pretypes);
  return obj(new UnionType(ts));
}

obj mk_type_any()
{
  return obj(new PseudoTypeAny);
}

obj mk_type_symb()
{
  return obj(new SymbolType);
}

obj mk_type_int()
{
  return obj(new IntType());
}

obj mk_type_low_bounded_int(obj min)
{
  return obj(new IntType(to_int(min), INT_MAX));
}

obj mk_type_up_bounded_int(obj max)
{
  return obj(new IntType(INT_MIN, to_int(max)));
}

obj mk_type_bounded_int(obj min, obj max)
{
  return obj(new IntType(to_int(min), to_int(max)));
}

obj mk_type_seq(obj type, bool nonempty)
{
  return obj(new SeqType(unbox<Type>(type), nonempty));
}

obj mk_type_fixed_seq(obj pretypes)
{
  type_v ts = unboxv<Type>(pretypes);
  return obj(new FixedSeqType(ts));
}

obj mk_type_set(obj elem_type, bool nonempty)
{
  type t = unbox<Type>(elem_type);
  return obj(new SetType(t, nonempty));
}

obj mk_type_map(obj key_type, obj value_type)
{
  type kt = unbox<Type>(key_type);
  type vt = unbox<Type>(value_type);
  
  return obj(new MapType(kt, vt));
}

obj mk_type_tuple(obj lab_types)
{
  ref_v<LabType> lts = unboxv<LabType>(lab_types);
  
  int size = lts.size();
  
  vector<Symbol> ks(size);
  type_v ts(size);
  vector<bool> os(size);
  
  for (int i=0 ; i < size ; i++)
  {
    ks[i] = lts[i]->lab;
    ts[i] = lts[i]->type_;
    os[i] = lts[i]->optional;
  }
  
  return obj(new TupleType(ks, ts, os));
}

obj mk_type_tagged_obj(obj tag_type, obj obj_type)
{
  return ::obj(new TagType(unbox<Type>(tag_type), unbox<Type>(obj_type)));
}

obj mk_pretype_type(obj type)
{
  return type;
}

obj mk_pretype_empty_set()
{
  return obj(new EmptySetType);
}

obj mk_pretype_empty_seq()
{
  return obj(new EmptySeqType);
}

obj mk_pretype_empty_map()
{
  return obj(new EmptyMapType);
}

obj mk_pretype_sing(obj symb)
{
  return obj(new Enum(mk_ctor(symb)));
}


obj mk_pretype_tagged_obj(obj tag, obj obj)
{
  return ::obj(new TagType(mk_ctor(tag), unbox<Type>(obj)));
}

obj mk_pretype_tagged_tuple(obj tag, obj lab_types)
{
  return mk_pretype_tagged_obj(tag, mk_type_tuple(lab_types));
}

obj mk_labtype(obj lab, obj type, bool optional)
{
  return obj(new LabType(mk_ctor(lab), unbox<Type>(type), optional));
}

////////////////////////////////////////////////////////////////////////////////

// Possible optimization: when building a composite value,
// if all the subexpressions are plain terms, then I can
// build another plain term

obj mk_expr_ctor(obj symb)
{
  return box(symb_expr(mk_ctor(symb)));
}

obj mk_expr_str(obj str)
{
  string s = get_string(str);
  assert(s[0] == '"' && s[s.length()-1] == '"');
  s = s.substr(1, s.length()-2);
  
  expr_v es;
  for (unsigned int i=0 ; i < s.length() ; i++)
    if (s[i] != '\\')
      es.push_back(num_expr(s[i]));
    else
    {
      assert(++i < s.length());

      switch (s[i])
      {
        case 'n':  es.push_back(num_expr('\n')); break;
        case '"':  es.push_back(num_expr('"'));  break;
        case '\\': es.push_back(num_expr('\\')); break;
        default:   halt;
      }
    }

  return box(tag_obj_expr("string", seq_expr(es)));
}

obj mk_expr_empty_set()
{
  return box(empty_set_expr());
}

obj mk_expr_set(obj subexprs)
{
  expr_v es = to_exprv(subexprs);
  return box(set_expr(es));
}

obj mk_expr_map(obj map_entries)
{
  ref_v<MapEntry> es = unboxv<MapEntry>(map_entries);
  
  int size = es.size();
  
  expr_v ks(size), vs(size);
  for (int i=0 ; i < size ; i++)
  {
    ks[i] = es[i]->key;
    vs[i] = es[i]->value;
  }
  
  return box(map_expr(ks, vs));
}

obj mk_expr_tuple(obj labexprs)
{
  ref_v<LabExpr> les = unboxv<LabExpr>(labexprs);
  
  int size = les.size();
  
  vector<Symbol> keys(size);
  expr_v values(size);
  
  for (int i=0 ; i < size ; i++)
  {
    keys[i] = les[i]->lab;
    values[i] = les[i]->expr;
  }
  
  return box(tuple_expr(keys, values));
}

obj mk_expr_tag_obj(obj tag_expr, obj obj_expr)
{
  Expr tag = to_expr(tag_expr);
  Expr obj = to_expr(obj_expr);
  
  return box(tag_obj_expr(tag, obj));  
}

obj mk_expr_tag_map(obj tag, obj labexprs)
{
  return mk_expr_tag_obj(mk_expr_ctor(tag), mk_expr_tuple(labexprs));
}

obj mk_expr_const_or_var(obj const_or_var_name)
{
  return box(const_or_var_expr(mk_plain_id(const_or_var_name)));
}

obj mk_expr_fn_call(obj fn_name, obj params)
{
  PlainId fn = mk_plain_id(fn_name);
  expr_v ps = to_exprv(params);
  return box(fn_call_expr(fn, ps));
}

obj mk_expr_builtin_call(obj builtin_name, obj params)
{
  string name = get_string(builtin_name);
  expr_v ps = to_exprv(params);
  
  if (name == "_add_")
  {
    assert(ps.size() == 2);
    return box(builtin_add_call_expr(ps[0], ps[1]));
  }
  
  if (name == "_neg_")
  {
    assert(ps.size() == 1);
    return box(builtin_neg_call_expr(ps[0]));
  }
  
  if (name == "_load_")
  {
    assert(ps.size() == 1);
    return box(read_file_call_expr(ps[0], false));
  }

  if (name == "_file_")
  {
    assert(ps.size() == 1);
    return box(read_file_call_expr(ps[0], true));
  }
  
  if (name == "_ticks_")
  {
    return box(builtin_ticks_call_expr());
  }

  //if (name == "_ordered_")
  //{
  //  assert(ps.size() == 2);
  //  return box(builtin_ordered_call_expr(ps[0], ps[1]));
  //}
  
  if (name == "_counter_")
  {
    return box(builtin_counter_call_expr());
  }
  
  if (name == "_str_")
  {
    assert(ps.size() == 1);
    return box(builtin_str_call_expr(ps[0]));
  }

  if (name == "_symb_")
  {
    assert(ps.size() == 1);
    return box(builtin_symb_call_expr(ps[0]));
  }

  if (name == "_write_")
  {
    assert(ps.size() == 2);
    return box(write_to_file_call_expr(ps[0], false, ps[1]));
  }
  
  if (name == "_append_")
  {
    assert(ps.size() == 2);
    return box(write_to_file_call_expr(ps[0], true, ps[1]));
  }
  
  if (name == "_at_")
  {
    assert(ps.size() == 2);
    return box(builtin_at_call_expr(ps[0], ps[1]));
  }
  
  if (name == "_len_")
  {
    assert(ps.size() == 1);
    return box(builtin_len_call_expr(ps[0]));
  }
  
  if (name == "_slice_")
  {
    assert(ps.size() == 3);
    return box(builtin_slice_call_expr(ps[0], ps[1], ps[2]));
  }
  
  if (name == "_cat_")
  {
    assert(ps.size() == 2);
    return box(builtin_cat_call_expr(ps[0], ps[1]));
  }
  
  if (name == "_rev_")
  {
    assert(ps.size() == 1);
    return box(builtin_rev_call_expr(ps[0]));
  }
  
  if (name == "_set_")
  {
    assert(ps.size() == 1);
    return box(builtin_set_call_expr(ps[0]));
  }
  
  if (name == "_mset_")
  {
    assert(ps.size() == 1);
    return box(builtin_mset_call_expr(ps[0]));
  }
  
  if (name == "_isort_")
  {
    assert(ps.size() == 1);
    return box(builtin_isort_call_expr(ps[0]));
  }
  
  if (name == "_list_to_seq_")
  {
    assert(ps.size() == 1);
    return box(builtin_list_to_seq_call_expr(ps[0]));
  }

  if (name == "_rand_nat_")
  {
    assert(ps.size() == 1);
    return box(builtin_rand_int_expr(ps[0]));
  }

  if (name == "_rand_elem_")
  {
    assert(ps.size() == 1);
    return box(builtin_rand_elem_expr(ps[0]));
  }

  if (name == "_tag_")
  {
    assert(ps.size() == 1);
    return box(builtin_tag_obj_get_tag_expr(ps[0]));
  }

  if (name == "_obj_")
  {
    assert(ps.size() == 1);
    return box(builtin_tag_obj_get_obj_expr(ps[0]));
  }

  halt;
}


obj mk_expr_empty_seq()
{
  return box(empty_seq_expr());
}

obj mk_expr_seq(obj exprs)
{
  expr_v es = to_exprv(exprs);
  return box(seq_expr(es));
}

obj mk_expr_seq(obj firsts, obj rest)
{
  expr_v es = to_exprv(firsts);
  return box(seq_expr(es, to_expr(rest)));
}


obj mk_expr_num(obj num)
{
  return box(num_expr(to_int(num)));
}


obj mk_expr_op(obj op, obj val)
{
  PlainId os = mk_op(op);
  expr_v es = mk_v(to_expr(val));
  return box(fn_call_expr(os, es));
}


obj mk_expr_op(obj op, obj val1, obj val2)
{
  PlainId os = mk_op(op);
  expr_v vs = mk_v(to_expr(val1), to_expr(val2));
  return box(fn_call_expr(os, vs));
}


obj mk_expr_and(obj expr1, obj expr2)
{
  Expr e1 = to_expr(expr1);
  Expr e2 = to_expr(expr2);
  return box(and_expr(e1, e2));
}

obj mk_expr_or(obj expr1, obj expr2)
{
  Expr e1 = to_expr(expr1);
  Expr e2 = to_expr(expr2);
  return box(or_expr(e1, e2));
}

obj mk_expr_not(obj expr)
{
  return box(not_expr(to_expr(expr)));
}


obj mk_expr_eq(obj expr1, obj expr2)
{
  return box(eq_expr(to_expr(expr1), to_expr(expr2)));
}

obj mk_expr_neq(obj expr1, obj expr2)
{
  return box(not_expr(eq_expr(to_expr(expr1), to_expr(expr2))));
}


obj mk_expr_type_test(obj e, obj t)
{
  return box(mb_test_expr(to_expr(e), unbox<Type>(t)));
}


obj mk_expr_dot_acc(obj expr, obj name)
{
  return box(acc_expr(to_expr(expr), mk_ctor(name)));
}

obj mk_expr_dot_acc_test(obj expr, obj name)
{
  return box(acc_test_expr(to_expr(expr), mk_ctor(name)));
}

//obj mk_expr_dot_acc_star(obj expr)
//{
//  return box(acc_star_expr(to_expr(expr)));
//}

obj mk_expr_idx(obj var_or_const, obj exprs)
{
  Expr src = const_or_var_expr(mk_plain_id(var_or_const));
  expr_v idxs = to_exprv(exprs);
  expr_v es = mk_v(src, idxs);
  return box(fn_call_expr(PlainId::idx_fn(), es));
}

obj mk_expr_idx_member(obj expr, obj name, obj exprs)
{
  Expr src = acc_expr(to_expr(expr), mk_ctor(name));
  expr_v idxs = to_exprv(exprs);
  expr_v es = mk_v(src, idxs);
  return box(fn_call_expr(PlainId::idx_fn(), es));
}


obj mk_expr_ex_qual(obj clauses)
{
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  ref<SCClause> cl = and_merge(cs);
  return box(ex_qual_expr(cl));
}

obj mk_expr_ex_qual(obj clauses, obj sel_exprs)
{
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  ref<SCClause> cl = and_merge(cs);
  expr_v es = to_exprv(sel_exprs);
  Expr se = and_merge(es);
  return box(ex_qual_expr(cl, se));
}

obj mk_expr_sc(obj expr, obj clauses)
{
  Expr e = to_expr(expr);
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  ref<SCClause> cl = and_merge(cs);
  
  return box(sc_expr(e, cl));
}

obj mk_expr_sc(obj expr, obj clauses, obj sel_exprs)
{
  Expr e = to_expr(expr);
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  ref<SCClause> cl = and_merge(cs);
  expr_v es = to_exprv(sel_exprs);
  Expr se = and_merge(es);
  
  return box(sc_expr(e, cl, se));
}

obj mk_expr_mc(obj key_expr, obj val_expr, obj clauses)
{
  Expr ke = to_expr(key_expr);
  Expr ve = to_expr(val_expr);
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  ref<SCClause> cl = and_merge(cs);

  return box(mc_expr(ke, ve, cl));
}

obj mk_expr_mc(obj key_expr, obj val_expr, obj clauses, obj sel_exprs)
{
  Expr ke = to_expr(key_expr);
  Expr ve = to_expr(val_expr);
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  ref<SCClause> cl = and_merge(cs);
  expr_v es = to_exprv(sel_exprs);
  Expr se = and_merge(es);

  return box(mc_expr(ke, ve, cl, se));
}

obj mk_expr_lc(obj expr, obj var_name, obj src_expr)
{
  return box(
           lc_expr(
             to_expr(expr),
             mk_plain_id(var_name),
             to_expr(src_expr)
           )
         );
}

obj mk_expr_lc(obj expr, obj var_name, obj idx_var_name, obj src_expr)
{
  return box(
           lc_expr(
             to_expr(expr),
             mk_plain_id(var_name),
             mk_plain_id(idx_var_name),
             to_expr(src_expr)
           )
         );
}

obj mk_expr_flc(obj expr, obj var_name, obj src_expr, obj sel_expr)
{
  return box(
           lc_expr(
             to_expr(expr),
             mk_plain_id(var_name),
             to_expr(src_expr),
             to_expr(sel_expr)
           )
         );
}

obj mk_expr_flc(obj expr, obj var_name, obj idx_var_name, obj src_expr, obj sel_expr)
{
  return box(
           lc_expr(
             to_expr(expr),
             mk_plain_id(var_name),
             mk_plain_id(idx_var_name),
             to_expr(src_expr),
             to_expr(sel_expr)
           )
         );
}
  
obj mk_expr_if(obj branches, obj else_expr)
{
  Expr e = to_expr(else_expr);
  
  ref_v<IfBranch> bs = unboxv<IfBranch>(branches);
  for (unsigned int i=0 ; i < bs.size() ; i++)
    e = if_expr(bs[i]->cond, bs[i]->value, e);
  
  return box(e);
}


obj mk_expr_match(obj exprs, obj branches)
{
  ref_v<TryBranch> bs = unboxv<TryBranch>(branches);
  return box(mk_expr_try(to_exprv(exprs), bs));
}

obj mk_expr_do(obj statements)
{
  statement_v stmts = unboxv<Statement>(statements);
  statement body(new StmtSeq(stmts));
  return box(proc_expr(body));
}


obj mk_expr_match(obj ptrn, obj matched_expr, obj expr)
{
  halt;
}


obj mk_expr_repl(obj ptrn, obj src_expr, obj rep_expr)
{
  //Expr repl_expr(Expr src, pattern ptrn, Expr value);
  Expr s    = to_expr(src_expr);
  pattern p = unbox<Pattern>(ptrn);
  Expr t    = to_expr(rep_expr);
  
  Expr r = repl_expr(s, p, t);
  
  return box(r);
}

obj mk_expr_sel(obj type, obj expr)
{
  return box(select_expr(to_expr(expr), unbox<Type>(type)));
}

obj mk_expr_retr(obj expr, obj ptrn, obj src)
{
  return box(select_expr(to_expr(expr), unbox<Pattern>(ptrn), to_expr(src)));
}

obj mk_expr_retr(obj expr, obj ptrn, obj src, obj cond)
{
  return box(select_expr(to_expr(expr), unbox<Pattern>(ptrn), to_expr(src), to_expr(cond)));
}

obj mk_expr_is(obj expr, obj type)
{
  return expr;
}

obj mk_expr_where(obj expr, obj fndefs)
{
  fn_def_v fds = unboxv<FnDef>(fndefs);
  return box(with_expr(to_expr(expr), fds));
}

obj mk_expr_let(obj expr, obj statements)
{
  obj ret_stmt = mk_stmt_return(expr);
  obj stmts    = mk_seq(statements, ret_stmt);
  
  return mk_expr_do(stmts);
}


obj mk_sexpr_expr(obj expr)
{
  return expr;
}

obj mk_sexpr_lab(obj lab, obj expr)
{
  return obj(new LabExpr(mk_ctor(lab), to_expr(expr)));
}

obj mk_sexpr_cond(obj value, obj cond)
{
  return box(opt_incl_expr(to_expr(value), to_expr(cond)));
}

obj mk_sexpr_lab_cond(obj lab, obj expr, obj cond)
{
  return mk_sexpr_lab(lab, mk_sexpr_cond(expr, cond));
}


obj mk_if_branch(obj cond, obj value)
{
  return obj(new IfBranch(to_expr(cond), to_expr(value)));
}


obj mk_match_branch(obj ptrns, obj expr)
{
  pattern_v ps = unboxv<Pattern>(ptrns);
  return obj(new TryBranch(ps, to_expr(expr)));
}


obj mk_clause_in(obj ptrn, obj src_expr)
{
  return obj(new IncClause(unbox<Pattern>(ptrn), to_expr(src_expr)));
}

obj mk_clause_in_map(obj key_ptrn, obj value_ptrn, obj src_expr)
{
  return obj(new MapIncClause(unbox<Pattern>(key_ptrn), unbox<Pattern>(value_ptrn), to_expr(src_expr)));
}

obj mk_clause_not_in(obj ptrn, obj src_expr)
{
  return obj(new ExclClause(unbox<Pattern>(ptrn), to_expr(src_expr)));
}

obj mk_clause_not_in_map(obj key_ptrn, obj value_ptrn, obj src_expr)
{
  return obj(new MapExclClause(unbox<Pattern>(key_ptrn), unbox<Pattern>(value_ptrn), to_expr(src_expr)));
}

obj mk_clause_eq(obj var, obj expr)
{
  return mk_clause_in(
           mk_ptrn_var(var),
           mk_expr_set(mk_seq(mk_sexpr_expr(expr)))
         );
}

obj mk_clause_and(obj clauses)
{
  ref_v<SCClause> cs = unboxv<SCClause>(clauses);
  
  ref<SCClause> c = cs[0];
  for (unsigned int i=1 ; i < cs.size() ; i++)
    c = ref<SCClause>(new AndClause(c, cs[i]));
  
  return c;
}

obj mk_clause_or(obj clause1, obj clause2)
{
  return obj(new OrClause(unbox<SCClause>(clause1), unbox<SCClause>(clause2)));
}

obj mk_map_entry(obj expr1, obj expr2)
{
  return obj(new MapEntry(to_expr(expr1), to_expr(expr2)));
}

obj mk_map_entry_cond(obj expr1, obj expr2, obj cond)
{
  halt;
}


obj mk_snum_neg_num(obj num)
{  
  token t = unbox<Token>(num);
  return obj(new Token("-" + t->str, t->start_line, t->start_col, t->filename));
}
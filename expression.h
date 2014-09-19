#ifndef _EXPRESSION_ZH_
#define _EXPRESSION_ZH_

#include "term.h"
#include "types.h"

class Pattern;
class FnDef;
class Program;
class SCExpr;
class Statement;
class SCClause;

typedef ref<Pattern>    pattern;
typedef ref_v<Pattern>  pattern_v;
typedef ref<Statement>  statement;
typedef ref<SCClause>   scclause;
typedef ref<FnDef>      fn_def;
typedef ref_v<FnDef>    fn_def_v;


class Env
{
public:
  Env();
  Env(const Env &env);
  Env(Env &env1, Env &env2);

  Term get(PlainId s);

	bool is_set(PlainId s);
  bool is_empty();

  void set(PlainId s, Term value);
  void unset(PlainId s);

  void merge_at_lower_precedence(Env &env);
  void merge_but_fail_on_conflits(Env &env);

	//void merge_by_addition(Env &env);

	bool is_compatible(Env &env);

	string to_string(bool always=false);

private:
  map<int, Term> assignments;
};


class LocalDefs
{
public:
  LocalDefs();
  LocalDefs(fn_def_v &fns, LocalDefs &ie);

  fn_def get_candidate_fn(PlainId fn_name, int arity);

private:
  static int hash(PlainId fn_name, int arity);  

private:
  mutable map<int, fn_def> fndefs_lookup_table;
};


class ExprObj
{
public:
  virtual Term evaluate() = 0;
  virtual Term evaluate(Env &env) = 0;
  virtual Term evaluate(Env &env, LocalDefs &ie) = 0;
  
  virtual bool has_to_be_included(Env &env, LocalDefs &ie) = 0;
};

class Expr
{
public:
  Term evaluate(Env &env, LocalDefs &ie);
  bool has_to_be_included(Env &env, LocalDefs &ie);

  bool is_null();

private:
  ref<ExprObj> obj;

  friend Expr mk_expr(ref<ExprObj> obj);
  friend ref<ExprObj> get_expr_obj(Expr e);
};

typedef vector<Expr> expr_v;

// Expression constructors

Expr symb_expr(Symbol s);
Expr num_expr(int n);
Expr seq_expr(expr_v &head);
Expr seq_expr(expr_v &head, Expr tail);
Expr set_expr(expr_v &elems);
Expr map_expr(expr_v &keys, expr_v &values);
Expr tag_obj_expr(Expr tag, Expr obj);

Expr empty_seq_expr();
Expr empty_set_expr();
Expr empty_map_expr();
Expr tuple_expr(vector<Symbol> &keys, expr_v &values);
Expr tag_obj_expr(Symbol tag, Expr obj);
Expr tag_obj_expr(string tag, Expr obj);

Expr const_expr(Term value);

Expr mb_test_expr(Expr e, type t);
Expr acc_expr(Expr expr, Symbol symbol);
Expr acc_test_expr(Expr expr, Symbol symbol);
Expr acc_star_expr(Expr expr);
Expr click_expr(Expr root, Expr expr);
Expr with_expr(Expr expr, fn_def_v &rs);
Expr ex_qual_expr(ref<SCClause> clause);
Expr ex_qual_expr(ref<SCClause> clause, Expr sel_expr);
Expr proc_expr(statement &body);
Expr opt_incl_expr(Expr value, Expr cond);
Expr repl_expr(Expr src, pattern ptrn, Expr value);
Expr select_expr(Expr src, type type);
Expr select_expr(Expr expr, pattern ptrn, Expr src);
Expr select_expr(Expr expr, pattern ptrn, Expr src, Expr cond);

Expr sc_expr(Expr expr, ref<SCClause> clause);
Expr sc_expr(Expr expr, ref<SCClause> clause, Expr sel_expr);

Expr mc_expr(Expr key, Expr value, ref<SCClause> clause);
Expr mc_expr(Expr key, Expr value, ref<SCClause> clause, Expr sel_expr);

Expr lc_expr(Expr res, PlainId var, Expr seq);
Expr lc_expr(Expr res, PlainId var, Expr seq, Expr cond);
Expr lc_expr(Expr res, PlainId var, PlainId idx_var, Expr seq);
Expr lc_expr(Expr res, PlainId var, PlainId idx_var, Expr seq, Expr cond);

Expr const_or_var_expr(PlainId s);
Expr fn_call_expr(PlainId s, expr_v &args);

Expr and_expr(Expr expr1, Expr expr2);
Expr or_expr(Expr expr1, Expr expr2);
Expr not_expr(Expr expr);

Expr eq_expr(Expr expr1, Expr expr2);

Expr if_expr(Expr cond, Expr if_true_expr, Expr if_false_expr);
Expr try_expr(expr_v &matched_exprs, vector<pattern_v> &ptrnss, expr_v &res_exprs);

Expr builtin_add_call_expr(Expr expr1, Expr expr2);
Expr builtin_neg_call_expr(Expr expr);
Expr builtin_ticks_call_expr();
Expr builtin_ordered_call_expr(Expr expr1, Expr expr2);
Expr builtin_counter_call_expr();
Expr builtin_str_call_expr(Expr expr);
Expr builtin_symb_call_expr(Expr expr);

Expr builtin_at_call_expr(Expr seq_expr, Expr idx_expr);
Expr builtin_len_call_expr(Expr expr);
Expr builtin_slice_call_expr(Expr seq_expr, Expr idx_first_expr, Expr len_expr);
Expr builtin_cat_call_expr(Expr seq_expr, Expr idx_expr);
Expr builtin_rev_call_expr(Expr seq_expr);
Expr builtin_set_call_expr(Expr seq_expr);
Expr builtin_mset_call_expr(Expr seq_expr);
Expr builtin_isort_call_expr(Expr set_expr);
Expr builtin_list_to_seq_call_expr(Expr set_expr);

Expr builtin_rand_int_expr(Expr max_expr);
Expr builtin_rand_elem_expr(Expr set_expr);

Expr builtin_tag_obj_get_tag_expr(Expr tag_obj_expr);
Expr builtin_tag_obj_get_obj_expr(Expr tag_obj_expr);

Expr builtin_in_expr(Expr elem_expr, Expr set_expr);
Expr builtin_has_key_expr(Expr map_expr, Expr key_expr);
Expr builtin_lookup_expr(Expr map_expr, Expr key_expr);

Expr builtin_union_expr(Expr sets_expr);
Expr builtin_merge_expr(Expr maps_expr);

Expr read_file_call_expr(Expr file_name, bool raw);
Expr write_to_file_call_expr(Expr file_name, bool append, Expr text);

#endif // _EXPRESSION_ZH_

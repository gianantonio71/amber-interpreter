#ifndef _STATEMENT_ZH_
#define _STATEMENT_ZH_

#include "expression.h"


class NextAction
{
public:
  enum ActionType {continue_normal_execution, break_inner_loop, return_from_function};
  
  NextAction(ActionType action);
  NextAction(Term value);

  bool is_normal();
  bool is_break();
  bool is_return();
  
  Term result();

private:
  ActionType action;
  Term       value;
};

  
class Statement : public Obj
{
public:
	virtual NextAction execute(Env &env, LocalDefs &ie) = 0;
};

typedef ref<Statement>    statement;
typedef ref_v<Statement>  statement_v;

class NullStatement : public Statement
{
public:
	NextAction execute(Env &env, LocalDefs &ie);
};


class Assignment : public Statement
{
public:
	Assignment(PlainId var_name, Expr expr);
	Assignment(PlainId var_name, Expr expr, type type);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	PlainId var_name;
	Expr expr;
	type type_;
};


class StmtSeq : public Statement
{
public:
	StmtSeq(statement_v &stmts);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	statement_v stmts;
};


class ReturnStmt : public Statement
{
public:
	ReturnStmt(Expr expr);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	Expr expr;
};


class IfStmt : public Statement
{
public:
	IfStmt(Expr cond, statement &if_true);
	IfStmt(Expr cond, statement &if_true, statement &if_false);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	Expr cond;
	statement if_true;
	statement if_false;
};


class LoopStmt : public Statement
{
public:
	LoopStmt(statement &body);
	LoopStmt(Expr cond, statement &body);
	LoopStmt(Expr cond, bool is_tail_cond, statement &body);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	Expr cond;
	bool is_tail_cond;
	statement body;
};


class ForStatement : public Statement
{
public:
  ForStatement(PlainId var, Expr src_expr, statement &body);
  ForStatement(PlainId var, PlainId idx_var, Expr src_expr, statement &body);
  ForStatement(PlainId var, Expr start_expr, Expr end_expr, statement &body);

	NextAction execute(Env &env, LocalDefs &ie);

private:
  Expr src_expr;
  Expr start_expr;
  Expr end_expr;
  PlainId var;
  PlainId idx_var;
  statement body;
};


class LetStatement : public Statement
{
public:
  LetStatement(fn_def_v &fds, statement &body);

	NextAction execute(Env &env, LocalDefs &ie);
  
private:
  fn_def_v fds;
  statement body;  
};


class BreakStmt : public Statement
{
public:
	NextAction execute(Env &env, LocalDefs &ie);
};


class FailStmt : public Statement
{
public:
	NextAction execute(Env &env, LocalDefs &ie);
};


class AssertStmt : public Statement
{
public:
	AssertStmt(Expr &expr);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	Expr expr;
};


class PrintStmtInFn : public Statement
{
public:
	PrintStmtInFn(Expr &expr);

	NextAction execute(Env &env, LocalDefs &ie);

private:
	Expr expr;
};

#endif // _STATEMENT_ZH_

#ifndef _SC_EXPR_ZH_
#define _SC_EXPR_ZH_

#include "term.h"
#include "types.h"
#include "pattern.h"

class Program;


class SCClause : public Obj
{
public:
	virtual bool can_generate() = 0;
	virtual void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie) = 0;

	void generate(Env &ext_env, vector<Env> &out_envs, LocalDefs &ie);
	void generate(Env &ext_env, vector<Env> &in_envs, vector<Env> &out_envs, LocalDefs &ie);
};


//class SCExpr
//{
//public:
//	SCExpr(Expr expr, ref<SCClause> &clause);
//	SCExpr(Expr expr, ref<SCClause> &clause, Expr sel_expr);
//
//	void generate(Env &ext_env, term_v &results, LocalDefs &ie);
//
//private:
//	Expr          expr;
//	ref<SCClause> clause;
//	Expr          sel_expr;
//};

class IncClause : public SCClause
{
public:
	IncClause(pattern p, Expr e);

	bool can_generate();

	void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie);

private:
	pattern ptrn;
	Expr    src_expr;
};


class MapIncClause : public SCClause
{
public:
	MapIncClause(pattern kp, pattern vp, Expr e);

	bool can_generate();

	void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie);

private:
	pattern key_ptrn;
	pattern value_ptrn;
	Expr    src_expr;
};


class ExclClause : public SCClause
{
public:
	ExclClause(pattern p, Expr e);

	bool can_generate();

	void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie);

private:
	pattern ptrn;
	Expr    src_expr;
};


class MapExclClause : public SCClause
{
public:
	MapExclClause(pattern kp, pattern vp, Expr e);

	bool can_generate();

	void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie);

private:
	pattern key_ptrn;
	pattern value_ptrn;
	Expr    src_expr;
};


class AndClause : public SCClause
{
public:
	AndClause(ref<SCClause> c1, ref<SCClause> c2);

	bool can_generate();

	void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie);

private:
	ref<SCClause> clause1;
	ref<SCClause> clause2;
};


class OrClause : public SCClause
{
public:
	OrClause(ref<SCClause> c1, ref<SCClause> c2);

	bool can_generate();

	void generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie);

private:
	ref<SCClause> clause1;
	ref<SCClause> clause2;
};


#endif // _SC_EXPR_ZH_

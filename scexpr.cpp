#include "common.h"
#include "fndef.h"
#include "scexpr.h"
#include "decls.h"



void SCClause::generate(Env &ext_env, vector<Env> &out_envs, LocalDefs &ie)
{
  Env empty_env;
  generate(ext_env, empty_env, out_envs, ie);
}

void SCClause::generate(Env &ext_env, vector<Env> &in_envs, vector<Env> &out_envs, LocalDefs &ie)
{
	for (unsigned int i=0 ; i < in_envs.size() ; i++)
		generate(ext_env, in_envs[i], out_envs, ie);
}

////////////////////////////////////////////////////////////////////////////////

IncClause::IncClause(pattern p, Expr e) : ptrn(p), src_expr(e)
{

}

bool IncClause::can_generate()
{
	return true;
}

void IncClause::generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie)
{
  Env expr_env(ext_env, in_env);
  Term t = src_expr.evaluate(expr_env, ie);

	if (!t.is_set())
	{
	  cout << "Source is not a set:\n" << t.to_string(true) << endl;
	  Program::get_singleton().print_stack();
	  halt;
	}
	
	pattern p = ptrn->bind_known_vars(ext_env);

	int size = t.size();
	for (int i=0 ; i < size ; i++)
	{
		Env out_env(in_env);
		if (p->matches(t.item(i), in_env, out_env, false))
			out_envs.push_back(out_env);
	}
}

////////////////////////////////////////////////////////////////////////////////

MapIncClause::MapIncClause(pattern kp, pattern vp, Expr e)
: key_ptrn(kp), value_ptrn(vp), src_expr(e)
{

}

bool MapIncClause::can_generate()
{
  return true;
}

void MapIncClause::generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie)
{
  Env expr_env(ext_env, in_env);
  Term t = src_expr.evaluate(expr_env, ie);

	if (!t.is_map())
	{
	  cout << "Source is not a map:\n" << t.to_string(true) << endl;
	  Program::get_singleton().print_stack();
	  halt;
	}
	
	pattern kp = key_ptrn->bind_known_vars(ext_env);
	pattern vp = value_ptrn->bind_known_vars(ext_env);

	int size = t.size();
	for (int i=0 ; i < size ; i++)
	{
		Env out_env(in_env);
		if (kp->matches(t.get_key(i), in_env, out_env, false) && vp->matches(t.get_value(i), in_env, out_env, false))
  		out_envs.push_back(out_env);
	}
}

ExclClause::ExclClause(pattern p, Expr e) : ptrn(p), src_expr(e)
{

}

////////////////////////////////////////////////////////////////////////////////

bool ExclClause::can_generate()
{
	return false;
}

void ExclClause::generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie)
{
  Env expr_env(ext_env, in_env);
  Term t = src_expr.evaluate(expr_env, ie);

	if (!t.is_set())
	{
	  cout << "Source is not a set:\n" << t.to_string(true) << endl;
	  Program::get_singleton().print_stack();
	  halt;
	}
	
	pattern p = ptrn->bind_known_vars(ext_env);

	if (!p->is_fully_bound())
		halt;

	Env e;
	
	int size = t.size();
	for (int i=0 ; i < size ; i++)
		if (p->matches(t.item(i), in_env, e, false))
			return;

	out_envs.push_back(in_env);
}

////////////////////////////////////////////////////////////////////////////////

MapExclClause::MapExclClause(pattern kp, pattern vp, Expr e)
: key_ptrn(kp), value_ptrn(vp), src_expr(e)
{

}

bool MapExclClause::can_generate()
{
  return false;
}

void MapExclClause::generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie)
{
  Env expr_env(ext_env, in_env);
  Term t = src_expr.evaluate(expr_env, ie);

	if (!t.is_map())
	{
	  cout << "Source is not a map:\n" << t.to_string(true) << endl;
	  Program::get_singleton().print_stack();
	  halt;
	}
	
	pattern kp = key_ptrn->bind_known_vars(ext_env);
	pattern vp = value_ptrn->bind_known_vars(ext_env);

	if (!kp->is_fully_bound() && !vp->is_fully_bound())
		halt;

	Env e;
	
	int size = t.size();
	for (int i=0 ; i < size ; i++)
		if (kp->matches(t.get_key(i), in_env, e, false) && vp->matches(t.get_value(i), in_env, e, false))
			return;

	out_envs.push_back(in_env);
}

////////////////////////////////////////////////////////////////////////////////

AndClause::AndClause(ref<SCClause> c1, ref<SCClause> c2)
{
	if (c1->can_generate())
	{
		clause1 = c1;
		clause2 = c2;
	}
	else
	{
		clause1 = c2;
		clause2 = c1;
	}

	bool c1_can_generate = clause1->can_generate();
	bool c2_can_generate = clause2->can_generate();

	assert(!(!c1_can_generate && c2_can_generate));
}

bool AndClause::can_generate()
{
	return clause1->can_generate() || clause1->can_generate();
}

void AndClause::generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie)
{
	vector<Env> interm_envs;
	clause1->generate(ext_env, in_env, interm_envs, ie);
	int size = interm_envs.size();
	for (int i=0 ; i < size ; i++)
	  clause2->generate(ext_env, interm_envs[i], out_envs, ie);
}

////////////////////////////////////////////////////////////////////////////////

OrClause::OrClause(ref<SCClause> c1, ref<SCClause> c2)
{
	if (c1->can_generate())
	{
		clause1 = c1;
		clause2 = c2;
	}
	else
	{
		clause1 = c2;
		clause2 = c1;
	}

	bool c1_can_generate = clause1->can_generate();
	bool c2_can_generate = clause2->can_generate();

	assert(!(!c1_can_generate && c2_can_generate));
}

bool OrClause::can_generate()
{
	return clause1->can_generate() || clause2->can_generate();
}

void OrClause::generate(Env &ext_env, Env &in_env, vector<Env> &out_envs, LocalDefs &ie)
{
	//!! I SHOULD CHECK THAT THEY GENERATE THE SAME SET OF VARIABLES
	clause1->generate(ext_env, in_env, out_envs, ie);
	clause2->generate(ext_env, in_env, out_envs, ie);
}

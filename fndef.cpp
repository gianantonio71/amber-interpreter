#include "common.h"
#include "fndef.h"
#include "decls.h"



Term FnDef::evaluate_if_args_match(term_v &actual_args, LocalDefs &lds)
{
  Env env;
  return evaluate_if_args_match(actual_args, lds, env);
}

////////////////////////////////////////////////////////////////////////////////

StdFnDef::StdFnDef(PlainId fn_name, Expr res_expr, type ret_type)
: fn_name(fn_name), res_expr(res_expr), ret_type(ret_type)
{

}

StdFnDef::StdFnDef(PlainId fn_name, vector<FnArg> &args, Expr res_expr, type ret_type)
: fn_name(fn_name), args(args), res_expr(res_expr), ret_type(ret_type)
{
  //for (unsigned int i=0 ; i < args.size() ; i++)
  //  args[i]->set_cardinality(required);
}

StdFnDef::StdFnDef(PlainId fn_name, vector<FnArg> &args, Expr res_expr, type ret_type, fn_def_v &local_fns)
: fn_name(fn_name), args(args), res_expr(res_expr), ret_type(ret_type), local_fns(local_fns)
{
  //for (unsigned int i=0 ; i < args.size() ; i++)
  //  args[i]->set_cardinality(required);
}

PlainId StdFnDef::name()
{
  return fn_name;
}

int StdFnDef::arity()
{
  return args.size();
}

Term StdFnDef::evaluate_if_args_match(term_v &actual_args, LocalDefs &lds, Env &in_env)
{
  assert(args.size() == actual_args.size());
  
  Env env(in_env);
  
  for (unsigned int i=0 ; i < args.size() ; i++)
    if (args[i].type_->contains(actual_args[i]))
    {
      if (!args[i].var.is_null())
      {
        assert(!env.is_set(args[i].var));
        env.set(args[i].var, actual_args[i]);
      }
    }
    else
    {
      return null_obj();
    }

  for (unsigned int i=0 ; i < args.size() ; i++)
    env.set(PlainId::mk_fn_arg(i), actual_args[i]);

  Program::get_singleton().push_call(this->fn_name, actual_args);

  Term res;
  if (local_fns.empty())
  {
    res = res_expr.evaluate(env, lds);
  }
  else
  {
    LocalDefs ldefs(local_fns, lds);
    res = res_expr.evaluate(env, ldefs);
  }
  
  if (ret_type->contains(res))
  {
    Program::get_singleton().pop_call();
    return res;
  }
  
  ret_type->contains(res);
  
  cout << "Error in function evaluation. Function result is not of the declared type.\n";
	cout << "  Function name: " << fn_name.to_string() << "\n";	
	cout << "  Arity: " << arity() << "\n";
  cout << "Parameters:\n\n";
  for (unsigned int i=0 ; i < actual_args.size() ; i++)
  {
    if (actual_args[i].total_number_of_nodes() < 50)
      actual_args[i].print_indented(cout);
    else
      cout << "...";
    cout << "\n\n";
  }
  cout << "\n\nResult:\n\n";
  res.print_indented(cout);
	Program::get_singleton().print_stack();
	cout << endl;
	halt;
}

////////////////////////////////////////////////////////////////////////////////

Closure::Closure(fn_def basic_fn, ref<Env> ext_env) : basic_fn(basic_fn), ext_env(ext_env)
{

}

PlainId Closure::name()
{
  return basic_fn->name();
}

int Closure::arity()
{
  return basic_fn->arity();
}

Term Closure::evaluate_if_args_match(term_v &actual_args, LocalDefs &lds, Env &in_env)
{
  assert(in_env.is_empty());  //!! REMOVE
  
  return basic_fn->evaluate_if_args_match(actual_args, lds, *ext_env);
}

#include "common.h"
#include "statements.h"
#include "decls.h"



NextAction::NextAction(ActionType action) : action(action)
{
  assert(action == continue_normal_execution || action == break_inner_loop);
}

NextAction::NextAction(Term value) : action(action), value(value)
{
  action = return_from_function;
}

bool NextAction::is_normal()
{
  return action == continue_normal_execution;
}

bool NextAction::is_break()
{
  return action == break_inner_loop;
}

bool NextAction::is_return()
{
  return action == return_from_function;
}

Term NextAction::result()
{
  assert(is_return());
  return value;
}

////////////////////////////////////////////////////////////////////////////////

NextAction NullStatement::execute(Env &env, LocalDefs &ie)
{
  return NextAction(NextAction::continue_normal_execution);
}

////////////////////////////////////////////////////////////////////////////////

Assignment::Assignment(PlainId var_name, Expr expr) : var_name(var_name), expr(expr)
{

}

Assignment::Assignment(PlainId var_name, Expr expr, ::type type) : var_name(var_name), expr(expr), type_(type)
{

}

NextAction Assignment::execute(Env &env, LocalDefs &ie)
{
	Term val = expr.evaluate(env, ie);
	if (!type_.is_null() && !type_->contains(val))
	{
    cout << "Error in type assignment. The value is not of the declared type.\n";
	  cout << "  Variable name: " << var_name.to_string() << "\n";	
	  cout << "  Value:\n\n";	
    val.print(cout);
	  Program::get_singleton().print_stack();
	  cout << endl;
	  halt;
	}
	env.set(var_name, val);
	return NextAction(NextAction::continue_normal_execution);
}

////////////////////////////////////////////////////////////////////////////////

ReturnStmt::ReturnStmt(Expr expr) : expr(expr)
{

}

NextAction ReturnStmt::execute(Env &env, LocalDefs &ie)
{
	Term val = expr.evaluate(env, ie);
	return NextAction(val);
}

////////////////////////////////////////////////////////////////////////////////

StmtSeq::StmtSeq(statement_v &stmts) : stmts(stmts)
{

}

NextAction StmtSeq::execute(Env &env, LocalDefs &ie)
{
	for (unsigned int i=0 ; i < stmts.size() ; i++)
	{
		NextAction res = stmts[i]->execute(env, ie);
		if (!res.is_normal())
			return res;
	}

	return NextAction(NextAction::continue_normal_execution);
}

////////////////////////////////////////////////////////////////////////////////

IfStmt::IfStmt(Expr cond, statement &if_true) : cond(cond), if_true(if_true)
{

}

IfStmt::IfStmt(Expr cond, statement &if_true, statement &if_false)
 : cond(cond), if_true(if_true), if_false(if_false)
{

}

NextAction IfStmt::execute(Env &env, LocalDefs &ie)
{
	Term ec = cond.evaluate(env, ie);
	
	if (!ec.is_true() && !ec.is_false())
	{
		string ecs = ec.to_string(true);
		cout << "Condition for if statement doesn't evaluate to either true or false:\n";
		cout << ecs << endl;
		halt;	
	}
	//assert(ec.is_true() || ec.is_false());

	if (ec.is_true())
		return if_true->execute(env, ie);
	else if (!if_false.is_null())
		return if_false->execute(env, ie);
	else
		return NextAction(NextAction::continue_normal_execution);
}

////////////////////////////////////////////////////////////////////////////////

LoopStmt::LoopStmt(statement &body) : body(body)
{
	cond = symb_expr(Symbol("true"));
	is_tail_cond = false;
}

LoopStmt::LoopStmt(Expr cond, statement &body) : cond(cond), body(body)
{
	is_tail_cond = false;
}

LoopStmt::LoopStmt(Expr cond, bool is_tail_cond, statement &body)
: cond(cond), is_tail_cond(is_tail_cond), body(body)
{

}

NextAction LoopStmt::execute(Env &env, LocalDefs &ie)
{
	for (bool first=true ; ; first=false)
	{
		Term ec = first && is_tail_cond ? bool_obj(true) : cond.evaluate(env, ie);
		assert(ec.is_true() || ec.is_false());

		if (ec.is_true())
		{
			NextAction res = body->execute(env, ie);
			if (res.is_return())
				return res;
		  if (res.is_break())
  			return NextAction(NextAction::continue_normal_execution);
		}
		else
		{
			return NextAction(NextAction::continue_normal_execution);
		}
	}
}

////////////////////////////////////////////////////////////////////////////////

ForStatement::ForStatement(PlainId var, Expr src_expr, statement &body)
: var(var), src_expr(src_expr), body(body)
{
  if (src_expr.is_null())
  {
    assert(idx_var.is_null());
    assert(!start_expr.is_null());
    assert(!end_expr.is_null());
  }
  else
  {
    assert(start_expr.is_null());
    assert(end_expr.is_null());
  }
}

ForStatement::ForStatement(PlainId var, PlainId idx_var, Expr src_expr, statement &body)
: var(var), idx_var(idx_var), src_expr(src_expr), body(body)
{
  if (src_expr.is_null())
  {
    assert(idx_var.is_null());
    assert(!start_expr.is_null());
    assert(!end_expr.is_null());
  }
  else
  {
    assert(start_expr.is_null());
    assert(end_expr.is_null());
  }
}

ForStatement::ForStatement(PlainId var, Expr start_expr, Expr end_expr, statement &body)
: var(var), start_expr(start_expr), end_expr(end_expr), body(body)
{
  if (src_expr.is_null())
  {
    assert(idx_var.is_null());
    assert(!start_expr.is_null());
    assert(!end_expr.is_null());
  }
  else
  {
    assert(start_expr.is_null());
    assert(end_expr.is_null());
  }
}

NextAction ForStatement::execute(Env &env, LocalDefs &ie)
{
  if (src_expr.is_null())
  {
    assert(idx_var.is_null());
    assert(!start_expr.is_null());
    assert(!end_expr.is_null());

    Term start_obj = start_expr.evaluate(env, ie);
    Term end_obj = end_expr.evaluate(env, ie);
    
    if (start_obj.is_int() && end_obj.is_int()) // && start_obj.get_int() <= end_obj.get_int())
    {
      int start = start_obj.get_int();
      int end = end_obj.get_int();
      
      //assert(start <= end);
      
      for (int i=start ; i <= end ; i++)
	    {
	      env.set(var, int_obj(i));
		    NextAction res = body->execute(env, ie);
		    env.unset(var);
    		
		    if (res.is_return())
			    return res;
	      if (res.is_break())
			    return NextAction(NextAction::continue_normal_execution);
	    }
	    
      return NextAction(NextAction::continue_normal_execution);
    }

    cout << "Invalid range in for loop or sequence comprehension\n";
    cout << start_obj.to_string(true) << endl;
    cout << end_obj.to_string(true) << endl;
    Program::get_singleton().print_stack();    
    halt;
  }
  else
  {
    assert(start_expr.is_null());
    assert(end_expr.is_null());
    
    Term src = src_expr.evaluate(env, ie);
    
    int len = src.size();
    for (int i=0 ; i < len ; i++)
	  {
	    env.set(var, src.item(i));
	    if (idx_var != PlainId())
	      env.set(idx_var, int_obj(i));
  	  
		  NextAction res = body->execute(env, ie);
  		
		  env.unset(var);
	    if (idx_var != PlainId())
	      env.unset(idx_var);
  		
		  if (res.is_return())
			  return res;
	    if (res.is_break())
			  return NextAction(NextAction::continue_normal_execution);
	  }
  }
  
  return NextAction(NextAction::continue_normal_execution);
}

////////////////////////////////////////////////////////////////////////////////

LetStatement::LetStatement(fn_def_v &fds, statement &body) : fds(fds), body(body)
{

}

NextAction LetStatement::execute(Env &env, LocalDefs &lds)
{
  ref<Env> e(new Env(env));
  
  fn_def_v cls(fds.size());
  for (unsigned int i=0 ; i < cls.size() ; i++)
  {
    fn_def fd = fds[i];
    
    if (fd->arity() == 0)
    {
      term_v ts;
      Term val = fd->evaluate_if_args_match(ts, lds, env);
      Expr val_expr = const_expr(val);
      cls[i] = fn_def(new StdFnDef(fd->name(), val_expr, type(new PseudoTypeAny())));       
    }
    else
    {
      cls[i] = fn_def(new Closure(fd, e));
    }
  }

  LocalDefs lds2(cls, lds);
  
  return body->execute(env, lds2);
}

////////////////////////////////////////////////////////////////////////////////

NextAction BreakStmt::execute(Env &env, LocalDefs &ie)
{
  return NextAction(NextAction::break_inner_loop);
}

////////////////////////////////////////////////////////////////////////////////

NextAction FailStmt::execute(Env &env, LocalDefs &ie)
{
  cout << "Run time failure\n";
  Program::get_singleton().print_stack();
  halt;  
};

////////////////////////////////////////////////////////////////////////////////

AssertStmt::AssertStmt(Expr &expr) : expr(expr)
{

}

NextAction AssertStmt::execute(Env &env, LocalDefs &ie)
{
	Term v = expr.evaluate(env, ie);
  if (!v.is_true())
  {
    cout << "Assertion failed somewhere\n";
    Program::get_singleton().print_stack();
    halt;  
  }

	return NextAction(NextAction::continue_normal_execution);
}

////////////////////////////////////////////////////////////////////////////////

PrintStmtInFn::PrintStmtInFn(Expr &expr) : expr(expr)
{

}

NextAction PrintStmtInFn::execute(Env &env, LocalDefs &ie)
{
	Term v = expr.evaluate(env, ie);
	cout << "\n";
	v.print_indented(cout);
	cout << endl;
	//cout << v.to_string() << endl;
	return NextAction(NextAction::continue_normal_execution);
}

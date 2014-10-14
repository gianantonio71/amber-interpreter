#include "common.h"
#include "expression.h"
#include "scexpr.h"
#include "decls.h"
#include "statements.h"
#include "load_obj.h"
#include "os_interface.h"


Env::Env()
{

}

Env::Env(const Env &env) : assignments(env.assignments)
{

}

Env:: Env(Env &env1, Env &env2) : assignments(env1.assignments)
{
  merge_but_fail_on_conflits(env2);

}

void Env::set(PlainId s, Term value)
{
	assignments[s.index()] = value;
}

void Env::unset(PlainId s)
{
	int n = assignments.erase(s.index());
	assert(n == 1);	
}

Term Env::get(PlainId s)
{
  map<int, Term>::const_iterator it = assignments.find(s.index());

  if (it != assignments.end())
    return it->second;

	string ss = s.to_string();
	cout << "Variable not set: " << ss << endl;
	cout << to_string(true) << endl;
	Program::get_singleton().print_stack();
	halt;
}

bool Env::is_set(PlainId s)
{
	return assignments.find(s.index()) != assignments.end();
}

bool Env::is_empty()
{
  return assignments.empty();
}
  
void Env::merge_at_lower_precedence(Env &env)
{
  for (map<int, Term>::const_iterator si=env.assignments.begin() ; si != env.assignments.end() ; ++si)
  {
    map<int, Term>::const_iterator ti = assignments.find(si->first);
    
    if (ti != assignments.end())
      assignments[si->first] = si->second;
  }
}

void Env::merge_but_fail_on_conflits(Env &env)
{
  for (map<int, Term>::const_iterator si=env.assignments.begin() ; si != env.assignments.end() ; ++si)
  {
    map<int, Term>::const_iterator ti = assignments.find(si->first);
    
    if (ti != assignments.end())
    {
			string se_this = to_string(true);
			string se_other = env.to_string(true);
			cout << "Conflict during merge. Environments:\n---------\n" << se_this
					 << "\n---------\n" << se_other << endl;
		  Program::get_singleton().print_stack();
			halt;
		}
		
    assignments[si->first] = si->second;
  }
}

//void Env::merge_by_addition(Env &env)
//{
//  for (map<int, Term>::const_iterator si=env.assignments.begin() ; si != env.assignments.end() ; ++si)
//  {
//    map<int, Term>::const_iterator ti = assignments.find(si->first);
//    
//    if (ti == assignments.end())
//    {
//      assignments[si->first] = si->second;
//    }
//    else
//    {
//      string s1 = to_string(true);
//      string s2 = env.to_string(true);
//      
//			assert(si->second.is_set());
//			assert(ti->second.top_symbol().is_nil());
//			
//			assignments[si->first] = term(Symbol::nil(), si->second.subterms(), ti->second.subterms());
//		}
//	}
//}

bool Env::is_compatible(Env &env)
{
  for (map<int, Term>::const_iterator it=env.assignments.begin() ; it != env.assignments.end() ; ++it)
    if (assignments.find(it->first) != assignments.end())
      return false;

  return true;
}

string Env::to_string(bool always)
{
	if (!always)
		return "";

	ostringstream oss;

  for (map<int, Term>::iterator it=assignments.begin() ; it != assignments.end() ; ++it)
	{
		PlainId s = PlainId::get_id_by_index(it->first);
    oss << s.to_string()
        << " = "
        << it->second.to_string(true)
        << "; ";
	}

	string s = oss.str();
	return s.length() == 0 ? "EMPTY" : s;
}

////////////////////////  LocalDefs  ////////////////////////


LocalDefs::LocalDefs()
{

}

LocalDefs::LocalDefs(fn_def_v &fns, LocalDefs &lds)
{
  fndefs_lookup_table = lds.fndefs_lookup_table;
  
  for (unsigned int i=0 ; i < fns.size() ; i++)
  {
    fn_def fd = fns[i];
    
    int hash_code = hash(fd->name(), fd->arity());
    fndefs_lookup_table[hash_code] = fd;
    
	  //extern bool tracing_on;
	  //if (tracing_on)
		//  cout << "Function definition " << i << ", root symbol: " << fd->name().to_string() << "/" << fd->arity() << endl;
  }
}

fn_def LocalDefs::get_candidate_fn(PlainId fn_name, int arity)
{
  return fndefs_lookup_table[hash(fn_name, arity)];
}

int LocalDefs::hash(PlainId fn_name, int arity)
{
  assert(arity < 16 && fn_name.index() < 16 * 1024);
  
  return (fn_name.index() << 4) | arity;
}

////////////////////////////////////////////////////////////

Term Expr::evaluate(Env &env, LocalDefs &ie)
{
  return obj->evaluate(env, ie);
}

bool Expr::has_to_be_included(Env &env, LocalDefs &ie)
{
  return obj->has_to_be_included(env, ie);
}

bool Expr::is_null()
{
  return obj.is_null();
}

Expr mk_expr(ref<ExprObj> obj)
{
  Expr e;
  e.obj = obj;
  return e;
}

static Expr mk_expr(ExprObj *obj)
{
  return mk_expr(ref<ExprObj>(obj));
}

ref<ExprObj> get_expr_obj(Expr e)
{
  return e.obj;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//////////////////////  ExprObjImpl  ///////////////////////

class ExprObjImpl : public ExprObj
{
public:
  Term evaluate()
	{
		Env       e;
		LocalDefs ie;

		return evaluate(e, ie);
	}

  Term evaluate(Env &env)
	{
		LocalDefs ie;

		return evaluate(env, ie);
	}

  virtual Term evaluate(Env &env, LocalDefs &ie) = 0;
  
  bool has_to_be_included(Env &env, LocalDefs &ie)
  {
    return true;
  }
};

///////////////////////////  NumExprObj  ///////////////////////////

class SymbExprObj : public ExprObjImpl
{
public:
  SymbExprObj(Symbol value) : value(value)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    return symbol_obj(value);
  }

private:
  Symbol value;
};

Expr symb_expr(Symbol s)
{
  return mk_expr(new SymbExprObj(s));
}

///////////////////////////  SeqExprObj  ///////////////////////////

class SeqExprObj : public ExprObjImpl
{
public:
  SeqExprObj()
  {

  }

  SeqExprObj(expr_v &head) : head(head)
  {

  }

  SeqExprObj(expr_v &head, Expr tail) : head(head), tail(tail)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term ev_tail;
    if (!tail.is_null())
    {
      ev_tail = tail.evaluate(env, ie);
      assert(ev_tail.is_seq());
    }

    int tail_len = ev_tail.is_null() ? 0 : ev_tail.size();
    int head_len = head.size();
      
    term_v ts;
    ts.reserve(head_len + tail_len);
    
    for (int i=0 ; i < head_len ; i++)
      if (head[i].has_to_be_included(env, ie))
        ts.push_back(head[i].evaluate(env, ie));
      
    for (int i=0 ; i < tail_len ; i++)
      ts.push_back(ev_tail.item(i));
    
    return seq_obj(ts);
  }

private:
  expr_v head;
  Expr tail;
};

Expr empty_seq_expr()
{
  return mk_expr(new SeqExprObj);
}

Expr seq_expr(expr_v &head)
{
  return mk_expr(new SeqExprObj(head));
}

Expr seq_expr(expr_v &head, Expr tail)
{
  return mk_expr(new SeqExprObj(head, tail));
}

///////////////////////////  SetExprObj  ///////////////////////////

class SetExprObj : public ExprObjImpl
{
public:
  SetExprObj()
  {

  }

  SetExprObj(expr_v &elems) : elems(elems)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    term_v ts;
    
    for (int i=0, size=elems.size() ; i < size ; i++)
      if (elems[i].has_to_be_included(env, ie))
        ts.push_back(elems[i].evaluate(env, ie));
    
    return set_obj(ts);
  }

private:
  expr_v elems;
};

Expr empty_set_expr()
{
  return mk_expr(new SetExprObj);
}

Expr set_expr(expr_v &elems)
{
  return mk_expr(new SetExprObj(elems));
}

///////////////////////////  MapExprObj  ///////////////////////////

class MapExprObj : public ExprObjImpl
{
public:
  MapExprObj()
  {

  }

  MapExprObj(expr_v &keys, expr_v &values) : keys(keys), values(values)
  {
    assert(keys.size() == values.size());
  }

  MapExprObj(vector<Symbol> &symbol_keys, expr_v &values) : values(values)
  {
    assert(symbol_keys.size() == values.size());
    
    int size = symbol_keys.size();
    keys.resize(size);
    
    for (int i=0 ; i < size ; i++)
      keys[i] = symb_expr(symbol_keys[i]);    
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    term_v kts, vts;
    
    for (int i=0, size=keys.size() ; i < size ; i++)
      if (values[i].has_to_be_included(env, ie))
      {
        kts.push_back(keys[i].evaluate(env, ie));
        vts.push_back(values[i].evaluate(env, ie));
      }
    
    return map_obj(kts, vts);
  }

private:
  expr_v keys;
  expr_v values;
};

Expr empty_map_expr()
{
  return mk_expr(new MapExprObj);
}

Expr map_expr(expr_v &keys, expr_v &values)
{
  return mk_expr(new MapExprObj(keys, values));
}

Expr tuple_expr(vector<Symbol> &keys, expr_v &values)
{
  return mk_expr(new MapExprObj(keys, values));
}

///////////////////////////  TagObjExprObj  ///////////////////////////

class TagObjExprObj : public ExprObjImpl
{
public:
  TagObjExprObj(Expr tag, Expr obj) : tag(tag), obj(obj)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term ev_tag = tag.evaluate(env, ie);
    Term ev_obj = obj.evaluate(env, ie);
    
    return tagged_obj(ev_tag.get_symbol(), ev_obj);
  }

private:
  Expr tag;
  Expr obj;
};

Expr tag_obj_expr(Expr tag, Expr obj)
{
  return mk_expr(new TagObjExprObj(tag, obj));
}

Expr tag_obj_expr(Symbol tag, Expr obj)
{
  return tag_obj_expr(symb_expr(tag), obj);
}

Expr tag_obj_expr(string tag, Expr obj)
{
  return tag_obj_expr(Symbol(tag), obj);
}

///////////////////////////  ConstExprObj  ///////////////////////////

class ConstExprObj : public ExprObjImpl
{
public:
  ConstExprObj(Term val)
  {
    value = val;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    return value;
  }

private:
  Term value;
};

Expr const_expr(Term value)
{
  return mk_expr(new ConstExprObj(value));
}

///////////////////////////  NumExprObj  ///////////////////////////

class NumExprObj : public ExprObjImpl
{
public:
  NumExprObj(int val)
  {
    value = val;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    return int_obj(value);
  }

private:
  int value;
};

Expr num_expr(int n)
{
  return mk_expr(new NumExprObj(n));
}

/////////////////////////  ConstOrVarObj  /////////////////////////

class ConstOrVarObj : public ExprObjImpl
{
public:
  ConstOrVarObj(PlainId name)
  {
    assert(name != PlainId());
    
    const_or_var_name = name;
  }

  Term evaluate(Env &env, LocalDefs &lds)
  {
    static term_v empty_term_vector;

    // Let's try to see if it's a variable
    if (env.is_set(const_or_var_name))
      return env.get(const_or_var_name);

    // Maybe it's local or it's defined in a using/with block
    fn_def fn = lds.get_candidate_fn(const_or_var_name, 0);
    if (!fn.is_null())
    {
      Term res = fn->evaluate_if_args_match(empty_term_vector, lds);
      assert(!res.is_null());
      return res;
    }
    
    // Then it must be a global constant
    fn_def_v fns = Program::get_singleton().get_candidate_fns(const_or_var_name, 0);
    if (fns.size() == 1)
    {
      Term res = fns[0]->evaluate_if_args_match(empty_term_vector, lds);
      assert(!res.is_null());
      return res;
    }
    assert(fns.size() == 0);

    cout << "Constant or variable not found: " << const_or_var_name.to_string() << endl;
    Program::get_singleton().print_stack();    
    halt;
  }

private:
  PlainId const_or_var_name;
};

Expr const_or_var_expr(PlainId s)
{
  return mk_expr(new ConstOrVarObj(s));
}

/////////////////////////  FnCallExprObj  /////////////////////////

class FnCallExprObj : public ExprObjImpl
{
public:
  FnCallExprObj(PlainId fn_name, expr_v &params)
  : fn_name(fn_name), params(params)  
  {
    assert(fn_name != PlainId());
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    term_v args(params.size());
    for (unsigned int i=0 ; i < args.size() ; i++)
      args[i] = params[i].evaluate(env, ie);

    // Local functions have higher precedence, followed by those defined in a using/with block
    fn_def fn = ie.get_candidate_fn(fn_name, params.size());
    if (!fn.is_null())
    {
      Term res = fn->evaluate_if_args_match(args, ie);

      if (res.is_null())
        fn->evaluate_if_args_match(args, ie);

      if (!res.is_null())
        return res;
    }
    
    // Now let's see if it's a global function
    fn_def_v fns = Program::get_singleton().get_candidate_fns(fn_name, params.size());
    for (unsigned int i=0 ; i < fns.size() ; i++)
    {
      PlainId fn = fns[i]->name();
      int fa = fns[i]->arity();
      
      assert(fns[i]->name() == fn_name && fns[i]->arity() == params.size());
      
      Term res = fns[i]->evaluate_if_args_match(args, ie);
      if (!res.is_null())
        return res;
    }
    
    cout << "Function not found: " << fn_name.to_string() << "/" << args.size() << "\nArguments:\n";
    
    for (unsigned int i=0 ; i < args.size() ; i++)
    {
      args[i].print_indented(cout);
      cout << endl;
    }
    
    Program::get_singleton().print_stack();
    
    {
      int i = 0;
      
      PlainId fn = fns[i]->name();
      int fa = fns[i]->arity();
      
      assert(fns[i]->name() == fn_name && fns[i]->arity() == params.size());
      
      Term res = fns[i]->evaluate_if_args_match(args, ie);
      if (!res.is_null())
        return res;
    }

    halt;
  }

private:
  PlainId fn_name;
  expr_v params;
};

Expr fn_call_expr(PlainId s, expr_v &args)
{
  return mk_expr(new FnCallExprObj(s, args));
}

//////////////////////  AndExprObj  //////////////////////

class AndExprObj : public ExprObjImpl
{
public:
  AndExprObj(Expr e1, Expr e2)
  {
    expr1 = e1;
    expr2 = e2;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t1 = expr1.evaluate(env, ie);
    
    if (t1.is_false())
      return t1;
      
    assert(t1.is_true());
    
    Term t2 = expr2.evaluate(env, ie);
    
    assert(t2.is_true() || t2.is_false());
    
    return t2;
  }

private:
  Expr expr1, expr2;
};
 

Expr and_expr(Expr expr1, Expr expr2)
{
  return mk_expr(new AndExprObj(expr1, expr2));
}

//////////////////////  OrExprObj  //////////////////////

class OrExprObj : public ExprObjImpl
{
public:
  OrExprObj(Expr e1, Expr e2)
  {
    expr1 = e1;
    expr2 = e2;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t1 = expr1.evaluate(env, ie);
    
    if (t1.is_true())
      return t1;
      
    Term t2 = expr2.evaluate(env, ie);
    
    assert(t1.is_false());
    assert(t2.is_true() || t2.is_false());
    
    return t2;
  }

private:
  Expr expr1, expr2;
};
 

Expr or_expr(Expr expr1, Expr expr2)
{
  return mk_expr(new OrExprObj(expr1, expr2));
}

//////////////////////  NotExprObj  //////////////////////

class NotExprObj : public ExprObjImpl
{
public:
  NotExprObj(Expr e)
  {
    expr = e;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t = expr.evaluate(env, ie);
    
    if (t.is_true())
      return symbol_obj(Symbol::symb_false());
    
    if (!t.is_false())
    {
      cout << "Non boolean argument for not operator\n";
      Program::get_singleton().print_stack();
      halt;    
    }  

    return symbol_obj(Symbol::symb_true());
  }

private:
  Expr expr;
};
 

Expr not_expr(Expr expr)
{
  return mk_expr(new NotExprObj(expr));
}

//////////////////////  EqExprObj  //////////////////////

class EqExprObj : public ExprObjImpl
{
public:
  EqExprObj(Expr e1, Expr e2)
  {
    expr1 = e1;
    expr2 = e2;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t1 = expr1.evaluate(env, ie);
    Term t2 = expr2.evaluate(env, ie);
    
    return symbol_obj(t1 == t2 ? Symbol::symb_true() : Symbol::symb_false());
  }

private:
  Expr expr1, expr2;
};
 

Expr eq_expr(Expr expr1, Expr expr2)
{
  return mk_expr(new EqExprObj(expr1, expr2));
}

//////////////////////  IfExprObj  //////////////////////

class IfExprObj : public ExprObjImpl
{
public:
  IfExprObj(Expr cond, Expr if_true_expr, Expr if_false_expr)
  : cond(cond), if_true_expr(if_true_expr), if_false_expr(if_false_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term c = cond.evaluate(env, ie);
    
    if (c.is_true())
      return if_true_expr.evaluate(env, ie);
    
    if (c.is_false())
      return if_false_expr.evaluate(env, ie);
    
    cout << "The condition of an if statement in not a boolean value\n";
    cout << "  Actual value: " << c.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;    
    
  }

private:
  Expr cond;
  Expr if_true_expr;
  Expr if_false_expr;
};
 

Expr if_expr(Expr cond, Expr if_true_expr, Expr if_false_expr)
{
  return mk_expr(new IfExprObj(cond, if_true_expr, if_false_expr));
}

/////////////////////////  SCExprObj  /////////////////////////

class SCExprObj : public ExprObjImpl
{
public:
  SCExprObj(Expr expr, ref<SCClause> clause) : expr(expr), clause(clause)
  {

  }

  SCExprObj(Expr expr, ref<SCClause> clause, Expr sel_expr)
  : expr(expr), clause(clause), sel_expr(sel_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
  	vector<Env> out_envs;
	  clause->generate(env, out_envs, ie);
	  
	  int size = out_envs.size();

    term_v elems;
    elems.reserve(size);

    for (int i=0 ; i < size ; i++)
    {
      Env loc_env(env, out_envs[i]);
	    if (sel_expr.is_null() || sel_expr.evaluate(loc_env, ie).is_true())
	      elems.push_back(expr.evaluate(loc_env, ie));
	  }

    return set_obj(elems);
  }

private:
  Expr expr;
  ref<SCClause> clause;
  Expr sel_expr;
};

Expr sc_expr(Expr expr, ref<SCClause> clause)
{
  return mk_expr(new SCExprObj(expr, clause));
}

Expr sc_expr(Expr expr, ref<SCClause> clause, Expr sel_expr)
{
  return mk_expr(new SCExprObj(expr, clause, sel_expr));
}

/////////////////////////  MCExprObj  /////////////////////////

class MCExprObj : public ExprObjImpl
{
public:
  MCExprObj(Expr key_expr, Expr value_expr, ref<SCClause> clause)
  : key_expr(key_expr), value_expr(value_expr), clause(clause)
  {

  }

  MCExprObj(Expr key_expr, Expr value_expr, ref<SCClause> clause, Expr sel_expr)
  : key_expr(key_expr), value_expr(value_expr), clause(clause), sel_expr(sel_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
  	vector<Env> out_envs;
	  clause->generate(env, out_envs, ie);
	  
	  string env_str = env.to_string(true);
	  
	  int size = out_envs.size();

    term_v keys, values;
    keys.reserve(size);
    values.reserve(size);

    for (int i=0 ; i < size ; i++)
    {
      Env loc_env(env, out_envs[i]);
	    if (sel_expr.is_null() || sel_expr.evaluate(loc_env, ie).is_true())
      {
        keys.push_back(key_expr.evaluate(loc_env, ie));
        values.push_back(value_expr.evaluate(loc_env, ie));
      }
    }

    return map_obj(keys, values);
  }

private:
  Expr key_expr;
  Expr value_expr;
  ref<SCClause> clause;
  Expr sel_expr;
};

Expr mc_expr(Expr key_expr, Expr value_expr, ref<SCClause> clause)
{
  return mk_expr(new MCExprObj(key_expr, value_expr, clause));
}

Expr mc_expr(Expr key_expr, Expr value_expr, ref<SCClause> clause, Expr sel_expr)
{
  return mk_expr(new MCExprObj(key_expr, value_expr, clause, sel_expr));
}

/////////////////////////  LCExpr  /////////////////////////

class LCExprObj : public ExprObjImpl
{
public:
  LCExprObj(Expr res, PlainId var, Expr seq)
  {
    init(res, var, PlainId(), seq, Expr());
  }

  LCExprObj(Expr res, PlainId var, Expr seq, Expr cond)
  {
    init(res, var, PlainId(), seq, cond);
  }

  LCExprObj(Expr res, PlainId var, PlainId idx_var, Expr seq)
  {
    init(res, var, idx_var, seq, Expr());
  }

  LCExprObj(Expr res, PlainId var, PlainId idx_var, Expr seq, Expr cond)
  {
    init(res, var, idx_var, seq, cond);
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term ev_in_seq = input_seq.evaluate(env, ie);
    //term_v values = ev_in_seq.unbuild_seq();

    if (!ev_in_seq.is_seq())
    {
      cout << "Source object in list comprehension expression is not a sequence:\n" << ev_in_seq.to_string() << endl;
      Program::get_singleton().print_stack();
      halt;
    }

    term_v res;
    
    if (env.is_set(var_name))
    {
		  cout << "The variable " << var_name.to_string() << " is already set in environment:\n" << env.to_string(true) << endl;
		  Program::get_singleton().print_stack();
		  halt;
    }
    
    assert(!env.is_set(var_name));
    
    Env loc_env(env);
    
    for (int i=0 ; i < ev_in_seq.size() ; i++)
    {
      Term value = ev_in_seq.item(i);

      loc_env.set(var_name, value); 
      if (idx_var_name != PlainId())
        loc_env.set(idx_var_name, int_obj(i));

      bool include = true;

      if (!sel_cond.is_null())
      {
        Term ev_cond = sel_cond.evaluate(loc_env, ie);

				string sc = ev_cond.to_string();

        assert(ev_cond.is_true() || ev_cond.is_false());

        if (!ev_cond.is_true())
          include = false;
      }

      if (include)
      {
        Term rst = result.evaluate(loc_env, ie);
        res.push_back(rst);
      }
    }

    return seq_obj(res);
  }

private:
  void init(Expr res, PlainId var, PlainId idx_var, Expr seq, Expr cond)
  {
    result = res;
    var_name = var;
    idx_var_name = idx_var;
    input_seq = seq;
    sel_cond = cond;
  }

private:
  Expr result;
  PlainId var_name;
  PlainId idx_var_name;
  Expr input_seq;
  Expr sel_cond;
};

Expr lc_expr(Expr res, PlainId var, Expr seq)
{
  return mk_expr(new LCExprObj(res, var, seq));
}

Expr lc_expr(Expr res, PlainId var, Expr seq, Expr cond)
{
  return mk_expr(new LCExprObj(res, var, seq, cond));
}

Expr lc_expr(Expr res, PlainId var, PlainId idx_var, Expr seq)
{
  return mk_expr(new LCExprObj(res, var, idx_var, seq));
}

Expr lc_expr(Expr res, PlainId var, PlainId idx_var, Expr seq, Expr cond)
{
  return mk_expr(new LCExprObj(res, var, idx_var, seq, cond));
}

//////////////////////  MBTestExprObj  //////////////////////

class MBTestExprObj : public ExprObjImpl
{
public:
  MBTestExprObj(Expr e, type t)
  {
    expr = e;
    type_ = t;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term res = expr.evaluate(env, ie);
    return bool_obj(type_->contains(res));
  }

private:
  Expr expr;
  type type_;
};
 

Expr mb_test_expr(Expr expr, type type)
{
  return mk_expr(new MBTestExprObj(expr, type));
}

/////////////////////////  AccExprObj  /////////////////////////

class AccExprObj : public ExprObjImpl
{
public:
  AccExprObj(Expr e, Symbol s)
  {
    expr = e;
    symbol = symbol_obj(s);
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term res = expr.evaluate(env, ie);

    while (res.is_tagged_obj())
      res = res.untag();
      
    if (res.is_map() && res.has_key(symbol))
      return res.lookup(symbol);
      
		cout << "Not a map/tuple or no key: " << symbol.to_string(true) << " in object:\n" << res.to_string(true) << endl;
		Program::get_singleton().print_stack();
		halt;
  }

private:
  Expr expr;
  Term symbol;
};

Expr acc_expr(Expr expr, Symbol symbol)
{
  return mk_expr(new AccExprObj(expr, symbol));
}

/////////////////////////  AccTestExprObj  /////////////////////////

class AccTestExprObj : public ExprObjImpl
{
public:
  AccTestExprObj(Expr e, Symbol s)
  {
    expr = e;
    symbol = symbol_obj(s);
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term res = expr.evaluate(env, ie);

    while (res.is_tagged_obj())
      res = res.untag();
      
    if (res.is_map())
      return bool_obj(res.has_key(symbol));
      
		cout << "Not a map/tuple:\n" << res.to_string(true) << endl;
		Program::get_singleton().print_stack();
		halt;
  }

private:
  Expr expr;
  Term symbol;
};

Expr acc_test_expr(Expr expr, Symbol symbol)
{
  return mk_expr(new AccTestExprObj(expr, symbol));
}

/////////////////////////  AccStarExprObj  /////////////////////////

class UntagExprObj : public ExprObjImpl
{
public:
  UntagExprObj(Expr e)
  {
    expr = e;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term res = expr.evaluate(env, ie);
    if (res.is_tagged_obj())
      return res.untag();

		cout << "Not a tagged object:\n" << res.to_string(true) << endl;
		Program::get_singleton().print_stack();
		halt;
  }

private:
  Expr expr;
};

Expr untag_expr(Expr expr)
{
  return mk_expr(new UntagExprObj(expr));
}

/////////////////////////  ClickExprObj  /////////////////////////

class TagExprObj : public ExprObjImpl
{
public:
  TagExprObj(Expr r, Expr e)
  {
    root = r;
    expr = e;
  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term tag = root.evaluate(env, ie);
    Term obj = expr.evaluate(env, ie);
    
    if (tag.is_symbol())
      return tagged_obj(tag.get_symbol(), obj);

		cout << "Tag is not a symbol:\n" << tag.to_string(true) << endl;
		Program::get_singleton().print_stack();
		halt;
  }

private:
  Expr root;
  Expr   expr;
};

Expr tag_expr(Expr root, Expr expr)
{
  return mk_expr(new TagExprObj(root, expr));
}

/////////////////////////  WithExprObj  /////////////////////////

class WithExprObj : public ExprObjImpl
{
public:
  WithExprObj(Expr e, fn_def_v fns) : expr(e), fns(fns)
  {

  }

  Term evaluate(Env &env, LocalDefs &lds)
  {
    ref<Env> e(new Env(env));
    
    fn_def_v cls(fns.size());
    for (unsigned int i=0 ; i < cls.size() ; i++)
    {
      fn_def fd = fns[i];
      
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

    return expr.evaluate(env, lds2);
  }

  //Term evaluate(Env &env, LocalDefs &lds)
  //{
  //  ref<Env> e(new Env(env));
  //  
  //  fn_def_v cls(fns.size());
  //  for (unsigned int i=0 ; i < cls.size() ; i++)
  //    cls[i] = fn_def(new Closure(fns[i], e));
  //    
  //  LocalDefs lds2(cls, lds);

  //  return expr.evaluate(env, lds2);
  //}

private:
  Expr expr;
  fn_def_v fns;
};

Expr with_expr(Expr expr, fn_def_v &rs)
{
  return mk_expr(new WithExprObj(expr, rs));
}

///////////////////////////  ExQualExprObj  //////////////////////////

class ExQualExprObj : public ExprObjImpl
{
public:
  ExQualExprObj(ref<SCClause> clause) : clause(clause)
  {

  }

  ExQualExprObj(ref<SCClause> clause, Expr sel_expr) : clause(clause), sel_expr(sel_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
  	vector<Env> out_envs;
	  clause->generate(env, out_envs, ie);
	  
	  int size = out_envs.size();

    term_v elems;
    elems.reserve(size);

    for (int i=0 ; i < size ; i++)
    {
      Env gen_env(env, out_envs[i]);
	    if (sel_expr.is_null() || sel_expr.evaluate(gen_env, ie).is_true())
	      return bool_obj(true);
	  }
	 
	  return bool_obj(false);
  }
  
private:
  ref<SCClause> clause;
  Expr sel_expr;
};

Expr ex_qual_expr(ref<SCClause> clause)
{
  return mk_expr(new ExQualExprObj(clause));
}

Expr ex_qual_expr(ref<SCClause> clause, Expr sel_expr)
{
  return mk_expr(new ExQualExprObj(clause, sel_expr));
}

/////////////////////////  TryExpr  /////////////////////////

class TryExpr : public ExprObjImpl
{
public:
	TryExpr(expr_v &matched_exprs, vector<pattern_v> &ptrnss, expr_v &res_exprs)
  : matched_exprs(matched_exprs), ptrnss(ptrnss), res_exprs(res_exprs)
	{
	  assert(matched_exprs.size() > 0);
	  
	  assert(ptrnss.size() > 0 && ptrnss.size() == res_exprs.size());
	  
	  for (unsigned int i=0 ; i < ptrnss.size() ; i++)
	    assert(ptrnss[i].size() == matched_exprs.size());

	  //for (unsigned int i=0 ; i < ptrnss.size() ; i++)
	  //  for (unsigned int j=0 ; j < ptrnss[i].size() ; j++)
	  //    ptrnss[i][j]->set_cardinality(required);
	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  term_v ts(matched_exprs.size());
	  for (unsigned int i=0 ; i < ts.size() ; i++)
	    ts[i] = matched_exprs[i].evaluate(env, ie);
	  
	  int n_cases = ptrnss.size();
	  int n_arg = matched_exprs.size();

  //try_again:
	  for (int i=0 ; i < n_cases ; i++)
	  {
		  Env case_env;

		  bool ok = true;

		  for (int j=0 ; j < n_arg ; j++)
		  {
			  Env de;

			  if (!ptrnss[i][j]->matches(ts[j], env, de, true))
			  {
				  ok = false;
				  break;
			  }

			  if (!de.is_compatible(case_env))
				  break;

			  case_env.merge_but_fail_on_conflits(de);

			  string des = de.to_string();
			  string ces = case_env.to_string();
		  }

		  if (ok)
		  {
			  case_env.merge_but_fail_on_conflits(env);
			  return res_exprs[i].evaluate(case_env, ie);
		  }
	  }

	  // Handling the error

	  vector<string> ss(ts.size());
	  for (unsigned int i=0 ; i < ts.size() ; i++)
	    ss[i] = ts[i].to_string();

    cout << "Error in try expression.\n";
	  cout << "Unable to match the following terms:\n\n";
	  for (unsigned int i=0 ; i < ts.size() ; i++)
	  {
	    ts[i].print(cout);
	    cout << "\n";
	  }
	  Program::get_singleton().print_stack();
	  cout << endl;

	  //goto try_again;

	  halt;
	}

private:
	expr_v      matched_exprs;
	vector<pattern_v> ptrnss;
	expr_v      res_exprs;

};

Expr try_expr(expr_v &matched_exprs, vector<pattern_v> &ptrnss, expr_v &res_exprs)
{
  return mk_expr(new TryExpr(matched_exprs, ptrnss, res_exprs));
}

/////////////////////////  ProcExpr  /////////////////////////

class ProcExpr : public ExprObjImpl
{
public:
	ProcExpr(statement &body) : body(body)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Env loc_env(env);
		NextAction res = body->execute(loc_env, ie);
		
		if (!res.is_return())
		{
		  cout << "No return at the end of a procedural block\n";
		  Program::get_singleton().print_stack();
			halt;
		}

		return res.result();
	}

private:
	statement body;
};

Expr proc_expr(statement &body)
{
  return mk_expr(new ProcExpr(body));
}

/////////////////////////  OptInclExpr  /////////////////////////

class OptInclExpr : public ExprObjImpl
{
public:
	OptInclExpr(Expr value, Expr cond) : value(value), cond(cond)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  assert(has_to_be_included(env, ie));
	  
	  return value.evaluate(env, ie);
	}
	
	bool has_to_be_included(Env &env, LocalDefs &ie)
	{
	  Term ec = cond.evaluate(env, ie);
	  
	  if (ec.is_true())
	    return true;
	  
	  if (ec.is_false())
	    return false;
	  
	  cout << "Condition for inclusion does not evaluate to a boolean value\n";
	  ec.print(cout);
	  cout << "\n";
	  Program::get_singleton().print_stack();
	  cout << endl;
	  halt;
	}


private:
	Expr value;
	Expr cond;
};

Expr opt_incl_expr(Expr value, Expr cond)
{
  return mk_expr(new OptInclExpr(value, cond));
}

/////////////////////////  ReplExpr  /////////////////////////

class ReplExpr : public ExprObjImpl
{
public:
	ReplExpr(Expr src, pattern ptrn, Expr value) : src(src), ptrn(ptrn), value(value)
	{
    assert(ptrn->is_fully_bound());
	}

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t = src.evaluate(env, ie);
    return evaluate(t, env, ie);	  
  }

  Term evaluate(Term t, Env &env, LocalDefs &ie)
  {
    Env de(env);
    
    if (ptrn->matches(t, env, de, true))
      return value.evaluate(de, ie);
    
    if (t.is_seq())
    {
      int len = t.size();
      term_v ts(len);
      for (int i=0 ; i < len ; i++)
        ts[i] = evaluate(t.item(i), env, ie);
      return seq_obj(ts);    
    }
    
    if (t.is_set())
    {
      int size = t.size();
      term_v ts(size);
      for (int i=0 ; i < size ; i++)
        ts[i] = evaluate(t.item(i), env, ie);
      return set_obj(ts);    
    }
    
    if (t.is_map())
    { 
      int size = t.size();
      term_v ks(size), vs(size);
      for (int i=0 ; i < size ; i++)
      {
        ks[i] = evaluate(t.get_key(i), env, ie);
        vs[i] = evaluate(t.get_value(i), env, ie);
      }
      return map_obj(ks, vs);
    }
    
    if (t.is_tagged_obj())
    {
      Term obj = evaluate(t.untag(), env, ie);
      return tagged_obj(t.get_tag(), obj);

    }
    
    return t;
  }

private:
  Expr src;
  pattern ptrn;
  Expr value;
};

Expr repl_expr(Expr src, pattern ptrn, Expr value)
{
  return mk_expr(new ReplExpr(src, ptrn, value));
}

/////////////////////////  SelectExpr  /////////////////////////

class SelectExprImpl : public ExprObjImpl
{
public:
	SelectExprImpl(Expr src) : src(src)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = src.evaluate(env, ie);

	  term_v res;
	  walk_and_collect(t, env, ie, res);
	    
	  return set_obj(res);
	}

  void walk_and_collect(Term t, Env &env, LocalDefs &ie, term_v &res)
  {
	  if (!match_and_collect(t, env, ie, res))
	  {
	    if (t.is_seq() || t.is_set())
	    {
	      int size = t.size();
	      for (int i=0 ; i < size ; i++)
	        walk_and_collect(t.item(i), env, ie, res);
	    }
	    else if (t.is_map())
	    {
	      int size = t.size();
	      for (int i=0 ; i < size ; i++)
	      {
	        walk_and_collect(t.get_key(i), env, ie, res);
	        walk_and_collect(t.get_value(i), env, ie, res);
	      }
	    }
	    else if (t.is_tagged_obj())
	    {
	      walk_and_collect(t.untag(), env, ie, res);
	    }
	  }
  }

  virtual bool match_and_collect(Term t, Env &env, LocalDefs &ie, term_v &res) = 0;

private:
  Expr src;
};


class BasicSelectExpr : public SelectExprImpl
{
public:
	BasicSelectExpr(Expr src, type type) : SelectExprImpl(src), type_(type)
	{

	}

  bool match_and_collect(Term t, Env &env, LocalDefs &ie, term_v &res)
  {
    bool matches = type_->contains(t);
    if (matches)
      res.push_back(t);
    return matches;  
  }

private:
  type type_;
};


class ExSelectExpr : public SelectExprImpl
{
public:
	ExSelectExpr(Expr expr, pattern ptrn, Expr src)
	: SelectExprImpl(src), expr(expr), ptrn(ptrn)
	{
    assert(ptrn->is_fully_bound());
	}

	ExSelectExpr(Expr expr, pattern ptrn, Expr src, Expr cond)
	: SelectExprImpl(src), expr(expr), ptrn(ptrn), cond(cond)
	{
    assert(ptrn->is_fully_bound());
	}

  bool match_and_collect(Term t, Env &env, LocalDefs &ie, term_v &res)
  {
    Env de(env);
    
    if (!ptrn->matches(t, env, de, true))
      return false;
    
    res.push_back(expr.evaluate(de, ie));
    return true;
  }

private:
  Expr expr;
  pattern ptrn;
  Expr cond;
};




Expr select_expr(Expr src, type type)
{
  return mk_expr(new BasicSelectExpr(src, type));
}

Expr select_expr(Expr expr, pattern ptrn, Expr src)
{
  return mk_expr(new ExSelectExpr(expr, ptrn, src));
}

Expr select_expr(Expr expr, pattern ptrn, Expr src, Expr cond)
{
  return mk_expr(new ExSelectExpr(expr, ptrn, src, cond));
}

/////////////////////////  BuiltinAddExpr  /////////////////////////

class BuiltinAddExpr : public ExprObjImpl
{
public:
	BuiltinAddExpr(Expr expr1, Expr expr2) : expr1(expr1), expr2(expr2)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t1 = expr1.evaluate(env, ie);
	  Term t2 = expr2.evaluate(env, ie);
	  
	  if (t1.is_int() && t2.is_int())
	  {
	    int res = t1.get_int() + t2.get_int();
	    return int_obj(res);
	  }
	  
	  halt;
	}

private:
  Expr expr1, expr2;
};

Expr builtin_add_call_expr(Expr expr1, Expr expr2)
{
  return mk_expr(new BuiltinAddExpr(expr1, expr2));
}

/////////////////////////  BuiltinAddExpr  /////////////////////////

class BuiltinNegExpr : public ExprObjImpl
{
public:
	BuiltinNegExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_int())
	    return int_obj(-t.get_int());
	  
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_neg_call_expr(Expr expr)
{
  return mk_expr(new BuiltinNegExpr(expr));
}

////////////////////////  BuiltinTicksExpr  ////////////////////////

class BuiltinTicksExpr : public ExprObjImpl
{
public:
  Term evaluate(Env &env, LocalDefs &ie)
	{
    return int_obj(get_tick_count());
	}
};

Expr builtin_ticks_call_expr()
{
  return mk_expr(new BuiltinTicksExpr());
}

////////////////////////  BuiltinCounterExpr  ////////////////////////

class BuiltinCounterExpr : public ExprObjImpl
{
public:
  Term evaluate(Env &env, LocalDefs &ie)
	{
    return int_obj(counter++);
	}

private:
  static int counter;
};

int BuiltinCounterExpr::counter = 0;

Expr builtin_counter_call_expr()
{
  return mk_expr(new BuiltinCounterExpr());
}


////////////////////////  BuiltinStrExpr  ////////////////////////

class BuiltinStrExpr : public ExprObjImpl
{
public:
	BuiltinStrExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_symbol())
	  {
	    string s = t.get_symbol().to_string();
	    return str_obj(s);
	  }

    cerr << "Input to _str_ is not a symbol:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;

	}

private:
  Expr expr;
};

Expr builtin_str_call_expr(Expr expr)
{
  return mk_expr(new BuiltinStrExpr(expr));
}

////////////////////////  BuiltinSymbExpr  ////////////////////////

class BuiltinSymbExpr : public ExprObjImpl
{
public:
	BuiltinSymbExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_string())
	  {
	    string str = t.get_string();
	    return symbol_obj(Symbol(str));
	  }

    cerr << "Input to _symb_ is not a string:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_symb_call_expr(Expr expr)
{
  return mk_expr(new BuiltinSymbExpr(expr));
}


////////////////////////  BuiltinAtExpr  ////////////////////////

class BuiltinAtExpr : public ExprObjImpl
{
public:
	BuiltinAtExpr(Expr seq_expr, Expr idx_expr) : seq_expr(seq_expr), idx_expr(idx_expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term seq = seq_expr.evaluate(env, ie);
	  Term idx = idx_expr.evaluate(env, ie);
	  
	  if (seq.is_seq() && idx.is_non_neg_number() && idx.get_int() < seq.size())
	    return seq.item(idx.get_int());
    
    if (!seq.is_seq())
      cerr << "First _at_ parameter is not a sequence:\n" << seq.to_string(true) << endl;
      
    if (!idx.is_non_neg_number())
      cerr << "Second _at_  parameter is not a non-negative integer:\n" << idx.to_string(true) << endl;

    if (seq.is_seq() && idx.is_non_neg_number())
      cerr << "Bad input to _at_: index out of sequence\n"
           << "Sequence length: " << seq.size() << ", index: " << idx.get_int() << endl;

    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr seq_expr, idx_expr;
};

Expr builtin_at_call_expr(Expr seq_expr, Expr idx_expr)
{
  return mk_expr(new BuiltinAtExpr(seq_expr, idx_expr));
}


////////////////////////  BuiltinLenExpr  ////////////////////////

class BuiltinLenExpr : public ExprObjImpl
{
public:
	BuiltinLenExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_seq())
	    return int_obj(t.size());

    cerr << "Input to _len_ is not a sequence:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_len_call_expr(Expr expr)
{
  return mk_expr(new BuiltinLenExpr(expr));
}


////////////////////////  BuiltinSliceExpr  ////////////////////////

class BuiltinSliceExpr : public ExprObjImpl
{
public:
	BuiltinSliceExpr(Expr seq_expr, Expr idx_first_expr, Expr len_expr)
	: seq_expr(seq_expr),  idx_first_expr(idx_first_expr),  len_expr(len_expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
    Term seq     = seq_expr.evaluate(env, ie);
    Term idx_obj = idx_first_expr.evaluate(env, ie); 
    Term len_obj = len_expr.evaluate(env, ie);
    
    if (seq.is_seq() && idx_obj.is_non_neg_number() && len_obj.is_non_neg_number())
    {
      int idx = idx_obj.get_int();
      int len = len_obj.get_int();
      
      if (idx + len <= seq.size())
      {
        term_v res(len);
        
        for (int i=0 ; i < len ; i++)
          res[i] = seq.item(idx+i);
        
        return seq_obj(res);
      }
    
      cerr << "Bad input to _slice_:\nSequence length: " << seq.size()
           << ", offset: " << idx << ", length: " << len << endl;
    }

    if (!seq.is_seq())
        cerr << "First _slice_ parameter is not a sequence:\n" << seq.to_string(true) << endl;

    if (!idx_obj.is_non_neg_number())
        cerr << "Second _slice_ parameter is not a non-negative integer:\n"
             << idx_obj.to_string(true) << endl;

    if (!len_obj.is_non_neg_number())
        cerr << "Third _slice_ parameter is not a non-negative integer:\n"
        << len_obj.to_string(true) << endl;

    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr seq_expr, idx_first_expr, len_expr;
};

Expr builtin_slice_call_expr(Expr seq_expr, Expr idx_first_expr, Expr len_expr)
{
  return mk_expr(new BuiltinSliceExpr(seq_expr, idx_first_expr, len_expr));
}


////////////////////////  BuiltinCatExpr  ////////////////////////

class BuiltinCatExpr : public ExprObjImpl
{
public:
	BuiltinCatExpr(Expr seq1_expr, Expr seq2_expr) : seq1_expr(seq1_expr), seq2_expr(seq2_expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term seq1 = seq1_expr.evaluate(env, ie);
	  Term seq2 = seq2_expr.evaluate(env, ie);
	  
	  if (seq1.is_seq() && seq2.is_seq())
	  {
	    int len1 = seq1.size();
	    int len2 = seq2.size();
	    
	    term_v res(len1+len2);
	    
	    for (int i=0 ; i < len1 ; i++)
	      res[i] = seq1.item(i);
	      
	    for (int i=0 ; i < len2 ; i++)
	      res[i+len1] = seq2.item(i);

      return seq_obj(res);
	  }

    if (!seq1.is_seq())
      cerr << "First input parameter to _cat_ is not a sequence:\n" << seq1.to_string(true) << endl;
	      
    if (!seq2.is_seq())
      cerr << "Second input parameter to _cat_ is not a sequence:\n" << seq2.to_string(true) << endl;

    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr seq1_expr, seq2_expr;
};

Expr builtin_cat_call_expr(Expr seq1_expr, Expr seq2_expr)
{
  return mk_expr(new BuiltinCatExpr(seq1_expr, seq2_expr));
}

////////////////////////  BuiltinRevExpr  ////////////////////////

class BuiltinRevExpr : public ExprObjImpl
{
public:
	BuiltinRevExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_seq())
	  {
	    int len = t.size();
	    term_v rev_seq(len);
	    for (int i=0 ; i < len ; i++)
	      rev_seq[i] = t.item(len-i-1);
	    return seq_obj(rev_seq);
	  }

    cerr << "Input to _rev_ is not a sequence:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_rev_call_expr(Expr expr)
{
  return mk_expr(new BuiltinRevExpr(expr));
}

////////////////////////  BuiltinSetExpr  ////////////////////////

class BuiltinSetExpr : public ExprObjImpl
{
public:
	BuiltinSetExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_seq())
	    return set_obj(t.items());

    cerr << "Input to _set_ is not a sequence:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_set_call_expr(Expr expr)
{
  return mk_expr(new BuiltinSetExpr(expr));
}

////////////////////////  BuiltinMSetExpr  ////////////////////////

class BuiltinMSetExpr : public ExprObjImpl
{
public:
	BuiltinMSetExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);

	  if (t.is_seq())
	  {
	    int len = t.size();

	    term_v objs = t.items();
	    sort(objs, false);

	    term_v keys;
	    term_v values;

	    keys.reserve(len);
	    values.reserve(len);

	    for (int i=0 ; i < len ; )
	    {
	      int insts = 1;
	      while (i+insts < len && objs[i] == objs[i+insts])
	        insts++;
	      keys.push_back(objs[i]);
	      values.push_back(int_obj(insts));
	      i += insts;
	    }

	    return map_obj(keys, values);
	  }

    cerr << "Input to _mset_ is not a sequence:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_mset_call_expr(Expr expr)
{
  return mk_expr(new BuiltinMSetExpr(expr));
}

////////////////////////  BuiltinISortExpr  ////////////////////////

class BuiltinISortExpr : public ExprObjImpl
{
public:
	BuiltinISortExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  if (t.is_set())
	    return seq_obj(t.items());

    cerr << "Input to _isort_ is not a set:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
	  halt;
	}

private:
  Expr expr;
};

Expr builtin_isort_call_expr(Expr set_expr)
{
  return mk_expr(new BuiltinISortExpr(set_expr));
}

////////////////////////  BuiltinListToSeqExpr  ////////////////////////

class BuiltinListToSeqExpr : public ExprObjImpl
{
public:
	BuiltinListToSeqExpr(Expr expr) : expr(expr)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term t = expr.evaluate(env, ie);
	  
	  Term tail = t;
	  vector<Term> elems;
	  
	  while (!tail.is_empty_seq())
	  {
	    if (!tail.is_seq() || tail.size() != 2)
	    {
        cerr << "Input to _list_to_seq_ is not a list:\n" << t.to_string(true) << endl;
        Program::get_singleton().print_stack();
	      halt;
	    }
	    
	    elems.push_back(tail.item(0));
	    tail = tail.item(1);
	  }
	  
	  return seq_obj(elems);
	}

private:
  Expr expr;
};

Expr builtin_list_to_seq_call_expr(Expr set_expr)
{
  return mk_expr(new BuiltinListToSeqExpr(set_expr));
}

////////////////////////  BuiltinRandIntExpr  ////////////////////////

class BuiltinRandIntExpr : public ExprObjImpl
{
public:
  BuiltinRandIntExpr(Expr expr) : expr(expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t = expr.evaluate(env, ie);

    if (t.is_int())
      return int_obj(rand() % (t.get_int() + 1));

    cerr << "Input to _rand_int_ is not an integer:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr expr;
};

Expr builtin_rand_int_expr(Expr max_expr)
{
  return mk_expr(new BuiltinRandIntExpr(max_expr));
}

////////////////////////  BuiltinRandElemExpr  ////////////////////////

class BuiltinRandElemExpr : public ExprObjImpl
{
public:
  BuiltinRandElemExpr(Expr expr) : expr(expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t = expr.evaluate(env, ie);

    if (t.is_set())
      return t.item(rand() % t.size());

    cerr << "Input to _rand_elem_ is not a set:\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr expr;
};

Expr builtin_rand_elem_expr(Expr set_expr)
{
  return mk_expr(new BuiltinRandElemExpr(set_expr));
}

/////////////////////////  BuiltinTagObjGetTagExpr  /////////////////////////

class BuiltinTagObjGetTagExpr : public ExprObjImpl
{
public:
  BuiltinTagObjGetTagExpr(Expr expr) : expr(expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t = expr.evaluate(env, ie);

    if (t.is_tagged_obj())
      return symbol_obj(t.get_tag());

    cerr << "Input to _tag_ is not a tagged object::\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr expr;
};

Expr builtin_tag_obj_get_tag_expr(Expr tag_obj_expr)
{
  return mk_expr(new BuiltinTagObjGetTagExpr(tag_obj_expr));
}

/////////////////////////  BuiltinTagObjGetObjExpr  /////////////////////////

class BuiltinTagObjGetObjExpr : public ExprObjImpl
{
public:
  BuiltinTagObjGetObjExpr(Expr expr) : expr(expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term t = expr.evaluate(env, ie);

    if (t.is_tagged_obj())
      return t.untag();

    cerr << "Input to _obj_ is not a tagged object::\n" << t.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr expr;
};

Expr builtin_tag_obj_get_obj_expr(Expr tag_obj_expr)
{
  return mk_expr(new BuiltinTagObjGetObjExpr(tag_obj_expr));
}

/////////////////////////  BuiltinInExpr  /////////////////////////

class BuiltinInExpr : public ExprObjImpl
{
public:
  BuiltinInExpr(Expr elem_expr, Expr set_expr) : elem_expr(elem_expr), set_expr(set_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term e = elem_expr.evaluate(env, ie);
    Term s = set_expr.evaluate(env, ie);

    if (s.is_set())
    {
      term_v &items = s.items();
      int size = items.size();
      for (int i=0 ; i < size ; i++)
        if (items[i] == e)
          return bool_obj(true);
      return bool_obj(false);
    }

    cerr << "Second parameter to _in_ is not a set:\n" << s.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr elem_expr;
  Expr set_expr;
};

Expr builtin_in_expr(Expr elem_expr, Expr set_expr)
{
  return mk_expr(new BuiltinInExpr(elem_expr, set_expr));
}

/////////////////////////  BuiltinHasKeyExpr  /////////////////////////

class BuiltinHasKeyExpr : public ExprObjImpl
{
public:
  BuiltinHasKeyExpr(Expr map_expr, Expr key_expr) : map_expr(map_expr), key_expr(key_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term m = map_expr.evaluate(env, ie);
    Term k = key_expr.evaluate(env, ie);

    if (m.is_map())
      return bool_obj(m.has_key(k));

    cerr << "First parameter to _has_key_ is not a map:\n" << m.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr map_expr;
  Expr key_expr;
};

Expr builtin_has_key_expr(Expr map_expr, Expr key_expr)
{
  return mk_expr(new BuiltinHasKeyExpr(map_expr, key_expr));
}

/////////////////////////  BuiltinLookupExpr  /////////////////////////

class BuiltinLookupExpr : public ExprObjImpl
{
public:
  BuiltinLookupExpr(Expr map_expr, Expr key_expr) : map_expr(map_expr), key_expr(key_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term m = map_expr.evaluate(env, ie);
    Term k = key_expr.evaluate(env, ie);

    if (m.is_map())
      if (m.has_key(k))
        return m.lookup(k);
      else
        cerr << "Error in _lookup_ builtin: key not present:\n" << m.to_string(true) << "\n\n\n\n" << k.to_string(true) << endl;
    else
      cerr << "First parameter to _lookup_ is not a map:\n" << m.to_string(true) << endl;

    Program::get_singleton().print_stack();
    halt;
  }

private:
  Expr map_expr;
  Expr key_expr;
};

Expr builtin_lookup_expr(Expr map_expr, Expr key_expr)
{
  return mk_expr(new BuiltinLookupExpr(map_expr, key_expr));
}

/////////////////////////  BuiltinUnionExpr  /////////////////////////

class BuiltinUnionExpr : public ExprObjImpl
{
public:
  BuiltinUnionExpr(Expr sets_expr) : sets_expr(sets_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term sets = sets_expr.evaluate(env, ie);

    if (is_set_of_sets(sets))
    {
      term_v &elem_sets = sets.items();
      term_v all_elems;
      for (int i=0, n=elem_sets.size() ; i < n ; i++)
      {
        term_v &elems = elem_sets[i].items();
        for (int j=0, m=elems.size() ; j < m ; j++)
          all_elems.push_back(elems[j]);
      }

      return set_obj(all_elems);
    }

    cerr << "Input to _union_ is not a set of sets:\n" << sets.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  bool is_set_of_sets(Term t)
  {
    if (!t.is_set())
      return false;
    term_v &elems = t.items();
    for (int i=0, n=elems.size() ; i < n ; i++)
      if (!elems[i].is_set())
        return false;
    return true;
  }

private:
  Expr sets_expr;
};

Expr builtin_union_expr(Expr sets_expr)
{
  return mk_expr(new BuiltinUnionExpr(sets_expr));
}

/////////////////////////  BuiltinMergeExpr  /////////////////////////

class BuiltinMergeExpr : public ExprObjImpl
{
public:
  BuiltinMergeExpr(Expr maps_expr) : maps_expr(maps_expr)
  {

  }

  Term evaluate(Env &env, LocalDefs &ie)
  {
    Term maps = maps_expr.evaluate(env, ie);

    if (is_set_of_maps(maps))
    {
      term_v &elem_maps = maps.items();
      term_v all_keys, all_values;
      for (int i=0, n=elem_maps.size() ; i < n ; i++)
      {
        Term map = elem_maps[i];
        for (int j=0, m=map.size() ; j < m ; j++)
        {
          all_keys.push_back(map.get_key(j));
          all_values.push_back(map.get_value(j));
        }
      }
      return map_obj(all_keys, all_values);
    }

    cerr << "Input to _merge_ is not a set of maps:\n" << maps.to_string(true) << endl;
    Program::get_singleton().print_stack();
    halt;
  }

private:
  bool is_set_of_maps(Term t)
  {
    if (!t.is_set())
      return false;
    term_v &elems = t.items();
    for (int i=0, n=elems.size() ; i < n ; i++)
      if (!elems[i].is_map())
        return false;
    return true;
  }

private:
  Expr maps_expr;
};

Expr builtin_merge_expr(Expr maps_expr)
{
  return mk_expr(new BuiltinMergeExpr(maps_expr));
}

/////////////////////////  ReadFileExpr  /////////////////////////

class ReadFileExpr : public ExprObjImpl
{
public:
	ReadFileExpr(Expr file_name, bool raw) : file_name(file_name), raw(raw)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term fn  = file_name.evaluate(env, ie);
	  
	  if (fn.is_string())
	  {
	    string fn_str  = fn.get_string();
	    
	    if (raw)
	    {
	      ifstream ifs(fn_str.c_str(), ifstream::in);
        
        if (!ifs.good())
        {
          cerr << "Error opening file " << fn_str << endl;
	        Program::get_singleton().print_stack();
	        halt;
        }

        term_v bytes;
        while (!ifs.eof())
        {
          int ch = ifs.get();

          if (ch != -1)
            bytes.push_back(int_obj(ch));
          else
            assert(ifs.eof());
        }

        return seq_obj(bytes);
      }
      else
      {
	  	  Term t = load_obj(fn_str.c_str());
	  	  return t;      
      }
	  }
	  
    cerr << "Parameter of _" << (raw ? "file" : "load") << "_(filename) is not a string:\n" << fn.to_string(true) << endl;
	  Program::get_singleton().print_stack();
	  halt;
	}
  
private:
  Expr file_name;
  bool raw;
};

Expr read_file_call_expr(Expr file_name, bool raw)
{
  return mk_expr(new ReadFileExpr(file_name, raw));
}

/////////////////////////  WriteToFileExpr  /////////////////////////

class WriteToFileExpr : public ExprObjImpl
{
public:
	WriteToFileExpr(Expr file_name, bool append, Expr text) : file_name(file_name), append(append), text(text)
	{

	}

  Term evaluate(Env &env, LocalDefs &ie)
	{
	  Term fn  = file_name.evaluate(env, ie);
	  Term txt = text.evaluate(env, ie);
	  
	  if (fn.is_string() && txt.is_string())
	  {
	    string fn_str  = fn.get_string();
	    string txt_str = txt.get_string();
	  
	    ofstream ofs(fn_str.c_str(), append ? ios_base::app : ios_base::out);
	    ofs << txt_str;
	    
	    return bool_obj(true);
	  }
	  
	  if (!fn.is_string())
	    cerr << "First parameter of _write_(filename, data) is not a string:\n" << fn.to_string(true) << endl;
	  
	  if (!txt.is_string())
	    cerr << "Second parameter of _write_(filename, data) is not a string:\n" << txt.to_string(true) << endl;
	  
	  Program::get_singleton().print_stack();
	  halt;
	}
  
private:
  Expr file_name;
  bool append;
  Expr text;
};

Expr write_to_file_call_expr(Expr file_name, bool append, Expr text)
{
  return mk_expr(new WriteToFileExpr(file_name, append, text));
}


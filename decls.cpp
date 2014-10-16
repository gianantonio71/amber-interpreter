#include "common.h"
#include "decls.h"
#include "os_interface.h"



Typedef::Typedef(string &type_name, ::type &type) : type_name(type_name), type_(type)
{

}

////////////////////////////////////////////////////////////////////////

ParTypedef::ParTypedef(string &type_name, string_v &params, ::type &type)
: type_name(type_name), params(params), type_(type)
{

}

type ParTypedef::instantiate(type_v &actual_params)
{
  assert(actual_params.size() == params.size());
  
  return type_->clone_and_bind_params(params, actual_params);
  
  //int len = instances.size();

  //for (int i=0 ; i < len ; i++)
  //  if (instances[i].actual_params == actual_params)
  //    return instances[i].type;

  //instances.resize(len+1);
  //Instance &inst = instances[len];

  //inst.actual_params = actual_params;
  //inst.type = type->clone_and_bind_params(params, actual_params);

  //return inst.type;
}

////////////////////////////////////////////////////////////////////////

BoolTest::BoolTest(Expr &expr) : expr(expr)
{
  //cout << "HI!!" << endl;
}

int BoolTest::run(Env &env, LocalDefs &ienv)
{
  //cout << "---------------------------------\n";
  //term1.print(cout);
  //cout << "\n";
  //term2.print(cout);
  //cout << "\n\n";

  //Term et1 = prg.evaluate(term1);
  //Term et2 = prg.evaluate(term2);

  //cout << "\n\n";
  //et1.print(cout);
  //cout << "\n";
  //et2.print(cout);
  //cout << "\n";

  //string es = expr.to_string();

  Env new_env(env);

  Term et = expr.evaluate(new_env, ienv);

  string ts = et.to_string();

  if (et.is_true())
  {
    cout << "Test OK" << endl;
    return 0;
  }

  cout << "Test Failed" << endl;

  //string rs_str = t.top_symbol().to_string();

  //if (t.top_symbol() == Symbol::eq())
  //{
  //  assert(t.arity() == 2);

  //  Term st1 = t.subterm(0);
  //  Term st2 = t.subterm(1);

  //  Term et1 = prg.evaluate(st1);
  //  Term et2 = prg.evaluate(st2);

  //  if (et1 != et2)
  //  {
  //    cout << "-------------" << endl;
  //    cout << st1.to_string() << endl << st2.to_string() << endl;
  //    cout << "- - - - - - -" << endl;
  //    cout << et1.to_string() << endl << et2.to_string() << endl;
  //    cout << "-------------" << endl;
  //  }
  //}

  //getchar();

  return 1;
}


PrintStmt::PrintStmt(Expr &expr) : expr(expr)
{

}

int PrintStmt::run(Env &env, LocalDefs &ienv)
{
  Env new_env(env);
  Term rt = expr.evaluate(new_env, ienv);
  rt.print_indented(cout);
  cout << endl;
  return 0;
}


ForStmtTest::ForStmtTest(PlainId var, Expr src_expr, ref_v<TestInstr> &instrs)
: var(var), src_expr(src_expr), instrs(instrs)
{

}

int ForStmtTest::run(Env &env, LocalDefs &ienv)
{
  //cout << "Number of tests to perform: " << instrs.size() << endl;
  Env src_env(env);

  Term src_seq = src_expr.evaluate(src_env, ienv);
  
  assert(src_seq.is_seq());
  
  int len = src_seq.size();

  int errors = 0;
  for (int i=0 ; i < len ; i++)
  {
    Env new_env(env);
    new_env.set(var, src_seq.item(i));

    for (unsigned int j=0 ; j < instrs.size() ; j++)
      errors += instrs[j]->run(new_env, ienv);
  }

  return errors;
}

////////////////////////////////////////////////////////////////////////

AsgnTest::AsgnTest(PlainId var, Expr expr) : var(var), expr(expr)
{

}

int AsgnTest::run(Env &env, LocalDefs &ienv)
{
  Env new_env(env);
  Term et = expr.evaluate(new_env, ienv);
  
  env.set(var, et);
  
  return 0;
}

////////////////////////////////////////////////////////////////////////

TestBlock::TestBlock(bool enabled) : enabled(enabled)
{

}

void TestBlock::add_instr(ref<TestInstr> instr)
{
	instrs.push_back(instr);
}

int TestBlock::run(Env &env, LocalDefs &ienv)
{
	extern bool run_all_testcases;

	if (!enabled && !run_all_testcases)
		return 0;

  int errors = 0;
  
  Env new_env(env);
  
  for (unsigned int i=0 ; i < instrs.size() ; i++)
    errors += instrs[i]->run(new_env, ienv);

  return errors;
}

////////////////////////////////////////////////////////////////////////

Program Program::singleton;

Program::Program()
{
  tracing_enabled = false;
}

Program &Program::get_singleton()
{
	return singleton;
}


void Program::add(ref<Typedef> td)
{
  typedefs.push_back(td);
}

void Program::add(ref<ParTypedef> ptd)
{
  par_typedefs.push_back(ptd);
}

void Program::add(fn_def r)
{
  fndefs.push_back(r);
}

void Program::add(ref<TestBlock> t)
{
  test_blocks.push_back(t);
}

void Program::enable_tracing()
{
  tracing_enabled = true;
}

void Program::freeze()
{
  for (unsigned int i=0 ; i < fndefs.size() ; i++)
  {
    fn_def fd = fndefs[i];
    
    int hash_code = hash(fd->name(), fd->arity());
    
    fndefs_lookup_table[hash_code].push_back(fd);
    
	  //extern bool tracing_on;
	  //if (tracing_on)
		 // cout << "Function: " << i << ", root symbol: " << fd->name().to_string() << "/" << fd->arity() << endl;
  }
}

type Program::get_type(string &type_name)
{
  for (unsigned int i=0 ; i < typedefs.size() ; i++)
    if (typedefs[i]->type_name == type_name)
      return typedefs[i]->type_;

  cout << "Unknown type: " << type_name << endl;
  Program::get_singleton().print_stack();
  halt;
}

type Program::get_type(string &type_name, type_v &actual_params)
{
  for (unsigned int i=0 ; i < par_typedefs.size() ; i++)
  {
    ref<ParTypedef> ptd = par_typedefs[i];
    if (ptd->type_name == type_name && ptd->params.size() == actual_params.size())
      return ptd->instantiate(actual_params);
  }

  cout << "Unknown parametric type: " << type_name << "/" << actual_params.size() << endl;
  halt;
}

fn_def_v &Program::get_candidate_fns(PlainId fn_name, int arity)
{
  return fndefs_lookup_table[hash(fn_name, arity)];
}

int Program::hash(PlainId fn_name, int arity)
{
  assert(arity < 16 && fn_name.index() < 16 * 1024);
  
  return (fn_name.index() << 4) | arity;
}

class Profiler
{
public:
  Profiler()
  {
    curr_level = top_level = new Tracker();  
  }

  void push_call(PlainId fn_name)
  {
    //cout << string(2 * stack.size(), ' ') << fn_name.to_string() << endl;

    Tracker *sublevel = curr_level->sub_level[fn_name.index()];
    
    if (sublevel == NULL)
    {
      sublevel = new Tracker();
      curr_level->sub_level[fn_name.index()] = sublevel;
    }
    
    curr_level = sublevel;
    
    curr_level->num_of_calls++;
    
    stack.push_back(sublevel);
    start_times.push_back(get_tick_count()); 
  }
  
  void pop_call()
  {
    int elapsed_time = get_tick_count() - start_times.back();
    curr_level->total_time += elapsed_time;
    
    stack.pop_back();
    start_times.pop_back();
    
    if (stack.empty())
      curr_level = top_level;
    else
      curr_level = stack.back();
  }
  
  void print()
  {
    top_level->print();
  }

private:
  struct Tracker
  {
    Tracker()
    {
      total_time = 0;
      num_of_calls = 0;
    }
    
    void print(int ind_lev=0)
    {
      for (map<int, Tracker*>::const_iterator it = sub_level.begin() ; it != sub_level.end() ; it++)
      {
        assert(it->second != NULL);

        if (it->second->total_time > 0)
        {
          cout << string(2 * ind_lev, ' ')
               << PlainId::get_id_by_index(it->first).to_string()
               << " (" << it->second->num_of_calls << "/" << it->second->total_time << ")" << endl;

          it->second->print(ind_lev+1);
        }
      }
    }
    
    int                total_time;
    int                num_of_calls;
    map<int, Tracker*> sub_level;
  };
  
  Tracker          *top_level;
  Tracker          *curr_level;
  vector<Tracker*>  stack;
  vector<int>       start_times;
};

Profiler program_profiler;

void Program::push_call(PlainId fn_name, term_v &params)
{
  if (tracing_enabled)
    program_profiler.push_call(fn_name);

  if (stack.size() > 200)
  {
    cout << "Stack overflow!\n";
    print_stack();
    halt;
  }
  stack.push_back(StackEntry(fn_name, params));
}

void Program::pop_call()
{
  if (tracing_enabled)
    program_profiler.pop_call();
  
  stack.pop_back();
}

void Program::print_stack()
{
  cout << "\n\nCall stack:\n";
  for (unsigned int i=0 ; i < stack.size() ; i++)
    cout << "  " << stack[i].fn_name.to_string() << "/" << stack[i].params.size() << endl;

  int file_counter = 0;
  ofstream os("debug/full_stack_trace.txt");
  for (unsigned int i=0 ; i < stack.size() ; i++)
  {
    StackEntry &curr_se = stack[i];
    os << curr_se.fn_name.to_string() << "(\n";
    for (unsigned int j=0 ; j < curr_se.params.size() ; j++)
    {
      if (curr_se.params[j].total_number_of_nodes() > 50)
      {
        //if (curr_se.params[j].is_seq())
        //{
        //  term_v s = curr_se.params[j].unbuild_seq();
        //  os << "  [";
        //  for (unsigned int k=0 ; k < s.size() ; k++)
        //  {
        //    string fn = "par_" + to_string(file_counter++, 2, '0') + ".txt";
        //    if (k > 0)
        //      os << ", ";
        //    os << "<" + fn + ">";
        //    fn = "debug\\" + fn;
        //    ofstream pos(fn.c_str());
        //    s[k].print(pos);
        //  }
        //  os << "]";
        //}
        //else
        //{
          string fn = "par_" + to_string(file_counter++, 2, '0') + ".txt";
          os << "  <" + fn + ">";
          fn = "debug/" + fn;
          ofstream pos(fn.c_str());
          curr_se.params[j].print_indented(pos);
        //}
      }
      else      
        curr_se.params[j].print(os);

      if (j != curr_se.params.size()-1)
        os << ",";
      os << "\n";
    }
    os << ")\n\n";
  }
  os << endl;
}

void Program::run_tests()
{
  int num_of_failures = 0;

  for (unsigned int i=0 ; i < test_blocks.size() ; i++)
  {
    Env env;
    LocalDefs ienv;
    num_of_failures += test_blocks[i]->run(env, ienv);
  }

  if (num_of_failures > 0)
    cout << num_of_failures << " test(s) failed" << endl;
}

void Program::finish()
{
  if (tracing_enabled)
    program_profiler.print();
}
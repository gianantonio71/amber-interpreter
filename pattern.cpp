#include "common.h"
#include "fndef.h"
#include "pattern.h"
#include "decls.h"



TypePtrn::TypePtrn(type _type) : _type(_type)
{

}

pattern TypePtrn::bind_known_vars(Env &env)
{
  return pattern(new TypePtrn(_type));
}

bool TypePtrn::is_fully_bound()
{
  return true;
}

bool TypePtrn::matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set)
{
  return _type->contains(t);
}

////////////////////////////////////////////////////////////////////////////////

ObjPtrn::ObjPtrn(Term obj) : obj(obj)
{

}

pattern ObjPtrn::bind_known_vars(Env &env)
{
  return pattern(new ObjPtrn(obj));
}

bool ObjPtrn::is_fully_bound()
{
  return true;
}

bool ObjPtrn::matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set)
{
  return t == obj;
}

////////////////////////////////////////////////////////////////////////////////

VarPtrn::VarPtrn(PlainId var, pattern ptrn) : var(var), ptrn(ptrn)
{

}

pattern VarPtrn::bind_known_vars(Env &env)
{
  return pattern(new VarPtrn(var, ptrn->bind_known_vars(env)));
}

bool VarPtrn::is_fully_bound()
{
  return ptrn->is_fully_bound();
}

bool VarPtrn::matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set)
{
  if (!in_env.is_set(var))
  {
    bool success = ptrn->matches(t, in_env, delta_env, fail_if_already_set);
    if (success)
    {
      if (delta_env.is_set(var))
        halt;
      delta_env.set(var, t);
    }
    return success;
  }
  else
  {
    Term curr_val = in_env.get(var);
    if (curr_val != t)
      return false;
    return ptrn->matches(t, in_env, delta_env, fail_if_already_set);    
  }

  //string ts = t.to_string(true);
	string ns = var.to_string();
	string sed = delta_env.to_string(true);
	string sei = in_env.to_string(true);
	  
  cout << "Trying to set a variable twice.\n"
       << "Variable name: " << ns 
       << "\nInput environment:\n" << sei
       << "\nDelta environment:\n" << sed << endl;
	  
	Program::get_singleton().print_stack();
  halt; 
}

//////////////////////////////////////////////////////////////////////////////////

ExtrVarPtrn::ExtrVarPtrn(PlainId var) : var(var)
{

}

pattern ExtrVarPtrn::bind_known_vars(Env &env)
{
  if (env.is_set(var))
    return pattern(new ObjPtrn(env.get(var)));
  halt;
}

bool ExtrVarPtrn::is_fully_bound()
{
  return false;
}

bool ExtrVarPtrn::matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set)
{
  halt;
}

//////////////////////////////////////////////////////////////////////////////////

TagPtrn::TagPtrn(pattern tag_ptrn, pattern obj_ptrn) : tag_ptrn(tag_ptrn), obj_ptrn(obj_ptrn)
{

}

pattern TagPtrn::bind_known_vars(Env &env)
{
  return pattern(new TagPtrn(tag_ptrn->bind_known_vars(env), obj_ptrn->bind_known_vars(env)));
}

bool TagPtrn::is_fully_bound()
{
  return tag_ptrn->is_fully_bound() && obj_ptrn->is_fully_bound();
}

bool TagPtrn::matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set)
{
  if (!t.is_tagged_obj())
    return false;
  
  Term tag_obj = symbol_obj(t.get_tag());
  
  if (!tag_ptrn->matches(tag_obj, in_env, delta_env, fail_if_already_set))
    return false;
    
  return obj_ptrn->matches(t.untag(), in_env, delta_env, fail_if_already_set);  
}

//////////////////////////////////////////////////////////////////////////////////

TuplePtrn::TuplePtrn(vector<Symbol> &labels, pattern_v &patterns, bool is_open)
: labels(labels), patterns(patterns), is_open(is_open)
{
  assert(labels.size() == patterns.size());
  
  int size = labels.size();
  for (int i=0 ; i < size ; i++)
    for (int j=0 ; j < size ; j++)
      assert(i == j || labels[i] != labels[j]);
}

pattern TuplePtrn::bind_known_vars(Env &env)
{
  int size = patterns.size();
  pattern_v bound_ptrns(size);
  for (int i=0 ; i < size ; i++)
    bound_ptrns[i] = patterns[i]->bind_known_vars(env);
  return pattern(new TuplePtrn(labels, bound_ptrns, is_open));
}

bool TuplePtrn::is_fully_bound()
{
  for (unsigned int i=0 ; i < patterns.size() ; i++)
    if (!patterns[i]->is_fully_bound())
      return false;
  return true;
}

bool TuplePtrn::matches(Term &t, Env &in_env, Env &delta_env, bool fail_if_already_set)
{
  if (!t.is_tuple())
    return false;
  
  if (t.size() < (int) labels.size())
    return false;

  if (!is_open && t.size() != labels.size())
    return false;
  
  int size = labels.size();
  
  for (int i=0 ; i < size ; i++)
  {
    Term key = symbol_obj(labels[i]);
    if (!t.has_key(key))
      return false;
    
    Term value = t.lookup(key);
    
    if (!patterns[i]->matches(value, in_env, delta_env, fail_if_already_set))
      return false;
  }
  
  return true;
}

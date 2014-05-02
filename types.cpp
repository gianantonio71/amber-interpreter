#include "common.h"
#include "types.h"
#include "decls.h"


int Type::next_id = 0;

Type::Type()
{
	id = next_id++;
}

int Type::get_id()
{
	return id;
}

int Type::get_max_type_id_plus_one()
{
	return next_id;
}

/////////////////////////////////////////////////////////////////////////

Enum::Enum(Symbol s)
{
  symbols.push_back(s);
}

Enum::Enum(string s)
{
  symbols.push_back(Symbol(s));
}

Enum::Enum(vector<Symbol> &ss)
{
  assert(ss.size() > 0);

  symbols = ss;

  sort(symbols.begin(), symbols.end());
  remove_duplicates_from_sorted_vector(symbols);
}

bool Enum::contains(Term &t)
{
  if (!t.is_symbol())
    return false;

  return in_sorted_vector(t.get_symbol(), symbols);
}

type Enum::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new Enum(symbols));
}

/////////////////////////////////////////////////////////////////////////

IntType::IntType()
{
  min = INT_MIN;
  max = INT_MAX;
}

IntType::IntType(int min, int max) : min(min), max(max)
{
  assert(min <= max);
}

bool IntType::contains(Term &t)
{
  if (!t.is_int())
    return false;
  
  int n = t.get_int();
  
  return n >= min && n <= max;
}

type IntType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new IntType(min, max));
}

///////////////////////// Seq Type /////////////////////////

SeqType::SeqType() : elem_type(new PseudoTypeAny), nonempty(false)
{

}

SeqType::SeqType(type elem_type, bool nonempty) : elem_type(elem_type), nonempty(nonempty)
{

}

bool SeqType::contains(Term &t)
{
  if (!t.is_seq())
    return false;
  
  for (int i=0 ; i < t.size() ; i++)
    if (!elem_type->contains(t.item(i)))
      return false;
  
  return !nonempty || t.size() > 0;
}

type SeqType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new SeqType(elem_type->clone_and_bind_params(formal, actual), nonempty));
}

///////////////////////// Fixed Seq Type /////////////////////////

FixedSeqType::FixedSeqType(type_v &elem_types) : elem_types(elem_types)
{
  assert(elem_types.size() > 0);
}

bool FixedSeqType::contains(Term &t)
{
  if (!t.is_seq() || t.size() != elem_types.size())
    return false;
  
  int len = t.size();
  for (int i=0 ; i < len ; i++)
    if (!elem_types[i]->contains(t.item(i)))
      return false;

  return true;
}

type FixedSeqType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  int len = elem_types.size();
  type_v bound_elem_types(len);
  for (int i=0 ; i < len ; i++)
    bound_elem_types[i] = elem_types[i]->clone_and_bind_params(formal, actual);
  return type(new FixedSeqType(bound_elem_types));
}

///////////////////////// Set Type /////////////////////////

SetType::SetType() : elem_type(new PseudoTypeAny), nonempty(false)
{

}

SetType::SetType(type elem_type, bool nonempty) : elem_type(elem_type), nonempty(nonempty)
{

}

bool SetType::contains(Term &t)
{
  if (!t.is_set())
    return false;
  
  for (int i=0 ; i < t.size() ; i++)
    if (!elem_type->contains(t.item(i)))
      return false;
  
  return true;
}

type SetType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new SetType(elem_type->clone_and_bind_params(formal, actual), nonempty));
}

///////////////////////// Map Type /////////////////////////

MapType::MapType(type key_type, type value_type) : key_type(key_type), value_type(value_type)
{

}

bool MapType::contains(Term &t)
{
  if (!t.is_map())
    return false;
  
  int size = t.size();
  
  for (int i=0 ; i < size ; i++)
  {
    if (!key_type->contains(t.get_key(i)))
      return false;
    
    if (!value_type->contains(t.get_value(i)))
      return false;
  }
  
  return true;
}

type MapType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new MapType(
                    key_type->clone_and_bind_params(formal, actual),
                    value_type->clone_and_bind_params(formal, actual)
                  )
             );
}

///////////////////////// Tuple Type /////////////////////////

TupleType::TupleType(vector<Symbol> &keys, type_v &types, vector<bool> &optional)
: keys(keys), types(types), optional(optional)
{
  assert(keys.size() == types.size() && keys.size() == optional.size());

  int size = keys.size();
  for (int i=0 ; i < size ; i++)
    for (int j=0 ; j < size ; j++)
      if (i != j)
        assert(keys[i] != keys[j]);
  
  min_size = 0;
  for (int i=0 ; i < size ; i++)
    if (!optional[i])
      min_size++;
}

bool TupleType::contains(Term &t)
{
  if (!t.is_tuple() || t.size() < min_size)
    return false;
  
  int size = keys.size();
  int matched = 0;
  
  for (int i=0 ; i < size ; i++)
  {
    Term key = symbol_obj(keys[i]);
    
    if (t.has_key(key))
    {
      Term &value = t.lookup(key);
      if (!types[i]->contains(value))
        return false;
      matched++;
    }
    else
    {
      if (!optional[i])
        return false;
    }
  }
  
  return t.size() == matched;
}

type TupleType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  int size = types.size();
  type_v bound_types(size);
  for (int i=0 ; i < size ; i++)
    bound_types[i] = types[i]->clone_and_bind_params(formal, actual);
  return type(new TupleType(keys, bound_types, optional));
}

////////////////////// Empty seq/set/map types //////////////////////

bool EmptySeqType::contains(Term &t)
{
  return t.is_empty_seq();
}

type EmptySeqType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new EmptySeqType);
}

bool EmptySetType::contains(Term &t)
{
  return t.is_empty_set();
}

type EmptySetType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new EmptySetType);
}

bool EmptyMapType::contains(Term &t)
{
  return t.is_empty_map();
}

type EmptyMapType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new EmptyMapType);
}

///////////////////////// Tag Type /////////////////////////

TagType::TagType(Symbol tag, type obj_type) : tag_type(new Enum(tag)), obj_type(obj_type)
{

}

TagType::TagType(type tag_type, type obj_type) : tag_type(tag_type), obj_type(obj_type)
{

}

bool TagType::contains(Term &t)
{
  if (!t.is_tagged_obj())
    return false;
  Term tag_obj = symbol_obj(t.get_tag());
  return tag_type->contains(tag_obj) && obj_type->contains(t.untag());
}

type TagType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new TagType(
                    tag_type->clone_and_bind_params(formal, actual),
                    obj_type->clone_and_bind_params(formal, actual)
                  )
             );
}


///////////////////////// Union Type /////////////////////////

UnionType::UnionType()
{

}

UnionType::UnionType(type_v &types) : types(types.size())
{
  for (unsigned int i=0 ; i < types.size() ; i++)
    this->types[i] = types[i];
}

void UnionType::add(type &type)
{
  types.push_back(type);
}

bool UnionType::contains(Term &t)
{
  for (unsigned int i=0 ; i < types.size() ; i++)
    if (types[i]->contains(t))
      return true;

  return false;
}

type UnionType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  UnionType *ut = new UnionType;
  int n = types.size();
  ut->types.resize(n);
  for (int i=0 ; i < n ; i++)
    ut->types[i] = types[i]->clone_and_bind_params(formal, actual);
  return type(ut);
}

/////////////////////////////////////////////////////////////////////////

TypeRef::TypeRef(string &type_name) : type_name(type_name)
{

}

bool TypeRef::contains(Term &t)
{
  if (real_type.is_null())
    real_type = Program::get_singleton().get_type(type_name);

  return real_type->contains(t);
}

type TypeRef::clone_and_bind_params(string_v &formal, type_v &actual)
{
  assert(real_type.is_null());

  for (unsigned int i=0 ; i < formal.size() ; i++)
    if (formal[i] == type_name)
      return actual[i];

  return type(new TypeRef(type_name));
}

/////////////////////////////////////////////////////////////////////////

ParTypeRef::ParTypeRef(string &type_name, type_v &params)
: type_name(type_name), params(params)
{

}

bool ParTypeRef::contains(Term &t)
{
  if (real_type.is_null())
    real_type = Program::get_singleton().get_type(type_name, params);

  return real_type->contains(t);
}

type ParTypeRef::clone_and_bind_params(string_v &formal, type_v &actual)
{
  assert(real_type.is_null());

  type_v bound_params(params.size());
  for (unsigned int i=0 ; i < params.size() ; i++)
    bound_params[i] = params[i]->clone_and_bind_params(formal, actual);

  return type(new ParTypeRef(type_name, bound_params));
}

/////////////////////////////////////////////////////////////////////////

bool PseudoTypeAny::contains(Term &t)
{
  return true;
}

type PseudoTypeAny::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new PseudoTypeAny);
}

/////////////////////////////////////////////////////////////////////////

bool SymbolType::contains(Term &t)
{
  return t.is_symbol();
}

type SymbolType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new SymbolType);
}

/////////////////////////////////////////////////////////////////////////

TypeVar::TypeVar(string &name) : name(name)
{

}
  
bool TypeVar::contains(Term &t)
{
  //  Accepts everything, acts like Any
  return true;
}

type TypeVar::clone_and_bind_params(string_v &formal, type_v &actual)
{
  return type(new TypeVar(name));
}

/////////////////////////////////////////////////////////////////////////

PtrnType::PtrnType(::pattern ptrn) : pattern_(ptrn)
{

}

bool PtrnType::contains(Term &t)
{
  Env in_env, delta_env;
  return pattern_->matches(t, in_env, delta_env, true);
}

type PtrnType::clone_and_bind_params(string_v &formal, type_v &actual)
{
  halt;
}

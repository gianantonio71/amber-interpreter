#include "common.h"
#include "term.h"
#include "decls.h"


int compare(int n1, int n2)
{
  if (n1 < n2)
    return 1;
  
  if (n1 == n2)
    return 0;
  
  return -1;
}

int compare(term_v &v1, term_v &v2)
{
  int len1 = v1.size();
  int len2 = v2.size();
  
  if (len1 != len2)
    return len1 < len2 ? 1 : -1;
  
  for (int i=0 ; i < len1 ; i++)
  {
    int cr = v1[i].compare(v2[i]);
    if (cr != 0)
      return cr;
  }
  
  return 0;
}

int get_weight(term_v &elems)
{
  int len = elems.size();
  int weight = 0;
  for (int i=0 ; i < len ; i++)
    weight += elems[i].get_weight();
  return weight;
}

////////////////////////////////////////////////////////////////////////////////

static unsigned int get_index(unsigned long long key)
{
	return key & 4294967295ULL;
}

static unsigned int get_weight(unsigned long long key)
{
	return key >> 32;
}

template <typename T> struct index_less {
  index_less(vector<T> &v) : v(&v) {}
  bool operator () (int idx1, int idx2) {
    return (*v)[idx1] < (*v)[idx2];
  }
  vector<T> *v;
};

template <typename T> void sort_idxs(vector<T> &array, vector<int> &sorted_idxs)
{
  index_less<Term> il(array);
  sort(sorted_idxs.begin(), sorted_idxs.end(), il);
}

template <typename T> void unique_by_idx(vector<T> &objs, vector<int> &idxs)
{
  if (idxs.size() >= 2)
  {
    int size = idxs.size();
    int count = 1;    
    for (int i=1 ; i < size ; i++)
      if (objs[idxs[i]] != objs[idxs[count-1]])
	    {
	      assert(i >= count);
        idxs[count++] = idxs[i];
	    }
	  assert(count <= size);
	  idxs.resize(count);
  }
}

void sort(term_v &terms, vector<int> &sorted_idxs, bool no_dups)
{
	unsigned int n = terms.size();

	vector<unsigned long long> keys(n);
	for (unsigned int i=0 ; i < n ; i++)
	{
	  unsigned int key = terms[i].get_weight();
		keys[i] = (((unsigned long long)(key)) << 32) + i;
		assert((keys[i] >> 32) == key);
		assert((keys[i] & 4294967295ULL) == i);
	}

	sort(keys.begin(), keys.end());

	for (unsigned int start=0 ; start < n ; )
	{
		int cw = get_weight(keys[start]);

		int count = 1;
		//while (start + count < n && get_weight(keys[start+count]) == cw)
		//	count++;
		while (start + count < n)
		{
		  int nw = get_weight(keys[start+count]);
		  if (nw != cw)
		    break;
			count++;
		}

		if (count == 1)
		{
			sorted_idxs.push_back(get_index(keys[start]));
			start++;
			continue;
		}

		vector<int> idxs(count);
		for (int i=0 ; i < count ; i++)
			idxs[i] = get_index(keys[start+i]);

		//## Here we could insert an additional sorting by a different key...
	
	  sort_idxs(terms, idxs);
	  if (no_dups)
	    unique_by_idx(terms, idxs);

		for (unsigned int i=0 ; i < idxs.size() ; i++)
			sorted_idxs.push_back(idxs[i]);

		start += count;
	}
}

void reshuffle(term_v &terms, vector<int> &sorted_idxs)
{
  term_v orig_terms = terms;
  int len = sorted_idxs.size();
  terms.resize(len);
  for (int i=0 ; i < len ; i++)
    terms[i] = orig_terms[sorted_idxs[i]];  
}

void sort(term_v &terms, bool no_dups)
{
  //## IMPLEMENT
  vector<int> sorted_idxs;
  sorted_idxs.reserve(terms.size());
  assert(sorted_idxs.size() == 0);
  assert(sorted_idxs.capacity() == terms.size());
  
  sort(terms, sorted_idxs, no_dups);
  reshuffle(terms, sorted_idxs);
}

void sort(term_v &keys, term_v &values)
{
  assert(keys.size() == values.size());
  
  int size = keys.size();
  
  //## IMPLEMENT
  vector<int> sorted_idxs;
  sorted_idxs.reserve(size);

  assert(sorted_idxs.size() == 0);
  assert(sorted_idxs.capacity() == size);

  sort(keys, sorted_idxs, false);
  reshuffle(keys, sorted_idxs);
  reshuffle(values, sorted_idxs);
  
  for (int i=1 ; i < size ; i++)
    assert(keys[i] != keys[i-1]);  
}


////////////////////////////////////////////////////////////////////////////////

AmberObj::AmberObj(int weight) : weight(weight)
{

}

bool AmberObj::is_int()
{
  return false;
}

bool AmberObj::is_symbol()
{
  return false;
}


bool AmberObj::is_seq()
{
  return false;
}

bool AmberObj::is_set()
{
  return false;
}

bool AmberObj::is_map()
{
  return false;
}

bool AmberObj::is_tagged_obj()
{
  return false;
}

int AmberObj::get_int()
{
  throw;
}

Symbol AmberObj::get_symbol()
{
  throw;
}

int AmberObj::size()
{
  throw;
}

Term &AmberObj::item(int idx)
{
  throw;
}

term_v &AmberObj::items()
{
  throw;
}

Term &AmberObj::get_key(int idx)
{
  throw;
}

Term &AmberObj::get_value(int idx)
{
  throw;
}

bool AmberObj::has_key(Term &key)
{
  throw;
}

Term &AmberObj::lookup(Term &key)
{
  throw;
}

Symbol AmberObj::get_tag()
{
  throw;
}

Term &AmberObj::untag()
{
  throw;
}

int AmberObj::compare(AmberObj &other)
{
  int tag1 = get_type_tag();
  int tag2 = other.get_type_tag();
  
  if (tag1 == tag2)
    return compare_same_type(other);
  
  return tag1 < tag2 ? 1 : -1;
}

int AmberObj::get_weight()
{
  return weight;
}

bool AmberObj::is_non_neg_number()
{
  return is_int() && get_int() >= 0;
}

bool AmberObj::is_true()
{
  return is_symbol() && get_symbol() == Symbol::symb_true();
}

bool AmberObj::is_false()
{
  return is_symbol() && get_symbol() == Symbol::symb_false();
}

bool AmberObj::is_empty_seq()
{
  return is_seq() && size() == 0;
}

bool AmberObj::is_empty_set()
{
  return is_set() && size() == 0;
}

bool AmberObj::is_empty_map()
{
  return is_map() && size() == 0;
}

bool AmberObj::is_string()
{
  if (!is_tagged_obj() || get_tag() != Symbol("string"))
    return false;
  
  Term &chs = untag();
  
  if (!chs.is_seq())
    return false;
  
  int len = chs.size();
  for (int i=0 ; i < len ; i++)
  {
    Term &ch = chs.item(i);
    if (!ch.is_int())
      return false;
  }
  
  return true;
}

bool AmberObj::is_tuple()
{
  if (!is_map())
    return false;

  int s = size();
  for (int i=0 ; i < s ; i++)
    if (!get_key(i).is_symbol())
      return false;
  
  return true;
}

string AmberObj::get_string()
{
  assert(get_tag() == Symbol("string"));

  Term &chars = untag();
  int len = chars.size();
  
  string str(len, ' ');
  for (int i=0 ; i < len ; i++)
    str[i] = chars.item(i).get_int();
  
  return str;
}

////////////////////////////////////////////////////////////////////////////////

AmberInt::AmberInt(int value) : AmberObj(value), value(value)
{

}

bool AmberInt::is_int()
{
  return true;
}

int AmberInt::get_int()
{
  return value;
}

void AmberInt::print(ostream &os)
{
  os << value;
}

int AmberInt::total_number_of_nodes()
{
  return 1;
}

int AmberInt::get_type_tag()
{
  return 0;
}

int AmberInt::compare_same_type(AmberObj &other)
{
  return ::compare(value, other.get_int());
}

////////////////////////////////////////////////////////////////////////////////

AmberSymbol::AmberSymbol(Symbol value) : AmberObj(value.index()), value(value)
{

}


bool AmberSymbol::is_symbol()
{
  return true;
}

Symbol AmberSymbol::get_symbol()
{
  return value;
}

void AmberSymbol::print(ostream &os)
{
  os << value.to_string();
}

int AmberSymbol::total_number_of_nodes()
{
  return 1;
}

int AmberSymbol::get_type_tag()
{
  return 1;
}

int AmberSymbol::compare_same_type(AmberObj &other)
{
  return ::compare(value.index(), other.get_symbol().index());
}

////////////////////////////////////////////////////////////////////////////////

AmberSeq::AmberSeq(term_v &elems) : AmberObj(::get_weight(elems)), elems(elems)
{

}


bool AmberSeq::is_seq()
{
  return true;
}

int AmberSeq::size()
{
  return elems.size();
}

Term &AmberSeq::item(int idx)
{
  return elems[idx];
}

term_v &AmberSeq::items()
{
  return elems;
}

void AmberSeq::print(ostream &os)
{
  os << "[";
  int len = elems.size();
  for (int i=0 ; i < len ; i++)
  {
    if (i > 0)
      os << ", ";
    elems[i].print(os);
  }
  os << "]";
}

int AmberSeq::total_number_of_nodes()
{
  int count = 1;
  for (unsigned int i=0 ; i < elems.size() ; i++)
    count += elems[i].total_number_of_nodes();
  return count;
}

int AmberSeq::get_type_tag()
{
  return 2;
}

int AmberSeq::compare_same_type(AmberObj &other)
{
  return ::compare(items(), other.items());
}

////////////////////////////////////////////////////////////////////////////////

AmberSet::AmberSet(term_v &es) : AmberObj(0), elems(es)
{
  sort(elems, true);
  weight = ::get_weight(elems);
}


bool AmberSet::is_set()
{
  return true;
}

int AmberSet::size()
{
  return elems.size();
}

Term &AmberSet::item(int idx)
{
  return elems[idx];
}

term_v &AmberSet::items()
{
  return elems;
}

void AmberSet::print(ostream &os)
{
  os << "{";
  int size = elems.size();
  for (int i=0 ; i < size ; i++)
  {
    if (i > 0)
      os << ", ";
    elems[i].print(os);
  }
  os << "}";
}

int AmberSet::total_number_of_nodes()
{
  int count = 1;
  for (unsigned int i=0 ; i < elems.size() ; i++)
    count += elems[i].total_number_of_nodes();
  return count;
}

int AmberSet::get_type_tag()
{
  return 3;
}

int AmberSet::compare_same_type(AmberObj &other)
{
  return ::compare(items(), other.items());
}

////////////////////////////////////////////////////////////////////////////////

AmberMap::AmberMap(term_v &ks, term_v &vs)
: AmberObj(::get_weight(ks)+::get_weight(vs)), keys(ks), values(vs)
{
  assert(ks.size() == vs.size());
  
  sort(keys, values);
}
  
bool AmberMap::is_map()
{
  return true;
}

bool AmberMap::is_tuple()
{
  int s = size();
  for (int i=0 ; i < s ; i++)
    if (!keys[i].is_symbol())
      return false;
  return true;
}

int AmberMap::size()
{
  return keys.size();
}

Term &AmberMap::get_key(int idx)
{
  return keys[idx];
}

Term &AmberMap::get_value(int idx)
{
  return values[idx];
}

bool AmberMap::has_key(Term &key)
{
  return lookup_idx(key) != -1;
}

Term &AmberMap::lookup(Term &key)
{
  int idx = lookup_idx(key);
  if (idx != -1)
    return values[idx];
  halt;
  throw;
}

void AmberMap::print(ostream &os)
{
  int size = keys.size();

  bool as_tuple = is_tuple();
  
  os << "(";
  for (int i=0 ; i < size ; i++)
  {
    if (i > 0)
      os << ", ";
    keys[i].print(os);
    os << (as_tuple ? ": " : " => ");
    values[i].print(os);
  }
  os << ")";
}

int AmberMap::total_number_of_nodes()
{
  int count = 1;
  for (unsigned int i=0 ; i < keys.size() ; i++)
    count += keys[i].total_number_of_nodes() + values[i].total_number_of_nodes();
  return count;
}

int AmberMap::get_type_tag()
{
  return 4;
}

int AmberMap::compare_same_type(AmberObj &other)
{
  AmberMap &other_map = dynamic_cast<AmberMap &>(other);
  int key_cmp = ::compare(keys, other_map.keys);
  if (key_cmp != 0)
    return key_cmp;
  return ::compare(values, other_map.values);
}

int AmberMap::lookup_idx(Term &key)
{
  //## IMPLEMENT PROPERLY
  int size = keys.size();
  for (int i=0 ; i < size ; i++)
    if (keys[i] == key)
      return i;
  return -1;
}

////////////////////////////////////////////////////////////////////////////////

AmberTaggedObj::AmberTaggedObj(Symbol tag, Term &obj)
: AmberObj(tag.index()+obj.get_weight()), tag(tag), obj(obj)
{

}

  
bool AmberTaggedObj::is_tagged_obj()
{
  return true;
}

Symbol AmberTaggedObj::get_tag()
{
  return tag;
}

Term &AmberTaggedObj::untag()
{
  return obj;
}

void AmberTaggedObj::print(ostream &os)
{
  if (is_string())
  {
    os << "\"";
    int len = obj.size();
    for (int i=0 ; i < len ; i++)
      os.put(obj.item(i).get_int());
    os << "\"";
  }
  else if (obj.is_tuple())
  {
    os << tag.to_string();
    obj.print(os);
  }
  else
  {
    os << tag.to_string() << "(";
    obj.print(os);
    os << ")";
  }
}

int AmberTaggedObj::total_number_of_nodes()
{
  return obj.total_number_of_nodes() + 1;
}

int AmberTaggedObj::get_type_tag()
{
  return 5;
}

int AmberTaggedObj::compare_same_type(AmberObj &other)
{
  int idx = tag.index();
  int other_idx = other.get_tag().index();
  if (idx != other_idx)
    return ::compare(idx, other_idx);
  return obj.compare(other.untag());
}

////////////////////////////////////////////////////////////////////////////////

int indent_delta(char ch)
{
  if (ch == '(' || ch == '[' || ch == '{')
    return 1;
    
  if (ch == ')' || ch == ']' || ch == '}')
    return -1;
  
  return 0;
}

int string_end(const char *substr, int len)
{
  for (int i=0 ; i < len ; i++)
  {
    char ch = substr[i];
    if (ch == '"')
      return i;
    if (ch == '\\')
      i++;  
  }
  halt;
}

int string_size(const char *str, int start_idx, int len)
{
  return string_end(str+start_idx+1, len-start_idx-1) + 2;
}

void indent(const char *str, ostream &os)
{
  int len = strlen(str);
  
  int indent = 0;
  for (int i=0 ; i < len ; i++)
  {
    char ch = str[i];
    
    if (ch == '"')
    {
      int str_size = string_size(str, i, len);
      os.write(str+i, str_size);
      i += str_size - 1;
      continue;
    }
    
    int dind = indent_delta(ch);
    
    if (dind == 0)
    {
      os.put(ch);
      if (ch == ',')
      {
        os.put('\n');
        for (int j=0 ; j < indent ; j++)
          os << "  ";
        assert(str[i+1] == ' ');
        i++;
      }
    }  

    if (dind == 1)
    {
      int loc_ind = 1;

      for (int j=1 ; j < 60 && i+j < len ; j++)
      {
        if (str[i+j] == '"')
        {
          j += string_size(str, i+j, len) - 1;
          continue;        
        }
        
        loc_ind += indent_delta(str[i+j]);
        assert(loc_ind >= 0);
        if (loc_ind == 0)
        {
          for (int k=0 ; k <= j ; k++)
            os.put(str[i+k]);
          i += j;
          break;                  
        }
      }
      
      if (loc_ind > 0)
      {
        indent++;
        os.put(ch);
        os.put('\n');
        for (int j=0 ; j < indent ; j++)
          os << "  ";
      }
    }

    if (dind == -1)
    {
      indent--;
      os.put('\n');
      for (int j=0 ; j < indent ; j++)
        os << "  ";
      os.put(ch);
    }  
  }

  os.put('\n');
}

/////////////////////////  Term  /////////////////////////


Term::Term()
{

}

Term::Term(const Term &t) : obj(t.obj)
{

}

Term::Term(AmberObj *obj) : obj(obj)
{

}

bool Term::is_null()
{
  return obj.is_null();
}

Term& Term::operator = (const Term &t)
{
  obj = t.obj;
  //str = obj->to_string();
  return *this;
}

bool Term::operator != (Term &t)
{
  return compare(t) != 0;
}

bool Term::operator == (Term &t)
{
  return compare(t) == 0;
}

bool Term::operator < (Term &t)
{
  return compare(t) == 1;
}

bool Term::is_int()
{
  return obj->is_int();
}

bool Term::is_symbol()
{
  return obj->is_symbol();
}

bool Term::is_seq()
{
  return obj->is_seq();
}

bool Term::is_set()
{
  return obj->is_set();
}

bool Term::is_map()
{
  return obj->is_map();
}

bool Term::is_tagged_obj()
{
  return obj->is_tagged_obj();
}


int Term::get_int()
{
  return obj->get_int();
}

Symbol Term::get_symbol()
{
  return obj->get_symbol();
}

int Term::size()
{
  return obj->size();
}

Term &Term::item(int idx)
{
  return obj->item(idx);
}

term_v &Term::items()
{
  return obj->items();
}

Term &Term::get_key(int idx)
{
  return obj->get_key(idx);
}

Term &Term::get_value(int idx)
{
  return obj->get_value(idx);
}

bool Term::has_key(Term &key)
{
  return obj->has_key(key);
}

Term &Term::lookup(Term &key)
{
  return obj->lookup(key);
}

Symbol Term::get_tag()
{
  return obj->get_tag();
}

Term &Term::untag()
{
  return obj->untag();
}


int Term::compare(Term &other)
{
  return obj->compare(*other.obj);
}

int Term::get_weight()
{
  return obj->get_weight();
}


bool Term::is_non_neg_number()
{
  return obj->is_non_neg_number();
}

bool Term::is_true()
{
  if (obj->is_true())
    return true;
  
  if (obj->is_false())
    return false;
  
  cout << "Non-boolean value where a boolean value was expected:\n";
  print_indented();
  //Program::get_singleton().print_stack();  
  halt;
}

bool Term::is_false()
{
  return !is_true();
}

bool Term::is_bool()
{
  return obj->is_true() || obj->is_false();
}

bool Term::is_empty_seq()
{
  return obj->is_empty_seq();
}

bool Term::is_empty_set()
{
  return obj->is_empty_set();
}

bool Term::is_empty_map()
{
  return obj->is_empty_map();
}

bool Term::is_tuple()
{
  return obj->is_tuple();
}

bool Term::is_string()
{
  return obj->is_string();
}

string Term::get_string()
{
  return obj->get_string();
}

void Term::print(ostream &os)
{
  obj->print(os);
}

void Term::print_indented(ostream &os)
{
  ostringstream oss;
  print(oss);
  indent(oss.str().c_str(), os);
}

string Term::to_string(bool always)
{
  if (!always)
    return "";
  
  ostringstream oss;
  print_indented(oss);
  return oss.str();
}

int Term::total_number_of_nodes()
{
  return obj->total_number_of_nodes();
}

////////////////////////////////////////////////////////////////////////////////

Term int_obj(int n)
{
  return Term(new AmberInt(n));
}

Term symbol_obj(Symbol s)
{
  return Term(new AmberSymbol(s));
}

Term seq_obj(term_v &elems)
{
  return Term(new AmberSeq(elems));
}

Term set_obj(term_v &elems)
{
  return Term(new AmberSet(elems));
}

Term map_obj(term_v &keys, term_v &values)
{
  return Term(new AmberMap(keys, values));
}

Term tagged_obj(Symbol tag, Term &obj)
{
  return Term(new AmberTaggedObj(tag, obj));
}

Term null_obj()
{
  return Term();
}

Term bool_obj(bool b)
{
  return symbol_obj(b ? Symbol::symb_true() : Symbol::symb_false());
}

Term str_obj(const string &str)
{
  int len = str.length();
  term_v chars(len);
  for (int i=0 ; i < len ; i++)
    chars[i] = int_obj(str[i]);
  Term chars_obj = seq_obj(chars);
  return tagged_obj(Symbol("string"), chars_obj);
}

Term str_obj(const char *str)
{
  return str_obj(string(str));
}

Term symbol_obj(const char *str)
{
  return symbol_obj(Symbol(str));
}

Term empty_seq_obj()
{
  term_v ts;
  return seq_obj(ts);
}

Term empty_set_obj()
{
  term_v ts;
  return set_obj(ts);
}

Term empty_map_obj()
{
  term_v ts;
  return map_obj(ts, ts);
}

Term tagged_obj(string tag, Term &obj)
{
  return tagged_obj(Symbol(tag), obj);
}

Term tagged_obj(const char *tag, Term &obj)
{
  return tagged_obj(Symbol(tag), obj);
}

Term map_obj(const char *lab, Term obj)
{
  term_v labs = mk_v(symbol_obj(lab));
  term_v objs = mk_v(obj);
  return map_obj(labs, objs);
}

Term map_obj(const char *lab1, Term obj1, const char *lab2, Term obj2)
{
  term_v labs = mk_v(symbol_obj(lab1), symbol_obj(lab2));
  term_v objs = mk_v(obj1, obj2);
  return map_obj(labs, objs);
}

Term map_obj(const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3)
{
  term_v labs = mk_v(symbol_obj(lab1), symbol_obj(lab2), symbol_obj(lab3));
  term_v objs = mk_v(obj1, obj2, obj3);
  return map_obj(labs, objs);
}
     
Term map_obj(const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3, const char *lab4, Term obj4)
{
  term_v labs = mk_v(symbol_obj(lab1), symbol_obj(lab2), symbol_obj(lab3), symbol_obj(lab4));
  term_v objs = mk_v(obj1, obj2, obj3, obj4);
  return map_obj(labs, objs);
}

Term map_obj(const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3, const char *lab4, Term obj4, const char *lab5, Term obj5)
{
  term_v labs = mk_v(symbol_obj(lab1), symbol_obj(lab2), symbol_obj(lab3), symbol_obj(lab4), symbol_obj(lab5));
  term_v objs = mk_v(obj1, obj2, obj3, obj4, obj5);
  return map_obj(labs, objs);
}

Term tagged_map(const char *tag, const char *lab, Term obj)
{
  Term map = map_obj(lab, obj);
  return tagged_obj(tag, map);
}

Term tagged_map(const char *tag, const char *lab1, Term obj1, const char *lab2, Term obj2)
{
  Term map = map_obj(lab1, obj1, lab2, obj2);
  return tagged_obj(tag, map);
}

Term tagged_map(const char *tag, const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3)
{
  Term map = map_obj(lab1, obj1, lab2, obj2, lab3, obj3);
  return tagged_obj(tag, map);
}

Term tagged_map(const char *tag, const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3, const char *lab4, Term obj4)
{
  Term map = map_obj(lab1, obj1, lab2, obj2, lab3, obj3, lab4, obj4);
  return tagged_obj(tag, map);
}

Term tagged_map(const char *tag, const char *lab1, Term obj1, const char *lab2, Term obj2, const char *lab3, Term obj3, const char *lab4, Term obj4, const char *lab5, Term obj5)
{
  Term map = map_obj(lab1, obj1, lab2, obj2, lab3, obj3, lab4, obj4, lab5, obj5);
  return tagged_obj(tag, map);
}

#ifndef _MY_UTILS_ZH_
#define _MY_UTILS_ZH_

#include <cstring>

#define halt {(*((char *)0)) = 0; throw;}

#define lengthof(X) (sizeof(X) / sizeof((X)[0]))

#define assert(_E_) (void)(_assert_((_E_), #_E_, __FILE__, __LINE__))

bool _assert_(int exp, const char *str_exp, const char *file, int line);


typedef vector<int>     int_v;
typedef vector<string>  string_v;


class Obj
{
public:
  virtual ~Obj()
  {

  }
};

typedef ref<Obj> obj;

template <typename T> class HolderObj : public Obj
{
public:
  HolderObj(T obj) : obj(obj) {}

  T obj;
};

template <typename T> vector<T> mk_v(const T &v)
{
  vector<T> res(1);
  res[0] = v;
  return res;
}

template <typename T> vector<T> mk_v(const T &v0, const T &v1)
{
  vector<T> res(2);
  res[0] = v0;
  res[1] = v1;
  return res;
}

template <typename T> vector<T> mk_v(const T &v0, const T &v1, const T &v2)
{
  vector<T> res(3);
  res[0] = v0;
  res[1] = v1;
  res[2] = v2;
  return res;
}

template <typename T> vector<T> mk_v(const T &v0, const T &v1, const T &v2, const T &v3)
{
  vector<T> res(4);
  res[0] = v0;
  res[1] = v1;
  res[2] = v2;
  res[3] = v3;
  return res;
}

template <typename T> vector<T> mk_v(const T &v0, const T &v1, const T &v2, const T &v3, const T &v4)
{
  vector<T> res(5);
  res[0] = v0;
  res[1] = v1;
  res[2] = v2;
  res[3] = v3;
  res[4] = v4;
  return res;
}

template <typename T> vector<T> mk_v(const T &v0, const T &v1, const T &v2, const T &v3, const T &v4, const T &v5)
{
  vector<T> res(6);
  res[0] = v0;
  res[1] = v1;
  res[2] = v2;
  res[3] = v3;
  res[4] = v4;
  res[5] = v5;
  return res;
}

template <typename T> vector<T> mk_v(const T &v, const vector<T> &vs)
{
  vector<T> res(vs.size() + 1);
  res[0] = v;
  for (unsigned int i=0 ; i < vs.size() ; i++)
    res[i+1] = vs[i];
  return res;
}

template <typename T> vector<T> mk_v(const vector<T> &vs, const T &v)
{
  vector<T> res(vs.size() + 1);
  for (unsigned int i=0 ; i < vs.size() ; i++)
    res[i] = vs[i];
  res[vs.size()] = v;
  return res;
}

template <typename T> vector<T> concat_vectors(const vector<T> &vs1, const vector<T> &vs2)
{
  int n1 = vs1.size();
  int n2 = vs2.size();

  vector<T> res(n1 + n2);

  for (int i=0 ; i < n1 ; i++)
    res[i] = vs1[i];

  for (int i=0 ; i < n2 ; i++)
    res[i+n1] = vs2[i];

  return res;
}


template <typename T> int index_in_sorted_vector(const T &e, const vector<T> &v, bool throw_if_not_found = false)
{
  int low = 0;
  int high = v.size() - 1;

  while (low <= high)
  {
    int middle = (low + high) / 2;
    const T &middle_el = v[middle];
    
    if (middle_el == e)
      return middle;

    if (middle_el < e)
      low = middle + 1;
    else
      high = middle - 1;
  }

  if (throw_if_not_found)
    throw;

  return -1;
}


template <typename T> bool in_sorted_vector(const T &e, const vector<T> &v)
{
  return index_in_sorted_vector(e, v) != -1;
}

template <typename T> bool in_unsorted_array(const T &e, const T *v, int size)
{
  for (int i=0 ; i < size ; i++)
    if (e == v[i])
      return true;
  return false;
}

template <typename T> class ref_v : public vector<ref<T> >
{
public:
  ref_v()
  {

  }

  ref_v(int n) : vector<ref<T> >(n)
  {

  }
};


template <typename T> void remove_duplicates_from_sorted_vector(vector<T> &v)
{
  int n = v.size();

  if (n < 2)
    return;

  for (int i=1 ; i < n ; i++)
    if (v[i] == v[i-1])
    {
      int last_idx = i - 1;
      int first_free_slot = i;
      
      for (int j=i+1 ; j < n ; j++)
        if (v[j] != v[last_idx])
        {
          assert(j > first_free_slot);

          v[first_free_slot] = v[j];
          last_idx = j;
          first_free_slot++;
        }

      v.resize(first_free_slot);
      break;
    }
}

inline string to_string(int i, unsigned int min_len=0, int ch='0')
{
  ostringstream oss;
  oss << i;
  string str = oss.str();
  if (str.length() < min_len)
    str = string(min_len-str.length(), ch) + str;
  return str;
}

inline int to_non_neg_int(const string &s)
{
  int len = s.length();

  assert(s.length() > 0);
  for (int i=0 ; i < len ; i++)
    assert(isdigit(s[i]));

  return atoi(s.c_str());
}

string to_lower_case(const string &str);

inline bool streq(const char *str1, const char *str2)
{
  return !strcmp(str1, str2);
}

#endif

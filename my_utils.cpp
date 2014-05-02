#include "common.h"


bool _assert_(int exp, const char *assertion, const char *file, int line)
{
  if (!exp)
  {
    int idx = strlen(file)-1;

    while (idx >= 0 && file[idx] != '\\')
      idx--;

    cout << "Assertion \"" << assertion << "\" failed, file: " << (file + idx + 1) << ", line: " << line << endl;

    (*((char *)0)) = 0;
  }

  return true;
}

string to_lower_case(const string &str)
{
  string lc_str = str;
  for (unsigned int i=0 ; i < lc_str.length() ; i++)
    lc_str[i] = tolower(lc_str[i]);
  return lc_str;
}


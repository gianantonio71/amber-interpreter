#include <cstddef>
#include "ref.h"

bool ref__do_gc = true;
int del_counter = 0;

void disable_gc()
{
  ref__do_gc = false;
}


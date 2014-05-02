#include "os_interface.h"

#include "windows.h"

int get_tick_count()
{
  return GetTickCount();
}

void set_priority_idle()
{
  SetPriorityClass(GetCurrentProcess(), IDLE_PRIORITY_CLASS);
}

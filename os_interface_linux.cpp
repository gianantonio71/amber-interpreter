#include "os_interface.h"

#include <time.h>

#include <iostream>


int get_tick_count()
{
	struct timespec ts;
	if (clock_gettime(CLOCK_MONOTONIC, &ts) != 0)
	{
 		std::cerr << "clock_gettime failed" << std::endl;
 		return 0;
	}
	return 1000 * ts.tv_sec + ts.tv_nsec / 1000000;
}


void set_priority_idle()
{


}



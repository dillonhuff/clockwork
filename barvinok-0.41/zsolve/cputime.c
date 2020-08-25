/*
4ti2 -- A software package for algebraic, geometric and combinatorial
problems on linear spaces.

Copyright (C) 2006 4ti2 team.
Main author(s): Matthias Walter.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. 
*/

#include "cputime.h"

#include "defs.h"

#include <assert.h>
#include <stdlib.h>
#ifdef _POSIX_TIMERS
#include <sys/time.h>
#include <sys/resource.h>
#endif
#include <time.h>

//                                                                            //

double getCPUTime()
{
#ifdef _POSIX_TIMERS
	struct rusage usage;

	getrusage(RUSAGE_SELF, &usage);

	return (double)usage.ru_utime.tv_sec + 1e-6*usage.ru_utime.tv_usec;
#else
	return (double) clock() / CLOCKS_PER_SEC;
#endif
}

//                                                                            //

void fprintCPUTime(FILE *stream, CPUTime time)
{
	if (time>=86400.0)
		fprintf(stream, "%.2f days", time / 86400.0);
	else if (time>=3600.0)
		fprintf(stream, "%.2f hours", time / 3600.0);
	else if (time>=60.0)
		fprintf(stream, "%.2f mins", time / 60.0);
	else
		fprintf(stream, "%.2f secs", time);
}

//                                                                            //

void printCPUTime(CPUTime time)
{
	fprintCPUTime(stdout, time);
}

//                                                                            //

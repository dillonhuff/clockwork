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

#ifndef _4ti2_DEFS_H
#define _4ti2_DEFS_H

#include <stdio.h>

// bool

#ifndef bool
# define bool int
#endif

#ifndef true
# define true 1
#endif

#ifndef false
# define false 0
#endif

// math

#ifndef MAXINT
# define MAXINT ((int)(~(unsigned)0 >> 1))
#endif


int gcd(int, int);

#define minm(x,y) ( ((x)<(y)) ? (x) : (y) )
int mini(int, int);
#define maxm(x,y) ( ((x)>(y)) ? (x) : (y) )
int maxi(int, int);
double maxd(double, double);

#endif

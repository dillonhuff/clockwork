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

#include "defs.h"

//                                                                            //

int _gcd(int a, int b)
{
	if (b!=0)
		return _gcd(b, a % b);
	else
		return a;
}

//                                                                            //

int gcd(int a, int b)
{
	if (a<0)
		a *= -1;
	if (b<0)
		b *= -1;
	if (a>b)
		return _gcd(a, b);
	else
		return _gcd(b, a);
}

//                                                                            //

int mini(int a, int b)
{
	return a<b ? a : b;
}

//                                                                            //

int maxi(int a, int b)
{
	return a>b ? a : b;
}

//                                                                            //

double maxd(double a, double b)
{
	return a>b ? a : b;
}

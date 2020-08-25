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

#ifndef _VARPROPERTIES_H
#define _VARPROPERTIES_H

#include "defs.h"

typedef struct variableproperty_t
{
	int Column;
	/* Ordering ID */

	int Upper;
	/* Upper limit, MAXINT for infinity */
	
	int Lower;
	/* Lower limit, -MAXINT for -infinity */

	bool Free;
	/* Free flag */
} variableproperty_t;
typedef variableproperty_t *VariableProperties;

VariableProperties createVariableProperties(int);
/* Allocate memory (size) */

void deleteVariableProperties(VariableProperties);
/* Free memory (variable) */

void swapVariableProperties(VariableProperties, int, int);
/* Swap a and b (variable, a, b) */

bool checkVariableSymmetry(VariableProperties, int);
/* Is variable symmetric? (variable, id) */

bool checkVariableFree(VariableProperties, int);
/* Is variable free? (variable, id) */

bool checkVariableBounds(VariableProperties, int, int);
/* is given number in bounds? (variable, id, num) */

void fprintVariableProperties(FILE *, VariableProperties, int);
/* print to stdout (variable, size) */

void readVariableProperties(FILE *, VariableProperties, int);

#endif

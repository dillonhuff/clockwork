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

#ifndef _VECTORARRAY_H
#define _VECTORARRAY_H

#include <stdio.h>
#include "defs.h"
#include "vector.h"
#include "varproperties.h"

typedef struct vectorarray_t
{
	int Variables;
	int Size;
	int Memory;
	
	VariableProperties Properties;
	Vector *Data;
} vectorarray_t;
typedef vectorarray_t *VectorArray;

VectorArray createVectorArray(int);
/* Allocate memory for an empty array (variables) */

void deleteVectorArray(VectorArray);
/* Free memory and all vectors (array) */

void fprintVectorArray(FILE *, VectorArray, bool);
/* Print to stream with or without header (stream, array, header) */

void printVectorArray(VectorArray, bool);
/* Print to stdout with or without header (stream, array, header) */

void appendToVectorArray(VectorArray, Vector);
/* Append a vector (array, vector) */

void swapVectorArrayRows(VectorArray, int, int);
/* Swap two vectors */

void swapVectorArrayColumns(VectorArray, int, int);
/* Swap two columns completely */

void appendVectorArrayNegatives(VectorArray);
/* append all negative vectors, too */

typedef int (*ColumnCompare)(int, int);

void sortVectorArrayColumns(VectorArray, ColumnCompare);
/* sort columns by order in Properties */

VectorArray readVectorArray(FILE *, bool);
/* read vectorarray from a stream, optionally with header (stream, header?) */

#endif

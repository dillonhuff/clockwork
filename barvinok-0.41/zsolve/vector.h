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

#ifndef _VECTOR_H
#define _VECTOR_H

#include <stdio.h>

#include "defs.h"

typedef int vector_t;
typedef vector_t *Vector;

Vector createVector(int);
/* Allocate memory (size) */

Vector createZeroVector(int);
/* Allocate memory and fill it with zeros */

void deleteVector(Vector);
/* Free memory (vector) */

Vector copyVector(Vector, int);
/* Allocate memory and copy from a given vector (given vector, size) */

void fprintVector(FILE *, Vector, int);
/* Print to stream (stream, vector, size) */

void printVector(Vector, int);
/* Print to stdout (vector, size) */

Vector readVector(FILE *, int);
/* Read from stream (stream, size) */

int normVector(Vector, int);
/* L1-norm (vector, size) */

void swapVector(Vector, int, int);
/* Swap vector[a] and vector[b] (vector, a, b) */

int gcdVector(Vector, int);
/* gcd of all numbers (vector, size) */

int lexCompareInverseVector(Vector, int);
/* lexicographically compare vector and its inverse */

#endif

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

#ifndef _MATRIX_H
#define _MATRIX_H

#include <stdio.h>

typedef struct matrix_t
{
	int Width;
	int Height;
	int *Data;
} matrix_t;
typedef matrix_t *Matrix;

Matrix createMatrix(int, int);
/* Allocate memory (width, height) */

Matrix createIdentityMatrix(int);
/* Allocate memory and fill with 1's and 0's (size) */

void deleteMatrix(Matrix);
/* Free memory (matrix)*/

Matrix copyMatrix(Matrix);
/* Copy a matrix */

Matrix readMatrix(FILE *);
/* Read from stream (stream) */

void fprintMatrix(FILE *, Matrix);
/* Print to stream (stream, matrix) */

void printMatrix(Matrix);
/* Print to stdout (matrix) */

void swapMatrixRows(Matrix, int, int);
/* Swap rows a and b (matrix, a, b) */

void swapMatrixColumns(Matrix, int, int);
/* Swap columns a and b (matrix, a, b) */

void negateMatrixColumn(Matrix, int);
/* Change the sign of a complete column (matrix, column) */

void combineMatrixColumns(Matrix, int, int, int);
/* Add a factorized sum of a column src to another column dest (matrix, dest, factor, src) */

#endif

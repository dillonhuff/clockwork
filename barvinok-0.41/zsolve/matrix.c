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

#include "matrix.h"

#include <assert.h>
#include <stdlib.h>

//                                                                            //

Matrix createMatrix(int w, int h)
{
	Matrix matrix = (Matrix)malloc(sizeof(matrix_t));

	if (matrix==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for Matrix!\n", __FILE__, __LINE__);
		exit(1);
	}

	matrix->Width = w;
	matrix->Height = h;
	matrix->Data = (int *)malloc(w*h*sizeof(int));

	return matrix;
}
//                                                                            //

Matrix createIdentityMatrix(int size)
{
	int i;
	Matrix matrix;

	assert(size>0);

	matrix = createMatrix(size, size);

	i = size * size;
	while (i--)
		matrix->Data[i] = (i / size == i % size) ? 1 : 0;

	return matrix;
}

//                                                                            //

void deleteMatrix(Matrix matrix)
{
	if (matrix)
	{
		if (matrix->Data)
			free(matrix->Data);
		free(matrix);
	}
}

//                                                                            //

Matrix readMatrix(FILE *stream)
{
	Matrix matrix = NULL;
	int i,w,h;

	assert(stream);

	if (fscanf(stream, "%d %d", &h, &w)<2)
		return NULL;

	matrix = createMatrix(w,h);
	w *= h;
	for (i=0; i<w; i++)
	{
		if (fscanf(stream, "%d", &(matrix->Data[i]))<1)
		{
			deleteMatrix(matrix);
			return NULL;
		}
	}

	return matrix;
}

//                                                                            //

void fprintMatrix(FILE *stream, Matrix matrix)
{
	int i,j;

	assert(stream);
	assert(matrix);

	fprintf(stream, "%d %d\n\n", matrix->Height, matrix->Width);

	for (i=0; i<matrix->Height; i++)
	{
		for (j=0; j<matrix->Width; j++)
			fprintf(stream, "%3d ", matrix->Data[j+matrix->Width*i]);
		fprintf(stream, "\n");
	}
}

//                                                                            //

inline void printMatrix(Matrix matrix)
{
	assert(matrix);
	
	fprintMatrix(stdout, matrix);
}

//                                                                            //

void swapMatrixRows(Matrix matrix, int a, int b)
{
	int i, tmp,w;

	assert(matrix);
	assert(a>=0 && a<matrix->Height);
	assert(b>=0 && b<matrix->Height);

	if (a==b)
		return;

	w = matrix->Width;
	for (i=0; i<w; i++)
	{
		tmp = matrix->Data[a*w+i];
		matrix->Data[a*w+i] = matrix->Data[b*w+i];
		matrix->Data[b*w+i] = tmp;
	}
}

//                                                                            //

void swapMatrixColumns(Matrix matrix, int a, int b)
{
	int i, tmp,w;

	assert(matrix);
	assert(a>=0 && a<matrix->Width);
	assert(b>=0 && b<matrix->Width);
	
	if (a==b)
		return;

	w = matrix->Width;
	for (i=0; i<matrix->Height; i++)
	{
		tmp = matrix->Data[i*w+a];
		matrix->Data[i*w+a] = matrix->Data[i*w+b];
		matrix->Data[i*w+b] = tmp;
	}
}

//                                                                            //

void negateMatrixColumn(Matrix matrix, int col)
{
	int i,w;

	assert(matrix);
	assert(col>=0 && col<matrix->Width);

	w = matrix->Width;
	for (i=0; i<matrix->Height; i++)
		matrix->Data[i*w+col] *= -1;
}

//                                                                            //

void combineMatrixColumns(Matrix matrix, int dest, int factor, int src)
{
	int i,w;

	assert(matrix);
	assert(dest>=0 && dest<matrix->Width);
	assert(src>=0 && src<matrix->Width);
	assert(dest!=src);

	w = matrix->Width;
	for (i=0; i<matrix->Height; i++)
		matrix->Data[i*w+dest] += factor*matrix->Data[i*w+src];
}

//                                                                            //

Matrix copyMatrix(Matrix old)
{
	Matrix new;
	int i;

	assert(old);

	new = createMatrix(old->Width, old->Height);

	assert(new);

	i = old->Width*old->Height;
	while (i--)
		new->Data[i] = old->Data[i];

	return new;
}

//                                                                            //

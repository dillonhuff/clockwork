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

#include "vector.h"

#include <assert.h>
#include <stdlib.h>
#include "defs.h"

//                                                                            //

Vector createVector(int size)
{
	Vector vector = (Vector)malloc(size*sizeof(vector_t));

	if (vector==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for Vector!\n", __FILE__, __LINE__);
		exit(1);
	}

	return vector;
}
//                                                                            //

Vector createZeroVector(int size)
{
	Vector vector = (Vector)calloc(size, sizeof(vector_t));

	if (vector==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for Vector!\n", __FILE__, __LINE__);
		exit(1);
	}

	return vector;
}

//                                                                            //

inline void deleteVector(Vector vector)
{
	free(vector);
}

//                                                                            //

Vector copyVector(Vector old, int size)
{
	Vector new = (Vector)malloc(size*sizeof(vector_t));

	if (new==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for Vector!\n", __FILE__, __LINE__);
		exit(1);
	}

	while (size--)
		new[size] = old[size];

	return new;
}

//                                                                            //

void fprintVector(FILE *stream, Vector vector, int size)
{
	int i;

	assert(stream);
	assert(vector);

	fprintf(stream, "%2d", vector[0]);
	for (i=1; i<size; i++)
		fprintf(stream, " %2d", vector[i]);
}

//                                                                            //

inline void printVector(Vector vector, int size)
{
	assert(vector);

	fprintVector(stdout, vector, size);
}

//                                                                            //

Vector readVector(FILE *stream, int size)
{
	int i;
	Vector vector;

	assert(stream);

	vector = createVector(size);
	assert(vector);

	for (i=0; i<size; i++)
	{
		if (fscanf(stream, "%d", &(vector[i]))<1)
		{
			deleteVector(vector);
			return NULL;
		}
	}

	return vector;
}

//                                                                            //

int normVector(Vector vector, int size)
{
	int norm = 0;

	assert(vector);

	if (size>=0)
		while (size--)
			norm += abs(vector[size]);

	return norm;
}

//                                                                            //

void swapVector(Vector vector, int a, int b)
{
	int tmp;

	assert(vector);

	tmp = vector[a];
	vector[a] = vector[b];
	vector[b] = tmp;
}

//                                                                            //

int gcdVector(Vector vector, int size)
{
	int i,result;

	if (size==0)
		return 0;

	result = vector[0];
	for (i=1; i<size; i++)
		result = gcd(result, vector[i]);

	return result;
}

//                                                                            //

int lexCompareInverseVector(Vector vector, int size) {
	int i = 0;
	while (i<size && vector[i]==0)
		i++;
	return i==size ? 0 : vector[i];
}

//                                                                            //

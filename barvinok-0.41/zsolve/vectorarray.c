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

#include "vectorarray.h"

#include <assert.h>
#include <stdlib.h>

//                                                                            //

VectorArray createVectorArray(int var)
{
	VectorArray array = (VectorArray)malloc(sizeof(vectorarray_t));

	if (array==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for VectorArray!\n", __FILE__, __LINE__);
		exit(1);
	}

	array->Variables = var;
	array->Memory = 0;
	array->Size = 0;
	array->Data = NULL;
	array->Properties = createVariableProperties(var);

	return array;
}

//                                                                            //

void deleteVectorArray(VectorArray array)
{
	int i;

	if (array)
	{
		for (i=0; i<array->Size; i++)
			deleteVector(array->Data[i]);

		deleteVariableProperties(array->Properties);

		free(array->Data);
		free(array);
	}
}

//                                                                            //

void fprintVectorArray(FILE *stream, VectorArray array, bool header)
{
	int i;

	assert(stream);
	assert(array);

	if (header)
	{
		fprintf(stream, "%d %d\n\n", array->Size, array->Variables);
		fprintVariableProperties(stream, array->Properties, array->Variables);
		fputs("\n", stream);
	}

	for (i=0; i<array->Size; i++)
	{
		fprintVector(stream, array->Data[i], array->Variables);
		fputs("\n", stream);
	}
}

//                                                                            //

inline void printVectorArray(VectorArray array, bool header)
{
	assert(array);

	fprintVectorArray(stdout, array, header);
}

//                                                                            //

void appendToVectorArray(VectorArray array, Vector vector)
{
	assert(array);
	assert(vector);

	array->Size++;
	if (array->Size>array->Memory)
	{
		array->Memory = 2*(array->Memory+1);
		array->Data = (Vector *)realloc(array->Data, array->Memory * sizeof(Vector));
	}
	array->Data[array->Size-1] = vector;
}

//                                                                            //

void swapVectorArrayRows(VectorArray array, int a, int b)
{
	Vector vector;

	assert(array);
	assert(a>=0 && a<array->Size);
	assert(b>=0 && b<array->Size);

	vector = array->Data[a];
	array->Data[a] = array->Data[b];
	array->Data[b] = vector;
}

//                                                                            //

void swapVectorArrayColumns(VectorArray array, int a, int b)
{
	int i;

	assert(array);
	assert(a>=0 && a<array->Variables);
	assert(b>=0 && b<array->Variables);

	for (i=0; i<array->Size; i++)
		swapVector(array->Data[i], a, b);
	swapVariableProperties(array->Properties, a, b);
}

//                                                                            //

void appendVectorArrayNegatives(VectorArray array)
{
	int i,j;
	Vector vec;

	assert(array);

	vec = createVector(array->Variables);
	for (i=array->Size-1; i>=0; i--)
	{
		for (j=0; j<array->Variables; j++)
			vec[j] = -array->Data[i][j];
		appendToVectorArray(array, copyVector(vec, array->Variables));
	}
	deleteVector(vec);
}

//                                                                            //

void sortVectorArrayColumns(VectorArray array, ColumnCompare cmp)
{
	int i,j;
	int bestvalue, bestindex;

	assert(array);
	assert(cmp);

	for (i=0; i<array->Variables-1; i++)
	{
		bestindex = i;
		bestvalue = array->Properties[i].Column;
		for (j=i+1; j<array->Variables; j++)
		{
			if (cmp(array->Properties[j].Column, bestvalue) < 0)
			{
				bestindex = j;
				bestvalue = array->Properties[j].Column;
			}
		}
		swapVectorArrayColumns(array, i, bestindex);
	}
}

//                                                                            //

VectorArray readVectorArray(FILE *stream, bool header)
{
	VectorArray array;
	Vector vector;
	int size, vars;

	if (fscanf(stream, "%d %d", &size, &vars)!=2)
		return NULL;

	array = createVectorArray(vars);

	if (header)
		readVariableProperties(stream, array->Properties, vars);

	while (size--)
	{
		vector = readVector(stream, vars);
		if (vector)
			appendToVectorArray(array, vector);
		else
		{
			deleteVectorArray(array);
			return NULL;
		}
	}

	return array;
}

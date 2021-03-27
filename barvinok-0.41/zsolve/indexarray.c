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

#include "indexarray.h"

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

//                                                                            //

IndexArray createIndexArray()
{
	IndexArray array = (IndexArray)malloc(sizeof(indexarray_t));

	if (array==NULL)
	{
		fprintf(stderr, "Fatal Error: Could not allocate memory for IndexArray!\n");
		exit(1);
	}

	array->Size = 0;
	array->Data = NULL;

	return array;
}

//                                                                            //

void deleteIndexArray(IndexArray array)
{
	if (array)
	{
		if (array->Data)
			free(array->Data);
		free(array);
	}
}

//                                                                            //

void appendToIndexArray(IndexArray array, int index)
{
#ifndef NDEBUG
	int i;
	assert(array);
	for (i=0; i<array->Size; i++)
		assert(array->Data[i]!=index);
#endif

	assert(array);

	array->Size++;
	array->Data = (int *)realloc(array->Data, array->Size*sizeof(int));
	array->Data[array->Size-1] = index;
}

//                                                                            //

void fprintIndexArray(FILE *stream, IndexArray array)
{
	int i;

	assert(array);
	assert(stream);

	for (i=0; i<array->Size; i++)
		fprintf(stream, i>0 ? " %d" : "%d", array->Data[i]);
}

//                                                                            //

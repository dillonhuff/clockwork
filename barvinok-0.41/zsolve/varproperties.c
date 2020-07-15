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

#include "varproperties.h"

#include <assert.h>
#include <stdlib.h>

//                                                                            //

VariableProperties createVariableProperties(int size)
{
	VariableProperties var;
	int i;

	assert(size>0);

	var = (VariableProperties)malloc(size*sizeof(variableproperty_t));

	if (var==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for VariableProperties!\n", __FILE__, __LINE__);
		exit(1);
	}

	for (i=0; i<size; i++)
	{
		var[i].Free = true;
		var[i].Upper = MAXINT;
		var[i].Lower = -MAXINT;
		var[i].Column = i;
	}

	return var;
}

//                                                                            //

void deleteVariableProperties(VariableProperties var)
{
	if (var)
		free(var);
}

//                                                                            //

bool checkVariableSymmetry(VariableProperties var, int id)
{
	assert(var);
	assert(id>=0);

	return var[id].Lower+var[id].Upper==0;
}

//                                                                            //

bool checkVariableFree(VariableProperties var, int id)
{
	assert(var);
	assert(id>=0);

	return var[id].Free;
}

//                                                                            //

bool checkVariableBounds(VariableProperties var, int id, int num)
{
	assert(var);
	assert(id>=0);

	return var[id].Lower<=num && num<=var[id].Upper;
}

//                                                                            //

void swapVariableProperties(VariableProperties var, int a, int b)
{
	variableproperty_t v;

	assert(a>=0);
	assert(b>=0);

	v = var[a];
	var[a] = var[b];
	var[b] = v;
}

//                                                                            //

void fprintVariableProperties(FILE *stream, VariableProperties var, int size)
{
	int i;

	for (i=0; i<size; i++)
		fprintf(stream, "%d %d %d %d\n", var[i].Column, var[i].Lower, var[i].Upper, var[i].Free);
}

//                                                                            //

void readVariableProperties(FILE *stream, VariableProperties var, int size)
{
	int i;

	assert(stream);
	assert(var);

	for (i=0; i<size; i++)
		fscanf(stream, "%d %d %d %d", &(var[i].Column), &(var[i].Lower), &(var[i].Upper), &(var[i].Free));
}

//                                                                            //

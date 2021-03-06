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

#include "linearsystem.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

//                                                                            //

LinearSystem createLinearSystem()
{
	LinearSystem system = (LinearSystem)malloc(sizeof(linearsystem_t));

	if (system==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for LinearSystem!\n", __FILE__, __LINE__);
		exit(1);
	}

	system->Equations = 0;
	system->Variables = 0;
	system->A = NULL;
	system->b = NULL;
	system->EqProperties = NULL;
	system->VarProperties = NULL;

	return system;
}

//                                                                            //

void deleteLinearSystem(LinearSystem system)
{
	int i;

	if (system)
	{
		for (i=0; i<system->Variables; i++)
			deleteVector(system->A[i]);
		free(system->A);
		deleteVector(system->b);
		deleteVariableProperties(system->VarProperties);
		if (system->EqProperties)
			free(system->EqProperties);
		free(system);
	}
}

//                                                                            //

void setLinearSystemSize(LinearSystem system, int variables, int equations)
{
	int i;

	assert(system);
	assert(variables>=0);
	assert(equations>=0);

	if (variables!=system->Variables || equations!=system->Equations)
	{
		if (system->A!=NULL)
		{
			for (i=0; i<system->Variables; i++)
				deleteVector(system->A[i]);
			free(system->A);
			system->A = NULL;
		}

		if (variables>0)
		{
			system->A = (Vector *)malloc(variables*sizeof(Vector));
			if (system->A==NULL)
			{
				fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for LinearSystem->A!\n", __FILE__, __LINE__);
				exit(1);
			}
			for (i=0; i<variables; i++)
				system->A[i] = createVector(equations);
		}
	}

	if (equations!=system->Equations)
	{
		if (system->b!=NULL)
		{
			deleteVector(system->b);
			system->b = NULL;
			free(system->EqProperties);
			system->EqProperties = NULL;
		}
		if (equations>0)
		{
			system->b = createVector(equations);
			system->EqProperties = (EquationProperties)malloc(equations*sizeof(equationproperty_t));
			if (system->EqProperties==NULL)
			{
				fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for LinearSystem->EqProperties!\n", __FILE__, __LINE__);
				exit(1);
			}
			for (i=0; i<equations; i++)
			{
				system->EqProperties[i].Type = EQUATION_EQUAL;
				system->EqProperties[i].Modulus = 0;
			}
		}
	}

	if (variables!=system->Variables)
	{
		if (system->VarProperties!=NULL)
		{
			deleteVariableProperties(system->VarProperties);
			system->VarProperties = NULL;
		}
		if (variables>0)
			system->VarProperties = createVariableProperties(variables);
	}

	system->Variables = variables;
	system->Equations = equations;
}

//                                                                            //

void setLinearSystemMatrix(LinearSystem system, Matrix matrix)
{
	int i,j;

	assert(system);
	assert(matrix);

	setLinearSystemSize(system, matrix->Width, matrix->Height);

	for (i=0; i<system->Variables; i++)
		for (j=0; j<system->Equations; j++)
			system->A[i][j] = matrix->Data[i+j*system->Variables];
}

//                                                                            //

void setLinearSystemRHS(LinearSystem system, Vector vector)
{
	assert(system);
	assert(vector);

	if (system->b!=NULL)
	{
		deleteVector(system->b);
		system->b = NULL;
	}

	if (system->Equations)
		system->b = copyVector(vector, system->Equations);
}

//                                                                            //

void setLinearSystemLimit(LinearSystem system, int id, int lower, int upper, bool free)
{
	assert(system);
	assert(lower<=0);
	assert(upper>=0);

	if (id>=0 && id<system->Variables)
	{
		system->VarProperties[id].Free = free;
		system->VarProperties[id].Lower = lower;
		system->VarProperties[id].Upper = upper;
	}
	else if (id==-1)
	{
		for (id=0; id<system->Variables; id++)
		{
			system->VarProperties[id].Free = free;
			system->VarProperties[id].Lower = lower;
			system->VarProperties[id].Upper = upper;
		}
	}
}

//                                                                            //

void setLinearSystemBound(LinearSystem system, int id, char type, int value)
{
	assert(system);
	assert(id>=0);
	assert(id<system->Variables);
	assert(type == 'u' || type == 'l');

	if (type == 'u')
		system->VarProperties[id].Upper = value;
	else if (type == 'l')
		system->VarProperties[id].Lower = value;
}

//                                                                            //

void setLinearSystemEquationType(LinearSystem system, int id, EquationType type, int modulus)
{
	assert(system);
	assert(type<=5);
	assert(type || EQUATION_MODULO || modulus!=0);

	if (id>=0)
	{
		system->EqProperties[id].Type = type;
		system->EqProperties[id].Modulus = modulus;
	}
	else if (id==-1)
	{
		for (id=0; id<system->Equations; id++)
		{
			system->EqProperties[id].Type = type;
			system->EqProperties[id].Modulus = modulus;
		}
	}
}

//                                                                            //

int imax(int a, int b)
{
	return a > b ? a : b;
}

//                                                                            //

int numberSize(int value)
{
	int result = 1;

	if (value<0)
	{
		value *= -1;
		result++;
	}

	while (value>=10)
	{
		value /= 10;
		result++;
	}

	return result;
}

//                                                                            //

int equationSize(EquationType type)
{
	if (type<4)
		return 1;
	else
		return 2;
}

//                                                                            //

int propertySize(variableproperty_t property)
{
	return (property.Free ? 1 : imax(
			(property.Lower==-MAXINT ? 1 : numberSize(property.Lower)),
			(property.Upper==MAXINT ? 1 : numberSize(property.Upper))
			));
}

//                                                                            //

void fprintLinearSystem(FILE *stream, LinearSystem system)
{
	Vector space;
	int i,j;
	bool allfree = true;

	if (!stream || !system)
	{
		fprintf(stderr, "Fatal Error (%s/%d): printLinearSystem was called with wrong arguments!\n", __FILE__, __LINE__);
		exit(1);
	}

	space = createVector(system->Variables+2);

	// Collect space need by all columns
	for (i=0; i<system->Variables; i++)
	{
		if (!checkVariableFree(system->VarProperties, i))
			allfree = false;
		space[i] = propertySize(system->VarProperties[i]);
		for (j=0; j<system->Equations; j++)
			space[i] = imax(space[i], numberSize(system->A[i][j]));
	}
	space[system->Variables] = 0;
	space[system->Variables+1] = 0;
	for (i=0; i < system->Equations; i++)
	{
		space[system->Variables] = imax(space[system->Variables], equationSize(system->EqProperties[i].Type));
		space[system->Variables+1] = imax(space[system->Variables+1], numberSize(system->b[i]));
	}

	// Print header
	if (!allfree)
	{
		for (i=0; i<system->Variables; i++)
		{
			if (checkVariableFree(system->VarProperties, i))
				fprintf(stream, "%*s ", space[i], "");
			else if (system->VarProperties[i].Upper==MAXINT)
				fprintf(stream, "%*s ", space[i], "+");
			else
				fprintf(stream, "%*d ", space[i], system->VarProperties[i].Upper);
		}
		fprintf(stream, "\n");
		for (i=0; i<system->Variables; i++)
		{
			if (checkVariableFree(system->VarProperties, i))
				fprintf(stream, "%*s ", space[i], "");
			else if (system->VarProperties[i].Lower==-MAXINT)
				fprintf(stream, "%*s ", space[i], "-");
			else
				fprintf(stream, "%*d ", space[i], system->VarProperties[i].Lower);
		}
		fprintf(stream, "\n\n");
	}

	for (i=0; i<system->Equations; i++)
	{
		for (j=0; j<system->Variables; j++)
			fprintf(stream, "%*d ", space[j], system->A[j][i]);
		switch (system->EqProperties[i].Type)
		{
			case EQUATION_EQUAL:
			case EQUATION_MODULO:
				fprintf(stream, "%*s ", space[system->Variables], "=");
			break;
			case EQUATION_LESSER:
				fprintf(stream, "%*s ", space[system->Variables], "<");
			break;
			case EQUATION_LESSEREQUAL:
				fprintf(stream, "%*s ", space[system->Variables], "<=");
			break;
			case EQUATION_GREATER:
				fprintf(stream, "%*s ", space[system->Variables], ">");
			break;
			case EQUATION_GREATEREQUAL:
				fprintf(stream, "%*s ", space[system->Variables], ">=");
			break;
		}
		fprintf(stream, "%*d", space[system->Variables+1], system->b[i]);
		if (system->EqProperties[i].Type==EQUATION_MODULO)
			fprintf(stream, " (mod %d)", system->EqProperties[i].Modulus);
		fprintf(stream, "\n");
	}

	deleteVector(space);
}

//                                                                            //

void printLinearSystem(LinearSystem system)
{
	fprintLinearSystem(stdout, system);
}

//                                                                            //

LinearSystem homogenizeLinearSystem(LinearSystem old)
{
	LinearSystem new;
	int i,j,k;

	if (old==NULL)
		return NULL;

	new = createLinearSystem();

	new->Equations = old->Equations;
	new->Variables = old->Variables;

	// RHS stays temporarily the same
	new->b = copyVector(old->b, old->Equations);

	// Original matrix with properties
	new->A = (Vector *)malloc(new->Variables*sizeof(Vector));
	new->VarProperties = createVariableProperties(new->Variables);
	for (i=0; i<new->Variables; i++)
	{
		new->A[i] = copyVector(old->A[i], old->Equations);
		new->VarProperties[i] = old->VarProperties[i];
	}

	// transformation
	for (i=0; i<old->Equations; i++)
	{
		if (old->EqProperties[i].Type==EQUATION_LESSER)
		{
			new->b[i]--;
		}
		if (old->EqProperties[i].Type==EQUATION_GREATER)
			new->b[i]++;
		switch (old->EqProperties[i].Type)
		{
			case EQUATION_LESSER:
			case EQUATION_LESSEREQUAL:
				k = 1;
			break;
			case EQUATION_GREATER:
			case EQUATION_GREATEREQUAL:
				k = -1;
			break;
			case EQUATION_MODULO:
				k = old->EqProperties[i].Modulus;
			break;
			default:
				k = 0;
			break;
		}
		if (k!=0)
		{
			new->Variables++;
			new->A = (Vector *)realloc(new->A, new->Variables*sizeof(Vector));
			new->VarProperties = (VariableProperties)realloc(new->VarProperties, new->Variables*sizeof(variableproperty_t));
			new->A[new->Variables-1] = createVector(new->Equations);
			for (j=0; j<new->Equations; j++)
				new->A[new->Variables-1][j] = (j==i ? k : 0);
			new->VarProperties[new->Variables-1].Free = (old->EqProperties[i].Type==EQUATION_MODULO);
			new->VarProperties[new->Variables-1].Upper = MAXINT;
			new->VarProperties[new->Variables-1].Lower = (old->EqProperties[i].Type==EQUATION_MODULO ? -MAXINT : 0);
			new->VarProperties[new->Variables-1].Column = -1;
		}
	}

	// -rhs as a new row in [0;1]
	if (normVector(new->b, old->Equations)>0)
	{
		new->Variables++;
		new->A = (Vector *)realloc(new->A, new->Variables*sizeof(Vector));
		new->VarProperties = (VariableProperties)realloc(new->VarProperties, new->Variables*sizeof(variableproperty_t));

		new->A[new->Variables-1] = new->b;
		for (i=0; i<old->Equations; i++)
			new->A[new->Variables-1][i] *= -1;
		new->VarProperties[new->Variables-1].Free = false;
		new->VarProperties[new->Variables-1].Upper = 1;
		new->VarProperties[new->Variables-1].Lower = 0;
		new->VarProperties[new->Variables-1].Column = -2;

		// recreate rhs as a zero-vector
		new->b = createVector(new->Equations);
		for (i=0; i<new->Equations; i++)
			new->b[i] = 0;
	}

	// all are now equaitons
	new->EqProperties = (EquationProperties)malloc(new->Equations*sizeof(equationproperty_t));
	for (i=0; i<new->Equations; i++)
	{
		new->EqProperties[i].Type = EQUATION_EQUAL;
		new->EqProperties[i].Modulus = 0;
	}

	return new;
}

//                                                                            //

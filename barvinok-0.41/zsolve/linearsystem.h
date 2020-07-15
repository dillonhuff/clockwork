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

#ifndef _LINEARSYSTEM_H
#define _LINEARSYSTEM_H

#include <stdio.h>
#include "matrix.h"
#include "vector.h"
#include "varproperties.h"

#define EQUATION_EQUAL 0
#define EQUATION_MODULO 1
#define EQUATION_LESSER 2
#define EQUATION_GREATER 3
#define EQUATION_LESSEREQUAL 4
#define EQUATION_GREATEREQUAL 5
typedef unsigned char EquationType;

typedef struct equationproperty_t
{
	EquationType Type;
	/* Type */
	
	int Modulus;
	/* Modulus for congruences */
} equationproperty_t;
typedef equationproperty_t *EquationProperties;

typedef struct linearsystem_t
{
	/* Ax = b with equations, inequations, congruences and limitations on variables */
	
	int Variables;
	int Equations;

	Vector *A;
	Vector b;
	VariableProperties VarProperties;
	EquationProperties EqProperties;

} linearsystem_t;
typedef linearsystem_t *LinearSystem;

LinearSystem createLinearSystem();
/* Allocate memory */

void deleteLinearSystem(LinearSystem);
/* Free memory (system)*/

void setLinearSystemSize(LinearSystem, int, int);
/* Sets the number of equations and variables (system, variables, equations) */

void setLinearSystemMatrix(LinearSystem, Matrix);
/* Fills the matrix from a given array (system, matrix) */

void setLinearSystemRHS(LinearSystem, Vector);
/* Copies the contents from Vector to RHS (system, rhs) */

void setLinearSystemLimit(LinearSystem, int, int, int, bool);
/* Sets limits for one variable (system, var, lower, upper, free?) */

void setLinearSystemBound(LinearSystem, int, char, int);
/* Sets limits for one variable (system, var, type, value) */

void setLinearSystemEquationType(LinearSystem, int, EquationType, int);
/* Sets equation type for one equation (system, id, type, modulus) */

void fprintLinearSystem(FILE *, LinearSystem);
/* Print to stream (stream, system) */

void printLinearSystem(LinearSystem);
/* Print to stdout (system) */

LinearSystem homogenizeLinearSystem(LinearSystem);
/* Create a new homogeneous equation system from a general one */

#endif

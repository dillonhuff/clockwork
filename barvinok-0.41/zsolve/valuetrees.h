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

#ifndef _VALUETREES_H
#define _VALUETREES_H

#include "libzsolve.h"

#include "defs.h"
#include "vectorarray.h"
#include "indexarray.h"
#include "cputime.h"

// computation data, non-static for thread-safety

typedef struct valuetreenode_t
{
	int value;
	struct valuetree_t *sub;
	struct valuetreenode_t *next;
} valuetreenode_t;
typedef valuetreenode_t *ValueTreeNode;

typedef struct valuetree_t
{
	int level;
	struct valuetreenode_t *pos;
	struct valuetreenode_t *neg;
	struct valuetree_t *zero;
	IndexArray vectors;
} valuetree_t;
typedef valuetree_t *ValueTree;

void createValueTrees(ZSolveContext);
void deleteValueTrees(ZSolveContext);
void completeValueTrees(ZSolveContext, int, int);


#endif

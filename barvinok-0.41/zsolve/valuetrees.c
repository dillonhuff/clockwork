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

#include "defs.h"
#include "vectorarray.h"
#include "indexarray.h"
#include "valuetrees.h"

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

//                                                                            //

ValueTree createValueTree(int level)
{
	ValueTree tree = (ValueTree)malloc(sizeof(valuetree_t));

	if (tree==NULL)
	{
		fprintf(stderr, "Fatal Error: Could not allocate memory for ValueTree!\n");
		exit(1);
	}

	tree->level = level;
	tree->pos = NULL;
	tree->neg = NULL;
	tree->zero = NULL;
	tree->vectors = level<0 ? createIndexArray() : NULL;

	return tree;
}

//                                                                            //

void deleteValueTree(ValueTree tree)
{
	ValueTreeNode node;

	if (tree!=NULL)
	{
		while ((node = tree->pos)!=NULL)
		{
			tree->pos = node->next;
			deleteValueTree(node->sub);
			free(node);
		}
		while ((node = tree->neg)!=NULL)
		{
			tree->neg = node->next;
			deleteValueTree(node->sub);
			free(node);
		}
		deleteValueTree(tree->zero);
		deleteIndexArray(tree->vectors);
		free(tree);
	}
}

//                                                                            //

void splitValueTree(ZSolveContext ctx, ValueTree tree, int start)
{
	int i, compo, value;
	bool pos, neg, zero;
	ValueTreeNode node, temp;

	if (!tree || tree->level>=0)
		return;

	assert(tree->pos==NULL);
	assert(tree->neg==NULL);
	assert(tree->zero==NULL);
	assert(tree->vectors);


	for (; start<ctx->Current; start++)
	{
		compo = start<0 ? ctx->Current : start;
		pos = false;
		neg = false;
		zero = false;
		for (i=0; i<tree->vectors->Size; i++)
		{
			if (ctx->Lattice->Data[tree->vectors->Data[i]][compo]>0)
				pos = true;
			else if (ctx->Lattice->Data[tree->vectors->Data[i]][compo]<0)
				neg = true;
			else
				zero = true;
		}
		if (pos+neg>1)
			break;
	}

	if (start<ctx->Current && tree->vectors->Size > 1)
	{
		compo = start<0 ? ctx->Current : start;
		for (i=0; i<tree->vectors->Size; i++)
		{
			value = ctx->Lattice->Data[tree->vectors->Data[i]][compo];
			if (value>0)
			{
				node = tree->pos;
				if (node==NULL || value<node->value)
				{
					tree->pos = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
					tree->pos->value = value;
					tree->pos->next = node;
					tree->pos->sub = createValueTree(-1);
					appendToIndexArray(tree->pos->sub->vectors, tree->vectors->Data[i]);
				}
				else
				{
					while (node->next && value>=node->next->value)
						node = node->next;
					if (value!=node->value)
					{
						temp = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
						temp->value = value;
						temp->sub = createValueTree(-1);
						temp->next = node->next;
            node->next = temp;
						node = temp;
					}
					appendToIndexArray(node->sub->vectors, tree->vectors->Data[i]);
				}
			}
			else if (value<0)
			{
				node = tree->neg;
				if (node==NULL || value>node->value)
				{
					tree->neg = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
					tree->neg->value = value;
					tree->neg->next = node;
					tree->neg->sub = createValueTree(-1);
					appendToIndexArray(tree->neg->sub->vectors, tree->vectors->Data[i]);
				}
				else
				{
					while (node->next && value<=node->next->value)
						node = node->next;
					if (value!=node->value)
					{
						temp = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
						temp->value = value;
						temp->sub = createValueTree(-1);
						temp->next = node->next;
						node->next = temp;
						node = temp;
					}
					appendToIndexArray(node->sub->vectors, tree->vectors->Data[i]);
				}
			}
			else
			{
				if (tree->zero==NULL)
					tree->zero = createValueTree(-1);
				appendToIndexArray(tree->zero->vectors, tree->vectors->Data[i]);
			}
		}
		
		deleteIndexArray(tree->vectors);
		tree->vectors = NULL;
		tree->level = compo;
    start++;
		node = tree->pos;
		while (node)
		{
			splitValueTree(ctx, node->sub, start);
			node = node->next;
		}
		node = tree->neg;
		while (node)
		{
			splitValueTree(ctx, node->sub, start);
			node = node->next;
		}
		
		splitValueTree(ctx, tree->zero, start);
		return;
	}
}

//                                                                            //

void createValueTrees(ZSolveContext ctx)
{
	int i,j;

	ctx->MaxNorm = 0;
	for (i=0; i<ctx->Lattice->Size; i++)
		ctx->MaxNorm = maxi(ctx->MaxNorm, normVector(ctx->Lattice->Data[i], ctx->Current));

	ctx->Norm = (void **)calloc(ctx->MaxNorm+1, sizeof(ValueTree));

	for (i=0; i<ctx->Lattice->Size; i++)
	{
		j = normVector(ctx->Lattice->Data[i], ctx->Current);
		// TODO is it correct, to throw out if all 0 on before and current ?! - it seems incorrect, as bayer-test fails.
		if (j==0 && ctx->Lattice->Data[i][ctx->Current] == 0)
			continue;
		// put in corresponding norm-tree
		if (ctx->Norm[j]==NULL)
			ctx->Norm[j] = createValueTree(-1);
		appendToIndexArray( ((ValueTree *)ctx->Norm)[j]->vectors, i);
	}

	for (i=0; i<=ctx->MaxNorm; i++)
		splitValueTree(ctx, ctx->Norm[i], -1);
}

//                                                                            //

void deleteValueTrees(ZSolveContext ctx)
{
	int i;

	for (i=0; i<=ctx->MaxNorm; i++)
		deleteValueTree(ctx->Norm[i]);

	free(ctx->Norm);
	ctx->Norm = NULL;
}

//                                                                            //

bool enumValueReducer(ZSolveContext ctx, ValueTree tree)
{
	int value, i, j;
	Vector Reducer;
	ValueTreeNode node;

	if (tree)
	{
		if (tree->level>=0)
		{
			value = ctx->Sum[tree->level];
			if (value>0)
			{
				node = tree->pos;
				while (node && node->value<=value)
				{
					if (enumValueReducer(ctx, node->sub))
						return true;
					node = node->next;
				}
			}
			if (value<0)
			{
				node = tree->neg;
				while (node && node->value>=value)
				{
					if (enumValueReducer(ctx, node->sub))
						return true;
					node = node->next;
				}
			}
			if (enumValueReducer(ctx, tree->zero))
				return true;
		}
		else
		{
			for (i=0; i<tree->vectors->Size; i++)
			{
				Reducer = ctx->Lattice->Data[tree->vectors->Data[i]];
/*				printf("=> Testing reduction of [");
				printVector(ctx->Sum, ctx->Variables);
				printf("] by [");
				printVector(Reducer, ctx->Variables);
				printf("]\n"); */
				for (j=0; j<=ctx->Current; j++)
					if (Reducer[j]*ctx->Sum[j]<0 || abs(ctx->Sum[j])<abs(Reducer[j]))
						break;
				if (j>ctx->Current)
					return true;
			}
		}
	}
	return false;
}

//                                                                            //

void insertVectorToValueTree(ZSolveContext ctx, ValueTree tree, int index)
{
	int value;
	ValueTreeNode node, temp;

	assert(tree);
	assert(index>=0 && index<ctx->Lattice->Size);

	if (tree->level>=0)
	{
		value = ctx->Lattice->Data[index][tree->level];
		if (value>0)
		{
			node = tree->pos;
			if (node==NULL || value<node->value)
			{
				tree->pos = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
				tree->pos->value = value;
				tree->pos->next = node;
				tree->pos->sub = createValueTree(-1);
				appendToIndexArray(tree->pos->sub->vectors, index);
			}
			else
			{
				while (node->next && value>=node->next->value)
					node = node->next;
				if (value==node->value)
					insertVectorToValueTree(ctx, node->sub, index);
				else
				{
					temp = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
					temp->value = value;
					temp->sub = createValueTree(-1);
					appendToIndexArray(temp->sub->vectors, index);
					temp->next = node->next;
					node->next = temp;
				}
			}
		}
		else if (value<0)
		{
			node = tree->neg;
			if (node==NULL || value>node->value)
			{
				tree->neg = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
				tree->neg->value = value;
				tree->neg->next = node;
				tree->neg->sub = createValueTree(-1);
				appendToIndexArray(tree->neg->sub->vectors, index);
			}
			else
			{
				while (node->next && value<=node->next->value)
					node = node->next;
				if (value==node->value)
					insertVectorToValueTree(ctx, node->sub, index);
				else
				{
					temp = (ValueTreeNode)malloc(sizeof(valuetreenode_t));
					temp->value = value;
					temp->sub = createValueTree(-1);
					appendToIndexArray(temp->sub->vectors, index);
					temp->next = node->next;
					node->next = temp;
				}
			}
		}
		else
		{
			if (tree->zero==NULL)
			{
				tree->zero = createValueTree(-1);
				appendToIndexArray(tree->zero->vectors, index);
			}
			else
				insertVectorToValueTree(ctx, tree->zero, index);
		}
	}
	else
	{
		appendToIndexArray(tree->vectors, index);
		splitValueTree(ctx, tree, -1);
	}
}

//                                                                            //

void insertVectorToValueTrees(ZSolveContext ctx, Vector vector, int norm)
{
	if (norm>ctx->MaxNorm)
	{
		ctx->Norm = (void **)realloc(ctx->Norm, (norm+1)*sizeof(ValueTree));
		while (norm>ctx->MaxNorm)
			ctx->Norm[++ctx->MaxNorm] = NULL;
	}

	appendToVectorArray(ctx->Lattice, vector);
	if (ctx->Norm[norm]==NULL)
	{
		ctx->Norm[norm] = createValueTree(-1);
		appendToIndexArray(((ValueTree *)ctx->Norm)[norm]->vectors, ctx->Lattice->Size-1);
	}
	else
		insertVectorToValueTree(ctx, ctx->Norm[norm], ctx->Lattice->Size-1);
}

//                                                                            //

void buildValueSum(ZSolveContext ctx)
{
	int i,norm;
	bool flag;

	assert(ctx->First);
	assert(ctx->Second);
	assert(ctx->Sum);

	// same ?
	if (ctx->First==ctx->Second)
		return;

	// pattern okay ?
	if (ctx->First[ctx->Current]*ctx->Second[ctx->Current]>0)
		return;
	flag = false;
	for (i=0; i<ctx->Current; i++)
		if (ctx->First[i]*ctx->Second[i]<0)
			flag = true;
	if (flag)
		return;

	// build new
	norm = 0;
	for (i=0; i<ctx->Variables; i++)
	{
		ctx->Sum[i] = ctx->First[i] + ctx->Second[i];
		if (i<ctx->Current)
			norm += abs(ctx->Sum[i]);
	}
	// all zero?
	if (norm==0)
		return;

	// DEBUG
/*	printf("build: [");
	printVector(ctx->Sum, ctx->Variables);
	printf("]\n"); */

	// reducable ?
	flag = false;
	for (i=0; i<=norm/2; i++)
	{
		if (i<=ctx->MaxNorm)
		{
			if (enumValueReducer(ctx, ctx->Norm[i]))
			{
				flag = true;
				break;
			}
		}
	}
	if (flag) {
//		printf("(reduced)\n");
		return;
	}

	// limits okay ?
	for (i=0; i<ctx->Current; i++)
	{
		if (ctx->Lattice->Properties[i].Lower>ctx->Sum[i]) {
//			printf("(lower bounds failed)\n");
			return;
		}
		if (ctx->Lattice->Properties[i].Upper<ctx->Sum[i]) {
//			printf("(upper bounds failed)\n");
			return;
		}
	}

	if (norm<=ctx->MaxNorm)
		if (enumValueReducer(ctx, ctx->Norm[norm]))
			return;

	insertVectorToValueTrees(ctx, copyVector(ctx->Sum, ctx->Variables), norm);

	if (ctx->Symmetric)
	{
		for (i=0; i<ctx->Variables; i++)
			ctx->Sum[i] = -ctx->Sum[i];
		insertVectorToValueTrees(ctx, copyVector(ctx->Sum, ctx->Variables), norm);
	}
}

//                                                                            //

void enumValueSecond(ZSolveContext ctx, ValueTree tree)
{
	int i;
	ValueTreeNode node;

	if (tree)
	{
		if (tree->level==ctx->Current)
		{
			if (ctx->First[ctx->Current]>=0)
			{
				node = tree->neg;
				while (node)
				{
					enumValueSecond(ctx, node->sub);
					node = node->next;
				}
			}
			if (ctx->First[ctx->Current]<=0)
			{
				node = tree->pos;
				while (node)
				{
					enumValueSecond(ctx, node->sub);
					node = node->next;
				}
			}
		}
		else if (tree->level>=0)
		{
			if (ctx->First[tree->level]<=0)
			{
				node = tree->neg;
				while (node)
				{
					enumValueSecond(ctx, node->sub);
					node = node->next;
				}
			}
			enumValueSecond(ctx, tree->zero);
			if (ctx->First[tree->level]>=0)
			{
				node = tree->pos;
				while (node)
				{
					enumValueSecond(ctx, node->sub);
					node = node->next;
				}
			}
		}
		else
		{
			assert(tree->vectors);

			for (i=0; tree->vectors!=NULL && i<tree->vectors->Size; i++)
			{
				ctx->Second = ctx->Lattice->Data[tree->vectors->Data[i]];
				if (ctx->Second[ctx->Current]!=0)
					buildValueSum(ctx);
			}
			if (tree->vectors==NULL)
				enumValueSecond(ctx, tree);
		}
	}
}

//                                                                            //

void enumValueFirst(ZSolveContext ctx, ValueTree tree, int norm)
{
	int i;

	ValueTreeNode node;

	
	if (tree)
	{
		if (tree->level>=0)
		{
			node = tree->pos;
			while (node)
			{
				enumValueFirst(ctx, node->sub, norm);
				node = node->next;
			}
			enumValueFirst(ctx, tree->zero, norm);
			node = tree->neg;
			while (node)
			{
				enumValueFirst(ctx, node->sub, norm);
				node = node->next;
			}
		}
		else
		{
			assert(tree->vectors);

			for (i=0; tree->vectors!=NULL && i<tree->vectors->Size; i++)
			{
				ctx->First = ctx->Lattice->Data[tree->vectors->Data[i]];
				if ((!ctx->Symmetric && ctx->First[ctx->Current]<0) || ctx->First[ctx->Current]>0)
					enumValueSecond(ctx, ctx->Norm[norm]);
			}
			
			if (tree->vectors==NULL)
				enumValueFirst(ctx, tree, norm);
		}
	}
}

//                                                                            //

void completeValueTrees(ZSolveContext ctx, int norm1, int norm2)
{
	assert(ctx->Norm);
	assert(!(norm1>ctx->MaxNorm || norm2>ctx->MaxNorm || ctx->Norm[norm1]==NULL || ctx->Norm[norm2]==NULL));

	enumValueFirst(ctx, ctx->Norm[norm1], norm2);
}

//                                                                            //

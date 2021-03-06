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

#include <assert.h>
#include <stdlib.h>

#include "libzsolve.h"
#include "valuetrees.h"
#include "lattice.h"

int chooseNext(ZSolveContext ctx, Vector possible, int value)
{
	int i,j,zeros;

	assert(possible);

	if (value<0)
		value = 0;
	for (i=0; i<ctx->Variables; i++)
	{
		possible[i] = (possible[i]==value) ? 1 : 0;
		zeros = 1;
		for (j=0; j<ctx->Lattice->Size; j++)
			if (ctx->Lattice->Data[j][i]==0)
				zeros++;
		possible[i] *= zeros;
	}

	j = -1;
	for (i=0; i<ctx->Variables; i++)
		if (possible[i]>0 && (j<0 || possible[i]>possible[j]))
			j = i;

	return j;
}

int nextVariable(ZSolveContext ctx)
{
	IndexArray Zeros;
	Vector gcds;
	int i,j,k,col = -1;
	int factor, value;
	bool flag;

	assert(ctx);

	// Zeros is the list of vectors v with ||v|| = 0
	Zeros = createIndexArray();
	for (i=0; i<ctx->Lattice->Size; i++)
		if (normVector(ctx->Lattice->Data[i], ctx->Current)==0)
			appendToIndexArray(Zeros, i);

	if (Zeros->Size)
	{
		gcds = createVector(ctx->Variables);
		for (i=0; i<ctx->Variables; i++)
			gcds[i] = -1;
		value = -1;
		for (i=ctx->Current; i<ctx->Variables; i++)
		{
			if (!ctx->Lattice->Properties[i].Free)
			{
				gcds[i] = abs(ctx->Lattice->Data[Zeros->Data[0]][i]);
				for (j=1; j<Zeros->Size; j++)
					gcds[i] = gcd(gcds[i], abs(ctx->Lattice->Data[Zeros->Data[j]][i]));
				if ((value<0 || gcds[i]<value) && gcds[i]>0)
					value = gcds[i];
			}
		}

		col = chooseNext(ctx, gcds, value);

		deleteVector(gcds);
		if (col<0)
			return -1;
		// minimize Zeros
		do
		{
			j = -1;
			for (i=0; i<Zeros->Size; i++)
			{
				if (ctx->Lattice->Data[Zeros->Data[i]][col]!=0 && (j<0 || abs(ctx->Lattice->Data[Zeros->Data[i]][col])<abs(ctx->Lattice->Data[Zeros->Data[j]][col])))
					j = i;
			}
			if (j<0)
				break;
			j = Zeros->Data[j];
/*
			printf("Current Norm[0]: ");
			printVector(Zeros->Data, Zeros->Size, VECTOR_NEWLINE);
			printf("ctx->Lattice:\n");
			printVectorArray(ctx->Lattice, VECTORARRAY_INDENT);
			printf("Reducing Slot: Row = %d, Col = %d\n\n", j, col);
*/
			flag = false;
			for (i=0; i<ctx->Lattice->Size; i++)
			{
				if (ctx->Lattice->Data[i][col]!=0 && i!=j)
				{
					factor = ctx->Lattice->Data[i][col] / ctx->Lattice->Data[j][col];
					for (k=0; k<ctx->Variables; k++)
						if (ctx->Lattice->Data[i][k]+ctx->Lattice->Data[j][k]!=0)
							break;
					if (k==ctx->Variables)
						continue;
					if (factor!=0)
					{
//						printf("factor = %d\n", factor);
						flag = true;
					}
					for (k=0; k<ctx->Variables; k++)
						ctx->Lattice->Data[i][k] -= factor * ctx->Lattice->Data[j][k];
				}
			}
		} while (flag);
	}
	else
	{
		gcds = createVector(ctx->Variables);
		for (i=0; i<ctx->Variables; i++)
			gcds[i] = (i<ctx->Current || ctx->Lattice->Properties[i].Free) ? 0 : 1;
		col = chooseNext(ctx, gcds, 1);
		deleteVector(gcds);
	}

	deleteIndexArray(Zeros);

	return col;
}

void filterLimits(ZSolveContext ctx)
{
	int i;

	assert(ctx);

	for (i=0; i<ctx->Lattice->Size; i++)
	{
		if (ctx->Lattice->Properties[ctx->Current].Lower>ctx->Lattice->Data[i][ctx->Current] || ctx->Lattice->Properties[ctx->Current].Upper<ctx->Lattice->Data[i][ctx->Current])
		{
			ctx->Lattice->Size--;
			deleteVector(ctx->Lattice->Data[i]);
			ctx->Lattice->Data[i] = ctx->Lattice->Data[ctx->Lattice->Size];
			i--;
		}
	}
	ctx->Lattice->Memory = ctx->Lattice->Size;
	ctx->Lattice->Data = (Vector *)realloc(ctx->Lattice->Data, ctx->Lattice->Memory * sizeof(Vector));
}

void zsolveLogCallbackDefault(FILE *stream, int level, int type, int var, int sum, int norm, int vectors, CPUTime alltime, CPUTime steptime)
{
	switch (level)
	{
	case 1:
		if (type == ZSOLVE_LOG_VARIABLE_STARTED)
			fprintf(stream, "Appending variable %d... ", var+1);
		else if (type == ZSOLVE_LOG_VARIABLE_FINISHED)
		{
			fprintf(stream, "Solutions: %d, Step: ", vectors);
			fprintCPUTime(stream, steptime);
			fprintf(stream, ", Time: ");
			fprintCPUTime(stream, alltime);
			fprintf(stream, "\n");
		}
	break;
	case 2:
		if (type == ZSOLVE_LOG_VARIABLE_STARTED)
			fprintf(stream, "%sAppending variable %d.\n\n", var ? "\n" : "", var+1);
		else if (type == ZSOLVE_LOG_VARIABLE_FINISHED)
		{
			fprintf(stream, "\nFinished variable %d. Solutions: %d, Step: ", var+1, vectors);
			fprintCPUTime(stream, steptime);
			fprintf(stream, ", Time: ");
			fprintCPUTime(stream, alltime);
			fprintf(stream, "\n");
		}
		else if (type == ZSOLVE_LOG_SUM_STARTED)
			fprintf(stream, " Var = %d, Sum = %d... ", var+1, sum);
		else if (type == ZSOLVE_LOG_SUM_FINISHED)
		{
			fprintf(stream, "Solutions: %d, Step: ", vectors);
			fprintCPUTime(stream, steptime);
			fprintf(stream, ", Time: ");
			fprintCPUTime(stream, alltime);
			fprintf(stream, "\n");
		}
	break;
	case 3:
		if (type == ZSOLVE_LOG_VARIABLE_STARTED)
			fprintf(stream, "%sAppending variable %d.\n\n", var ? "\n" : "", var+1);
		else if (type == ZSOLVE_LOG_VARIABLE_FINISHED)
		{
			fprintf(stream, "\nFinished variable %d. Solutions: %d, Step: ", var+1, vectors);
			fprintCPUTime(stream, steptime);
			fprintf(stream, ", Time: ");
			fprintCPUTime(stream, alltime);
			fprintf(stream, "\n");
		}
		else if (type == ZSOLVE_LOG_SUM_STARTED)
			fprintf(stream, "%s Var = %d, Sum = %d.\n\n", sum ? "\n" : "", var+1, sum);
		else if (type == ZSOLVE_LOG_SUM_FINISHED)
		{
			fprintf(stream, "\n Finished sum %d. Solutions: %d, Step: ", sum, vectors);
			fprintCPUTime(stream, steptime);
			fprintf(stream, ", Time: ");
			fprintCPUTime(stream, alltime);
			fprintf(stream, "\n");
		}
		else if (type == ZSOLVE_LOG_NORM_STARTED)
			fprintf(stream, " Var = %d, Norm = %d + %d... ", var+1, norm, sum-norm);
		else if (type == ZSOLVE_LOG_NORM_FINISHED)
		{
			fprintf(stream, "Solutions: %d, Step: ", vectors);
			fprintCPUTime(stream, steptime);
			fprintf(stream, ", Time: ");
			fprintCPUTime(stream, alltime);
			fprintf(stream, "\n");
		}
	break;
	}
	if (level>0)
	{
		if (type == ZSOLVE_LOG_STARTED)
		{
			// need linearsystem - maybe with va
		}
		else if (type == ZSOLVE_LOG_RESUMED)
		{
			fprintf(stream, "Resuming from backup, starting at Var = %d, Norm = %d + %d... Solutions: %d, Time: ", var, norm, sum - norm, vectors);
			fprintCPUTime(stream, getCPUTime() - alltime);
			fprintf(stream, "\n\n");
		}
		else if (type == ZSOLVE_LOG_FINISHED)
		{
			// need homs / inhoms - maybe with va
		}
	}
	if (stream)
		fflush(stream);
	
}

void splitLog(ZSolveContext ctx, int type, CPUTime steptime)
{
	CPUTime currenttime = getCPUTime();

	if (ctx->LogCallback)
	{
		ctx->LogCallback(stdout, ctx->Verbosity, type, ctx->Current, ctx->SumNorm, ctx->FirstNorm, ctx->Lattice->Size, maxd(currenttime - ctx->AllTime, 0.0), maxd(steptime, 0.0));
		if (ctx->LogFile)
			ctx->LogCallback(ctx->LogFile, ctx->LogLevel, type, ctx->Current, ctx->SumNorm, ctx->FirstNorm, ctx->Lattice->Size, maxd(currenttime - ctx->AllTime, 0.0), maxd(steptime, 0.0));
	}
}

void backupZSolveContext(FILE *stream, ZSolveContext ctx)
{
	CPUTime currenttime = getCPUTime();

	assert(stream);
	assert(ctx);

	fprintf(stream, "%d %d %d\n%d\n\n", ctx->Current, ctx->SumNorm, ctx->FirstNorm, ctx->Symmetric);

	fprintf(stream, "%d %d %d\n\n", ctx->Verbosity, ctx->LogLevel, ctx->BackupTime);

	fprintf(stream, "%.2f %.2f %.2f %.2f\n\n" , currenttime - ctx->AllTime, currenttime - ctx->VarTime, currenttime - ctx->SumTime, currenttime - ctx->NormTime);

	fprintVectorArray(stream, ctx->Lattice, true);
}

int originalCompare(int a, int b)
{
	if (a>=0 && b<0)
		return -1;
	if (a<0 && b>=0)
		return 1;
	return a-b;
}

ZSolveContext createZSolveContextFromSystem(LinearSystem initialsystem, FILE *logfile, int loglevel, int verbosity, ZSolveLogCallback logcallback, ZSolveBackupCallback backupcallback)
{
	ZSolveContext ctx;
	LinearSystem finalsystem;

	ctx = (ZSolveContext)malloc(sizeof(zsolvecontext_t));
	if (ctx==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for ZSolveContext in createZSolveContextFromSystem!\n", __FILE__, __LINE__);
		exit(1);
	}

	ctx->BackupTime = 0;
	ctx->Verbosity = verbosity;
	ctx->LogLevel = loglevel;
	ctx->LogFile = logfile;

	if (ctx->Verbosity>0)
	{
		printf("Linear integer system to solve:\n\n");
		printLinearSystem(initialsystem);
	}
	if (ctx->LogLevel>0)
	{
		fprintf(ctx->LogFile, "Linear integer system to solve:\n\n");
		fprintLinearSystem(ctx->LogFile, initialsystem);
	}

	finalsystem = homogenizeLinearSystem(initialsystem);
	deleteLinearSystem(initialsystem);

	if (ctx->Verbosity>0)
	{
		printf("\nLinear integer system of homogeneous equalities to solve:\n\n");
		printLinearSystem(finalsystem);
		printf("\n\n");
	}
	if (ctx->LogLevel>0)
	{
		fprintf(ctx->LogFile, "\nLinear integer system of homogeneous equalities to solve:\n\n");
		fprintLinearSystem(ctx->LogFile, finalsystem);
		fprintf(ctx->LogFile, "\n\n");
	}

	ctx->Lattice = generateLattice(finalsystem);
	deleteLinearSystem(finalsystem);

	// sort 0, 1, 2, ... , -2, -2, -2, -2, -1 (original order, then slackvars, then -b)

	sortVectorArrayColumns(ctx->Lattice, originalCompare);

	ctx->Variables = ctx->Lattice->Variables;
	ctx->MaxNorm = 0;
	ctx->Symmetric = true;
	ctx->Current = 0;
	ctx->SumNorm = 0;
	ctx->FirstNorm = 0;
	ctx->AllTime = getCPUTime();
	ctx->BackupCallback = backupcallback;
	ctx->LogCallback = logcallback;
	ctx->Homs = NULL;
	ctx->Inhoms = NULL;
	ctx->Frees = NULL;
	ctx->Graver = NULL;

	return ctx;
}

ZSolveContext createZSolveContextFromLattice(VectorArray lattice, FILE *logfile, int loglevel, int verbosity, ZSolveLogCallback logcallback, ZSolveBackupCallback backupcallback)
{
	ZSolveContext ctx;

	assert(lattice);

	ctx = (ZSolveContext)malloc(sizeof(zsolvecontext_t));
	if (ctx==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for ZSolveContext in createZSolveContextFromLattice!\n", __FILE__, __LINE__);
		exit(1);
	}

	ctx->BackupTime = 0;
	ctx->Verbosity = verbosity;
	ctx->LogLevel = loglevel;
	ctx->LogFile = logfile;
	ctx->Lattice = lattice;
	ctx->Variables = ctx->Lattice->Variables;
	ctx->MaxNorm = 0;
	ctx->Symmetric = true;
	ctx->Current = 0;
	ctx->SumNorm = 0;
	ctx->FirstNorm = 0;
	ctx->AllTime = getCPUTime();
	ctx->BackupCallback = backupcallback;
	ctx->LogCallback = logcallback;
	ctx->Homs = NULL;
	ctx->Inhoms = NULL;
	ctx->Frees = NULL;
	ctx->Graver = NULL;

	return ctx;
}

ZSolveContext createZSolveContextFromBackup(FILE *stream, ZSolveLogCallback logcallback, ZSolveBackupCallback backupcallback)
{
	ZSolveContext ctx;
	CPUTime currenttime = getCPUTime();

	assert(stream);

	ctx = (ZSolveContext)malloc(sizeof(zsolvecontext_t));
	if (ctx==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for ZSolveContext in createZSolveContextFromBackup!\n", __FILE__, __LINE__);
		exit(1);
	}

	fscanf(stream, "%d %d %d %d", &(ctx->Current), &(ctx->SumNorm), &(ctx->FirstNorm), &(ctx->Symmetric));
	ctx->SecondNorm = ctx->SumNorm - ctx->FirstNorm;

	fscanf(stream, "%d %d %d", &(ctx->Verbosity), &(ctx->LogLevel), &(ctx->BackupTime));

	fscanf(stream, "%lf %lf %lf %lf", &(ctx->AllTime), &(ctx->VarTime), &(ctx->SumTime), &(ctx->NormTime));
	ctx->AllTime = currenttime - ctx->AllTime;
	ctx->VarTime = currenttime - ctx->VarTime;
	ctx->SumTime = currenttime - ctx->SumTime;
	ctx->NormTime = currenttime - ctx->NormTime;

	ctx->Lattice = readVectorArray(stream, true);

	ctx->Variables = ctx->Lattice->Variables;

	ctx->BackupCallback = backupcallback;
	ctx->LogCallback = logcallback;
	ctx->Homs = NULL;
	ctx->Inhoms = NULL;
	ctx->Frees = NULL;
	ctx->Graver = NULL;

	return ctx;
}

void zsolveSystem(ZSolveContext ctx, bool appendnegatives)
{
	int next;
	int split;
	int count;
	int i,j,k;
	bool is_hom, is_free, has_symmetric;
	int lex_cmp;
	Vector vector;
	CPUTime lastbackup = getCPUTime();

	if (appendnegatives)
		appendVectorArrayNegatives(ctx->Lattice);

	ctx->Sum = createVector(ctx->Variables);

	if (ctx->SumNorm != 0)
		createValueTrees(ctx);

	while (ctx->Current < ctx->Lattice->Variables)
	{
		if (ctx->BackupTime > 0 && ctx->BackupCallback && (getCPUTime() - lastbackup >= (double)ctx->BackupTime))
		{
			ctx->BackupCallback(ctx);
			lastbackup = getCPUTime();			
		}

		if (ctx->SumNorm == 0) // start of var loop
		{
			ctx->VarTime = getCPUTime();
			next = nextVariable(ctx);
//			printf("next variable = %d\n", next);
			if (next<0)
				break;
			splitLog(ctx, ZSOLVE_LOG_VARIABLE_STARTED, 0.0);
			swapVectorArrayColumns(ctx->Lattice, next, ctx->Current);
//			printf("after next_var_swap:\n");
//			printVectorArray(ctx->Lattice, true);
			createValueTrees(ctx);
		}

		if (ctx->FirstNorm == 0) // start of sum loop
		{
			ctx->SumTime = getCPUTime();
			splitLog(ctx, ZSOLVE_LOG_SUM_STARTED, 0.0);
		}

		// start of norm loop

		ctx->SecondNorm = ctx->SumNorm - ctx->FirstNorm;
		ctx->NormTime = getCPUTime();
		splitLog(ctx, ZSOLVE_LOG_NORM_STARTED, 0.0);

		if (ctx->FirstNorm <= ctx->MaxNorm && ctx->SecondNorm <= ctx->MaxNorm && ctx->Norm[ctx->FirstNorm]!=NULL && ctx->Norm[ctx->SecondNorm]!=NULL)
		{
			// start completition procedure
			completeValueTrees(ctx, ctx->FirstNorm, ctx->SumNorm - ctx->FirstNorm);
		}

		// end of norm loop

		splitLog(ctx, ZSOLVE_LOG_NORM_FINISHED, ctx->NormTime);
		ctx->FirstNorm++;
	
		if (ctx->FirstNorm > ctx->SumNorm/2) // end of sum loop?
		{
			splitLog(ctx, ZSOLVE_LOG_SUM_FINISHED, ctx->SumTime);
			ctx->SumNorm++;

			if (ctx->SumNorm > 2*ctx->MaxNorm) // end of var loop?
			{
				deleteValueTrees(ctx);
				if (ctx->Lattice->Properties[ctx->Current].Lower+ctx->Lattice->Properties[ctx->Current].Upper!=0)
					ctx->Symmetric = false;
				filterLimits(ctx);
				splitLog(ctx, ZSOLVE_LOG_VARIABLE_FINISHED, ctx->VarTime);
				ctx->Current++;
				ctx->SumNorm = 0;

//				printf("After COMPLETE and FILTER\n");
//				printVectorArray(ctx->Lattice, true);
			}

			ctx->FirstNorm = 0;
		}

	}

	// algorithm completed

	split = -1;
	count = 0;

	// repermute

	for (i = 0; i<ctx->Variables-1; i++) {
		k = i;
		for (j=i+1; j<ctx->Variables; j++) {
			if (ctx->Lattice->Properties[k].Column < 0 || (ctx->Lattice->Properties[j].Column >=0 && ctx->Lattice->Properties[j].Column < ctx->Lattice->Properties[k].Column))
				k = j;
		}
		swapVectorArrayColumns(ctx->Lattice, i, k);
	}

	// DEBUG
//	printVectorArray(ctx->Lattice, true);

	// split - variable for hom / inhom
	// count - number of columns for output

	for (i=0; i<ctx->Variables; i++)
	{
		if (ctx->Lattice->Properties[i].Column == -2)
			split = i;
		else if (ctx->Lattice->Properties[i].Column >=0 )
			count = maxi(count, ctx->Lattice->Properties[i].Column+1);
	}

	ctx->Homs = createVectorArray(count);
	ctx->Inhoms = createVectorArray(count);
	ctx->Frees = createVectorArray(count);
	ctx->Graver = createVectorArray(count);

	// if no splitting, inhom only contains (0,...,0)

	if (split<0)
		appendToVectorArray(ctx->Inhoms, createZeroVector(count));

	for (i=0; i<ctx->Lattice->Size; i++)
	{
		vector = ctx->Lattice->Data[i];
		// hom depends on splitting variable
		is_hom = split < 0 || vector[split] == 0;
		// free, if all nonzero-vars are free
		is_free = true;
		for (j=0; j<ctx->Lattice->Variables; j++)
			if (vector[j] != 0 && !ctx->Lattice->Properties[j].Free)
				is_free = false;
		// has_symmetric, if inverse fits the bounds
		has_symmetric = true;
		for (j=0; j<ctx->Lattice->Variables; j++)
			if (!checkVariableBounds(ctx->Lattice->Properties, j, -vector[j]))
				has_symmetric = false;
		// lex compare of vector with its inverse
		lex_cmp = lexCompareInverseVector(vector, ctx->Lattice->Variables);

		assert(!is_free || has_symmetric);

		if (is_free) {
			if (!has_symmetric || lex_cmp>0) {
				appendToVectorArray(ctx->Frees, copyVector(vector, count));
				appendToVectorArray(ctx->Graver, copyVector(vector, count));
			}
		}
		else {
			if (is_hom) {
				appendToVectorArray(ctx->Homs, copyVector(vector, count));
				if (!has_symmetric || lex_cmp>0)
					appendToVectorArray(ctx->Graver, copyVector(vector, count));
			}
			else {
				appendToVectorArray(ctx->Inhoms, copyVector(vector, count));
			}
		}
	}

	if (ctx->Verbosity>0)
		printf("\nFinal basis has %d inhomogeneous, %d homogeneous and %d free elements.\n", ctx->Inhoms->Size, ctx->Homs->Size, ctx->Frees->Size);
	if (ctx->LogLevel>0)
		fprintf(ctx->LogFile, "\nFinal basis has %d inhomogeneous, %d homogeneous and %d free elements.\n", ctx->Inhoms->Size, ctx->Homs->Size, ctx->Frees->Size);
}

void deleteZSolveContext(ZSolveContext ctx, bool deleteresult)
{
	deleteVector(ctx->Sum);
	deleteVectorArray(ctx->Lattice);

	if (deleteresult)
	{
		deleteVectorArray(ctx->Homs);
		deleteVectorArray(ctx->Inhoms);
		deleteVectorArray(ctx->Frees);
		deleteVectorArray(ctx->Graver);
	}

	free(ctx);
}

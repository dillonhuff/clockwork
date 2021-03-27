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

#ifndef _LIBZSOLVE_H
#define _LIBZSOLVE_H

#include "vectorarray.h"
#include "linearsystem.h"
#include "cputime.h"

/*** solve-internal data ***/

typedef struct zsolvecontext_t
{
	int Current;
	int Variables;
	int SumNorm;
	int FirstNorm;
	int SecondNorm;

	VectorArray Lattice;

	VectorArray Homs;
	VectorArray Inhoms;
	VectorArray Frees;
	VectorArray Graver;

	int MaxNorm;
	void **Norm;
	Vector First;
	Vector Second;
	Vector Sum;

	bool Symmetric;

	FILE *LogFile;
	int LogLevel;
	int Verbosity;

	CPUTime AllTime;
	CPUTime VarTime;
	CPUTime SumTime;
	CPUTime NormTime;

	int BackupTime;

	void (*LogCallback)(FILE *, int level, int type, int var, int sum, int norm, int vectors, CPUTime alltime, CPUTime steptime);
	void (*BackupCallback)(struct zsolvecontext_t *);
} zsolvecontext_t;
typedef zsolvecontext_t *ZSolveContext;


/*** logging ***/

#define ZSOLVE_LOG_STARTED 0
#define ZSOLVE_LOG_RESUMED 1
#define ZSOLVE_LOG_VARIABLE_STARTED 2
#define ZSOLVE_LOG_VARIABLE_FINISHED 3
#define ZSOLVE_LOG_SUM_STARTED 4
#define ZSOLVE_LOG_SUM_FINISHED 5
#define ZSOLVE_LOG_NORM_STARTED 6
#define ZSOLVE_LOG_NORM_FINISHED 7
#define ZSOLVE_LOG_FINISHED 8

typedef void (*ZSolveLogCallback)(FILE *, int level, int type, int var, int sum, int norm, int vectors, CPUTime alltime, CPUTime steptime);
/* (stream, loglevel, log_type, current variable, current sum, current norm, number of vectors, cumulative time, time of logged step) */

void zsolveLogCallbackDefault(FILE *, int, int, int, int, int, int, CPUTime, CPUTime);
/* (stream, loglevel, log_type, current variable, current sum, current norm, number of vectors, cumulative time, time of logged step) */

/*** backup ***/

typedef void (*ZSolveBackupCallback)(ZSolveContext);
/* (pass context to backupZSolveContext after initializing the file) */

void backupZSolveContext(FILE *, ZSolveContext);
/* (backupfile, current context) */

/*** main calls ***/
ZSolveContext createZSolveContextFromSystem(LinearSystem, FILE *, int, int, ZSolveLogCallback, ZSolveBackupCallback);
/* (system to solve, logfile, loglevel = 0..3, verbosity = 0..3, custom log callback or zsolveLogCallbackDefault, backup callback) */

ZSolveContext createZSolveContextFromLattice(VectorArray, FILE *, int, int, ZSolveLogCallback, ZSolveBackupCallback);
/* (lattice, logfile, loglevel = 0..3, verbosity = 0..3, custom log callback or zsolveLogCallbackDefault, backup callback) */

ZSolveContext createZSolveContextFromBackup(FILE *, ZSolveLogCallback, ZSolveBackupCallback);
/* (open backup file, custom log callback or zsolveLogCallbackDefault, backup callback) */

void zsolveSystem(ZSolveContext, bool);
/* (context created by createZSolveContext or resumeZSolveContext, append negatives? should be true for system/lattice, false for resume) */

void deleteZSolveContext(ZSolveContext, bool);
/* (context, delete Hom and Inhom?) */

#endif

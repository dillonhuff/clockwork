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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#include "banner.h"
#include "opts.h"
#include "libzsolve.h"

int OVerbose;
int OLogging;
int OBackup;
bool OForce;
bool ORightHandSide;
bool OResume;
bool OHilbert;
bool OGraver;

int BaseLength;
char *BaseName;

FILE *LogFile;

int readTokenFromFile(FILE *stream, char *tokenchars, char **ptoken, int *pmemory)
{
	int c;
	int len = 0;

	assert(ptoken);
	assert(pmemory);

	if (*ptoken==NULL)
	{
		*ptoken = (char *)calloc(8, sizeof(char));
		*pmemory = 1;
	}
	else
		(*ptoken)[0] = '\0';

	while ((c = fgetc(stream))!=EOF)
	{
		if (strchr(tokenchars, c))
		{
			if (len+1 >= *pmemory)
			{
				*pmemory *= 2;
				*ptoken = (char *)realloc(*ptoken, *pmemory*sizeof(char));
			}
			(*ptoken)[len++] = c;
			(*ptoken)[len] = '\0';
		}
		else if (len>0)
			return len;
	}

	return len;
}

void backupEvent(ZSolveContext ctx)
{
	FILE *stream;

	strcat(BaseName, ".backup");
	stream = fopen(BaseName, "w");
	BaseName[BaseLength] = '\0';

	backupZSolveContext(stream, ctx);

	fclose(stream);
}

//                                                                            //

int main(int argc, char *argv[])
{
	FILE *stream = NULL;
	int i, j, r, count;
	bool flag;

	Matrix matrix = NULL;
	Vector rhs = NULL;
	VectorArray Lattice = NULL;
	Vector vector = NULL;

	LinearSystem initialsystem;
	ZSolveContext ctx;

	char *token;
	int memory;

	getopts(argc, argv);

	puts(FORTY_TWO_BANNER);

	if (OResume)
	{
		// START OF RESUME SECTION - READ FILES AND CREATE CONTEXT 

		strcat(BaseName, ".backup");
		stream = fopen(BaseName, "r");
		BaseName[BaseLength] = '\0';

		if (stream==NULL)
		{
			printf("Unable to open backup file %s.backup\n", BaseName);
			free(BaseName);
			exit(1);
		}

		// options
		if (fscanf(stream, "%d %d %d", &OVerbose, &OLogging, &OBackup)!=3 || OVerbose<0 || OVerbose>3 || OLogging<0 || OLogging>3 || OBackup<0)
		{
			fclose(stream);
			printf("Backup file %s.backup does not contain valid data.\n", BaseName);
			free(BaseName);
			exit(2);
		}

		// get context
		ctx = createZSolveContextFromBackup(stream, zsolveLogCallbackDefault, backupEvent);
		fclose(stream);

		// logfile
		if (OLogging>0)
		{
			strcat(BaseName, ".log");
			stream = fopen(BaseName, "a");
			BaseName[BaseLength] = '\0';
			if (stream==NULL)
			{
				printf("Unable to open log file %s.log\n", BaseName);
				free(BaseName);
				exit(1);
			}
			ctx->LogFile = LogFile = stream;
		}

		// END OF RESUME SECTION
	}
	else
	{
		// logfile
		if (OLogging>0)
		{
			strcat(BaseName, ".log");
			stream = fopen(BaseName, "w");
			BaseName[BaseLength] = '\0';
			if (stream==NULL)
			{
				printf("Unable to open log file %s.log\n", BaseName);
				free(BaseName);
				exit(1);
			}
			LogFile = stream;
		}
		// check for existance of solution files
		if (!OForce)
		{
			strcat(BaseName, ".zhom");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream!=NULL)
			{
				fclose(stream);
				if (OVerbose>0)
					printf("%s.hom already exists! Use -f to force calculation.\n", BaseName);
				if (OLogging>0)
				{
					fprintf(LogFile, "%s.hom already exists! Use -f to force calculation.\n", BaseName);
					fclose(LogFile);
				}
				free(BaseName);
				exit(1);
			}
			strcat(BaseName, ".zinhom");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream!=NULL)
			{
				fclose(stream);
				if (OVerbose>0)
					printf("%s.inhom already exists! Use -f to force calculation.\n", BaseName);
				if (LogFile)
				{
					fprintf(LogFile, "%s.inhom already exists! Use -f to force calculation.\n", BaseName);
					fclose(LogFile);
				}
				free(BaseName);
				exit(1);
			}
		}
	
		// matrix
		strcat(BaseName, ".mat");
		stream = fopen(BaseName, "r");
		BaseName[BaseLength] = '\0';

		if (stream == NULL)
		{
			stream = fopen(BaseName, "r");
			if (stream) {
				if (OVerbose>0)
					printf("Matrix file %s.mat not found, falling back to project file %s.\n\n", BaseName, BaseName);
				if (OLogging>0)
				{
					fprintf(LogFile, "Matrix file %s.mat not found, falling back to project file %s.\n\n", BaseName, BaseName);
					fclose(LogFile);
				}
			}
		}

		if (stream==NULL)
		{
			strcat(BaseName, ".lat");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream==NULL)
			{
				// lattice
				if (OVerbose>0)
					printf("Neither matrix file %s.mat nor lattice file %s.lat exists!\n", BaseName, BaseName);
				if (OLogging>0)
				{
					fprintf(LogFile, "Neither matrix file %s.mat nor lattice file %s.lat exists!\n", BaseName, BaseName);
					fclose(LogFile);
				}
				free(BaseName);
				exit(1);
			}
			else
			{
				// START OF LATTICE SECTION - READ FILES AND CREATE CONTEXT

				Lattice = readVectorArray(stream, false);
				fclose(stream);
				if (Lattice == NULL)
				{
					if (OVerbose>0)
						printf("Lattice file %s.lat does not contain valid data.\n", BaseName);
					if (OLogging>0)
					{
						fprintf(LogFile, "Lattice file %s.lat does not contain valid data.\n", BaseName);
						fclose(LogFile);
					}
					free(BaseName);
					exit(1);
				}
			
				// rhs
				if (ORightHandSide)
				{
					strcat(BaseName, ".rhs");
					stream = fopen(BaseName, "r");
					BaseName[BaseLength] = '\0';
					if (stream!=NULL)
					{
						fscanf(stream, "%d", &i);
						if (i!=1)
						{
							fclose(stream);
							printf("Height of RHS must be 1!\n");
							if (LogFile)
							{
								fprintf(LogFile, "Height of RHS must be 1!\n");
								fclose(LogFile);
							}
							deleteMatrix(matrix);
							free(BaseName);
							exit(1);
						}
						fscanf(stream, "%d", &i);
						while (i--)
						{
							if (fscanf(stream, "%d", &j) || j!=0)
							{
								printf("When reading from %s.lat, RHS file %s.rhs must contain a zero vector.\n", BaseName, BaseName);
								if (LogFile)
								{
									fprintf(LogFile, "When reading from %s.lat, RHS file %s.rhs must contain a zero vector.\n", BaseName, BaseName);
									fclose(LogFile);
								}
								deleteMatrix(matrix);
								free(BaseName);
								exit(1);
							}
						}
					}
				}

				// variable properties

				for (i=0; i<Lattice->Variables; i++)
				{
					Lattice->Properties[i].Column = i;
					Lattice->Properties[i].Lower = OHilbert ? 0 : -MAXINT;
					Lattice->Properties[i].Upper = MAXINT;
					Lattice->Properties[i].Free = (!OGraver && !OHilbert);
				}
			
				// read .rel
				strcat(BaseName, ".rel");
				stream = fopen(BaseName, "r");
				BaseName[BaseLength] = '\0';
				if (stream!=NULL)
				{
					token = NULL;
					memory = 0;
					flag = false;

					if (fscanf(stream, "%d %d", &r, &j)<2 || r != 1)
					{
						printf("RELATION file %s.rel must start with the dimensions.\n", BaseName);
						flag = true;
					}

					for (i=0; i<j; i++)
					{
						if (readTokenFromFile(stream, "0123456789=<>", &token, &memory) == 0)
						{
							printf("RELATION file %s.rel ends unexpectedly.\n", BaseName);
							flag = true;
						}
						else if (!strcmp(token, "<") || !strcmp(token, ">"))
						{
							printf("When reading from %s.lat, inequalities are not allowed.\n", BaseName);
							flag = true;
						}
						else if (strcmp(token, "="))
						{
							printf("Unknown token '%s' in RELATION file %s.rel.\n", token, BaseName);
							flag = true;
						}
					}
					free(token);
					fclose(stream);
	
					if (flag)
					{
						free(BaseName);
						exit(1);
					}
				}
			
				// read .sign
				strcat(BaseName, ".sign");
				stream = fopen(BaseName, "r");
				BaseName[BaseLength] = '\0';
				if (stream!=NULL)
				{
					token = NULL;
					memory = 0;
					flag = false;
	
					if (fscanf(stream, "%d %d", &r, &i)<2 || i != Lattice->Variables || r != 1)
					{
						printf("SIGN file %s.sign must start with '1 %d'.\n", BaseName, Lattice->Variables);
						flag = true;
					}
	
					for (i=0; i<Lattice->Variables; i++)
					{
						if (readTokenFromFile(stream, "0123456789-abcdefghijklmnopqrstuvwxyz", &token, &memory) == 0)
						{
							printf("SIGN file %s.sign ends unexpectedly.\n", BaseName);
							flag = true;
						}
						if (!strcmp(token, "0") || !strcmp(token, "free") || !strcmp(token, "f"))
						{
							Lattice->Properties[i].Upper = MAXINT;
							Lattice->Properties[i].Lower = -MAXINT;
							Lattice->Properties[i].Free = true;
						}
						else if (!strcmp(token, "1") || !strcmp(token, "hil") || !strcmp(token, "h"))
						{
							Lattice->Properties[i].Upper = MAXINT;
							Lattice->Properties[i].Lower = 0;
							Lattice->Properties[i].Free = false;
						}
						else if (!strcmp(token, "-1") || !strcmp(token, "-hil") || !strcmp(token, "-h"))
						{
							Lattice->Properties[i].Upper = 0;
							Lattice->Properties[i].Lower = -MAXINT;
							Lattice->Properties[i].Free = false;
						}
						else if (!strcmp(token, "2") || !strcmp(token, "graver") || !strcmp(token, "g"))
						{
							if (OHilbert)
							{
								printf("Input Error: Graver components for `hilbert' executable.\nInput Error: Use the `graver' executable instead.\n");
								flag = true;
							}
							else
							{
								Lattice->Properties[i].Upper = MAXINT;
								Lattice->Properties[i].Lower = -MAXINT;
								Lattice->Properties[i].Free = false;
							}
						}
						else
						{
							printf("Unknown token '%s' in SIGN file %s.sign.\n", token, BaseName);
							flag = true;
						}
					}
					free(token);
					fclose(stream);

					if (flag)
					{
						deleteVectorArray(Lattice);
						free(BaseName);
						exit(1);
					}
				}
			
				// read .ub
				strcat(BaseName, ".ub");
				stream = fopen(BaseName, "r");
				BaseName[BaseLength] = '\0';
				if (stream!=NULL)
				{
					token = NULL;
					memory = 0;
					flag = false;
		
					if (fscanf(stream, "%d %d", &r, &i)<2 || i != Lattice->Variables || r != 1)
					{
						printf("UPPER BOUNDS file %s.ub must start with '1 %d'.\n", BaseName, Lattice->Variables);
						flag = true;
					}
	
					for (i=0; i<Lattice->Variables; i++)
					{
						if (readTokenFromFile(stream, "0123456789*-", &token, &memory) == 0)
						{
							printf("UPPER BOUNDS file %s.ub ends unexpectedly.\n", BaseName);
							flag = true;
						}
						if (!strcmp(token, "*"))
							Lattice->Properties[i].Upper = MAXINT;
						else if (sscanf(token, "%d", &j) == 1)
						{
							if (Lattice->Properties[i].Free)
							{
								printf("Upper bound '%s' cannot be set for free variables.\n", token);
								flag = true;
							}
							else if (j>=0)
								Lattice->Properties[i].Upper = j;
							else
							{
								printf("Negative upper bound '%s' in UPPER BOUNDS file %s.ub.\n", token, BaseName);
								flag = true;
							}
						}
						else
						{
							printf("Unknown token '%s' in UPPER BOUNDS file %s.ub.\n", token, BaseName);
							flag = true;
						}
					}
					free(token);
					fclose(stream);
		
					if (flag)
					{
						deleteVectorArray(Lattice);
						free(BaseName);
						exit(1);
					}
				}

				// read .lb
				strcat(BaseName, ".lb");
				stream = fopen(BaseName, "r");
				BaseName[BaseLength] = '\0';
				if (stream!=NULL)
				{
					token = NULL;
					memory = 0;
					flag = false;
		
					if (fscanf(stream, "%d %d", &r, &i)<2 || i != Lattice->Variables || r != 1)
					{
						printf("LOWER BOUNDS file %s.lb must start with '1 %d'.\n", BaseName, Lattice->Variables);
						flag = true;
					}
	
					for (i=0; i<Lattice->Variables; i++)
					{
						if (readTokenFromFile(stream, "0123456789*-", &token, &memory) == 0)
						{
							printf("LOWER BOUNDS file %s.lb ends unexpectedly.\n", BaseName);
							flag = true;
						}
						if (!strcmp(token, "*"))
							Lattice->Properties[i].Lower = -MAXINT;
						else if (sscanf(token, "%d", &j) == 1)
						{
							if (Lattice->Properties[i].Free)
							{
								printf("Lower bound '%s' cannot be set for free variables.\n", token);
								flag = true;
							}
							else if (j<=0)
								Lattice->Properties[i].Lower = j;
							else
							{
								printf("Positive lower bound '%s' in LOWER BOUNDS file %s.lb.\n", token, BaseName);
								flag = true;
							}
						}
						else
						{
							printf("Unknown token '%s' in LOWER BOUNDS file %s.lb.\n", token, BaseName);
							flag = true;
						}
					}
					free(token);
					fclose(stream);
		
					if (flag)
					{
						deleteVectorArray(Lattice);
						free(BaseName);
						exit(1);
					}
				}
	
				ctx = createZSolveContextFromLattice(Lattice, LogFile, OLogging, OVerbose, zsolveLogCallbackDefault, backupEvent);
			
				// print lattice
				if (ctx->Verbosity>0)
				{
					printf("\nLattice to use:\n\n");
					printVectorArray(ctx->Lattice, false);
					printf("\n\n");
				}
				if (ctx->LogLevel>0)
				{
					fprintf(ctx->LogFile, "\nLattice to use:\n\n");
					fprintVectorArray(ctx->LogFile, ctx->Lattice, false);
					fprintf(ctx->LogFile, "\n\n");
				}

				// END OF LATTICE SECTION
			}
		}
		else
		{
			// START OF SYSTEM SECTION - READ FILES AND CREATE CONTEXT

			matrix = readMatrix(stream);
			fclose(stream);
			if (matrix==NULL)
			{
				printf("Matrix file %s does not contain valid data.\n", BaseName);
				if (LogFile)
				{
					fprintf(LogFile, "Matrix file %s does not contain valid data.\n", BaseName);
					fclose(LogFile);
				}
				free(BaseName);
				exit(1);
			}
	
			// rhs
			if (ORightHandSide)
			{
				strcat(BaseName, ".rhs");
				stream = fopen(BaseName, "r");
				BaseName[BaseLength] = '\0';
				if (stream!=NULL)
				{
					if (OGraver || OHilbert)
					{
						fclose(stream);
						printf("Input Error: No rhs file is allowed with --graver and --hilbert!\n");
						printf("Input Error: Please delete %s.rhs and rerun zsolve\n", BaseName);
						if (LogFile)
						{
							fprintf(LogFile, "Input Error: No rhs file is allowed with --graver and --hilbert!\n");
							fprintf(LogFile, "Input Error: Please delete %s.rhs and rerun zsolve\n", BaseName);
							fclose(LogFile);
						}
						deleteMatrix(matrix);
						free(BaseName);
						exit(1);
					}
					
					fscanf(stream, "%d", &i);
					if (i!=1)
					{
						fclose(stream);
						printf("Height of RHS must be 1!\n");
						if (LogFile)
						{
							fprintf(LogFile, "Height of RHS must be 1!\n");
							fclose(LogFile);
						}
						deleteMatrix(matrix);
						free(BaseName);
						exit(1);
					}
					fscanf(stream, "%d", &i);
					if (i!=matrix->Height)
					{
						fclose(stream);
						printf("Matrix height conflicts with width of rhs!\n");
						if (LogFile)
						{
							fprintf(LogFile, "Matrix height conflicts with width of rhs!\n");
							fclose(LogFile);
						}
						deleteMatrix(matrix);
						free(BaseName);
						exit(1);
					}
					rhs = readVector(stream, matrix->Height);
					fclose(stream);
					if (rhs==NULL)
					{
						printf("RHS file %s.rhs does not contain valid data.\n", BaseName);
						if (LogFile)
						{
							fprintf(LogFile, "RHS file %s.rhs does not contain valid data.\n", BaseName);
							fclose(LogFile);
						}
						deleteMatrix(matrix);
						free(BaseName);
						exit(1);
					}
				}
			}

			// fill with zeros
			if (rhs==NULL)
			{
				rhs = createVector(matrix->Height);
				for (i=0; i<matrix->Height; i++)
					rhs[i] = 0;
			}

			// create system
			initialsystem = createLinearSystem();
	
			setLinearSystemMatrix(initialsystem, matrix);
			deleteMatrix(matrix);

			setLinearSystemRHS(initialsystem, rhs);
			deleteVector(rhs);

			// default limits

			if (OGraver)
				setLinearSystemLimit(initialsystem, -1, -MAXINT, MAXINT, false);
			else if (OHilbert)
				setLinearSystemLimit(initialsystem, -1, 0, MAXINT, false);
			else
				setLinearSystemLimit(initialsystem, -1, -MAXINT, MAXINT, true);
	
			// default equation type

			setLinearSystemEquationType(initialsystem, -1, EQUATION_EQUAL, 0);

			// read .rel
			strcat(BaseName, ".rel");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream!=NULL)
			{
				token = NULL;
				memory = 0;
				flag = false;

				if (fscanf(stream, "%d %d", &r, &i)<2 || i != initialsystem->Equations || r != 1)
				{
					printf("RELATION file %s.rel must start with '1 %d'.\n", BaseName, initialsystem->Equations);
					flag = true;
				}

				for (i=0; i<initialsystem->Equations; i++)
				{
					if (readTokenFromFile(stream, "0123456789=<>", &token, &memory) == 0)
					{
						printf("RELATION file %s.rel ends unexpectedly.\n", BaseName);
						flag = true;
					}
					if (!strcmp(token, "="))
						setLinearSystemEquationType(initialsystem, i, EQUATION_EQUAL, 0);
					// BUG: Not a real bug, but maybe misdefinition?? <= is not so hard to type :-)
					else if (!strcmp(token, "<"))
						setLinearSystemEquationType(initialsystem, i, EQUATION_LESSEREQUAL, 0);
					else if (!strcmp(token, ">"))
						setLinearSystemEquationType(initialsystem, i, EQUATION_GREATEREQUAL, 0);
					else
					{
						printf("Unknown token '%s' in RELATION file %s.rel.\n", token, BaseName);
						flag = true;
					}
				}
				free(token);
				fclose(stream);

				if (flag)
				{
					deleteLinearSystem(initialsystem);
					free(BaseName);
					exit(1);
				}
			}

			// read .sign
			strcat(BaseName, ".sign");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream!=NULL)
			{
				token = NULL;
				memory = 0;
				flag = false;

				if (fscanf(stream, "%d %d", &r, &i)<2 || i != initialsystem->Variables || r != 1)
				{
					printf("SIGN file %s.sign must start with '1 %d'.\n", BaseName, initialsystem->Variables);
					flag = true;
				}

				for (i=0; i<initialsystem->Variables; i++)
				{
					if (readTokenFromFile(stream, "0123456789-abcdefghijklmnopqrstuvwxyz", &token, &memory) == 0)
					{
						printf("SIGN file %s.sign ends unexpectedly.\n", BaseName);
						flag = true;
					}
					if (!strcmp(token, "0") || !strcmp(token, "free") || !strcmp(token, "f"))
						setLinearSystemLimit(initialsystem, i, -MAXINT, MAXINT, true);
					else if (!strcmp(token, "1") || !strcmp(token, "hil") || !strcmp(token, "h"))
						setLinearSystemLimit(initialsystem, i, 0, MAXINT, false);
					else if (!strcmp(token, "-1") || !strcmp(token, "-hil") || !strcmp(token, "-h"))
						setLinearSystemLimit(initialsystem, i, -MAXINT, 0, false);
					else if (!strcmp(token, "2") || !strcmp(token, "graver") || !strcmp(token, "g"))
					{
						if (OHilbert)
						{
							if (!flag)
								printf("Input Error: Graver components for `hilbert' executable.\nInput Error: Use the `graver' executable instead.\n");
							flag = true;
						}
						else
							setLinearSystemLimit(initialsystem, i, -MAXINT, MAXINT, false);
					}
					else
					{
						printf("Unknown token '%s' in SIGN file %s.sign.\n", token, BaseName);
						flag = true;
					}
				}
				free(token);
				fclose(stream);

				if (flag)
				{
					deleteLinearSystem(initialsystem);
					free(BaseName);
					exit(1);
				}
			}

			// read .ub
			strcat(BaseName, ".ub");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream!=NULL)
			{
				token = NULL;
				memory = 0;
				flag = false;
	
				if (fscanf(stream, "%d %d", &r, &i)<2 || i != initialsystem->Variables || r != 1)
				{
					printf("UPPER BOUNDS file %s.ub must start with '1 %d'.\n", BaseName, initialsystem->Variables);
					flag = true;
				}

				for (i=0; i<initialsystem->Variables; i++)
				{
					if (readTokenFromFile(stream, "0123456789*-", &token, &memory) == 0)
					{
						printf("UPPER BOUNDS file %s.ub ends unexpectedly.\n", BaseName);
						flag = true;
					}
					if (!strcmp(token, "*"))
						setLinearSystemBound(initialsystem, i, 'u', MAXINT);
					else if (sscanf(token, "%d", &j) == 1)
					{
						if (initialsystem->VarProperties[i].Free)
						{
							printf("Upper bound '%s' cannot be set for free variables.\n", token);
							flag = true;
						}
						else if (j>=0)
							setLinearSystemBound(initialsystem, i, 'u', j);
						else
						{
							printf("Negative upper bound '%s' in UPPER BOUNDS file %s.ub.\n", token, BaseName);
							flag = true;
						}
					}
					else
					{
						printf("Unknown token '%s' in UPPER BOUNDS file %s.ub.\n", token, BaseName);
						flag = true;
					}
				}
				free(token);
				fclose(stream);
	
				if (flag)
				{
					deleteLinearSystem(initialsystem);
					free(BaseName);
					exit(1);
				}
			}

			// read .lb
			strcat(BaseName, ".lb");
			stream = fopen(BaseName, "r");
			BaseName[BaseLength] = '\0';
			if (stream!=NULL)
			{
				token = NULL;
				memory = 0;
				flag = false;
	
				if (fscanf(stream, "%d %d", &r, &i)<2 || i != initialsystem->Variables || r != 1)
				{
					printf("LOWER BOUNDS file %s.lb must start with '1 %d'.\n", BaseName, initialsystem->Variables);
					flag = true;
				}

				for (i=0; i<initialsystem->Variables; i++)
				{
					if (readTokenFromFile(stream, "0123456789*-", &token, &memory) == 0)
					{
						printf("LOWER BOUNDS file %s.lb ends unexpectedly.\n", BaseName);
						flag = true;
					}
					if (!strcmp(token, "*"))
						setLinearSystemBound(initialsystem, i, 'l', -MAXINT);
					else if (sscanf(token, "%d", &j) == 1)
					{
						if (initialsystem->VarProperties[i].Free)
						{
							printf("Lower bound '%s' cannot be set for free variables.\n", token);
							flag = true;
						}
						else if (j<=0)
							setLinearSystemBound(initialsystem, i, 'l', j);
						else
						{
							printf("Positive lower bound '%s' in LOWER BOUNDS file %s.lb.\n", token, BaseName);
							flag = true;
						}
					}
					else
					{
						printf("Unknown token '%s' in LOWER BOUNDS file %s.lb.\n", token, BaseName);
						flag = true;
					}
				}
				free(token);
				fclose(stream);
	
				if (flag)
				{
					deleteLinearSystem(initialsystem);
					free(BaseName);
					exit(1);
				}
			}

			ctx = createZSolveContextFromSystem(initialsystem, LogFile, OLogging, OVerbose, zsolveLogCallbackDefault, backupEvent);
	
			// END OF SYSTEM SECTION
		}
	}

	// DEBUG
//	printVectorArray(ctx->Lattice, true);

	zsolveSystem(ctx, !OResume);

	if (OGraver)
	{
		printf("Writing %d vectors to graver file, with respect to symmetry.\n", ctx->Graver->Size);
		if (LogFile)
			fprintf(LogFile, "Writing %d vectors to graver file, with respect to symmetry.\n", ctx->Graver->Size);
		
		strcat(BaseName, ".gra");
		stream = fopen(BaseName, "w");
		BaseName[BaseLength] = '\0';
		if (stream)
		{
			fprintf(stream, "%d %d\n\n", ctx->Graver->Size, ctx->Graver->Variables);
			fprintVectorArray(stream, ctx->Graver, false);
			fclose(stream);
		}
	}
	else if (OHilbert)
	{
		strcat(BaseName, ".hil");
		stream = fopen(BaseName, "w");
		BaseName[BaseLength] = '\0';
		if (stream)
		{
			fprintf(stream, "%d %d\n\n", ctx->Homs->Size + ctx->Frees->Size, ctx->Homs->Variables);
			fprintVectorArray(stream, ctx->Homs, false);
			fprintf(stream, "\n");
			fprintVectorArray(stream, ctx->Frees, false);
			fclose(stream);
		}
	}
	else
	{
		strcat(BaseName, ".zinhom");
		stream = fopen(BaseName, "w");
		BaseName[BaseLength] = '\0';
		if (stream)
		{
			fprintf(stream, "%d %d\n\n", ctx->Inhoms->Size, ctx->Inhoms->Variables);
			fprintVectorArray(stream, ctx->Inhoms, false);
			fclose(stream);
		}

		strcat(BaseName, ".zhom");
		stream = fopen(BaseName, "w");
		BaseName[BaseLength] = '\0';
		if (stream)
		{
			fprintf(stream, "%d %d\n\n", ctx->Homs->Size, ctx->Homs->Variables);
			fprintVectorArray(stream, ctx->Homs, false);
			fclose(stream);
		}

		if (ctx->Frees->Size>0)
		{
			strcat(BaseName, ".zfree");
			stream = fopen(BaseName, "w");
			BaseName[BaseLength] = '\0';
			if (stream)
			{
				fprintf(stream, "%d %d\n\n", ctx->Frees->Size, ctx->Frees->Variables);
				fprintVectorArray(stream, ctx->Frees, false);
				fclose(stream);
			}
		}
	}


	printf("\n4ti2 Total Time: ");
	printCPUTime(maxd(getCPUTime() - ctx->AllTime, 0.0));
	printf("\n");
	if (LogFile) {
		fprintf(LogFile, "\n4ti2 Total Time: ");
		fprintCPUTime(LogFile, maxd(getCPUTime() - ctx->AllTime, 0.0));
		fprintf(LogFile, "\n");
	}

	deleteZSolveContext(ctx, true);

	if (BaseName!=NULL)
		free(BaseName);

	if (LogFile)
		fclose(LogFile);

	return EXIT_SUCCESS;
}

//                                                                            //

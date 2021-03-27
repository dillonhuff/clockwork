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

#include "banner.h"
#include "opts.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>

#ifdef __GNU_LIBRARY__
#	include <getopt.h>
#endif

#include "defs.h"

extern int OVerbose;
extern int OLogging;
extern int OBackup;
extern bool OForce;
extern bool ORightHandSide;
extern bool OResume;
extern int BaseLength;
extern char *BaseName;
extern bool OHilbert;
extern bool OGraver;

//                                                                            //

void printUsage(char *program)
{
	assert(program);

	puts(FORTY_TWO_BANNER);

        printf("Usage: ");
        if (OHilbert) { printf("hilbert"); }
        else if (OGraver) { printf("graver"); }
        else { printf("zsolve"); }
        printf(" [options] PROJECT\n\n");
	
	printf("[Basic options]\n");
//	printf(" -f, --force               computation regardless of existing PROJECT.(in)hom\n");
	printf(" -i, --ignore              system is homogeneous, regardless of PROJECT.rhs\n");

	printf("\n[Logging options]\n");
	printf(" -n, --logging=0           no logging (default)\n");
	printf(" -l, --logging[=1]         simple logging to PROJECT.log\n");
	printf(" -ll, --logging=2          verbose logging to PROJECT.log\n");
	printf(" -lll, --logging=3         very verbose logging to PROJECT.log\n");

	printf("\n[Output options]\n");
	printf(" -q, --quiet, --verbose=0  quiet mode\n");
	printf(" -v, --verbose[=1]         simple output (default)\n");
	printf(" -vv, --verbose=2          verbose output\n");
	printf(" -vvv, --verbose=3         very verbose output\n");

	printf("\n[Backup options]\n");
	printf(" -b[FREQ], --backup[=FREQ] frequently backup status to PROJECT.backup,\n                           where FREQ must be \"[1-9][0-9]*[mhd]\" for mins,\n                           hours or days. default is 1h\n");
	printf(" -r, --resume              resume from a backup like PROJECT.backup\n");	

	printf("\n[Other options]\n");
	printf(" -h, --help                display this help and exit\n");

	printf("\n[Used files]\n\n");
	printf("PROJECT.mat    matrix\n");
	printf("PROJECT.rhs    right hand side (optional)\n");
	//printf("PROJECT.rel    relations (<, >, =, p)\n");
	printf("PROJECT.rel    relations (<, >, =)\n");
	printf("PROJECT.sign   sign of columns (optional)\n");
	printf("PROJECT.lb     lower bounds columns (optional)\n");
	printf("PROJECT.ub     upper bounds columns (optional)\n");
	printf("PROJECT.backup backup file\n");
	printf("PROJECT.zinhom inhomogeneous part of the solution\n");
	printf("PROJECT.zhom   homogeneous part of the solution\n");
	printf("PROJECT.zfree  free part of the solution\n");

	exit(0);
}

//                                                                            //

void getopts(int argc, char **argv)
{
	int c;
	char d;

#ifdef __GNU_LIBRARY__
	static struct option long_options[] =
	{
		{ "backup", optional_argument, NULL, 'b'},
		{ "data", no_argument, NULL, 'd'},
		{ "force", no_argument, NULL, 'f'},
		{ "help", no_argument, NULL, 'h'},
		{ "ignore", no_argument, NULL, 'i'},
		{ "logging", optional_argument, NULL, 'l'},
		{ "quiet", no_argument, NULL, 'q'},
		{ "resume", no_argument, NULL, 'r'},
		{ "verbose", optional_argument, NULL, 'v'},
		{ "hilbert", no_argument, NULL, 'H'},
		{ "graver", no_argument, NULL, 'G'}
	};
#endif

	OVerbose = 1;
	OLogging = 0;
	OBackup = 0;
	OResume = false;
	ORightHandSide = true;
	OHilbert = false;
	OGraver = false;
	OForce = true;

#ifdef __GNU_LIBRARY__
	while ((c = getopt_long(argc, argv, "b::d::fhinl::qrv::VHG", long_options, NULL)) != -1)
#else
	while ((c = getopt(argc, argv, "b::d::fhinl::qrv::VHG")) != -1)
#endif
	{
		if (optarg!=NULL && optarg[0]=='=')
			optarg++;
		switch(c)
		{
			case 'f':
				OForce = true;
			break;
			case 'i':
				ORightHandSide = false;
			break;
			case 'H':
				OHilbert = true;
			break;
			case 'G':
				OGraver = true;
			break;
			case 'r':
				OResume = true;
			break;
			case 'b':
				if (optarg==NULL)
					OBackup = 3600;
				else
				{
					if (sscanf(optarg, "%d%c", &OBackup, &d)==2)
					{
						if (d=='m')
							OBackup *= 60;
						else if (d=='h')
							OBackup *= 3600;
						else if (d=='d')
							OBackup *= 86400;
						else if (d!='s')
						{
							printf("%s: invalid backup modifier %c\n", argv[0], d);
							exit(1);
						}
					}
					else
					{
						printf("%s: invalid backup argument -b%s\n", argv[0], optarg);
						exit(1);
					}
				}
			break;
			case 'q':
				OVerbose = 0;
			break;
			case 'v':
				if (optarg==NULL || !strcmp(optarg, "1"))
					OVerbose = 1;
				else if (!strcmp(optarg, "2") || !strcmp(optarg, "v"))
					OVerbose = 2;
				else if (!strcmp(optarg, "3") || !strcmp(optarg, "vv"))
					OVerbose = 3;
				else if (!strcmp(optarg, "0"))
					OVerbose = 0;
				else
				{
					printf("%s: invalid verbose argument -v%s\n", argv[0], optarg);
					exit(1);
				}
			break;
			case 'n':
				OLogging = 0;
			break;
			case 'l':
				if (optarg==NULL || !strcmp(optarg, "1"))
					OLogging = 1;
				else if (!strcmp(optarg, "2") || !strcmp(optarg, "l"))
					OLogging = 2;
				else if (!strcmp(optarg, "3") || !strcmp(optarg, "ll"))
					OLogging = 3;
				else if (!strcmp(optarg, "0"))
					OLogging = 0;
				else
				{
					printf("%s: invalid verbose argument -v%s\n", argv[0], optarg);
					exit(1);
				}
			break;
			case 'h':
				printUsage(argv[0]);
			break;
			case '?':
				exit(1);
			break;
			default:
				printf("c = %c, optarg = %s\n", c, optarg);
				abort();
			break;
		}
	}

	if (OHilbert && OGraver)
	{
		printf("Input Error: A combination of --hilbert and --graver is not allowed!\n");
		exit(1);
	}

	if (optind>=argc)
		printUsage(argv[0]);

	if (optind<argc-1) {
		printf("Input Error: Only one project file is possible: You specified '%s' and '%s'!\n\n", argv[optind], argv[optind+1]);
		exit(1);
	}

	BaseLength = strlen(argv[optind]);
	BaseName = (char *)malloc((BaseLength+10)*sizeof(char));
	if (BaseName==NULL)
	{
		fprintf(stderr, "Fatal Error (%s/%d): Could not allocate memory for BaseName!\n", __FILE__, __LINE__);
		exit(1);
	}
	strcpy(BaseName, argv[optind]);
}

//                                                                            //

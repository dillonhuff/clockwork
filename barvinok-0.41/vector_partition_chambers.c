#include <barvinok/options.h>
#include "param_util.h"

/* This program computes the full-dimensional chambers of the vector
 * partition function
 *
 * 			A \lambda = u
 *
 * The input is the matrix A in PolyLib notation.
 * The output consists of the number of chambers, followed by
 * a constraint description of each chamber in PolyLib notation.
 *
 * Example run:
 *
 *	$ cat elke
 *	2 4
 *	
 *	1 1 1 1
 *	0 1 2 3
 *	
 *	$ ./vector_partition_chambers < elke
 *	3
 *	
 *	3 4
 *	   1    1   -1    0
 *	   1    0    1    0
 *	   1    0    0    1
 *	
 *	3 4
 *	   1   -1    1    0
 *	   1    2   -1    0
 *	   1    0    0    1
 *	
 *	3 4
 *	   1    3   -1    0
 *	   1   -2    1    0
 *	   1    0    0    1
 */

static Polyhedron *partition2polyhedron(Matrix *A,
					struct barvinok_options *options)
{
	int i;
	unsigned nvar, nparam;
	Matrix *M;
	Polyhedron *P;

	nvar = A->NbColumns;
	nparam = A->NbRows;

	M = Matrix_Alloc(nvar + nparam, 1 + nvar + nparam + 1);
	assert(M);

	for (i = 0; i < nparam; ++i) {
		Vector_Copy(A->p[i], M->p[i] + 1, nvar);
		value_set_si(M->p[i][1 + nvar + i], -1);
	}
	for (i = 0; i < nvar; ++i) {
		value_set_si(M->p[nparam + i][0], 1);
		value_set_si(M->p[nparam + i][1 + i], 1);
	}

	P = Constraints2Polyhedron(M, options->MaxRays);
	Matrix_Free(M);

	return P;
}

int main(int argc, char **argv)
{
	int nchamber;
	unsigned nparam;
	Matrix *A;
	Polyhedron *P, *C;
	Param_Polyhedron *PP;
	Param_Domain *PD;
	struct barvinok_options *options = barvinok_options_new_with_defaults();

	argc = barvinok_options_parse(options, argc, argv, ISL_ARG_ALL);

	A = Matrix_Read();
	assert(A);

	nparam = A->NbRows;
	C = Universe_Polyhedron(nparam);
	P = partition2polyhedron(A, options);
	Matrix_Free(A);

	PP = Polyhedron2Param_Polyhedron(P, C, options);
	Polyhedron_Free(P);
	Polyhedron_Free(C);

	nchamber = 0;
	for (PD = PP->D; PD; PD = PD->next)
		nchamber++;

	printf("%d\n", nchamber);
	for (PD = PP->D; PD; PD = PD->next) {
		printf("\n");
		Polyhedron_PrintConstraints(stdout, P_VALUE_FMT, PD->Domain);
	}
	Param_Polyhedron_Free(PP);

	barvinok_options_free(options);
	return 0;
}

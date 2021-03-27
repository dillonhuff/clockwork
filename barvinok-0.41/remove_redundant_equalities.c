#include <barvinok/options.h>
#include <barvinok/evalue.h>
#include <barvinok/util.h>
#include "config.h"

void dump_polytope(Polyhedron *P)
{
    int i, j;
    unsigned nr, nc;

    fprintf(stdout, "%d %d\n", nr=P->NbConstraints, nc=P->Dimension+2);
    for (i=0; i < nr; i++) {
	for (j=0; j < nc; j++) {
	    value_print(stdout," "P_VALUE_FMT" ", P->Constraint[i][j]);
	}
	fprintf(stdout, "\n");
    }
}

int main(int argc, char **argv)
{
    Polyhedron *A, *C;
    Matrix *M;
    const char **param_name;
    int i;
    struct barvinok_options *options = barvinok_options_new_with_defaults();

    M = Matrix_Read();
    A = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    M = Matrix_Read();
    C = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    param_name = Read_ParamNames(stdin, C->Dimension);
    A = remove_equalities_p(A, A->Dimension-C->Dimension, 0, options->MaxRays);
    dump_polytope(A);
    puts("");
    dump_polytope(C);
    puts("");
    for (i = 0; i < C->Dimension; ++i)
	printf("%s ", param_name[i]);
    puts("");
    Free_ParamNames(param_name, C->Dimension);
    Polyhedron_Free(A);
    Polyhedron_Free(C);
    barvinok_options_free(options);
    return 0;
}

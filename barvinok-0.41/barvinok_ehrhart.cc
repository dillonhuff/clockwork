#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <barvinok/polylib.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>
#include "evalue_convert.h"
#include "barvinok_ehrhart_options.h"

/* The input of this example program is a polytope in PolyLib notation,
 * i.e., an n by d+2 matrix of the n constraints A x + b >= 0 defining
 * the polytope * sitting in a d-dimensional space.  The first column
 * is 1 for an inequality and 0 for an equality.  b is placed in the
 * final column.
 * Alternatively, if the matrix is preceded by the word "vertices"
 * on a line by itself, it will be interpreted as a list of vertices
 * in PolyLib notation, i.e., an n by (d+2) matrix, where n is
 * the number of vertices/rays and d the dimension.  The first column is
 * 0 for lines and 1 for vertices/rays.  The final column is the denominator
 * or 0 for rays.  Note that for barvinok_ehrhart, the first column
 * should always be 1.
 */

int main(int argc, char **argv)
{
    Polyhedron *A, *C, *U;
    const char **param_name;
    int print_solution = 1;
    struct ehrhart_options *options = ehrhart_options_new_with_defaults();

    argc = ehrhart_options_parse(options, argc, argv, ISL_ARG_ALL);

    A = Polyhedron_Read(options->barvinok->MaxRays);
    param_name = Read_ParamNames(stdin, 1);
    Polyhedron_Print(stdout, P_VALUE_FMT, A);
    C = Cone_over_Polyhedron(A);
    U = Universe_Polyhedron(1);
    if (options->series) {
	gen_fun *gf;
	gf = barvinok_series_with_options(C, U, options->barvinok);
	gf->print(std::cout, U->Dimension, param_name);
	puts("");
	delete gf;
    } else {
	evalue *EP;
	/* A (conceptually) obvious optimization would be to pass in
	 * the parametric vertices, which are just n times the original
	 * vertices, rather than letting barvinok_enumerate_ev (re)compute
	 * them through Polyhedron2Param_SimplifiedDomain.
	 */
	EP = barvinok_enumerate_with_options(C, U, options->barvinok);
	assert(EP);
	if (evalue_convert(EP, options->convert, options->barvinok->verbose,
			   C->Dimension, param_name))
	    print_solution = 0;
	if (print_solution)
	    print_evalue(stdout, EP, param_name);
	evalue_free(EP);
    }
    Free_ParamNames(param_name, 1);
    Polyhedron_Free(A);
    Polyhedron_Free(C);
    Polyhedron_Free(U);
    ehrhart_options_free(options);
    return 0;
}

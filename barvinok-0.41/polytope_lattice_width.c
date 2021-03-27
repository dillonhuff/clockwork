#include <assert.h>
#include <barvinok/polylib.h>
#include <barvinok/evalue.h>
#include <barvinok/options.h>
#include "lattice_width.h"

struct arguments {
    struct barvinok_options *barvinok;
    int direction;
};

ISL_ARGS_START(struct arguments, options_args)
ISL_ARG_CHILD(struct arguments, barvinok, NULL, &barvinok_options_args, NULL)
ISL_ARG_BOOL(struct arguments, direction, 'd', "direction", 0,
	"print width directions")
ISL_ARGS_END

ISL_ARG_DEF(options, struct arguments, options_args)

int main(int argc, char **argv)
{
    Polyhedron *P, *C;
    Matrix *M;
    const char **param_name;
    struct arguments *options = options_new_with_defaults();
    struct width_direction_array *dirs;
    int i;

    argc = options_parse(options, argc, argv, ISL_ARG_ALL);

    M = Matrix_Read();
    assert(M);
    P = Constraints2Polyhedron(M, options->barvinok->MaxRays);
    Matrix_Free(M);
    M = Matrix_Read();
    assert(M);
    C = Constraints2Polyhedron(M, options->barvinok->MaxRays);
    Matrix_Free(M);
    param_name = Read_ParamNames(stdin, C->Dimension);

    dirs = Polyhedron_Lattice_Width_Directions(P, C, options->barvinok);
    for (i = 0; i < dirs->n; ++i) {
	evalue *E;

	Print_Domain(stdout, dirs->wd[i].domain, param_name);
	if (options->direction)
	    Vector_Print(stdout, P_VALUE_FMT, dirs->wd[i].dir);
	E = affine2evalue(dirs->wd[i].width->p,
			  dirs->wd[i].width->p[C->Dimension+1],
			  C->Dimension);
	print_evalue(stdout, E, param_name);
	evalue_free(E);
    }
    free_width_direction_array(dirs);

    Free_ParamNames(param_name, C->Dimension);
    Polyhedron_Free(P);
    Polyhedron_Free(C);
    options_free(options);

    return 0;
}

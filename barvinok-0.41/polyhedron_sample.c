#include <assert.h>
#include <barvinok/options.h>
#include <barvinok/sample.h>

int main(int argc, char **argv)
{
    Matrix *M;
    Polyhedron *P;
    Vector *sample;
    struct barvinok_options *bv_options = barvinok_options_new_with_defaults();

    argc = barvinok_options_parse(bv_options, argc, argv, ISL_ARG_ALL);

    M = Matrix_Read();
    P = Constraints2Polyhedron(M, bv_options->MaxRays);
    Matrix_Free(M);

    sample = Polyhedron_Sample(P, bv_options);
    if (sample) {
	assert(in_domain(P, sample->p));
	Vector_Print(stdout, P_VALUE_FMT, sample);
	Vector_Free(sample);
    }

    Polyhedron_Free(P);
    barvinok_options_free(bv_options);
}

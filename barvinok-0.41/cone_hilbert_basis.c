#include <barvinok/polylib.h>
#include <barvinok/options.h>
#include "hilbert.h"

int main(int argc, char **argv)
{
    Matrix *M;
    Polyhedron *C;
    struct barvinok_options *options = barvinok_options_new_with_defaults();

    M = Matrix_Read();
    C = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    M = Cone_Hilbert_Basis(C, options->MaxRays);

    Polyhedron_Free(C);

    Matrix_Print(stdout, P_VALUE_FMT, M);
    Matrix_Free(M);

    barvinok_options_free(options);
    return 0;
}

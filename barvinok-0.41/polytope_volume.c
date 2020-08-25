#include <barvinok/options.h>
#include "volume.h"

int main(int argc, char **argv)
{
    Polyhedron *A, *C;
    Matrix *M;
    evalue *EP = NULL;
    const char **param_name;
    struct barvinok_options *bv_options = barvinok_options_new_with_defaults();

    M = Matrix_Read();
    A = Constraints2Polyhedron(M, bv_options->MaxRays);
    Matrix_Free(M);
    M = Matrix_Read();
    C = Constraints2Polyhedron(M, bv_options->MaxRays);
    Matrix_Free(M);
    param_name = Read_ParamNames(stdin, C->Dimension);

    bv_options->approx->approximation = BV_APPROX_SIGN_APPROX;
    EP = Param_Polyhedron_Volume(A, C, bv_options);
    print_evalue(stdout, EP, (const char **)param_name);
    fprintf(stdout, "\n");
    evalue_free(EP);

    Free_ParamNames(param_name, C->Dimension);
    Polyhedron_Free(A);
    Polyhedron_Free(C);
    barvinok_options_free(bv_options);

    return 0;
}

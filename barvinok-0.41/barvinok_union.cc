#include <stdlib.h>
#include <isl/ctx.h>
#include <isl/space.h>
#include <isl/polynomial.h>
#include <barvinok/polylib.h>
#include <barvinok/evalue.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "barvinok_union_options.h"

/* The input of this example program is similar to that of ehrhart_union
 * in the PolyLib distribution, the difference being that the number of
 * polytopes in the union needs to be specified explicitly.
 * The input starts with this number, followed by this number of
 * polytopes in combined data and parameter space, a context polytope
 * in parameter space and (optionally) the names of the parameters.
 * All polytopes are in PolyLib notation.
 */


/* Convert "EP" into an isl_pw_qpolynomial with "nparam" parameter names
 * specified by "names".
 */
static __isl_give isl_pw_qpolynomial *evalue2pwqp(isl_ctx *ctx, evalue *EP,
	unsigned nparam, const char **names)
{
	int i;
	isl_space *space;

	space = isl_space_params_alloc(ctx, nparam);
	for (i = 0; i < nparam; ++i)
		space = isl_space_set_dim_name(space,
						isl_dim_param, i, names[i]);
	return isl_pw_qpolynomial_from_evalue(space, EP);
}

/* Check that "pwqp" is equal to the piecewise quasi-polynomial
 * that appears next on stdin.
 */
static isl_stat check_result(__isl_keep isl_pw_qpolynomial *pwqp)
{
	isl_ctx *ctx;
	isl_bool equal;
	isl_pw_qpolynomial *exp;

	if (!pwqp)
		return isl_stat_error;
	ctx = isl_pw_qpolynomial_get_ctx(pwqp);

	exp = isl_pw_qpolynomial_read_from_file(ctx, stdin);
	exp = isl_pw_qpolynomial_sub(exp, isl_pw_qpolynomial_copy(pwqp));
	equal = isl_pw_qpolynomial_is_zero(exp);
	isl_pw_qpolynomial_free(exp);

	if (equal < 0)
		return isl_stat_error;
	if (!equal)
		isl_die(ctx, isl_error_unknown,
			"unexpected result", return isl_stat_error);

	return isl_stat_ok;
}

int main(int argc, char **argv)
{
    isl_ctx *ctx;
    Matrix *M;
    Polyhedron *C, *D = NULL;
    int i, npol;
    const char **param_name;
    char s[128];
    int check;
    int r = EXIT_SUCCESS;
    struct union_options *options = union_options_new_with_defaults();

    argc = union_options_parse(options, argc, argv, ISL_ARG_ALL);
    ctx = isl_ctx_alloc_with_options(&union_options_args, options);

    check = options->check && !options->series;

    fgets(s, 128, stdin);
    while ((*s=='#') || (sscanf(s, "%d", &npol)<1))
	fgets(s, 128, stdin);

    for (i = 0; i < npol; ++i) {
	Polyhedron *P;
	M = Matrix_Read();
	P = Constraints2Polyhedron(M, options->barvinok->MaxRays);
	Matrix_Free(M);
	D = DomainConcat(P, D);
    }
    M = Matrix_Read();
    C = Constraints2Polyhedron(M, options->barvinok->MaxRays);
    Matrix_Free(M);
    if (!check) {
	Polyhedron_Print(stdout, P_VALUE_FMT, D);
	Polyhedron_Print(stdout, P_VALUE_FMT, C);
    }
    param_name = Read_ParamNames(stdin, C->Dimension);
    if (options->series) {
	gen_fun *gf;
	gf = barvinok_enumerate_union_series(D, C, options->barvinok->MaxRays);
	gf->print(std::cout, C->Dimension, param_name);
	puts("");
	delete gf;
    } else {
	evalue *EP;
	EP = barvinok_enumerate_union(D, C, options->barvinok->MaxRays);
	if (check) {
	    isl_pw_qpolynomial *pwqp;
	    pwqp = evalue2pwqp(ctx, EP, C->Dimension, param_name);
	    if (check_result(pwqp) < 0)
		r = EXIT_FAILURE;
	    isl_pw_qpolynomial_free(pwqp);
	} else {
	    print_evalue(stdout, EP, param_name);
	}
	evalue_free(EP);
    }
    Free_ParamNames(param_name, C->Dimension);
    Domain_Free(D);
    Polyhedron_Free(C);
    isl_ctx_free(ctx);
    return r;
}

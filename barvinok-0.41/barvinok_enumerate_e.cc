#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <barvinok/polylib.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>
#include "config.h"
#ifdef HAVE_OMEGA
#include "omega_interface/convert.h"
#include "omega_interface/count.h"
#endif
#include "skewed_genfun.h"
#include "verify.h"
#include "verif_ehrhart.h"
#include "verify_series.h"
#include "evalue_convert.h"
#include "barvinok_enumerate_e_options.h"

/* The input of this example program is a polytope in combined
 * data and parameter space followed by two lines indicating
 * the number of existential variables and parameters respectively.
 * The first lines starts with "E ", followed by a number.
 * The second lines starts with "P ", followed by a number.
 * These two lines are (optionally) followed by the names of the parameters.
 * The polytope is in PolyLib notation.
 */

#ifdef HAVE_OMEGA

Polyhedron *Omega_simplify(Polyhedron *P, 
			    unsigned exist, unsigned nparam, const char **parms,
			    unsigned MaxRays)
{
    varvector varv;
    varvector paramv;
    Relation r = Polyhedron2relation(P, exist, nparam, parms);
    Polyhedron_Free(P);
    return relation2Domain(r, varv, paramv, MaxRays);
}
#else
Polyhedron *Omega_simplify(Polyhedron *P, 
			    unsigned exist, unsigned nparam, const char **parms,
			    unsigned MaxRays)
{
    return P;
}

evalue *barvinok_enumerate_parker(Polyhedron *P,
					unsigned exist, unsigned nparam,
					unsigned MaxRays)
{
    assert(0);
    return NULL;
}
#endif

static void verify_results(Polyhedron *P, evalue *EP, gen_fun *gf,
			   int exist, int nparam,
			   enumerate_e_options *options);

static char *next_line(FILE *input, char *line, unsigned len)
{
	char *p;

	do {
		if (!(p = fgets(line, len, input)))
			return NULL;
		while (isspace(*p) && *p != '\n')
			++p;
	} while (*p == '#' || *p == '\n');

	return p;
}

int main(int argc, char **argv)
{
    Polyhedron *A;
    Matrix *MA;
    const char **param_name;
    int exist, nparam, nvar;
    char s[128];
    evalue *EP = NULL;
    gen_fun *gf = NULL;
    int print_solution = 1;
    struct enumerate_e_options *options = enumerate_e_options_new_with_defaults();

    argc = enumerate_e_options_parse(options, argc, argv, ISL_ARG_ALL);

    MA = Matrix_Read();
    A = Constraints2Polyhedron(MA, options->verify->barvinok->MaxRays);
    Matrix_Free(MA);

    exist = -1;
    while (next_line(stdin, s, sizeof(s)))
	if (sscanf(s, "E %d", &exist) == 1)
	    break;
    assert(exist >= 0);

    nparam = -1;
    while (next_line(stdin, s, sizeof(s)))
	if (sscanf(s, "P %d", &nparam) == 1)
	    break;
    assert(nparam >= 0);

    if (options->verify->verify) {
	verify_options_set_range(options->verify, A->Dimension);
	if (!options->verify->barvinok->verbose)
	    print_solution = 0;
    }

    if (print_solution && options->verify->barvinok->verbose) {
	Polyhedron_Print(stdout, P_VALUE_FMT, A);
	printf("exist: %d, nparam: %d\n", exist, nparam);
    }
    param_name = Read_ParamNames(stdin, nparam);
    nvar = A->Dimension - exist - nparam;
    if (options->omega) {
	A = Omega_simplify(A, exist, nparam, param_name,
				options->verify->barvinok->MaxRays);
	assert(!A->next);
	exist = A->Dimension - nvar - nparam;
    }
    if (options->series) {
	if (exist == 2 && options->scarf)
	    gf = barvinok_enumerate_scarf_series(A, exist, nparam,
						    options->verify->barvinok);
	else
	    gf = barvinok_enumerate_e_series(A, exist, nparam,
						    options->verify->barvinok);
	if (print_solution) {
	    gf->print(std::cout, nparam, param_name);
	    puts("");
	}
	if (options->function) {
	    EP = *gf;
	    if (print_solution)
		print_evalue(stdout, EP, param_name);
	}
    } else {
	if (options->parker)
	    EP = barvinok_enumerate_parker(A, A->Dimension-nparam-exist, nparam,
					    options->verify->barvinok->MaxRays);
	else if (exist == 2 && options->scarf)
	    EP = barvinok_enumerate_scarf(A, exist, nparam,
						options->verify->barvinok);
	else if (options->isl && exist > 0)
	    EP = barvinok_enumerate_isl(A, exist, nparam,
						options->verify->barvinok);
	else
	    EP = barvinok_enumerate_e_with_options(A, exist, nparam,
						options->verify->barvinok);
	reduce_evalue(EP);
	if (evalue_convert(EP, options->convert,
			options->verify->barvinok->verbose, nparam, param_name))
	    print_solution = 0;
	if (print_solution)
	    print_evalue(stdout, EP, param_name);
    }
    if (options->verify->verify) {
	options->verify->params = param_name;
	verify_results(A, EP, gf, exist, nparam, options);
    }
    if (gf)
	delete gf;
    if (EP)
	evalue_free(EP);

    if (options->verify->barvinok->print_stats)
	barvinok_stats_print(options->verify->barvinok->stats, stdout);

    Free_ParamNames(param_name, nparam);
    Polyhedron_Free(A);
    enumerate_e_options_free(options);
    return 0;
}

void verify_results(Polyhedron *P, evalue *EP, gen_fun *gf,
		       int exist, int nparam,
		       enumerate_e_options *options)
{
    int res = 0;
    Vector *p;
    Value tmp;
    Polyhedron *S, *CS;
    unsigned MaxRays = options->verify->barvinok->MaxRays;
    Polyhedron *C = NULL;
    value_init(tmp);

    p = Vector_Alloc(P->Dimension+2);
    value_set_si(p->p[P->Dimension+1], 1);

    CS = check_poly_context_scan(P, &C, nparam, options->verify);
    if (!C)
	C = Universe_Polyhedron(nparam);

    /* S = scanning list of polyhedra */
    S = Polyhedron_Scan(P, C, MaxRays & POL_NO_DUAL ? 0 : MaxRays);

    check_poly_init(C, options->verify);

    /******* CHECK NOW *********/
    if (S) {
	if (!options->series || options->function) {
	    if (!check_poly_EP(S, CS, EP, exist, nparam, 0, p->p,
				options->verify))
		res = -1;
	} else {
	    skewed_gen_fun *sgf = new skewed_gen_fun(new gen_fun(gf));
	    if (!check_poly_gf(S, CS, sgf, exist, nparam, 0, p->p,
				options->verify))
		res = -1;
	    delete sgf;
	}
    }
      
    if (!options->verify->print_all)
	printf( "\n" );
    
    Vector_Free(p);
    value_clear(tmp);
    Domain_Free(S);
    Polyhedron_Free(C);
    if (CS)
	Domain_Free(CS);
}

#include <assert.h>
#include <unistd.h>
#include <stdlib.h>
#include <gmp.h>
#include <isl/ctx.h>
#include <isl/val.h>
#include <isl/space.h>
#include <isl/point.h>
#include <isl/set.h>
#include <isl/polynomial.h>
#include <isl/printer.h>
#include <isl_set_polylib.h>
#include <barvinok/evalue.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>
#include "barvinok_enumerate_options.h"
#include "verify.h"
#include "verify_series.h"
#include "remove_equalities.h"
#include "evalue_convert.h"
#include "conversion.h"
#include "skewed_genfun.h"

#undef CS   /* for Solaris 10 */

using std::cout;
using std::endl;

/* The input of this example program is the same as that of testehrhart
 * in the PolyLib distribution, i.e., a polytope in combined
 * data and parameter space, a context polytope in parameter space
 * and (optionally) the names of the parameters.
 * Both polytopes are in PolyLib notation.
 */

struct verify_point_enum {
	struct verify_point_data vpd;
	isl_set *set;
	isl_pw_qpolynomial *pwqp;
};

static isl_stat verify_point(__isl_take isl_point *pnt, void *user)
{
	struct verify_point_enum *vpe = (struct verify_point_enum *) user;
	isl_set *set;
	int i;
	unsigned nparam;
	isl_val *v, *n, *t;
	int pa = vpe->vpd.options->barvinok->approx->approximation;
	int ok;
	FILE *out = vpe->vpd.options->print_all ? stdout : stderr;

	vpe->vpd.n--;

	set = isl_set_copy(vpe->set);
	nparam = isl_set_dim(set, isl_dim_param);
	for (i = 0; i < nparam; ++i) {
		v = isl_point_get_coordinate_val(pnt, isl_dim_param, i);
		set = isl_set_fix_val(set, isl_dim_param, i, v);
	}

	v = isl_set_count_val(set);

	n = isl_pw_qpolynomial_eval(isl_pw_qpolynomial_copy(vpe->pwqp),
					isl_point_copy(pnt));

	if (pa == BV_APPROX_SIGN_LOWER)
		n = isl_val_ceil(n);
	else if (pa == BV_APPROX_SIGN_UPPER)
		n = isl_val_floor(n);
	else
		n = isl_val_trunc(n);

	if (pa == BV_APPROX_SIGN_APPROX)
		/* just accept everything */
		ok = 1;
	else if (pa == BV_APPROX_SIGN_LOWER)
		ok = isl_val_le(n, v);
	else if (pa == BV_APPROX_SIGN_UPPER)
		ok = isl_val_ge(n, v);
	else
		ok = isl_val_eq(n, v);

	if (vpe->vpd.options->print_all || !ok) {
		isl_ctx *ctx = isl_point_get_ctx(pnt);
		isl_printer *p;
		p = isl_printer_to_file(ctx, out);
		p = isl_printer_print_str(p, "EP(");
		for (i = 0; i < nparam; ++i) {
			if (i)
				p = isl_printer_print_str(p, ", ");
			t = isl_point_get_coordinate_val(pnt, isl_dim_param, i);
			p = isl_printer_print_val(p, t);
			isl_val_free(t);
		}
		p = isl_printer_print_str(p, ") = ");
		p = isl_printer_print_val(p, n);
		p = isl_printer_print_str(p, ", count = ");
		p = isl_printer_print_val(p, v);
		if (ok)
			p = isl_printer_print_str(p, ". OK");
		else
			p = isl_printer_print_str(p, ". NOT OK");
		p = isl_printer_end_line(p);
		isl_printer_free(p);
	} else if ((vpe->vpd.n % vpe->vpd.s) == 0) {
		printf("o");
		fflush(stdout);
	}

	isl_set_free(set);
	isl_val_free(v);
	isl_val_free(n);
	isl_point_free(pnt);

	if (!ok)
		vpe->vpd.error = 1;

	if (vpe->vpd.options->continue_on_error)
		ok = 1;

	return (vpe->vpd.n >= 1 && ok) ? isl_stat_ok : isl_stat_error;
}

static int verify_isl(Polyhedron *P, Polyhedron *C,
		evalue *EP, const struct verify_options *options)
{
	struct verify_point_enum vpe = { { options } };
	int i;
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dim;
	isl_set *set;
	isl_set *set_C;
	int r;

	dim = isl_space_set_alloc(ctx, C->Dimension, P->Dimension - C->Dimension);
	for (i = 0; i < C->Dimension; ++i)
		dim = isl_space_set_dim_name(dim, isl_dim_param, i, options->params[i]);
	set = isl_set_new_from_polylib(P, isl_space_copy(dim));
	dim = isl_space_params(dim);
	set_C = isl_set_new_from_polylib(C, dim);
	set_C = isl_set_intersect_params(isl_set_copy(set), set_C);
	set_C = isl_set_params(set_C);

	set_C = verify_context_set_bounds(set_C, options);

	r = verify_point_data_init(&vpe.vpd, set_C);

	vpe.set = set;
	vpe.pwqp = isl_pw_qpolynomial_from_evalue(isl_set_get_space(set_C), EP);
	if (r == 0)
		isl_set_foreach_point(set_C, verify_point, &vpe);
	if (vpe.vpd.error)
		r = -1;

	isl_pw_qpolynomial_free(vpe.pwqp);
	isl_set_free(set);
	isl_set_free(set_C);

	isl_ctx_free(ctx);

	verify_point_data_fini(&vpe.vpd);

	return r;
}

static int verify(Polyhedron *P, Polyhedron *C, evalue *EP, skewed_gen_fun *gf,
		   struct enumerate_options *options)
{
    Polyhedron *CS, *S;
    Vector *p;
    int result = 0;

    if (!options->series || options->function)
	return verify_isl(P, C, EP, options->verify);

    CS = check_poly_context_scan(P, &C, C->Dimension, options->verify);

    p = Vector_Alloc(P->Dimension+2);
    value_set_si(p->p[P->Dimension+1], 1);

    /* S = scanning list of polyhedra */
    S = Polyhedron_Scan(P, C, options->verify->barvinok->MaxRays);

    check_poly_init(C, options->verify);

    /******* CHECK NOW *********/
    if (S) {
	if (!check_poly_gf(S, CS, gf, 0, C->Dimension, 0, p->p,
			    options->verify))
	    result = -1;
	Domain_Free(S);
    }

    if (result == -1)
	fprintf(stderr,"Check failed !\n");
    
    if (!options->verify->print_all)
	printf( "\n" );
  
    Vector_Free(p);
    if (CS) {
	Domain_Free(CS);
	Domain_Free(C);
    }

    return result;
}

/* frees M and Minv */
static void apply_transformation(Polyhedron **P, Polyhedron **C,
				 bool free_P, bool free_C,
				 Matrix *M, Matrix *Minv, Matrix **inv,
				 barvinok_options *options)
{
    Polyhedron *T;
    Matrix *M2;

    M2 = align_matrix(M, (*P)->Dimension + 1);
    T = *P;
    *P = Polyhedron_Preimage(*P, M2, options->MaxRays);
    if (free_P)
	Polyhedron_Free(T);
    Matrix_Free(M2);

    T = *C;
    *C = Polyhedron_Preimage(*C, M, options->MaxRays);
    if (free_C)
	Polyhedron_Free(T);

    Matrix_Free(M);

    if (*inv) {
	Matrix *T = *inv;
	*inv = Matrix_Alloc(Minv->NbRows, T->NbColumns);
	Matrix_Product(Minv, T, *inv);
	Matrix_Free(T);
	Matrix_Free(Minv);
    } else
	*inv = Minv;
}

/* Since we have "compressed" the parameters (in case there were
 * any equalities), the result is independent of the coordinates in the
 * coordinate subspace spanned by the lines.  We can therefore assume
 * these coordinates are zero and compute the inverse image of the map
 * from a lower dimensional space that adds zeros in the appropriate
 * places.
 */
static void remove_lines(Polyhedron *C, Matrix **M, Matrix **Minv)
{
    Matrix *L = Matrix_Alloc(C->Dimension+1, C->Dimension+1);
    for (int r = 0; r < C->NbBid; ++r)
	Vector_Copy(C->Ray[r]+1, L->p[r], C->Dimension);
    unimodular_complete(L, C->NbBid);
    assert(value_one_p(L->p[C->Dimension][C->Dimension]));
    assert(First_Non_Zero(L->p[C->Dimension], C->Dimension) == -1);
    Matrix_Transposition(L);
    assert(First_Non_Zero(L->p[C->Dimension], C->Dimension) == -1);

    *M = Matrix_Alloc(C->Dimension+1, C->Dimension-C->NbBid+1);
    for (int i = 0; i < C->Dimension+1; ++i)
	Vector_Copy(L->p[i]+C->NbBid, (*M)->p[i], C->Dimension-C->NbBid+1);

    Matrix *Linv = Matrix_Alloc(C->Dimension+1, C->Dimension+1);
    int ok = Matrix_Inverse(L, Linv);
    assert(ok);
    Matrix_Free(L);

    *Minv = Matrix_Alloc(C->Dimension-C->NbBid+1, C->Dimension+1);
    for (int i = C->NbBid; i < C->Dimension+1; ++i)
	Vector_AntiScale(Linv->p[i], (*Minv)->p[i-C->NbBid],
			 Linv->p[C->Dimension][C->Dimension], C->Dimension+1);
    Matrix_Free(Linv);
}

static skewed_gen_fun *series(Polyhedron *P, Polyhedron* C,
				barvinok_options *options)
{
    Polyhedron *C1, *C2;
    gen_fun *gf;
    Matrix *inv = NULL;
    Matrix *eq = NULL;
    Matrix *div = NULL;
    Polyhedron *PT = P;

    /* Compute true context */
    C1 = Polyhedron_Project(P, C->Dimension);
    C2 = DomainIntersection(C, C1, options->MaxRays);
    Polyhedron_Free(C1);

    POL_ENSURE_VERTICES(C2);
    if (C2->NbBid != 0) {
	Matrix *CP;
	if (C2->NbEq || P->NbEq) {
	    /* We remove all equalities to be sure all lines are unit vectors */
	    Polyhedron *CT = C2;
	    remove_all_equalities(&PT, &CT, &CP, NULL, C2->Dimension,
				  options->MaxRays);
	    if (CT != C2) {
		Polyhedron_Free(C2);
		C2 = CT;
	    }
	    if (CP) {
		inv = left_inverse(CP, &eq);
		Matrix_Free(CP);

		int d = 0;
		Value tmp;
		value_init(tmp);
		div = Matrix_Alloc(inv->NbRows-1, inv->NbColumns+1);
		for (int i = 0; i < inv->NbRows-1; ++i) {
		    Vector_Gcd(inv->p[i], inv->NbColumns, &tmp);
		    if (mpz_divisible_p(tmp,
					inv->p[inv->NbRows-1][inv->NbColumns-1]))
			continue;
		    Vector_Copy(inv->p[i], div->p[d], inv->NbColumns);
		    value_assign(div->p[d][inv->NbColumns],
				 inv->p[inv->NbRows-1][inv->NbColumns-1]);
		    ++d;
		}
		value_clear(tmp);

		if (!d) {
		    Matrix_Free(div);
		    div = NULL;
		} else
		    div->NbRows = d;
	    }
	}
	POL_ENSURE_VERTICES(C2);

	if (C2->NbBid) {
	    Matrix *M, *Minv;
	    remove_lines(C2, &M, &Minv);
	    apply_transformation(&PT, &C2, PT != P, C2 != C, M, Minv, &inv,
				 options);
	}
    }
    POL_ENSURE_VERTICES(C2);
    if (!Polyhedron_has_revlex_positive_rays(C2, C2->Dimension)) {
	Matrix *Constraints;
	Matrix *H, *Q, *U;
	Constraints = Matrix_Alloc(C2->NbConstraints, C2->Dimension+1);
	for (int i = 0; i < C2->NbConstraints; ++i)
	    Vector_Copy(C2->Constraint[i]+1, Constraints->p[i], C2->Dimension);
	left_hermite(Constraints, &H, &Q, &U);
	Matrix_Free(Constraints);
	/* flip rows of Q */
	for (int i = 0; i < C2->Dimension/2; ++i)
	    Vector_Exchange(Q->p[i], Q->p[C2->Dimension-1-i], C2->Dimension);
	Matrix_Free(H);
	Matrix_Free(U);
	Matrix *M = Matrix_Alloc(C2->Dimension+1, C2->Dimension+1);
	U = Matrix_Copy(Q);
	int ok = Matrix_Inverse(U, M);
	assert(ok);
	Matrix_Free(U);

	apply_transformation(&PT, &C2, PT != P, C2 != C, M, Q, &inv, options);
    }
    gf = barvinok_series_with_options(PT, C2, options);
    Polyhedron_Free(C2);
    if (PT != P)
	Polyhedron_Free(PT);
    return new skewed_gen_fun(gf, inv, eq, div);
}

int main(int argc, char **argv)
{
    Polyhedron *A, *C;
    Matrix *M;
    evalue *EP = NULL;
    skewed_gen_fun *gf = NULL;
    const char **param_name;
    int print_solution = 1;
    int result = 0;
    struct enumerate_options *options = enumerate_options_new_with_defaults();

    argc = enumerate_options_parse(options, argc, argv, ISL_ARG_ALL);

    M = Matrix_Read();
    assert(M);
    A = Constraints2Polyhedron(M, options->verify->barvinok->MaxRays);
    Matrix_Free(M);
    M = Matrix_Read();
    assert(M);
    C = Constraints2Polyhedron(M, options->verify->barvinok->MaxRays);
    Matrix_Free(M);
    assert(A->Dimension >= C->Dimension);
    param_name = Read_ParamNames(stdin, C->Dimension);

    if (options->verify->verify) {
	verify_options_set_range(options->verify, A->Dimension);
	if (!options->verify->barvinok->verbose)
	    print_solution = 0;
    }

    if (print_solution && options->verify->barvinok->verbose) {
	Polyhedron_Print(stdout, P_VALUE_FMT, A);
	Polyhedron_Print(stdout, P_VALUE_FMT, C);
    }

    if (options->series) {
	gf = series(A, C, options->verify->barvinok);
	if (print_solution) {
	    gf->print(cout, C->Dimension, param_name);
	    puts("");
	}
	if (options->function) {
	    EP = *gf;
	    if (print_solution)
		print_evalue(stdout, EP, param_name);
	}
    } else {
	EP = barvinok_enumerate_with_options(A, C, options->verify->barvinok);
	assert(EP);
	if (evalue_convert(EP, options->convert, options->verify->barvinok->verbose,
			   C->Dimension, param_name))
	    print_solution = 0;
	if (options->size)
	    printf("\nSize: %zd\n", evalue_size(EP));
	if (print_solution)
	    print_evalue(stdout, EP, param_name);
    }

    if (options->verify->verify) {
	options->verify->params = param_name;
	result = verify(A, C, EP, gf, options);
    }

    if (gf)
	delete gf;
    if (EP)
	evalue_free(EP);

    if (options->verify->barvinok->print_stats)
	barvinok_stats_print(options->verify->barvinok->stats, stdout);

    Free_ParamNames(param_name, C->Dimension);
    Polyhedron_Free(A);
    Polyhedron_Free(C);
    enumerate_options_free(options);
    return result;
}

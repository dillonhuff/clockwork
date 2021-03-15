#include <assert.h>
#include <stdlib.h>
#include <sstream>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/NTL_QQ.h>
#include <barvinok/polylib.h>
#include <barvinok/barvinok.h>
#include <barvinok/set.h>
#include <barvinok/options.h>
#include <barvinok/basis_reduction.h>
#include <barvinok/evalue.h>
#include <barvinok/util.h>
#include "conversion.h"
#include "evalue_read.h"
#include "dpoly.h"
#include "lattice_point.h"
#include "counter.h"
#include "bernoulli.h"
#include "hilbert.h"
#include "hull.h"
#include "ilp.h"
#include "laurent.h"
#include "matrix_read.h"
#include "remove_equalities.h"
#include "config.h"

using std::cout;
using std::cerr;
using std::endl;

template <typename T>
void set_from_string(T& v, const char *s)
{
    std::istringstream str(s);
    str >> v;
}

static Matrix *matrix_read_from_str(const char *s)
{
    std::istringstream str(s);
    return Matrix_Read(str);
}

static int test_equalities(struct barvinok_options *options)
{
    Matrix *M = matrix_read_from_str(
	"11 11\n"
	"   0   23    0    0  -10    0    0    0    7  -44   -8 \n"
	"   0    0   23    0    5    0    0    0  -15  114   27 \n"
	"   0    0    0    1    0    0    0    0    0   -1    2 \n"
	"   0    0    0    0    0    1    0    0   -1    8    0 \n"
	"   0    0    0    0    0    0    1    0    0   -1    2 \n"
	"   0    0    0    0    0    0    0    1    0   -1   -1 \n"
	"   1    0    0    0   10    0    0    0   -7   44    8 \n"
	"   1    0    0    0   -5    0    0    0   15 -114  -27 \n"
	"   1    0    0    0    1    0    0    0    0    0    0 \n"
	"   1    0    0    0    0    0    0    0    1   -8    0 \n"
	"   1    0    0    0    0    0    0    0    0    1   -2 \n");
    Polyhedron *P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    Polyhedron *Q = P;
    remove_all_equalities(&P, NULL, NULL, NULL, 2, options->MaxRays);
    assert(P->NbEq == 0);
    if (P != Q)
	Polyhedron_Free(Q);
    Polyhedron_Free(P);
    return 0;
}

int test_evalue_read(struct barvinok_options *options)
{
    unsigned nvar, nparam;
    const char **all_vars;
    evalue *e1, *e2;

    e1 = evalue_read_from_str("(1 * aa + 2 * a)",
			    NULL, &all_vars, &nvar, &nparam, options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    e2 = evalue_read_from_str("(3 * aa)",
			    NULL, &all_vars, &nvar, &nparam, options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    assert(!eequal(e1, e2));
    evalue_free(e1);
    evalue_free(e2);
    return 0;
}

static void evalue_check_disjoint(evalue *e)
{
    int i, j;

    if (!e)
	return;
    if (EVALUE_IS_ZERO(*e))
	return;
    for (i = 0; i < e->x.p->size/2; ++i) {
	Polyhedron *A = EVALUE_DOMAIN(e->x.p->arr[2*i]);
	for (j = i+1; j < e->x.p->size/2; ++j) {
	    Polyhedron *B = EVALUE_DOMAIN(e->x.p->arr[2*j]);
	    Polyhedron *I = DomainIntersection(A, B, 0);
	    assert(emptyQ(I));
	    Polyhedron_Free(I);
	}
    }
}

static int test_eadd(struct barvinok_options *options)
{
    unsigned nvar, nparam;
    const char **all_vars;
    evalue *e1, *e2;

    e1 = evalue_read_from_str("         d  -1 = 0\n"
			      "         h  -3 >= 0\n"
			      "         - h + 100 >= 0\n"
		      	      "\n"
			      "(1)\n",
			      "d,h", &all_vars, &nvar, &nparam,
			      options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    e2 = evalue_read_from_str(
				"         h  -3 = 0\n"
				"         d  -1 >= 0\n"
				"         - d + 3 >= 0\n"
				"\n"
				"(0)\n"
				"         d  -1 >= 0\n"
				"         - d + 3 >= 0\n"
				"         h  -4 >= 0\n"
				"         - h + 100 >= 0\n"
				"\n"
				"(1)\n",
			      	"d,h", &all_vars, &nvar, &nparam,
			      	options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    eadd(e2, e1);
    evalue_check_disjoint(e1);
    evalue_free(e1);
    evalue_free(e2);
    return 0;
}

int test_evalue(struct barvinok_options *options)
{
    unsigned nvar, nparam;
    const char **all_vars;
    evalue *poly1, poly2;

    poly1 = evalue_read_from_str("(1/4 * n^4 + 1/2 * n^3 + 1/4 * n^2)",
				 NULL, &all_vars, &nvar, &nparam,
				 options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    value_init(poly2.d);
    evalue_copy(&poly2, poly1);
    evalue_negate(poly1);
    eadd(&poly2, poly1);
    reduce_evalue(poly1);
    assert(EVALUE_IS_ZERO(*poly1));
    evalue_free(poly1);
    free_evalue_refs(&poly2);
    return 0;
}

int test_substitute(struct barvinok_options *options)
{
    unsigned nvar, nparam;
    const char **all_vars;
    const char *vars = "a,b";
    evalue *e1, *e2;
    evalue *subs[2];

    e1 = evalue_read_from_str("[ { 1/3 * a } = 0 ] * \n"
			      "	    ([ { 1/5 * b + 2/5 } = 0 ] * 5) + \n"
			      "[ { 1/3 * a } != 0 ] * 42",
			      vars, &all_vars, &nvar, &nparam,
			      options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    subs[0] = evalue_read_from_str("(2 * b + 5)",
				   vars, &all_vars, &nvar, &nparam,
				   options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    subs[1] = evalue_read_from_str("(a + 1)",
				   vars, &all_vars, &nvar, &nparam,
				   options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    evalue_substitute(e1, subs);
    evalue_free(subs[0]);
    evalue_free(subs[1]);
    reduce_evalue(e1);

    e2 = evalue_read_from_str("[ { 2/3 * b + 2/3 } = 0 ] * \n"
			      "	    ([ { 1/5 * a + 3/5 } = 0 ] * 5) + \n"
			      "[ { 2/3 * b + 2/3 } != 0 ] * 42",
			      vars, &all_vars, &nvar, &nparam,
			      options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    reduce_evalue(e2);

    assert(eequal(e1, e2));

    evalue_free(e1);
    evalue_free(e2);
    return 0;
}

int test_specialization(struct barvinok_options *options)
{
    Value v;
    value_init(v);
    mpq_t count;
    mpq_init(count);

    value_set_si(v, 5);
    dpoly n(2, v);
    assert(value_cmp_si(n.coeff->p[0], 1) == 0);
    assert(value_cmp_si(n.coeff->p[1], 5) == 0);
    assert(value_cmp_si(n.coeff->p[2], 10) == 0);

    value_set_si(v, 1);
    dpoly d(2, v, 1);
    value_set_si(v, 2);
    dpoly d2(2, v, 1);
    d *= d2;
    assert(value_cmp_si(d.coeff->p[0], 2) == 0);
    assert(value_cmp_si(d.coeff->p[1], 1) == 0);
    assert(value_cmp_si(d.coeff->p[2], 0) == 0);

    n.div(d, count, 1);
    mpq_canonicalize(count);
    assert(value_cmp_si(mpq_numref(count), 31) == 0);
    assert(value_cmp_si(mpq_denref(count), 8) == 0);

    value_set_si(v, -2);
    dpoly n2(2, v);
    assert(value_cmp_si(n2.coeff->p[0], 1) == 0);
    assert(value_cmp_si(n2.coeff->p[1], -2) == 0);
    assert(value_cmp_si(n2.coeff->p[2], 3) == 0);

    n2.div(d, count, 1);
    mpq_canonicalize(count);
    assert(value_cmp_si(mpq_numref(count), 6) == 0);
    assert(value_cmp_si(mpq_denref(count), 1) == 0);

    value_clear(v);
    mpq_clear(count);
    return 0;
}

int test_lattice_points(struct barvinok_options *options)
{
    Param_Vertices V;
    mat_ZZ tmp;
    set_from_string(tmp, "[[0 0 0 0 4][0 0 0 0 4][-1 0 1 0 4]]");
    V.Vertex = zz2matrix(tmp);
    vec_ZZ lambda;
    set_from_string(lambda, "[3 5 7]");
    mat_ZZ rays;
    set_from_string(rays, "[[0 1 0][4 0 1][0 0 -1]]");
    term_info num;
    evalue *point[4];

    unsigned nvar, nparam;
    const char **all_vars;
    point[0] = evalue_read_from_str("( -7/4 * a + ( 7/4 * c + "
		    "( 7 * {( 1/4 * a + ( 3/4 * c + 3/4 ) ) } + -21/4 ) ) )",
		    "a,b,c", &all_vars, &nvar, &nparam, options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    point[1] = evalue_read_from_str("( -7/4 * a + ( 7/4 * c + "
		    "( 7 * {( 1/4 * a + ( 3/4 * c + 1/2 ) ) } + -1/2 ) ) )",
		    "a,b,c", &all_vars, &nvar, &nparam, options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    point[2] = evalue_read_from_str("( -7/4 * a + ( 7/4 * c + "
		    "( 7 * {( 1/4 * a + ( 3/4 * c + 1/4 ) ) } + 17/4 ) ) )",
		    "a,b,c", &all_vars, &nvar, &nparam, options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    point[3] = evalue_read_from_str("( -7/4 * a + ( 7/4 * c + "
		    "( 7 * {( 1/4 * a + ( 3/4 * c + 0 ) ) } + 9 ) ) )",
		    "a,b,c", &all_vars, &nvar, &nparam, options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    lattice_point(&V, rays, lambda, &num, 4, options);
    Matrix_Free(V.Vertex);

    for (int i = 0; i < 4; ++i) {
	assert(eequal(num.E[i], point[i]));
	evalue_free(point[i]);
	evalue_free(num.E[i]);
    }
    delete [] num.E; 
    return 0;
}

static int test_icounter(struct barvinok_options *options)
{
    icounter cnt(2);
    vec_QQ n_coeff;
    mat_ZZ n_power;
    mat_ZZ d_power;
    set_from_string(n_coeff, "[-2/1 1/1]");
    set_from_string(n_power, "[[2 6][3 6]]");
    d_power.SetDims(0, 2);
    cnt.reduce(n_coeff, n_power, d_power);
    assert(value_cmp_si(mpq_numref(cnt.count), -1) == 0);
    assert(value_cmp_si(mpq_denref(cnt.count), 1) == 0);
    return 0;
}

static int test_infinite_counter(struct barvinok_options *options)
{
    Matrix *M = matrix_read_from_str("1 3\n	1 1 0\n");
    Polyhedron *ctx = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    /* (1 -1/2 x^5 - 1/2 x^7)/(1-x) */
    infinite_counter *cnt = new infinite_counter(1, 1);
    cnt->init(ctx, 0);
    vec_QQ n_coeff;
    mat_ZZ n_power;
    mat_ZZ d_power;
    set_from_string(n_coeff, "[1/1 -1/2 -1/2]");
    set_from_string(n_power, "[[0][5][7]]");
    set_from_string(d_power, "[[1]]");
    cnt->reduce(n_coeff, n_power, d_power);
    assert(value_cmp_si(mpq_numref(cnt->count[0]), 6) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[0]), 1) == 0);
    assert(value_cmp_si(mpq_numref(cnt->count[1]), 0) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[1]), 1) == 0);
    delete cnt;
    Polyhedron_Free(ctx);

    M = matrix_read_from_str("2 4\n	1 1 0 0\n   1 0 1 0\n");
    ctx = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    /* (1 - xy)/((1-x)(1-xy)) */
    cnt = new infinite_counter(2, 3);
    cnt->init(ctx, 0);
    set_from_string(n_coeff, "[1/1 -1/1]");
    set_from_string(n_power, "[[0 0][1 1]]");
    set_from_string(d_power, "[[1 0][1 1]]");
    cnt->reduce(n_coeff, n_power, d_power);
    assert(value_cmp_si(mpq_numref(cnt->count[1]), 0) != 0);
    assert(value_cmp_si(mpq_numref(cnt->count[2]), 0) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[2]), 1) == 0);
    assert(value_cmp_si(mpq_numref(cnt->count[3]), 0) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[3]), 1) == 0);
    delete cnt;

    cnt = new infinite_counter(2, 2);
    cnt->init(ctx, 0);
    set_from_string(n_coeff, "[-1/2 1/1 -1/3]");
    set_from_string(n_power, "[[2 6][3 6]]");
    d_power.SetDims(0, 2);
    cnt->reduce(n_coeff, n_power, d_power);
    assert(value_cmp_si(mpq_numref(cnt->count[0]), 1) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[0]), 6) == 0);
    assert(value_cmp_si(mpq_numref(cnt->count[1]), 0) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[1]), 1) == 0);
    assert(value_cmp_si(mpq_numref(cnt->count[2]), 0) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[2]), 1) == 0);
    delete cnt;

    cnt = new infinite_counter(2, 2);
    cnt->init(ctx, 0);
    set_from_string(n_coeff, "[1/1]");
    set_from_string(n_power, "[[0 11]]");
    set_from_string(d_power, "[[0 1]]");
    cnt->reduce(n_coeff, n_power, d_power);
    assert(value_cmp_si(mpq_numref(cnt->count[1]), 0) != 0);
    assert(value_cmp_si(mpq_numref(cnt->count[2]), 0) == 0);
    assert(value_cmp_si(mpq_denref(cnt->count[2]), 1) == 0);
    delete cnt;

    Polyhedron_Free(ctx);

    return 0;
}

static int test_series(struct barvinok_options *options)
{
    Matrix *M;
    Polyhedron *P, *C;
    gen_fun *gf;

    M = matrix_read_from_str(
	"2 3\n"
	"1  1  0\n"
	"1 -1 10\n");
    P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    C = Universe_Polyhedron(1);
    gf = barvinok_series_with_options(P, C, options);
    Polyhedron_Free(P);
    Polyhedron_Free(C);
    gen_fun *sum = gf->summate(1, options);
    delete gf;
    delete sum;

    return 0;
}

int test_todd(struct barvinok_options *options)
{
    tcounter t(2, options->max_index);
    assert(value_cmp_si(t.todd.coeff->p[0], 1) == 0);
    assert(value_cmp_si(t.todd.coeff->p[1], -3) == 0);
    assert(value_cmp_si(t.todd.coeff->p[2], 3) == 0);
    assert(value_cmp_si(t.todd_denom->p[0], 1) == 0);
    assert(value_cmp_si(t.todd_denom->p[1], 6) == 0);
    assert(value_cmp_si(t.todd_denom->p[2], 36) == 0);

    vec_ZZ lambda;
    set_from_string(lambda, "[1 -1]");
    zz2values(lambda, t.lambda->p);

    mat_ZZ rays;
    set_from_string(rays, "[[-1 0][-1 1]]");

    QQ one(1, 1);

    vec_ZZ v;
    set_from_string(v, "[2 0 1]");
    Vector *vertex = Vector_Alloc(3);
    zz2values(v, vertex->p);

    t.handle(rays, vertex->p, one, 1, options);
    assert(value_cmp_si(mpq_numref(t.count), 71) == 0);
    assert(value_cmp_si(mpq_denref(t.count), 24) == 0);

    set_from_string(rays, "[[0 -1][1 -1]]");
    set_from_string(v, "[0 2 1]");
    zz2values(v, vertex->p);

    t.handle(rays, vertex->p, one, 1, options);
    assert(value_cmp_si(mpq_numref(t.count), 71) == 0);
    assert(value_cmp_si(mpq_denref(t.count), 12) == 0);

    set_from_string(rays, "[[1 0][0 1]]");
    set_from_string(v, "[0 0 1]");
    zz2values(v, vertex->p);

    t.handle(rays, vertex->p, one, 1, options);
    assert(value_cmp_si(mpq_numref(t.count), 6) == 0);
    assert(value_cmp_si(mpq_denref(t.count), 1) == 0);

    Vector_Free(vertex);
    return 0;
}

int test_bernoulli(struct barvinok_options *options)
{
    struct bernoulli_coef *bernoulli_coef;
    struct poly_list *faulhaber, *bernoulli;
    bernoulli_coef = bernoulli_coef_compute(2);
    faulhaber = faulhaber_compute(4);
    bernoulli_coef = bernoulli_coef_compute(8);
    assert(value_cmp_si(bernoulli_coef->num->p[6], 1) == 0);
    assert(value_cmp_si(bernoulli_coef->den->p[6], 42) == 0);
    assert(value_cmp_si(faulhaber->poly[3]->p[0], 0) == 0);
    assert(value_cmp_si(faulhaber->poly[3]->p[1], 0) == 0);
    assert(value_cmp_si(faulhaber->poly[3]->p[2], 1) == 0);
    assert(value_cmp_si(faulhaber->poly[3]->p[3], -2) == 0);
    assert(value_cmp_si(faulhaber->poly[3]->p[4], 1) == 0);
    assert(value_cmp_si(faulhaber->poly[3]->p[5], 4) == 0);

    bernoulli = bernoulli_compute(6);
    assert(value_cmp_si(bernoulli->poly[6]->p[0], 1) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[1], 0) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[2], -21) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[3], 0) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[4], 105) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[5], -126) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[6], 42) == 0);
    assert(value_cmp_si(bernoulli->poly[6]->p[7], 42) == 0);

    unsigned nvar, nparam;
    const char **all_vars;
    evalue *base, *sum1, *sum2;
    base = evalue_read_from_str("(1 * n + 1)", NULL, &all_vars, &nvar, &nparam,
				options->MaxRays);

    sum1 = evalue_polynomial(faulhaber->poly[3], base);
    Free_ParamNames(all_vars, nvar+nparam);

    sum2 = evalue_read_from_str("(1/4 * n^4 + 1/2 * n^3 + 1/4 * n^2)",
				NULL, &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    assert(eequal(sum1, sum2));
    evalue_free(base);
    evalue_free(sum1);
    evalue_free(sum2);
    return 0;
}

int test_bernoulli_sum(struct barvinok_options *options)
{
    int summation = options->summation;
    options->summation = BV_SUM_BERNOULLI;

    unsigned nvar, nparam;
    const char **all_vars;
    evalue *e, *sum1, *sum2;
    e = evalue_read_from_str("i + -1 >= 0\n -i + n >= 0\n\n 1 + (-1 *i) + i^2",
			     "i", &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    sum1 = barvinok_summate(e, 1, options);
    sum2 = evalue_read_from_str("n -1 >= 0\n\n (1/3 * n^3 + 2/3 * n)",
				NULL, &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    evalue_negate(sum1);
    eadd(sum2, sum1);
    reduce_evalue(sum1);
    assert(EVALUE_IS_ZERO(*sum1));
    evalue_free(e);
    evalue_free(sum1);

    e = evalue_read_from_str("-i + -1 >= 0\n i + n >= 0\n\n 1 + i + i^2",
			     "i", &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    sum1 = barvinok_summate(e, 1, options);
    evalue_negate(sum1);
    eadd(sum2, sum1);
    reduce_evalue(sum1);
    assert(EVALUE_IS_ZERO(*sum1));
    evalue_free(e);
    evalue_free(sum1);

    evalue_free(sum2);

    e = evalue_read_from_str("i + 4 >= 0\n -i + n >= 0\n\n i",
			     "i", &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    sum1 = barvinok_summate(e, 1, options);
    sum2 = evalue_read_from_str("n + 0 >= 0\n\n (1/2 * n^2 + 1/2 * n + (-10))\n"
		    "n + 4 >= 0\n -n -1 >= 0\n\n (1/2 * n^2 + 1/2 * n + (-10))",
				NULL, &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    evalue_negate(sum1);
    eadd(sum2, sum1);
    reduce_evalue(sum1);
    assert(EVALUE_IS_ZERO(*sum1));
    evalue_free(e);
    evalue_free(sum1);
    evalue_free(sum2);

    e = evalue_read_from_str("i -5 >= 0\n -i + n >= 0\n j -1 >= 0\n i -j >= 0\n"
			     "k -1 >= 0\n j -k >= 0\n\n1",
			     "i,j,k", &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    sum1 = barvinok_summate(e, 3, options);
    sum2 = evalue_read_from_str("n -5 >= 0\n\n"
				"1/6 * n^3 + 1/2 * n^2 + 1/3 * n + -20",
				NULL, &all_vars, &nvar, &nparam,
				options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);
    evalue_negate(sum1);
    eadd(sum2, sum1);
    reduce_evalue(sum1);
    assert(EVALUE_IS_ZERO(*sum1));
    evalue_free(e);
    evalue_free(sum1);
    evalue_free(sum2);

    options->summation = summation;
    return 0;
}

int test_hilbert(struct barvinok_options *options)
{
#ifdef USE_ZSOLVE
    Matrix *M = matrix_read_from_str(
	"2 4\n"
	"   1    4   -3    0 \n"
	"   1    3    2    0 \n");
    Polyhedron *P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    M = Cone_Hilbert_Basis(P, options->MaxRays);
    assert(M->NbRows == 5);
    assert(M->NbColumns == 3);
    Matrix_Free(M);

    M = Cone_Integer_Hull(P, NULL, 0, options);
    assert(M->NbRows == 4);
    assert(M->NbColumns == 3);
    Matrix_Free(M);

    Polyhedron_Free(P);
#endif
    return 0;
}

int test_ilp(struct barvinok_options *options)
{
    Matrix *M = matrix_read_from_str(
	"2 4\n"
	"   1    4   -3    0 \n"
	"   1    3    2    0 \n");
    Polyhedron *P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    Vector *obj = Vector_Alloc(2);
    value_set_si(obj->p[0], 7);
    value_set_si(obj->p[1], -1);
    Value min, max;
    value_init(min);
    value_init(max);

    value_set_si(min, 1);
    value_set_si(max, 17);
    Vector *opt = Polyhedron_Integer_Minimum(P, obj->p, min, max,
					     NULL, 0, options);
    assert(opt);
    assert(value_cmp_si(opt->p[0], 1) == 0);
    assert(value_cmp_si(opt->p[1], 1) == 0);
    assert(value_cmp_si(opt->p[2], 1) == 0);
    Vector_Free(opt);

    value_clear(min);
    value_clear(max);
    Vector_Free(obj);
    Polyhedron_Free(P);
    return 0;
}

int test_hull(struct barvinok_options *options)
{
    Matrix *M = matrix_read_from_str(
	"4 4\n"
	"1  32  -20    7\n"
	"1   8  -44  187\n"
	"1 -48   -4  285\n"
	"1   8   68 -199\n");
    Polyhedron *P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    Matrix *hull = Polyhedron_Integer_Hull(P, options);
    Polyhedron_Free(P);
    assert(hull->NbRows == 4);
    M = Matrix_Alloc(hull->NbRows, 1+hull->NbColumns);
    for (int i = 0; i < hull->NbRows; ++i) {
	value_set_si(M->p[i][0], 1);
	Vector_Copy(hull->p[i], M->p[i]+1, hull->NbColumns);
    }
    Matrix_Free(hull);
    Polyhedron *H = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    M = matrix_read_from_str(
	"4 4\n"
	"1    2    3    1 \n"
	"1    3    4    1 \n"
	"1    5    3    1 \n"
	"1    5    5    1 \n");
    P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    assert(PolyhedronIncludes(P, H) && PolyhedronIncludes(H, P));
    Polyhedron_Free(P);
    Polyhedron_Free(H);

    M = matrix_read_from_str(
	"3 4\n"
	"1   2    6   -3 \n"
	"1   2   -6    3 \n"
	"1  -2    0    3 \n");
    P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    assert(!emptyQ(P));
    hull = Polyhedron_Integer_Hull(P, options);
    Polyhedron_Free(P);
    assert(hull->NbRows == 0);
    Matrix_Free(hull);
    return 0;
}

static int test_laurent(struct barvinok_options *options)
{
    unsigned nvar, nparam;
    const char **all_vars;
    evalue *e, *sum, *res;

    e = evalue_read_from_str("         x1 >= 0\n"
			     "         x2 >= 0\n"
			     "         -x1 -x2 + 2 >= 0\n"
			     "\n"
			     "(N + M * x2)\n",
			     "x1,x2", &all_vars, &nvar, &nparam,
			     options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    int summation = options->summation;
    options->summation = BV_SUM_LAURENT;
    sum = barvinok_summate(e, nvar, options);
    options->summation = summation;

    res = evalue_read_from_str("(6 * N + 4 * M)",
			       "", &all_vars, &nvar, &nparam,
			       options->MaxRays);
    Free_ParamNames(all_vars, nvar+nparam);

    assert(value_zero_p(sum->d));
    assert(sum->x.p->type == partition);
    assert(sum->x.p->size == 2);

    assert(eequal(res, &sum->x.p->arr[1]));

    evalue_free(e);
    evalue_free(sum);
    evalue_free(res);
    return 0;
}

/* Check that Polyhedron_Reduced_Basis produces a result
 * of the expected dimensions (without crashing).
 */
static int test_basis_reduction(struct barvinok_options *options)
{
    Matrix *M;
    Polyhedron *P;

    M = matrix_read_from_str(
	"4 4\n"
	"1    1    0    0 \n"
	"1    0    1    0 \n"
	"1   -1    0    1 \n"
	"1    0   -1    1 \n");
    P = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    M = Polyhedron_Reduced_Basis(P, options);

    assert(M);
    assert(M->NbRows == 2);
    assert(M->NbColumns == 2);

    Polyhedron_Free(P);
    Matrix_Free(M);

    return 0;
}

int main(int argc, char **argv)
{
    struct barvinok_options *options = barvinok_options_new_with_defaults();
    test_equalities(options);
    test_evalue_read(options);
    test_eadd(options);
    test_evalue(options);
    test_substitute(options);
    test_specialization(options);
    test_lattice_points(options);
    test_icounter(options);
    test_infinite_counter(options);
    test_series(options);
    test_todd(options);
    test_bernoulli(options);
    test_bernoulli_sum(options);
    test_hilbert(options);
    test_ilp(options);
    test_hull(options);
    test_laurent(options);
    test_basis_reduction(options);
    barvinok_options_free(options);

    return EXIT_SUCCESS;
}

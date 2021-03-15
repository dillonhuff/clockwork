#include <assert.h>
#include <unistd.h>
#include <sstream>
#include <isl/space.h>
#include <barvinok/util.h>
#include "conversion.h"
#include "evalue_convert.h"
#include "lattice_point.h"
#include "config.h"
#ifdef USE_FDSTREAM
#include "fdstream.h"
#endif

using std::cout;
using std::cerr;
using std::endl;

using std::string;

static int type_offset(enode *p)
{
   return p->type == fractional ? 1 : 
	  p->type == flooring ? 1 : 0;
}

static Lattice *extract_lattice(evalue *e, int nparam)
{
    int i;
    Lattice *L;
    Matrix *U;
    Vector *X;
    /* For some mysterious reason, SolveDiophantine expects an extra
     * [0 0 0 1] row in its input matrix.
     */
    Matrix *M = Matrix_Alloc(2, nparam+1+1);
    value_set_si(M->p[1][nparam+1], 1);
    evalue_extract_affine(e, M->p[0], M->p[0]+nparam+1, M->p[0]+nparam);
    /* ignore constant */
    value_set_si(M->p[0][nparam+1], 0);
    SolveDiophantine(M, &U, &X);
    Matrix_Free(M);
    Vector_Free(X);
    L = Matrix_Alloc(nparam+1, nparam+1);
    for (i = 0; i < nparam; ++i)
	Vector_Copy(U->p[i], L->p[i], nparam);
    value_set_si(L->p[nparam][nparam], 1);
    Matrix_Free(U);
    return L;
}

/* Returns a lattice such that the quasi-polynomial e can be represented
 * by a list of polynomials, one for each point in the fundamental
 * parallelepiped of the lattice.
 * If e is a polynomial, then this function returns NULL.
 */
static Lattice *extract_common_lattice(evalue *e, Lattice *L, int nparam)
{
    int i, offset;

    if (value_notzero_p(e->d))
	return L;

    assert(e->x.p->type != partition);

    if (e->x.p->type == fractional) {
	Lattice *L2 = extract_lattice(&e->x.p->arr[0], nparam);
	if (!L)
	    L = L2;
	else {
	    Lattice *L3 = LatticeIntersection(L, L2);
	    Matrix_Free(L);
	    Matrix_Free(L2);
	    L = L3;
	}
    }

    offset = type_offset(e->x.p);
    for (i = e->x.p->size-1; i >= offset; --i)
	L = extract_common_lattice(&e->x.p->arr[i], L, nparam);
    return L;
}

/* Construct an evalue dst from src corresponding to the coset represented
 * by coset, a vector of size number of parameters plus one.
 * The final value in this vector should be 1.
 */
static void evalue_coset(const evalue *src, const Vector *coset, evalue *dst)
{
    if (value_notzero_p(src->d)) {
	value_assign(dst->d, src->d);
	value_init(dst->x.n);
	value_assign(dst->x.n, src->x.n);
	return;
    }

    if (src->x.p->type == fractional) {
	evalue f;
	evalue t;
	Vector *c = Vector_Alloc(coset->Size);
	value_init(f.d);
	value_init(f.x.n);
	evalue_extract_affine(&src->x.p->arr[0], c->p, c->p+c->Size-1, &f.d);
	Inner_Product(coset->p, c->p, c->Size, &f.x.n);
	Vector_Free(c);
	mpz_fdiv_r(f.x.n, f.x.n, f.d);

	evalue_set_si(dst, 0, 1);
	for (int i = src->x.p->size-1; i >= 1; --i) {
	    emul(&f, dst);
	    value_init(t.d);
	    evalue_coset(&src->x.p->arr[i], coset, &t);
	    eadd(&t, dst);
	    free_evalue_refs(&t);
	}
	free_evalue_refs(&f);
	return;
    }

    if (src->x.p->type == relation) {
	evalue *arg = evalue_eval(&src->x.p->arr[0], coset->p);
	if (value_zero_p(arg->x.n))
	    evalue_coset(&src->x.p->arr[1], coset, dst);
	else if (src->x.p->size > 2)
	    evalue_coset(&src->x.p->arr[2], coset, dst);
	else
	    evalue_set_si(dst, 0, 1);
	evalue_free(arg);
	return;
    }

    assert(src->x.p->type == polynomial);
    value_set_si(dst->d, 0);
    dst->x.p = new_enode(src->x.p->type, src->x.p->size, src->x.p->pos);
    for (int i = 0; i < src->x.p->size; ++i)
	evalue_coset(&src->x.p->arr[i], coset, &dst->x.p->arr[i]);
}

#ifndef USE_FDSTREAM
static void evalue_print_list_evalue(FILE *out, evalue *e, int nparam,
				     const char **params)
{
	cerr << "not supported" << endl;
}
#else
static void evalue_print_list_evalue(FILE *out, evalue *e, int nparam,
				     const char **params)
{
    Lattice *L;
    L = extract_common_lattice(e, NULL, nparam);
    if (!L)
	print_evalue(out, e, params);
    else {
	fdostream os(dup(fileno(out)));
	Vector *coset = Vector_Alloc(nparam+1);
	value_set_si(coset->p[nparam], 1);
	mat_ZZ R;
	Matrix_Transposition(L);
	matrix2zz(L, R, nparam, nparam);
	fprintf(out, "Lattice:\n");
	os << R << endl;
	unsigned long det = to_ulong(abs(determinant(R)));
	mat_ZZ vertices;
	Matrix *points = Matrix_Alloc(det, nparam);
	lattice_points_fixed(coset->p, coset->p, L, L, points, det);
	matrix2zz(points, vertices, points->NbRows, points->NbColumns);
	Matrix_Free(points);
	Matrix_Free(L);
	for (int i = 0; i < vertices.NumRows(); ++i) {
	    evalue t;
	    os << vertices[i] << endl;
	    zz2values(vertices[i], coset->p);
	    value_init(t.d);
	    evalue_coset(e, coset, &t);
	    print_evalue(out, &t, params);
	    free_evalue_refs(&t);
	}
	Vector_Free(coset);
    }
}
#endif

static void evalue_print_list(FILE *out, evalue *e, int nparam,
				const char **params)
{
    int i;
    assert(value_zero_p(e->d));
    assert(e->x.p->type == partition);

    for (i = 0; i < e->x.p->size/2; i++) {
	Print_Domain(out, EVALUE_DOMAIN(e->x.p->arr[2*i]), params);
	evalue_print_list_evalue(out, &e->x.p->arr[2*i+1], nparam, params);
    }
}

static void print_domain_latex(std::ostream& o, Polyhedron *D, int nparam,
			       const char **params)
{
    int fr = 1;
    for (int i = 0; i < D->NbConstraints; ++i) {
	if (First_Non_Zero(D->Constraint[i]+1, D->Dimension) == -1)
	    continue;
	int fc = 1;
	if (!fr)
	    o << " \\wedge\n";
	for (int j = 0; j < D->Dimension; ++j) {
	    if (value_zero_p(D->Constraint[i][1+j]))
		continue;
	    o << " ";
	    if (!fc && value_pos_p(D->Constraint[i][1+j]))
		o << "+";
	    if (value_mone_p(D->Constraint[i][1+j]))
		o << "-";
	    else if (!value_one_p(D->Constraint[i][1+j]))
		o << VALUE_TO_INT(D->Constraint[i][1+j]);
	    o << " " << params[j];
	    fc = 0;
	}
	if (!fc && value_pos_p(D->Constraint[i][1+D->Dimension]))
	    o << "+";
	if (value_notzero_p(D->Constraint[i][1+D->Dimension]))
	    o << VALUE_TO_INT(D->Constraint[i][1+D->Dimension]);
	if (value_zero_p(D->Constraint[i][0]))
	    o << " = 0";
	else
	    o << " \\ge 0";
	fr = 0;
    }
}

static void evalue_print_latex(std::ostream& o, const evalue *e,
			       int first, int nested,
			       const string& suffix1, const string& suffix2,
			       int nparam, const char **params);

static void evalue_print_poly_latex1(std::ostream& o, const evalue *e,
				     int first, int nested, const string& base,
				     const string& suffix1, const string& suffix2,
				     int nparam, const char **params)
{
    int offset = type_offset(e->x.p);
    for (int i = e->x.p->size-1; i >= offset; --i) {
	std::ostringstream strm;
	strm << suffix1;
	if (i-offset)
	    strm << " " << base;
	if (i-offset > 1)
	    strm << "^" << (i-offset);
	evalue_print_latex(o, &e->x.p->arr[i], first, nested,
			   strm.str(), suffix2, nparam, params);
	first = 0;
    }
}

static void evalue_print_poly_latex2(std::ostream& o, const evalue *e,
				     int first, int nested, const string& base,
				     const string& suffix1, const string& suffix2,
				     int nparam, const char **params)
{
    int offset = type_offset(e->x.p);
    for (int i = e->x.p->size-1; i >= offset; --i) {
	std::ostringstream strm;
	strm << suffix2;
	if (i-offset)
	    strm << " " << base;
	if (i-offset > 1)
	    strm << "^" << (i-offset);
	evalue_print_latex(o, &e->x.p->arr[i], first, nested,
			   suffix1, strm.str(), nparam, params);
	first = 0;
    }
}

static void evalue_print_latex(std::ostream& o, const evalue *e,
			       int first, int nested,
			       const string& suffix1, const string &suffix2,
			       int nparam, const char **params)
{
    if (value_notzero_p(e->d)) {
	if (value_zero_p(e->x.n)) {
	    if (first)
		o << "0";
	    return;
	}
	Value tmp;
	value_init(tmp);
	value_absolute(tmp, e->x.n);
	if (!first && value_pos_p(e->x.n))
	    o << " + ";
	if (value_neg_p(e->x.n))
	    o << " - ";
	if (value_one_p(e->d)) {
	    if (!value_one_p(tmp) ||
		    (suffix1.length() == 0 && suffix2.length() == 0))
		o << VALUE_TO_INT(tmp);
	} else {
	    o << "\\frac{";
	    if (value_one_p(tmp) && suffix1.length() != 0)
		o << suffix1;
	    else
		o << VALUE_TO_INT(tmp);
	    o << "}{"
	      << VALUE_TO_INT(e->d) << "}";
	}
	if (!value_one_p(tmp)) {
	    o << suffix1;
	    o << " ";
	}
	value_clear(tmp);
	o << suffix2;
	if (!nested)
	    o << endl;
	return;
    }
    switch (e->x.p->type) {
    case partition:
	o << "\\begin{cases}\n";
	for (int i = 0; i < e->x.p->size/2; ++i) {
	    if (i)
		o << "\\\\\n";
	    evalue_print_latex(o, &e->x.p->arr[2*i+1], 1, 0,
				suffix1, suffix2, nparam, params);
	    o << "& \\text{if $";
	    print_domain_latex(o, EVALUE_DOMAIN(e->x.p->arr[2*i]), nparam, params);
	    o << "$}\n";
	}
	o << "\\end{cases}\n";
	break;
    case polynomial:
	evalue_print_poly_latex1(o, e, first, nested, params[e->x.p->pos-1],
				suffix1, suffix2, nparam, params);
	break;
    case fractional: {
	std::ostringstream strm;
	strm << "\\fractional{";
	evalue_print_latex(strm, &e->x.p->arr[0], 1, 1, "", "", nparam, params);
	strm << "}";
	evalue_print_poly_latex2(o, e, first, nested,
				strm.str(), suffix1, suffix2, nparam, params);
	break;
    }
    default:
	assert(0);
    }
}

#ifndef USE_FDSTREAM
static void evalue_print_latex(FILE *out, const evalue *e, int nparam,
			       const char **params)
{
	cerr << "not supported" << endl;
}
#else
static void evalue_print_latex(FILE *out, const evalue *e, int nparam,
			       const char **params)
{
    fdostream os(dup(fileno(out)));
    evalue_print_latex(os, e, 1, 0, "", "", nparam, params);
}
#endif

static void evalue_print_isl(FILE *out, const evalue *e, int nparam,
			       const char **params)
{
	int i;
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dim = isl_space_set_alloc(ctx, nparam, 0);
	isl_printer *p;
	isl_pw_qpolynomial *pwqp;

	for (i = 0; i < nparam; ++i)
		dim = isl_space_set_dim_name(dim, isl_dim_param, i, params[i]);

	pwqp = isl_pw_qpolynomial_from_evalue(dim, e);

	p = isl_printer_to_file(ctx, out);
	p = isl_printer_print_pw_qpolynomial(p, pwqp);
	p = isl_printer_end_line(p);
	isl_printer_free(p);

	isl_pw_qpolynomial_free(pwqp);

	isl_ctx_free(ctx);
}

int evalue_convert(evalue *EP, struct convert_options *options,
		   int verbose, unsigned nparam, const char **params)
{
    int printed = 0;
    if (options->combine)
	evalue_combine(EP);
    if (options->range)
	evalue_range_reduction(EP);
    if (verbose) {
	print_evalue(stdout, EP, params);
	printed = 1;
    }
    if (options->floor) {
	fprintf(stderr, "WARNING: floor conversion not supported\n");
	evalue_frac2floor(EP);
	if (params)
	    print_evalue(stdout, EP, params);
    } else if (options->list && params) {
	evalue_print_list(stdout, EP, nparam, params);
	printed = 1;
    } else if (options->latex && params) {
	evalue_print_latex(stdout, EP, nparam, params);
	printed = 1;
    } else if (options->isl && params) {
	evalue_print_isl(stdout, EP, nparam, params);
	printed = 1;
    } else if (options->convert) {
	evalue_mod2table(EP, nparam);
	if (verbose)
	    print_evalue(stdout, EP, params);
    }
    return printed;
}

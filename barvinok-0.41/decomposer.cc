#include <iostream>
#include <ostream>
#include <vector>
#include <assert.h>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <NTL/LLL.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "conversion.h"
#include "decomposer.h"
#include "param_util.h"
#include "reduce_domain.h"

using namespace NTL;
using std::vector;
using std::cerr;
using std::endl;

/*
 * Returns the largest absolute value in the vector
 */
static ZZ max(vec_ZZ& v)
{
    ZZ max = abs(v[0]);
    for (int i = 1; i < v.length(); ++i)
	if (abs(v[i]) > max)
	    max = abs(v[i]);
    return max;
}

/* Remove common divisor of elements of cols of B */
static void normalize_cols(mat_ZZ& B)
{
    ZZ gcd;
    for (int i = 0; i < B.NumCols(); ++i) {
	gcd = B[0][i];
	for (int j = 1 ; gcd != 1 && j < B.NumRows(); ++j)
	    GCD(gcd, gcd, B[j][i]);
	if (gcd != 1)
	    for (int j = 0; j < B.NumRows(); ++j)
		B[j][i] /= gcd;
    }
}

/* Remove common divisor of elements of B */
static void normalize_matrix(mat_ZZ& B)
{
    ZZ gcd;
    for (int i = 0; i < B.NumCols(); ++i)
	for (int j = 0 ; j < B.NumRows(); ++j) {
	    GCD(gcd, gcd, B[i][j]);
	    if (IsOne(gcd))
		return;
	}
    for (int i = 0; i < B.NumCols(); ++i)
	for (int j = 0; j < B.NumRows(); ++j)
	    B[i][j] /= gcd;
}

class cone {
public:
    cone(const mat_ZZ& r, int row, const vec_ZZ& w, int s) {
	sgn = s;
	rays = r;
	rays[row] = w;
	set_det();
    }
    cone(const signed_cone& sc) {
	rays = sc.rays;
	sgn = sc.sign;
	set_det();
    }
    void set_det() {
	det = determinant(rays);
	assert(!IsZero(det));
    }
    bool needs_split(barvinok_options *options) {
	index = abs(det);
	if (IsOne(index))
	    return false;
	if (options->primal && index <= options->max_index)
	    return false;

	inv(det, B, rays);
	normalize_matrix(B);
	if (sign(det) < 0)
	    negate(B, B);

	if (!options->primal && options->max_index > 1) {
	    mat_ZZ B2 = B;
	    normalize_cols(B2);
	    index = abs(determinant(B2));
	    if (index <= options->max_index)
		return false;
	}

	return true;
    }

    void short_vector(vec_ZZ& v, vec_ZZ& lambda, barvinok_options *options) {
	ZZ det2;
	mat_ZZ U;

	LLL(det2, B, U, options->LLL_a, options->LLL_b);

	ZZ min = max(B[0]);
	int index = 0;
	for (int i = 1; i < B.NumRows(); ++i) {
	    ZZ tmp = max(B[i]);
	    if (tmp < min) {
		min = tmp;
		index = i;
	    }
	}

	lambda = B[index];

	v = U[index];

	int i;
	for (i = 0; i < lambda.length(); ++i)
	    if (lambda[i] > 0)
		break;
	if (i == lambda.length()) {
	    v = -v;
	    lambda = -lambda;
	}
    }

    ZZ det;
    ZZ index;
    mat_ZZ rays;
    mat_ZZ B;
    int sgn;
};

std::ostream & operator<<(std::ostream & os, const cone& c)
{
    os << c.rays << endl;
    os << "det: " << c.det << endl;
    os << "sign: " << c.sgn << endl;
    return os;
}

static void decompose(const signed_cone& sc, signed_cone_consumer& scc,
		      bool primal, barvinok_options *options)
{
    vector<cone *> nonuni;
    cone *c = new cone(sc);
    if (c->needs_split(options)) {
	nonuni.push_back(c);
    } else {
	try {
	    options->stats->base_cones++;
	    scc.handle(signed_cone(sc.C, sc.rays, sc.sign, to_ulong(c->index)),
				   options);
	    delete c;
	} catch (...) {
	    delete c;
	    throw;
	}
	return;
    }
    vec_ZZ lambda;
    vec_ZZ v;
    while (!nonuni.empty()) {
	c = nonuni.back();
	nonuni.pop_back();
	c->short_vector(v, lambda, options);
	for (int i = 0; i < c->rays.NumRows(); ++i) {
	    if (lambda[i] == 0)
		continue;
	    cone *pc = new cone(c->rays, i, v, sign(lambda[i]) * c->sgn);
	    if (primal) {
		for (int j = 0; j <= i; ++j) {
		    if ((j == i && sign(lambda[i]) < 0) ||
			(j < i && sign(lambda[i]) == sign(lambda[j]))) {
			pc->rays[j] = -pc->rays[j];
			pc->sgn = -pc->sgn;
		    }
		}
	    }
	    if (pc->needs_split(options)) {
		assert(abs(pc->det) < abs(c->det));
		nonuni.push_back(pc);
	    } else {
		try {
		    options->stats->base_cones++;
		    scc.handle(signed_cone(pc->rays, pc->sgn,
					   to_ulong(pc->index)),
					   options);
		    delete pc;
		} catch (...) {
		    delete c;
		    delete pc;
		    while (!nonuni.empty()) {
			c = nonuni.back();
			nonuni.pop_back();
			delete c;
		    }
		    throw;
		}
	    }
	}
	delete c;
    }
}

struct polar_signed_cone_consumer : public signed_cone_consumer {
    signed_cone_consumer& scc;
    mat_ZZ r;
    polar_signed_cone_consumer(signed_cone_consumer& scc) : scc(scc) {}
    virtual void handle(const signed_cone& sc, barvinok_options *options) {
	Polyhedron *C = sc.C;
	if (!sc.C) {
	    Matrix *M = Matrix_Alloc(sc.rays.NumRows()+1, sc.rays.NumCols()+2);
	    for (int i = 0; i < sc.rays.NumRows(); ++i) {
		zz2values(sc.rays[i], M->p[i]+1);
		value_set_si(M->p[i][0], 1);
	    }
	    value_set_si(M->p[sc.rays.NumRows()][0], 1);
	    value_set_si(M->p[sc.rays.NumRows()][1+sc.rays.NumCols()], 1);
	    C = Rays2Polyhedron(M, M->NbRows+1);
	    assert(C->NbConstraints == C->NbRays);
	    Matrix_Free(M);
	}
	Polyhedron_Polarize(C);
	rays(C, r);
	try {
	    scc.handle(signed_cone(C, r, sc.sign, sc.det), options);
	} catch (...) {
	    if (!sc.C)
		Polyhedron_Free(C);
	    throw;
	}
	if (!sc.C)
	    Polyhedron_Free(C);
    }
};

/* Remove common divisor of elements of rows of B */
static void normalize_rows(mat_ZZ& B)
{
    ZZ gcd;
    for (int i = 0; i < B.NumRows(); ++i) {
	gcd = B[i][0];
	for (int j = 1 ; gcd != 1 && j < B.NumCols(); ++j)
	    GCD(gcd, gcd, B[i][j]);
	if (gcd != 1)
	    for (int j = 0; j < B.NumCols(); ++j)
		B[i][j] /= gcd;
    }
}

static void polar_decompose(Polyhedron *cone, signed_cone_consumer& scc,
			    barvinok_options *options)
{
    POL_ENSURE_VERTICES(cone);
    Polyhedron_Polarize(cone);
    if (cone->NbRays - 1 != cone->Dimension) {
	Polyhedron *tmp = cone;
	cone = triangulate_cone_with_options(cone, options);
	Polyhedron_Free(tmp);
    }
    polar_signed_cone_consumer pssc(scc);
    mat_ZZ r;
    try {
	for (Polyhedron *Polar = cone; Polar; Polar = Polar->next) {
	    rays(Polar, r);
	    normalize_rows(r);
	    decompose(signed_cone(Polar, r, 1), pssc, false, options);
	}
	Domain_Free(cone);
    } catch (...) {
	Domain_Free(cone);
	throw;
    }
}

static void primal_decompose(Polyhedron *cone, signed_cone_consumer& scc,
			     barvinok_options *options)
{
    POL_ENSURE_VERTICES(cone);
    Polyhedron *parts;
    if (cone->NbRays - 1 == cone->Dimension)
	parts = cone;
    else
	parts = triangulate_cone_with_options(cone, options);
    Vector *average = NULL;
    Value tmp;
    if (parts != cone) {
	value_init(tmp);
	average = inner_point(cone);
    }
    mat_ZZ ray;
    try {
	for (Polyhedron *simple = parts; simple; simple = simple->next) {
	    int sign = 1;
	    Matrix *Rays = rays2(simple);
	    for (int i = 0; i < Rays->NbRows; ++i) {
		if (simple == cone) {
		    continue;
		} else {
		    int f;
		    for (f = 0; f < simple->NbConstraints; ++f) {
			Inner_Product(Rays->p[i], simple->Constraint[f]+1,
				      simple->Dimension, &tmp);
			if (value_notzero_p(tmp))
			    break;
		    }
		    assert(f < simple->NbConstraints);
		    if (!is_internal(average, simple->Constraint[f])) {
			Vector_Oppose(Rays->p[i], Rays->p[i], Rays->NbColumns);
			sign = -sign;
		    }
		}
	    }
	    matrix2zz(Rays, ray, Rays->NbRows, Rays->NbColumns);
	    Matrix_Free(Rays);
	    decompose(signed_cone(simple, ray, sign), scc, true, options);
	}
	Domain_Free(parts);
	if (parts != cone) {
	    Domain_Free(cone);
	    value_clear(tmp);
	    Vector_Free(average);
	}
    } catch (...) {
	Domain_Free(parts);
	if (parts != cone) {
	    Domain_Free(cone);
	    value_clear(tmp);
	    Vector_Free(average);
	}
	throw;
    }
}

void barvinok_decompose(Polyhedron *C, signed_cone_consumer& scc,
			barvinok_options *options)
{
    POL_ENSURE_VERTICES(C);
    if (options->primal)
	primal_decompose(C, scc, options);
    else
	polar_decompose(C, scc, options);
}

void vertex_decomposer::decompose_at_vertex(Param_Vertices *V, int _i, 
					    barvinok_options *options)
{
    Polyhedron *C = Param_Vertex_Cone(PP, V, options);
    vert = _i;
    this->V = V;

    barvinok_decompose(C, scc, options);
}

struct posneg_collector : public signed_cone_consumer {
    posneg_collector(Polyhedron *pos, Polyhedron *neg) : pos(pos), neg(neg) {}
    virtual void handle(const signed_cone& sc, barvinok_options *options) {
	Polyhedron *p = Polyhedron_Copy(sc.C);
	if (sc.sign > 0) {
	    p->next = pos;
	    pos = p;
	} else {
	    p->next = neg;
	    neg = p;
	}
    }
    Polyhedron *pos;
    Polyhedron *neg;
};

/*
 * Barvinok's Decomposition of a simplicial cone
 *
 * Returns two lists of polyhedra
 */
void barvinok_decompose(Polyhedron *C, Polyhedron **ppos, Polyhedron **pneg)
{
    barvinok_options *options = barvinok_options_new_with_defaults();
    posneg_collector pc(*ppos, *pneg);
    POL_ENSURE_VERTICES(C);
    mat_ZZ r;
    rays(C, r);
    decompose(signed_cone(C, r, 1), pc, false, options);
    *ppos = pc.pos;
    *pneg = pc.neg;
    barvinok_options_free(options);
}


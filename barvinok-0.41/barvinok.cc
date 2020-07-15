#include <assert.h>
#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <gmp.h>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <isl/val.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl/map.h>
#include <isl/union_set.h>
#include <isl/union_map.h>
#include <isl/polynomial.h>
#include <isl_set_polylib.h>
#include <barvinok/polylib.h>
#include <barvinok/util.h>
#include <barvinok/evalue.h>
#include "config.h"
#include <barvinok/barvinok.h>
#include <barvinok/genfun.h>
#include <barvinok/options.h>
#include <barvinok/sample.h>
#include "bfcounter.h"
#include "conversion.h"
#include "counter.h"
#include "decomposer.h"
#include "euler.h"
#include "lattice_point.h"
#include "laurent.h"
#include "reduce_domain.h"
#include "remove_equalities.h"
#include "scale.h"
#include "volume.h"
#include "bernoulli.h"
#include "param_util.h"
#include "summate.h"

using namespace NTL;
using std::cerr;
using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::string;
using std::ostringstream;

#define ALLOC(t,p) p = (t*)malloc(sizeof(*p))

class dpoly_n {
public:
    Matrix *coeff;
    ~dpoly_n() {
	Matrix_Free(coeff);
    }
    dpoly_n(int d) {
	Value d0, one;
	value_init(d0);
	value_init(one);
	value_set_si(one, 1);
	coeff = Matrix_Alloc(d+1, d+1+1);
	value_set_si(coeff->p[0][0], 1);
	value_set_si(coeff->p[0][d+1], 1);
	for (int i = 1; i <= d; ++i) {
	    value_multiply(coeff->p[i][0], coeff->p[i-1][0], d0);
	    Vector_Combine(coeff->p[i-1], coeff->p[i-1]+1, coeff->p[i]+1,
			   one, d0, i);
	    value_set_si(coeff->p[i][d+1], i);
	    value_multiply(coeff->p[i][d+1], coeff->p[i][d+1], coeff->p[i-1][d+1]);
	    value_decrement(d0, d0);
	}
	value_clear(d0);
	value_clear(one);
    }
    void div(dpoly& d, Vector *count, int sign) {
	int len = coeff->NbRows;
	Matrix * c = Matrix_Alloc(coeff->NbRows, coeff->NbColumns);
	Value tmp;
	value_init(tmp);
	for (int i = 0; i < len; ++i) {
	    Vector_Copy(coeff->p[i], c->p[i], len+1);
	    for (int j = 1; j <= i; ++j) {
		value_multiply(tmp, d.coeff->p[j], c->p[i][len]);
		value_oppose(tmp, tmp);
		Vector_Combine(c->p[i], c->p[i-j], c->p[i],
			       c->p[i-j][len], tmp, len);
		value_multiply(c->p[i][len], c->p[i][len], c->p[i-j][len]);
	    }
	    value_multiply(c->p[i][len], c->p[i][len], d.coeff->p[0]);
	}
	if (sign == -1) {
	    value_set_si(tmp, -1);
	    Vector_Scale(c->p[len-1], count->p, tmp, len);
	    value_assign(count->p[len], c->p[len-1][len]);
	} else
	    Vector_Copy(c->p[len-1], count->p, len+1);
	Vector_Normalize(count->p, len+1);
	value_clear(tmp);
	Matrix_Free(c);
    }
};

struct bfe_term : public bfc_term_base {
    vector<evalue *> factors;

    bfe_term(int len) : bfc_term_base(len) {
    }

    ~bfe_term() {
	for (int i = 0; i < factors.size(); ++i) {
	    if (!factors[i])
		continue;
	    free_evalue_refs(factors[i]);
	    delete factors[i];
	}
    }
};

static void print_int_vector(int *v, int len, const char *name)
{
    cerr << name << endl;
    for (int j = 0; j < len; ++j) {
	cerr << v[j] << " ";
    }
    cerr << endl;
}

static void print_bfc_terms(mat_ZZ& factors, bfc_vec& v)
	__attribute__((unused));
static void print_bfc_terms(mat_ZZ& factors, bfc_vec& v)
{
    cerr << endl;
    cerr << "factors" << endl;
    cerr << factors << endl;
    for (int i = 0; i < v.size(); ++i) {
	cerr << "term: " << i << endl;
	print_int_vector(v[i]->powers, factors.NumRows(), "powers");
	cerr << "terms" << endl;
	cerr << v[i]->terms << endl;
	bfc_term* bfct = static_cast<bfc_term *>(v[i]);
	cerr << bfct->c << endl;
    }
}

static void print_bfe_terms(mat_ZZ& factors, bfc_vec& v)
	__attribute__((unused));
static void print_bfe_terms(mat_ZZ& factors, bfc_vec& v)
{
    cerr << endl;
    cerr << "factors" << endl;
    cerr << factors << endl;
    for (int i = 0; i < v.size(); ++i) {
	cerr << "term: " << i << endl;
	print_int_vector(v[i]->powers, factors.NumRows(), "powers");
	cerr << "terms" << endl;
	cerr << v[i]->terms << endl;
	bfe_term* bfet = static_cast<bfe_term *>(v[i]);
	for (int j = 0; j < v[i]->terms.NumRows(); ++j) {
           const char * test[] = {"a", "b"};
           print_evalue(stderr, bfet->factors[j], test);
           fprintf(stderr, "\n");
	}
    }
}

struct bfcounter : public bfcounter_base {
    mpq_t count;
    Value tz;

    bfcounter(unsigned dim) : bfcounter_base(dim) {
	mpq_init(count);
	lower = 1;
	value_init(tz);
    }
    ~bfcounter() {
	mpq_clear(count);
	value_clear(tz);
    }
    virtual void base(mat_ZZ& factors, bfc_vec& v);
    virtual void get_count(Value *result) {
	assert(value_one_p(&count[0]._mp_den));
	value_assign(*result, &count[0]._mp_num);
    }
};

void bfcounter::base(mat_ZZ& factors, bfc_vec& v)
{
    unsigned nf = factors.NumRows();

    for (int i = 0; i < v.size(); ++i) {
	bfc_term* bfct = static_cast<bfc_term *>(v[i]);
	int total_power = 0;
	// factor is always positive, so we always
	// change signs
	for (int k = 0; k < nf; ++k)
	    total_power += v[i]->powers[k];

	int j;
	for (j = 0; j < nf; ++j)
	    if (v[i]->powers[j] > 0)
		break;

	zz2value(factors[j][0], tz);
	dpoly D(total_power, tz, 1);
	for (int k = 1; k < v[i]->powers[j]; ++k) {
	    zz2value(factors[j][0], tz);
	    dpoly fact(total_power, tz, 1);
	    D *= fact;
	}
	for ( ; ++j < nf; )
	    for (int k = 0; k < v[i]->powers[j]; ++k) {
		zz2value(factors[j][0], tz);
		dpoly fact(total_power, tz, 1);
		D *= fact;
	    }

	for (int k = 0; k < v[i]->terms.NumRows(); ++k) {
	    zz2value(v[i]->terms[k][0], tz);
	    dpoly n(total_power, tz);
	    mpq_set_si(tcount, 0, 1);
	    n.div(D, tcount, 1);
	    if (total_power % 2)
		bfct->c[k].n = -bfct->c[k].n;
	    zz2value(bfct->c[k].n, tn);
	    zz2value(bfct->c[k].d, td);

	    mpz_mul(mpq_numref(tcount), mpq_numref(tcount), tn);
	    mpz_mul(mpq_denref(tcount), mpq_denref(tcount), td);
	    mpq_canonicalize(tcount);
	    mpq_add(count, count, tcount);
	}
	delete v[i];
    }
}


/* Check whether the polyhedron is unbounded and if so,
 * check whether it has any (and therefore an infinite number of)
 * integer points.
 * If one of the vertices is integer, then we are done.
 * Otherwise, transform the polyhedron such that one of the rays
 * is the first unit vector and cut it off at a height that ensures
 * that if the whole polyhedron has any points, then the remaining part
 * has integer points.  In particular we add the largest coefficient
 * of a ray to the highest vertex (rounded up).
 */
static bool Polyhedron_is_infinite(Polyhedron *P, Value* result,
				   barvinok_options *options)
{
    int r = 0;
    Matrix *M, *M2;
    Value c, tmp;
    Value g;
    bool first;
    Vector *v;
    Value offset, size;
    Polyhedron *R;

    if (P->NbBid == 0)
	for (; r < P->NbRays; ++r)
	    if (value_zero_p(P->Ray[r][P->Dimension+1]))
		break;
    if (P->NbBid == 0 && r == P->NbRays)
	return false;

    if (options->count_sample_infinite) {
	Vector *sample;

	sample = Polyhedron_Sample(P, options);
	if (!sample)
	    value_set_si(*result, 0);
	else {
	    value_set_si(*result, -1);
	    Vector_Free(sample);
	}
	return true;
    }

    for (int i = 0; i < P->NbRays; ++i)
	if (value_one_p(P->Ray[i][1+P->Dimension])) {
	    value_set_si(*result, -1);
	    return true;
	}

    value_init(g);
    M = Matrix_Alloc(P->Dimension+1, P->Dimension+1);
    Vector_Gcd(P->Ray[r]+1, P->Dimension, &g);
    Vector_AntiScale(P->Ray[r]+1, M->p[0], g, P->Dimension+1);
    int ok = unimodular_complete(M, 1);
    assert(ok);
    value_set_si(M->p[P->Dimension][P->Dimension], 1);
    M2 = Transpose(M);
    Matrix_Free(M);
    P = Polyhedron_Preimage(P, M2, 0);
    Matrix_Free(M2);
    value_clear(g);

    first = true;
    value_init(offset);
    value_init(size);
    value_init(tmp);
    value_set_si(size, 0);

    for (int i = 0; i < P->NbBid; ++i) {
	value_absolute(tmp, P->Ray[i][1]);
	if (value_gt(tmp, size))
	    value_assign(size, tmp);
    }
    for (int i = P->NbBid; i < P->NbRays; ++i) {
	if (value_zero_p(P->Ray[i][P->Dimension+1])) {
	    if (value_gt(P->Ray[i][1], size))
		value_assign(size, P->Ray[i][1]);
	    continue;
	}
	mpz_cdiv_q(tmp, P->Ray[i][1], P->Ray[i][P->Dimension+1]);
	if (first || value_gt(tmp, offset)) {
	    value_assign(offset, tmp);
	    first = false;
	}
    }
    value_addto(offset, offset, size);
    value_clear(size);
    value_clear(tmp);

    v = Vector_Alloc(P->Dimension+2);
    value_set_si(v->p[0], 1);
    value_set_si(v->p[1], -1);
    value_assign(v->p[1+P->Dimension], offset);
    R = AddConstraints(v->p, 1, P, options->MaxRays);
    Polyhedron_Free(P);
    P = R;

    value_clear(offset);
    Vector_Free(v);

    value_init(c);
    barvinok_count_with_options(P, &c, options);
    Polyhedron_Free(P);
    if (value_zero_p(c))
	value_set_si(*result, 0);
    else
	value_set_si(*result, -1);
    value_clear(c);

    return true;
}

static void evalue2value(evalue *e, Value *v)
{
    if (EVALUE_IS_ZERO(*e)) {
	value_set_si(*v, 0);
	return;
    }

    if (value_notzero_p(e->d)) {
	assert(value_one_p(e->d));
	value_assign(*v, e->x.n);
	return;
    }

    assert(e->x.p->type == partition);
    assert(e->x.p->size == 2);
    assert(EVALUE_DOMAIN(e->x.p->arr[0])->Dimension == 0);
    evalue2value(&e->x.p->arr[1], v);
}

static void barvinok_count_f(Polyhedron *P, Value* result,
			     barvinok_options *options);

void barvinok_count_with_options(Polyhedron *P, Value* result,
				 struct barvinok_options *options)
{
    int allocated = 0;
    Polyhedron *Q;
    bool infinite = false;

    if (P->next)
	fprintf(stderr,
	    "barvinok_count: input is a union; only first polyhedron is counted\n");

    if (emptyQ2(P)) {
	value_set_si(*result, 0);
	return;
    }
    if (P->NbEq != 0) {
	Q = NULL;
	do {
	    P = remove_equalities(P, options->MaxRays);
	    if (P)
		P = DomainConstraintSimplify(P, options->MaxRays);
	    if (Q)
		Polyhedron_Free(Q);
	    Q = P;
	} while (P && !emptyQ(P) && P->NbEq != 0);
	if (!P || emptyQ(P)) {
	    Polyhedron_Free(P);
	    value_set_si(*result, 0);
	    return;
	}
	allocated = 1;
    }
    if (Polyhedron_is_infinite(P, result, options)) {
	if (allocated)
	    Polyhedron_Free(P);
	return;
    }
    if (P->Dimension == 0) {
	/* Test whether the constraints are satisfied */
	POL_ENSURE_VERTICES(P);
	value_set_si(*result, !emptyQ(P));
	if (allocated)
	    Polyhedron_Free(P);
	return;
    }
    if (options->summation == BV_SUM_BERNOULLI) {
	Polyhedron *C = Universe_Polyhedron(0);
	evalue *sum = barvinok_summate_unweighted(P, C, options);
	Polyhedron_Free(C);
	evalue2value(sum, result);
	evalue_free(sum);
	return;
    }
    Q = Polyhedron_Factor(P, 0, NULL, options->MaxRays);
    if (Q) {
	if (allocated)
	    Polyhedron_Free(P);
	P = Q;
	allocated = 1;
    }

    barvinok_count_f(P, result, options);
    if (value_neg_p(*result))
	infinite = true;
    if (Q && P->next && value_notzero_p(*result)) {
	Value factor;
	value_init(factor);

	for (Q = P->next; Q; Q = Q->next) {
	    barvinok_count_f(Q, &factor, options);
	    if (value_neg_p(factor)) {
		infinite = true;
		continue;
	    } else if (Q->next && value_zero_p(factor)) {
		value_set_si(*result, 0);
		break;
	    }
	    value_multiply(*result, *result, factor);
	}

	value_clear(factor);
    }

    if (allocated)
	Domain_Free(P);
    if (infinite)
	value_set_si(*result, -1);
}

void barvinok_count(Polyhedron *P, Value* result, unsigned NbMaxCons)
{
    barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = NbMaxCons;
    barvinok_count_with_options(P, result, options);
    barvinok_options_free(options);
}

static void barvinok_count_f(Polyhedron *P, Value* result,
			     barvinok_options *options)
{
    if (emptyQ2(P)) {
	value_set_si(*result, 0);
	return;
    }

    if (P->Dimension == 1)
	return Line_Length(P, result);

    int c = P->NbConstraints;
    POL_ENSURE_FACETS(P);
    if (c != P->NbConstraints || P->NbEq != 0) {
	Polyhedron *next = P->next;
	P->next = NULL;
	barvinok_count_with_options(P, result, options);
	P->next = next;
	return;
    }

    POL_ENSURE_VERTICES(P);

    if (Polyhedron_is_infinite(P, result, options))
	return;

    np_base *cnt;
    if (options->incremental_specialization == BV_SPECIALIZATION_BF)
	cnt = new bfcounter(P->Dimension);
    else if (options->incremental_specialization == BV_SPECIALIZATION_DF)
	cnt = new icounter(P->Dimension);
    else if (options->incremental_specialization == BV_SPECIALIZATION_TODD)
	cnt = new tcounter(P->Dimension, options->max_index);
    else
	cnt = new counter(P->Dimension, options->max_index);
    cnt->start(P, options);

    cnt->get_count(result);
    delete cnt;
}

typedef evalue * evalue_p;

struct enumerator_base {
    unsigned dim;
    evalue ** vE;
    evalue mone;
    vertex_decomposer *vpd;

    enumerator_base(unsigned dim, vertex_decomposer *vpd)
    {
	this->dim = dim;
	this->vpd = vpd;

	vE = new evalue_p[vpd->PP->nbV];
	for (int j = 0; j < vpd->PP->nbV; ++j)
	    vE[j] = 0;

	value_init(mone.d);
	evalue_set_si(&mone, -1, 1);
    }

    void decompose_at(Param_Vertices *V, int _i, barvinok_options *options) {
	//this->pVD = pVD;

	vE[_i] = new evalue;
	value_init(vE[_i]->d);
	evalue_set_si(vE[_i], 0, 1);

	vpd->decompose_at_vertex(V, _i, options);
    }

    virtual ~enumerator_base() {
	for (int j = 0; j < vpd->PP->nbV; ++j)
	    if (vE[j]) {
		free_evalue_refs(vE[j]);
		delete vE[j];
	    }
	delete [] vE;

	free_evalue_refs(&mone);
    }

    static enumerator_base *create(Polyhedron *P, unsigned dim,
				     Param_Polyhedron *PP,
				     barvinok_options *options);
};

struct enumerator : public signed_cone_consumer, public vertex_decomposer,
		    public enumerator_base {
    vec_ZZ lambda;
    vec_ZZ den;
    term_info num;
    Vector *c;
    mpq_t count;
    Value tz;

    enumerator(Polyhedron *P, unsigned dim, Param_Polyhedron *PP) :
		vertex_decomposer(PP, *this), enumerator_base(dim, this) {
	randomvector(P, lambda, dim, 0);
	den.SetLength(dim);
	c = Vector_Alloc(dim+2);

	mpq_init(count);
	value_init(tz);
    }

    ~enumerator() {
	mpq_clear(count);
	Vector_Free(c);
	value_clear(tz);
    }

    virtual void handle(const signed_cone& sc, barvinok_options *options);
};

void enumerator::handle(const signed_cone& sc, barvinok_options *options)
{
    int sign = sc.sign;
    assert(sc.rays.NumRows() == dim);
    for (int k = 0; k < dim; ++k) {
	if (lambda * sc.rays[k] == 0)
	    throw Orthogonal;
    }

    lattice_point(V, sc.rays, lambda, &num, sc.det, options);
    den = sc.rays * lambda;

    if (dim % 2)
	sign = -sign;

    zz2value(den[0], tz);
    dpoly n(dim, tz, 1);
    for (int k = 1; k < dim; ++k) {
	zz2value(den[k], tz);
	dpoly fact(dim, tz, 1);
	n *= fact;
    }
    if (num.E != NULL) {
	dpoly_n d(dim);
	d.div(n, c, sign);
	for (unsigned long i = 0; i < sc.det; ++i) {
	    evalue *EV = evalue_polynomial(c, num.E[i]);
	    eadd(EV, vE[vert]);
	    evalue_free(EV);
	    evalue_free(num.E[i]);
	}
	delete [] num.E; 
    } else {
	mpq_set_si(count, 0, 1);
	if (num.constant.length() == 1) {
	    zz2value(num.constant[0], tz);
	    dpoly d(dim, tz);
	    d.div(n, count, sign);
	} else {
	    dpoly_n d(dim);
	    d.div(n, c, sign);
	    Value x, acc;
	    value_init(x);
	    value_init(acc);
	    for (unsigned long i = 0; i < sc.det; ++i) {
		value_assign(acc, c->p[dim]);
		zz2value(num.constant[i], x);
		for (int j = dim-1; j >= 0; --j) {
		    value_multiply(acc, acc, x);
		    value_addto(acc, acc, c->p[j]);
		}
		value_addto(mpq_numref(count), mpq_numref(count), acc);
	    }
	    mpz_set(mpq_denref(count), c->p[dim+1]);
	    value_clear(acc);
	    value_clear(x);
	}
	evalue EV;
	value_init(EV.d);
	evalue_set(&EV, &count[0]._mp_num, &count[0]._mp_den);
	eadd(&EV, vE[vert]);
	free_evalue_refs(&EV);
    } 
}

struct ienumerator_base : enumerator_base {
    evalue ** E_vertex;

    ienumerator_base(unsigned dim, vertex_decomposer *vpd) :
			enumerator_base(dim,vpd) {
	E_vertex = new evalue_p[dim];
    }

    virtual ~ienumerator_base() {
	delete [] E_vertex;
    }

    evalue *E_num(int i, int d) {
	return E_vertex[i + (dim-d)];
    }
};

struct cumulator {
    evalue *factor;
    evalue *v;
    dpoly_r *r;

    cumulator(evalue *factor, evalue *v, dpoly_r *r) : 
	factor(factor), v(v), r(r) {}

    void cumulate(barvinok_options *options);

    virtual void add_term(const vector<int>& powers, evalue *f2) = 0;
    virtual ~cumulator() {}
};

void cumulator::cumulate(barvinok_options *options)
{
    evalue cum;  // factor * 1 * E_num[0]/1 * (E_num[0]-1)/2 *...
    evalue f;
    evalue t;	// E_num[0] - (m-1)
    evalue *cst;
    evalue mone;

    if (options->lookup_table) {
	value_init(mone.d);
	evalue_set_si(&mone, -1, 1);
    }

    value_init(cum.d);
    evalue_copy(&cum, factor);
    value_init(f.d);
    value_init(f.x.n);
    value_set_si(f.d, 1);
    value_set_si(f.x.n, 1);
    value_init(t.d);
    evalue_copy(&t, v);

    if (!options->lookup_table) {
	for (cst = &t; value_zero_p(cst->d); ) {
	    if (cst->x.p->type == fractional)
		cst = &cst->x.p->arr[1];
	    else
		cst = &cst->x.p->arr[0];
	}
    }

    for (int m = 0; m < r->len; ++m) {
	if (m > 0) {
	    if (m > 1) {
		value_set_si(f.d, m);
		emul(&f, &cum);
		if (!options->lookup_table)
		    value_subtract(cst->x.n, cst->x.n, cst->d);
		else
		    eadd(&mone, &t);
	    }
	    emul(&t, &cum);
	}
	dpoly_r_term_list& current = r->c[r->len-1-m];
	dpoly_r_term_list::iterator j;
	for (j = current.begin(); j != current.end(); ++j) {
	    if ((*j)->coeff == 0)
		continue;
	    evalue *f2 = new evalue;
	    value_init(f2->d);
	    value_init(f2->x.n);
	    zz2value((*j)->coeff, f2->x.n);
	    zz2value(r->denom, f2->d);
	    emul(&cum, f2);

	    add_term((*j)->powers, f2);
	}
    }
    free_evalue_refs(&f);
    free_evalue_refs(&t);
    free_evalue_refs(&cum);
    if (options->lookup_table)
	free_evalue_refs(&mone);
}

struct E_poly_term {
    vector<int>	powers;
    evalue  *E;
};

struct ie_cum : public cumulator {
    vector<E_poly_term *> terms;

    ie_cum(evalue *factor, evalue *v, dpoly_r *r) : cumulator(factor, v, r) {}

    virtual void add_term(const vector<int>& powers, evalue *f2);
};

void ie_cum::add_term(const vector<int>& powers, evalue *f2)
{
    int k;
    for (k = 0; k < terms.size(); ++k) {
	if (terms[k]->powers == powers) {
	    eadd(f2, terms[k]->E);
	    free_evalue_refs(f2); 
	    delete f2;
	    break;
	}
    }
    if (k >= terms.size()) {
	E_poly_term *ET = new E_poly_term;
	ET->powers = powers;
	ET->E = f2;
	terms.push_back(ET);
    }
}

struct ienumerator : public signed_cone_consumer, public vertex_decomposer,
		     public ienumerator_base {
    mat_ZZ den;
    mat_ZZ vertex;
    mpq_t tcount;
    Value tz;

    ienumerator(unsigned dim, Param_Polyhedron *PP) :
		vertex_decomposer(PP, *this), ienumerator_base(dim, this) {
	vertex.SetDims(1, dim);

	den.SetDims(dim, dim);
	mpq_init(tcount);
	value_init(tz);
    }

    ~ienumerator() {
	mpq_clear(tcount);
	value_clear(tz);
    }

    virtual void handle(const signed_cone& sc, barvinok_options *options);
    void reduce(evalue *factor, const mat_ZZ& num, const mat_ZZ& den_f,
		barvinok_options *options);
};

void ienumerator::reduce(evalue *factor, const mat_ZZ& num, const mat_ZZ& den_f,
			 barvinok_options *options)
{
    unsigned len = den_f.NumRows();  // number of factors in den
    unsigned dim = num.NumCols();
    assert(num.NumRows() == 1);

    if (dim == 0) {
	eadd(factor, vE[vert]);
	return;
    }

    vec_ZZ den_s;
    mat_ZZ den_r;
    vec_ZZ num_s;
    mat_ZZ num_p;

    split_one(num, num_s, num_p, den_f, den_s, den_r);

    vec_ZZ den_p;
    den_p.SetLength(len);

    ZZ one;
    one = 1;
    normalize(one, num_s, num_p, den_s, den_p, den_r);
    if (one != 1)
	emul(&mone, factor);

    int only_param = 0;
    int no_param = 0;
    for (int k = 0; k < len; ++k) {
	if (den_p[k] == 0)
	    ++no_param;
	else if (den_s[k] == 0)
	    ++only_param;
    }
    if (no_param == 0) {
	reduce(factor, num_p, den_r, options);
    } else {
	int k, l;
	mat_ZZ pden;
	pden.SetDims(only_param, dim-1);

	for (k = 0, l = 0; k < len; ++k)
	    if (den_s[k] == 0)
		pden[l++] = den_r[k];

	for (k = 0; k < len; ++k)
	    if (den_p[k] == 0)
		break;

	zz2value(num_s[0], tz);
	dpoly n(no_param, tz);
	zz2value(den_s[k], tz);
	dpoly D(no_param, tz, 1);
	for ( ; ++k < len; )
	    if (den_p[k] == 0) {
		zz2value(den_s[k], tz);
		dpoly fact(no_param, tz, 1);
		D *= fact;
	    }

	dpoly_r * r = 0;
	// if no_param + only_param == len then all powers
	// below will be all zero
	if (no_param + only_param == len) {
	    if (E_num(0, dim) != 0)
		r = new dpoly_r(n, len);
	    else {
		mpq_set_si(tcount, 0, 1);
		one = 1;
		n.div(D, tcount, 1);

		if (value_notzero_p(mpq_numref(tcount))) {
		    evalue f;
		    value_init(f.d);
		    value_init(f.x.n);
		    value_assign(f.x.n, mpq_numref(tcount));
		    value_assign(f.d, mpq_denref(tcount));
		    emul(&f, factor);
		    reduce(factor, num_p, pden, options);
		    free_evalue_refs(&f);
		}
		return;
	    }
	} else {
	    for (k = 0; k < len; ++k) {
		if (den_s[k] == 0 || den_p[k] == 0)
		    continue;

		zz2value(den_s[k], tz);
		dpoly pd(no_param-1, tz, 1);

		int l;
		for (l = 0; l < k; ++l)
		    if (den_r[l] == den_r[k])
			break;

		if (r == 0)
		    r = new dpoly_r(n, pd, l, len);
		else {
		    dpoly_r *nr = new dpoly_r(r, pd, l, len);
		    delete r;
		    r = nr;
		}
	    }
	}
	dpoly_r *rc = r->div(D);
	delete r;
	r = rc;
	if (E_num(0, dim) == 0) {
	    int common = pden.NumRows();
	    dpoly_r_term_list& final = r->c[r->len-1];
	    int rows;
	    evalue t;
	    evalue f;
	    value_init(f.d);
	    value_init(f.x.n);
	    zz2value(r->denom, f.d);
	    dpoly_r_term_list::iterator j;
	    for (j = final.begin(); j != final.end(); ++j) {
		if ((*j)->coeff == 0)
		    continue;
		rows = common;
		for (int k = 0; k < r->dim; ++k) {
		    int n = (*j)->powers[k];
		    if (n == 0)
			continue;
		    pden.SetDims(rows+n, pden.NumCols());
		    for (int l = 0; l < n; ++l)
			pden[rows+l] = den_r[k];
		    rows += n;
		}
		value_init(t.d);
		evalue_copy(&t, factor);
		zz2value((*j)->coeff, f.x.n);
		emul(&f, &t);
		reduce(&t, num_p, pden, options);
		free_evalue_refs(&t);
	    }
	    free_evalue_refs(&f);
	} else {
	    ie_cum cum(factor, E_num(0, dim), r);
	    cum.cumulate(options);

	    int common = pden.NumRows();
	    int rows;
	    for (int j = 0; j < cum.terms.size(); ++j) {
		rows = common;
		pden.SetDims(rows, pden.NumCols());
		for (int k = 0; k < r->dim; ++k) {
		    int n = cum.terms[j]->powers[k];
		    if (n == 0)
			continue;
		    pden.SetDims(rows+n, pden.NumCols());
		    for (int l = 0; l < n; ++l)
			pden[rows+l] = den_r[k];
		    rows += n;
		}
		reduce(cum.terms[j]->E, num_p, pden, options);
		free_evalue_refs(cum.terms[j]->E); 
		delete cum.terms[j]->E;
		delete cum.terms[j];
	    }
	}
	delete r;
    }
}

void ienumerator::handle(const signed_cone& sc, barvinok_options *options)
{
    assert(sc.det == 1);
    assert(sc.rays.NumRows() == dim);

    lattice_point(V, sc.rays, vertex[0], E_vertex, options);

    den = sc.rays;

    evalue one;
    value_init(one.d);
    evalue_set_si(&one, sc.sign, 1);
    reduce(&one, vertex, den, options);
    free_evalue_refs(&one);

    for (int i = 0; i < dim; ++i)
	if (E_vertex[i])
	    evalue_free(E_vertex[i]);
}

struct bfenumerator : public vertex_decomposer, public bf_base,
		      public ienumerator_base {
    evalue *factor;

    bfenumerator(unsigned dim, Param_Polyhedron *PP) :
		    vertex_decomposer(PP, *this),
		    bf_base(dim), ienumerator_base(dim, this) {
	lower = 0;
	factor = NULL;
    }

    ~bfenumerator() {
    }

    virtual void handle(const signed_cone& sc, barvinok_options *options);
    virtual void base(mat_ZZ& factors, bfc_vec& v);

    bfc_term_base* new_bf_term(int len) {
	bfe_term* t = new bfe_term(len);
	return t;
    }

    virtual void set_factor(bfc_term_base *t, int k, int change) {
	bfe_term* bfet = static_cast<bfe_term *>(t);
	factor = bfet->factors[k];
	assert(factor != NULL);
	bfet->factors[k] = NULL;
	if (change)
	    emul(&mone, factor);
    }

    virtual void set_factor(bfc_term_base *t, int k, mpq_t &q, int change) {
	bfe_term* bfet = static_cast<bfe_term *>(t);
	factor = bfet->factors[k];
	assert(factor != NULL);
	bfet->factors[k] = NULL;

	evalue f;
	value_init(f.d);
	value_init(f.x.n);
	if (change)
	    value_oppose(f.x.n, mpq_numref(q));
	else
	    value_assign(f.x.n, mpq_numref(q));
	value_assign(f.d, mpq_denref(q));
	emul(&f, factor);
	free_evalue_refs(&f);
    }

    virtual void set_factor(bfc_term_base *t, int k, const QQ& c, int change) {
	bfe_term* bfet = static_cast<bfe_term *>(t);

	factor = new evalue;

	evalue f;
	value_init(f.d);
	value_init(f.x.n);
	zz2value(c.n, f.x.n);
	if (change)
	    value_oppose(f.x.n, f.x.n);
	zz2value(c.d, f.d);

	value_init(factor->d);
	evalue_copy(factor, bfet->factors[k]);
	emul(&f, factor);
	free_evalue_refs(&f);
    }

    void set_factor(evalue *f, int change) {
	if (change)
	    emul(&mone, f);
	factor = f;
    }

    virtual void insert_term(bfc_term_base *t, int i) {
	bfe_term* bfet = static_cast<bfe_term *>(t);
	int len = t->terms.NumRows()-1;	// already increased by one

	bfet->factors.resize(len+1);
	for (int j = len; j > i; --j) {
	    bfet->factors[j] = bfet->factors[j-1];
	    t->terms[j] = t->terms[j-1];
	}
	bfet->factors[i] = factor;
	factor = NULL;
    }

    virtual void update_term(bfc_term_base *t, int i) {
	bfe_term* bfet = static_cast<bfe_term *>(t);

	eadd(factor, bfet->factors[i]);
	free_evalue_refs(factor);
	delete factor;
    }

    virtual bool constant_vertex(int dim) { return E_num(0, dim) == 0; }

    virtual void cum(bf_reducer *bfr, bfc_term_base *t, int k, dpoly_r *r,
		     barvinok_options *options);
};

enumerator_base *enumerator_base::create(Polyhedron *P, unsigned dim,
					 Param_Polyhedron *PP,
					 barvinok_options *options)
{
    enumerator_base *eb;

    if (options->incremental_specialization == BV_SPECIALIZATION_BF)
	eb = new bfenumerator(dim, PP);
    else if (options->incremental_specialization == BV_SPECIALIZATION_DF)
	eb = new ienumerator(dim, PP);
    else
	eb = new enumerator(P, dim, PP);

    return eb;
}

struct bfe_cum : public cumulator {
    bfenumerator *bfe;
    bfc_term_base *told;
    int k;
    bf_reducer *bfr;

    bfe_cum(evalue *factor, evalue *v, dpoly_r *r, bf_reducer *bfr, 
	    bfc_term_base *t, int k, bfenumerator *e) :
	    cumulator(factor, v, r), bfe(e), told(t), k(k),
	    bfr(bfr) {
    }

    virtual void add_term(const vector<int>& powers, evalue *f2);
};

void bfe_cum::add_term(const vector<int>& powers, evalue *f2)
{
    bfr->update_powers(powers);

    bfc_term_base * t = bfe->find_bfc_term(bfr->vn, bfr->npowers, bfr->nnf);
    bfe->set_factor(f2, bfr->l_changes % 2);
    bfe->add_term(t, told->terms[k], bfr->l_extra_num);
}

void bfenumerator::cum(bf_reducer *bfr, bfc_term_base *t, int k,
		       dpoly_r *r, barvinok_options *options)
{
    bfe_term* bfet = static_cast<bfe_term *>(t);
    bfe_cum cum(bfet->factors[k], E_num(0, bfr->d), r, bfr, t, k, this);
    cum.cumulate(options);
}

void bfenumerator::base(mat_ZZ& factors, bfc_vec& v)
{
    for (int i = 0; i < v.size(); ++i) {
	assert(v[i]->terms.NumRows() == 1);
	evalue *factor = static_cast<bfe_term *>(v[i])->factors[0];
	eadd(factor, vE[vert]);
	delete v[i];
    }
}

void bfenumerator::handle(const signed_cone& sc, barvinok_options *options)
{
    assert(sc.det == 1);
    assert(sc.rays.NumRows() == enumerator_base::dim);

    bfe_term* t = new bfe_term(enumerator_base::dim);
    vector< bfc_term_base * > v;
    v.push_back(t);

    t->factors.resize(1);

    t->terms.SetDims(1, enumerator_base::dim);
    lattice_point(V, sc.rays, t->terms[0], E_vertex, options);

    // the elements of factors are always lexpositive
    mat_ZZ   factors;
    int s = setup_factors(sc.rays, factors, t, sc.sign);

    t->factors[0] = new evalue;
    value_init(t->factors[0]->d);
    evalue_set_si(t->factors[0], s, 1);
    reduce(factors, v, options);

    for (int i = 0; i < enumerator_base::dim; ++i)
	if (E_vertex[i])
	    evalue_free(E_vertex[i]);
}

static evalue* barvinok_enumerate_ev_f(Polyhedron *P, Polyhedron* C, 
				       barvinok_options *options);

/* Destroys C */
static evalue* barvinok_enumerate_cst(Polyhedron *P, Polyhedron* C, 
				      struct barvinok_options *options)
{
    evalue *eres;

    if (emptyQ2(C)) {
	Polyhedron_Free(C);
	return evalue_zero();
    }

    ALLOC(evalue, eres);
    value_init(eres->d);
    value_set_si(eres->d, 0);
    eres->x.p = new_enode(partition, 2, C->Dimension);
    EVALUE_SET_DOMAIN(eres->x.p->arr[0],
		      DomainConstraintSimplify(C, options->MaxRays));
    value_set_si(eres->x.p->arr[1].d, 1);
    value_init(eres->x.p->arr[1].x.n);
    if (emptyQ2(P))
	value_set_si(eres->x.p->arr[1].x.n, 0);
    else
	barvinok_count_with_options(P, &eres->x.p->arr[1].x.n, options);
    if (value_mone_p(eres->x.p->arr[1].x.n)) {
	value_clear(eres->x.p->arr[1].x.n);
	value_set_si(eres->x.p->arr[1].d, -2);	/* NaN */
    }

    return eres;
}

static evalue* enumerate(Polyhedron *P, Polyhedron* C,
					struct barvinok_options *options)
{
    Polyhedron *next;
    Polyhedron *Porig = P;
    Polyhedron *Corig = C;
    Polyhedron *CEq = NULL;
    unsigned nparam = C->Dimension;
    evalue *eres;
    Matrix *CP = NULL;

    evalue factor;
    value_init(factor.d);
    evalue_set_si(&factor, 1, 1);

    /* for now */
    POL_ENSURE_FACETS(P);
    POL_ENSURE_VERTICES(P);
    POL_ENSURE_FACETS(C);
    POL_ENSURE_VERTICES(C);

    if (C->Dimension == 0 || emptyQ(P) || emptyQ(C)) {
constant:
	if (CEq == Porig)
	    CEq = Polyhedron_Copy(CEq);
	eres = barvinok_enumerate_cst(P, CEq ? CEq : Polyhedron_Copy(C), options);
out:
	if (CP) {
	    evalue_backsubstitute(eres, CP, options->MaxRays);
	    Matrix_Free(CP);
	}

	emul(&factor, eres);
	if (options->approx->method == BV_APPROX_DROP) {
	    if (options->approx->approximation == BV_APPROX_SIGN_UPPER)
		evalue_frac2polynomial(eres, 1, options->MaxRays);
	    if (options->approx->approximation == BV_APPROX_SIGN_LOWER)
		evalue_frac2polynomial(eres, -1, options->MaxRays);
	    if (options->approx->approximation == BV_APPROX_SIGN_APPROX)
		evalue_frac2polynomial(eres, 0, options->MaxRays);
	}
	reduce_evalue(eres);
	free_evalue_refs(&factor);
	if (P != Porig)
	    Domain_Free(P);
	if (C != Corig)
	    Polyhedron_Free(C);
	   
	return eres;
    }
    if (Polyhedron_is_unbounded(P, nparam, options->MaxRays))
	goto constant;

    if (P->Dimension == nparam) {
	CEq = DomainIntersection(P, C, options->MaxRays);
	P = Universe_Polyhedron(0);
	goto constant;
    }
    if (P->NbEq != 0 || C->NbEq != 0) {
	Polyhedron *Q = P;
	Polyhedron *D = C;
	remove_all_equalities(&P, &C, &CP, NULL, nparam, options->MaxRays);
	if (C != D && D != Corig)
	    Polyhedron_Free(D);
	if (P != Q && Q != Porig)
	    Domain_Free(Q);
	eres = enumerate(P, C, options);
	goto out;
    }

    Polyhedron *T = Polyhedron_Factor(P, nparam, NULL, options->MaxRays);
    if (T || (P->Dimension == nparam+1)) {
	Polyhedron *C2 = C;
	Polyhedron *FC = Factor_Context(T ? T : P, nparam, options->MaxRays);
	C = DomainIntersection(C, FC, options->MaxRays);
	if (C2 != Corig)
	    Polyhedron_Free(C2);
	Polyhedron_Free(FC);
    }
    if (T) {
	if (P != Porig)
	    Polyhedron_Free(P);
	P = T;
	if (T->Dimension == C->Dimension) {
	    P = T->next;
	    T->next = NULL;
	    Polyhedron_Free(T);
	}
    }

    next = P->next;
    P->next = NULL;
    eres = barvinok_enumerate_ev_f(P, C, options);
    P->next = next;

    if (P->next) {
	Polyhedron *Q;
	evalue *f;

	for (Q = P->next; Q; Q = Q->next) {
	    Polyhedron *next = Q->next;
	    Q->next = NULL;

	    f = barvinok_enumerate_ev_f(Q, C, options);
	    emul(f, eres);
	    evalue_free(f);

	    Q->next = next;
	}
    }

    goto out;
}

evalue* barvinok_enumerate_with_options(Polyhedron *P, Polyhedron* C,
					struct barvinok_options *options)
{
    Polyhedron *next, *Cnext, *C1;
    Polyhedron *Corig = C;
    evalue *eres;

    if (P->next)
	fprintf(stderr,
    "barvinok_enumerate: input is a union; only first polyhedron is enumerated\n");

    if (C->next)
	fprintf(stderr,
    "barvinok_enumerate: context is a union; only first polyhedron is considered\n");

    Cnext = C->next;
    C->next = NULL;
    C1 = Polyhedron_Project(P, C->Dimension);
    C = DomainIntersection(C, C1, options->MaxRays);
    Polyhedron_Free(C1);
    next = P->next;
    P->next = NULL;

    if (options->approx->method == BV_APPROX_BERNOULLI ||
	options->summation == BV_SUM_BERNOULLI) {
	    int summation = options->summation;
	    options->summation = BV_SUM_BERNOULLI;
	    eres = barvinok_summate_unweighted(P, C, options);
	    options->summation = summation;
    } else
	eres = enumerate(P, C, options);
    Domain_Free(C);

    P->next= next;
    Corig->next = Cnext;

    return eres;
}

evalue* barvinok_enumerate_ev(Polyhedron *P, Polyhedron* C, unsigned MaxRays)
{
    evalue *E;
    barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = MaxRays;
    E = barvinok_enumerate_with_options(P, C, options);
    barvinok_options_free(options);
    return E;
}

evalue *Param_Polyhedron_Enumerate(Param_Polyhedron *PP, Polyhedron *P,
				   Polyhedron *C,
				   struct barvinok_options *options)
{
    evalue *eres;
    Param_Domain *D;
    unsigned nparam = C->Dimension;
    unsigned dim = P->Dimension - nparam;

    int nd;
    for (nd = 0, D=PP->D; D; ++nd, D=D->next);
    evalue_section *s = new evalue_section[nd];
    Polyhedron *TC = true_context(P, C, options->MaxRays);

    enumerator_base *et = NULL;
try_again:
    if (et)
	delete et;

    et = enumerator_base::create(P, dim, PP, options);

    FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, D, rVD)
	Param_Vertices *V;

	s[i].E = evalue_zero();
	s[i].D = rVD;

	FORALL_PVertex_in_ParamPolyhedron(V,D,PP) // _i is internal counter
	    if (!et->vE[_i])
		try {
		    et->decompose_at(V, _i, options);
		} catch (OrthogonalException &e) {
		    FORALL_REDUCED_DOMAIN_RESET;
		    for (; i >= 0; --i) {
			evalue_free(s[i].E);
			Domain_Free(s[i].D);
		    }
		    goto try_again;
		}
	    eadd(et->vE[_i] , s[i].E);
	END_FORALL_PVertex_in_ParamPolyhedron;
	evalue_range_reduction_in_domain(s[i].E, rVD);
    END_FORALL_REDUCED_DOMAIN
    Polyhedron_Free(TC);

    delete et;
    eres = evalue_from_section_array(s, nd);
    delete [] s;

    return eres;
}

static evalue* barvinok_enumerate_ev_f(Polyhedron *P, Polyhedron* C, 
				       barvinok_options *options)
{
    unsigned nparam = C->Dimension;
    bool do_scale = options->approx->method == BV_APPROX_SCALE;

    if (options->summation == BV_SUM_EULER)
	return barvinok_summate_unweighted(P, C, options);

    if (options->approx->method == BV_APPROX_VOLUME)
	return Param_Polyhedron_Volume(P, C, options);

    if (P->Dimension - nparam == 1 && !do_scale)
	return ParamLine_Length(P, C, options);

    Param_Polyhedron *PP = NULL;
    evalue *eres;

    if (do_scale) {
	eres = scale_bound(P, C, options);
	if (eres)
	    return eres;
    }

    PP = Polyhedron2Param_Polyhedron(P, C, options);

    if (do_scale)
	eres = scale(PP, P, C, options);
    else
	eres = Param_Polyhedron_Enumerate(PP, P, C, options);

    if (PP)
	Param_Polyhedron_Free(PP);

    return eres;
}

Enumeration* barvinok_enumerate(Polyhedron *P, Polyhedron* C, unsigned MaxRays)
{
    evalue *EP = barvinok_enumerate_ev(P, C, MaxRays);

    return partition2enumeration(EP);
}

evalue* barvinok_enumerate_union(Polyhedron *D, Polyhedron* C, unsigned MaxRays)
{
    evalue *EP;
    gen_fun *gf = barvinok_enumerate_union_series(D, C, MaxRays);
    EP = *gf;
    delete gf;
    return EP;
}

static __isl_give isl_pw_qpolynomial *basic_set_card(
	__isl_take isl_basic_set *bset)
{
	isl_ctx *ctx;
	isl_space *space;
	isl_pw_qpolynomial *pwqp;
	unsigned nparam = isl_basic_set_dim(bset, isl_dim_param);
	Polyhedron *U = Universe_Polyhedron(nparam);
	Polyhedron *P;
	evalue *E;
	barvinok_options *options;
	int options_allocated = 0;

	ctx = isl_basic_set_get_ctx(bset);
	options = isl_ctx_peek_barvinok_options(ctx);
	if (!options) {
		options = barvinok_options_new_with_defaults();
		options_allocated = 1;
	}

	space = isl_basic_set_get_space(bset);
	space = isl_space_domain(space);

	P = isl_basic_set_to_polylib(bset);
	E = enumerate(P, U, options);

	pwqp = isl_pw_qpolynomial_from_evalue(space, E);
	isl_basic_set_free(bset);

	evalue_free(E);
	Polyhedron_Free(P);
	Polyhedron_Free(U);
	if (options_allocated)
		barvinok_options_free(options);

	return pwqp;
}

static isl_stat basic_map_card(__isl_take isl_basic_map *bmap, void *user)
{
	isl_pw_qpolynomial **sum = (isl_pw_qpolynomial **)user;
	isl_pw_qpolynomial *pwqp;
	unsigned nparam = isl_basic_map_dim(bmap, isl_dim_param);
	unsigned n_in = isl_basic_map_dim(bmap, isl_dim_in);
	isl_space *target_dim;
	isl_basic_set *bset;

	target_dim = isl_basic_map_get_space(bmap);
	target_dim = isl_space_domain(target_dim);

	bmap = isl_basic_map_move_dims(bmap, isl_dim_param, nparam,
					isl_dim_in, 0, n_in);

	bset = isl_basic_map_range(bmap);
	bset = isl_basic_set_lift(bset);
	pwqp = isl_basic_set_multiplicative_call(bset, &basic_set_card);

	pwqp = isl_pw_qpolynomial_from_range(pwqp);
	pwqp = isl_pw_qpolynomial_move_dims(pwqp, isl_dim_in, 0,
						isl_dim_param, nparam, n_in);
	pwqp = isl_pw_qpolynomial_reset_domain_space(pwqp, target_dim);
	*sum = isl_pw_qpolynomial_add(*sum, pwqp);

	return isl_stat_ok;
}

static __isl_give isl_pw_qpolynomial *card_as_sum(__isl_take isl_map *map,
	barvinok_options *options)
{
	isl_ctx *ctx;
	isl_val *one;
	isl_space *dim;
	isl_set *set;
	isl_qpolynomial *qp;
	isl_pw_qpolynomial *pwqp;
	int summation = options->summation;

	if (!map)
		return NULL;

	options->summation = BV_SUM_BERNOULLI;

	set = isl_map_wrap(map);
	dim = isl_set_get_space(set);
	ctx = isl_map_get_ctx(map);
	one = isl_val_one(ctx);
	qp = isl_qpolynomial_val_on_domain(dim, one);

	pwqp = isl_pw_qpolynomial_alloc(set, qp);
	pwqp = isl_pw_qpolynomial_sum(pwqp);

	options->summation = summation;

	return pwqp;
}

__isl_give isl_pw_qpolynomial *isl_map_card(__isl_take isl_map *map)
{
	isl_ctx *ctx;
	isl_space *dim;
	isl_pw_qpolynomial *sum;
	barvinok_options *options;

	ctx = isl_map_get_ctx(map);
	options = isl_ctx_peek_barvinok_options(ctx);
	if (options &&
	    (options->approx->method == BV_APPROX_BERNOULLI ||
	     options->summation == BV_SUM_BERNOULLI))
		return card_as_sum(map, options);

	dim = isl_map_get_space(map);
	dim = isl_space_domain(dim);
	dim = isl_space_from_domain(dim);
	dim = isl_space_add_dims(dim, isl_dim_out, 1);
	sum = isl_pw_qpolynomial_zero(dim);

	map = isl_map_make_disjoint(map);
	map = isl_map_compute_divs(map);

	if (isl_map_foreach_basic_map(map, &basic_map_card, &sum) < 0)
		goto error;

	isl_map_free(map);

	return sum;
error:
	isl_map_free(map);
	isl_pw_qpolynomial_free(sum);
	return NULL;
}

__isl_give isl_pw_qpolynomial *isl_set_card(__isl_take isl_set *set)
{
	isl_pw_qpolynomial *pwqp;
	pwqp = isl_map_card(isl_map_from_range(set));
	pwqp = isl_pw_qpolynomial_project_domain_on_params(pwqp);
	return pwqp;
}

__isl_give isl_pw_qpolynomial *isl_basic_map_card(__isl_take isl_basic_map *bmap)
{
	return isl_map_card(isl_map_from_basic_map(bmap));
}

__isl_give isl_pw_qpolynomial *isl_basic_set_card(__isl_take isl_basic_set *bset)
{
	isl_pw_qpolynomial *pwqp;
	pwqp = isl_basic_map_card(isl_basic_map_from_range(bset));
	pwqp = isl_pw_qpolynomial_project_domain_on_params(pwqp);
	return pwqp;
}

static isl_stat set_card(__isl_take isl_set *set, void *user)
{
	isl_union_pw_qpolynomial **res = (isl_union_pw_qpolynomial **)user;
	isl_pw_qpolynomial *pwqp;
	isl_union_pw_qpolynomial *upwqp;

	pwqp = isl_set_card(set);
	upwqp = isl_union_pw_qpolynomial_from_pw_qpolynomial(pwqp);
	*res = isl_union_pw_qpolynomial_add(*res, upwqp);

	return isl_stat_ok;
}

__isl_give isl_union_pw_qpolynomial *isl_union_set_card(
	__isl_take isl_union_set *uset)
{
	isl_space *dim;
	isl_union_pw_qpolynomial *res;

	dim = isl_union_set_get_space(uset);
	res = isl_union_pw_qpolynomial_zero(dim);
	if (isl_union_set_foreach_set(uset, &set_card, &res) < 0)
		goto error;
	isl_union_set_free(uset);

	return res;
error:
	isl_union_set_free(uset);
	isl_union_pw_qpolynomial_free(res);
	return NULL;
}

static isl_stat map_card(__isl_take isl_map *map, void *user)
{
	isl_union_pw_qpolynomial **res = (isl_union_pw_qpolynomial **)user;
	isl_pw_qpolynomial *pwqp;
	isl_union_pw_qpolynomial *upwqp;

	pwqp = isl_map_card(map);
	upwqp = isl_union_pw_qpolynomial_from_pw_qpolynomial(pwqp);
	*res = isl_union_pw_qpolynomial_add(*res, upwqp);

	return isl_stat_ok;
}

__isl_give isl_union_pw_qpolynomial *isl_union_map_card(
	__isl_take isl_union_map *umap)
{
	isl_space *dim;
	isl_union_pw_qpolynomial *res;

	dim = isl_union_map_get_space(umap);
	res = isl_union_pw_qpolynomial_zero(dim);
	if (isl_union_map_foreach_map(umap, &map_card, &res) < 0)
		goto error;
	isl_union_map_free(umap);

	return res;
error:
	isl_union_map_free(umap);
	isl_union_pw_qpolynomial_free(res);
	return NULL;
}

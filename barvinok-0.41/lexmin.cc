#include <assert.h>
#include <strings.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#define partition STL_PARTITION
#include <algorithm>
#undef partition
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <isl/ctx.h>
#include <isl/set.h>
#include <isl_set_polylib.h>
#include <barvinok/polylib.h>
#include <barvinok/evalue.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "conversion.h"
#include "decomposer.h"
#include "lattice_point.h"
#include "reduce_domain.h"
#include "mat_util.h"
#include "edomain.h"
#include "evalue_util.h"
#include "remove_equalities.h"
#include "polysign.h"
#include "verify.h"
#include "lexmin.h"
#include "param_util.h"

#undef CS   /* for Solaris 10 */

using namespace NTL;

using std::vector;
using std::map;
using std::cerr;
using std::cout;
using std::endl;
using std::ostream;

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

static int type_offset(enode *p)
{
   return p->type == fractional ? 1 : 
	  p->type == flooring ? 1 : 0;
}

void compute_evalue(evalue *e, Value *val, Value *res)
{
    double d = compute_evalue(e, val);
    if (d > 0)
	d += .25;
    else
	d -= .25;
    value_set_double(*res, d);
}

struct indicator_term {
    int sign;
    int pos;		/* number of rational vertex */
    int n;		/* number of cone associated to given rational vertex */
    mat_ZZ den;
    evalue **vertex;

    indicator_term(unsigned dim, int pos) {
	den.SetDims(0, dim);
	vertex = new evalue* [dim];
	this->pos = pos;
	n = -1;
	sign = 0;
    }
    indicator_term(unsigned dim, int pos, int n) {
	den.SetDims(dim, dim);
	vertex = new evalue* [dim];
	this->pos = pos;
	this->n = n;
    }
    indicator_term(const indicator_term& src) {
	sign = src.sign;
	pos = src.pos;
	n = src.n;
	den = src.den;
	unsigned dim = den.NumCols();
	vertex = new evalue* [dim];
	for (int i = 0; i < dim; ++i) {
	    vertex[i] = ALLOC(evalue);
	    value_init(vertex[i]->d);
	    evalue_copy(vertex[i], src.vertex[i]);
	}
    }
    void swap(indicator_term *other) {
	int tmp;
	tmp = sign; sign = other->sign; other->sign = tmp;
	tmp = pos; pos = other->pos; other->pos = tmp;
	tmp = n; n = other->n; other->n = tmp;
	mat_ZZ tmp_den = den; den = other->den; other->den = tmp_den;
	unsigned dim = den.NumCols();
	for (int i = 0; i < dim; ++i) {
	    evalue *tmp = vertex[i];
	    vertex[i] = other->vertex[i];
	    other->vertex[i] = tmp;
	}
    }
    ~indicator_term() {
	unsigned dim = den.NumCols();
	for (int i = 0; i < dim; ++i)
	    evalue_free(vertex[i]);
	delete [] vertex;
    }
    void print(ostream& os, char **p) const;
    void substitute(Matrix *T);
    void normalize();
    void substitute(evalue *fract, evalue *val);
    void substitute(int pos, evalue *val);
    void reduce_in_domain(Polyhedron *D);
    bool is_opposite(const indicator_term *neg) const;
    vec_ZZ eval(Value *val) const {
	vec_ZZ v;
	unsigned dim = den.NumCols();
	v.SetLength(dim);
	Value tmp;
	value_init(tmp);
	for (int i = 0; i < dim; ++i) {
	    compute_evalue(vertex[i], val, &tmp);
	    value2zz(tmp, v[i]);
	}
	value_clear(tmp);
	return v;
    }
};

static int evalue_rational_cmp(const evalue *e1, const evalue *e2)
{
    int r;
    Value m;
    Value m2;
    value_init(m);
    value_init(m2);

    assert(value_notzero_p(e1->d));
    assert(value_notzero_p(e2->d));
    value_multiply(m, e1->x.n, e2->d);
    value_multiply(m2, e2->x.n, e1->d);
    if (value_lt(m, m2))
	r = -1;
    else if (value_gt(m, m2))
	r = 1;
    else 
	r = 0;
    value_clear(m);
    value_clear(m2);

    return r;
}

static int evalue_cmp(const evalue *e1, const evalue *e2)
{
    if (value_notzero_p(e1->d)) {
	if (value_zero_p(e2->d))
	    return -1;
	return evalue_rational_cmp(e1, e2);
    }
    if (value_notzero_p(e2->d))
	return 1;
    if (e1->x.p->type != e2->x.p->type)
	return e1->x.p->type - e2->x.p->type;
    if (e1->x.p->size != e2->x.p->size)
	return e1->x.p->size - e2->x.p->size;
    if (e1->x.p->pos != e2->x.p->pos)
	return e1->x.p->pos - e2->x.p->pos;
    assert(e1->x.p->type == polynomial ||
	   e1->x.p->type == fractional ||
	   e1->x.p->type == flooring);
    for (int i = 0; i < e1->x.p->size; ++i) {
	int s = evalue_cmp(&e1->x.p->arr[i], &e2->x.p->arr[i]);
	if (s)
	    return s;
    }
    return 0;
}

void evalue_length(evalue *e, int len[2])
{
    len[0] = 0;
    len[1] = 0;

    while (value_zero_p(e->d)) {
	assert(e->x.p->type == polynomial ||
	       e->x.p->type == fractional ||
	       e->x.p->type == flooring);
	if (e->x.p->type == polynomial)
	    len[1]++;
	else
	    len[0]++;
	int offset = type_offset(e->x.p);
	assert(e->x.p->size == offset+2);
	e = &e->x.p->arr[offset];
    }
}

static bool it_smaller(const indicator_term* it1, const indicator_term* it2)
{
    if (it1 == it2)
	return false;
    int len1[2], len2[2];
    unsigned dim = it1->den.NumCols();
    for (int i = 0; i < dim; ++i) {
	evalue_length(it1->vertex[i], len1);
	evalue_length(it2->vertex[i], len2);
	if (len1[0] != len2[0])
	    return len1[0] < len2[0];
	if (len1[1] != len2[1])
	    return len1[1] < len2[1];
    }
    if (it1->pos != it2->pos)
	return it1->pos < it2->pos;
    if (it1->n != it2->n)
	return it1->n < it2->n;
    int s = lex_cmp(it1->den, it2->den);
    if (s)
	return s < 0;
    for (int i = 0; i < dim; ++i) {
	s = evalue_cmp(it1->vertex[i], it2->vertex[i]);
	if (s)
	    return s < 0;
    }
    assert(it1->sign != 0);
    assert(it2->sign != 0);
    if (it1->sign != it2->sign)
	return it1->sign > 0;
    return it1 < it2;
}

struct smaller_it {
    static const int requires_resort;
    bool operator()(const indicator_term* it1, const indicator_term* it2) const {
	return it_smaller(it1, it2);
    }
};
const int smaller_it::requires_resort = 1;

struct smaller_it_p {
    static const int requires_resort;
    bool operator()(const indicator_term* it1, const indicator_term* it2) const {
	return it1 < it2;
    }
};
const int smaller_it_p::requires_resort = 0;

/* Returns true if this and neg are opposite using the knowledge
 * that they have the same numerator.
 * In particular, we check that the signs are different and that
 * the denominator is the same.
 */
bool indicator_term::is_opposite(const indicator_term *neg) const
{
    if (sign + neg->sign != 0)
	return false;
    if (den != neg->den)
	return false;
    return true;
}

void indicator_term::reduce_in_domain(Polyhedron *D)
{
    for (int k = 0; k < den.NumCols(); ++k) {
	reduce_evalue_in_domain(vertex[k], D);
	if (evalue_range_reduction_in_domain(vertex[k], D))
	    reduce_evalue(vertex[k]);
    }
}

void indicator_term::print(ostream& os, char **p) const
{
    unsigned dim = den.NumCols();
    unsigned factors = den.NumRows();
    if (sign == 0)
	os << " s ";
    else if (sign > 0)
	os << " + ";
    else
	os << " - ";
    os << '[';
    for (int i = 0; i < dim; ++i) {
	if (i)
	    os << ',';
	evalue_print(os, vertex[i], p);
    }
    os << ']';
    for (int i = 0; i < factors; ++i) {
	os << " + t" << i << "*[";
	for (int j = 0; j < dim; ++j) {
	    if (j)
		os << ',';
	    os << den[i][j];
	}
	os << "]";
    }
    os << " ((" << pos << ", " << n << ", " << (void*)this << "))";
}

/* Perform the substitution specified by T on the variables.
 * T has dimension (newdim+nparam+1) x (olddim + nparam + 1).
 * The substitution is performed as in gen_fun::substitute
 */
void indicator_term::substitute(Matrix *T)
{
    unsigned dim = den.NumCols();
    unsigned nparam = T->NbColumns - dim - 1;
    unsigned newdim = T->NbRows - nparam - 1;
    evalue **newvertex;
    mat_ZZ trans;
    matrix2zz(T, trans, newdim, dim);
    trans = transpose(trans);
    den *= trans;
    newvertex = new evalue* [newdim];

    vec_ZZ v;
    v.SetLength(nparam+1);

    evalue factor;
    value_init(factor.d);
    value_set_si(factor.d, 1);
    value_init(factor.x.n);
    for (int i = 0; i < newdim; ++i) {
	values2zz(T->p[i]+dim, v, nparam+1);
	newvertex[i] = multi_monom(v);

	for (int j = 0; j < dim; ++j) {
	    if (value_zero_p(T->p[i][j]))
		continue;
	    evalue term;
	    value_init(term.d);
	    evalue_copy(&term, vertex[j]);
	    value_assign(factor.x.n, T->p[i][j]);
	    emul(&factor, &term);
	    eadd(&term, newvertex[i]);
	    free_evalue_refs(&term);
	}
    }
    free_evalue_refs(&factor);
    for (int i = 0; i < dim; ++i)
	evalue_free(vertex[i]);
    delete [] vertex;
    vertex = newvertex;
}

static void evalue_add_constant(evalue *e, ZZ v)
{
    Value tmp;
    value_init(tmp);

    /* go down to constant term */
    while (value_zero_p(e->d))
	e = &e->x.p->arr[type_offset(e->x.p)];
    /* and add v */
    zz2value(v, tmp);
    value_multiply(tmp, tmp, e->d);
    value_addto(e->x.n, e->x.n, tmp);

    value_clear(tmp);
}

/* Make all powers in denominator lexico-positive */
void indicator_term::normalize()
{
    vec_ZZ extra_vertex;
    extra_vertex.SetLength(den.NumCols());
    for (int r = 0; r < den.NumRows(); ++r) {
	for (int k = 0; k < den.NumCols(); ++k) {
	    if (den[r][k] == 0)
		continue;
	    if (den[r][k] > 0)
		break;
	    sign = -sign;
	    den[r] = -den[r];
	    extra_vertex += den[r];
	    break;
	}
    }
    for (int k = 0; k < extra_vertex.length(); ++k)
	if (extra_vertex[k] != 0)
	    evalue_add_constant(vertex[k], extra_vertex[k]);
}

static void substitute(evalue *e, evalue *fract, evalue *val)
{
    evalue *t;

    for (t = e; value_zero_p(t->d); t = &t->x.p->arr[type_offset(t->x.p)]) {
	if (t->x.p->type == fractional && eequal(&t->x.p->arr[0], fract))
	    break;
    }
    if (value_notzero_p(t->d))
	return;

    free_evalue_refs(&t->x.p->arr[0]);
    evalue *term = &t->x.p->arr[2];
    enode *p = t->x.p;
    value_clear(t->d);
    *t = t->x.p->arr[1];

    emul(val, term);
    eadd(term, e);
    free_evalue_refs(term);
    free(p);

    reduce_evalue(e);
}

void indicator_term::substitute(evalue *fract, evalue *val)
{
    unsigned dim = den.NumCols();
    for (int i = 0; i < dim; ++i) {
	::substitute(vertex[i], fract, val);
    }
}

static void substitute(evalue *e, int pos, evalue *val)
{
    evalue *t;

    for (t = e; value_zero_p(t->d); t = &t->x.p->arr[type_offset(t->x.p)]) {
	if (t->x.p->type == polynomial && t->x.p->pos == pos)
	    break;
    }
    if (value_notzero_p(t->d))
	return;

    evalue *term = &t->x.p->arr[1];
    enode *p = t->x.p;
    value_clear(t->d);
    *t = t->x.p->arr[0];

    emul(val, term);
    eadd(term, e);
    free_evalue_refs(term);
    free(p);

    reduce_evalue(e);
}

void indicator_term::substitute(int pos, evalue *val)
{
    unsigned dim = den.NumCols();
    for (int i = 0; i < dim; ++i) {
	::substitute(vertex[i], pos, val);
    }
}

struct indicator_constructor : public signed_cone_consumer,
				public vertex_decomposer {
    vec_ZZ vertex;
    vector<indicator_term*> *terms;
    Matrix *T;	/* Transformation to original space */
    int nbV;
    int pos;
    int n;

    indicator_constructor(unsigned dim, Param_Polyhedron *PP, Matrix *T) :
		vertex_decomposer(PP, *this), T(T), nbV(PP->nbV) {
	vertex.SetLength(dim);
	terms = new vector<indicator_term*>[PP->nbV];
    }
    ~indicator_constructor() {
	for (int i = 0; i < nbV; ++i)
	    for (int j = 0; j < terms[i].size(); ++j)
		delete terms[i][j];
	delete [] terms;
    }
    void print(ostream& os, char **p);

    virtual void handle(const signed_cone& sc, barvinok_options *options);
    void decompose_at_vertex(Param_Vertices *V, int _i, 
					    barvinok_options *options) {
	pos = _i;
	n = 0;
	vertex_decomposer::decompose_at_vertex(V, _i, options);
    }
};

void indicator_constructor::handle(const signed_cone& sc, barvinok_options *options)
{
    assert(sc.det == 1);
    unsigned dim = vertex.length();

    assert(sc.rays.NumRows() == dim);

    indicator_term *term = new indicator_term(dim, pos, n++);
    term->sign = sc.sign;
    terms[vert].push_back(term);

    lattice_point(V, sc.rays, vertex, term->vertex, options);

    term->den = sc.rays;
    for (int r = 0; r < dim; ++r) {
	for (int j = 0; j < dim; ++j) {
	    if (term->den[r][j] == 0)
		continue;
	    if (term->den[r][j] > 0)
		break;
	    term->sign = -term->sign;
	    term->den[r] = -term->den[r];
	    vertex += term->den[r];
	    break;
	}
    }

    for (int i = 0; i < dim; ++i) {
	if (!term->vertex[i]) {
	    term->vertex[i] = ALLOC(evalue);
	    value_init(term->vertex[i]->d);
	    value_init(term->vertex[i]->x.n);
	    zz2value(vertex[i], term->vertex[i]->x.n);
	    value_set_si(term->vertex[i]->d, 1);
	    continue;
	}
	if (vertex[i] == 0)
	    continue;
	evalue_add_constant(term->vertex[i], vertex[i]);
    }

    if (T) {
	term->substitute(T);
	term->normalize();
    }

    lex_order_rows(term->den);
}

void indicator_constructor::print(ostream& os, char **p)
{
    for (int i = 0; i < PP->nbV; ++i)
	for (int j = 0; j < terms[i].size(); ++j) {
	    os << "i: " << i << ", j: " << j << endl;
	    terms[i][j]->print(os, p);
	    os << endl;
	}
}

struct order_cache_el {
    vector<evalue *> e;
    order_cache_el copy() const {
	order_cache_el n;
	for (int i = 0; i < e.size(); ++i) {
	    evalue *c = new evalue;
	    value_init(c->d);
	    evalue_copy(c, e[i]);
	    n.e.push_back(c);
	}
	return n;
    }
    void free() {
	for (int i = 0; i < e.size(); ++i) {
	    free_evalue_refs(e[i]); 
	    delete e[i];
	}
    }
    void negate() {
	evalue mone;
	value_init(mone.d);
	evalue_set_si(&mone, -1, 1);
	for (int i = 0; i < e.size(); ++i)
	    emul(&mone, e[i]);
	free_evalue_refs(&mone); 
    }
    void print(ostream& os, char **p);
};

void order_cache_el::print(ostream& os, char **p)
{
    os << "[";
    for (int i = 0; i < e.size(); ++i) {
	if (i)
	    os << ",";
	evalue_print(os, e[i], p);
    }
    os << "]";
}

struct order_cache {
    vector<order_cache_el> lt;
    vector<order_cache_el> le;
    vector<order_cache_el> unknown;

    void clear_transients() {
	for (int i = 0; i < le.size(); ++i)
	    le[i].free();
	for (int i = 0; i < unknown.size(); ++i)
	    unknown[i].free();
	le.clear();
	unknown.clear();
    }
    ~order_cache() {
	clear_transients();
	for (int i = 0; i < lt.size(); ++i)
	    lt[i].free();
	lt.clear();
    }
    void add(order_cache_el& cache_el, order_sign sign);
    order_sign check_lt(vector<order_cache_el>* list,
			const indicator_term *a, const indicator_term *b,
			order_cache_el& cache_el);
    order_sign check_lt(const indicator_term *a, const indicator_term *b,
			order_cache_el& cache_el);
    order_sign check_direct(const indicator_term *a, const indicator_term *b,
			    order_cache_el& cache_el);
    order_sign check(const indicator_term *a, const indicator_term *b,
			order_cache_el& cache_el);
    void copy(const order_cache& cache);
    void print(ostream& os, char **p);
};

void order_cache::copy(const order_cache& cache)
{
    for (int i = 0; i < cache.lt.size(); ++i) {
	order_cache_el n = cache.lt[i].copy();
	add(n, order_lt);
    }
}

void order_cache::add(order_cache_el& cache_el, order_sign sign)
{
    if (sign == order_lt) {
	lt.push_back(cache_el);
    } else if (sign == order_gt) {
	cache_el.negate();
	lt.push_back(cache_el);
    } else if (sign == order_le) {
	le.push_back(cache_el);
    } else if (sign == order_ge) {
	cache_el.negate();
	le.push_back(cache_el);
    } else if (sign == order_unknown) {
	unknown.push_back(cache_el);
    } else {
	assert(sign == order_eq);
	cache_el.free();
    }
    return;
}

/* compute a - b */
static evalue *ediff(const evalue *a, const evalue *b)
{
    evalue mone;
    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);
    evalue *diff = new evalue;
    value_init(diff->d);
    evalue_copy(diff, b);
    emul(&mone, diff);
    eadd(a, diff);
    reduce_evalue(diff);
    free_evalue_refs(&mone); 
    return diff;
}

static bool evalue_first_difference(const evalue *e1, const evalue *e2,
				    const evalue **d1, const evalue **d2)
{
    *d1 = e1;
    *d2 = e2;

    if (value_ne(e1->d, e2->d))
	return true;

    if (value_notzero_p(e1->d)) {
        if (value_eq(e1->x.n, e2->x.n))
	    return false;
	return true;
    }
    if (e1->x.p->type != e2->x.p->type)
	return true;
    if (e1->x.p->size != e2->x.p->size)
	return true;
    if (e1->x.p->pos != e2->x.p->pos)
	return true;

    assert(e1->x.p->type == polynomial ||
	   e1->x.p->type == fractional ||
	   e1->x.p->type == flooring);
    int offset = type_offset(e1->x.p);
    assert(e1->x.p->size == offset+2);
    for (int i = 0; i < e1->x.p->size; ++i)
	if (i != type_offset(e1->x.p) &&
	    !eequal(&e1->x.p->arr[i], &e2->x.p->arr[i])) 
		return true;

    return evalue_first_difference(&e1->x.p->arr[offset],
				   &e2->x.p->arr[offset], d1, d2);
}

static order_sign evalue_diff_constant_sign(const evalue *e1, const evalue *e2)
{
    if (!evalue_first_difference(e1, e2, &e1, &e2))
	return order_eq;
    if (value_zero_p(e1->d) || value_zero_p(e2->d))
	return order_undefined;
    int s = evalue_rational_cmp(e1, e2);
    if (s < 0)
	return order_lt;
    else if (s > 0)
	return order_gt;
    else
	return order_eq;
}

order_sign order_cache::check_lt(vector<order_cache_el>* list,
				  const indicator_term *a, const indicator_term *b,
				  order_cache_el& cache_el)
{
    order_sign sign = order_undefined;
    for (int i = 0; i < list->size(); ++i) {
	int j;
	for (j = cache_el.e.size(); j < (*list)[i].e.size(); ++j)
	    cache_el.e.push_back(ediff(a->vertex[j], b->vertex[j]));
	for (j = 0; j < (*list)[i].e.size(); ++j) {
	    order_sign diff_sign;
	    diff_sign = evalue_diff_constant_sign((*list)[i].e[j], cache_el.e[j]);
	    if (diff_sign == order_gt) {
		sign = order_lt;
		break;
	    } else if (diff_sign == order_lt)
		break;
	    else if (diff_sign == order_undefined)
		break;
	    else
		assert(diff_sign == order_eq);
	}
	if (j == (*list)[i].e.size())
	    sign = list == &lt ? order_lt : order_le;
	if (sign != order_undefined)
	    break;
    }
    return sign;
}

order_sign order_cache::check_direct(const indicator_term *a,
				     const indicator_term *b,
				     order_cache_el& cache_el)
{
    order_sign sign = check_lt(&lt, a, b, cache_el);
    if (sign != order_undefined)
	return sign;
    sign = check_lt(&le, a, b, cache_el);
    if (sign != order_undefined)
	return sign;

    for (int i = 0; i < unknown.size(); ++i) {
	int j;
	for (j = cache_el.e.size(); j < unknown[i].e.size(); ++j)
	    cache_el.e.push_back(ediff(a->vertex[j], b->vertex[j]));
	for (j = 0; j < unknown[i].e.size(); ++j) {
	    if (!eequal(unknown[i].e[j], cache_el.e[j]))
		break;
	}
	if (j == unknown[i].e.size()) {
	    sign = order_unknown;
	    break;
	}
    }
    return sign;
}

order_sign order_cache::check(const indicator_term *a, const indicator_term *b,
			      order_cache_el& cache_el)
{
    order_sign sign = check_direct(a, b, cache_el);
    if (sign != order_undefined)
	return sign;
    int size = cache_el.e.size();
    cache_el.negate();
    sign = check_direct(a, b, cache_el);
    cache_el.negate();
    assert(cache_el.e.size() == size);
    if (sign == order_undefined)
	return sign;
    if (sign == order_lt)
	sign = order_gt;
    else if (sign == order_le)
	sign = order_ge;
    else
	assert(sign == order_unknown);
    return sign;
}

struct indicator;

struct partial_order {
    indicator *ind;

    typedef std::set<const indicator_term *, smaller_it > head_type;
    head_type head;
    typedef map<const indicator_term *, int, smaller_it > pred_type;
    pred_type pred;
    typedef map<const indicator_term *, vector<const indicator_term * >, smaller_it > order_type;
    order_type lt;
    order_type le;
    order_type eq;

    order_type pending;

    order_cache	    cache;

    partial_order(indicator *ind) : ind(ind) {}
    void copy(const partial_order& order, 
	      map< const indicator_term *, indicator_term * > old2new);
    void resort() {
	order_type::iterator i;
	pred_type::iterator j;
	head_type::iterator k;

	if (head.key_comp().requires_resort) {
	    head_type new_head;
	    for (k = head.begin(); k != head.end(); ++k)
		new_head.insert(*k);
	    head.swap(new_head);
	    new_head.clear();
	}

	if (pred.key_comp().requires_resort) {
	    pred_type new_pred;
	    for (j = pred.begin(); j != pred.end(); ++j)
		new_pred[(*j).first] = (*j).second;
	    pred.swap(new_pred);
	    new_pred.clear();
	}

	if (lt.key_comp().requires_resort) {
	    order_type m;
	    for (i = lt.begin(); i != lt.end(); ++i)
		m[(*i).first] = (*i).second;
	    lt.swap(m);
	    m.clear();
	}

	if (le.key_comp().requires_resort) {
	    order_type m;
	    for (i = le.begin(); i != le.end(); ++i)
		m[(*i).first] = (*i).second;
	    le.swap(m);
	    m.clear();
	}

	if (eq.key_comp().requires_resort) {
	    order_type m;
	    for (i = eq.begin(); i != eq.end(); ++i)
		m[(*i).first] = (*i).second;
	    eq.swap(m);
	    m.clear();
	}

	if (pending.key_comp().requires_resort) {
	    order_type m;
	    for (i = pending.begin(); i != pending.end(); ++i)
		m[(*i).first] = (*i).second;
	    pending.swap(m);
	    m.clear();
	}
    }

    order_sign compare(const indicator_term *a, const indicator_term *b);
    void set_equal(const indicator_term *a, const indicator_term *b);
    void unset_le(const indicator_term *a, const indicator_term *b);
    void dec_pred(const indicator_term *it) {
	if (--pred[it] == 0) {
	    pred.erase(it);
	    head.insert(it);
	}
    }
    void inc_pred(const indicator_term *it) {
	if (head.find(it) != head.end())
	    head.erase(it);
	pred[it]++;
    }

    bool compared(const indicator_term* a, const indicator_term* b);
    void add(const indicator_term* it, std::set<const indicator_term *> *filter);
    void remove(const indicator_term* it);

    void print(ostream& os, char **p);

    /* replace references to orig to references to replacement */
    void replace(const indicator_term* orig, indicator_term* replacement);
    void sanity_check() const;
};

/* We actually replace the contents of orig by that of replacement,
 * but we have to be careful since replacing the content changes
 * the order of orig in the maps.
 */
void partial_order::replace(const indicator_term* orig, indicator_term* replacement)
{
    head_type::iterator k;
    k = head.find(orig);
    bool is_head = k != head.end();
    int orig_pred;
    if (is_head) {
	head.erase(orig);
    } else {
	orig_pred = pred[orig];
	pred.erase(orig);
    }
    vector<const indicator_term * > orig_lt;
    vector<const indicator_term * > orig_le;
    vector<const indicator_term * > orig_eq;
    vector<const indicator_term * > orig_pending;
    order_type::iterator i;
    bool in_lt = ((i = lt.find(orig)) != lt.end());
    if (in_lt) {
	orig_lt = (*i).second;
	lt.erase(orig);
    }
    bool in_le = ((i = le.find(orig)) != le.end());
    if (in_le) {
	orig_le = (*i).second;
	le.erase(orig);
    }
    bool in_eq = ((i = eq.find(orig)) != eq.end());
    if (in_eq) {
	orig_eq = (*i).second;
	eq.erase(orig);
    }
    bool in_pending = ((i = pending.find(orig)) != pending.end());
    if (in_pending) {
	orig_pending = (*i).second;
	pending.erase(orig);
    }
    indicator_term *old = const_cast<indicator_term *>(orig);
    old->swap(replacement);
    if (is_head)
	head.insert(old);
    else
	pred[old] = orig_pred;
    if (in_lt)
	lt[old] = orig_lt;
    if (in_le)
	le[old] = orig_le;
    if (in_eq)
	eq[old] = orig_eq;
    if (in_pending)
	pending[old] = orig_pending;
}

void partial_order::unset_le(const indicator_term *a, const indicator_term *b)
{
    vector<const indicator_term *>::iterator i;
    i = std::find(le[a].begin(), le[a].end(), b);
    le[a].erase(i);
    if (le[a].size() == 0)
	le.erase(a);
    dec_pred(b);
    i = std::find(pending[a].begin(), pending[a].end(), b);
    if (i != pending[a].end())
	pending[a].erase(i);
}

void partial_order::set_equal(const indicator_term *a, const indicator_term *b)
{
    if (eq[a].size() == 0)
	eq[a].push_back(a);
    if (eq[b].size() == 0)
	eq[b].push_back(b);
    a = eq[a][0];
    b = eq[b][0];
    assert(a != b);
    if (pred.key_comp()(b, a)) {
	const indicator_term *c = a;
	a = b;
	b = c;
    }

    const indicator_term *base = a;

    order_type::iterator i;

    for (int j = 0; j < eq[b].size(); ++j) {
	eq[base].push_back(eq[b][j]);
	eq[eq[b][j]][0] = base;
    }
    eq[b].resize(1);

    i = lt.find(b);
    if (i != lt.end()) {
	for (int j = 0; j < lt[b].size(); ++j) {
	    if (std::find(eq[base].begin(), eq[base].end(), lt[b][j]) != eq[base].end())
		dec_pred(lt[b][j]);
	    else if (std::find(lt[base].begin(), lt[base].end(), lt[b][j])
			!= lt[base].end())
		dec_pred(lt[b][j]);
	    else
		lt[base].push_back(lt[b][j]);
	}
	lt.erase(b);
    }

    i = le.find(b);
    if (i != le.end()) {
	for (int j = 0; j < le[b].size(); ++j) {
	    if (std::find(eq[base].begin(), eq[base].end(), le[b][j]) != eq[base].end())
		dec_pred(le[b][j]);
	    else if (std::find(le[base].begin(), le[base].end(), le[b][j])
			!= le[base].end())
		dec_pred(le[b][j]);
	    else
		le[base].push_back(le[b][j]);
	}
	le.erase(b);
    }

    i = pending.find(base);
    if (i != pending.end()) {
	vector<const indicator_term * > old = pending[base];
	pending[base].clear();
	for (int j = 0; j < old.size(); ++j) {
	    if (std::find(eq[base].begin(), eq[base].end(), old[j]) == eq[base].end())
		pending[base].push_back(old[j]);
	}
    }

    i = pending.find(b);
    if (i != pending.end()) {
	for (int j = 0; j < pending[b].size(); ++j) {
	    if (std::find(eq[base].begin(), eq[base].end(), pending[b][j]) == eq[base].end())
		pending[base].push_back(pending[b][j]);
	}
	pending.erase(b);
    }
}

void partial_order::copy(const partial_order& order, 
		         map< const indicator_term *, indicator_term * > old2new)
{
    cache.copy(order.cache);

    order_type::const_iterator i;
    pred_type::const_iterator j;
    head_type::const_iterator k;

    for (k = order.head.begin(); k != order.head.end(); ++k)
	head.insert(old2new[*k]);

    for (j = order.pred.begin(); j != order.pred.end(); ++j)
	pred[old2new[(*j).first]] = (*j).second;

    for (i = order.lt.begin(); i != order.lt.end(); ++i) {
	for (int j = 0; j < (*i).second.size(); ++j)
	    lt[old2new[(*i).first]].push_back(old2new[(*i).second[j]]);
    }
    for (i = order.le.begin(); i != order.le.end(); ++i) {
	for (int j = 0; j < (*i).second.size(); ++j)
	    le[old2new[(*i).first]].push_back(old2new[(*i).second[j]]);
    }
    for (i = order.eq.begin(); i != order.eq.end(); ++i) {
	for (int j = 0; j < (*i).second.size(); ++j)
	    eq[old2new[(*i).first]].push_back(old2new[(*i).second[j]]);
    }
    for (i = order.pending.begin(); i != order.pending.end(); ++i) {
	for (int j = 0; j < (*i).second.size(); ++j)
	    pending[old2new[(*i).first]].push_back(old2new[(*i).second[j]]);
    }
}

struct max_term {
    EDomain *domain;
    vector<evalue *> max;

    void print(ostream& os, char **p, barvinok_options *options) const;
    void substitute(Matrix *T, barvinok_options *options);
    Vector *eval(Value *val, unsigned MaxRays) const;

    ~max_term() {
	for (int i = 0; i < max.size(); ++i) {
	    free_evalue_refs(max[i]);
	    delete max[i];
	}
	delete domain;
    }
};

/*
 * Project on first dim dimensions
 */
Polyhedron* Polyhedron_Project_Initial(Polyhedron *P, int dim)
{
    int i;
    Matrix *T;
    Polyhedron *I;

    if (P->Dimension == dim)
	return Polyhedron_Copy(P);

    T = Matrix_Alloc(dim+1, P->Dimension+1);
    for (i = 0; i < dim; ++i)
	value_set_si(T->p[i][i], 1);
    value_set_si(T->p[dim][P->Dimension], 1);
    I = Polyhedron_Image(P, T, P->NbConstraints);
    Matrix_Free(T);
    return I;
}

struct indicator {
    vector<indicator_term*> term;
    indicator_constructor& ic;
    partial_order order;
    EDomain	 *D;
    Polyhedron	 *P;
    Param_Domain *PD;
    lexmin_options	*options;
    vector<evalue *>	substitutions;

    indicator(indicator_constructor& ic, Param_Domain *PD, EDomain *D,
	      lexmin_options *options) :
	ic(ic), order(this), D(D), P(NULL), PD(PD), options(options) {}
    indicator(const indicator& ind, EDomain *D) :
	    ic(ind.ic), order(this), D(NULL), P(Polyhedron_Copy(ind.P)),
	    PD(ind.PD), options(ind.options) {
	map< const indicator_term *, indicator_term * > old2new;
	for (int i = 0; i < ind.term.size(); ++i) {
	    indicator_term *it = new indicator_term(*ind.term[i]);
	    old2new[ind.term[i]] = it;
	    term.push_back(it);
	}
	order.copy(ind.order, old2new);
	set_domain(D);
    }
    ~indicator() {
	for (int i = 0; i < term.size(); ++i)
	    delete term[i];
	if (D)
	    delete D;
	if (P)
	    Polyhedron_Free(P);
    }

    void set_domain(EDomain *D) {
	order.cache.clear_transients();
	if (this->D)
	    delete this->D;
	this->D = D;
	int nparam = ic.PP->Constraints->NbColumns-2 - ic.vertex.length();
	if (options->reduce) {
	    Polyhedron *Q = Polyhedron_Project_Initial(D->D, nparam);
	    Q = DomainConstraintSimplify(Q, options->verify->barvinok->MaxRays);
	    if (!P || !PolyhedronIncludes(Q, P))
		reduce_in_domain(Q);
	    if (P)
		Polyhedron_Free(P);
	    P = Q;
	    order.resort();
	}
    }

    void add(const indicator_term* it);
    void remove(const indicator_term* it);
    void remove_initial_rational_vertices();
    void expand_rational_vertex(const indicator_term *initial);

    void print(ostream& os, char **p);
    void simplify();
    void peel(int i, int j);
    void combine(const indicator_term *a, const indicator_term *b);
    void add_substitution(evalue *equation);
    void perform_pending_substitutions();
    void reduce_in_domain(Polyhedron *D);
    bool handle_equal_numerators(const indicator_term *base);

    max_term* create_max_term(const indicator_term *it);
private:
    void substitute(evalue *equation);
};

void partial_order::sanity_check() const
{
    order_type::const_iterator i;
    order_type::const_iterator prev;
    order_type::const_iterator l;
    pred_type::const_iterator k, prev_k;

    for (k = pred.begin(); k != pred.end(); prev_k = k, ++k)
	if (k != pred.begin())
	    assert(pred.key_comp()((*prev_k).first, (*k).first));
    for (i = lt.begin(); i != lt.end(); prev = i, ++i) {
	vec_ZZ i_v;
	if (ind->D->sample)
	    i_v = (*i).first->eval(ind->D->sample->p);
	if (i != lt.begin())
	    assert(lt.key_comp()((*prev).first, (*i).first));
	l = eq.find((*i).first);
	if (l != eq.end())
	    assert((*l).second.size() > 1);
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	for (int j = 0; j < (*i).second.size(); ++j) {
	    k = pred.find((*i).second[j]);
	    assert(k != pred.end());
	    assert((*k).second != 0);
	    if ((*i).first->sign != 0 &&
		    (*i).second[j]->sign != 0 && ind->D->sample) {
		vec_ZZ j_v = (*i).second[j]->eval(ind->D->sample->p);
		assert(lex_cmp(i_v, j_v) < 0);
	    }
	}
    }
    for (i = le.begin(); i != le.end(); ++i) {
	assert((*i).second.size() > 0);
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	for (int j = 0; j < (*i).second.size(); ++j) {
	    k = pred.find((*i).second[j]);
	    assert(k != pred.end());
	    assert((*k).second != 0);
	}
    }
    for (i = eq.begin(); i != eq.end(); ++i) {
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	assert((*i).second.size() >= 1);
    }
    for (i = pending.begin(); i != pending.end(); ++i) {
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	for (int j = 0; j < (*i).second.size(); ++j)
	    assert(head.find((*i).second[j]) != head.end() ||
		   pred.find((*i).second[j]) != pred.end());
    }
}

max_term* indicator::create_max_term(const indicator_term *it)
{
    int dim = it->den.NumCols();
    max_term *maximum = new max_term;
    maximum->domain = new EDomain(D);
    for (int j = 0; j < dim; ++j) {
	evalue *E = new evalue;
	value_init(E->d);
	evalue_copy(E, it->vertex[j]);
	if (evalue_frac2floor_in_domain(E, D->D))
	    reduce_evalue(E);
	maximum->max.push_back(E);
    }
    return maximum;
}

static order_sign evalue_sign(evalue *diff, EDomain *D, barvinok_options *options)
{
    order_sign sign = order_eq;
    evalue mone;
    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);
    int len = 1 + D->D->Dimension + 1;
    Vector *c = Vector_Alloc(len);
    Matrix *T = Matrix_Alloc(2, len-1);

    int fract = evalue2constraint(D, diff, c->p, len);
    Vector_Copy(c->p+1, T->p[0], len-1);
    value_assign(T->p[1][len-2], c->p[0]);

    order_sign upper_sign = polyhedron_affine_sign(D->D, T, options);
    if (upper_sign == order_lt || !fract)
	sign = upper_sign;
    else {
	emul(&mone, diff);
	evalue2constraint(D, diff, c->p, len);
	emul(&mone, diff);
	Vector_Copy(c->p+1, T->p[0], len-1);
	value_assign(T->p[1][len-2], c->p[0]);

	order_sign neg_lower_sign = polyhedron_affine_sign(D->D, T, options);

	if (neg_lower_sign == order_lt)
	    sign = order_gt;
	else if (neg_lower_sign == order_eq || neg_lower_sign == order_le) {
	    if (upper_sign == order_eq || upper_sign == order_le)
		sign = order_eq;
	    else
		sign = order_ge;
	} else {
	    if (upper_sign == order_lt || upper_sign == order_le ||
					  upper_sign == order_eq)
		sign = order_le;
	    else
		sign = order_unknown;
	}
    }

    Matrix_Free(T);
    Vector_Free(c);
    free_evalue_refs(&mone); 

    return sign;
}

/* An auxiliary class that keeps a reference to an evalue
 * and frees it when it goes out of scope.
 */
struct temp_evalue {
    evalue *E;
    temp_evalue() : E(NULL) {}
    temp_evalue(evalue *e) : E(e) {}
    operator evalue* () const { return E; }
    evalue *operator=(evalue *e) {
	if (E) {
	    free_evalue_refs(E); 
	    delete E;
	}
	E = e;
	return E;
    }
    ~temp_evalue() {
	if (E) {
	    free_evalue_refs(E); 
	    delete E;
	}
    }
};

static void substitute(vector<indicator_term*>& term, evalue *equation)
{
    evalue *fract = NULL;
    evalue *val = new evalue;
    value_init(val->d);
    evalue_copy(val, equation);

    evalue factor;
    value_init(factor.d);
    value_init(factor.x.n);

    evalue *e;
    for (e = val; value_zero_p(e->d) && e->x.p->type != fractional;
	 e = &e->x.p->arr[type_offset(e->x.p)])
	;

    if (value_zero_p(e->d) && e->x.p->type == fractional)
	fract = &e->x.p->arr[0];
    else {
	for (e = val; value_zero_p(e->d) && e->x.p->type != polynomial;
	     e = &e->x.p->arr[type_offset(e->x.p)])
	    ;
	assert(value_zero_p(e->d) && e->x.p->type == polynomial);
    }

    int offset = type_offset(e->x.p);

    assert(value_notzero_p(e->x.p->arr[offset+1].d));
    assert(value_notzero_p(e->x.p->arr[offset+1].x.n));
    if (value_neg_p(e->x.p->arr[offset+1].x.n)) {
	value_oppose(factor.d, e->x.p->arr[offset+1].x.n);
	value_assign(factor.x.n, e->x.p->arr[offset+1].d);
    } else {
	value_assign(factor.d, e->x.p->arr[offset+1].x.n);
	value_oppose(factor.x.n, e->x.p->arr[offset+1].d);
    }

    free_evalue_refs(&e->x.p->arr[offset+1]);
    enode *p = e->x.p;
    value_clear(e->d);
    *e = e->x.p->arr[offset];

    emul(&factor, val);

    if (fract) {
	for (int i = 0; i < term.size(); ++i)
	    term[i]->substitute(fract, val);

	free_evalue_refs(&p->arr[0]);
    } else {
	for (int i = 0; i < term.size(); ++i)
	    term[i]->substitute(p->pos, val);
    }

    free_evalue_refs(&factor);
    free_evalue_refs(val);
    delete val;

    free(p);
}

order_sign partial_order::compare(const indicator_term *a, const indicator_term *b)
{
    unsigned dim = a->den.NumCols();
    order_sign sign = order_eq;
    bool rational = a->sign == 0 || b->sign == 0;

    order_sign cached_sign = order_eq;
    for (int k = 0; k < dim; ++k) {
	cached_sign = evalue_diff_constant_sign(a->vertex[k], b->vertex[k]);
	if (cached_sign != order_eq)
	    break;
    }
    if (cached_sign != order_undefined)
	return cached_sign;

    order_cache_el cache_el;
    cached_sign = order_undefined;
    if (!rational)
	cached_sign = cache.check(a, b, cache_el);
    if (cached_sign != order_undefined) {
	cache_el.free();
	return cached_sign;
    }

    sign = order_eq;

    vector<indicator_term *> term;

    for (int k = 0; k < dim; ++k) {
	/* compute a->vertex[k] - b->vertex[k] */
	evalue *diff;
	if (cache_el.e.size() <= k) {
	    diff = ediff(a->vertex[k], b->vertex[k]);
	    cache_el.e.push_back(diff);
	} else
	    diff = cache_el.e[k];
	temp_evalue tdiff;
	if (term.size())
	    tdiff = diff = ediff(term[0]->vertex[k], term[1]->vertex[k]);
	order_sign diff_sign;
	if (eequal(a->vertex[k], b->vertex[k]))
	    diff_sign = order_eq;
	else
	    diff_sign = evalue_sign(diff, ind->D,
					ind->options->verify->barvinok);

	if (diff_sign == order_undefined) {
	    assert(sign == order_le || sign == order_ge);
	    if (sign == order_le)
		sign = order_lt;
	    else
		sign = order_gt;
	    break;
	}
	if (diff_sign == order_lt) {
	    if (sign == order_eq || sign == order_le)
		sign = order_lt;
	    else
		sign = order_unknown;
	    break;
	}
	if (diff_sign == order_gt) {
	    if (sign == order_eq || sign == order_ge)
		sign = order_gt;
	    else
		sign = order_unknown;
	    break;
	}
	if (diff_sign == order_eq) {
	    if (term.size() == 0 && !rational && !EVALUE_IS_ZERO(*diff))
		ind->add_substitution(diff);
	    continue;
	}
	if ((diff_sign == order_unknown) ||
	    ((diff_sign == order_lt || diff_sign == order_le) && sign == order_ge) ||
	    ((diff_sign == order_gt || diff_sign == order_ge) && sign == order_le)) {
	    sign = order_unknown;
	    break;
	}

	sign = diff_sign;

	if (!term.size()) {
	    term.push_back(new indicator_term(*a));
	    term.push_back(new indicator_term(*b));
	}
	substitute(term, diff);
    }

    if (!rational)
	cache.add(cache_el, sign);
    else
	cache_el.free();

    if (term.size()) {
	delete term[0];
	delete term[1];
    }

    return sign;
}

bool partial_order::compared(const indicator_term* a, const indicator_term* b)
{
    order_type::iterator j;

    j = lt.find(a);
    if (j != lt.end() && std::find(lt[a].begin(), lt[a].end(), b) != lt[a].end())
	return true;

    j = le.find(a);
    if (j != le.end() && std::find(le[a].begin(), le[a].end(), b) != le[a].end())
	return true;

    return false;
}

void partial_order::add(const indicator_term* it,
			std::set<const indicator_term *> *filter)
{
    if (eq.find(it) != eq.end() && eq[it].size() == 1)
	return;

    head_type head_copy(head);

    if (!filter)
	head.insert(it);

    head_type::iterator i;
    for (i = head_copy.begin(); i != head_copy.end(); ++i) {
	if (*i == it)
	    continue;
	if (eq.find(*i) != eq.end() && eq[*i].size() == 1)
	    continue;
	if (filter) {
	    if (filter->find(*i) == filter->end())
		continue;
	    if (compared(*i, it))
		continue;
	}
	order_sign sign = compare(it, *i);
	if (sign == order_lt) {
	    lt[it].push_back(*i);
	    inc_pred(*i);
	} else if (sign == order_le) {
	    le[it].push_back(*i);
	    inc_pred(*i);
	} else if (sign == order_eq) {
	    set_equal(it, *i);
	    return;
	} else if (sign == order_gt) {
	    pending[*i].push_back(it);
	    lt[*i].push_back(it);
	    inc_pred(it);
	} else if (sign == order_ge) {
	    pending[*i].push_back(it);
	    le[*i].push_back(it);
	    inc_pred(it);
	}
    }
}

void partial_order::remove(const indicator_term* it)
{
    std::set<const indicator_term *> filter;
    order_type::iterator i;

    assert(head.find(it) != head.end());

    i = eq.find(it);
    if (i != eq.end()) {
	assert(eq[it].size() >= 1);
	const indicator_term *base;
	if (eq[it].size() == 1) {
	    base = eq[it][0];
	    eq.erase(it);

	    vector<const indicator_term * >::iterator j;
	    j = std::find(eq[base].begin(), eq[base].end(), it);
	    assert(j != eq[base].end());
	    eq[base].erase(j);
	} else {
	    /* "it" may no longer be the smallest, since the order
	     * structure may have been copied from another one.
	     */
	    std::sort(eq[it].begin()+1, eq[it].end(), pred.key_comp());
	    assert(eq[it][0] == it);
	    eq[it].erase(eq[it].begin());
	    base = eq[it][0];
	    eq[base] = eq[it];
	    eq.erase(it);

	    for (int j = 1; j < eq[base].size(); ++j)
		eq[eq[base][j]][0] = base;

	    i = lt.find(it);
	    if (i != lt.end()) {
		lt[base] = lt[it];
		lt.erase(it);
	    }
	
	    i = le.find(it);
	    if (i != le.end()) {
		le[base] = le[it];
		le.erase(it);
	    }
	
	    i = pending.find(it);
	    if (i != pending.end()) {
		pending[base] = pending[it];
		pending.erase(it);
	    }
	}

	if (eq[base].size() == 1)
	    eq.erase(base);

	head.erase(it);

	return;
    }

    i = lt.find(it);
    if (i != lt.end()) {
	for (int j = 0; j < lt[it].size(); ++j) {
	    filter.insert(lt[it][j]);
	    dec_pred(lt[it][j]);
	}
	lt.erase(it);
    }

    i = le.find(it);
    if (i != le.end()) {
	for (int j = 0; j < le[it].size(); ++j) {
	    filter.insert(le[it][j]);
	    dec_pred(le[it][j]);
	}
	le.erase(it);
    }

    head.erase(it);

    i = pending.find(it);
    if (i != pending.end()) {
	vector<const indicator_term *> it_pending = pending[it];
	pending.erase(it);
	for (int j = 0; j < it_pending.size(); ++j) {
	    filter.erase(it_pending[j]);
	    add(it_pending[j], &filter);
	}
    }
}

void partial_order::print(ostream& os, char **p)
{
    order_type::iterator i;
    pred_type::iterator j;
    head_type::iterator k;
    for (k = head.begin(); k != head.end(); ++k) {
	(*k)->print(os, p);
	os << endl;
    }
    for (j = pred.begin(); j != pred.end(); ++j) {
	(*j).first->print(os, p);
	os << ": " <<  (*j).second << endl;
    }
    for (i = lt.begin(); i != lt.end(); ++i) {
	(*i).first->print(os, p);
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	if (pred.find((*i).first) != pred.end())
	    os << "(" << pred[(*i).first] << ")";
	os << " < ";
	for (int j = 0; j < (*i).second.size(); ++j) {
	    if (j)
		os << ", ";
	    (*i).second[j]->print(os, p);
	    assert(pred.find((*i).second[j]) != pred.end());
	    os << "(" << pred[(*i).second[j]] << ")";
	}
	os << endl;
    }
    for (i = le.begin(); i != le.end(); ++i) {
	(*i).first->print(os, p);
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	if (pred.find((*i).first) != pred.end())
	    os << "(" << pred[(*i).first] << ")";
	os << " <= ";
	for (int j = 0; j < (*i).second.size(); ++j) {
	    if (j)
		os << ", ";
	    (*i).second[j]->print(os, p);
	    assert(pred.find((*i).second[j]) != pred.end());
	    os << "(" << pred[(*i).second[j]] << ")";
	}
	os << endl;
    }
    for (i = eq.begin(); i != eq.end(); ++i) {
	if ((*i).second.size() <= 1)
	    continue;
	(*i).first->print(os, p);
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	if (pred.find((*i).first) != pred.end())
	    os << "(" << pred[(*i).first] << ")";
	for (int j = 1; j < (*i).second.size(); ++j) {
	    if (j)
		os << " = ";
	    (*i).second[j]->print(os, p);
	    assert(head.find((*i).second[j]) != head.end() ||
		   pred.find((*i).second[j]) != pred.end());
	    if (pred.find((*i).second[j]) != pred.end())
		os << "(" << pred[(*i).second[j]] << ")";
	}
	os << endl;
    }
    for (i = pending.begin(); i != pending.end(); ++i) {
	os << "pending on ";
	(*i).first->print(os, p);
	assert(head.find((*i).first) != head.end() ||
	       pred.find((*i).first) != pred.end());
	if (pred.find((*i).first) != pred.end())
	    os << "(" << pred[(*i).first] << ")";
	os << ": ";
	for (int j = 0; j < (*i).second.size(); ++j) {
	    if (j)
		os << ", ";
	    (*i).second[j]->print(os, p);
	    assert(pred.find((*i).second[j]) != pred.end());
	    os << "(" << pred[(*i).second[j]] << ")";
	}
	os << endl;
    }
}

void indicator::add(const indicator_term* it)
{
    indicator_term *nt = new indicator_term(*it);
    if (options->reduce)
	nt->reduce_in_domain(P ? P : D->D);
    term.push_back(nt);
    order.add(nt, NULL);
    assert(term.size() == order.head.size() + order.pred.size());
}

void indicator::remove(const indicator_term* it)
{
    vector<indicator_term *>::iterator i;
    i = std::find(term.begin(), term.end(), it);
    assert(i!= term.end());
    order.remove(it);
    term.erase(i);
    assert(term.size() == order.head.size() + order.pred.size());
    delete it;
}

void indicator::expand_rational_vertex(const indicator_term *initial)
{
    int pos = initial->pos;
    remove(initial);
    if (ic.terms[pos].size() == 0) {
	Param_Vertices *V;
	FORALL_PVertex_in_ParamPolyhedron(V, PD, ic.PP) // _i is internal counter
	    if (_i == pos) {
		ic.decompose_at_vertex(V, pos, options->verify->barvinok);
		break;
	    }
	END_FORALL_PVertex_in_ParamPolyhedron;
    }
    for (int j = 0; j < ic.terms[pos].size(); ++j)
	add(ic.terms[pos][j]);
}

void indicator::remove_initial_rational_vertices()
{
    do {
	const indicator_term *initial = NULL;
	partial_order::head_type::iterator i;
	for (i = order.head.begin(); i != order.head.end(); ++i) {
	    if ((*i)->sign != 0)
		continue;
	    if (order.eq.find(*i) != order.eq.end() && order.eq[*i].size() <= 1)
		continue;
	    initial = *i;
	    break;
	}
	if (!initial)
	    break;
	expand_rational_vertex(initial);
    } while(1);
}

void indicator::reduce_in_domain(Polyhedron *D)
{
    for (int i = 0; i < term.size(); ++i)
	term[i]->reduce_in_domain(D);
}

void indicator::print(ostream& os, char **p)
{
    assert(term.size() == order.head.size() + order.pred.size());
    for (int i = 0; i < term.size(); ++i) {
	term[i]->print(os, p);
	if (D->sample) {
	    os << ": " << term[i]->eval(D->sample->p);
	}
	os << endl;
    }
    order.print(os, p);
}

/* Remove pairs of opposite terms */
void indicator::simplify()
{
    for (int i = 0; i < term.size(); ++i) {
	for (int j = i+1; j < term.size(); ++j) {
	    if (term[i]->sign + term[j]->sign != 0)
		continue;
	    if (term[i]->den != term[j]->den)
		continue;
	    int k;
	    for (k = 0; k < term[i]->den.NumCols(); ++k)
		if (!eequal(term[i]->vertex[k], term[j]->vertex[k]))
		    break;
	    if (k < term[i]->den.NumCols())
		continue;
	    delete term[i];
	    delete term[j];
	    term.erase(term.begin()+j);
	    term.erase(term.begin()+i);
	    --i;
	    break;
	}
    }
}

void indicator::peel(int i, int j)
{
    if (j < i) {
	int tmp = i;
	i = j;
	j = tmp;
    }
    assert (i < j);
    int dim = term[i]->den.NumCols();

    mat_ZZ common;
    mat_ZZ rest_i;
    mat_ZZ rest_j;
    int n_common = 0, n_i = 0, n_j = 0;

    common.SetDims(min(term[i]->den.NumRows(), term[j]->den.NumRows()), dim);
    rest_i.SetDims(term[i]->den.NumRows(), dim);
    rest_j.SetDims(term[j]->den.NumRows(), dim);

    int k, l;
    for (k = 0, l = 0; k < term[i]->den.NumRows() && l < term[j]->den.NumRows(); ) {
	int s = lex_cmp(term[i]->den[k], term[j]->den[l]);
	if (s == 0) {
	    common[n_common++] = term[i]->den[k];
	    ++k;
	    ++l;
	} else if (s < 0)
	    rest_i[n_i++] = term[i]->den[k++];
	else
	    rest_j[n_j++] = term[j]->den[l++];
    }
    while (k < term[i]->den.NumRows())
	rest_i[n_i++] = term[i]->den[k++];
    while (l < term[j]->den.NumRows())
	rest_j[n_j++] = term[j]->den[l++];
    common.SetDims(n_common, dim);
    rest_i.SetDims(n_i, dim);
    rest_j.SetDims(n_j, dim);

    for (k = 0; k <= n_i; ++k) {
	indicator_term *it = new indicator_term(*term[i]);
	it->den.SetDims(n_common + k, dim);
	for (l = 0; l < n_common; ++l)
	    it->den[l] = common[l];
	for (l = 0; l < k; ++l)
	    it->den[n_common+l] = rest_i[l];
	lex_order_rows(it->den);
	if (k)
	    for (l = 0; l < dim; ++l)
		evalue_add_constant(it->vertex[l], rest_i[k-1][l]);
	term.push_back(it);
    }

    for (k = 0; k <= n_j; ++k) {
	indicator_term *it = new indicator_term(*term[j]);
	it->den.SetDims(n_common + k, dim);
	for (l = 0; l < n_common; ++l)
	    it->den[l] = common[l];
	for (l = 0; l < k; ++l)
	    it->den[n_common+l] = rest_j[l];
	lex_order_rows(it->den);
	if (k)
	    for (l = 0; l < dim; ++l)
		evalue_add_constant(it->vertex[l], rest_j[k-1][l]);
	term.push_back(it);
    }
    term.erase(term.begin()+j);
    term.erase(term.begin()+i);
}

void indicator::combine(const indicator_term *a, const indicator_term *b)
{
    int dim = a->den.NumCols();

    mat_ZZ common;
    mat_ZZ rest_i;    /* factors in a, but not in b */
    mat_ZZ rest_j;    /* factors in b, but not in a */
    int n_common = 0, n_i = 0, n_j = 0;

    common.SetDims(min(a->den.NumRows(), b->den.NumRows()), dim);
    rest_i.SetDims(a->den.NumRows(), dim);
    rest_j.SetDims(b->den.NumRows(), dim);

    int k, l;
    for (k = 0, l = 0; k < a->den.NumRows() && l < b->den.NumRows(); ) {
	int s = lex_cmp(a->den[k], b->den[l]);
	if (s == 0) {
	    common[n_common++] = a->den[k];
	    ++k;
	    ++l;
	} else if (s < 0)
	    rest_i[n_i++] = a->den[k++];
	else
	    rest_j[n_j++] = b->den[l++];
    }
    while (k < a->den.NumRows())
	rest_i[n_i++] = a->den[k++];
    while (l < b->den.NumRows())
	rest_j[n_j++] = b->den[l++];
    common.SetDims(n_common, dim);
    rest_i.SetDims(n_i, dim);
    rest_j.SetDims(n_j, dim);

    assert(order.eq[a].size() > 1);
    indicator_term *prev;

    prev = NULL;
    for (int k = n_i-1; k >= 0; --k) {
	indicator_term *it = new indicator_term(*b);
	it->den.SetDims(n_common + n_j + n_i-k, dim);
	for (int l = k; l < n_i; ++l)
	    it->den[n_common+n_j+l-k] = rest_i[l];
	lex_order_rows(it->den);
	for (int m = 0; m < dim; ++m)
	    evalue_add_constant(it->vertex[m], rest_i[k][m]);
	it->sign = -it->sign;
	if (prev) {
	    order.pending[it].push_back(prev);
	    order.lt[it].push_back(prev);
	    order.inc_pred(prev);
	}
	term.push_back(it);
	order.head.insert(it);
	prev = it;
    }
    if (n_i) {
	indicator_term *it = new indicator_term(*b);
	it->den.SetDims(n_common + n_i + n_j, dim);
	for (l = 0; l < n_i; ++l)
	    it->den[n_common+n_j+l] = rest_i[l];
	lex_order_rows(it->den);
	assert(prev);
	order.pending[a].push_back(prev);
	order.lt[a].push_back(prev);
	order.inc_pred(prev);
	order.replace(b, it);
	delete it;
    }

    prev = NULL;
    for (int k = n_j-1; k >= 0; --k) {
	indicator_term *it = new indicator_term(*a);
	it->den.SetDims(n_common + n_i + n_j-k, dim);
	for (int l = k; l < n_j; ++l)
	    it->den[n_common+n_i+l-k] = rest_j[l];
	lex_order_rows(it->den);
	for (int m = 0; m < dim; ++m)
	    evalue_add_constant(it->vertex[m], rest_j[k][m]);
	it->sign = -it->sign;
	if (prev) {
	    order.pending[it].push_back(prev);
	    order.lt[it].push_back(prev);
	    order.inc_pred(prev);
	}
	term.push_back(it);
	order.head.insert(it);
	prev = it;
    }
    if (n_j) {
	indicator_term *it = new indicator_term(*a);
	it->den.SetDims(n_common + n_i + n_j, dim);
	for (l = 0; l < n_j; ++l)
	    it->den[n_common+n_i+l] = rest_j[l];
	lex_order_rows(it->den);
	assert(prev);
	order.pending[a].push_back(prev);
	order.lt[a].push_back(prev);
	order.inc_pred(prev);
	order.replace(a, it);
	delete it;
    }

    assert(term.size() == order.head.size() + order.pred.size());
}

bool indicator::handle_equal_numerators(const indicator_term *base)
{
    for (int i = 0; i < order.eq[base].size(); ++i) {
	for (int j = i+1; j < order.eq[base].size(); ++j) {
	    if (order.eq[base][i]->is_opposite(order.eq[base][j])) {
		remove(order.eq[base][j]);
		remove(i ? order.eq[base][i] : base);
		return true;
	    }
	}
    }
    for (int j = 1; j < order.eq[base].size(); ++j)
	if (order.eq[base][j]->sign != base->sign) {
	    combine(base, order.eq[base][j]);
	    return true;
	}
    return false;
}

void indicator::substitute(evalue *equation)
{
    ::substitute(term, equation);
}

void indicator::add_substitution(evalue *equation)
{
    for (int i = 0; i < substitutions.size(); ++i)
	if (eequal(substitutions[i], equation))
	    return;
    evalue *copy = new evalue();
    value_init(copy->d);
    evalue_copy(copy, equation);
    substitutions.push_back(copy);
}

void indicator::perform_pending_substitutions()
{
    if (substitutions.size() == 0)
	return;

    for (int i = 0; i < substitutions.size(); ++i) {
	substitute(substitutions[i]);
	free_evalue_refs(substitutions[i]); 
	delete substitutions[i];
    }
    substitutions.clear();
    order.resort();
}

static void print_varlist(ostream& os, int n, char **names)
{
    int i;
    os << "[";
    for (i = 0; i < n; ++i) {
	if (i)
	    os << ",";
	os << names[i];
    }
    os << "]";
}

void max_term::print(ostream& os, char **p, barvinok_options *options) const
{
    os << "{ ";
    print_varlist(os, domain->dimension(), p);
    os << " -> ";
    os << "[";
    for (int i = 0; i < max.size(); ++i) {
	if (i)
	    os << ",";
	evalue_print(os, max[i], p);
    }
    os << "]";
    os << " : ";
    domain->print_constraints(os, p, options);
    os << " }" << endl;
}

/* T maps the compressed parameters to the original parameters,
 * while this max_term is based on the compressed parameters
 * and we want get the original parameters back.
 */
void max_term::substitute(Matrix *T, barvinok_options *options)
{
    assert(domain->dimension() == T->NbColumns-1);
    Matrix *Eq;
    Matrix *inv = left_inverse(T, &Eq);

    evalue denom;
    value_init(denom.d);
    value_init(denom.x.n);
    value_set_si(denom.x.n, 1);
    value_assign(denom.d, inv->p[inv->NbRows-1][inv->NbColumns-1]);

    vec_ZZ v;
    v.SetLength(inv->NbColumns);
    evalue **subs = new evalue *[inv->NbRows-1];
    for (int i = 0; i < inv->NbRows-1; ++i) {
	values2zz(inv->p[i], v, v.length());
	subs[i] = multi_monom(v);
	emul(&denom, subs[i]);
    }
    free_evalue_refs(&denom);

    domain->substitute(subs, inv, Eq, options->MaxRays);
    Matrix_Free(Eq);

    for (int i = 0; i < max.size(); ++i) {
	evalue_substitute(max[i], subs);
	reduce_evalue(max[i]);
    }

    for (int i = 0; i < inv->NbRows-1; ++i) {
	free_evalue_refs(subs[i]);
	delete subs[i];
    }
    delete [] subs;
    Matrix_Free(inv);
}

Vector *max_term::eval(Value *val, unsigned MaxRays) const
{
    if (!domain->contains(val, domain->dimension()))
	return NULL;
    Vector *res = Vector_Alloc(max.size());
    for (int i = 0; i < max.size(); ++i) {
	compute_evalue(max[i], val, &res->p[i]);
    }
    return res;
}

struct split {
    evalue *constraint;
    enum sign { le, ge, lge } sign;

    split (evalue *c, enum sign s) : constraint(c), sign(s) {}
};

static void split_on(const split& sp, EDomain *D, 
		     EDomain **Dlt, EDomain **Deq, EDomain **Dgt,
		     lexmin_options *options)
{
    EDomain *ED[3];
    *Dlt = NULL;
    *Deq = NULL;
    *Dgt = NULL;
    ge_constraint *ge = D->compute_ge_constraint(sp.constraint);
    if (sp.sign == split::lge || sp.sign == split::ge)
	ED[2] = EDomain::new_from_ge_constraint(ge, 1, options->verify->barvinok);
    else
	ED[2] = NULL;
    if (sp.sign == split::lge || sp.sign == split::le)
	ED[0] = EDomain::new_from_ge_constraint(ge, -1, options->verify->barvinok);
    else
	ED[0] = NULL;

    assert(sp.sign == split::lge || sp.sign == split::ge || sp.sign == split::le);
    ED[1] = EDomain::new_from_ge_constraint(ge, 0, options->verify->barvinok);

    delete ge;

    for (int i = 0; i < 3; ++i) {
	if (!ED[i])
	    continue;
	if (D->sample && ED[i]->contains(D->sample->p, D->sample->Size-1)) {
	    ED[i]->sample = Vector_Alloc(D->sample->Size);
	    Vector_Copy(D->sample->p, ED[i]->sample->p, D->sample->Size);
	} else if (emptyQ2(ED[i]->D) ||
	    (options->emptiness_check != BV_LEXMIN_EMPTINESS_CHECK_NONE &&
		 !(ED[i]->not_empty(options)))) {
	    delete ED[i];
	    ED[i] = NULL;
	}
    }
    *Dlt = ED[0];
    *Deq = ED[1];
    *Dgt = ED[2];
}

ostream & operator<< (ostream & os, const vector<int> & v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        if (i)
            os << ", ";
        os << v[i]; 
    }
    os << "]";
    return os;
}

void construct_rational_vertices(Param_Polyhedron *PP, Matrix *T, unsigned dim, 
				 int nparam, vector<indicator_term *>& vertices)
{
    int i;
    Param_Vertices *PV;
    Value lcm, tmp;
    value_init(lcm);
    value_init(tmp);

    vec_ZZ v;
    v.SetLength(nparam+1);

    evalue factor;
    value_init(factor.d);
    value_init(factor.x.n);
    value_set_si(factor.x.n, 1);
    value_set_si(factor.d, 1);

    for (i = 0, PV = PP->V; PV; ++i, PV = PV->next) {
	indicator_term *term = new indicator_term(dim, i);
	vertices.push_back(term);
	Matrix *M = Matrix_Alloc(PV->Vertex->NbRows+nparam+1, nparam+1);
	value_set_si(lcm, 1);
	for (int j = 0; j < PV->Vertex->NbRows; ++j)
	    value_lcm(lcm, lcm, PV->Vertex->p[j][nparam+1]);
	value_assign(M->p[M->NbRows-1][M->NbColumns-1], lcm);
	for (int j = 0; j < PV->Vertex->NbRows; ++j) {
	    value_division(tmp, lcm, PV->Vertex->p[j][nparam+1]);
	    Vector_Scale(PV->Vertex->p[j], M->p[j], tmp, nparam+1);
	}
	for (int j = 0; j < nparam; ++j)
	    value_assign(M->p[PV->Vertex->NbRows+j][j], lcm);
	if (T) {
	    Matrix *M2 = Matrix_Alloc(T->NbRows, M->NbColumns);
	    Matrix_Product(T, M, M2);
	    Matrix_Free(M);
	    M = M2;
	}
	for (int j = 0; j < dim; ++j) {
	    values2zz(M->p[j], v, nparam+1);
	    term->vertex[j] = multi_monom(v);
	    value_assign(factor.d, lcm);
	    emul(&factor, term->vertex[j]);
	}
	Matrix_Free(M);
    }
    assert(i == PP->nbV);
    free_evalue_refs(&factor);
    value_clear(lcm);
    value_clear(tmp);
}

static vector<max_term*> lexmin(indicator& ind, unsigned nparam,
				    vector<int> loc)
{
    vector<max_term*> maxima;
    partial_order::head_type::iterator i;
    vector<int> best_score;
    vector<int> second_score;
    vector<int> neg_score;

    do {
	ind.perform_pending_substitutions();
	const indicator_term *best = NULL, *second = NULL, *neg = NULL,
			     *neg_eq = NULL, *neg_le = NULL;
	for (i = ind.order.head.begin(); i != ind.order.head.end(); ++i) {
	    vector<int> score;
	    const indicator_term *term = *i;
	    if (term->sign == 0) {
		ind.expand_rational_vertex(term);
		break;
	    }

	    if (ind.order.eq.find(term) != ind.order.eq.end()) {
		int j;
		if (ind.order.eq[term].size() <= 1)
		    continue;
		for (j = 1; j < ind.order.eq[term].size(); ++j)
		    if (ind.order.pred.find(ind.order.eq[term][j]) !=
							    ind.order.pred.end())
			break;
		if (j < ind.order.eq[term].size())
		    continue;
		score.push_back(ind.order.eq[term].size());
	    } else
		score.push_back(0);
	    if (ind.order.le.find(term) != ind.order.le.end())
		score.push_back(ind.order.le[term].size());
	    else
		score.push_back(0);
	    if (ind.order.lt.find(term) != ind.order.lt.end())
		score.push_back(-ind.order.lt[term].size());
	    else
		score.push_back(0);

	    if (term->sign > 0) {
		if (!best || score < best_score) {
		    second = best;
		    second_score = best_score;
		    best = term;
		    best_score = score;
		} else if (!second || score < second_score) {
		    second = term;
		    second_score = score;
		}
	    } else {
		if (!neg_eq && ind.order.eq.find(term) != ind.order.eq.end()) {
		    for (int j = 1; j < ind.order.eq[term].size(); ++j)
			if (ind.order.eq[term][j]->sign != term->sign) {
			    neg_eq = term;
			    break;
			}
		}
		if (!neg_le && ind.order.le.find(term) != ind.order.le.end())
		    neg_le = term;
		if (!neg || score < neg_score) {
		    neg = term;
		    neg_score = score;
		}
	    }
	}
	if (i != ind.order.head.end())
	    continue;

	if (!best && neg_eq) {
	    assert(ind.order.eq[neg_eq].size() != 0);
	    bool handled = ind.handle_equal_numerators(neg_eq);
	    assert(handled);
	    continue;
	}

	if (!best && neg_le) {
	    /* The smallest term is negative and <= some positive term */
	    best = neg_le;
	    neg = NULL;
	}

	if (!best) {
	    /* apparently there can be negative initial term on empty domains */
	    if (ind.options->emptiness_check != BV_LEXMIN_EMPTINESS_CHECK_NONE &&
		ind.options->verify->barvinok->lp_solver == BV_LP_POLYLIB)
		assert(!neg);
	    break;
	}

	if (!second && !neg) {
	    const indicator_term *rat = NULL;
	    assert(best);
	    if (ind.order.le.find(best) == ind.order.le.end()) {
		if (ind.order.eq.find(best) != ind.order.eq.end()) {
		    bool handled = ind.handle_equal_numerators(best);
		    if (ind.options->emptiness_check !=
				BV_LEXMIN_EMPTINESS_CHECK_NONE &&
			ind.options->verify->barvinok->lp_solver == BV_LP_POLYLIB)
			assert(handled);
		    /* If !handled then the leading coefficient is bigger than one;
		     * must be an empty domain
		     */
		    if (handled)
			continue;
		    else
			break;
		}
		maxima.push_back(ind.create_max_term(best));
		break;
	    }
	    for (int j = 0; j < ind.order.le[best].size(); ++j) {
		if (ind.order.le[best][j]->sign == 0) {
		    if (!rat && ind.order.pred[ind.order.le[best][j]] == 1)
			rat = ind.order.le[best][j];
		} else if (ind.order.le[best][j]->sign > 0) {
		    second = ind.order.le[best][j];
		    break;
		} else if (!neg)
		    neg = ind.order.le[best][j];
	    }

	    if (!second && !neg) {
		assert(rat);
		ind.order.unset_le(best, rat);
		ind.expand_rational_vertex(rat);
		continue;
	    }

	    if (!second)
		second = neg;

	    ind.order.unset_le(best, second);
	}

	if (!second)
	    second = neg;

	unsigned dim = best->den.NumCols();
	temp_evalue diff;
	order_sign sign;
	for (int k = 0; k < dim; ++k) {
	    diff = ediff(best->vertex[k], second->vertex[k]);
	    sign = evalue_sign(diff, ind.D, ind.options->verify->barvinok);

	    /* neg can never be smaller than best, unless it may still cancel.
	     * This can happen if positive terms have been determined to
	     * be equal or less than or equal to some negative term.
	     */
	    if (second == neg && !neg_eq && !neg_le) {
		if (sign == order_ge)
		    sign = order_eq;
		if (sign == order_unknown)
		    sign = order_le;
	    }

	    if (sign != order_eq)
		break;
	    if (!EVALUE_IS_ZERO(*diff)) {
		ind.add_substitution(diff);
		ind.perform_pending_substitutions();
	    }
	}
	if (sign == order_eq) {
	    ind.order.set_equal(best, second);
	    continue;
	}
	if (sign == order_lt) {
	    ind.order.lt[best].push_back(second);
	    ind.order.inc_pred(second);
	    continue;
	}
	if (sign == order_gt) {
	    ind.order.lt[second].push_back(best);
	    ind.order.inc_pred(best);
	    continue;
	}

	split sp(diff, sign == order_le ? split::le :
		       sign == order_ge ? split::ge : split::lge);

	EDomain *Dlt, *Deq, *Dgt;
	split_on(sp, ind.D, &Dlt, &Deq, &Dgt, ind.options);
	if (ind.options->emptiness_check != BV_LEXMIN_EMPTINESS_CHECK_NONE)
	    assert(Dlt || Deq || Dgt);
	else if (!(Dlt || Deq || Dgt))
	    /* Must have been empty all along */
	    break;

	if (Deq && (Dlt || Dgt)) {
	    int locsize = loc.size();
	    loc.push_back(0);
	    indicator indeq(ind, Deq);
	    Deq = NULL;
	    indeq.add_substitution(diff);
	    indeq.perform_pending_substitutions();
	    vector<max_term*> maxeq = lexmin(indeq, nparam, loc);
	    maxima.insert(maxima.end(), maxeq.begin(), maxeq.end());
	    loc.resize(locsize);
	}
	if (Dgt && Dlt) {
	    int locsize = loc.size();
	    loc.push_back(1);
	    indicator indgt(ind, Dgt);
	    Dgt = NULL;
	    /* we don't know the new location of these terms in indgt */
	    /*
	    indgt.order.lt[second].push_back(best);
	    indgt.order.inc_pred(best);
	    */
	    vector<max_term*> maxgt = lexmin(indgt, nparam, loc);
	    maxima.insert(maxima.end(), maxgt.begin(), maxgt.end());
	    loc.resize(locsize);
	}

	if (Deq) {
	    loc.push_back(0);
	    ind.set_domain(Deq);
	    ind.add_substitution(diff);
	    ind.perform_pending_substitutions();
	}
	if (Dlt) {
	    loc.push_back(-1);
	    ind.set_domain(Dlt);
	    ind.order.lt[best].push_back(second);
	    ind.order.inc_pred(second);
	}
	if (Dgt) {
	    loc.push_back(1);
	    ind.set_domain(Dgt);
	    ind.order.lt[second].push_back(best);
	    ind.order.inc_pred(best);
	}
    } while(1);

    return maxima;
}

static void lexmin_base(Polyhedron *P, Polyhedron *C,
			Matrix *CP, Matrix *T,
			vector<max_term*>& all_max,
			lexmin_options *options)
{
    unsigned nparam = C->Dimension;
    Param_Polyhedron *PP = NULL;

    PP = Polyhedron2Param_Polyhedron(P, C, options->verify->barvinok);

    unsigned dim = P->Dimension - nparam;

    int nd = -1;

    indicator_constructor ic(dim, PP, T);

    vector<indicator_term *> all_vertices;
    construct_rational_vertices(PP, T, T ? T->NbRows-nparam-1 : dim,
				nparam, all_vertices);

    Polyhedron *TC = true_context(P, C, options->verify->barvinok->MaxRays);
    FORALL_REDUCED_DOMAIN(PP, TC, nd, options->verify->barvinok, i, D, rVD)
	Param_Vertices *V;

	EDomain *epVD = new EDomain(rVD);
	indicator ind(ic, D, epVD, options);

	FORALL_PVertex_in_ParamPolyhedron(V,D,PP) // _i is internal counter
	    ind.add(all_vertices[_i]);
	END_FORALL_PVertex_in_ParamPolyhedron;

	ind.remove_initial_rational_vertices();

	vector<int> loc;
	vector<max_term*> maxima = lexmin(ind, nparam, loc);
	if (CP)
	    for (int j = 0; j < maxima.size(); ++j)
		maxima[j]->substitute(CP, options->verify->barvinok);
	all_max.insert(all_max.end(), maxima.begin(), maxima.end());

	Domain_Free(rVD);
    END_FORALL_REDUCED_DOMAIN
    Polyhedron_Free(TC);
    for (int i = 0; i < all_vertices.size(); ++i)
	delete all_vertices[i];
    Param_Polyhedron_Free(PP);
}

static vector<max_term*> lexmin(Polyhedron *P, Polyhedron *C,
				lexmin_options *options)
{
    unsigned nparam = C->Dimension;
    Matrix *T = NULL, *CP = NULL;
    Polyhedron *Porig = P;
    Polyhedron *Corig = C;
    vector<max_term*> all_max;

    if (emptyQ2(P))
	return all_max;

    POL_ENSURE_VERTICES(P);

    if (emptyQ2(P))
	return all_max;

    assert(P->NbBid == 0);

    if (P->NbEq > 0)
	remove_all_equalities(&P, &C, &CP, &T, nparam,
			      options->verify->barvinok->MaxRays);
    if (!emptyQ2(P))
	lexmin_base(P, C, CP, T, all_max, options);
    if (CP)
	Matrix_Free(CP);
    if (T)
	Matrix_Free(T);
    if (C != Corig)
	Polyhedron_Free(C);
    if (P != Porig)
	Polyhedron_Free(P);

    return all_max;
}

static void verify_results(Polyhedron *A, Polyhedron *C, 
			   vector<max_term*>& maxima,
			   struct verify_options *options);

/* Turn the set dimensions of "context" into parameters and return
 * the corresponding parameter domain.
 */
static struct isl_basic_set *to_parameter_domain(struct isl_basic_set *context)
{
	context = isl_basic_set_move_dims(context, isl_dim_param, 0,
		    isl_dim_set, 0, isl_basic_set_dim(context, isl_dim_set));
	context = isl_basic_set_params(context);
	return context;
}

int main(int argc, char **argv)
{
	isl_ctx *ctx;
	isl_basic_set *context, *bset;
	Polyhedron *A, *C;
	int neg_one, n;
	char s[1024];
	int urs_parms = 0;
	int urs_unknowns = 0;
	int print_solution = 1;
	struct lexmin_options *options = lexmin_options_new_with_defaults();
	int nparam;
	options->verify->barvinok->lookup_table = 0;

	argc = lexmin_options_parse(options, argc, argv, ISL_ARG_ALL);
	ctx = isl_ctx_alloc_with_options(&lexmin_options_args, options);

	context = isl_basic_set_read_from_file(ctx, stdin);
	assert(context);
	n = fscanf(stdin, "%d", &neg_one);
	assert(n == 1);
	assert(neg_one == -1);
	bset = isl_basic_set_read_from_file(ctx, stdin);

	while (fgets(s, sizeof(s), stdin)) {
		if (strncasecmp(s, "Maximize", 8) == 0) {
			fprintf(stderr, "Maximize option not supported\n");
			abort();
		}
		if (strncasecmp(s, "Rational", 8) == 0) {
			fprintf(stderr, "Rational option not supported\n");
			abort();
		}
		if (strncasecmp(s, "Urs_parms", 9) == 0)
			urs_parms = 1;
		if (strncasecmp(s, "Urs_unknowns", 12) == 0)
			urs_unknowns = 1;
	}
	if (!urs_parms)
		context = isl_basic_set_intersect(context,
		isl_basic_set_positive_orthant(isl_basic_set_get_space(context)));
	context = to_parameter_domain(context);
	nparam = isl_basic_set_dim(context, isl_dim_param);
	if (nparam != isl_basic_set_dim(bset, isl_dim_param)) {
		int dim = isl_basic_set_dim(bset, isl_dim_set);
		bset = isl_basic_set_move_dims(bset, isl_dim_param, 0,
					    isl_dim_set, dim - nparam, nparam);
	}
	if (!urs_unknowns)
		bset = isl_basic_set_intersect(bset,
		isl_basic_set_positive_orthant(isl_basic_set_get_space(bset)));

	if (options->verify->verify)
		print_solution = 0;

	A = isl_basic_set_to_polylib(bset);
	verify_options_set_range(options->verify, A->Dimension);
	C = isl_basic_set_to_polylib(context);
	vector<max_term*> maxima = lexmin(A, C, options);
	if (print_solution) {
		char **param_names;
		param_names = util_generate_names(C->Dimension, "p");
		for (int i = 0; i < maxima.size(); ++i)
			maxima[i]->print(cout, param_names,
					 options->verify->barvinok);
		util_free_names(C->Dimension, param_names);
	}

	if (options->verify->verify)
		verify_results(A, C, maxima, options->verify);

	for (int i = 0; i < maxima.size(); ++i)
		delete maxima[i];

	Polyhedron_Free(A);
	Polyhedron_Free(C);

	isl_basic_set_free(bset);
	isl_basic_set_free(context);
	isl_ctx_free(ctx);

	return 0;
}

static bool lexmin(int pos, Polyhedron *P, Value *context)
{
    Value LB, UB, k;
    int lu_flags;
    bool found = false;

    if (emptyQ(P))
	return false;

    value_init(LB); value_init(UB); value_init(k);
    value_set_si(LB,0);
    value_set_si(UB,0);
    lu_flags = lower_upper_bounds(pos,P,context,&LB,&UB);
    assert(!(lu_flags & LB_INFINITY));

    value_set_si(context[pos],0);
    if (!lu_flags && value_lt(UB,LB)) {
        value_clear(LB); value_clear(UB); value_clear(k);
	return false;
    }
    if (!P->next) {
	value_assign(context[pos], LB);
        value_clear(LB); value_clear(UB); value_clear(k);
	return true;
    }
    for (value_assign(k,LB); lu_flags || value_le(k,UB); value_increment(k,k)) {
        value_assign(context[pos],k);
	if ((found = lexmin(pos+1, P->next, context)))
	    break;
    }
    if (!found)
	value_set_si(context[pos],0);
    value_clear(LB); value_clear(UB); value_clear(k);
    return found;
}

static void print_list(FILE *out, Value *z, const char* brackets, int len)
{
    fprintf(out, "%c", brackets[0]);
    value_print(out, VALUE_FMT,z[0]);
    for (int k = 1; k < len; ++k) {
	fprintf(out, ", ");
	value_print(out, VALUE_FMT,z[k]);
    }
    fprintf(out, "%c", brackets[1]);
}

static int check_poly_lexmin(const struct check_poly_data *data,
			     int nparam, Value *z,
			     const struct verify_options *options);

struct check_poly_lexmin_data : public check_poly_data {
    Polyhedron	    	*S;
    vector<max_term*>&	 maxima;

    check_poly_lexmin_data(Polyhedron *S, Value *z,
			   vector<max_term*>& maxima) : S(S), maxima(maxima) {
	this->z = z;
	this->check = &check_poly_lexmin;
    }
};

static int check_poly_lexmin(const struct check_poly_data *data,
			     int nparam, Value *z,
			     const struct verify_options *options)
{
    const check_poly_lexmin_data *lexmin_data;
    lexmin_data = static_cast<const check_poly_lexmin_data *>(data);
    Polyhedron *S = lexmin_data->S;
    vector<max_term*>& maxima = lexmin_data->maxima;
    int k;
    bool found = lexmin(1, S, lexmin_data->z);

    if (options->print_all) {
	printf("lexmin");
	print_list(stdout, z, "()", nparam);
	printf(" = ");
	if (found)
	    print_list(stdout, lexmin_data->z+1, "[]", S->Dimension-nparam);
	printf(" ");
    }

    Vector *min = NULL;
    for (int i = 0; i < maxima.size(); ++i)
	if ((min = maxima[i]->eval(z, options->barvinok->MaxRays)))
	    break;

    int ok = !(found ^ !!min);
    if (found && min)
	for (int i = 0; i < S->Dimension-nparam; ++i)
	    if (value_ne(lexmin_data->z[1+i], min->p[i])) {
		ok = 0;
		break;
	    }
    if (!ok) {
	printf("\n"); 
	fflush(stdout);
	fprintf(stderr, "Error !\n");
	fprintf(stderr, "lexmin");
	print_list(stderr, z, "()", nparam);
	fprintf(stderr, " should be ");
	if (found)
	    print_list(stderr, lexmin_data->z+1, "[]", S->Dimension-nparam);
	fprintf(stderr, " while digging gives ");
	if (min)
	    print_list(stderr, min->p, "[]", S->Dimension-nparam);
	fprintf(stderr, ".\n");
	return 0;
    } else if (options->print_all)
	printf("OK.\n");
    if (min)
	Vector_Free(min);

    for (k = 1; k <= S->Dimension-nparam; ++k)
	value_set_si(lexmin_data->z[k], 0);

    return 0;
}

void verify_results(Polyhedron *A, Polyhedron *C, vector<max_term*>& maxima, 
		    struct verify_options *options)
{
    Polyhedron *CS, *S;
    unsigned nparam = C->Dimension;
    unsigned MaxRays = options->barvinok->MaxRays;
    Vector *p;

    CS = check_poly_context_scan(A, &C, nparam, options);

    p = Vector_Alloc(A->Dimension+2);
    value_set_si(p->p[A->Dimension+1], 1);

    S = Polyhedron_Scan(A, C, MaxRays & POL_NO_DUAL ? 0 : MaxRays);

    check_poly_init(C, options);

    if (S) {
	if (!(CS && emptyQ2(CS))) {
	    check_poly_lexmin_data data(S, p->p, maxima);
	    check_poly(CS, &data, nparam, 0, p->p+S->Dimension-nparam+1, options);
	}
	Domain_Free(S);
    }

    if (!options->print_all)
	printf("\n");

    Vector_Free(p);
    if (CS) {
	Domain_Free(CS);
	Polyhedron_Free(C);
    }
}

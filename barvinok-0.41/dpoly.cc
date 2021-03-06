#include <assert.h>
#include <iostream>
#include <vector>
#include <NTL/ZZ.h>
#include <barvinok/polylib.h>
#include "dpoly.h"

using std::cerr;
using std::endl;
using std::vector;

/* Construct truncated expansion of (1+t)^(degree),
 * computing the first 1+d coefficients
 */
dpoly::dpoly(int d, const Value degree, int offset)
{
    coeff = Vector_Alloc(d+1);

    /* For small degrees, we only need to compute some coefficients */
    int min = d + offset;
    if (value_posz_p(degree) && value_cmp_si(degree, min) < 0)
	min = VALUE_TO_INT(degree);

    Value c, tmp;
    value_init(c);
    value_init(tmp);
    value_set_si(c, 1);
    if (!offset)
	value_assign(coeff->p[0], c);
    value_assign(tmp, degree);
    for (int i = 1; i <= min; ++i) {
	value_multiply(c, c, tmp);
	value_decrement(tmp, tmp);
	mpz_divexact_ui(c, c, i);
	value_assign(coeff->p[i-offset], c);
    }
    value_clear(c);
    value_clear(tmp);
}

void dpoly::operator += (const dpoly& t)
{
    assert(coeff->Size == t.coeff->Size);
    for (int i = 0; i < coeff->Size; ++i)
	value_addto(coeff->p[i], coeff->p[i], t.coeff->p[i]);
}

void dpoly::operator *= (const Value f)
{
    for (int i = 0; i < coeff->Size; ++i)
	value_multiply(coeff->p[i], coeff->p[i], f);
}

void dpoly::operator *= (const dpoly& f)
{
    assert(coeff->Size == f.coeff->Size);
    Vector *old = Vector_Alloc(coeff->Size);
    Vector_Copy(coeff->p, old->p, coeff->Size);
    Vector_Scale(coeff->p, coeff->p, f.coeff->p[0], coeff->Size);
    for (int i = 1; i < coeff->Size; ++i)
	for (int j = 0; i+j < coeff->Size; ++j)
	    value_addmul(coeff->p[i+j], f.coeff->p[i], old->p[j]);
    Vector_Free(old);
}

Vector *dpoly::div(const dpoly& d)
{
    int len = coeff->Size;
    Vector *denom = Vector_Alloc(len);
    Value tmp;
    value_init(tmp);

    /* Make sure denominators are positive */
    if (value_neg_p(d.coeff->p[0])) {
	Vector_Oppose(d.coeff->p, d.coeff->p, d.coeff->Size);
	Vector_Oppose(coeff->p, coeff->p, coeff->Size);
    }
    value_assign(denom->p[0], d.coeff->p[0]);
    for (int i = 1; i < len; ++i) {
	value_multiply(denom->p[i], denom->p[i-1], denom->p[0]);
	value_multiply(coeff->p[i], coeff->p[i], denom->p[i-1]);

	mpz_submul(coeff->p[i], d.coeff->p[1], coeff->p[i-1]);
	for (int j = 2; j <= i; ++j) {
	    value_multiply(tmp, denom->p[j-2], coeff->p[i-j]);
	    mpz_submul(coeff->p[i], d.coeff->p[j], tmp);
	}
    }
    value_clear(tmp);

    return denom;
}

void dpoly::div(const dpoly& d, mpq_t count, int sign)
{
    int len = coeff->Size;
    Vector *denom = div(d);
    mpq_t tmp;
    mpq_init(tmp);
    value_assign(mpq_numref(tmp), coeff->p[len-1]);
    value_assign(mpq_denref(tmp), denom->p[len-1]);
    mpq_canonicalize(tmp);

    if (sign == -1)
	mpq_sub(count, count, tmp);
    else
	mpq_add(count, count, tmp);

    mpq_clear(tmp);
    Vector_Free(denom);
}

void dpoly::div(const dpoly& d, mpq_t *count, const mpq_t& factor)
{
    int len = coeff->Size;
    Vector *denom = div(d);
    mpq_t tmp;
    mpq_init(tmp);

    for (int i = 0; i < len; ++i) {
	value_multiply(mpq_numref(tmp), coeff->p[len-1 - i], mpq_numref(factor));
	value_multiply(mpq_denref(tmp), denom->p[len-1 - i], mpq_denref(factor));
	mpq_add(count[i], count[i], tmp);
	mpq_canonicalize(count[i]);
    }

    mpq_clear(tmp);
    Vector_Free(denom);
}

void dpoly_r::add_term(int i, const vector<int>& powers, const ZZ& coeff)
{
    if (coeff == 0)
	return;

    dpoly_r_term tmp;
    tmp.powers = powers;
    dpoly_r_term_list::iterator k = c[i].find(&tmp);
    if (k != c[i].end()) {
	(*k)->coeff += coeff;
	return;
    }
    dpoly_r_term *t = new dpoly_r_term;
    t->powers = powers;
    t->coeff = coeff;
    c[i].insert(t);
}

dpoly_r::dpoly_r(int len, int dim)
{
    denom = 1;
    this->len = len;
    this->dim = dim;
    c = new dpoly_r_term_list[len];
}

dpoly_r::dpoly_r(dpoly& num, int dim)
{
    denom = 1;
    len = num.coeff->Size;
    c = new dpoly_r_term_list[len];
    this->dim = dim;
    vector<int> powers(dim, 0);

    for (int i = 0; i < len; ++i) {
	ZZ coeff;
	value2zz(num.coeff->p[i], coeff);
	add_term(i, powers, coeff);
    }
}

dpoly_r::dpoly_r(dpoly& num, dpoly& den, int pos, int dim)
{
    denom = 1;
    len = num.coeff->Size;
    c = new dpoly_r_term_list[len];
    this->dim = dim;
    int *powers = new int[dim];
    ZZ coeff;

    for (int i = 0; i < len; ++i) {
	vector<int> powers(dim, 0);
	powers[pos] = 1;

	value2zz(num.coeff->p[i], coeff);
	add_term(i, powers, coeff);

	for (int j = 1; j <= i; ++j) {
	    dpoly_r_term_list::iterator k;
	    for (k = c[i-j].begin(); k != c[i-j].end(); ++k) {
		powers = (*k)->powers;
		powers[pos]++;
		value2zz(den.coeff->p[j-1], coeff);
		negate(coeff, coeff);
		coeff *= (*k)->coeff;
		add_term(i, powers, coeff);
	    }
	}
    }
    delete [] powers;
    //dump();
}

dpoly_r::dpoly_r(const dpoly_r* num, dpoly& den, int pos, int dim)
{
    denom = num->denom;
    len = num->len;
    c = new dpoly_r_term_list[len];
    this->dim = dim;
    ZZ coeff;

    for (int i = 0 ; i < len; ++i) {
	dpoly_r_term_list::iterator k;
	for (k = num->c[i].begin(); k != num->c[i].end(); ++k) {
	    vector<int> powers = (*k)->powers;
	    powers[pos]++;
	    add_term(i, powers, (*k)->coeff);
	}

	for (int j = 1; j <= i; ++j) {
	    dpoly_r_term_list::iterator k;
	    for (k = c[i-j].begin(); k != c[i-j].end(); ++k) {
		vector<int> powers = (*k)->powers;
		powers[pos]++;
		value2zz(den.coeff->p[j-1], coeff);
		negate(coeff, coeff);
		coeff *= (*k)->coeff;
		add_term(i, powers, coeff);
	    }
	}
    }
}

dpoly_r::~dpoly_r()
{
    for (int i = 0 ; i < len; ++i)
	for (dpoly_r_term_list::iterator k = c[i].begin(); k != c[i].end(); ++k) {
	    delete (*k);
	}
    delete [] c;
}

dpoly_r *dpoly_r::div(const dpoly& d) const
{
    dpoly_r *rc = new dpoly_r(len, dim);
    ZZ coeff;
    ZZ coeff0;
    value2zz(d.coeff->p[0], coeff0);
    rc->denom = power(coeff0, len);
    ZZ inv_d = rc->denom / coeff0;

    for (int i = 0; i < len; ++i) {
	for (dpoly_r_term_list::iterator k = c[i].begin(); k != c[i].end(); ++k) {
	    coeff = (*k)->coeff * inv_d;
	    rc->add_term(i, (*k)->powers, coeff);
	}

	for (int j = 1; j <= i; ++j) {
	    dpoly_r_term_list::iterator k;
	    for (k = rc->c[i-j].begin(); k != rc->c[i-j].end(); ++k) {
		value2zz(d.coeff->p[j], coeff);
		coeff = - coeff * (*k)->coeff / coeff0;
		rc->add_term(i, (*k)->powers, coeff);
	    }
	}
    }
    return rc;
}

void dpoly_r::dump(void)
{
    for (int i = 0; i < len; ++i) {
	cerr << endl;
	cerr << i << endl;
	cerr << c[i].size() << endl;
	for (dpoly_r_term_list::iterator j = c[i].begin(); j != c[i].end(); ++j) {
	    for (int k = 0; k < dim; ++k) {
		cerr << (*j)->powers[k] << " ";
	    }
	    cerr << ": " << (*j)->coeff << "/" << denom << endl;
	}
	cerr << endl;
    }
}

#include <string.h>
#include <vector>
#include <ostream>
#include <iostream>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include "bfcounter.h"
#include "lattice_point.h"

using std::vector;
using std::cerr;
using std::endl;

static int lex_cmp(vec_ZZ& a, vec_ZZ& b)
{
    assert(a.length() == b.length());

    for (int j = 0; j < a.length(); ++j)
	if (a[j] != b[j])
	    return a[j] < b[j] ? -1 : 1;
    return 0;
}

void bf_base::add_term(bfc_term_base *t, vec_ZZ& num_orig, vec_ZZ& extra_num)
{
    vec_ZZ num;
    int d = num_orig.length();
    num.SetLength(d-1);
    for (int l = 0; l < d-1; ++l)
	num[l] = num_orig[l+1] + extra_num[l];

    add_term(t, num);
}

void bf_base::add_term(bfc_term_base *t, vec_ZZ& num)
{
    int len = t->terms.NumRows();
    int i, r;
    for (i = 0; i < len; ++i) {
	r = lex_cmp(t->terms[i], num);
	if (r >= 0)
	    break;
    }
    if (i == len || r > 0) {
	t->terms.SetDims(len+1, num.length());
	insert_term(t, i);
	t->terms[i] = num;
    } else {
	// i < len && r == 0
	update_term(t, i);
    }
}

bfc_term_base* bf_base::find_bfc_term(bfc_vec& v, int *powers, int len)
{
    bfc_vec::iterator i;
    for (i = v.begin(); i != v.end(); ++i) {
	int j;
	for (j = 0; j < len; ++j)
	    if ((*i)->powers[j] != powers[j])
		break;
	if (j == len)
	    return (*i);
	if ((*i)->powers[j] > powers[j])
	    break;
    }

    bfc_term_base* t = new_bf_term(len);
    v.insert(i, t);
    memcpy(t->powers, powers, len * sizeof(int));

    return t;
}

void bf_base::reduce(mat_ZZ& factors, bfc_vec& v, barvinok_options *options)
{
    assert(v.size() > 0);
    unsigned d = factors.NumCols();

    if (d == lower)
	return base(factors, v);

    bf_reducer bfr(factors, v, this);

    bfr.reduce(options);

    if (bfr.vn.size() > 0)
	reduce(bfr.nfactors, bfr.vn, options);
}

int bf_base::setup_factors(const mat_ZZ& rays, mat_ZZ& factors, 
				    bfc_term_base* t, int s)
{
    factors.SetDims(dim, dim);

    int r;

    for (r = 0; r < dim; ++r)
	t->powers[r] = 1;

    for (r = 0; r < dim; ++r) {
	factors[r] = rays[r];
	int k;
	for (k = 0; k < dim; ++k)
	    if (factors[r][k] != 0)
		break;
	if (factors[r][k] < 0) {
	    factors[r] = -factors[r];
	    for (int i = 0; i < t->terms.NumRows(); ++i)
		t->terms[i] += factors[r];
	    s = -s;
	}
    }

    return s;
}

void bf_base::handle(const mat_ZZ& rays, Value *vertex, const QQ& c,
		     unsigned long det, barvinok_options *options)
{
    bfc_term* t = new bfc_term(dim);
    vector< bfc_term_base * > v;
    v.push_back(t);

    Matrix *points = Matrix_Alloc(det, dim);
    Matrix* Rays = zz2matrix(rays);
    lattice_points_fixed(vertex, vertex, Rays, Rays, points, det);
    Matrix_Free(Rays);
    matrix2zz(points, t->terms, points->NbRows, points->NbColumns);
    Matrix_Free(points);

    // the elements of factors are always lexpositive
    mat_ZZ   factors;
    int s = setup_factors(rays, factors, t, 1);

    t->c.SetLength(t->terms.NumRows());

    for (int i = 0; i < t->c.length(); ++i) {
	t->c[i].n = s * c.n;
	t->c[i].d = c.d;
    }

    reduce(factors, v, options);
}

bfc_term_base* bfcounter_base::new_bf_term(int len)
{
    bfc_term* t = new bfc_term(len);
    t->c.SetLength(0);
    return t;
}

void bfcounter_base::set_factor(bfc_term_base *t, int k, int change)
{
    bfc_term* bfct = static_cast<bfc_term *>(t);
    c = bfct->c[k];
    if (change)
	c.n = -c.n;
}

void bfcounter_base::set_factor(bfc_term_base *t, int k, mpq_t &f, int change)
{
    bfc_term* bfct = static_cast<bfc_term *>(t);
    value2zz(mpq_numref(f), c.n);
    value2zz(mpq_denref(f), c.d);
    c *= bfct->c[k];
    if (change)
	c.n = -c.n;
}

void bfcounter_base::set_factor(bfc_term_base *t, int k, const QQ& c_factor,
				int change)
{
    bfc_term* bfct = static_cast<bfc_term *>(t);
    c = bfct->c[k];
    c *= c_factor;
    if (change)
	c.n = -c.n;
}

void bfcounter_base::insert_term(bfc_term_base *t, int i)
{
    bfc_term* bfct = static_cast<bfc_term *>(t);
    int len = t->terms.NumRows()-1;	// already increased by one

    bfct->c.SetLength(len+1);
    for (int j = len; j > i; --j) {
	bfct->c[j] = bfct->c[j-1];
	t->terms[j] = t->terms[j-1];
    }
    bfct->c[i] = c;
}

void bfcounter_base::update_term(bfc_term_base *t, int i)
{
    bfc_term* bfct = static_cast<bfc_term *>(t);

    bfct->c[i] += c;
}

void bf_reducer::compute_extra_num(int i)
{
    clear(extra_num);
    changes = 0;
    no_param = 0;	    // r from text
    only_param = 0;	    // k-r-s from text
    total_power = 0;	    // k from text

    for (int j = 0; j < nf; ++j) {
	if (v[i]->powers[j] == 0)
	    continue;

	total_power += v[i]->powers[j];
	if (factors[j][0] == 0) {
	    only_param += v[i]->powers[j];
	    continue;
	}

	if (old2new[j] == -1)
	    no_param += v[i]->powers[j];
	else
	    extra_num += -sign[j] * v[i]->powers[j] * nfactors[old2new[j]];
	changes += v[i]->powers[j];
    }
}

void bf_reducer::update_powers(const std::vector<int>& powers)
{
    for (int l = 0; l < nnf; ++l)
	npowers[l] = bpowers[l];

    l_extra_num = extra_num;
    l_changes = changes;

    for (int l = 0; l < powers.size(); ++l) {
	int n = powers[l];
	if (n == 0)
	    continue;
	assert(old2new[l] != -1);

	npowers[old2new[l]] += n;
	// interpretation of sign has been inverted
	// since we inverted the power for specialization
	if (sign[l] == 1) {
	    l_extra_num += n * nfactors[old2new[l]];
	    l_changes += n;
	}
    }
}


void bf_reducer::compute_reduced_factors()
{
    unsigned nf = factors.NumRows();
    unsigned d = factors.NumCols();
    nnf = 0;
    nfactors.SetDims(nnf, d-1);

    for (int i = 0; i < nf; ++i) {
	int j;
	int s = 1;
	for (j = 0; j < nnf; ++j) {
	    int k;
	    for (k = 1; k < d; ++k)
		if (factors[i][k] != 0 || nfactors[j][k-1] != 0)
		    break;
	    if (k < d && factors[i][k] == -nfactors[j][k-1])
		s = -1;
	    for (; k < d; ++k)
		if (factors[i][k] != s * nfactors[j][k-1])
		    break;
	    if (k == d)
		break;
	}
	old2new[i] = j;
	if (j == nnf) {
	    int k;
	    for (k = 1; k < d; ++k)
		if (factors[i][k] != 0)
		    break;
	    if (k < d) {
		if (factors[i][k] < 0)
		    s = -1;
		nfactors.SetDims(++nnf, d-1);
		for (int k = 1; k < d; ++k)
		    nfactors[j][k-1] = s * factors[i][k];
	    } else
		old2new[i] = -1;
	}
	sign[i] = s;
    }
    npowers = new int[nnf];
    bpowers = new int[nnf];
}

void bf_reducer::reduce(barvinok_options *options)
{
    compute_reduced_factors();

    Value tmp;
    value_init(tmp);
    for (int i = 0; i < v.size(); ++i) {
	compute_extra_num(i);

	if (no_param == 0) {
	    vec_ZZ extra_num;
	    extra_num.SetLength(d-1);
	    int changes = 0;
	    int *npowers = new int[nnf];
	    for (int k = 0; k < nnf; ++k)
		npowers[k] = 0;
	    for (int k = 0; k < nf; ++k) {
		assert(old2new[k] != -1);
		npowers[old2new[k]] += v[i]->powers[k];
		if (sign[k] == -1) {
		    extra_num += v[i]->powers[k] * nfactors[old2new[k]];
		    changes += v[i]->powers[k];
		}
	    }

	    bfc_term_base * t = bf->find_bfc_term(vn, npowers, nnf);
	    for (int k = 0; k < v[i]->terms.NumRows(); ++k) {
		bf->set_factor(v[i], k, changes % 2);
		bf->add_term(t, v[i]->terms[k], extra_num);
	    }
	    delete [] npowers;
	} else {
	    // powers of "constant" part
	    for (int k = 0; k < nnf; ++k)
		bpowers[k] = 0;
	    for (int k = 0; k < nf; ++k) {
		if (factors[k][0] != 0)
		    continue;
		assert(old2new[k] != -1);
		bpowers[old2new[k]] += v[i]->powers[k];
		if (sign[k] == -1) {
		    extra_num += v[i]->powers[k] * nfactors[old2new[k]];
		    changes += v[i]->powers[k];
		}
	    }

	    int j;
	    for (j = 0; j < nf; ++j)
		if (old2new[j] == -1 && v[i]->powers[j] > 0)
		    break;

	    zz2value(factors[j][0], tmp);
	    dpoly D(no_param, tmp, 1);
	    for (int k = 1; k < v[i]->powers[j]; ++k) {
		dpoly fact(no_param, tmp, 1);
		D *= fact;
	    }
	    for ( ; ++j < nf; )
		if (old2new[j] == -1)  {
		    zz2value(factors[j][0], tmp);
		    for (int k = 0; k < v[i]->powers[j]; ++k) {
			dpoly fact(no_param, tmp, 1);
			D *= fact;
		    }
		}

	    if (no_param + only_param == total_power &&
		    bf->constant_vertex(d)) {
		bfc_term_base * t = NULL;
		for (int k = 0; k < v[i]->terms.NumRows(); ++k) {
		    zz2value(v[i]->terms[k][0], tmp);
		    dpoly n(no_param, tmp);
		    mpq_set_si(bf->tcount, 0, 1);
		    n.div(D, bf->tcount, 1);

		    if (value_zero_p(mpq_numref(bf->tcount)))
			continue;

		    if (!t)
			 t = bf->find_bfc_term(vn, bpowers, nnf);
		    bf->set_factor(v[i], k, bf->tcount, changes % 2);
		    bf->add_term(t, v[i]->terms[k], extra_num);
		}
	    } else {
		for (int j = 0; j < v[i]->terms.NumRows(); ++j) {
		    zz2value(v[i]->terms[j][0], tmp);
		    dpoly n(no_param, tmp);

		    dpoly_r * r = 0;
		    if (no_param + only_param == total_power)
			r = new dpoly_r(n, nf);
		    else
			for (int k = 0; k < nf; ++k) {
			    if (v[i]->powers[k] == 0)
				continue;
			    if (factors[k][0] == 0 || old2new[k] == -1)
				continue;

			    zz2value(factors[k][0], tmp);
			    dpoly pd(no_param-1, tmp, 1);

			    for (int l = 0; l < v[i]->powers[k]; ++l) {
				int q;
				for (q = 0; q < k; ++q)
				    if (old2new[q] == old2new[k] &&
					sign[q] == sign[k])
					    break;

				if (r == 0)
				    r = new dpoly_r(n, pd, q, nf);
				else {
				    dpoly_r *nr = new dpoly_r(r, pd, q, nf);
				    delete r;
				    r = nr;
				}
			    }
			}

		    dpoly_r *rc = r->div(D);
		    delete r;
		    QQ factor;
		    factor.d = rc->denom;

		    if (bf->constant_vertex(d)) {
			dpoly_r_term_list& final = rc->c[rc->len-1];

			dpoly_r_term_list::iterator k;
			for (k = final.begin(); k != final.end(); ++k) {
			    if ((*k)->coeff == 0)
				continue;

			    update_powers((*k)->powers);

			    bfc_term_base * t = bf->find_bfc_term(vn, npowers, nnf);
			    factor.n = (*k)->coeff;
			    bf->set_factor(v[i], j, factor, l_changes % 2);
			    bf->add_term(t, v[i]->terms[j], l_extra_num);
			}
		    } else
			bf->cum(this, v[i], j, rc, options);

		    delete rc;
		}
	    }
	}
	delete v[i];
    }
    value_clear(tmp);
}

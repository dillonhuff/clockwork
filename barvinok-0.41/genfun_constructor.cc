#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/NTL_QQ.h>
#include <barvinok/polylib.h>
#include "genfun_constructor.h"

gf_base *gf_base::create(Polyhedron *context, unsigned dim, unsigned nparam,
			 barvinok_options *options)
{
    gf_base *red;
    if (options->incremental_specialization == 2)
	red = new partial_bfcounter(context, dim, nparam);
    else if (options->incremental_specialization == 1)
	red = new partial_ireducer(context, dim, nparam);
    else
	red = new partial_reducer(context, dim, nparam);
    return red;
}

void partial_ireducer::base(const QQ& c, const vec_ZZ& num, const mat_ZZ& den_f)
{
    gf->add(c, num, den_f);
}

void partial_reducer::split(const mat_ZZ& num, vec_ZZ& num_s, mat_ZZ& num_p,
			    const mat_ZZ& den_f, vec_ZZ& den_s, mat_ZZ& den_r)
{
    unsigned len = den_f.NumRows();  // number of factors in den
    unsigned nvar = tmp.length();

    den_s.SetLength(len);
    den_r.SetDims(len, lower);

    for (int r = 0; r < len; ++r) {
	bool all_zero;

	for (int k = 0; k < nvar; ++k)
	    tmp[k] = den_f[r][k];
	den_s[r] = tmp * lambda;
	all_zero = den_s[r] == 0;

	for (int k = nvar; k < dim; ++k) {
	    den_r[r][k-nvar] = den_f[r][k];
	    if (all_zero)
		all_zero = den_r[r][k-nvar] == 0;
	}
	if (all_zero)
	    throw Orthogonal;
    }

    num_s.SetLength(num.NumRows());
    num_p.SetDims(num.NumRows(), lower);
    for (int i = 0; i < num.NumRows(); ++i) {
	for (int k = 0; k < nvar; ++k)
	    tmp[k] = num[i][k];
	num_s[i] = tmp * lambda;
	for (int k = nvar ; k < dim; ++k)
	    num_p[i][k-nvar] = num[i][k];
    }
}

void partial_reducer::base(const QQ& c, const vec_ZZ& num, const mat_ZZ& den_f)
{
    gf->add(c, num, den_f);
}

void partial_reducer::base(const vec_QQ& c, const mat_ZZ& num, const mat_ZZ& den_f)
{
    gf->add(new short_rat(c, num, den_f));
}

void partial_bfcounter::base(mat_ZZ& factors, bfc_vec& v)
{
    mat_ZZ den;
    unsigned nf = factors.NumRows();

    for (int i = 0; i < v.size(); ++i) {
	bfc_term* bfct = static_cast<bfc_term *>(v[i]);
	den.SetDims(0, lower);
	int total_power = 0;
	int p = 0;
	for (int j = 0; j < nf; ++j) {
	    total_power += v[i]->powers[j];
	    den.SetDims(total_power, lower);
	    for (int k = 0; k < v[i]->powers[j]; ++k)
		den[p++] = factors[j];
	}
	for (int j = 0; j < v[i]->terms.NumRows(); ++j)
	    gf->add(bfct->c[j], v[i]->terms[j], den);
	delete v[i];
    }
}

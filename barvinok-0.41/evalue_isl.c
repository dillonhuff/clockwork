#include <isl/ctx.h>
#include <isl/aff.h>
#include <isl_set_polylib.h>
#include <isl/constraint.h>
#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl/polynomial.h>
#include <barvinok/polylib.h>
#include <barvinok/evalue.h>

static __isl_give isl_qpolynomial *extract_base(__isl_take isl_space *dim,
	const evalue *e)
{
	int i;
	Vector *v;
	isl_ctx *ctx;
	isl_local_space *ls;
	isl_aff *aff;
	isl_val *val;
	isl_qpolynomial *base, *c;
	unsigned nparam;

	if (!dim)
		return NULL;

	if (e->x.p->type == polynomial)
		return isl_qpolynomial_var_on_domain(dim, isl_dim_param, e->x.p->pos - 1);

	ctx = isl_space_get_ctx(dim);
	nparam = isl_space_dim(dim, isl_dim_param);
	v = Vector_Alloc(2 + nparam);
	if (!v)
		goto error;

	for (i = 0; i < nparam; ++i)
		value_set_si(v->p[2 + i], 0);
	evalue_extract_affine(&e->x.p->arr[0], v->p + 2, &v->p[1], &v->p[0]);

	ls = isl_local_space_from_space(isl_space_copy(dim));
	aff = isl_aff_zero_on_domain(ls);
	val = isl_val_int_from_gmp(ctx, v->p[1]);
	aff = isl_aff_set_constant_val(aff, val);

	for (i = 0; i < nparam; ++i) {
		val = isl_val_int_from_gmp(ctx, v->p[2 + i]);
		aff = isl_aff_set_coefficient_val(aff, isl_dim_param, i, val);
	}

	val = isl_val_int_from_gmp(ctx, v->p[0]);
	aff = isl_aff_scale_down_val(aff, val);

	aff = isl_aff_floor(aff);
	base = isl_qpolynomial_from_aff(aff);

	if (e->x.p->type == fractional) {
		base = isl_qpolynomial_neg(base);

		val = isl_val_from_gmp(ctx,  v->p[1], v->p[0]);
		c = isl_qpolynomial_val_on_domain(isl_space_copy(dim), val);
		base = isl_qpolynomial_add(base, c);

		for (i = 0; i < nparam; ++i) {
			isl_qpolynomial *t;
			val = isl_val_from_gmp(ctx,  v->p[2 + i], v->p[0]);
			c = isl_qpolynomial_val_on_domain(isl_space_copy(dim),
							val);
			t = isl_qpolynomial_var_on_domain(isl_space_copy(dim),
						isl_dim_param, i);
			t = isl_qpolynomial_mul(c, t);
			base = isl_qpolynomial_add(base, t);
		}
	}

	Vector_Free(v);
	isl_space_free(dim);

	return base;
error:
	isl_space_free(dim);
	return NULL;
}

static int type_offset(enode *p)
{
	return p->type == fractional ? 1 : 
	       p->type == flooring ? 1 : 0;
}

__isl_give isl_qpolynomial *isl_qpolynomial_from_evalue(__isl_take isl_space *dim,
	const evalue *e)
{
	int i;
	isl_qpolynomial *qp;
	isl_qpolynomial *base;
	int offset;

	if (EVALUE_IS_NAN(*e))
		return isl_qpolynomial_infty_on_domain(dim);
	if (value_notzero_p(e->d)) {
		isl_ctx *ctx = isl_space_get_ctx(dim);
		isl_val *val = isl_val_from_gmp(ctx, e->x.n, e->d);
		return isl_qpolynomial_val_on_domain(dim, val);
	}

	offset = type_offset(e->x.p);

	assert(e->x.p->type == polynomial ||
	       e->x.p->type == flooring ||
	       e->x.p->type == fractional);
	assert(e->x.p->size >= 1 + offset);

	base = extract_base(isl_space_copy(dim), e);
	qp = isl_qpolynomial_from_evalue(isl_space_copy(dim),
					 &e->x.p->arr[e->x.p->size - 1]);

	for (i = e->x.p->size - 2; i >= offset; --i) {
		qp = isl_qpolynomial_mul(qp, isl_qpolynomial_copy(base));
		qp = isl_qpolynomial_add(qp,
				    isl_qpolynomial_from_evalue(isl_space_copy(dim),
				    &e->x.p->arr[i]));
	}

	isl_qpolynomial_free(base);
	isl_space_free(dim);

	return qp;
}

static __isl_give isl_pw_qpolynomial *guarded_evalue2pwqp(__isl_take isl_set *set,
	const evalue *e);

static __isl_give isl_pw_qpolynomial *relation2pwqp(__isl_take isl_set *set,
	const evalue *e)
{
	int i;
	Vector *vec;
	isl_space *dim;
	isl_ctx *ctx;
	isl_val *v;
	unsigned nparam;
	isl_pw_qpolynomial *pwqp;
	isl_aff *aff;
	struct isl_constraint *c;
	struct isl_basic_set *bset;
	struct isl_set *guard;
	const evalue *fract;

	if (!set || !e)
		goto error;

	if (e->x.p->size == 1) {
		dim = isl_set_get_space(set);
		isl_set_free(set);
		return isl_pw_qpolynomial_zero(dim);
	}

	ctx = isl_set_get_ctx(set);
	isl_assert(ctx, e->x.p->size > 0, goto error);
	isl_assert(ctx, e->x.p->size <= 3, goto error);
	isl_assert(ctx, value_zero_p(e->x.p->arr[0].d), goto error);
	isl_assert(ctx, e->x.p->arr[0].x.p->type == fractional, goto error);
	fract = &e->x.p->arr[0];

	nparam = isl_set_dim(set, isl_dim_param);
	assert(isl_set_dim(set, isl_dim_set) == 0);
	vec = Vector_Alloc(2 + nparam + 1);
	if (!vec)
		goto error;

	for (i = 0; i < nparam; ++i)
		value_set_si(vec->p[2 + i], 0);
	evalue_extract_affine(&fract->x.p->arr[0],
				vec->p + 2, &vec->p[1], &vec->p[0]);

	dim = isl_set_get_space(set);

	bset = isl_basic_set_universe(isl_space_copy(dim));
	aff = isl_aff_zero_on_domain(isl_local_space_from_space(dim));
	v = isl_val_int_from_gmp(ctx, vec->p[1]);
	aff = isl_aff_set_constant_val(aff, v);
	for (i = 0; i < nparam; ++i) {
		v = isl_val_int_from_gmp(ctx, vec->p[2 + i]);
		aff = isl_aff_set_coefficient_val(aff, isl_dim_param, i, v);
	}
	v = isl_val_int_from_gmp(ctx, vec->p[0]);
	aff = isl_aff_mod_val(aff, v);
	c = isl_equality_from_aff(aff);
	bset = isl_basic_set_add_constraint(bset, c);
	guard = isl_set_from_basic_set(bset);
	Vector_Free(vec);

	pwqp = guarded_evalue2pwqp(isl_set_intersect(isl_set_copy(set),
						     isl_set_copy(guard)),
				   &e->x.p->arr[1]);

	if (e->x.p->size == 3) {
		isl_pw_qpolynomial *pwqpc;
		guard = isl_set_complement(guard);
		pwqpc = guarded_evalue2pwqp(isl_set_intersect(isl_set_copy(set),
							      isl_set_copy(guard)),
					    &e->x.p->arr[2]);
		pwqp = isl_pw_qpolynomial_add_disjoint(pwqp, pwqpc);
	}

	isl_set_free(set);
	isl_set_free(guard);

	return pwqp;
error:
	isl_set_free(set);
	return NULL;
}

static __isl_give isl_pw_qpolynomial *guarded_evalue2pwqp(__isl_take isl_set *set,
	const evalue *e)
{
	isl_qpolynomial *qp;

	if (value_zero_p(e->d) && e->x.p->type == relation)
		return relation2pwqp(set, e);

	qp = isl_qpolynomial_from_evalue(isl_set_get_space(set), e);

	return isl_pw_qpolynomial_alloc(set, qp);
}

__isl_give isl_pw_qpolynomial *isl_pw_qpolynomial_from_evalue(__isl_take isl_space *dim, const evalue *e)
{
	int i;
	isl_space *pw_space;
	isl_pw_qpolynomial *pwqp;

	if (!dim || !e)
		goto error;
	if (EVALUE_IS_ZERO(*e)) {
		dim = isl_space_from_domain(dim);
		dim = isl_space_add_dims(dim, isl_dim_out, 1);
		return isl_pw_qpolynomial_zero(dim);
	}

	if (value_notzero_p(e->d)) {
		isl_ctx *ctx = isl_space_get_ctx(dim);
		isl_set *set = isl_set_universe(isl_space_copy(dim));
		isl_val *val = isl_val_from_gmp(ctx, e->x.n, e->d);
		isl_qpolynomial *qp = isl_qpolynomial_val_on_domain(dim, val);
		return isl_pw_qpolynomial_alloc(set, qp);
	}

	assert(!EVALUE_IS_NAN(*e));

	assert(e->x.p->type == partition);

	pw_space = isl_space_copy(dim);
	pw_space = isl_space_from_domain(pw_space);
	pw_space = isl_space_add_dims(pw_space, isl_dim_out, 1);
	pwqp = isl_pw_qpolynomial_zero(pw_space);

	for (i = 0; i < e->x.p->size/2; ++i) {
		Polyhedron *D = EVALUE_DOMAIN(e->x.p->arr[2 * i]);
		isl_set *set = isl_set_new_from_polylib(D, isl_space_copy(dim));
		isl_pw_qpolynomial *pwqp_i;

		pwqp_i = guarded_evalue2pwqp(set, &e->x.p->arr[2 * i + 1]);

		pwqp = isl_pw_qpolynomial_add_disjoint(pwqp, pwqp_i);
	}

	isl_space_free(dim);

	return pwqp;
error:
	isl_space_free(dim);
	return NULL;
}

static evalue *evalue_pow(evalue *e, int exp)
{
	evalue *pow;

	if (exp == 1)
		return e;

	pow = evalue_dup(e);
	while (--exp > 0)
		emul(e, pow);

	evalue_free(e);

	return pow;
}

static evalue *div2evalue(__isl_take isl_aff *div)
{
	int i;
	isl_ctx *ctx;
	isl_val *v;
	Vector *vec = NULL;
	unsigned dim;
	unsigned nparam;
	evalue *e;
	evalue *aff;

	if (!div)
		return NULL;

	if (isl_aff_dim(div, isl_dim_div) != 0)
		isl_die(isl_aff_get_ctx(div), isl_error_unsupported,
			"cannot handle nested divs", goto error);

	dim = isl_aff_dim(div, isl_dim_in);
	nparam = isl_aff_dim(div, isl_dim_param);

	ctx = isl_aff_get_ctx(div);
	vec = Vector_Alloc(1 + dim + nparam + 1);
	if (!vec)
		goto error;
	v = isl_aff_get_denominator_val(div);
	isl_val_get_num_gmp(v, vec->p[0]);
	div = isl_aff_scale_val(div, v);
	for (i = 0; i < dim; ++i) {
		v = isl_aff_get_coefficient_val(div, isl_dim_in, i);
		isl_val_get_num_gmp(v, vec->p[1 + i]);
		isl_val_free(v);
	}
	for (i = 0; i < nparam; ++i) {
		v = isl_aff_get_coefficient_val(div, isl_dim_param, i);
		isl_val_get_num_gmp(v, vec->p[1 + dim + i]);
		isl_val_free(v);
	}
	v = isl_aff_get_constant_val(div);
	isl_val_get_num_gmp(v, vec->p[1 + dim + nparam]);
	isl_val_free(v);

	e = isl_alloc_type(ctx, evalue);
	if (!e)
		goto error;
	value_init(e->d);
	value_set_si(e->d, 0);
	e->x.p = new_enode(flooring, 3, -1);
	evalue_set_si(&e->x.p->arr[1], 0, 1);
	evalue_set_si(&e->x.p->arr[2], 1, 1);
	value_clear(e->x.p->arr[0].d);
	aff = affine2evalue(vec->p + 1, vec->p[0], dim + nparam);
	e->x.p->arr[0] = *aff;
	free(aff);
	Vector_Free(vec);
	isl_aff_free(div);
	return e;
error:
	Vector_Free(vec);
	isl_aff_free(div);
	return NULL;
}

static isl_stat add_term(__isl_take isl_term *term, void *user)
{
	int i;
	evalue *sum = (evalue *)user;
	unsigned nparam;
	unsigned dim;
	unsigned n_div;
	isl_ctx *ctx;
	isl_val *v;
	Value n, d;
	evalue *e;

	if (!term)
		return isl_stat_error;

	nparam = isl_term_dim(term, isl_dim_param);
	dim = isl_term_dim(term, isl_dim_set);
	n_div = isl_term_dim(term, isl_dim_div);

	ctx = isl_term_get_ctx(term);
	e = isl_alloc_type(ctx, evalue);
	if (!e)
		goto error;

	value_init(n);
	value_init(d);

	v = isl_term_get_coefficient_val(term);
	isl_val_get_num_gmp(v, n);
	isl_val_get_den_gmp(v, d);
	isl_val_free(v);
	if (!v)
		goto error2;
	value_init(e->d);
	evalue_set(e, n, d);

	for (i = 0; i < dim; ++i) {
		evalue *pow;
		int exp = isl_term_get_exp(term, isl_dim_set, i);

		if (!exp)
			continue;

		pow = evalue_pow(evalue_var(i), exp);
		emul(pow, e);
		evalue_free(pow);
	}

	for (i = 0; i < nparam; ++i) {
		evalue *pow;
		int exp = isl_term_get_exp(term, isl_dim_param, i);

		if (!exp)
			continue;

		pow = evalue_pow(evalue_var(dim + i), exp);
		emul(pow, e);
		evalue_free(pow);
	}

	for (i = 0; i < n_div; ++i) {
		evalue *pow;
		evalue *floor;
		isl_aff *div;
		int exp = isl_term_get_exp(term, isl_dim_div, i);

		if (!exp)
			continue;

		div = isl_term_get_div(term, i);
		floor = div2evalue(div);
		if (!floor)
			goto error2;
		pow = evalue_pow(floor, exp);
		emul(pow, e);
		evalue_free(pow);
	}

	eadd(e, sum);
	evalue_free(e);

	value_clear(n);
	value_clear(d);

	isl_term_free(term);

	return isl_stat_ok;
error2:
	evalue_free(e);
	value_clear(n);
	value_clear(d);
error:
	isl_term_free(term);
	return isl_stat_error;
}

evalue *isl_qpolynomial_to_evalue(__isl_keep isl_qpolynomial *qp)
{
	evalue *e;

	e = evalue_zero();
	if (!e)
		return NULL;

	if (isl_qpolynomial_foreach_term(qp, add_term, e) < 0)
		goto error;

	return e;
error:
	evalue_free(e);
	return NULL;
}

static isl_stat add_guarded_qp(__isl_take isl_set *set,
	__isl_take isl_qpolynomial *qp, void *user)
{
	Polyhedron *D;
	evalue *e = NULL;
	evalue *f;
	evalue *sum = (evalue *)user;
	unsigned dim;

	e = isl_alloc_type(isl_set_get_ctx(set), evalue);
	if (!e)
		goto error;

	D = isl_set_to_polylib(set);
	if (!D)
		goto error;

	f = isl_qpolynomial_to_evalue(qp);
	if (!e) {
		Domain_Free(D);
		goto error;
	}

	dim = isl_set_dim(set, isl_dim_param) + isl_set_dim(set, isl_dim_set);
	value_init(e->d);
	e->x.p = new_enode(partition, 2, D->Dimension);
	EVALUE_SET_DOMAIN(e->x.p->arr[0], D);

	value_clear(e->x.p->arr[1].d);
	e->x.p->arr[1] = *f;
	free(f);

	eadd(e, sum);
	evalue_free(e);

	isl_set_free(set);
	isl_qpolynomial_free(qp);

	return isl_stat_ok;
error:
	free(e);
	isl_set_free(set);
	isl_qpolynomial_free(qp);
	return isl_stat_error;
}

evalue *isl_pw_qpolynomial_to_evalue(__isl_keep isl_pw_qpolynomial *pwqp)
{
	evalue *e;

	if (!pwqp)
		return NULL;
	e = evalue_zero();

	if (isl_pw_qpolynomial_foreach_piece(pwqp, add_guarded_qp, e))
		goto error;

	return e;
error:
	evalue_free(e);
	return NULL;
}

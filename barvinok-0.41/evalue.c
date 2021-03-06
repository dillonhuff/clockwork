/***********************************************************************/
/*                copyright 1997, Doran Wilde                          */
/*                copyright 1997-2000, Vincent Loechner                */
/*                copyright 1999, Emmanuel Jeannot                     */
/*                copyright 2003, Rachid Seghir                        */
/*                copyright 2003-2006, Sven Verdoolaege                */
/*       Permission is granted to copy, use, and distribute            */
/*       for any commercial or noncommercial purpose under the terms   */
/*       of the GNU General Public License, either version 2           */
/*       of the License, or (at your option) any later version.        */
/*       (see file : LICENSE).                                         */
/***********************************************************************/

#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <barvinok/evalue.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "summate.h"

#ifndef value_pmodulus
#define value_pmodulus(ref,val1,val2)  (mpz_fdiv_r((ref),(val1),(val2)))
#endif

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

#ifdef __GNUC__
#define NALLOC(p,n) p = (typeof(p))malloc((n) * sizeof(*p))
#else
#define NALLOC(p,n) p = (void *)malloc((n) * sizeof(*p))
#endif

void evalue_set_si(evalue *ev, int n, int d) {
    value_set_si(ev->d, d);
    value_init(ev->x.n);
    value_set_si(ev->x.n, n);
}

void evalue_set(evalue *ev, Value n, Value d) {
    value_assign(ev->d, d);
    value_init(ev->x.n);
    value_assign(ev->x.n, n);
}

void evalue_set_reduce(evalue *ev, Value n, Value d) {
    value_init(ev->x.n);
    value_gcd(ev->x.n, n, d);
    value_divexact(ev->d, d, ev->x.n);
    value_divexact(ev->x.n, n, ev->x.n);
}

evalue* evalue_zero()
{
    evalue *EP = ALLOC(evalue);
    value_init(EP->d);
    evalue_set_si(EP, 0, 1);
    return EP;
}

evalue *evalue_nan()
{
    evalue *EP = ALLOC(evalue);
    value_init(EP->d);
    value_set_si(EP->d, -2);
    EP->x.p = NULL;
    return EP;
}

/* returns an evalue that corresponds to
 *
 * x_var
 */
evalue *evalue_var(int var)
{
    evalue *EP = ALLOC(evalue);
    value_init(EP->d);
    value_set_si(EP->d,0);
    EP->x.p = new_enode(polynomial, 2, var + 1);
    evalue_set_si(&EP->x.p->arr[0], 0, 1);
    evalue_set_si(&EP->x.p->arr[1], 1, 1);
    return EP;
}

void aep_evalue(evalue *e, int *ref) {
  
    enode *p;
    int i;
  
    if (value_notzero_p(e->d))
        return;	        /* a rational number, its already reduced */
    if(!(p = e->x.p))
        return;	        /* hum... an overflow probably occured */
  
    /* First check the components of p */
    for (i=0;i<p->size;i++)
        aep_evalue(&p->arr[i],ref);
  
    /* Then p itself */
    switch (p->type) {
    case polynomial:
    case periodic:
    case evector:
	p->pos = ref[p->pos-1]+1;
    }
    return;
} /* aep_evalue */

/** Comments */
void addeliminatedparams_evalue(evalue *e,Matrix *CT) {
	
    enode *p;
    int i, j;
    int *ref;

    if (value_notzero_p(e->d))
        return;	         /* a rational number, its already reduced */
    if(!(p = e->x.p))
        return;	         /* hum... an overflow probably occured */
  
    /* Compute ref */
    ref = (int *)malloc(sizeof(int)*(CT->NbRows-1));
    for(i=0;i<CT->NbRows-1;i++)
        for(j=0;j<CT->NbColumns;j++)
            if(value_notzero_p(CT->p[i][j])) {
                ref[i] = j;
                break;
            }
  
    /* Transform the references in e, using ref */
    aep_evalue(e,ref);
    free( ref );
    return;
} /* addeliminatedparams_evalue */

static void addeliminatedparams_partition(enode *p, Matrix *CT, Polyhedron *CEq,
					  unsigned nparam, unsigned MaxRays)
{
    int i;
    assert(p->type == partition);
    p->pos = nparam;

    for (i = 0; i < p->size/2; i++) {
	Polyhedron *D = EVALUE_DOMAIN(p->arr[2*i]);
	Polyhedron *T = DomainPreimage(D, CT, MaxRays);
	Domain_Free(D);
	if (CEq) {
	    D = T;
	    T = DomainIntersection(D, CEq, MaxRays);
	    Domain_Free(D);
	}
	EVALUE_SET_DOMAIN(p->arr[2*i], T);
    }
}

void addeliminatedparams_enum(evalue *e, Matrix *CT, Polyhedron *CEq,
			      unsigned MaxRays, unsigned nparam)
{
    enode *p;
    int i;

    if (CT->NbRows == CT->NbColumns)
	return;

    if (EVALUE_IS_ZERO(*e))
	return;

    if (value_notzero_p(e->d)) {
	evalue res;
	value_init(res.d);
	value_set_si(res.d, 0);
	res.x.p = new_enode(partition, 2, nparam);
	EVALUE_SET_DOMAIN(res.x.p->arr[0], 
	    DomainConstraintSimplify(Polyhedron_Copy(CEq), MaxRays));
	value_clear(res.x.p->arr[1].d);
	res.x.p->arr[1] = *e;
	*e = res;
	return;
    }

    p = e->x.p;
    assert(p);

    addeliminatedparams_partition(p, CT, CEq, nparam, MaxRays);
    for (i = 0; i < p->size/2; i++)
	addeliminatedparams_evalue(&p->arr[2*i+1], CT);
}

static int mod_rational_cmp(evalue *e1, evalue *e2)
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

static int mod_term_cmp_r(evalue *e1, evalue *e2)
{
    if (value_notzero_p(e1->d)) {
	int r;
	if (value_zero_p(e2->d))
	    return -1;
	return mod_rational_cmp(e1, e2);
    }
    if (value_notzero_p(e2->d))
	return 1;
    if (e1->x.p->pos < e2->x.p->pos)
	return -1;
    else if (e1->x.p->pos > e2->x.p->pos)
	return 1;
    else {
	int r = mod_rational_cmp(&e1->x.p->arr[1], &e2->x.p->arr[1]);
	return r == 0 
		 ? mod_term_cmp_r(&e1->x.p->arr[0], &e2->x.p->arr[0])
		 : r;
    }
}

static int mod_term_cmp(const evalue *e1, const evalue *e2)
{
    assert(value_zero_p(e1->d));
    assert(value_zero_p(e2->d));
    assert(e1->x.p->type == fractional || e1->x.p->type == flooring);
    assert(e2->x.p->type == fractional || e2->x.p->type == flooring);
    return mod_term_cmp_r(&e1->x.p->arr[0], &e2->x.p->arr[0]);
}

static void check_order(const evalue *e)
{
    int i;
    evalue *a;

    if (value_notzero_p(e->d))
	return;

    switch (e->x.p->type) {
    case partition:
	for (i = 0; i < e->x.p->size/2; ++i)
	    check_order(&e->x.p->arr[2*i+1]);
	break;
    case relation:
	for (i = 1; i < e->x.p->size; ++i) {
	    a = &e->x.p->arr[i];
	    if (value_notzero_p(a->d))
		continue;
	    switch (a->x.p->type) {
	    case relation:
		assert(mod_term_cmp(&e->x.p->arr[0], &a->x.p->arr[0]) < 0);
		break;
	    case partition:
		assert(0);
	    }
	    check_order(a);
	}
	break;
    case polynomial:
	for (i = 0; i < e->x.p->size; ++i) {
	    a = &e->x.p->arr[i];
	    if (value_notzero_p(a->d))
		continue;
	    switch (a->x.p->type) {
	    case polynomial:
		assert(e->x.p->pos < a->x.p->pos);
		break;
	    case relation:
	    case partition:
		assert(0);
	    }
	    check_order(a);
	}
	break;
    case fractional:
    case flooring:
	for (i = 1; i < e->x.p->size; ++i) {
	    a = &e->x.p->arr[i];
	    if (value_notzero_p(a->d))
		continue;
	    switch (a->x.p->type) {
	    case polynomial:
	    case relation:
	    case partition:
		assert(0);
	    }
	}
	break;
    }
}

/* Negative pos means inequality */
/* s is negative of substitution if m is not zero */
struct fixed_param {
    int	    pos;
    evalue  s;
    Value   d;
    Value   m;
};

struct subst {
    struct fixed_param *fixed;
    int			n;
    int			max;
};

static int relations_depth(evalue *e)
{
    int d;

    for (d = 0; 
	 value_zero_p(e->d) && e->x.p->type == relation;
	 e = &e->x.p->arr[1], ++d);
    return d;
}

static void poly_denom_not_constant(evalue **pp, Value *d)
{
    evalue *p = *pp;
    value_set_si(*d, 1);

    while (value_zero_p(p->d)) {
	assert(p->x.p->type == polynomial);
	assert(p->x.p->size == 2);
	assert(value_notzero_p(p->x.p->arr[1].d));
	value_lcm(*d, *d, p->x.p->arr[1].d);
	p = &p->x.p->arr[0];
    }
    *pp = p;
}

static void poly_denom(evalue *p, Value *d)
{
    poly_denom_not_constant(&p, d);
    value_lcm(*d, *d, p->d);
}

static void realloc_substitution(struct subst *s, int d)
{
    struct fixed_param *n;
    int i;
    NALLOC(n, s->max+d);
    for (i = 0; i < s->n; ++i)
	n[i] = s->fixed[i];
    free(s->fixed);
    s->fixed = n;
    s->max += d;
}

static int add_modulo_substitution(struct subst *s, evalue *r)
{
    evalue *p;
    evalue *f;
    evalue *m;

    assert(value_zero_p(r->d) && r->x.p->type == relation);
    m = &r->x.p->arr[0];

    /* May have been reduced already */
    if (value_notzero_p(m->d))
	return 0;

    assert(value_zero_p(m->d) && m->x.p->type == fractional);
    assert(m->x.p->size == 3);

    /* fractional was inverted during reduction
     * invert it back and move constant in
     */
    if (!EVALUE_IS_ONE(m->x.p->arr[2])) {
	assert(value_pos_p(m->x.p->arr[2].d));
	assert(value_mone_p(m->x.p->arr[2].x.n));
	value_set_si(m->x.p->arr[2].x.n, 1);
	value_increment(m->x.p->arr[1].x.n, m->x.p->arr[1].x.n);
	assert(value_eq(m->x.p->arr[1].x.n, m->x.p->arr[1].d));
	value_set_si(m->x.p->arr[1].x.n, 1);
	eadd(&m->x.p->arr[1], &m->x.p->arr[0]);
	value_set_si(m->x.p->arr[1].x.n, 0);
	value_set_si(m->x.p->arr[1].d, 1);
    }

    /* Oops.  Nested identical relations. */
    if (!EVALUE_IS_ZERO(m->x.p->arr[1]))
	return 0;

    if (s->n >= s->max) {
	int d = relations_depth(r);
	realloc_substitution(s, d);
    }

    p = &m->x.p->arr[0];
    assert(value_zero_p(p->d) && p->x.p->type == polynomial);
    assert(p->x.p->size == 2);
    f = &p->x.p->arr[1];

    assert(value_pos_p(f->x.n));

    value_init(s->fixed[s->n].m);
    value_assign(s->fixed[s->n].m, f->d);
    s->fixed[s->n].pos = p->x.p->pos;
    value_init(s->fixed[s->n].d);
    value_assign(s->fixed[s->n].d, f->x.n);
    value_init(s->fixed[s->n].s.d);
    evalue_copy(&s->fixed[s->n].s, &p->x.p->arr[0]);
    ++s->n;

    return 1;
}

static int type_offset(enode *p)
{
   return p->type == fractional ? 1 :
	  p->type == flooring ? 1 :
	  p->type == relation ? 1 : 0;
}

static void reorder_terms_about(enode *p, evalue *v)
{
    int i;
    int offset = type_offset(p);

    for (i = p->size-1; i >= offset+1; i--) {
	emul(v, &p->arr[i]);
	eadd(&p->arr[i], &p->arr[i-1]);
	free_evalue_refs(&(p->arr[i]));
    }
    p->size = offset+1;
    free_evalue_refs(v);
}

void evalue_reorder_terms(evalue *e)
{
    enode *p;
    evalue f;
    int offset;

    assert(value_zero_p(e->d));
    p = e->x.p;
    assert(p->type == fractional ||
	   p->type == flooring ||
	   p->type == polynomial);  /* for now */

    offset = type_offset(p);
    value_init(f.d);
    value_set_si(f.d, 0);
    f.x.p = new_enode(p->type, offset+2, p->pos);
    if (offset == 1) {
	value_clear(f.x.p->arr[0].d);
	f.x.p->arr[0] = p->arr[0];
    }
    evalue_set_si(&f.x.p->arr[offset], 0, 1);
    evalue_set_si(&f.x.p->arr[offset+1], 1, 1);
    reorder_terms_about(p, &f);
    value_clear(e->d);
    *e = p->arr[offset];
    free(p);
}

static void evalue_reduce_size(evalue *e)
{
    int i, offset;
    enode *p;
    assert(value_zero_p(e->d));

    p = e->x.p;
    offset = type_offset(p);

    /* Try to reduce the degree */
    for (i = p->size-1; i >= offset+1; i--) {
	if (!EVALUE_IS_ZERO(p->arr[i]))
	    break;
	free_evalue_refs(&p->arr[i]);
    }
    if (i+1 < p->size)
	p->size = i+1;

    /* Try to reduce its strength */
    if (p->type == relation) {
	if (p->size == 1) {
	    free_evalue_refs(&p->arr[0]);
	    evalue_set_si(e, 0, 1);
	    free(p);
	}
    } else if (p->size == offset+1) {
	value_clear(e->d);
	memcpy(e, &p->arr[offset], sizeof(evalue));
	if (offset == 1)
	    free_evalue_refs(&p->arr[0]);
	free(p);
    }
}

#define value_two_p(val)	(mpz_cmp_si(val,2) == 0)

/* This function is called after the argument of the fractional part
 * in a polynomial expression in this fractional part has been reduced.
 * If the polynomial expression is of degree at least two, then
 * check if the argument happens to have been reduced to an affine
 * expression with denominator two.  If so, then emul_fractionals
 * assumes that the polynomial expression in this fractional part
 * is affine so we reduce the higher degree polynomial to an affine
 * expression here.
 *
 * In particular, since the denominator of the fractional part is two,
 * then the fractional part can only take on two values, 0 and 1/2.
 * This means that { f(x)/2 }^2 = 1/2 { f(x)/2 } so that we can repeatedly
 * replace
 *
 *	a_n { f(x)/2 }^n	with n >= 2
 *
 * by
 *
 *	a_n/2 { f(x)/2 }^{n-1}
 */
static void reduce_fractional(evalue *e)
{
    int i;
    evalue d;

    if (e->x.p->size <= 3)
	return;

    value_init(d.d);
    poly_denom(&e->x.p->arr[0], &d.d);
    if (value_two_p(d.d)) {
	value_init(d.x.n);
	value_set_si(d.x.n, 1);
	for (i = e->x.p->size - 1; i >= 3; --i) {
	    emul(&d, &e->x.p->arr[i]);
	    eadd(&e->x.p->arr[i], &e->x.p->arr[i - 1]);
	    free_evalue_refs(&e->x.p->arr[i]);
	}
	e->x.p->size = 3;
	value_clear(d.x.n);
    }
    value_clear(d.d);
}

void _reduce_evalue (evalue *e, struct subst *s, int fract) {
  
    enode *p;
    int i, j, k;
    int add;
  
    if (value_notzero_p(e->d)) {
	if (fract)
	    mpz_fdiv_r(e->x.n, e->x.n, e->d);
        return;	/* a rational number, its already reduced */
    }

    if(!(p = e->x.p))
        return;	/* hum... an overflow probably occured */
  
    /* First reduce the components of p */
    add = p->type == relation;
    for (i=0; i<p->size; i++) {
	if (add && i == 1)
	    add = add_modulo_substitution(s, e);

        if (i == 0 && p->type==fractional) {
	    _reduce_evalue(&p->arr[i], s, 1);
	    reduce_fractional(e);
	} else
	    _reduce_evalue(&p->arr[i], s, fract);

	if (add && i == p->size-1) {
	    --s->n;
	    value_clear(s->fixed[s->n].m);
	    value_clear(s->fixed[s->n].d);
	    free_evalue_refs(&s->fixed[s->n].s); 
	} else if (add && i == 1)
	    s->fixed[s->n-1].pos *= -1;
    }

    if (p->type==periodic) {
    
        /* Try to reduce the period */
        for (i=1; i<=(p->size)/2; i++) {
            if ((p->size % i)==0) {
	
                /* Can we reduce the size to i ? */
                for (j=0; j<i; j++)
                    for (k=j+i; k<e->x.p->size; k+=i)
                        if (!eequal(&p->arr[j], &p->arr[k])) goto you_lose;

                /* OK, lets do it */
                for (j=i; j<p->size; j++) free_evalue_refs(&p->arr[j]);
                p->size = i;
                break;

you_lose:   	/* OK, lets not do it */
                continue;
            }
        }

        /* Try to reduce its strength */
        if (p->size == 1) {
	    value_clear(e->d);
            memcpy(e,&p->arr[0],sizeof(evalue));
            free(p);
        }
    }
    else if (p->type==polynomial) {
	for (k = 0; s && k < s->n; ++k) {
	    if (s->fixed[k].pos == p->pos) {
		int divide = value_notone_p(s->fixed[k].d);
		evalue d;

		if (value_notzero_p(s->fixed[k].m)) {
		    if (!fract)
			continue;
		    assert(p->size == 2);
		    if (divide && value_ne(s->fixed[k].d, p->arr[1].x.n))
			continue;
		    if (!mpz_divisible_p(s->fixed[k].m, p->arr[1].d))
			continue;
		    divide = 1;
		}

		if (divide) {
		    value_init(d.d);
		    value_assign(d.d, s->fixed[k].d);
		    value_init(d.x.n);
		    if (value_notzero_p(s->fixed[k].m))
			value_oppose(d.x.n, s->fixed[k].m);
		    else
			value_set_si(d.x.n, 1);
		}

		for (i=p->size-1;i>=1;i--) {
		    emul(&s->fixed[k].s, &p->arr[i]);
		    if (divide)
			emul(&d, &p->arr[i]);
		    eadd(&p->arr[i], &p->arr[i-1]);
		    free_evalue_refs(&(p->arr[i]));
		}
		p->size = 1;
		_reduce_evalue(&p->arr[0], s, fract);

		if (divide)
		    free_evalue_refs(&d);

		break;
	    }
	}

	evalue_reduce_size(e);
    }
    else if (p->type==fractional) {
	int reorder = 0;
	evalue v;

	if (value_notzero_p(p->arr[0].d)) {
	    value_init(v.d);
	    value_assign(v.d, p->arr[0].d);
	    value_init(v.x.n);
	    mpz_fdiv_r(v.x.n, p->arr[0].x.n,  p->arr[0].d);

	    reorder = 1;
	} else {
	    evalue *f, *base;
	    evalue *pp = &p->arr[0];
	    assert(value_zero_p(pp->d) && pp->x.p->type == polynomial);
	    assert(pp->x.p->size == 2);

	    /* search for exact duplicate among the modulo inequalities */
	    do {
		f = &pp->x.p->arr[1];
		for (k = 0; s && k < s->n; ++k) {
		    if (-s->fixed[k].pos == pp->x.p->pos &&
			    value_eq(s->fixed[k].d, f->x.n) &&
			    value_eq(s->fixed[k].m, f->d) &&
			    eequal(&s->fixed[k].s, &pp->x.p->arr[0]))
			break;
		}
		if (k < s->n) {
		    Value g;
		    value_init(g);

		    /* replace { E/m } by { (E-1)/m } + 1/m */
		    poly_denom(pp, &g);
		    if (reorder) {
			evalue extra;
			value_init(extra.d);
			evalue_set_si(&extra, 1, 1);
			value_assign(extra.d, g);
			eadd(&extra, &v.x.p->arr[1]);
			free_evalue_refs(&extra); 

			/* We've been going in circles; stop now */
			if (value_ge(v.x.p->arr[1].x.n, v.x.p->arr[1].d)) {
			    free_evalue_refs(&v);
			    value_init(v.d);
			    evalue_set_si(&v, 0, 1);
			    break;
			}
		    } else {
			value_init(v.d);
			value_set_si(v.d, 0);
			v.x.p = new_enode(fractional, 3, -1);
			evalue_set_si(&v.x.p->arr[1], 1, 1);
			value_assign(v.x.p->arr[1].d, g);
			evalue_set_si(&v.x.p->arr[2], 1, 1);
			evalue_copy(&v.x.p->arr[0], &p->arr[0]);
		    }

		    for (f = &v.x.p->arr[0]; value_zero_p(f->d); 
					     f = &f->x.p->arr[0])
			;
		    value_division(f->d, g, f->d);
		    value_multiply(f->x.n, f->x.n, f->d);
		    value_assign(f->d, g);
		    value_decrement(f->x.n, f->x.n);
		    mpz_fdiv_r(f->x.n, f->x.n, f->d);

		    value_gcd(g, f->d, f->x.n);
		    value_division(f->d, f->d, g);
		    value_division(f->x.n, f->x.n, g);

		    value_clear(g);
		    pp = &v.x.p->arr[0];

		    reorder = 1;
		}
	    } while (k < s->n);

	    /* reduction may have made this fractional arg smaller */
	    i = reorder ? p->size : 1;
	    for ( ; i < p->size; ++i)
		if (value_zero_p(p->arr[i].d) && 
			p->arr[i].x.p->type == fractional &&
			mod_term_cmp(e, &p->arr[i]) >= 0)
		    break;
	    if (i < p->size) {
		value_init(v.d);
		value_set_si(v.d, 0);
		v.x.p = new_enode(fractional, 3, -1);
		evalue_set_si(&v.x.p->arr[1], 0, 1);
		evalue_set_si(&v.x.p->arr[2], 1, 1);
		evalue_copy(&v.x.p->arr[0], &p->arr[0]);

		reorder = 1;
	    }

	    if (!reorder) {
		Value m;
		Value r;
		evalue *pp = &p->arr[0];
		value_init(m);
		value_init(r);
		poly_denom_not_constant(&pp, &m);
		mpz_fdiv_r(r, m, pp->d);
		if (value_notzero_p(r)) {
		    value_init(v.d);
		    value_set_si(v.d, 0);
		    v.x.p = new_enode(fractional, 3, -1);

		    value_multiply(r, m, pp->x.n);
		    value_multiply(v.x.p->arr[1].d, m, pp->d);
		    value_init(v.x.p->arr[1].x.n);
		    mpz_fdiv_r(v.x.p->arr[1].x.n, r, pp->d);
		    mpz_fdiv_q(r, r, pp->d);

		    evalue_set_si(&v.x.p->arr[2], 1, 1);
		    evalue_copy(&v.x.p->arr[0], &p->arr[0]);
		    pp = &v.x.p->arr[0];
		    while (value_zero_p(pp->d))
			pp = &pp->x.p->arr[0];

		    value_assign(pp->d, m);
		    value_assign(pp->x.n, r);

		    value_gcd(r, pp->d, pp->x.n);
		    value_division(pp->d, pp->d, r);
		    value_division(pp->x.n, pp->x.n, r);

		    reorder = 1;
		}
		value_clear(m);
		value_clear(r);
	    }

	    if (!reorder) {
		int invert = 0;
		Value twice;
		value_init(twice);

		for (pp = &p->arr[0]; value_zero_p(pp->d); 
				      pp = &pp->x.p->arr[0]) {
		    f = &pp->x.p->arr[1];
		    assert(value_pos_p(f->d));
		    mpz_mul_ui(twice, f->x.n, 2);
		    if (value_lt(twice, f->d))
			break;
		    if (value_eq(twice, f->d))
			continue;
		    invert = 1;
		    break;
		}

		if (invert) {
		    value_init(v.d);
		    value_set_si(v.d, 0);
		    v.x.p = new_enode(fractional, 3, -1);
		    evalue_set_si(&v.x.p->arr[1], 0, 1);
		    poly_denom(&p->arr[0], &twice);
		    value_assign(v.x.p->arr[1].d, twice);
		    value_decrement(v.x.p->arr[1].x.n, twice);
		    evalue_set_si(&v.x.p->arr[2], -1, 1);
		    evalue_copy(&v.x.p->arr[0], &p->arr[0]);

		    for (pp = &v.x.p->arr[0]; value_zero_p(pp->d); 
					      pp = &pp->x.p->arr[0]) {
			f = &pp->x.p->arr[1];
			value_oppose(f->x.n, f->x.n);
			mpz_fdiv_r(f->x.n, f->x.n,  f->d);
		    }
		    value_division(pp->d, twice, pp->d);
		    value_multiply(pp->x.n, pp->x.n, pp->d);
		    value_assign(pp->d, twice);
		    value_oppose(pp->x.n, pp->x.n);
		    value_decrement(pp->x.n, pp->x.n);
		    mpz_fdiv_r(pp->x.n, pp->x.n, pp->d);

		    /* Maybe we should do this during reduction of 
		     * the constant.
		     */
		    value_gcd(twice, pp->d, pp->x.n);
		    value_division(pp->d, pp->d, twice);
		    value_division(pp->x.n, pp->x.n, twice);

		    reorder = 1;
		}

		value_clear(twice);
	    }
	}

	if (reorder) {
	    reorder_terms_about(p, &v);
	    _reduce_evalue(&p->arr[1], s, fract);
	}

	evalue_reduce_size(e);
    }
    else if (p->type == flooring) {
	/* Replace floor(constant) by its value */
	if (value_notzero_p(p->arr[0].d)) {
	    evalue v;
	    value_init(v.d);
	    value_set_si(v.d, 1);
	    value_init(v.x.n);
	    mpz_fdiv_q(v.x.n, p->arr[0].x.n,  p->arr[0].d);
	    reorder_terms_about(p, &v);
	    _reduce_evalue(&p->arr[1], s, fract);
	}
	evalue_reduce_size(e);
    }
    else if (p->type == relation) {
	if (p->size == 3 && eequal(&p->arr[1], &p->arr[2])) {
	    free_evalue_refs(&(p->arr[2]));
	    free_evalue_refs(&(p->arr[0]));
	    p->size = 2;
	    value_clear(e->d);
	    *e = p->arr[1];
	    free(p);
	    return;
	}
	evalue_reduce_size(e);
	if (value_notzero_p(e->d) || p != e->x.p)
	    return;
	else {
	    int reduced = 0;
	    evalue *m;
	    m = &p->arr[0];

	    /* Relation was reduced by means of an identical 
	     * inequality => remove 
	     */
	    if (value_zero_p(m->d) && !EVALUE_IS_ZERO(m->x.p->arr[1]))
		reduced = 1;

	    if (reduced || value_notzero_p(p->arr[0].d)) {
		if (!reduced && value_zero_p(p->arr[0].x.n)) {
		    value_clear(e->d);
		    memcpy(e,&p->arr[1],sizeof(evalue));
		    if (p->size == 3)
			free_evalue_refs(&(p->arr[2]));
		} else {
		    if (p->size == 3) {
			value_clear(e->d);
			memcpy(e,&p->arr[2],sizeof(evalue));
		    } else
			evalue_set_si(e, 0, 1);
		    free_evalue_refs(&(p->arr[1]));
		}
		free_evalue_refs(&(p->arr[0]));
		free(p);
	    }
	}
    }
    return;
} /* reduce_evalue */

static void add_substitution(struct subst *s, Value *row, unsigned dim)
{
    int k, l;
    evalue *r;

    for (k = 0; k < dim; ++k)
	if (value_notzero_p(row[k+1]))
	    break;

    Vector_Normalize_Positive(row+1, dim+1, k);
    assert(s->n < s->max);
    value_init(s->fixed[s->n].d);
    value_init(s->fixed[s->n].m);
    value_assign(s->fixed[s->n].d, row[k+1]);
    s->fixed[s->n].pos = k+1;
    value_set_si(s->fixed[s->n].m, 0);
    r = &s->fixed[s->n].s;
    value_init(r->d);
    for (l = k+1; l < dim; ++l)
	if (value_notzero_p(row[l+1])) {
	    value_set_si(r->d, 0);
	    r->x.p = new_enode(polynomial, 2, l + 1);
	    value_init(r->x.p->arr[1].x.n);
	    value_oppose(r->x.p->arr[1].x.n, row[l+1]);
	    value_set_si(r->x.p->arr[1].d, 1);
	    r = &r->x.p->arr[0];
	}
    value_init(r->x.n);
    value_oppose(r->x.n, row[dim+1]);
    value_set_si(r->d, 1);
    ++s->n;
}

static void _reduce_evalue_in_domain(evalue *e, Polyhedron *D, struct subst *s)
{
    unsigned dim;
    Polyhedron *orig = D;

    s->n = 0;
    dim = D->Dimension;
    if (D->next)
	D = DomainConvex(D, 0);
    /* We don't perform any substitutions if the domain is a union.
     * We may therefore miss out on some possible simplifications,
     * e.g., if a variable is always even in the whole union,
     * while there is a relation in the evalue that evaluates
     * to zero for even values of the variable.
     */
    if (!D->next && D->NbEq) {
	int j, k;
	if (s->max < dim) {
	    if (s->max != 0)
		realloc_substitution(s, dim);
	    else {
		int d = relations_depth(e);
		s->max = dim+d;
		NALLOC(s->fixed, s->max);
	    }
	}
	for (j = 0; j < D->NbEq; ++j)
	    add_substitution(s, D->Constraint[j], dim);
    }
    if (D != orig)
	Domain_Free(D);
    _reduce_evalue(e, s, 0);
    if (s->n != 0) {
	int j;
	for (j = 0; j < s->n; ++j) {
	    value_clear(s->fixed[j].d);
	    value_clear(s->fixed[j].m);
	    free_evalue_refs(&s->fixed[j].s); 
	}
    }
}

void reduce_evalue_in_domain(evalue *e, Polyhedron *D)
{
    struct subst s = { NULL, 0, 0 };
    POL_ENSURE_VERTICES(D);
    if (emptyQ(D)) {
	if (EVALUE_IS_ZERO(*e))
	    return;
	free_evalue_refs(e);
	value_init(e->d);
	evalue_set_si(e, 0, 1);
	return;
    }
    _reduce_evalue_in_domain(e, D, &s);
    if (s.max != 0)
	free(s.fixed);
}

void reduce_evalue (evalue *e) {
    struct subst s = { NULL, 0, 0 };

    if (value_notzero_p(e->d))
        return;	/* a rational number, its already reduced */

    if (e->x.p->type == partition) {
	int i;
	for (i = 0; i < e->x.p->size/2; ++i) {
	    Polyhedron *D = EVALUE_DOMAIN(e->x.p->arr[2*i]);

	    /* This shouldn't really happen; 
	     * Empty domains should not be added.
	     */
	    POL_ENSURE_VERTICES(D);
	    if (!emptyQ(D))
		_reduce_evalue_in_domain(&e->x.p->arr[2*i+1], D, &s);

	    if (emptyQ(D) || EVALUE_IS_ZERO(e->x.p->arr[2*i+1])) {
		free_evalue_refs(&e->x.p->arr[2*i+1]);
		Domain_Free(EVALUE_DOMAIN(e->x.p->arr[2*i]));
		value_clear(e->x.p->arr[2*i].d);
		e->x.p->size -= 2;
		e->x.p->arr[2*i] = e->x.p->arr[e->x.p->size];
		e->x.p->arr[2*i+1] = e->x.p->arr[e->x.p->size+1];
		--i;
	    }
	}
	if (e->x.p->size == 0) {
	    free(e->x.p);
	    evalue_set_si(e, 0, 1);
	}
    } else
	_reduce_evalue(e, &s, 0);
    if (s.max != 0)
	free(s.fixed);
}

static void print_evalue_r(FILE *DST, const evalue *e, const char **pname)
{
    if (EVALUE_IS_NAN(*e)) {
	fprintf(DST, "NaN");
	return;
    }

  if(value_notzero_p(e->d)) {    
    if(value_notone_p(e->d)) {
      value_print(DST,VALUE_FMT,e->x.n);
      fprintf(DST,"/");
      value_print(DST,VALUE_FMT,e->d);
    }  
    else {
      value_print(DST,VALUE_FMT,e->x.n);
    }
  }  
  else
    print_enode(DST,e->x.p,pname);
  return;
} /* print_evalue */

void print_evalue(FILE *DST, const evalue *e, const char **pname)
{
    print_evalue_r(DST, e, pname);
    if (value_notzero_p(e->d))
	fprintf(DST, "\n");
}

void print_enode(FILE *DST, enode *p, const char **pname)
{
  int i;
  
  if (!p) {
    fprintf(DST, "NULL");
    return;
  }
  switch (p->type) {
  case evector:
    fprintf(DST, "{ ");
    for (i=0; i<p->size; i++) {
      print_evalue_r(DST, &p->arr[i], pname);
      if (i!=(p->size-1))
	fprintf(DST, ", ");
    }
    fprintf(DST, " }\n");
    break;
  case polynomial:
    fprintf(DST, "( ");
    for (i=p->size-1; i>=0; i--) {
      print_evalue_r(DST, &p->arr[i], pname);
      if (i==1) fprintf(DST, " * %s + ", pname[p->pos-1]);
      else if (i>1) 
	fprintf(DST, " * %s^%d + ", pname[p->pos-1], i);
    }
    fprintf(DST, " )\n");
    break;
  case periodic:
    fprintf(DST, "[ ");
    for (i=0; i<p->size; i++) {
      print_evalue_r(DST, &p->arr[i], pname);
      if (i!=(p->size-1)) fprintf(DST, ", ");
    }
    fprintf(DST," ]_%s", pname[p->pos-1]);
    break;
  case flooring:
  case fractional:
    fprintf(DST, "( ");
    for (i=p->size-1; i>=1; i--) {
      print_evalue_r(DST, &p->arr[i], pname);
      if (i >= 2) {
        fprintf(DST, " * ");
	fprintf(DST, p->type == flooring ? "[" : "{");
        print_evalue_r(DST, &p->arr[0], pname);
	fprintf(DST, p->type == flooring ? "]" : "}");
	if (i>2) 
	  fprintf(DST, "^%d + ", i-1);
	else
	  fprintf(DST, " + ");
      }
    }
    fprintf(DST, " )\n");
    break;
  case relation:
    fprintf(DST, "[ ");
    print_evalue_r(DST, &p->arr[0], pname);
    fprintf(DST, "= 0 ] * \n");
    print_evalue_r(DST, &p->arr[1], pname);
    if (p->size > 2) {
	fprintf(DST, " +\n [ ");
	print_evalue_r(DST, &p->arr[0], pname);
	fprintf(DST, "!= 0 ] * \n");
	print_evalue_r(DST, &p->arr[2], pname);
    }
    break;
  case partition: {
    char **new_names = NULL;
    const char **names = pname;
    int maxdim = EVALUE_DOMAIN(p->arr[0])->Dimension;
    if (!pname || p->pos < maxdim) {
	new_names = ALLOCN(char *, maxdim);
	for (i = 0; i < p->pos; ++i) {
	    if (pname)
		new_names[i] = (char *)pname[i];
	    else {
		new_names[i] = ALLOCN(char, 10);
		snprintf(new_names[i], 10, "%c", 'P'+i);
	    }
	}
	for ( ; i < maxdim; ++i) {
	    new_names[i] = ALLOCN(char, 10);
	    snprintf(new_names[i], 10, "_p%d", i);
	}
	names = (const char**)new_names;
    }

    for (i=0; i<p->size/2; i++) {
	Print_Domain(DST, EVALUE_DOMAIN(p->arr[2*i]), names);
	print_evalue_r(DST, &p->arr[2*i+1], names);
	if (value_notzero_p(p->arr[2*i+1].d))
	    fprintf(DST, "\n");
    }

    if (!pname || p->pos < maxdim) {
	for (i = pname ? p->pos : 0; i < maxdim; ++i)
	    free(new_names[i]);
	free(new_names);
    }

    break;
  }
  default:
    assert(0);
  }
  return;
} /* print_enode */ 

/* Returns
 *	 0 if toplevels of e1 and e2 are at the same level
 *	<0 if toplevel of e1 should be outside of toplevel of e2
 *	>0 if toplevel of e2 should be outside of toplevel of e1
 */
static int evalue_level_cmp(const evalue *e1, const evalue *e2)
{
    if (value_notzero_p(e1->d) && value_notzero_p(e2->d))
	return 0;
    if (value_notzero_p(e1->d))
	return 1;
    if (value_notzero_p(e2->d))
	return -1;
    if (e1->x.p->type == partition && e2->x.p->type == partition)
	return 0;
    if (e1->x.p->type == partition)
	return -1;
    if (e2->x.p->type == partition)
	return 1;
    if (e1->x.p->type == relation && e2->x.p->type == relation) {
	if (eequal(&e1->x.p->arr[0], &e2->x.p->arr[0]))
	    return 0;
	return mod_term_cmp(&e1->x.p->arr[0], &e2->x.p->arr[0]);
    }
    if (e1->x.p->type == relation)
	return -1;
    if (e2->x.p->type == relation)
	return 1;
    if (e1->x.p->type == polynomial && e2->x.p->type == polynomial)
	return e1->x.p->pos - e2->x.p->pos;
    if (e1->x.p->type == polynomial)
	return -1;
    if (e2->x.p->type == polynomial)
	return 1;
    if (e1->x.p->type == periodic && e2->x.p->type == periodic)
	return e1->x.p->pos - e2->x.p->pos;
    assert(e1->x.p->type != periodic);
    assert(e2->x.p->type != periodic);
    assert(e1->x.p->type == e2->x.p->type);
    if (eequal(&e1->x.p->arr[0], &e2->x.p->arr[0]))
	return 0;
    return mod_term_cmp(e1, e2);
}

static void eadd_rev(const evalue *e1, evalue *res)
{
    evalue ev;
    value_init(ev.d);
    evalue_copy(&ev, e1);
    eadd(res, &ev);
    free_evalue_refs(res);	  
    *res = ev;
}

static void eadd_rev_cst(const evalue *e1, evalue *res)
{
    evalue ev;
    value_init(ev.d);
    evalue_copy(&ev, e1);
    eadd(res, &ev.x.p->arr[type_offset(ev.x.p)]);
    free_evalue_refs(res);	  
    *res = ev;
}

struct section { Polyhedron * D; evalue E; };

void eadd_partitions(const evalue *e1, evalue *res)
{
    int n, i, j;
    Polyhedron *d, *fd;
    struct section *s;
    s = (struct section *) 
	    malloc((e1->x.p->size/2+1) * (res->x.p->size/2+1) * 
		   sizeof(struct section));
    assert(s);
    assert(e1->x.p->pos == res->x.p->pos);
    assert(e1->x.p->pos == EVALUE_DOMAIN(e1->x.p->arr[0])->Dimension);
    assert(res->x.p->pos == EVALUE_DOMAIN(res->x.p->arr[0])->Dimension);

    n = 0;
    for (j = 0; j < e1->x.p->size/2; ++j) {
	assert(res->x.p->size >= 2);
	fd = DomainDifference(EVALUE_DOMAIN(e1->x.p->arr[2*j]),
			      EVALUE_DOMAIN(res->x.p->arr[0]), 0);
	if (!emptyQ(fd))
	    for (i = 1; i < res->x.p->size/2; ++i) {
		Polyhedron *t = fd;
		fd = DomainDifference(fd, EVALUE_DOMAIN(res->x.p->arr[2*i]), 0);
		Domain_Free(t);
		if (emptyQ(fd))
		    break;
	    }
	fd = DomainConstraintSimplify(fd, 0);
	if (emptyQ(fd)) {
	    Domain_Free(fd);
	    continue;
	}
	value_init(s[n].E.d);
	evalue_copy(&s[n].E, &e1->x.p->arr[2*j+1]);
	s[n].D = fd;
	++n;
    }
    for (i = 0; i < res->x.p->size/2; ++i) {
	fd = EVALUE_DOMAIN(res->x.p->arr[2*i]);
	for (j = 0; j < e1->x.p->size/2; ++j) {
	    Polyhedron *t;
	    d = DomainIntersection(EVALUE_DOMAIN(e1->x.p->arr[2*j]),
				   EVALUE_DOMAIN(res->x.p->arr[2*i]), 0);
	    d = DomainConstraintSimplify(d, 0);
	    if (emptyQ(d)) {
		Domain_Free(d);
		continue;
	    }
	    t = fd;
	    fd = DomainDifference(fd, EVALUE_DOMAIN(e1->x.p->arr[2*j]), 0);
	    if (t != EVALUE_DOMAIN(res->x.p->arr[2*i]))
		Domain_Free(t);
	    value_init(s[n].E.d);
	    evalue_copy(&s[n].E, &res->x.p->arr[2*i+1]);
	    eadd(&e1->x.p->arr[2*j+1], &s[n].E);
	    s[n].D = d;
	    ++n;
	}
	if (!emptyQ(fd)) {
	    s[n].E = res->x.p->arr[2*i+1];
	    s[n].D = fd;
	    ++n;
	} else {
	    free_evalue_refs(&res->x.p->arr[2*i+1]);
	    Domain_Free(fd);
	}
	if (fd != EVALUE_DOMAIN(res->x.p->arr[2*i]))
	    Domain_Free(EVALUE_DOMAIN(res->x.p->arr[2*i]));
	value_clear(res->x.p->arr[2*i].d);
    }

    free(res->x.p);
    assert(n > 0);
    res->x.p = new_enode(partition, 2*n, e1->x.p->pos);
    for (j = 0; j < n; ++j) {
	EVALUE_SET_DOMAIN(res->x.p->arr[2*j], s[j].D);
	value_clear(res->x.p->arr[2*j+1].d);
	res->x.p->arr[2*j+1] = s[j].E;
    }

    free(s);
}

static void explicit_complement(evalue *res)
{
    enode *rel = new_enode(relation, 3, 0);
    assert(rel);
    value_clear(rel->arr[0].d);
    rel->arr[0] = res->x.p->arr[0];
    value_clear(rel->arr[1].d);
    rel->arr[1] = res->x.p->arr[1];
    value_set_si(rel->arr[2].d, 1);
    value_init(rel->arr[2].x.n);
    value_set_si(rel->arr[2].x.n, 0);
    free(res->x.p);
    res->x.p = rel;
}

static void reduce_constant(evalue *e)
{
    Value g;
    value_init(g);

    value_gcd(g, e->x.n, e->d);
    if (value_notone_p(g)) {
	value_division(e->d, e->d,g);
	value_division(e->x.n, e->x.n,g);
    }
    value_clear(g);
}

/* Add two rational numbers */
static void eadd_rationals(const evalue *e1, evalue *res)
{
    if (value_eq(e1->d, res->d))
	value_addto(res->x.n, res->x.n, e1->x.n);
    else {
	value_multiply(res->x.n, res->x.n, e1->d);
	value_addmul(res->x.n, e1->x.n, res->d);
	value_multiply(res->d,e1->d,res->d);
    }
    reduce_constant(res);
}

static void eadd_relations(const evalue *e1, evalue *res)
{
    int i;

    if (res->x.p->size < 3 && e1->x.p->size == 3)
	explicit_complement(res);
    for (i = 1; i < e1->x.p->size; ++i)
	eadd(&e1->x.p->arr[i], &res->x.p->arr[i]);
}

static void eadd_arrays(const evalue *e1, evalue *res, int n)
{
    int i;

    // add any element in e1 to the corresponding element in res 
    i = type_offset(res->x.p);
    if (i == 1)
	assert(eequal(&e1->x.p->arr[0], &res->x.p->arr[0]));
    for (; i < n; i++)
	eadd(&e1->x.p->arr[i], &res->x.p->arr[i]);
}

static void eadd_poly(const evalue *e1, evalue *res)
{
    if (e1->x.p->size > res->x.p->size)
	eadd_rev(e1, res);
    else
	eadd_arrays(e1, res, e1->x.p->size);
}

/*
 * Product or sum of two periodics of the same parameter
 * and different periods
 */
static void combine_periodics(const evalue *e1, evalue *res,
				void (*op)(const evalue *, evalue*))
{
    Value es, rs;
    int i, size;
    enode *p;

    value_init(es);
    value_init(rs);
    value_set_si(es, e1->x.p->size);
    value_set_si(rs, res->x.p->size);
    value_lcm(rs, es, rs);
    size = (int)mpz_get_si(rs);
    value_clear(es);
    value_clear(rs);
    p = new_enode(periodic, size, e1->x.p->pos);
    for (i = 0; i < res->x.p->size; i++) {
	value_clear(p->arr[i].d);
	p->arr[i] = res->x.p->arr[i];
    }
    for (i = res->x.p->size; i < size; i++)
	evalue_copy(&p->arr[i], &res->x.p->arr[i % res->x.p->size]);
    for (i = 0; i < size; i++)
	op(&e1->x.p->arr[i % e1->x.p->size], &p->arr[i]);
    free(res->x.p);
    res->x.p = p;
}

static void eadd_periodics(const evalue *e1, evalue *res)
{
    int i;
    int x, y, p;
    evalue *ne;

    if (e1->x.p->size == res->x.p->size) {
	eadd_arrays(e1, res, e1->x.p->size);
	return;
    }

    combine_periodics(e1, res, eadd);
}

void evalue_assign(evalue *dst, const evalue *src)
{
    if (value_pos_p(dst->d) && value_pos_p(src->d)) {
	value_assign(dst->d, src->d);
	value_assign(dst->x.n, src->x.n);
	return;
    }
    free_evalue_refs(dst);
    value_init(dst->d);
    evalue_copy(dst, src);
}

void eadd(const evalue *e1, evalue *res)
{
    int cmp;

    if (EVALUE_IS_ZERO(*e1))
	return;

    if (EVALUE_IS_NAN(*res))
	return;

    if (EVALUE_IS_NAN(*e1)) {
	evalue_assign(res, e1);
	return;
    }

    if (EVALUE_IS_ZERO(*res)) {
	evalue_assign(res, e1);
	return;
    }

    cmp = evalue_level_cmp(res, e1);
    if (cmp > 0) {
	switch (e1->x.p->type) {
	case polynomial:
	case flooring:
	case fractional:
	    eadd_rev_cst(e1, res); 
	    break;
	default:
	    eadd_rev(e1, res);
	}
    } else if (cmp == 0) {
	if (value_notzero_p(e1->d)) {
	    eadd_rationals(e1, res);
	} else {
	    switch (e1->x.p->type) {
	    case partition:
		eadd_partitions(e1, res);
		break;
	    case relation:
		eadd_relations(e1, res);
		break;
	    case evector:
		assert(e1->x.p->size == res->x.p->size);
	    case polynomial:
	    case flooring:
	    case fractional:
		eadd_poly(e1, res);
		break;
	    case periodic:
		eadd_periodics(e1, res);
		break;
	    default:
		assert(0);
	    }
	}
    } else {
	int i;
	switch (res->x.p->type) {
	case polynomial:
	case flooring:
	case fractional:
	    /* Add to the constant term of a polynomial */
	    eadd(e1, &res->x.p->arr[type_offset(res->x.p)]);
	    break;
	case periodic:
	    /* Add to all elements of a periodic number */
	    for (i = 0; i < res->x.p->size; i++)
		eadd(e1, &res->x.p->arr[i]);
	    break;
	case evector:
	    fprintf(stderr, "eadd: cannot add const with vector\n");
	    break;
	case partition:
	    assert(0);
	case relation:
	    /* Create (zero) complement if needed */
	    if (res->x.p->size < 3)
		explicit_complement(res);
	    for (i = 1; i < res->x.p->size; ++i)
		eadd(e1, &res->x.p->arr[i]);
	    break;
	default:
	    assert(0);
	}
    }
} /* eadd */ 
 
static void emul_rev(const evalue *e1, evalue *res)
{
    evalue ev;
    value_init(ev.d);
    evalue_copy(&ev, e1);
    emul(res, &ev);
    free_evalue_refs(res);	  
    *res = ev;
}

static void emul_poly(const evalue *e1, evalue *res)
{
    int i, j, offset = type_offset(res->x.p);
    evalue tmp;
    enode *p;
    int size = (e1->x.p->size + res->x.p->size - offset - 1);

    p = new_enode(res->x.p->type, size, res->x.p->pos);

    for (i = offset; i < e1->x.p->size-1; ++i)
	if (!EVALUE_IS_ZERO(e1->x.p->arr[i]))
	    break;

    /* special case pure power */
    if (i == e1->x.p->size-1) {
	if (offset) {
	    value_clear(p->arr[0].d);
	    p->arr[0] = res->x.p->arr[0];
	}
	for (i = offset; i < e1->x.p->size-1; ++i)
	    evalue_set_si(&p->arr[i], 0, 1);
	for (i = offset; i < res->x.p->size; ++i) {
	    value_clear(p->arr[i+e1->x.p->size-offset-1].d);
	    p->arr[i+e1->x.p->size-offset-1] = res->x.p->arr[i];
	    emul(&e1->x.p->arr[e1->x.p->size-1],
		 &p->arr[i+e1->x.p->size-offset-1]);
	}
	free(res->x.p);
	res->x.p = p;
	return;
    }

    value_init(tmp.d);
    value_set_si(tmp.d,0);
    tmp.x.p = p;
    if (offset)
	evalue_copy(&p->arr[0], &e1->x.p->arr[0]);
    for (i = offset; i < e1->x.p->size; i++) {
	evalue_copy(&tmp.x.p->arr[i], &e1->x.p->arr[i]);
	emul(&res->x.p->arr[offset], &tmp.x.p->arr[i]);
    }
    for (; i<size; i++)
	evalue_set_si(&tmp.x.p->arr[i], 0, 1);
    for (i = offset+1; i<res->x.p->size; i++)
	for (j = offset; j<e1->x.p->size; j++) {
	    evalue ev;
	    value_init(ev.d);
	    evalue_copy(&ev, &e1->x.p->arr[j]);
	    emul(&res->x.p->arr[i], &ev);
	    eadd(&ev, &tmp.x.p->arr[i+j-offset]);
	    free_evalue_refs(&ev);
	}
    free_evalue_refs(res);
    *res = tmp;
}

void emul_partitions(const evalue *e1, evalue *res)
{
    int n, i, j, k;
    Polyhedron *d;
    struct section *s;
    s = (struct section *) 
	    malloc((e1->x.p->size/2) * (res->x.p->size/2) * 
		   sizeof(struct section));
    assert(s);
    assert(e1->x.p->pos == res->x.p->pos);
    assert(e1->x.p->pos == EVALUE_DOMAIN(e1->x.p->arr[0])->Dimension);
    assert(res->x.p->pos == EVALUE_DOMAIN(res->x.p->arr[0])->Dimension);

    n = 0;
    for (i = 0; i < res->x.p->size/2; ++i) {
	for (j = 0; j < e1->x.p->size/2; ++j) {
	    d = DomainIntersection(EVALUE_DOMAIN(e1->x.p->arr[2*j]),
				   EVALUE_DOMAIN(res->x.p->arr[2*i]), 0);
	    d = DomainConstraintSimplify(d, 0);
	    if (emptyQ(d)) {
		Domain_Free(d);
		continue;
	    }

	    /* This code is only needed because the partitions
	       are not true partitions.
	     */
	    for (k = 0; k < n; ++k) {
		if (DomainIncludes(s[k].D, d))
		    break;
		if (DomainIncludes(d, s[k].D)) {
		    Domain_Free(s[k].D);
		    free_evalue_refs(&s[k].E);
		    if (n > k)
			s[k] = s[--n];
		    --k;
		}
	    }
	    if (k < n) {
		Domain_Free(d);
		continue;
	    }

	    value_init(s[n].E.d);
	    evalue_copy(&s[n].E, &res->x.p->arr[2*i+1]);
	    emul(&e1->x.p->arr[2*j+1], &s[n].E);
	    s[n].D = d;
	    ++n;
	}
	Domain_Free(EVALUE_DOMAIN(res->x.p->arr[2*i]));
	value_clear(res->x.p->arr[2*i].d);
	free_evalue_refs(&res->x.p->arr[2*i+1]);
    }

    free(res->x.p);
    if (n == 0)
	evalue_set_si(res, 0, 1);
    else {
	res->x.p = new_enode(partition, 2*n, e1->x.p->pos);
	for (j = 0; j < n; ++j) {
	    EVALUE_SET_DOMAIN(res->x.p->arr[2*j], s[j].D);
	    value_clear(res->x.p->arr[2*j+1].d);
	    res->x.p->arr[2*j+1] = s[j].E;
	}
    }

    free(s);
}

/* Product of two rational numbers */
static void emul_rationals(const evalue *e1, evalue *res)
{
    value_multiply(res->d, e1->d, res->d);
    value_multiply(res->x.n, e1->x.n, res->x.n);
    reduce_constant(res);
}

static void emul_relations(const evalue *e1, evalue *res)
{
    int i;

    if (e1->x.p->size < 3 && res->x.p->size == 3) {
	free_evalue_refs(&res->x.p->arr[2]);
	res->x.p->size = 2;
    }
    for (i = 1; i < res->x.p->size; ++i)
	emul(&e1->x.p->arr[i], &res->x.p->arr[i]);
}

static void emul_periodics(const evalue *e1, evalue *res)
{
    int i;
    evalue *newp;
    Value x, y, z;
    int ix, iy, lcm;

    if (e1->x.p->size == res->x.p->size) {
	/* Product of two periodics of the same parameter and period */
	for (i = 0; i < res->x.p->size; i++) 
	    emul(&(e1->x.p->arr[i]), &(res->x.p->arr[i]));
	return;
    }

    combine_periodics(e1, res, emul);
}

/* Multiply two polynomial expressions in the same fractional part.
 *
 * If the denominator of the fractional part is two, then the fractional
 * part can only take on two values, 0 and 1/2.
 * This means that { f(x)/2 }^2 = 1/2 { f(x)/2 } so that
 *
 *	(a0 + a1 { f(x)/2 }) * (b0 + b1 { f(x)/2 })
 *	= a0 b0 + (a0 b1 + a1 b0 + a1 b1/2) { f(x)/2 }
 *
 * Since we can always reduce higher degree polynomials this way
 * we assume that the inputs are degree-1 polynomials.
 * Note in particular that we always start out with degree-1 polynomials
 * and that if we obtain an argument with a denominator of two
 * as a result of a substitution, then the polynomial expression
 * is reduced in reduce_fractional.
 */
static void emul_fractionals(const evalue *e1, evalue *res)
{
    evalue d;
    value_init(d.d);
    poly_denom(&e1->x.p->arr[0], &d.d);
    if (!value_two_p(d.d))
	emul_poly(e1, res);
    else {
	evalue tmp;
	value_init(d.x.n);
	value_set_si(d.x.n, 1);
	/* { x }^2 == { x }/2 */
	/* a0 b0 + (a0 b1 + a1 b0 + a1 b1/2) { x } */
	assert(e1->x.p->size == 3);
	assert(res->x.p->size == 3);
	value_init(tmp.d);
	evalue_copy(&tmp, &res->x.p->arr[2]);
	emul(&d, &tmp);
	eadd(&res->x.p->arr[1], &tmp);
	emul(&e1->x.p->arr[2], &tmp);
	emul(&e1->x.p->arr[1], &res->x.p->arr[1]);
	emul(&e1->x.p->arr[1], &res->x.p->arr[2]);
	eadd(&tmp, &res->x.p->arr[2]);
	free_evalue_refs(&tmp);	  
	value_clear(d.x.n);
    }
    value_clear(d.d);
}

/* Computes the product of two evalues "e1" and "res" and puts
 * the result in "res".  You need to make a copy of "res"
 * before calling this function if you still need it afterward.
 * The vector type of evalues is not treated here
 */
void emul(const evalue *e1, evalue *res)
{
    int cmp;

    assert(!(value_zero_p(e1->d) && e1->x.p->type == evector));
    assert(!(value_zero_p(res->d) && res->x.p->type == evector));
     
    if (EVALUE_IS_ZERO(*res))
	return;

    if (EVALUE_IS_ONE(*e1))
	return;

    if (EVALUE_IS_ZERO(*e1)) {
	evalue_assign(res, e1);
	return;
    }

    if (EVALUE_IS_NAN(*res))
	return;

    if (EVALUE_IS_NAN(*e1)) {
	evalue_assign(res, e1);
	return;
    }

    cmp = evalue_level_cmp(res, e1);
    if (cmp > 0) {
	emul_rev(e1, res);
    } else if (cmp == 0) {
	if (value_notzero_p(e1->d)) {
	    emul_rationals(e1, res);
	} else {
	    switch (e1->x.p->type) {
	    case partition:
		emul_partitions(e1, res);
		break;
	    case relation:
		emul_relations(e1, res);
		break;
	    case polynomial:
	    case flooring:
		emul_poly(e1, res);
		break;
	    case periodic:
		emul_periodics(e1, res);
		break;
	    case fractional:
		emul_fractionals(e1, res);
		break;
	    }
	}
    } else {
	int i;
	switch (res->x.p->type) {
	case partition:
	    for (i = 0; i < res->x.p->size/2; ++i)
		emul(e1, &res->x.p->arr[2*i+1]);
	    break;
	case relation:
	case polynomial:
	case periodic:
	case flooring:
	case fractional:
	    for (i = type_offset(res->x.p); i < res->x.p->size; ++i)
		emul(e1, &res->x.p->arr[i]);
	    break;
	}
    }
}

/* Frees mask content ! */
void emask(evalue *mask, evalue *res) {
    int n, i, j;
    Polyhedron *d, *fd;
    struct section *s;
    evalue mone;
    int pos;

    if (EVALUE_IS_ZERO(*res)) {
	free_evalue_refs(mask); 
	return;
    }

    assert(value_zero_p(mask->d));
    assert(mask->x.p->type == partition);
    assert(value_zero_p(res->d));
    assert(res->x.p->type == partition);
    assert(mask->x.p->pos == res->x.p->pos);
    assert(res->x.p->pos == EVALUE_DOMAIN(res->x.p->arr[0])->Dimension);
    assert(mask->x.p->pos == EVALUE_DOMAIN(mask->x.p->arr[0])->Dimension);
    pos = res->x.p->pos;

    s = (struct section *) 
	    malloc((mask->x.p->size/2+1) * (res->x.p->size/2) * 
		   sizeof(struct section));
    assert(s);

    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);

    n = 0;
    for (j = 0; j < res->x.p->size/2; ++j) {
	assert(mask->x.p->size >= 2);
	fd = DomainDifference(EVALUE_DOMAIN(res->x.p->arr[2*j]),
			      EVALUE_DOMAIN(mask->x.p->arr[0]), 0);
	if (!emptyQ(fd))
	    for (i = 1; i < mask->x.p->size/2; ++i) {
		Polyhedron *t = fd;
		fd = DomainDifference(fd, EVALUE_DOMAIN(mask->x.p->arr[2*i]), 0);
		Domain_Free(t);
		if (emptyQ(fd))
		    break;
	    }
	if (emptyQ(fd)) {
	    Domain_Free(fd);
	    continue;
	}
	value_init(s[n].E.d);
	evalue_copy(&s[n].E, &res->x.p->arr[2*j+1]);
	s[n].D = fd;
	++n;
    }
    for (i = 0; i < mask->x.p->size/2; ++i) {
	if (EVALUE_IS_ONE(mask->x.p->arr[2*i+1]))
	    continue;

	fd = EVALUE_DOMAIN(mask->x.p->arr[2*i]);
	eadd(&mone, &mask->x.p->arr[2*i+1]);
	emul(&mone, &mask->x.p->arr[2*i+1]);
	for (j = 0; j < res->x.p->size/2; ++j) {
	    Polyhedron *t;
	    d = DomainIntersection(EVALUE_DOMAIN(res->x.p->arr[2*j]),
				   EVALUE_DOMAIN(mask->x.p->arr[2*i]), 0);
	    if (emptyQ(d)) {
		Domain_Free(d);
		continue;
	    }
	    t = fd;
	    fd = DomainDifference(fd, EVALUE_DOMAIN(res->x.p->arr[2*j]), 0);
	    if (t != EVALUE_DOMAIN(mask->x.p->arr[2*i]))
		Domain_Free(t);
	    value_init(s[n].E.d);
	    evalue_copy(&s[n].E, &res->x.p->arr[2*j+1]);
	    emul(&mask->x.p->arr[2*i+1], &s[n].E);
	    s[n].D = d;
	    ++n;
	}

	if (!emptyQ(fd)) {
	    /* Just ignore; this may have been previously masked off */
	}
	if (fd != EVALUE_DOMAIN(mask->x.p->arr[2*i]))
	    Domain_Free(fd);
    }

    free_evalue_refs(&mone);
    free_evalue_refs(mask);
    free_evalue_refs(res);
    value_init(res->d);
    if (n == 0)
	evalue_set_si(res, 0, 1);
    else {
	res->x.p = new_enode(partition, 2*n, pos);
	for (j = 0; j < n; ++j) {
	    EVALUE_SET_DOMAIN(res->x.p->arr[2*j], s[j].D);
	    value_clear(res->x.p->arr[2*j+1].d);
	    res->x.p->arr[2*j+1] = s[j].E;
	}
    }

    free(s);
}

void evalue_copy(evalue *dst, const evalue *src)
{
    value_assign(dst->d, src->d);
    if (EVALUE_IS_NAN(*dst)) {
	dst->x.p = NULL;
	return;
    }
    if (value_pos_p(src->d)) {
	 value_init(dst->x.n);
	 value_assign(dst->x.n, src->x.n);
    } else
	 dst->x.p = ecopy(src->x.p);
}

evalue *evalue_dup(const evalue *e)
{
    evalue *res = ALLOC(evalue);
    value_init(res->d);
    evalue_copy(res, e);
    return res;
}

enode *new_enode(enode_type type,int size,int pos) {
  
  enode *res;
  int i;
  
  if(size == 0) {
    fprintf(stderr, "Allocating enode of size 0 !\n" );
    return NULL;
  }
  res = (enode *) malloc(sizeof(enode) + (size-1)*sizeof(evalue));
  res->type = type;
  res->size = size;
  res->pos = pos;
  for(i=0; i<size; i++) {
    value_init(res->arr[i].d);
    value_set_si(res->arr[i].d,0);
    res->arr[i].x.p = 0;
  }
  return res;
} /* new_enode */

enode *ecopy(enode *e) {
  
  enode *res;
  int i;
  
  res = new_enode(e->type,e->size,e->pos);
  for(i=0;i<e->size;++i) {
    value_assign(res->arr[i].d,e->arr[i].d);
    if(value_zero_p(res->arr[i].d))
      res->arr[i].x.p = ecopy(e->arr[i].x.p);
    else if (EVALUE_IS_DOMAIN(res->arr[i]))
      EVALUE_SET_DOMAIN(res->arr[i], Domain_Copy(EVALUE_DOMAIN(e->arr[i])));
    else {
      value_init(res->arr[i].x.n);
      value_assign(res->arr[i].x.n,e->arr[i].x.n);
    }
  }
  return(res);
} /* ecopy */

int ecmp(const evalue *e1, const evalue *e2)
{
    enode *p1, *p2;
    int i;
    int r;

    if (value_notzero_p(e1->d) && value_notzero_p(e2->d)) {
	Value m, m2;
	value_init(m);
	value_init(m2);
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
    if (value_notzero_p(e1->d))
	return -1;
    if (value_notzero_p(e2->d))
	return 1;

    p1 = e1->x.p;
    p2 = e2->x.p;

    if (p1->type != p2->type)
	return p1->type - p2->type;
    if (p1->pos != p2->pos)
	return p1->pos - p2->pos;
    if (p1->size != p2->size)
	return p1->size - p2->size;

    for (i = p1->size-1; i >= 0; --i)
	if ((r = ecmp(&p1->arr[i], &p2->arr[i])) != 0)
	    return r;

    return 0;
}

int eequal(const evalue *e1, const evalue *e2)
{ 
    int i;
    enode *p1, *p2;
  
    if (value_ne(e1->d,e2->d))
        return 0;

    if (EVALUE_IS_DOMAIN(*e1))
	return PolyhedronIncludes(EVALUE_DOMAIN(*e2), EVALUE_DOMAIN(*e1)) &&
	       PolyhedronIncludes(EVALUE_DOMAIN(*e1), EVALUE_DOMAIN(*e2));

    if (EVALUE_IS_NAN(*e1))
	return 1;
  
    assert(value_posz_p(e1->d));

    /* e1->d == e2->d */
    if (value_notzero_p(e1->d)) {    
        if (value_ne(e1->x.n,e2->x.n))
            return 0;
    
        /* e1->d == e2->d != 0  AND e1->n == e2->n */
        return 1;
    }
  
    /* e1->d == e2->d == 0 */
    p1 = e1->x.p;
    p2 = e2->x.p;
    if (p1->type != p2->type) return 0;
    if (p1->size != p2->size) return 0;
    if (p1->pos  != p2->pos) return 0;
    for (i=0; i<p1->size; i++)
        if (!eequal(&p1->arr[i], &p2->arr[i]) ) 
            return 0;
    return 1;
} /* eequal */

void free_evalue_refs(evalue *e) {
  
  enode *p;
  int i;
  
    if (EVALUE_IS_NAN(*e)) {
	value_clear(e->d);
	return;
    }

  if (EVALUE_IS_DOMAIN(*e)) {
    Domain_Free(EVALUE_DOMAIN(*e));
    value_clear(e->d);
    return;
  } else if (value_pos_p(e->d)) {
    
    /* 'e' stores a constant */
    value_clear(e->d);
    value_clear(e->x.n);
    return; 
  }  
  assert(value_zero_p(e->d));
  value_clear(e->d);
  p = e->x.p;
  if (!p) return;	/* null pointer */
  for (i=0; i<p->size; i++) {
    free_evalue_refs(&(p->arr[i]));
  }
  free(p);
  return;
} /* free_evalue_refs */

void evalue_free(evalue *e)
{
    free_evalue_refs(e);
    free(e);
}

static void mod2table_r(evalue *e, Vector *periods, Value m, int p, 
			Vector * val, evalue *res)
{
    unsigned nparam = periods->Size;

    if (p == nparam) {
	double d = compute_evalue(e, val->p);
	d *= VALUE_TO_DOUBLE(m);
	if (d > 0)
	    d += .25;
	else
	    d -= .25;
	value_assign(res->d, m);
	value_init(res->x.n);
	value_set_double(res->x.n, d);
	mpz_fdiv_r(res->x.n, res->x.n, m);
	return;
    }
    if (value_one_p(periods->p[p]))
	mod2table_r(e, periods, m, p+1, val, res);
    else {
	Value tmp;
	value_init(tmp);

	value_assign(tmp, periods->p[p]);
	value_set_si(res->d, 0);
	res->x.p = new_enode(periodic, VALUE_TO_INT(tmp), p+1);
	do {
	    value_decrement(tmp, tmp);
	    value_assign(val->p[p], tmp);
	    mod2table_r(e, periods, m, p+1, val, 
			&res->x.p->arr[VALUE_TO_INT(tmp)]);
	} while (value_pos_p(tmp));

	value_clear(tmp);
    }
}

static void rel2table(evalue *e, int zero)
{
    if (value_pos_p(e->d)) {
	if (value_zero_p(e->x.n) == zero)
	    value_set_si(e->x.n, 1);
	else
	    value_set_si(e->x.n, 0);
	value_set_si(e->d, 1);
    } else {
	int i;
	for (i = 0; i < e->x.p->size; ++i)
	    rel2table(&e->x.p->arr[i], zero);
    }
}

void evalue_mod2table(evalue *e, int nparam)
{
  enode *p;
  int i;

  if (EVALUE_IS_DOMAIN(*e) || value_pos_p(e->d))
    return;
  p = e->x.p;
  for (i=0; i<p->size; i++) {
    evalue_mod2table(&(p->arr[i]), nparam);
  }
  if (p->type == relation) {
    evalue copy;

    if (p->size > 2) {
      value_init(copy.d);
      evalue_copy(&copy, &p->arr[0]);
    }
    rel2table(&p->arr[0], 1);
    emul(&p->arr[0], &p->arr[1]);
    if (p->size > 2) {
      rel2table(&copy, 0);
      emul(&copy, &p->arr[2]);
      eadd(&p->arr[2], &p->arr[1]);
      free_evalue_refs(&p->arr[2]);	  
      free_evalue_refs(&copy);	  
    }
    free_evalue_refs(&p->arr[0]);	  
    value_clear(e->d);
    *e = p->arr[1];
    free(p);
  } else if (p->type == fractional) {
    Vector *periods = Vector_Alloc(nparam);
    Vector *val = Vector_Alloc(nparam);
    Value tmp;
    evalue *ev;
    evalue EP, res;

    value_init(tmp);
    value_set_si(tmp, 1);
    Vector_Set(periods->p, 1, nparam);
    Vector_Set(val->p, 0, nparam);
    for (ev = &p->arr[0]; value_zero_p(ev->d); ev = &ev->x.p->arr[0]) {
      enode *p = ev->x.p;

      assert(p->type == polynomial);
      assert(p->size == 2);
      value_assign(periods->p[p->pos-1], p->arr[1].d);
      value_lcm(tmp, tmp, p->arr[1].d);
    }
    value_lcm(tmp, tmp, ev->d);
    value_init(EP.d);
    mod2table_r(&p->arr[0], periods, tmp, 0, val, &EP);

    value_init(res.d);
    evalue_set_si(&res, 0, 1);
    /* Compute the polynomial using Horner's rule */
    for (i=p->size-1;i>1;i--) {
      eadd(&p->arr[i], &res);
      emul(&EP, &res);
    }
    eadd(&p->arr[1], &res);

    free_evalue_refs(e);	  
    free_evalue_refs(&EP);	  
    *e = res;

    value_clear(tmp);
    Vector_Free(val);
    Vector_Free(periods);
  }
} /* evalue_mod2table */

/********************************************************/
/* function in domain                                   */
/*    check if the parameters in list_args              */
/*    verifies the constraints of Domain P          	*/
/********************************************************/
int in_domain(Polyhedron *P, Value *list_args)
{
  int row, in = 1;
  Value v; /* value of the constraint of a row when
	       parameters are instantiated*/

  if (P->Dimension == 0)
    return !emptyQ(P);

  value_init(v); 
  
  for (row = 0; row < P->NbConstraints; row++) {
    Inner_Product(P->Constraint[row]+1, list_args, P->Dimension, &v);
    value_addto(v, v, P->Constraint[row][P->Dimension+1]); /*constant part*/
    if (value_neg_p(v) ||
	(value_zero_p(P->Constraint[row][0]) && value_notzero_p(v))) {
      in = 0;
      break;
    }
  }
  
  value_clear(v);
  return in || (P->next && in_domain(P->next, list_args));
} /* in_domain */

/****************************************************/
/* function compute enode                           */
/*     compute the value of enode p with parameters */
/*     list "list_args                              */
/*     compute the polynomial or the periodic       */
/****************************************************/

static double compute_enode(enode *p, Value *list_args) {
  
  int i;
  Value m, param;
  double res=0.0;
    
  if (!p)
    return(0.);

  value_init(m);
  value_init(param);

  if (p->type == polynomial) {
    if (p->size > 1)
	value_assign(param,list_args[p->pos-1]);
    
    /* Compute the polynomial using Horner's rule */
    for (i=p->size-1;i>0;i--) {
      res +=compute_evalue(&p->arr[i],list_args);
      res *=VALUE_TO_DOUBLE(param);
    }
    res +=compute_evalue(&p->arr[0],list_args);
  }
  else if (p->type == fractional) {
    double d = compute_evalue(&p->arr[0], list_args);
    d -= floor(d+1e-10);
    
    /* Compute the polynomial using Horner's rule */
    for (i=p->size-1;i>1;i--) {
      res +=compute_evalue(&p->arr[i],list_args);
      res *=d;
    }
    res +=compute_evalue(&p->arr[1],list_args);
  }
  else if (p->type == flooring) {
    double d = compute_evalue(&p->arr[0], list_args);
    d = floor(d+1e-10);
    
    /* Compute the polynomial using Horner's rule */
    for (i=p->size-1;i>1;i--) {
      res +=compute_evalue(&p->arr[i],list_args);
      res *=d;
    }
    res +=compute_evalue(&p->arr[1],list_args);
  }
  else if (p->type == periodic) {
    value_assign(m,list_args[p->pos-1]);
    
    /* Choose the right element of the periodic */
    value_set_si(param,p->size);
    value_pmodulus(m,m,param);
    res = compute_evalue(&p->arr[VALUE_TO_INT(m)],list_args);
  }
  else if (p->type == relation) {
    if (fabs(compute_evalue(&p->arr[0], list_args)) < 1e-10)
      res = compute_evalue(&p->arr[1], list_args);
    else if (p->size > 2)
      res = compute_evalue(&p->arr[2], list_args);
  }
  else if (p->type == partition) {
    int dim = EVALUE_DOMAIN(p->arr[0])->Dimension;
    Value *vals = list_args;
    if (p->pos < dim) {
	NALLOC(vals, dim);
	for (i = 0; i < dim; ++i) {
	    value_init(vals[i]);
	    if (i < p->pos)
		value_assign(vals[i], list_args[i]);
	}
    }
    for (i = 0; i < p->size/2; ++i)
      if (DomainContains(EVALUE_DOMAIN(p->arr[2*i]), vals, p->pos, 0, 1)) {
	res = compute_evalue(&p->arr[2*i+1], vals);
	break;
      }
    if (p->pos < dim) {
	for (i = 0; i < dim; ++i)
	    value_clear(vals[i]);
	free(vals);
    }
  }
  else
    assert(0);
  value_clear(m);
  value_clear(param);
  return res;
} /* compute_enode */

/*************************************************/
/* return the value of Ehrhart Polynomial        */
/* It returns a double, because since it is      */
/* a recursive function, some intermediate value */
/* might not be integral                         */
/*************************************************/

double compute_evalue(const evalue *e, Value *list_args)
{
  double res;
  
  if (value_notzero_p(e->d)) {
    if (value_notone_p(e->d)) 
      res = VALUE_TO_DOUBLE(e->x.n) / VALUE_TO_DOUBLE(e->d);
    else 
      res = VALUE_TO_DOUBLE(e->x.n);
  }
  else 
    res = compute_enode(e->x.p,list_args);
  return res;
} /* compute_evalue */


/****************************************************/
/* function compute_poly :                          */
/* Check for the good validity domain               */
/* return the number of point in the Polyhedron     */
/* in allocated memory                              */
/* Using the Ehrhart pseudo-polynomial              */
/****************************************************/
Value *compute_poly(Enumeration *en,Value *list_args) {

  Value *tmp;
  /*	double d; int i; */

  tmp = (Value *) malloc (sizeof(Value));
  assert(tmp != NULL);
  value_init(*tmp);
  value_set_si(*tmp,0);
  
  if(!en)
    return(tmp);	/* no ehrhart polynomial */
  if(en->ValidityDomain) {
    if(!en->ValidityDomain->Dimension) { /* no parameters */
      value_set_double(*tmp,compute_evalue(&en->EP,list_args)+.25);
      return(tmp);
    }
  }  
  else 
    return(tmp);  /* no Validity Domain */    
  while(en) {
    if(in_domain(en->ValidityDomain,list_args)) {
      
#ifdef EVAL_EHRHART_DEBUG
      Print_Domain(stdout,en->ValidityDomain);
      print_evalue(stdout,&en->EP);
#endif
      
      /*			d = compute_evalue(&en->EP,list_args);
				i = d;
				printf("(double)%lf = %d\n", d, i ); */
      value_set_double(*tmp,compute_evalue(&en->EP,list_args)+.25);
      return(tmp);
    }
    else
      en=en->next;
  }
  value_set_si(*tmp,0);
  return(tmp); /* no compatible domain with the arguments */
} /* compute_poly */ 

static evalue *eval_polynomial(const enode *p, int offset,
			       evalue *base, Value *values)
{
    int i;
    evalue *res, *c;

    res = evalue_zero();
    for (i = p->size-1; i > offset; --i) {
	c = evalue_eval(&p->arr[i], values);
	eadd(c, res);
	evalue_free(c);
	emul(base, res);
    }
    c = evalue_eval(&p->arr[offset], values);
    eadd(c, res);
    evalue_free(c);

    return res;
}

evalue *evalue_eval(const evalue *e, Value *values)
{
    evalue *res = NULL;
    evalue param;
    evalue *param2;
    int i;

    if (value_notzero_p(e->d)) {
	res = ALLOC(evalue);
	value_init(res->d);
	evalue_copy(res, e);
	return res;
    }
    switch (e->x.p->type) {
    case polynomial:
	value_init(param.x.n);
	value_assign(param.x.n, values[e->x.p->pos-1]);
	value_init(param.d);
	value_set_si(param.d, 1);

	res = eval_polynomial(e->x.p, 0, &param, values);
	free_evalue_refs(&param);
	break;
    case fractional:
	param2 = evalue_eval(&e->x.p->arr[0], values);
	mpz_fdiv_r(param2->x.n, param2->x.n, param2->d);

	res = eval_polynomial(e->x.p, 1, param2, values);
	evalue_free(param2);
	break;
    case flooring:
	param2 = evalue_eval(&e->x.p->arr[0], values);
	mpz_fdiv_q(param2->x.n, param2->x.n, param2->d);
	value_set_si(param2->d, 1);

	res = eval_polynomial(e->x.p, 1, param2, values);
	evalue_free(param2);
	break;
    case relation:
	param2 = evalue_eval(&e->x.p->arr[0], values);
	if (value_zero_p(param2->x.n))
	    res = evalue_eval(&e->x.p->arr[1], values);
	else if (e->x.p->size > 2)
	    res = evalue_eval(&e->x.p->arr[2], values);
	else
	    res = evalue_zero();
	evalue_free(param2);
	break;
    case partition:
    	assert(e->x.p->pos == EVALUE_DOMAIN(e->x.p->arr[0])->Dimension);
	for (i = 0; i < e->x.p->size/2; ++i)
	    if (in_domain(EVALUE_DOMAIN(e->x.p->arr[2*i]), values)) {
		res = evalue_eval(&e->x.p->arr[2*i+1], values);
		break;
	    }
	if (!res)
	    res = evalue_zero();
	break;
    default:
	assert(0);
    }
    return res;
}

size_t value_size(Value v) {
    return (v[0]._mp_size > 0 ? v[0]._mp_size : -v[0]._mp_size)
	    * sizeof(v[0]._mp_d[0]);
}

size_t domain_size(Polyhedron *D)
{
    int i, j;
    size_t s = sizeof(*D);

    for (i = 0; i < D->NbConstraints; ++i)
	for (j = 0; j < D->Dimension+2; ++j)
	    s += value_size(D->Constraint[i][j]);

/*
    for (i = 0; i < D->NbRays; ++i)
	for (j = 0; j < D->Dimension+2; ++j)
	    s += value_size(D->Ray[i][j]);
*/

    return D->next ? s+domain_size(D->next) : s;
}

size_t enode_size(enode *p) {
    size_t s = sizeof(*p) - sizeof(p->arr[0]);
    int i;

    if (p->type == partition)
	for (i = 0; i < p->size/2; ++i) {
	    s += domain_size(EVALUE_DOMAIN(p->arr[2*i]));
	    s += evalue_size(&p->arr[2*i+1]);
	}
    else
	for (i = 0; i < p->size; ++i) {
	    s += evalue_size(&p->arr[i]);
	}
    return s;
}

size_t evalue_size(evalue *e)
{
    size_t s = sizeof(*e);
    s += value_size(e->d);
    if (value_notzero_p(e->d))
	s += value_size(e->x.n);
    else
	s += enode_size(e->x.p);
    return s;
}

static evalue *find_second(evalue *base, evalue *cst, evalue *e, Value m)
{
    evalue *found = NULL;
    evalue offset;
    evalue copy;
    int i;

    if (value_pos_p(e->d) || e->x.p->type != fractional)
	return NULL;

    value_init(offset.d);
    value_init(offset.x.n);
    poly_denom(&e->x.p->arr[0], &offset.d);
    value_lcm(offset.d, m, offset.d);
    value_set_si(offset.x.n, 1);

    value_init(copy.d);
    evalue_copy(&copy, cst);

    eadd(&offset, cst);
    mpz_fdiv_r(cst->x.n, cst->x.n, cst->d);

    if (eequal(base, &e->x.p->arr[0]))
	found = &e->x.p->arr[0];
    else {
	value_set_si(offset.x.n, -2);

	eadd(&offset, cst);
	mpz_fdiv_r(cst->x.n, cst->x.n, cst->d);

	if (eequal(base, &e->x.p->arr[0]))
	    found = base;
    }
    free_evalue_refs(cst);
    free_evalue_refs(&offset);
    *cst = copy;

    for (i = 1; !found && i < e->x.p->size; ++i)
	found = find_second(base, cst, &e->x.p->arr[i], m);

    return found;
}

static evalue *find_relation_pair(evalue *e)
{
    int i;
    evalue *found = NULL;

    if (EVALUE_IS_DOMAIN(*e) || value_pos_p(e->d))
	return NULL;

    if (e->x.p->type == fractional) {
	Value m;
	evalue *cst;

	value_init(m);
	poly_denom(&e->x.p->arr[0], &m);

	for (cst = &e->x.p->arr[0]; value_zero_p(cst->d); 
				    cst = &cst->x.p->arr[0])
	    ;

	for (i = 1; !found && i < e->x.p->size; ++i)
	    found = find_second(&e->x.p->arr[0], cst, &e->x.p->arr[i], m);

	value_clear(m);
    }

    i = e->x.p->type == relation;
    for (; !found && i < e->x.p->size; ++i)
	found = find_relation_pair(&e->x.p->arr[i]);

    return found;
}

void evalue_mod2relation(evalue *e) {
    evalue *d;

    if (value_zero_p(e->d) && e->x.p->type == partition) {
	int i;

	for (i = 0; i < e->x.p->size/2; ++i) {
	    evalue_mod2relation(&e->x.p->arr[2*i+1]);
	    if (EVALUE_IS_ZERO(e->x.p->arr[2*i+1])) {
		value_clear(e->x.p->arr[2*i].d);
		free_evalue_refs(&e->x.p->arr[2*i+1]);
		e->x.p->size -= 2;
		if (2*i < e->x.p->size) {
		    e->x.p->arr[2*i] = e->x.p->arr[e->x.p->size];
		    e->x.p->arr[2*i+1] = e->x.p->arr[e->x.p->size+1];
		}
		--i;
	    }
	}
	if (e->x.p->size == 0) {
	    free(e->x.p);
	    evalue_set_si(e, 0, 1);
	}

	return;
    }

    while ((d = find_relation_pair(e)) != NULL) {
	evalue split;
	evalue *ev;

	value_init(split.d);
	value_set_si(split.d, 0);
	split.x.p = new_enode(relation, 3, 0);
	evalue_set_si(&split.x.p->arr[1], 1, 1);
	evalue_set_si(&split.x.p->arr[2], 1, 1);

	ev = &split.x.p->arr[0];
	value_set_si(ev->d, 0);
	ev->x.p = new_enode(fractional, 3, -1);
	evalue_set_si(&ev->x.p->arr[1], 0, 1);
	evalue_set_si(&ev->x.p->arr[2], 1, 1);
	evalue_copy(&ev->x.p->arr[0], d);

	emul(&split, e);

	reduce_evalue(e);

	free_evalue_refs(&split);	  
    }
}

static int evalue_comp(const void * a, const void * b)
{
    const evalue *e1 = *(const evalue **)a;
    const evalue *e2 = *(const evalue **)b;
    return ecmp(e1, e2);
}

void evalue_combine(evalue *e)
{
    evalue **evs;
    int i, k;
    enode *p;
    evalue tmp;

    if (value_notzero_p(e->d) || e->x.p->type != partition)
	return;

    NALLOC(evs, e->x.p->size/2);
    for (i = 0; i < e->x.p->size/2; ++i)
	evs[i] = &e->x.p->arr[2*i+1];
    qsort(evs, e->x.p->size/2, sizeof(evs[0]), evalue_comp);
    p = new_enode(partition, e->x.p->size, e->x.p->pos);
    for (i = 0, k = 0; i < e->x.p->size/2; ++i) {
	if (k == 0 || ecmp(&p->arr[2*k-1], evs[i]) != 0) {
	    value_clear(p->arr[2*k].d);
	    value_clear(p->arr[2*k+1].d);
	    p->arr[2*k] = *(evs[i]-1);
	    p->arr[2*k+1] = *(evs[i]);
	    ++k;
	} else {
	    Polyhedron *D = EVALUE_DOMAIN(*(evs[i]-1));
	    Polyhedron *L = D;

	    value_clear((evs[i]-1)->d);

	    while (L->next)
		L = L->next;
	    L->next = EVALUE_DOMAIN(p->arr[2*k-2]);
	    EVALUE_SET_DOMAIN(p->arr[2*k-2], D);
	    free_evalue_refs(evs[i]);
	}
    }

    for (i = 2*k ; i < p->size; ++i)
	value_clear(p->arr[i].d);

    free(evs);
    free(e->x.p);
    p->size = 2*k;
    e->x.p = p;

    for (i = 0; i < e->x.p->size/2; ++i) {
	Polyhedron *H;
	if (value_notzero_p(e->x.p->arr[2*i+1].d))
	    continue;
	H = DomainConvex(EVALUE_DOMAIN(e->x.p->arr[2*i]), 0);
	if (H == NULL)
	    continue;
	for (k = 0; k < e->x.p->size/2; ++k) {
	    Polyhedron *D, *N, **P;
	    if (i == k)
		continue;
	    P = &EVALUE_DOMAIN(e->x.p->arr[2*k]);
	    D = *P;
	    if (D == NULL)
		continue;
	    for (; D; D = N) {
		*P = D;
		N = D->next;
		if (D->NbEq <= H->NbEq) {
		    P = &D->next;
		    continue;
		}

		value_init(tmp.d);
		tmp.x.p = new_enode(partition, 2, e->x.p->pos);
		EVALUE_SET_DOMAIN(tmp.x.p->arr[0], Polyhedron_Copy(D));
		evalue_copy(&tmp.x.p->arr[1], &e->x.p->arr[2*i+1]);
		reduce_evalue(&tmp);
		if (value_notzero_p(tmp.d) ||
			ecmp(&tmp.x.p->arr[1], &e->x.p->arr[2*k+1]) != 0)
		    P = &D->next;
		else {
		    D->next = EVALUE_DOMAIN(e->x.p->arr[2*i]);
		    EVALUE_DOMAIN(e->x.p->arr[2*i]) = D;
		    *P = NULL;
		}
		free_evalue_refs(&tmp);
	    }
	}
	Polyhedron_Free(H);
    }

    for (i = 0; i < e->x.p->size/2; ++i) {
	Polyhedron *H, *E;
	Polyhedron *D = EVALUE_DOMAIN(e->x.p->arr[2*i]);
	if (!D) {
	    value_clear(e->x.p->arr[2*i].d);
	    free_evalue_refs(&e->x.p->arr[2*i+1]);
	    e->x.p->size -= 2;
	    if (2*i < e->x.p->size) {
		e->x.p->arr[2*i] = e->x.p->arr[e->x.p->size];
		e->x.p->arr[2*i+1] = e->x.p->arr[e->x.p->size+1];
	    }
	    --i;
	    continue;
	}
	if (!D->next)
	    continue;
	H = DomainConvex(D, 0);
	E = DomainDifference(H, D, 0);
	Domain_Free(D);
	D = DomainDifference(H, E, 0);
	Domain_Free(H);
	Domain_Free(E);
	EVALUE_SET_DOMAIN(p->arr[2*i], D);
    }
}

/* Use smallest representative for coefficients in affine form in
 * argument of fractional.
 * Since any change will make the argument non-standard,
 * the containing evalue will have to be reduced again afterward.
 */
static void fractional_minimal_coefficients(enode *p)
{
    evalue *pp;
    Value twice;
    value_init(twice);

    assert(p->type == fractional);
    pp = &p->arr[0];
    while (value_zero_p(pp->d)) {
	assert(pp->x.p->type == polynomial);
	assert(pp->x.p->size == 2);
	assert(value_notzero_p(pp->x.p->arr[1].d));
	mpz_mul_ui(twice, pp->x.p->arr[1].x.n, 2);
	if (value_gt(twice, pp->x.p->arr[1].d))
	    value_subtract(pp->x.p->arr[1].x.n, 
			   pp->x.p->arr[1].x.n, pp->x.p->arr[1].d);
	pp = &pp->x.p->arr[0];
    }

    value_clear(twice);
}

static Polyhedron *polynomial_projection(enode *p, Polyhedron *D, Value *d,
					 Matrix **R)
{
    Polyhedron *I, *H;
    evalue *pp;
    unsigned dim = D->Dimension;
    Matrix *T = Matrix_Alloc(2, dim+1);
    assert(T);

    assert(p->type == fractional || p->type == flooring);
    value_set_si(T->p[1][dim], 1);
    evalue_extract_affine(&p->arr[0], T->p[0], &T->p[0][dim], d);
    I = DomainImage(D, T, 0);
    H = DomainConvex(I, 0);
    Domain_Free(I);
    if (R)
	*R = T;
    else
	Matrix_Free(T);

    return H;
}

static void replace_by_affine(evalue *e, Value offset)
{
    enode *p;
    evalue inc;

    p = e->x.p;
    value_init(inc.d);
    value_init(inc.x.n);
    value_set_si(inc.d, 1);
    value_oppose(inc.x.n, offset);
    eadd(&inc, &p->arr[0]);
    reorder_terms_about(p, &p->arr[0]); /* frees arr[0] */
    value_clear(e->d);
    *e = p->arr[1];
    free(p);
    free_evalue_refs(&inc);
}

int evalue_range_reduction_in_domain(evalue *e, Polyhedron *D)
{
    int i;
    enode *p;
    Value d, min, max;
    int r = 0;
    Polyhedron *I;
    int bounded;

    if (value_notzero_p(e->d))
	return r;

    p = e->x.p;

    if (p->type == relation) {
	Matrix *T;
	int equal;
	value_init(d);
	value_init(min);
	value_init(max);

	fractional_minimal_coefficients(p->arr[0].x.p);
	I = polynomial_projection(p->arr[0].x.p, D, &d, &T);
	bounded = line_minmax(I, &min, &max); /* frees I */
	equal = value_eq(min, max);
	mpz_cdiv_q(min, min, d);
	mpz_fdiv_q(max, max, d);

	if (bounded && value_gt(min, max)) {
	    /* Never zero */
	    if (p->size == 3) {
		value_clear(e->d);
		*e = p->arr[2];
	    } else {
		evalue_set_si(e, 0, 1);
		r = 1;
	    }
	    free_evalue_refs(&(p->arr[1]));
	    free_evalue_refs(&(p->arr[0]));
	    free(p);
	    value_clear(d);
	    value_clear(min);
	    value_clear(max);
	    Matrix_Free(T);
	    return r ? r : evalue_range_reduction_in_domain(e, D);
	} else if (bounded && equal) {
	    /* Always zero */
	    if (p->size == 3)
		free_evalue_refs(&(p->arr[2]));
	    value_clear(e->d);
	    *e = p->arr[1];
	    free_evalue_refs(&(p->arr[0]));
	    free(p);
	    value_clear(d);
	    value_clear(min);
	    value_clear(max);
	    Matrix_Free(T);
	    return evalue_range_reduction_in_domain(e, D);
	} else if (bounded && value_eq(min, max)) {
	    /* zero for a single value */
	    Polyhedron *E;
	    Matrix *M = Matrix_Alloc(1, D->Dimension+2);
	    Vector_Copy(T->p[0], M->p[0]+1, D->Dimension+1);
	    value_multiply(min, min, d);
	    value_subtract(M->p[0][D->Dimension+1],
			    M->p[0][D->Dimension+1], min);
	    E = DomainAddConstraints(D, M, 0);
	    value_clear(d);
	    value_clear(min);
	    value_clear(max);
	    Matrix_Free(T);
	    Matrix_Free(M);
	    r = evalue_range_reduction_in_domain(&p->arr[1], E);
	    if (p->size == 3)
		r |= evalue_range_reduction_in_domain(&p->arr[2], D);
	    Domain_Free(E);
	    _reduce_evalue(&p->arr[0].x.p->arr[0], 0, 1);
	    return r;
	}

	value_clear(d);
	value_clear(min);
	value_clear(max);
	Matrix_Free(T);
	_reduce_evalue(&p->arr[0].x.p->arr[0], 0, 1);
    }

    i = p->type == relation ? 1 : 
	p->type == fractional ? 1 : 0;
    for (; i<p->size; i++)
	r |= evalue_range_reduction_in_domain(&p->arr[i], D);

    if (p->type != fractional) {
	if (r && p->type == polynomial) {
	    evalue f;
	    value_init(f.d);
	    value_set_si(f.d, 0);
	    f.x.p = new_enode(polynomial, 2, p->pos);
	    evalue_set_si(&f.x.p->arr[0], 0, 1);
	    evalue_set_si(&f.x.p->arr[1], 1, 1);
	    reorder_terms_about(p, &f);
	    value_clear(e->d);
	    *e = p->arr[0];
	    free(p);
	}
	return r;
    }

    value_init(d);
    value_init(min);
    value_init(max);
    fractional_minimal_coefficients(p);
    I = polynomial_projection(p, D, &d, NULL);
    bounded = line_minmax(I, &min, &max); /* frees I */
    mpz_fdiv_q(min, min, d);
    mpz_fdiv_q(max, max, d);
    value_subtract(d, max, min);

    if (bounded && value_eq(min, max)) {
	replace_by_affine(e, min);
	r = 1;
    } else if (bounded && value_one_p(d) && p->size > 3) {
	/* replace {g}^2 by -(g-min)^2 + (2{g}+1)*(g-min) - {g}
	 * See pages 199-200 of PhD thesis.
	 */
	evalue rem;
	evalue inc;
	evalue t;
	evalue f;
	evalue factor;
	value_init(rem.d);
	value_set_si(rem.d, 0);
	rem.x.p = new_enode(fractional, 3, -1);
	evalue_copy(&rem.x.p->arr[0], &p->arr[0]);
	value_clear(rem.x.p->arr[1].d);
	value_clear(rem.x.p->arr[2].d);
	rem.x.p->arr[1] = p->arr[1];
	rem.x.p->arr[2] = p->arr[2];
	for (i = 3; i < p->size; ++i)
	    p->arr[i-2] = p->arr[i];
	p->size -= 2;

	value_init(inc.d);
	value_init(inc.x.n);
	value_set_si(inc.d, 1);
	value_oppose(inc.x.n, min);

	value_init(t.d);
	evalue_copy(&t, &p->arr[0]);
	eadd(&inc, &t);

	value_init(f.d);
	value_set_si(f.d, 0);
	f.x.p = new_enode(fractional, 3, -1);
	evalue_copy(&f.x.p->arr[0], &p->arr[0]);
	evalue_set_si(&f.x.p->arr[1], 1, 1);
	evalue_set_si(&f.x.p->arr[2], 2, 1);

	value_init(factor.d);
	evalue_set_si(&factor, -1, 1);
	emul(&t, &factor);

	eadd(&f, &factor);
	emul(&t, &factor);

	value_clear(f.x.p->arr[1].x.n);
	value_clear(f.x.p->arr[2].x.n);
	evalue_set_si(&f.x.p->arr[1], 0, 1);
	evalue_set_si(&f.x.p->arr[2], -1, 1);
	eadd(&f, &factor);

	if (r) {
	    evalue_reorder_terms(&rem);
	    evalue_reorder_terms(e);
	}

	emul(&factor, e);
	eadd(&rem, e);

	free_evalue_refs(&inc);
	free_evalue_refs(&t);
	free_evalue_refs(&f);
	free_evalue_refs(&factor);
	free_evalue_refs(&rem);

	evalue_range_reduction_in_domain(e, D);

	r = 1;
    } else {
	_reduce_evalue(&p->arr[0], 0, 1);
	if (r)
	    evalue_reorder_terms(e);
    }

    value_clear(d);
    value_clear(min);
    value_clear(max);

    return r;
}

void evalue_range_reduction(evalue *e)
{
    int i;
    if (value_notzero_p(e->d) || e->x.p->type != partition)
	return;

    for (i = 0; i < e->x.p->size/2; ++i)
	if (evalue_range_reduction_in_domain(&e->x.p->arr[2*i+1],
			     EVALUE_DOMAIN(e->x.p->arr[2*i]))) {
	    reduce_evalue(&e->x.p->arr[2*i+1]);

	    if (EVALUE_IS_ZERO(e->x.p->arr[2*i+1])) {
		free_evalue_refs(&e->x.p->arr[2*i+1]);
		Domain_Free(EVALUE_DOMAIN(e->x.p->arr[2*i]));
		value_clear(e->x.p->arr[2*i].d);
		e->x.p->size -= 2;
		e->x.p->arr[2*i] = e->x.p->arr[e->x.p->size];
		e->x.p->arr[2*i+1] = e->x.p->arr[e->x.p->size+1];
		--i;
	    }
	}
}

/* Frees EP 
 */
Enumeration* partition2enumeration(evalue *EP)
{
    int i;
    Enumeration *en, *res = NULL;

    if (EVALUE_IS_ZERO(*EP)) {
	evalue_free(EP);
	return res;
    }

    assert(value_zero_p(EP->d));
    assert(EP->x.p->type == partition);
    assert(EP->x.p->size >= 2);

    for (i = 0; i < EP->x.p->size/2; ++i) {
	assert(EP->x.p->pos == EVALUE_DOMAIN(EP->x.p->arr[2*i])->Dimension);
	en = (Enumeration *)malloc(sizeof(Enumeration));
	en->next = res;
	res = en;
	res->ValidityDomain = EVALUE_DOMAIN(EP->x.p->arr[2*i]);
	value_clear(EP->x.p->arr[2*i].d);
	res->EP = EP->x.p->arr[2*i+1];
    }
    free(EP->x.p);
    value_clear(EP->d);
    free(EP);
    return res;
}

int evalue_frac2floor_in_domain3(evalue *e, Polyhedron *D, int shift)
{
    enode *p;
    int r = 0;
    int i;
    Polyhedron *I;
    Value d, min;
    evalue fl;

    if (value_notzero_p(e->d))
	return r;

    p = e->x.p;

    i = p->type == relation ? 1 : 
	p->type == fractional ? 1 : 0;
    for (; i<p->size; i++)
	r |= evalue_frac2floor_in_domain3(&p->arr[i], D, shift);

    if (p->type != fractional) {
	if (r && p->type == polynomial) {
	    evalue f;
	    value_init(f.d);
	    value_set_si(f.d, 0);
	    f.x.p = new_enode(polynomial, 2, p->pos);
	    evalue_set_si(&f.x.p->arr[0], 0, 1);
	    evalue_set_si(&f.x.p->arr[1], 1, 1);
	    reorder_terms_about(p, &f);
	    value_clear(e->d);
	    *e = p->arr[0];
	    free(p);
	}
	return r;
    }

    if (shift) {
	value_init(d);
	I = polynomial_projection(p, D, &d, NULL);

	/*
	Polyhedron_Print(stderr, P_VALUE_FMT, I);
	*/

	assert(I->NbEq == 0); /* Should have been reduced */

	/* Find minimum */
	for (i = 0; i < I->NbConstraints; ++i)
	    if (value_pos_p(I->Constraint[i][1]))
		break;

	if (i < I->NbConstraints) {
	    value_init(min);
	    value_oppose(I->Constraint[i][2], I->Constraint[i][2]);
	    mpz_cdiv_q(min, I->Constraint[i][2], I->Constraint[i][1]);
	    if (value_neg_p(min)) {
		evalue offset;
		mpz_fdiv_q(min, min, d);
		value_init(offset.d);
		value_set_si(offset.d, 1);
		value_init(offset.x.n);
		value_oppose(offset.x.n, min);
		eadd(&offset, &p->arr[0]);
		free_evalue_refs(&offset);
	    }
	    value_clear(min);
	}

	Polyhedron_Free(I);
	value_clear(d);
    }

    value_init(fl.d);
    value_set_si(fl.d, 0);
    fl.x.p = new_enode(flooring, 3, -1);
    evalue_set_si(&fl.x.p->arr[1], 0, 1);
    evalue_set_si(&fl.x.p->arr[2], -1, 1);
    evalue_copy(&fl.x.p->arr[0], &p->arr[0]);

    eadd(&fl, &p->arr[0]);
    reorder_terms_about(p, &p->arr[0]);
    value_clear(e->d);
    *e = p->arr[1];
    free(p);
    free_evalue_refs(&fl);

    return 1;
}

int evalue_frac2floor_in_domain(evalue *e, Polyhedron *D)
{
    return evalue_frac2floor_in_domain3(e, D, 1);
}

void evalue_frac2floor2(evalue *e, int shift)
{
    int i;
    if (value_notzero_p(e->d) || e->x.p->type != partition) {
	if (!shift) {
	    if (evalue_frac2floor_in_domain3(e, NULL, 0))
		reduce_evalue(e);
	}
	return;
    }

    for (i = 0; i < e->x.p->size/2; ++i)
	if (evalue_frac2floor_in_domain3(&e->x.p->arr[2*i+1],
					EVALUE_DOMAIN(e->x.p->arr[2*i]), shift))
	    reduce_evalue(&e->x.p->arr[2*i+1]);
}

void evalue_frac2floor(evalue *e)
{
    evalue_frac2floor2(e, 1);
}

/* Add a new variable with lower bound 1 and upper bound specified
 * by row.  If negative is true, then the new variable has upper
 * bound -1 and lower bound specified by row.
 */
static Matrix *esum_add_constraint(int nvar, Polyhedron *D, Matrix *C,
				   Vector *row, int negative)
{
    int nr, nc;
    int i;
    int nparam = D->Dimension - nvar;

    if (C == 0) {
	nr = D->NbConstraints + 2;
	nc = D->Dimension + 2 + 1;
	C = Matrix_Alloc(nr, nc);
	for (i = 0; i < D->NbConstraints; ++i) {
	    Vector_Copy(D->Constraint[i], C->p[i], 1 + nvar);
	    Vector_Copy(D->Constraint[i] + 1 + nvar, C->p[i] + 1 + nvar + 1,
			D->Dimension + 1 - nvar);
	}
    } else {
	Matrix *oldC = C;
	nr = C->NbRows + 2;
	nc = C->NbColumns + 1;
	C = Matrix_Alloc(nr, nc);
	for (i = 0; i < oldC->NbRows; ++i) {
	    Vector_Copy(oldC->p[i], C->p[i], 1 + nvar);
	    Vector_Copy(oldC->p[i] + 1 + nvar, C->p[i] + 1 + nvar + 1,
			oldC->NbColumns - 1 - nvar);
	}
    }
    value_set_si(C->p[nr-2][0], 1);
    if (negative)
	value_set_si(C->p[nr-2][1 + nvar], -1);
    else
	value_set_si(C->p[nr-2][1 + nvar], 1);
    value_set_si(C->p[nr-2][nc - 1], -1);

    Vector_Copy(row->p, C->p[nr-1], 1 + nvar + 1);
    Vector_Copy(row->p + 1 + nvar + 1, C->p[nr-1] + C->NbColumns - 1 - nparam,
		1 + nparam);

    return C;
}

static void floor2frac_r(evalue *e, int nvar)
{
    enode *p;
    int i;
    evalue f;
    evalue *pp;

    if (value_notzero_p(e->d))
	return;

    p = e->x.p;

    for (i = type_offset(p); i < p->size; i++)
	floor2frac_r(&p->arr[i], nvar);

    if (p->type != flooring)
	return;

    for (pp = &p->arr[0]; value_zero_p(pp->d); pp = &pp->x.p->arr[0]) {
	assert(pp->x.p->type == polynomial);
	pp->x.p->pos -= nvar;
    }

    value_init(f.d);
    value_set_si(f.d, 0);
    f.x.p = new_enode(fractional, 3, -1);
    evalue_set_si(&f.x.p->arr[1], 0, 1);
    evalue_set_si(&f.x.p->arr[2], -1, 1);
    evalue_copy(&f.x.p->arr[0], &p->arr[0]);

    eadd(&f, &p->arr[0]);
    reorder_terms_about(p, &p->arr[0]);
    value_clear(e->d);
    *e = p->arr[1];
    free(p);
    free_evalue_refs(&f);
}

/* Convert flooring back to fractional and shift position
 * of the parameters by nvar
 */
static void floor2frac(evalue *e, int nvar)
{
    floor2frac_r(e, nvar);
    reduce_evalue(e);
}

int evalue_floor2frac(evalue *e)
{
    int i;
    int r = 0;

    if (value_notzero_p(e->d))
	return 0;

    if (e->x.p->type == partition) {
	for (i = 0; i < e->x.p->size/2; ++i)
	    if (evalue_floor2frac(&e->x.p->arr[2*i+1]))
		reduce_evalue(&e->x.p->arr[2*i+1]);
	return 0;
    }

    for (i = type_offset(e->x.p); i < e->x.p->size; ++i)
	r |= evalue_floor2frac(&e->x.p->arr[i]);

    if (e->x.p->type == flooring) {
	floor2frac(e, 0);
	return 1;
    }

    if (r)
	evalue_reorder_terms(e);

    return r;
}

evalue *esum_over_domain_cst(int nvar, Polyhedron *D, Matrix *C)
{
    evalue *t;
    int nparam = D->Dimension - nvar;

    if (C != 0) {
	C = Matrix_Copy(C);
	D = Constraints2Polyhedron(C, 0);
	Matrix_Free(C);
    }

    t = barvinok_enumerate_e(D, 0, nparam, 0);

    /* Double check that D was not unbounded. */
    assert(!(value_pos_p(t->d) && value_neg_p(t->x.n)));

    if (C != 0)
	Polyhedron_Free(D);

    return t;
}

static void domain_signs(Polyhedron *D, int *signs)
{
    int j, k;

    POL_ENSURE_VERTICES(D);
    for (j = 0; j < D->Dimension; ++j) {
	signs[j] = 0;
	for (k = 0; k < D->NbRays; ++k) {
	    signs[j] = value_sign(D->Ray[k][1+j]);
	    if (signs[j])
		break;
	}
    }
}

static evalue *esum_over_domain(evalue *e, int nvar, Polyhedron *D, 
			  int *signs, Matrix *C, unsigned MaxRays)
{
    Vector *row = NULL;
    int i, offset;
    evalue *res;
    Matrix *origC;
    evalue *factor = NULL;
    evalue cum;
    int negative = 0;
    int allocated = 0;

    if (EVALUE_IS_ZERO(*e))
	return 0;

    if (D->next) {
	Polyhedron *DD = Disjoint_Domain(D, 0, MaxRays);
	Polyhedron *Q;

	Q = DD;
	DD = Q->next;
	Q->next = 0;

	res = esum_over_domain(e, nvar, Q, signs, C, MaxRays);
	Polyhedron_Free(Q);

	for (Q = DD; Q; Q = DD) {
	    evalue *t;

	    DD = Q->next;
	    Q->next = 0;

	    t = esum_over_domain(e, nvar, Q, signs, C, MaxRays);
	    Polyhedron_Free(Q);

	    if (!res)
		res = t;
	    else if (t) {
		eadd(t, res);
		evalue_free(t);
	    }
	}
	return res;
    }

    if (value_notzero_p(e->d)) {
	evalue *t;

	t = esum_over_domain_cst(nvar, D, C);

	if (!EVALUE_IS_ONE(*e))
	    emul(e, t);

	return t;
    }

    if (!signs) {
	allocated = 1;
	signs = ALLOCN(int, D->Dimension);
	domain_signs(D, signs);
    }

    switch (e->x.p->type) {
    case flooring: {
	evalue *pp = &e->x.p->arr[0];

	if (pp->x.p->pos > nvar) {
	    /* remainder is independent of the summated vars */
	    evalue f;
	    evalue *t;

	    value_init(f.d);
	    evalue_copy(&f, e);
	    floor2frac(&f, nvar);

	    t = esum_over_domain_cst(nvar, D, C);

	    emul(&f, t);

	    free_evalue_refs(&f);

	    if (allocated)
		free(signs);

	    return t;
	}

	row = Vector_Alloc(1 + D->Dimension + 1 + 1);
	poly_denom(pp, &row->p[1 + nvar]);
	value_set_si(row->p[0], 1);
	for (pp = &e->x.p->arr[0]; value_zero_p(pp->d); 
				   pp = &pp->x.p->arr[0]) {
	    int pos;
	    assert(pp->x.p->type == polynomial);
	    pos = pp->x.p->pos;
	    if (pos >= 1 + nvar)
		++pos;
	    value_assign(row->p[pos], row->p[1+nvar]);
	    value_division(row->p[pos], row->p[pos], pp->x.p->arr[1].d);
	    value_multiply(row->p[pos], row->p[pos], pp->x.p->arr[1].x.n);
	}
	value_assign(row->p[1 + D->Dimension + 1], row->p[1+nvar]);
	value_division(row->p[1 + D->Dimension + 1],
		       row->p[1 + D->Dimension + 1],
		       pp->d);
	value_multiply(row->p[1 + D->Dimension + 1],
		       row->p[1 + D->Dimension + 1],
		       pp->x.n);
	value_oppose(row->p[1 + nvar], row->p[1 + nvar]);
	break;
    }
    case polynomial: {
	int pos = e->x.p->pos;

	if (pos > nvar) {
	    factor = ALLOC(evalue);
	    value_init(factor->d);
	    value_set_si(factor->d, 0);
	    factor->x.p = new_enode(polynomial, 2, pos - nvar);
	    evalue_set_si(&factor->x.p->arr[0], 0, 1);
	    evalue_set_si(&factor->x.p->arr[1], 1, 1);
	    break;
	}

	row = Vector_Alloc(1 + D->Dimension + 1 + 1);
	negative = signs[pos-1] < 0;
	value_set_si(row->p[0], 1);
	if (negative) {
	    value_set_si(row->p[pos], -1);
	    value_set_si(row->p[1 + nvar], 1);
	} else {
	    value_set_si(row->p[pos], 1);
	    value_set_si(row->p[1 + nvar], -1);
	}
	break;
    }
    default:
	assert(0);
    }

    offset = type_offset(e->x.p);

    res = esum_over_domain(&e->x.p->arr[offset], nvar, D, signs, C, MaxRays);

    if (factor) {
	value_init(cum.d);
	evalue_copy(&cum, factor);
    }

    origC = C;
    for (i = 1; offset+i < e->x.p->size; ++i) {
	evalue *t;
	if (row) {
	    Matrix *prevC = C;
	    C = esum_add_constraint(nvar, D, C, row, negative);
	    if (prevC != origC)
		Matrix_Free(prevC);
	}
	/*
	if (row)
	    Vector_Print(stderr, P_VALUE_FMT, row);
	if (C)
	    Matrix_Print(stderr, P_VALUE_FMT, C);
	*/
	t = esum_over_domain(&e->x.p->arr[offset+i], nvar, D, signs, C, MaxRays);

	if (t) {
	    if (factor)
		emul(&cum, t);
	    if (negative && (i % 2))
		evalue_negate(t);
	}

	if (!res)
	    res = t;
	else if (t) {
	    eadd(t, res);
	    evalue_free(t);
	}
	if (factor && offset+i+1 < e->x.p->size)
	    emul(factor, &cum);
    }
    if (C != origC)
	Matrix_Free(C);

    if (factor) {
	free_evalue_refs(&cum);
	evalue_free(factor);
    }

    if (row)
	Vector_Free(row);

    reduce_evalue(res);

    if (allocated)
	free(signs);

    return res;
}

static void Polyhedron_Insert(Polyhedron ***next, Polyhedron *Q)
{
    if (emptyQ(Q))
	Polyhedron_Free(Q);
    else {
	**next = Q;
	*next = &(Q->next);
    }
}

static Polyhedron *Polyhedron_Split_Into_Orthants(Polyhedron *P,
							unsigned MaxRays)
{
    int i = 0;
    Polyhedron *D = P;
    Vector *c = Vector_Alloc(1 + P->Dimension + 1);
    value_set_si(c->p[0], 1);

    if (P->Dimension == 0)
	return Polyhedron_Copy(P);

    for (i = 0; i < P->Dimension; ++i) {
	Polyhedron *L = NULL;
	Polyhedron **next = &L;
	Polyhedron *I;

	for (I = D; I; I = I->next) {
	    Polyhedron *Q;
	    value_set_si(c->p[1+i], 1);
	    value_set_si(c->p[1+P->Dimension], 0);
	    Q = AddConstraints(c->p, 1, I, MaxRays);
	    Polyhedron_Insert(&next, Q);
	    value_set_si(c->p[1+i], -1);
	    value_set_si(c->p[1+P->Dimension], -1);
	    Q = AddConstraints(c->p, 1, I, MaxRays);
	    Polyhedron_Insert(&next, Q);
	    value_set_si(c->p[1+i], 0);
	}
	if (D != P)
	    Domain_Free(D);
	D = L;
    }
    Vector_Free(c);
    return D;
}

/* Make arguments of all floors non-negative */
static void shift_floor_in_domain(evalue *e, Polyhedron *D)
{
    Value d, m;
    Polyhedron *I;
    int i;
    enode *p;

    if (value_notzero_p(e->d))
	return;

    p = e->x.p;

    for (i = type_offset(p); i < p->size; ++i)
	shift_floor_in_domain(&p->arr[i], D);

    if (p->type != flooring)
	return;

    value_init(d);
    value_init(m);

    I = polynomial_projection(p, D, &d, NULL);
    assert(I->NbEq == 0); /* Should have been reduced */

    for (i = 0; i < I->NbConstraints; ++i)
	if (value_pos_p(I->Constraint[i][1]))
	    break;
    assert(i < I->NbConstraints);
    if (i < I->NbConstraints) {
	value_oppose(I->Constraint[i][2], I->Constraint[i][2]);
	mpz_fdiv_q(m, I->Constraint[i][2], I->Constraint[i][1]);
	if (value_neg_p(m)) {
	    /* replace [e] by [e-m]+m such that e-m >= 0 */
	    evalue f;

	    value_init(f.d);
	    value_init(f.x.n);
	    value_set_si(f.d, 1);
	    value_oppose(f.x.n, m);
	    eadd(&f, &p->arr[0]);
	    value_clear(f.x.n);

	    value_set_si(f.d, 0);
	    f.x.p = new_enode(flooring, 3, -1);
	    value_clear(f.x.p->arr[0].d);
	    f.x.p->arr[0] = p->arr[0];
	    evalue_set_si(&f.x.p->arr[2], 1, 1);
	    value_set_si(f.x.p->arr[1].d, 1);
	    value_init(f.x.p->arr[1].x.n);
	    value_assign(f.x.p->arr[1].x.n, m);
	    reorder_terms_about(p, &f);
	    value_clear(e->d);
	    *e = p->arr[1];
	    free(p);
	}
    }
    Polyhedron_Free(I);
    value_clear(d);
    value_clear(m);
}

evalue *box_summate(Polyhedron *P, evalue *E, unsigned nvar, unsigned MaxRays)
{
    evalue *sum = evalue_zero();
    Polyhedron *D = Polyhedron_Split_Into_Orthants(P, MaxRays);
    for (P = D; P; P = P->next) {
	evalue *t;
	evalue *fe = evalue_dup(E);
	Polyhedron *next = P->next;
	P->next = NULL;
	reduce_evalue_in_domain(fe, P);
	evalue_frac2floor2(fe, 0);
	shift_floor_in_domain(fe, P);
	t = esum_over_domain(fe, nvar, P, NULL, NULL, MaxRays);
	if (t) {
	    eadd(t, sum);
	    evalue_free(t);
	}
	evalue_free(fe);
	P->next = next;
    }
    Domain_Free(D);
    return sum;
}

/* Initial silly implementation */
void eor(evalue *e1, evalue *res)
{
    evalue E;
    evalue mone;
    value_init(E.d);
    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);

    evalue_copy(&E, res);
    eadd(e1, &E);
    emul(e1, res);
    emul(&mone, res);
    eadd(&E, res);

    free_evalue_refs(&E); 
    free_evalue_refs(&mone);
}

/* computes denominator of polynomial evalue 
 * d should point to a value initialized to 1
 */
void evalue_denom(const evalue *e, Value *d)
{
    int i, offset;

    if (value_notzero_p(e->d)) {
	value_lcm(*d, *d, e->d);
	return;
    }
    assert(e->x.p->type == polynomial ||
	   e->x.p->type == fractional ||
	   e->x.p->type == flooring);
    offset = type_offset(e->x.p);
    for (i = e->x.p->size-1; i >= offset; --i)
	evalue_denom(&e->x.p->arr[i], d);
}

/* Divides the evalue e by the integer n */
void evalue_div(evalue *e, Value n)
{
    int i, offset;

    if (value_one_p(n) || EVALUE_IS_ZERO(*e))
	return;

    if (value_notzero_p(e->d)) {
	Value gc;
	value_init(gc);
	value_multiply(e->d, e->d, n);
	value_gcd(gc, e->x.n, e->d);
	if (value_notone_p(gc)) {
	    value_division(e->d, e->d, gc);
	    value_division(e->x.n, e->x.n, gc);
	}
	value_clear(gc);
	return;
    }
    if (e->x.p->type == partition) {
	for (i = 0; i < e->x.p->size/2; ++i)
	    evalue_div(&e->x.p->arr[2*i+1], n);
	return;
    }
    offset = type_offset(e->x.p);
    for (i = e->x.p->size-1; i >= offset; --i)
	evalue_div(&e->x.p->arr[i], n);
}

/* Multiplies the evalue e by the integer n */
void evalue_mul(evalue *e, Value n)
{
    int i, offset;

    if (value_one_p(n) || EVALUE_IS_ZERO(*e))
	return;

    if (value_notzero_p(e->d)) {
	Value gc;
	value_init(gc);
	value_multiply(e->x.n, e->x.n, n);
	value_gcd(gc, e->x.n, e->d);
	if (value_notone_p(gc)) {
	    value_division(e->d, e->d, gc);
	    value_division(e->x.n, e->x.n, gc);
	}
	value_clear(gc);
	return;
    }
    if (e->x.p->type == partition) {
	for (i = 0; i < e->x.p->size/2; ++i)
	    evalue_mul(&e->x.p->arr[2*i+1], n);
	return;
    }
    offset = type_offset(e->x.p);
    for (i = e->x.p->size-1; i >= offset; --i)
	evalue_mul(&e->x.p->arr[i], n);
}

/* Multiplies the evalue e by the n/d */
void evalue_mul_div(evalue *e, Value n, Value d)
{
    int i, offset;

    if ((value_one_p(n) && value_one_p(d)) || EVALUE_IS_ZERO(*e))
	return;

    if (value_notzero_p(e->d)) {
	Value gc;
	value_init(gc);
	value_multiply(e->x.n, e->x.n, n);
	value_multiply(e->d, e->d, d);
	value_gcd(gc, e->x.n, e->d);
	if (value_notone_p(gc)) {
	    value_division(e->d, e->d, gc);
	    value_division(e->x.n, e->x.n, gc);
	}
	value_clear(gc);
	return;
    }
    if (e->x.p->type == partition) {
	for (i = 0; i < e->x.p->size/2; ++i)
	    evalue_mul_div(&e->x.p->arr[2*i+1], n, d);
	return;
    }
    offset = type_offset(e->x.p);
    for (i = e->x.p->size-1; i >= offset; --i)
	evalue_mul_div(&e->x.p->arr[i], n, d);
}

void evalue_negate(evalue *e)
{
    int i, offset;

    if (value_notzero_p(e->d)) {
	value_oppose(e->x.n, e->x.n);
	return;
    }
    if (e->x.p->type == partition) {
	for (i = 0; i < e->x.p->size/2; ++i)
	    evalue_negate(&e->x.p->arr[2*i+1]);
	return;
    }
    offset = type_offset(e->x.p);
    for (i = e->x.p->size-1; i >= offset; --i)
	evalue_negate(&e->x.p->arr[i]);
}

void evalue_add_constant(evalue *e, const Value cst)
{
    int i;

    if (value_zero_p(e->d)) {
	if (e->x.p->type == partition) {
	    for (i = 0; i < e->x.p->size/2; ++i)
		evalue_add_constant(&e->x.p->arr[2*i+1], cst);
	    return;
	}
	if (e->x.p->type == relation) {
	    for (i = 1; i < e->x.p->size; ++i)
		evalue_add_constant(&e->x.p->arr[i], cst);
	    return;
	}
	do {
	    e = &e->x.p->arr[type_offset(e->x.p)];
	} while (value_zero_p(e->d));
    }
    value_addmul(e->x.n, cst, e->d);
}

static void evalue_frac2polynomial_r(evalue *e, int *signs, int sign, int in_frac)
{
    int i, offset;
    Value d;
    enode *p;
    int sign_odd = sign;

    if (value_notzero_p(e->d)) {
	if (in_frac && sign * value_sign(e->x.n) < 0) {
	    value_set_si(e->x.n, 0);
	    value_set_si(e->d, 1);
	}
	return;
    }

    if (e->x.p->type == relation) {
	for (i = e->x.p->size-1; i >= 1; --i)
	    evalue_frac2polynomial_r(&e->x.p->arr[i], signs, sign, in_frac);
	return;
    }

    if (e->x.p->type == polynomial)
	sign_odd *= signs[e->x.p->pos-1];
    offset = type_offset(e->x.p);
    evalue_frac2polynomial_r(&e->x.p->arr[offset], signs, sign, in_frac);
    in_frac |= e->x.p->type == fractional;
    for (i = e->x.p->size-1; i > offset; --i)
	evalue_frac2polynomial_r(&e->x.p->arr[i], signs,
				 (i - offset) % 2 ? sign_odd : sign, in_frac);

    if (e->x.p->type != fractional)
	return;

    /* replace { a/m } by (m-1)/m if sign != 0
     * and by (m-1)/(2m) if sign == 0
     */
    value_init(d);
    value_set_si(d, 1);
    evalue_denom(&e->x.p->arr[0], &d);
    free_evalue_refs(&e->x.p->arr[0]);
    value_init(e->x.p->arr[0].d);
    value_init(e->x.p->arr[0].x.n);
    if (sign == 0)
	value_addto(e->x.p->arr[0].d, d, d);
    else
	value_assign(e->x.p->arr[0].d, d);
    value_decrement(e->x.p->arr[0].x.n, d);
    value_clear(d);

    p = e->x.p;
    reorder_terms_about(p, &p->arr[0]);
    value_clear(e->d);
    *e = p->arr[1];
    free(p);
}

/* Approximate the evalue in fractional representation by a polynomial.
 * If sign > 0, the result is an upper bound;
 * if sign < 0, the result is a lower bound;
 * if sign = 0, the result is an intermediate approximation.
 */
void evalue_frac2polynomial(evalue *e, int sign, unsigned MaxRays)
{
    int i, dim;
    int *signs;

    if (value_notzero_p(e->d))
	return;
    assert(e->x.p->type == partition);
    /* make sure all variables in the domains have a fixed sign */
    if (sign) {
	evalue_split_domains_into_orthants(e, MaxRays);
	if (EVALUE_IS_ZERO(*e))
	    return;
    }

    assert(e->x.p->size >= 2);
    dim = EVALUE_DOMAIN(e->x.p->arr[0])->Dimension;

    signs = ALLOCN(int, dim);

    if (!sign)
	for (i = 0; i < dim; ++i)
	    signs[i] = 0;
    for (i = 0; i < e->x.p->size/2; ++i) {
	if (sign)
	    domain_signs(EVALUE_DOMAIN(e->x.p->arr[2*i]), signs);
	evalue_frac2polynomial_r(&e->x.p->arr[2*i+1], signs, sign, 0);
    }

    free(signs);
}

/* Split the domains of e (which is assumed to be a partition)
 * such that each resulting domain lies entirely in one orthant.
 */
void evalue_split_domains_into_orthants(evalue *e, unsigned MaxRays)
{
    int i, dim;
    assert(value_zero_p(e->d));
    assert(e->x.p->type == partition);
    assert(e->x.p->size >= 2);
    dim = EVALUE_DOMAIN(e->x.p->arr[0])->Dimension;

    for (i = 0; i < dim; ++i) {
	evalue split;
	Matrix *C, *C2;
	C = Matrix_Alloc(1, 1 + dim + 1);
	value_set_si(C->p[0][0], 1);
	value_init(split.d);
	value_set_si(split.d, 0);
	split.x.p = new_enode(partition, 4, dim);
	value_set_si(C->p[0][1+i], 1);
	C2 = Matrix_Copy(C);
	EVALUE_SET_DOMAIN(split.x.p->arr[0], Constraints2Polyhedron(C2, MaxRays));
	Matrix_Free(C2);
	evalue_set_si(&split.x.p->arr[1], 1, 1);
	value_set_si(C->p[0][1+i], -1);
	value_set_si(C->p[0][1+dim], -1);
	EVALUE_SET_DOMAIN(split.x.p->arr[2], Constraints2Polyhedron(C, MaxRays));
	evalue_set_si(&split.x.p->arr[3], 1, 1);
	emul(&split, e);
	free_evalue_refs(&split);
	Matrix_Free(C);
    }
}

void evalue_extract_affine(const evalue *e, Value *coeff, Value *cst, Value *d)
{
    value_set_si(*d, 1);
    evalue_denom(e, d);
    for ( ; value_zero_p(e->d); e = &e->x.p->arr[0]) {
	evalue *c;
	assert(e->x.p->type == polynomial);
	assert(e->x.p->size == 2);
	c = &e->x.p->arr[1];
	value_multiply(coeff[e->x.p->pos-1], *d, c->x.n);
	value_division(coeff[e->x.p->pos-1], coeff[e->x.p->pos-1], c->d);
    }
    value_multiply(*cst, *d, e->x.n);
    value_division(*cst, *cst, e->d);
}

/* returns an evalue that corresponds to
 *
 * c/den x_param
 */
static evalue *term(int param, Value c, Value den)
{
    evalue *EP = ALLOC(evalue);
    value_init(EP->d);
    value_set_si(EP->d,0);
    EP->x.p = new_enode(polynomial, 2, param + 1);
    evalue_set_si(&EP->x.p->arr[0], 0, 1);
    evalue_set_reduce(&EP->x.p->arr[1], c, den);
    return EP;
}

evalue *affine2evalue(Value *coeff, Value denom, int nvar)
{
    int i;
    evalue *E = ALLOC(evalue);
    value_init(E->d);
    evalue_set_reduce(E, coeff[nvar], denom);
    for (i = 0; i < nvar; ++i) {
	evalue *t;
	if (value_zero_p(coeff[i]))
	    continue;
	t = term(i, coeff[i], denom);
	eadd(t, E);
	evalue_free(t);
    }
    return E;
}

void evalue_substitute(evalue *e, evalue **subs)
{
    int i, offset;
    evalue *v;
    enode *p;

    if (value_notzero_p(e->d))
	return;

    p = e->x.p;
    assert(p->type != partition);

    for (i = 0; i < p->size; ++i)
	evalue_substitute(&p->arr[i], subs);

    if (p->type == relation) {
	/* For relation a ? b : c, compute (a' ? 1) * b' + (a' ? 0 : 1) * c' */
	if (p->size == 3) {
	    v = ALLOC(evalue);
	    value_init(v->d);
	    value_set_si(v->d, 0);
	    v->x.p = new_enode(relation, 3, 0);
	    evalue_copy(&v->x.p->arr[0], &p->arr[0]);
	    evalue_set_si(&v->x.p->arr[1], 0, 1);
	    evalue_set_si(&v->x.p->arr[2], 1, 1);
	    emul(v, &p->arr[2]);
	    evalue_free(v);
	}
	v = ALLOC(evalue);
	value_init(v->d);
	value_set_si(v->d, 0);
	v->x.p = new_enode(relation, 2, 0);
	value_clear(v->x.p->arr[0].d);
	v->x.p->arr[0] = p->arr[0];
	evalue_set_si(&v->x.p->arr[1], 1, 1);
	emul(v, &p->arr[1]);
	evalue_free(v);
	if (p->size == 3) {
	    eadd(&p->arr[2], &p->arr[1]);
	    free_evalue_refs(&p->arr[2]);
	}
	value_clear(e->d);
	*e = p->arr[1];
	free(p);
	return;
    }

    if (p->type == polynomial)
	v = subs[p->pos-1];
    else {
	v = ALLOC(evalue);
	value_init(v->d);
	value_set_si(v->d, 0);
	v->x.p = new_enode(p->type, 3, -1);
	value_clear(v->x.p->arr[0].d);
	v->x.p->arr[0] = p->arr[0];
	evalue_set_si(&v->x.p->arr[1], 0, 1);
	evalue_set_si(&v->x.p->arr[2], 1, 1);
    }

    offset = type_offset(p);

    for (i = p->size-1; i >= offset+1; i--) {
	emul(v, &p->arr[i]);
	eadd(&p->arr[i], &p->arr[i-1]);
	free_evalue_refs(&(p->arr[i]));
    }

    if (p->type != polynomial)
	evalue_free(v);

    value_clear(e->d);
    *e = p->arr[offset];
    free(p);
}

/* evalue e is given in terms of "new" parameter; CP maps the new
 * parameters back to the old parameters.
 * Transforms e such that it refers back to the old parameters and
 * adds appropriate constraints to the domain.
 * In particular, if CP maps the new parameters onto an affine
 * subspace of the old parameters, then the corresponding equalities
 * are added to the domain.
 * Also, if any of the new parameters was a rational combination
 * of the old parameters $p' = (<a, p> + c)/m$, then modulo
 * constraints ${<a, p> + c)/m} = 0$ are added to ensure
 * the new evalue remains non-zero only for integer parameters
 * of the new parameters (which have been removed by the substitution). 
 */
void evalue_backsubstitute(evalue *e, Matrix *CP, unsigned MaxRays)
{
    Matrix *eq;
    Matrix *inv;
    evalue **subs;
    enode *p;
    int i, j;
    unsigned nparam = CP->NbColumns-1;
    Polyhedron *CEq;
    Value gcd;

    if (EVALUE_IS_ZERO(*e))
	return;

    assert(value_zero_p(e->d));
    p = e->x.p;
    assert(p->type == partition);

    inv = left_inverse(CP, &eq);
    subs = ALLOCN(evalue *, nparam);
    for (i = 0; i < nparam; ++i)
	subs[i] = affine2evalue(inv->p[i], inv->p[nparam][inv->NbColumns-1],
				inv->NbColumns-1);

    CEq = Constraints2Polyhedron(eq, MaxRays);
    addeliminatedparams_partition(p, inv, CEq, inv->NbColumns-1, MaxRays);
    Polyhedron_Free(CEq);

    for (i = 0; i < p->size/2; ++i)
	evalue_substitute(&p->arr[2*i+1], subs);

    for (i = 0; i < nparam; ++i)
	evalue_free(subs[i]);
    free(subs);

    value_init(gcd);
    for (i = 0; i < inv->NbRows-1; ++i) {
	Vector_Gcd(inv->p[i], inv->NbColumns, &gcd);
	value_gcd(gcd, gcd, inv->p[inv->NbRows-1][inv->NbColumns-1]);
	if (value_eq(gcd, inv->p[inv->NbRows-1][inv->NbColumns-1]))
	    continue;
	Vector_AntiScale(inv->p[i], inv->p[i], gcd, inv->NbColumns);
	value_divexact(gcd, inv->p[inv->NbRows-1][inv->NbColumns-1], gcd);

	for (j = 0; j < p->size/2; ++j) {
	    evalue *arg = affine2evalue(inv->p[i], gcd, inv->NbColumns-1);
	    evalue *ev;
	    evalue rel;

	    value_init(rel.d);
	    value_set_si(rel.d, 0);
	    rel.x.p = new_enode(relation, 2, 0);
	    value_clear(rel.x.p->arr[1].d);
	    rel.x.p->arr[1] = p->arr[2*j+1];
	    ev = &rel.x.p->arr[0];
	    value_set_si(ev->d, 0);
	    ev->x.p = new_enode(fractional, 3, -1);
	    evalue_set_si(&ev->x.p->arr[1], 0, 1);
	    evalue_set_si(&ev->x.p->arr[2], 1, 1);
	    value_clear(ev->x.p->arr[0].d);
	    ev->x.p->arr[0] = *arg;
	    free(arg);

	    p->arr[2*j+1] = rel;
	}
    }
    value_clear(gcd);

    Matrix_Free(eq);
    Matrix_Free(inv);
}

/* Computes
 *
 *	\sum_{i=0}^n c_i/d X^i
 *
 * where d is the last element in the vector c.
 */
evalue *evalue_polynomial(Vector *c, const evalue* X)
{
    unsigned dim = c->Size-2;
    evalue EC;
    evalue *EP = ALLOC(evalue);
    int i;

    value_init(EP->d);

    if (EVALUE_IS_ZERO(*X) || dim == 0) {
	evalue_set(EP, c->p[0], c->p[dim+1]);
	reduce_constant(EP);
	return EP;
    }

    evalue_set(EP, c->p[dim], c->p[dim+1]);

    value_init(EC.d);
    evalue_set(&EC, c->p[dim], c->p[dim+1]);
        
    for (i = dim-1; i >= 0; --i) {
	emul(X, EP);
	value_assign(EC.x.n, c->p[i]);
	eadd(&EC, EP);
    }
    free_evalue_refs(&EC);
    return EP;
}

/* Create an evalue from an array of pairs of domains and evalues. */
evalue *evalue_from_section_array(struct evalue_section *s, int n)
{
    int i;
    evalue *res;

    res = ALLOC(evalue);
    value_init(res->d);

    if (n == 0)
	evalue_set_si(res, 0, 1);
    else {
	value_set_si(res->d, 0);
	res->x.p = new_enode(partition, 2*n, s[0].D->Dimension);
	for (i = 0; i < n; ++i) {
	    EVALUE_SET_DOMAIN(res->x.p->arr[2*i], s[i].D);
	    value_clear(res->x.p->arr[2*i+1].d);
	    res->x.p->arr[2*i+1] = *s[i].E;
	    free(s[i].E);
	}
    }
    return res;
}

/* shift variables (>= first, 0-based) in polynomial n up (may be negative) */
void evalue_shift_variables(evalue *e, int first, int n)
{
    int i;
    if (value_notzero_p(e->d))
	return;
    assert(e->x.p->type == polynomial ||
	   e->x.p->type == flooring ||
	   e->x.p->type == fractional);
    if (e->x.p->type == polynomial && e->x.p->pos >= first+1) {
	assert(e->x.p->pos + n >= 1);
	e->x.p->pos += n;
    }
    for (i = 0; i < e->x.p->size; ++i)
	evalue_shift_variables(&e->x.p->arr[i], first, n);
}

static const evalue *outer_floor(evalue *e, const evalue *outer)
{
    int i;

    if (value_notzero_p(e->d))
	return outer;
    switch (e->x.p->type) {
    case flooring:
	if (!outer || evalue_level_cmp(outer, &e->x.p->arr[0]) > 0)
	    return &e->x.p->arr[0];
	else
	    return outer;
    case polynomial:
    case fractional:
    case relation:
	for (i = type_offset(e->x.p); i < e->x.p->size; ++i)
	    outer = outer_floor(&e->x.p->arr[i], outer);
	return outer;
    case partition:
	for (i = 0; i < e->x.p->size/2; ++i)
	    outer = outer_floor(&e->x.p->arr[2*i+1], outer);
	return outer;
    default:
	assert(0);
    }
}

/* Find and return outermost floor argument or NULL if e has no floors */
evalue *evalue_outer_floor(evalue *e)
{
    const evalue *floor = outer_floor(e, NULL);
    return floor ? evalue_dup(floor): NULL;
}

static void evalue_set_to_zero(evalue *e)
{
    if (EVALUE_IS_ZERO(*e))
	return;
    if (value_zero_p(e->d)) {
	free_evalue_refs(e);
	value_init(e->d);
	value_init(e->x.n);
    }
    value_set_si(e->d, 1);
    value_set_si(e->x.n, 0);
}

/* Replace (outer) floor with argument "floor" by variable "var" (0-based)
 * and drop terms not containing the floor.
 * Returns true if e contains the floor.
 */
int evalue_replace_floor(evalue *e, const evalue *floor, int var)
{
    int i;
    int contains = 0;
    int reorder = 0;

    if (value_notzero_p(e->d))
	return 0;
    switch (e->x.p->type) {
    case flooring:
	if (!eequal(floor, &e->x.p->arr[0]))
	    return 0;
	e->x.p->type = polynomial;
	e->x.p->pos = 1 + var;
	e->x.p->size--;
	free_evalue_refs(&e->x.p->arr[0]);
	for (i = 0; i < e->x.p->size; ++i)
	    e->x.p->arr[i] = e->x.p->arr[i+1];
	evalue_set_to_zero(&e->x.p->arr[0]);
	return 1;
    case polynomial:
    case fractional:
    case relation:
	for (i = type_offset(e->x.p); i < e->x.p->size; ++i) {
	    int c = evalue_replace_floor(&e->x.p->arr[i], floor, var);
	    contains |= c;
	    if (!c)
		evalue_set_to_zero(&e->x.p->arr[i]);
	    if (c && !reorder && evalue_level_cmp(&e->x.p->arr[i], e) < 0)
		reorder = 1;
	}
	evalue_reduce_size(e);
	if (reorder)
	    evalue_reorder_terms(e);
	return contains;
    case partition:
    default:
	assert(0);
    }
}

/* Replace (outer) floor with argument "floor" by variable zero */
void evalue_drop_floor(evalue *e, const evalue *floor)
{
    int i;
    enode *p;

    if (value_notzero_p(e->d))
	return;
    switch (e->x.p->type) {
    case flooring:
	if (!eequal(floor, &e->x.p->arr[0]))
	    return;
	p = e->x.p;
	free_evalue_refs(&p->arr[0]);
	for (i = 2; i < p->size; ++i)
	    free_evalue_refs(&p->arr[i]);
	value_clear(e->d);
	*e = p->arr[1];
	free(p);
	break;
    case polynomial:
    case fractional:
    case relation:
	for (i = type_offset(e->x.p); i < e->x.p->size; ++i)
	    evalue_drop_floor(&e->x.p->arr[i], floor);
	evalue_reduce_size(e);
	break;
    case partition:
    default:
	assert(0);
    }
}

/** 

PROCEDURES TO COMPUTE ENUMERATION. recursive procedure, recurse for
each imbriquation

@param pos index position of current loop index (1..hdim-1)
@param P loop domain
@param context context values for fixed indices 
@param exist	number of existential variables
@return the number of integer points in this
polyhedron 

*/
void count_points_e (int pos, Polyhedron *P, int exist, int nparam,
		     Value *context, Value *res)
{
    Value LB, UB, k, c;

    if (emptyQ(P)) {
	value_set_si(*res, 0);
	return;
    }

    if (!exist) {
	count_points(pos, P, context, res);
	return;
    }

    value_init(LB); value_init(UB); value_init(k);
    value_set_si(LB,0);
    value_set_si(UB,0);

    if (lower_upper_bounds(pos,P,context,&LB,&UB) !=0) {
        /* Problem if UB or LB is INFINITY */
        value_clear(LB); value_clear(UB); value_clear(k);
	if (pos > P->Dimension - nparam - exist)
	    value_set_si(*res, 1);
	else 
	    value_set_si(*res, -1);
	return;
    }
  
#ifdef EDEBUG1
    if (!P->next) {
        int i;
        for (value_assign(k,LB); value_le(k,UB); value_increment(k,k)) {
            fprintf(stderr, "(");
            for (i=1; i<pos; i++) {
                value_print(stderr,P_VALUE_FMT,context[i]);
                fprintf(stderr,",");
            }
            value_print(stderr,P_VALUE_FMT,k);
            fprintf(stderr,")\n");
        }
    }
#endif
  
    value_set_si(context[pos],0);
    if (value_lt(UB,LB)) {
        value_clear(LB); value_clear(UB); value_clear(k);
	value_set_si(*res, 0);
	return;  
    }  
    if (!P->next) {
	if (exist)
	    value_set_si(*res, 1);
	else {
	    value_subtract(k,UB,LB);
	    value_add_int(k,k,1);
	    value_assign(*res, k);
	}
        value_clear(LB); value_clear(UB); value_clear(k);
        return;
    } 

    /*-----------------------------------------------------------------*/
    /* Optimization idea                                               */
    /*   If inner loops are not a function of k (the current index)    */
    /*   i.e. if P->Constraint[i][pos]==0 for all P following this and */
    /*        for all i,                                               */
    /*   Then CNT = (UB-LB+1)*count_points(pos+1, P->next, context)    */
    /*   (skip the for loop)                                           */
    /*-----------------------------------------------------------------*/
  
    value_init(c);
    value_set_si(*res, 0);
    for (value_assign(k,LB);value_le(k,UB);value_increment(k,k)) {
        /* Insert k in context */
        value_assign(context[pos],k);
	count_points_e(pos+1, P->next, exist, nparam, context, &c);
	if(value_notmone_p(c))
	    value_addto(*res, *res, c);
	else {
	    value_set_si(*res, -1);
	    break;
        }
	if (pos > P->Dimension - nparam - exist &&
		value_pos_p(*res))
	    break;
    }
    value_clear(c);
  
#ifdef EDEBUG11
    fprintf(stderr,"%d\n",CNT);
#endif
  
    /* Reset context */
    value_set_si(context[pos],0);
    value_clear(LB); value_clear(UB); value_clear(k);
    return;
} /* count_points_e */

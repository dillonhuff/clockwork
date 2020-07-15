#include <assert.h>
#include <barvinok/util.h>
#include "evalue_util.h"

static int type_offset(enode *p)
{
   return p->type == fractional ? 1 : 
	  p->type == flooring ? 1 : 0;
}

static void evalue_print(std::ostream& o, evalue *e, char **p, int d)
{
    if (value_notzero_p(e->d)) {
	o << VALUE_TO_INT(e->x.n) * (d / VALUE_TO_INT(e->d));
	return;
    }
    assert(e->x.p->type == polynomial || e->x.p->type == flooring ||
	   e->x.p->type == fractional);
    int offset = type_offset(e->x.p);
    for (int i = e->x.p->size-1; i >= offset; --i) {
	if (EVALUE_IS_ZERO(e->x.p->arr[i]))
	    continue;
	if (i != e->x.p->size-1 && 
		(value_zero_p(e->x.p->arr[i].d) ||
		value_pos_p(e->x.p->arr[i].x.n)))
	    o << "+";
	if (i == offset || !(value_one_p(e->x.p->arr[i].x.n) && 
			     d == VALUE_TO_INT(e->x.p->arr[i].d))) {
	    if (value_zero_p(e->x.p->arr[i].d))
		o << "(";
	    evalue_print(o, &e->x.p->arr[i], p, d);
	    if (value_zero_p(e->x.p->arr[i].d))
		o << ")";
	    if (i != offset)
		o << "*";
	}
	for (int j = 0; j < i-offset; ++j) {
	    if (j != 0)
		o << "*";
	    if (e->x.p->type == flooring) {
		o << "[";
		evalue_print(o, &e->x.p->arr[0], p);
		o << "]";
	    } else if (e->x.p->type == fractional) {
		o << "{";
		evalue_print(o, &e->x.p->arr[0], p);
		o << "}";
	    } else
		o << p[e->x.p->pos-1];
	}
    }
}

void evalue_print(std::ostream& o, evalue *e, char **p)
{
    Value d;
    value_init(d);
    value_set_si(d, 1);
    evalue_denom(e, &d);
    if (value_notone_p(d))
	o << "(";
    evalue_print(o, e, p, VALUE_TO_INT(d));
    if (value_notone_p(d))
	o << ")/" << VALUE_TO_INT(d);
    value_clear(d);
}


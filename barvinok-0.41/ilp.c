#include <barvinok/options.h>
#include <barvinok/sample.h>
#include "ilp.h"

static int matrix_add(Matrix *M, int n, Value *v)
{
    if (n >= M->NbRows)
	Matrix_Extend(M, 3*(M->NbRows+10)/2);
    Vector_Copy(v, M->p[n], M->NbColumns);
    return n+1;
}

/* Computes and returns an integer point of P attaining the minimum
 * value in [min, max] with respect to the linear objective function obj.
 * If there is no such point, then a NULL pointer is returned.
 * If misses is not a NULL pointer, then any other points found along
 * the way are stored in this matrix, updating *n_misses.
 */
Vector *Polyhedron_Integer_Minimum(Polyhedron *P, Value *obj,
				    Value min, Value max,
				    Matrix *misses, int *n_misses,
				    struct barvinok_options *options)
{
    int divide = 0;
    Vector *opt = NULL;
    Value l, u, tmp;
    value_init(l);
    value_init(u);
    value_init(tmp);
    value_assign(l, min);
    value_assign(u, max);

    while (value_le(l, u)) {
	int i;
	Matrix *M = Matrix_Alloc(P->NbConstraints + 2, 2 + P->Dimension);
	Polyhedron *Q;
	Vector *sample;

	if (divide) {
	    value_subtract(tmp, u, l);
	    mpz_fdiv_q_ui(tmp, tmp, 2);
	    value_addto(tmp, tmp, l);
	} else {
	    value_assign(tmp, u);
	}

	for (i = 0; i < P->NbConstraints; ++i)
	    Vector_Copy(P->Constraint[i], M->p[i+2], P->Dimension+2);
	value_set_si(M->p[0][0], 1);
	Vector_Copy(obj, M->p[0]+1, P->Dimension);
	value_oppose(M->p[0][1+P->Dimension], l);
	value_set_si(M->p[1][0], 1);
	Vector_Oppose(obj, M->p[1]+1, P->Dimension);
	value_assign(M->p[1][1+P->Dimension], tmp);

	Q = Constraints2Polyhedron(M, options->MaxRays);
	Matrix_Free(M);

	sample = Polyhedron_Sample(Q, options);
	Polyhedron_Free(Q);

	if (sample) {
	    Inner_Product(obj, sample->p, P->Dimension, &u);
	    value_decrement(u, u);
	    divide = 1;
	    if (opt) {
		if (misses)
		    *n_misses = matrix_add(misses, *n_misses, opt->p);
		Vector_Free(opt);
	    }
	    opt = sample;
	} else {
	    if (!divide)
		break;
	    value_increment(l, tmp);
	    divide = 0;
	}
    }

    value_clear(l);
    value_clear(u);
    value_clear(tmp);

    return opt;
}

#include <assert.h>
#include <isl/ctx.h>
#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/space.h>
#include <isl/point.h>
#include <isl/set.h>
#include <isl_set_polylib.h>
#include <barvinok/polylib.h>
#include <barvinok/sample.h>

Vector *Polyhedron_Sample(Polyhedron *P, struct barvinok_options *options)
{
	int i;
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dim;
	int nvar = P->Dimension;
	isl_basic_set *bset;
	isl_point *pnt;
	Vector *sample = NULL;

	dim = isl_space_set_alloc(ctx, 0, nvar);
	bset = isl_basic_set_new_from_polylib(P, dim);
	pnt = isl_basic_set_sample_point(bset);

	if (!isl_point_is_void(pnt)) {
		isl_val *v;

		sample = Vector_Alloc(1 + nvar);
		assert(sample);
		for (i = 0; i < nvar; ++i) {
			v = isl_point_get_coordinate_val(pnt, isl_dim_set, i);
			isl_val_get_num_gmp(v, sample->p[i]);
			isl_val_free(v);
		}
		value_set_si(sample->p[nvar], 1);
	}

	isl_point_free(pnt);

	isl_ctx_free(ctx);

	return sample;
}

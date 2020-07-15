#include <barvinok/util.h>
#include "skewed_genfun.h"
#include "verify_series.h"

struct check_poly_gf_data {
    struct check_poly_data   cp;
    Polyhedron		    *S;
    const skewed_gen_fun    *gf;
    int	    	    	     exist;
};

static int cp_gf(const struct check_poly_data *data, int nparam, Value *z,
		 const struct verify_options *options)
{
    Value c, tmp, one;
    struct check_poly_gf_data* gf_data = (struct check_poly_gf_data*) data;
    const skewed_gen_fun *gf = gf_data->gf;
    int exist = gf_data->exist;
    Polyhedron *S = gf_data->S;

    value_init(c);
    value_init(tmp);
    value_init(one);
    value_set_si(one, 1);

    /* Computes the coefficient */
    gf->coefficient(z, &c, options->barvinok);

    /* Manually count the number of points */
    count_points_e(1, S, exist, nparam, data->z, &tmp);

    check_poly_print(value_eq(tmp, c), nparam, z, tmp, one, c, one,
		     "EP", "count", "EP eval", options);

    value_clear(c);
    value_clear(tmp);
    value_clear(one);
    return 1;
}

int check_poly_gf(Polyhedron *S, Polyhedron *CS, skewed_gen_fun *gf,
		    int exist, int nparam, int pos, Value *z,
		    const struct verify_options *options)
{
    struct check_poly_gf_data data;
    data.cp.z = z;
    data.cp.check = cp_gf;
    data.S = S;
    data.gf = gf;
    data.exist = exist;
    return check_poly(CS, &data.cp, nparam, pos, z+S->Dimension-nparam+1,
			options);
}

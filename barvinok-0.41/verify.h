#ifndef VERIFY_H
#define VERIFY_H

#include <isl/arg.h>
#include <isl/set.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct verify_options {
    int verify;
    int exact;
    int print_all;
    int continue_on_error;
    long m;
    long M;
    long r;

    /* "generated" options */
    int st;
    const char **params;
    struct barvinok_options *barvinok;
};

ISL_ARG_DECL(verify_options, struct verify_options, verify_options_args)

void verify_options_set_range(struct verify_options *options, int dim);

Polyhedron *check_poly_context_scan(Polyhedron *P, Polyhedron **C,
				    unsigned nparam,
				    const struct verify_options *options);
void check_poly_init(Polyhedron *C, struct verify_options *options);
void check_poly_print(int ok, int nparam, Value *z,
		      Value want_n, Value want_d,
		      Value got_n, Value got_d,
		      const char *op, const char *check,
		      const char *long_op,
		      const struct verify_options *options);

struct check_poly_data;
typedef int (*check_poly_fun)(const struct check_poly_data *data,
			      int nparam, Value *z,
		 	      const struct verify_options *options);
struct check_poly_data {
    Value	    *z;
    check_poly_fun   check;
};

int check_poly(Polyhedron *CS, const struct check_poly_data *data,
	       int nparam, int pos, Value *z,
	       const struct verify_options *options);

struct check_EP_data {
    struct check_poly_data	  cp;
    int			  	  n_S;
    Polyhedron	    		**S;

    const evalue		 *EP;
};

int check_EP(struct check_EP_data *data, unsigned nvar, unsigned nparam,
	     struct verify_options *options);
void check_EP_set_scan(struct check_EP_data *data, Polyhedron *C,
			unsigned MaxRays);
void check_EP_clear_scan(struct check_EP_data *data);

__isl_give isl_set *verify_context_set_bounds(__isl_take isl_set *set,
	const struct verify_options *options);

struct verify_point_data {
	const struct verify_options *options;
	int n;
	int s;
	int error;
};

int verify_point_data_init(struct verify_point_data *vpd,
	__isl_keep isl_set *context);
void verify_point_data_fini(struct verify_point_data *vpd);

#if defined(__cplusplus)
}
#endif

#endif

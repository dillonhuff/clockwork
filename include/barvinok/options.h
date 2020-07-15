#ifndef BARVINOK_OPTIONS_H
#define BARVINOK_OPTIONS_H

#include <stdio.h>
#include <isl/arg.h>
#include <isl/ctx.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_stats {
    long	base_cones;
    long	volume_simplices;
    long	topcom_empty_chambers;
    long	topcom_chambers;
    long	topcom_distinct_chambers;
    long	gbr_solved_lps;
    long	bernoulli_sums;
};

void barvinok_stats_clear(struct barvinok_stats *stats);
void barvinok_stats_print(struct barvinok_stats *stats, FILE *out);

struct barvinok_approximation_options {
	#define		BV_APPROX_SIGN_NONE	0
	#define		BV_APPROX_SIGN_APPROX	1
	#define		BV_APPROX_SIGN_LOWER	2
	#define		BV_APPROX_SIGN_UPPER	3
	int	    	approximation;
	#define		BV_APPROX_NONE		0
	#define		BV_APPROX_DROP		1
	#define		BV_APPROX_SCALE		2
	#define		BV_APPROX_VOLUME	3
	#define		BV_APPROX_BERNOULLI	4
	int	    	method;
	#define		BV_APPROX_SCALE_FAST	(1 << 0)
	#define		BV_APPROX_SCALE_NARROW	(1 << 1)
	#define		BV_APPROX_SCALE_NARROW2	(1 << 2)
	#define		BV_APPROX_SCALE_CHAMBER	(1 << 3)
	int	    	scale_flags;
	#define		BV_VOL_LIFT		0
	#define		BV_VOL_VERTEX		1
	#define		BV_VOL_BARYCENTER	2
	int	    	volume_triangulate;
};

struct barvinok_options {
    struct isl_options	    *isl;
    struct barvinok_approximation_options *approx;
    struct barvinok_stats   *stats;

    /* PolyLib options */
    unsigned	MaxRays;

    /* NTL options */
		/* LLL reduction parameter delta=LLL_a/LLL_b */
    long	LLL_a;
    long	LLL_b;

    /* barvinok options */
    #define	BV_SPECIALIZATION_BF		2
    #define	BV_SPECIALIZATION_DF		1
    #define	BV_SPECIALIZATION_RANDOM	0
    #define	BV_SPECIALIZATION_TODD		3
    int		incremental_specialization;

    unsigned long   	    max_index;
    int		    	    primal;
    int		    	    lookup_table;
    int		    	    count_sample_infinite;

    int			    try_Delaunay_triangulation;

    /* basis reduction options */
    #define	BV_GBR_GLPK	1
    #define	BV_GBR_CDD	2
    #define	BV_GBR_ISL	4
    int		gbr_lp_solver;

    #define	BV_LP_POLYLIB		0
    #define	BV_LP_GLPK		1
    #define	BV_LP_CDD		2
    #define	BV_LP_CDDF		3
    #define	BV_LP_ISL		4
    int		lp_solver;

    #define	BV_SUM_BOX		0
    /* deprecated */
    #define	BV_SUM_BARVINOK		0
    #define	BV_SUM_EULER		1
    #define	BV_SUM_BERNOULLI	2
    #define	BV_SUM_LAURENT		3
    #define	BV_SUM_LAURENT_OLD	4
    int		summation;

    #define	BV_CHAMBERS_POLYLIB	0
    #define	BV_CHAMBERS_TOPCOM	1
    #define	BV_CHAMBERS_ISL		2
    int		chambers;

    #define	BV_HULL_GBR		0
    #define	BV_HULL_HILBERT		1
    int		integer_hull;

    int		verbose;

    int		print_stats;

    int		gbr_only_first;
};

ISL_ARG_DECL(barvinok_options, struct barvinok_options, barvinok_options_args)
ISL_ARG_CTX_DECL(barvinok_options, struct barvinok_options,
	barvinok_options_args)

#if defined(__cplusplus)
}
#endif

#endif

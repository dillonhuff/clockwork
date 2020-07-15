#include <string.h>
#include <unistd.h>
#include <isl/options.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "config.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define MAXRAYS    (POL_NO_DUAL | POL_INTEGER)

void barvinok_stats_clear(struct barvinok_stats *stats)
{
    memset(stats, 0, sizeof(*stats));
}

void barvinok_stats_print(struct barvinok_stats *stats, FILE *out)
{
    fprintf(out, "Base cones: %ld\n", stats->base_cones);
    if (stats->volume_simplices)
	fprintf(out, "Volume simplices: %ld\n", stats->volume_simplices);
    if (stats->topcom_chambers) {
	fprintf(out, "TOPCOM empty chambers: %ld\n",
		stats->topcom_empty_chambers);
	fprintf(out, "TOPCOM chambers: %ld\n", stats->topcom_chambers);
	fprintf(out, "TOPCOM distinct chambers: %ld\n",
		stats->topcom_distinct_chambers);
    }
    if (stats->gbr_solved_lps)
	fprintf(out, "LPs solved during GBR: %ld\n", stats->gbr_solved_lps);
    if (stats->bernoulli_sums)
	fprintf(out, "Bernoulli sums: %ld\n", stats->bernoulli_sums);
}

static struct isl_arg_choice approx[] = {
	{"lower",	BV_APPROX_SIGN_LOWER},
	{"upper",	BV_APPROX_SIGN_UPPER},
	{0}
};

static struct isl_arg_choice approx_method[] = {
	{"drop",	BV_APPROX_DROP},
	{"scale",	BV_APPROX_SCALE},
	{"volume",	BV_APPROX_VOLUME},
	{"bernoulli",	BV_APPROX_BERNOULLI},
	{0}
};

static struct isl_arg_flags scale_flags[] = {
	{"fast",	BV_APPROX_SCALE_FAST,	BV_APPROX_SCALE_FAST},
	{"slow",	BV_APPROX_SCALE_FAST,	0},
	{"narrow",	BV_APPROX_SCALE_NARROW | BV_APPROX_SCALE_NARROW2,
			BV_APPROX_SCALE_NARROW},
	{"narrow2",	BV_APPROX_SCALE_NARROW | BV_APPROX_SCALE_NARROW2,
			BV_APPROX_SCALE_NARROW2},
	{"chamber",	BV_APPROX_SCALE_CHAMBER,	BV_APPROX_SCALE_CHAMBER},
	{0}
};

static struct isl_arg_choice triangulation[] = {
	{"lift",	BV_VOL_LIFT},
	{"vertex",	BV_VOL_VERTEX},
	{"barycenter",	BV_VOL_BARYCENTER},
	{0}
};

static int set_approx(void *opt, unsigned val)
{
	struct barvinok_approximation_options *options;
	options = (struct barvinok_approximation_options *)opt;
	options->approximation = val;
	if (options->method == BV_APPROX_NONE)
		options->method = BV_APPROX_SCALE;
	return 0;
}

static int set_method(void *opt, unsigned val)
{
	struct barvinok_approximation_options *options;
	options = (struct barvinok_approximation_options *)opt;
	options->method = val;
	if (options->approximation == BV_APPROX_SIGN_NONE)
		options->approximation = BV_APPROX_SIGN_APPROX;
	return 0;
}

ISL_ARGS_START(struct barvinok_approximation_options, approx_options_args)
ISL_ARG_USER_OPT_CHOICE(struct barvinok_approximation_options, approximation, 0,
	"polynomial-approximation", approx, &set_approx,
	BV_APPROX_SIGN_NONE, BV_APPROX_SIGN_APPROX, NULL)
ISL_ARG_USER_OPT_CHOICE(struct barvinok_approximation_options, method, 0,
	"approximation-method", approx_method, &set_method,
	BV_APPROX_NONE, BV_APPROX_DROP,
	"method to use in polynomial approximation")
ISL_ARG_FLAGS(struct barvinok_approximation_options, scale_flags, 0,
	"scale-options", scale_flags, 0, NULL)
ISL_ARG_CHOICE(struct barvinok_approximation_options, volume_triangulate, 0,
	"volume-triangulation", triangulation, BV_VOL_VERTEX,
	"type of triangulation to perform in volume computation")
ISL_ARGS_END

static int stats_init(void *user)
{
	struct barvinok_stats **stats = (struct barvinok_stats **)user;
	*stats = ALLOC(struct barvinok_stats);
	if (*stats)
		barvinok_stats_clear(*stats);
	return *stats ? 0 : -1;
}
static void stats_clear(void *user)
{
	struct barvinok_stats **stats = (struct barvinok_stats **)user;
	free(*stats);
}
static int maxrays_init(void *user)
{
	unsigned *MaxRays = (unsigned *)user;
	*MaxRays = MAXRAYS;
	return 0;
}
static int int_init_one(void *user)
{
	*((int *)user) = 1;
	return 0;
}
static int int_init_zero(void *user)
{
	*((int *)user) = 0;
	return 0;
}
static void print_version(void)
{
	printf("%s", barvinok_version());
}

#ifdef USE_INCREMENTAL_BF
#define DEFAULT_SPECIALIZATION BV_SPECIALIZATION_BF
#elif defined USE_INCREMENTAL_DF
#define DEFAULT_SPECIALIZATION BV_SPECIALIZATION_DF
#else
#define DEFAULT_SPECIALIZATION BV_SPECIALIZATION_RANDOM
#endif

static struct isl_arg_choice specialization[] = {
	{"bf",		BV_SPECIALIZATION_BF},
	{"df",		BV_SPECIALIZATION_DF},
	{"random",	BV_SPECIALIZATION_RANDOM},
	{"todd",	BV_SPECIALIZATION_TODD},
	{0}
};

static struct isl_arg_choice gbr[] = {
#ifdef HAVE_LIBGLPK
	{"glpk",	BV_GBR_GLPK},
#endif
#ifdef HAVE_LIBCDDGMP
	{"cdd",		BV_GBR_CDD},
#endif
	{"isl",		BV_GBR_ISL},
	{0}
};

static struct isl_arg_choice lp[] = {
#ifdef HAVE_LIBGLPK
	{"glpk",	BV_LP_GLPK},
#endif
#ifdef HAVE_LIBCDDGMP
	{"cdd",		BV_LP_CDD},
	{"cddf",	BV_LP_CDDF},
#endif
	{"polylib",	BV_LP_POLYLIB},
	{"isl",		BV_LP_ISL},
	{0}
};

static struct isl_arg_choice summation[] = {
	{"box",			BV_SUM_BOX},
	{"euler",		BV_SUM_EULER},
	{"bernoulli",		BV_SUM_BERNOULLI},
	{"laurent",		BV_SUM_LAURENT},
	{"laurent_old",		BV_SUM_LAURENT_OLD},
	{0}
};

static struct isl_arg_choice chambers[] = {
	{"polylib",		BV_CHAMBERS_POLYLIB},
#ifdef POINTS2TRIANGS_PATH
	{"topcom",		BV_CHAMBERS_TOPCOM},
#endif
	{"isl",			BV_CHAMBERS_ISL},
	{0}
};

static struct isl_arg_choice hull[] = {
	{"gbr",			BV_HULL_GBR},
#ifdef USE_ZSOLVE
	{"hilbert",		BV_HULL_HILBERT},
#endif
	{0}
};

ISL_ARGS_START(struct barvinok_options, barvinok_options_args)
ISL_ARG_CHILD(struct barvinok_options, isl, "isl", &isl_options_args,
	"isl options")
ISL_ARG_CHILD(struct barvinok_options, approx, NULL,
	&approx_options_args, "polynomial approximation")
ISL_ARG_USER(struct barvinok_options, stats, &stats_init, &stats_clear)
ISL_ARG_USER(struct barvinok_options, MaxRays, &maxrays_init, NULL)
ISL_ARG_LONG(struct barvinok_options, LLL_a, 0, "lll-reduction-num", 1,
	"LLL reduction parameter numerator")
ISL_ARG_LONG(struct barvinok_options, LLL_b, 0, "lll-reduction-den", 1,
	"LLL reduction parameter denominator")
ISL_ARG_CHOICE(struct barvinok_options, incremental_specialization,
	0, "specialization", specialization, DEFAULT_SPECIALIZATION, NULL)
ISL_ARG_ULONG(struct barvinok_options, max_index, 0, "index", 1,
       "maximal index of simple cones in decomposition")
ISL_ARG_BOOL(struct barvinok_options, primal, 0, "primal", 0, NULL)
ISL_ARG_BOOL(struct barvinok_options, lookup_table, 0, "table", 0, NULL)
ISL_ARG_USER(struct barvinok_options, count_sample_infinite, &int_init_one, NULL)
ISL_ARG_USER(struct barvinok_options, try_Delaunay_triangulation, &int_init_zero, NULL)
ISL_ARG_CHOICE(struct barvinok_options, gbr_lp_solver, 0, "gbr", gbr,
	BV_GBR_ISL, "lp solver to use for basis reduction")
ISL_ARG_CHOICE(struct barvinok_options, lp_solver, 0, "lp", lp,
	BV_LP_ISL, "lp solver to use")
ISL_ARG_CHOICE(struct barvinok_options, summation, 0, "summation", summation,
	BV_SUM_LAURENT, NULL)
ISL_ARG_CHOICE(struct barvinok_options, chambers, 0, "chamber-decomposition",
	chambers, BV_CHAMBERS_POLYLIB, "tool to use for chamber decomposition")
ISL_ARG_CHOICE(struct barvinok_options, integer_hull, 0, "integer-hull",
	hull, BV_HULL_GBR, NULL)
ISL_ARG_USER(struct barvinok_options, gbr_only_first, &int_init_zero, NULL)
ISL_ARG_BOOL(struct barvinok_options, print_stats, 0, "print-stats", 0, NULL)
ISL_ARG_BOOL(struct barvinok_options, verbose, 0, "verbose", 0, NULL)
ISL_ARG_VERSION(print_version)
ISL_ARGS_END

ISL_ARG_DEF(barvinok_options, struct barvinok_options, barvinok_options_args)
ISL_ARG_CTX_DEF(barvinok_options, struct barvinok_options,
	barvinok_options_args)

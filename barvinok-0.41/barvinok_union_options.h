#include <isl/arg.h>
#include <barvinok/options.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct union_options {
	int series;
	int check;
	struct barvinok_options *barvinok;
};

ISL_ARG_DECL(union_options, struct union_options, union_options_args)

#if defined(__cplusplus)
}
#endif

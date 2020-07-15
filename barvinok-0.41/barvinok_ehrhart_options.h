#include <isl/arg.h>
#include "evalue_convert.h"

#if defined(__cplusplus)
extern "C" {
#endif

struct ehrhart_options {
	int series;
	struct barvinok_options *barvinok;
	struct convert_options  *convert;
};

ISL_ARG_DECL(ehrhart_options, struct ehrhart_options, ehrhart_options_args)

#if defined(__cplusplus)
}
#endif

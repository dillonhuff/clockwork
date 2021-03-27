#include <isl/arg.h>
#include "evalue_convert.h"
#include "verify.h"

#if defined(__cplusplus)
extern "C" {
#endif

struct enumerate_options {
	int size;
	int series;
	int function;
	struct verify_options    *verify;
	struct convert_options   *convert;
};

ISL_ARG_DECL(enumerate_options, struct enumerate_options,
	enumerate_options_args)

#if defined(__cplusplus)
}
#endif

#include <isl/arg.h>
#include "evalue_convert.h"
#include "verify.h"

#if defined(__cplusplus)
extern "C" {
#endif

struct enumerate_e_options {
	struct verify_options    *verify;
	struct convert_options   *convert;
	int isl;
	int omega;
	int parker;
	int scarf;
	int series;
	int function;
};

ISL_ARG_DECL(enumerate_e_options, struct enumerate_e_options, enumerate_e_options_args)

#if defined(__cplusplus)
}
#endif

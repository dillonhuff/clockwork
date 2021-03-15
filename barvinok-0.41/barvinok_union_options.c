#include <barvinok/options.h>
#include "barvinok_union_options.h"

ISL_ARGS_START(struct union_options, union_options_args)
ISL_ARG_CHILD(struct union_options, barvinok, NULL, &barvinok_options_args,
	NULL)
ISL_ARG_BOOL(struct union_options, series, 's', "series", 0,
	"compute rational generating function")
ISL_ARG_BOOL(struct union_options, check, 'c', "check", 0,
	"check that function output corresponds to expected result")
ISL_ARGS_END

ISL_ARG_DEF(union_options, struct union_options, union_options_args)

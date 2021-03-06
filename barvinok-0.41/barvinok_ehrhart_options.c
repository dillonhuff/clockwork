#include <barvinok/options.h>
#include "barvinok_ehrhart_options.h"

ISL_ARGS_START(struct ehrhart_options, ehrhart_options_args)
ISL_ARG_CHILD(struct ehrhart_options, convert, NULL,
	&convert_options_args, "output conversion")
ISL_ARG_CHILD(struct ehrhart_options, barvinok, NULL, &barvinok_options_args,
	NULL)
ISL_ARG_BOOL(struct ehrhart_options, series, 's', "series", 0,
	"compute rational generating function")
ISL_ARGS_END

ISL_ARG_DEF(ehrhart_options, struct ehrhart_options, ehrhart_options_args)

#include "barvinok_enumerate_options.h"

ISL_ARGS_START(struct enumerate_options, enumerate_options_args)
ISL_ARG_CHILD(struct enumerate_options, verify, NULL,
	&verify_options_args, "verification")
ISL_ARG_CHILD(struct enumerate_options, convert, NULL,
	&convert_options_args, "output conversion")
ISL_ARG_BOOL(struct enumerate_options, size, 'S', "size", 0, NULL)
ISL_ARG_BOOL(struct enumerate_options, series, 's', "series", 0,
	"compute rational generating function")
ISL_ARG_BOOL(struct enumerate_options, function, 'e', "explicit", 0,
	"convert rgf to psp")
ISL_ARGS_END

ISL_ARG_DEF(enumerate_options, struct enumerate_options, enumerate_options_args)

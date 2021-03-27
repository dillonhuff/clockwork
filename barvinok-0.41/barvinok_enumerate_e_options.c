#include "barvinok_enumerate_e_options.h"
#include "config.h"

ISL_ARGS_START(struct enumerate_e_options, enumerate_e_options_args)
ISL_ARG_CHILD(struct enumerate_e_options, verify, NULL,
	&verify_options_args, "verification")
ISL_ARG_CHILD(struct enumerate_e_options, convert, NULL,
	&convert_options_args, "output conversion")
ISL_ARG_BOOL(struct enumerate_e_options, isl, 'i', "isl", 0, NULL)
#ifdef HAVE_OMEGA
ISL_ARG_BOOL(struct enumerate_e_options, omega, 'o', "omega", 0, NULL)
#endif
#ifdef USE_PARKER
ISL_ARG_BOOL(struct enumerate_e_options, parker, 'P', "parker", 0, NULL)
#endif
ISL_ARG_BOOL(struct enumerate_e_options, scarf, 'S', "scarf", 0, NULL)
ISL_ARG_BOOL(struct enumerate_e_options, series, 's', "series", 0,
	"compute rational generating function")
ISL_ARG_BOOL(struct enumerate_e_options, function, 'e', "explicit", 0,
	"convert rgf to psp")
ISL_ARGS_END

ISL_ARG_DEF(enumerate_e_options, struct enumerate_e_options,
	enumerate_e_options_args)

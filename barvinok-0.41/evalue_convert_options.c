#include "evalue_convert.h"

ISL_ARGS_START(struct convert_options, convert_options_args)
ISL_ARG_BOOL(struct convert_options, range, 'R', "range-reduction", 0, NULL)
ISL_ARG_BOOL(struct convert_options, convert, 'c', "convert", 0,
	"convert fractionals to periodics")
ISL_ARG_BOOL(struct convert_options, combine, 'C', "combine", 0, NULL)
ISL_ARG_BOOL(struct convert_options, floor, 'f', "floor", 0,
	"convert fractionals to floorings")
ISL_ARG_BOOL(struct convert_options, list, 'l', "list", 0, NULL)
ISL_ARG_BOOL(struct convert_options, latex, 'L', "latex", 0, NULL)
ISL_ARG_BOOL(struct convert_options, isl, 'I', "to-isl", 0, NULL)
ISL_ARGS_END

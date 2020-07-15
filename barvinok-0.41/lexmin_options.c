#include "lexmin.h"

static struct isl_arg_choice check[] = {
	{"none",		BV_LEXMIN_EMPTINESS_CHECK_NONE},
	{"count",		BV_LEXMIN_EMPTINESS_CHECK_COUNT},
	{"sample",		BV_LEXMIN_EMPTINESS_CHECK_SAMPLE},
	{0}
};

ISL_ARGS_START(struct lexmin_options, lexmin_options_args)
ISL_ARG_CHILD(struct lexmin_options, verify, NULL,
	&verify_options_args, "verification")
ISL_ARG_BOOL(struct lexmin_options, reduce, 0, "reduction", 1, NULL)
ISL_ARG_CHOICE(struct lexmin_options, emptiness_check,
	0, "emptiness-check", check, BV_LEXMIN_EMPTINESS_CHECK_SAMPLE, NULL)
ISL_ARGS_END

ISL_ARG_DEF(lexmin_options, struct lexmin_options, lexmin_options_args)

#ifndef EVALUE_CONVERT
#define EVALUE_CONVERT

#include <isl/arg.h>
#include <barvinok/evalue.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct convert_options {
    int range;
    int convert;
    int combine;
    int floor;
    int list;
    int latex;
    int isl;
};

int evalue_convert(evalue *EP, struct convert_options *options,
		   int verbose, unsigned nparam, const char **params);

ISL_ARG_DECL(convert_options, struct convert_options, convert_options_args)

#if defined(__cplusplus)
}
#endif

#endif

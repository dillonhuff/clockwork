#ifndef EVALUE_READ
#define EVALUE_READ

#include <barvinok/evalue.h>

#if defined(__cplusplus)
extern "C" {
#endif

evalue *evalue_read_from_file(FILE *in, const char *var_list,
			      const char ***ppp,
			      unsigned *nvar, unsigned *nparam, unsigned MaxRays);
evalue *evalue_read_from_str(const char *str, const char *var_list,
			     const char ***ppp,
			     unsigned *nvar, unsigned *nparam, unsigned MaxRays);

#if defined(__cplusplus)
}
#endif

#endif

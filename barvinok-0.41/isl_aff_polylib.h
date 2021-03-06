#ifndef ISL_AFF_POLYLIB_H
#define ISL_AFF_POLYLIB_H

#include <isl/aff.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

Matrix *isl_multi_aff_to_polylib(__isl_keep isl_multi_aff *ma);

#if defined(__cplusplus)
}
#endif

#endif

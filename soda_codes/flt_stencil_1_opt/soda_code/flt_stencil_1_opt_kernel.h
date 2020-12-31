#include "ap_int.h"

extern "C" {

void flt_stencil_1_opt_kernel(ap_uint<32>* flt_stencil_1, ap_uint<32>* in, uint64_t coalesced_data_num);
}

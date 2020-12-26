#include "ap_int.h"

extern "C" {

void float_stencil_1_opt_kernel(ap_uint<32>* float_stencil_1, ap_uint<32>* in, uint64_t coalesced_data_num);
}

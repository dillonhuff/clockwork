#include "ap_int.h"

extern "C" {

void blur4_32_opt_d32_kernel(ap_uint<512>* blur4_32, ap_uint<512>* input_arg, uint64_t coalesced_data_num);
}

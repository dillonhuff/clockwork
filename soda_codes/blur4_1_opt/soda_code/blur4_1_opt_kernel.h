#include "ap_int.h"

extern "C" {

void blur4_1_opt_kernel(ap_uint<16>* blur4_1, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void blurx6_1_opt_kernel(ap_uint<16>* blurx6_1, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void blurx7_32_opt_dis_kernel(ap_uint<512>* blurx7_32, ap_uint<512>* input_arg, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void blurx7_2_opt_kernel(ap_uint<32>* blurx7_2, ap_uint<32>* input_arg, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void blurx7_16_opt_d32_kernel(ap_uint<256>* blurx7_16, ap_uint<256>* input_arg, uint64_t coalesced_data_num);
}

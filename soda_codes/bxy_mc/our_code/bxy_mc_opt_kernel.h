#include "ap_int.h"

extern "C" {

void bxy_mc_opt_kernel(ap_uint<16>* bxy_mc, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}

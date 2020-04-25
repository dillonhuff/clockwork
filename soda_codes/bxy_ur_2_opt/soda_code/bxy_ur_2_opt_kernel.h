#include "ap_int.h"

extern "C" {

void bxy_ur_2_opt_kernel(ap_uint<16>* bxy_ur_2, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}

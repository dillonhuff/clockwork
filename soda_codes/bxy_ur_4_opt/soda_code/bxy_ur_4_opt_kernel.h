#include "ap_int.h"

extern "C" {

void bxy_ur_4_opt_kernel(ap_uint<64>* bxy_ur_4, ap_uint<64>* input_arg, uint64_t coalesced_data_num);
}

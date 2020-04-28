#include "ap_int.h"

extern "C" {

void bxy_ur_2_opt_kernel(ap_uint<32>* bxy_ur_2, ap_uint<32>* input_arg, uint64_t coalesced_data_num);
}

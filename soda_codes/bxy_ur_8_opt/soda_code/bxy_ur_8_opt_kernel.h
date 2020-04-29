#include "ap_int.h"

extern "C" {

void bxy_ur_8_opt_kernel(ap_uint<128>* bxy_ur_8, ap_uint<128>* input_arg, uint64_t coalesced_data_num);
}

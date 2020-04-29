#include "ap_int.h"

extern "C" {

void bxy_ur_16_opt_kernel(ap_uint<256>* bxy_ur_16, ap_uint<256>* input_arg, uint64_t coalesced_data_num);
}

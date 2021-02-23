#include "ap_int.h"

extern "C" {

void blur3_1_opt_dis_kernel(ap_uint<16>* blur3_1, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void blur9_32_opt_dis_kernel(ap_uint<512>* blur9_32, ap_uint<512>* input_arg, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void float_add_1_opt_kernel(ap_uint<32>* float_add_1, ap_uint<32>* in, uint64_t coalesced_data_num);
}

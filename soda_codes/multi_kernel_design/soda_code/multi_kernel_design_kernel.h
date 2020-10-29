#include "ap_int.h"

extern "C" {

void multi_kernel_design_kernel(ap_uint<32>* out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

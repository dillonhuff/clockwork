#include "ap_int.h"

extern "C" {

void heat2d_1_1_opt_kernel(ap_uint<32>* heat2d_1_1, ap_uint<32>* in, uint64_t coalesced_data_num);
}

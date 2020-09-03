#include "ap_int.h"

extern "C" {

void mpr16b_32_4_opt_kernel(ap_uint<32>* mpr16b_32_4, ap_uint<64>* in_oc, uint64_t coalesced_data_num);
}

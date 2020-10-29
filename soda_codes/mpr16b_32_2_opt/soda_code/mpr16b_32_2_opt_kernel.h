#include "ap_int.h"

extern "C" {

void mpr16b_32_2_opt_kernel(ap_uint<16>* mpr16b_32_2, ap_uint<32>* in_oc, uint64_t coalesced_data_num);
}

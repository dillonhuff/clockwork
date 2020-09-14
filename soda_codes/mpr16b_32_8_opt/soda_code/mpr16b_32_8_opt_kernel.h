#include "ap_int.h"

extern "C" {

void mpr16b_32_8_opt_kernel(ap_uint<64>* mpr16b_32_8, ap_uint<128>* in_oc, uint64_t coalesced_data_num);
}

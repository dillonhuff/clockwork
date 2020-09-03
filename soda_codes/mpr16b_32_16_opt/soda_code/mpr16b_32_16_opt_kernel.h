#include "ap_int.h"

extern "C" {

void mpr16b_32_16_opt_kernel(ap_uint<128>* mpr16b_32_16, ap_uint<256>* in_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void sc_dyn_7_32_kernel(ap_uint<32>* out, ap_uint<32>* in_oc, uint64_t coalesced_data_num);
}

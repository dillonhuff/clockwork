#include "ap_int.h"

extern "C" {

void stencil_chain_dynamic_schedule_kernel(ap_uint<32>* out, ap_uint<32>* in_oc, uint64_t coalesced_data_num);
}

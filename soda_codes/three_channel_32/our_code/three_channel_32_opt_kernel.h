#include "ap_int.h"

extern "C" {

void three_channel_32_opt_kernel(ap_uint<512>* three_channel_32, ap_uint<512>* in0_oc, ap_uint<512>* in1_oc, uint64_t coalesced_data_num);
}

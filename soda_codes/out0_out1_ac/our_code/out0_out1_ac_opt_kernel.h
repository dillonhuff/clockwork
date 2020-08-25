#include "ap_int.h"

extern "C" {

void out0_out1_ac_opt_kernel(ap_uint<512>* out0, ap_uint<512>* out1_ac, ap_uint<512>* in0_oc, ap_uint<512>* in1_oc, uint64_t coalesced_data_num);
}

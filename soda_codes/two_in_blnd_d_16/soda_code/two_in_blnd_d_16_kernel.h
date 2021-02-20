#include "ap_int.h"

extern "C" {

void two_in_blnd_d_16_kernel(ap_uint<512>* out, ap_uint<512>* in0_oc, ap_uint<512>* in1_oc, uint64_t coalesced_data_num);
}

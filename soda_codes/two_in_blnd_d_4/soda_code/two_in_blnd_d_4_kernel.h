#include "ap_int.h"

extern "C" {

void two_in_blnd_d_4_kernel(ap_uint<128>* out, ap_uint<128>* in0_oc, ap_uint<128>* in1_oc, uint64_t coalesced_data_num);
}

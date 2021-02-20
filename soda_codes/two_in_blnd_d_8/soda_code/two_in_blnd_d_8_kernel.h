#include "ap_int.h"

extern "C" {

void two_in_blnd_d_8_kernel(ap_uint<256>* out, ap_uint<256>* in0_oc, ap_uint<256>* in1_oc, uint64_t coalesced_data_num);
}

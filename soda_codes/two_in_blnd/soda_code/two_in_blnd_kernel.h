#include "ap_int.h"

extern "C" {

void two_in_blnd_kernel(ap_uint<32>* out, ap_uint<32>* in0_oc, ap_uint<32>* in1_oc, uint64_t coalesced_data_num);
}

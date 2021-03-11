#include "ap_int.h"

extern "C" {

void oned_r_oc2_kernel(ap_uint<32>* out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void cp4_1_opt_d32_kernel(ap_uint<16>* cp4_1, ap_uint<16>* raw_oc, uint64_t coalesced_data_num);
}

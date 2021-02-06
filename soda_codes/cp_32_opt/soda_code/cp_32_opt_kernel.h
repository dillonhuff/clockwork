#include "ap_int.h"

extern "C" {

void cp_32_opt_kernel(ap_uint<16>* cp_32, ap_uint<16>* raw_oc, uint64_t coalesced_data_num);
}

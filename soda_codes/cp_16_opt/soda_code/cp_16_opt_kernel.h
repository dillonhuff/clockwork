#include "ap_int.h"

extern "C" {

void cp_16_opt_kernel(ap_uint<16>* cp_16, ap_uint<16>* raw_oc, uint64_t coalesced_data_num);
}

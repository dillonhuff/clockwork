#include "ap_int.h"

extern "C" {

void cp_noinit_ln_32_opt_kernel(ap_uint<512>* cp_noinit_ln_32, ap_uint<512>* raw_oc, uint64_t coalesced_data_num);
}

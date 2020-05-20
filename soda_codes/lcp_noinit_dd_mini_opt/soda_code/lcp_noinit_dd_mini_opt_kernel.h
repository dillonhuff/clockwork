#include "ap_int.h"

extern "C" {

void lcp_noinit_dd_mini_opt_kernel(ap_uint<16>* lcp_noinit_dd_mini, ap_uint<16>* raw_oc, uint64_t coalesced_data_num);
}

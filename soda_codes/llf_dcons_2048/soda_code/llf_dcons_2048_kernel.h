#include "ap_int.h"

extern "C" {

void llf_dcons_2048_kernel(ap_uint<96>* color_out, ap_uint<96>* color_in_oc, uint64_t coalesced_data_num);
}

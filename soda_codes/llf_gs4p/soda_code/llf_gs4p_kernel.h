#include "ap_int.h"

extern "C" {

void llf_gs4p_kernel(ap_uint<128>* gray_out, ap_uint<128>* gray_in_oc, uint64_t coalesced_data_num);
}

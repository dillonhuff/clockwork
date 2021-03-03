#include "ap_int.h"

extern "C" {

void llf_gs_icd_kernel(ap_uint<32>* gray_out, ap_uint<32>* gray_in_oc, uint64_t coalesced_data_num);
}

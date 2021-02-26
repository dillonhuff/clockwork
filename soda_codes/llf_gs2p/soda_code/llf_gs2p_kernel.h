#include "ap_int.h"

extern "C" {

void llf_gs2p_kernel(ap_uint<64>* gray_out, ap_uint<64>* gray_in_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void cp_4_opt_kernel(ap_uint<64>* cp_4, ap_uint<64>* raw_oc, uint64_t coalesced_data_num);
}

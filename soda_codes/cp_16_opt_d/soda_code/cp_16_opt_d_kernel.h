#include "ap_int.h"

extern "C" {

void cp_16_opt_d_kernel(ap_uint<256>* cp_16, ap_uint<256>* raw_oc, uint64_t coalesced_data_num);
}

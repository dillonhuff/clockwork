#include "ap_int.h"

extern "C" {

void cp4_16_opt_kernel(ap_uint<256>* cp4_16, ap_uint<256>* raw_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void cp9_16_opt_d32_kernel(ap_uint<256>* cp9_16, ap_uint<256>* raw_oc, uint64_t coalesced_data_num);
}

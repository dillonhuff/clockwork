#include "ap_int.h"

extern "C" {

void cp_2_opt_kernel(ap_uint<32>* cp_2, ap_uint<32>* raw_oc, uint64_t coalesced_data_num);
}

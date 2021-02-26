#include "ap_int.h"

extern "C" {

void cp4_32_opt_dis_kernel(ap_uint<512>* cp4_32, ap_uint<512>* raw_oc, uint64_t coalesced_data_num);
}

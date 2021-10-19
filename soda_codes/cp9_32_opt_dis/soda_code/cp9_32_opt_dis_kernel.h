#include "ap_int.h"

extern "C" {

void cp9_32_opt_dis_kernel(ap_uint<512>* cp9_32, ap_uint<512>* raw_oc, uint64_t coalesced_data_num);
}

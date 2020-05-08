#include "ap_int.h"

extern "C" {

void hrs_1_opt_kernel(ap_uint<16>* hrs_1, ap_uint<16>* img_oc, uint64_t coalesced_data_num);
}

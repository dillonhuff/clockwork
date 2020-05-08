#include "ap_int.h"

extern "C" {

void hrs_8_opt_kernel(ap_uint<128>* hrs_8, ap_uint<128>* img_oc, uint64_t coalesced_data_num);
}

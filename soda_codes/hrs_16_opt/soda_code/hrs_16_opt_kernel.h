#include "ap_int.h"

extern "C" {

void hrs_16_opt_kernel(ap_uint<256>* hrs_16, ap_uint<256>* img_oc, uint64_t coalesced_data_num);
}

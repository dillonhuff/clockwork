#include "ap_int.h"

extern "C" {

void dp_opt_kernel(ap_uint<16>* dp, ap_uint<16>* img_oc, uint64_t coalesced_data_num);
}

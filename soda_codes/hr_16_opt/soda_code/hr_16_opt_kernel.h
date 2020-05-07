#include "ap_int.h"

extern "C" {

void hr_16_opt_kernel(ap_uint<512>* hr_16, ap_uint<512>* img_oc, uint64_t coalesced_data_num);
}

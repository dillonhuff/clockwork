#include "ap_int.h"

extern "C" {

void hr_8_opt_kernel(ap_uint<256>* hr_8, ap_uint<256>* img_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void harris16_mini_opt_kernel(ap_uint<16>* harris16_mini, ap_uint<16>* img_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void harris_mini_opt_kernel(ap_uint<32>* harris_mini, ap_uint<32>* img_oc, uint64_t coalesced_data_num);
}

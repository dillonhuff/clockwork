#include "ap_int.h"

extern "C" {

void harris_1_opt_kernel(ap_uint<32>* harris_1, ap_uint<32>* img_oc, uint64_t coalesced_data_num);
}

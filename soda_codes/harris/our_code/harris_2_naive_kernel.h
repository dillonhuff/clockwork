#include "ap_int.h"

extern "C" {

void harris_2_naive_kernel(ap_uint<16>* harris_2, ap_uint<16>* img_oc, uint64_t coalesced_data_num);
}

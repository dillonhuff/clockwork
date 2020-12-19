#include "ap_int.h"

extern "C" {

void sobel_unrolled_16_opt_kernel(ap_uint<512>* sobel_unrolled_16, ap_uint<512>* off_chip_img, uint64_t coalesced_data_num);
}

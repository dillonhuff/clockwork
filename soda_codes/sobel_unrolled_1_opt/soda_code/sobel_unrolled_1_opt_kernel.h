#include "ap_int.h"

extern "C" {

void sobel_unrolled_1_opt_kernel(ap_uint<32>* sobel_unrolled_1, ap_uint<32>* off_chip_img, uint64_t coalesced_data_num);
}

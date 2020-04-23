#include "ap_int.h"

extern "C" {

void sobel_16_stage_x_unrolled_1_opt_kernel(ap_uint<16>* sobel_16_stage_x_unrolled_1, ap_uint<16>* off_chip_img, uint64_t coalesced_data_num);
}

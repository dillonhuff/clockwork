#include "ap_int.h"

extern "C" {

void sobel_unrolled_2_opt_kernel(ap_uint<64>* sobel_unrolled_2, ap_uint<64>* off_chip_img, uint64_t coalesced_data_num);
}

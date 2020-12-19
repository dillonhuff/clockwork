#include "ap_int.h"

extern "C" {

void sobel_unrolled_4_opt_kernel(ap_uint<128>* sobel_unrolled_4, ap_uint<128>* off_chip_img, uint64_t coalesced_data_num);
}

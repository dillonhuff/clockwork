#include "ap_int.h"

extern "C" {

void sobel_unrolled_8_opt_kernel(ap_uint<256>* sobel_unrolled_8, ap_uint<256>* off_chip_img, uint64_t coalesced_data_num);
}

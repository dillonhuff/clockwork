#include "ap_int.h"

extern "C" {

void mag_y_opt_kernel(ap_uint<32>* mag_y, ap_uint<32>* off_chip_img, uint64_t coalesced_data_num);
}
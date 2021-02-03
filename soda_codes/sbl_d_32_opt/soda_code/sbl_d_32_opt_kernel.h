#include "ap_int.h"

extern "C" {

void sbl_d_32_opt_kernel(ap_uint<512>* sbl_d_32, ap_uint<512>* off_chip_img, uint64_t coalesced_data_num);
}

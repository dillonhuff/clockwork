#include "ap_int.h"

extern "C" {

void sbl7_16_opt_d32_kernel(ap_uint<256>* sbl7_16, ap_uint<256>* off_chip_img, uint64_t coalesced_data_num);
}

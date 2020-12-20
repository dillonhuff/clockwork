#include "ap_int.h"

extern "C" {

void sbl20_8_opt_kernel(ap_uint<128>* sbl20_8, ap_uint<128>* off_chip_img, uint64_t coalesced_data_num);
}

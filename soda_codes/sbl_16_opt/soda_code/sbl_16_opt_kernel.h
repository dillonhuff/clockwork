#include "ap_int.h"

extern "C" {

void sbl_16_opt_kernel(ap_uint<256>* sbl_16, ap_uint<256>* off_chip_img, uint64_t coalesced_data_num);
}

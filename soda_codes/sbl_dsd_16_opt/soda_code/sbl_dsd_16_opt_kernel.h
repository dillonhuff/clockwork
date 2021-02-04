#include "ap_int.h"

extern "C" {

void sbl_dsd_16_opt_kernel(ap_uint<256>* sbl_dsd_16, ap_uint<256>* off_chip_img, uint64_t coalesced_data_num);
}

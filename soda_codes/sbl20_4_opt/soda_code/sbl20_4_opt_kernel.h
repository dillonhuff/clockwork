#include "ap_int.h"

extern "C" {

void sbl20_4_opt_kernel(ap_uint<64>* sbl20_4, ap_uint<64>* off_chip_img, uint64_t coalesced_data_num);
}

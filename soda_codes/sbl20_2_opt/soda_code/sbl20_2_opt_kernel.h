#include "ap_int.h"

extern "C" {

void sbl20_2_opt_kernel(ap_uint<32>* sbl20_2, ap_uint<32>* off_chip_img, uint64_t coalesced_data_num);
}

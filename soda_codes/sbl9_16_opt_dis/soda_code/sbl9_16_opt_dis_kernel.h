#include "ap_int.h"

extern "C" {

void sbl9_16_opt_dis_kernel(ap_uint<256>* sbl9_16, ap_uint<256>* off_chip_img, uint64_t coalesced_data_num);
}

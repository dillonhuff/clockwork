#include "ap_int.h"

extern "C" {

void sbl4_32_opt_d32_kernel(ap_uint<512>* sbl4_32, ap_uint<512>* off_chip_img, uint64_t coalesced_data_num);
}

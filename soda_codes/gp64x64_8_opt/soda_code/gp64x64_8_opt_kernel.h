#include "ap_int.h"

extern "C" {

void gp64x64_8_opt_kernel(ap_uint<16>* gp64x64_8, ap_uint<128>* in_off_chip, uint64_t coalesced_data_num);
}

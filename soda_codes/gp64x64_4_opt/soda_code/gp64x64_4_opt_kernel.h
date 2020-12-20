#include "ap_int.h"

extern "C" {

void gp64x64_4_opt_kernel(ap_uint<16>* gp64x64_4, ap_uint<64>* in_off_chip, uint64_t coalesced_data_num);
}

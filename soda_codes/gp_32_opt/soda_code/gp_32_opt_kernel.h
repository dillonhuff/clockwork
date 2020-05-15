#include "ap_int.h"

extern "C" {

void gp_32_opt_kernel(ap_uint<32>* gp_32, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

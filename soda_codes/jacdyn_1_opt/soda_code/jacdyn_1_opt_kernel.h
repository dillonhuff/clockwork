#include "ap_int.h"

extern "C" {

void jacdyn_1_opt_kernel(ap_uint<64>* jacdyn_1, ap_uint<64>* in_off_chip, uint64_t coalesced_data_num);
}
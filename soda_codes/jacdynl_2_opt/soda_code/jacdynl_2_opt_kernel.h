#include "ap_int.h"

extern "C" {

void jacdynl_2_opt_kernel(ap_uint<16>* jacdynl_2, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}
#include "ap_int.h"

extern "C" {

void one_pipe10_opt_kernel(ap_uint<16>* one_pipe10, ap_uint<16>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

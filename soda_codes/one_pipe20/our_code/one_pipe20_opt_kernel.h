#include "ap_int.h"

extern "C" {

void one_pipe20_opt_kernel(ap_uint<32>* one_pipe20, ap_uint<32>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

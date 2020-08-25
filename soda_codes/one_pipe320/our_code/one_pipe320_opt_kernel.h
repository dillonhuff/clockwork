#include "ap_int.h"

extern "C" {

void one_pipe320_opt_kernel(ap_uint<512>* one_pipe320, ap_uint<512>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

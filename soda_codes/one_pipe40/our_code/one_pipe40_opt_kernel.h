#include "ap_int.h"

extern "C" {

void one_pipe40_opt_kernel(ap_uint<64>* one_pipe40, ap_uint<64>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void one_pipe80_opt_kernel(ap_uint<128>* one_pipe80, ap_uint<128>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

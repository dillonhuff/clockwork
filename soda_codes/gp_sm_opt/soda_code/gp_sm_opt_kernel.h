#include "ap_int.h"

extern "C" {

void gp_sm_opt_kernel(ap_uint<16>* gp_sm, ap_uint<128>* in_off_chip, uint64_t coalesced_data_num);
}

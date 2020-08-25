#include "ap_int.h"

extern "C" {

void ps10_ps11_opt_kernel(ap_uint<16>* ps10, ap_uint<16>* ps11, ap_uint<16>* in_off_chip0_oc, ap_uint<16>* in_off_chip1_oc, uint64_t coalesced_data_num);
}

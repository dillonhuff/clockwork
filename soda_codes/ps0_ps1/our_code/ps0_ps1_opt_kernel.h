#include "ap_int.h"

extern "C" {

void ps0_ps1_opt_kernel(ap_uint<512>* ps0, ap_uint<512>* ps1, ap_uint<512>* in_off_chip0_oc, ap_uint<512>* in_off_chip1_oc, uint64_t coalesced_data_num);
}

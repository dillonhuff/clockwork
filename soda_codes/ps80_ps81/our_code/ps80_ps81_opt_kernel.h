#include "ap_int.h"

extern "C" {

void ps80_ps81_opt_kernel(ap_uint<128>* ps80, ap_uint<128>* ps81, ap_uint<128>* in_off_chip0_oc, ap_uint<128>* in_off_chip1_oc, uint64_t coalesced_data_num);
}

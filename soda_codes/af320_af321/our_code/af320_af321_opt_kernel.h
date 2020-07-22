#include "ap_int.h"

extern "C" {

void af320_af321_opt_kernel(ap_uint<512>* af320, ap_uint<512>* af321, ap_uint<512>* in_off_chip0_oc, ap_uint<512>* in_off_chip1_oc, uint64_t coalesced_data_num);
}

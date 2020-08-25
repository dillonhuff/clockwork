#include "ap_int.h"

extern "C" {

void wa320_wa321_opt_kernel(ap_uint<512>* wa320, ap_uint<512>* wa321, ap_uint<512>* in_off_chip0_oc, ap_uint<512>* in_off_chip1_oc, uint64_t coalesced_data_num);
}

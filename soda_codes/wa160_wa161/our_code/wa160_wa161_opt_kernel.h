#include "ap_int.h"

extern "C" {

void wa160_wa161_opt_kernel(ap_uint<256>* wa160, ap_uint<256>* wa161, ap_uint<256>* in_off_chip0_oc, ap_uint<256>* in_off_chip1_oc, uint64_t coalesced_data_num);
}

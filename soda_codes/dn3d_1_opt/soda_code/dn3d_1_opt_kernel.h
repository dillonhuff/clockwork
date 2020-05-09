#include "ap_int.h"

extern "C" {

void dn3d_1_opt_kernel(ap_uint<16>* dn3d_1, ap_uint<16>* f_oc, ap_uint<16>* u_oc, uint64_t coalesced_data_num);
}

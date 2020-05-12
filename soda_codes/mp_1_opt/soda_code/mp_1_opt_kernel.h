#include "ap_int.h"

extern "C" {

void mp_1_opt_kernel(ap_uint<32>* mp_1, ap_uint<32>* in_oc, uint64_t coalesced_data_num);
}

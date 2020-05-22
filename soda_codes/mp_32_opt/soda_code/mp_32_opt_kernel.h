#include "ap_int.h"

extern "C" {

void mp_32_opt_kernel(ap_uint<512>* mp_32, ap_uint<1024>* in_oc, uint64_t coalesced_data_num);
}

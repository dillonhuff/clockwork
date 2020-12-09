#include "ap_int.h"

extern "C" {

void sc_dyn_kernel(ap_uint<128>* out, ap_uint<128>* in_oc, uint64_t coalesced_data_num);
}

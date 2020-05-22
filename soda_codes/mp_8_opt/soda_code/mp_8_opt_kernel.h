#include "ap_int.h"

extern "C" {

void mp_8_opt_kernel(ap_uint<128>* mp_8, ap_uint<256>* in_oc, uint64_t coalesced_data_num);
}

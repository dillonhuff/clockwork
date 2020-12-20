#include "ap_int.h"

extern "C" {

void mp25_16_opt_kernel(ap_uint<256>* mp25_16, ap_uint<512>* in_oc, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void sc_stat_4_kernel(ap_uint<32>* out, ap_uint<32>* in_oc, uint64_t coalesced_data_num);
}

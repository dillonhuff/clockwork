#include "ap_int.h"

extern "C" {

void mp_naive_naive_kernel(ap_uint<32>* mp_naive, ap_uint<64>* in_oc, uint64_t coalesced_data_num);
}

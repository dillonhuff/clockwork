#include "ap_int.h"

extern "C" {

void D_naive_kernel(ap_uint<32>* D, ap_uint<32>* C_oc, uint64_t coalesced_data_num);
}

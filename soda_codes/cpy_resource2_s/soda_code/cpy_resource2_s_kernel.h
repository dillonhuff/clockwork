#include "ap_int.h"

extern "C" {

void cpy_resource2_s_kernel(ap_uint<32>* out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

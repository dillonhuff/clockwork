#include "ap_int.h"

extern "C" {

void upsample_2d_kernel(ap_uint<32>* out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

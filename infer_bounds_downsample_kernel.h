#include "ap_int.h"

extern "C" {

void infer_bounds_downsample_kernel(ap_uint<64>* out, ap_uint<128>* in_oc, uint64_t coalesced_data_num);
}

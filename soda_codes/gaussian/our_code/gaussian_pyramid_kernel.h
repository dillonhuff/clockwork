#include "ap_int.h"

extern "C" {

void gaussian_pyramid_kernel(ap_uint<32>* I_blr_ds_blr_ds_out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

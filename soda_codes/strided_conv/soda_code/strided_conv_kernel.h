#include "ap_int.h"

extern "C" {

void strided_conv_kernel(ap_uint<16>* hw_output_stencil, ap_uint<16>* input_copy_stencil, uint64_t coalesced_data_num);
}

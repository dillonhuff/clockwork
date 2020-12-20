#include "ap_int.h"

extern "C" {

void mini_conv_halide_fixed_kernel(ap_uint<16>* hw_output_stencil, ap_uint<16>* hw_input_stencil, uint64_t coalesced_data_num);
}

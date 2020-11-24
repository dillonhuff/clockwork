#include "ap_int.h"

extern "C" {

void mobilenet_unrolled_kernel(ap_uint<16>* hw_output_stencil_clkwrk_10, ap_uint<16>* hw_output_stencil_clkwrk_8, ap_uint<16>* hw_output_stencil_clkwrk_9, ap_uint<16>* hw_filter_dw_stencil_clkwrk_0, ap_uint<16>* hw_filter_dw_stencil_clkwrk_1, ap_uint<16>* hw_filter_dw_stencil_clkwrk_2, ap_uint<16>* hw_filter_dw_stencil_clkwrk_3, ap_uint<16>* hw_filter_pw_stencil, ap_uint<16>* hw_input_stencil_clkwrk_4, ap_uint<16>* hw_input_stencil_clkwrk_5, ap_uint<16>* hw_input_stencil_clkwrk_6, ap_uint<16>* hw_input_stencil_clkwrk_7, uint64_t coalesced_data_num);
}

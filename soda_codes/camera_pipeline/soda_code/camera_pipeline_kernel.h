#include "ap_int.h"

extern "C" {

void camera_pipeline_kernel(ap_uint<16>* hw_output_stencil_clkwrk_write_duplicate0, ap_uint<16>* hw_output_stencil_clkwrk_write_duplicate1, ap_uint<16>* hw_output_stencil_clkwrk_write_duplicate2, ap_uint<16>* hw_input_stencil, uint64_t coalesced_data_num);
}

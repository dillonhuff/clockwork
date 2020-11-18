#include <algorithm>
#include <fstream>
#include <vector>
#include "mobilenet_unrolled.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_1_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_2_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_3_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_1_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_2_write_channel;
  // In lanes = 1
  Unsupported input dimension: 0

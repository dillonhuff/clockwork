#include <algorithm>
#include <fstream>
#include <vector>
#include "gaussian.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_10_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_11_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_12_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_13_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_8_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_9_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_8_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_9_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_10_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_11_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_12_write_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_13_write_channel;
  // In lanes = 1
  Unsupported input dimension: 0

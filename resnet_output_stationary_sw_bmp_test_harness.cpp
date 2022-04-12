#include <algorithm>
#include <fstream>
#include <vector>
#include "resnet_output_stationary.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<16> > op_hcompute_input_glb_stencil_read_channel;
  HWStream<hw_uint<16> > op_hcompute_kernel_glb_stencil_read_channel;
  HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_channel;
  // In lanes = 1
  Unsupported input dimension: 0

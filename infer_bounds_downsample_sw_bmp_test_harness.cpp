#include <algorithm>
#include <fstream>
#include <vector>
#include "infer_bounds_downsample.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<128> > pw_math_in_oc03_merged32_read_channel;
  HWStream<hw_uint<64> > pw_math_down69_merged37_write_channel;
  // In lanes = 4
  // Error: no support for uneven lanes in sw bmp test harness generation

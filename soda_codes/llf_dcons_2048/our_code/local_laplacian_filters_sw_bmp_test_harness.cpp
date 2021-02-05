#include <algorithm>
#include <fstream>
#include <vector>
#include "local_laplacian_filters.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<96> > oc_load_color_in_oc02_merged2591_read_channel;
  HWStream<hw_uint<96> > pw_math_color_out_float512514_merged2600_write_channel;
  // In lanes = 3
  // Error: no support for uneven lanes in sw bmp test harness generation

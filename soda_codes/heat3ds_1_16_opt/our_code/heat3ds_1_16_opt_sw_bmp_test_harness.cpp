#include <algorithm>
#include <fstream>
#include <vector>
#include "heat3ds_1_16_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<512> > in_cc_update_0_read_channel;
  HWStream<hw_uint<512> > heat3ds_1_16_update_0_write_channel;
  // In lanes = 16
  // Error: no support for uneven lanes in sw bmp test harness generation

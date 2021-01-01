#include <algorithm>
#include <fstream>
#include <vector>
#include "heat3dsla_1_8_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<256> > in_cc_update_0_read_channel;
  HWStream<hw_uint<256> > heat3dsla_1_8_update_0_write_channel;
  // In lanes = 8
  // Error: no support for uneven lanes in sw bmp test harness generation

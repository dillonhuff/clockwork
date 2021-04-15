#include <algorithm>
#include <fstream>
#include <vector>
#include "oned_r_oc2.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<32> > pw_math_in02_read_channel;
  HWStream<hw_uint<32> > s1_write_channel;
  // In lanes = 1
  Unsupported input dimension: 1

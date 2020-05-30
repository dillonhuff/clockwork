#include <algorithm>
#include <fstream>
#include <vector>
#include "psef_ct_1920_1080_naive.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<16> > in_update_0_read_channel;
  HWStream<hw_uint<16> > psef_ct_1920_1080_update_0_write_channel;
  for (int r = 0; r < 1087; r++) {
    for (int c = 0; c < 1927; c++) {
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        in_update_0_read_channel.write(val);
      } else {
        in_update_0_read_channel.write(0);
      }
    }
  }
  psef_ct_1920_1080_naive(in_update_0_read_channel, psef_ct_1920_1080_update_0_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int c = 0; c < 1920; c++) {
      auto val = psef_ct_1920_1080_update_0_write_channel.read();
      rgb_t pix;
      pix.red = val;
      pix.green = val;
      pix.blue = val;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/psef_ct_1920_1080_naive_bmp_out.bmp");
}

#include <algorithm>
#include <fstream>
#include <vector>
#include "mpsize_1_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<32> > in_update_0_read_channel;
  HWStream<hw_uint<32> > mpsize_1_update_0_write_channel;
  for (int r = 0; r < 16; r++) {
    for (int c = 0; c < 16; c++) {
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
  mpsize_1_opt(in_update_0_read_channel, mpsize_1_update_0_write_channel);
  bitmap_image output(8, 8, 4);
  for (int r = 0; r < 8; r++) {
    for (int c = 0; c < 8; c++) {
      auto val = mpsize_1_update_0_write_channel.read();
      rgb_t pix;
      pix.red = val;
      pix.green = val;
      pix.blue = val;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/mpsize_1_opt_bmp_out.bmp");
}

#include <algorithm>
#include <fstream>
#include <vector>
#include "dn_reconv_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<16> > f_update_0_read_channel;
  HWStream<hw_uint<16> > u_update_0_read_channel;
  HWStream<hw_uint<16> > dn_reconv_update_0_write_channel;
  // In lanes = 1
  for (int r = 0; r < 8; r++) {
    for (int cl = 0; cl < 8 / 1; cl++) {
      hw_uint<16> packed;
      {
      int c = 1*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        f_update_0_read_channel.write(pix.red);
        f_update_0_read_channel.write(pix.green);
        f_update_0_read_channel.write(pix.blue);
      } else {
        f_update_0_read_channel.write(0);
        f_update_0_read_channel.write(0);
        f_update_0_read_channel.write(0);
      }
      }
    }
  }
  dn_reconv_opt(f_update_0_read_channel, u_update_0_read_channel, dn_reconv_update_0_write_channel);
  bitmap_image output(8, 8);
  for (int r = 0; r < 8; r++) {
    for (int cl = 0; cl < 8 / 1; cl++) {
      int c = 1*cl + 0;
      rgb_t pix;
      auto red = dn_reconv_update_0_write_channel.read();
      auto g = dn_reconv_update_0_write_channel.read();
      auto b = dn_reconv_update_0_write_channel.read();
      pix.red = red;
      pix.green = g;
      pix.blue = b;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/dn_reconv_opt_bmp_out.bmp");
}

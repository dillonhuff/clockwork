#include <algorithm>
#include <fstream>
#include <vector>
#include "heat3dla_8_8_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<256> > in_cc_update_0_read_channel;
  HWStream<hw_uint<256> > heat3dla_8_8_update_0_write_channel;
  // In lanes = 8
  for (int r = 0; r < 48; r++) {
    for (int cl = 0; cl < 144 / 8; cl++) {
      hw_uint<256> packed;
      {
      int c = 8*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
      {
      int c = 8*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_cc_update_0_read_channel.write(pix.red);
        in_cc_update_0_read_channel.write(pix.green);
        in_cc_update_0_read_channel.write(pix.blue);
      } else {
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
        in_cc_update_0_read_channel.write(0);
      }
      }
    }
  }
  heat3dla_8_8_opt(in_cc_update_0_read_channel, heat3dla_8_8_update_0_write_channel);
  bitmap_image output(128, 32);
  for (int r = 0; r < 32; r++) {
    for (int cl = 0; cl < 128 / 8; cl++) {
      int c = 8*cl + 0;
      rgb_t pix;
      auto red = heat3dla_8_8_update_0_write_channel.read();
      auto g = heat3dla_8_8_update_0_write_channel.read();
      auto b = heat3dla_8_8_update_0_write_channel.read();
      pix.red = red;
      pix.green = g;
      pix.blue = b;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/heat3dla_8_8_opt_bmp_out.bmp");
}

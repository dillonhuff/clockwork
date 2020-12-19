#include <algorithm>
#include <fstream>
#include <vector>
#include "mp25_16_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<512> > in_update_0_read_channel;
  HWStream<hw_uint<256> > mp25_16_update_0_write_channel;
  // In lanes = 16
  for (int r = 0; r < 64; r++) {
    for (int cl = 0; cl < 128 / 16; cl++) {
      hw_uint<512> packed;
      {
      int c = 16*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 8;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 9;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 10;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 11;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 12;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 13;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 14;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
      {
      int c = 16*cl + 15;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        in_update_0_read_channel.write(pix.red);
        in_update_0_read_channel.write(pix.green);
        in_update_0_read_channel.write(pix.blue);
      } else {
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
        in_update_0_read_channel.write(0);
      }
      }
    }
  }
  mp25_16_opt(in_update_0_read_channel, mp25_16_update_0_write_channel);
  bitmap_image output(64, 64);
  for (int r = 0; r < 64; r++) {
    for (int cl = 0; cl < 64 / 8; cl++) {
      int c = 8*cl + 0;
      rgb_t pix;
      auto red = mp25_16_update_0_write_channel.read();
      auto g = mp25_16_update_0_write_channel.read();
      auto b = mp25_16_update_0_write_channel.read();
      pix.red = red;
      pix.green = g;
      pix.blue = b;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/mp25_16_opt_bmp_out.bmp");
}

#include <algorithm>
#include <fstream>
#include <vector>
#include "mp25_32_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<1024> > in_update_0_read_channel;
  HWStream<hw_uint<512> > mp25_32_update_0_write_channel;
  // In lanes = 32
  for (int r = 0; r < 64; r++) {
    for (int cl = 0; cl < 128 / 32; cl++) {
      hw_uint<1024> packed;
      {
      int c = 32*cl + 0;
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
      int c = 32*cl + 1;
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
      int c = 32*cl + 2;
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
      int c = 32*cl + 3;
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
      int c = 32*cl + 4;
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
      int c = 32*cl + 5;
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
      int c = 32*cl + 6;
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
      int c = 32*cl + 7;
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
      int c = 32*cl + 8;
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
      int c = 32*cl + 9;
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
      int c = 32*cl + 10;
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
      int c = 32*cl + 11;
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
      int c = 32*cl + 12;
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
      int c = 32*cl + 13;
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
      int c = 32*cl + 14;
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
      int c = 32*cl + 15;
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
      int c = 32*cl + 16;
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
      int c = 32*cl + 17;
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
      int c = 32*cl + 18;
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
      int c = 32*cl + 19;
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
      int c = 32*cl + 20;
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
      int c = 32*cl + 21;
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
      int c = 32*cl + 22;
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
      int c = 32*cl + 23;
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
      int c = 32*cl + 24;
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
      int c = 32*cl + 25;
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
      int c = 32*cl + 26;
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
      int c = 32*cl + 27;
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
      int c = 32*cl + 28;
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
      int c = 32*cl + 29;
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
      int c = 32*cl + 30;
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
      int c = 32*cl + 31;
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
  mp25_32_opt(in_update_0_read_channel, mp25_32_update_0_write_channel);
  bitmap_image output(64, 64);
  for (int r = 0; r < 64; r++) {
    for (int cl = 0; cl < 64 / 16; cl++) {
      int c = 16*cl + 0;
      rgb_t pix;
      auto red = mp25_32_update_0_write_channel.read();
      auto g = mp25_32_update_0_write_channel.read();
      auto b = mp25_32_update_0_write_channel.read();
      pix.red = red;
      pix.green = g;
      pix.blue = b;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/mp25_32_opt_bmp_out.bmp");
}

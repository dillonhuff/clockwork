#include <algorithm>
#include <fstream>
#include <vector>
#include "gp64x64_16_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<256> > in_update_0_read_channel;
  HWStream<hw_uint<16> > gp64x64_16_update_0_write_channel;
  // In lanes = 16
  for (int r = 0; r < 1039; r++) {
    for (int cl = 0; cl < 1088 / 16; cl++) {
      hw_uint<256> packed;
      {
      int c = 16*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 256, 16>(packed, val);
      } else {
        set_at<0, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<16, 256, 16>(packed, val);
      } else {
        set_at<16, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 256, 16>(packed, val);
      } else {
        set_at<32, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<48, 256, 16>(packed, val);
      } else {
        set_at<48, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 256, 16>(packed, val);
      } else {
        set_at<64, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<80, 256, 16>(packed, val);
      } else {
        set_at<80, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 256, 16>(packed, val);
      } else {
        set_at<96, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<112, 256, 16>(packed, val);
      } else {
        set_at<112, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 8;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<128, 256, 16>(packed, val);
      } else {
        set_at<128, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 9;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<144, 256, 16>(packed, val);
      } else {
        set_at<144, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 10;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<160, 256, 16>(packed, val);
      } else {
        set_at<160, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 11;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<176, 256, 16>(packed, val);
      } else {
        set_at<176, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 12;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<192, 256, 16>(packed, val);
      } else {
        set_at<192, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 13;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<208, 256, 16>(packed, val);
      } else {
        set_at<208, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 14;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<224, 256, 16>(packed, val);
      } else {
        set_at<224, 256, 16>(packed, 0);
      }
      }
      {
      int c = 16*cl + 15;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<240, 256, 16>(packed, val);
      } else {
        set_at<240, 256, 16>(packed, 0);
      }
      }
        in_update_0_read_channel.write(packed);
    }
  }
  gp64x64_16_opt(in_update_0_read_channel, gp64x64_16_update_0_write_channel);
  bitmap_image output(64, 64);
  for (int r = 0; r < 64; r++) {
    for (int cl = 0; cl < 64 / 1; cl++) {
      auto packed_val = gp64x64_16_update_0_write_channel.read();
      hw_uint<16> packed_val_lane_0;
      set_at<0, 16, 16>(packed_val_lane_0, packed_val.extract<0, 15>());
      {
      hw_uint<16> packed;
      int c = 1*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/gp64x64_16_opt_bmp_out.bmp");
}

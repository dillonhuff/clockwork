#include <algorithm>
#include <fstream>
#include <vector>
#include "gp64x64_32_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<512> > in_update_0_read_channel;
  HWStream<hw_uint<32> > gp64x64_32_update_0_write_channel;
  // In lanes = 32
  for (int r = 0; r < 1039; r++) {
    for (int cl = 0; cl < 1152 / 32; cl++) {
      hw_uint<512> packed;
      {
      int c = 32*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 512, 16>(packed, val);
      } else {
        set_at<0, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<16, 512, 16>(packed, val);
      } else {
        set_at<16, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 512, 16>(packed, val);
      } else {
        set_at<32, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<48, 512, 16>(packed, val);
      } else {
        set_at<48, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 512, 16>(packed, val);
      } else {
        set_at<64, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<80, 512, 16>(packed, val);
      } else {
        set_at<80, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 512, 16>(packed, val);
      } else {
        set_at<96, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<112, 512, 16>(packed, val);
      } else {
        set_at<112, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 8;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<128, 512, 16>(packed, val);
      } else {
        set_at<128, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 9;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<144, 512, 16>(packed, val);
      } else {
        set_at<144, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 10;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<160, 512, 16>(packed, val);
      } else {
        set_at<160, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 11;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<176, 512, 16>(packed, val);
      } else {
        set_at<176, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 12;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<192, 512, 16>(packed, val);
      } else {
        set_at<192, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 13;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<208, 512, 16>(packed, val);
      } else {
        set_at<208, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 14;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<224, 512, 16>(packed, val);
      } else {
        set_at<224, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 15;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<240, 512, 16>(packed, val);
      } else {
        set_at<240, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 16;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<256, 512, 16>(packed, val);
      } else {
        set_at<256, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 17;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<272, 512, 16>(packed, val);
      } else {
        set_at<272, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 18;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<288, 512, 16>(packed, val);
      } else {
        set_at<288, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 19;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<304, 512, 16>(packed, val);
      } else {
        set_at<304, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 20;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<320, 512, 16>(packed, val);
      } else {
        set_at<320, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 21;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<336, 512, 16>(packed, val);
      } else {
        set_at<336, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 22;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<352, 512, 16>(packed, val);
      } else {
        set_at<352, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 23;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<368, 512, 16>(packed, val);
      } else {
        set_at<368, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 24;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<384, 512, 16>(packed, val);
      } else {
        set_at<384, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 25;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<400, 512, 16>(packed, val);
      } else {
        set_at<400, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 26;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<416, 512, 16>(packed, val);
      } else {
        set_at<416, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 27;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<432, 512, 16>(packed, val);
      } else {
        set_at<432, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 28;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<448, 512, 16>(packed, val);
      } else {
        set_at<448, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 29;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<464, 512, 16>(packed, val);
      } else {
        set_at<464, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 30;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<480, 512, 16>(packed, val);
      } else {
        set_at<480, 512, 16>(packed, 0);
      }
      }
      {
      int c = 32*cl + 31;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<496, 512, 16>(packed, val);
      } else {
        set_at<496, 512, 16>(packed, 0);
      }
      }
        in_update_0_read_channel.write(packed);
    }
  }
  gp64x64_32_opt(in_update_0_read_channel, gp64x64_32_update_0_write_channel);
  bitmap_image output(64, 64);
  for (int r = 0; r < 64; r++) {
    for (int cl = 0; cl < 64 / 2; cl++) {
      auto packed_val = gp64x64_32_update_0_write_channel.read();
      hw_uint<16> packed_val_lane_0;
      set_at<0, 16, 16>(packed_val_lane_0, packed_val.extract<0, 15>());
      hw_uint<16> packed_val_lane_1;
      set_at<0, 16, 16>(packed_val_lane_1, packed_val.extract<16, 31>());
      {
      hw_uint<32> packed;
      int c = 2*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<32> packed;
      int c = 2*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/gp64x64_32_opt_bmp_out.bmp");
}

#include <algorithm>
#include <fstream>
#include <vector>
#include "bxy_noinit_ln_8_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<128> > input_update_0_read_channel;
  HWStream<hw_uint<128> > bxy_noinit_ln_8_update_0_write_channel;
  // In lanes = 8
  for (int r = 0; r < 1082; r++) {
    for (int cl = 0; cl < 1928 / 8; cl++) {
      hw_uint<128> packed;
      {
      int c = 8*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 128, 16>(packed, val);
      } else {
        set_at<0, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<16, 128, 16>(packed, val);
      } else {
        set_at<16, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 128, 16>(packed, val);
      } else {
        set_at<32, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<48, 128, 16>(packed, val);
      } else {
        set_at<48, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 128, 16>(packed, val);
      } else {
        set_at<64, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<80, 128, 16>(packed, val);
      } else {
        set_at<80, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 128, 16>(packed, val);
      } else {
        set_at<96, 128, 16>(packed, 0);
      }
      }
      {
      int c = 8*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<112, 128, 16>(packed, val);
      } else {
        set_at<112, 128, 16>(packed, 0);
      }
      }
        input_update_0_read_channel.write(packed);
    }
  }
  bxy_noinit_ln_8_opt(input_update_0_read_channel, bxy_noinit_ln_8_update_0_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 8; cl++) {
      auto packed_val = bxy_noinit_ln_8_update_0_write_channel.read();
      hw_uint<16> packed_val_lane_0 = packed_val.extract<0, 15>();
      hw_uint<16> packed_val_lane_1 = packed_val.extract<16, 31>();
      hw_uint<16> packed_val_lane_2 = packed_val.extract<32, 47>();
      hw_uint<16> packed_val_lane_3 = packed_val.extract<48, 63>();
      hw_uint<16> packed_val_lane_4 = packed_val.extract<64, 79>();
      hw_uint<16> packed_val_lane_5 = packed_val.extract<80, 95>();
      hw_uint<16> packed_val_lane_6 = packed_val.extract<96, 111>();
      hw_uint<16> packed_val_lane_7 = packed_val.extract<112, 127>();
      {
      hw_uint<128> packed;
      int c = 8*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 4;
      rgb_t pix;
      pix.red = packed_val_lane_4;
      pix.green = packed_val_lane_4;
      pix.blue = packed_val_lane_4;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 5;
      rgb_t pix;
      pix.red = packed_val_lane_5;
      pix.green = packed_val_lane_5;
      pix.blue = packed_val_lane_5;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 6;
      rgb_t pix;
      pix.red = packed_val_lane_6;
      pix.green = packed_val_lane_6;
      pix.blue = packed_val_lane_6;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 8*cl + 7;
      rgb_t pix;
      pix.red = packed_val_lane_7;
      pix.green = packed_val_lane_7;
      pix.blue = packed_val_lane_7;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/bxy_noinit_ln_8_opt_bmp_out.bmp");
}

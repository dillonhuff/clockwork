#include <algorithm>
#include <fstream>
#include <vector>
#include "h10_1_300MHz_12_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<384> > in_cc_update_0_read_channel;
  HWStream<hw_uint<384> > h10_1_300MHz_12_update_0_write_channel;
  // In lanes = 12
  for (int r = 0; r < 1044; r++) {
    for (int cl = 0; cl < 1272 / 12; cl++) {
      hw_uint<384> packed;
      {
      int c = 12*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 384, 32>(packed, val);
      } else {
        set_at<0, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 384, 32>(packed, val);
      } else {
        set_at<32, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 384, 32>(packed, val);
      } else {
        set_at<64, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 384, 32>(packed, val);
      } else {
        set_at<96, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<128, 384, 32>(packed, val);
      } else {
        set_at<128, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<160, 384, 32>(packed, val);
      } else {
        set_at<160, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<192, 384, 32>(packed, val);
      } else {
        set_at<192, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<224, 384, 32>(packed, val);
      } else {
        set_at<224, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 8;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<256, 384, 32>(packed, val);
      } else {
        set_at<256, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 9;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<288, 384, 32>(packed, val);
      } else {
        set_at<288, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 10;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<320, 384, 32>(packed, val);
      } else {
        set_at<320, 384, 32>(packed, 0);
      }
      }
      {
      int c = 12*cl + 11;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<352, 384, 32>(packed, val);
      } else {
        set_at<352, 384, 32>(packed, 0);
      }
      }
        in_cc_update_0_read_channel.write(packed);
    }
  }
  h10_1_300MHz_12_opt(in_cc_update_0_read_channel, h10_1_300MHz_12_update_0_write_channel);
  bitmap_image output(1032, 1024);
  for (int r = 0; r < 1024; r++) {
    for (int cl = 0; cl < 1032 / 12; cl++) {
      auto packed_val = h10_1_300MHz_12_update_0_write_channel.read();
      hw_uint<32> packed_val_lane_0 = packed_val.extract<0, 31>();
      hw_uint<32> packed_val_lane_1 = packed_val.extract<32, 63>();
      hw_uint<32> packed_val_lane_2 = packed_val.extract<64, 95>();
      hw_uint<32> packed_val_lane_3 = packed_val.extract<96, 127>();
      hw_uint<32> packed_val_lane_4 = packed_val.extract<128, 159>();
      hw_uint<32> packed_val_lane_5 = packed_val.extract<160, 191>();
      hw_uint<32> packed_val_lane_6 = packed_val.extract<192, 223>();
      hw_uint<32> packed_val_lane_7 = packed_val.extract<224, 255>();
      hw_uint<32> packed_val_lane_8 = packed_val.extract<256, 287>();
      hw_uint<32> packed_val_lane_9 = packed_val.extract<288, 319>();
      hw_uint<32> packed_val_lane_10 = packed_val.extract<320, 351>();
      hw_uint<32> packed_val_lane_11 = packed_val.extract<352, 383>();
      {
      hw_uint<384> packed;
      int c = 12*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 4;
      rgb_t pix;
      pix.red = packed_val_lane_4;
      pix.green = packed_val_lane_4;
      pix.blue = packed_val_lane_4;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 5;
      rgb_t pix;
      pix.red = packed_val_lane_5;
      pix.green = packed_val_lane_5;
      pix.blue = packed_val_lane_5;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 6;
      rgb_t pix;
      pix.red = packed_val_lane_6;
      pix.green = packed_val_lane_6;
      pix.blue = packed_val_lane_6;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 7;
      rgb_t pix;
      pix.red = packed_val_lane_7;
      pix.green = packed_val_lane_7;
      pix.blue = packed_val_lane_7;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 8;
      rgb_t pix;
      pix.red = packed_val_lane_8;
      pix.green = packed_val_lane_8;
      pix.blue = packed_val_lane_8;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 9;
      rgb_t pix;
      pix.red = packed_val_lane_9;
      pix.green = packed_val_lane_9;
      pix.blue = packed_val_lane_9;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 10;
      rgb_t pix;
      pix.red = packed_val_lane_10;
      pix.green = packed_val_lane_10;
      pix.blue = packed_val_lane_10;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<384> packed;
      int c = 12*cl + 11;
      rgb_t pix;
      pix.red = packed_val_lane_11;
      pix.green = packed_val_lane_11;
      pix.blue = packed_val_lane_11;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/h10_1_300MHz_12_opt_bmp_out.bmp");
}

#include <algorithm>
#include <fstream>
#include <vector>
#include "blur5_16_opt_d32.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<256> > input_1_merged255_read_channel;
  HWStream<hw_uint<256> > blur5_16_1_merged249_write_channel;
  // In lanes = 16
  for (int r = 0; r < 1082; r++) {
    for (int cl = 0; cl < 1936 / 16; cl++) {
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
        input_1_merged255_read_channel.write(packed);
    }
  }
  blur5_16_opt_d32(input_1_merged255_read_channel, blur5_16_1_merged249_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 16; cl++) {
      auto packed_val = blur5_16_1_merged249_write_channel.read();
      hw_uint<16> packed_val_lane_0 = packed_val.extract<0, 15>();
      hw_uint<16> packed_val_lane_1 = packed_val.extract<16, 31>();
      hw_uint<16> packed_val_lane_2 = packed_val.extract<32, 47>();
      hw_uint<16> packed_val_lane_3 = packed_val.extract<48, 63>();
      hw_uint<16> packed_val_lane_4 = packed_val.extract<64, 79>();
      hw_uint<16> packed_val_lane_5 = packed_val.extract<80, 95>();
      hw_uint<16> packed_val_lane_6 = packed_val.extract<96, 111>();
      hw_uint<16> packed_val_lane_7 = packed_val.extract<112, 127>();
      hw_uint<16> packed_val_lane_8 = packed_val.extract<128, 143>();
      hw_uint<16> packed_val_lane_9 = packed_val.extract<144, 159>();
      hw_uint<16> packed_val_lane_10 = packed_val.extract<160, 175>();
      hw_uint<16> packed_val_lane_11 = packed_val.extract<176, 191>();
      hw_uint<16> packed_val_lane_12 = packed_val.extract<192, 207>();
      hw_uint<16> packed_val_lane_13 = packed_val.extract<208, 223>();
      hw_uint<16> packed_val_lane_14 = packed_val.extract<224, 239>();
      hw_uint<16> packed_val_lane_15 = packed_val.extract<240, 255>();
      {
      hw_uint<256> packed;
      int c = 16*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 4;
      rgb_t pix;
      pix.red = packed_val_lane_4;
      pix.green = packed_val_lane_4;
      pix.blue = packed_val_lane_4;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 5;
      rgb_t pix;
      pix.red = packed_val_lane_5;
      pix.green = packed_val_lane_5;
      pix.blue = packed_val_lane_5;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 6;
      rgb_t pix;
      pix.red = packed_val_lane_6;
      pix.green = packed_val_lane_6;
      pix.blue = packed_val_lane_6;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 7;
      rgb_t pix;
      pix.red = packed_val_lane_7;
      pix.green = packed_val_lane_7;
      pix.blue = packed_val_lane_7;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 8;
      rgb_t pix;
      pix.red = packed_val_lane_8;
      pix.green = packed_val_lane_8;
      pix.blue = packed_val_lane_8;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 9;
      rgb_t pix;
      pix.red = packed_val_lane_9;
      pix.green = packed_val_lane_9;
      pix.blue = packed_val_lane_9;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 10;
      rgb_t pix;
      pix.red = packed_val_lane_10;
      pix.green = packed_val_lane_10;
      pix.blue = packed_val_lane_10;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 11;
      rgb_t pix;
      pix.red = packed_val_lane_11;
      pix.green = packed_val_lane_11;
      pix.blue = packed_val_lane_11;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 12;
      rgb_t pix;
      pix.red = packed_val_lane_12;
      pix.green = packed_val_lane_12;
      pix.blue = packed_val_lane_12;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 13;
      rgb_t pix;
      pix.red = packed_val_lane_13;
      pix.green = packed_val_lane_13;
      pix.blue = packed_val_lane_13;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 14;
      rgb_t pix;
      pix.red = packed_val_lane_14;
      pix.green = packed_val_lane_14;
      pix.blue = packed_val_lane_14;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 16*cl + 15;
      rgb_t pix;
      pix.red = packed_val_lane_15;
      pix.green = packed_val_lane_15;
      pix.blue = packed_val_lane_15;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/blur5_16_opt_d32_bmp_out.bmp");
}

#include <algorithm>
#include <fstream>
#include <vector>
#include "jac3_32_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<512> > in_1_merged1107_read_channel;
  HWStream<hw_uint<512> > jac3_32_1_merged1155_write_channel;
  // In lanes = 32
  for (int r = 0; r < 1095; r++) {
    for (int cl = 0; cl < 1568 / 32; cl++) {
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
        in_1_merged1107_read_channel.write(packed);
    }
  }
  jac3_32_opt(in_1_merged1107_read_channel, jac3_32_1_merged1155_write_channel);
  bitmap_image output(1088, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1088 / 32; cl++) {
      auto packed_val = jac3_32_1_merged1155_write_channel.read();
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
      hw_uint<16> packed_val_lane_16 = packed_val.extract<256, 271>();
      hw_uint<16> packed_val_lane_17 = packed_val.extract<272, 287>();
      hw_uint<16> packed_val_lane_18 = packed_val.extract<288, 303>();
      hw_uint<16> packed_val_lane_19 = packed_val.extract<304, 319>();
      hw_uint<16> packed_val_lane_20 = packed_val.extract<320, 335>();
      hw_uint<16> packed_val_lane_21 = packed_val.extract<336, 351>();
      hw_uint<16> packed_val_lane_22 = packed_val.extract<352, 367>();
      hw_uint<16> packed_val_lane_23 = packed_val.extract<368, 383>();
      hw_uint<16> packed_val_lane_24 = packed_val.extract<384, 399>();
      hw_uint<16> packed_val_lane_25 = packed_val.extract<400, 415>();
      hw_uint<16> packed_val_lane_26 = packed_val.extract<416, 431>();
      hw_uint<16> packed_val_lane_27 = packed_val.extract<432, 447>();
      hw_uint<16> packed_val_lane_28 = packed_val.extract<448, 463>();
      hw_uint<16> packed_val_lane_29 = packed_val.extract<464, 479>();
      hw_uint<16> packed_val_lane_30 = packed_val.extract<480, 495>();
      hw_uint<16> packed_val_lane_31 = packed_val.extract<496, 511>();
      {
      hw_uint<512> packed;
      int c = 32*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 4;
      rgb_t pix;
      pix.red = packed_val_lane_4;
      pix.green = packed_val_lane_4;
      pix.blue = packed_val_lane_4;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 5;
      rgb_t pix;
      pix.red = packed_val_lane_5;
      pix.green = packed_val_lane_5;
      pix.blue = packed_val_lane_5;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 6;
      rgb_t pix;
      pix.red = packed_val_lane_6;
      pix.green = packed_val_lane_6;
      pix.blue = packed_val_lane_6;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 7;
      rgb_t pix;
      pix.red = packed_val_lane_7;
      pix.green = packed_val_lane_7;
      pix.blue = packed_val_lane_7;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 8;
      rgb_t pix;
      pix.red = packed_val_lane_8;
      pix.green = packed_val_lane_8;
      pix.blue = packed_val_lane_8;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 9;
      rgb_t pix;
      pix.red = packed_val_lane_9;
      pix.green = packed_val_lane_9;
      pix.blue = packed_val_lane_9;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 10;
      rgb_t pix;
      pix.red = packed_val_lane_10;
      pix.green = packed_val_lane_10;
      pix.blue = packed_val_lane_10;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 11;
      rgb_t pix;
      pix.red = packed_val_lane_11;
      pix.green = packed_val_lane_11;
      pix.blue = packed_val_lane_11;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 12;
      rgb_t pix;
      pix.red = packed_val_lane_12;
      pix.green = packed_val_lane_12;
      pix.blue = packed_val_lane_12;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 13;
      rgb_t pix;
      pix.red = packed_val_lane_13;
      pix.green = packed_val_lane_13;
      pix.blue = packed_val_lane_13;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 14;
      rgb_t pix;
      pix.red = packed_val_lane_14;
      pix.green = packed_val_lane_14;
      pix.blue = packed_val_lane_14;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 15;
      rgb_t pix;
      pix.red = packed_val_lane_15;
      pix.green = packed_val_lane_15;
      pix.blue = packed_val_lane_15;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 16;
      rgb_t pix;
      pix.red = packed_val_lane_16;
      pix.green = packed_val_lane_16;
      pix.blue = packed_val_lane_16;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 17;
      rgb_t pix;
      pix.red = packed_val_lane_17;
      pix.green = packed_val_lane_17;
      pix.blue = packed_val_lane_17;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 18;
      rgb_t pix;
      pix.red = packed_val_lane_18;
      pix.green = packed_val_lane_18;
      pix.blue = packed_val_lane_18;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 19;
      rgb_t pix;
      pix.red = packed_val_lane_19;
      pix.green = packed_val_lane_19;
      pix.blue = packed_val_lane_19;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 20;
      rgb_t pix;
      pix.red = packed_val_lane_20;
      pix.green = packed_val_lane_20;
      pix.blue = packed_val_lane_20;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 21;
      rgb_t pix;
      pix.red = packed_val_lane_21;
      pix.green = packed_val_lane_21;
      pix.blue = packed_val_lane_21;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 22;
      rgb_t pix;
      pix.red = packed_val_lane_22;
      pix.green = packed_val_lane_22;
      pix.blue = packed_val_lane_22;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 23;
      rgb_t pix;
      pix.red = packed_val_lane_23;
      pix.green = packed_val_lane_23;
      pix.blue = packed_val_lane_23;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 24;
      rgb_t pix;
      pix.red = packed_val_lane_24;
      pix.green = packed_val_lane_24;
      pix.blue = packed_val_lane_24;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 25;
      rgb_t pix;
      pix.red = packed_val_lane_25;
      pix.green = packed_val_lane_25;
      pix.blue = packed_val_lane_25;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 26;
      rgb_t pix;
      pix.red = packed_val_lane_26;
      pix.green = packed_val_lane_26;
      pix.blue = packed_val_lane_26;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 27;
      rgb_t pix;
      pix.red = packed_val_lane_27;
      pix.green = packed_val_lane_27;
      pix.blue = packed_val_lane_27;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 28;
      rgb_t pix;
      pix.red = packed_val_lane_28;
      pix.green = packed_val_lane_28;
      pix.blue = packed_val_lane_28;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 29;
      rgb_t pix;
      pix.red = packed_val_lane_29;
      pix.green = packed_val_lane_29;
      pix.blue = packed_val_lane_29;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 30;
      rgb_t pix;
      pix.red = packed_val_lane_30;
      pix.green = packed_val_lane_30;
      pix.blue = packed_val_lane_30;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<512> packed;
      int c = 32*cl + 31;
      rgb_t pix;
      pix.red = packed_val_lane_31;
      pix.green = packed_val_lane_31;
      pix.blue = packed_val_lane_31;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/jac3_32_opt_bmp_out.bmp");
}

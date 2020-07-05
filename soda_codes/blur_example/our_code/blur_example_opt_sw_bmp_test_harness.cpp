#include <algorithm>
#include <fstream>
#include <vector>
#include "blur_example_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<2048> > in0_update_0_read_channel;
  HWStream<hw_uint<2048> > in1_update_0_read_channel;
  HWStream<hw_uint<2048> > blur_example_update_0_write_channel;
  // In lanes = 64
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 64; cl++) {
      hw_uint<2048> packed;
      {
      int c = 64*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 2048, 32>(packed, val);
      } else {
        set_at<0, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 2048, 32>(packed, val);
      } else {
        set_at<32, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 2048, 32>(packed, val);
      } else {
        set_at<64, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 2048, 32>(packed, val);
      } else {
        set_at<96, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<128, 2048, 32>(packed, val);
      } else {
        set_at<128, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<160, 2048, 32>(packed, val);
      } else {
        set_at<160, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<192, 2048, 32>(packed, val);
      } else {
        set_at<192, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<224, 2048, 32>(packed, val);
      } else {
        set_at<224, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 8;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<256, 2048, 32>(packed, val);
      } else {
        set_at<256, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 9;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<288, 2048, 32>(packed, val);
      } else {
        set_at<288, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 10;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<320, 2048, 32>(packed, val);
      } else {
        set_at<320, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 11;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<352, 2048, 32>(packed, val);
      } else {
        set_at<352, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 12;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<384, 2048, 32>(packed, val);
      } else {
        set_at<384, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 13;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<416, 2048, 32>(packed, val);
      } else {
        set_at<416, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 14;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<448, 2048, 32>(packed, val);
      } else {
        set_at<448, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 15;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<480, 2048, 32>(packed, val);
      } else {
        set_at<480, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 16;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<512, 2048, 32>(packed, val);
      } else {
        set_at<512, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 17;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<544, 2048, 32>(packed, val);
      } else {
        set_at<544, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 18;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<576, 2048, 32>(packed, val);
      } else {
        set_at<576, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 19;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<608, 2048, 32>(packed, val);
      } else {
        set_at<608, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 20;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<640, 2048, 32>(packed, val);
      } else {
        set_at<640, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 21;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<672, 2048, 32>(packed, val);
      } else {
        set_at<672, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 22;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<704, 2048, 32>(packed, val);
      } else {
        set_at<704, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 23;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<736, 2048, 32>(packed, val);
      } else {
        set_at<736, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 24;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<768, 2048, 32>(packed, val);
      } else {
        set_at<768, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 25;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<800, 2048, 32>(packed, val);
      } else {
        set_at<800, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 26;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<832, 2048, 32>(packed, val);
      } else {
        set_at<832, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 27;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<864, 2048, 32>(packed, val);
      } else {
        set_at<864, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 28;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<896, 2048, 32>(packed, val);
      } else {
        set_at<896, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 29;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<928, 2048, 32>(packed, val);
      } else {
        set_at<928, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 30;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<960, 2048, 32>(packed, val);
      } else {
        set_at<960, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 31;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<992, 2048, 32>(packed, val);
      } else {
        set_at<992, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 32;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1024, 2048, 32>(packed, val);
      } else {
        set_at<1024, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 33;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1056, 2048, 32>(packed, val);
      } else {
        set_at<1056, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 34;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1088, 2048, 32>(packed, val);
      } else {
        set_at<1088, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 35;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1120, 2048, 32>(packed, val);
      } else {
        set_at<1120, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 36;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1152, 2048, 32>(packed, val);
      } else {
        set_at<1152, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 37;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1184, 2048, 32>(packed, val);
      } else {
        set_at<1184, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 38;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1216, 2048, 32>(packed, val);
      } else {
        set_at<1216, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 39;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1248, 2048, 32>(packed, val);
      } else {
        set_at<1248, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 40;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1280, 2048, 32>(packed, val);
      } else {
        set_at<1280, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 41;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1312, 2048, 32>(packed, val);
      } else {
        set_at<1312, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 42;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1344, 2048, 32>(packed, val);
      } else {
        set_at<1344, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 43;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1376, 2048, 32>(packed, val);
      } else {
        set_at<1376, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 44;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1408, 2048, 32>(packed, val);
      } else {
        set_at<1408, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 45;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1440, 2048, 32>(packed, val);
      } else {
        set_at<1440, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 46;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1472, 2048, 32>(packed, val);
      } else {
        set_at<1472, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 47;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1504, 2048, 32>(packed, val);
      } else {
        set_at<1504, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 48;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1536, 2048, 32>(packed, val);
      } else {
        set_at<1536, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 49;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1568, 2048, 32>(packed, val);
      } else {
        set_at<1568, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 50;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1600, 2048, 32>(packed, val);
      } else {
        set_at<1600, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 51;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1632, 2048, 32>(packed, val);
      } else {
        set_at<1632, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 52;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1664, 2048, 32>(packed, val);
      } else {
        set_at<1664, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 53;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1696, 2048, 32>(packed, val);
      } else {
        set_at<1696, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 54;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1728, 2048, 32>(packed, val);
      } else {
        set_at<1728, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 55;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1760, 2048, 32>(packed, val);
      } else {
        set_at<1760, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 56;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1792, 2048, 32>(packed, val);
      } else {
        set_at<1792, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 57;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1824, 2048, 32>(packed, val);
      } else {
        set_at<1824, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 58;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1856, 2048, 32>(packed, val);
      } else {
        set_at<1856, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 59;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1888, 2048, 32>(packed, val);
      } else {
        set_at<1888, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 60;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1920, 2048, 32>(packed, val);
      } else {
        set_at<1920, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 61;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1952, 2048, 32>(packed, val);
      } else {
        set_at<1952, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 62;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<1984, 2048, 32>(packed, val);
      } else {
        set_at<1984, 2048, 32>(packed, 0);
      }
      }
      {
      int c = 64*cl + 63;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<2016, 2048, 32>(packed, val);
      } else {
        set_at<2016, 2048, 32>(packed, 0);
      }
      }
        in0_update_0_read_channel.write(packed);
    }
  }
  blur_example_opt(in0_update_0_read_channel, in1_update_0_read_channel, blur_example_update_0_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 64; cl++) {
      hw_uint<2048> packed;
      auto packed_val = blur_example_update_0_write_channel.read();
      hw_uint<32> packed_val_lane_0;
      set_at<0, 32, 32>(packed_val_lane_0, packed_val.extract<0, 31>());
      hw_uint<32> packed_val_lane_1;
      set_at<0, 32, 32>(packed_val_lane_1, packed_val.extract<32, 63>());
      hw_uint<32> packed_val_lane_2;
      set_at<0, 32, 32>(packed_val_lane_2, packed_val.extract<64, 95>());
      hw_uint<32> packed_val_lane_3;
      set_at<0, 32, 32>(packed_val_lane_3, packed_val.extract<96, 127>());
      hw_uint<32> packed_val_lane_4;
      set_at<0, 32, 32>(packed_val_lane_4, packed_val.extract<128, 159>());
      hw_uint<32> packed_val_lane_5;
      set_at<0, 32, 32>(packed_val_lane_5, packed_val.extract<160, 191>());
      hw_uint<32> packed_val_lane_6;
      set_at<0, 32, 32>(packed_val_lane_6, packed_val.extract<192, 223>());
      hw_uint<32> packed_val_lane_7;
      set_at<0, 32, 32>(packed_val_lane_7, packed_val.extract<224, 255>());
      hw_uint<32> packed_val_lane_8;
      set_at<0, 32, 32>(packed_val_lane_8, packed_val.extract<256, 287>());
      hw_uint<32> packed_val_lane_9;
      set_at<0, 32, 32>(packed_val_lane_9, packed_val.extract<288, 319>());
      hw_uint<32> packed_val_lane_10;
      set_at<0, 32, 32>(packed_val_lane_10, packed_val.extract<320, 351>());
      hw_uint<32> packed_val_lane_11;
      set_at<0, 32, 32>(packed_val_lane_11, packed_val.extract<352, 383>());
      hw_uint<32> packed_val_lane_12;
      set_at<0, 32, 32>(packed_val_lane_12, packed_val.extract<384, 415>());
      hw_uint<32> packed_val_lane_13;
      set_at<0, 32, 32>(packed_val_lane_13, packed_val.extract<416, 447>());
      hw_uint<32> packed_val_lane_14;
      set_at<0, 32, 32>(packed_val_lane_14, packed_val.extract<448, 479>());
      hw_uint<32> packed_val_lane_15;
      set_at<0, 32, 32>(packed_val_lane_15, packed_val.extract<480, 511>());
      hw_uint<32> packed_val_lane_16;
      set_at<0, 32, 32>(packed_val_lane_16, packed_val.extract<512, 543>());
      hw_uint<32> packed_val_lane_17;
      set_at<0, 32, 32>(packed_val_lane_17, packed_val.extract<544, 575>());
      hw_uint<32> packed_val_lane_18;
      set_at<0, 32, 32>(packed_val_lane_18, packed_val.extract<576, 607>());
      hw_uint<32> packed_val_lane_19;
      set_at<0, 32, 32>(packed_val_lane_19, packed_val.extract<608, 639>());
      hw_uint<32> packed_val_lane_20;
      set_at<0, 32, 32>(packed_val_lane_20, packed_val.extract<640, 671>());
      hw_uint<32> packed_val_lane_21;
      set_at<0, 32, 32>(packed_val_lane_21, packed_val.extract<672, 703>());
      hw_uint<32> packed_val_lane_22;
      set_at<0, 32, 32>(packed_val_lane_22, packed_val.extract<704, 735>());
      hw_uint<32> packed_val_lane_23;
      set_at<0, 32, 32>(packed_val_lane_23, packed_val.extract<736, 767>());
      hw_uint<32> packed_val_lane_24;
      set_at<0, 32, 32>(packed_val_lane_24, packed_val.extract<768, 799>());
      hw_uint<32> packed_val_lane_25;
      set_at<0, 32, 32>(packed_val_lane_25, packed_val.extract<800, 831>());
      hw_uint<32> packed_val_lane_26;
      set_at<0, 32, 32>(packed_val_lane_26, packed_val.extract<832, 863>());
      hw_uint<32> packed_val_lane_27;
      set_at<0, 32, 32>(packed_val_lane_27, packed_val.extract<864, 895>());
      hw_uint<32> packed_val_lane_28;
      set_at<0, 32, 32>(packed_val_lane_28, packed_val.extract<896, 927>());
      hw_uint<32> packed_val_lane_29;
      set_at<0, 32, 32>(packed_val_lane_29, packed_val.extract<928, 959>());
      hw_uint<32> packed_val_lane_30;
      set_at<0, 32, 32>(packed_val_lane_30, packed_val.extract<960, 991>());
      hw_uint<32> packed_val_lane_31;
      set_at<0, 32, 32>(packed_val_lane_31, packed_val.extract<992, 1023>());
      hw_uint<32> packed_val_lane_32;
      set_at<0, 32, 32>(packed_val_lane_32, packed_val.extract<1024, 1055>());
      hw_uint<32> packed_val_lane_33;
      set_at<0, 32, 32>(packed_val_lane_33, packed_val.extract<1056, 1087>());
      hw_uint<32> packed_val_lane_34;
      set_at<0, 32, 32>(packed_val_lane_34, packed_val.extract<1088, 1119>());
      hw_uint<32> packed_val_lane_35;
      set_at<0, 32, 32>(packed_val_lane_35, packed_val.extract<1120, 1151>());
      hw_uint<32> packed_val_lane_36;
      set_at<0, 32, 32>(packed_val_lane_36, packed_val.extract<1152, 1183>());
      hw_uint<32> packed_val_lane_37;
      set_at<0, 32, 32>(packed_val_lane_37, packed_val.extract<1184, 1215>());
      hw_uint<32> packed_val_lane_38;
      set_at<0, 32, 32>(packed_val_lane_38, packed_val.extract<1216, 1247>());
      hw_uint<32> packed_val_lane_39;
      set_at<0, 32, 32>(packed_val_lane_39, packed_val.extract<1248, 1279>());
      hw_uint<32> packed_val_lane_40;
      set_at<0, 32, 32>(packed_val_lane_40, packed_val.extract<1280, 1311>());
      hw_uint<32> packed_val_lane_41;
      set_at<0, 32, 32>(packed_val_lane_41, packed_val.extract<1312, 1343>());
      hw_uint<32> packed_val_lane_42;
      set_at<0, 32, 32>(packed_val_lane_42, packed_val.extract<1344, 1375>());
      hw_uint<32> packed_val_lane_43;
      set_at<0, 32, 32>(packed_val_lane_43, packed_val.extract<1376, 1407>());
      hw_uint<32> packed_val_lane_44;
      set_at<0, 32, 32>(packed_val_lane_44, packed_val.extract<1408, 1439>());
      hw_uint<32> packed_val_lane_45;
      set_at<0, 32, 32>(packed_val_lane_45, packed_val.extract<1440, 1471>());
      hw_uint<32> packed_val_lane_46;
      set_at<0, 32, 32>(packed_val_lane_46, packed_val.extract<1472, 1503>());
      hw_uint<32> packed_val_lane_47;
      set_at<0, 32, 32>(packed_val_lane_47, packed_val.extract<1504, 1535>());
      hw_uint<32> packed_val_lane_48;
      set_at<0, 32, 32>(packed_val_lane_48, packed_val.extract<1536, 1567>());
      hw_uint<32> packed_val_lane_49;
      set_at<0, 32, 32>(packed_val_lane_49, packed_val.extract<1568, 1599>());
      hw_uint<32> packed_val_lane_50;
      set_at<0, 32, 32>(packed_val_lane_50, packed_val.extract<1600, 1631>());
      hw_uint<32> packed_val_lane_51;
      set_at<0, 32, 32>(packed_val_lane_51, packed_val.extract<1632, 1663>());
      hw_uint<32> packed_val_lane_52;
      set_at<0, 32, 32>(packed_val_lane_52, packed_val.extract<1664, 1695>());
      hw_uint<32> packed_val_lane_53;
      set_at<0, 32, 32>(packed_val_lane_53, packed_val.extract<1696, 1727>());
      hw_uint<32> packed_val_lane_54;
      set_at<0, 32, 32>(packed_val_lane_54, packed_val.extract<1728, 1759>());
      hw_uint<32> packed_val_lane_55;
      set_at<0, 32, 32>(packed_val_lane_55, packed_val.extract<1760, 1791>());
      hw_uint<32> packed_val_lane_56;
      set_at<0, 32, 32>(packed_val_lane_56, packed_val.extract<1792, 1823>());
      hw_uint<32> packed_val_lane_57;
      set_at<0, 32, 32>(packed_val_lane_57, packed_val.extract<1824, 1855>());
      hw_uint<32> packed_val_lane_58;
      set_at<0, 32, 32>(packed_val_lane_58, packed_val.extract<1856, 1887>());
      hw_uint<32> packed_val_lane_59;
      set_at<0, 32, 32>(packed_val_lane_59, packed_val.extract<1888, 1919>());
      hw_uint<32> packed_val_lane_60;
      set_at<0, 32, 32>(packed_val_lane_60, packed_val.extract<1920, 1951>());
      hw_uint<32> packed_val_lane_61;
      set_at<0, 32, 32>(packed_val_lane_61, packed_val.extract<1952, 1983>());
      hw_uint<32> packed_val_lane_62;
      set_at<0, 32, 32>(packed_val_lane_62, packed_val.extract<1984, 2015>());
      hw_uint<32> packed_val_lane_63;
      set_at<0, 32, 32>(packed_val_lane_63, packed_val.extract<2016, 2047>());
      {
      int c = 64*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 4;
      rgb_t pix;
      pix.red = packed_val_lane_4;
      pix.green = packed_val_lane_4;
      pix.blue = packed_val_lane_4;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 5;
      rgb_t pix;
      pix.red = packed_val_lane_5;
      pix.green = packed_val_lane_5;
      pix.blue = packed_val_lane_5;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 6;
      rgb_t pix;
      pix.red = packed_val_lane_6;
      pix.green = packed_val_lane_6;
      pix.blue = packed_val_lane_6;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 7;
      rgb_t pix;
      pix.red = packed_val_lane_7;
      pix.green = packed_val_lane_7;
      pix.blue = packed_val_lane_7;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 8;
      rgb_t pix;
      pix.red = packed_val_lane_8;
      pix.green = packed_val_lane_8;
      pix.blue = packed_val_lane_8;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 9;
      rgb_t pix;
      pix.red = packed_val_lane_9;
      pix.green = packed_val_lane_9;
      pix.blue = packed_val_lane_9;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 10;
      rgb_t pix;
      pix.red = packed_val_lane_10;
      pix.green = packed_val_lane_10;
      pix.blue = packed_val_lane_10;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 11;
      rgb_t pix;
      pix.red = packed_val_lane_11;
      pix.green = packed_val_lane_11;
      pix.blue = packed_val_lane_11;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 12;
      rgb_t pix;
      pix.red = packed_val_lane_12;
      pix.green = packed_val_lane_12;
      pix.blue = packed_val_lane_12;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 13;
      rgb_t pix;
      pix.red = packed_val_lane_13;
      pix.green = packed_val_lane_13;
      pix.blue = packed_val_lane_13;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 14;
      rgb_t pix;
      pix.red = packed_val_lane_14;
      pix.green = packed_val_lane_14;
      pix.blue = packed_val_lane_14;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 15;
      rgb_t pix;
      pix.red = packed_val_lane_15;
      pix.green = packed_val_lane_15;
      pix.blue = packed_val_lane_15;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 16;
      rgb_t pix;
      pix.red = packed_val_lane_16;
      pix.green = packed_val_lane_16;
      pix.blue = packed_val_lane_16;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 17;
      rgb_t pix;
      pix.red = packed_val_lane_17;
      pix.green = packed_val_lane_17;
      pix.blue = packed_val_lane_17;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 18;
      rgb_t pix;
      pix.red = packed_val_lane_18;
      pix.green = packed_val_lane_18;
      pix.blue = packed_val_lane_18;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 19;
      rgb_t pix;
      pix.red = packed_val_lane_19;
      pix.green = packed_val_lane_19;
      pix.blue = packed_val_lane_19;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 20;
      rgb_t pix;
      pix.red = packed_val_lane_20;
      pix.green = packed_val_lane_20;
      pix.blue = packed_val_lane_20;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 21;
      rgb_t pix;
      pix.red = packed_val_lane_21;
      pix.green = packed_val_lane_21;
      pix.blue = packed_val_lane_21;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 22;
      rgb_t pix;
      pix.red = packed_val_lane_22;
      pix.green = packed_val_lane_22;
      pix.blue = packed_val_lane_22;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 23;
      rgb_t pix;
      pix.red = packed_val_lane_23;
      pix.green = packed_val_lane_23;
      pix.blue = packed_val_lane_23;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 24;
      rgb_t pix;
      pix.red = packed_val_lane_24;
      pix.green = packed_val_lane_24;
      pix.blue = packed_val_lane_24;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 25;
      rgb_t pix;
      pix.red = packed_val_lane_25;
      pix.green = packed_val_lane_25;
      pix.blue = packed_val_lane_25;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 26;
      rgb_t pix;
      pix.red = packed_val_lane_26;
      pix.green = packed_val_lane_26;
      pix.blue = packed_val_lane_26;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 27;
      rgb_t pix;
      pix.red = packed_val_lane_27;
      pix.green = packed_val_lane_27;
      pix.blue = packed_val_lane_27;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 28;
      rgb_t pix;
      pix.red = packed_val_lane_28;
      pix.green = packed_val_lane_28;
      pix.blue = packed_val_lane_28;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 29;
      rgb_t pix;
      pix.red = packed_val_lane_29;
      pix.green = packed_val_lane_29;
      pix.blue = packed_val_lane_29;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 30;
      rgb_t pix;
      pix.red = packed_val_lane_30;
      pix.green = packed_val_lane_30;
      pix.blue = packed_val_lane_30;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 31;
      rgb_t pix;
      pix.red = packed_val_lane_31;
      pix.green = packed_val_lane_31;
      pix.blue = packed_val_lane_31;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 32;
      rgb_t pix;
      pix.red = packed_val_lane_32;
      pix.green = packed_val_lane_32;
      pix.blue = packed_val_lane_32;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 33;
      rgb_t pix;
      pix.red = packed_val_lane_33;
      pix.green = packed_val_lane_33;
      pix.blue = packed_val_lane_33;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 34;
      rgb_t pix;
      pix.red = packed_val_lane_34;
      pix.green = packed_val_lane_34;
      pix.blue = packed_val_lane_34;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 35;
      rgb_t pix;
      pix.red = packed_val_lane_35;
      pix.green = packed_val_lane_35;
      pix.blue = packed_val_lane_35;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 36;
      rgb_t pix;
      pix.red = packed_val_lane_36;
      pix.green = packed_val_lane_36;
      pix.blue = packed_val_lane_36;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 37;
      rgb_t pix;
      pix.red = packed_val_lane_37;
      pix.green = packed_val_lane_37;
      pix.blue = packed_val_lane_37;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 38;
      rgb_t pix;
      pix.red = packed_val_lane_38;
      pix.green = packed_val_lane_38;
      pix.blue = packed_val_lane_38;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 39;
      rgb_t pix;
      pix.red = packed_val_lane_39;
      pix.green = packed_val_lane_39;
      pix.blue = packed_val_lane_39;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 40;
      rgb_t pix;
      pix.red = packed_val_lane_40;
      pix.green = packed_val_lane_40;
      pix.blue = packed_val_lane_40;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 41;
      rgb_t pix;
      pix.red = packed_val_lane_41;
      pix.green = packed_val_lane_41;
      pix.blue = packed_val_lane_41;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 42;
      rgb_t pix;
      pix.red = packed_val_lane_42;
      pix.green = packed_val_lane_42;
      pix.blue = packed_val_lane_42;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 43;
      rgb_t pix;
      pix.red = packed_val_lane_43;
      pix.green = packed_val_lane_43;
      pix.blue = packed_val_lane_43;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 44;
      rgb_t pix;
      pix.red = packed_val_lane_44;
      pix.green = packed_val_lane_44;
      pix.blue = packed_val_lane_44;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 45;
      rgb_t pix;
      pix.red = packed_val_lane_45;
      pix.green = packed_val_lane_45;
      pix.blue = packed_val_lane_45;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 46;
      rgb_t pix;
      pix.red = packed_val_lane_46;
      pix.green = packed_val_lane_46;
      pix.blue = packed_val_lane_46;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 47;
      rgb_t pix;
      pix.red = packed_val_lane_47;
      pix.green = packed_val_lane_47;
      pix.blue = packed_val_lane_47;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 48;
      rgb_t pix;
      pix.red = packed_val_lane_48;
      pix.green = packed_val_lane_48;
      pix.blue = packed_val_lane_48;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 49;
      rgb_t pix;
      pix.red = packed_val_lane_49;
      pix.green = packed_val_lane_49;
      pix.blue = packed_val_lane_49;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 50;
      rgb_t pix;
      pix.red = packed_val_lane_50;
      pix.green = packed_val_lane_50;
      pix.blue = packed_val_lane_50;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 51;
      rgb_t pix;
      pix.red = packed_val_lane_51;
      pix.green = packed_val_lane_51;
      pix.blue = packed_val_lane_51;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 52;
      rgb_t pix;
      pix.red = packed_val_lane_52;
      pix.green = packed_val_lane_52;
      pix.blue = packed_val_lane_52;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 53;
      rgb_t pix;
      pix.red = packed_val_lane_53;
      pix.green = packed_val_lane_53;
      pix.blue = packed_val_lane_53;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 54;
      rgb_t pix;
      pix.red = packed_val_lane_54;
      pix.green = packed_val_lane_54;
      pix.blue = packed_val_lane_54;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 55;
      rgb_t pix;
      pix.red = packed_val_lane_55;
      pix.green = packed_val_lane_55;
      pix.blue = packed_val_lane_55;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 56;
      rgb_t pix;
      pix.red = packed_val_lane_56;
      pix.green = packed_val_lane_56;
      pix.blue = packed_val_lane_56;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 57;
      rgb_t pix;
      pix.red = packed_val_lane_57;
      pix.green = packed_val_lane_57;
      pix.blue = packed_val_lane_57;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 58;
      rgb_t pix;
      pix.red = packed_val_lane_58;
      pix.green = packed_val_lane_58;
      pix.blue = packed_val_lane_58;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 59;
      rgb_t pix;
      pix.red = packed_val_lane_59;
      pix.green = packed_val_lane_59;
      pix.blue = packed_val_lane_59;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 60;
      rgb_t pix;
      pix.red = packed_val_lane_60;
      pix.green = packed_val_lane_60;
      pix.blue = packed_val_lane_60;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 61;
      rgb_t pix;
      pix.red = packed_val_lane_61;
      pix.green = packed_val_lane_61;
      pix.blue = packed_val_lane_61;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 62;
      rgb_t pix;
      pix.red = packed_val_lane_62;
      pix.green = packed_val_lane_62;
      pix.blue = packed_val_lane_62;
      output.set_pixel(c, r, pix);
    }
      {
      int c = 64*cl + 63;
      rgb_t pix;
      pix.red = packed_val_lane_63;
      pix.green = packed_val_lane_63;
      pix.blue = packed_val_lane_63;
      output.set_pixel(c, r, pix);
    }
  }
  }
  output.save_image("./images/blur_example_opt_bmp_out.bmp");
}

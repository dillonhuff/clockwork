#include <algorithm>
#include <fstream>
#include <vector>
#include "sobel_unrolled_8_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<256> > img_update_0_read_channel;
  HWStream<hw_uint<256> > sobel_unrolled_8_update_0_write_channel;
  // In lanes = 8
  for (int r = 0; r < 1082; r++) {
    for (int cl = 0; cl < 1936 / 8; cl++) {
      hw_uint<256> packed;
      {
      int c = 8*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 256, 32>(packed, val);
      } else {
        set_at<0, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 256, 32>(packed, val);
      } else {
        set_at<32, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 256, 32>(packed, val);
      } else {
        set_at<64, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 256, 32>(packed, val);
      } else {
        set_at<96, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 4;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<128, 256, 32>(packed, val);
      } else {
        set_at<128, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 5;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<160, 256, 32>(packed, val);
      } else {
        set_at<160, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 6;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<192, 256, 32>(packed, val);
      } else {
        set_at<192, 256, 32>(packed, 0);
      }
      }
      {
      int c = 8*cl + 7;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<224, 256, 32>(packed, val);
      } else {
        set_at<224, 256, 32>(packed, 0);
      }
      }
        img_update_0_read_channel.write(packed);
    }
  }
  sobel_unrolled_8_opt(img_update_0_read_channel, sobel_unrolled_8_update_0_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 8; cl++) {
      auto packed_val = sobel_unrolled_8_update_0_write_channel.read();
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
      {
      hw_uint<256> packed;
      int c = 8*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 4;
      rgb_t pix;
      pix.red = packed_val_lane_4;
      pix.green = packed_val_lane_4;
      pix.blue = packed_val_lane_4;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 5;
      rgb_t pix;
      pix.red = packed_val_lane_5;
      pix.green = packed_val_lane_5;
      pix.blue = packed_val_lane_5;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 6;
      rgb_t pix;
      pix.red = packed_val_lane_6;
      pix.green = packed_val_lane_6;
      pix.blue = packed_val_lane_6;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<256> packed;
      int c = 8*cl + 7;
      rgb_t pix;
      pix.red = packed_val_lane_7;
      pix.green = packed_val_lane_7;
      pix.blue = packed_val_lane_7;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/sobel_unrolled_8_opt_bmp_out.bmp");
}

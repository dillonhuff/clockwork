#include <algorithm>
#include <fstream>
#include <vector>
#include "h10_1_300MHz_4_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<128> > in_cc_update_0_read_channel;
  HWStream<hw_uint<128> > h10_1_300MHz_4_update_0_write_channel;
  // In lanes = 4
  for (int r = 0; r < 1044; r++) {
    for (int cl = 0; cl < 1104 / 4; cl++) {
      hw_uint<128> packed;
      {
      int c = 4*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 128, 32>(packed, val);
      } else {
        set_at<0, 128, 32>(packed, 0);
      }
      }
      {
      int c = 4*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 128, 32>(packed, val);
      } else {
        set_at<32, 128, 32>(packed, 0);
      }
      }
      {
      int c = 4*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<64, 128, 32>(packed, val);
      } else {
        set_at<64, 128, 32>(packed, 0);
      }
      }
      {
      int c = 4*cl + 3;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<96, 128, 32>(packed, val);
      } else {
        set_at<96, 128, 32>(packed, 0);
      }
      }
        in_cc_update_0_read_channel.write(packed);
    }
  }
  h10_1_300MHz_4_opt(in_cc_update_0_read_channel, h10_1_300MHz_4_update_0_write_channel);
  bitmap_image output(1024, 1024);
  for (int r = 0; r < 1024; r++) {
    for (int cl = 0; cl < 1024 / 4; cl++) {
      auto packed_val = h10_1_300MHz_4_update_0_write_channel.read();
      hw_uint<32> packed_val_lane_0 = packed_val.extract<0, 31>();
      hw_uint<32> packed_val_lane_1 = packed_val.extract<32, 63>();
      hw_uint<32> packed_val_lane_2 = packed_val.extract<64, 95>();
      hw_uint<32> packed_val_lane_3 = packed_val.extract<96, 127>();
      {
      hw_uint<128> packed;
      int c = 4*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 4*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 4*cl + 2;
      rgb_t pix;
      pix.red = packed_val_lane_2;
      pix.green = packed_val_lane_2;
      pix.blue = packed_val_lane_2;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<128> packed;
      int c = 4*cl + 3;
      rgb_t pix;
      pix.red = packed_val_lane_3;
      pix.green = packed_val_lane_3;
      pix.blue = packed_val_lane_3;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/h10_1_300MHz_4_opt_bmp_out.bmp");
}

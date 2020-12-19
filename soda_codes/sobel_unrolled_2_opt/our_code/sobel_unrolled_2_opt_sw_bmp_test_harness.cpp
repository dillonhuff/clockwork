#include <algorithm>
#include <fstream>
#include <vector>
#include "sobel_unrolled_2_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<64> > img_update_0_read_channel;
  HWStream<hw_uint<64> > sobel_unrolled_2_update_0_write_channel;
  // In lanes = 2
  for (int r = 0; r < 1082; r++) {
    for (int cl = 0; cl < 1924 / 2; cl++) {
      hw_uint<64> packed;
      {
      int c = 2*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 64, 32>(packed, val);
      } else {
        set_at<0, 64, 32>(packed, 0);
      }
      }
      {
      int c = 2*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<32, 64, 32>(packed, val);
      } else {
        set_at<32, 64, 32>(packed, 0);
      }
      }
        img_update_0_read_channel.write(packed);
    }
  }
  sobel_unrolled_2_opt(img_update_0_read_channel, sobel_unrolled_2_update_0_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 2; cl++) {
      auto packed_val = sobel_unrolled_2_update_0_write_channel.read();
      hw_uint<32> packed_val_lane_0;
      set_at<0, 32, 32>(packed_val_lane_0, packed_val.extract<0, 31>());
      hw_uint<32> packed_val_lane_1;
      set_at<0, 32, 32>(packed_val_lane_1, packed_val.extract<32, 63>());
      {
      hw_uint<64> packed;
      int c = 2*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
      {
      hw_uint<64> packed;
      int c = 2*cl + 1;
      rgb_t pix;
      pix.red = packed_val_lane_1;
      pix.green = packed_val_lane_1;
      pix.blue = packed_val_lane_1;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/sobel_unrolled_2_opt_bmp_out.bmp");
}

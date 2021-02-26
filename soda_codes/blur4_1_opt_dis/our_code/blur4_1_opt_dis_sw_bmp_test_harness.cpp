#include <algorithm>
#include <fstream>
#include <vector>
#include "blur4_1_opt_dis.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<16> > input_update_0_sm16_023_read_channel;
  HWStream<hw_uint<16> > blur4_1_update_0_sm18_033_write_channel;
  // In lanes = 1
  for (int r = 0; r < 1082; r++) {
    for (int cl = 0; cl < 1922 / 1; cl++) {
      hw_uint<16> packed;
      {
      int c = 1*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 16, 16>(packed, val);
      } else {
        set_at<0, 16, 16>(packed, 0);
      }
      }
        input_update_0_sm16_023_read_channel.write(packed);
    }
  }
  blur4_1_opt_dis(input_update_0_sm16_023_read_channel, blur4_1_update_0_sm18_033_write_channel);
  bitmap_image output(1920, 1080);
  for (int r = 0; r < 1080; r++) {
    for (int cl = 0; cl < 1920 / 1; cl++) {
      auto packed_val = blur4_1_update_0_sm18_033_write_channel.read();
      hw_uint<16> packed_val_lane_0 = packed_val.extract<0, 15>();
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
  output.save_image("./images/blur4_1_opt_dis_bmp_out.bmp");
}

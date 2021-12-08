#include <algorithm>
#include <fstream>
#include <vector>
#include "gp_fpga_cata_2_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<32> > in_update_0_read_channel;
  HWStream<hw_uint<16> > gp_fpga_cata_2_update_0_write_channel;
  // In lanes = 2
  for (int r = 0; r < 1087; r++) {
    for (int cl = 0; cl < 1930 / 2; cl++) {
      hw_uint<32> packed;
      {
      int c = 2*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 32, 16>(packed, val);
      } else {
        set_at<0, 32, 16>(packed, 0);
      }
      }
      {
      int c = 2*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<16, 32, 16>(packed, val);
      } else {
        set_at<16, 32, 16>(packed, 0);
      }
      }
        in_update_0_read_channel.write(packed);
    }
  }
  gp_fpga_cata_2_opt(in_update_0_read_channel, gp_fpga_cata_2_update_0_write_channel);
  bitmap_image output(240, 135);
  for (int r = 0; r < 135; r++) {
    for (int cl = 0; cl < 240 / 1; cl++) {
      auto packed_val = gp_fpga_cata_2_update_0_write_channel.read();
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
  output.save_image("./images/gp_fpga_cata_2_opt_bmp_out.bmp");
}

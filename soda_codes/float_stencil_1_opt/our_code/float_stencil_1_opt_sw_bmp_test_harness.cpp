#include <algorithm>
#include <fstream>
#include <vector>
#include "float_stencil_1_opt.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<32> > in_cc_update_0_read_channel;
  HWStream<hw_uint<32> > float_stencil_1_update_0_write_channel;
  // In lanes = 1
  for (int r = 0; r < 32; r++) {
    for (int cl = 0; cl < 32 / 1; cl++) {
      hw_uint<32> packed;
      {
      int c = 1*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        auto val = (pix.red + pix.green + pix.blue) / 3;
        set_at<0, 32, 32>(packed, val);
      } else {
        set_at<0, 32, 32>(packed, 0);
      }
      }
        in_cc_update_0_read_channel.write(packed);
    }
  }
  float_stencil_1_opt(in_cc_update_0_read_channel, float_stencil_1_update_0_write_channel);
  bitmap_image output(32, 32);
  for (int r = 0; r < 32; r++) {
    for (int cl = 0; cl < 32 / 1; cl++) {
      auto packed_val = float_stencil_1_update_0_write_channel.read();
      hw_uint<32> packed_val_lane_0 = packed_val.extract<0, 31>();
      {
      hw_uint<32> packed;
      int c = 1*cl + 0;
      rgb_t pix;
      pix.red = packed_val_lane_0;
      pix.green = packed_val_lane_0;
      pix.blue = packed_val_lane_0;
      output.set_pixel(c, r, pix);
      }
    }
  }
  output.save_image("./images/float_stencil_1_opt_bmp_out.bmp");
}

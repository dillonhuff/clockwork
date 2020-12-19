#include <algorithm>
#include <fstream>
#include <vector>
#include "upsample_2d.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<32> > ld0_read_channel;
  HWStream<hw_uint<32> > us1_write_channel;
  // In lanes = 1
  for (int r = 0; r < 10; r++) {
    for (int cl = 0; cl < 10 / 1; cl++) {
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
        ld0_read_channel.write(packed);
      }
    }
  }
  upsample_2d(ld0_read_channel, us1_write_channel);
  bitmap_image output(20, 20);
  for (int r = 0; r < 20; r++) {
    for (int cl = 0; cl < 20 / 1; cl++) {
      auto packed_val = us1_write_channel.read();
      hw_uint<32> packed_val_lane_0;
      set_at<0, 32, 32>(packed_val_lane_0, packed_val.extract<0, 31>());
      int c = 1*cl + 0;
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
  output.save_image("./images/upsample_2d_bmp_out.bmp");
}

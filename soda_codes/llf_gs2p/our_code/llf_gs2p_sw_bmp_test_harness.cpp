#include <algorithm>
#include <fstream>
#include <vector>
#include "llf_gs2p.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<64> > oc_load_gray_in_oc02_merged3969_read_channel;
  HWStream<hw_uint<64> > pw_math_gray_out_float506508_merged4050_write_channel;
  // In lanes = 2
  for (int r = 0; r < 2055; r++) {
    for (int cl = 0; cl < 2062 / 2; cl++) {
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
        oc_load_gray_in_oc02_merged3969_read_channel.write(packed);
    }
  }
  llf_gs2p(oc_load_gray_in_oc02_merged3969_read_channel, pw_math_gray_out_float506508_merged4050_write_channel);
  bitmap_image output(2048, 2048);
  for (int r = 0; r < 2048; r++) {
    for (int cl = 0; cl < 2048 / 2; cl++) {
      auto packed_val = pw_math_gray_out_float506508_merged4050_write_channel.read();
      hw_uint<32> packed_val_lane_0 = packed_val.extract<0, 31>();
      hw_uint<32> packed_val_lane_1 = packed_val.extract<32, 63>();
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
  output.save_image("./images/llf_gs2p_bmp_out.bmp");
}

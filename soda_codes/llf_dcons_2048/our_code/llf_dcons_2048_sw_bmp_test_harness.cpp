#include <algorithm>
#include <fstream>
#include <vector>
#include "llf_dcons_2048.h"
#include "bitmap_image.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
  bitmap_image input("./images/taxi_slice_256.bmp");
  HWStream<hw_uint<96> > oc_load_color_in_oc02_merged2591_read_channel;
  HWStream<hw_uint<96> > pw_math_color_out_float512514_merged2600_write_channel;
  // In lanes = 3
  for (int r = 0; r < 2055; r++) {
    for (int cl = 0; cl < 2055 / 3; cl++) {
      hw_uint<96> packed;
      {
      int c = 3*cl + 0;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.red);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.green);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.blue);
      } else {
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
      }
      }
      {
      int c = 3*cl + 1;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.red);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.green);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.blue);
      } else {
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
      }
      }
      {
      int c = 3*cl + 2;
      if (r < input.height() && c < input.width()) {
        rgb_t pix;
        input.get_pixel(c, r, pix);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.red);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.green);
        oc_load_color_in_oc02_merged2591_read_channel.write(pix.blue);
      } else {
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
        oc_load_color_in_oc02_merged2591_read_channel.write(0);
      }
      }
    }
  }
  llf_dcons_2048(oc_load_color_in_oc02_merged2591_read_channel, pw_math_color_out_float512514_merged2600_write_channel);
  bitmap_image output(2048, 2048);
  for (int r = 0; r < 2048; r++) {
    for (int cl = 0; cl < 2048 / 3; cl++) {
      int c = 3*cl + 0;
      rgb_t pix;
      auto red = pw_math_color_out_float512514_merged2600_write_channel.read();
      auto g = pw_math_color_out_float512514_merged2600_write_channel.read();
      auto b = pw_math_color_out_float512514_merged2600_write_channel.read();
      pix.red = red;
      pix.green = g;
      pix.blue = b;
      output.set_pixel(c, r, pix);
    }
  }
  output.save_image("./images/llf_dcons_2048_bmp_out.bmp");
}

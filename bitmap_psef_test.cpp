#include "bitmap_image.hpp"
#include <iostream>

#include "pyramid_synthetic_exposure_fusion_opt.h"

using namespace std;

int main() {

  HWStream<hw_uint<16> > in_update_0_read;
  HWStream<hw_uint<16> > pyramid_synthetic_exposure_fusion_update_0_write;

  bitmap_image image("./images/taxi_slice_128.bmp");
  for (int r = 0; r < 141; r++) {
    for (int c = 0; c < 141; c++) {
      if (r < image.height() &&
          c < image.width()) {
        rgb_t pix;
        image.get_pixel(c, r, pix);
        hw_uint<16> in_val((pix.red + pix.green + pix.blue) / 3);
        //cout << "Input = " << in_val << endl;
        in_update_0_read.write(in_val);
      } else {
        in_update_0_read.write(hw_uint<16>(0));
      }
    }
  }
  
  pyramid_synthetic_exposure_fusion_opt(in_update_0_read, pyramid_synthetic_exposure_fusion_update_0_write);

  bitmap_image res(128, 128);
  for (int r = 0; r < 128; r++) {
    for (int c = 0; c < 128; c++) {
      auto val = pyramid_synthetic_exposure_fusion_update_0_write.read();
      rgb_t pix;
      pix.red = val.to_int();
      pix.green = val.to_int();
      pix.blue = val.to_int();

      res.set_pixel(c, r, pix);
      //hw_uint<16> in_val(pix.red);
      //in_update_0_read.write(in_val);
      //in_update_0_read.write(hw_uint<16>(0));
    }
  }

  res.save_image("psef_res.bmp");
  ////int rows = 128;
  ////int cols = 128;

  //int size = 128;

  //int rows = size;
  //int cols = size;

  //int row_start = 500;
  //int col_start = 500;

  //bitmap_image smaller(cols, rows);
  //for (int r = row_start; r < row_start + rows; r++) {
    //for (int c = col_start; c < col_start + cols; c++) {
      ////cout << "r, c = " << r << ", " << c << endl;
      //rgb_t pix;
      //image.get_pixel(c, r, pix);
      ////cout << "setting pixels" << endl;
      //smaller.set_pixel(c - col_start, r - row_start, pix);
    //}
  //}

  //smaller.save_image("taxi_slice_" + to_string(size) + ".bmp");
  return 0;
}

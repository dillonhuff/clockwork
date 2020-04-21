#include "soda_mag_y_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "soda_mag_y_opt_kernel.h"
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 32
using namespace std;

// Out: mag_y dimensions...
  // { mag_y[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Min: { mag_y[0, 0] }
  // Max: { mag_y[31, 31] }
// In : off_chip_img dimensions...
  // { off_chip_img[i0, i1] : -1 <= i0 <= 32 and -1 <= i1 <= 32 }
  // Min: { off_chip_img[-1, -1] }
  // Max: { off_chip_img[32, 32] }
int main() {
  const int img_size = 1920*1080;
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  for (int i = 0; i < img_size; i++) {
    buf[i] = i;
  }
  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  mag_y_opt_kernel(blur_y, buf, img_size);
  ofstream soda_regression_out("regression_result_soda_mag_y_opt.txt");
  for (int i = 0; i < img_size; i++) {
    soda_regression_out<< (int) blur_y[i] << endl;
  }
  soda_regression_out.close();
  free(buf);
  free(blur_y);
}

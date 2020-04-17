#include "soda_blur_xy_unrolled_8_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "soda_blur_xy_unrolled_8_opt_kernel.h"
#include <fstream>

using namespace std;

// Out: blur_xy_unrolled_8 dimensions...
  // { blur_xy_unrolled_8[i0, i1] : 0 <= i1 <= 1079 and 0 <= floor((i0)/8) <= 239 }
  // Min: { blur_xy_unrolled_8[0, 0] }
  // Max: { blur_xy_unrolled_8[1919, 1079] }
// In : input_arg dimensions...
  // { input_arg[i0, i1] : 0 <= i1 <= 1081 and 0 <= floor((i0)/8) <= 240 }
  // Min: { input_arg[0, 0] }
  // Max: { input_arg[1927, 1081] }
int main() {
  const int img_size = 1920*1080;
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  for (int i = 0; i < img_size; i++) {
    buf[i] = i;
  }
  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  blur_xy_unrolled_8_opt_kernel(blur_y, buf, img_size);
  ofstream soda_regression_out("regression_result_soda_blur_xy_unrolled_8_opt.txt");
  for (int i = 0; i < img_size; i++) {
    soda_regression_out<< (int) blur_y[i] << endl;
  }
  soda_regression_out.close();
  free(buf);
  free(blur_y);
}

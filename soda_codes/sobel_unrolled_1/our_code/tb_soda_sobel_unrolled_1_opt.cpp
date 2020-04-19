#include "soda_sobel_unrolled_1_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "soda_sobel_unrolled_1_opt_kernel.h"
#include <fstream>

using namespace std;

// In : off_chip_img dimensions...
  // { off_chip_img[i0, i1] : -1 <= i0 <= 1920 and -1 <= i1 <= 1080 }
  // Min: { off_chip_img[-1, -1] }
  // Max: { off_chip_img[1920, 1080] }
// Out: sobel_unrolled_1 dimensions...
  // { sobel_unrolled_1[i0, i1] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Min: { sobel_unrolled_1[0, 0] }
  // Max: { sobel_unrolled_1[1919, 1079] }
int main() {
  const int img_size = 1920*1080;
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  for (int i = 0; i < img_size; i++) {
    buf[i] = i;
  }
  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  sobel_unrolled_1_opt_kernel(blur_y, buf, img_size);
  ofstream soda_regression_out("regression_result_soda_sobel_unrolled_1_opt.txt");
  for (int i = 0; i < img_size; i++) {
    soda_regression_out<< (int) blur_y[i] << endl;
  }
  soda_regression_out.close();
  free(buf);
  free(blur_y);
}

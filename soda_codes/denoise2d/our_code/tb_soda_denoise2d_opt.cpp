#include "soda_denoise2d_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "soda_denoise2d_opt_kernel.h"
#include <fstream>

using namespace std;

// Out: denoise2d dimensions...
  // { denoise2d[i0, i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // Min: { denoise2d[0, 0] }
  // Max: { denoise2d[29, 29] }
// In : f_off_chip dimensions...
  // { f_off_chip[i0, i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // Min: { f_off_chip[0, 0] }
  // Max: { f_off_chip[29, 29] }
// In : u_off_chip dimensions...
  // { u_off_chip[i0, i1] : -2 <= i0 <= 31 and -2 <= i1 <= 31 }
  // Min: { u_off_chip[-2, -2] }
  // Max: { u_off_chip[31, 31] }
int main() {
  const int img_size = 1920*1080;
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  for (int i = 0; i < img_size; i++) {
    buf[i] = i;
  }
  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  denoise2d_opt_kernel(blur_y, buf, img_size);
  ofstream soda_regression_out("regression_result_soda_denoise2d_opt.txt");
  for (int i = 0; i < img_size; i++) {
    soda_regression_out<< (int) blur_y[i] << endl;
  }
  soda_regression_out.close();
  free(buf);
  free(blur_y);
}

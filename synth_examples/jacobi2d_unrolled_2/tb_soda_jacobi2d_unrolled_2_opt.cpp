#include "soda_jacobi2d_unrolled_2_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "soda_jacobi2d_unrolled_2_opt_kernel.h"
#include <fstream>

using namespace std;

// Out: jacobi2d_unrolled_2 dimensions...
  // { jacobi2d_unrolled_2[i0, i1] : 0 <= i1 <= 15 and 0 <= floor((i0)/2) <= 7 }
  // Min: { jacobi2d_unrolled_2[0, 0] }
  // Max: { jacobi2d_unrolled_2[15, 15] }
// In : t1_arg dimensions...
  // { t1_arg[i0, i1] : -1 <= i1 <= 16 and -1 <= floor((i0)/2) <= 8 }
  // Min: { t1_arg[-2, -1] }
  // Max: { t1_arg[17, 16] }
int main() {
  const int img_size = 1920*1080;
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  for (int i = 0; i < img_size; i++) {
    buf[i] = i;
  }
  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  jacobi2d_unrolled_2_opt_kernel(blur_y, buf, img_size);
  ofstream soda_regression_out("regression_result_soda_jacobi2d_unrolled_2_opt.txt");
  for (int i = 0; i < img_size; i++) {
    soda_regression_out<< (int) blur_y[i] << endl;
  }
  soda_regression_out.close();
  free(buf);
  free(blur_y);
}

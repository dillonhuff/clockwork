#include "soda_two_input_denoise_pipeline_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "soda_two_input_denoise_pipeline_opt_kernel.h"
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 32
using namespace std;

// In : f_off_chip dimensions...
  // { f_off_chip[i0, i1] : -1 <= i0 <= 30 and -1 <= i1 <= 30 }
  // Min: { f_off_chip[-1, -1] }
  // Max: { f_off_chip[30, 30] }
// Out: two_input_denoise_pipeline dimensions...
  // { two_input_denoise_pipeline[i0, i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // Min: { two_input_denoise_pipeline[0, 0] }
  // Max: { two_input_denoise_pipeline[29, 29] }
// In : u_off_chip dimensions...
  // { u_off_chip[i0, i1] : -1 <= i0 <= 30 and -1 <= i1 <= 30 }
  // Min: { u_off_chip[-1, -1] }
  // Max: { u_off_chip[30, 30] }
int main() {
  const int img_size = 1920*1080;
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  for (int i = 0; i < img_size; i++) {
    buf[i] = i;
  }
  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  two_input_denoise_pipeline_opt_kernel(blur_y, buf, img_size);
  ofstream soda_regression_out("regression_result_soda_two_input_denoise_pipeline_opt.txt");
  for (int i = 0; i < img_size; i++) {
    soda_regression_out<< (int) blur_y[i] << endl;
  }
  soda_regression_out.close();
  free(buf);
  free(blur_y);
}

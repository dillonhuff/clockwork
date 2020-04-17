#include "soda_jacobi2d_unrolled_1_opt.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
//#include "soda_jacobi2d_unrolled_1_opt_kernel.h"
#include <fstream>

using namespace std;

int main() {

  cout << "starting" << endl;

  const int ncols = 1024;
  const int nrows = 1024;
  const int img_size = ncols*nrows;
  
  ap_uint<32>* buf =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);
  int v = 0;

  //HWStream<int> in;
  //HWStream<int> out;

  for (int i = 0; i < img_size; i++) {
    int v = i;
    buf[i] = i;
    //in.write(i);
  }

  ap_uint<32>* blur_y =
    (ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);

  //jacobi2d(in, out);
  jacobi2d_unrolled_1_opt_kernel(blur_y, buf, img_size);

  // Discard first two rows
  const int row_prefix = ncols*2;
  const int col_prefix = 1;

  int start = row_prefix + col_prefix;
  ofstream soda_jacobi2d_unrolled_1("regression_result_soda_jacobi2d_unrolled_1.txt");
  //for (int i = start; i < img_size; i++) {
  for (int i = 0; i < img_size; i++) {
    soda_jacobi2d_unrolled_1 << (int) blur_y[i] << endl;

    //if ((i - start) % ncols < 30) {
      //int soda_res_int = (int) blur_y[i];
      //auto our_res = out.read();
      //auto our_res_int = (int) our_res;
      //cout << "soda out(" << i - start << ") = " << soda_res_int << endl;
      //cout << "our  out(" << i - start << ") = " << our_res_int << endl;
      //assert(our_res_int == soda_res_int);
    //}
  }

  //cout << "Output is empty: " << out.is_empty() << endl;
  //assert(out.is_empty());

  cout << "Done" << endl;
  return 0;
}



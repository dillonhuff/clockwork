#include "soda_jacobi2d_2.h"
#include <cstdlib>
#include <cstring>
#include "hw_classes.h"
#include <iostream>
#include "ap_int.h"
#include "jacobi2d_2_kernel.h"
#include "jacobi2d_2.h"

using namespace std;

int main() {

  const int ncols = 32;
  const int nrows = 32;
  const int img_size = ncols*nrows;
  
  ap_uint<64> buf[img_size];
  int v = 0;

  HWStream<hw_uint<32> > in0, in1;
  HWStream<hw_uint<32> > out0, out1;

  //for (int i = 0; i < img_size; i++) {
  for (int i = 0; i < img_size; i+=2) {
    int v = i;
    int v1 = i + 1;
    buf[i](31, 0) = i;
    buf[i](63, 32) = i;
    in0.write(v);
    in1.write(v1);
  }

  ap_uint<64> blur_y[img_size];

  cout << "starting jacobi2d_2" << endl;
  jacobi2d_2(in0, in1, out0, out1);
  jacobi2d_2_kernel(blur_y, buf, img_size);

  // Discard first two rows
  const int row_prefix = ncols*2;
  const int col_prefix = 1;

  cout << "reading output" << endl;
  int start = row_prefix + col_prefix;
  for (int i = start; i < img_size; i++) {
    cout << "i = " << i << endl;
    if ((i - start) % ncols < 30) {
      int soda_res_int = (int) blur_y[i];
      hw_uint<32> our_res;
      if (i % 2 == 0) {
        our_res = out0.read();
      } else {
        our_res = out1.read();
      }
      auto our_res_int = (int) our_res;
      cout << "soda out(" << i - start << ") = " << soda_res_int << endl;
      cout << "our  out(" << i - start << ") = " << our_res_int << endl;
      //assert(our_res_int == soda_res_int);
    }
  }

  cout << "Output is empty: " << out0.is_empty() << endl;
  assert(out0.is_empty());

  cout << "Done" << endl;
  return 0;
}



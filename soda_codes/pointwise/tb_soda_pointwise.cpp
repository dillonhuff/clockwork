#include "soda_pointwise.h"
#include <cstdlib>
#include <cstring>

#include <iostream>
#include "ap_int.h"
#include "pointwise_kernel.h"
#include "pointwise.h"

using namespace std;

int main() {

  ap_uint<16> buf[32*8];
  int v = 0;

  HWStream<hw_uint<16 > > in;
  HWStream<hw_uint<16 > > out;

  for (int i = 0; i < 32; i++) {
    for (int j = 0; j < 8; j++) {
      buf[i*8 + j] = v;
      in.write(v);

      v++;
    }
  }

  ap_uint<16> blur_y[32*8];

  pointwise(in, out);
  pointwise_kernel(blur_y, buf, 32*8);

  for (int i = 0; i < 32; i++) {
    for (int j = 0; j < 8; j++) {
      auto soda_res = blur_y[i*8 + j];
      auto soda_res_int = (int) soda_res;
      auto our_res = out.read();
      auto our_res_int = (int) our_res;
      cout << "soda out(" << i << ", " << j << ") = " << soda_res << endl;
      cout << "our  out(" << i << ", " << j << ") = " << our_res_int << endl;
      assert(our_res_int == soda_res_int);
    }
  }

  cout << "Done" << endl;
  return 0;
}



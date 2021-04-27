#include "conv_vec.h"

#include <iostream>

using namespace std;

int main() {
  HWStream<hw_uint<32> > w0;
  for (int i = 0; i < 8; i++) {
    w0.write(i);
  }
  HWStream<hw_uint<32> > r0;
  conv_vec(w0, r0);

  for (int i = 0; i < 8; i++) {
    hw_uint<32> v = r0.read();
    cout << "read :" << v << endl;
    assert(v == i);
  }
  cout << "Finish conv vec test" << endl;
  return 0;
}

#include "shift_reg.h"

#include <iostream>

using namespace std;

int main() {
  InputStream<hw_uint<32> > w0;
  for (int i = 0; i < 10; i++) {
    w0.write(i);
  }
  OutputStream<hw_uint<32> > r0, r1, r2;
  shift_reg(r0, r1, r2, w0);

  for (int i = 0; i < 8; i++) {
    int v0 = r0.read();
    
    cout << "v0 = " << v0 << endl;
    int v1 = r1.read();

    cout << "v1 = " << v1 << endl;
    
    int v2 = r2.read();
    cout << "v2 = " << v2 << endl;
    
    assert(v2 == i + 2);
    assert(v1 == i + 1);
    assert(v0 == i + 0);
  }
  return 0;
}

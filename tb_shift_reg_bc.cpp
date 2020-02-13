#include "shift_reg_bc.h"

#include <iostream>

using namespace std;

int main() {
  InputStream<hw_uint<32> > w0;
  for (int i = 0; i < 10; i++) {
    w0.write(i);
  }
  OutputStream<hw_uint<32> > r0, r1, r2;
  shift_reg_bc(r0, r1, r2, w0);

  for (int i = 0; i < 10; i++) {
    int v0 = r0.read();
    
    cout << "v0 = " << v0 << endl;
    int v1 = r1.read();

    cout << "v1 = " << v1 << endl;
    
    int v2 = r2.read();
    cout << "v2 = " << v2 << endl;
    
    assert(v0 == min(i + 0, 9));
    assert(v1 == min(i + 1, 9));
    assert(v2 == min(i + 2, 9));
  }

  //assert(false);

  return 0;
}

#include "reduce.h"

#include <iostream>

using namespace std;

int main() {
  InputStream<hw_uint<32> > init;
  OutputStream<hw_uint<32> > out;
  OutputStream<hw_uint<32> > read0;
  InputStream<hw_uint<32> > update;

  for (int i = 0; i <= 4; i++) {
    init.write(0);
    int v = i;
    for (int j = 0; j <= 3; j++) {
      update.write(v + j);
    }
  }

  reduce(init, out, read0, update);

  for (int i = 0; i <= 4; i++) {
    for (int j = 0; j <= 3; j++) {
      int rv = read0.read();
      cout << "read0 = " << rv << endl;
    }
    int outv = out.read();
    cout << "outv = " << outv << endl;
    assert(outv == i + 3);
  }

  //assert(false);
  // Expecting outputs??
  return 0;
}

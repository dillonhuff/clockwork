#include "conv_1d_bc.h"

int main() {
  HWStream<int> in;
  HWStream<int> out;

  for (int i = 0; i < 10; i++) {
    in.write(i);
  }

  conv_1d_bc(in, out);

  for (int i = 0; i < 10; i++) {
    int v = out.read();
    cout << "v[" << i << "] = " << v << endl;
    assert(v == i + min(i + 1, 9) + min(i + 2, 9));
  }

}

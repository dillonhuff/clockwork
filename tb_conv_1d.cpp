#include "conv_1d.h"

int main() {
  HWStream<int> in;
  HWStream<int> out;

  for (int i = 0; i < 10; i++) {
    in.write(i);
  }

  conv_1d(in, out);

  for (int i = 0; i < 10 - 2; i++) {
    int v = out.read();
    cout << "v[" << i << "] = " << v << endl;
    int expected = i + (i + 1) + (i + 2);
    cout << "\texpected: " << expected << endl;
    assert(v == expected);
  }
}

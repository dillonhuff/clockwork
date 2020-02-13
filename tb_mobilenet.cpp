#include "mobilenet.h"

int main() {

  HWStream<hw_uint<32> > in, out, weights;
  for (int i = 0; i < 14*14*4; i++) {
    in.write(i);
    weights.write(i - 24);
  }
  mobilenet(in, weights, out);

  for (int j = 0; j < 12*12*4; j++) {
    cout << out.read() << endl;
  }

}

#include "mobilenet.h"

int main() {

  HWStream<int> in, out;
  for (int i = 0; i < 14*14*4; i++) {
    in.write(i);
  }
  mobilenet(in, out);

  for (int j = 0; j < 12*12*4; j++) {
    cout << out.read() << endl;
  }

}

#include "reduce.h"

#include <iostream>

using namespace std;

int main() {
  InputStream init;
  OutputStream out;
  OutputStream read0;
  InputStream update;

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
      read0.read();
    }
    int outv = out.read();
    cout << "outv = " << outv << endl;
    assert(outv == i + 3);
  }

  // Expecting outputs??
  return 0;
}

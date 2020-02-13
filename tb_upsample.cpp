#include "upsample.h"

#include <iostream>

using namespace std;

int main() {

  InputStream<hw_uint<32> > write0;
  OutputStream<hw_uint<32> > read0;

  for (int i = 0; i < 10; i++) {
    write0.write(i);
  }
  upsample(read0, write0);

  for (int i = 0; i < 10; i++) {
    assert(read0.read() == i);
    assert(read0.read() == i);
  }
  return 0;
}

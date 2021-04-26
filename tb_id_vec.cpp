#include "conv_0_agg.h"
#include "conv_0_tb.h"
#include "conv_sram.h"

#include <iostream>

using namespace std;

int main() {
  HWStream<hw_uint<32> > w0;
  for (int i = 0; i < 8; i++) {
    w0.write(i);
  }
  HWStream<hw_uint<128> > agg2sram;
  conv_0_agg(w0, agg2sram);
  HWStream<hw_uint<128> > sram2tb;
  conv_sram(agg2sram, sram2tb);
  HWStream<hw_uint<32> > r0;
  conv_0_tb(sram2tb, r0);

  for (int i = 0; i < 8; i++) {
    hw_uint<32> v = r0.read();
    cout << "read :" << v << endl;
    assert(v == i);
  }
  return 0;
}

#include "conv_0_agg.h"
#include "conv_0_tb.h"
#include "conv_sram.h"
#include "conv.h"

#include <iostream>

using namespace std;

int main() {
  HWStream<hw_uint<32> > w0, w_gold;
  for (int i = 0; i < 8; i++) {
    w0.write(i);
    w_gold.write(i);
  }
  HWStream<hw_uint<128> > agg2sram;
  conv_0_agg(agg2sram, w0);
  HWStream<hw_uint<128> > sram2tb;
  conv_sram(sram2tb, agg2sram);
  HWStream<hw_uint<32> > r0, r_gold;
  conv_0_tb(r0, sram2tb);

  conv(r_gold, w_gold);

  for (int i = 0; i < 8; i++) {
    hw_uint<32> v_gold = r_gold.read();
    hw_uint<32> v = r0.read();
    cout << "Origin mem read :" << v_gold << endl;
    cout << "Vectorized mem read :" << v << endl;
    assert(v == v_gold);
  }
  return 0;
}

#include "verilated.h"
#include "Vaffine_controller__U0.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num_reads = 0;
  int num_valids = 0;

  Vaffine_controller__U0 dut;
  dut.clk = 0;

  dut.eval();

  for (int t = 0; t < 200; t++) {
    cout << "@ " << t << ": " << (int) dut.valid << ", d0 = " << (int) dut.d_0 << ", d1 = " << (int) dut.d_1 << endl;

    if (dut.valid) {
      num_valids++;
      assert(dut.d_0 < 10);
      assert(dut.d_1 < 3);
    }

    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
    dut.clk = 0;
    dut.eval();

  }

  cout << "num valids = " << num_valids << endl;
  assert(num_valids == 10*3);
  //assert(false);
  cout << "done" << endl;
}

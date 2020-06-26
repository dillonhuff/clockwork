#include "verilated.h"
#include "Vaffine_controller.h"

#include <iostream>

using namespace std;

int main() {
  Vaffine_controller dut;
  dut.clk = 0;
  dut.rst_n = 0;

  dut.eval();

  dut.rst_n = 1;
  dut.eval();

  dut.rst_n = 0;
  dut.eval();

  dut.rst_n = 1;
  dut.eval();

  int valids = 0;

  for (int t = 0; t < 100; t++) {
    if (dut.valid) {
      valids++;
      cout << "t = " << t << ", time = " << (int) dut.addr_out << ", valids so far: " << valids << endl;
    } else {
      cout << "t = " << t << endl;
    }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
  cout << "Done" << endl;
}

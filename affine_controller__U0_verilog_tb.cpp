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


  assert(false);
  cout << "done" << endl;
}

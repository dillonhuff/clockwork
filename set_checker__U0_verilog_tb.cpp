#include "verilated.h"
#include "Vset_checker__U0.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num_reads = 0;
  int num_valids = 0;

  Vset_checker__U0 dut;

  dut.d_0 = 10;
  dut.d_1 = 0;
  dut.d_2 = 3;

  dut.eval();

  cout << "valid = " << (int) dut.valid << endl;
  assert(dut.valid == 1);

  dut.d_0 = 10;
  dut.d_1 = 8;
  dut.d_2 = 0;

  dut.eval();

  cout << "valid = " << (int) dut.valid << endl;
  assert(dut.valid == 0);

  dut.d_0 = 10;
  dut.d_1 = 234;
  dut.d_2 = 2;

  dut.eval();

  cout << "valid = " << (int) dut.valid << endl;
  assert(dut.valid == 1);
  //assert(false);
  cout << "done" << endl;
}

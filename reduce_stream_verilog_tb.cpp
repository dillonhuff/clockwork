#include "verilated.h"
#include "Vreduce_stream.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num_valids = 0;

  Vreduce_stream dut;
  dut.clk = 0;

  dut.eval();

  //vector<int> expected;
  //for (int i = 0; i < 10; i++) {
    //expected.push_back(i + 1);
  //}
  //vector<int> actual;

  for (int t = 0; t < 200; t++) {
    dut.in_ld_read_0 = t + 5;
    cout << "@ " << t;

    if (dut.out_st_write_en == 1) {
      cout << ": valid out = " << (int) dut.out_st_write_0;
      num_valids++;
      //actual.push_back((int) dut.out_st_write_0);
    }
    cout << endl;
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
    dut.clk = 0;
    dut.eval();

  }

  assert(num_valids == 7);
  //assert(actual.size() == 10);
  //assert(expected == actual);
  cout << "done" << endl;
}

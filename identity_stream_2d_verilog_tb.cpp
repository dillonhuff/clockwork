#include "verilated.h"
#include "Videntity_stream_2d.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num_reads = 0;
  int num_valids = 0;

  Videntity_stream_2d dut;
  dut.clk = 0;

  dut.eval();

  vector<int> input;
  for (int i = 0; i < 10*4; i++) {
    input.push_back(i + 1);
  }
  vector<int> expected;
  for (int i = 0; i < 10*4; i++) {
    expected.push_back(i + 1);
  }
  vector<int> actual;

  for (int t = 0; t < 400; t++) {
    if (num_reads < input.size()) {
      dut.in_ld_read_0 = input.at(num_reads);
    }
    //dut.in_ld_read_0 = t + 1;
    if (dut.in_ld_read_valid == 1) {
      cout << "@ " << t << ":";
      cout << "valid in = " << (int) dut.in_ld_read_0 << ", sending " << (int) dut.in_ld_read_0 << " to accelerator" << endl;
      num_reads++;
    }

    if (dut.out_st_write_en == 1) {
      num_valids++;
      cout << "@ " << t << ":";
      cout << "valid out = " << (int) dut.out_st_write_0 << endl;
      actual.push_back((int) dut.out_st_write_0);
    }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
    dut.clk = 0;
    dut.eval();

  }

  assert(num_reads == 4*10);
  assert(num_valids == 4*10);
  assert(actual.size() == 4*10);
  assert(expected == actual);
  cout << "done" << endl;
}

#include "verilated.h"
#include "Vlake_tile_Tile.h"

#include <iostream>

using namespace std;

int main() {
  Vlake_tile_Tile dut;
  dut.clk = 0;

  dut.rst_n = 0;
  dut.eval();

  dut.rst_n = 1;
  dut.eval();

  //dut.rst_n = 0;
  //dut.eval();

  dut.clk = 0;
  dut.eval();

  dut.flush = 1;
  dut.clk = 1;
  dut.eval();

  dut.flush = 0;
  dut.clk = 0;
  dut.eval();

  cout << "Starting" << endl;

  for (int t = 0; t < 300; t++) {
    dut.clk = 0;
    dut.eval();

    dut.clk = 1;
    dut.eval();
  }

  cout << "Done with setup" << endl;

  return 0;
}

#include "verilated.h"
#include "Vlake_delay_tile.h"

#include <iostream>

using namespace std;

int main() {
  Vlake_delay_tile dut;
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

  dut.data_in = 294;
  //dut.strg_ub_sram_read_addr_gen_starting_addr = 0;

  //input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr,
  //input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides,
  //input logic [3:0] strg_ub_sram_read_loops_dimensionality,
  //input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges,
  //input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr,
  //input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides,
  //input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr,
  //input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides,
  //input logic [3:0] strg_ub_sram_write_loops_dimensionality,
  //input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges,
  //input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr,
  //input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides,
  cout << "Starting" << endl;

  for (int t = 0; t < 100; t++) {
    dut.data_in = t;
    cout << "@" << t << ": " << dut.data_out << endl;
    if (t >= 17) {
      assert(dut.data_out == t - 17);
    }
    dut.clk = 0;
    dut.eval();

    dut.clk = 1;
    dut.eval();
  }

  //assert(dut.data_out == 294);

  cout << "Done with setup" << endl;

  return 0;
}

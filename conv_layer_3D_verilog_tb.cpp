#include "verilated.h"
#include "Vconv_layer_3D.h"

#include <iostream>

using namespace std;

int main() {
  int num_valids = 0;

  Vconv_layer_3D dut;
  dut.clk = 0;
  //dut.reset = 0;
  dut.input_copy_stencil_hcompute_hw_input_stencil_read_0 = 90;
  dut.weight_copy_stencil_hcompute_hw_weight_stencil_read_0 = 3;

  dut.eval();

  for (int t = 0; t < 400; t++) {
    cout << "t = " << t << ", valid = " << (int) dut.hw_output_stencil_hcompute_hw_output_stencil_write_en << endl;
    cout << "t = " << t << ", value = " << (int) dut.hw_output_stencil_hcompute_hw_output_stencil_write_0 << endl << endl;

    dut.input_copy_stencil_hcompute_hw_input_stencil_read_0++;
    dut.weight_copy_stencil_hcompute_hw_weight_stencil_read_0++;

    if (dut.hw_output_stencil_hcompute_hw_output_stencil_write_en == 1) {
      num_valids++;
    }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
    dut.clk = 0;
    dut.eval();

  }

  assert(num_valids == 20);
  cout << "done" << endl;
}

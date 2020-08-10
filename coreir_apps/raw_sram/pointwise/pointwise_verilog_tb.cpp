#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vpointwise.h"

int main() {
  ofstream fout("cycle_accurate_regression_result_pointwise.csv");
  HWStream<hw_uint<16 > > input_copy_stencil;
  HWStream<hw_uint<16 > > hw_output_stencil;


  // Loading input data
  // cmap    : { op_hcompute_hw_input_stencil[root = 0, pad_root_to_hw_input_s0_y = 0, hw_input_s0_y, hw_input_s0_x] -> input_copy_stencil[hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
  // read map: { input_copy_stencil[i0, i1] -> op_hcompute_hw_input_stencil[root = 0, pad_root_to_hw_input_s0_y = 0, hw_input_s0_y = i1, hw_input_s0_x = i0] : 0 <= i0 <= 63 and 0 <= i1 <= 63 }
  // rng     : { op_hcompute_hw_input_stencil[root = 0, pad_root_to_hw_input_s0_y = 0, hw_input_s0_y, hw_input_s0_x] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
  // rng card: { 4096 }
  for (int i = 0; i < 4096; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, 1*i + 0);
    input_copy_stencil.write(value);
  }

  Vpointwise dut;
  dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_0 = 13;
  int hw_output_stencil_op_hcompute_hw_output_stencil_write_en_count = 0;
  dut.clk = 0;
  dut.eval();
  for (int t = 0; t < 30000; t++) {
  dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_0 = t;
    fout << t << "," << "input_copy_stencil_op_hcompute_hw_input_stencil_read_valid" << "," << (int) dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_valid << endl;
    fout << t << "," << "dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_0" << "," << (int) dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_0 << endl;
    if (dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_valid) {
      cout << "send me data!" << endl;
      dut.input_copy_stencil_op_hcompute_hw_input_stencil_read_0 = (int) input_copy_stencil.read();
    }
    fout << t << "," << "hw_output_stencil_op_hcompute_hw_output_stencil_write_en" << "," << (int) dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_en << endl;
    fout << t << "," << "dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_0" << "," << (int) dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_0 << endl;
  hw_output_stencil_op_hcompute_hw_output_stencil_write_en_count += dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_en;
  if (dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_en) {
    cout << (int) dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_0 << endl;
  }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
    cout << hw_output_stencil_op_hcompute_hw_output_stencil_write_en_count << endl;
  assert(input_copy_stencil.is_empty());
  return 0;
}

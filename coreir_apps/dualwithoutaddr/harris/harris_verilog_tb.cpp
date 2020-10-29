#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vharris.h"

int main() {
  ofstream fout("regression_result_harris_verilog.txt");
  HWStream<hw_uint<16 > > padded16_stencil;
  HWStream<hw_uint<16 > > hw_output_stencil;


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> padded16_stencil[-3 + padded16_global_wrapper_s0_y, -3 + padded16_global_wrapper_s0_x] : 0 <= padded16_global_wrapper_s0_y <= 63 and 0 <= padded16_global_wrapper_s0_x <= 63 }
  // read map: { padded16_stencil[i0, i1] -> op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y = 3 + i0, padded16_global_wrapper_s0_x = 3 + i1] : -3 <= i0 <= 60 and -3 <= i1 <= 60 }
  // rng     : { op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] : 0 <= padded16_global_wrapper_s0_y <= 63 and 0 <= padded16_global_wrapper_s0_x <= 63 }
  // rng card: { 4096 }
  for (int i = 0; i < 4096; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    padded16_stencil.write(value);
  }

  Vharris dut;
dut.clk = 0;
dut.eval();
dut.rst_n = 0;
dut.eval();
dut.rst_n = 1;
dut.eval();
dut.clk = 0;
dut.eval();
dut.flush = 1;
dut.clk = 1;
dut.eval();
dut.flush = 0;
dut.clk = 0;
dut.eval();
  *(dut.padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read) = 0;
  int hw_output_stencil_op_hcompute_hw_output_stencil_write_en_count = 0;
  dut.clk = 0;
  dut.eval();
  for (int t = 0; t < 30000; t++) {
    cout << "t = " << t << endl;
    if (dut.padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid) {
      cout << "send me data!" << endl;
      *(dut.padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read) = (int) padded16_stencil.read();
    }
  hw_output_stencil_op_hcompute_hw_output_stencil_write_en_count += dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_en;
  if (dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_en) {
    cout << (int) *(dut.hw_output_stencil_op_hcompute_hw_output_stencil_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_op_hcompute_hw_output_stencil_write));
    hw_output_stencil.write(val);
  }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
    cout << hw_output_stencil_op_hcompute_hw_output_stencil_write_en_count << endl;
  cout << "# of elements waiting in: padded16_stencil = " << padded16_stencil.num_waiting() << endl;
  assert(padded16_stencil.is_empty());
  for (int i = 0; i < 3364; i++) {
    auto actual = hw_output_stencil.read();
    hw_uint<16> actual_lane_0;
    set_at<0, 16, 16>(actual_lane_0, actual.extract<0, 15>());
    fout << actual_lane_0 << endl;
  }

  return 0;
}

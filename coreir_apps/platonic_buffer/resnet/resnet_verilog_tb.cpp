#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vresnet.h"

int main() {
  ofstream fout("regression_result_resnet_verilog.txt");
  HWStream<hw_uint<16 > > hw_input_stencil;
  HWStream<hw_uint<16 > > hw_kernel_stencil;
  HWStream<hw_uint<16 > > hw_output_stencil;


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7 }
  // read map: { hw_input_stencil[i0, i1, i2] -> op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1, hw_input_global_wrapper_s0_z = i2] : 0 <= i0 <= 29 and 0 <= i1 <= 29 and 0 <= i2 <= 7 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7 }
  // rng card: { 7200 }
  for (int i = 0; i < 7200; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil.write(value);
  }

  // cmap    : { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> hw_kernel_stencil[hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
  // read map: { hw_kernel_stencil[i0, i1, i2, i3] -> op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y = i0, hw_kernel_global_wrapper_s0_x = i1, hw_kernel_global_wrapper_s0_w = i2, hw_kernel_global_wrapper_s0_z = i3] : 0 <= i0 <= 2 and 0 <= i1 <= 2 and 0 <= i2 <= 2 and 0 <= i3 <= 7 }
  // rng     : { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
  // rng card: { 216 }
  for (int i = 0; i < 216; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_kernel_stencil.write(value);
  }

  Vresnet dut;
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
  *(dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read) = 0;
  *(dut.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read) = 0;
  int hw_output_stencil_op_hcompute_hw_output_stencil_write_valid_count = 0;
  dut.clk = 0;
  dut.eval();
  for (int t = 0; t < (int) pow(2, 16); t++) {
    cout << "t = " << t << endl;
    if (dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read) = (int) hw_input_stencil.read();
    }
    if (dut.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read) = (int) hw_kernel_stencil.read();
    }
  hw_output_stencil_op_hcompute_hw_output_stencil_write_valid_count += dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid;
  if (dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_op_hcompute_hw_output_stencil_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_op_hcompute_hw_output_stencil_write));
    hw_output_stencil.write(val);
  }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
    cout << hw_output_stencil_op_hcompute_hw_output_stencil_write_valid_count << endl;
  cout << "# of elements waiting in: hw_input_stencil = " << hw_input_stencil.num_waiting() << endl;
  assert(hw_input_stencil.is_empty());
  cout << "# of elements waiting in: hw_kernel_stencil = " << hw_kernel_stencil.num_waiting() << endl;
  assert(hw_kernel_stencil.is_empty());
  for (int i = 0; i < 2352; i++) {
    auto actual = hw_output_stencil.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}

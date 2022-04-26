#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vresnet88.h"

int main() {
  ofstream fout("regression_result_resnet88_verilog.txt");
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_0;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_1;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_2;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_3;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_4;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_5;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_6;
  HWStream<hw_uint<16 > > hw_input_stencil_clkwrk_7;
  HWStream<hw_uint<16 > > hw_kernel_stencil;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_10;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_11;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_12;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_13;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_14;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_15;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_8;
  HWStream<hw_uint<16 > > hw_output_stencil_clkwrk_9;


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_0[i0, i1, 4] -> op_hcompute_hw_input_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_0.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 5] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_1[i0, i1, 5] -> op_hcompute_hw_input_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_1.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_2[i0, i1, 6] -> op_hcompute_hw_input_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_2.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 1] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_3[i0, i1, 1] -> op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_3.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 3] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_4[i0, i1, 3] -> op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_4.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 2] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_5[i0, i1, 2] -> op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_5.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_6[i0, i1, 0] -> op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_6.write(value);
  }

  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 7] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // read map: { hw_input_stencil_clkwrk_7[i0, i1, 7] -> op_hcompute_hw_input_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 29 and 0 <= i1 <= 29 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  // rng card: { 900 }
  for (int i = 0; i < 900; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil_clkwrk_7.write(value);
  }

  // cmap    : { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> hw_kernel_stencil[hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 7 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
  // read map: { hw_kernel_stencil[i0, i1, i2, i3] -> op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y = i0, hw_kernel_global_wrapper_s0_x = i1, hw_kernel_global_wrapper_s0_w = i2, hw_kernel_global_wrapper_s0_z = i3] : 0 <= i0 <= 2 and 0 <= i1 <= 2 and 0 <= i2 <= 7 and 0 <= i3 <= 7 }
  // rng     : { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 7 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
  // rng card: { 576 }
  for (int i = 0; i < 576; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_kernel_stencil.write(value);
  }

  Vresnet88 dut;
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
  *(dut.hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read) = 0;
  *(dut.hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read) = 0;
  *(dut.hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read) = 0;
  *(dut.hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read) = 0;
  *(dut.hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read) = 0;
  *(dut.hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read) = 0;
  *(dut.hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read) = 0;
  *(dut.hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read) = 0;
  *(dut.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read) = 0;
  int hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid_count = 0;
  int hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid_count = 0;
  int hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid_count = 0;
  int hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid_count = 0;
  int hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid_count = 0;
  int hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid_count = 0;
  int hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid_count = 0;
  int hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid_count = 0;
  dut.clk = 0;
  dut.eval();
  for (int t = 0; t < (int) pow(2, 16); t++) {
    cout << "t = " << t << endl;
    if (dut.hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read) = (int) hw_input_stencil_clkwrk_0.read();
    }
    if (dut.hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read) = (int) hw_input_stencil_clkwrk_1.read();
    }
    if (dut.hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read) = (int) hw_input_stencil_clkwrk_2.read();
    }
    if (dut.hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read) = (int) hw_input_stencil_clkwrk_3.read();
    }
    if (dut.hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read) = (int) hw_input_stencil_clkwrk_4.read();
    }
    if (dut.hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read) = (int) hw_input_stencil_clkwrk_5.read();
    }
    if (dut.hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read) = (int) hw_input_stencil_clkwrk_6.read();
    }
    if (dut.hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read) = (int) hw_input_stencil_clkwrk_7.read();
    }
    if (dut.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read) = (int) hw_kernel_stencil.read();
    }
  hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid_count += dut.hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid;
  if (dut.hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write));
    hw_output_stencil_clkwrk_10.write(val);
  }
  hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid_count += dut.hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid;
  if (dut.hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write));
    hw_output_stencil_clkwrk_11.write(val);
  }
  hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid_count += dut.hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid;
  if (dut.hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write));
    hw_output_stencil_clkwrk_12.write(val);
  }
  hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid_count += dut.hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid;
  if (dut.hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write));
    hw_output_stencil_clkwrk_13.write(val);
  }
  hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid_count += dut.hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid;
  if (dut.hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write));
    hw_output_stencil_clkwrk_14.write(val);
  }
  hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid_count += dut.hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid;
  if (dut.hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write));
    hw_output_stencil_clkwrk_15.write(val);
  }
  hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid_count += dut.hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid;
  if (dut.hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write));
    hw_output_stencil_clkwrk_8.write(val);
  }
  hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid_count += dut.hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid;
  if (dut.hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid) {
    cout << "Got data: " << (int) *(dut.hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write) << endl;
    hw_uint<16> val((int) *(dut.hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write));
    hw_output_stencil_clkwrk_9.write(val);
  }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
    cout << hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid_count << endl;
    cout << hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid_count << endl;
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_0 = " << hw_input_stencil_clkwrk_0.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_0.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_1 = " << hw_input_stencil_clkwrk_1.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_1.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_2 = " << hw_input_stencil_clkwrk_2.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_2.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_3 = " << hw_input_stencil_clkwrk_3.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_3.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_4 = " << hw_input_stencil_clkwrk_4.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_4.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_5 = " << hw_input_stencil_clkwrk_5.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_5.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_6 = " << hw_input_stencil_clkwrk_6.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_6.is_empty());
  cout << "# of elements waiting in: hw_input_stencil_clkwrk_7 = " << hw_input_stencil_clkwrk_7.num_waiting() << endl;
  assert(hw_input_stencil_clkwrk_7.is_empty());
  cout << "# of elements waiting in: hw_kernel_stencil = " << hw_kernel_stencil.num_waiting() << endl;
  assert(hw_kernel_stencil.is_empty());
  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_10.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_11.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_12.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_13.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_14.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_15.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_8.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  for (int i = 0; i < 784; i++) {
    auto actual = hw_output_stencil_clkwrk_9.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}

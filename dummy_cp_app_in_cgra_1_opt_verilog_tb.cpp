#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vdummy_cp_app_in_cgra_1_opt.h"

int main() {
  ofstream fout("regression_result_dummy_cp_app_in_cgra_1_opt_verilog.txt");
  HWStream<hw_uint<16 > > raw_oc;
  HWStream<hw_uint<16 > > dummy_cp_app_in_cgra_1;


  // Loading input data
  srand(1);
  // cmap    : { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[-3 + raw_1, -3 + raw_0] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1927 }
  // read map: { raw_oc[i0, i1] -> raw_update_0[root = 0, raw_0 = 3 + i1, raw_1 = 3 + i0] : -3 <= i0 <= 1924 and -3 <= i1 <= 1084 }
  // rng     : { raw_update_0[root = 0, raw_0, raw_1] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1927 }
  // rng card: { 2097664 }
  for (int i = 0; i < 2097664; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    raw_oc.write(value);
  }

  Vdummy_cp_app_in_cgra_1_opt dut;
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
  *(dut.raw_oc_raw_update_0_read) = 0;
  int dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write_valid_count = 0;
  dut.clk = 0;
  dut.eval();
  for (int t = 0; t < (int) pow(2, 16); t++) {
    cout << "t = " << t << endl;
    if (dut.raw_oc_raw_update_0_read_en) {
      cout << "send me data!" << endl;
      *(dut.raw_oc_raw_update_0_read) = (int) raw_oc.read();
    }
  dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write_valid_count += dut.dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write_valid;
  if (dut.dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write_valid) {
    cout << "Got data: " << (int) *(dut.dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write) << endl;
    hw_uint<16> val((int) *(dut.dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write));
    dummy_cp_app_in_cgra_1.write(val);
  }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
    cout << dummy_cp_app_in_cgra_1_dummy_cp_app_in_cgra_1_update_0_write_valid_count << endl;
  cout << "# of elements waiting in: raw_oc = " << raw_oc.num_waiting() << endl;
  assert(raw_oc.is_empty());
  for (int i = 0; i < 2073600; i++) {
    auto actual = dummy_cp_app_in_cgra_1.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}

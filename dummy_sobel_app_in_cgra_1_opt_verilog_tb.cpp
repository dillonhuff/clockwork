#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vdummy_sobel_app_in_cgra_1_opt.h"

int main() {
  ofstream fout("regression_result_dummy_sobel_app_in_cgra_1_opt_verilog.txt");
  HWStream<hw_uint<16 > > off_chip_img;
  HWStream<hw_uint<16 > > dummy_sobel_app_in_cgra_1;


  // Loading input data
  srand(1);
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[-1 + img_1, -1 + img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 1921 }
  // read map: { off_chip_img[i0, i1] -> img_update_0[root = 0, img_0 = 1 + i1, img_1 = 1 + i0] : -1 <= i0 <= 1920 and -1 <= i1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 1921 }
  // rng card: { 2079604 }
  for (int i = 0; i < 2079604; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    off_chip_img.write(value);
  }

  Vdummy_sobel_app_in_cgra_1_opt dut;
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
  *(dut.off_chip_img_img_update_0_read) = 0;
  int dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid_count = 0;
  dut.clk = 0;
  dut.eval();
  for (int t = 0; t < (int) pow(2, 16); t++) {
    cout << "t = " << t << endl;
    if (dut.off_chip_img_img_update_0_read_en) {
      cout << "send me data!" << endl;
      *(dut.off_chip_img_img_update_0_read) = (int) off_chip_img.read();
    }
  dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid_count += dut.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid;
  if (dut.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid) {
    cout << "Got data: " << (int) *(dut.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write) << endl;
    hw_uint<16> val((int) *(dut.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write));
    dummy_sobel_app_in_cgra_1.write(val);
  }
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
  }
    cout << dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid_count << endl;
  cout << "# of elements waiting in: off_chip_img = " << off_chip_img.num_waiting() << endl;
  assert(off_chip_img.is_empty());
  for (int i = 0; i < 2073600; i++) {
    auto actual = dummy_sobel_app_in_cgra_1.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}

#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vconv_3_3_buffet.h"

#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() {
  return main_time;
}

void dump_trace(VerilatedVcdC* tfp) {
  for (int i = 0; i < 5; i ++) {
    tfp->dump(main_time);
    main_time++;
  }
}

int main() {
  ofstream fout("regression_result_conv_3_3_buffet_verilog.txt");
  HWStream<hw_uint<16 > > hw_input_stencil;
  HWStream<hw_uint<16 > > hw_output_stencil;


  // Loading input data
  srand(1);
  // cmap    : { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
  // read map: { hw_input_stencil[i0, i1] -> op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y = i0, hw_input_global_wrapper_s0_x = i1] : 0 <= i0 <= 63 and 0 <= i1 <= 63 }
  // rng     : { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
  // rng card: { 4096 }
  for (int i = 0; i < 4096; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    hw_input_stencil.write(value);
  }

  Vconv_3_3_buffet dut;
  Vconv_3_3_buffet* dut_ptr = &dut;
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  dut_ptr->trace(tfp, 99);
  tfp->open("sim_wave.vcd");

  //make sure input enable always ready
  dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en_ready = 1;

  //make sure output consumer always ready
  dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_ready = 1;

  dut.clk = 0;
  dut.eval();
  dump_trace(tfp);
  dut.rst_n = 0;
  dut.eval();
  dump_trace(tfp);

  //Add a posedge during reset
  dut.clk = 0;
  dut.eval();
  dump_trace(tfp);
  dut.clk = 1;
  dut.eval();
  dump_trace(tfp);

  dut.rst_n = 1;
  dut.eval();
  dump_trace(tfp);
  dut.clk = 0;
  dut.eval();
  dump_trace(tfp);
  dut.flush = 1;
  dut.clk = 1;
  dut.eval();
  dump_trace(tfp);
  dut.flush = 0;
  dut.clk = 0;
  dut.eval();
  dump_trace(tfp);
  *(dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read) = 0;
  int hw_output_stencil_op_hcompute_hw_output_stencil_write_valid_count = 0;
  dut.clk = 0;
  dut.eval();
  dump_trace(tfp);
  for (int t = 0; t < (int) pow(2, 16); t++) {
    cout << "t = " << t << endl;
    if (dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en) {
      cout << "send me data!" << endl;
      *(dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read) = (int) hw_input_stencil.read();
    }

    //send the write enable singal
    if (dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en) {
      dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = 1;
    } else {
      dut.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = 0;
    }
    hw_output_stencil_op_hcompute_hw_output_stencil_write_valid_count += dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid;
    if (dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid) {
      cout << "Got data: " << (int) *(dut.hw_output_stencil_op_hcompute_hw_output_stencil_write) << endl;
      hw_uint<16> val((int) *(dut.hw_output_stencil_op_hcompute_hw_output_stencil_write));
      hw_output_stencil.write(val);
    }
    dut.clk = 0;
    dut.eval();
    dump_trace(tfp);
    dut.clk = 1;
    dut.eval();
    dump_trace(tfp);
  }
    cout << hw_output_stencil_op_hcompute_hw_output_stencil_write_valid_count << endl;
  cout << "# of elements waiting in: hw_input_stencil = " << hw_input_stencil.num_waiting() << endl;
  assert(hw_input_stencil.is_empty());
  for (int i = 0; i < 3844; i++) {
    auto actual = hw_output_stencil.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}

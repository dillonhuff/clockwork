#include "example_progs.h"

prog histogram() {
  prog prg;
  prg.compute_unit_file = "histogram_compute.h";
  prg.name = "histogram";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing bin.stencil
  auto bin_s0_y = prg.add_loop("bin_s0_y", 0, 64);
  auto bin_s0_x = bin_s0_y->add_loop("bin_s0_x", 0, 64);

//store is: bin.stencil(bin_s0_x, bin_s0_y) = int32(hw_input_global_wrapper.stencil(bin_s0_x, bin_s0_y))
  auto hcompute_bin_stencil = bin_s0_x->add_op("op_hcompute_bin_stencil");
  hcompute_bin_stencil->add_function("hcompute_bin_stencil");
  hcompute_bin_stencil->add_load("hw_input_global_wrapper_stencil", "bin_s0_y", "bin_s0_x");
  prg.buffer_port_widths["bin_stencil"] = 32;
  hcompute_bin_stencil->add_store("bin_stencil", "bin_s0_y", "bin_s0_x");

//consuming bin.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);
////producing histogram.stencil
  auto histogram_s0_b = hw_output_s0_x_xi->add_loop("histogram_s0_b", 0, 256);

//store is: histogram.stencil(histogram_s0_b) = (uint16)0
  auto hcompute_histogram_stencil = histogram_s0_b->add_op("op_hcompute_histogram_stencil");
  hcompute_histogram_stencil->add_function("hcompute_histogram_stencil");
  prg.buffer_port_widths["histogram_stencil"] = 16;
  hcompute_histogram_stencil->add_store("histogram_stencil", "histogram_s0_b");
  auto histogram_s1_r_y = hw_output_s0_x_xi->add_loop("histogram_s1_r_y", 0, 64);
  auto histogram_s1_r_x = histogram_s1_r_y->add_loop("histogram_s1_r_x", 0, 64);

//store is: histogram.stencil(bin.stencil(histogram_s1_r_x, histogram_s1_r_y)) = (histogram.stencil(bin.stencil(histogram_s1_r_x, histogram_s1_r_y)) + (uint16)1)
  auto hcompute_histogram_stencil_1 = histogram_s1_r_x->add_op("op_hcompute_histogram_stencil_1");
  hcompute_histogram_stencil_1->add_function("hcompute_histogram_stencil_1");
  //hcompute_histogram_stencil_1->add_dynamic_load("histogram_stencil", "bin_stencil", "histogram_s1_r_y", "histogram_s1_r_x");
  //hcompute_histogram_stencil_1->add_dynamic_store("histogram_stencil", "bin_stencil", "histogram_s1_r_y", "histogram_s1_r_x");

//consuming histogram.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = histogram.stencil(hw_output_s0_x_xi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("histogram_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog histogram1d() {
  prog prg;
  prg.compute_unit_file = "histogram1d_compute.h";
  prg.name = "histogram1d";

// Stencil<uint16_t, 64, 1> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_x = prg.add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, 0) = hw_input.stencil(hw_input_global_wrapper_s0_x, 0)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "0", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "0", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing bin.stencil
  auto bin_s0_x = prg.add_loop("bin_s0_x", 0, 64);

//store is: bin.stencil(bin_s0_x) = int32(hw_input_global_wrapper.stencil(bin_s0_x, 0))
  auto hcompute_bin_stencil = bin_s0_x->add_op("op_hcompute_bin_stencil");
  hcompute_bin_stencil->add_function("hcompute_bin_stencil");
  hcompute_bin_stencil->add_load("hw_input_global_wrapper_stencil", "0", "bin_s0_x");
  prg.buffer_port_widths["bin_stencil"] = 32;
  hcompute_bin_stencil->add_store("bin_stencil", "bin_s0_x");

//consuming bin.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);
////producing histogram.stencil
  auto histogram_s0_b = hw_output_s0_x_xi->add_loop("histogram_s0_b", 0, 256);

//store is: histogram.stencil(histogram_s0_b) = (uint16)0
  auto hcompute_histogram_stencil = histogram_s0_b->add_op("op_hcompute_histogram_stencil");
  hcompute_histogram_stencil->add_function("hcompute_histogram_stencil");
  prg.buffer_port_widths["histogram_stencil"] = 16;
  hcompute_histogram_stencil->add_store("histogram_stencil", "histogram_s0_b");
  auto histogram_s1_r_x = hw_output_s0_x_xi->add_loop("histogram_s1_r_x", 0, 64);

//store is: histogram.stencil(bin.stencil(histogram_s1_r_x)) = (histogram.stencil(bin.stencil(histogram_s1_r_x)) + (uint16)1)
  auto hcompute_histogram_stencil_1 = histogram_s1_r_x->add_op("op_hcompute_histogram_stencil_1");
  hcompute_histogram_stencil_1->add_function("hcompute_histogram_stencil_1");
  hcompute_histogram_stencil_1->add_dynamic_load("histogram_stencil", "bin_stencil", "histogram_s1_r_x");
  hcompute_histogram_stencil_1->add_dynamic_store("histogram_stencil", "bin_stencil", "histogram_s1_r_x");

//consuming histogram.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = histogram.stencil(hw_output_s0_x_xi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("histogram_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


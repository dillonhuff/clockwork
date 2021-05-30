#include "example_progs.h"

prog fft8_unroll8_split() {
  prog prg;
  prg.compute_unit_file = "fft8_unroll8_split_compute.h";
  prg.name = "fft8_unroll8_split";

// Stencil<float, 8, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<float, 8, 2, 3> &hw_twi_stencil = arg_1;
  prg.add_input("hw_twi_stencil");
  prg.buffer_port_widths["hw_twi_stencil"] = 16;
// Stencil<float, 8, 2> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_twi_global_wrapper.stencil
  auto hw_twi_global_wrapper_s0_z = prg.add_loop("hw_twi_global_wrapper_s0_z", 0, 3);
  auto hw_twi_global_wrapper_s0_y = hw_twi_global_wrapper_s0_z->add_loop("hw_twi_global_wrapper_s0_y", 0, 2);
  auto hw_twi_global_wrapper_s0_x = hw_twi_global_wrapper_s0_y->add_loop("hw_twi_global_wrapper_s0_x", 0, 8);

//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
  auto hcompute_hw_twi_global_wrapper_stencil = hw_twi_global_wrapper_s0_x->add_op("op_hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_function("hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_load("hw_twi_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_twi_global_wrapper_stencil"] = 16;
  hcompute_hw_twi_global_wrapper_stencil->add_store("hw_twi_global_wrapper_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");

//consuming hw_twi_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 2);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing f3
  auto f3_s0_x_xo_3 = prg.add_loop("f3_s0_x_xo_3", 0, 2);
  auto f3_s0_x_xi_3 = f3_s0_x_xo_3->add_loop("f3_s0_x_xi_3", 0, 4);

//store is: f3.0.stencil(((f3_s0_x_xo_3*4) + f3_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0)*float32((1 - (f3_s0_x_xo_3*2))))) - (hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1)*float32((1 - (f3_s0_x_xo_3*2)))))) + ((hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0, 0)) - (hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1, 0))))
  auto hcompute_f3_0_stencil = f3_s0_x_xi_3->add_op("op_hcompute_f3_0_stencil");
  hcompute_f3_0_stencil->add_function("hcompute_f3_0_stencil");
  hcompute_f3_0_stencil->add_load("hw_input_global_wrapper_stencil", "0", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_0_stencil->add_load("hw_input_global_wrapper_stencil", "1", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_0_stencil->add_load("hw_input_global_wrapper_stencil", "0", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  hcompute_f3_0_stencil->add_load("hw_input_global_wrapper_stencil", "1", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  hcompute_f3_0_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "0", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_0_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "1", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_0_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "0", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  hcompute_f3_0_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "1", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  prg.buffer_port_widths["f3_0_stencil"] = 16;
  hcompute_f3_0_stencil->add_store("f3_0_stencil", "((f3_s0_x_xo_3*4) + f3_s0_x_xi_3)");
  hcompute_f3_0_stencil->compute_unit_needs_index_variable("f3_s0_x_xo_3");

//store is: f3.1.stencil(((f3_s0_x_xo_3*4) + f3_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0)*float32((1 - (f3_s0_x_xo_3*2))))) + (hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1)*float32((1 - (f3_s0_x_xo_3*2)))))) + ((hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1, 0)) + (hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0, 0))))
  auto hcompute_f3_1_stencil = f3_s0_x_xi_3->add_op("op_hcompute_f3_1_stencil");
  hcompute_f3_1_stencil->add_function("hcompute_f3_1_stencil");
  hcompute_f3_1_stencil->add_load("hw_input_global_wrapper_stencil", "0", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_1_stencil->add_load("hw_input_global_wrapper_stencil", "1", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_1_stencil->add_load("hw_input_global_wrapper_stencil", "0", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  hcompute_f3_1_stencil->add_load("hw_input_global_wrapper_stencil", "1", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  hcompute_f3_1_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "1", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_1_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "0", "((f3_s0_x_xi_3*2) + f3_s0_x_xo_3)");
  hcompute_f3_1_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "1", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  hcompute_f3_1_stencil->add_load("hw_twi_global_wrapper_stencil", "0", "0", "((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2))");
  prg.buffer_port_widths["f3_1_stencil"] = 16;
  hcompute_f3_1_stencil->add_store("f3_1_stencil", "((f3_s0_x_xo_3*4) + f3_s0_x_xi_3)");
  hcompute_f3_1_stencil->compute_unit_needs_index_variable("f3_s0_x_xo_3");

//consuming f3
////producing f4
  auto f4_s0_x_xo_3 = prg.add_loop("f4_s0_x_xo_3", 0, 2);
  auto f4_s0_x_xi_3 = f4_s0_x_xo_3->add_loop("f4_s0_x_xi_3", 0, 4);

//store is: f4.0.stencil(((f4_s0_x_xo_3*4) + f4_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 0, 1)*(f3.0.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2))))) - (hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 1, 1)*(f3.1.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2)))))) + ((f3.0.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 0, 1)) - (f3.1.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 1, 1))))
  auto hcompute_f4_0_stencil = f4_s0_x_xi_3->add_op("op_hcompute_f4_0_stencil");
  hcompute_f4_0_stencil->add_function("hcompute_f4_0_stencil");
  hcompute_f4_0_stencil->add_load("f3_0_stencil", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_0_stencil->add_load("f3_0_stencil", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_0_stencil->add_load("f3_1_stencil", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_0_stencil->add_load("f3_1_stencil", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_0_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "1", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_0_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "0", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_0_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "1", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_0_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "0", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  prg.buffer_port_widths["f4_0_stencil"] = 16;
  hcompute_f4_0_stencil->add_store("f4_0_stencil", "((f4_s0_x_xo_3*4) + f4_s0_x_xi_3)");
  hcompute_f4_0_stencil->compute_unit_needs_index_variable("f4_s0_x_xo_3");

//store is: f4.1.stencil(((f4_s0_x_xo_3*4) + f4_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 1, 1)*(f3.0.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2))))) + (hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 0, 1)*(f3.1.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2)))))) + ((f3.0.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 1, 1)) + (f3.1.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 0, 1))))
  auto hcompute_f4_1_stencil = f4_s0_x_xi_3->add_op("op_hcompute_f4_1_stencil");
  hcompute_f4_1_stencil->add_function("hcompute_f4_1_stencil");
  hcompute_f4_1_stencil->add_load("f3_0_stencil", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_1_stencil->add_load("f3_0_stencil", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_1_stencil->add_load("f3_1_stencil", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_1_stencil->add_load("f3_1_stencil", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_1_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "1", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_1_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "0", "((f4_s0_x_xi_3*2) + f4_s0_x_xo_3)");
  hcompute_f4_1_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "1", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  hcompute_f4_1_stencil->add_load("hw_twi_global_wrapper_stencil", "1", "0", "((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2))");
  prg.buffer_port_widths["f4_1_stencil"] = 16;
  hcompute_f4_1_stencil->add_store("f4_1_stencil", "((f4_s0_x_xo_3*4) + f4_s0_x_xi_3)");
  hcompute_f4_1_stencil->compute_unit_needs_index_variable("f4_s0_x_xo_3");

//consuming f4
////producing f5
  auto f5_s0_x_xo_3 = prg.add_loop("f5_s0_x_xo_3", 0, 2);
  auto f5_s0_x_xi_3 = f5_s0_x_xo_3->add_loop("f5_s0_x_xi_3", 0, 4);

//store is: f5.0.stencil(((f5_s0_x_xo_3*4) + f5_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 0, 2)*(f4.0.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2))))) - (hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 1, 2)*(f4.1.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2)))))) + ((f4.0.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 0, 2)) - (f4.1.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 1, 2))))
  auto hcompute_f5_0_stencil = f5_s0_x_xi_3->add_op("op_hcompute_f5_0_stencil");
  hcompute_f5_0_stencil->add_function("hcompute_f5_0_stencil");
  hcompute_f5_0_stencil->add_load("f4_0_stencil", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_0_stencil->add_load("f4_0_stencil", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  hcompute_f5_0_stencil->add_load("f4_1_stencil", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_0_stencil->add_load("f4_1_stencil", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  hcompute_f5_0_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "0", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_0_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "1", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_0_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "0", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  hcompute_f5_0_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "1", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  prg.buffer_port_widths["f5_0_stencil"] = 16;
  hcompute_f5_0_stencil->add_store("f5_0_stencil", "((f5_s0_x_xo_3*4) + f5_s0_x_xi_3)");
  hcompute_f5_0_stencil->compute_unit_needs_index_variable("f5_s0_x_xo_3");

//store is: f5.1.stencil(((f5_s0_x_xo_3*4) + f5_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 1, 2)*(f4.0.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2))))) + (hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 0, 2)*(f4.1.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2)))))) + ((f4.0.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 1, 2)) + (f4.1.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 0, 2))))
  auto hcompute_f5_1_stencil = f5_s0_x_xi_3->add_op("op_hcompute_f5_1_stencil");
  hcompute_f5_1_stencil->add_function("hcompute_f5_1_stencil");
  hcompute_f5_1_stencil->add_load("f4_0_stencil", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_1_stencil->add_load("f4_0_stencil", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  hcompute_f5_1_stencil->add_load("f4_1_stencil", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_1_stencil->add_load("f4_1_stencil", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  hcompute_f5_1_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "1", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_1_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "0", "((f5_s0_x_xi_3*2) + f5_s0_x_xo_3)");
  hcompute_f5_1_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "1", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  hcompute_f5_1_stencil->add_load("hw_twi_global_wrapper_stencil", "2", "0", "((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2))");
  prg.buffer_port_widths["f5_1_stencil"] = 16;
  hcompute_f5_1_stencil->add_store("f5_1_stencil", "((f5_s0_x_xo_3*4) + f5_s0_x_xi_3)");
  hcompute_f5_1_stencil->compute_unit_needs_index_variable("f5_s0_x_xo_3");

//consuming f5
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f5.0.stencil(hw_output_s0_x_xi), f5.1.stencil(hw_output_s0_x_xi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f5_0_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("f5_1_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}

prog fft8_unroll8_pease() {
  prog prg;
  prg.compute_unit_file = "fft8_unroll8_pease_compute.h";
  prg.name = "fft8_unroll8_pease";

// Stencil<float, 8, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<float, 8, 2, 3> &hw_twi_stencil = arg_1;
  prg.add_input("hw_twi_stencil");
  prg.buffer_port_widths["hw_twi_stencil"] = 16;
// Stencil<float, 8, 2> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_twi_global_wrapper.stencil
  auto hw_twi_global_wrapper_s0_z = prg.add_loop("hw_twi_global_wrapper_s0_z", 0, 3);
  auto hw_twi_global_wrapper_s0_y = hw_twi_global_wrapper_s0_z->add_loop("hw_twi_global_wrapper_s0_y", 0, 2);
  auto hw_twi_global_wrapper_s0_x = hw_twi_global_wrapper_s0_y->add_loop("hw_twi_global_wrapper_s0_x", 0, 8);

//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
  auto hcompute_hw_twi_global_wrapper_stencil = hw_twi_global_wrapper_s0_x->add_op("op_hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_function("hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_load("hw_twi_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_twi_global_wrapper_stencil"] = 16;
  hcompute_hw_twi_global_wrapper_stencil->add_store("hw_twi_global_wrapper_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");

//consuming hw_twi_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 2);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing f3

  auto f3_s1_t_x = prg.add_loop("f3_s1_t_x", 0, 8);
  prg.buffer_port_widths["f3_0_stencil"] = 16;
  prg.buffer_port_widths["f3_1_stencil"] = 16;

//store is: f3.0.stencil(f3_s1_t_x) = (((hw_twi_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 0, 0)*(hw_input_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 0)*float32((1 - ((f3_s1_t_x/4)*2))))) - (hw_twi_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 1, 0)*(hw_input_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 1)*float32((1 - ((f3_s1_t_x/4)*2)))))) + ((hw_input_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 0)*hw_twi_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 0, 0)) - (hw_input_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 1)*hw_twi_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 1, 0))))
  auto hcompute_f3_0_stencil_8 = f3_s1_t_x->add_op("op_hcompute_f3_0_stencil_8");
  hcompute_f3_0_stencil_8->add_function("hcompute_f3_0_stencil_8");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_0_stencil_8->add_store("f3_0_stencil", "f3_s1_t_x");
  hcompute_f3_0_stencil_8->compute_unit_needs_index_variable("f3_s1_t_x");

//store is: f3.1.stencil(f3_s1_t_x) = (((hw_twi_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 1, 0)*(hw_input_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 0)*float32((1 - ((f3_s1_t_x/4)*2))))) + (hw_twi_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 0, 0)*(hw_input_global_wrapper.stencil(((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)), 1)*float32((1 - ((f3_s1_t_x/4)*2)))))) + ((hw_input_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 0)*hw_twi_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 1, 0)) + (hw_input_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 1)*hw_twi_global_wrapper.stencil((((f3_s1_t_x % 4)*2) + ((((f3_s1_t_x/4) + ((f3_s1_t_x % 4)*2)) + 1) % 2)), 0, 0))))
  auto hcompute_f3_1_stencil_8 = f3_s1_t_x->add_op("op_hcompute_f3_1_stencil_8");
  hcompute_f3_1_stencil_8->add_function("hcompute_f3_1_stencil_8");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "(floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2))");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "(((f3_s1_t_x % 4)*2) + (((floor((f3_s1_t_x/4)) + ((f3_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f3_1_stencil_8->add_store("f3_1_stencil", "f3_s1_t_x");
  hcompute_f3_1_stencil_8->compute_unit_needs_index_variable("f3_s1_t_x");

//consuming f3
////producing f4

  auto f4_s1_t_x = prg.add_loop("f4_s1_t_x", 0, 8);
  prg.buffer_port_widths["f4_0_stencil"] = 16;
  prg.buffer_port_widths["f4_1_stencil"] = 16;

//store is: f4.0.stencil(f4_s1_t_x) = (((hw_twi_global_wrapper.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)), 0, 1)*(f3.0.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)))*float32((1 - ((f4_s1_t_x/4)*2))))) - (hw_twi_global_wrapper.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)), 1, 1)*(f3.1.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)))*float32((1 - ((f4_s1_t_x/4)*2)))))) + ((f3.0.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)), 0, 1)) - (f3.1.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)), 1, 1))))
  auto hcompute_f4_0_stencil_8 = f4_s1_t_x->add_op("op_hcompute_f4_0_stencil_8");
  hcompute_f4_0_stencil_8->add_function("hcompute_f4_0_stencil_8");
  hcompute_f4_0_stencil_8->add_load("f3_0_stencil", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_0_stencil_8->add_load("f3_0_stencil", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_0_stencil_8->add_load("f3_1_stencil", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_0_stencil_8->add_load("f3_1_stencil", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_0_stencil_8->add_store("f4_0_stencil", "f4_s1_t_x");
  hcompute_f4_0_stencil_8->compute_unit_needs_index_variable("f4_s1_t_x");

//store is: f4.1.stencil(f4_s1_t_x) = (((hw_twi_global_wrapper.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)), 1, 1)*(f3.0.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)))*float32((1 - ((f4_s1_t_x/4)*2))))) + (hw_twi_global_wrapper.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)), 0, 1)*(f3.1.stencil(((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)))*float32((1 - ((f4_s1_t_x/4)*2)))))) + ((f3.0.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)), 1, 1)) + (f3.1.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x % 4)*2) + ((((f4_s1_t_x/4) + ((f4_s1_t_x % 4)*2)) + 1) % 2)), 0, 1))))
  auto hcompute_f4_1_stencil_8 = f4_s1_t_x->add_op("op_hcompute_f4_1_stencil_8");
  hcompute_f4_1_stencil_8->add_function("hcompute_f4_1_stencil_8");
  hcompute_f4_1_stencil_8->add_load("f3_0_stencil", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_1_stencil_8->add_load("f3_0_stencil", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_1_stencil_8->add_load("f3_1_stencil", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_1_stencil_8->add_load("f3_1_stencil", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "(floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2))");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "(((f4_s1_t_x % 4)*2) + (((floor((f4_s1_t_x/4)) + ((f4_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f4_1_stencil_8->add_store("f4_1_stencil", "f4_s1_t_x");
  hcompute_f4_1_stencil_8->compute_unit_needs_index_variable("f4_s1_t_x");

//consuming f4
////producing f5

  auto f5_s1_t_x = prg.add_loop("f5_s1_t_x", 0, 8);
  prg.buffer_port_widths["f5_0_stencil"] = 16;
  prg.buffer_port_widths["f5_1_stencil"] = 16;

//store is: f5.0.stencil(f5_s1_t_x) = (((hw_twi_global_wrapper.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)), 0, 2)*(f4.0.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)))*float32((1 - ((f5_s1_t_x/4)*2))))) - (hw_twi_global_wrapper.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)), 1, 2)*(f4.1.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)))*float32((1 - ((f5_s1_t_x/4)*2)))))) + ((f4.0.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)), 0, 2)) - (f4.1.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)), 1, 2))))
  auto hcompute_f5_0_stencil_8 = f5_s1_t_x->add_op("op_hcompute_f5_0_stencil_8");
  hcompute_f5_0_stencil_8->add_function("hcompute_f5_0_stencil_8");
  hcompute_f5_0_stencil_8->add_load("f4_0_stencil", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_0_stencil_8->add_load("f4_0_stencil", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_0_stencil_8->add_load("f4_1_stencil", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_0_stencil_8->add_load("f4_1_stencil", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_0_stencil_8->add_store("f5_0_stencil", "f5_s1_t_x");
  hcompute_f5_0_stencil_8->compute_unit_needs_index_variable("f5_s1_t_x");

//store is: f5.1.stencil(f5_s1_t_x) = (((hw_twi_global_wrapper.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)), 1, 2)*(f4.0.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)))*float32((1 - ((f5_s1_t_x/4)*2))))) + (hw_twi_global_wrapper.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)), 0, 2)*(f4.1.stencil(((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)))*float32((1 - ((f5_s1_t_x/4)*2)))))) + ((f4.0.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)), 1, 2)) + (f4.1.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)))*hw_twi_global_wrapper.stencil((((f5_s1_t_x % 4)*2) + ((((f5_s1_t_x/4) + ((f5_s1_t_x % 4)*2)) + 1) % 2)), 0, 2))))
  auto hcompute_f5_1_stencil_8 = f5_s1_t_x->add_op("op_hcompute_f5_1_stencil_8");
  hcompute_f5_1_stencil_8->add_function("hcompute_f5_1_stencil_8");
  hcompute_f5_1_stencil_8->add_load("f4_0_stencil", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_1_stencil_8->add_load("f4_0_stencil", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_1_stencil_8->add_load("f4_1_stencil", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_1_stencil_8->add_load("f4_1_stencil", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "(floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2))");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "(((f5_s1_t_x % 4)*2) + (((floor((f5_s1_t_x/4)) + ((f5_s1_t_x % 4)*2)) + 1) % 2))");
  hcompute_f5_1_stencil_8->add_store("f5_1_stencil", "f5_s1_t_x");
  hcompute_f5_1_stencil_8->compute_unit_needs_index_variable("f5_s1_t_x");

//consuming f5
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f5.0.stencil(hw_output_s0_x_xi), f5.1.stencil(hw_output_s0_x_xi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f5_0_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("f5_1_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}

prog fft8_unroll8() {
  prog prg;
  prg.compute_unit_file = "fft8_unroll8_compute.h";
  prg.name = "fft8_unroll8";

// Stencil<float, 8, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<float, 8, 2, 3> &hw_twi_stencil = arg_1;
  prg.add_input("hw_twi_stencil");
  prg.buffer_port_widths["hw_twi_stencil"] = 16;
// Stencil<float, 8, 2> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_twi_global_wrapper.stencil
  auto hw_twi_global_wrapper_s0_z = prg.add_loop("hw_twi_global_wrapper_s0_z", 0, 3);
  auto hw_twi_global_wrapper_s0_y = hw_twi_global_wrapper_s0_z->add_loop("hw_twi_global_wrapper_s0_y", 0, 2);
  auto hw_twi_global_wrapper_s0_x = hw_twi_global_wrapper_s0_y->add_loop("hw_twi_global_wrapper_s0_x", 0, 8);

//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
  auto hcompute_hw_twi_global_wrapper_stencil = hw_twi_global_wrapper_s0_x->add_op("op_hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_function("hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_load("hw_twi_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_twi_global_wrapper_stencil"] = 16;
  hcompute_hw_twi_global_wrapper_stencil->add_store("hw_twi_global_wrapper_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");

//consuming hw_twi_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 2);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);
////producing f1
  auto f1_s0_y = hw_output_s0_x_xi->add_loop("f1_s0_y", 0, 4);

//store is: f1.0.stencil(0, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil = f1_s0_y->add_op("op_hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_function("hcompute_f1_0_stencil");
  prg.buffer_port_widths["f1_0_stencil"] = 16;
  hcompute_f1_0_stencil->add_store("f1_0_stencil", "f1_s0_y", "0");

//store is: f1.1.stencil(0, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil = f1_s0_y->add_op("op_hcompute_f1_1_stencil");
  hcompute_f1_1_stencil->add_function("hcompute_f1_1_stencil");
  prg.buffer_port_widths["f1_1_stencil"] = 16;
  hcompute_f1_1_stencil->add_store("f1_1_stencil", "f1_s0_y", "0");

//store is: f1.0.stencil(1, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_1 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_1");
  hcompute_f1_0_stencil_1->add_function("hcompute_f1_0_stencil_1");
  hcompute_f1_0_stencil_1->add_store("f1_0_stencil", "f1_s0_y", "1");

//store is: f1.1.stencil(1, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_1 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_1");
  hcompute_f1_1_stencil_1->add_function("hcompute_f1_1_stencil_1");
  hcompute_f1_1_stencil_1->add_store("f1_1_stencil", "f1_s0_y", "1");

//store is: f1.0.stencil(2, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_2 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_2");
  hcompute_f1_0_stencil_2->add_function("hcompute_f1_0_stencil_2");
  hcompute_f1_0_stencil_2->add_store("f1_0_stencil", "f1_s0_y", "2");

//store is: f1.1.stencil(2, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_2 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_2");
  hcompute_f1_1_stencil_2->add_function("hcompute_f1_1_stencil_2");
  hcompute_f1_1_stencil_2->add_store("f1_1_stencil", "f1_s0_y", "2");

//store is: f1.0.stencil(3, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_3 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_3");
  hcompute_f1_0_stencil_3->add_function("hcompute_f1_0_stencil_3");
  hcompute_f1_0_stencil_3->add_store("f1_0_stencil", "f1_s0_y", "3");

//store is: f1.1.stencil(3, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_3 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_3");
  hcompute_f1_1_stencil_3->add_function("hcompute_f1_1_stencil_3");
  hcompute_f1_1_stencil_3->add_store("f1_1_stencil", "f1_s0_y", "3");

//store is: f1.0.stencil(4, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_4 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_4");
  hcompute_f1_0_stencil_4->add_function("hcompute_f1_0_stencil_4");
  hcompute_f1_0_stencil_4->add_store("f1_0_stencil", "f1_s0_y", "4");

//store is: f1.1.stencil(4, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_4 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_4");
  hcompute_f1_1_stencil_4->add_function("hcompute_f1_1_stencil_4");
  hcompute_f1_1_stencil_4->add_store("f1_1_stencil", "f1_s0_y", "4");

//store is: f1.0.stencil(5, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_5 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_5");
  hcompute_f1_0_stencil_5->add_function("hcompute_f1_0_stencil_5");
  hcompute_f1_0_stencil_5->add_store("f1_0_stencil", "f1_s0_y", "5");

//store is: f1.1.stencil(5, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_5 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_5");
  hcompute_f1_1_stencil_5->add_function("hcompute_f1_1_stencil_5");
  hcompute_f1_1_stencil_5->add_store("f1_1_stencil", "f1_s0_y", "5");

//store is: f1.0.stencil(6, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_6 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_6");
  hcompute_f1_0_stencil_6->add_function("hcompute_f1_0_stencil_6");
  hcompute_f1_0_stencil_6->add_store("f1_0_stencil", "f1_s0_y", "6");

//store is: f1.1.stencil(6, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_6 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_6");
  hcompute_f1_1_stencil_6->add_function("hcompute_f1_1_stencil_6");
  hcompute_f1_1_stencil_6->add_store("f1_1_stencil", "f1_s0_y", "6");

//store is: f1.0.stencil(7, f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_7 = f1_s0_y->add_op("op_hcompute_f1_0_stencil_7");
  hcompute_f1_0_stencil_7->add_function("hcompute_f1_0_stencil_7");
  hcompute_f1_0_stencil_7->add_store("f1_0_stencil", "f1_s0_y", "7");

//store is: f1.1.stencil(7, f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_7 = f1_s0_y->add_op("op_hcompute_f1_1_stencil_7");
  hcompute_f1_1_stencil_7->add_function("hcompute_f1_1_stencil_7");
  hcompute_f1_1_stencil_7->add_store("f1_1_stencil", "f1_s0_y", "7");
  auto f1_s1_x = hw_output_s0_x_xi->add_loop("f1_s1_x", 0, 8);

//store is: f1.0.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 0)
  auto hcompute_f1_0_stencil_8 = f1_s1_x->add_op("op_hcompute_f1_0_stencil_8");
  hcompute_f1_0_stencil_8->add_function("hcompute_f1_0_stencil_8");
  hcompute_f1_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "f1_s1_x");
  hcompute_f1_0_stencil_8->add_store("f1_0_stencil", "0", "f1_s1_x");

//store is: f1.1.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 1)
  auto hcompute_f1_1_stencil_8 = f1_s1_x->add_op("op_hcompute_f1_1_stencil_8");
  hcompute_f1_1_stencil_8->add_function("hcompute_f1_1_stencil_8");
  hcompute_f1_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "f1_s1_x");
  hcompute_f1_1_stencil_8->add_store("f1_1_stencil", "0", "f1_s1_x");
  auto f1_s2_t_x = hw_output_s0_x_xi->add_loop("f1_s2_t_x", 0, 8);

//store is: f1.0.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)) - (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)))
  auto hcompute_f1_0_stencil_9 = f1_s2_t_x->add_op("op_hcompute_f1_0_stencil_9");
  hcompute_f1_0_stencil_9->add_function("hcompute_f1_0_stencil_9");
  hcompute_f1_0_stencil_9->add_load("f1_0_stencil", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_9->add_load("f1_1_stencil", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_9->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_9->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f1_s2_t_x");
  hcompute_f1_0_stencil_9->add_store("f1_0_stencil", "0", "f1_s2_t_x");

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
  auto hcompute_f1_1_stencil_9 = f1_s2_t_x->add_op("op_hcompute_f1_1_stencil_9");
  hcompute_f1_1_stencil_9->add_function("hcompute_f1_1_stencil_9");
  hcompute_f1_1_stencil_9->add_load("f1_0_stencil", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_9->add_load("f1_1_stencil", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_9->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f1_s2_t_x");
  hcompute_f1_1_stencil_9->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_9->add_store("f1_1_stencil", "0", "f1_s2_t_x");
  auto f1_s3_t_x = hw_output_s0_x_xi->add_loop("f1_s3_t_x", 0, 8);

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
  auto hcompute_f1_0_stencil_10 = f1_s3_t_x->add_op("op_hcompute_f1_0_stencil_10");
  hcompute_f1_0_stencil_10->add_function("hcompute_f1_0_stencil_10");
  hcompute_f1_0_stencil_10->add_load("f1_0_stencil", "0", "((floor((f1_s3_t_x/2))*2) + ((f1_s3_t_x + 1) % 2))");
  hcompute_f1_0_stencil_10->add_load("f1_0_stencil", "0", "f1_s3_t_x");
  hcompute_f1_0_stencil_10->add_store("f1_0_stencil", "1", "f1_s3_t_x");
  hcompute_f1_0_stencil_10->compute_unit_needs_index_variable("f1_s3_t_x");

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
  auto hcompute_f1_1_stencil_10 = f1_s3_t_x->add_op("op_hcompute_f1_1_stencil_10");
  hcompute_f1_1_stencil_10->add_function("hcompute_f1_1_stencil_10");
  hcompute_f1_1_stencil_10->add_load("f1_1_stencil", "0", "((floor((f1_s3_t_x/2))*2) + ((f1_s3_t_x + 1) % 2))");
  hcompute_f1_1_stencil_10->add_load("f1_1_stencil", "0", "f1_s3_t_x");
  hcompute_f1_1_stencil_10->add_store("f1_1_stencil", "1", "f1_s3_t_x");
  hcompute_f1_1_stencil_10->compute_unit_needs_index_variable("f1_s3_t_x");
  auto f1_s4_t_x = hw_output_s0_x_xi->add_loop("f1_s4_t_x", 0, 8);

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
  auto hcompute_f1_0_stencil_11 = f1_s4_t_x->add_op("op_hcompute_f1_0_stencil_11");
  hcompute_f1_0_stencil_11->add_function("hcompute_f1_0_stencil_11");
  hcompute_f1_0_stencil_11->add_load("f1_0_stencil", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_11->add_load("f1_1_stencil", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_11->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f1_s4_t_x");
  hcompute_f1_0_stencil_11->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_11->add_store("f1_0_stencil", "1", "f1_s4_t_x");

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
  auto hcompute_f1_1_stencil_11 = f1_s4_t_x->add_op("op_hcompute_f1_1_stencil_11");
  hcompute_f1_1_stencil_11->add_function("hcompute_f1_1_stencil_11");
  hcompute_f1_1_stencil_11->add_load("f1_0_stencil", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_11->add_load("f1_1_stencil", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_11->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_11->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f1_s4_t_x");
  hcompute_f1_1_stencil_11->add_store("f1_1_stencil", "1", "f1_s4_t_x");
  auto f1_s5_t_x = hw_output_s0_x_xi->add_loop("f1_s5_t_x", 0, 8);

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
  auto hcompute_f1_0_stencil_12 = f1_s5_t_x->add_op("op_hcompute_f1_0_stencil_12");
  hcompute_f1_0_stencil_12->add_function("hcompute_f1_0_stencil_12");
  hcompute_f1_0_stencil_12->add_load("f1_0_stencil", "1", "((floor((f1_s5_t_x/4))*4) + ((f1_s5_t_x + 2) % 4))");
  hcompute_f1_0_stencil_12->add_load("f1_0_stencil", "1", "f1_s5_t_x");
  hcompute_f1_0_stencil_12->add_store("f1_0_stencil", "2", "f1_s5_t_x");
  hcompute_f1_0_stencil_12->compute_unit_needs_index_variable("f1_s5_t_x");

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
  auto hcompute_f1_1_stencil_12 = f1_s5_t_x->add_op("op_hcompute_f1_1_stencil_12");
  hcompute_f1_1_stencil_12->add_function("hcompute_f1_1_stencil_12");
  hcompute_f1_1_stencil_12->add_load("f1_1_stencil", "1", "((floor((f1_s5_t_x/4))*4) + ((f1_s5_t_x + 2) % 4))");
  hcompute_f1_1_stencil_12->add_load("f1_1_stencil", "1", "f1_s5_t_x");
  hcompute_f1_1_stencil_12->add_store("f1_1_stencil", "2", "f1_s5_t_x");
  hcompute_f1_1_stencil_12->compute_unit_needs_index_variable("f1_s5_t_x");
  auto f1_s6_t_x = hw_output_s0_x_xi->add_loop("f1_s6_t_x", 0, 8);

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
  auto hcompute_f1_0_stencil_13 = f1_s6_t_x->add_op("op_hcompute_f1_0_stencil_13");
  hcompute_f1_0_stencil_13->add_function("hcompute_f1_0_stencil_13");
  hcompute_f1_0_stencil_13->add_load("f1_0_stencil", "2", "f1_s6_t_x");
  hcompute_f1_0_stencil_13->add_load("f1_1_stencil", "2", "f1_s6_t_x");
  hcompute_f1_0_stencil_13->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f1_s6_t_x");
  hcompute_f1_0_stencil_13->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f1_s6_t_x");
  hcompute_f1_0_stencil_13->add_store("f1_0_stencil", "2", "f1_s6_t_x");

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
  auto hcompute_f1_1_stencil_13 = f1_s6_t_x->add_op("op_hcompute_f1_1_stencil_13");
  hcompute_f1_1_stencil_13->add_function("hcompute_f1_1_stencil_13");
  hcompute_f1_1_stencil_13->add_load("f1_0_stencil", "2", "f1_s6_t_x");
  hcompute_f1_1_stencil_13->add_load("f1_1_stencil", "2", "f1_s6_t_x");
  hcompute_f1_1_stencil_13->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f1_s6_t_x");
  hcompute_f1_1_stencil_13->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f1_s6_t_x");
  hcompute_f1_1_stencil_13->add_store("f1_1_stencil", "2", "f1_s6_t_x");
  auto f1_s7_t_x = hw_output_s0_x_xi->add_loop("f1_s7_t_x", 0, 8);

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
  auto hcompute_f1_0_stencil_14 = f1_s7_t_x->add_op("op_hcompute_f1_0_stencil_14");
  hcompute_f1_0_stencil_14->add_function("hcompute_f1_0_stencil_14");
  hcompute_f1_0_stencil_14->add_load("f1_0_stencil", "2", "((f1_s7_t_x + 4) % 8)");
  hcompute_f1_0_stencil_14->add_load("f1_0_stencil", "2", "f1_s7_t_x");
  hcompute_f1_0_stencil_14->add_store("f1_0_stencil", "3", "f1_s7_t_x");
  hcompute_f1_0_stencil_14->compute_unit_needs_index_variable("f1_s7_t_x");

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
  auto hcompute_f1_1_stencil_14 = f1_s7_t_x->add_op("op_hcompute_f1_1_stencil_14");
  hcompute_f1_1_stencil_14->add_function("hcompute_f1_1_stencil_14");
  hcompute_f1_1_stencil_14->add_load("f1_1_stencil", "2", "((f1_s7_t_x + 4) % 8)");
  hcompute_f1_1_stencil_14->add_load("f1_1_stencil", "2", "f1_s7_t_x");
  hcompute_f1_1_stencil_14->add_store("f1_1_stencil", "3", "f1_s7_t_x");
  hcompute_f1_1_stencil_14->compute_unit_needs_index_variable("f1_s7_t_x");

//consuming f1

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f1_0_stencil", "3", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("f1_1_stencil", "3", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}


prog fft8_unroll4() {
  prog prg;
  prg.compute_unit_file = "fft8_unroll4_compute.h";
  prg.name = "fft8_unroll4";

// Stencil<float, 8, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 32;
// Stencil<float, 8, 2, 3> &hw_twi_stencil = arg_1;
  prg.add_input("hw_twi_stencil");
  prg.buffer_port_widths["hw_twi_stencil"] = 32;
// Stencil<float, 8, 2> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 32;

////producing hw_twi_global_wrapper.stencil
  auto hw_twi_global_wrapper_s0_z = prg.add_loop("hw_twi_global_wrapper_s0_z", 0, 3);
  auto hw_twi_global_wrapper_s0_y = hw_twi_global_wrapper_s0_z->add_loop("hw_twi_global_wrapper_s0_y", 0, 2);
  auto hw_twi_global_wrapper_s0_x = hw_twi_global_wrapper_s0_y->add_loop("hw_twi_global_wrapper_s0_x", 0, 8);

//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
  auto hcompute_hw_twi_global_wrapper_stencil = hw_twi_global_wrapper_s0_x->add_op("op_hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_function("hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_load("hw_twi_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_twi_global_wrapper_stencil"] = 32;
  hcompute_hw_twi_global_wrapper_stencil->add_store("hw_twi_global_wrapper_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");

//consuming hw_twi_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 2);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 32;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);
////producing f1
  auto f1_s0_y = hw_output_s0_x_xi->add_loop("f1_s0_y", 0, 4);
  auto f1_s0_x_x = f1_s0_y->add_loop("f1_s0_x_x", 0, 2);

//store is: f1.0.stencil((f1_s0_x_x*4), f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil = f1_s0_x_x->add_op("op_hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_function("hcompute_f1_0_stencil");
  prg.buffer_port_widths["f1_0_stencil"] = 32;
  hcompute_f1_0_stencil->add_store("f1_0_stencil", "f1_s0_y", "(f1_s0_x_x*4)");

//store is: f1.1.stencil((f1_s0_x_x*4), f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil = f1_s0_x_x->add_op("op_hcompute_f1_1_stencil");
  hcompute_f1_1_stencil->add_function("hcompute_f1_1_stencil");
  prg.buffer_port_widths["f1_1_stencil"] = 32;
  hcompute_f1_1_stencil->add_store("f1_1_stencil", "f1_s0_y", "(f1_s0_x_x*4)");

//store is: f1.0.stencil(((f1_s0_x_x*4) + 1), f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_1 = f1_s0_x_x->add_op("op_hcompute_f1_0_stencil_1");
  hcompute_f1_0_stencil_1->add_function("hcompute_f1_0_stencil_1");
  hcompute_f1_0_stencil_1->add_store("f1_0_stencil", "f1_s0_y", "((f1_s0_x_x*4) + 1)");

//store is: f1.1.stencil(((f1_s0_x_x*4) + 1), f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_1 = f1_s0_x_x->add_op("op_hcompute_f1_1_stencil_1");
  hcompute_f1_1_stencil_1->add_function("hcompute_f1_1_stencil_1");
  hcompute_f1_1_stencil_1->add_store("f1_1_stencil", "f1_s0_y", "((f1_s0_x_x*4) + 1)");

//store is: f1.0.stencil(((f1_s0_x_x*4) + 2), f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_2 = f1_s0_x_x->add_op("op_hcompute_f1_0_stencil_2");
  hcompute_f1_0_stencil_2->add_function("hcompute_f1_0_stencil_2");
  hcompute_f1_0_stencil_2->add_store("f1_0_stencil", "f1_s0_y", "((f1_s0_x_x*4) + 2)");

//store is: f1.1.stencil(((f1_s0_x_x*4) + 2), f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_2 = f1_s0_x_x->add_op("op_hcompute_f1_1_stencil_2");
  hcompute_f1_1_stencil_2->add_function("hcompute_f1_1_stencil_2");
  hcompute_f1_1_stencil_2->add_store("f1_1_stencil", "f1_s0_y", "((f1_s0_x_x*4) + 2)");

//store is: f1.0.stencil(((f1_s0_x_x*4) + 3), f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_3 = f1_s0_x_x->add_op("op_hcompute_f1_0_stencil_3");
  hcompute_f1_0_stencil_3->add_function("hcompute_f1_0_stencil_3");
  hcompute_f1_0_stencil_3->add_store("f1_0_stencil", "f1_s0_y", "((f1_s0_x_x*4) + 3)");

//store is: f1.1.stencil(((f1_s0_x_x*4) + 3), f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_3 = f1_s0_x_x->add_op("op_hcompute_f1_1_stencil_3");
  hcompute_f1_1_stencil_3->add_function("hcompute_f1_1_stencil_3");
  hcompute_f1_1_stencil_3->add_store("f1_1_stencil", "f1_s0_y", "((f1_s0_x_x*4) + 3)");
  auto f1_s1_x = hw_output_s0_x_xi->add_loop("f1_s1_x", 0, 8);

//store is: f1.0.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 0)
  auto hcompute_f1_0_stencil_4 = f1_s1_x->add_op("op_hcompute_f1_0_stencil_4");
  hcompute_f1_0_stencil_4->add_function("hcompute_f1_0_stencil_4");
  hcompute_f1_0_stencil_4->add_load("hw_input_global_wrapper_stencil", "0", "f1_s1_x");
  hcompute_f1_0_stencil_4->add_store("f1_0_stencil", "0", "f1_s1_x");

//store is: f1.1.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 1)
  auto hcompute_f1_1_stencil_4 = f1_s1_x->add_op("op_hcompute_f1_1_stencil_4");
  hcompute_f1_1_stencil_4->add_function("hcompute_f1_1_stencil_4");
  hcompute_f1_1_stencil_4->add_load("hw_input_global_wrapper_stencil", "1", "f1_s1_x");
  hcompute_f1_1_stencil_4->add_store("f1_1_stencil", "0", "f1_s1_x");
  auto f1_s2_t_x = hw_output_s0_x_xi->add_loop("f1_s2_t_x", 0, 8);

//store is: f1.0.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)) - (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)))
  auto hcompute_f1_0_stencil_5 = f1_s2_t_x->add_op("op_hcompute_f1_0_stencil_5");
  hcompute_f1_0_stencil_5->add_function("hcompute_f1_0_stencil_5");
  hcompute_f1_0_stencil_5->add_load("f1_0_stencil", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_5->add_load("f1_1_stencil", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_5->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_5->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f1_s2_t_x");
  hcompute_f1_0_stencil_5->add_store("f1_0_stencil", "0", "f1_s2_t_x");

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
  auto hcompute_f1_1_stencil_5 = f1_s2_t_x->add_op("op_hcompute_f1_1_stencil_5");
  hcompute_f1_1_stencil_5->add_function("hcompute_f1_1_stencil_5");
  hcompute_f1_1_stencil_5->add_load("f1_0_stencil", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_5->add_load("f1_1_stencil", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_5->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f1_s2_t_x");
  hcompute_f1_1_stencil_5->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_5->add_store("f1_1_stencil", "0", "f1_s2_t_x");
  auto f1_s3_t_x = hw_output_s0_x_xi->add_loop("f1_s3_t_x", 0, 8);

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
  auto hcompute_f1_0_stencil_6 = f1_s3_t_x->add_op("op_hcompute_f1_0_stencil_6");
  hcompute_f1_0_stencil_6->add_function("hcompute_f1_0_stencil_6");
  hcompute_f1_0_stencil_6->add_load("f1_0_stencil", "0", "((floor((f1_s3_t_x/2))*2) + ((f1_s3_t_x + 1) % 2))");
  hcompute_f1_0_stencil_6->add_load("f1_0_stencil", "0", "f1_s3_t_x");
  hcompute_f1_0_stencil_6->add_store("f1_0_stencil", "1", "f1_s3_t_x");
  hcompute_f1_0_stencil_6->compute_unit_needs_index_variable("f1_s3_t_x");

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
  auto hcompute_f1_1_stencil_6 = f1_s3_t_x->add_op("op_hcompute_f1_1_stencil_6");
  hcompute_f1_1_stencil_6->add_function("hcompute_f1_1_stencil_6");
  hcompute_f1_1_stencil_6->add_load("f1_1_stencil", "0", "((floor((f1_s3_t_x/2))*2) + ((f1_s3_t_x + 1) % 2))");
  hcompute_f1_1_stencil_6->add_load("f1_1_stencil", "0", "f1_s3_t_x");
  hcompute_f1_1_stencil_6->add_store("f1_1_stencil", "1", "f1_s3_t_x");
  hcompute_f1_1_stencil_6->compute_unit_needs_index_variable("f1_s3_t_x");
  auto f1_s4_t_x = hw_output_s0_x_xi->add_loop("f1_s4_t_x", 0, 8);

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
  auto hcompute_f1_0_stencil_7 = f1_s4_t_x->add_op("op_hcompute_f1_0_stencil_7");
  hcompute_f1_0_stencil_7->add_function("hcompute_f1_0_stencil_7");
  hcompute_f1_0_stencil_7->add_load("f1_0_stencil", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_7->add_load("f1_1_stencil", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_7->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f1_s4_t_x");
  hcompute_f1_0_stencil_7->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_7->add_store("f1_0_stencil", "1", "f1_s4_t_x");

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
  auto hcompute_f1_1_stencil_7 = f1_s4_t_x->add_op("op_hcompute_f1_1_stencil_7");
  hcompute_f1_1_stencil_7->add_function("hcompute_f1_1_stencil_7");
  hcompute_f1_1_stencil_7->add_load("f1_0_stencil", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_7->add_load("f1_1_stencil", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_7->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_7->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f1_s4_t_x");
  hcompute_f1_1_stencil_7->add_store("f1_1_stencil", "1", "f1_s4_t_x");
  auto f1_s5_t_x = hw_output_s0_x_xi->add_loop("f1_s5_t_x", 0, 8);

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
  auto hcompute_f1_0_stencil_8 = f1_s5_t_x->add_op("op_hcompute_f1_0_stencil_8");
  hcompute_f1_0_stencil_8->add_function("hcompute_f1_0_stencil_8");
  hcompute_f1_0_stencil_8->add_load("f1_0_stencil", "1", "((floor((f1_s5_t_x/4))*4) + ((f1_s5_t_x + 2) % 4))");
  hcompute_f1_0_stencil_8->add_load("f1_0_stencil", "1", "f1_s5_t_x");
  hcompute_f1_0_stencil_8->add_store("f1_0_stencil", "2", "f1_s5_t_x");
  hcompute_f1_0_stencil_8->compute_unit_needs_index_variable("f1_s5_t_x");

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
  auto hcompute_f1_1_stencil_8 = f1_s5_t_x->add_op("op_hcompute_f1_1_stencil_8");
  hcompute_f1_1_stencil_8->add_function("hcompute_f1_1_stencil_8");
  hcompute_f1_1_stencil_8->add_load("f1_1_stencil", "1", "((floor((f1_s5_t_x/4))*4) + ((f1_s5_t_x + 2) % 4))");
  hcompute_f1_1_stencil_8->add_load("f1_1_stencil", "1", "f1_s5_t_x");
  hcompute_f1_1_stencil_8->add_store("f1_1_stencil", "2", "f1_s5_t_x");
  hcompute_f1_1_stencil_8->compute_unit_needs_index_variable("f1_s5_t_x");
  auto f1_s6_t_x = hw_output_s0_x_xi->add_loop("f1_s6_t_x", 0, 8);

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
  auto hcompute_f1_0_stencil_9 = f1_s6_t_x->add_op("op_hcompute_f1_0_stencil_9");
  hcompute_f1_0_stencil_9->add_function("hcompute_f1_0_stencil_9");
  hcompute_f1_0_stencil_9->add_load("f1_0_stencil", "2", "f1_s6_t_x");
  hcompute_f1_0_stencil_9->add_load("f1_1_stencil", "2", "f1_s6_t_x");
  hcompute_f1_0_stencil_9->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f1_s6_t_x");
  hcompute_f1_0_stencil_9->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f1_s6_t_x");
  hcompute_f1_0_stencil_9->add_store("f1_0_stencil", "2", "f1_s6_t_x");

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
  auto hcompute_f1_1_stencil_9 = f1_s6_t_x->add_op("op_hcompute_f1_1_stencil_9");
  hcompute_f1_1_stencil_9->add_function("hcompute_f1_1_stencil_9");
  hcompute_f1_1_stencil_9->add_load("f1_0_stencil", "2", "f1_s6_t_x");
  hcompute_f1_1_stencil_9->add_load("f1_1_stencil", "2", "f1_s6_t_x");
  hcompute_f1_1_stencil_9->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f1_s6_t_x");
  hcompute_f1_1_stencil_9->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f1_s6_t_x");
  hcompute_f1_1_stencil_9->add_store("f1_1_stencil", "2", "f1_s6_t_x");
  auto f1_s7_t_x = hw_output_s0_x_xi->add_loop("f1_s7_t_x", 0, 8);

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
  auto hcompute_f1_0_stencil_10 = f1_s7_t_x->add_op("op_hcompute_f1_0_stencil_10");
  hcompute_f1_0_stencil_10->add_function("hcompute_f1_0_stencil_10");
  hcompute_f1_0_stencil_10->add_load("f1_0_stencil", "2", "((f1_s7_t_x + 4) % 8)");
  hcompute_f1_0_stencil_10->add_load("f1_0_stencil", "2", "f1_s7_t_x");
  hcompute_f1_0_stencil_10->add_store("f1_0_stencil", "3", "f1_s7_t_x");
  hcompute_f1_0_stencil_10->compute_unit_needs_index_variable("f1_s7_t_x");

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
  auto hcompute_f1_1_stencil_10 = f1_s7_t_x->add_op("op_hcompute_f1_1_stencil_10");
  hcompute_f1_1_stencil_10->add_function("hcompute_f1_1_stencil_10");
  hcompute_f1_1_stencil_10->add_load("f1_1_stencil", "2", "((f1_s7_t_x + 4) % 8)");
  hcompute_f1_1_stencil_10->add_load("f1_1_stencil", "2", "f1_s7_t_x");
  hcompute_f1_1_stencil_10->add_store("f1_1_stencil", "3", "f1_s7_t_x");
  hcompute_f1_1_stencil_10->compute_unit_needs_index_variable("f1_s7_t_x");

//consuming f1

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f1_0_stencil", "3", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("f1_1_stencil", "3", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}


prog fft8_unroll2() {
  prog prg;
  prg.compute_unit_file = "fft8_unroll2_compute.h";
  prg.name = "fft8_unroll2";

// Stencil<float, 8, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 32;
// Stencil<float, 8, 2, 3> &hw_twi_stencil = arg_1;
  prg.add_input("hw_twi_stencil");
  prg.buffer_port_widths["hw_twi_stencil"] = 32;
// Stencil<float, 8, 2> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 32;

////producing hw_twi_global_wrapper.stencil
  auto hw_twi_global_wrapper_s0_z = prg.add_loop("hw_twi_global_wrapper_s0_z", 0, 3);
  auto hw_twi_global_wrapper_s0_y = hw_twi_global_wrapper_s0_z->add_loop("hw_twi_global_wrapper_s0_y", 0, 2);
  auto hw_twi_global_wrapper_s0_x = hw_twi_global_wrapper_s0_y->add_loop("hw_twi_global_wrapper_s0_x", 0, 8);

//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
  auto hcompute_hw_twi_global_wrapper_stencil = hw_twi_global_wrapper_s0_x->add_op("op_hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_function("hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_load("hw_twi_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_twi_global_wrapper_stencil"] = 32;
  hcompute_hw_twi_global_wrapper_stencil->add_store("hw_twi_global_wrapper_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");

//consuming hw_twi_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 2);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 32;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);
////producing f1
  auto f1_s0_y = hw_output_s0_x_xi->add_loop("f1_s0_y", 0, 4);
  auto f1_s0_x_x = f1_s0_y->add_loop("f1_s0_x_x", 0, 4);

//store is: f1.0.stencil((f1_s0_x_x*2), f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil = f1_s0_x_x->add_op("op_hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_function("hcompute_f1_0_stencil");
  prg.buffer_port_widths["f1_0_stencil"] = 32;
  hcompute_f1_0_stencil->add_store("f1_0_stencil", "f1_s0_y", "(f1_s0_x_x*2)");

//store is: f1.1.stencil((f1_s0_x_x*2), f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil = f1_s0_x_x->add_op("op_hcompute_f1_1_stencil");
  hcompute_f1_1_stencil->add_function("hcompute_f1_1_stencil");
  prg.buffer_port_widths["f1_1_stencil"] = 32;
  hcompute_f1_1_stencil->add_store("f1_1_stencil", "f1_s0_y", "(f1_s0_x_x*2)");

//store is: f1.0.stencil(((f1_s0_x_x*2) + 1), f1_s0_y) = 0.000000f
  auto hcompute_f1_0_stencil_1 = f1_s0_x_x->add_op("op_hcompute_f1_0_stencil_1");
  hcompute_f1_0_stencil_1->add_function("hcompute_f1_0_stencil_1");
  hcompute_f1_0_stencil_1->add_store("f1_0_stencil", "f1_s0_y", "((f1_s0_x_x*2) + 1)");

//store is: f1.1.stencil(((f1_s0_x_x*2) + 1), f1_s0_y) = 0.000000f
  auto hcompute_f1_1_stencil_1 = f1_s0_x_x->add_op("op_hcompute_f1_1_stencil_1");
  hcompute_f1_1_stencil_1->add_function("hcompute_f1_1_stencil_1");
  hcompute_f1_1_stencil_1->add_store("f1_1_stencil", "f1_s0_y", "((f1_s0_x_x*2) + 1)");
  auto f1_s1_x = hw_output_s0_x_xi->add_loop("f1_s1_x", 0, 8);

//store is: f1.0.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 0)
  auto hcompute_f1_0_stencil_2 = f1_s1_x->add_op("op_hcompute_f1_0_stencil_2");
  hcompute_f1_0_stencil_2->add_function("hcompute_f1_0_stencil_2");
  hcompute_f1_0_stencil_2->add_load("hw_input_global_wrapper_stencil", "0", "f1_s1_x");
  hcompute_f1_0_stencil_2->add_store("f1_0_stencil", "0", "f1_s1_x");

//store is: f1.1.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 1)
  auto hcompute_f1_1_stencil_2 = f1_s1_x->add_op("op_hcompute_f1_1_stencil_2");
  hcompute_f1_1_stencil_2->add_function("hcompute_f1_1_stencil_2");
  hcompute_f1_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "1", "f1_s1_x");
  hcompute_f1_1_stencil_2->add_store("f1_1_stencil", "0", "f1_s1_x");
  auto f1_s2_t_x = hw_output_s0_x_xi->add_loop("f1_s2_t_x", 0, 8);

//store is: f1.0.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)) - (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)))
  auto hcompute_f1_0_stencil_3 = f1_s2_t_x->add_op("op_hcompute_f1_0_stencil_3");
  hcompute_f1_0_stencil_3->add_function("hcompute_f1_0_stencil_3");
  hcompute_f1_0_stencil_3->add_load("f1_0_stencil", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_3->add_load("f1_1_stencil", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_3->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f1_s2_t_x");
  hcompute_f1_0_stencil_3->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f1_s2_t_x");
  hcompute_f1_0_stencil_3->add_store("f1_0_stencil", "0", "f1_s2_t_x");

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
  auto hcompute_f1_1_stencil_3 = f1_s2_t_x->add_op("op_hcompute_f1_1_stencil_3");
  hcompute_f1_1_stencil_3->add_function("hcompute_f1_1_stencil_3");
  hcompute_f1_1_stencil_3->add_load("f1_0_stencil", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_3->add_load("f1_1_stencil", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_3->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f1_s2_t_x");
  hcompute_f1_1_stencil_3->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f1_s2_t_x");
  hcompute_f1_1_stencil_3->add_store("f1_1_stencil", "0", "f1_s2_t_x");
  auto f1_s3_t_x = hw_output_s0_x_xi->add_loop("f1_s3_t_x", 0, 8);

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
  auto hcompute_f1_0_stencil_4 = f1_s3_t_x->add_op("op_hcompute_f1_0_stencil_4");
  hcompute_f1_0_stencil_4->add_function("hcompute_f1_0_stencil_4");
  hcompute_f1_0_stencil_4->add_load("f1_0_stencil", "0", "((floor((f1_s3_t_x/2))*2) + ((f1_s3_t_x + 1) % 2))");
  hcompute_f1_0_stencil_4->add_load("f1_0_stencil", "0", "f1_s3_t_x");
  hcompute_f1_0_stencil_4->add_store("f1_0_stencil", "1", "f1_s3_t_x");
  hcompute_f1_0_stencil_4->compute_unit_needs_index_variable("f1_s3_t_x");

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
  auto hcompute_f1_1_stencil_4 = f1_s3_t_x->add_op("op_hcompute_f1_1_stencil_4");
  hcompute_f1_1_stencil_4->add_function("hcompute_f1_1_stencil_4");
  hcompute_f1_1_stencil_4->add_load("f1_1_stencil", "0", "((floor((f1_s3_t_x/2))*2) + ((f1_s3_t_x + 1) % 2))");
  hcompute_f1_1_stencil_4->add_load("f1_1_stencil", "0", "f1_s3_t_x");
  hcompute_f1_1_stencil_4->add_store("f1_1_stencil", "1", "f1_s3_t_x");
  hcompute_f1_1_stencil_4->compute_unit_needs_index_variable("f1_s3_t_x");
  auto f1_s4_t_x = hw_output_s0_x_xi->add_loop("f1_s4_t_x", 0, 8);

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
  auto hcompute_f1_0_stencil_5 = f1_s4_t_x->add_op("op_hcompute_f1_0_stencil_5");
  hcompute_f1_0_stencil_5->add_function("hcompute_f1_0_stencil_5");
  hcompute_f1_0_stencil_5->add_load("f1_0_stencil", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_5->add_load("f1_1_stencil", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_5->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f1_s4_t_x");
  hcompute_f1_0_stencil_5->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f1_s4_t_x");
  hcompute_f1_0_stencil_5->add_store("f1_0_stencil", "1", "f1_s4_t_x");

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
  auto hcompute_f1_1_stencil_5 = f1_s4_t_x->add_op("op_hcompute_f1_1_stencil_5");
  hcompute_f1_1_stencil_5->add_function("hcompute_f1_1_stencil_5");
  hcompute_f1_1_stencil_5->add_load("f1_0_stencil", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_5->add_load("f1_1_stencil", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_5->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f1_s4_t_x");
  hcompute_f1_1_stencil_5->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f1_s4_t_x");
  hcompute_f1_1_stencil_5->add_store("f1_1_stencil", "1", "f1_s4_t_x");
  auto f1_s5_t_x = hw_output_s0_x_xi->add_loop("f1_s5_t_x", 0, 8);

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
  auto hcompute_f1_0_stencil_6 = f1_s5_t_x->add_op("op_hcompute_f1_0_stencil_6");
  hcompute_f1_0_stencil_6->add_function("hcompute_f1_0_stencil_6");
  hcompute_f1_0_stencil_6->add_load("f1_0_stencil", "1", "((floor((f1_s5_t_x/4))*4) + ((f1_s5_t_x + 2) % 4))");
  hcompute_f1_0_stencil_6->add_load("f1_0_stencil", "1", "f1_s5_t_x");
  hcompute_f1_0_stencil_6->add_store("f1_0_stencil", "2", "f1_s5_t_x");
  hcompute_f1_0_stencil_6->compute_unit_needs_index_variable("f1_s5_t_x");

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
  auto hcompute_f1_1_stencil_6 = f1_s5_t_x->add_op("op_hcompute_f1_1_stencil_6");
  hcompute_f1_1_stencil_6->add_function("hcompute_f1_1_stencil_6");
  hcompute_f1_1_stencil_6->add_load("f1_1_stencil", "1", "((floor((f1_s5_t_x/4))*4) + ((f1_s5_t_x + 2) % 4))");
  hcompute_f1_1_stencil_6->add_load("f1_1_stencil", "1", "f1_s5_t_x");
  hcompute_f1_1_stencil_6->add_store("f1_1_stencil", "2", "f1_s5_t_x");
  hcompute_f1_1_stencil_6->compute_unit_needs_index_variable("f1_s5_t_x");
  auto f1_s6_t_x = hw_output_s0_x_xi->add_loop("f1_s6_t_x", 0, 8);

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
  auto hcompute_f1_0_stencil_7 = f1_s6_t_x->add_op("op_hcompute_f1_0_stencil_7");
  hcompute_f1_0_stencil_7->add_function("hcompute_f1_0_stencil_7");
  hcompute_f1_0_stencil_7->add_load("f1_0_stencil", "2", "f1_s6_t_x");
  hcompute_f1_0_stencil_7->add_load("f1_1_stencil", "2", "f1_s6_t_x");
  hcompute_f1_0_stencil_7->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f1_s6_t_x");
  hcompute_f1_0_stencil_7->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f1_s6_t_x");
  hcompute_f1_0_stencil_7->add_store("f1_0_stencil", "2", "f1_s6_t_x");

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
  auto hcompute_f1_1_stencil_7 = f1_s6_t_x->add_op("op_hcompute_f1_1_stencil_7");
  hcompute_f1_1_stencil_7->add_function("hcompute_f1_1_stencil_7");
  hcompute_f1_1_stencil_7->add_load("f1_0_stencil", "2", "f1_s6_t_x");
  hcompute_f1_1_stencil_7->add_load("f1_1_stencil", "2", "f1_s6_t_x");
  hcompute_f1_1_stencil_7->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f1_s6_t_x");
  hcompute_f1_1_stencil_7->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f1_s6_t_x");
  hcompute_f1_1_stencil_7->add_store("f1_1_stencil", "2", "f1_s6_t_x");
  auto f1_s7_t_x = hw_output_s0_x_xi->add_loop("f1_s7_t_x", 0, 8);

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
  auto hcompute_f1_0_stencil_8 = f1_s7_t_x->add_op("op_hcompute_f1_0_stencil_8");
  hcompute_f1_0_stencil_8->add_function("hcompute_f1_0_stencil_8");
  hcompute_f1_0_stencil_8->add_load("f1_0_stencil", "2", "((f1_s7_t_x + 4) % 8)");
  hcompute_f1_0_stencil_8->add_load("f1_0_stencil", "2", "f1_s7_t_x");
  hcompute_f1_0_stencil_8->add_store("f1_0_stencil", "3", "f1_s7_t_x");
  hcompute_f1_0_stencil_8->compute_unit_needs_index_variable("f1_s7_t_x");

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
  auto hcompute_f1_1_stencil_8 = f1_s7_t_x->add_op("op_hcompute_f1_1_stencil_8");
  hcompute_f1_1_stencil_8->add_function("hcompute_f1_1_stencil_8");
  hcompute_f1_1_stencil_8->add_load("f1_1_stencil", "2", "((f1_s7_t_x + 4) % 8)");
  hcompute_f1_1_stencil_8->add_load("f1_1_stencil", "2", "f1_s7_t_x");
  hcompute_f1_1_stencil_8->add_store("f1_1_stencil", "3", "f1_s7_t_x");
  hcompute_f1_1_stencil_8->compute_unit_needs_index_variable("f1_s7_t_x");

//consuming f1

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f1_0_stencil", "3", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("f1_1_stencil", "3", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}


prog fft8_unroll8_ratematch() {
  prog prg;
  prg.compute_unit_file = "fft8_unroll_ratematch8_compute.h";
  prg.name = "fft8_unroll8_ratematch";

// Stencil<float, 8, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 32;
// Stencil<float, 8, 2, 3> &hw_twi_stencil = arg_1;
  prg.add_input("hw_twi_stencil");
  prg.buffer_port_widths["hw_twi_stencil"] = 32;
// Stencil<float, 8, 2> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 32;

////producing hw_twi_global_wrapper.stencil
  auto hw_twi_global_wrapper_s0_z = prg.add_loop("hw_twi_global_wrapper_s0_z", 0, 3);
  auto hw_twi_global_wrapper_s0_y = hw_twi_global_wrapper_s0_z->add_loop("hw_twi_global_wrapper_s0_y", 0, 2);
  auto hw_twi_global_wrapper_s0_x = hw_twi_global_wrapper_s0_y->add_loop("hw_twi_global_wrapper_s0_x", 0, 8);

//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
  auto hcompute_hw_twi_global_wrapper_stencil = hw_twi_global_wrapper_s0_x->add_op("op_hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_function("hcompute_hw_twi_global_wrapper_stencil");
  hcompute_hw_twi_global_wrapper_stencil->add_load("hw_twi_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_twi_global_wrapper_stencil"] = 32;
  hcompute_hw_twi_global_wrapper_stencil->add_store("hw_twi_global_wrapper_stencil", "hw_twi_global_wrapper_s0_z", "hw_twi_global_wrapper_s0_y", "hw_twi_global_wrapper_s0_x");

//consuming hw_twi_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 2);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 32;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing f3

//store is: f3.0.stencil(0) = 0.000000f
  auto hcompute_f3_0_stencil = prg.add_op("op_hcompute_f3_0_stencil");
  hcompute_f3_0_stencil->add_function("hcompute_f3_0_stencil");
  prg.buffer_port_widths["f3_0_stencil"] = 32;
  hcompute_f3_0_stencil->add_store("f3_0_stencil", "0");

//store is: f3.1.stencil(0) = 0.000000f
  auto hcompute_f3_1_stencil = prg.add_op("op_hcompute_f3_1_stencil");
  hcompute_f3_1_stencil->add_function("hcompute_f3_1_stencil");
  prg.buffer_port_widths["f3_1_stencil"] = 32;
  hcompute_f3_1_stencil->add_store("f3_1_stencil", "0");

//store is: f3.0.stencil(1) = 0.000000f
  auto hcompute_f3_0_stencil_1 = prg.add_op("op_hcompute_f3_0_stencil_1");
  hcompute_f3_0_stencil_1->add_function("hcompute_f3_0_stencil_1");
  hcompute_f3_0_stencil_1->add_store("f3_0_stencil", "1");

//store is: f3.1.stencil(1) = 0.000000f
  auto hcompute_f3_1_stencil_1 = prg.add_op("op_hcompute_f3_1_stencil_1");
  hcompute_f3_1_stencil_1->add_function("hcompute_f3_1_stencil_1");
  hcompute_f3_1_stencil_1->add_store("f3_1_stencil", "1");

//store is: f3.0.stencil(2) = 0.000000f
  auto hcompute_f3_0_stencil_2 = prg.add_op("op_hcompute_f3_0_stencil_2");
  hcompute_f3_0_stencil_2->add_function("hcompute_f3_0_stencil_2");
  hcompute_f3_0_stencil_2->add_store("f3_0_stencil", "2");

//store is: f3.1.stencil(2) = 0.000000f
  auto hcompute_f3_1_stencil_2 = prg.add_op("op_hcompute_f3_1_stencil_2");
  hcompute_f3_1_stencil_2->add_function("hcompute_f3_1_stencil_2");
  hcompute_f3_1_stencil_2->add_store("f3_1_stencil", "2");

//store is: f3.0.stencil(3) = 0.000000f
  auto hcompute_f3_0_stencil_3 = prg.add_op("op_hcompute_f3_0_stencil_3");
  hcompute_f3_0_stencil_3->add_function("hcompute_f3_0_stencil_3");
  hcompute_f3_0_stencil_3->add_store("f3_0_stencil", "3");

//store is: f3.1.stencil(3) = 0.000000f
  auto hcompute_f3_1_stencil_3 = prg.add_op("op_hcompute_f3_1_stencil_3");
  hcompute_f3_1_stencil_3->add_function("hcompute_f3_1_stencil_3");
  hcompute_f3_1_stencil_3->add_store("f3_1_stencil", "3");

//store is: f3.0.stencil(4) = 0.000000f
  auto hcompute_f3_0_stencil_4 = prg.add_op("op_hcompute_f3_0_stencil_4");
  hcompute_f3_0_stencil_4->add_function("hcompute_f3_0_stencil_4");
  hcompute_f3_0_stencil_4->add_store("f3_0_stencil", "4");

//store is: f3.1.stencil(4) = 0.000000f
  auto hcompute_f3_1_stencil_4 = prg.add_op("op_hcompute_f3_1_stencil_4");
  hcompute_f3_1_stencil_4->add_function("hcompute_f3_1_stencil_4");
  hcompute_f3_1_stencil_4->add_store("f3_1_stencil", "4");

//store is: f3.0.stencil(5) = 0.000000f
  auto hcompute_f3_0_stencil_5 = prg.add_op("op_hcompute_f3_0_stencil_5");
  hcompute_f3_0_stencil_5->add_function("hcompute_f3_0_stencil_5");
  hcompute_f3_0_stencil_5->add_store("f3_0_stencil", "5");

//store is: f3.1.stencil(5) = 0.000000f
  auto hcompute_f3_1_stencil_5 = prg.add_op("op_hcompute_f3_1_stencil_5");
  hcompute_f3_1_stencil_5->add_function("hcompute_f3_1_stencil_5");
  hcompute_f3_1_stencil_5->add_store("f3_1_stencil", "5");

//store is: f3.0.stencil(6) = 0.000000f
  auto hcompute_f3_0_stencil_6 = prg.add_op("op_hcompute_f3_0_stencil_6");
  hcompute_f3_0_stencil_6->add_function("hcompute_f3_0_stencil_6");
  hcompute_f3_0_stencil_6->add_store("f3_0_stencil", "6");

//store is: f3.1.stencil(6) = 0.000000f
  auto hcompute_f3_1_stencil_6 = prg.add_op("op_hcompute_f3_1_stencil_6");
  hcompute_f3_1_stencil_6->add_function("hcompute_f3_1_stencil_6");
  hcompute_f3_1_stencil_6->add_store("f3_1_stencil", "6");

//store is: f3.0.stencil(7) = 0.000000f
  auto hcompute_f3_0_stencil_7 = prg.add_op("op_hcompute_f3_0_stencil_7");
  hcompute_f3_0_stencil_7->add_function("hcompute_f3_0_stencil_7");
  hcompute_f3_0_stencil_7->add_store("f3_0_stencil", "7");

//store is: f3.1.stencil(7) = 0.000000f
  auto hcompute_f3_1_stencil_7 = prg.add_op("op_hcompute_f3_1_stencil_7");
  hcompute_f3_1_stencil_7->add_function("hcompute_f3_1_stencil_7");
  hcompute_f3_1_stencil_7->add_store("f3_1_stencil", "7");
  auto f3_s1_t_x = prg.add_loop("f3_s1_t_x", 0, 8);

//store is: f3.0.stencil(f3_s1_t_x) = (((hw_twi_global_wrapper.stencil(f3_s1_t_x, 0, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 0)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2))))) - (hw_twi_global_wrapper.stencil(f3_s1_t_x, 1, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 1)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2)))))) + ((hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0, 0)) - (hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1, 0))))
  auto hcompute_f3_0_stencil_8 = f3_s1_t_x->add_op("op_hcompute_f3_0_stencil_8");
  hcompute_f3_0_stencil_8->add_function("hcompute_f3_0_stencil_8");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "f3_s1_t_x");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "f3_s1_t_x");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_0_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f3_s1_t_x");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f3_s1_t_x");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_0_stencil_8->add_store("f3_0_stencil", "f3_s1_t_x");
  hcompute_f3_0_stencil_8->compute_unit_needs_index_variable("f3_s1_t_x");

//store is: f3.1.stencil(f3_s1_t_x) = (((hw_twi_global_wrapper.stencil(f3_s1_t_x, 1, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 0)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2))))) + (hw_twi_global_wrapper.stencil(f3_s1_t_x, 0, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 1)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2)))))) + ((hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1, 0)) + (hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0, 0))))
  auto hcompute_f3_1_stencil_8 = f3_s1_t_x->add_op("op_hcompute_f3_1_stencil_8");
  hcompute_f3_1_stencil_8->add_function("hcompute_f3_1_stencil_8");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "f3_s1_t_x");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "f3_s1_t_x");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "0", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_1_stencil_8->add_load("hw_input_global_wrapper_stencil", "1", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "f3_s1_t_x");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "f3_s1_t_x");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "1", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "0", "0", "((floor((f3_s1_t_x/2))*2) + ((f3_s1_t_x + 1) % 2))");
  hcompute_f3_1_stencil_8->add_store("f3_1_stencil", "f3_s1_t_x");
  hcompute_f3_1_stencil_8->compute_unit_needs_index_variable("f3_s1_t_x");

//consuming f3
////producing f4

//store is: f4.0.stencil(0) = 0.000000f
  auto hcompute_f4_0_stencil = prg.add_op("op_hcompute_f4_0_stencil");
  hcompute_f4_0_stencil->add_function("hcompute_f4_0_stencil");
  prg.buffer_port_widths["f4_0_stencil"] = 32;
  hcompute_f4_0_stencil->add_store("f4_0_stencil", "0");

//store is: f4.1.stencil(0) = 0.000000f
  auto hcompute_f4_1_stencil = prg.add_op("op_hcompute_f4_1_stencil");
  hcompute_f4_1_stencil->add_function("hcompute_f4_1_stencil");
  prg.buffer_port_widths["f4_1_stencil"] = 32;
  hcompute_f4_1_stencil->add_store("f4_1_stencil", "0");

//store is: f4.0.stencil(1) = 0.000000f
  auto hcompute_f4_0_stencil_1 = prg.add_op("op_hcompute_f4_0_stencil_1");
  hcompute_f4_0_stencil_1->add_function("hcompute_f4_0_stencil_1");
  hcompute_f4_0_stencil_1->add_store("f4_0_stencil", "1");

//store is: f4.1.stencil(1) = 0.000000f
  auto hcompute_f4_1_stencil_1 = prg.add_op("op_hcompute_f4_1_stencil_1");
  hcompute_f4_1_stencil_1->add_function("hcompute_f4_1_stencil_1");
  hcompute_f4_1_stencil_1->add_store("f4_1_stencil", "1");

//store is: f4.0.stencil(2) = 0.000000f
  auto hcompute_f4_0_stencil_2 = prg.add_op("op_hcompute_f4_0_stencil_2");
  hcompute_f4_0_stencil_2->add_function("hcompute_f4_0_stencil_2");
  hcompute_f4_0_stencil_2->add_store("f4_0_stencil", "2");

//store is: f4.1.stencil(2) = 0.000000f
  auto hcompute_f4_1_stencil_2 = prg.add_op("op_hcompute_f4_1_stencil_2");
  hcompute_f4_1_stencil_2->add_function("hcompute_f4_1_stencil_2");
  hcompute_f4_1_stencil_2->add_store("f4_1_stencil", "2");

//store is: f4.0.stencil(3) = 0.000000f
  auto hcompute_f4_0_stencil_3 = prg.add_op("op_hcompute_f4_0_stencil_3");
  hcompute_f4_0_stencil_3->add_function("hcompute_f4_0_stencil_3");
  hcompute_f4_0_stencil_3->add_store("f4_0_stencil", "3");

//store is: f4.1.stencil(3) = 0.000000f
  auto hcompute_f4_1_stencil_3 = prg.add_op("op_hcompute_f4_1_stencil_3");
  hcompute_f4_1_stencil_3->add_function("hcompute_f4_1_stencil_3");
  hcompute_f4_1_stencil_3->add_store("f4_1_stencil", "3");

//store is: f4.0.stencil(4) = 0.000000f
  auto hcompute_f4_0_stencil_4 = prg.add_op("op_hcompute_f4_0_stencil_4");
  hcompute_f4_0_stencil_4->add_function("hcompute_f4_0_stencil_4");
  hcompute_f4_0_stencil_4->add_store("f4_0_stencil", "4");

//store is: f4.1.stencil(4) = 0.000000f
  auto hcompute_f4_1_stencil_4 = prg.add_op("op_hcompute_f4_1_stencil_4");
  hcompute_f4_1_stencil_4->add_function("hcompute_f4_1_stencil_4");
  hcompute_f4_1_stencil_4->add_store("f4_1_stencil", "4");

//store is: f4.0.stencil(5) = 0.000000f
  auto hcompute_f4_0_stencil_5 = prg.add_op("op_hcompute_f4_0_stencil_5");
  hcompute_f4_0_stencil_5->add_function("hcompute_f4_0_stencil_5");
  hcompute_f4_0_stencil_5->add_store("f4_0_stencil", "5");

//store is: f4.1.stencil(5) = 0.000000f
  auto hcompute_f4_1_stencil_5 = prg.add_op("op_hcompute_f4_1_stencil_5");
  hcompute_f4_1_stencil_5->add_function("hcompute_f4_1_stencil_5");
  hcompute_f4_1_stencil_5->add_store("f4_1_stencil", "5");

//store is: f4.0.stencil(6) = 0.000000f
  auto hcompute_f4_0_stencil_6 = prg.add_op("op_hcompute_f4_0_stencil_6");
  hcompute_f4_0_stencil_6->add_function("hcompute_f4_0_stencil_6");
  hcompute_f4_0_stencil_6->add_store("f4_0_stencil", "6");

//store is: f4.1.stencil(6) = 0.000000f
  auto hcompute_f4_1_stencil_6 = prg.add_op("op_hcompute_f4_1_stencil_6");
  hcompute_f4_1_stencil_6->add_function("hcompute_f4_1_stencil_6");
  hcompute_f4_1_stencil_6->add_store("f4_1_stencil", "6");

//store is: f4.0.stencil(7) = 0.000000f
  auto hcompute_f4_0_stencil_7 = prg.add_op("op_hcompute_f4_0_stencil_7");
  hcompute_f4_0_stencil_7->add_function("hcompute_f4_0_stencil_7");
  hcompute_f4_0_stencil_7->add_store("f4_0_stencil", "7");

//store is: f4.1.stencil(7) = 0.000000f
  auto hcompute_f4_1_stencil_7 = prg.add_op("op_hcompute_f4_1_stencil_7");
  hcompute_f4_1_stencil_7->add_function("hcompute_f4_1_stencil_7");
  hcompute_f4_1_stencil_7->add_store("f4_1_stencil", "7");
  auto f4_s1_t_x = prg.add_loop("f4_s1_t_x", 0, 8);

//store is: f4.0.stencil(f4_s1_t_x) = (((hw_twi_global_wrapper.stencil(f4_s1_t_x, 0, 1)*(f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2))))) - (hw_twi_global_wrapper.stencil(f4_s1_t_x, 1, 1)*(f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2)))))) + ((f3.0.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 0, 1)) - (f3.1.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 1, 1))))
  auto hcompute_f4_0_stencil_8 = f4_s1_t_x->add_op("op_hcompute_f4_0_stencil_8");
  hcompute_f4_0_stencil_8->add_function("hcompute_f4_0_stencil_8");
  hcompute_f4_0_stencil_8->add_load("f3_0_stencil", "f4_s1_t_x");
  hcompute_f4_0_stencil_8->add_load("f3_0_stencil", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_0_stencil_8->add_load("f3_1_stencil", "f4_s1_t_x");
  hcompute_f4_0_stencil_8->add_load("f3_1_stencil", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f4_s1_t_x");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f4_s1_t_x");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_0_stencil_8->add_store("f4_0_stencil", "f4_s1_t_x");
  hcompute_f4_0_stencil_8->compute_unit_needs_index_variable("f4_s1_t_x");

//store is: f4.1.stencil(f4_s1_t_x) = (((hw_twi_global_wrapper.stencil(f4_s1_t_x, 1, 1)*(f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2))))) + (hw_twi_global_wrapper.stencil(f4_s1_t_x, 0, 1)*(f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2)))))) + ((f3.0.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 1, 1)) + (f3.1.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 0, 1))))
  auto hcompute_f4_1_stencil_8 = f4_s1_t_x->add_op("op_hcompute_f4_1_stencil_8");
  hcompute_f4_1_stencil_8->add_function("hcompute_f4_1_stencil_8");
  hcompute_f4_1_stencil_8->add_load("f3_0_stencil", "f4_s1_t_x");
  hcompute_f4_1_stencil_8->add_load("f3_0_stencil", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_1_stencil_8->add_load("f3_1_stencil", "f4_s1_t_x");
  hcompute_f4_1_stencil_8->add_load("f3_1_stencil", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "f4_s1_t_x");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "f4_s1_t_x");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "1", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "1", "0", "((floor((f4_s1_t_x/4))*4) + ((f4_s1_t_x + 2) % 4))");
  hcompute_f4_1_stencil_8->add_store("f4_1_stencil", "f4_s1_t_x");
  hcompute_f4_1_stencil_8->compute_unit_needs_index_variable("f4_s1_t_x");

//consuming f4
////producing f5

//store is: f5.0.stencil(0) = 0.000000f
  auto hcompute_f5_0_stencil = prg.add_op("op_hcompute_f5_0_stencil");
  hcompute_f5_0_stencil->add_function("hcompute_f5_0_stencil");
  prg.buffer_port_widths["f5_0_stencil"] = 32;
  hcompute_f5_0_stencil->add_store("f5_0_stencil", "0");

//store is: f5.1.stencil(0) = 0.000000f
  auto hcompute_f5_1_stencil = prg.add_op("op_hcompute_f5_1_stencil");
  hcompute_f5_1_stencil->add_function("hcompute_f5_1_stencil");
  prg.buffer_port_widths["f5_1_stencil"] = 32;
  hcompute_f5_1_stencil->add_store("f5_1_stencil", "0");

//store is: f5.0.stencil(1) = 0.000000f
  auto hcompute_f5_0_stencil_1 = prg.add_op("op_hcompute_f5_0_stencil_1");
  hcompute_f5_0_stencil_1->add_function("hcompute_f5_0_stencil_1");
  hcompute_f5_0_stencil_1->add_store("f5_0_stencil", "1");

//store is: f5.1.stencil(1) = 0.000000f
  auto hcompute_f5_1_stencil_1 = prg.add_op("op_hcompute_f5_1_stencil_1");
  hcompute_f5_1_stencil_1->add_function("hcompute_f5_1_stencil_1");
  hcompute_f5_1_stencil_1->add_store("f5_1_stencil", "1");

//store is: f5.0.stencil(2) = 0.000000f
  auto hcompute_f5_0_stencil_2 = prg.add_op("op_hcompute_f5_0_stencil_2");
  hcompute_f5_0_stencil_2->add_function("hcompute_f5_0_stencil_2");
  hcompute_f5_0_stencil_2->add_store("f5_0_stencil", "2");

//store is: f5.1.stencil(2) = 0.000000f
  auto hcompute_f5_1_stencil_2 = prg.add_op("op_hcompute_f5_1_stencil_2");
  hcompute_f5_1_stencil_2->add_function("hcompute_f5_1_stencil_2");
  hcompute_f5_1_stencil_2->add_store("f5_1_stencil", "2");

//store is: f5.0.stencil(3) = 0.000000f
  auto hcompute_f5_0_stencil_3 = prg.add_op("op_hcompute_f5_0_stencil_3");
  hcompute_f5_0_stencil_3->add_function("hcompute_f5_0_stencil_3");
  hcompute_f5_0_stencil_3->add_store("f5_0_stencil", "3");

//store is: f5.1.stencil(3) = 0.000000f
  auto hcompute_f5_1_stencil_3 = prg.add_op("op_hcompute_f5_1_stencil_3");
  hcompute_f5_1_stencil_3->add_function("hcompute_f5_1_stencil_3");
  hcompute_f5_1_stencil_3->add_store("f5_1_stencil", "3");

//store is: f5.0.stencil(4) = 0.000000f
  auto hcompute_f5_0_stencil_4 = prg.add_op("op_hcompute_f5_0_stencil_4");
  hcompute_f5_0_stencil_4->add_function("hcompute_f5_0_stencil_4");
  hcompute_f5_0_stencil_4->add_store("f5_0_stencil", "4");

//store is: f5.1.stencil(4) = 0.000000f
  auto hcompute_f5_1_stencil_4 = prg.add_op("op_hcompute_f5_1_stencil_4");
  hcompute_f5_1_stencil_4->add_function("hcompute_f5_1_stencil_4");
  hcompute_f5_1_stencil_4->add_store("f5_1_stencil", "4");

//store is: f5.0.stencil(5) = 0.000000f
  auto hcompute_f5_0_stencil_5 = prg.add_op("op_hcompute_f5_0_stencil_5");
  hcompute_f5_0_stencil_5->add_function("hcompute_f5_0_stencil_5");
  hcompute_f5_0_stencil_5->add_store("f5_0_stencil", "5");

//store is: f5.1.stencil(5) = 0.000000f
  auto hcompute_f5_1_stencil_5 = prg.add_op("op_hcompute_f5_1_stencil_5");
  hcompute_f5_1_stencil_5->add_function("hcompute_f5_1_stencil_5");
  hcompute_f5_1_stencil_5->add_store("f5_1_stencil", "5");

//store is: f5.0.stencil(6) = 0.000000f
  auto hcompute_f5_0_stencil_6 = prg.add_op("op_hcompute_f5_0_stencil_6");
  hcompute_f5_0_stencil_6->add_function("hcompute_f5_0_stencil_6");
  hcompute_f5_0_stencil_6->add_store("f5_0_stencil", "6");

//store is: f5.1.stencil(6) = 0.000000f
  auto hcompute_f5_1_stencil_6 = prg.add_op("op_hcompute_f5_1_stencil_6");
  hcompute_f5_1_stencil_6->add_function("hcompute_f5_1_stencil_6");
  hcompute_f5_1_stencil_6->add_store("f5_1_stencil", "6");

//store is: f5.0.stencil(7) = 0.000000f
  auto hcompute_f5_0_stencil_7 = prg.add_op("op_hcompute_f5_0_stencil_7");
  hcompute_f5_0_stencil_7->add_function("hcompute_f5_0_stencil_7");
  hcompute_f5_0_stencil_7->add_store("f5_0_stencil", "7");

//store is: f5.1.stencil(7) = 0.000000f
  auto hcompute_f5_1_stencil_7 = prg.add_op("op_hcompute_f5_1_stencil_7");
  hcompute_f5_1_stencil_7->add_function("hcompute_f5_1_stencil_7");
  hcompute_f5_1_stencil_7->add_store("f5_1_stencil", "7");
  auto f5_s1_t_x = prg.add_loop("f5_s1_t_x", 0, 8);

//store is: f5.0.stencil(f5_s1_t_x) = (((hw_twi_global_wrapper.stencil(f5_s1_t_x, 0, 2)*(f4.0.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2))))) - (hw_twi_global_wrapper.stencil(f5_s1_t_x, 1, 2)*(f4.1.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2)))))) + ((f4.0.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 0, 2)) - (f4.1.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 1, 2))))
  auto hcompute_f5_0_stencil_8 = f5_s1_t_x->add_op("op_hcompute_f5_0_stencil_8");
  hcompute_f5_0_stencil_8->add_function("hcompute_f5_0_stencil_8");
  hcompute_f5_0_stencil_8->add_load("f4_0_stencil", "f5_s1_t_x");
  hcompute_f5_0_stencil_8->add_load("f4_0_stencil", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_0_stencil_8->add_load("f4_1_stencil", "f5_s1_t_x");
  hcompute_f5_0_stencil_8->add_load("f4_1_stencil", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f5_s1_t_x");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f5_s1_t_x");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_0_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_0_stencil_8->add_store("f5_0_stencil", "f5_s1_t_x");
  hcompute_f5_0_stencil_8->compute_unit_needs_index_variable("f5_s1_t_x");

//store is: f5.1.stencil(f5_s1_t_x) = (((hw_twi_global_wrapper.stencil(f5_s1_t_x, 1, 2)*(f4.0.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2))))) + (hw_twi_global_wrapper.stencil(f5_s1_t_x, 0, 2)*(f4.1.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2)))))) + ((f4.0.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 1, 2)) + (f4.1.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 0, 2))))
  auto hcompute_f5_1_stencil_8 = f5_s1_t_x->add_op("op_hcompute_f5_1_stencil_8");
  hcompute_f5_1_stencil_8->add_function("hcompute_f5_1_stencil_8");
  hcompute_f5_1_stencil_8->add_load("f4_0_stencil", "f5_s1_t_x");
  hcompute_f5_1_stencil_8->add_load("f4_0_stencil", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_1_stencil_8->add_load("f4_1_stencil", "f5_s1_t_x");
  hcompute_f5_1_stencil_8->add_load("f4_1_stencil", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "f5_s1_t_x");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "f5_s1_t_x");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "1", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_1_stencil_8->add_load("hw_twi_global_wrapper_stencil", "2", "0", "((f5_s1_t_x + 4) % 8)");
  hcompute_f5_1_stencil_8->add_store("f5_1_stencil", "f5_s1_t_x");
  hcompute_f5_1_stencil_8->compute_unit_needs_index_variable("f5_s1_t_x");

//consuming f5
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f5.0.stencil(hw_output_s0_x_xi), f5.1.stencil(hw_output_s0_x_xi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f5_0_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("f5_1_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}

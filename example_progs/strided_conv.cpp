#include "example_progs.h"

prog strided_conv() {
  prog prg;
  prg.compute_unit_file = "strided_conv_compute.h";
  prg.name = "strided_conv";

// Stencil<uint16_t, 63, 63> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 31, 31> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 63);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 63);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 31);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 31);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 31);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 31);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = ((hw_input_global_wrapper.stencil((conv_s1_x*2), (conv_s1_y*2))*(uint16)11) + (conv.stencil(conv_s1_x, conv_s1_y) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 1), (conv_s1_y*2))*(uint16)14) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 2), (conv_s1_y*2))*(uint16)17) + ((hw_input_global_wrapper.stencil((conv_s1_x*2), ((conv_s1_y*2) + 1))*(uint16)12) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 2), ((conv_s1_y*2) + 1))*(uint16)18) + ((hw_input_global_wrapper.stencil((conv_s1_x*2), ((conv_s1_y*2) + 2))*(uint16)13) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2))*(uint16)19) + (hw_input_global_wrapper.stencil(((conv_s1_x*2) + 1), ((conv_s1_y*2) + 2))*(uint16)16)))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y*2)", "(conv_s1_x*2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y*2)", "((conv_s1_x*2) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y*2)", "((conv_s1_x*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 1)", "(conv_s1_x*2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 1)", "((conv_s1_x*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 2)", "(conv_s1_x*2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 2)", "((conv_s1_x*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 2)", "((conv_s1_x*2) + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 31);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 31);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


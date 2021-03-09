prog conv_3_3() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_halide_compute.h";
  prg.name = "conv_3_3";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 62, 62> &hw_output_stencil = arg_1;
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
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);
////producing conv.stencil

//store is: conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = (uint16)0
  auto hcompute_conv_stencil = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

//store is: conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*(uint16)11) + (conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)*(uint16)14) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), hw_output_s0_y_yi)*(uint16)17) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))*(uint16)12) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))*(uint16)255) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 1))*(uint16)18) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 2))*(uint16)13) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 2))*(uint16)19) + (hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 2))*(uint16)16))))))))))
  auto hcompute_conv_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

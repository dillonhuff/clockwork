#include "example_progs.h"

prog resnet_size_test() {
  prog prg;
  prg.compute_unit_file = "resnet_simple_compute.h";
  prg.name = "resnet_size_test";

// Stencil<int16_t, 1, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 1, 1, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 1> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 9);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 9);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);

//store is: hw_kernel_global_wrapper.stencil(0, 0, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(0, 0, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_x->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "0", "0");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "0", "0");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 7);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 7);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 7);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 7);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = (conv.stencil(conv_s1_x, conv_s1_y, 0) + (hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_1->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_1->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 7);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 7);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog resnet_tiny() {
  prog prg;
  prg.compute_unit_file = "resnet_simple_compute.h";
  prg.name = "resnet_tiny";

// Stencil<int16_t, 1, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 1, 1, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 1> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 16);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 16);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);

//store is: hw_kernel_global_wrapper.stencil(0, 0, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(0, 0, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_x->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "0", "0");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "0", "0");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 14);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 14);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 14);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 14);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = (conv.stencil(conv_s1_x, conv_s1_y, 0) + (hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_1->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_1->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 14);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 14);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog resnet_simple() {
  prog prg;
  prg.compute_unit_file = "resnet_simple_compute.h";
  prg.name = "resnet_simple";

// Stencil<int16_t, 1, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 1, 1, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 1> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);

//store is: hw_kernel_global_wrapper.stencil(0, 0, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(0, 0, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_x->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "0", "0");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "0", "0");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = (conv.stencil(conv_s1_x, conv_s1_y, 0) + (hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_1->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_1->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

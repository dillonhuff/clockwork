#include "example_progs.h"

prog resnet_multi_tiny() {
  prog prg;
  prg.compute_unit_file = "resnet_compute.h";
  prg.name = "resnet_multi_tiny";

// Stencil<uint16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 8, 3, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 3> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 16);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 16);
  auto hw_input_global_wrapper_s0_z = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_z", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_z->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_z");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 3);
  auto hw_kernel_global_wrapper_s0_z = hw_kernel_global_wrapper_s0_w->add_loop("hw_kernel_global_wrapper_s0_z", 0, 8);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_z->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 14);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 14);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 14);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 14);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_3 = conv_s1_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_3->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_4 = conv_s1_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_4->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_5 = conv_s1_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_5->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 14);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 14);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog resnet() {
  prog prg;
  prg.compute_unit_file = "resnet_compute.h";
  prg.name = "resnet";

// Stencil<uint16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 8, 3, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 3> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);
  auto hw_input_global_wrapper_s0_z = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_z", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_z->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_z");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 3);
  auto hw_kernel_global_wrapper_s0_z = hw_kernel_global_wrapper_s0_w->add_loop("hw_kernel_global_wrapper_s0_z", 0, 8);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_z->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_3 = conv_s1_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_3->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_4 = conv_s1_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_4->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_5 = conv_s1_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_5->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

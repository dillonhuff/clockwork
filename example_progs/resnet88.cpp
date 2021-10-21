#include "example_progs.h"

prog resnet88() {
  prog prg;
  prg.compute_unit_file = "resnet88_compute.h";
  prg.name = "resnet88";

// Stencil<int16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 8, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 8> &hw_output_stencil = arg_2;
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

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//store is: hw_input_global_wrapper.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");
  hcompute_hw_input_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");

//store is: hw_input_global_wrapper.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_5 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");
  hcompute_hw_input_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");

//store is: hw_input_global_wrapper.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");
  hcompute_hw_input_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");

//store is: hw_input_global_wrapper.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_7 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");
  hcompute_hw_input_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 8);
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

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (int16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (int16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (int16)0
  auto hcompute_conv_stencil_3 = conv_s0_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_store("conv_stencil", "3", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 4) = (int16)0
  auto hcompute_conv_stencil_4 = conv_s0_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_store("conv_stencil", "4", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 5) = (int16)0
  auto hcompute_conv_stencil_5 = conv_s0_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_store("conv_stencil", "5", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 6) = (int16)0
  auto hcompute_conv_stencil_6 = conv_s0_x->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_store("conv_stencil", "6", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 7) = (int16)0
  auto hcompute_conv_stencil_7 = conv_s0_x->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_store("conv_stencil", "7", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_x->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_8->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_x->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_9->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_x->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_10->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + ((hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_x->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "3", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "0");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "1");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "2");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "3");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "4");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "5");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "7");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "6");
  hcompute_conv_stencil_11->add_store("conv_stencil", "3", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 4) = ((hw_kernel_global_wrapper.stencil(0, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 4) + ((hw_kernel_global_wrapper.stencil(1, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_x->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "4", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "0");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "1");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "2");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "3");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "4");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "5");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "7");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "6");
  hcompute_conv_stencil_12->add_store("conv_stencil", "4", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 5) = ((hw_kernel_global_wrapper.stencil(0, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 5) + ((hw_kernel_global_wrapper.stencil(1, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_x->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "5", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "0");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "1");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "2");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "3");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "4");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "5");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "7");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "6");
  hcompute_conv_stencil_13->add_store("conv_stencil", "5", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 6) = ((hw_kernel_global_wrapper.stencil(0, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 6) + ((hw_kernel_global_wrapper.stencil(1, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_x->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "6", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "0");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "1");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "2");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "3");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "4");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "5");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "7");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "6");
  hcompute_conv_stencil_14->add_store("conv_stencil", "6", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 7) = ((hw_kernel_global_wrapper.stencil(0, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 7) + ((hw_kernel_global_wrapper.stencil(1, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_x->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "7", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "0");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "1");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "2");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "3");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "4");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "5");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "7");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "6");
  hcompute_conv_stencil_15->add_store("conv_stencil", "7", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 28);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("conv_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 28);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("conv_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  auto hw_output_s0_y_yi_3 = prg.add_loop("hw_output_s0_y_yi_3", 0, 28);
  auto hw_output_s0_x_xi_3 = hw_output_s0_y_yi_3->add_loop("hw_output_s0_x_xi_3", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3) = conv.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_x_xi_3->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("conv_stencil", "3", "hw_output_s0_y_yi_3", "hw_output_s0_x_xi_3");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "3", "hw_output_s0_y_yi_3", "hw_output_s0_x_xi_3");
  auto hw_output_s0_y_yi_4 = prg.add_loop("hw_output_s0_y_yi_4", 0, 28);
  auto hw_output_s0_x_xi_4 = hw_output_s0_y_yi_4->add_loop("hw_output_s0_x_xi_4", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4) = conv.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_x_xi_4->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("conv_stencil", "4", "hw_output_s0_y_yi_4", "hw_output_s0_x_xi_4");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "4", "hw_output_s0_y_yi_4", "hw_output_s0_x_xi_4");
  auto hw_output_s0_y_yi_5 = prg.add_loop("hw_output_s0_y_yi_5", 0, 28);
  auto hw_output_s0_x_xi_5 = hw_output_s0_y_yi_5->add_loop("hw_output_s0_x_xi_5", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5) = conv.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_x_xi_5->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("conv_stencil", "5", "hw_output_s0_y_yi_5", "hw_output_s0_x_xi_5");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "5", "hw_output_s0_y_yi_5", "hw_output_s0_x_xi_5");
  auto hw_output_s0_y_yi_6 = prg.add_loop("hw_output_s0_y_yi_6", 0, 28);
  auto hw_output_s0_x_xi_6 = hw_output_s0_y_yi_6->add_loop("hw_output_s0_x_xi_6", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6) = conv.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_x_xi_6->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("conv_stencil", "6", "hw_output_s0_y_yi_6", "hw_output_s0_x_xi_6");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "6", "hw_output_s0_y_yi_6", "hw_output_s0_x_xi_6");
  auto hw_output_s0_y_yi_7 = prg.add_loop("hw_output_s0_y_yi_7", 0, 28);
  auto hw_output_s0_x_xi_7 = hw_output_s0_y_yi_7->add_loop("hw_output_s0_x_xi_7", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7) = conv.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_x_xi_7->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("conv_stencil", "7", "hw_output_s0_y_yi_7", "hw_output_s0_x_xi_7");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "7", "hw_output_s0_y_yi_7", "hw_output_s0_x_xi_7");

  return prg;
}

prog resnet88_chain() {
  prog prg;
  prg.compute_unit_file = "resnet88_chain_compute.h";
  prg.name = "resnet88_chain";

// Stencil<int16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 8, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 8> &hw_output_stencil = arg_2;
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

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//store is: hw_input_global_wrapper.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");
  hcompute_hw_input_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");

//store is: hw_input_global_wrapper.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_5 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");
  hcompute_hw_input_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");

//store is: hw_input_global_wrapper.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");
  hcompute_hw_input_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");

//store is: hw_input_global_wrapper.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_7 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");
  hcompute_hw_input_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 8);
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

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (int16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (int16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (int16)0
  auto hcompute_conv_stencil_3 = conv_s0_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_store("conv_stencil", "3", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 4) = (int16)0
  auto hcompute_conv_stencil_4 = conv_s0_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_store("conv_stencil", "4", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 5) = (int16)0
  auto hcompute_conv_stencil_5 = conv_s0_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_store("conv_stencil", "5", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 6) = (int16)0
  auto hcompute_conv_stencil_6 = conv_s0_x->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_store("conv_stencil", "6", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 7) = (int16)0
  auto hcompute_conv_stencil_7 = conv_s0_x->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_store("conv_stencil", "7", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_x->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_8->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_x->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_9->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_x->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_10->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + ((hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_x->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "3", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "0");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "1");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "2");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "3");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "4");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "5");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "7");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "6");
  hcompute_conv_stencil_11->add_store("conv_stencil", "3", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 4) = ((hw_kernel_global_wrapper.stencil(0, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 4) + ((hw_kernel_global_wrapper.stencil(1, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_x->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "4", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "0");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "1");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "2");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "3");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "4");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "5");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "7");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "6");
  hcompute_conv_stencil_12->add_store("conv_stencil", "4", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 5) = ((hw_kernel_global_wrapper.stencil(0, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 5) + ((hw_kernel_global_wrapper.stencil(1, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_x->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "5", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "0");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "1");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "2");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "3");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "4");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "5");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "7");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "6");
  hcompute_conv_stencil_13->add_store("conv_stencil", "5", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 6) = ((hw_kernel_global_wrapper.stencil(0, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 6) + ((hw_kernel_global_wrapper.stencil(1, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_x->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "6", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "0");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "1");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "2");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "3");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "4");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "5");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "7");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "6");
  hcompute_conv_stencil_14->add_store("conv_stencil", "6", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 7) = ((hw_kernel_global_wrapper.stencil(0, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 7) + ((hw_kernel_global_wrapper.stencil(1, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_x->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "7", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "0");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "1");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "2");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "3");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "4");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "5");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "7");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "6");
  hcompute_conv_stencil_15->add_store("conv_stencil", "7", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 8);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


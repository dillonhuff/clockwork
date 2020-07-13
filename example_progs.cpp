#include "example_progs.h"

prog resnet() {
  prog prg;
  prg.compute_unit_file = "resnet_compute.h";
  prg.name = "resnet";

// Stencil<uint16_t, 8, 30, 30> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint16_t, 8, 16, 3, 3> &kernel_copy_stencil = arg_1;
  prg.add_input("kernel_copy_stencil");
  prg.buffer_port_widths["kernel_copy_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming kernel_copy.stencil

//consuming input_copy.stencil
////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 30);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 30);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 8);

//store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
////producing hw_kernel.stencil
  auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 16);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 8);

//store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);
  auto conv_s0_w = conv_s0_x->add_loop("conv_s0_w", 0, 16);

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_w->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y", "conv_s0_w");

//consuming hw_kernel.stencil

//consuming hw_input.stencil
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);
  auto conv_s1_r_y = conv_s1_x->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);

//store is: conv.stencil(conv.s1.x, conv.s1.y, 0) = ((hw_kernel.stencil(0, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 0) + (hw_kernel.stencil(7, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "0");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "0", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "1", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "2", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "3", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "4", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "5", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "6", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "7", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "0");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 1) = ((hw_kernel.stencil(0, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 1) + (hw_kernel.stencil(7, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_2 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "1");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "1", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "2", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "3", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "4", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "5", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "6", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "7", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "0", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "1");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 2) = ((hw_kernel.stencil(0, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 2) + (hw_kernel.stencil(7, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_3 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "2");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "0", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "1", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "2", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "3", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "4", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "5", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "6", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "7", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "2");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 3) = ((hw_kernel.stencil(0, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 3) + (hw_kernel.stencil(7, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_4 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "3");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "0", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "1", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "2", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "3", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "4", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "5", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "6", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "7", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "3");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 4) = ((hw_kernel.stencil(0, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 4) + (hw_kernel.stencil(7, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_5 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "4");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "0", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "1", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "2", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "3", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "4", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "5", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "6", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "7", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "4");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 5) = ((hw_kernel.stencil(0, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 5) + (hw_kernel.stencil(7, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_6 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "5");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "0", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "1", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "2", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "3", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "4", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "5", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "6", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "7", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "5");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 6) = ((hw_kernel.stencil(0, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 6) + (hw_kernel.stencil(7, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_7 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "6");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "0", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "1", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "2", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "3", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "4", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "5", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "6", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "7", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "6");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 7) = ((hw_kernel.stencil(0, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 7) + (hw_kernel.stencil(7, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "7");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "0", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "1", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "2", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "3", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "4", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "5", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "6", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "7", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "7");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 8) = ((hw_kernel.stencil(0, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 8) + (hw_kernel.stencil(7, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "8");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "0", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "1", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "2", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "3", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "4", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "5", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "6", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "7", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "8");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 9) = ((hw_kernel.stencil(0, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 9) + (hw_kernel.stencil(7, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "9");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "0", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "1", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "2", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "3", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "4", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "5", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "6", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "7", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "9");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 10) = ((hw_kernel.stencil(0, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 10) + (hw_kernel.stencil(7, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "10");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "0", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "1", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "2", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "3", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "4", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "5", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "6", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "7", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "10");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 11) = ((hw_kernel.stencil(0, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 11) + (hw_kernel.stencil(7, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "11");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "0", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "1", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "2", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "3", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "4", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "5", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "6", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "7", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "11");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 12) = ((hw_kernel.stencil(0, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 12) + (hw_kernel.stencil(7, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "12");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "3", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "4", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "5", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "6", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "7", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "0", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "1", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "2", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "12");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 13) = ((hw_kernel.stencil(0, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 13) + (hw_kernel.stencil(7, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "13");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "0", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "1", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "2", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "3", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "4", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "5", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "6", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "7", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "13");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 14) = ((hw_kernel.stencil(0, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 14) + (hw_kernel.stencil(7, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "14");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "0", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "1", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "2", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "3", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "4", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "5", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "6", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "7", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "14");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 15) = ((hw_kernel.stencil(0, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 15) + (hw_kernel.stencil(7, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_16 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_16");
  hcompute_conv_stencil_16->add_function("hcompute_conv_stencil_16");
  hcompute_conv_stencil_16->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "15");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "0", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "1", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "2", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "3", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "4", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "5", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "6", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "7", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "15");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 16);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");

  return prg;
}
prog mini_conv_halide_fixed() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_compute.h";
  prg.name = "mini_conv_halide_fixed";

  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;

  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

  auto loop_hw_input_copy_s0_x = prg.add_loop("hw_input_copy_s0_x", 0, 64);

  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x");

  auto loop_hw_output_s0_x_xo = prg.add_loop("hw_output_s0_x_xo", 0, 62);

  auto hcompute_conv_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  prg.buffer_port_widths["conv_stencil_init"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil_init", "hw_output_s0_x_xo");

  auto hcompute_conv_stencil_1 = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil_init", "hw_output_s0_x_xo");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "hw_output_s0_x_xo");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xo");

  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo");

  return prg;
}

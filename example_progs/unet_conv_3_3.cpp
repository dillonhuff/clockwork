#include "example_progs.h"


prog unet_conv_3_3() {
  prog prg;
  prg.compute_unit_file = "unet_conv_3_3_compute.h";
  prg.name = "unet_conv_3_3";
  cout << "Name: " << prg.name << endl;

// Stencil<uint16_t, 2, 16, 16> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint16_t, 2, 4, 3, 3> &kernel_copy_stencil = arg_1;
  prg.add_input("kernel_copy_stencil");
  prg.buffer_port_widths["kernel_copy_stencil"] = 16;
// Stencil<uint16_t, 14, 14, 4> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 16);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 16);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 2);

//store is: hw_input.stencil(hw_input_s0_z, hw_input_s0_x, hw_input_s0_y) = input_copy.stencil(hw_input_s0_z, hw_input_s0_x, hw_input_s0_y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");

//consuming hw_input.stencil
////producing hw_kernel.stencil
  auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 4);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 2);

//store is: hw_kernel.stencil(hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y) = kernel_copy.stencil(hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");

//consuming hw_kernel.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 14);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 14);
  auto conv_s0_w = conv_s0_x->add_loop("conv_s0_w", 0, 4);

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_w->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_w", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_r_z = conv_s1_r_x->add_loop("conv_s1_r_z", 0, 2);
  auto conv_s1_w = conv_s1_r_z->add_loop("conv_s1_w", 0, 4);
  auto conv_s1_y_y = conv_s1_w->add_loop("conv_s1_y_y", 0, 5);
  auto conv_s1_x_x = conv_s1_y_y->add_loop("conv_s1_x_x", 0, 5);

//store is: conv.stencil((conv_s1_x_x*3), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil((conv_s1_x_x*3), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x*3) + conv_s1_r_x), (conv_s1_r_y + (conv_s1_y_y*3)))))
  auto hcompute_conv_stencil_1 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "(conv_s1_x_x*3)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_r_y + (conv_s1_y_y*3))", "((conv_s1_x_x*3) + conv_s1_r_x)", "conv_s1_r_z");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "(conv_s1_x_x*3)");

//store is: conv.stencil(((conv_s1_x_x*3) + 1), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil(((conv_s1_x_x*3) + 1), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x*3) + conv_s1_r_x) + 1), (conv_s1_r_y + (conv_s1_y_y*3)))))
  auto hcompute_conv_stencil_2 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_load("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 1)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "(conv_s1_r_y + (conv_s1_y_y*3))", "(((conv_s1_x_x*3) + conv_s1_r_x) + 1)", "conv_s1_r_z");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_2->add_store("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 1)");

//store is: conv.stencil(((conv_s1_x_x*3) + 2), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil(((conv_s1_x_x*3) + 2), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x*3) + conv_s1_r_x) + 2), (conv_s1_r_y + (conv_s1_y_y*3)))))
  auto hcompute_conv_stencil_3 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 2)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "(conv_s1_r_y + (conv_s1_y_y*3))", "(((conv_s1_x_x*3) + conv_s1_r_x) + 2)", "conv_s1_r_z");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_3->add_store("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 2)");
  auto conv_s1_x_x_1 = conv_s1_y_y->add_loop("conv_s1_x_x_1", 0, 5);

//store is: conv.stencil((conv_s1_x_x_1*3), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil((conv_s1_x_x_1*3), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x_1*3) + conv_s1_r_x), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
  auto hcompute_conv_stencil_4 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "(conv_s1_x_x_1*3)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)", "((conv_s1_x_x_1*3) + conv_s1_r_x)", "conv_s1_r_z");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_4->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "(conv_s1_x_x_1*3)");

//store is: conv.stencil(((conv_s1_x_x_1*3) + 1), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil(((conv_s1_x_x_1*3) + 1), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_1*3) + conv_s1_r_x) + 1), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
  auto hcompute_conv_stencil_5 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 1)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)", "(((conv_s1_x_x_1*3) + conv_s1_r_x) + 1)", "conv_s1_r_z");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_5->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 1)");

//store is: conv.stencil(((conv_s1_x_x_1*3) + 2), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil(((conv_s1_x_x_1*3) + 2), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_1*3) + conv_s1_r_x) + 2), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
  auto hcompute_conv_stencil_6 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 2)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)", "(((conv_s1_x_x_1*3) + conv_s1_r_x) + 2)", "conv_s1_r_z");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_6->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 2)");
  auto conv_s1_x_x_2 = conv_s1_y_y->add_loop("conv_s1_x_x_2", 0, 5);

//store is: conv.stencil((conv_s1_x_x_2*3), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil((conv_s1_x_x_2*3), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x_2*3) + conv_s1_r_x), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
  auto hcompute_conv_stencil_7 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "(conv_s1_x_x_2*3)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)", "((conv_s1_x_x_2*3) + conv_s1_r_x)", "conv_s1_r_z");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_7->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "(conv_s1_x_x_2*3)");

//store is: conv.stencil(((conv_s1_x_x_2*3) + 1), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil(((conv_s1_x_x_2*3) + 1), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_2*3) + conv_s1_r_x) + 1), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
  auto hcompute_conv_stencil_8 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 1)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)", "(((conv_s1_x_x_2*3) + conv_s1_r_x) + 1)", "conv_s1_r_z");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_8->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 1)");

//store is: conv.stencil(((conv_s1_x_x_2*3) + 2), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil(((conv_s1_x_x_2*3) + 2), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_2*3) + conv_s1_r_x) + 2), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
  auto hcompute_conv_stencil_9 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 2)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)", "(((conv_s1_x_x_2*3) + conv_s1_r_x) + 2)", "conv_s1_r_z");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_9->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 2)");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 4);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 14);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 14);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


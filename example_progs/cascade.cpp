#include "example_progs.h"

prog cascade() {
  prog prg;
  prg.compute_unit_file = "cascade_compute.h";
  prg.name = "cascade";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 60, 60> &hw_output_stencil = arg_1;
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
////producing conv1.stencil
  auto conv1_s0_y = prg.add_loop("conv1_s0_y", 0, 62);
  auto conv1_s0_x = conv1_s0_y->add_loop("conv1_s0_x", 0, 62);

//store is: conv1.stencil(conv1_s0_x, conv1_s0_y) = (uint16)0
  auto hcompute_conv1_stencil = conv1_s0_x->add_op("op_hcompute_conv1_stencil");
  hcompute_conv1_stencil->add_function("hcompute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 16;
  hcompute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_y", "conv1_s0_x");
  auto conv1_s1_y = prg.add_loop("conv1_s1_y", 0, 62);
  auto conv1_s1_x = conv1_s1_y->add_loop("conv1_s1_x", 0, 62);

//store is: conv1.stencil(conv1_s1_x, conv1_s1_y) = (hw_input_global_wrapper.stencil(conv1_s1_x, conv1_s1_y) + (conv1.stencil(conv1_s1_x, conv1_s1_y) + ((hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 1))*(uint16)2) + (hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 2)) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), conv1_s1_y)*(uint16)2) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 1))*(uint16)4) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 2))*(uint16)2) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), conv1_s1_y) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 2)) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 1))*(uint16)2))))))))))
  auto hcompute_conv1_stencil_1 = conv1_s1_x->add_op("op_hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_function("hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_load("conv1_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_store("conv1_stencil", "conv1_s1_y", "conv1_s1_x");

//consuming conv1.stencil
////producing conv2.stencil
  auto conv2_s0_y = prg.add_loop("conv2_s0_y", 0, 60);
  auto conv2_s0_x = conv2_s0_y->add_loop("conv2_s0_x", 0, 60);

//store is: conv2.stencil(conv2_s0_x, conv2_s0_y) = (uint16)0
  auto hcompute_conv2_stencil = conv2_s0_x->add_op("op_hcompute_conv2_stencil");
  hcompute_conv2_stencil->add_function("hcompute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 16;
  hcompute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_y", "conv2_s0_x");
  auto conv2_s1_y = prg.add_loop("conv2_s1_y", 0, 60);
  auto conv2_s1_x = conv2_s1_y->add_loop("conv2_s1_x", 0, 60);

//store is: conv2.stencil(conv2_s1_x, conv2_s1_y) = ((conv1.stencil(conv2_s1_x, conv2_s1_y)*(uint16)33) + (conv2.stencil(conv2_s1_x, conv2_s1_y) + (((conv1.stencil((conv2_s1_x + 1), conv2_s1_y)*(uint16)2) + (conv1.stencil((conv2_s1_x + 2), conv2_s1_y) + ((conv1.stencil(conv2_s1_x, (conv2_s1_y + 1))*(uint16)2) + ((conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 1))*(uint16)4) + ((conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 1))*(uint16)2) + (conv1.stencil(conv2_s1_x, (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 2))*(uint16)2))))))))*(uint16)33)))
  auto hcompute_conv2_stencil_1 = conv2_s1_x->add_op("op_hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_function("hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv2_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_store("conv2_stencil", "conv2_s1_y", "conv2_s1_x");

//consuming conv2.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv2.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog cascade(int arg_1, int arg_2, string suffix) {
  prog prg;
  prg.compute_unit_file = "cascade_compute.h";
  prg.name = "cascade" + suffix;

// Stencil<uint16_t, (outImgSizeX + 4), (outImgSizeY + 4)> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
int32_t outImgSizeX = arg_1;
int32_t outImgSizeY = arg_2;
// Stencil<uint16_t, outImgSizeX, outImgSizeY> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, (outImgSizeY + 4));
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, (outImgSizeX + 4));

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

////producing conv1.stencil
  auto conv1_s0_y = prg.add_loop("conv1_s0_y", 0, (outImgSizeY + 2));
  auto conv1_s0_x = conv1_s0_y->add_loop("conv1_s0_x", 0, (outImgSizeX + 2));

//store is: conv1.stencil(conv1_s0_x, conv1_s0_y) = (uint16)0
  auto hcompute_conv1_stencil = conv1_s0_x->add_op("op_hcompute_conv1_stencil");
  hcompute_conv1_stencil->add_function("hcompute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 16;
  hcompute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_y", "conv1_s0_x");
  auto conv1_s1_y = prg.add_loop("conv1_s1_y", 0, (outImgSizeY + 2));
  auto conv1_s1_x = conv1_s1_y->add_loop("conv1_s1_x", 0, (outImgSizeX + 2));

//store is: conv1.stencil(conv1_s1_x, conv1_s1_y) = (hw_input_global_wrapper.stencil(conv1_s1_x, conv1_s1_y) + (conv1.stencil(conv1_s1_x, conv1_s1_y) + ((hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 1))*(uint16)2) + (hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 2)) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), conv1_s1_y)*(uint16)2) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 1))*(uint16)4) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 2))*(uint16)2) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), conv1_s1_y) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 2)) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 1))*(uint16)2))))))))))
  auto hcompute_conv1_stencil_1 = conv1_s1_x->add_op("op_hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_function("hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_load("conv1_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_store("conv1_stencil", "conv1_s1_y", "conv1_s1_x");

//consuming conv1.stencil
////producing conv2.stencil
  auto conv2_s0_y = prg.add_loop("conv2_s0_y", 0, outImgSizeY);
  auto conv2_s0_x = conv2_s0_y->add_loop("conv2_s0_x", 0, outImgSizeX);

//store is: conv2.stencil(conv2_s0_x, conv2_s0_y) = (uint16)0
  auto hcompute_conv2_stencil = conv2_s0_x->add_op("op_hcompute_conv2_stencil");
  hcompute_conv2_stencil->add_function("hcompute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 16;
  hcompute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_y", "conv2_s0_x");
  auto conv2_s1_y = prg.add_loop("conv2_s1_y", 0, outImgSizeY);
  auto conv2_s1_x = conv2_s1_y->add_loop("conv2_s1_x", 0, outImgSizeX);

//store is: conv2.stencil(conv2_s1_x, conv2_s1_y) = (conv1.stencil(conv2_s1_x, conv2_s1_y) + (conv2.stencil(conv2_s1_x, conv2_s1_y) + ((conv1.stencil((conv2_s1_x + 1), conv2_s1_y)*(uint16)2) + (conv1.stencil((conv2_s1_x + 2), conv2_s1_y) + ((conv1.stencil(conv2_s1_x, (conv2_s1_y + 1))*(uint16)2) + ((conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 1))*(uint16)4) + ((conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 1))*(uint16)2) + (conv1.stencil(conv2_s1_x, (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 2))*(uint16)2))))))))))
  auto hcompute_conv2_stencil_1 = conv2_s1_x->add_op("op_hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_function("hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv2_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_store("conv2_stencil", "conv2_s1_y", "conv2_s1_x");

//consuming conv2.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, outImgSizeY);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, outImgSizeX);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv2.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

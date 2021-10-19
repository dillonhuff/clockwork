#include "example_progs.h"

prog bc_const() {
  prog prg;
  prg.compute_unit_file = "bc_const_compute.h";
  prg.name = "bc_const";

// Stencil<int16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_output_stencil = arg_1;

  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

  //store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing constant_exterior.stencil
  auto constant_exterior_s0_x = prg.add_loop("constant_exterior_s0_x", -1, 65);

//store is: constant_exterior.stencil((constant_exterior_s0_x + 1), 0) = (int16)0
  auto hcompute_constant_exterior_stencil = constant_exterior_s0_x->add_op("op_hcompute_constant_exterior_stencil");
  hcompute_constant_exterior_stencil->add_function("hcompute_constant_exterior_stencil");
  prg.buffer_port_widths["constant_exterior_stencil"] = 16;
  hcompute_constant_exterior_stencil->add_store("constant_exterior_stencil", "0", "(constant_exterior_s0_x + 1)");
  auto constant_exterior_s0_y = prg.add_loop("constant_exterior_s0_y", 0, 64);

//store is: constant_exterior.stencil(0, (constant_exterior_s0_y + 1)) = (int16)0
  auto hcompute_constant_exterior_stencil_1 = constant_exterior_s0_y->add_op("op_hcompute_constant_exterior_stencil_1");
  hcompute_constant_exterior_stencil_1->add_function("hcompute_constant_exterior_stencil_1");
  hcompute_constant_exterior_stencil_1->add_store("constant_exterior_stencil", "(constant_exterior_s0_y + 1)", "0");
  auto constant_exterior_s0_x_1 = constant_exterior_s0_y->add_loop("constant_exterior_s0_x_1", 0, 64);

//store is: constant_exterior.stencil((constant_exterior_s0_x_1 + 1), (constant_exterior_s0_y + 1)) = hw_input_global_wrapper.stencil(constant_exterior_s0_x_1, constant_exterior_s0_y)
  auto hcompute_constant_exterior_stencil_2 = constant_exterior_s0_x_1->add_op("op_hcompute_constant_exterior_stencil_2");
  hcompute_constant_exterior_stencil_2->add_function("hcompute_constant_exterior_stencil_2");
  hcompute_constant_exterior_stencil_2->add_load("hw_input_global_wrapper_stencil", "constant_exterior_s0_y", "constant_exterior_s0_x_1");
  hcompute_constant_exterior_stencil_2->add_store("constant_exterior_stencil", "(constant_exterior_s0_y + 1)", "(constant_exterior_s0_x_1 + 1)");

//store is: constant_exterior.stencil(65, (constant_exterior_s0_y + 1)) = (int16)0
  auto hcompute_constant_exterior_stencil_3 = constant_exterior_s0_y->add_op("op_hcompute_constant_exterior_stencil_3");
  hcompute_constant_exterior_stencil_3->add_function("hcompute_constant_exterior_stencil_3");
  hcompute_constant_exterior_stencil_3->add_store("constant_exterior_stencil", "(constant_exterior_s0_y + 1)", "65");
  auto constant_exterior_s0_x_2 = prg.add_loop("constant_exterior_s0_x_2", -1, 65);

//store is: constant_exterior.stencil((constant_exterior_s0_x_2 + 1), 65) = (int16)0
  auto hcompute_constant_exterior_stencil_4 = constant_exterior_s0_x_2->add_op("op_hcompute_constant_exterior_stencil_4");
  hcompute_constant_exterior_stencil_4->add_function("hcompute_constant_exterior_stencil_4");
  hcompute_constant_exterior_stencil_4->add_store("constant_exterior_stencil", "65", "(constant_exterior_s0_x_2 + 1)");

//consuming constant_exterior.stencil
////producing constant_exterior$1.stencil
  auto constant_exterior_1_s0_x = prg.add_loop("constant_exterior_1_s0_x", -1, 65);

//store is: constant_exterior$1.stencil((constant_exterior_1_s0_x + 1), 0) = (int16)5
  auto hcompute_constant_exterior_1_stencil = constant_exterior_1_s0_x->add_op("op_hcompute_constant_exterior_1_stencil");
  hcompute_constant_exterior_1_stencil->add_function("hcompute_constant_exterior_1_stencil");
  prg.buffer_port_widths["constant_exterior_1_stencil"] = 16;
  hcompute_constant_exterior_1_stencil->add_store("constant_exterior_1_stencil", "0", "(constant_exterior_1_s0_x + 1)");
  auto constant_exterior_1_s0_y = prg.add_loop("constant_exterior_1_s0_y", 0, 64);

//store is: constant_exterior$1.stencil(0, (constant_exterior_1_s0_y + 1)) = (int16)5
  auto hcompute_constant_exterior_1_stencil_1 = constant_exterior_1_s0_y->add_op("op_hcompute_constant_exterior_1_stencil_1");
  hcompute_constant_exterior_1_stencil_1->add_function("hcompute_constant_exterior_1_stencil_1");
  hcompute_constant_exterior_1_stencil_1->add_store("constant_exterior_1_stencil", "(constant_exterior_1_s0_y + 1)", "0");
  auto constant_exterior_1_s0_x_1 = constant_exterior_1_s0_y->add_loop("constant_exterior_1_s0_x_1", 0, 64);

//store is: constant_exterior$1.stencil((constant_exterior_1_s0_x_1 + 1), (constant_exterior_1_s0_y + 1)) = hw_input_global_wrapper.stencil(constant_exterior_1_s0_x_1, constant_exterior_1_s0_y)
  auto hcompute_constant_exterior_1_stencil_2 = constant_exterior_1_s0_x_1->add_op("op_hcompute_constant_exterior_1_stencil_2");
  hcompute_constant_exterior_1_stencil_2->add_function("hcompute_constant_exterior_1_stencil_2");
  hcompute_constant_exterior_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "constant_exterior_1_s0_y", "constant_exterior_1_s0_x_1");
  hcompute_constant_exterior_1_stencil_2->add_store("constant_exterior_1_stencil", "(constant_exterior_1_s0_y + 1)", "(constant_exterior_1_s0_x_1 + 1)");

//store is: constant_exterior$1.stencil(65, (constant_exterior_1_s0_y + 1)) = (int16)5
  auto hcompute_constant_exterior_1_stencil_3 = constant_exterior_1_s0_y->add_op("op_hcompute_constant_exterior_1_stencil_3");
  hcompute_constant_exterior_1_stencil_3->add_function("hcompute_constant_exterior_1_stencil_3");
  hcompute_constant_exterior_1_stencil_3->add_store("constant_exterior_1_stencil", "(constant_exterior_1_s0_y + 1)", "65");
  auto constant_exterior_1_s0_x_2 = prg.add_loop("constant_exterior_1_s0_x_2", -1, 65);

//store is: constant_exterior$1.stencil((constant_exterior_1_s0_x_2 + 1), 65) = (int16)5
  auto hcompute_constant_exterior_1_stencil_4 = constant_exterior_1_s0_x_2->add_op("op_hcompute_constant_exterior_1_stencil_4");
  hcompute_constant_exterior_1_stencil_4->add_function("hcompute_constant_exterior_1_stencil_4");
  hcompute_constant_exterior_1_stencil_4->add_store("constant_exterior_1_stencil", "65", "(constant_exterior_1_s0_x_2 + 1)");

//consuming constant_exterior$1.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 64);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 64);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 64);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 64);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (constant_exterior$1.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (constant_exterior.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (constant_exterior$1.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (constant_exterior.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (constant_exterior$1.stencil(conv_s1_x, (conv_s1_y + 2)) + (constant_exterior.stencil(conv_s1_x, (conv_s1_y + 2)) + (constant_exterior$1.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (constant_exterior.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (constant_exterior$1.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (constant_exterior.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (constant_exterior$1.stencil(conv_s1_x, (conv_s1_y + 1)) + (constant_exterior.stencil(conv_s1_x, (conv_s1_y + 1)) + (constant_exterior$1.stencil((conv_s1_x + 2), conv_s1_y) + (constant_exterior.stencil((conv_s1_x + 2), conv_s1_y) + (constant_exterior$1.stencil((conv_s1_x + 1), conv_s1_y) + (constant_exterior.stencil((conv_s1_x + 1), conv_s1_y) + (constant_exterior$1.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + constant_exterior.stencil(conv_s1_x, conv_s1_y)))))))))))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("constant_exterior_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("constant_exterior_1_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


prog bc_repeat() {
  prog prg;
  prg.compute_unit_file = "bc_repeat_compute.h";
  prg.name = "bc_repeat";

// Stencil<int16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_output_stencil = arg_1;
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
////producing repeat_edge.stencil
  auto repeat_edge_s0_x = prg.add_loop("repeat_edge_s0_x", -1, 65);

//store is: repeat_edge.stencil((repeat_edge_s0_x + 1), 0) = hw_input_global_wrapper.stencil(max(min(repeat_edge_s0_x, 63), 0), 0)
  auto hcompute_repeat_edge_stencil = repeat_edge_s0_x->add_op("op_hcompute_repeat_edge_stencil");
  hcompute_repeat_edge_stencil->add_function("hcompute_repeat_edge_stencil");
  hcompute_repeat_edge_stencil->add_load("hw_input_global_wrapper_stencil", "0", "max(min(repeat_edge_s0_x, 63), 0)");
  prg.buffer_port_widths["repeat_edge_stencil"] = 16;
  hcompute_repeat_edge_stencil->add_store("repeat_edge_stencil", "0", "(repeat_edge_s0_x + 1)");
  auto repeat_edge_s0_y = prg.add_loop("repeat_edge_s0_y", 0, 64);

//store is: repeat_edge.stencil(0, (repeat_edge_s0_y + 1)) = hw_input_global_wrapper.stencil(0, repeat_edge_s0_y)
  auto hcompute_repeat_edge_stencil_1 = repeat_edge_s0_y->add_op("op_hcompute_repeat_edge_stencil_1");
  hcompute_repeat_edge_stencil_1->add_function("hcompute_repeat_edge_stencil_1");
  hcompute_repeat_edge_stencil_1->add_load("hw_input_global_wrapper_stencil", "repeat_edge_s0_y", "0");
  hcompute_repeat_edge_stencil_1->add_store("repeat_edge_stencil", "(repeat_edge_s0_y + 1)", "0");
  auto repeat_edge_s0_x_1 = repeat_edge_s0_y->add_loop("repeat_edge_s0_x_1", 0, 64);

//store is: repeat_edge.stencil((repeat_edge_s0_x_1 + 1), (repeat_edge_s0_y + 1)) = hw_input_global_wrapper.stencil(repeat_edge_s0_x_1, repeat_edge_s0_y)
  auto hcompute_repeat_edge_stencil_2 = repeat_edge_s0_x_1->add_op("op_hcompute_repeat_edge_stencil_2");
  hcompute_repeat_edge_stencil_2->add_function("hcompute_repeat_edge_stencil_2");
  hcompute_repeat_edge_stencil_2->add_load("hw_input_global_wrapper_stencil", "repeat_edge_s0_y", "repeat_edge_s0_x_1");
  hcompute_repeat_edge_stencil_2->add_store("repeat_edge_stencil", "(repeat_edge_s0_y + 1)", "(repeat_edge_s0_x_1 + 1)");

//store is: repeat_edge.stencil(65, (repeat_edge_s0_y + 1)) = hw_input_global_wrapper.stencil(63, repeat_edge_s0_y)
  auto hcompute_repeat_edge_stencil_3 = repeat_edge_s0_y->add_op("op_hcompute_repeat_edge_stencil_3");
  hcompute_repeat_edge_stencil_3->add_function("hcompute_repeat_edge_stencil_3");
  hcompute_repeat_edge_stencil_3->add_load("hw_input_global_wrapper_stencil", "repeat_edge_s0_y", "63");
  hcompute_repeat_edge_stencil_3->add_store("repeat_edge_stencil", "(repeat_edge_s0_y + 1)", "65");
  auto repeat_edge_s0_x_2 = prg.add_loop("repeat_edge_s0_x_2", -1, 65);

//store is: repeat_edge.stencil((repeat_edge_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(max(min(repeat_edge_s0_x_2, 63), 0), 63)
  auto hcompute_repeat_edge_stencil_4 = repeat_edge_s0_x_2->add_op("op_hcompute_repeat_edge_stencil_4");
  hcompute_repeat_edge_stencil_4->add_function("hcompute_repeat_edge_stencil_4");
  hcompute_repeat_edge_stencil_4->add_load("hw_input_global_wrapper_stencil", "63", "max(min(repeat_edge_s0_x_2, 63), 0)");
  hcompute_repeat_edge_stencil_4->add_store("repeat_edge_stencil", "65", "(repeat_edge_s0_x_2 + 1)");

//consuming repeat_edge.stencil
////producing repeat_image.stencil
  auto repeat_image_s0_x = prg.add_loop("repeat_image_s0_x", -1, 65);

//store is: repeat_image.stencil((repeat_image_s0_x + 1), 0) = hw_input_global_wrapper.stencil(select(((64 <= repeat_image_s0_x) || (repeat_image_s0_x < 0)), (repeat_image_s0_x % 64), max(min(repeat_image_s0_x, 63), 0)), 63)
  auto hcompute_repeat_image_stencil = repeat_image_s0_x->add_op("op_hcompute_repeat_image_stencil");
  hcompute_repeat_image_stencil->add_function("hcompute_repeat_image_stencil");
  hcompute_repeat_image_stencil->add_load("hw_input_global_wrapper_stencil", "63", "select(((64 <= repeat_image_s0_x) || (repeat_image_s0_x < 0)), (repeat_image_s0_x % 64), max(min(repeat_image_s0_x, 63), 0))");
  prg.buffer_port_widths["repeat_image_stencil"] = 16;
  hcompute_repeat_image_stencil->add_store("repeat_image_stencil", "0", "(repeat_image_s0_x + 1)");
  auto repeat_image_s0_y = prg.add_loop("repeat_image_s0_y", 0, 64);

//store is: repeat_image.stencil(0, (repeat_image_s0_y + 1)) = hw_input_global_wrapper.stencil(63, repeat_image_s0_y)
  auto hcompute_repeat_image_stencil_1 = repeat_image_s0_y->add_op("op_hcompute_repeat_image_stencil_1");
  hcompute_repeat_image_stencil_1->add_function("hcompute_repeat_image_stencil_1");
  hcompute_repeat_image_stencil_1->add_load("hw_input_global_wrapper_stencil", "repeat_image_s0_y", "63");
  hcompute_repeat_image_stencil_1->add_store("repeat_image_stencil", "(repeat_image_s0_y + 1)", "0");
  auto repeat_image_s0_x_1 = repeat_image_s0_y->add_loop("repeat_image_s0_x_1", 0, 64);

//store is: repeat_image.stencil((repeat_image_s0_x_1 + 1), (repeat_image_s0_y + 1)) = hw_input_global_wrapper.stencil(repeat_image_s0_x_1, repeat_image_s0_y)
  auto hcompute_repeat_image_stencil_2 = repeat_image_s0_x_1->add_op("op_hcompute_repeat_image_stencil_2");
  hcompute_repeat_image_stencil_2->add_function("hcompute_repeat_image_stencil_2");
  hcompute_repeat_image_stencil_2->add_load("hw_input_global_wrapper_stencil", "repeat_image_s0_y", "repeat_image_s0_x_1");
  hcompute_repeat_image_stencil_2->add_store("repeat_image_stencil", "(repeat_image_s0_y + 1)", "(repeat_image_s0_x_1 + 1)");

//store is: repeat_image.stencil(65, (repeat_image_s0_y + 1)) = hw_input_global_wrapper.stencil(0, repeat_image_s0_y)
  auto hcompute_repeat_image_stencil_3 = repeat_image_s0_y->add_op("op_hcompute_repeat_image_stencil_3");
  hcompute_repeat_image_stencil_3->add_function("hcompute_repeat_image_stencil_3");
  hcompute_repeat_image_stencil_3->add_load("hw_input_global_wrapper_stencil", "repeat_image_s0_y", "0");
  hcompute_repeat_image_stencil_3->add_store("repeat_image_stencil", "(repeat_image_s0_y + 1)", "65");
  auto repeat_image_s0_x_2 = prg.add_loop("repeat_image_s0_x_2", -1, 65);

//store is: repeat_image.stencil((repeat_image_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(select(((64 <= repeat_image_s0_x_2) || (repeat_image_s0_x_2 < 0)), (repeat_image_s0_x_2 % 64), max(min(repeat_image_s0_x_2, 63), 0)), 0)
  auto hcompute_repeat_image_stencil_4 = repeat_image_s0_x_2->add_op("op_hcompute_repeat_image_stencil_4");
  hcompute_repeat_image_stencil_4->add_function("hcompute_repeat_image_stencil_4");
  hcompute_repeat_image_stencil_4->add_load("hw_input_global_wrapper_stencil", "0", "select(((64 <= repeat_image_s0_x_2) || (repeat_image_s0_x_2 < 0)), (repeat_image_s0_x_2 % 64), max(min(repeat_image_s0_x_2, 63), 0))");
  hcompute_repeat_image_stencil_4->add_store("repeat_image_stencil", "65", "(repeat_image_s0_x_2 + 1)");

//consuming repeat_image.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 64);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 64);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 64);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 64);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (repeat_image.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (repeat_edge.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (repeat_image.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (repeat_edge.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (repeat_image.stencil(conv_s1_x, (conv_s1_y + 2)) + (repeat_edge.stencil(conv_s1_x, (conv_s1_y + 2)) + (repeat_image.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (repeat_edge.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (repeat_image.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (repeat_edge.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (repeat_image.stencil(conv_s1_x, (conv_s1_y + 1)) + (repeat_edge.stencil(conv_s1_x, (conv_s1_y + 1)) + (repeat_image.stencil((conv_s1_x + 2), conv_s1_y) + (repeat_edge.stencil((conv_s1_x + 2), conv_s1_y) + (repeat_image.stencil((conv_s1_x + 1), conv_s1_y) + (repeat_edge.stencil((conv_s1_x + 1), conv_s1_y) + (repeat_image.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + repeat_edge.stencil(conv_s1_x, conv_s1_y)))))))))))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("repeat_edge_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("repeat_image_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog bc_mirror() {
  prog prg;
  prg.compute_unit_file = "bc_mirror_compute.h";
  prg.name = "bc_mirror";

// Stencil<int16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_output_stencil = arg_1;
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
////producing mirror_image.stencil
  auto mirror_image_s0_x = prg.add_loop("mirror_image_s0_x", -1, 65);

//store is: mirror_image.stencil((mirror_image_s0_x + 1), 0) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_s0_x) || (mirror_image_s0_x < 0)), min(select(((mirror_image_s0_x % 128) < 64), (mirror_image_s0_x % 128), (127 - (mirror_image_s0_x % 128))), 63), max(min(mirror_image_s0_x, 63), 0)), 0)
  auto hcompute_mirror_image_stencil = mirror_image_s0_x->add_op("op_hcompute_mirror_image_stencil");
  hcompute_mirror_image_stencil->add_function("hcompute_mirror_image_stencil");
  hcompute_mirror_image_stencil->add_load("hw_input_global_wrapper_stencil", "0", "select(((64 <= mirror_image_s0_x) || (mirror_image_s0_x < 0)), min(select(((mirror_image_s0_x % 128) < 64), (mirror_image_s0_x % 128), (127 - (mirror_image_s0_x % 128))), 63), max(min(mirror_image_s0_x, 63), 0))");
  prg.buffer_port_widths["mirror_image_stencil"] = 16;
  hcompute_mirror_image_stencil->add_store("mirror_image_stencil", "0", "(mirror_image_s0_x + 1)");
  auto mirror_image_s0_y = prg.add_loop("mirror_image_s0_y", 0, 64);

//store is: mirror_image.stencil(0, (mirror_image_s0_y + 1)) = hw_input_global_wrapper.stencil(0, mirror_image_s0_y)
  auto hcompute_mirror_image_stencil_1 = mirror_image_s0_y->add_op("op_hcompute_mirror_image_stencil_1");
  hcompute_mirror_image_stencil_1->add_function("hcompute_mirror_image_stencil_1");
  hcompute_mirror_image_stencil_1->add_load("hw_input_global_wrapper_stencil", "mirror_image_s0_y", "0");
  hcompute_mirror_image_stencil_1->add_store("mirror_image_stencil", "(mirror_image_s0_y + 1)", "0");
  auto mirror_image_s0_x_1 = mirror_image_s0_y->add_loop("mirror_image_s0_x_1", 0, 64);

//store is: mirror_image.stencil((mirror_image_s0_x_1 + 1), (mirror_image_s0_y + 1)) = hw_input_global_wrapper.stencil(mirror_image_s0_x_1, mirror_image_s0_y)
  auto hcompute_mirror_image_stencil_2 = mirror_image_s0_x_1->add_op("op_hcompute_mirror_image_stencil_2");
  hcompute_mirror_image_stencil_2->add_function("hcompute_mirror_image_stencil_2");
  hcompute_mirror_image_stencil_2->add_load("hw_input_global_wrapper_stencil", "mirror_image_s0_y", "mirror_image_s0_x_1");
  hcompute_mirror_image_stencil_2->add_store("mirror_image_stencil", "(mirror_image_s0_y + 1)", "(mirror_image_s0_x_1 + 1)");

//store is: mirror_image.stencil(65, (mirror_image_s0_y + 1)) = hw_input_global_wrapper.stencil(63, mirror_image_s0_y)
  auto hcompute_mirror_image_stencil_3 = mirror_image_s0_y->add_op("op_hcompute_mirror_image_stencil_3");
  hcompute_mirror_image_stencil_3->add_function("hcompute_mirror_image_stencil_3");
  hcompute_mirror_image_stencil_3->add_load("hw_input_global_wrapper_stencil", "mirror_image_s0_y", "63");
  hcompute_mirror_image_stencil_3->add_store("mirror_image_stencil", "(mirror_image_s0_y + 1)", "65");
  auto mirror_image_s0_x_2 = prg.add_loop("mirror_image_s0_x_2", -1, 65);

//store is: mirror_image.stencil((mirror_image_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_s0_x_2) || (mirror_image_s0_x_2 < 0)), min(select(((mirror_image_s0_x_2 % 128) < 64), (mirror_image_s0_x_2 % 128), (127 - (mirror_image_s0_x_2 % 128))), 63), max(min(mirror_image_s0_x_2, 63), 0)), 63)
  auto hcompute_mirror_image_stencil_4 = mirror_image_s0_x_2->add_op("op_hcompute_mirror_image_stencil_4");
  hcompute_mirror_image_stencil_4->add_function("hcompute_mirror_image_stencil_4");
  hcompute_mirror_image_stencil_4->add_load("hw_input_global_wrapper_stencil", "63", "select(((64 <= mirror_image_s0_x_2) || (mirror_image_s0_x_2 < 0)), min(select(((mirror_image_s0_x_2 % 128) < 64), (mirror_image_s0_x_2 % 128), (127 - (mirror_image_s0_x_2 % 128))), 63), max(min(mirror_image_s0_x_2, 63), 0))");
  hcompute_mirror_image_stencil_4->add_store("mirror_image_stencil", "65", "(mirror_image_s0_x_2 + 1)");

//consuming mirror_image.stencil
////producing mirror_image$1.stencil
  auto mirror_image_1_s0_x = prg.add_loop("mirror_image_1_s0_x", -1, 65);

//store is: mirror_image$1.stencil((mirror_image_1_s0_x + 1), 0) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_1_s0_x) || (mirror_image_1_s0_x < 0)), min(select(((mirror_image_1_s0_x % 128) < 64), (mirror_image_1_s0_x % 128), (127 - (mirror_image_1_s0_x % 128))), 63), max(min(mirror_image_1_s0_x, 63), 0)), 0)
  auto hcompute_mirror_image_1_stencil = mirror_image_1_s0_x->add_op("op_hcompute_mirror_image_1_stencil");
  hcompute_mirror_image_1_stencil->add_function("hcompute_mirror_image_1_stencil");
  hcompute_mirror_image_1_stencil->add_load("hw_input_global_wrapper_stencil", "0", "select(((64 <= mirror_image_1_s0_x) || (mirror_image_1_s0_x < 0)), min(select(((mirror_image_1_s0_x % 128) < 64), (mirror_image_1_s0_x % 128), (127 - (mirror_image_1_s0_x % 128))), 63), max(min(mirror_image_1_s0_x, 63), 0))");
  prg.buffer_port_widths["mirror_image_1_stencil"] = 16;
  hcompute_mirror_image_1_stencil->add_store("mirror_image_1_stencil", "0", "(mirror_image_1_s0_x + 1)");
  auto mirror_image_1_s0_y = prg.add_loop("mirror_image_1_s0_y", 0, 64);

//store is: mirror_image$1.stencil(0, (mirror_image_1_s0_y + 1)) = hw_input_global_wrapper.stencil(0, mirror_image_1_s0_y)
  auto hcompute_mirror_image_1_stencil_1 = mirror_image_1_s0_y->add_op("op_hcompute_mirror_image_1_stencil_1");
  hcompute_mirror_image_1_stencil_1->add_function("hcompute_mirror_image_1_stencil_1");
  hcompute_mirror_image_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "mirror_image_1_s0_y", "0");
  hcompute_mirror_image_1_stencil_1->add_store("mirror_image_1_stencil", "(mirror_image_1_s0_y + 1)", "0");
  auto mirror_image_1_s0_x_1 = mirror_image_1_s0_y->add_loop("mirror_image_1_s0_x_1", 0, 64);

//store is: mirror_image$1.stencil((mirror_image_1_s0_x_1 + 1), (mirror_image_1_s0_y + 1)) = hw_input_global_wrapper.stencil(mirror_image_1_s0_x_1, mirror_image_1_s0_y)
  auto hcompute_mirror_image_1_stencil_2 = mirror_image_1_s0_x_1->add_op("op_hcompute_mirror_image_1_stencil_2");
  hcompute_mirror_image_1_stencil_2->add_function("hcompute_mirror_image_1_stencil_2");
  hcompute_mirror_image_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "mirror_image_1_s0_y", "mirror_image_1_s0_x_1");
  hcompute_mirror_image_1_stencil_2->add_store("mirror_image_1_stencil", "(mirror_image_1_s0_y + 1)", "(mirror_image_1_s0_x_1 + 1)");

//store is: mirror_image$1.stencil(65, (mirror_image_1_s0_y + 1)) = hw_input_global_wrapper.stencil(63, mirror_image_1_s0_y)
  auto hcompute_mirror_image_1_stencil_3 = mirror_image_1_s0_y->add_op("op_hcompute_mirror_image_1_stencil_3");
  hcompute_mirror_image_1_stencil_3->add_function("hcompute_mirror_image_1_stencil_3");
  hcompute_mirror_image_1_stencil_3->add_load("hw_input_global_wrapper_stencil", "mirror_image_1_s0_y", "63");
  hcompute_mirror_image_1_stencil_3->add_store("mirror_image_1_stencil", "(mirror_image_1_s0_y + 1)", "65");
  auto mirror_image_1_s0_x_2 = prg.add_loop("mirror_image_1_s0_x_2", -1, 65);

//store is: mirror_image$1.stencil((mirror_image_1_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_1_s0_x_2) || (mirror_image_1_s0_x_2 < 0)), min(select(((mirror_image_1_s0_x_2 % 128) < 64), (mirror_image_1_s0_x_2 % 128), (127 - (mirror_image_1_s0_x_2 % 128))), 63), max(min(mirror_image_1_s0_x_2, 63), 0)), 63)
  auto hcompute_mirror_image_1_stencil_4 = mirror_image_1_s0_x_2->add_op("op_hcompute_mirror_image_1_stencil_4");
  hcompute_mirror_image_1_stencil_4->add_function("hcompute_mirror_image_1_stencil_4");
  hcompute_mirror_image_1_stencil_4->add_load("hw_input_global_wrapper_stencil", "63", "select(((64 <= mirror_image_1_s0_x_2) || (mirror_image_1_s0_x_2 < 0)), min(select(((mirror_image_1_s0_x_2 % 128) < 64), (mirror_image_1_s0_x_2 % 128), (127 - (mirror_image_1_s0_x_2 % 128))), 63), max(min(mirror_image_1_s0_x_2, 63), 0))");
  hcompute_mirror_image_1_stencil_4->add_store("mirror_image_1_stencil", "65", "(mirror_image_1_s0_x_2 + 1)");

//consuming mirror_image$1.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 64);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 64);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 64);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 64);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (mirror_image$1.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (mirror_image.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (mirror_image$1.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (mirror_image.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (mirror_image$1.stencil(conv_s1_x, (conv_s1_y + 2)) + (mirror_image.stencil(conv_s1_x, (conv_s1_y + 2)) + (mirror_image$1.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (mirror_image.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (mirror_image$1.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (mirror_image.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (mirror_image$1.stencil(conv_s1_x, (conv_s1_y + 1)) + (mirror_image.stencil(conv_s1_x, (conv_s1_y + 1)) + (mirror_image$1.stencil((conv_s1_x + 2), conv_s1_y) + (mirror_image.stencil((conv_s1_x + 2), conv_s1_y) + (mirror_image$1.stencil((conv_s1_x + 1), conv_s1_y) + (mirror_image.stencil((conv_s1_x + 1), conv_s1_y) + (mirror_image$1.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + mirror_image.stencil(conv_s1_x, conv_s1_y)))))))))))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("mirror_image_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("mirror_image_1_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


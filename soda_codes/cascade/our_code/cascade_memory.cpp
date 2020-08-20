#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog cascade() {
  prog prg;
  prg.compute_unit_file = "cascade_compute.h";
  prg.name = "cascade";

// Stencil<uint16_t, 64, 64> &hw_input_copy_stencil = arg_0;
  prg.add_input("hw_input_copy_stencil");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
// Stencil<uint8_t, 60, 60> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = hw_input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("hw_input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y");

//consuming hw_input.stencil
////producing conv1.stencil
  auto conv1_s0_y = prg.add_loop("conv1_s0_y", 0, 62);
  auto conv1_s0_x = conv1_s0_y->add_loop("conv1_s0_x", 0, 62);

//store is: conv1.stencil(conv1.s0.x, conv1.s0.y) = 0
  auto hcompute_conv1_stencil = conv1_s0_x->add_op("op_hcompute_conv1_stencil");
  hcompute_conv1_stencil->add_function("hcompute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 32;
  hcompute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_x", "conv1_s0_y");
  auto conv1_s1_y = prg.add_loop("conv1_s1_y", 0, 62);
  auto conv1_s1_x = conv1_s1_y->add_loop("conv1_s1_x", 0, 62);

//store is: conv1.stencil(conv1.s1.x, conv1.s1.y) = (((((conv1.stencil(conv1.s1.x, conv1.s1.y) + (((((int32(hw_input.stencil((conv1.s1.x + 1), (conv1.s1.y + 1)))*2) + (int32(hw_input.stencil((conv1.s1.x + 1), (conv1.s1.y + 2))) + int32(hw_input.stencil((conv1.s1.x + 2), (conv1.s1.y + 1))))) + int32(hw_input.stencil(conv1.s1.x, (conv1.s1.y + 1)))) + int32(hw_input.stencil((conv1.s1.x + 1), conv1.s1.y)))*2)) + int32(hw_input.stencil(conv1.s1.x, conv1.s1.y))) + int32(hw_input.stencil((conv1.s1.x + 2), conv1.s1.y))) + int32(hw_input.stencil(conv1.s1.x, (conv1.s1.y + 2)))) + int32(hw_input.stencil((conv1.s1.x + 2), (conv1.s1.y + 2))))
  auto hcompute_conv1_stencil_1 = conv1_s1_x->add_op("op_hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_function("hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_load("conv1_stencil", "conv1_s1_x", "conv1_s1_y");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 1)", "(conv1_s1_y + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 1)", "(conv1_s1_y + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 2)", "(conv1_s1_y + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "conv1_s1_x", "(conv1_s1_y + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 1)", "conv1_s1_y");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "conv1_s1_x", "conv1_s1_y");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 2)", "conv1_s1_y");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "conv1_s1_x", "(conv1_s1_y + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 2)", "(conv1_s1_y + 2)");
  hcompute_conv1_stencil_1->add_store("conv1_stencil", "conv1_s1_x", "conv1_s1_y");

//consuming conv1.stencil
////producing conv2.stencil
  auto conv2_s0_y = prg.add_loop("conv2_s0_y", 0, 60);
  auto conv2_s0_x = conv2_s0_y->add_loop("conv2_s0_x", 0, 60);

//store is: conv2.stencil(conv2.s0.x, conv2.s0.y) = 0
  auto hcompute_conv2_stencil = conv2_s0_x->add_op("op_hcompute_conv2_stencil");
  hcompute_conv2_stencil->add_function("hcompute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 32;
  hcompute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_x", "conv2_s0_y");
  auto conv2_s1_y = prg.add_loop("conv2_s1_y", 0, 60);
  auto conv2_s1_x = conv2_s1_y->add_loop("conv2_s1_x", 0, 60);

//store is: conv2.stencil(conv2.s1.x, conv2.s1.y) = (conv1.stencil(conv2.s1.x, conv2.s1.y) + (conv2.stencil(conv2.s1.x, conv2.s1.y) + ((conv1.stencil((conv2.s1.x + 1), conv2.s1.y)*2) + (conv1.stencil((conv2.s1.x + 2), conv2.s1.y) + ((conv1.stencil(conv2.s1.x, (conv2.s1.y + 1))*2) + ((conv1.stencil((conv2.s1.x + 1), (conv2.s1.y + 1))*4) + ((conv1.stencil((conv2.s1.x + 2), (conv2.s1.y + 1))*2) + (conv1.stencil(conv2.s1.x, (conv2.s1.y + 2)) + (conv1.stencil((conv2.s1.x + 2), (conv2.s1.y + 2)) + (conv1.stencil((conv2.s1.x + 1), (conv2.s1.y + 2))*2))))))))))
  auto hcompute_conv2_stencil_1 = conv2_s1_x->add_op("op_hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_function("hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 1)", "(conv2_s1_y + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_x", "conv2_s1_y");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 1)", "conv2_s1_y");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 2)", "conv2_s1_y");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_x", "(conv2_s1_y + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 1)", "(conv2_s1_y + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 2)", "(conv2_s1_y + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_x", "(conv2_s1_y + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 2)", "(conv2_s1_y + 2)");
  hcompute_conv2_stencil_1->add_load("conv2_stencil", "conv2_s1_x", "conv2_s1_y");
  hcompute_conv2_stencil_1->add_store("conv2_stencil", "conv2_s1_x", "conv2_s1_y");

//consuming conv2.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv2.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

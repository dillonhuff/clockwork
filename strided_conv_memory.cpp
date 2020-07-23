#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog strided_conv() {
  prog prg;
  prg.compute_unit_file = "strided_conv_compute.h";
  prg.name = "strided_conv";

// Stencil<uint16_t, 63, 63> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 31, 31> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 63);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 63);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 31);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 31);

//store is: conv.stencil(conv.s0.x, conv.s0.y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 31);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 31);

//store is: conv.stencil(conv.s1.x, conv.s1.y) = ((hw_input.stencil((conv.s1.x*2), (conv.s1.y*2))*(uint16)11) + (conv.stencil(conv.s1.x, conv.s1.y) + ((hw_input.stencil(((conv.s1.x*2) + 1), (conv.s1.y*2))*(uint16)14) + ((hw_input.stencil(((conv.s1.x*2) + 2), (conv.s1.y*2))*(uint16)17) + ((hw_input.stencil((conv.s1.x*2), ((conv.s1.y*2) + 1))*(uint16)12) + ((hw_input.stencil(((conv.s1.x*2) + 2), ((conv.s1.y*2) + 1))*(uint16)18) + ((hw_input.stencil((conv.s1.x*2), ((conv.s1.y*2) + 2))*(uint16)13) + ((hw_input.stencil(((conv.s1.x*2) + 2), ((conv.s1.y*2) + 2))*(uint16)19) + (hw_input.stencil(((conv.s1.x*2) + 1), ((conv.s1.y*2) + 2))*(uint16)16)))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x*2)", "(conv_s1_y*2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((conv_s1_x*2) + 1)", "(conv_s1_y*2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((conv_s1_x*2) + 2)", "(conv_s1_y*2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x*2)", "((conv_s1_y*2) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((conv_s1_x*2) + 2)", "((conv_s1_y*2) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x*2)", "((conv_s1_y*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((conv_s1_x*2) + 2)", "((conv_s1_y*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((conv_s1_x*2) + 1)", "((conv_s1_y*2) + 2)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 31);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 31);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

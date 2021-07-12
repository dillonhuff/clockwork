#include "example_progs.h"

prog glb_conv33() {
  prog prg;
  prg.compute_unit_file = "glb_conv33_compute.h";
  prg.name = "glb_conv33";

// Stencil<uint16_t, 250, 250> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 248, 248> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 250);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 250);

//store is: input_gb.stencil(input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_x->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x");
  prg.buffer_port_widths["input_gb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_gb_stencil", "input_gb_s0_y", "input_gb_s0_x");

//consuming input_gb.stencil
////producing output_gb.stencil
  auto output_gb_s0_y_y_gb = prg.add_loop("output_gb_s0_y_y_gb", 0, 4);
  auto output_gb_s0_x_x_gb = output_gb_s0_y_y_gb->add_loop("output_gb_s0_x_x_gb", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_gb_s0_x_x_gb->add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y) = input_gb.stencil(((output_gb_s0_x_x_gb*62) + hw_input_s0_x), ((output_gb_s0_y_y_gb*62) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_gb_stencil", "((output_gb_s0_y_y_gb*62) + hw_input_s0_y)", "((output_gb_s0_x_x_gb*62) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_gb_s0_x_x_gb->add_loop("conv_s0_y", 0, 62);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 62);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = output_gb_s0_x_x_gb->add_loop("conv_s1_y", 0, 62);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 62);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (hw_input.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input.stencil((conv_s1_x + 1), conv_s1_y) + (hw_input.stencil((conv_s1_x + 2), conv_s1_y) + (hw_input.stencil(conv_s1_x, (conv_s1_y + 1)) + (hw_input.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (hw_input.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (hw_input.stencil(conv_s1_x, (conv_s1_y + 2)) + (hw_input.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + hw_input.stencil((conv_s1_x + 1), (conv_s1_y + 2)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_x_x_gb->add_loop("output_gb_s0_y_y_cgra", 0, 62);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 62);

//store is: output_gb.stencil(((output_gb_s0_x_x_gb*62) + output_gb_s0_x_x_cgra), ((output_gb_s0_y_y_gb*62) + output_gb_s0_y_y_cgra)) = conv.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra)
  auto hcompute_output_gb_stencil = output_gb_s0_x_x_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("conv_stencil", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");
  prg.buffer_port_widths["output_gb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_gb_stencil", "((output_gb_s0_y_y_gb*62) + output_gb_s0_y_y_cgra)", "((output_gb_s0_x_x_gb*62) + output_gb_s0_x_x_cgra)");

//consuming output_gb.stencil
  auto hw_output_s0_y_y_host_1 = prg.add_loop("hw_output_s0_y_y_host_1", 0, 248);
  auto hw_output_s0_x_x_host_1 = hw_output_s0_y_y_host_1->add_loop("hw_output_s0_x_x_host_1", 0, 248);

//store is: hw_output.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1) = output_gb.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1)
  auto hcompute_hw_output_stencil = hw_output_s0_x_x_host_1->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "hw_output_s0_y_y_host_1", "hw_output_s0_x_x_host_1");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_y_host_1", "hw_output_s0_x_x_host_1");

  return prg;
}



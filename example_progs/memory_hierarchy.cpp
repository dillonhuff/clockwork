#include "example_progs.h"


prog three_level_pond() {
  prog prg;
  prg.compute_unit_file = "three_level_pond_compute.h";
  prg.name = "three_level_pond";

// Stencil<uint16_t, 34, 34> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_cgra.stencil
  auto input_cgra_s0_y = prg.add_loop("input_cgra_s0_y", 0, 34);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 34);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_host_stencil", "input_cgra_s0_y", "input_cgra_s0_x");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y_y_cgra = prg.add_loop("output_cgra_s0_y_y_cgra", 0, 4);
  auto output_cgra_s0_x_x_cgra = output_cgra_s0_y_y_cgra->add_loop("output_cgra_s0_x_x_cgra", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_cgra_s0_x_x_cgra->add_loop("hw_input_s0_y", 0, 10);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 10);

//store is: hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y) - (output_cgra_s0_y_y_cgra*8))) = input_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x), ((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_cgra_stencil", "((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y)", "((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_cgra_s0_x_x_cgra->add_loop("conv_s0_y", 0, 8);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 8);

//store is: conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s0_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s0_y) - (output_cgra_s0_y_y_cgra*8))) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = output_cgra_s0_x_x_cgra->add_loop("conv_s1_y", 0, 8);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 8);

//store is: conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) = (hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 1), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 2), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 1)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 1), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 1)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 2), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 1)) + (hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 2)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 2), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 2)) + hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 1), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 2)))))))))))
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
  auto output_cgra_s0_y_y_pond = output_cgra_s0_x_x_cgra->add_loop("output_cgra_s0_y_y_pond", 0, 8);
  auto output_cgra_s0_x_x_pond = output_cgra_s0_y_y_pond->add_loop("output_cgra_s0_x_x_pond", 0, 8);

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond), ((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)) = conv.stencil(output_cgra_s0_x_x_pond, output_cgra_s0_y_y_pond)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x_x_pond->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("conv_stencil", "output_cgra_s0_y_y_pond", "output_cgra_s0_x_x_pond");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)", "((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond)");

//consuming output_cgra.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_cgra_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog three_level_pond_rolled_not_work() {
  prog prg;
  prg.compute_unit_file = "three_level_pond_rolled_compute.h";
  prg.name = "three_level_pond_rolled";

// Stencil<uint16_t, 34, 34> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_cgra.stencil
  auto input_cgra_s0_y = prg.add_loop("input_cgra_s0_y", 0, 34);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 34);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_host_stencil", "input_cgra_s0_y", "input_cgra_s0_x");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y_y_cgra = prg.add_loop("output_cgra_s0_y_y_cgra", 0, 4);
  auto output_cgra_s0_x_x_cgra = output_cgra_s0_y_y_cgra->add_loop("output_cgra_s0_x_x_cgra", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_cgra_s0_x_x_cgra->add_loop("hw_input_s0_y", 0, 10);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 10);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y) = input_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x), ((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_cgra_stencil", "((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y)", "((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_cgra_s0_x_x_cgra->add_loop("conv_s0_y", 0, 8);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 8);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = output_cgra_s0_x_x_cgra->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 8);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 8);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (conv.stencil(conv_s1_x, conv_s1_y) + hw_input.stencil((conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_cgra_s0_y_y_pond = output_cgra_s0_x_x_cgra->add_loop("output_cgra_s0_y_y_pond", 0, 8);
  auto output_cgra_s0_x_x_pond = output_cgra_s0_y_y_pond->add_loop("output_cgra_s0_x_x_pond", 0, 8);

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond), ((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)) = conv.stencil(output_cgra_s0_x_x_pond, output_cgra_s0_y_y_pond)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x_x_pond->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("conv_stencil", "output_cgra_s0_y_y_pond", "output_cgra_s0_x_x_pond");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)", "((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond)");

//consuming output_cgra.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_cgra_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog three_level_pond_rolled() {
  prog prg;
  prg.compute_unit_file = "three_level_pond_rolled_compute.h";
  prg.name = "three_level_pond_rolled";

// Stencil<uint16_t, 34, 34> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_cgra.stencil
  auto input_cgra_s0_y = prg.add_loop("input_cgra_s0_y", 0, 32);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 36);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_host_stencil", "input_cgra_s0_y", "input_cgra_s0_x");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y_y_cgra = prg.add_loop("output_cgra_s0_y_y_cgra", 0, 16);
  auto output_cgra_s0_x_x_cgra = output_cgra_s0_y_y_cgra->add_loop("output_cgra_s0_x_x_cgra", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_cgra_s0_x_x_cgra->add_loop("hw_input_s0_y", 0, 2);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 12);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y) = input_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x), ((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_cgra_stencil", "((output_cgra_s0_y_y_cgra*2) + hw_input_s0_y)", "((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_cgra_s0_x_x_cgra->add_loop("conv_s0_y", 0, 2);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 8);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = output_cgra_s0_x_x_cgra->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 2);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 8);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (conv.stencil(conv_s1_x, conv_s1_y) + hw_input.stencil((conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y)", "(conv_s1_x + conv_s1_r_x)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_cgra_s0_y_y_pond = output_cgra_s0_x_x_cgra->add_loop("output_cgra_s0_y_y_pond", 0, 2);
  auto output_cgra_s0_x_x_pond = output_cgra_s0_y_y_pond->add_loop("output_cgra_s0_x_x_pond", 0, 8);

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond), ((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)) = conv.stencil(output_cgra_s0_x_x_pond, output_cgra_s0_y_y_pond)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x_x_pond->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("conv_stencil", "output_cgra_s0_y_y_pond", "output_cgra_s0_x_x_pond");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "((output_cgra_s0_y_y_cgra*2) + output_cgra_s0_y_y_pond)", "((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond)");

//consuming output_cgra.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_cgra_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

//A 2D image copy in and copy out
prog three_level_pond_copy() {
  prog prg;
  prg.compute_unit_file = "three_level_pond_copy_compute.h";
  prg.name = "three_level_pond_copy";

// Stencil<uint16_t, 32, 32> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_cgra.stencil
  auto input_cgra_s0_y = prg.add_loop("input_cgra_s0_y", 0, 32);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 32);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_host_stencil", "input_cgra_s0_y", "input_cgra_s0_x");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y_y_cgra = prg.add_loop("output_cgra_s0_y_y_cgra", 0, 32);
  auto output_cgra_s0_x_x_cgra = output_cgra_s0_y_y_cgra->add_loop("output_cgra_s0_x_x_cgra", 0, 2);
////producing hw_input.stencil
  auto hw_input_s0_y = output_cgra_s0_x_x_cgra->add_loop("hw_input_s0_y", 0, 1);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 16);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y) = input_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x), ((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_cgra_stencil", "((output_cgra_s0_y_y_cgra*1) + hw_input_s0_y)", "((output_cgra_s0_x_x_cgra*16) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_cgra_s0_x_x_cgra->add_loop("conv_s0_y", 0, 1);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 16);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = output_cgra_s0_x_x_cgra->add_loop("conv_s1_y", 0, 1);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 16);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (conv.stencil(conv_s1_x, conv_s1_y) + hw_input.stencil(conv_s1_x, conv_s1_y))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_cgra_s0_y_y_pond = output_cgra_s0_x_x_cgra->add_loop("output_cgra_s0_y_y_pond", 0, 1);
  auto output_cgra_s0_x_x_pond = output_cgra_s0_y_y_pond->add_loop("output_cgra_s0_x_x_pond", 0, 16);

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond), ((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)) = conv.stencil(output_cgra_s0_x_x_pond, output_cgra_s0_y_y_pond)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x_x_pond->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("conv_stencil", "output_cgra_s0_y_y_pond", "output_cgra_s0_x_x_pond");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "((output_cgra_s0_y_y_cgra*1) + output_cgra_s0_y_y_pond)", "((output_cgra_s0_x_x_cgra*16) + output_cgra_s0_x_x_pond)");

//consuming output_cgra.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_cgra_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog three_level_memory() {
  prog prg;
  prg.compute_unit_file = "three_level_memory_compute.h";
  prg.name = "three_level_memory";

// Stencil<uint16_t, 258, 258> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint8_t, 256, 256> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 8;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 258);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 258);

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
  auto hw_input_s0_y = output_gb_s0_x_x_gb->add_loop("hw_input_s0_y", 0, 66);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 66);

//store is: hw_input.stencil(((output_gb_s0_x_x_gb*64) + hw_input_s0_x), ((output_gb_s0_y_y_gb*64) + hw_input_s0_y)) = input_gb.stencil(((output_gb_s0_x_x_gb*64) + hw_input_s0_x), ((output_gb_s0_y_y_gb*64) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_gb_stencil", "((output_gb_s0_y_y_gb*64) + hw_input_s0_y)", "((output_gb_s0_x_x_gb*64) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + hw_input_s0_y)", "((output_gb_s0_x_x_gb*64) + hw_input_s0_x)");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_gb_s0_x_x_gb->add_loop("conv_s0_y", 0, 64);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 64);

//store is: conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s0_x), ((output_gb_s0_y_y_gb*64) + conv_s0_y)) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s0_y)", "((output_gb_s0_x_x_gb*64) + conv_s0_x)");
  auto conv_s1_y = output_gb_s0_x_x_gb->add_loop("conv_s1_y", 0, 64);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 64);

//store is: conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) = (hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)) + (hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)) + hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");

//consuming conv.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_x_x_gb->add_loop("output_gb_s0_y_y_cgra", 0, 64);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 64);

//store is: output_gb.stencil((output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64)), (output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64))) = conv.stencil((output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64)), (output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64)))
  auto hcompute_output_gb_stencil = output_gb_s0_x_x_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("conv_stencil", "((output_gb_s0_y_y_gb*64) + output_gb_s0_y_y_cgra)", "((output_gb_s0_x_x_gb*64) + output_gb_s0_x_x_cgra)");
  prg.buffer_port_widths["output_gb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_gb_stencil", "(output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64))", "(output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64))");

//consuming output_gb.stencil
  auto hw_output_s0_y_y_host_1 = prg.add_loop("hw_output_s0_y_y_host_1", 0, 256);
  auto hw_output_s0_x_x_host_1 = hw_output_s0_y_y_host_1->add_loop("hw_output_s0_x_x_host_1", 0, 256);

//store is: hw_output.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1) = uint8(output_gb.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1))
  auto hcompute_hw_output_stencil = hw_output_s0_x_x_host_1->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "hw_output_s0_y_y_host_1", "hw_output_s0_x_x_host_1");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_y_host_1", "hw_output_s0_x_x_host_1");

  return prg;
}


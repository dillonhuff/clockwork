#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

/*
prog glb_channel_reduction() {
  prog prg;
  prg.compute_unit_file = "glb_channel_reduction_compute.h";
  prg.name = "glb_channel_reduction";

// Stencil<uint16_t, 8, 248, 248> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 248, 248> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 64);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 64);
  auto input_gb_s0_c = input_gb_s0_x->add_loop("input_gb_s0_c", 0, 8);

//store is: input_gb.stencil(input_gb_s0_c, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_c, input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_c->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_c");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_glb_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_c");

//consuming input_gb.stencil
////producing output_gb.stencil
  auto output_gb_s0_y_y_gb = prg.add_loop("output_gb_s0_y_y_gb", 0, 4);
  auto output_gb_s0_x_x_gb = output_gb_s0_y_y_gb->add_loop("output_gb_s0_x_x_gb", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_gb_s0_x_x_gb->add_loop("hw_input_s0_y", 0, 16);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 16);
  auto hw_input_s0_c = hw_input_s0_x->add_loop("hw_input_s0_c", 0, 8);

//store is: hw_input.stencil(hw_input_s0_c, hw_input_s0_x, hw_input_s0_y) = input_gb.stencil(hw_input_s0_c, ((output_gb_s0_x_x_gb*62) + hw_input_s0_x), ((output_gb_s0_y_y_gb*62) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_c->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_glb_stencil", "((output_gb_s0_y_y_gb*32) + hw_input_s0_y)", "((output_gb_s0_x_x_gb*32) + hw_input_s0_x)", "hw_input_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_c");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_gb_s0_x_x_gb->add_loop("conv_s0_y", 0, 16);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 16);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = output_gb_s0_x_x_gb->add_loop("conv_s1_y", 0, 16);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 16);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (hw_input.stencil(0, conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input.stencil(1, conv_s1_x, conv_s1_y) + (hw_input.stencil(2, conv_s1_x, conv_s1_y) + (hw_input.stencil(3, conv_s1_x, conv_s1_y) + (hw_input.stencil(4, conv_s1_x, conv_s1_y) + (hw_input.stencil(5, conv_s1_x, conv_s1_y) + (hw_input.stencil(7, conv_s1_x, conv_s1_y) + hw_input.stencil(6, conv_s1_x, conv_s1_y)))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "0");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "1");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "2");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "3");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "4");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "5");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "7");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "6");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_x_x_gb->add_loop("output_gb_s0_y_y_cgra", 0, 16);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 16);

//store is: output_gb.stencil(((output_gb_s0_x_x_gb*62) + output_gb_s0_x_x_cgra), ((output_gb_s0_y_y_gb*62) + output_gb_s0_y_y_cgra)) = conv.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra)
  auto hcompute_output_gb_stencil = output_gb_s0_x_x_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("conv_stencil", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_glb_stencil", "((output_gb_s0_y_y_gb*32) + output_gb_s0_y_y_cgra)", "((output_gb_s0_x_x_gb*32) + output_gb_s0_x_x_cgra)");

//consuming output_gb.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}*/


prog glb_channel_reduction() {
  prog prg;
  prg.compute_unit_file = "glb_channel_reduction_compute.h";
  prg.name = "glb_channel_reduction";

// Stencil<uint16_t, 8, 128, 128> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 128, 128> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 128);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 128);
  auto input_gb_s0_c = input_gb_s0_x->add_loop("input_gb_s0_c", 0, 8);

//store is: input_gb.stencil(input_gb_s0_c, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_c, input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_c->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_c");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_glb_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_c");

//consuming input_gb.stencil
////producing output_gb.stencil
  auto output_gb_s0_y_y_gb = prg.add_loop("output_gb_s0_y_y_gb", 0, 16);
////producing hw_input.stencil
  auto hw_input_s0_y = output_gb_s0_y_y_gb->add_loop("hw_input_s0_y", 0, 8);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 128);
  auto hw_input_s0_c = hw_input_s0_x->add_loop("hw_input_s0_c", 0, 8);

//store is: hw_input.stencil(hw_input_s0_c, hw_input_s0_x, hw_input_s0_y) = input_gb.stencil(hw_input_s0_c, hw_input_s0_x, ((output_gb_s0_y_y_gb*64) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_c->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_glb_stencil", "((output_gb_s0_y_y_gb*8) + hw_input_s0_y)", "hw_input_s0_x", "hw_input_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_c");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_gb_s0_y_y_gb->add_loop("conv_s0_y", 0, 8);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 128);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = output_gb_s0_y_y_gb->add_loop("conv_s1_y", 0, 8);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 128);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (hw_input.stencil(0, conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input.stencil(1, conv_s1_x, conv_s1_y) + (hw_input.stencil(2, conv_s1_x, conv_s1_y) + (hw_input.stencil(3, conv_s1_x, conv_s1_y) + (hw_input.stencil(4, conv_s1_x, conv_s1_y) + (hw_input.stencil(5, conv_s1_x, conv_s1_y) + (hw_input.stencil(7, conv_s1_x, conv_s1_y) + hw_input.stencil(6, conv_s1_x, conv_s1_y)))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "0");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "1");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "2");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "3");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "4");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "5");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "7");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x", "6");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_y_y_gb->add_loop("output_gb_s0_y_y_cgra", 0, 8);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 128);

//store is: output_gb.stencil(output_gb_s0_x_x_cgra, ((output_gb_s0_y_y_gb*64) + output_gb_s0_y_y_cgra)) = conv.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra)
  auto hcompute_output_gb_stencil = output_gb_s0_x_x_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("conv_stencil", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_glb_stencil", "((output_gb_s0_y_y_gb*8) + output_gb_s0_y_y_cgra)", "output_gb_s0_x_x_cgra");

//consuming output_gb.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 128);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 128);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

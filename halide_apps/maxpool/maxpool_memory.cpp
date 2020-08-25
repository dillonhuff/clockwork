#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog maxpool() {
  prog prg;
  prg.compute_unit_file = "maxpool_compute.h";
  prg.name = "maxpool";

// Stencil<uint16_t, 2046, 2046, 3> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 1023, 1023, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

  auto hw_output_s0_c = prg.add_loop("hw_output_s0_c", 0, 3);
////producing _hls_target.hw_output
////producing hw_input.stencil
  auto hw_input_s0_y = hw_output_s0_c->add_loop("hw_input_s0_y", 0, 2046);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 2046);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_output.s0.c) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_output.s0.c)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_output_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_output_s0_c");

//consuming hw_input.stencil
////producing pooled.stencil
  auto pooled_s0_y = hw_output_s0_c->add_loop("pooled_s0_y", 0, 1023);
  auto pooled_s0_x = pooled_s0_y->add_loop("pooled_s0_x", 0, 1023);

//store is: pooled.stencil(pooled.s0.x, pooled.s0.y, hw_output.s0.c) = max(hw_input.stencil(((pooled.s0.x*2) + 1), (pooled.s0.y*2), hw_output.s0.c), max(hw_input.stencil((pooled.s0.x*2), (pooled.s0.y*2), hw_output.s0.c), hw_input.stencil(((pooled.s0.x*2) + 1), ((pooled.s0.y*2) + 1), hw_output.s0.c)))
  auto hcompute_pooled_stencil = pooled_s0_x->add_op("op_hcompute_pooled_stencil");
  hcompute_pooled_stencil->add_function("hcompute_pooled_stencil");
  hcompute_pooled_stencil->add_load("hw_input_stencil", "((pooled_s0_x*2) + 1)", "(pooled_s0_y*2)", "hw_output_s0_c");
  hcompute_pooled_stencil->add_load("hw_input_stencil", "(pooled_s0_x*2)", "(pooled_s0_y*2)", "hw_output_s0_c");
  hcompute_pooled_stencil->add_load("hw_input_stencil", "((pooled_s0_x*2) + 1)", "((pooled_s0_y*2) + 1)", "hw_output_s0_c");
  prg.buffer_port_widths["pooled_stencil"] = 16;
  hcompute_pooled_stencil->add_store("pooled_stencil", "pooled_s0_x", "pooled_s0_y", "hw_output_s0_c");

//consuming pooled.stencil
  auto hw_output_s0_y_yi = hw_output_s0_c->add_loop("hw_output_s0_y_yi", 0, 1023);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 1023);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.c) = uint8(pooled.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.c))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pooled_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_c");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_c");

  return prg;
}

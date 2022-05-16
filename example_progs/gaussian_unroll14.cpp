#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog gaussian_unroll14() {
  prog prg;
  prg.compute_unit_file = "gaussian_unroll14_compute.h";
  prg.name = "gaussian_unroll14";

// Stencil<uint16_t, 70, 63> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 56, 62> &hw_output_global_wrapper_glb_stencil = arg_1;
  prg.add_output("hw_output_global_wrapper_glb_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_glb_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 63);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 5);

//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*14), hw_input_global_wrapper_s0_y) = hw_input.stencil((hw_input_global_wrapper_s0_x_x*14), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*14)");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*14)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 1)");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 1)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 2)");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 2)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 3)");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 3)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 4)");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 4)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 5)");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 5)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_6 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_function("hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 6)");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 6)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_7 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_function("hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 7)");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 7)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_8 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_8");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_function("hcompute_hw_input_global_wrapper_glb_stencil_8");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 8)");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 8)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_9 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_9");
  hcompute_hw_input_global_wrapper_glb_stencil_9->add_function("hcompute_hw_input_global_wrapper_glb_stencil_9");
  hcompute_hw_input_global_wrapper_glb_stencil_9->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 9)");
  hcompute_hw_input_global_wrapper_glb_stencil_9->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 9)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_10 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_10");
  hcompute_hw_input_global_wrapper_glb_stencil_10->add_function("hcompute_hw_input_global_wrapper_glb_stencil_10");
  hcompute_hw_input_global_wrapper_glb_stencil_10->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 10)");
  hcompute_hw_input_global_wrapper_glb_stencil_10->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 10)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_11 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_11");
  hcompute_hw_input_global_wrapper_glb_stencil_11->add_function("hcompute_hw_input_global_wrapper_glb_stencil_11");
  hcompute_hw_input_global_wrapper_glb_stencil_11->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 11)");
  hcompute_hw_input_global_wrapper_glb_stencil_11->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 11)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_12 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_12");
  hcompute_hw_input_global_wrapper_glb_stencil_12->add_function("hcompute_hw_input_global_wrapper_glb_stencil_12");
  hcompute_hw_input_global_wrapper_glb_stencil_12->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 12)");
  hcompute_hw_input_global_wrapper_glb_stencil_12->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 12)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_13 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_13");
  hcompute_hw_input_global_wrapper_glb_stencil_13->add_function("hcompute_hw_input_global_wrapper_glb_stencil_13");
  hcompute_hw_input_global_wrapper_glb_stencil_13->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 13)");
  hcompute_hw_input_global_wrapper_glb_stencil_13->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*14) + 13)");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 63);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 5);

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*14), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*14), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*14)");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*14)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 1)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 1)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 2)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 2)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 3)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 3)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_4 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 4)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 4)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_5 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 5)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 5)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_6 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 6)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 6)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_7 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 7)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 7)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_8 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 8)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 8)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_9 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_9");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_9->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_9");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_9->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 9)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_9->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 9)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_10->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_10");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_10->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 10)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_10->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 10)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_11 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_11->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_11");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_11->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 11)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_11->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 11)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_12 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_12");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_12->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_12");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_12->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 12)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_12->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 12)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_13 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_13");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_13->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_13");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_13->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 13)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_13->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 13)");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 62);
  auto blur_unnormalized_s0_x_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x_x", 0, 4);

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*14), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "(blur_unnormalized_s0_x_x*14)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 1), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 2), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_2 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_function("hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 3), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_3 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_function("hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 3)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 4), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_4 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_function("hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 5), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_5 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_5");
  hcompute_blur_unnormalized_stencil_5->add_function("hcompute_blur_unnormalized_stencil_5");
  hcompute_blur_unnormalized_stencil_5->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 5)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 6), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_6 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_6");
  hcompute_blur_unnormalized_stencil_6->add_function("hcompute_blur_unnormalized_stencil_6");
  hcompute_blur_unnormalized_stencil_6->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 6)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 7), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_7 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_7");
  hcompute_blur_unnormalized_stencil_7->add_function("hcompute_blur_unnormalized_stencil_7");
  hcompute_blur_unnormalized_stencil_7->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 7)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 8), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_8 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_8");
  hcompute_blur_unnormalized_stencil_8->add_function("hcompute_blur_unnormalized_stencil_8");
  hcompute_blur_unnormalized_stencil_8->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 8)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 9), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_9 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_9");
  hcompute_blur_unnormalized_stencil_9->add_function("hcompute_blur_unnormalized_stencil_9");
  hcompute_blur_unnormalized_stencil_9->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 9)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 10), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_10 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_10");
  hcompute_blur_unnormalized_stencil_10->add_function("hcompute_blur_unnormalized_stencil_10");
  hcompute_blur_unnormalized_stencil_10->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 10)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 11), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_11 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_11");
  hcompute_blur_unnormalized_stencil_11->add_function("hcompute_blur_unnormalized_stencil_11");
  hcompute_blur_unnormalized_stencil_11->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 11)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 12), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_12 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_12");
  hcompute_blur_unnormalized_stencil_12->add_function("hcompute_blur_unnormalized_stencil_12");
  hcompute_blur_unnormalized_stencil_12->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 12)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 13), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_13 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_13");
  hcompute_blur_unnormalized_stencil_13->add_function("hcompute_blur_unnormalized_stencil_13");
  hcompute_blur_unnormalized_stencil_13->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*14) + 13)");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 62);
  auto blur_unnormalized_s1_x_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x_x", 0, 4);

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*14), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*14), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*14), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*14), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_14 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_14");
  hcompute_blur_unnormalized_stencil_14->add_function("hcompute_blur_unnormalized_stencil_14");
  hcompute_blur_unnormalized_stencil_14->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*14)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*14)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 1)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 1)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x_x*14)");
  hcompute_blur_unnormalized_stencil_14->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*14)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_15 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_15");
  hcompute_blur_unnormalized_stencil_15->add_function("hcompute_blur_unnormalized_stencil_15");
  hcompute_blur_unnormalized_stencil_15->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 1)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 1)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 2)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 2)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 1)");
  hcompute_blur_unnormalized_stencil_15->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_16 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_16");
  hcompute_blur_unnormalized_stencil_16->add_function("hcompute_blur_unnormalized_stencil_16");
  hcompute_blur_unnormalized_stencil_16->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 2)");
  hcompute_blur_unnormalized_stencil_16->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 3)");
  hcompute_blur_unnormalized_stencil_16->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 3)");
  hcompute_blur_unnormalized_stencil_16->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 2)");
  hcompute_blur_unnormalized_stencil_16->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 2)");
  hcompute_blur_unnormalized_stencil_16->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_17 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_17");
  hcompute_blur_unnormalized_stencil_17->add_function("hcompute_blur_unnormalized_stencil_17");
  hcompute_blur_unnormalized_stencil_17->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 3)");
  hcompute_blur_unnormalized_stencil_17->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 3)");
  hcompute_blur_unnormalized_stencil_17->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 4)");
  hcompute_blur_unnormalized_stencil_17->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 4)");
  hcompute_blur_unnormalized_stencil_17->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 3)");
  hcompute_blur_unnormalized_stencil_17->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 3)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_18 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_18");
  hcompute_blur_unnormalized_stencil_18->add_function("hcompute_blur_unnormalized_stencil_18");
  hcompute_blur_unnormalized_stencil_18->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 4)");
  hcompute_blur_unnormalized_stencil_18->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 4)");
  hcompute_blur_unnormalized_stencil_18->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 5)");
  hcompute_blur_unnormalized_stencil_18->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 5)");
  hcompute_blur_unnormalized_stencil_18->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 4)");
  hcompute_blur_unnormalized_stencil_18->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_19 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_19");
  hcompute_blur_unnormalized_stencil_19->add_function("hcompute_blur_unnormalized_stencil_19");
  hcompute_blur_unnormalized_stencil_19->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 5)");
  hcompute_blur_unnormalized_stencil_19->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 5)");
  hcompute_blur_unnormalized_stencil_19->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 6)");
  hcompute_blur_unnormalized_stencil_19->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 6)");
  hcompute_blur_unnormalized_stencil_19->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 5)");
  hcompute_blur_unnormalized_stencil_19->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 5)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_20 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_20");
  hcompute_blur_unnormalized_stencil_20->add_function("hcompute_blur_unnormalized_stencil_20");
  hcompute_blur_unnormalized_stencil_20->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 6)");
  hcompute_blur_unnormalized_stencil_20->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 6)");
  hcompute_blur_unnormalized_stencil_20->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 7)");
  hcompute_blur_unnormalized_stencil_20->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 7)");
  hcompute_blur_unnormalized_stencil_20->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 6)");
  hcompute_blur_unnormalized_stencil_20->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 6)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_21 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_21");
  hcompute_blur_unnormalized_stencil_21->add_function("hcompute_blur_unnormalized_stencil_21");
  hcompute_blur_unnormalized_stencil_21->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 7)");
  hcompute_blur_unnormalized_stencil_21->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 7)");
  hcompute_blur_unnormalized_stencil_21->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 8)");
  hcompute_blur_unnormalized_stencil_21->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 8)");
  hcompute_blur_unnormalized_stencil_21->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 7)");
  hcompute_blur_unnormalized_stencil_21->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 7)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_22 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_22");
  hcompute_blur_unnormalized_stencil_22->add_function("hcompute_blur_unnormalized_stencil_22");
  hcompute_blur_unnormalized_stencil_22->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 8)");
  hcompute_blur_unnormalized_stencil_22->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 8)");
  hcompute_blur_unnormalized_stencil_22->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 9)");
  hcompute_blur_unnormalized_stencil_22->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 9)");
  hcompute_blur_unnormalized_stencil_22->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 8)");
  hcompute_blur_unnormalized_stencil_22->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 8)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_23 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_23");
  hcompute_blur_unnormalized_stencil_23->add_function("hcompute_blur_unnormalized_stencil_23");
  hcompute_blur_unnormalized_stencil_23->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 9)");
  hcompute_blur_unnormalized_stencil_23->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 9)");
  hcompute_blur_unnormalized_stencil_23->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 10)");
  hcompute_blur_unnormalized_stencil_23->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 10)");
  hcompute_blur_unnormalized_stencil_23->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 9)");
  hcompute_blur_unnormalized_stencil_23->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 9)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_24 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_24");
  hcompute_blur_unnormalized_stencil_24->add_function("hcompute_blur_unnormalized_stencil_24");
  hcompute_blur_unnormalized_stencil_24->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 10)");
  hcompute_blur_unnormalized_stencil_24->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 10)");
  hcompute_blur_unnormalized_stencil_24->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 11)");
  hcompute_blur_unnormalized_stencil_24->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 11)");
  hcompute_blur_unnormalized_stencil_24->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 10)");
  hcompute_blur_unnormalized_stencil_24->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 10)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_25 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_25");
  hcompute_blur_unnormalized_stencil_25->add_function("hcompute_blur_unnormalized_stencil_25");
  hcompute_blur_unnormalized_stencil_25->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 11)");
  hcompute_blur_unnormalized_stencil_25->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 11)");
  hcompute_blur_unnormalized_stencil_25->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 12)");
  hcompute_blur_unnormalized_stencil_25->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 12)");
  hcompute_blur_unnormalized_stencil_25->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 11)");
  hcompute_blur_unnormalized_stencil_25->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 11)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_26 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_26");
  hcompute_blur_unnormalized_stencil_26->add_function("hcompute_blur_unnormalized_stencil_26");
  hcompute_blur_unnormalized_stencil_26->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 12)");
  hcompute_blur_unnormalized_stencil_26->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 12)");
  hcompute_blur_unnormalized_stencil_26->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 13)");
  hcompute_blur_unnormalized_stencil_26->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 13)");
  hcompute_blur_unnormalized_stencil_26->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 12)");
  hcompute_blur_unnormalized_stencil_26->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 12)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 14), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 14), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_27 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_27");
  hcompute_blur_unnormalized_stencil_27->add_function("hcompute_blur_unnormalized_stencil_27");
  hcompute_blur_unnormalized_stencil_27->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 13)");
  hcompute_blur_unnormalized_stencil_27->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 13)");
  hcompute_blur_unnormalized_stencil_27->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 14)");
  hcompute_blur_unnormalized_stencil_27->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 14)");
  hcompute_blur_unnormalized_stencil_27->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*14) + 13)");
  hcompute_blur_unnormalized_stencil_27->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*14) + 13)");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 62);
  auto blur_s0_x_x = blur_s0_y->add_loop("blur_s0_x_x", 0, 4);

//store is: blur.stencil((blur_s0_x_x*14), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*14), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "(blur_s0_x_x*14)");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "(blur_s0_x_x*14)");

//store is: blur.stencil(((blur_s0_x_x*14) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 1), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_1 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_function("hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 1)");
  hcompute_blur_stencil_1->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 1)");

//store is: blur.stencil(((blur_s0_x_x*14) + 2), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 2), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_2 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_function("hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 2)");
  hcompute_blur_stencil_2->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 2)");

//store is: blur.stencil(((blur_s0_x_x*14) + 3), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 3), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_3 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_function("hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 3)");
  hcompute_blur_stencil_3->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 3)");

//store is: blur.stencil(((blur_s0_x_x*14) + 4), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 4), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_4 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_4");
  hcompute_blur_stencil_4->add_function("hcompute_blur_stencil_4");
  hcompute_blur_stencil_4->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 4)");
  hcompute_blur_stencil_4->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 4)");

//store is: blur.stencil(((blur_s0_x_x*14) + 5), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 5), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_5 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_5");
  hcompute_blur_stencil_5->add_function("hcompute_blur_stencil_5");
  hcompute_blur_stencil_5->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 5)");
  hcompute_blur_stencil_5->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 5)");

//store is: blur.stencil(((blur_s0_x_x*14) + 6), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 6), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_6 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_6");
  hcompute_blur_stencil_6->add_function("hcompute_blur_stencil_6");
  hcompute_blur_stencil_6->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 6)");
  hcompute_blur_stencil_6->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 6)");

//store is: blur.stencil(((blur_s0_x_x*14) + 7), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 7), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_7 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_7");
  hcompute_blur_stencil_7->add_function("hcompute_blur_stencil_7");
  hcompute_blur_stencil_7->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 7)");
  hcompute_blur_stencil_7->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 7)");

//store is: blur.stencil(((blur_s0_x_x*14) + 8), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 8), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_8 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_8");
  hcompute_blur_stencil_8->add_function("hcompute_blur_stencil_8");
  hcompute_blur_stencil_8->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 8)");
  hcompute_blur_stencil_8->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 8)");

//store is: blur.stencil(((blur_s0_x_x*14) + 9), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 9), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_9 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_9");
  hcompute_blur_stencil_9->add_function("hcompute_blur_stencil_9");
  hcompute_blur_stencil_9->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 9)");
  hcompute_blur_stencil_9->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 9)");

//store is: blur.stencil(((blur_s0_x_x*14) + 10), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 10), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_10 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_10");
  hcompute_blur_stencil_10->add_function("hcompute_blur_stencil_10");
  hcompute_blur_stencil_10->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 10)");
  hcompute_blur_stencil_10->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 10)");

//store is: blur.stencil(((blur_s0_x_x*14) + 11), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 11), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_11 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_11");
  hcompute_blur_stencil_11->add_function("hcompute_blur_stencil_11");
  hcompute_blur_stencil_11->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 11)");
  hcompute_blur_stencil_11->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 11)");

//store is: blur.stencil(((blur_s0_x_x*14) + 12), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 12), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_12 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_12");
  hcompute_blur_stencil_12->add_function("hcompute_blur_stencil_12");
  hcompute_blur_stencil_12->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 12)");
  hcompute_blur_stencil_12->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 12)");

//store is: blur.stencil(((blur_s0_x_x*14) + 13), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 13), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_13 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_13");
  hcompute_blur_stencil_13->add_function("hcompute_blur_stencil_13");
  hcompute_blur_stencil_13->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 13)");
  hcompute_blur_stencil_13->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*14) + 13)");

//consuming blur.stencil
  auto hw_output_s0_y_yii = prg.add_loop("hw_output_s0_y_yii", 0, 62);
  auto hw_output_s0_x_xii_xii = hw_output_s0_y_yii->add_loop("hw_output_s0_x_xii_xii", 0, 4);

//store is: hw_output.stencil((hw_output_s0_x_xii_xii*14), hw_output_s0_y_yii) = blur.stencil((hw_output_s0_x_xii_xii*14), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yii", "(hw_output_s0_x_xii_xii*14)");
  prg.buffer_port_widths["hw_output_stencil"] = 16;
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yii", "(hw_output_s0_x_xii_xii*14)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 1), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 1), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 1)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 2), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 2), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 2)");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 2)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 3), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 3), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 3)");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 3)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 4), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 4), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 4)");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 4)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 5), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 5), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 5)");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 5)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 6), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 6), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 6)");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 6)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 7), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 7), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 7)");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 7)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 8), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 8), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_8 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_8");
  hcompute_hw_output_stencil_8->add_function("hcompute_hw_output_stencil_8");
  hcompute_hw_output_stencil_8->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 8)");
  hcompute_hw_output_stencil_8->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 8)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 9), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 9), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_9 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_9");
  hcompute_hw_output_stencil_9->add_function("hcompute_hw_output_stencil_9");
  hcompute_hw_output_stencil_9->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 9)");
  hcompute_hw_output_stencil_9->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 9)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 10), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 10), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_10 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_10");
  hcompute_hw_output_stencil_10->add_function("hcompute_hw_output_stencil_10");
  hcompute_hw_output_stencil_10->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 10)");
  hcompute_hw_output_stencil_10->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 10)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 11), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 11), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_11 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_11");
  hcompute_hw_output_stencil_11->add_function("hcompute_hw_output_stencil_11");
  hcompute_hw_output_stencil_11->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 11)");
  hcompute_hw_output_stencil_11->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 11)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 12), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 12), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_12 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_12");
  hcompute_hw_output_stencil_12->add_function("hcompute_hw_output_stencil_12");
  hcompute_hw_output_stencil_12->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 12)");
  hcompute_hw_output_stencil_12->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 12)");

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 13), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 13), hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil_13 = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil_13");
  hcompute_hw_output_stencil_13->add_function("hcompute_hw_output_stencil_13");
  hcompute_hw_output_stencil_13->add_load("blur_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 13)");
  hcompute_hw_output_stencil_13->add_store("hw_output_stencil", "hw_output_s0_y_yii", "((hw_output_s0_x_xii_xii*14) + 13)");

//consuming hw_output.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 62);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 4);

//store is: hw_output_global_wrapper.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*14), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*14), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_function("hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*14)");
  hcompute_hw_output_global_wrapper_glb_stencil->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*14)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_function("hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 1)");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 1)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_2");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_function("hcompute_hw_output_global_wrapper_glb_stencil_2");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 2)");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 2)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 3), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 3), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_3");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_function("hcompute_hw_output_global_wrapper_glb_stencil_3");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 3)");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 3)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 4), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 4), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_4 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_4");
  hcompute_hw_output_global_wrapper_glb_stencil_4->add_function("hcompute_hw_output_global_wrapper_glb_stencil_4");
  hcompute_hw_output_global_wrapper_glb_stencil_4->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 4)");
  hcompute_hw_output_global_wrapper_glb_stencil_4->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 4)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 5), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 5), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_5 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_5");
  hcompute_hw_output_global_wrapper_glb_stencil_5->add_function("hcompute_hw_output_global_wrapper_glb_stencil_5");
  hcompute_hw_output_global_wrapper_glb_stencil_5->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 5)");
  hcompute_hw_output_global_wrapper_glb_stencil_5->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 5)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 6), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 6), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_6 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_6");
  hcompute_hw_output_global_wrapper_glb_stencil_6->add_function("hcompute_hw_output_global_wrapper_glb_stencil_6");
  hcompute_hw_output_global_wrapper_glb_stencil_6->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 6)");
  hcompute_hw_output_global_wrapper_glb_stencil_6->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 6)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 7), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 7), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_7 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_7");
  hcompute_hw_output_global_wrapper_glb_stencil_7->add_function("hcompute_hw_output_global_wrapper_glb_stencil_7");
  hcompute_hw_output_global_wrapper_glb_stencil_7->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 7)");
  hcompute_hw_output_global_wrapper_glb_stencil_7->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 7)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 8), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 8), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_8 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_8");
  hcompute_hw_output_global_wrapper_glb_stencil_8->add_function("hcompute_hw_output_global_wrapper_glb_stencil_8");
  hcompute_hw_output_global_wrapper_glb_stencil_8->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 8)");
  hcompute_hw_output_global_wrapper_glb_stencil_8->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 8)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 9), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 9), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_9 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_9");
  hcompute_hw_output_global_wrapper_glb_stencil_9->add_function("hcompute_hw_output_global_wrapper_glb_stencil_9");
  hcompute_hw_output_global_wrapper_glb_stencil_9->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 9)");
  hcompute_hw_output_global_wrapper_glb_stencil_9->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 9)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 10), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 10), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_10 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_10");
  hcompute_hw_output_global_wrapper_glb_stencil_10->add_function("hcompute_hw_output_global_wrapper_glb_stencil_10");
  hcompute_hw_output_global_wrapper_glb_stencil_10->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 10)");
  hcompute_hw_output_global_wrapper_glb_stencil_10->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 10)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 11), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 11), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_11 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_11");
  hcompute_hw_output_global_wrapper_glb_stencil_11->add_function("hcompute_hw_output_global_wrapper_glb_stencil_11");
  hcompute_hw_output_global_wrapper_glb_stencil_11->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 11)");
  hcompute_hw_output_global_wrapper_glb_stencil_11->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 11)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 12), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 12), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_12 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_12");
  hcompute_hw_output_global_wrapper_glb_stencil_12->add_function("hcompute_hw_output_global_wrapper_glb_stencil_12");
  hcompute_hw_output_global_wrapper_glb_stencil_12->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 12)");
  hcompute_hw_output_global_wrapper_glb_stencil_12->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 12)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 13), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 13), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_13 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_13");
  hcompute_hw_output_global_wrapper_glb_stencil_13->add_function("hcompute_hw_output_global_wrapper_glb_stencil_13");
  hcompute_hw_output_global_wrapper_glb_stencil_13->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 13)");
  hcompute_hw_output_global_wrapper_glb_stencil_13->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*14) + 13)");

  return prg;
}


// empty

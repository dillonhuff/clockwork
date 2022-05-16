#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog harris_color_unroll4() {
  prog prg;
  prg.compute_unit_file = "harris_color_unroll4_compute.h";
  prg.name = "harris_color_unroll4";

// Stencil<int16_t, 3, 2656, 2556> &hw_input_stencil = arg_1;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 1472, 2550> &hw_output_global_wrapper_stencil = arg_3;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 261);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 76);

//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -3)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*4)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -3)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*4)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -3)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*4)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -2)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 1)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -2)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 1)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -2)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 1)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + -1), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_6 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_function("hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -1)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 2)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + -1), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_7 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_function("hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -1)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 2)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + -1), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_8 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_8");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_function("hcompute_hw_input_global_wrapper_glb_stencil_8");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*4) + -1)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 2)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, (hw_input_global_wrapper_s0_x_x*4), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_9 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_9");
  hcompute_hw_input_global_wrapper_glb_stencil_9->add_function("hcompute_hw_input_global_wrapper_glb_stencil_9");
  hcompute_hw_input_global_wrapper_glb_stencil_9->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "(hw_input_global_wrapper_s0_x_x*4)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_9->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 3)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, (hw_input_global_wrapper_s0_x_x*4), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_10 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_10");
  hcompute_hw_input_global_wrapper_glb_stencil_10->add_function("hcompute_hw_input_global_wrapper_glb_stencil_10");
  hcompute_hw_input_global_wrapper_glb_stencil_10->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "(hw_input_global_wrapper_s0_x_x*4)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_10->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 3)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, (hw_input_global_wrapper_s0_x_x*4), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_11 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_11");
  hcompute_hw_input_global_wrapper_glb_stencil_11->add_function("hcompute_hw_input_global_wrapper_glb_stencil_11");
  hcompute_hw_input_global_wrapper_glb_stencil_11->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "(hw_input_global_wrapper_s0_x_x*4)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_11->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 3)", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 261);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 76);

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_4 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_5 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_6 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_7 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_8 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_9 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_9");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_9->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_9");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_9->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_9->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_10->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_10");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_10->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_10->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_11 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_11->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_11");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_11->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_11->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)", "2");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", 0, 261);
  auto gray_s0_x_x = gray_s0_y->add_loop("gray_s0_x_x", 0, 76);

//store is: gray.stencil((gray_s0_x_x*4), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*4), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*4), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*4), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*4)", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*4)", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*4)", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "gray_s0_y", "(gray_s0_x_x*4)");

//store is: gray.stencil(((gray_s0_x_x*4) + 1), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*4) + 1), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*4) + 1), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*4) + 1), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_1 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_function("hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 1)", "1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 1)", "2");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 1)", "0");
  hcompute_gray_stencil_1->add_store("gray_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 1)");

//store is: gray.stencil(((gray_s0_x_x*4) + 2), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*4) + 2), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*4) + 2), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*4) + 2), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_2 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_2");
  hcompute_gray_stencil_2->add_function("hcompute_gray_stencil_2");
  hcompute_gray_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 2)", "1");
  hcompute_gray_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 2)", "2");
  hcompute_gray_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 2)", "0");
  hcompute_gray_stencil_2->add_store("gray_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 2)");

//store is: gray.stencil(((gray_s0_x_x*4) + 3), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*4) + 3), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*4) + 3), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*4) + 3), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_3 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_3");
  hcompute_gray_stencil_3->add_function("hcompute_gray_stencil_3");
  hcompute_gray_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 3)", "1");
  hcompute_gray_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 3)", "2");
  hcompute_gray_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 3)", "0");
  hcompute_gray_stencil_3->add_store("gray_stencil", "gray_s0_y", "((gray_s0_x_x*4) + 3)");

//consuming gray.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", 0, 259);
  auto grad_x_unclamp_s0_x_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x_x", 0, 75);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*4), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "(grad_x_unclamp_s0_x_x*4)");

  auto grad_x_unclamp_s0_y_1 = prg.add_loop("grad_x_unclamp_s0_y_1", 0, 259);
  auto grad_x_unclamp_s0_x_x_1 = grad_x_unclamp_s0_y_1->add_loop("grad_x_unclamp_s0_x_x_1", 0, 75);
//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*4) + 1), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s0_x_x_1->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y_1", "((grad_x_unclamp_s0_x_x_1*4) + 1)");

  auto grad_x_unclamp_s0_y_2 = prg.add_loop("grad_x_unclamp_s0_y_2", 0, 259);
  auto grad_x_unclamp_s0_x_x_2 = grad_x_unclamp_s0_y_2->add_loop("grad_x_unclamp_s0_x_x_2", 0, 75);
//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*4) + 2), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_2 = grad_x_unclamp_s0_x_x_2->add_op("op_hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_function("hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y_2", "((grad_x_unclamp_s0_x_x_2*4) + 2)");

  auto grad_x_unclamp_s0_y_3 = prg.add_loop("grad_x_unclamp_s0_y_3", 0, 259);
  auto grad_x_unclamp_s0_x_x_3 = grad_x_unclamp_s0_y_3->add_loop("grad_x_unclamp_s0_x_x_3", 0, 75);
//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*4) + 3), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_3 = grad_x_unclamp_s0_x_x_3->add_op("op_hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_function("hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y_3", "((grad_x_unclamp_s0_x_x_3*4) + 3)");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", 0, 259);
  auto grad_x_unclamp_s1_x_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x_x", 0, 75);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*4), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*4), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*4), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), grad_x_unclamp_s1_y))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*4), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*4), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_4 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_4");
  hcompute_grad_x_unclamp_stencil_4->add_function("hcompute_grad_x_unclamp_stencil_4");
  hcompute_grad_x_unclamp_stencil_4->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*4)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*4) + 2)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*4)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*4) + 2)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "(grad_x_unclamp_s1_x_x*4)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x*4)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*4) + 2)");
  hcompute_grad_x_unclamp_stencil_4->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*4)");

  auto grad_x_unclamp_s1_y_1 = prg.add_loop("grad_x_unclamp_s1_y_1", 0, 259);
  auto grad_x_unclamp_s1_x_x_1 = grad_x_unclamp_s1_y_1->add_loop("grad_x_unclamp_s1_x_x_1", 0, 75);
//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 1), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 1), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 1), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), grad_x_unclamp_s1_y))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 1), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 1), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_5 = grad_x_unclamp_s1_x_x_1->add_op("op_hcompute_grad_x_unclamp_stencil_5");
  hcompute_grad_x_unclamp_stencil_5->add_function("hcompute_grad_x_unclamp_stencil_5");
  hcompute_grad_x_unclamp_stencil_5->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y_1", "((grad_x_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y_1 + 1)", "((grad_x_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y_1 + 2)", "((grad_x_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y_1 + 2)", "((grad_x_unclamp_s1_x_x_1*4) + 3)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y_1 + 1)", "((grad_x_unclamp_s1_x_x_1*4) + 3)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "grad_x_unclamp_s1_y_1", "((grad_x_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "grad_x_unclamp_s1_y_1", "((grad_x_unclamp_s1_x_x_1*4) + 3)");
  hcompute_grad_x_unclamp_stencil_5->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y_1", "((grad_x_unclamp_s1_x_x_1*4) + 1)");

  auto grad_x_unclamp_s1_y_2 = prg.add_loop("grad_x_unclamp_s1_y_2", 0, 259);
  auto grad_x_unclamp_s1_x_x_2 = grad_x_unclamp_s1_y_2->add_loop("grad_x_unclamp_s1_x_x_2", 0, 75);
//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 2), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 2), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 4), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 4), grad_x_unclamp_s1_y))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 4), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_6 = grad_x_unclamp_s1_x_x_2->add_op("op_hcompute_grad_x_unclamp_stencil_6");
  hcompute_grad_x_unclamp_stencil_6->add_function("hcompute_grad_x_unclamp_stencil_6");
  hcompute_grad_x_unclamp_stencil_6->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y_2", "((grad_x_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_x_unclamp_stencil_6->add_load("gray_stencil", "(grad_x_unclamp_s1_y_2 + 1)", "((grad_x_unclamp_s1_x_x_2*4) + 4)");
  hcompute_grad_x_unclamp_stencil_6->add_load("gray_stencil", "grad_x_unclamp_s1_y_2", "((grad_x_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_x_unclamp_stencil_6->add_load("gray_stencil", "grad_x_unclamp_s1_y_2", "((grad_x_unclamp_s1_x_x_2*4) + 4)");
  hcompute_grad_x_unclamp_stencil_6->add_load("gray_stencil", "(grad_x_unclamp_s1_y_2 + 1)", "((grad_x_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_x_unclamp_stencil_6->add_load("gray_stencil", "(grad_x_unclamp_s1_y_2 + 2)", "((grad_x_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_x_unclamp_stencil_6->add_load("gray_stencil", "(grad_x_unclamp_s1_y_2 + 2)", "((grad_x_unclamp_s1_x_x_2*4) + 4)");
  hcompute_grad_x_unclamp_stencil_6->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y_2", "((grad_x_unclamp_s1_x_x_2*4) + 2)");

  auto grad_x_unclamp_s1_y_3 = prg.add_loop("grad_x_unclamp_s1_y_3", 0, 259);
  auto grad_x_unclamp_s1_x_x_3 = grad_x_unclamp_s1_y_3->add_loop("grad_x_unclamp_s1_x_x_3", 0, 75);
//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 3), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 3), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 5), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 5), grad_x_unclamp_s1_y))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 5), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_7 = grad_x_unclamp_s1_x_x_3->add_op("op_hcompute_grad_x_unclamp_stencil_7");
  hcompute_grad_x_unclamp_stencil_7->add_function("hcompute_grad_x_unclamp_stencil_7");
  hcompute_grad_x_unclamp_stencil_7->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y_3", "((grad_x_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_x_unclamp_stencil_7->add_load("gray_stencil", "(grad_x_unclamp_s1_y_3 + 1)", "((grad_x_unclamp_s1_x_x_3*4) + 5)");
  hcompute_grad_x_unclamp_stencil_7->add_load("gray_stencil", "grad_x_unclamp_s1_y_3", "((grad_x_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_x_unclamp_stencil_7->add_load("gray_stencil", "grad_x_unclamp_s1_y_3", "((grad_x_unclamp_s1_x_x_3*4) + 5)");
  hcompute_grad_x_unclamp_stencil_7->add_load("gray_stencil", "(grad_x_unclamp_s1_y_3 + 1)", "((grad_x_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_x_unclamp_stencil_7->add_load("gray_stencil", "(grad_x_unclamp_s1_y_3 + 2)", "((grad_x_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_x_unclamp_stencil_7->add_load("gray_stencil", "(grad_x_unclamp_s1_y_3 + 2)", "((grad_x_unclamp_s1_x_x_3*4) + 5)");
  hcompute_grad_x_unclamp_stencil_7->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y_3", "((grad_x_unclamp_s1_x_x_3*4) + 3)");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", 0, 259);
  auto lxx_s0_x_x = lxx_s0_y->add_loop("lxx_s0_x_x", 0, 75);

//store is: lxx.stencil((lxx_s0_x_x*4), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*4), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*4), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "(lxx_s0_x_x*4)");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "(lxx_s0_x_x*4)");

  auto lxx_s0_y_1 = prg.add_loop("lxx_s0_y_1", 0, 259);
  auto lxx_s0_x_x_1 = lxx_s0_y_1->add_loop("lxx_s0_x_x_1", 0, 75);
//store is: lxx.stencil(((lxx_s0_x_x*4) + 1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 1), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 1), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_1 = lxx_s0_x_x_1->add_op("op_hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_function("hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_load("grad_x_unclamp_stencil", "lxx_s0_y_1", "((lxx_s0_x_x_1*4) + 1)");
  hcompute_lxx_stencil_1->add_store("lxx_stencil", "lxx_s0_y_1", "((lxx_s0_x_x_1*4) + 1)");

  auto lxx_s0_y_2 = prg.add_loop("lxx_s0_y_2", 0, 259);
  auto lxx_s0_x_x_2 = lxx_s0_y_2->add_loop("lxx_s0_x_x_2", 0, 75);
//store is: lxx.stencil(((lxx_s0_x_x*4) + 2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 2), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 2), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_2 = lxx_s0_x_x_2->add_op("op_hcompute_lxx_stencil_2");
  hcompute_lxx_stencil_2->add_function("hcompute_lxx_stencil_2");
  hcompute_lxx_stencil_2->add_load("grad_x_unclamp_stencil", "lxx_s0_y_2", "((lxx_s0_x_x_2*4) + 2)");
  hcompute_lxx_stencil_2->add_store("lxx_stencil", "lxx_s0_y_2", "((lxx_s0_x_x_2*4) + 2)");

  auto lxx_s0_y_3 = prg.add_loop("lxx_s0_y_3", 0, 259);
  auto lxx_s0_x_x_3 = lxx_s0_y_3->add_loop("lxx_s0_x_x_3", 0, 75);
//store is: lxx.stencil(((lxx_s0_x_x*4) + 3), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 3), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 3), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_3 = lxx_s0_x_x_3->add_op("op_hcompute_lxx_stencil_3");
  hcompute_lxx_stencil_3->add_function("hcompute_lxx_stencil_3");
  hcompute_lxx_stencil_3->add_load("grad_x_unclamp_stencil", "lxx_s0_y_3", "((lxx_s0_x_x_3*4) + 3)");
  hcompute_lxx_stencil_3->add_store("lxx_stencil", "lxx_s0_y_3", "((lxx_s0_x_x_3*4) + 3)");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", 0, 257);
  auto lgxx_s0_x_x = lgxx_s0_y->add_loop("lgxx_s0_x_x", 0, 75);

//store is: lgxx.stencil((lgxx_s0_x_x*4), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "(lgxx_s0_x_x*4)");

//store is: lgxx.stencil(((lgxx_s0_x_x*4) + 1), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*4) + 1)");

//store is: lgxx.stencil(((lgxx_s0_x_x*4) + 2), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_2 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*4) + 2)");

//store is: lgxx.stencil(((lgxx_s0_x_x*4) + 3), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_3 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*4) + 3)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", 0, 257);
  auto lgxx_s1_x_x = lgxx_s1_y->add_loop("lgxx_s1_x_x", 0, 75);

//store is: lgxx.stencil((lgxx_s1_x_x*4), lgxx_s1_y) = (lxx.stencil((lgxx_s1_x_x*4), lgxx_s1_y) + (lgxx.stencil((lgxx_s1_x_x*4), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*4), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*4), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*4) + 1), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_4 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_function("hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_load("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*4)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*4)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*4)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x_x*4)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_4->add_store("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*4)");

//store is: lgxx.stencil(((lgxx_s1_x_x*4) + 1), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*4) + 1), lgxx_s1_y) + (lgxx.stencil(((lgxx_s1_x_x*4) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*4) + 2), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_5 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_function("hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 1)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_5->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 1)");

//store is: lgxx.stencil(((lgxx_s1_x_x*4) + 2), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*4) + 2), lgxx_s1_y) + (lgxx.stencil(((lgxx_s1_x_x*4) + 2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*4) + 3), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_6 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_6");
  hcompute_lgxx_stencil_6->add_function("hcompute_lgxx_stencil_6");
  hcompute_lgxx_stencil_6->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 4)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 4)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 2)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 4)");
  hcompute_lgxx_stencil_6->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_6->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 2)");

//store is: lgxx.stencil(((lgxx_s1_x_x*4) + 3), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*4) + 3), lgxx_s1_y) + (lgxx.stencil(((lgxx_s1_x_x*4) + 3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 5), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 5), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 5), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*4) + 4), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_7 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_7");
  hcompute_lgxx_stencil_7->add_function("hcompute_lgxx_stencil_7");
  hcompute_lgxx_stencil_7->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 4)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 5)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 4)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*4) + 5)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 3)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 5)");
  hcompute_lgxx_stencil_7->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*4) + 4)");
  hcompute_lgxx_stencil_7->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*4) + 3)");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", 0, 259);
  auto grad_y_unclamp_s0_x_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x_x", 0, 75);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*4), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "(grad_y_unclamp_s0_x_x*4)");

  auto grad_y_unclamp_s0_y_1 = prg.add_loop("grad_y_unclamp_s0_y_1", 0, 259);
  auto grad_y_unclamp_s0_x_x_1 = grad_y_unclamp_s0_y_1->add_loop("grad_y_unclamp_s0_x_x_1", 0, 75);
//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*4) + 1), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s0_x_x_1->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y_1", "((grad_y_unclamp_s0_x_x_1*4) + 1)");

  auto grad_y_unclamp_s0_y_2 = prg.add_loop("grad_y_unclamp_s0_y_2", 0, 259);
  auto grad_y_unclamp_s0_x_x_2 = grad_y_unclamp_s0_y_2->add_loop("grad_y_unclamp_s0_x_x_2", 0, 75);
//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*4) + 2), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_2 = grad_y_unclamp_s0_x_x_2->add_op("op_hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_function("hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y_2", "((grad_y_unclamp_s0_x_x_2*4) + 2)");

  auto grad_y_unclamp_s0_y_3 = prg.add_loop("grad_y_unclamp_s0_y_3", 0, 259);
  auto grad_y_unclamp_s0_x_x_3 = grad_y_unclamp_s0_y_3->add_loop("grad_y_unclamp_s0_x_x_3", 0, 75);
//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*4) + 3), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_3 = grad_y_unclamp_s0_x_x_3->add_op("op_hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_function("hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y_3", "((grad_y_unclamp_s0_x_x_3*4) + 3)");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", 0, 259);
  auto grad_y_unclamp_s1_x_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x_x", 0, 75);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*4), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*4), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*4), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), grad_y_unclamp_s1_y))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*4), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_4 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_4");
  hcompute_grad_y_unclamp_stencil_4->add_function("hcompute_grad_y_unclamp_stencil_4");
  hcompute_grad_y_unclamp_stencil_4->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*4)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*4) + 1)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*4)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*4) + 1)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*4) + 2)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x*4)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*4) + 2)");
  hcompute_grad_y_unclamp_stencil_4->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*4)");

  auto grad_y_unclamp_s1_y_1 = prg.add_loop("grad_y_unclamp_s1_y_1", 0, 259);
  auto grad_y_unclamp_s1_x_x_1 = grad_y_unclamp_s1_y_1->add_loop("grad_y_unclamp_s1_x_x_1", 0, 75);
//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 1), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 1), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), grad_y_unclamp_s1_y))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_5 = grad_y_unclamp_s1_x_x_1->add_op("op_hcompute_grad_y_unclamp_stencil_5");
  hcompute_grad_y_unclamp_stencil_5->add_function("hcompute_grad_y_unclamp_stencil_5");
  hcompute_grad_y_unclamp_stencil_5->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y_1", "((grad_y_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "(grad_y_unclamp_s1_y_1 + 2)", "((grad_y_unclamp_s1_x_x_1*4) + 2)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "grad_y_unclamp_s1_y_1", "((grad_y_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "grad_y_unclamp_s1_y_1", "((grad_y_unclamp_s1_x_x_1*4) + 2)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "grad_y_unclamp_s1_y_1", "((grad_y_unclamp_s1_x_x_1*4) + 3)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "(grad_y_unclamp_s1_y_1 + 2)", "((grad_y_unclamp_s1_x_x_1*4) + 1)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "(grad_y_unclamp_s1_y_1 + 2)", "((grad_y_unclamp_s1_x_x_1*4) + 3)");
  hcompute_grad_y_unclamp_stencil_5->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y_1", "((grad_y_unclamp_s1_x_x_1*4) + 1)");


  auto grad_y_unclamp_s1_y_2 = prg.add_loop("grad_y_unclamp_s1_y_2", 0, 259);
  auto grad_y_unclamp_s1_x_x_2 = grad_y_unclamp_s1_y_2->add_loop("grad_y_unclamp_s1_x_x_2", 0, 75);
//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 2), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 2), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), grad_y_unclamp_s1_y))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_6 = grad_y_unclamp_s1_x_x_2->add_op("op_hcompute_grad_y_unclamp_stencil_6");
  hcompute_grad_y_unclamp_stencil_6->add_function("hcompute_grad_y_unclamp_stencil_6");
  hcompute_grad_y_unclamp_stencil_6->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y_2", "((grad_y_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_y_unclamp_stencil_6->add_load("gray_stencil", "(grad_y_unclamp_s1_y_2 + 2)", "((grad_y_unclamp_s1_x_x_2*4) + 3)");
  hcompute_grad_y_unclamp_stencil_6->add_load("gray_stencil", "grad_y_unclamp_s1_y_2", "((grad_y_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_y_unclamp_stencil_6->add_load("gray_stencil", "grad_y_unclamp_s1_y_2", "((grad_y_unclamp_s1_x_x_2*4) + 3)");
  hcompute_grad_y_unclamp_stencil_6->add_load("gray_stencil", "grad_y_unclamp_s1_y_2", "((grad_y_unclamp_s1_x_x_2*4) + 4)");
  hcompute_grad_y_unclamp_stencil_6->add_load("gray_stencil", "(grad_y_unclamp_s1_y_2 + 2)", "((grad_y_unclamp_s1_x_x_2*4) + 2)");
  hcompute_grad_y_unclamp_stencil_6->add_load("gray_stencil", "(grad_y_unclamp_s1_y_2 + 2)", "((grad_y_unclamp_s1_x_x_2*4) + 4)");
  hcompute_grad_y_unclamp_stencil_6->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y_2", "((grad_y_unclamp_s1_x_x_2*4) + 2)");


  auto grad_y_unclamp_s1_y_3 = prg.add_loop("grad_y_unclamp_s1_y_3", 0, 259);
  auto grad_y_unclamp_s1_x_x_3 = grad_y_unclamp_s1_y_3->add_loop("grad_y_unclamp_s1_x_x_3", 0, 75);
//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 3), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 3), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 5), grad_y_unclamp_s1_y))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 5), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_7 = grad_y_unclamp_s1_x_x_3->add_op("op_hcompute_grad_y_unclamp_stencil_7");
  hcompute_grad_y_unclamp_stencil_7->add_function("hcompute_grad_y_unclamp_stencil_7");
  hcompute_grad_y_unclamp_stencil_7->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y_3", "((grad_y_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_y_unclamp_stencil_7->add_load("gray_stencil", "(grad_y_unclamp_s1_y_3 + 2)", "((grad_y_unclamp_s1_x_x_3*4) + 4)");
  hcompute_grad_y_unclamp_stencil_7->add_load("gray_stencil", "grad_y_unclamp_s1_y_3", "((grad_y_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_y_unclamp_stencil_7->add_load("gray_stencil", "grad_y_unclamp_s1_y_3", "((grad_y_unclamp_s1_x_x_3*4) + 4)");
  hcompute_grad_y_unclamp_stencil_7->add_load("gray_stencil", "grad_y_unclamp_s1_y_3", "((grad_y_unclamp_s1_x_x_3*4) + 5)");
  hcompute_grad_y_unclamp_stencil_7->add_load("gray_stencil", "(grad_y_unclamp_s1_y_3 + 2)", "((grad_y_unclamp_s1_x_x_3*4) + 3)");
  hcompute_grad_y_unclamp_stencil_7->add_load("gray_stencil", "(grad_y_unclamp_s1_y_3 + 2)", "((grad_y_unclamp_s1_x_x_3*4) + 5)");
  hcompute_grad_y_unclamp_stencil_7->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y_3", "((grad_y_unclamp_s1_x_x_3*4) + 3)");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", 0, 259);
  auto lxy_s0_x_x = lxy_s0_y->add_loop("lxy_s0_x_x", 0, 75);

//store is: lxy.stencil((lxy_s0_x_x*4), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*4), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*4), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "(lxy_s0_x_x*4)");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "(lxy_s0_x_x*4)");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "(lxy_s0_x_x*4)");

  auto lxy_s0_y_1 = prg.add_loop("lxy_s0_y_1", 0, 259);
  auto lxy_s0_x_x_1 = lxy_s0_y_1->add_loop("lxy_s0_x_x_1", 0, 75);

//store is: lxy.stencil(((lxy_s0_x_x*4) + 1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*4) + 1), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*4) + 1), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_1 = lxy_s0_x_x_1->add_op("op_hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_function("hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_load("grad_x_unclamp_stencil", "lxy_s0_y_1", "((lxy_s0_x_x_1*4) + 1)");
  hcompute_lxy_stencil_1->add_load("grad_y_unclamp_stencil", "lxy_s0_y_1", "((lxy_s0_x_x_1*4) + 1)");
  hcompute_lxy_stencil_1->add_store("lxy_stencil", "lxy_s0_y_1", "((lxy_s0_x_x_1*4) + 1)");

  auto lxy_s0_y_2 = prg.add_loop("lxy_s0_y_2", 0, 259);
  auto lxy_s0_x_x_2 = lxy_s0_y_2->add_loop("lxy_s0_x_x_2", 0, 75);
//store is: lxy.stencil(((lxy_s0_x_x*4) + 2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*4) + 2), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*4) + 2), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_2 = lxy_s0_x_x_2->add_op("op_hcompute_lxy_stencil_2");
  hcompute_lxy_stencil_2->add_function("hcompute_lxy_stencil_2");
  hcompute_lxy_stencil_2->add_load("grad_x_unclamp_stencil", "lxy_s0_y_2", "((lxy_s0_x_x_2*4) + 2)");
  hcompute_lxy_stencil_2->add_load("grad_y_unclamp_stencil", "lxy_s0_y_2", "((lxy_s0_x_x_2*4) + 2)");
  hcompute_lxy_stencil_2->add_store("lxy_stencil", "lxy_s0_y_2", "((lxy_s0_x_x_2*4) + 2)");

  auto lxy_s0_y_3 = prg.add_loop("lxy_s0_y_3", 0, 259);
  auto lxy_s0_x_x_3 = lxy_s0_y_3->add_loop("lxy_s0_x_x_3", 0, 75);
//store is: lxy.stencil(((lxy_s0_x_x*4) + 3), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*4) + 3), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*4) + 3), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_3 = lxy_s0_x_x_3->add_op("op_hcompute_lxy_stencil_3");
  hcompute_lxy_stencil_3->add_function("hcompute_lxy_stencil_3");
  hcompute_lxy_stencil_3->add_load("grad_x_unclamp_stencil", "lxy_s0_y_3", "((lxy_s0_x_x_3*4) + 3)");
  hcompute_lxy_stencil_3->add_load("grad_y_unclamp_stencil", "lxy_s0_y_3", "((lxy_s0_x_x_3*4) + 3)");
  hcompute_lxy_stencil_3->add_store("lxy_stencil", "lxy_s0_y_3", "((lxy_s0_x_x_3*4) + 3)");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", 0, 257);
  auto lgxy_s0_x_x = lgxy_s0_y->add_loop("lgxy_s0_x_x", 0, 75);

//store is: lgxy.stencil((lgxy_s0_x_x*4), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "(lgxy_s0_x_x*4)");

//store is: lgxy.stencil(((lgxy_s0_x_x*4) + 1), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*4) + 1)");

//store is: lgxy.stencil(((lgxy_s0_x_x*4) + 2), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_2 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*4) + 2)");

//store is: lgxy.stencil(((lgxy_s0_x_x*4) + 3), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_3 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*4) + 3)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", 0, 257);
  auto lgxy_s1_x_x = lgxy_s1_y->add_loop("lgxy_s1_x_x", 0, 75);

//store is: lgxy.stencil((lgxy_s1_x_x*4), lgxy_s1_y) = (lxy.stencil((lgxy_s1_x_x*4), lgxy_s1_y) + (lgxy.stencil((lgxy_s1_x_x*4), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*4), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*4), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*4) + 1), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_4 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_function("hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_load("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*4)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*4)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*4)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x_x*4)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_4->add_store("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*4)");

//store is: lgxy.stencil(((lgxy_s1_x_x*4) + 1), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*4) + 1), lgxy_s1_y) + (lgxy.stencil(((lgxy_s1_x_x*4) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*4) + 2), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_5 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_function("hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 1)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_5->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 1)");

//store is: lgxy.stencil(((lgxy_s1_x_x*4) + 2), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*4) + 2), lgxy_s1_y) + (lgxy.stencil(((lgxy_s1_x_x*4) + 2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*4) + 3), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_6 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_6");
  hcompute_lgxy_stencil_6->add_function("hcompute_lgxy_stencil_6");
  hcompute_lgxy_stencil_6->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 4)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 4)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 2)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 4)");
  hcompute_lgxy_stencil_6->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_6->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 2)");

//store is: lgxy.stencil(((lgxy_s1_x_x*4) + 3), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*4) + 3), lgxy_s1_y) + (lgxy.stencil(((lgxy_s1_x_x*4) + 3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 5), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 5), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 5), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*4) + 4), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_7 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_7");
  hcompute_lgxy_stencil_7->add_function("hcompute_lgxy_stencil_7");
  hcompute_lgxy_stencil_7->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 4)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 5)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 4)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*4) + 5)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 3)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 5)");
  hcompute_lgxy_stencil_7->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*4) + 4)");
  hcompute_lgxy_stencil_7->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*4) + 3)");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", 0, 259);
  auto lyy_s0_x_x = lyy_s0_y->add_loop("lyy_s0_x_x", 0, 75);

//store is: lyy.stencil((lyy_s0_x_x*4), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*4), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*4), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "(lyy_s0_x_x*4)");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "(lyy_s0_x_x*4)");

  auto lyy_s0_y_1 = prg.add_loop("lyy_s0_y_1", 0, 259);
  auto lyy_s0_x_x_1 = lyy_s0_y_1->add_loop("lyy_s0_x_x_1", 0, 75);
//store is: lyy.stencil(((lyy_s0_x_x*4) + 1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 1), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 1), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_1 = lyy_s0_x_x_1->add_op("op_hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_function("hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_load("grad_y_unclamp_stencil", "lyy_s0_y_1", "((lyy_s0_x_x_1*4) + 1)");
  hcompute_lyy_stencil_1->add_store("lyy_stencil", "lyy_s0_y_1", "((lyy_s0_x_x_1*4) + 1)");

  auto lyy_s0_y_2 = prg.add_loop("lyy_s0_y_2", 0, 259);
  auto lyy_s0_x_x_2 = lyy_s0_y_2->add_loop("lyy_s0_x_x_2", 0, 75);
//store is: lyy.stencil(((lyy_s0_x_x*4) + 2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 2), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 2), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_2 = lyy_s0_x_x_2->add_op("op_hcompute_lyy_stencil_2");
  hcompute_lyy_stencil_2->add_function("hcompute_lyy_stencil_2");
  hcompute_lyy_stencil_2->add_load("grad_y_unclamp_stencil", "lyy_s0_y_2", "((lyy_s0_x_x_2*4) + 2)");
  hcompute_lyy_stencil_2->add_store("lyy_stencil", "lyy_s0_y_2", "((lyy_s0_x_x_2*4) + 2)");

  auto lyy_s0_y_3 = prg.add_loop("lyy_s0_y_3", 0, 259);
  auto lyy_s0_x_x_3 = lyy_s0_y_3->add_loop("lyy_s0_x_x_3", 0, 75);
//store is: lyy.stencil(((lyy_s0_x_x*4) + 3), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 3), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 3), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_3 = lyy_s0_x_x_3->add_op("op_hcompute_lyy_stencil_3");
  hcompute_lyy_stencil_3->add_function("hcompute_lyy_stencil_3");
  hcompute_lyy_stencil_3->add_load("grad_y_unclamp_stencil", "lyy_s0_y_3", "((lyy_s0_x_x_3*4) + 3)");
  hcompute_lyy_stencil_3->add_store("lyy_stencil", "lyy_s0_y_3", "((lyy_s0_x_x_3*4) + 3)");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", 0, 257);
  auto lgyy_s0_x_x = lgyy_s0_y->add_loop("lgyy_s0_x_x", 0, 75);

//store is: lgyy.stencil((lgyy_s0_x_x*4), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "(lgyy_s0_x_x*4)");

//store is: lgyy.stencil(((lgyy_s0_x_x*4) + 1), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*4) + 1)");

//store is: lgyy.stencil(((lgyy_s0_x_x*4) + 2), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_2 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*4) + 2)");

//store is: lgyy.stencil(((lgyy_s0_x_x*4) + 3), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_3 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*4) + 3)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", 0, 257);
  auto lgyy_s1_x_x = lgyy_s1_y->add_loop("lgyy_s1_x_x", 0, 75);

//store is: lgyy.stencil((lgyy_s1_x_x*4), lgyy_s1_y) = (lyy.stencil((lgyy_s1_x_x*4), lgyy_s1_y) + (lgyy.stencil((lgyy_s1_x_x*4), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*4), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*4), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*4) + 1), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_4 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_function("hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_load("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*4)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*4)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*4)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x_x*4)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_4->add_store("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*4)");

//store is: lgyy.stencil(((lgyy_s1_x_x*4) + 1), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*4) + 1), lgyy_s1_y) + (lgyy.stencil(((lgyy_s1_x_x*4) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*4) + 2), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_5 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_function("hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 1)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_5->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 1)");

//store is: lgyy.stencil(((lgyy_s1_x_x*4) + 2), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*4) + 2), lgyy_s1_y) + (lgyy.stencil(((lgyy_s1_x_x*4) + 2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*4) + 3), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_6 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_6");
  hcompute_lgyy_stencil_6->add_function("hcompute_lgyy_stencil_6");
  hcompute_lgyy_stencil_6->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 4)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 4)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 2)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 4)");
  hcompute_lgyy_stencil_6->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_6->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 2)");

//store is: lgyy.stencil(((lgyy_s1_x_x*4) + 3), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*4) + 3), lgyy_s1_y) + (lgyy.stencil(((lgyy_s1_x_x*4) + 3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 5), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 5), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 5), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*4) + 4), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_7 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_7");
  hcompute_lgyy_stencil_7->add_function("hcompute_lgyy_stencil_7");
  hcompute_lgyy_stencil_7->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 4)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 5)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 4)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*4) + 5)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 3)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 5)");
  hcompute_lgyy_stencil_7->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*4) + 4)");
  hcompute_lgyy_stencil_7->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*4) + 3)");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", 0, 257);
  auto cim_s0_x_x = cim_s0_y->add_loop("cim_s0_x_x", 0, 75);

//store is: cim.stencil((cim_s0_x_x*4), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*4), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "(cim_s0_x_x*4)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "(cim_s0_x_x*4)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "(cim_s0_x_x*4)");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "(cim_s0_x_x*4)");

//store is: cim.stencil(((cim_s0_x_x*4) + 1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 1), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_1 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_function("hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 1)");
  hcompute_cim_stencil_1->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 1)");
  hcompute_cim_stencil_1->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 1)");
  hcompute_cim_stencil_1->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 1)");

//store is: cim.stencil(((cim_s0_x_x*4) + 2), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 2), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_2 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_2");
  hcompute_cim_stencil_2->add_function("hcompute_cim_stencil_2");
  hcompute_cim_stencil_2->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 2)");
  hcompute_cim_stencil_2->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 2)");
  hcompute_cim_stencil_2->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 2)");
  hcompute_cim_stencil_2->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 2)");

//store is: cim.stencil(((cim_s0_x_x*4) + 3), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 3), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_3 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_3");
  hcompute_cim_stencil_3->add_function("hcompute_cim_stencil_3");
  hcompute_cim_stencil_3->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 3)");
  hcompute_cim_stencil_3->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 3)");
  hcompute_cim_stencil_3->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 3)");
  hcompute_cim_stencil_3->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*4) + 3)");

//consuming cim.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 255);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 74);

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) = select((((((((((cim.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*4), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*4)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi_xi*4)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi_xi*4)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 2)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*4)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
  auto hcompute_hw_output_glb_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_function("hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 4)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 4)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 4)");
  hcompute_hw_output_glb_stencil_2->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 5), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 5), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 5), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
  auto hcompute_hw_output_glb_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_function("hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 4)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 4)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 5)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*4) + 5)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 4)");
  hcompute_hw_output_glb_stencil_3->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*4) + 5)");
  hcompute_hw_output_glb_stencil_3->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");
////producing hw_input_global_wrapper_global_wrapper.stencil

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 255);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 74);

//store is: hw_output_global_wrapper.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*4)");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*4)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 1)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_function("hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_global_wrapper_stencil_2->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 2)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_function("hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_global_wrapper_stencil_3->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 3)");

  return prg;
}


// schedule=3 myunroll=4

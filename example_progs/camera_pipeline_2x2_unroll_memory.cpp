#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog camera_pipeline_2x2_unroll() {
  prog prg;
  prg.compute_unit_file = "camera_pipeline_2x2_unroll_compute.h";
  prg.name = "camera_pipeline_2x2_unroll";

// Stencil<uint16_t, 264, 200> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 256, 192> &hw_output_global_wrapper_stencil = arg_1;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y_yio = prg.add_loop("hw_input_global_wrapper_s0_y_yio", 0, 100);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y_yio->add_loop("hw_input_global_wrapper_s0_x_x", 0, 132);

//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y_yio*2)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + -4), ((hw_input_global_wrapper_s0_y_yio*2) + -4))
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_yio*2) + -4)", "((hw_input_global_wrapper_s0_x_x*2) + -4)");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y_yio*2)", "(hw_input_global_wrapper_s0_x_x*2)");

//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y_yio*2) + 1)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + -4), ((hw_input_global_wrapper_s0_y_yio*2) + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_yio*2) + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -4)");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "((hw_input_global_wrapper_s0_y_yio*2) + 1)", "(hw_input_global_wrapper_s0_x_x*2)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y_yio*2)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + -3), ((hw_input_global_wrapper_s0_y_yio*2) + -4))
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_yio*2) + -4)", "((hw_input_global_wrapper_s0_x_x*2) + -3)");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y_yio*2)", "((hw_input_global_wrapper_s0_x_x*2) + 1)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y_yio*2) + 1)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + -3), ((hw_input_global_wrapper_s0_y_yio*2) + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_yio*2) + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -3)");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "((hw_input_global_wrapper_s0_y_yio*2) + 1)", "((hw_input_global_wrapper_s0_x_x*2) + 1)");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y_yio = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y_yio", 0, 100);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y_yio->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 132);

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y_yio*2)) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y_yio*2))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y_yio*2)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y_yio*2)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)");

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1)) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y_yio*2)) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y_yio*2))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y_yio*2)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y_yio*2)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1)) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "((hw_input_global_wrapper_global_wrapper_s0_y_yio*2) + 1)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing denoised$1.stencil
  auto denoised_1_s0_y_yio = prg.add_loop("denoised_1_s0_y_yio", 0, 98);
  auto denoised_1_s0_x_x = denoised_1_s0_y_yio->add_loop("denoised_1_s0_x_x", 0, 130);

//store is: denoised$1.stencil((denoised_1_s0_x_x*2), (denoised_1_s0_y_yio*2)) = min(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 2), ((denoised_1_s0_y_yio*2) + 2)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 2), ((denoised_1_s0_y_yio*2) + 4)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 2), (denoised_1_s0_y_yio*2)), max(hw_input_global_wrapper_global_wrapper.stencil((denoised_1_s0_x_x*2), ((denoised_1_s0_y_yio*2) + 2)), hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 4), ((denoised_1_s0_y_yio*2) + 2))))))
  auto hcompute_denoised_1_stencil = denoised_1_s0_x_x->add_op("op_hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_function("hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 2)", "((denoised_1_s0_x_x*2) + 2)");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 4)", "((denoised_1_s0_x_x*2) + 2)");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(denoised_1_s0_y_yio*2)", "((denoised_1_s0_x_x*2) + 2)");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 2)", "(denoised_1_s0_x_x*2)");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 2)", "((denoised_1_s0_x_x*2) + 4)");
  prg.buffer_port_widths["denoised_1_stencil"] = 16;
  hcompute_denoised_1_stencil->add_store("denoised_1_stencil", "(denoised_1_s0_y_yio*2)", "(denoised_1_s0_x_x*2)");

//store is: denoised$1.stencil((denoised_1_s0_x_x*2), ((denoised_1_s0_y_yio*2) + 1)) = min(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 2), ((denoised_1_s0_y_yio*2) + 3)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 2), ((denoised_1_s0_y_yio*2) + 5)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 2), ((denoised_1_s0_y_yio*2) + 1)), max(hw_input_global_wrapper_global_wrapper.stencil((denoised_1_s0_x_x*2), ((denoised_1_s0_y_yio*2) + 3)), hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 4), ((denoised_1_s0_y_yio*2) + 3))))))
  auto hcompute_denoised_1_stencil_1 = denoised_1_s0_x_x->add_op("op_hcompute_denoised_1_stencil_1");
  hcompute_denoised_1_stencil_1->add_function("hcompute_denoised_1_stencil_1");
  hcompute_denoised_1_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 3)", "((denoised_1_s0_x_x*2) + 4)");
  hcompute_denoised_1_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 3)", "((denoised_1_s0_x_x*2) + 2)");
  hcompute_denoised_1_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 5)", "((denoised_1_s0_x_x*2) + 2)");
  hcompute_denoised_1_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 1)", "((denoised_1_s0_x_x*2) + 2)");
  hcompute_denoised_1_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 3)", "(denoised_1_s0_x_x*2)");
  hcompute_denoised_1_stencil_1->add_store("denoised_1_stencil", "((denoised_1_s0_y_yio*2) + 1)", "(denoised_1_s0_x_x*2)");

//store is: denoised$1.stencil(((denoised_1_s0_x_x*2) + 1), (denoised_1_s0_y_yio*2)) = min(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 3), ((denoised_1_s0_y_yio*2) + 2)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 3), ((denoised_1_s0_y_yio*2) + 4)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 3), (denoised_1_s0_y_yio*2)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 1), ((denoised_1_s0_y_yio*2) + 2)), hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 5), ((denoised_1_s0_y_yio*2) + 2))))))
  auto hcompute_denoised_1_stencil_2 = denoised_1_s0_x_x->add_op("op_hcompute_denoised_1_stencil_2");
  hcompute_denoised_1_stencil_2->add_function("hcompute_denoised_1_stencil_2");
  hcompute_denoised_1_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 2)", "((denoised_1_s0_x_x*2) + 3)");
  hcompute_denoised_1_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 4)", "((denoised_1_s0_x_x*2) + 3)");
  hcompute_denoised_1_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(denoised_1_s0_y_yio*2)", "((denoised_1_s0_x_x*2) + 3)");
  hcompute_denoised_1_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 2)", "((denoised_1_s0_x_x*2) + 1)");
  hcompute_denoised_1_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 2)", "((denoised_1_s0_x_x*2) + 5)");
  hcompute_denoised_1_stencil_2->add_store("denoised_1_stencil", "(denoised_1_s0_y_yio*2)", "((denoised_1_s0_x_x*2) + 1)");

//store is: denoised$1.stencil(((denoised_1_s0_x_x*2) + 1), ((denoised_1_s0_y_yio*2) + 1)) = min(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 3), ((denoised_1_s0_y_yio*2) + 3)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 3), ((denoised_1_s0_y_yio*2) + 5)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 3), ((denoised_1_s0_y_yio*2) + 1)), max(hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 1), ((denoised_1_s0_y_yio*2) + 3)), hw_input_global_wrapper_global_wrapper.stencil(((denoised_1_s0_x_x*2) + 5), ((denoised_1_s0_y_yio*2) + 3))))))
  auto hcompute_denoised_1_stencil_3 = denoised_1_s0_x_x->add_op("op_hcompute_denoised_1_stencil_3");
  hcompute_denoised_1_stencil_3->add_function("hcompute_denoised_1_stencil_3");
  hcompute_denoised_1_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 3)", "((denoised_1_s0_x_x*2) + 3)");
  hcompute_denoised_1_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 5)", "((denoised_1_s0_x_x*2) + 3)");
  hcompute_denoised_1_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 1)", "((denoised_1_s0_x_x*2) + 3)");
  hcompute_denoised_1_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 3)", "((denoised_1_s0_x_x*2) + 1)");
  hcompute_denoised_1_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "((denoised_1_s0_y_yio*2) + 3)", "((denoised_1_s0_x_x*2) + 5)");
  hcompute_denoised_1_stencil_3->add_store("denoised_1_stencil", "((denoised_1_s0_y_yio*2) + 1)", "((denoised_1_s0_x_x*2) + 1)");

//consuming denoised$1.stencil
////producing b_b.stencil
  auto b_b_s0_y_yio = prg.add_loop("b_b_s0_y_yio", 0, 49);
  auto b_b_s0_x_x = b_b_s0_y_yio->add_loop("b_b_s0_x_x", 0, 65);

//store is: b_b.stencil((b_b_s0_x_x*2), (b_b_s0_y_yio*2)) = denoised$1.stencil(((b_b_s0_x_x*4) + 2), ((b_b_s0_y_yio*4) + 1))
  auto hcompute_b_b_stencil = b_b_s0_x_x->add_op("op_hcompute_b_b_stencil");
  hcompute_b_b_stencil->add_function("hcompute_b_b_stencil");
  hcompute_b_b_stencil->add_load("denoised_1_stencil", "((b_b_s0_y_yio*4) + 1)", "((b_b_s0_x_x*4) + 2)");
  prg.buffer_port_widths["b_b_stencil"] = 16;
  hcompute_b_b_stencil->add_store("b_b_stencil", "(b_b_s0_y_yio*2)", "(b_b_s0_x_x*2)");

//store is: b_b.stencil((b_b_s0_x_x*2), ((b_b_s0_y_yio*2) + 1)) = denoised$1.stencil(((b_b_s0_x_x*4) + 2), ((b_b_s0_y_yio*4) + 3))
  auto hcompute_b_b_stencil_1 = b_b_s0_x_x->add_op("op_hcompute_b_b_stencil_1");
  hcompute_b_b_stencil_1->add_function("hcompute_b_b_stencil_1");
  hcompute_b_b_stencil_1->add_load("denoised_1_stencil", "((b_b_s0_y_yio*4) + 3)", "((b_b_s0_x_x*4) + 2)");
  hcompute_b_b_stencil_1->add_store("b_b_stencil", "((b_b_s0_y_yio*2) + 1)", "(b_b_s0_x_x*2)");

//store is: b_b.stencil(((b_b_s0_x_x*2) + 1), (b_b_s0_y_yio*2)) = denoised$1.stencil(((b_b_s0_x_x*4) + 4), ((b_b_s0_y_yio*4) + 1))
  auto hcompute_b_b_stencil_2 = b_b_s0_x_x->add_op("op_hcompute_b_b_stencil_2");
  hcompute_b_b_stencil_2->add_function("hcompute_b_b_stencil_2");
  hcompute_b_b_stencil_2->add_load("denoised_1_stencil", "((b_b_s0_y_yio*4) + 1)", "((b_b_s0_x_x*4) + 4)");
  hcompute_b_b_stencil_2->add_store("b_b_stencil", "(b_b_s0_y_yio*2)", "((b_b_s0_x_x*2) + 1)");

//store is: b_b.stencil(((b_b_s0_x_x*2) + 1), ((b_b_s0_y_yio*2) + 1)) = denoised$1.stencil(((b_b_s0_x_x*4) + 4), ((b_b_s0_y_yio*4) + 3))
  auto hcompute_b_b_stencil_3 = b_b_s0_x_x->add_op("op_hcompute_b_b_stencil_3");
  hcompute_b_b_stencil_3->add_function("hcompute_b_b_stencil_3");
  hcompute_b_b_stencil_3->add_load("denoised_1_stencil", "((b_b_s0_y_yio*4) + 3)", "((b_b_s0_x_x*4) + 4)");
  hcompute_b_b_stencil_3->add_store("b_b_stencil", "((b_b_s0_y_yio*2) + 1)", "((b_b_s0_x_x*2) + 1)");

//consuming b_b.stencil
////producing g_gb.stencil
  auto g_gb_s0_y_yio = prg.add_loop("g_gb_s0_y_yio", 0, 49);
  auto g_gb_s0_x_x = g_gb_s0_y_yio->add_loop("g_gb_s0_x_x", 0, 65);

//store is: g_gb.stencil((g_gb_s0_x_x*2), (g_gb_s0_y_yio*2)) = denoised$1.stencil(((g_gb_s0_x_x*4) + 1), ((g_gb_s0_y_yio*4) + 1))
  auto hcompute_g_gb_stencil = g_gb_s0_x_x->add_op("op_hcompute_g_gb_stencil");
  hcompute_g_gb_stencil->add_function("hcompute_g_gb_stencil");
  hcompute_g_gb_stencil->add_load("denoised_1_stencil", "((g_gb_s0_y_yio*4) + 1)", "((g_gb_s0_x_x*4) + 1)");
  prg.buffer_port_widths["g_gb_stencil"] = 16;
  hcompute_g_gb_stencil->add_store("g_gb_stencil", "(g_gb_s0_y_yio*2)", "(g_gb_s0_x_x*2)");

//store is: g_gb.stencil((g_gb_s0_x_x*2), ((g_gb_s0_y_yio*2) + 1)) = denoised$1.stencil(((g_gb_s0_x_x*4) + 1), ((g_gb_s0_y_yio*4) + 3))
  auto hcompute_g_gb_stencil_1 = g_gb_s0_x_x->add_op("op_hcompute_g_gb_stencil_1");
  hcompute_g_gb_stencil_1->add_function("hcompute_g_gb_stencil_1");
  hcompute_g_gb_stencil_1->add_load("denoised_1_stencil", "((g_gb_s0_y_yio*4) + 3)", "((g_gb_s0_x_x*4) + 1)");
  hcompute_g_gb_stencil_1->add_store("g_gb_stencil", "((g_gb_s0_y_yio*2) + 1)", "(g_gb_s0_x_x*2)");

//store is: g_gb.stencil(((g_gb_s0_x_x*2) + 1), (g_gb_s0_y_yio*2)) = denoised$1.stencil(((g_gb_s0_x_x*4) + 3), ((g_gb_s0_y_yio*4) + 1))
  auto hcompute_g_gb_stencil_2 = g_gb_s0_x_x->add_op("op_hcompute_g_gb_stencil_2");
  hcompute_g_gb_stencil_2->add_function("hcompute_g_gb_stencil_2");
  hcompute_g_gb_stencil_2->add_load("denoised_1_stencil", "((g_gb_s0_y_yio*4) + 1)", "((g_gb_s0_x_x*4) + 3)");
  hcompute_g_gb_stencil_2->add_store("g_gb_stencil", "(g_gb_s0_y_yio*2)", "((g_gb_s0_x_x*2) + 1)");

//store is: g_gb.stencil(((g_gb_s0_x_x*2) + 1), ((g_gb_s0_y_yio*2) + 1)) = denoised$1.stencil(((g_gb_s0_x_x*4) + 3), ((g_gb_s0_y_yio*4) + 3))
  auto hcompute_g_gb_stencil_3 = g_gb_s0_x_x->add_op("op_hcompute_g_gb_stencil_3");
  hcompute_g_gb_stencil_3->add_function("hcompute_g_gb_stencil_3");
  hcompute_g_gb_stencil_3->add_load("denoised_1_stencil", "((g_gb_s0_y_yio*4) + 3)", "((g_gb_s0_x_x*4) + 3)");
  hcompute_g_gb_stencil_3->add_store("g_gb_stencil", "((g_gb_s0_y_yio*2) + 1)", "((g_gb_s0_x_x*2) + 1)");

//consuming g_gb.stencil
////producing g_gr.stencil
  auto g_gr_s0_y_yio = prg.add_loop("g_gr_s0_y_yio", 0, 49);
  auto g_gr_s0_x_x = g_gr_s0_y_yio->add_loop("g_gr_s0_x_x", 0, 65);

//store is: g_gr.stencil((g_gr_s0_x_x*2), (g_gr_s0_y_yio*2)) = denoised$1.stencil((g_gr_s0_x_x*4), (g_gr_s0_y_yio*4))
  auto hcompute_g_gr_stencil = g_gr_s0_x_x->add_op("op_hcompute_g_gr_stencil");
  hcompute_g_gr_stencil->add_function("hcompute_g_gr_stencil");
  hcompute_g_gr_stencil->add_load("denoised_1_stencil", "(g_gr_s0_y_yio*4)", "(g_gr_s0_x_x*4)");
  prg.buffer_port_widths["g_gr_stencil"] = 16;
  hcompute_g_gr_stencil->add_store("g_gr_stencil", "(g_gr_s0_y_yio*2)", "(g_gr_s0_x_x*2)");

//store is: g_gr.stencil((g_gr_s0_x_x*2), ((g_gr_s0_y_yio*2) + 1)) = denoised$1.stencil((g_gr_s0_x_x*4), ((g_gr_s0_y_yio*4) + 2))
  auto hcompute_g_gr_stencil_1 = g_gr_s0_x_x->add_op("op_hcompute_g_gr_stencil_1");
  hcompute_g_gr_stencil_1->add_function("hcompute_g_gr_stencil_1");
  hcompute_g_gr_stencil_1->add_load("denoised_1_stencil", "((g_gr_s0_y_yio*4) + 2)", "(g_gr_s0_x_x*4)");
  hcompute_g_gr_stencil_1->add_store("g_gr_stencil", "((g_gr_s0_y_yio*2) + 1)", "(g_gr_s0_x_x*2)");

//store is: g_gr.stencil(((g_gr_s0_x_x*2) + 1), (g_gr_s0_y_yio*2)) = denoised$1.stencil(((g_gr_s0_x_x*4) + 2), (g_gr_s0_y_yio*4))
  auto hcompute_g_gr_stencil_2 = g_gr_s0_x_x->add_op("op_hcompute_g_gr_stencil_2");
  hcompute_g_gr_stencil_2->add_function("hcompute_g_gr_stencil_2");
  hcompute_g_gr_stencil_2->add_load("denoised_1_stencil", "(g_gr_s0_y_yio*4)", "((g_gr_s0_x_x*4) + 2)");
  hcompute_g_gr_stencil_2->add_store("g_gr_stencil", "(g_gr_s0_y_yio*2)", "((g_gr_s0_x_x*2) + 1)");

//store is: g_gr.stencil(((g_gr_s0_x_x*2) + 1), ((g_gr_s0_y_yio*2) + 1)) = denoised$1.stencil(((g_gr_s0_x_x*4) + 2), ((g_gr_s0_y_yio*4) + 2))
  auto hcompute_g_gr_stencil_3 = g_gr_s0_x_x->add_op("op_hcompute_g_gr_stencil_3");
  hcompute_g_gr_stencil_3->add_function("hcompute_g_gr_stencil_3");
  hcompute_g_gr_stencil_3->add_load("denoised_1_stencil", "((g_gr_s0_y_yio*4) + 2)", "((g_gr_s0_x_x*4) + 2)");
  hcompute_g_gr_stencil_3->add_store("g_gr_stencil", "((g_gr_s0_y_yio*2) + 1)", "((g_gr_s0_x_x*2) + 1)");

//consuming g_gr.stencil
////producing g_b.stencil
  auto g_b_s0_y_yio = prg.add_loop("g_b_s0_y_yio", 0, 49);
  auto g_b_s0_x_x = g_b_s0_y_yio->add_loop("g_b_s0_x_x", 0, 65);

//store is: g_b.stencil((g_b_s0_x_x*2), (g_b_s0_y_yio*2)) = select((absd(g_gb.stencil((g_b_s0_x_x*2), (g_b_s0_y_yio*2)), g_gb.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2))) < absd(g_gr.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)), g_gr.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2)))), ((g_gb.stencil((g_b_s0_x_x*2), (g_b_s0_y_yio*2)) + g_gb.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2)))/(uint16)2), ((g_gr.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)) + g_gr.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2)))/(uint16)2))
  auto hcompute_g_b_stencil = g_b_s0_x_x->add_op("op_hcompute_g_b_stencil");
  hcompute_g_b_stencil->add_function("hcompute_g_b_stencil");
  hcompute_g_b_stencil->add_load("g_gb_stencil", "(g_b_s0_y_yio*2)", "(g_b_s0_x_x*2)");
  hcompute_g_b_stencil->add_load("g_gb_stencil", "(g_b_s0_y_yio*2)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil->add_load("g_gr_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil->add_load("g_gr_stencil", "(g_b_s0_y_yio*2)", "((g_b_s0_x_x*2) + 1)");
  prg.buffer_port_widths["g_b_stencil"] = 16;
  hcompute_g_b_stencil->add_store("g_b_stencil", "(g_b_s0_y_yio*2)", "(g_b_s0_x_x*2)");

//store is: g_b.stencil((g_b_s0_x_x*2), ((g_b_s0_y_yio*2) + 1)) = select((absd(g_gb.stencil((g_b_s0_x_x*2), ((g_b_s0_y_yio*2) + 1)), g_gb.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1))) < absd(g_gr.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 2)), g_gr.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)))), ((g_gb.stencil((g_b_s0_x_x*2), ((g_b_s0_y_yio*2) + 1)) + g_gb.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)))/(uint16)2), ((g_gr.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 2)) + g_gr.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_g_b_stencil_1 = g_b_s0_x_x->add_op("op_hcompute_g_b_stencil_1");
  hcompute_g_b_stencil_1->add_function("hcompute_g_b_stencil_1");
  hcompute_g_b_stencil_1->add_load("g_gb_stencil", "((g_b_s0_y_yio*2) + 1)", "(g_b_s0_x_x*2)");
  hcompute_g_b_stencil_1->add_load("g_gb_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil_1->add_load("g_gr_stencil", "((g_b_s0_y_yio*2) + 2)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil_1->add_load("g_gr_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil_1->add_store("g_b_stencil", "((g_b_s0_y_yio*2) + 1)", "(g_b_s0_x_x*2)");

//store is: g_b.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2)) = select((absd(g_gb.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2)), g_gb.stencil(((g_b_s0_x_x*2) + 2), (g_b_s0_y_yio*2))) < absd(g_gr.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 1)), g_gr.stencil(((g_b_s0_x_x*2) + 2), (g_b_s0_y_yio*2)))), ((g_gb.stencil(((g_b_s0_x_x*2) + 1), (g_b_s0_y_yio*2)) + g_gb.stencil(((g_b_s0_x_x*2) + 2), (g_b_s0_y_yio*2)))/(uint16)2), ((g_gr.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 1)) + g_gr.stencil(((g_b_s0_x_x*2) + 2), (g_b_s0_y_yio*2)))/(uint16)2))
  auto hcompute_g_b_stencil_2 = g_b_s0_x_x->add_op("op_hcompute_g_b_stencil_2");
  hcompute_g_b_stencil_2->add_function("hcompute_g_b_stencil_2");
  hcompute_g_b_stencil_2->add_load("g_gb_stencil", "(g_b_s0_y_yio*2)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil_2->add_load("g_gb_stencil", "(g_b_s0_y_yio*2)", "((g_b_s0_x_x*2) + 2)");
  hcompute_g_b_stencil_2->add_load("g_gr_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 2)");
  hcompute_g_b_stencil_2->add_load("g_gr_stencil", "(g_b_s0_y_yio*2)", "((g_b_s0_x_x*2) + 2)");
  hcompute_g_b_stencil_2->add_store("g_b_stencil", "(g_b_s0_y_yio*2)", "((g_b_s0_x_x*2) + 1)");

//store is: g_b.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)) = select((absd(g_gb.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)), g_gb.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 1))) < absd(g_gr.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 2)), g_gr.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 1)))), ((g_gb.stencil(((g_b_s0_x_x*2) + 1), ((g_b_s0_y_yio*2) + 1)) + g_gb.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 1)))/(uint16)2), ((g_gr.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 2)) + g_gr.stencil(((g_b_s0_x_x*2) + 2), ((g_b_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_g_b_stencil_3 = g_b_s0_x_x->add_op("op_hcompute_g_b_stencil_3");
  hcompute_g_b_stencil_3->add_function("hcompute_g_b_stencil_3");
  hcompute_g_b_stencil_3->add_load("g_gb_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 1)");
  hcompute_g_b_stencil_3->add_load("g_gb_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 2)");
  hcompute_g_b_stencil_3->add_load("g_gr_stencil", "((g_b_s0_y_yio*2) + 2)", "((g_b_s0_x_x*2) + 2)");
  hcompute_g_b_stencil_3->add_load("g_gr_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 2)");
  hcompute_g_b_stencil_3->add_store("g_b_stencil", "((g_b_s0_y_yio*2) + 1)", "((g_b_s0_x_x*2) + 1)");

//consuming g_b.stencil
////producing b_gb.stencil
  auto b_gb_s0_y_yio = prg.add_loop("b_gb_s0_y_yio", 0, 48);
  auto b_gb_s0_x_x = b_gb_s0_y_yio->add_loop("b_gb_s0_x_x", 0, 64);

//store is: b_gb.stencil((b_gb_s0_x_x*2), (b_gb_s0_y_yio*2)) = ((g_gb.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 1)) + ((b_b.stencil((b_gb_s0_x_x*2), ((b_gb_s0_y_yio*2) + 1)) + b_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil((b_gb_s0_x_x*2), ((b_gb_s0_y_yio*2) + 1)) + g_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_b_gb_stencil = b_gb_s0_x_x->add_op("op_hcompute_b_gb_stencil");
  hcompute_b_gb_stencil->add_function("hcompute_b_gb_stencil");
  hcompute_b_gb_stencil->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "(b_gb_s0_x_x*2)");
  hcompute_b_gb_stencil->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "(b_gb_s0_x_x*2)");
  hcompute_b_gb_stencil->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil->add_load("g_gb_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 1)");
  prg.buffer_port_widths["b_gb_stencil"] = 16;
  hcompute_b_gb_stencil->add_store("b_gb_stencil", "(b_gb_s0_y_yio*2)", "(b_gb_s0_x_x*2)");

//store is: b_gb.stencil((b_gb_s0_x_x*2), ((b_gb_s0_y_yio*2) + 1)) = ((g_gb.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 2)) + ((b_b.stencil((b_gb_s0_x_x*2), ((b_gb_s0_y_yio*2) + 2)) + b_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_b.stencil((b_gb_s0_x_x*2), ((b_gb_s0_y_yio*2) + 2)) + g_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 2)))/(uint16)2))
  auto hcompute_b_gb_stencil_1 = b_gb_s0_x_x->add_op("op_hcompute_b_gb_stencil_1");
  hcompute_b_gb_stencil_1->add_function("hcompute_b_gb_stencil_1");
  hcompute_b_gb_stencil_1->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "(b_gb_s0_x_x*2)");
  hcompute_b_gb_stencil_1->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_1->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "(b_gb_s0_x_x*2)");
  hcompute_b_gb_stencil_1->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_1->add_load("g_gb_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_1->add_store("b_gb_stencil", "((b_gb_s0_y_yio*2) + 1)", "(b_gb_s0_x_x*2)");

//store is: b_gb.stencil(((b_gb_s0_x_x*2) + 1), (b_gb_s0_y_yio*2)) = ((g_gb.stencil(((b_gb_s0_x_x*2) + 2), ((b_gb_s0_y_yio*2) + 1)) + ((b_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 1)) + b_b.stencil(((b_gb_s0_x_x*2) + 2), ((b_gb_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 1)) + g_b.stencil(((b_gb_s0_x_x*2) + 2), ((b_gb_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_b_gb_stencil_2 = b_gb_s0_x_x->add_op("op_hcompute_b_gb_stencil_2");
  hcompute_b_gb_stencil_2->add_function("hcompute_b_gb_stencil_2");
  hcompute_b_gb_stencil_2->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_2->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 2)");
  hcompute_b_gb_stencil_2->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_2->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 2)");
  hcompute_b_gb_stencil_2->add_load("g_gb_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 2)");
  hcompute_b_gb_stencil_2->add_store("b_gb_stencil", "(b_gb_s0_y_yio*2)", "((b_gb_s0_x_x*2) + 1)");

//store is: b_gb.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 1)) = ((g_gb.stencil(((b_gb_s0_x_x*2) + 2), ((b_gb_s0_y_yio*2) + 2)) + ((b_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 2)) + b_b.stencil(((b_gb_s0_x_x*2) + 2), ((b_gb_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_b.stencil(((b_gb_s0_x_x*2) + 1), ((b_gb_s0_y_yio*2) + 2)) + g_b.stencil(((b_gb_s0_x_x*2) + 2), ((b_gb_s0_y_yio*2) + 2)))/(uint16)2))
  auto hcompute_b_gb_stencil_3 = b_gb_s0_x_x->add_op("op_hcompute_b_gb_stencil_3");
  hcompute_b_gb_stencil_3->add_function("hcompute_b_gb_stencil_3");
  hcompute_b_gb_stencil_3->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_3->add_load("b_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 2)");
  hcompute_b_gb_stencil_3->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 1)");
  hcompute_b_gb_stencil_3->add_load("g_b_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 2)");
  hcompute_b_gb_stencil_3->add_load("g_gb_stencil", "((b_gb_s0_y_yio*2) + 2)", "((b_gb_s0_x_x*2) + 2)");
  hcompute_b_gb_stencil_3->add_store("b_gb_stencil", "((b_gb_s0_y_yio*2) + 1)", "((b_gb_s0_x_x*2) + 1)");

//consuming b_gb.stencil
////producing b_gr.stencil
  auto b_gr_s0_y_yio = prg.add_loop("b_gr_s0_y_yio", 0, 48);
  auto b_gr_s0_x_x = b_gr_s0_y_yio->add_loop("b_gr_s0_x_x", 0, 64);

//store is: b_gr.stencil((b_gr_s0_x_x*2), (b_gr_s0_y_yio*2)) = ((g_gr.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 1)) + ((b_b.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 1)) + b_b.stencil((b_gr_s0_x_x*2), (b_gr_s0_y_yio*2)))/(uint16)2)) - ((g_b.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 1)) + g_b.stencil((b_gr_s0_x_x*2), (b_gr_s0_y_yio*2)))/(uint16)2))
  auto hcompute_b_gr_stencil = b_gr_s0_x_x->add_op("op_hcompute_b_gr_stencil");
  hcompute_b_gr_stencil->add_function("hcompute_b_gr_stencil");
  hcompute_b_gr_stencil->add_load("b_b_stencil", "(b_gr_s0_y_yio*2)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil->add_load("b_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil->add_load("g_b_stencil", "(b_gr_s0_y_yio*2)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil->add_load("g_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil->add_load("g_gr_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 1)");
  prg.buffer_port_widths["b_gr_stencil"] = 16;
  hcompute_b_gr_stencil->add_store("b_gr_stencil", "(b_gr_s0_y_yio*2)", "(b_gr_s0_x_x*2)");

//store is: b_gr.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 1)) = ((g_gr.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 2)) + ((b_b.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 2)) + b_b.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 2)) + g_b.stencil((b_gr_s0_x_x*2), ((b_gr_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_b_gr_stencil_1 = b_gr_s0_x_x->add_op("op_hcompute_b_gr_stencil_1");
  hcompute_b_gr_stencil_1->add_function("hcompute_b_gr_stencil_1");
  hcompute_b_gr_stencil_1->add_load("b_b_stencil", "((b_gr_s0_y_yio*2) + 2)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil_1->add_load("b_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil_1->add_load("g_b_stencil", "((b_gr_s0_y_yio*2) + 2)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil_1->add_load("g_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "(b_gr_s0_x_x*2)");
  hcompute_b_gr_stencil_1->add_load("g_gr_stencil", "((b_gr_s0_y_yio*2) + 2)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_1->add_store("b_gr_stencil", "((b_gr_s0_y_yio*2) + 1)", "(b_gr_s0_x_x*2)");

//store is: b_gr.stencil(((b_gr_s0_x_x*2) + 1), (b_gr_s0_y_yio*2)) = ((g_gr.stencil(((b_gr_s0_x_x*2) + 2), ((b_gr_s0_y_yio*2) + 1)) + ((b_b.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 1)) + b_b.stencil(((b_gr_s0_x_x*2) + 1), (b_gr_s0_y_yio*2)))/(uint16)2)) - ((g_b.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 1)) + g_b.stencil(((b_gr_s0_x_x*2) + 1), (b_gr_s0_y_yio*2)))/(uint16)2))
  auto hcompute_b_gr_stencil_2 = b_gr_s0_x_x->add_op("op_hcompute_b_gr_stencil_2");
  hcompute_b_gr_stencil_2->add_function("hcompute_b_gr_stencil_2");
  hcompute_b_gr_stencil_2->add_load("b_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_2->add_load("b_b_stencil", "(b_gr_s0_y_yio*2)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_2->add_load("g_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_2->add_load("g_b_stencil", "(b_gr_s0_y_yio*2)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_2->add_load("g_gr_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 2)");
  hcompute_b_gr_stencil_2->add_store("b_gr_stencil", "(b_gr_s0_y_yio*2)", "((b_gr_s0_x_x*2) + 1)");

//store is: b_gr.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 1)) = ((g_gr.stencil(((b_gr_s0_x_x*2) + 2), ((b_gr_s0_y_yio*2) + 2)) + ((b_b.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 2)) + b_b.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 2)) + g_b.stencil(((b_gr_s0_x_x*2) + 1), ((b_gr_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_b_gr_stencil_3 = b_gr_s0_x_x->add_op("op_hcompute_b_gr_stencil_3");
  hcompute_b_gr_stencil_3->add_function("hcompute_b_gr_stencil_3");
  hcompute_b_gr_stencil_3->add_load("b_b_stencil", "((b_gr_s0_y_yio*2) + 2)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_3->add_load("b_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_3->add_load("g_b_stencil", "((b_gr_s0_y_yio*2) + 2)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_3->add_load("g_b_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 1)");
  hcompute_b_gr_stencil_3->add_load("g_gr_stencil", "((b_gr_s0_y_yio*2) + 2)", "((b_gr_s0_x_x*2) + 2)");
  hcompute_b_gr_stencil_3->add_store("b_gr_stencil", "((b_gr_s0_y_yio*2) + 1)", "((b_gr_s0_x_x*2) + 1)");

//consuming b_gr.stencil
////producing g_r.stencil
  auto g_r_s0_y_yio = prg.add_loop("g_r_s0_y_yio", 0, 49);
  auto g_r_s0_x_x = g_r_s0_y_yio->add_loop("g_r_s0_x_x", 0, 65);

//store is: g_r.stencil((g_r_s0_x_x*2), (g_r_s0_y_yio*2)) = select((absd(g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)), g_gr.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1))) < absd(g_gb.stencil((g_r_s0_x_x*2), (g_r_s0_y_yio*2)), g_gb.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1)))), ((g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)) + g_gr.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1)))/(uint16)2), ((g_gb.stencil((g_r_s0_x_x*2), (g_r_s0_y_yio*2)) + g_gb.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_g_r_stencil = g_r_s0_x_x->add_op("op_hcompute_g_r_stencil");
  hcompute_g_r_stencil->add_function("hcompute_g_r_stencil");
  hcompute_g_r_stencil->add_load("g_gb_stencil", "(g_r_s0_y_yio*2)", "(g_r_s0_x_x*2)");
  hcompute_g_r_stencil->add_load("g_gb_stencil", "((g_r_s0_y_yio*2) + 1)", "(g_r_s0_x_x*2)");
  hcompute_g_r_stencil->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 1)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 1)", "(g_r_s0_x_x*2)");
  prg.buffer_port_widths["g_r_stencil"] = 16;
  hcompute_g_r_stencil->add_store("g_r_stencil", "(g_r_s0_y_yio*2)", "(g_r_s0_x_x*2)");

//store is: g_r.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1)) = select((absd(g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 2)), g_gr.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 2))) < absd(g_gb.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1)), g_gb.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 2)))), ((g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 2)) + g_gr.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 2)))/(uint16)2), ((g_gb.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 1)) + g_gb.stencil((g_r_s0_x_x*2), ((g_r_s0_y_yio*2) + 2)))/(uint16)2))
  auto hcompute_g_r_stencil_1 = g_r_s0_x_x->add_op("op_hcompute_g_r_stencil_1");
  hcompute_g_r_stencil_1->add_function("hcompute_g_r_stencil_1");
  hcompute_g_r_stencil_1->add_load("g_gb_stencil", "((g_r_s0_y_yio*2) + 1)", "(g_r_s0_x_x*2)");
  hcompute_g_r_stencil_1->add_load("g_gb_stencil", "((g_r_s0_y_yio*2) + 2)", "(g_r_s0_x_x*2)");
  hcompute_g_r_stencil_1->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 2)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_1->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 2)", "(g_r_s0_x_x*2)");
  hcompute_g_r_stencil_1->add_store("g_r_stencil", "((g_r_s0_y_yio*2) + 1)", "(g_r_s0_x_x*2)");

//store is: g_r.stencil(((g_r_s0_x_x*2) + 1), (g_r_s0_y_yio*2)) = select((absd(g_gr.stencil(((g_r_s0_x_x*2) + 2), ((g_r_s0_y_yio*2) + 1)), g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1))) < absd(g_gb.stencil(((g_r_s0_x_x*2) + 1), (g_r_s0_y_yio*2)), g_gb.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)))), ((g_gr.stencil(((g_r_s0_x_x*2) + 2), ((g_r_s0_y_yio*2) + 1)) + g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)))/(uint16)2), ((g_gb.stencil(((g_r_s0_x_x*2) + 1), (g_r_s0_y_yio*2)) + g_gb.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_g_r_stencil_2 = g_r_s0_x_x->add_op("op_hcompute_g_r_stencil_2");
  hcompute_g_r_stencil_2->add_function("hcompute_g_r_stencil_2");
  hcompute_g_r_stencil_2->add_load("g_gb_stencil", "(g_r_s0_y_yio*2)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_2->add_load("g_gb_stencil", "((g_r_s0_y_yio*2) + 1)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_2->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 1)", "((g_r_s0_x_x*2) + 2)");
  hcompute_g_r_stencil_2->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 1)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_2->add_store("g_r_stencil", "(g_r_s0_y_yio*2)", "((g_r_s0_x_x*2) + 1)");

//store is: g_r.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)) = select((absd(g_gr.stencil(((g_r_s0_x_x*2) + 2), ((g_r_s0_y_yio*2) + 2)), g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 2))) < absd(g_gb.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)), g_gb.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 2)))), ((g_gr.stencil(((g_r_s0_x_x*2) + 2), ((g_r_s0_y_yio*2) + 2)) + g_gr.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 2)))/(uint16)2), ((g_gb.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 1)) + g_gb.stencil(((g_r_s0_x_x*2) + 1), ((g_r_s0_y_yio*2) + 2)))/(uint16)2))
  auto hcompute_g_r_stencil_3 = g_r_s0_x_x->add_op("op_hcompute_g_r_stencil_3");
  hcompute_g_r_stencil_3->add_function("hcompute_g_r_stencil_3");
  hcompute_g_r_stencil_3->add_load("g_gb_stencil", "((g_r_s0_y_yio*2) + 1)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_3->add_load("g_gb_stencil", "((g_r_s0_y_yio*2) + 2)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_3->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 2)", "((g_r_s0_x_x*2) + 2)");
  hcompute_g_r_stencil_3->add_load("g_gr_stencil", "((g_r_s0_y_yio*2) + 2)", "((g_r_s0_x_x*2) + 1)");
  hcompute_g_r_stencil_3->add_store("g_r_stencil", "((g_r_s0_y_yio*2) + 1)", "((g_r_s0_x_x*2) + 1)");

//consuming g_r.stencil
////producing b_r.stencil
  auto b_r_s0_y_yio = prg.add_loop("b_r_s0_y_yio", 0, 48);
  auto b_r_s0_x_x = b_r_s0_y_yio->add_loop("b_r_s0_x_x", 0, 64);

//store is: b_r.stencil((b_r_s0_x_x*2), (b_r_s0_y_yio*2)) = select((absd(b_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)), b_b.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2))) < absd(b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)), b_b.stencil((b_r_s0_x_x*2), (b_r_s0_y_yio*2)))), ((g_r.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)) + ((b_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)) + b_b.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)))/(uint16)2)) - ((g_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)) + g_b.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)))/(uint16)2)), ((g_r.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)) + ((b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) + b_b.stencil((b_r_s0_x_x*2), (b_r_s0_y_yio*2)))/(uint16)2)) - ((g_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) + g_b.stencil((b_r_s0_x_x*2), (b_r_s0_y_yio*2)))/(uint16)2)))
  auto hcompute_b_r_stencil = b_r_s0_x_x->add_op("op_hcompute_b_r_stencil");
  hcompute_b_r_stencil->add_function("hcompute_b_r_stencil");
  hcompute_b_r_stencil->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil->add_load("b_b_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil->add_load("b_b_stencil", "(b_r_s0_y_yio*2)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil->add_load("g_b_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil->add_load("g_b_stencil", "(b_r_s0_y_yio*2)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil->add_load("g_r_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 1)");
  prg.buffer_port_widths["b_r_stencil"] = 16;
  hcompute_b_r_stencil->add_store("b_r_stencil", "(b_r_s0_y_yio*2)", "(b_r_s0_x_x*2)");

//store is: b_r.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)) = select((absd(b_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 2)), b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1))) < absd(b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 2)), b_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)))), ((g_r.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) + ((b_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 2)) + b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 2)) + g_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)), ((g_r.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) + ((b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 2)) + b_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 2)) + g_b.stencil((b_r_s0_x_x*2), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)))
  auto hcompute_b_r_stencil_1 = b_r_s0_x_x->add_op("op_hcompute_b_r_stencil_1");
  hcompute_b_r_stencil_1->add_function("hcompute_b_r_stencil_1");
  hcompute_b_r_stencil_1->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 2)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil_1->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_1->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_1->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil_1->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 2)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil_1->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_1->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_1->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "(b_r_s0_x_x*2)");
  hcompute_b_r_stencil_1->add_load("g_r_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_1->add_store("b_r_stencil", "((b_r_s0_y_yio*2) + 1)", "(b_r_s0_x_x*2)");

//store is: b_r.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)) = select((absd(b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)), b_b.stencil(((b_r_s0_x_x*2) + 2), (b_r_s0_y_yio*2))) < absd(b_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)), b_b.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)))), ((g_r.stencil(((b_r_s0_x_x*2) + 2), (b_r_s0_y_yio*2)) + ((b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) + b_b.stencil(((b_r_s0_x_x*2) + 2), (b_r_s0_y_yio*2)))/(uint16)2)) - ((g_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) + g_b.stencil(((b_r_s0_x_x*2) + 2), (b_r_s0_y_yio*2)))/(uint16)2)), ((g_r.stencil(((b_r_s0_x_x*2) + 2), (b_r_s0_y_yio*2)) + ((b_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)) + b_b.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)))/(uint16)2)) - ((g_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)) + g_b.stencil(((b_r_s0_x_x*2) + 1), (b_r_s0_y_yio*2)))/(uint16)2)))
  auto hcompute_b_r_stencil_2 = b_r_s0_x_x->add_op("op_hcompute_b_r_stencil_2");
  hcompute_b_r_stencil_2->add_function("hcompute_b_r_stencil_2");
  hcompute_b_r_stencil_2->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_2->add_load("b_b_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_2->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_2->add_load("b_b_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_2->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_2->add_load("g_b_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_2->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_2->add_load("g_b_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_2->add_load("g_r_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_2->add_store("b_r_stencil", "(b_r_s0_y_yio*2)", "((b_r_s0_x_x*2) + 1)");

//store is: b_r.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)) = select((absd(b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 2)), b_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1))) < absd(b_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 2)), b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)))), ((g_r.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)) + ((b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 2)) + b_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 2)) + g_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)), ((g_r.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 1)) + ((b_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 2)) + b_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_b.stencil(((b_r_s0_x_x*2) + 2), ((b_r_s0_y_yio*2) + 2)) + g_b.stencil(((b_r_s0_x_x*2) + 1), ((b_r_s0_y_yio*2) + 1)))/(uint16)2)))
  auto hcompute_b_r_stencil_3 = b_r_s0_x_x->add_op("op_hcompute_b_r_stencil_3");
  hcompute_b_r_stencil_3->add_function("hcompute_b_r_stencil_3");
  hcompute_b_r_stencil_3->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_3->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_3->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 2)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_3->add_load("b_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_3->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 2)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_3->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_3->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 2)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_3->add_load("g_b_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");
  hcompute_b_r_stencil_3->add_load("g_r_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 2)");
  hcompute_b_r_stencil_3->add_store("b_r_stencil", "((b_r_s0_y_yio*2) + 1)", "((b_r_s0_x_x*2) + 1)");

//consuming b_r.stencil
////producing r_r.stencil
  auto r_r_s0_y_yio = prg.add_loop("r_r_s0_y_yio", 0, 49);
  auto r_r_s0_x_x = r_r_s0_y_yio->add_loop("r_r_s0_x_x", 0, 65);

//store is: r_r.stencil((r_r_s0_x_x*2), (r_r_s0_y_yio*2)) = denoised$1.stencil(((r_r_s0_x_x*4) + 1), ((r_r_s0_y_yio*4) + 2))
  auto hcompute_r_r_stencil = r_r_s0_x_x->add_op("op_hcompute_r_r_stencil");
  hcompute_r_r_stencil->add_function("hcompute_r_r_stencil");
  hcompute_r_r_stencil->add_load("denoised_1_stencil", "((r_r_s0_y_yio*4) + 2)", "((r_r_s0_x_x*4) + 1)");
  prg.buffer_port_widths["r_r_stencil"] = 16;
  hcompute_r_r_stencil->add_store("r_r_stencil", "(r_r_s0_y_yio*2)", "(r_r_s0_x_x*2)");

//store is: r_r.stencil((r_r_s0_x_x*2), ((r_r_s0_y_yio*2) + 1)) = denoised$1.stencil(((r_r_s0_x_x*4) + 1), ((r_r_s0_y_yio*4) + 4))
  auto hcompute_r_r_stencil_1 = r_r_s0_x_x->add_op("op_hcompute_r_r_stencil_1");
  hcompute_r_r_stencil_1->add_function("hcompute_r_r_stencil_1");
  hcompute_r_r_stencil_1->add_load("denoised_1_stencil", "((r_r_s0_y_yio*4) + 4)", "((r_r_s0_x_x*4) + 1)");
  hcompute_r_r_stencil_1->add_store("r_r_stencil", "((r_r_s0_y_yio*2) + 1)", "(r_r_s0_x_x*2)");

//store is: r_r.stencil(((r_r_s0_x_x*2) + 1), (r_r_s0_y_yio*2)) = denoised$1.stencil(((r_r_s0_x_x*4) + 3), ((r_r_s0_y_yio*4) + 2))
  auto hcompute_r_r_stencil_2 = r_r_s0_x_x->add_op("op_hcompute_r_r_stencil_2");
  hcompute_r_r_stencil_2->add_function("hcompute_r_r_stencil_2");
  hcompute_r_r_stencil_2->add_load("denoised_1_stencil", "((r_r_s0_y_yio*4) + 2)", "((r_r_s0_x_x*4) + 3)");
  hcompute_r_r_stencil_2->add_store("r_r_stencil", "(r_r_s0_y_yio*2)", "((r_r_s0_x_x*2) + 1)");

//store is: r_r.stencil(((r_r_s0_x_x*2) + 1), ((r_r_s0_y_yio*2) + 1)) = denoised$1.stencil(((r_r_s0_x_x*4) + 3), ((r_r_s0_y_yio*4) + 4))
  auto hcompute_r_r_stencil_3 = r_r_s0_x_x->add_op("op_hcompute_r_r_stencil_3");
  hcompute_r_r_stencil_3->add_function("hcompute_r_r_stencil_3");
  hcompute_r_r_stencil_3->add_load("denoised_1_stencil", "((r_r_s0_y_yio*4) + 4)", "((r_r_s0_x_x*4) + 3)");
  hcompute_r_r_stencil_3->add_store("r_r_stencil", "((r_r_s0_y_yio*2) + 1)", "((r_r_s0_x_x*2) + 1)");

//consuming r_r.stencil
////producing r_b.stencil
  auto r_b_s0_y_yio = prg.add_loop("r_b_s0_y_yio", 0, 48);
  auto r_b_s0_x_x = r_b_s0_y_yio->add_loop("r_b_s0_x_x", 0, 64);

//store is: r_b.stencil((r_b_s0_x_x*2), (r_b_s0_y_yio*2)) = select((absd(r_r.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)), r_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1))) < absd(r_r.stencil((r_b_s0_x_x*2), (r_b_s0_y_yio*2)), r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)))), ((g_b.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)) + ((r_r.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)) + r_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)) + g_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)), ((g_b.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)) + ((r_r.stencil((r_b_s0_x_x*2), (r_b_s0_y_yio*2)) + r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil((r_b_s0_x_x*2), (r_b_s0_y_yio*2)) + g_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)))
  auto hcompute_r_b_stencil = r_b_s0_x_x->add_op("op_hcompute_r_b_stencil");
  hcompute_r_b_stencil->add_function("hcompute_r_b_stencil");
  hcompute_r_b_stencil->add_load("g_b_stencil", "((r_b_s0_y_yio*2) + 1)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil->add_load("g_r_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil->add_load("g_r_stencil", "(r_b_s0_y_yio*2)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil->add_load("r_r_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil->add_load("r_r_stencil", "(r_b_s0_y_yio*2)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  prg.buffer_port_widths["r_b_stencil"] = 16;
  hcompute_r_b_stencil->add_store("r_b_stencil", "(r_b_s0_y_yio*2)", "(r_b_s0_x_x*2)");

//store is: r_b.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)) = select((absd(r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)), r_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 2))) < absd(r_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)), r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)))), ((g_b.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 2)) + ((r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) + r_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) + g_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)), ((g_b.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 2)) + ((r_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)) + r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_r.stencil((r_b_s0_x_x*2), ((r_b_s0_y_yio*2) + 1)) + g_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)))
  auto hcompute_r_b_stencil_1 = r_b_s0_x_x->add_op("op_hcompute_r_b_stencil_1");
  hcompute_r_b_stencil_1->add_function("hcompute_r_b_stencil_1");
  hcompute_r_b_stencil_1->add_load("g_b_stencil", "((r_b_s0_y_yio*2) + 2)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil_1->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 2)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil_1->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil_1->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_1->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_1->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_1->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 2)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil_1->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "(r_b_s0_x_x*2)");
  hcompute_r_b_stencil_1->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_1->add_store("r_b_stencil", "((r_b_s0_y_yio*2) + 1)", "(r_b_s0_x_x*2)");

//store is: r_b.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)) = select((absd(r_r.stencil(((r_b_s0_x_x*2) + 2), (r_b_s0_y_yio*2)), r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1))) < absd(r_r.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)), r_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 1)))), ((g_b.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) + ((r_r.stencil(((r_b_s0_x_x*2) + 2), (r_b_s0_y_yio*2)) + r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_b_s0_x_x*2) + 2), (r_b_s0_y_yio*2)) + g_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)), ((g_b.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) + ((r_r.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)) + r_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_b_s0_x_x*2) + 1), (r_b_s0_y_yio*2)) + g_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 1)))/(uint16)2)))
  auto hcompute_r_b_stencil_2 = r_b_s0_x_x->add_op("op_hcompute_r_b_stencil_2");
  hcompute_r_b_stencil_2->add_function("hcompute_r_b_stencil_2");
  hcompute_r_b_stencil_2->add_load("g_b_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_2->add_load("g_r_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_2->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_2->add_load("g_r_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_2->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_2->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_2->add_load("r_r_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_2->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_2->add_load("r_r_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_2->add_store("r_b_stencil", "(r_b_s0_y_yio*2)", "((r_b_s0_x_x*2) + 1)");

//store is: r_b.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) = select((absd(r_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 1)), r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2))) < absd(r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)), r_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 2)))), ((g_b.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)) + ((r_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 1)) + r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 1)) + g_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)), ((g_b.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 2)) + ((r_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) + r_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_r.stencil(((r_b_s0_x_x*2) + 1), ((r_b_s0_y_yio*2) + 1)) + g_r.stencil(((r_b_s0_x_x*2) + 2), ((r_b_s0_y_yio*2) + 2)))/(uint16)2)))
  auto hcompute_r_b_stencil_3 = r_b_s0_x_x->add_op("op_hcompute_r_b_stencil_3");
  hcompute_r_b_stencil_3->add_function("hcompute_r_b_stencil_3");
  hcompute_r_b_stencil_3->add_load("g_b_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_3->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_3->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_3->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_3->add_load("g_r_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_3->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_3->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_3->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");
  hcompute_r_b_stencil_3->add_load("r_r_stencil", "((r_b_s0_y_yio*2) + 2)", "((r_b_s0_x_x*2) + 2)");
  hcompute_r_b_stencil_3->add_store("r_b_stencil", "((r_b_s0_y_yio*2) + 1)", "((r_b_s0_x_x*2) + 1)");

//consuming r_b.stencil
////producing r_gb.stencil
  auto r_gb_s0_y_yio = prg.add_loop("r_gb_s0_y_yio", 0, 48);
  auto r_gb_s0_x_x = r_gb_s0_y_yio->add_loop("r_gb_s0_x_x", 0, 64);

//store is: r_gb.stencil((r_gb_s0_x_x*2), (r_gb_s0_y_yio*2)) = ((g_gb.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 1)) + ((r_r.stencil(((r_gb_s0_x_x*2) + 1), (r_gb_s0_y_yio*2)) + r_r.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_gb_s0_x_x*2) + 1), (r_gb_s0_y_yio*2)) + g_r.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_r_gb_stencil = r_gb_s0_x_x->add_op("op_hcompute_r_gb_stencil");
  hcompute_r_gb_stencil->add_function("hcompute_r_gb_stencil");
  hcompute_r_gb_stencil->add_load("g_gb_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil->add_load("g_r_stencil", "(r_gb_s0_y_yio*2)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil->add_load("g_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil->add_load("r_r_stencil", "(r_gb_s0_y_yio*2)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil->add_load("r_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 1)");
  prg.buffer_port_widths["r_gb_stencil"] = 16;
  hcompute_r_gb_stencil->add_store("r_gb_stencil", "(r_gb_s0_y_yio*2)", "(r_gb_s0_x_x*2)");

//store is: r_gb.stencil((r_gb_s0_x_x*2), ((r_gb_s0_y_yio*2) + 1)) = ((g_gb.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 2)) + ((r_r.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 1)) + r_r.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_r.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 1)) + g_r.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 2)))/(uint16)2))
  auto hcompute_r_gb_stencil_1 = r_gb_s0_x_x->add_op("op_hcompute_r_gb_stencil_1");
  hcompute_r_gb_stencil_1->add_function("hcompute_r_gb_stencil_1");
  hcompute_r_gb_stencil_1->add_load("g_gb_stencil", "((r_gb_s0_y_yio*2) + 2)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil_1->add_load("g_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil_1->add_load("g_r_stencil", "((r_gb_s0_y_yio*2) + 2)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil_1->add_load("r_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil_1->add_load("r_r_stencil", "((r_gb_s0_y_yio*2) + 2)", "((r_gb_s0_x_x*2) + 1)");
  hcompute_r_gb_stencil_1->add_store("r_gb_stencil", "((r_gb_s0_y_yio*2) + 1)", "(r_gb_s0_x_x*2)");

//store is: r_gb.stencil(((r_gb_s0_x_x*2) + 1), (r_gb_s0_y_yio*2)) = ((g_gb.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 1)) + ((r_r.stencil(((r_gb_s0_x_x*2) + 2), (r_gb_s0_y_yio*2)) + r_r.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_gb_s0_x_x*2) + 2), (r_gb_s0_y_yio*2)) + g_r.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_r_gb_stencil_2 = r_gb_s0_x_x->add_op("op_hcompute_r_gb_stencil_2");
  hcompute_r_gb_stencil_2->add_function("hcompute_r_gb_stencil_2");
  hcompute_r_gb_stencil_2->add_load("g_gb_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_2->add_load("g_r_stencil", "(r_gb_s0_y_yio*2)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_2->add_load("g_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_2->add_load("r_r_stencil", "(r_gb_s0_y_yio*2)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_2->add_load("r_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_2->add_store("r_gb_stencil", "(r_gb_s0_y_yio*2)", "((r_gb_s0_x_x*2) + 1)");

//store is: r_gb.stencil(((r_gb_s0_x_x*2) + 1), ((r_gb_s0_y_yio*2) + 1)) = ((g_gb.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 2)) + ((r_r.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 1)) + r_r.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 2)))/(uint16)2)) - ((g_r.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 1)) + g_r.stencil(((r_gb_s0_x_x*2) + 2), ((r_gb_s0_y_yio*2) + 2)))/(uint16)2))
  auto hcompute_r_gb_stencil_3 = r_gb_s0_x_x->add_op("op_hcompute_r_gb_stencil_3");
  hcompute_r_gb_stencil_3->add_function("hcompute_r_gb_stencil_3");
  hcompute_r_gb_stencil_3->add_load("g_gb_stencil", "((r_gb_s0_y_yio*2) + 2)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_3->add_load("g_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_3->add_load("g_r_stencil", "((r_gb_s0_y_yio*2) + 2)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_3->add_load("r_r_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_3->add_load("r_r_stencil", "((r_gb_s0_y_yio*2) + 2)", "((r_gb_s0_x_x*2) + 2)");
  hcompute_r_gb_stencil_3->add_store("r_gb_stencil", "((r_gb_s0_y_yio*2) + 1)", "((r_gb_s0_x_x*2) + 1)");

//consuming r_gb.stencil
////producing r_gr.stencil
  auto r_gr_s0_y_yio = prg.add_loop("r_gr_s0_y_yio", 0, 48);
  auto r_gr_s0_x_x = r_gr_s0_y_yio->add_loop("r_gr_s0_x_x", 0, 64);

//store is: r_gr.stencil((r_gr_s0_x_x*2), (r_gr_s0_y_yio*2)) = ((g_gr.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 1)) + ((r_r.stencil((r_gr_s0_x_x*2), (r_gr_s0_y_yio*2)) + r_r.stencil(((r_gr_s0_x_x*2) + 1), (r_gr_s0_y_yio*2)))/(uint16)2)) - ((g_r.stencil(((r_gr_s0_x_x*2) + 1), (r_gr_s0_y_yio*2)) + g_r.stencil((r_gr_s0_x_x*2), (r_gr_s0_y_yio*2)))/(uint16)2))
  auto hcompute_r_gr_stencil = r_gr_s0_x_x->add_op("op_hcompute_r_gr_stencil");
  hcompute_r_gr_stencil->add_function("hcompute_r_gr_stencil");
  hcompute_r_gr_stencil->add_load("g_gr_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil->add_load("g_r_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil->add_load("g_r_stencil", "(r_gr_s0_y_yio*2)", "(r_gr_s0_x_x*2)");
  hcompute_r_gr_stencil->add_load("r_r_stencil", "(r_gr_s0_y_yio*2)", "(r_gr_s0_x_x*2)");
  hcompute_r_gr_stencil->add_load("r_r_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 1)");
  prg.buffer_port_widths["r_gr_stencil"] = 16;
  hcompute_r_gr_stencil->add_store("r_gr_stencil", "(r_gr_s0_y_yio*2)", "(r_gr_s0_x_x*2)");

//store is: r_gr.stencil((r_gr_s0_x_x*2), ((r_gr_s0_y_yio*2) + 1)) = ((g_gr.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 2)) + ((r_r.stencil((r_gr_s0_x_x*2), ((r_gr_s0_y_yio*2) + 1)) + r_r.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 1)) + g_r.stencil((r_gr_s0_x_x*2), ((r_gr_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_r_gr_stencil_1 = r_gr_s0_x_x->add_op("op_hcompute_r_gr_stencil_1");
  hcompute_r_gr_stencil_1->add_function("hcompute_r_gr_stencil_1");
  hcompute_r_gr_stencil_1->add_load("g_gr_stencil", "((r_gr_s0_y_yio*2) + 2)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_1->add_load("g_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_1->add_load("g_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "(r_gr_s0_x_x*2)");
  hcompute_r_gr_stencil_1->add_load("r_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "(r_gr_s0_x_x*2)");
  hcompute_r_gr_stencil_1->add_load("r_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_1->add_store("r_gr_stencil", "((r_gr_s0_y_yio*2) + 1)", "(r_gr_s0_x_x*2)");

//store is: r_gr.stencil(((r_gr_s0_x_x*2) + 1), (r_gr_s0_y_yio*2)) = ((g_gr.stencil(((r_gr_s0_x_x*2) + 2), ((r_gr_s0_y_yio*2) + 1)) + ((r_r.stencil(((r_gr_s0_x_x*2) + 1), (r_gr_s0_y_yio*2)) + r_r.stencil(((r_gr_s0_x_x*2) + 2), (r_gr_s0_y_yio*2)))/(uint16)2)) - ((g_r.stencil(((r_gr_s0_x_x*2) + 2), (r_gr_s0_y_yio*2)) + g_r.stencil(((r_gr_s0_x_x*2) + 1), (r_gr_s0_y_yio*2)))/(uint16)2))
  auto hcompute_r_gr_stencil_2 = r_gr_s0_x_x->add_op("op_hcompute_r_gr_stencil_2");
  hcompute_r_gr_stencil_2->add_function("hcompute_r_gr_stencil_2");
  hcompute_r_gr_stencil_2->add_load("g_gr_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 2)");
  hcompute_r_gr_stencil_2->add_load("g_r_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 2)");
  hcompute_r_gr_stencil_2->add_load("g_r_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_2->add_load("r_r_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_2->add_load("r_r_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 2)");
  hcompute_r_gr_stencil_2->add_store("r_gr_stencil", "(r_gr_s0_y_yio*2)", "((r_gr_s0_x_x*2) + 1)");

//store is: r_gr.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 1)) = ((g_gr.stencil(((r_gr_s0_x_x*2) + 2), ((r_gr_s0_y_yio*2) + 2)) + ((r_r.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 1)) + r_r.stencil(((r_gr_s0_x_x*2) + 2), ((r_gr_s0_y_yio*2) + 1)))/(uint16)2)) - ((g_r.stencil(((r_gr_s0_x_x*2) + 2), ((r_gr_s0_y_yio*2) + 1)) + g_r.stencil(((r_gr_s0_x_x*2) + 1), ((r_gr_s0_y_yio*2) + 1)))/(uint16)2))
  auto hcompute_r_gr_stencil_3 = r_gr_s0_x_x->add_op("op_hcompute_r_gr_stencil_3");
  hcompute_r_gr_stencil_3->add_function("hcompute_r_gr_stencil_3");
  hcompute_r_gr_stencil_3->add_load("g_gr_stencil", "((r_gr_s0_y_yio*2) + 2)", "((r_gr_s0_x_x*2) + 2)");
  hcompute_r_gr_stencil_3->add_load("g_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 2)");
  hcompute_r_gr_stencil_3->add_load("g_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_3->add_load("r_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 1)");
  hcompute_r_gr_stencil_3->add_load("r_r_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 2)");
  hcompute_r_gr_stencil_3->add_store("r_gr_stencil", "((r_gr_s0_y_yio*2) + 1)", "((r_gr_s0_x_x*2) + 1)");

//consuming r_gr.stencil
////producing demosaicked$1.stencil
  auto demosaicked_1_s0_y_yio = prg.add_loop("demosaicked_1_s0_y_yio", 0, 96);
  auto demosaicked_1_s0_x_x = demosaicked_1_s0_y_yio->add_loop("demosaicked_1_s0_x_x", 0, 128);

//store is: demosaicked$1.stencil((demosaicked_1_s0_x_x*2), (demosaicked_1_s0_y_yio*2), 0) = r_gr.stencil(demosaicked_1_s0_x_x, demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_function("hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_load("r_gr_stencil", "demosaicked_1_s0_y_yio", "demosaicked_1_s0_x_x");
  prg.buffer_port_widths["demosaicked_1_stencil"] = 16;
  hcompute_demosaicked_1_stencil->add_store("demosaicked_1_stencil", "0", "(demosaicked_1_s0_y_yio*2)", "(demosaicked_1_s0_x_x*2)");

//store is: demosaicked$1.stencil((demosaicked_1_s0_x_x*2), (demosaicked_1_s0_y_yio*2), 1) = g_gr.stencil((demosaicked_1_s0_x_x + 1), (demosaicked_1_s0_y_yio + 1))
  auto hcompute_demosaicked_1_stencil_1 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_function("hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_load("g_gr_stencil", "(demosaicked_1_s0_y_yio + 1)", "(demosaicked_1_s0_x_x + 1)");
  hcompute_demosaicked_1_stencil_1->add_store("demosaicked_1_stencil", "1", "(demosaicked_1_s0_y_yio*2)", "(demosaicked_1_s0_x_x*2)");

//store is: demosaicked$1.stencil((demosaicked_1_s0_x_x*2), (demosaicked_1_s0_y_yio*2), 2) = b_gr.stencil(demosaicked_1_s0_x_x, demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_2 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_function("hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_load("b_gr_stencil", "demosaicked_1_s0_y_yio", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_2->add_store("demosaicked_1_stencil", "2", "(demosaicked_1_s0_y_yio*2)", "(demosaicked_1_s0_x_x*2)");

//store is: demosaicked$1.stencil((demosaicked_1_s0_x_x*2), ((demosaicked_1_s0_y_yio*2) + 1), 0) = r_b.stencil(demosaicked_1_s0_x_x, demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_3 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_3");
  hcompute_demosaicked_1_stencil_3->add_function("hcompute_demosaicked_1_stencil_3");
  hcompute_demosaicked_1_stencil_3->add_load("r_b_stencil", "demosaicked_1_s0_y_yio", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_3->add_store("demosaicked_1_stencil", "0", "((demosaicked_1_s0_y_yio*2) + 1)", "(demosaicked_1_s0_x_x*2)");

//store is: demosaicked$1.stencil((demosaicked_1_s0_x_x*2), ((demosaicked_1_s0_y_yio*2) + 1), 1) = g_b.stencil(demosaicked_1_s0_x_x, (demosaicked_1_s0_y_yio + 1))
  auto hcompute_demosaicked_1_stencil_4 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_4");
  hcompute_demosaicked_1_stencil_4->add_function("hcompute_demosaicked_1_stencil_4");
  hcompute_demosaicked_1_stencil_4->add_load("g_b_stencil", "(demosaicked_1_s0_y_yio + 1)", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_4->add_store("demosaicked_1_stencil", "1", "((demosaicked_1_s0_y_yio*2) + 1)", "(demosaicked_1_s0_x_x*2)");

//store is: demosaicked$1.stencil((demosaicked_1_s0_x_x*2), ((demosaicked_1_s0_y_yio*2) + 1), 2) = b_b.stencil(demosaicked_1_s0_x_x, (demosaicked_1_s0_y_yio + 1))
  auto hcompute_demosaicked_1_stencil_5 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_5");
  hcompute_demosaicked_1_stencil_5->add_function("hcompute_demosaicked_1_stencil_5");
  hcompute_demosaicked_1_stencil_5->add_load("b_b_stencil", "(demosaicked_1_s0_y_yio + 1)", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_5->add_store("demosaicked_1_stencil", "2", "((demosaicked_1_s0_y_yio*2) + 1)", "(demosaicked_1_s0_x_x*2)");

//store is: demosaicked$1.stencil(((demosaicked_1_s0_x_x*2) + 1), (demosaicked_1_s0_y_yio*2), 0) = r_r.stencil((demosaicked_1_s0_x_x + 1), demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_6 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_6");
  hcompute_demosaicked_1_stencil_6->add_function("hcompute_demosaicked_1_stencil_6");
  hcompute_demosaicked_1_stencil_6->add_load("r_r_stencil", "demosaicked_1_s0_y_yio", "(demosaicked_1_s0_x_x + 1)");
  hcompute_demosaicked_1_stencil_6->add_store("demosaicked_1_stencil", "0", "(demosaicked_1_s0_y_yio*2)", "((demosaicked_1_s0_x_x*2) + 1)");

//store is: demosaicked$1.stencil(((demosaicked_1_s0_x_x*2) + 1), (demosaicked_1_s0_y_yio*2), 1) = g_r.stencil((demosaicked_1_s0_x_x + 1), demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_7 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_7");
  hcompute_demosaicked_1_stencil_7->add_function("hcompute_demosaicked_1_stencil_7");
  hcompute_demosaicked_1_stencil_7->add_load("g_r_stencil", "demosaicked_1_s0_y_yio", "(demosaicked_1_s0_x_x + 1)");
  hcompute_demosaicked_1_stencil_7->add_store("demosaicked_1_stencil", "1", "(demosaicked_1_s0_y_yio*2)", "((demosaicked_1_s0_x_x*2) + 1)");

//store is: demosaicked$1.stencil(((demosaicked_1_s0_x_x*2) + 1), (demosaicked_1_s0_y_yio*2), 2) = b_r.stencil(demosaicked_1_s0_x_x, demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_8 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_8");
  hcompute_demosaicked_1_stencil_8->add_function("hcompute_demosaicked_1_stencil_8");
  hcompute_demosaicked_1_stencil_8->add_load("b_r_stencil", "demosaicked_1_s0_y_yio", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_8->add_store("demosaicked_1_stencil", "2", "(demosaicked_1_s0_y_yio*2)", "((demosaicked_1_s0_x_x*2) + 1)");

//store is: demosaicked$1.stencil(((demosaicked_1_s0_x_x*2) + 1), ((demosaicked_1_s0_y_yio*2) + 1), 0) = r_gb.stencil(demosaicked_1_s0_x_x, demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_9 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_9");
  hcompute_demosaicked_1_stencil_9->add_function("hcompute_demosaicked_1_stencil_9");
  hcompute_demosaicked_1_stencil_9->add_load("r_gb_stencil", "demosaicked_1_s0_y_yio", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_9->add_store("demosaicked_1_stencil", "0", "((demosaicked_1_s0_y_yio*2) + 1)", "((demosaicked_1_s0_x_x*2) + 1)");

//store is: demosaicked$1.stencil(((demosaicked_1_s0_x_x*2) + 1), ((demosaicked_1_s0_y_yio*2) + 1), 1) = g_gb.stencil((demosaicked_1_s0_x_x + 1), (demosaicked_1_s0_y_yio + 1))
  auto hcompute_demosaicked_1_stencil_10 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_10");
  hcompute_demosaicked_1_stencil_10->add_function("hcompute_demosaicked_1_stencil_10");
  hcompute_demosaicked_1_stencil_10->add_load("g_gb_stencil", "(demosaicked_1_s0_y_yio + 1)", "(demosaicked_1_s0_x_x + 1)");
  hcompute_demosaicked_1_stencil_10->add_store("demosaicked_1_stencil", "1", "((demosaicked_1_s0_y_yio*2) + 1)", "((demosaicked_1_s0_x_x*2) + 1)");

//store is: demosaicked$1.stencil(((demosaicked_1_s0_x_x*2) + 1), ((demosaicked_1_s0_y_yio*2) + 1), 2) = b_gb.stencil(demosaicked_1_s0_x_x, demosaicked_1_s0_y_yio)
  auto hcompute_demosaicked_1_stencil_11 = demosaicked_1_s0_x_x->add_op("op_hcompute_demosaicked_1_stencil_11");
  hcompute_demosaicked_1_stencil_11->add_function("hcompute_demosaicked_1_stencil_11");
  hcompute_demosaicked_1_stencil_11->add_load("b_gb_stencil", "demosaicked_1_s0_y_yio", "demosaicked_1_s0_x_x");
  hcompute_demosaicked_1_stencil_11->add_store("demosaicked_1_stencil", "2", "((demosaicked_1_s0_y_yio*2) + 1)", "((demosaicked_1_s0_x_x*2) + 1)");

//consuming demosaicked$1.stencil
////producing corrected.stencil
  auto corrected_s0_y_yio = prg.add_loop("corrected_s0_y_yio", 0, 96);
  auto corrected_s0_x_x = corrected_s0_y_yio->add_loop("corrected_s0_x_x", 0, 128);

//store is: corrected.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 0) = (((int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 0), (uint16)10000))*549)/256)) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 1), (uint16)10000))*-103)/256))) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 2), (uint16)10000))*7)/256))) + (int16)-40)
  auto hcompute_corrected_stencil = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil");
  hcompute_corrected_stencil->add_function("hcompute_corrected_stencil");
  hcompute_corrected_stencil->add_load("demosaicked_1_stencil", "0", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil->add_load("demosaicked_1_stencil", "1", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil->add_load("demosaicked_1_stencil", "2", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  prg.buffer_port_widths["corrected_stencil"] = 16;
  hcompute_corrected_stencil->add_store("corrected_stencil", "0", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");

//store is: corrected.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 1) = (((int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 0), (uint16)10000))*-96)/256)) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 1), (uint16)10000))*373)/256))) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 2), (uint16)10000))*62)/256))) + (int16)-29)
  auto hcompute_corrected_stencil_1 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_1");
  hcompute_corrected_stencil_1->add_function("hcompute_corrected_stencil_1");
  hcompute_corrected_stencil_1->add_load("demosaicked_1_stencil", "0", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_1->add_load("demosaicked_1_stencil", "1", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_1->add_load("demosaicked_1_stencil", "2", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_1->add_store("corrected_stencil", "1", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");

//store is: corrected.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 2) = (((int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 0), (uint16)10000))*-31)/256)) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 1), (uint16)10000))*-261)/256))) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), (corrected_s0_y_yio*2), 2), (uint16)10000))*883)/256))) + (int16)-22)
  auto hcompute_corrected_stencil_2 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_2");
  hcompute_corrected_stencil_2->add_function("hcompute_corrected_stencil_2");
  hcompute_corrected_stencil_2->add_load("demosaicked_1_stencil", "0", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_2->add_load("demosaicked_1_stencil", "1", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_2->add_load("demosaicked_1_stencil", "2", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_2->add_store("corrected_stencil", "2", "(corrected_s0_y_yio*2)", "(corrected_s0_x_x*2)");

//store is: corrected.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 0) = (((int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 0), (uint16)10000))*549)/256)) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 1), (uint16)10000))*-103)/256))) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 2), (uint16)10000))*7)/256))) + (int16)-40)
  auto hcompute_corrected_stencil_3 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_3");
  hcompute_corrected_stencil_3->add_function("hcompute_corrected_stencil_3");
  hcompute_corrected_stencil_3->add_load("demosaicked_1_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_3->add_load("demosaicked_1_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_3->add_load("demosaicked_1_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_3->add_store("corrected_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");

//store is: corrected.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 1) = (((int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 0), (uint16)10000))*-96)/256)) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 1), (uint16)10000))*373)/256))) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 2), (uint16)10000))*62)/256))) + (int16)-29)
  auto hcompute_corrected_stencil_4 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_4");
  hcompute_corrected_stencil_4->add_function("hcompute_corrected_stencil_4");
  hcompute_corrected_stencil_4->add_load("demosaicked_1_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_4->add_load("demosaicked_1_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_4->add_load("demosaicked_1_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_4->add_store("corrected_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");

//store is: corrected.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 2) = (((int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 0), (uint16)10000))*-31)/256)) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 1), (uint16)10000))*-261)/256))) + int16(((int32(min(demosaicked$1.stencil((corrected_s0_x_x*2), ((corrected_s0_y_yio*2) + 1), 2), (uint16)10000))*883)/256))) + (int16)-22)
  auto hcompute_corrected_stencil_5 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_5");
  hcompute_corrected_stencil_5->add_function("hcompute_corrected_stencil_5");
  hcompute_corrected_stencil_5->add_load("demosaicked_1_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_5->add_load("demosaicked_1_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_5->add_load("demosaicked_1_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");
  hcompute_corrected_stencil_5->add_store("corrected_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "(corrected_s0_x_x*2)");

//store is: corrected.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 0) = (((int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 0), (uint16)10000))*549)/256)) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 1), (uint16)10000))*-103)/256))) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 2), (uint16)10000))*7)/256))) + (int16)-40)
  auto hcompute_corrected_stencil_6 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_6");
  hcompute_corrected_stencil_6->add_function("hcompute_corrected_stencil_6");
  hcompute_corrected_stencil_6->add_load("demosaicked_1_stencil", "0", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_6->add_load("demosaicked_1_stencil", "1", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_6->add_load("demosaicked_1_stencil", "2", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_6->add_store("corrected_stencil", "0", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");

//store is: corrected.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 1) = (((int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 0), (uint16)10000))*-96)/256)) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 1), (uint16)10000))*373)/256))) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 2), (uint16)10000))*62)/256))) + (int16)-29)
  auto hcompute_corrected_stencil_7 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_7");
  hcompute_corrected_stencil_7->add_function("hcompute_corrected_stencil_7");
  hcompute_corrected_stencil_7->add_load("demosaicked_1_stencil", "0", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_7->add_load("demosaicked_1_stencil", "1", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_7->add_load("demosaicked_1_stencil", "2", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_7->add_store("corrected_stencil", "1", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");

//store is: corrected.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 2) = (((int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 0), (uint16)10000))*-31)/256)) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 1), (uint16)10000))*-261)/256))) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), (corrected_s0_y_yio*2), 2), (uint16)10000))*883)/256))) + (int16)-22)
  auto hcompute_corrected_stencil_8 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_8");
  hcompute_corrected_stencil_8->add_function("hcompute_corrected_stencil_8");
  hcompute_corrected_stencil_8->add_load("demosaicked_1_stencil", "0", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_8->add_load("demosaicked_1_stencil", "1", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_8->add_load("demosaicked_1_stencil", "2", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_8->add_store("corrected_stencil", "2", "(corrected_s0_y_yio*2)", "((corrected_s0_x_x*2) + 1)");

//store is: corrected.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 0) = (((int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 0), (uint16)10000))*549)/256)) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 1), (uint16)10000))*-103)/256))) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 2), (uint16)10000))*7)/256))) + (int16)-40)
  auto hcompute_corrected_stencil_9 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_9");
  hcompute_corrected_stencil_9->add_function("hcompute_corrected_stencil_9");
  hcompute_corrected_stencil_9->add_load("demosaicked_1_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_9->add_load("demosaicked_1_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_9->add_load("demosaicked_1_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_9->add_store("corrected_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");

//store is: corrected.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 1) = (((int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 0), (uint16)10000))*-96)/256)) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 1), (uint16)10000))*373)/256))) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 2), (uint16)10000))*62)/256))) + (int16)-29)
  auto hcompute_corrected_stencil_10 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_10");
  hcompute_corrected_stencil_10->add_function("hcompute_corrected_stencil_10");
  hcompute_corrected_stencil_10->add_load("demosaicked_1_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_10->add_load("demosaicked_1_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_10->add_load("demosaicked_1_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_10->add_store("corrected_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");

//store is: corrected.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 2) = (((int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 0), (uint16)10000))*-31)/256)) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 1), (uint16)10000))*-261)/256))) + int16(((int32(min(demosaicked$1.stencil(((corrected_s0_x_x*2) + 1), ((corrected_s0_y_yio*2) + 1), 2), (uint16)10000))*883)/256))) + (int16)-22)
  auto hcompute_corrected_stencil_11 = corrected_s0_x_x->add_op("op_hcompute_corrected_stencil_11");
  hcompute_corrected_stencil_11->add_function("hcompute_corrected_stencil_11");
  hcompute_corrected_stencil_11->add_load("demosaicked_1_stencil", "0", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_11->add_load("demosaicked_1_stencil", "1", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_11->add_load("demosaicked_1_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");
  hcompute_corrected_stencil_11->add_store("corrected_stencil", "2", "((corrected_s0_y_yio*2) + 1)", "((corrected_s0_x_x*2) + 1)");

//consuming corrected.stencil
////producing curvea0

//consuming curvea0
////producing curved.stencil
  auto curved_s0_y_yio = prg.add_loop("curved_s0_y_yio", 0, 96);
  auto curved_s0_x_x = curved_s0_y_yio->add_loop("curved_s0_x_x", 0, 128);

//store is: curved.stencil((curved_s0_x_x*2), (curved_s0_y_yio*2), 0) = curvea0[int32(uint16(max(min(corrected.stencil((curved_s0_x_x*2), (curved_s0_y_yio*2), 0), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil = curved_s0_x_x->add_op("op_hcompute_curved_stencil");
  hcompute_curved_stencil->add_function("hcompute_curved_stencil");
  hcompute_curved_stencil->add_load("corrected_stencil", "0", "(curved_s0_y_yio*2)", "(curved_s0_x_x*2)");
  prg.buffer_port_widths["curved_stencil"] = 16;
  hcompute_curved_stencil->add_store("curved_stencil", "0", "(curved_s0_y_yio*2)", "(curved_s0_x_x*2)");
  //hcompute_curved_stencil->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil->add_latency(1);

//store is: curved.stencil((curved_s0_x_x*2), (curved_s0_y_yio*2), 1) = curvea0[int32(uint16(max(min(corrected.stencil((curved_s0_x_x*2), (curved_s0_y_yio*2), 1), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_1 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_1");
  hcompute_curved_stencil_1->add_function("hcompute_curved_stencil_1");
  hcompute_curved_stencil_1->add_load("corrected_stencil", "1", "(curved_s0_y_yio*2)", "(curved_s0_x_x*2)");
  hcompute_curved_stencil_1->add_store("curved_stencil", "1", "(curved_s0_y_yio*2)", "(curved_s0_x_x*2)");
  //hcompute_curved_stencil_1->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_1->add_latency(1);

//store is: curved.stencil((curved_s0_x_x*2), (curved_s0_y_yio*2), 2) = curvea0[int32(uint16(max(min(corrected.stencil((curved_s0_x_x*2), (curved_s0_y_yio*2), 2), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_2 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_2");
  hcompute_curved_stencil_2->add_function("hcompute_curved_stencil_2");
  hcompute_curved_stencil_2->add_load("corrected_stencil", "2", "(curved_s0_y_yio*2)", "(curved_s0_x_x*2)");
  hcompute_curved_stencil_2->add_store("curved_stencil", "2", "(curved_s0_y_yio*2)", "(curved_s0_x_x*2)");
  //hcompute_curved_stencil_2->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_2->add_latency(1);

//store is: curved.stencil((curved_s0_x_x*2), ((curved_s0_y_yio*2) + 1), 0) = curvea0[int32(uint16(max(min(corrected.stencil((curved_s0_x_x*2), ((curved_s0_y_yio*2) + 1), 0), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_3 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_3");
  hcompute_curved_stencil_3->add_function("hcompute_curved_stencil_3");
  hcompute_curved_stencil_3->add_load("corrected_stencil", "0", "((curved_s0_y_yio*2) + 1)", "(curved_s0_x_x*2)");
  hcompute_curved_stencil_3->add_store("curved_stencil", "0", "((curved_s0_y_yio*2) + 1)", "(curved_s0_x_x*2)");
  //hcompute_curved_stencil_3->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_3->add_latency(1);

//store is: curved.stencil((curved_s0_x_x*2), ((curved_s0_y_yio*2) + 1), 1) = curvea0[int32(uint16(max(min(corrected.stencil((curved_s0_x_x*2), ((curved_s0_y_yio*2) + 1), 1), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_4 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_4");
  hcompute_curved_stencil_4->add_function("hcompute_curved_stencil_4");
  hcompute_curved_stencil_4->add_load("corrected_stencil", "1", "((curved_s0_y_yio*2) + 1)", "(curved_s0_x_x*2)");
  hcompute_curved_stencil_4->add_store("curved_stencil", "1", "((curved_s0_y_yio*2) + 1)", "(curved_s0_x_x*2)");
  //hcompute_curved_stencil_4->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_4->add_latency(1);

//store is: curved.stencil((curved_s0_x_x*2), ((curved_s0_y_yio*2) + 1), 2) = curvea0[int32(uint16(max(min(corrected.stencil((curved_s0_x_x*2), ((curved_s0_y_yio*2) + 1), 2), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_5 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_5");
  hcompute_curved_stencil_5->add_function("hcompute_curved_stencil_5");
  hcompute_curved_stencil_5->add_load("corrected_stencil", "2", "((curved_s0_y_yio*2) + 1)", "(curved_s0_x_x*2)");
  hcompute_curved_stencil_5->add_store("curved_stencil", "2", "((curved_s0_y_yio*2) + 1)", "(curved_s0_x_x*2)");
  //hcompute_curved_stencil_5->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_5->add_latency(1);

//store is: curved.stencil(((curved_s0_x_x*2) + 1), (curved_s0_y_yio*2), 0) = curvea0[int32(uint16(max(min(corrected.stencil(((curved_s0_x_x*2) + 1), (curved_s0_y_yio*2), 0), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_6 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_6");
  hcompute_curved_stencil_6->add_function("hcompute_curved_stencil_6");
  hcompute_curved_stencil_6->add_load("corrected_stencil", "0", "(curved_s0_y_yio*2)", "((curved_s0_x_x*2) + 1)");
  hcompute_curved_stencil_6->add_store("curved_stencil", "0", "(curved_s0_y_yio*2)", "((curved_s0_x_x*2) + 1)");
  //hcompute_curved_stencil_6->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_6->add_latency(1);

//store is: curved.stencil(((curved_s0_x_x*2) + 1), (curved_s0_y_yio*2), 1) = curvea0[int32(uint16(max(min(corrected.stencil(((curved_s0_x_x*2) + 1), (curved_s0_y_yio*2), 1), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_7 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_7");
  hcompute_curved_stencil_7->add_function("hcompute_curved_stencil_7");
  hcompute_curved_stencil_7->add_load("corrected_stencil", "1", "(curved_s0_y_yio*2)", "((curved_s0_x_x*2) + 1)");
  hcompute_curved_stencil_7->add_store("curved_stencil", "1", "(curved_s0_y_yio*2)", "((curved_s0_x_x*2) + 1)");
  //hcompute_curved_stencil_7->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_7->add_latency(1);

//store is: curved.stencil(((curved_s0_x_x*2) + 1), (curved_s0_y_yio*2), 2) = curvea0[int32(uint16(max(min(corrected.stencil(((curved_s0_x_x*2) + 1), (curved_s0_y_yio*2), 2), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_8 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_8");
  hcompute_curved_stencil_8->add_function("hcompute_curved_stencil_8");
  hcompute_curved_stencil_8->add_load("corrected_stencil", "2", "(curved_s0_y_yio*2)", "((curved_s0_x_x*2) + 1)");
  hcompute_curved_stencil_8->add_store("curved_stencil", "2", "(curved_s0_y_yio*2)", "((curved_s0_x_x*2) + 1)");
  //hcompute_curved_stencil_8->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_8->add_latency(1);

//store is: curved.stencil(((curved_s0_x_x*2) + 1), ((curved_s0_y_yio*2) + 1), 0) = curvea0[int32(uint16(max(min(corrected.stencil(((curved_s0_x_x*2) + 1), ((curved_s0_y_yio*2) + 1), 0), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_9 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_9");
  hcompute_curved_stencil_9->add_function("hcompute_curved_stencil_9");
  hcompute_curved_stencil_9->add_load("corrected_stencil", "0", "((curved_s0_y_yio*2) + 1)", "((curved_s0_x_x*2) + 1)");
  hcompute_curved_stencil_9->add_store("curved_stencil", "0", "((curved_s0_y_yio*2) + 1)", "((curved_s0_x_x*2) + 1)");
  //hcompute_curved_stencil_9->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_9->add_latency(1);

//store is: curved.stencil(((curved_s0_x_x*2) + 1), ((curved_s0_y_yio*2) + 1), 1) = curvea0[int32(uint16(max(min(corrected.stencil(((curved_s0_x_x*2) + 1), ((curved_s0_y_yio*2) + 1), 1), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_10 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_10");
  hcompute_curved_stencil_10->add_function("hcompute_curved_stencil_10");
  hcompute_curved_stencil_10->add_load("corrected_stencil", "1", "((curved_s0_y_yio*2) + 1)", "((curved_s0_x_x*2) + 1)");
  hcompute_curved_stencil_10->add_store("curved_stencil", "1", "((curved_s0_y_yio*2) + 1)", "((curved_s0_x_x*2) + 1)");
  //hcompute_curved_stencil_10->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_10->add_latency(1);

//store is: curved.stencil(((curved_s0_x_x*2) + 1), ((curved_s0_y_yio*2) + 1), 2) = curvea0[int32(uint16(max(min(corrected.stencil(((curved_s0_x_x*2) + 1), ((curved_s0_y_yio*2) + 1), 2), (int16)1023), (int16)0)))]
  auto hcompute_curved_stencil_11 = curved_s0_x_x->add_op("op_hcompute_curved_stencil_11");
  hcompute_curved_stencil_11->add_function("hcompute_curved_stencil_11");
  hcompute_curved_stencil_11->add_load("corrected_stencil", "2", "((curved_s0_y_yio*2) + 1)", "((curved_s0_x_x*2) + 1)");
  hcompute_curved_stencil_11->add_store("curved_stencil", "2", "((curved_s0_y_yio*2) + 1)", "((curved_s0_x_x*2) + 1)");
  //hcompute_curved_stencil_11->index_variable_prefetch_cycle(1);
  hcompute_curved_stencil_11->add_latency(1);

//consuming curved.stencil
  auto hw_output_s0_y_yi_yio = prg.add_loop("hw_output_s0_y_yi_yio", 0, 96);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi_yio->add_loop("hw_output_s0_x_xi_xi", 0, 128);

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi_yio*2)) = curved.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi_yio*2), 0)
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("curved_stencil", "0", "(hw_output_s0_y_yi_yio*2)", "(hw_output_s0_x_xi_xi*2)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "(hw_output_s0_y_yi_yio*2)", "(hw_output_s0_x_xi_xi*2)", "0");

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi_yio*2)) = curved.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi_yio*2), 1)
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("curved_stencil", "1", "(hw_output_s0_y_yi_yio*2)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "(hw_output_s0_y_yi_yio*2)", "(hw_output_s0_x_xi_xi*2)", "1");

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi_yio*2)) = curved.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi_yio*2), 2)
  auto hcompute_hw_output_glb_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_function("hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_load("curved_stencil", "2", "(hw_output_s0_y_yi_yio*2)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil_2->add_store("hw_output_glb_stencil", "(hw_output_s0_y_yi_yio*2)", "(hw_output_s0_x_xi_xi*2)", "2");

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*2), ((hw_output_s0_y_yi_yio*2) + 1)) = curved.stencil((hw_output_s0_x_xi_xi*2), ((hw_output_s0_y_yi_yio*2) + 1), 0)
  auto hcompute_hw_output_glb_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_function("hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_load("curved_stencil", "0", "((hw_output_s0_y_yi_yio*2) + 1)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil_3->add_store("hw_output_glb_stencil", "((hw_output_s0_y_yi_yio*2) + 1)", "(hw_output_s0_x_xi_xi*2)", "0");

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*2), ((hw_output_s0_y_yi_yio*2) + 1)) = curved.stencil((hw_output_s0_x_xi_xi*2), ((hw_output_s0_y_yi_yio*2) + 1), 1)
  auto hcompute_hw_output_glb_stencil_4 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_function("hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_load("curved_stencil", "1", "((hw_output_s0_y_yi_yio*2) + 1)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil_4->add_store("hw_output_glb_stencil", "((hw_output_s0_y_yi_yio*2) + 1)", "(hw_output_s0_x_xi_xi*2)", "1");

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*2), ((hw_output_s0_y_yi_yio*2) + 1)) = curved.stencil((hw_output_s0_x_xi_xi*2), ((hw_output_s0_y_yi_yio*2) + 1), 2)
  auto hcompute_hw_output_glb_stencil_5 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_function("hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_load("curved_stencil", "2", "((hw_output_s0_y_yi_yio*2) + 1)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil_5->add_store("hw_output_glb_stencil", "((hw_output_s0_y_yi_yio*2) + 1)", "(hw_output_s0_x_xi_xi*2)", "2");

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi_yio*2)) = curved.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi_yio*2), 0)
  auto hcompute_hw_output_glb_stencil_6 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_6");
  hcompute_hw_output_glb_stencil_6->add_function("hcompute_hw_output_glb_stencil_6");
  hcompute_hw_output_glb_stencil_6->add_load("curved_stencil", "0", "(hw_output_s0_y_yi_yio*2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_6->add_store("hw_output_glb_stencil", "(hw_output_s0_y_yi_yio*2)", "((hw_output_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi_yio*2)) = curved.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi_yio*2), 1)
  auto hcompute_hw_output_glb_stencil_7 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_7");
  hcompute_hw_output_glb_stencil_7->add_function("hcompute_hw_output_glb_stencil_7");
  hcompute_hw_output_glb_stencil_7->add_load("curved_stencil", "1", "(hw_output_s0_y_yi_yio*2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_7->add_store("hw_output_glb_stencil", "(hw_output_s0_y_yi_yio*2)", "((hw_output_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi_yio*2)) = curved.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi_yio*2), 2)
  auto hcompute_hw_output_glb_stencil_8 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_8");
  hcompute_hw_output_glb_stencil_8->add_function("hcompute_hw_output_glb_stencil_8");
  hcompute_hw_output_glb_stencil_8->add_load("curved_stencil", "2", "(hw_output_s0_y_yi_yio*2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_8->add_store("hw_output_glb_stencil", "(hw_output_s0_y_yi_yio*2)", "((hw_output_s0_x_xi_xi*2) + 1)", "2");

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), ((hw_output_s0_y_yi_yio*2) + 1)) = curved.stencil(((hw_output_s0_x_xi_xi*2) + 1), ((hw_output_s0_y_yi_yio*2) + 1), 0)
  auto hcompute_hw_output_glb_stencil_9 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_9");
  hcompute_hw_output_glb_stencil_9->add_function("hcompute_hw_output_glb_stencil_9");
  hcompute_hw_output_glb_stencil_9->add_load("curved_stencil", "0", "((hw_output_s0_y_yi_yio*2) + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_9->add_store("hw_output_glb_stencil", "((hw_output_s0_y_yi_yio*2) + 1)", "((hw_output_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), ((hw_output_s0_y_yi_yio*2) + 1)) = curved.stencil(((hw_output_s0_x_xi_xi*2) + 1), ((hw_output_s0_y_yi_yio*2) + 1), 1)
  auto hcompute_hw_output_glb_stencil_10 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_10");
  hcompute_hw_output_glb_stencil_10->add_function("hcompute_hw_output_glb_stencil_10");
  hcompute_hw_output_glb_stencil_10->add_load("curved_stencil", "1", "((hw_output_s0_y_yi_yio*2) + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_10->add_store("hw_output_glb_stencil", "((hw_output_s0_y_yi_yio*2) + 1)", "((hw_output_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), ((hw_output_s0_y_yi_yio*2) + 1)) = curved.stencil(((hw_output_s0_x_xi_xi*2) + 1), ((hw_output_s0_y_yi_yio*2) + 1), 2)
  auto hcompute_hw_output_glb_stencil_11 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_11");
  hcompute_hw_output_glb_stencil_11->add_function("hcompute_hw_output_glb_stencil_11");
  hcompute_hw_output_glb_stencil_11->add_load("curved_stencil", "2", "((hw_output_s0_y_yi_yio*2) + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_11->add_store("hw_output_glb_stencil", "((hw_output_s0_y_yi_yio*2) + 1)", "((hw_output_s0_x_xi_xi*2) + 1)", "2");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi_yio = prg.add_loop("hw_output_global_wrapper_s0_y_yi_yio", 0, 96);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi_yio->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 128);

//store is: hw_output_global_wrapper.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), (hw_output_global_wrapper_s0_y_yi_yio*2)) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), (hw_output_global_wrapper_s0_y_yi_yio*2))
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");

//store is: hw_output_global_wrapper.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), (hw_output_global_wrapper_s0_y_yi_yio*2)) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), (hw_output_global_wrapper_s0_y_yi_yio*2))
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");

//store is: hw_output_global_wrapper.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), (hw_output_global_wrapper_s0_y_yi_yio*2)) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), (hw_output_global_wrapper_s0_y_yi_yio*2))
  auto hcompute_hw_output_global_wrapper_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_function("hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_load("hw_output_glb_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");
  hcompute_hw_output_global_wrapper_stencil_2->add_store("hw_output_global_wrapper_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");

//store is: hw_output_global_wrapper.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1))
  auto hcompute_hw_output_global_wrapper_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_function("hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_load("hw_output_glb_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");
  hcompute_hw_output_global_wrapper_stencil_3->add_store("hw_output_global_wrapper_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");

//store is: hw_output_global_wrapper.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1))
  auto hcompute_hw_output_global_wrapper_stencil_4 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_function("hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_load("hw_output_glb_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");
  hcompute_hw_output_global_wrapper_stencil_4->add_store("hw_output_global_wrapper_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");

//store is: hw_output_global_wrapper.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1))
  auto hcompute_hw_output_global_wrapper_stencil_5 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_function("hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_load("hw_output_glb_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");
  hcompute_hw_output_global_wrapper_stencil_5->add_store("hw_output_global_wrapper_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), (hw_output_global_wrapper_s0_y_yi_yio*2)) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), (hw_output_global_wrapper_s0_y_yi_yio*2))
  auto hcompute_hw_output_global_wrapper_stencil_6 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_6");
  hcompute_hw_output_global_wrapper_stencil_6->add_function("hcompute_hw_output_global_wrapper_stencil_6");
  hcompute_hw_output_global_wrapper_stencil_6->add_load("hw_output_glb_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");
  hcompute_hw_output_global_wrapper_stencil_6->add_store("hw_output_global_wrapper_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), (hw_output_global_wrapper_s0_y_yi_yio*2)) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), (hw_output_global_wrapper_s0_y_yi_yio*2))
  auto hcompute_hw_output_global_wrapper_stencil_7 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_7");
  hcompute_hw_output_global_wrapper_stencil_7->add_function("hcompute_hw_output_global_wrapper_stencil_7");
  hcompute_hw_output_global_wrapper_stencil_7->add_load("hw_output_glb_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");
  hcompute_hw_output_global_wrapper_stencil_7->add_store("hw_output_global_wrapper_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), (hw_output_global_wrapper_s0_y_yi_yio*2)) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), (hw_output_global_wrapper_s0_y_yi_yio*2))
  auto hcompute_hw_output_global_wrapper_stencil_8 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_8");
  hcompute_hw_output_global_wrapper_stencil_8->add_function("hcompute_hw_output_global_wrapper_stencil_8");
  hcompute_hw_output_global_wrapper_stencil_8->add_load("hw_output_glb_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");
  hcompute_hw_output_global_wrapper_stencil_8->add_store("hw_output_global_wrapper_stencil", "(hw_output_global_wrapper_s0_y_yi_yio*2)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1))
  auto hcompute_hw_output_global_wrapper_stencil_9 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_9");
  hcompute_hw_output_global_wrapper_stencil_9->add_function("hcompute_hw_output_global_wrapper_stencil_9");
  hcompute_hw_output_global_wrapper_stencil_9->add_load("hw_output_glb_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");
  hcompute_hw_output_global_wrapper_stencil_9->add_store("hw_output_global_wrapper_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1))
  auto hcompute_hw_output_global_wrapper_stencil_10 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_10");
  hcompute_hw_output_global_wrapper_stencil_10->add_function("hcompute_hw_output_global_wrapper_stencil_10");
  hcompute_hw_output_global_wrapper_stencil_10->add_load("hw_output_glb_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");
  hcompute_hw_output_global_wrapper_stencil_10->add_store("hw_output_global_wrapper_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), ((hw_output_global_wrapper_s0_y_yi_yio*2) + 1))
  auto hcompute_hw_output_global_wrapper_stencil_11 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_11");
  hcompute_hw_output_global_wrapper_stencil_11->add_function("hcompute_hw_output_global_wrapper_stencil_11");
  hcompute_hw_output_global_wrapper_stencil_11->add_load("hw_output_glb_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");
  hcompute_hw_output_global_wrapper_stencil_11->add_store("hw_output_global_wrapper_stencil", "((hw_output_global_wrapper_s0_y_yi_yio*2) + 1)", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");

  return prg;
}


// empty

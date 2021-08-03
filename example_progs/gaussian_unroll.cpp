#include "example_progs.h"

prog gaussian_unroll() {
  prog prg;
  prg.compute_unit_file = "gaussian_unroll_compute.h";
  prg.name = "gaussian_unroll";

// Stencil<uint16_t, 5844, 3962> &hw_input_stencil = arg_1;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 5842, 3960> &hw_output_global_wrapper_stencil = arg_3;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 200);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 64);

//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y) = hw_input.stencil((hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*4)");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*4)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 1)");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 1)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 2)");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 2)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 3)");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*4) + 3)");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 198);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 254);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 198);
  auto blur_unnormalized_s1_x_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x_x", 0, 64);

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_2 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_function("hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_2->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_3 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_function("hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_3->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 5), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_4 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_function("hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 5)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 5)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 5)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_4->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 198);
  auto blur_s0_x_x = blur_s0_y->add_loop("blur_s0_x_x", 0, 64);

//store is: blur.stencil(min((blur_s0_x_x*4), 250), blur_s0_y) = (blur_unnormalized.stencil(min((blur_s0_x_x*4), 250), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "min((blur_s0_x_x*4), 250)");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "min((blur_s0_x_x*4), 250)");

//store is: blur.stencil((min((blur_s0_x_x*4), 250) + 1), blur_s0_y) = (blur_unnormalized.stencil((min((blur_s0_x_x*4), 250) + 1), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_1 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_function("hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_load("blur_unnormalized_stencil", "blur_s0_y", "(min((blur_s0_x_x*4), 250) + 1)");
  hcompute_blur_stencil_1->add_store("blur_stencil", "blur_s0_y", "(min((blur_s0_x_x*4), 250) + 1)");

//store is: blur.stencil((min((blur_s0_x_x*4), 250) + 2), blur_s0_y) = (blur_unnormalized.stencil((min((blur_s0_x_x*4), 250) + 2), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_2 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_function("hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_load("blur_unnormalized_stencil", "blur_s0_y", "(min((blur_s0_x_x*4), 250) + 2)");
  hcompute_blur_stencil_2->add_store("blur_stencil", "blur_s0_y", "(min((blur_s0_x_x*4), 250) + 2)");

//store is: blur.stencil((min((blur_s0_x_x*4), 250) + 3), blur_s0_y) = (blur_unnormalized.stencil((min((blur_s0_x_x*4), 250) + 3), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_3 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_function("hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_load("blur_unnormalized_stencil", "blur_s0_y", "(min((blur_s0_x_x*4), 250) + 3)");
  hcompute_blur_stencil_3->add_store("blur_stencil", "blur_s0_y", "(min((blur_s0_x_x*4), 250) + 3)");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 198);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 63);

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("blur_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*4)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*4)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_function("hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_glb_stencil_2->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_function("hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_glb_stencil_3->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");

//store is: hw_output.glb.stencil(250, hw_output_s0_y_yi) = blur.stencil(250, hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_4 = hw_output_s0_y_yi->add_op("op_hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_function("hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_load("blur_stencil", "hw_output_s0_y_yi", "250");
  hcompute_hw_output_glb_stencil_4->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "250");

//store is: hw_output.glb.stencil(251, hw_output_s0_y_yi) = blur.stencil(251, hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_5 = hw_output_s0_y_yi->add_op("op_hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_function("hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_load("blur_stencil", "hw_output_s0_y_yi", "251");
  hcompute_hw_output_glb_stencil_5->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "251");

//store is: hw_output.glb.stencil(252, hw_output_s0_y_yi) = blur.stencil(252, hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_6 = hw_output_s0_y_yi->add_op("op_hcompute_hw_output_glb_stencil_6");
  hcompute_hw_output_glb_stencil_6->add_function("hcompute_hw_output_glb_stencil_6");
  hcompute_hw_output_glb_stencil_6->add_load("blur_stencil", "hw_output_s0_y_yi", "252");
  hcompute_hw_output_glb_stencil_6->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "252");

//store is: hw_output.glb.stencil(253, hw_output_s0_y_yi) = blur.stencil(253, hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_7 = hw_output_s0_y_yi->add_op("op_hcompute_hw_output_glb_stencil_7");
  hcompute_hw_output_glb_stencil_7->add_function("hcompute_hw_output_glb_stencil_7");
  hcompute_hw_output_glb_stencil_7->add_load("blur_stencil", "hw_output_s0_y_yi", "253");
  hcompute_hw_output_glb_stencil_7->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "253");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 198);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 63);

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

//store is: hw_output_global_wrapper.stencil(250, hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(250, hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_4 = hw_output_global_wrapper_s0_y_yi->add_op("op_hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_function("hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "250");
  hcompute_hw_output_global_wrapper_stencil_4->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "250");

//store is: hw_output_global_wrapper.stencil(251, hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(251, hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_5 = hw_output_global_wrapper_s0_y_yi->add_op("op_hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_function("hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "251");
  hcompute_hw_output_global_wrapper_stencil_5->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "251");

//store is: hw_output_global_wrapper.stencil(252, hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(252, hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_6 = hw_output_global_wrapper_s0_y_yi->add_op("op_hcompute_hw_output_global_wrapper_stencil_6");
  hcompute_hw_output_global_wrapper_stencil_6->add_function("hcompute_hw_output_global_wrapper_stencil_6");
  hcompute_hw_output_global_wrapper_stencil_6->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "252");
  hcompute_hw_output_global_wrapper_stencil_6->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "252");

//store is: hw_output_global_wrapper.stencil(253, hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(253, hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_7 = hw_output_global_wrapper_s0_y_yi->add_op("op_hcompute_hw_output_global_wrapper_stencil_7");
  hcompute_hw_output_global_wrapper_stencil_7->add_function("hcompute_hw_output_global_wrapper_stencil_7");
  hcompute_hw_output_global_wrapper_stencil_7->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "253");
  hcompute_hw_output_global_wrapper_stencil_7->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "253");

  return prg;
}



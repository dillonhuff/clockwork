#include "example_progs.h"

prog gaussian_isscc() {
  prog prg;
  prg.compute_unit_file = "gaussian_isscc_compute.h";
  prg.name = "gaussian_isscc";

// Stencil<uint16_t, 57, 63> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 56, 62> &hw_output_global_wrapper_glb_stencil = arg_1;
  prg.add_output("hw_output_global_wrapper_glb_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_glb_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 63);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 57);

//store is: hw_input_global_wrapper.glb.stencil(hw_input_global_wrapper_s0_x_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x_x");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x_x");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 63);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 57);

//store is: hw_input_global_wrapper_global_wrapper.stencil(hw_input_global_wrapper_global_wrapper_s0_x_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(hw_input_global_wrapper_global_wrapper_s0_x_x, hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x_x");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x_x");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 62);
  auto blur_unnormalized_s0_x_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x_x", 0, 56);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x_x, blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 62);
  auto blur_unnormalized_s1_x_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x_x", 0, 56);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x + 1), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 1))*(uint16)63)))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x_x");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x_x");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 62);
  auto blur_s0_x_x = blur_s0_y->add_loop("blur_s0_x_x", 0, 56);

//store is: blur.stencil(blur_s0_x_x, blur_s0_y) = (blur_unnormalized.stencil(blur_s0_x_x, blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "blur_s0_x_x");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "blur_s0_x_x");

//consuming blur.stencil
  auto hw_output_s0_y_yii = prg.add_loop("hw_output_s0_y_yii", 0, 62);
  auto hw_output_s0_x_xii_xii = hw_output_s0_y_yii->add_loop("hw_output_s0_x_xii_xii", 0, 56);

//store is: hw_output.stencil(hw_output_s0_x_xii_xii, hw_output_s0_y_yii) = blur.stencil(hw_output_s0_x_xii_xii, hw_output_s0_y_yii)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xii_xii->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yii", "hw_output_s0_x_xii_xii");
  prg.buffer_port_widths["hw_output_stencil"] = 16;
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yii", "hw_output_s0_x_xii_xii");

//consuming hw_output.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 62);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 56);

//store is: hw_output_global_wrapper.glb.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_function("hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "hw_output_global_wrapper_s0_x_xi_xi");
  hcompute_hw_output_global_wrapper_glb_stencil->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "hw_output_global_wrapper_s0_x_xi_xi");

  return prg;
}

prog gaussian_glb2() {
  prog prg;
  prg.compute_unit_file = "gaussian_glb2_compute.h";
  prg.name = "gaussian_glb2";

// Stencil<uint16_t, 256, 198> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 254, 196> &hw_output_global_wrapper_glb_stencil = arg_1;
  prg.add_output("hw_output_global_wrapper_glb_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_glb_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 198);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 128);

//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil((hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 198);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 128);

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 196);
  auto blur_unnormalized_s0_x_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x_x", 0, 127);

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*2), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "(blur_unnormalized_s0_x_x*2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*2) + 1), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*2) + 1)");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 196);
  auto blur_unnormalized_s1_x_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x_x", 0, 127);

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_2 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_function("hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x_x*2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*2) + 2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x_x*2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*2) + 2)");
  hcompute_blur_unnormalized_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_2->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_3 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_function("hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 3)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*2) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*2) + 3)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*2) + 1)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*2) + 3)");
  hcompute_blur_unnormalized_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*2) + 2)");
  hcompute_blur_unnormalized_stencil_3->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*2) + 1)");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 196);
  auto blur_s0_x_x = blur_s0_y->add_loop("blur_s0_x_x", 0, 127);

//store is: blur.stencil((blur_s0_x_x*2), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*2), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "(blur_s0_x_x*2)");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "(blur_s0_x_x*2)");

//store is: blur.stencil(((blur_s0_x_x*2) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*2) + 1), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_1 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_function("hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*2) + 1)");
  hcompute_blur_stencil_1->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*2) + 1)");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 196);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 127);

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");
  prg.buffer_port_widths["hw_output_stencil"] = 16;
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");

//consuming hw_output.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 196);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 127);

//store is: hw_output_global_wrapper.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_function("hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)");
  hcompute_hw_output_global_wrapper_glb_stencil->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_function("hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)");

  return prg;
}

prog gaussian_glb() {
  prog prg;
  prg.compute_unit_file = "gaussian_glb_compute.h";
  prg.name = "gaussian_glb";

// Stencil<uint16_t, 11524, 3922> &hw_input_stencil = arg_1;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 5888, 3920> &hw_output_global_wrapper_glb_stencil = arg_3;
  prg.add_output("hw_output_global_wrapper_glb_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_glb_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 198);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 68);

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
////producing hw_output.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 198);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 68);

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*4)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3)");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 196);
  auto blur_unnormalized_s0_x_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x_x", 0, 64);

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*4), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "(blur_unnormalized_s0_x_x*4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*4) + 1), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*4) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*4) + 2), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_2 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_function("hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*4) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*4) + 3), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_3 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_function("hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*4) + 3)");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 196);
  auto blur_unnormalized_s1_x_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x_x", 0, 64);

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_4 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_function("hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x_x*4)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_4->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_5 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_5");
  hcompute_blur_unnormalized_stencil_5->add_function("hcompute_blur_unnormalized_stencil_5");
  hcompute_blur_unnormalized_stencil_5->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 1)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_5->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_6 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_6");
  hcompute_blur_unnormalized_stencil_6->add_function("hcompute_blur_unnormalized_stencil_6");
  hcompute_blur_unnormalized_stencil_6->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 2)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_6->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_6->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 5), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_7 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_7");
  hcompute_blur_unnormalized_stencil_7->add_function("hcompute_blur_unnormalized_stencil_7");
  hcompute_blur_unnormalized_stencil_7->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 5)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*4) + 5)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 3)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 5)");
  hcompute_blur_unnormalized_stencil_7->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*4) + 4)");
  hcompute_blur_unnormalized_stencil_7->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*4) + 3)");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 196);
  auto blur_s0_x_x = blur_s0_y->add_loop("blur_s0_x_x", 0, 64);

//store is: blur.stencil((blur_s0_x_x*4), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*4), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "(blur_s0_x_x*4)");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "(blur_s0_x_x*4)");

//store is: blur.stencil(((blur_s0_x_x*4) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*4) + 1), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_1 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_function("hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*4) + 1)");
  hcompute_blur_stencil_1->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*4) + 1)");

//store is: blur.stencil(((blur_s0_x_x*4) + 2), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*4) + 2), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_2 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_function("hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*4) + 2)");
  hcompute_blur_stencil_2->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*4) + 2)");

//store is: blur.stencil(((blur_s0_x_x*4) + 3), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*4) + 3), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_3 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_function("hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*4) + 3)");
  hcompute_blur_stencil_3->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*4) + 3)");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 196);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 64);

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*4)");
  prg.buffer_port_widths["hw_output_stencil"] = 16;
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*4)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 1)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 2)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*4) + 3)");

//consuming hw_output.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 196);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 64);

//store is: hw_output_global_wrapper.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_function("hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*4)");
  hcompute_hw_output_global_wrapper_glb_stencil->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*4)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_function("hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 1)");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 1)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_2");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_function("hcompute_hw_output_global_wrapper_glb_stencil_2");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 2)");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 2)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_3");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_function("hcompute_hw_output_global_wrapper_glb_stencil_3");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 3)");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*4) + 3)");

  return prg;
}

prog gaussian() {
  prog prg;
  prg.compute_unit_file = "gaussian_compute.h";
  prg.name = "gaussian";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 62);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 62);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 62);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 62);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 62);
  auto blur_s0_x = blur_s0_y->add_loop("blur_s0_x", 0, 62);

//store is: blur.stencil(blur_s0_x, blur_s0_y) = (blur_unnormalized.stencil(blur_s0_x, blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "blur_s0_x");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "blur_s0_x");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog gaussian_glb8() {
  prog prg;
  prg.compute_unit_file = "gaussian_glb8_compute.h";
  prg.name = "gaussian_glb8";

// Stencil<uint16_t, 11528, 3922> &hw_input_stencil = arg_1;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 5888, 3920> &hw_output_global_wrapper_glb_stencil = arg_3;
  prg.add_output("hw_output_global_wrapper_glb_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_glb_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 198);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 36);

//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*8), hw_input_global_wrapper_s0_y) = hw_input.stencil((hw_input_global_wrapper_s0_x_x*8), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*8)");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*8)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 1)");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 1)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 2)");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 2)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 3)");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 3)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 4)");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 4)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 5)");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 5)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_6 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_function("hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 6)");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 6)");

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_7 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_function("hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 7)");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*8) + 7)");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 198);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 36);

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*8), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*8), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*8)");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*8)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 1)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 1)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 2)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 2)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 3)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 3)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_4 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 4)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 4)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_5 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 5)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 5)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_6 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 6)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 6)");

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_7 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 7)");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 7)");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 196);
  auto blur_unnormalized_s0_x_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x_x", 0, 32);

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*8), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "(blur_unnormalized_s0_x_x*8)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 1), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 2), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_2 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_function("hcompute_blur_unnormalized_stencil_2");
  hcompute_blur_unnormalized_stencil_2->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 3), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_3 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_function("hcompute_blur_unnormalized_stencil_3");
  hcompute_blur_unnormalized_stencil_3->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 3)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 4), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_4 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_function("hcompute_blur_unnormalized_stencil_4");
  hcompute_blur_unnormalized_stencil_4->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 5), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_5 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_5");
  hcompute_blur_unnormalized_stencil_5->add_function("hcompute_blur_unnormalized_stencil_5");
  hcompute_blur_unnormalized_stencil_5->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 5)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 6), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_6 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_6");
  hcompute_blur_unnormalized_stencil_6->add_function("hcompute_blur_unnormalized_stencil_6");
  hcompute_blur_unnormalized_stencil_6->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 6)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 7), blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil_7 = blur_unnormalized_s0_x_x->add_op("op_hcompute_blur_unnormalized_stencil_7");
  hcompute_blur_unnormalized_stencil_7->add_function("hcompute_blur_unnormalized_stencil_7");
  hcompute_blur_unnormalized_stencil_7->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "((blur_unnormalized_s0_x_x*8) + 7)");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 196);
  auto blur_unnormalized_s1_x_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x_x", 0, 32);

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*8), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*8), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*8), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*8), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*8), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_8 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_8");
  hcompute_blur_unnormalized_stencil_8->add_function("hcompute_blur_unnormalized_stencil_8");
  hcompute_blur_unnormalized_stencil_8->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*8)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*8)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x_x*8)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x_x*8)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_8->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_8->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x_x*8)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_9 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_9");
  hcompute_blur_unnormalized_stencil_9->add_function("hcompute_blur_unnormalized_stencil_9");
  hcompute_blur_unnormalized_stencil_9->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 1)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_9->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_9->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 1)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_10 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_10");
  hcompute_blur_unnormalized_stencil_10->add_function("hcompute_blur_unnormalized_stencil_10");
  hcompute_blur_unnormalized_stencil_10->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 2)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_10->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_10->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 2)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_11 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_11");
  hcompute_blur_unnormalized_stencil_11->add_function("hcompute_blur_unnormalized_stencil_11");
  hcompute_blur_unnormalized_stencil_11->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 3)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_11->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_11->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 3)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_12 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_12");
  hcompute_blur_unnormalized_stencil_12->add_function("hcompute_blur_unnormalized_stencil_12");
  hcompute_blur_unnormalized_stencil_12->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 4)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_12->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_12->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 4)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_13 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_13");
  hcompute_blur_unnormalized_stencil_13->add_function("hcompute_blur_unnormalized_stencil_13");
  hcompute_blur_unnormalized_stencil_13->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 5)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_13->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_13->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 5)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_14 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_14");
  hcompute_blur_unnormalized_stencil_14->add_function("hcompute_blur_unnormalized_stencil_14");
  hcompute_blur_unnormalized_stencil_14->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 8)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 8)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 6)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 8)");
  hcompute_blur_unnormalized_stencil_14->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_14->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 6)");

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 9), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 9), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 9), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_15 = blur_unnormalized_s1_x_x->add_op("op_hcompute_blur_unnormalized_stencil_15");
  hcompute_blur_unnormalized_stencil_15->add_function("hcompute_blur_unnormalized_stencil_15");
  hcompute_blur_unnormalized_stencil_15->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 8)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 9)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 8)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "((blur_unnormalized_s1_x_x*8) + 9)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 7)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 9)");
  hcompute_blur_unnormalized_stencil_15->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "((blur_unnormalized_s1_x_x*8) + 8)");
  hcompute_blur_unnormalized_stencil_15->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "((blur_unnormalized_s1_x_x*8) + 7)");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 196);
  auto blur_s0_x_x = blur_s0_y->add_loop("blur_s0_x_x", 0, 32);

//store is: blur.stencil((blur_s0_x_x*8), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*8), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "(blur_s0_x_x*8)");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "(blur_s0_x_x*8)");

//store is: blur.stencil(((blur_s0_x_x*8) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 1), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_1 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_function("hcompute_blur_stencil_1");
  hcompute_blur_stencil_1->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 1)");
  hcompute_blur_stencil_1->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 1)");

//store is: blur.stencil(((blur_s0_x_x*8) + 2), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 2), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_2 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_function("hcompute_blur_stencil_2");
  hcompute_blur_stencil_2->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 2)");
  hcompute_blur_stencil_2->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 2)");

//store is: blur.stencil(((blur_s0_x_x*8) + 3), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 3), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_3 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_function("hcompute_blur_stencil_3");
  hcompute_blur_stencil_3->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 3)");
  hcompute_blur_stencil_3->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 3)");

//store is: blur.stencil(((blur_s0_x_x*8) + 4), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 4), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_4 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_4");
  hcompute_blur_stencil_4->add_function("hcompute_blur_stencil_4");
  hcompute_blur_stencil_4->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 4)");
  hcompute_blur_stencil_4->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 4)");

//store is: blur.stencil(((blur_s0_x_x*8) + 5), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 5), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_5 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_5");
  hcompute_blur_stencil_5->add_function("hcompute_blur_stencil_5");
  hcompute_blur_stencil_5->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 5)");
  hcompute_blur_stencil_5->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 5)");

//store is: blur.stencil(((blur_s0_x_x*8) + 6), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 6), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_6 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_6");
  hcompute_blur_stencil_6->add_function("hcompute_blur_stencil_6");
  hcompute_blur_stencil_6->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 6)");
  hcompute_blur_stencil_6->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 6)");

//store is: blur.stencil(((blur_s0_x_x*8) + 7), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 7), blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil_7 = blur_s0_x_x->add_op("op_hcompute_blur_stencil_7");
  hcompute_blur_stencil_7->add_function("hcompute_blur_stencil_7");
  hcompute_blur_stencil_7->add_load("blur_unnormalized_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 7)");
  hcompute_blur_stencil_7->add_store("blur_stencil", "blur_s0_y", "((blur_s0_x_x*8) + 7)");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 196);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 32);

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*8), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*8), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*8)");
  prg.buffer_port_widths["hw_output_stencil"] = 16;
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*8)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 1)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 2), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 2), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 2)");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 2)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 3), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 3), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 3)");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 3)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 4), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 4), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 4)");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 4)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 5), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 5), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 5)");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 5)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 6), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 6), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 6)");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 6)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 7), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 7), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("blur_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 7)");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*8) + 7)");

//consuming hw_output.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 196);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 32);

//store is: hw_output_global_wrapper.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*8), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*8), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_function("hcompute_hw_output_global_wrapper_glb_stencil");
  hcompute_hw_output_global_wrapper_glb_stencil->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*8)");
  hcompute_hw_output_global_wrapper_glb_stencil->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*8)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_function("hcompute_hw_output_global_wrapper_glb_stencil_1");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 1)");
  hcompute_hw_output_global_wrapper_glb_stencil_1->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 1)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_2");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_function("hcompute_hw_output_global_wrapper_glb_stencil_2");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 2)");
  hcompute_hw_output_global_wrapper_glb_stencil_2->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 2)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 3), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 3), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_3");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_function("hcompute_hw_output_global_wrapper_glb_stencil_3");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 3)");
  hcompute_hw_output_global_wrapper_glb_stencil_3->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 3)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 4), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 4), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_4 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_4");
  hcompute_hw_output_global_wrapper_glb_stencil_4->add_function("hcompute_hw_output_global_wrapper_glb_stencil_4");
  hcompute_hw_output_global_wrapper_glb_stencil_4->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 4)");
  hcompute_hw_output_global_wrapper_glb_stencil_4->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 4)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 5), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 5), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_5 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_5");
  hcompute_hw_output_global_wrapper_glb_stencil_5->add_function("hcompute_hw_output_global_wrapper_glb_stencil_5");
  hcompute_hw_output_global_wrapper_glb_stencil_5->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 5)");
  hcompute_hw_output_global_wrapper_glb_stencil_5->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 5)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 6), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 6), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_6 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_6");
  hcompute_hw_output_global_wrapper_glb_stencil_6->add_function("hcompute_hw_output_global_wrapper_glb_stencil_6");
  hcompute_hw_output_global_wrapper_glb_stencil_6->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 6)");
  hcompute_hw_output_global_wrapper_glb_stencil_6->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 6)");

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 7), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 7), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_glb_stencil_7 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_glb_stencil_7");
  hcompute_hw_output_global_wrapper_glb_stencil_7->add_function("hcompute_hw_output_global_wrapper_glb_stencil_7");
  hcompute_hw_output_global_wrapper_glb_stencil_7->add_load("hw_output_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 7)");
  hcompute_hw_output_global_wrapper_glb_stencil_7->add_store("hw_output_global_wrapper_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*8) + 7)");

  return prg;
}

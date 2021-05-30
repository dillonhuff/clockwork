#include "example_progs.h"

prog unsharp() {
  prog prg;
  prg.compute_unit_file = "unsharp_compute.h";
  prg.name = "unsharp";

// Stencil<uint16_t, 3, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 60, 60> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -2, 62);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -2, 62);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//consuming hw_input_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", -2, 62);
  auto gray_s0_x = gray_s0_y->add_loop("gray_s0_x", -2, 62);

//store is: gray.stencil(gray_s0_x, gray_s0_y) = (((hw_input_global_wrapper.stencil(1, gray_s0_x, gray_s0_y)*(uint16)150) + ((hw_input_global_wrapper.stencil(2, gray_s0_x, gray_s0_y)*(uint16)29) + (hw_input_global_wrapper.stencil(0, gray_s0_x, gray_s0_y)*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "gray_s0_y", "gray_s0_x", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "gray_s0_y", "gray_s0_x", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "gray_s0_y", "gray_s0_x", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "gray_s0_y", "gray_s0_x");

//consuming gray.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 60);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (int16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 60);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = (((((((((((((((((((((((((blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + -2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + -2))*(uint16)7))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -2))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + -1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + -1))*(uint16)14))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), blur_unnormalized_s1_y)*(uint16)17))) + int16((gray.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)21))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + 2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 2))*(uint16)7))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)3)))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");

//consuming blur_unnormalized.stencil
////producing ratio.stencil
  auto ratio_s0_y = prg.add_loop("ratio_s0_y", 0, 60);
  auto ratio_s0_x = ratio_s0_y->add_loop("ratio_s0_x", 0, 60);

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = min(((uint16(max(min(((int16(gray.stencil(ratio_s0_x, ratio_s0_y))*(int16)2) - int16(uint8((blur_unnormalized.stencil(ratio_s0_x, ratio_s0_y)/(int16)256)))), (int16)255), (int16)0))*(uint16)32)/max(gray.stencil(ratio_s0_x, ratio_s0_y), (uint16)1)), (uint16)255)
  auto hcompute_ratio_stencil = ratio_s0_x->add_op("op_hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_function("hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_load("blur_unnormalized_stencil", "ratio_s0_y", "ratio_s0_x");
  hcompute_ratio_stencil->add_load("gray_stencil", "ratio_s0_y", "ratio_s0_x");
  prg.buffer_port_widths["ratio_stencil"] = 16;
  hcompute_ratio_stencil->add_store("ratio_stencil", "ratio_s0_y", "ratio_s0_x");

//consuming ratio.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");
  hcompute_hw_output_stencil->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");
  hcompute_hw_output_stencil_1->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");
  hcompute_hw_output_stencil_2->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}

prog unsharp_new() {
  prog prg;
  prg.compute_unit_file = "unsharp_new_compute.h";
  prg.name = "unsharp_new";

// Stencil<uint16_t, 3, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 3, 60, 60> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -2, 62);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -2, 62);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 2), (hw_input_global_wrapper_s0_y + 2)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 2)", "(hw_input_global_wrapper_s0_x + 2)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 2), (hw_input_global_wrapper_s0_y + 2)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 2)", "(hw_input_global_wrapper_s0_x + 2)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 2), (hw_input_global_wrapper_s0_y + 2)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 2)", "(hw_input_global_wrapper_s0_x + 2)", "2");

//consuming hw_input_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", -2, 62);
  auto gray_s0_x = gray_s0_y->add_loop("gray_s0_x", -2, 62);

//store is: gray.stencil((gray_s0_x + 2), (gray_s0_y + 2)) = (((hw_input_global_wrapper.stencil(1, (gray_s0_x + 2), (gray_s0_y + 2))*(uint16)150) + ((hw_input_global_wrapper.stencil(2, (gray_s0_x + 2), (gray_s0_y + 2))*(uint16)29) + (hw_input_global_wrapper.stencil(0, (gray_s0_x + 2), (gray_s0_y + 2))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "(gray_s0_y + 2)", "(gray_s0_x + 2)", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "(gray_s0_y + 2)", "(gray_s0_x + 2)", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "(gray_s0_y + 2)", "(gray_s0_x + 2)", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "(gray_s0_y + 2)", "(gray_s0_x + 2)");

//consuming gray.stencil
////producing rom_div_lookupa0

//consuming rom_div_lookupa0
////producing reciprocal.stencil
  auto reciprocal_s0_y = prg.add_loop("reciprocal_s0_y", 0, 60);
  auto reciprocal_s0_x = reciprocal_s0_y->add_loop("reciprocal_s0_x", 0, 60);

//store is: reciprocal.stencil(reciprocal_s0_x, reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil((reciprocal_s0_x + 2), (reciprocal_s0_y + 2)), (uint16)1)) + -1)]
  auto hcompute_reciprocal_stencil = reciprocal_s0_x->add_op("op_hcompute_reciprocal_stencil");
  hcompute_reciprocal_stencil->add_function("hcompute_reciprocal_stencil");
  hcompute_reciprocal_stencil->add_load("gray_stencil", "(reciprocal_s0_y + 2)", "(reciprocal_s0_x + 2)");
  prg.buffer_port_widths["reciprocal_stencil"] = 16;
  hcompute_reciprocal_stencil->add_store("reciprocal_stencil", "reciprocal_s0_y", "reciprocal_s0_x");
  //hcompute_reciprocal_stencil->index_variable_prefetch_cycle(1);
  hcompute_reciprocal_stencil->add_latency(1);

//consuming reciprocal.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 60);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 60);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = ((gray.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)3) + (blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + ((gray.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)8) + ((gray.stencil((blur_unnormalized_s1_x + 3), blur_unnormalized_s1_y)*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x + 4), blur_unnormalized_s1_y)*(uint16)3) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)14) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)17) + ((gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 1))*(uint16)14) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)8) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)17) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)21) + ((gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 2))*(uint16)17) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 2))*(uint16)8) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 3))*(uint16)14) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 3))*(uint16)17) + ((gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 3))*(uint16)14) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 4))*(uint16)3) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 4))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 4))*(uint16)8) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 4))*(uint16)3) + (gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 4))*(uint16)7))))))))))))))))))))))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 3)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 3)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 3)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 3)", "(blur_unnormalized_s1_x + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 3)", "(blur_unnormalized_s1_x + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 4)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 4)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 4)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 4)", "(blur_unnormalized_s1_x + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 4)", "(blur_unnormalized_s1_x + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");

//consuming blur_unnormalized.stencil
////producing sharpen.stencil
  auto sharpen_s0_y = prg.add_loop("sharpen_s0_y", 0, 60);
  auto sharpen_s0_x = sharpen_s0_y->add_loop("sharpen_s0_x", 0, 60);

//store is: sharpen.stencil(sharpen_s0_x, sharpen_s0_y) = uint16(max(min(((int16(gray.stencil((sharpen_s0_x + 2), (sharpen_s0_y + 2)))*(int16)2) - int16(uint8((blur_unnormalized.stencil(sharpen_s0_x, sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
  auto hcompute_sharpen_stencil = sharpen_s0_x->add_op("op_hcompute_sharpen_stencil");
  hcompute_sharpen_stencil->add_function("hcompute_sharpen_stencil");
  hcompute_sharpen_stencil->add_load("blur_unnormalized_stencil", "sharpen_s0_y", "sharpen_s0_x");
  hcompute_sharpen_stencil->add_load("gray_stencil", "(sharpen_s0_y + 2)", "(sharpen_s0_x + 2)");
  prg.buffer_port_widths["sharpen_stencil"] = 16;
  hcompute_sharpen_stencil->add_store("sharpen_stencil", "sharpen_s0_y", "sharpen_s0_x");

//consuming sharpen.stencil
////producing ratio.stencil
  auto ratio_s0_y = prg.add_loop("ratio_s0_y", 0, 60);
  auto ratio_s0_x = ratio_s0_y->add_loop("ratio_s0_x", 0, 60);

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = (sharpen.stencil(ratio_s0_x, ratio_s0_y)*reciprocal.stencil(ratio_s0_x, ratio_s0_y))
  auto hcompute_ratio_stencil = ratio_s0_x->add_op("op_hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_function("hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_load("reciprocal_stencil", "ratio_s0_y", "ratio_s0_x");
  hcompute_ratio_stencil->add_load("sharpen_stencil", "ratio_s0_y", "ratio_s0_x");
  prg.buffer_port_widths["ratio_stencil"] = 16;
  hcompute_ratio_stencil->add_store("ratio_stencil", "ratio_s0_y", "ratio_s0_x");

//consuming ratio.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = int16(((int32(ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))*int32(hw_input_global_wrapper.stencil(0, (hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 2))))/256))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)", "0");
  hcompute_hw_output_stencil->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = int16(((int32(ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))*int32(hw_input_global_wrapper.stencil(1, (hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 2))))/256))
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)", "1");
  hcompute_hw_output_stencil_1->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = int16(((int32(ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))*int32(hw_input_global_wrapper.stencil(2, (hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 2))))/256))
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)", "2");
  hcompute_hw_output_stencil_2->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}




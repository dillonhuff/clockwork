#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog unsharp() {
  prog prg;
  prg.compute_unit_file = "unsharp_compute.h";
  prg.name = "unsharp";

// Stencil<uint16_t, 64, 64, 3> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 60, 60> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_c = prg.add_loop("hw_input_s0_c", 0, 3);
  auto hw_input_s0_y = hw_input_s0_c->add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");

//consuming hw_input.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", 0, 64);
  auto gray_s0_x = gray_s0_y->add_loop("gray_s0_x", 0, 64);

//store is: gray.stencil(gray.s0.x, gray.s0.y) = (((hw_input.stencil(gray.s0.x, gray.s0.y, 1)*(uint16)150) + ((hw_input.stencil(gray.s0.x, gray.s0.y, 2)*(uint16)29) + (hw_input.stencil(gray.s0.x, gray.s0.y, 0)*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_stencil", "gray_s0_x", "gray_s0_y", "1");
  hcompute_gray_stencil->add_load("hw_input_stencil", "gray_s0_x", "gray_s0_y", "2");
  hcompute_gray_stencil->add_load("hw_input_stencil", "gray_s0_x", "gray_s0_y", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "gray_s0_x", "gray_s0_y");

//consuming gray.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 60);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized.s0.x, blur_unnormalized.s0.y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_x", "blur_unnormalized_s0_y");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 60);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized.s1.x, blur_unnormalized.s1.y) = ((gray.stencil(blur_unnormalized.s1.x, blur_unnormalized.s1.y)*(uint16)74) + (blur_unnormalized.stencil(blur_unnormalized.s1.x, blur_unnormalized.s1.y) + ((gray.stencil((blur_unnormalized.s1.x + 1), blur_unnormalized.s1.y)*(uint16)59) + ((gray.stencil((blur_unnormalized.s1.x + 2), blur_unnormalized.s1.y)*(uint16)30) + ((gray.stencil((blur_unnormalized.s1.x + 3), blur_unnormalized.s1.y)*(uint16)10) + ((gray.stencil((blur_unnormalized.s1.x + 4), blur_unnormalized.s1.y)*(uint16)2) + ((gray.stencil(blur_unnormalized.s1.x, (blur_unnormalized.s1.y + 1))*(uint16)74) + ((gray.stencil((blur_unnormalized.s1.x + 1), (blur_unnormalized.s1.y + 1))*(uint16)59) + ((gray.stencil((blur_unnormalized.s1.x + 2), (blur_unnormalized.s1.y + 1))*(uint16)30) + ((gray.stencil((blur_unnormalized.s1.x + 3), (blur_unnormalized.s1.y + 1))*(uint16)10) + ((gray.stencil((blur_unnormalized.s1.x + 4), (blur_unnormalized.s1.y + 1))*(uint16)2) + ((gray.stencil(blur_unnormalized.s1.x, (blur_unnormalized.s1.y + 2))*(uint16)74) + ((gray.stencil((blur_unnormalized.s1.x + 1), (blur_unnormalized.s1.y + 2))*(uint16)59) + ((gray.stencil((blur_unnormalized.s1.x + 2), (blur_unnormalized.s1.y + 2))*(uint16)30) + ((gray.stencil((blur_unnormalized.s1.x + 3), (blur_unnormalized.s1.y + 2))*(uint16)10) + ((gray.stencil((blur_unnormalized.s1.x + 4), (blur_unnormalized.s1.y + 2))*(uint16)2) + ((gray.stencil(blur_unnormalized.s1.x, (blur_unnormalized.s1.y + 3))*(uint16)74) + ((gray.stencil((blur_unnormalized.s1.x + 1), (blur_unnormalized.s1.y + 3))*(uint16)59) + ((gray.stencil((blur_unnormalized.s1.x + 2), (blur_unnormalized.s1.y + 3))*(uint16)30) + ((gray.stencil((blur_unnormalized.s1.x + 3), (blur_unnormalized.s1.y + 3))*(uint16)10) + ((gray.stencil((blur_unnormalized.s1.x + 4), (blur_unnormalized.s1.y + 3))*(uint16)2) + ((gray.stencil(blur_unnormalized.s1.x, (blur_unnormalized.s1.y + 4))*(uint16)74) + ((((gray.stencil((blur_unnormalized.s1.x + 2), (blur_unnormalized.s1.y + 4))*(uint16)15) + (gray.stencil((blur_unnormalized.s1.x + 4), (blur_unnormalized.s1.y + 4)) + (gray.stencil((blur_unnormalized.s1.x + 3), (blur_unnormalized.s1.y + 4))*(uint16)5)))*(uint16)2) + (gray.stencil((blur_unnormalized.s1.x + 1), (blur_unnormalized.s1.y + 4))*(uint16)59))))))))))))))))))))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_x", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_x", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 4)", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_x", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 1)", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 2)", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 3)", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 4)", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_x", "(blur_unnormalized_s1_y + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 1)", "(blur_unnormalized_s1_y + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 2)", "(blur_unnormalized_s1_y + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 3)", "(blur_unnormalized_s1_y + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 1)", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 4)", "(blur_unnormalized_s1_y + 3)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_x", "(blur_unnormalized_s1_y + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 2)", "(blur_unnormalized_s1_y + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 4)", "(blur_unnormalized_s1_y + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 3)", "(blur_unnormalized_s1_y + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 1)", "(blur_unnormalized_s1_y + 4)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 2)", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 3)", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 4)", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_x", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 1)", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 2)", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_x + 3)", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_x", "blur_unnormalized_s1_y");

//consuming blur_unnormalized.stencil
////producing ratio.stencil
  auto ratio_s0_y = prg.add_loop("ratio_s0_y", 0, 60);
  auto ratio_s0_x = ratio_s0_y->add_loop("ratio_s0_x", 0, 60);

//store is: ratio.stencil(ratio.s0.x, ratio.s0.y) = min(((min(((gray.stencil(ratio.s0.x, ratio.s0.y)*(uint16)2) - (blur_unnormalized.stencil(ratio.s0.x, ratio.s0.y)/(uint16)256)), (uint16)255)*(uint16)32)/max(gray.stencil(ratio.s0.x, ratio.s0.y), (uint16)1)), (uint16)255)
  auto hcompute_ratio_stencil = ratio_s0_x->add_op("op_hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_function("hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_load("blur_unnormalized_stencil", "ratio_s0_x", "ratio_s0_y");
  hcompute_ratio_stencil->add_load("gray_stencil", "ratio_s0_x", "ratio_s0_y");
  prg.buffer_port_widths["ratio_stencil"] = 16;
  hcompute_ratio_stencil->add_store("ratio_stencil", "ratio_s0_x", "ratio_s0_y");

//consuming ratio.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(min(((ratio.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi)*gray.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))/(uint16)32), (uint16)255))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("gray_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_load("ratio_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

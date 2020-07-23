#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog gaussian() {
  prog prg;
  prg.compute_unit_file = "gaussian_compute.h";
  prg.name = "gaussian";

// Stencil<uint16_t, 64, 64> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y");

//consuming hw_input.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 62);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 62);

//store is: blur_unnormalized.stencil(blur_unnormalized.s0.x, blur_unnormalized.s0.y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_x", "blur_unnormalized_s0_y");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 62);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 62);

//store is: blur_unnormalized.stencil(blur_unnormalized.s1.x, blur_unnormalized.s1.y) = ((hw_input.stencil(blur_unnormalized.s1.x, blur_unnormalized.s1.y)*(uint16)24) + (blur_unnormalized.stencil(blur_unnormalized.s1.x, blur_unnormalized.s1.y) + ((hw_input.stencil((blur_unnormalized.s1.x + 1), blur_unnormalized.s1.y)*(uint16)30) + ((hw_input.stencil((blur_unnormalized.s1.x + 2), blur_unnormalized.s1.y)*(uint16)24) + ((hw_input.stencil(blur_unnormalized.s1.x, (blur_unnormalized.s1.y + 1))*(uint16)30) + ((hw_input.stencil((blur_unnormalized.s1.x + 1), (blur_unnormalized.s1.y + 1))*(uint16)37) + ((hw_input.stencil((blur_unnormalized.s1.x + 2), (blur_unnormalized.s1.y + 1))*(uint16)30) + ((hw_input.stencil(blur_unnormalized.s1.x, (blur_unnormalized.s1.y + 2))*(uint16)24) + ((hw_input.stencil((blur_unnormalized.s1.x + 2), (blur_unnormalized.s1.y + 2))*(uint16)24) + (hw_input.stencil((blur_unnormalized.s1.x + 1), (blur_unnormalized.s1.y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_x", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "blur_unnormalized_s1_x", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "(blur_unnormalized_s1_x + 1)", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "(blur_unnormalized_s1_x + 2)", "blur_unnormalized_s1_y");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "blur_unnormalized_s1_x", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "(blur_unnormalized_s1_x + 1)", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "(blur_unnormalized_s1_x + 2)", "(blur_unnormalized_s1_y + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "blur_unnormalized_s1_x", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "(blur_unnormalized_s1_x + 2)", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_stencil", "(blur_unnormalized_s1_x + 1)", "(blur_unnormalized_s1_y + 2)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_x", "blur_unnormalized_s1_y");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 62);
  auto blur_s0_x = blur_s0_y->add_loop("blur_s0_x", 0, 62);

//store is: blur.stencil(blur.s0.x, blur.s0.y) = (blur_unnormalized.stencil(blur.s0.x, blur.s0.y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_x", "blur_s0_y");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_x", "blur_s0_y");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(blur.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

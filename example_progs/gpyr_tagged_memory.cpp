#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"


prog gpyr_default() {
  prog prg;
  prg.compute_unit_file = "gpyr_compute.h";
  prg.name = "gpyr_default";

// Stencil<uint16_t, 64, 64> &hw_in_stencil = arg_0;
  prg.add_input("hw_in_stencil");
  prg.buffer_port_widths["hw_in_stencil"] = 16;
// Stencil<uint16_t, 8, 8> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_in_global_wrapper.stencil
  auto hw_in_global_wrapper_s0_y = prg.add_loop("hw_in_global_wrapper_s0_y", 0, 64);
  auto hw_in_global_wrapper_s0_x = hw_in_global_wrapper_s0_y->add_loop("hw_in_global_wrapper_s0_x", 0, 64);

//store is: hw_in_global_wrapper.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y) = hw_in.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y)
  auto hcompute_hw_in_global_wrapper_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_function("hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y", "hw_in_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y", "hw_in_global_wrapper_s0_x");

//consuming hw_in_global_wrapper.stencil
////producing blur0$1.stencil
  auto blur0_1_s0_y = prg.add_loop("blur0_1_s0_y", 0, 32);
  auto blur0_1_s0_x = blur0_1_s0_y->add_loop("blur0_1_s0_x", 0, 32);

//store is: blur0$1.stencil(blur0_1_s0_x, blur0_1_s0_y) = ((hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil((blur0_1_s0_x*2), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), ((blur0_1_s0_y*2) + 1)) + hw_in_global_wrapper.stencil((blur0_1_s0_x*2), ((blur0_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur0_1_stencil = blur0_1_s0_x->add_op("op_hcompute_blur0_1_stencil");
  //hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "(blur0_1_s0_x*2)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "(blur0_1_s0_x*2)");
  prg.buffer_port_widths["blur0_1_stencil"] = 16;
  hcompute_blur0_1_stencil->add_store("blur0_1_stencil", "blur0_1_s0_y", "blur0_1_s0_x");

//consuming blur0$1.stencil
////producing blur1$1.stencil
  auto blur1_1_s0_y = prg.add_loop("blur1_1_s0_y", 0, 16);
  auto blur1_1_s0_x = blur1_1_s0_y->add_loop("blur1_1_s0_x", 0, 16);

//store is: blur1$1.stencil(blur1_1_s0_x, blur1_1_s0_y) = ((blur0$1.stencil(((blur1_1_s0_x*2) + 1), (blur1_1_s0_y*2)) + (blur0$1.stencil((blur1_1_s0_x*2), (blur1_1_s0_y*2)) + (blur0$1.stencil(((blur1_1_s0_x*2) + 1), ((blur1_1_s0_y*2) + 1)) + blur0$1.stencil((blur1_1_s0_x*2), ((blur1_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur1_1_stencil = blur1_1_s0_x->add_op("op_hcompute_blur1_1_stencil");
  //hcompute_blur1_1_stencil->add_function("hcompute_blur1_1_stencil");
  hcompute_blur1_1_stencil->add_function("hcompute_blur1_1_stencil");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "(blur1_1_s0_x*2)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "(blur1_1_s0_x*2)");
  prg.buffer_port_widths["blur1_1_stencil"] = 16;
  hcompute_blur1_1_stencil->add_store("blur1_1_stencil", "blur1_1_s0_y", "blur1_1_s0_x");

//consuming blur1$1.stencil
////producing blur2$1.stencil
  auto blur2_1_s0_y = prg.add_loop("blur2_1_s0_y", 0, 8);
  auto blur2_1_s0_x = blur2_1_s0_y->add_loop("blur2_1_s0_x", 0, 8);

//store is: blur2$1.stencil(blur2_1_s0_x, blur2_1_s0_y) = ((blur1$1.stencil(((blur2_1_s0_x*2) + 1), (blur2_1_s0_y*2)) + (blur1$1.stencil((blur2_1_s0_x*2), (blur2_1_s0_y*2)) + (blur1$1.stencil(((blur2_1_s0_x*2) + 1), ((blur2_1_s0_y*2) + 1)) + blur1$1.stencil((blur2_1_s0_x*2), ((blur2_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur2_1_stencil = blur2_1_s0_x->add_op("op_hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_function("hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "(blur2_1_s0_x*2)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "(blur2_1_s0_x*2)");
  prg.buffer_port_widths["blur2_1_stencil"] = 16;
  hcompute_blur2_1_stencil->add_store("blur2_1_stencil", "blur2_1_s0_y", "blur2_1_s0_x");

//consuming blur2$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 8);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur2$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur2_1_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog gpyr_tagged() {
  prog prg;
  prg.compute_unit_file = "gpyr_compute.h";
  prg.name = "gpyr_tagged";

// Stencil<uint16_t, 64, 64> &hw_in_stencil = arg_0;
  prg.add_input("hw_in_stencil");
  prg.buffer_port_widths["hw_in_stencil"] = 16;
// Stencil<uint16_t, 8, 8> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_in_global_wrapper.stencil
  auto hw_in_global_wrapper_s0_y = prg.add_loop("hw_in_global_wrapper_s0_y", 0, 64);
  hw_in_global_wrapper_s0_y->coarse_grain_loop_tag();
  auto hw_in_global_wrapper_s0_x = hw_in_global_wrapper_s0_y->add_loop("hw_in_global_wrapper_s0_x", 0, 64);

//store is: hw_in_global_wrapper.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y) = hw_in.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y)
  auto hcompute_hw_in_global_wrapper_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_function("hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y", "hw_in_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y", "hw_in_global_wrapper_s0_x");

//consuming hw_in_global_wrapper.stencil
////producing blur0$1.stencil
  auto blur0_1_s0_y = prg.add_loop("blur0_1_s0_y", 0, 32);
  blur0_1_s0_y->coarse_grain_loop_tag();
  auto blur0_1_s0_x = blur0_1_s0_y->add_loop("blur0_1_s0_x", 0, 32);

//store is: blur0$1.stencil(blur0_1_s0_x, blur0_1_s0_y) = ((hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil((blur0_1_s0_x*2), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), ((blur0_1_s0_y*2) + 1)) + hw_in_global_wrapper.stencil((blur0_1_s0_x*2), ((blur0_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur0_1_stencil = blur0_1_s0_x->add_op("op_hcompute_blur0_1_stencil");
  //hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "(blur0_1_s0_x*2)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "(blur0_1_s0_x*2)");
  prg.buffer_port_widths["blur0_1_stencil"] = 16;
  hcompute_blur0_1_stencil->add_store("blur0_1_stencil", "blur0_1_s0_y", "blur0_1_s0_x");

//consuming blur0$1.stencil
////producing blur1$1.stencil
  auto blur1_1_s0_y = prg.add_loop("blur1_1_s0_y", 0, 16);
  blur1_1_s0_y->coarse_grain_loop_tag();
  auto blur1_1_s0_x = blur1_1_s0_y->add_loop("blur1_1_s0_x", 0, 16);

//store is: blur1$1.stencil(blur1_1_s0_x, blur1_1_s0_y) = ((blur0$1.stencil(((blur1_1_s0_x*2) + 1), (blur1_1_s0_y*2)) + (blur0$1.stencil((blur1_1_s0_x*2), (blur1_1_s0_y*2)) + (blur0$1.stencil(((blur1_1_s0_x*2) + 1), ((blur1_1_s0_y*2) + 1)) + blur0$1.stencil((blur1_1_s0_x*2), ((blur1_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur1_1_stencil = blur1_1_s0_x->add_op("op_hcompute_blur1_1_stencil");
  //hcompute_blur1_1_stencil->add_function("hcompute_blur1_1_stencil");
  hcompute_blur1_1_stencil->add_function("hcompute_blur1_1_stencil");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "(blur1_1_s0_x*2)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "(blur1_1_s0_x*2)");
  prg.buffer_port_widths["blur1_1_stencil"] = 16;
  hcompute_blur1_1_stencil->add_store("blur1_1_stencil", "blur1_1_s0_y", "blur1_1_s0_x");

//consuming blur1$1.stencil
////producing blur2$1.stencil
  auto blur2_1_s0_y = prg.add_loop("blur2_1_s0_y", 0, 8);
  blur2_1_s0_y->coarse_grain_loop_tag();
  auto blur2_1_s0_x = blur2_1_s0_y->add_loop("blur2_1_s0_x", 0, 8);

//store is: blur2$1.stencil(blur2_1_s0_x, blur2_1_s0_y) = ((blur1$1.stencil(((blur2_1_s0_x*2) + 1), (blur2_1_s0_y*2)) + (blur1$1.stencil((blur2_1_s0_x*2), (blur2_1_s0_y*2)) + (blur1$1.stencil(((blur2_1_s0_x*2) + 1), ((blur2_1_s0_y*2) + 1)) + blur1$1.stencil((blur2_1_s0_x*2), ((blur2_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur2_1_stencil = blur2_1_s0_x->add_op("op_hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_function("hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "(blur2_1_s0_x*2)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "(blur2_1_s0_x*2)");
  prg.buffer_port_widths["blur2_1_stencil"] = 16;
  hcompute_blur2_1_stencil->add_store("blur2_1_stencil", "blur2_1_s0_y", "blur2_1_s0_x");

//consuming blur2$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 8);
  hw_output_s0_y_yi->coarse_grain_loop_tag();
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur2$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur2_1_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog gpyr_unroll_default() {
  prog prg;
  prg.compute_unit_file = "gpyr_unroll_compute.h";
  prg.name = "gpyr_unroll_default";

// Stencil<uint16_t, 64, 64> &hw_in_stencil = arg_0;
  prg.add_input("hw_in_stencil");
  prg.buffer_port_widths["hw_in_stencil"] = 16;
// Stencil<uint16_t, 8, 8> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_in_global_wrapper.stencil
  auto hw_in_global_wrapper_s0_y = prg.add_loop("hw_in_global_wrapper_s0_y", 0, 32);
  auto hw_in_global_wrapper_s0_x = hw_in_global_wrapper_s0_y->add_loop("hw_in_global_wrapper_s0_x", 0, 32);

//store is: hw_in_global_wrapper.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y) = hw_in.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y)
  auto hcompute_hw_in_global_wrapper_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_function("hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2");

  auto hcompute_hw_in_global_wrapper_1_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_1_stencil");
  hcompute_hw_in_global_wrapper_1_stencil->add_function("hcompute_hw_in_global_wrapper_1_stencil");
  hcompute_hw_in_global_wrapper_1_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2+1");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_1_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2+1");


  auto hcompute_hw_in_global_wrapper_2_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_2_stencil");
  hcompute_hw_in_global_wrapper_2_stencil->add_function("hcompute_hw_in_global_wrapper_2_stencil");
  hcompute_hw_in_global_wrapper_2_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_2_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2");

  auto hcompute_hw_in_global_wrapper_3_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_3_stencil");
  hcompute_hw_in_global_wrapper_3_stencil->add_function("hcompute_hw_in_global_wrapper_3_stencil");
  hcompute_hw_in_global_wrapper_3_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2+1");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_3_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2+1");

//consuming hw_in_global_wrapper.stencil
////producing blur0$1.stencil
  auto blur0_1_s0_y = prg.add_loop("blur0_1_s0_y", 0, 32);
  auto blur0_1_s0_x = blur0_1_s0_y->add_loop("blur0_1_s0_x", 0, 32);

//store is: blur0$1.stencil(blur0_1_s0_x, blur0_1_s0_y) = ((hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil((blur0_1_s0_x*2), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), ((blur0_1_s0_y*2) + 1)) + hw_in_global_wrapper.stencil((blur0_1_s0_x*2), ((blur0_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur0_1_stencil = blur0_1_s0_x->add_op("op_hcompute_blur0_1_stencil");
  //hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "(blur0_1_s0_x*2)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "(blur0_1_s0_x*2)");
  prg.buffer_port_widths["blur0_1_stencil"] = 16;
  hcompute_blur0_1_stencil->add_store("blur0_1_stencil", "blur0_1_s0_y", "blur0_1_s0_x");

//consuming blur0$1.stencil
////producing blur1$1.stencil
  auto blur1_1_s0_y = prg.add_loop("blur1_1_s0_y", 0, 16);
  auto blur1_1_s0_x = blur1_1_s0_y->add_loop("blur1_1_s0_x", 0, 16);

//store is: blur1$1.stencil(blur1_1_s0_x, blur1_1_s0_y) = ((blur0$1.stencil(((blur1_1_s0_x*2) + 1), (blur1_1_s0_y*2)) + (blur0$1.stencil((blur1_1_s0_x*2), (blur1_1_s0_y*2)) + (blur0$1.stencil(((blur1_1_s0_x*2) + 1), ((blur1_1_s0_y*2) + 1)) + blur0$1.stencil((blur1_1_s0_x*2), ((blur1_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur1_1_stencil = blur1_1_s0_x->add_op("op_hcompute_blur1_1_stencil");
  hcompute_blur1_1_stencil->add_function("hcompute_blur1_1_stencil");
  //hcompute_blur1_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "(blur1_1_s0_x*2)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "(blur1_1_s0_x*2)");
  prg.buffer_port_widths["blur1_1_stencil"] = 16;
  hcompute_blur1_1_stencil->add_store("blur1_1_stencil", "blur1_1_s0_y", "blur1_1_s0_x");

//consuming blur1$1.stencil
////producing blur2$1.stencil
  auto blur2_1_s0_y = prg.add_loop("blur2_1_s0_y", 0, 8);
  auto blur2_1_s0_x = blur2_1_s0_y->add_loop("blur2_1_s0_x", 0, 8);

//store is: blur2$1.stencil(blur2_1_s0_x, blur2_1_s0_y) = ((blur1$1.stencil(((blur2_1_s0_x*2) + 1), (blur2_1_s0_y*2)) + (blur1$1.stencil((blur2_1_s0_x*2), (blur2_1_s0_y*2)) + (blur1$1.stencil(((blur2_1_s0_x*2) + 1), ((blur2_1_s0_y*2) + 1)) + blur1$1.stencil((blur2_1_s0_x*2), ((blur2_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur2_1_stencil = blur2_1_s0_x->add_op("op_hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_function("hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "(blur2_1_s0_x*2)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "(blur2_1_s0_x*2)");
  prg.buffer_port_widths["blur2_1_stencil"] = 16;
  hcompute_blur2_1_stencil->add_store("blur2_1_stencil", "blur2_1_s0_y", "blur2_1_s0_x");

//consuming blur2$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 8);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur2$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur2_1_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog gpyr_unroll() {
  prog prg;
  prg.compute_unit_file = "gpyr_unroll_compute.h";
  prg.name = "gpyr_unroll";

// Stencil<uint16_t, 64, 64> &hw_in_stencil = arg_0;
  prg.add_input("hw_in_stencil");
  prg.buffer_port_widths["hw_in_stencil"] = 16;
// Stencil<uint16_t, 8, 8> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_in_global_wrapper.stencil
  auto hw_in_global_wrapper_s0_y = prg.add_loop("hw_in_global_wrapper_s0_y", 0, 32);
  hw_in_global_wrapper_s0_y->coarse_grain_loop_tag();
  auto hw_in_global_wrapper_s0_x = hw_in_global_wrapper_s0_y->add_loop("hw_in_global_wrapper_s0_x", 0, 32);

//store is: hw_in_global_wrapper.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y) = hw_in.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y)
  auto hcompute_hw_in_global_wrapper_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_function("hcompute_hw_in_global_wrapper_stencil");
  hcompute_hw_in_global_wrapper_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2");

  auto hcompute_hw_in_global_wrapper_1_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_1_stencil");
  hcompute_hw_in_global_wrapper_1_stencil->add_function("hcompute_hw_in_global_wrapper_1_stencil");
  hcompute_hw_in_global_wrapper_1_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2+1");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_1_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2", "hw_in_global_wrapper_s0_x*2+1");


  auto hcompute_hw_in_global_wrapper_2_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_2_stencil");
  hcompute_hw_in_global_wrapper_2_stencil->add_function("hcompute_hw_in_global_wrapper_2_stencil");
  hcompute_hw_in_global_wrapper_2_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_2_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2");

  auto hcompute_hw_in_global_wrapper_3_stencil = hw_in_global_wrapper_s0_x->add_op("op_hcompute_hw_in_global_wrapper_3_stencil");
  hcompute_hw_in_global_wrapper_3_stencil->add_function("hcompute_hw_in_global_wrapper_3_stencil");
  hcompute_hw_in_global_wrapper_3_stencil->add_load("hw_in_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2+1");
  prg.buffer_port_widths["hw_in_global_wrapper_stencil"] = 16;
  hcompute_hw_in_global_wrapper_3_stencil->add_store("hw_in_global_wrapper_stencil", "hw_in_global_wrapper_s0_y*2+1", "hw_in_global_wrapper_s0_x*2+1");

//consuming hw_in_global_wrapper.stencil
////producing blur0$1.stencil
  auto blur0_1_s0_y = prg.add_loop("blur0_1_s0_y", 0, 32);
  blur0_1_s0_y->coarse_grain_loop_tag();
  auto blur0_1_s0_x = blur0_1_s0_y->add_loop("blur0_1_s0_x", 0, 32);

//store is: blur0$1.stencil(blur0_1_s0_x, blur0_1_s0_y) = ((hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil((blur0_1_s0_x*2), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), ((blur0_1_s0_y*2) + 1)) + hw_in_global_wrapper.stencil((blur0_1_s0_x*2), ((blur0_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur0_1_stencil = blur0_1_s0_x->add_op("op_hcompute_blur0_1_stencil");
  //hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "(blur0_1_s0_y*2)", "(blur0_1_s0_x*2)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "((blur0_1_s0_x*2) + 1)");
  hcompute_blur0_1_stencil->add_load("hw_in_global_wrapper_stencil", "((blur0_1_s0_y*2) + 1)", "(blur0_1_s0_x*2)");
  prg.buffer_port_widths["blur0_1_stencil"] = 16;
  hcompute_blur0_1_stencil->add_store("blur0_1_stencil", "blur0_1_s0_y", "blur0_1_s0_x");

//consuming blur0$1.stencil
////producing blur1$1.stencil
  auto blur1_1_s0_y = prg.add_loop("blur1_1_s0_y", 0, 16);
  blur1_1_s0_y->coarse_grain_loop_tag();
  auto blur1_1_s0_x = blur1_1_s0_y->add_loop("blur1_1_s0_x", 0, 16);

//store is: blur1$1.stencil(blur1_1_s0_x, blur1_1_s0_y) = ((blur0$1.stencil(((blur1_1_s0_x*2) + 1), (blur1_1_s0_y*2)) + (blur0$1.stencil((blur1_1_s0_x*2), (blur1_1_s0_y*2)) + (blur0$1.stencil(((blur1_1_s0_x*2) + 1), ((blur1_1_s0_y*2) + 1)) + blur0$1.stencil((blur1_1_s0_x*2), ((blur1_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur1_1_stencil = blur1_1_s0_x->add_op("op_hcompute_blur1_1_stencil");
  //hcompute_blur1_1_stencil->add_function("hcompute_blur1_1_stencil");
  hcompute_blur1_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "(blur1_1_s0_y*2)", "(blur1_1_s0_x*2)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "((blur1_1_s0_x*2) + 1)");
  hcompute_blur1_1_stencil->add_load("blur0_1_stencil", "((blur1_1_s0_y*2) + 1)", "(blur1_1_s0_x*2)");
  prg.buffer_port_widths["blur1_1_stencil"] = 16;
  hcompute_blur1_1_stencil->add_store("blur1_1_stencil", "blur1_1_s0_y", "blur1_1_s0_x");

//consuming blur1$1.stencil
////producing blur2$1.stencil
  auto blur2_1_s0_y = prg.add_loop("blur2_1_s0_y", 0, 8);
  blur2_1_s0_y->coarse_grain_loop_tag();
  auto blur2_1_s0_x = blur2_1_s0_y->add_loop("blur2_1_s0_x", 0, 8);

//store is: blur2$1.stencil(blur2_1_s0_x, blur2_1_s0_y) = ((blur1$1.stencil(((blur2_1_s0_x*2) + 1), (blur2_1_s0_y*2)) + (blur1$1.stencil((blur2_1_s0_x*2), (blur2_1_s0_y*2)) + (blur1$1.stencil(((blur2_1_s0_x*2) + 1), ((blur2_1_s0_y*2) + 1)) + blur1$1.stencil((blur2_1_s0_x*2), ((blur2_1_s0_y*2) + 1)))))/(uint16)4)
  auto hcompute_blur2_1_stencil = blur2_1_s0_x->add_op("op_hcompute_blur2_1_stencil");
  hcompute_blur2_1_stencil->add_function("hcompute_blur0_1_stencil");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "(blur2_1_s0_y*2)", "(blur2_1_s0_x*2)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "((blur2_1_s0_x*2) + 1)");
  hcompute_blur2_1_stencil->add_load("blur1_1_stencil", "((blur2_1_s0_y*2) + 1)", "(blur2_1_s0_x*2)");
  prg.buffer_port_widths["blur2_1_stencil"] = 16;
  hcompute_blur2_1_stencil->add_store("blur2_1_stencil", "blur2_1_s0_y", "blur2_1_s0_x");

//consuming blur2$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 8);
  hw_output_s0_y_yi->coarse_grain_loop_tag();
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur2$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur2_1_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


// empty

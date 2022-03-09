#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog nlmeans_simple_trunc() {
  prog prg;
  prg.compute_unit_file = "nlmeans_simple_trunc_compute.h";
  prg.name = "nlmeans_simple_trunc";

// Stencil<uint16_t, 3, 38, 38> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("d_stencil_out");
  prg.buffer_port_widths["d_stencil_out"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -4, 36);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -4, 36);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "2");

//consuming hw_input_global_wrapper.stencil
////producing d.stencil
  auto d_s0_y = prg.add_loop("d_s0_y", -2, 33);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -2, 34);
  auto d_s0_dy = d_s0_x->add_loop("d_s0_dy", -2, 2);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -2, 2);

//store is: d.stencil((d_s0_dx + 2), (d_s0_dy + 2), (d_s0_x + 2), (d_s0_y + 2)) = (uint16)0
  auto hcompute_d_stencil = d_s0_dx->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_y + 2)", "(d_s0_x + 2)", "(d_s0_dy + 2)", "(d_s0_dx + 2)");
  auto d_s1_y = prg.add_loop("d_s1_y", -2, 33);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -2, 34);
  auto d_s1_dy = d_s1_x->add_loop("d_s1_dy", -2, 2);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -2, 2);

//store is: d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) = (((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) + (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + ((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
  auto hcompute_d_stencil_1 = d_s1_dx->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_y + 2)", "(d_s1_x + 2)", "(d_s1_dy + 2)", "(d_s1_dx + 2)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "1");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_y + 2)", "(d_s1_x + 2)", "(d_s1_dy + 2)", "(d_s1_dx + 2)");

  auto do_s0_y = prg.add_loop("do_s0_y", -2, 33);
  auto do_s0_x = do_s0_y->add_loop("do_s0_x", -2, 34);
  auto do_s0_dy = do_s0_x->add_loop("do_s0_dy", -2, 2);
  auto do_s0_dx = do_s0_dy->add_loop("do_s0_dx", -2, 2);

  auto hcompute_d_stencil_2 = do_s0_dx->add_op("op_hcompute_d_stencil_2");
  hcompute_d_stencil_2->add_function("hcompute_d_stencil_2");
  hcompute_d_stencil_2->add_load("d_stencil", "(do_s0_y + 2)", "(do_s0_x + 2)", "(do_s0_dy + 2)", "(do_s0_dx + 2)");
  hcompute_d_stencil_2->add_store("d_stencil_out", "(do_s0_y + 2)", "(do_s0_x + 2)", "(do_s0_dy + 2)", "(do_s0_dx + 2)");

  return prg;
}

prog nlmeans_simple_blur() {
  prog prg;
  prg.compute_unit_file = "nlmeans_simple_blur_compute.h";
  prg.name = "nlmeans_simple_blur";

// Stencil<uint16_t, 3, 38, 38> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("blur_d_stencil_out");
  prg.buffer_port_widths["blur_d_stencil_out"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -4, 36);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -4, 36);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "2");

//consuming hw_input_global_wrapper.stencil
////producing d.stencil
  auto d_s0_y = prg.add_loop("d_s0_y", -2, 33);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -2, 34);
  auto d_s0_dy = d_s0_x->add_loop("d_s0_dy", -2, 2);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -2, 2);

//store is: d.stencil((d_s0_dx + 2), (d_s0_dy + 2), (d_s0_x + 2), (d_s0_y + 2)) = (uint16)0
  auto hcompute_d_stencil = d_s0_dx->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_y + 2)", "(d_s0_x + 2)", "(d_s0_dy + 2)", "(d_s0_dx + 2)");
  auto d_s1_y = prg.add_loop("d_s1_y", -2, 33);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -2, 34);
  auto d_s1_dy = d_s1_x->add_loop("d_s1_dy", -2, 2);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -2, 2);

//store is: d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) = (((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) + (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + ((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
  auto hcompute_d_stencil_1 = d_s1_dx->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_y + 2)", "(d_s1_x + 2)", "(d_s1_dy + 2)", "(d_s1_dx + 2)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "1");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_y + 2)", "(d_s1_x + 2)", "(d_s1_dy + 2)", "(d_s1_dx + 2)");

//consuming d.stencil
////producing blur_d_y.stencil
  auto blur_d_y_s0_y = prg.add_loop("blur_d_y_s0_y", 0, 32);
  auto blur_d_y_s0_x = blur_d_y_s0_y->add_loop("blur_d_y_s0_x", -2, 34);
  auto blur_d_y_s0_dy = blur_d_y_s0_x->add_loop("blur_d_y_s0_dy", -2, 2);
  auto blur_d_y_s0_dx = blur_d_y_s0_dy->add_loop("blur_d_y_s0_dx", -2, 2);

//store is: blur_d_y.stencil((blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2), (blur_d_y_s0_x + 2), blur_d_y_s0_y) = (uint16)0
  auto hcompute_blur_d_y_stencil = blur_d_y_s0_dx->add_op("op_hcompute_blur_d_y_stencil");
  hcompute_blur_d_y_stencil->add_function("hcompute_blur_d_y_stencil");
  prg.buffer_port_widths["blur_d_y_stencil"] = 16;
  hcompute_blur_d_y_stencil->add_store("blur_d_y_stencil", "blur_d_y_s0_y", "(blur_d_y_s0_x + 2)", "(blur_d_y_s0_dy + 2)", "(blur_d_y_s0_dx + 2)");
  auto blur_d_y_s1_y = prg.add_loop("blur_d_y_s1_y", 0, 32);
  auto blur_d_y_s1_x = blur_d_y_s1_y->add_loop("blur_d_y_s1_x", -2, 34);
  auto blur_d_y_s1_dy = blur_d_y_s1_x->add_loop("blur_d_y_s1_dy", -2, 2);
  auto blur_d_y_s1_dx = blur_d_y_s1_dy->add_loop("blur_d_y_s1_dx", -2, 2);

//store is: blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) = (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1)) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3)) + d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2))))))
  auto hcompute_blur_d_y_stencil_1 = blur_d_y_s1_dx->add_op("op_hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_function("hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_load("blur_d_y_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 1)", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 3)", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 2)", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_store("blur_d_y_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");

//consuming blur_d_y.stencil
////producing blur_d.stencil
  auto blur_d_s0_y = prg.add_loop("blur_d_s0_y", 0, 32);
  auto blur_d_s0_x = blur_d_s0_y->add_loop("blur_d_s0_x", 0, 32);
  auto blur_d_s0_dy = blur_d_s0_x->add_loop("blur_d_s0_dy", -2, 2);
  auto blur_d_s0_dx = blur_d_s0_dy->add_loop("blur_d_s0_dx", -2, 2);

//store is: blur_d.stencil((blur_d_s0_dx + 2), (blur_d_s0_dy + 2), blur_d_s0_x, blur_d_s0_y) = (uint16)0
  auto hcompute_blur_d_stencil = blur_d_s0_dx->add_op("op_hcompute_blur_d_stencil");
  hcompute_blur_d_stencil->add_function("hcompute_blur_d_stencil");
  prg.buffer_port_widths["blur_d_stencil"] = 16;
  hcompute_blur_d_stencil->add_store("blur_d_stencil", "blur_d_s0_y", "blur_d_s0_x", "(blur_d_s0_dy + 2)", "(blur_d_s0_dx + 2)");
  auto blur_d_s1_y = prg.add_loop("blur_d_s1_y", 0, 32);
  auto blur_d_s1_x = blur_d_s1_y->add_loop("blur_d_s1_x", 0, 32);
  auto blur_d_s1_dy = blur_d_s1_x->add_loop("blur_d_s1_dy", -2, 2);
  auto blur_d_s1_dx = blur_d_s1_dy->add_loop("blur_d_s1_dx", -2, 2);

//store is: blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) = (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 1), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 3), blur_d_s1_y) + blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 2), blur_d_s1_y)))))
  auto hcompute_blur_d_stencil_1 = blur_d_s1_dx->add_op("op_hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_function("hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_load("blur_d_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 1)", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 3)", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 2)", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_store("blur_d_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");

//consuming blur_d.stencil
////producing non_local_means_div.stencil
  auto non_local_means_div_s0_y = prg.add_loop("non_local_means_div_s0_y", 0, 32);
  auto non_local_means_div_s0_x = non_local_means_div_s0_y->add_loop("non_local_means_div_s0_x", 0, 32);

//store is: non_local_means_div.stencil(non_local_means_div_s0_x, non_local_means_div_s0_y) = (uint16)0
  auto hcompute_non_local_means_div_stencil = non_local_means_div_s0_x->add_op("op_hcompute_non_local_means_div_stencil");
  hcompute_non_local_means_div_stencil->add_function("hcompute_non_local_means_div_stencil");
  prg.buffer_port_widths["non_local_means_div_stencil"] = 16;
  hcompute_non_local_means_div_stencil->add_store("non_local_means_div_stencil", "non_local_means_div_s0_y", "non_local_means_div_s0_x");
  auto non_local_means_div_s1_y = prg.add_loop("non_local_means_div_s1_y", 0, 32);
  auto non_local_means_div_s1_x = non_local_means_div_s1_y->add_loop("non_local_means_div_s1_x", 0, 32);
  auto non_local_means_div_s1_s_dom_y = non_local_means_div_s1_x->add_loop("non_local_means_div_s1_s_dom_y", -2, 2);
  auto non_local_means_div_s1_s_dom_x = non_local_means_div_s1_s_dom_y->add_loop("non_local_means_div_s1_s_dom_x", -2, 2);

//store is: non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) = (non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) + (blur_d.stencil((non_local_means_div_s1_s_dom_x + 2), (non_local_means_div_s1_s_dom_y + 2), non_local_means_div_s1_x, non_local_means_div_s1_y)*(uint16)16))
  auto hcompute_non_local_means_div_stencil_1 = non_local_means_div_s1_s_dom_x->add_op("op_hcompute_non_local_means_div_stencil_1");
  hcompute_non_local_means_div_stencil_1->add_function("hcompute_non_local_means_div_stencil_1");
  hcompute_non_local_means_div_stencil_1->add_load("blur_d_stencil", "non_local_means_div_s1_y", "non_local_means_div_s1_x", "(non_local_means_div_s1_s_dom_y + 2)", "(non_local_means_div_s1_s_dom_x + 2)");
  hcompute_non_local_means_div_stencil_1->add_load("non_local_means_div_stencil", "non_local_means_div_s1_y", "non_local_means_div_s1_x");
  hcompute_non_local_means_div_stencil_1->add_store("non_local_means_div_stencil", "non_local_means_div_s1_y", "non_local_means_div_s1_x");

  auto do_s0_y = prg.add_loop("do_s0_y", 0, 32);
  auto do_s0_x = do_s0_y->add_loop("do_s0_x", 0, 32);

  auto hcompute_d_stencil_2 = do_s0_x->add_op("op_hcompute_d_stencil_2");
  hcompute_d_stencil_2->add_function("hcompute_d_stencil_2");
  hcompute_d_stencil_2->add_load("non_local_means_div_stencil", "(do_s0_y)", "(do_s0_x )");
  hcompute_d_stencil_2->add_store("blur_d_stencil_out", "(do_s0_y )", "(do_s0_x )");

  return prg;
}

prog nlmeans_simple() {
  prog prg;
  prg.compute_unit_file = "nlmeans_simple_compute.h";
  prg.name = "nlmeans_simple";

// Stencil<uint16_t, 3, 38, 38> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -4, 36);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -4, 36);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 4)", "(hw_input_global_wrapper_s0_x + 4)", "2");

//consuming hw_input_global_wrapper.stencil
////producing d.stencil
  auto d_s0_y = prg.add_loop("d_s0_y", -2, 33);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -2, 34);
  auto d_s0_dy = d_s0_x->add_loop("d_s0_dy", -2, 2);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -2, 2);

//store is: d.stencil((d_s0_dx + 2), (d_s0_dy + 2), (d_s0_x + 2), (d_s0_y + 2)) = (uint16)0
  auto hcompute_d_stencil = d_s0_dx->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_y + 2)", "(d_s0_x + 2)", "(d_s0_dy + 2)", "(d_s0_dx + 2)");
  auto d_s1_y = prg.add_loop("d_s1_y", -2, 33);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -2, 34);
  auto d_s1_dy = d_s1_x->add_loop("d_s1_dy", -2, 2);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -2, 2);

//store is: d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) = (((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) + (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + ((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
  auto hcompute_d_stencil_1 = d_s1_dx->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_y + 2)", "(d_s1_x + 2)", "(d_s1_dy + 2)", "(d_s1_dx + 2)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "1");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_y + 2)", "(d_s1_x + 2)", "(d_s1_dy + 2)", "(d_s1_dx + 2)");

//consuming d.stencil
////producing blur_d_y.stencil
  auto blur_d_y_s0_y = prg.add_loop("blur_d_y_s0_y", 0, 32);
  auto blur_d_y_s0_x = blur_d_y_s0_y->add_loop("blur_d_y_s0_x", -2, 34);
  auto blur_d_y_s0_dy = blur_d_y_s0_x->add_loop("blur_d_y_s0_dy", -2, 2);
  auto blur_d_y_s0_dx = blur_d_y_s0_dy->add_loop("blur_d_y_s0_dx", -2, 2);

//store is: blur_d_y.stencil((blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2), (blur_d_y_s0_x + 2), blur_d_y_s0_y) = (uint16)0
  auto hcompute_blur_d_y_stencil = blur_d_y_s0_dx->add_op("op_hcompute_blur_d_y_stencil");
  hcompute_blur_d_y_stencil->add_function("hcompute_blur_d_y_stencil");
  prg.buffer_port_widths["blur_d_y_stencil"] = 16;
  hcompute_blur_d_y_stencil->add_store("blur_d_y_stencil", "blur_d_y_s0_y", "(blur_d_y_s0_x + 2)", "(blur_d_y_s0_dy + 2)", "(blur_d_y_s0_dx + 2)");
  auto blur_d_y_s1_y = prg.add_loop("blur_d_y_s1_y", 0, 32);
  auto blur_d_y_s1_x = blur_d_y_s1_y->add_loop("blur_d_y_s1_x", -2, 34);
  auto blur_d_y_s1_dy = blur_d_y_s1_x->add_loop("blur_d_y_s1_dy", -2, 2);
  auto blur_d_y_s1_dx = blur_d_y_s1_dy->add_loop("blur_d_y_s1_dx", -2, 2);

//store is: blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) = (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1)) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3)) + d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2))))))
  auto hcompute_blur_d_y_stencil_1 = blur_d_y_s1_dx->add_op("op_hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_function("hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_load("blur_d_y_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 1)", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 3)", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 2)", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");
  hcompute_blur_d_y_stencil_1->add_store("blur_d_y_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)");

//consuming blur_d_y.stencil
////producing blur_d.stencil
  auto blur_d_s0_y = prg.add_loop("blur_d_s0_y", 0, 32);
  auto blur_d_s0_x = blur_d_s0_y->add_loop("blur_d_s0_x", 0, 32);
  auto blur_d_s0_dy = blur_d_s0_x->add_loop("blur_d_s0_dy", -2, 2);
  auto blur_d_s0_dx = blur_d_s0_dy->add_loop("blur_d_s0_dx", -2, 2);

//store is: blur_d.stencil((blur_d_s0_dx + 2), (blur_d_s0_dy + 2), blur_d_s0_x, blur_d_s0_y) = (uint16)0
  auto hcompute_blur_d_stencil = blur_d_s0_dx->add_op("op_hcompute_blur_d_stencil");
  hcompute_blur_d_stencil->add_function("hcompute_blur_d_stencil");
  prg.buffer_port_widths["blur_d_stencil"] = 16;
  hcompute_blur_d_stencil->add_store("blur_d_stencil", "blur_d_s0_y", "blur_d_s0_x", "(blur_d_s0_dy + 2)", "(blur_d_s0_dx + 2)");
  auto blur_d_s1_y = prg.add_loop("blur_d_s1_y", 0, 32);
  auto blur_d_s1_x = blur_d_s1_y->add_loop("blur_d_s1_x", 0, 32);
  auto blur_d_s1_dy = blur_d_s1_x->add_loop("blur_d_s1_dy", -2, 2);
  auto blur_d_s1_dx = blur_d_s1_dy->add_loop("blur_d_s1_dx", -2, 2);

//store is: blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) = (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 1), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 3), blur_d_s1_y) + blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 2), blur_d_s1_y)))))
  auto hcompute_blur_d_stencil_1 = blur_d_s1_dx->add_op("op_hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_function("hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_load("blur_d_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 1)", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 3)", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 2)", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");
  hcompute_blur_d_stencil_1->add_store("blur_d_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)");

//consuming blur_d.stencil
////producing non_local_means_div.stencil
  auto non_local_means_div_s0_y = prg.add_loop("non_local_means_div_s0_y", 0, 32);
  auto non_local_means_div_s0_x = non_local_means_div_s0_y->add_loop("non_local_means_div_s0_x", 0, 32);

//store is: non_local_means_div.stencil(non_local_means_div_s0_x, non_local_means_div_s0_y) = (uint16)0
  auto hcompute_non_local_means_div_stencil = non_local_means_div_s0_x->add_op("op_hcompute_non_local_means_div_stencil");
  hcompute_non_local_means_div_stencil->add_function("hcompute_non_local_means_div_stencil");
  prg.buffer_port_widths["non_local_means_div_stencil"] = 16;
  hcompute_non_local_means_div_stencil->add_store("non_local_means_div_stencil", "non_local_means_div_s0_y", "non_local_means_div_s0_x");
  auto non_local_means_div_s1_y = prg.add_loop("non_local_means_div_s1_y", 0, 32);
  auto non_local_means_div_s1_x = non_local_means_div_s1_y->add_loop("non_local_means_div_s1_x", 0, 32);
  auto non_local_means_div_s1_s_dom_y = non_local_means_div_s1_x->add_loop("non_local_means_div_s1_s_dom_y", -2, 2);
  auto non_local_means_div_s1_s_dom_x = non_local_means_div_s1_s_dom_y->add_loop("non_local_means_div_s1_s_dom_x", -2, 2);

//store is: non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) = (non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) + (blur_d.stencil((non_local_means_div_s1_s_dom_x + 2), (non_local_means_div_s1_s_dom_y + 2), non_local_means_div_s1_x, non_local_means_div_s1_y)*(uint16)16))
  auto hcompute_non_local_means_div_stencil_1 = non_local_means_div_s1_s_dom_x->add_op("op_hcompute_non_local_means_div_stencil_1");
  hcompute_non_local_means_div_stencil_1->add_function("hcompute_non_local_means_div_stencil_1");
  hcompute_non_local_means_div_stencil_1->add_load("blur_d_stencil", "non_local_means_div_s1_y", "non_local_means_div_s1_x", "(non_local_means_div_s1_s_dom_y + 2)", "(non_local_means_div_s1_s_dom_x + 2)");
  hcompute_non_local_means_div_stencil_1->add_load("non_local_means_div_stencil", "non_local_means_div_s1_y", "non_local_means_div_s1_x");
  hcompute_non_local_means_div_stencil_1->add_store("non_local_means_div_stencil", "non_local_means_div_s1_y", "non_local_means_div_s1_x");

//consuming non_local_means_div.stencil
////producing non_local_means_sum.stencil
  auto non_local_means_sum_s0_y = prg.add_loop("non_local_means_sum_s0_y", 0, 32);
  auto non_local_means_sum_s0_x = non_local_means_sum_s0_y->add_loop("non_local_means_sum_s0_x", 0, 32);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = (int16)0
  auto hcompute_non_local_means_sum_stencil = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil");
  hcompute_non_local_means_sum_stencil->add_function("hcompute_non_local_means_sum_stencil");
  prg.buffer_port_widths["non_local_means_sum_stencil"] = 16;
  hcompute_non_local_means_sum_stencil->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");
  auto non_local_means_sum_s0_y_1 = prg.add_loop("non_local_means_sum_s0_y_1", 0, 32);
  auto non_local_means_sum_s0_x_1 = non_local_means_sum_s0_y_1->add_loop("non_local_means_sum_s0_x_1", 0, 32);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_1, non_local_means_sum_s0_y_1, 1) = (int16)0
  auto hcompute_non_local_means_sum_stencil_1 = non_local_means_sum_s0_x_1->add_op("op_hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_function("hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s0_y_1", "non_local_means_sum_s0_x_1");
  auto non_local_means_sum_s0_y_2 = prg.add_loop("non_local_means_sum_s0_y_2", 0, 32);
  auto non_local_means_sum_s0_x_2 = non_local_means_sum_s0_y_2->add_loop("non_local_means_sum_s0_x_2", 0, 32);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_2, non_local_means_sum_s0_y_2, 2) = (int16)0
  auto hcompute_non_local_means_sum_stencil_2 = non_local_means_sum_s0_x_2->add_op("op_hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_function("hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s0_y_2", "non_local_means_sum_s0_x_2");
  auto non_local_means_sum_s1_y = prg.add_loop("non_local_means_sum_s1_y", 0, 32);
  auto non_local_means_sum_s1_x = non_local_means_sum_s1_y->add_loop("non_local_means_sum_s1_x", 0, 32);
  auto non_local_means_sum_s1_s_dom_y = non_local_means_sum_s1_x->add_loop("non_local_means_sum_s1_s_dom_y", -2, 2);
  auto non_local_means_sum_s1_s_dom_x = non_local_means_sum_s1_s_dom_y->add_loop("non_local_means_sum_s1_s_dom_x", -2, 2);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x + 2), (non_local_means_sum_s1_s_dom_y + 2), non_local_means_sum_s1_x, non_local_means_sum_s1_y)*hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 4), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 4)))*(uint16)16)))
  auto hcompute_non_local_means_sum_stencil_3 = non_local_means_sum_s1_s_dom_x->add_op("op_hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_function("hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "(non_local_means_sum_s1_s_dom_y + 2)", "(non_local_means_sum_s1_s_dom_x + 2)");
  hcompute_non_local_means_sum_stencil_3->add_load("hw_input_global_wrapper_stencil", "((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 4)", "((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 2)", "0");
  hcompute_non_local_means_sum_stencil_3->add_load("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_3->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  auto non_local_means_sum_s1_y_1 = prg.add_loop("non_local_means_sum_s1_y_1", 0, 32);
  auto non_local_means_sum_s1_x_1 = non_local_means_sum_s1_y_1->add_loop("non_local_means_sum_s1_x_1", 0, 32);
  auto non_local_means_sum_s1_s_dom_y_1 = non_local_means_sum_s1_x_1->add_loop("non_local_means_sum_s1_s_dom_y_1", -2, 2);
  auto non_local_means_sum_s1_s_dom_x_1 = non_local_means_sum_s1_s_dom_y_1->add_loop("non_local_means_sum_s1_s_dom_x_1", -2, 2);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x_1 + 2), (non_local_means_sum_s1_s_dom_y_1 + 2), non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1)*hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x_1 + non_local_means_sum_s1_x_1) + 4), ((non_local_means_sum_s1_s_dom_y_1 + non_local_means_sum_s1_y_1) + 4)))*(uint16)16)))
  auto hcompute_non_local_means_sum_stencil_4 = non_local_means_sum_s1_s_dom_x_1->add_op("op_hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_function("hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y_1", "non_local_means_sum_s1_x_1", "(non_local_means_sum_s1_s_dom_y_1 + 2)", "(non_local_means_sum_s1_s_dom_x_1 + 2)");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "((non_local_means_sum_s1_s_dom_y_1 + non_local_means_sum_s1_y_1) + 4)", "((non_local_means_sum_s1_s_dom_x_1 + non_local_means_sum_s1_x_1) + 2)", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y_1", "non_local_means_sum_s1_x_1");
  hcompute_non_local_means_sum_stencil_4->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y_1", "non_local_means_sum_s1_x_1");
  auto non_local_means_sum_s1_y_2 = prg.add_loop("non_local_means_sum_s1_y_2", 0, 32);
  auto non_local_means_sum_s1_x_2 = non_local_means_sum_s1_y_2->add_loop("non_local_means_sum_s1_x_2", 0, 32);
  auto non_local_means_sum_s1_s_dom_y_2 = non_local_means_sum_s1_x_2->add_loop("non_local_means_sum_s1_s_dom_y_2", -2, 2);
  auto non_local_means_sum_s1_s_dom_x_2 = non_local_means_sum_s1_s_dom_y_2->add_loop("non_local_means_sum_s1_s_dom_x_2", -2, 2);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x_2 + 2), (non_local_means_sum_s1_s_dom_y_2 + 2), non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2)*hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x_2 + non_local_means_sum_s1_x_2) + 4), ((non_local_means_sum_s1_s_dom_y_2 + non_local_means_sum_s1_y_2) + 4)))*(uint16)16)))
  auto hcompute_non_local_means_sum_stencil_5 = non_local_means_sum_s1_s_dom_x_2->add_op("op_hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_function("hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y_2", "non_local_means_sum_s1_x_2", "(non_local_means_sum_s1_s_dom_y_2 + 2)", "(non_local_means_sum_s1_s_dom_x_2 + 2)");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "((non_local_means_sum_s1_s_dom_y_2 + non_local_means_sum_s1_y_2) + 4)", "((non_local_means_sum_s1_s_dom_x_2 + non_local_means_sum_s1_x_2) + 2)", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y_2", "non_local_means_sum_s1_x_2");
  hcompute_non_local_means_sum_stencil_5->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y_2", "non_local_means_sum_s1_x_2");

//consuming non_local_means_sum.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)*int16(non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))), (int16)255), (int16)0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("non_local_means_div_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)*int16(non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))), (int16)255), (int16)0))
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("non_local_means_div_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)*int16(non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))), (int16)255), (int16)0))
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("non_local_means_div_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "2", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}


// empty

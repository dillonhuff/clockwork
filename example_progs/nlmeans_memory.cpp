#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog nlmeans() {
  prog prg;
  prg.compute_unit_file = "nlmeans_compute.h";
  prg.name = "nlmeans";

// Stencil<uint16_t, 3, 74, 74> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<bfloat16_t, 3, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -6, 68);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -6, 68);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "2");

//consuming hw_input_global_wrapper.stencil
////producing d.stencil
  auto d_s0_dy = prg.add_loop("d_s0_dy", -3, 4);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -3, 4);
  auto d_s0_y = d_s0_dx->add_loop("d_s0_y", -3, 65);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -3, 65);

//store is: d.stencil((d_s0_x + 3), (d_s0_y + 3), (d_s0_dx + 3), (d_s0_dy + 3)) = 0.000000h
  auto hcompute_d_stencil = d_s0_x->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_dy + 3)", "(d_s0_dx + 3)", "(d_s0_y + 3)", "(d_s0_x + 3)");
  auto d_s1_dy = prg.add_loop("d_s1_dy", -3, 4);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -3, 4);
  auto d_s1_y = d_s1_dx->add_loop("d_s1_y", -3, 65);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -3, 65);

//store is: d.stencil((d_s1_x + 3), (d_s1_y + 3), (d_s1_dx + 3), (d_s1_dy + 3)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (d.stencil((d_s1_x + 3), (d_s1_y + 3), (d_s1_dx + 3), (d_s1_dy + 3)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))))))
  auto hcompute_d_stencil_1 = d_s1_x->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_dy + 3)", "(d_s1_dx + 3)", "(d_s1_y + 3)", "(d_s1_x + 3)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "0");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_dy + 3)", "(d_s1_dx + 3)", "(d_s1_y + 3)", "(d_s1_x + 3)");

//consuming d.stencil
////producing blur_d_y.stencil
  auto blur_d_y_s0_dy = prg.add_loop("blur_d_y_s0_dy", -3, 4);
  auto blur_d_y_s0_dx = blur_d_y_s0_dy->add_loop("blur_d_y_s0_dx", -3, 4);
  auto blur_d_y_s0_y = blur_d_y_s0_dx->add_loop("blur_d_y_s0_y", 0, 62);
  auto blur_d_y_s0_x = blur_d_y_s0_y->add_loop("blur_d_y_s0_x", -3, 65);

//store is: blur_d_y.stencil((blur_d_y_s0_x + 3), blur_d_y_s0_y, (blur_d_y_s0_dx + 3), (blur_d_y_s0_dy + 3)) = 0.000000h
  auto hcompute_blur_d_y_stencil = blur_d_y_s0_x->add_op("op_hcompute_blur_d_y_stencil");
  hcompute_blur_d_y_stencil->add_function("hcompute_blur_d_y_stencil");
  prg.buffer_port_widths["blur_d_y_stencil"] = 16;
  hcompute_blur_d_y_stencil->add_store("blur_d_y_stencil", "(blur_d_y_s0_dy + 3)", "(blur_d_y_s0_dx + 3)", "blur_d_y_s0_y", "(blur_d_y_s0_x + 3)");
  auto blur_d_y_s1_dy = prg.add_loop("blur_d_y_s1_dy", -3, 4);
  auto blur_d_y_s1_dx = blur_d_y_s1_dy->add_loop("blur_d_y_s1_dx", -3, 4);
  auto blur_d_y_s1_y = blur_d_y_s1_dx->add_loop("blur_d_y_s1_y", 0, 62);
  auto blur_d_y_s1_x = blur_d_y_s1_y->add_loop("blur_d_y_s1_x", -3, 65);

//store is: blur_d_y.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) = (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 6), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 5), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 4), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 3), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 2), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 1), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (blur_d_y.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + d.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)))))))))
  auto hcompute_blur_d_y_stencil_1 = blur_d_y_s1_x->add_op("op_hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_function("hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_load("blur_d_y_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 6)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 5)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 4)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 3)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 2)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 1)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_store("blur_d_y_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)");

//consuming blur_d_y.stencil
////producing blur_d.stencil
  auto blur_d_s0_dy = prg.add_loop("blur_d_s0_dy", -3, 4);
  auto blur_d_s0_dx = blur_d_s0_dy->add_loop("blur_d_s0_dx", -3, 4);
  auto blur_d_s0_y = blur_d_s0_dx->add_loop("blur_d_s0_y", 0, 62);
  auto blur_d_s0_x = blur_d_s0_y->add_loop("blur_d_s0_x", 0, 62);

//store is: blur_d.stencil(blur_d_s0_x, blur_d_s0_y, (blur_d_s0_dx + 3), (blur_d_s0_dy + 3)) = 0.000000h
  auto hcompute_blur_d_stencil = blur_d_s0_x->add_op("op_hcompute_blur_d_stencil");
  hcompute_blur_d_stencil->add_function("hcompute_blur_d_stencil");
  prg.buffer_port_widths["blur_d_stencil"] = 16;
  hcompute_blur_d_stencil->add_store("blur_d_stencil", "(blur_d_s0_dy + 3)", "(blur_d_s0_dx + 3)", "blur_d_s0_y", "blur_d_s0_x");
  auto blur_d_s1_dy = prg.add_loop("blur_d_s1_dy", -3, 4);
  auto blur_d_s1_dx = blur_d_s1_dy->add_loop("blur_d_s1_dx", -3, 4);
  auto blur_d_s1_y = blur_d_s1_dx->add_loop("blur_d_s1_y", 0, 62);
  auto blur_d_s1_x = blur_d_s1_y->add_loop("blur_d_s1_x", 0, 62);

//store is: blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) = (blur_d_y.stencil((blur_d_s1_x + 6), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 5), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 4), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 3), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 2), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 1), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + blur_d_y.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)))))))))
  auto hcompute_blur_d_stencil_1 = blur_d_s1_x->add_op("op_hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_function("hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_load("blur_d_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "blur_d_s1_x");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 6)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 5)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 4)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 1)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "blur_d_s1_x");
  hcompute_blur_d_stencil_1->add_store("blur_d_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "blur_d_s1_x");

//consuming blur_d.stencil
////producing non_local_means_sum.stencil
  auto non_local_means_sum_s0_y = prg.add_loop("non_local_means_sum_s0_y", 0, 62);
  auto non_local_means_sum_s0_x = non_local_means_sum_s0_y->add_loop("non_local_means_sum_s0_x", 0, 62);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
  auto hcompute_non_local_means_sum_stencil = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil");
  hcompute_non_local_means_sum_stencil->add_function("hcompute_non_local_means_sum_stencil");
  prg.buffer_port_widths["non_local_means_sum_stencil"] = 16;
  hcompute_non_local_means_sum_stencil->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 1) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_1 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_function("hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 2) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_2 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_function("hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 3) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_3 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_function("hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");
  auto non_local_means_sum_s1_s_dom_y = prg.add_loop("non_local_means_sum_s1_s_dom_y", -3, 4);
  auto non_local_means_sum_s1_s_dom_x = non_local_means_sum_s1_s_dom_y->add_loop("non_local_means_sum_s1_s_dom_x", -3, 4);
  auto non_local_means_sum_s1_y = non_local_means_sum_s1_s_dom_x->add_loop("non_local_means_sum_s1_y", 0, 62);
  auto non_local_means_sum_s1_x = non_local_means_sum_s1_y->add_loop("non_local_means_sum_s1_x", 0, 62);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h))*hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6))))
  auto hcompute_non_local_means_sum_stencil_4 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_function("hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "(non_local_means_sum_s1_s_dom_y + 3)", "(non_local_means_sum_s1_s_dom_x + 3)", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6)", "((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h))*hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6))))
  auto hcompute_non_local_means_sum_stencil_5 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_function("hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "(non_local_means_sum_s1_s_dom_y + 3)", "(non_local_means_sum_s1_s_dom_x + 3)", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6)", "((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h))*hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6))))
  auto hcompute_non_local_means_sum_stencil_6 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_function("hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "(non_local_means_sum_s1_s_dom_y + 3)", "(non_local_means_sum_s1_s_dom_x + 3)", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6)", "((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) + exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h)))
  auto hcompute_non_local_means_sum_stencil_7 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_function("hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "(non_local_means_sum_s1_s_dom_y + 3)", "(non_local_means_sum_s1_s_dom_x + 3)", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//consuming non_local_means_sum.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "2", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}

prog nlmeans_unroll() {
  prog prg;
  prg.compute_unit_file = "nlmeans_unroll_compute.h";
  prg.name = "nlmeans_unroll";

// Stencil<uint16_t, 3, 74, 74> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<bfloat16_t, 3, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -6, 68);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -6, 68);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "2");

//consuming hw_input_global_wrapper.stencil
////producing d.stencil
  auto d_s0_dy = prg.add_loop("d_s0_dy", -3, 4);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -3, 4);
  auto d_s0_y = d_s0_dx->add_loop("d_s0_y", -3, 65);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -3, 65);

//store is: d.stencil((d_s0_x + 3), (d_s0_y + 3), (d_s0_dx + 3), (d_s0_dy + 3)) = 0.000000h
  auto hcompute_d_stencil = d_s0_x->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_dy + 3)", "(d_s0_dx + 3)", "(d_s0_y + 3)", "(d_s0_x + 3)");
  auto d_s1_dy = prg.add_loop("d_s1_dy", -3, 4);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -3, 4);
  auto d_s1_y = d_s1_dx->add_loop("d_s1_y", -3, 65);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -3, 65);

//store is: d.stencil((d_s1_x + 3), (d_s1_y + 3), (d_s1_dx + 3), (d_s1_dy + 3)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (d.stencil((d_s1_x + 3), (d_s1_y + 3), (d_s1_dx + 3), (d_s1_dy + 3)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))))))
  auto hcompute_d_stencil_1 = d_s1_x->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_dy + 3)", "(d_s1_dx + 3)", "(d_s1_y + 3)", "(d_s1_x + 3)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "0");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_dy + 3)", "(d_s1_dx + 3)", "(d_s1_y + 3)", "(d_s1_x + 3)");

//consuming d.stencil
////producing blur_d_y.stencil
  auto blur_d_y_s0_dy = prg.add_loop("blur_d_y_s0_dy", -3, 4);
  auto blur_d_y_s0_dx = blur_d_y_s0_dy->add_loop("blur_d_y_s0_dx", -3, 4);
  auto blur_d_y_s0_y = blur_d_y_s0_dx->add_loop("blur_d_y_s0_y", 0, 62);
  auto blur_d_y_s0_x = blur_d_y_s0_y->add_loop("blur_d_y_s0_x", -3, 65);

//store is: blur_d_y.stencil((blur_d_y_s0_x + 3), blur_d_y_s0_y, (blur_d_y_s0_dx + 3), (blur_d_y_s0_dy + 3)) = 0.000000h
  auto hcompute_blur_d_y_stencil = blur_d_y_s0_x->add_op("op_hcompute_blur_d_y_stencil");
  hcompute_blur_d_y_stencil->add_function("hcompute_blur_d_y_stencil");
  prg.buffer_port_widths["blur_d_y_stencil"] = 16;
  hcompute_blur_d_y_stencil->add_store("blur_d_y_stencil", "(blur_d_y_s0_dy + 3)", "(blur_d_y_s0_dx + 3)", "blur_d_y_s0_y", "(blur_d_y_s0_x + 3)");
  auto blur_d_y_s1_dy = prg.add_loop("blur_d_y_s1_dy", -3, 4);
  auto blur_d_y_s1_dx = blur_d_y_s1_dy->add_loop("blur_d_y_s1_dx", -3, 4);
  auto blur_d_y_s1_y = blur_d_y_s1_dx->add_loop("blur_d_y_s1_y", 0, 62);
  auto blur_d_y_s1_x = blur_d_y_s1_y->add_loop("blur_d_y_s1_x", -3, 65);

//store is: blur_d_y.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) = (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 6), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 5), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 4), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 3), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 2), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 1), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (blur_d_y.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + d.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)))))))))
  auto hcompute_blur_d_y_stencil_1 = blur_d_y_s1_x->add_op("op_hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_function("hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_load("blur_d_y_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 6)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 5)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 4)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 3)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 2)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "(blur_d_y_s1_y + 1)", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)");
  hcompute_blur_d_y_stencil_1->add_store("blur_d_y_stencil", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)");

//consuming blur_d_y.stencil
////producing blur_d.stencil
  auto blur_d_s0_dy = prg.add_loop("blur_d_s0_dy", -3, 4);
  auto blur_d_s0_dx = blur_d_s0_dy->add_loop("blur_d_s0_dx", -3, 4);
  auto blur_d_s0_y = blur_d_s0_dx->add_loop("blur_d_s0_y", 0, 62);
  auto blur_d_s0_x = blur_d_s0_y->add_loop("blur_d_s0_x", 0, 62);

//store is: blur_d.stencil(blur_d_s0_x, blur_d_s0_y, (blur_d_s0_dx + 3), (blur_d_s0_dy + 3)) = 0.000000h
  auto hcompute_blur_d_stencil = blur_d_s0_x->add_op("op_hcompute_blur_d_stencil");
  hcompute_blur_d_stencil->add_function("hcompute_blur_d_stencil");
  prg.buffer_port_widths["blur_d_stencil"] = 16;
  hcompute_blur_d_stencil->add_store("blur_d_stencil", "(blur_d_s0_dy + 3)", "(blur_d_s0_dx + 3)", "blur_d_s0_y", "blur_d_s0_x");
  auto blur_d_s1_dy = prg.add_loop("blur_d_s1_dy", -3, 4);
  auto blur_d_s1_dx = blur_d_s1_dy->add_loop("blur_d_s1_dx", -3, 4);
  auto blur_d_s1_y = blur_d_s1_dx->add_loop("blur_d_s1_y", 0, 62);
  auto blur_d_s1_x = blur_d_s1_y->add_loop("blur_d_s1_x", 0, 62);

//store is: blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) = (blur_d_y.stencil((blur_d_s1_x + 6), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 5), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 4), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 3), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 2), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 1), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + blur_d_y.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)))))))))
  auto hcompute_blur_d_stencil_1 = blur_d_s1_x->add_op("op_hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_function("hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_load("blur_d_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "blur_d_s1_x");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 6)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 5)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 4)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "(blur_d_s1_x + 1)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "blur_d_s1_x");
  hcompute_blur_d_stencil_1->add_store("blur_d_stencil", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)", "blur_d_s1_y", "blur_d_s1_x");

//consuming blur_d.stencil
////producing non_local_means_sum.stencil
  auto non_local_means_sum_s0_y = prg.add_loop("non_local_means_sum_s0_y", 0, 62);
  auto non_local_means_sum_s0_x = non_local_means_sum_s0_y->add_loop("non_local_means_sum_s0_x", 0, 62);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
  auto hcompute_non_local_means_sum_stencil = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil");
  hcompute_non_local_means_sum_stencil->add_function("hcompute_non_local_means_sum_stencil");
  prg.buffer_port_widths["non_local_means_sum_stencil"] = 16;
  hcompute_non_local_means_sum_stencil->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 1) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_1 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_function("hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 2) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_2 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_function("hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 3) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_3 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_function("hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");
  auto non_local_means_sum_s1_y = prg.add_loop("non_local_means_sum_s1_y", 0, 62);
  auto non_local_means_sum_s1_x = non_local_means_sum_s1_y->add_loop("non_local_means_sum_s1_x", 0, 62);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 6)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 5)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 3)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 2)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 1)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 3))) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 0)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 3))))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_4 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_function("hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "3", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "2", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "1", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "0", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "6", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "5", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) = ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 6)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 5)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 3)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 2)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 1)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 3))) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 0)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 3))))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_5 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_function("hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "6", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "5", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "3", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "2", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "1", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "0", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) = ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 6)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 5)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 3)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 2)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 1)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 3))) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 0)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 3))))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_6 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_function("hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "6", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "5", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "3", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "2", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "1", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "0", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) = (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 6)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 5)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 6, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 5, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 0)*-1.414062h)) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) + exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 0)*-1.414062h)))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_7 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_function("hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "6", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "5", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "6", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "5", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//consuming non_local_means_sum.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "2", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}

prog nlmeans_small() {
  prog prg;
  prg.compute_unit_file = "nlmeans_small_compute.h";
  prg.name = "nlmeans_small";

// Stencil<uint16_t, 3, 40, 40> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<bfloat16_t, 3, 32, 32> &hw_output_stencil = arg_1;
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
  auto d_s0_dy = prg.add_loop("d_s0_dy", -2, 3);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -2, 3);
  auto d_s0_y = d_s0_dx->add_loop("d_s0_y", -2, 34);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -2, 34);

//store is: d.stencil((d_s0_x + 2), (d_s0_y + 2), (d_s0_dx + 2), (d_s0_dy + 2)) = 0.000000h
  auto hcompute_d_stencil = d_s0_x->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_dy + 2)", "(d_s0_dx + 2)", "(d_s0_y + 2)", "(d_s0_x + 2)");
  auto d_s1_dy = prg.add_loop("d_s1_dy", -2, 3);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -2, 3);
  auto d_s1_y = d_s1_dx->add_loop("d_s1_y", -2, 34);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -2, 34);

//store is: d.stencil((d_s1_x + 2), (d_s1_y + 2), (d_s1_dx + 2), (d_s1_dy + 2)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_x + 2), (d_s1_y + 2), (d_s1_dx + 2), (d_s1_dy + 2)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
  auto hcompute_d_stencil_1 = d_s1_x->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_dy + 2)", "(d_s1_dx + 2)", "(d_s1_y + 2)", "(d_s1_x + 2)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 4)", "(d_s1_x + 4)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 4)", "((d_s1_dx + d_s1_x) + 4)", "0");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_dy + 2)", "(d_s1_dx + 2)", "(d_s1_y + 2)", "(d_s1_x + 2)");

//consuming d.stencil
////producing blur_d_y.stencil
  auto blur_d_y_s0_dy = prg.add_loop("blur_d_y_s0_dy", -2, 3);
  auto blur_d_y_s0_dx = blur_d_y_s0_dy->add_loop("blur_d_y_s0_dx", -2, 3);
  auto blur_d_y_s0_y = blur_d_y_s0_dx->add_loop("blur_d_y_s0_y", 0, 32);
  auto blur_d_y_s0_x = blur_d_y_s0_y->add_loop("blur_d_y_s0_x", -2, 34);

//store is: blur_d_y.stencil((blur_d_y_s0_x + 2), blur_d_y_s0_y, (blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2)) = 0.000000h
  auto hcompute_blur_d_y_stencil = blur_d_y_s0_x->add_op("op_hcompute_blur_d_y_stencil");
  hcompute_blur_d_y_stencil->add_function("hcompute_blur_d_y_stencil");
  prg.buffer_port_widths["blur_d_y_stencil"] = 16;
  hcompute_blur_d_y_stencil->add_store("blur_d_y_stencil", "(blur_d_y_s0_dy + 2)", "(blur_d_y_s0_dx + 2)", "blur_d_y_s0_y", "(blur_d_y_s0_x + 2)");
  auto blur_d_y_s1_dy = prg.add_loop("blur_d_y_s1_dy", -2, 3);
  auto blur_d_y_s1_dx = blur_d_y_s1_dy->add_loop("blur_d_y_s1_dx", -2, 3);
  auto blur_d_y_s1_y = blur_d_y_s1_dx->add_loop("blur_d_y_s1_y", 0, 32);
  auto blur_d_y_s1_x = blur_d_y_s1_y->add_loop("blur_d_y_s1_x", -2, 34);

//store is: blur_d_y.stencil((blur_d_y_s1_x + 2), blur_d_y_s1_y, (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) = (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 4), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (blur_d_y.stencil((blur_d_y_s1_x + 2), blur_d_y_s1_y, (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + d.stencil((blur_d_y_s1_x + 2), blur_d_y_s1_y, (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)))))))
  auto hcompute_blur_d_y_stencil_1 = blur_d_y_s1_x->add_op("op_hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_function("hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_load("blur_d_y_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "(blur_d_y_s1_y + 4)", "(blur_d_y_s1_x + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "(blur_d_y_s1_y + 3)", "(blur_d_y_s1_x + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "(blur_d_y_s1_y + 2)", "(blur_d_y_s1_x + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "(blur_d_y_s1_y + 1)", "(blur_d_y_s1_x + 2)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)");
  hcompute_blur_d_y_stencil_1->add_store("blur_d_y_stencil", "(blur_d_y_s1_dy + 2)", "(blur_d_y_s1_dx + 2)", "blur_d_y_s1_y", "(blur_d_y_s1_x + 2)");

//consuming blur_d_y.stencil
////producing blur_d.stencil
  auto blur_d_s0_dy = prg.add_loop("blur_d_s0_dy", -2, 3);
  auto blur_d_s0_dx = blur_d_s0_dy->add_loop("blur_d_s0_dx", -2, 3);
  auto blur_d_s0_y = blur_d_s0_dx->add_loop("blur_d_s0_y", 0, 32);
  auto blur_d_s0_x = blur_d_s0_y->add_loop("blur_d_s0_x", 0, 32);

//store is: blur_d.stencil(blur_d_s0_x, blur_d_s0_y, (blur_d_s0_dx + 2), (blur_d_s0_dy + 2)) = 0.000000h
  auto hcompute_blur_d_stencil = blur_d_s0_x->add_op("op_hcompute_blur_d_stencil");
  hcompute_blur_d_stencil->add_function("hcompute_blur_d_stencil");
  prg.buffer_port_widths["blur_d_stencil"] = 16;
  hcompute_blur_d_stencil->add_store("blur_d_stencil", "(blur_d_s0_dy + 2)", "(blur_d_s0_dx + 2)", "blur_d_s0_y", "blur_d_s0_x");
  auto blur_d_s1_dy = prg.add_loop("blur_d_s1_dy", -2, 3);
  auto blur_d_s1_dx = blur_d_s1_dy->add_loop("blur_d_s1_dx", -2, 3);
  auto blur_d_s1_y = blur_d_s1_dx->add_loop("blur_d_s1_y", 0, 32);
  auto blur_d_s1_x = blur_d_s1_y->add_loop("blur_d_s1_x", 0, 32);

//store is: blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) = (blur_d_y.stencil((blur_d_s1_x + 4), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d_y.stencil((blur_d_s1_x + 3), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d_y.stencil((blur_d_s1_x + 2), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d_y.stencil((blur_d_s1_x + 1), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + blur_d_y.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)))))))
  auto hcompute_blur_d_stencil_1 = blur_d_s1_x->add_op("op_hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_function("hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_load("blur_d_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "blur_d_s1_x");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "(blur_d_s1_x + 4)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "(blur_d_s1_x + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "(blur_d_s1_x + 2)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "(blur_d_s1_x + 1)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "blur_d_s1_x");
  hcompute_blur_d_stencil_1->add_store("blur_d_stencil", "(blur_d_s1_dy + 2)", "(blur_d_s1_dx + 2)", "blur_d_s1_y", "blur_d_s1_x");

//consuming blur_d.stencil
////producing non_local_means_sum.stencil
  auto non_local_means_sum_s0_y = prg.add_loop("non_local_means_sum_s0_y", 0, 32);
  auto non_local_means_sum_s0_x = non_local_means_sum_s0_y->add_loop("non_local_means_sum_s0_x", 0, 32);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
  auto hcompute_non_local_means_sum_stencil = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil");
  hcompute_non_local_means_sum_stencil->add_function("hcompute_non_local_means_sum_stencil");
  prg.buffer_port_widths["non_local_means_sum_stencil"] = 16;
  hcompute_non_local_means_sum_stencil->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 1) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_1 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_function("hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 2) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_2 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_function("hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 3) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_3 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_function("hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");
  auto non_local_means_sum_s1_y = prg.add_loop("non_local_means_sum_s1_y", 0, 32);
  auto non_local_means_sum_s1_x = non_local_means_sum_s1_y->add_loop("non_local_means_sum_s1_x", 0, 32);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))))
  auto hcompute_non_local_means_sum_stencil_4 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_function("hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))))
  auto hcompute_non_local_means_sum_stencil_5 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_function("hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))))
  auto hcompute_non_local_means_sum_stencil_6 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_function("hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) = (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 0)*-1.414062h)) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) + exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 0)*-1.414062h)))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_7 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_function("hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "3", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "2", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "1", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "0", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "4", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "4", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_load("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//consuming non_local_means_sum.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "2", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}

prog nlmeans_unroll_reorder() {
  prog prg;
  prg.compute_unit_file = "nlmeans_unroll_compute.h";
  prg.name = "nlmeans_unroll_reorder";

// Stencil<uint16_t, 3, 74, 74> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<bfloat16_t, 3, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -6, 68);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -6, 68);

//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "0");

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "1");

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 6)", "(hw_input_global_wrapper_s0_x + 6)", "2");

//consuming hw_input_global_wrapper.stencil
////producing d.stencil
  auto d_s0_y = prg.add_loop("d_s0_y", -3, 65);
  auto d_s0_x = d_s0_y->add_loop("d_s0_x", -3, 65);
  auto d_s0_dy = d_s0_x->add_loop("d_s0_dy", -3, 4);
  auto d_s0_dx = d_s0_dy->add_loop("d_s0_dx", -3, 4);

//store is: d.stencil((d_s0_dx + 3), (d_s0_dy + 3), (d_s0_x + 3), (d_s0_y + 3)) = 0.000000h
  auto hcompute_d_stencil = d_s0_dx->add_op("op_hcompute_d_stencil");
  hcompute_d_stencil->add_function("hcompute_d_stencil");
  prg.buffer_port_widths["d_stencil"] = 16;
  hcompute_d_stencil->add_store("d_stencil", "(d_s0_y + 3)", "(d_s0_x + 3)", "(d_s0_dy + 3)", "(d_s0_dx + 3)");
  auto d_s1_y = prg.add_loop("d_s1_y", -3, 65);
  auto d_s1_x = d_s1_y->add_loop("d_s1_x", -3, 65);
  auto d_s1_dy = d_s1_x->add_loop("d_s1_dy", -3, 4);
  auto d_s1_dx = d_s1_dy->add_loop("d_s1_dx", -3, 4);

//store is: d.stencil((d_s1_dx + 3), (d_s1_dy + 3), (d_s1_x + 3), (d_s1_y + 3)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (d.stencil((d_s1_dx + 3), (d_s1_dy + 3), (d_s1_x + 3), (d_s1_y + 3)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))))))
  auto hcompute_d_stencil_1 = d_s1_dx->add_op("op_hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_function("hcompute_d_stencil_1");
  hcompute_d_stencil_1->add_load("d_stencil", "(d_s1_y + 3)", "(d_s1_x + 3)", "(d_s1_dy + 3)", "(d_s1_dx + 3)");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "2");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "1");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "(d_s1_y + 6)", "(d_s1_x + 6)", "0");
  hcompute_d_stencil_1->add_load("hw_input_global_wrapper_stencil", "((d_s1_dy + d_s1_y) + 6)", "((d_s1_dx + d_s1_x) + 6)", "0");
  hcompute_d_stencil_1->add_store("d_stencil", "(d_s1_y + 3)", "(d_s1_x + 3)", "(d_s1_dy + 3)", "(d_s1_dx + 3)");

//consuming d.stencil
////producing blur_d_y.stencil
  auto blur_d_y_s0_y = prg.add_loop("blur_d_y_s0_y", 0, 62);
  auto blur_d_y_s0_x = blur_d_y_s0_y->add_loop("blur_d_y_s0_x", -3, 65);
  auto blur_d_y_s0_dy = blur_d_y_s0_x->add_loop("blur_d_y_s0_dy", -3, 4);
  auto blur_d_y_s0_dx = blur_d_y_s0_dy->add_loop("blur_d_y_s0_dx", -3, 4);

//store is: blur_d_y.stencil((blur_d_y_s0_dx + 3), (blur_d_y_s0_dy + 3), (blur_d_y_s0_x + 3), blur_d_y_s0_y) = 0.000000h
  auto hcompute_blur_d_y_stencil = blur_d_y_s0_dx->add_op("op_hcompute_blur_d_y_stencil");
  hcompute_blur_d_y_stencil->add_function("hcompute_blur_d_y_stencil");
  prg.buffer_port_widths["blur_d_y_stencil"] = 16;
  hcompute_blur_d_y_stencil->add_store("blur_d_y_stencil", "blur_d_y_s0_y", "(blur_d_y_s0_x + 3)", "(blur_d_y_s0_dy + 3)", "(blur_d_y_s0_dx + 3)");
  auto blur_d_y_s1_y = prg.add_loop("blur_d_y_s1_y", 0, 62);
  auto blur_d_y_s1_x = blur_d_y_s1_y->add_loop("blur_d_y_s1_x", -3, 65);
  auto blur_d_y_s1_dy = blur_d_y_s1_x->add_loop("blur_d_y_s1_dy", -3, 4);
  auto blur_d_y_s1_dx = blur_d_y_s1_dy->add_loop("blur_d_y_s1_dx", -3, 4);

//store is: blur_d_y.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), blur_d_y_s1_y) = (d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), (blur_d_y_s1_y + 6)) + (d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), (blur_d_y_s1_y + 5)) + (d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), (blur_d_y_s1_y + 4)) + (d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), (blur_d_y_s1_y + 3)) + (d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), (blur_d_y_s1_y + 2)) + (d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), (blur_d_y_s1_y + 1)) + (blur_d_y.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), blur_d_y_s1_y) + d.stencil((blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3), (blur_d_y_s1_x + 3), blur_d_y_s1_y))))))))
  auto hcompute_blur_d_y_stencil_1 = blur_d_y_s1_dx->add_op("op_hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_function("hcompute_blur_d_y_stencil_1");
  hcompute_blur_d_y_stencil_1->add_load("blur_d_y_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 6)", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 5)", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 4)", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 3)", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 2)", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "(blur_d_y_s1_y + 1)", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_load("d_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");
  hcompute_blur_d_y_stencil_1->add_store("blur_d_y_stencil", "blur_d_y_s1_y", "(blur_d_y_s1_x + 3)", "(blur_d_y_s1_dy + 3)", "(blur_d_y_s1_dx + 3)");

//consuming blur_d_y.stencil
////producing blur_d.stencil
  auto blur_d_s0_y = prg.add_loop("blur_d_s0_y", 0, 62);
  auto blur_d_s0_x = blur_d_s0_y->add_loop("blur_d_s0_x", 0, 62);
  auto blur_d_s0_dy = blur_d_s0_x->add_loop("blur_d_s0_dy", -3, 4);
  auto blur_d_s0_dx = blur_d_s0_dy->add_loop("blur_d_s0_dx", -3, 4);

//store is: blur_d.stencil((blur_d_s0_dx + 3), (blur_d_s0_dy + 3), blur_d_s0_x, blur_d_s0_y) = 0.000000h
  auto hcompute_blur_d_stencil = blur_d_s0_dx->add_op("op_hcompute_blur_d_stencil");
  hcompute_blur_d_stencil->add_function("hcompute_blur_d_stencil");
  prg.buffer_port_widths["blur_d_stencil"] = 16;
  hcompute_blur_d_stencil->add_store("blur_d_stencil", "blur_d_s0_y", "blur_d_s0_x", "(blur_d_s0_dy + 3)", "(blur_d_s0_dx + 3)");
  auto blur_d_s1_y = prg.add_loop("blur_d_s1_y", 0, 62);
  auto blur_d_s1_x = blur_d_s1_y->add_loop("blur_d_s1_x", 0, 62);
  auto blur_d_s1_dy = blur_d_s1_x->add_loop("blur_d_s1_dy", -3, 4);
  auto blur_d_s1_dx = blur_d_s1_dy->add_loop("blur_d_s1_dx", -3, 4);

//store is: blur_d.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), blur_d_s1_x, blur_d_s1_y) = (blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), (blur_d_s1_x + 6), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), (blur_d_s1_x + 5), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), (blur_d_s1_x + 4), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), (blur_d_s1_x + 3), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), (blur_d_s1_x + 2), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), (blur_d_s1_x + 1), blur_d_s1_y) + (blur_d.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), blur_d_s1_x, blur_d_s1_y) + blur_d_y.stencil((blur_d_s1_dx + 3), (blur_d_s1_dy + 3), blur_d_s1_x, blur_d_s1_y))))))))
  auto hcompute_blur_d_stencil_1 = blur_d_s1_dx->add_op("op_hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_function("hcompute_blur_d_stencil_1");
  hcompute_blur_d_stencil_1->add_load("blur_d_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 6)", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 5)", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 4)", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 3)", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 2)", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "(blur_d_s1_x + 1)", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_load("blur_d_y_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");
  hcompute_blur_d_stencil_1->add_store("blur_d_stencil", "blur_d_s1_y", "blur_d_s1_x", "(blur_d_s1_dy + 3)", "(blur_d_s1_dx + 3)");

//consuming blur_d.stencil
////producing non_local_means_sum.stencil
  auto non_local_means_sum_s0_y = prg.add_loop("non_local_means_sum_s0_y", 0, 62);
  auto non_local_means_sum_s0_x = non_local_means_sum_s0_y->add_loop("non_local_means_sum_s0_x", 0, 62);

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
  auto hcompute_non_local_means_sum_stencil = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil");
  hcompute_non_local_means_sum_stencil->add_function("hcompute_non_local_means_sum_stencil");
  prg.buffer_port_widths["non_local_means_sum_stencil"] = 16;
  hcompute_non_local_means_sum_stencil->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 1) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_1 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_function("hcompute_non_local_means_sum_stencil_1");
  hcompute_non_local_means_sum_stencil_1->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 2) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_2 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_function("hcompute_non_local_means_sum_stencil_2");
  hcompute_non_local_means_sum_stencil_2->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 3) = 0.000000h
  auto hcompute_non_local_means_sum_stencil_3 = non_local_means_sum_s0_x->add_op("op_hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_function("hcompute_non_local_means_sum_stencil_3");
  hcompute_non_local_means_sum_stencil_3->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s0_y", "non_local_means_sum_s0_x");
  auto non_local_means_sum_s1_y = prg.add_loop("non_local_means_sum_s1_y", 0, 62);
  auto non_local_means_sum_s1_x = non_local_means_sum_s1_y->add_loop("non_local_means_sum_s1_x", 0, 62);

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = ((exp_bf16((blur_d.stencil(6, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(5, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(4, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(3, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(2, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(1, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(0, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(6, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(5, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(4, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(3, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(2, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(1, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(0, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(6, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(5, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(4, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(3, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(2, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(1, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(0, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(6, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(5, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(4, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(3, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(2, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(1, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(0, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(6, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(5, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(4, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(3, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(2, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(1, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(0, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(6, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(5, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(4, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(3, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(2, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(1, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(0, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(6, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(5, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(4, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(3, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(2, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(1, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 3))) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil(0, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 3))))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_4 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_function("hcompute_non_local_means_sum_stencil_4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "5");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "4");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "3");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "2");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "1");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "6");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 6)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 5)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 4)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 3)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 9)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 8)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 7)", "0");
  hcompute_non_local_means_sum_stencil_4->add_load("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_4->add_store("non_local_means_sum_stencil", "0", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) = ((exp_bf16((blur_d.stencil(6, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(5, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(4, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(3, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(2, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(1, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(0, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(6, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(5, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(4, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(3, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(2, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(1, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(0, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(6, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(5, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(4, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(3, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(2, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(1, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(0, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(6, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(5, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(4, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(3, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(2, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(1, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(0, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(6, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(5, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(4, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(3, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(2, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(1, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(0, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(6, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(5, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(4, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(3, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(2, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(1, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(0, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(6, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(5, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(4, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(3, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(2, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(1, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 3))) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) + (exp_bf16((blur_d.stencil(0, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 3))))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_5 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_function("hcompute_non_local_means_sum_stencil_5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "6");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "5");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "4");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "3");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "2");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "0");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 7)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 6)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 5)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 4)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 3)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 9)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 8)", "1");
  hcompute_non_local_means_sum_stencil_5->add_load("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_5->add_store("non_local_means_sum_stencil", "1", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) = ((exp_bf16((blur_d.stencil(6, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(5, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(4, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(3, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(2, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(1, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(0, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 9))) + ((exp_bf16((blur_d.stencil(6, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(5, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(4, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(3, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(2, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(1, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(0, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 8))) + ((exp_bf16((blur_d.stencil(6, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(5, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(4, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(3, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(2, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(1, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(0, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 7))) + ((exp_bf16((blur_d.stencil(6, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(5, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(4, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(3, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(2, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(1, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(0, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 6))) + ((exp_bf16((blur_d.stencil(6, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(5, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(4, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(3, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(2, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(1, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(0, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 5))) + ((exp_bf16((blur_d.stencil(6, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(5, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(4, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(3, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(2, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(1, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(0, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 4))) + ((exp_bf16((blur_d.stencil(6, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 9), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(5, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 8), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(4, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 7), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(3, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(2, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 5), (non_local_means_sum_s1_y + 3))) + ((exp_bf16((blur_d.stencil(1, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 4), (non_local_means_sum_s1_y + 3))) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) + (exp_bf16((blur_d.stencil(0, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 3), (non_local_means_sum_s1_y + 3))))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_6 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_function("hcompute_non_local_means_sum_stencil_6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "6");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "5");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "4");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "3");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "1");
  hcompute_non_local_means_sum_stencil_6->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "0");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 9)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 8)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 7)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 6)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 5)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 4)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 9)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 8)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 7)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 6)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 5)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 4)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("hw_input_global_wrapper_stencil", "(non_local_means_sum_s1_y + 3)", "(non_local_means_sum_s1_x + 3)", "2");
  hcompute_non_local_means_sum_stencil_6->add_load("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_6->add_store("non_local_means_sum_stencil", "2", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) = (exp_bf16((blur_d.stencil(6, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(0, 6, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(6, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(0, 5, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(6, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(0, 4, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(6, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(0, 3, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(6, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(0, 2, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(6, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(0, 1, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(6, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(5, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(4, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(3, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(2, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (exp_bf16((blur_d.stencil(1, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) + exp_bf16((blur_d.stencil(0, 0, non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h)))))))))))))))))))))))))))))))))))))))))))))))))))
  auto hcompute_non_local_means_sum_stencil_7 = non_local_means_sum_s1_x->add_op("op_hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_function("hcompute_non_local_means_sum_stencil_7");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "6", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "5", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "4", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "3", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "2", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "1", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "6");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "5");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "4");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "3");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "2");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "1");
  hcompute_non_local_means_sum_stencil_7->add_load("blur_d_stencil", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x", "0", "0");
  hcompute_non_local_means_sum_stencil_7->add_load("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");
  hcompute_non_local_means_sum_stencil_7->add_store("non_local_means_sum_stencil", "3", "non_local_means_sum_s1_y", "non_local_means_sum_s1_x");

//consuming non_local_means_sum.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "3", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_load("non_local_means_sum_stencil", "2", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}

// empty

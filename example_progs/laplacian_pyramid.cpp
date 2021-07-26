#include "example_progs.h"

prog laplacian_pyramid() {
  prog prg;
  prg.compute_unit_file = "laplacian_pyramid_compute.h";
  prg.name = "laplacian_pyramid";

// Stencil<uint16_t, 75, 75> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -7, 69);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -7, 69);
//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", -7, 66);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", -7, 66);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", -7, 66);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", -7, 66);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)3) + (blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)21) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)3) + ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)21) + ((((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)7) + (hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)158)))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");

//consuming blur_unnormalized.stencil
////producing l0$0.stencil
  auto l0_0_s0_y = prg.add_loop("l0_0_s0_y", -6, 67);
  auto l0_0_s0_x = l0_0_s0_y->add_loop("l0_0_s0_x", -6, 67);

//store is: l0$0.stencil(l0_0_s0_x, l0_0_s0_y) = (blur_unnormalized.stencil((l0_0_s0_x + -1), (l0_0_s0_y + -1))/(uint16)256)
  auto hcompute_l0_0_stencil = l0_0_s0_x->add_op("op_hcompute_l0_0_stencil");
  hcompute_l0_0_stencil->add_function("hcompute_l0_0_stencil");
  hcompute_l0_0_stencil->add_load("blur_unnormalized_stencil", "(l0_0_s0_y + -1)", "(l0_0_s0_x + -1)");
  prg.buffer_port_widths["l0_0_stencil"] = 16;
  hcompute_l0_0_stencil->add_store("l0_0_stencil", "l0_0_s0_y", "l0_0_s0_x");

//consuming l0$0.stencil
////producing h0$0.stencil
  auto h0_0_s0_y = prg.add_loop("h0_0_s0_y", 0, 64);
  auto h0_0_s0_x = h0_0_s0_y->add_loop("h0_0_s0_x", 0, 64);

//store is: h0$0.stencil(h0_0_s0_x, h0_0_s0_y) = (hw_input_global_wrapper.stencil(h0_0_s0_x, h0_0_s0_y) - l0$0.stencil(h0_0_s0_x, h0_0_s0_y))
  auto hcompute_h0_0_stencil = h0_0_s0_x->add_op("op_hcompute_h0_0_stencil");
  hcompute_h0_0_stencil->add_function("hcompute_h0_0_stencil");
  hcompute_h0_0_stencil->add_load("hw_input_global_wrapper_stencil", "h0_0_s0_y", "h0_0_s0_x");
  hcompute_h0_0_stencil->add_load("l0_0_stencil", "h0_0_s0_y", "h0_0_s0_x");
  prg.buffer_port_widths["h0_0_stencil"] = 16;
  hcompute_h0_0_stencil->add_store("h0_0_stencil", "h0_0_s0_y", "h0_0_s0_x");

//consuming h0$0.stencil
////producing f1$0.stencil
  auto f1_0_s0_y = prg.add_loop("f1_0_s0_y", -3, 34);
  auto f1_0_s0_x = f1_0_s0_y->add_loop("f1_0_s0_x", -3, 34);

//store is: f1$0.stencil(f1_0_s0_x, f1_0_s0_y) = l0$0.stencil((f1_0_s0_x*2), (f1_0_s0_y*2))
  auto hcompute_f1_0_stencil = f1_0_s0_x->add_op("op_hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_function("hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_load("l0_0_stencil", "(f1_0_s0_y*2)", "(f1_0_s0_x*2)");
  prg.buffer_port_widths["f1_0_stencil"] = 16;
  hcompute_f1_0_stencil->add_store("f1_0_stencil", "f1_0_s0_y", "f1_0_s0_x");

//consuming f1$0.stencil
////producing f1_blur_unnormalized.stencil
  auto f1_blur_unnormalized_s0_y = prg.add_loop("f1_blur_unnormalized_s0_y", -3, 32);
  auto f1_blur_unnormalized_s0_x = f1_blur_unnormalized_s0_y->add_loop("f1_blur_unnormalized_s0_x", -3, 32);

//store is: f1_blur_unnormalized.stencil(f1_blur_unnormalized_s0_x, f1_blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_f1_blur_unnormalized_stencil = f1_blur_unnormalized_s0_x->add_op("op_hcompute_f1_blur_unnormalized_stencil");
  hcompute_f1_blur_unnormalized_stencil->add_function("hcompute_f1_blur_unnormalized_stencil");
  prg.buffer_port_widths["f1_blur_unnormalized_stencil"] = 16;
  hcompute_f1_blur_unnormalized_stencil->add_store("f1_blur_unnormalized_stencil", "f1_blur_unnormalized_s0_y", "f1_blur_unnormalized_s0_x");
  auto f1_blur_unnormalized_s1_y = prg.add_loop("f1_blur_unnormalized_s1_y", -3, 32);
  auto f1_blur_unnormalized_s1_x = f1_blur_unnormalized_s1_y->add_loop("f1_blur_unnormalized_s1_x", -3, 32);

//store is: f1_blur_unnormalized.stencil(f1_blur_unnormalized_s1_x, f1_blur_unnormalized_s1_y) = ((f1$0.stencil(f1_blur_unnormalized_s1_x, f1_blur_unnormalized_s1_y)*(uint16)3) + (f1_blur_unnormalized.stencil(f1_blur_unnormalized_s1_x, f1_blur_unnormalized_s1_y) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 1), f1_blur_unnormalized_s1_y)*(uint16)21) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 2), f1_blur_unnormalized_s1_y)*(uint16)3) + ((f1$0.stencil(f1_blur_unnormalized_s1_x, (f1_blur_unnormalized_s1_y + 1))*(uint16)21) + ((((f1$0.stencil((f1_blur_unnormalized_s1_x + 2), (f1_blur_unnormalized_s1_y + 1))*(uint16)7) + (f1$0.stencil(f1_blur_unnormalized_s1_x, (f1_blur_unnormalized_s1_y + 2)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 2), (f1_blur_unnormalized_s1_y + 2)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 1), (f1_blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 1), (f1_blur_unnormalized_s1_y + 1))*(uint16)158)))))))
  auto hcompute_f1_blur_unnormalized_stencil_1 = f1_blur_unnormalized_s1_x->add_op("op_hcompute_f1_blur_unnormalized_stencil_1");
  hcompute_f1_blur_unnormalized_stencil_1->add_function("hcompute_f1_blur_unnormalized_stencil_1");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "f1_blur_unnormalized_s1_y", "f1_blur_unnormalized_s1_x");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "f1_blur_unnormalized_s1_y", "(f1_blur_unnormalized_s1_x + 1)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "f1_blur_unnormalized_s1_y", "(f1_blur_unnormalized_s1_x + 2)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 1)", "f1_blur_unnormalized_s1_x");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 1)", "(f1_blur_unnormalized_s1_x + 2)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 2)", "f1_blur_unnormalized_s1_x");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 2)", "(f1_blur_unnormalized_s1_x + 2)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 2)", "(f1_blur_unnormalized_s1_x + 1)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 1)", "(f1_blur_unnormalized_s1_x + 1)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_blur_unnormalized_stencil", "f1_blur_unnormalized_s1_y", "f1_blur_unnormalized_s1_x");
  hcompute_f1_blur_unnormalized_stencil_1->add_store("f1_blur_unnormalized_stencil", "f1_blur_unnormalized_s1_y", "f1_blur_unnormalized_s1_x");

//consuming f1_blur_unnormalized.stencil
////producing l1$0.stencil
  auto l1_0_s0_y = prg.add_loop("l1_0_s0_y", -2, 33);
  auto l1_0_s0_x = l1_0_s0_y->add_loop("l1_0_s0_x", -2, 33);

//store is: l1$0.stencil(l1_0_s0_x, l1_0_s0_y) = (f1_blur_unnormalized.stencil((l1_0_s0_x + -1), (l1_0_s0_y + -1))/(uint16)256)
  auto hcompute_l1_0_stencil = l1_0_s0_x->add_op("op_hcompute_l1_0_stencil");
  hcompute_l1_0_stencil->add_function("hcompute_l1_0_stencil");
  hcompute_l1_0_stencil->add_load("f1_blur_unnormalized_stencil", "(l1_0_s0_y + -1)", "(l1_0_s0_x + -1)");
  prg.buffer_port_widths["l1_0_stencil"] = 16;
  hcompute_l1_0_stencil->add_store("l1_0_stencil", "l1_0_s0_y", "l1_0_s0_x");

//consuming l1$0.stencil
////producing h1$0.stencil
  auto h1_0_s0_y = prg.add_loop("h1_0_s0_y", -1, 33);
  auto h1_0_s0_x = h1_0_s0_y->add_loop("h1_0_s0_x", -1, 33);

//store is: h1$0.stencil(h1_0_s0_x, h1_0_s0_y) = (f1$0.stencil(h1_0_s0_x, h1_0_s0_y) - l1$0.stencil(h1_0_s0_x, h1_0_s0_y))
  auto hcompute_h1_0_stencil = h1_0_s0_x->add_op("op_hcompute_h1_0_stencil");
  hcompute_h1_0_stencil->add_function("hcompute_h1_0_stencil");
  hcompute_h1_0_stencil->add_load("f1_0_stencil", "h1_0_s0_y", "h1_0_s0_x");
  hcompute_h1_0_stencil->add_load("l1_0_stencil", "h1_0_s0_y", "h1_0_s0_x");
  prg.buffer_port_widths["h1_0_stencil"] = 16;
  hcompute_h1_0_stencil->add_store("h1_0_stencil", "h1_0_s0_y", "h1_0_s0_x");

//consuming h1$0.stencil
////producing f2$0.stencil
  auto f2_0_s0_y = prg.add_loop("f2_0_s0_y", -1, 17);
  auto f2_0_s0_x = f2_0_s0_y->add_loop("f2_0_s0_x", -1, 17);

//store is: f2$0.stencil(f2_0_s0_x, f2_0_s0_y) = l1$0.stencil((f2_0_s0_x*2), (f2_0_s0_y*2))
  auto hcompute_f2_0_stencil = f2_0_s0_x->add_op("op_hcompute_f2_0_stencil");
  hcompute_f2_0_stencil->add_function("hcompute_f2_0_stencil");
  hcompute_f2_0_stencil->add_load("l1_0_stencil", "(f2_0_s0_y*2)", "(f2_0_s0_x*2)");
  prg.buffer_port_widths["f2_0_stencil"] = 16;
  hcompute_f2_0_stencil->add_store("f2_0_stencil", "f2_0_s0_y", "f2_0_s0_x");

//consuming f2$0.stencil
//producing f2_temp.stencil
  auto f2_temp_s0_y = prg.add_loop("f2_temp_s0_y", -2, 34);
  auto f2_temp_s0_x = f2_temp_s0_y->add_loop("f2_temp_s0_x", -2, 34);

//store is: f2_temp.stencil(f2_temp_s0_x, f2_temp_s0_y) = f2$0.stencil((f2_temp_s0_x/2), (f2_temp_s0_y/2))
  auto hcompute_f2_temp_stencil = f2_temp_s0_x->add_op("op_hcompute_f2_temp_stencil");
  hcompute_f2_temp_stencil->add_function("hcompute_f2_temp_stencil");
  hcompute_f2_temp_stencil->add_load("f2_0_stencil", "floor((f2_temp_s0_y/2))", "floor((f2_temp_s0_x/2))");
  prg.buffer_port_widths["f2_temp_stencil"] = 16;
  hcompute_f2_temp_stencil->add_store("f2_temp_stencil", "f2_temp_s0_y", "f2_temp_s0_x");

//consuming f2_temp.stencil
////producing f2_temp_blur_unnormalized.stencil
  auto f2_temp_blur_unnormalized_s0_y = prg.add_loop("f2_temp_blur_unnormalized_s0_y", -2, 32);
  auto f2_temp_blur_unnormalized_s0_x = f2_temp_blur_unnormalized_s0_y->add_loop("f2_temp_blur_unnormalized_s0_x", -2, 32);

//store is: f2_temp_blur_unnormalized.stencil(f2_temp_blur_unnormalized_s0_x, f2_temp_blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_f2_temp_blur_unnormalized_stencil = f2_temp_blur_unnormalized_s0_x->add_op("op_hcompute_f2_temp_blur_unnormalized_stencil");
  hcompute_f2_temp_blur_unnormalized_stencil->add_function("hcompute_f2_temp_blur_unnormalized_stencil");
  prg.buffer_port_widths["f2_temp_blur_unnormalized_stencil"] = 16;
  hcompute_f2_temp_blur_unnormalized_stencil->add_store("f2_temp_blur_unnormalized_stencil", "f2_temp_blur_unnormalized_s0_y", "f2_temp_blur_unnormalized_s0_x");
  auto f2_temp_blur_unnormalized_s1_y = prg.add_loop("f2_temp_blur_unnormalized_s1_y", -2, 32);
  auto f2_temp_blur_unnormalized_s1_x = f2_temp_blur_unnormalized_s1_y->add_loop("f2_temp_blur_unnormalized_s1_x", -2, 32);

//store is: f2_temp_blur_unnormalized.stencil(f2_temp_blur_unnormalized_s1_x, f2_temp_blur_unnormalized_s1_y) = ((f2_temp.stencil(f2_temp_blur_unnormalized_s1_x, f2_temp_blur_unnormalized_s1_y)*(uint16)3) + (f2_temp_blur_unnormalized.stencil(f2_temp_blur_unnormalized_s1_x, f2_temp_blur_unnormalized_s1_y) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 1), f2_temp_blur_unnormalized_s1_y)*(uint16)21) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), f2_temp_blur_unnormalized_s1_y)*(uint16)3) + ((f2_temp.stencil(f2_temp_blur_unnormalized_s1_x, (f2_temp_blur_unnormalized_s1_y + 1))*(uint16)21) + ((((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 1))*(uint16)7) + (f2_temp.stencil(f2_temp_blur_unnormalized_s1_x, (f2_temp_blur_unnormalized_s1_y + 2)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 1), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 1), (f2_temp_blur_unnormalized_s1_y + 1))*(uint16)158)))))))
  auto hcompute_f2_temp_blur_unnormalized_stencil_1 = f2_temp_blur_unnormalized_s1_x->add_op("op_hcompute_f2_temp_blur_unnormalized_stencil_1");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_function("hcompute_f2_temp_blur_unnormalized_stencil_1");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "f2_temp_blur_unnormalized_s1_y", "f2_temp_blur_unnormalized_s1_x");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "f2_temp_blur_unnormalized_s1_y", "(f2_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "f2_temp_blur_unnormalized_s1_y", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 1)", "f2_temp_blur_unnormalized_s1_x");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 1)", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "f2_temp_blur_unnormalized_s1_x");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 1)", "(f2_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_blur_unnormalized_stencil", "f2_temp_blur_unnormalized_s1_y", "f2_temp_blur_unnormalized_s1_x");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_store("f2_temp_blur_unnormalized_stencil", "f2_temp_blur_unnormalized_s1_y", "f2_temp_blur_unnormalized_s1_x");

//consuming f2_temp_blur_unnormalized.stencil
////producing l1_up.stencil
  auto l1_up_s0_y = prg.add_loop("l1_up_s0_y", -1, 33);
  auto l1_up_s0_x = l1_up_s0_y->add_loop("l1_up_s0_x", -1, 33);

//store is: l1_up.stencil(l1_up_s0_x, l1_up_s0_y) = (f2_temp_blur_unnormalized.stencil((l1_up_s0_x + -1), (l1_up_s0_y + -1))/(uint16)256)
  auto hcompute_l1_up_stencil = l1_up_s0_x->add_op("op_hcompute_l1_up_stencil");
  hcompute_l1_up_stencil->add_function("hcompute_l1_up_stencil");
  hcompute_l1_up_stencil->add_load("f2_temp_blur_unnormalized_stencil", "(l1_up_s0_y + -1)", "(l1_up_s0_x + -1)");
  prg.buffer_port_widths["l1_up_stencil"] = 16;
  hcompute_l1_up_stencil->add_store("l1_up_stencil", "l1_up_s0_y", "l1_up_s0_x");

//consuming l1_up.stencil
////producing f1_up.stencil
  auto f1_up_s0_y = prg.add_loop("f1_up_s0_y", -1, 33);
  auto f1_up_s0_x = f1_up_s0_y->add_loop("f1_up_s0_x", -1, 33);

//store is: f1_up.stencil(f1_up_s0_x, f1_up_s0_y) = (l1_up.stencil(f1_up_s0_x, f1_up_s0_y) + h1$0.stencil(f1_up_s0_x, f1_up_s0_y))
  auto hcompute_f1_up_stencil_1 = f1_up_s0_x->add_op("op_hcompute_f1_up_stencil_1");
  hcompute_f1_up_stencil_1->add_function("hcompute_f1_up_stencil_1");
  hcompute_f1_up_stencil_1->add_load("h1_0_stencil", "f1_up_s0_y", "f1_up_s0_x");
  hcompute_f1_up_stencil_1->add_load("l1_up_stencil", "f1_up_s0_y", "f1_up_s0_x");
  prg.buffer_port_widths["f1_up_stencil"] = 16;
  hcompute_f1_up_stencil_1->add_store("f1_up_stencil", "f1_up_s0_y", "f1_up_s0_x");

//consuming f1_up.stencil
////producing f1_temp.stencil
  auto f1_temp_s0_y = prg.add_loop("f1_temp_s0_y", -1, 65);
  auto f1_temp_s0_x = f1_temp_s0_y->add_loop("f1_temp_s0_x", -1, 65);

//store is: f1_temp.stencil(f1_temp_s0_x, f1_temp_s0_y) = f1_up.stencil((f1_temp_s0_x/2), (f1_temp_s0_y/2))
  auto hcompute_f1_temp_stencil = f1_temp_s0_x->add_op("op_hcompute_f1_temp_stencil");
  hcompute_f1_temp_stencil->add_function("hcompute_f1_temp_stencil");
  hcompute_f1_temp_stencil->add_load("f1_up_stencil", "floor((f1_temp_s0_y/2))", "floor((f1_temp_s0_x/2))");
  prg.buffer_port_widths["f1_temp_stencil"] = 16;
  hcompute_f1_temp_stencil->add_store("f1_temp_stencil", "f1_temp_s0_y", "f1_temp_s0_x");

//consuming f1_temp.stencil
////producing f1_temp_blur_unnormalized.stencil
  auto f1_temp_blur_unnormalized_s0_y = prg.add_loop("f1_temp_blur_unnormalized_s0_y", -1, 63);
  auto f1_temp_blur_unnormalized_s0_x = f1_temp_blur_unnormalized_s0_y->add_loop("f1_temp_blur_unnormalized_s0_x", -1, 63);

//store is: f1_temp_blur_unnormalized.stencil(f1_temp_blur_unnormalized_s0_x, f1_temp_blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_f1_temp_blur_unnormalized_stencil = f1_temp_blur_unnormalized_s0_x->add_op("op_hcompute_f1_temp_blur_unnormalized_stencil");
  hcompute_f1_temp_blur_unnormalized_stencil->add_function("hcompute_f1_temp_blur_unnormalized_stencil");
  prg.buffer_port_widths["f1_temp_blur_unnormalized_stencil"] = 16;
  hcompute_f1_temp_blur_unnormalized_stencil->add_store("f1_temp_blur_unnormalized_stencil", "f1_temp_blur_unnormalized_s0_y", "f1_temp_blur_unnormalized_s0_x");
  auto f1_temp_blur_unnormalized_s1_y = prg.add_loop("f1_temp_blur_unnormalized_s1_y", -1, 63);
  auto f1_temp_blur_unnormalized_s1_x = f1_temp_blur_unnormalized_s1_y->add_loop("f1_temp_blur_unnormalized_s1_x", -1, 63);

//store is: f1_temp_blur_unnormalized.stencil(f1_temp_blur_unnormalized_s1_x, f1_temp_blur_unnormalized_s1_y) = ((f1_temp.stencil(f1_temp_blur_unnormalized_s1_x, f1_temp_blur_unnormalized_s1_y)*(uint16)3) + (f1_temp_blur_unnormalized.stencil(f1_temp_blur_unnormalized_s1_x, f1_temp_blur_unnormalized_s1_y) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), f1_temp_blur_unnormalized_s1_y)*(uint16)21) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), f1_temp_blur_unnormalized_s1_y)*(uint16)3) + ((f1_temp.stencil(f1_temp_blur_unnormalized_s1_x, (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)21) + ((((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)7) + (f1_temp.stencil(f1_temp_blur_unnormalized_s1_x, (f1_temp_blur_unnormalized_s1_y + 2)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 2)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)158)))))))
  auto hcompute_f1_temp_blur_unnormalized_stencil_1 = f1_temp_blur_unnormalized_s1_x->add_op("op_hcompute_f1_temp_blur_unnormalized_stencil_1");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_function("hcompute_f1_temp_blur_unnormalized_stencil_1");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "f1_temp_blur_unnormalized_s1_y", "f1_temp_blur_unnormalized_s1_x");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "f1_temp_blur_unnormalized_s1_y", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "f1_temp_blur_unnormalized_s1_y", "(f1_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "f1_temp_blur_unnormalized_s1_x");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 2)", "f1_temp_blur_unnormalized_s1_x");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 2)", "(f1_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 2)", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_blur_unnormalized_stencil", "f1_temp_blur_unnormalized_s1_y", "f1_temp_blur_unnormalized_s1_x");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_store("f1_temp_blur_unnormalized_stencil", "f1_temp_blur_unnormalized_s1_y", "f1_temp_blur_unnormalized_s1_x");

//consuming f1_temp_blur_unnormalized.stencil
////producing l0_up.stencil
  auto l0_up_s0_y = prg.add_loop("l0_up_s0_y", 0, 64);
  auto l0_up_s0_x = l0_up_s0_y->add_loop("l0_up_s0_x", 0, 64);

//store is: l0_up.stencil(l0_up_s0_x, l0_up_s0_y) = (f1_temp_blur_unnormalized.stencil((l0_up_s0_x + -1), (l0_up_s0_y + -1))/(uint16)256)
  auto hcompute_l0_up_stencil = l0_up_s0_x->add_op("op_hcompute_l0_up_stencil");
  hcompute_l0_up_stencil->add_function("hcompute_l0_up_stencil");
  hcompute_l0_up_stencil->add_load("f1_temp_blur_unnormalized_stencil", "(l0_up_s0_y + -1)", "(l0_up_s0_x + -1)");
  prg.buffer_port_widths["l0_up_stencil"] = 16;
  hcompute_l0_up_stencil->add_store("l0_up_stencil", "l0_up_s0_y", "l0_up_s0_x");

//consuming l0_up.stencil
////producing f0_up.stencil
  auto f0_up_s0_y = prg.add_loop("f0_up_s0_y", 0, 64);
  auto f0_up_s0_x = f0_up_s0_y->add_loop("f0_up_s0_x", 0, 64);

//store is: f0_up.stencil(f0_up_s0_x, f0_up_s0_y) = (l0_up.stencil(f0_up_s0_x, f0_up_s0_y) + h0$0.stencil(f0_up_s0_x, f0_up_s0_y))
  auto hcompute_f0_up_stencil = f0_up_s0_x->add_op("op_hcompute_f0_up_stencil");
  hcompute_f0_up_stencil->add_function("hcompute_f0_up_stencil");
  hcompute_f0_up_stencil->add_load("h0_0_stencil", "f0_up_s0_y", "f0_up_s0_x");
  hcompute_f0_up_stencil->add_load("l0_up_stencil", "f0_up_s0_y", "f0_up_s0_x");
  prg.buffer_port_widths["f0_up_stencil"] = 16;
  hcompute_f0_up_stencil->add_store("f0_up_stencil", "f0_up_s0_y", "f0_up_s0_x");

//consuming f0_up.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = f0_up.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f0_up_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog laplacian_pyramid_docker() {
  prog prg;
  prg.compute_unit_file = "laplacian_pyramid_docker_compute.h";
  prg.name = "laplacian_pyramid_docker";

// Stencil<uint16_t, 75, 75> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -7, 68);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -7, 68);

//store is: hw_input_global_wrapper.stencil((hw_input_global_wrapper_s0_x + 7), (hw_input_global_wrapper_s0_y + 7)) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "(hw_input_global_wrapper_s0_y + 7)", "(hw_input_global_wrapper_s0_x + 7)");

//consuming hw_input_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", -7, 66);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", -7, 66);

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x + 7), (blur_unnormalized_s0_y + 7)) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "(blur_unnormalized_s0_y + 7)", "(blur_unnormalized_s0_x + 7)");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", -7, 66);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", -7, 66);

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 7)) = ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 7))*(uint16)3) + (blur_unnormalized.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 7)) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 8), (blur_unnormalized_s1_y + 7))*(uint16)21) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 9), (blur_unnormalized_s1_y + 7))*(uint16)3) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 8))*(uint16)21) + ((((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 9), (blur_unnormalized_s1_y + 8))*(uint16)7) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 9)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 9), (blur_unnormalized_s1_y + 9)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 8), (blur_unnormalized_s1_y + 9))*(uint16)7))))*(uint16)3) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 8), (blur_unnormalized_s1_y + 8))*(uint16)158)))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "(blur_unnormalized_s1_y + 7)", "(blur_unnormalized_s1_x + 7)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 7)", "(blur_unnormalized_s1_x + 7)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 7)", "(blur_unnormalized_s1_x + 8)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 7)", "(blur_unnormalized_s1_x + 9)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 8)", "(blur_unnormalized_s1_x + 7)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 8)", "(blur_unnormalized_s1_x + 9)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 9)", "(blur_unnormalized_s1_x + 7)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 9)", "(blur_unnormalized_s1_x + 9)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 9)", "(blur_unnormalized_s1_x + 8)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 8)", "(blur_unnormalized_s1_x + 8)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "(blur_unnormalized_s1_y + 7)", "(blur_unnormalized_s1_x + 7)");

//consuming blur_unnormalized.stencil
////producing l0$0.stencil
  auto l0_0_s0_y = prg.add_loop("l0_0_s0_y", -6, 67);
  auto l0_0_s0_x = l0_0_s0_y->add_loop("l0_0_s0_x", -6, 67);

//store is: l0$0.stencil((l0_0_s0_x + 6), (l0_0_s0_y + 6)) = (blur_unnormalized.stencil((l0_0_s0_x + 6), (l0_0_s0_y + 6))/(uint16)256)
  auto hcompute_l0_0_stencil = l0_0_s0_x->add_op("op_hcompute_l0_0_stencil");
  hcompute_l0_0_stencil->add_function("hcompute_l0_0_stencil");
  hcompute_l0_0_stencil->add_load("blur_unnormalized_stencil", "(l0_0_s0_y + 6)", "(l0_0_s0_x + 6)");
  prg.buffer_port_widths["l0_0_stencil"] = 16;
  hcompute_l0_0_stencil->add_store("l0_0_stencil", "(l0_0_s0_y + 6)", "(l0_0_s0_x + 6)");

//consuming l0$0.stencil
////producing h0$0.stencil
  auto h0_0_s0_y = prg.add_loop("h0_0_s0_y", 0, 64);
  auto h0_0_s0_x = h0_0_s0_y->add_loop("h0_0_s0_x", 0, 64);

//store is: h0$0.stencil(h0_0_s0_x, h0_0_s0_y) = (hw_input_global_wrapper.stencil((h0_0_s0_x + 7), (h0_0_s0_y + 7)) - l0$0.stencil((h0_0_s0_x + 6), (h0_0_s0_y + 6)))
  auto hcompute_h0_0_stencil = h0_0_s0_x->add_op("op_hcompute_h0_0_stencil");
  hcompute_h0_0_stencil->add_function("hcompute_h0_0_stencil");
  hcompute_h0_0_stencil->add_load("hw_input_global_wrapper_stencil", "(h0_0_s0_y + 7)", "(h0_0_s0_x + 7)");
  hcompute_h0_0_stencil->add_load("l0_0_stencil", "(h0_0_s0_y + 6)", "(h0_0_s0_x + 6)");
  prg.buffer_port_widths["h0_0_stencil"] = 16;
  hcompute_h0_0_stencil->add_store("h0_0_stencil", "h0_0_s0_y", "h0_0_s0_x");

//consuming h0$0.stencil
////producing f1$0.stencil
  auto f1_0_s0_y = prg.add_loop("f1_0_s0_y", -3, 34);
  auto f1_0_s0_x = f1_0_s0_y->add_loop("f1_0_s0_x", -3, 34);

//store is: f1$0.stencil((f1_0_s0_x + 3), (f1_0_s0_y + 3)) = l0$0.stencil(((f1_0_s0_x*2) + 6), ((f1_0_s0_y*2) + 6))
  auto hcompute_f1_0_stencil = f1_0_s0_x->add_op("op_hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_function("hcompute_f1_0_stencil");
  hcompute_f1_0_stencil->add_load("l0_0_stencil", "((f1_0_s0_y*2) + 6)", "((f1_0_s0_x*2) + 6)");
  prg.buffer_port_widths["f1_0_stencil"] = 16;
  hcompute_f1_0_stencil->add_store("f1_0_stencil", "(f1_0_s0_y + 3)", "(f1_0_s0_x + 3)");

//consuming f1$0.stencil
////producing f1_blur_unnormalized.stencil
  auto f1_blur_unnormalized_s0_y = prg.add_loop("f1_blur_unnormalized_s0_y", -3, 32);
  auto f1_blur_unnormalized_s0_x = f1_blur_unnormalized_s0_y->add_loop("f1_blur_unnormalized_s0_x", -3, 32);

//store is: f1_blur_unnormalized.stencil((f1_blur_unnormalized_s0_x + 3), (f1_blur_unnormalized_s0_y + 3)) = (uint16)0
  auto hcompute_f1_blur_unnormalized_stencil = f1_blur_unnormalized_s0_x->add_op("op_hcompute_f1_blur_unnormalized_stencil");
  hcompute_f1_blur_unnormalized_stencil->add_function("hcompute_f1_blur_unnormalized_stencil");
  prg.buffer_port_widths["f1_blur_unnormalized_stencil"] = 16;
  hcompute_f1_blur_unnormalized_stencil->add_store("f1_blur_unnormalized_stencil", "(f1_blur_unnormalized_s0_y + 3)", "(f1_blur_unnormalized_s0_x + 3)");
  auto f1_blur_unnormalized_s1_y = prg.add_loop("f1_blur_unnormalized_s1_y", -3, 32);
  auto f1_blur_unnormalized_s1_x = f1_blur_unnormalized_s1_y->add_loop("f1_blur_unnormalized_s1_x", -3, 32);

//store is: f1_blur_unnormalized.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 3)) = ((f1$0.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 3))*(uint16)3) + (f1_blur_unnormalized.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 3)) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 4), (f1_blur_unnormalized_s1_y + 3))*(uint16)21) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 5), (f1_blur_unnormalized_s1_y + 3))*(uint16)3) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 4))*(uint16)21) + ((((f1$0.stencil((f1_blur_unnormalized_s1_x + 5), (f1_blur_unnormalized_s1_y + 4))*(uint16)7) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 5)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 5), (f1_blur_unnormalized_s1_y + 5)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 4), (f1_blur_unnormalized_s1_y + 5))*(uint16)7))))*(uint16)3) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 4), (f1_blur_unnormalized_s1_y + 4))*(uint16)158)))))))
  auto hcompute_f1_blur_unnormalized_stencil_1 = f1_blur_unnormalized_s1_x->add_op("op_hcompute_f1_blur_unnormalized_stencil_1");
  hcompute_f1_blur_unnormalized_stencil_1->add_function("hcompute_f1_blur_unnormalized_stencil_1");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 3)", "(f1_blur_unnormalized_s1_x + 3)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 3)", "(f1_blur_unnormalized_s1_x + 4)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 3)", "(f1_blur_unnormalized_s1_x + 5)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 4)", "(f1_blur_unnormalized_s1_x + 3)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 4)", "(f1_blur_unnormalized_s1_x + 5)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 5)", "(f1_blur_unnormalized_s1_x + 3)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 5)", "(f1_blur_unnormalized_s1_x + 5)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 5)", "(f1_blur_unnormalized_s1_x + 4)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_0_stencil", "(f1_blur_unnormalized_s1_y + 4)", "(f1_blur_unnormalized_s1_x + 4)");
  hcompute_f1_blur_unnormalized_stencil_1->add_load("f1_blur_unnormalized_stencil", "(f1_blur_unnormalized_s1_y + 3)", "(f1_blur_unnormalized_s1_x + 3)");
  hcompute_f1_blur_unnormalized_stencil_1->add_store("f1_blur_unnormalized_stencil", "(f1_blur_unnormalized_s1_y + 3)", "(f1_blur_unnormalized_s1_x + 3)");

//consuming f1_blur_unnormalized.stencil
////producing l1$0.stencil
  auto l1_0_s0_y = prg.add_loop("l1_0_s0_y", -2, 33);
  auto l1_0_s0_x = l1_0_s0_y->add_loop("l1_0_s0_x", -2, 33);

//store is: l1$0.stencil((l1_0_s0_x + 2), (l1_0_s0_y + 2)) = (f1_blur_unnormalized.stencil((l1_0_s0_x + 2), (l1_0_s0_y + 2))/(uint16)256)
  auto hcompute_l1_0_stencil = l1_0_s0_x->add_op("op_hcompute_l1_0_stencil");
  hcompute_l1_0_stencil->add_function("hcompute_l1_0_stencil");
  hcompute_l1_0_stencil->add_load("f1_blur_unnormalized_stencil", "(l1_0_s0_y + 2)", "(l1_0_s0_x + 2)");
  prg.buffer_port_widths["l1_0_stencil"] = 16;
  hcompute_l1_0_stencil->add_store("l1_0_stencil", "(l1_0_s0_y + 2)", "(l1_0_s0_x + 2)");

//consuming l1$0.stencil
////producing h1$0.stencil
  auto h1_0_s0_y = prg.add_loop("h1_0_s0_y", -1, 33);
  auto h1_0_s0_x = h1_0_s0_y->add_loop("h1_0_s0_x", -1, 33);

//store is: h1$0.stencil((h1_0_s0_x + 1), (h1_0_s0_y + 1)) = (f1$0.stencil((h1_0_s0_x + 3), (h1_0_s0_y + 3)) - l1$0.stencil((h1_0_s0_x + 2), (h1_0_s0_y + 2)))
  auto hcompute_h1_0_stencil = h1_0_s0_x->add_op("op_hcompute_h1_0_stencil");
  hcompute_h1_0_stencil->add_function("hcompute_h1_0_stencil");
  hcompute_h1_0_stencil->add_load("f1_0_stencil", "(h1_0_s0_y + 3)", "(h1_0_s0_x + 3)");
  hcompute_h1_0_stencil->add_load("l1_0_stencil", "(h1_0_s0_y + 2)", "(h1_0_s0_x + 2)");
  prg.buffer_port_widths["h1_0_stencil"] = 16;
  hcompute_h1_0_stencil->add_store("h1_0_stencil", "(h1_0_s0_y + 1)", "(h1_0_s0_x + 1)");

//consuming h1$0.stencil
////producing f2$0.stencil
  auto f2_0_s0_y = prg.add_loop("f2_0_s0_y", -1, 17);
  auto f2_0_s0_x = f2_0_s0_y->add_loop("f2_0_s0_x", -1, 17);

//store is: f2$0.stencil((f2_0_s0_x + 1), (f2_0_s0_y + 1)) = l1$0.stencil(((f2_0_s0_x*2) + 2), ((f2_0_s0_y*2) + 2))
  auto hcompute_f2_0_stencil = f2_0_s0_x->add_op("op_hcompute_f2_0_stencil");
  hcompute_f2_0_stencil->add_function("hcompute_f2_0_stencil");
  hcompute_f2_0_stencil->add_load("l1_0_stencil", "((f2_0_s0_y*2) + 2)", "((f2_0_s0_x*2) + 2)");
  prg.buffer_port_widths["f2_0_stencil"] = 16;
  hcompute_f2_0_stencil->add_store("f2_0_stencil", "(f2_0_s0_y + 1)", "(f2_0_s0_x + 1)");

//consuming f2$0.stencil
////producing f2_temp.stencil
  auto f2_temp_s0_y = prg.add_loop("f2_temp_s0_y", -2, 34);
  auto f2_temp_s0_x = f2_temp_s0_y->add_loop("f2_temp_s0_x", -2, 34);

//store is: f2_temp.stencil((f2_temp_s0_x + 2), (f2_temp_s0_y + 2)) = f2$0.stencil(((f2_temp_s0_x/2) + 1), ((f2_temp_s0_y/2) + 1))
  auto hcompute_f2_temp_stencil = f2_temp_s0_x->add_op("op_hcompute_f2_temp_stencil");
  hcompute_f2_temp_stencil->add_function("hcompute_f2_temp_stencil");
  hcompute_f2_temp_stencil->add_load("f2_0_stencil", "(floor((f2_temp_s0_y/2)) + 1)", "(floor((f2_temp_s0_x/2)) + 1)");
  prg.buffer_port_widths["f2_temp_stencil"] = 16;
  hcompute_f2_temp_stencil->add_store("f2_temp_stencil", "(f2_temp_s0_y + 2)", "(f2_temp_s0_x + 2)");

//consuming f2_temp.stencil
////producing f2_temp_blur_unnormalized.stencil
  auto f2_temp_blur_unnormalized_s0_y = prg.add_loop("f2_temp_blur_unnormalized_s0_y", -2, 32);
  auto f2_temp_blur_unnormalized_s0_x = f2_temp_blur_unnormalized_s0_y->add_loop("f2_temp_blur_unnormalized_s0_x", -2, 32);

//store is: f2_temp_blur_unnormalized.stencil((f2_temp_blur_unnormalized_s0_x + 2), (f2_temp_blur_unnormalized_s0_y + 2)) = (uint16)0
  auto hcompute_f2_temp_blur_unnormalized_stencil = f2_temp_blur_unnormalized_s0_x->add_op("op_hcompute_f2_temp_blur_unnormalized_stencil");
  hcompute_f2_temp_blur_unnormalized_stencil->add_function("hcompute_f2_temp_blur_unnormalized_stencil");
  prg.buffer_port_widths["f2_temp_blur_unnormalized_stencil"] = 16;
  hcompute_f2_temp_blur_unnormalized_stencil->add_store("f2_temp_blur_unnormalized_stencil", "(f2_temp_blur_unnormalized_s0_y + 2)", "(f2_temp_blur_unnormalized_s0_x + 2)");
  auto f2_temp_blur_unnormalized_s1_y = prg.add_loop("f2_temp_blur_unnormalized_s1_y", -2, 32);
  auto f2_temp_blur_unnormalized_s1_x = f2_temp_blur_unnormalized_s1_y->add_loop("f2_temp_blur_unnormalized_s1_x", -2, 32);

//store is: f2_temp_blur_unnormalized.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2)) = ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)3) + (f2_temp_blur_unnormalized.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2)) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 3), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)21) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 4), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)3) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 3))*(uint16)21) + ((((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 4), (f2_temp_blur_unnormalized_s1_y + 3))*(uint16)7) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 4)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 4), (f2_temp_blur_unnormalized_s1_y + 4)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 3), (f2_temp_blur_unnormalized_s1_y + 4))*(uint16)7))))*(uint16)3) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 3), (f2_temp_blur_unnormalized_s1_y + 3))*(uint16)158)))))))
  auto hcompute_f2_temp_blur_unnormalized_stencil_1 = f2_temp_blur_unnormalized_s1_x->add_op("op_hcompute_f2_temp_blur_unnormalized_stencil_1");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_function("hcompute_f2_temp_blur_unnormalized_stencil_1");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 3)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 4)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 3)", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 3)", "(f2_temp_blur_unnormalized_s1_x + 4)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 4)", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 4)", "(f2_temp_blur_unnormalized_s1_x + 4)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 4)", "(f2_temp_blur_unnormalized_s1_x + 3)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_stencil", "(f2_temp_blur_unnormalized_s1_y + 3)", "(f2_temp_blur_unnormalized_s1_x + 3)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_load("f2_temp_blur_unnormalized_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f2_temp_blur_unnormalized_stencil_1->add_store("f2_temp_blur_unnormalized_stencil", "(f2_temp_blur_unnormalized_s1_y + 2)", "(f2_temp_blur_unnormalized_s1_x + 2)");

//consuming f2_temp_blur_unnormalized.stencil
////producing l1_up.stencil
  auto l1_up_s0_y = prg.add_loop("l1_up_s0_y", -1, 33);
  auto l1_up_s0_x = l1_up_s0_y->add_loop("l1_up_s0_x", -1, 33);

//store is: l1_up.stencil((l1_up_s0_x + 1), (l1_up_s0_y + 1)) = (f2_temp_blur_unnormalized.stencil((l1_up_s0_x + 1), (l1_up_s0_y + 1))/(uint16)256)
  auto hcompute_l1_up_stencil = l1_up_s0_x->add_op("op_hcompute_l1_up_stencil");
  hcompute_l1_up_stencil->add_function("hcompute_l1_up_stencil");
  hcompute_l1_up_stencil->add_load("f2_temp_blur_unnormalized_stencil", "(l1_up_s0_y + 1)", "(l1_up_s0_x + 1)");
  prg.buffer_port_widths["l1_up_stencil"] = 16;
  hcompute_l1_up_stencil->add_store("l1_up_stencil", "(l1_up_s0_y + 1)", "(l1_up_s0_x + 1)");

//consuming l1_up.stencil
////producing f1_up.stencil
  auto f1_up_s0_y = prg.add_loop("f1_up_s0_y", -1, 33);
  auto f1_up_s0_x = f1_up_s0_y->add_loop("f1_up_s0_x", -1, 33);

//store is: f1_up.stencil((f1_up_s0_x + 1), (f1_up_s0_y + 1)) = (l1_up.stencil((f1_up_s0_x + 1), (f1_up_s0_y + 1)) + h1$0.stencil((f1_up_s0_x + 1), (f1_up_s0_y + 1)))
  auto hcompute_f1_up_stencil_1 = f1_up_s0_x->add_op("op_hcompute_f1_up_stencil_1");
  hcompute_f1_up_stencil_1->add_function("hcompute_f1_up_stencil_1");
  hcompute_f1_up_stencil_1->add_load("h1_0_stencil", "(f1_up_s0_y + 1)", "(f1_up_s0_x + 1)");
  hcompute_f1_up_stencil_1->add_load("l1_up_stencil", "(f1_up_s0_y + 1)", "(f1_up_s0_x + 1)");
  prg.buffer_port_widths["f1_up_stencil"] = 16;
  hcompute_f1_up_stencil_1->add_store("f1_up_stencil", "(f1_up_s0_y + 1)", "(f1_up_s0_x + 1)");

//consuming f1_up.stencil
////producing f1_temp.stencil
  auto f1_temp_s0_y = prg.add_loop("f1_temp_s0_y", -1, 65);
  auto f1_temp_s0_x = f1_temp_s0_y->add_loop("f1_temp_s0_x", -1, 65);

//store is: f1_temp.stencil((f1_temp_s0_x + 1), (f1_temp_s0_y + 1)) = f1_up.stencil(((f1_temp_s0_x/2) + 1), ((f1_temp_s0_y/2) + 1))
  auto hcompute_f1_temp_stencil = f1_temp_s0_x->add_op("op_hcompute_f1_temp_stencil");
  hcompute_f1_temp_stencil->add_function("hcompute_f1_temp_stencil");
  hcompute_f1_temp_stencil->add_load("f1_up_stencil", "(floor((f1_temp_s0_y/2)) + 1)", "(floor((f1_temp_s0_x/2)) + 1)");
  prg.buffer_port_widths["f1_temp_stencil"] = 16;
  hcompute_f1_temp_stencil->add_store("f1_temp_stencil", "(f1_temp_s0_y + 1)", "(f1_temp_s0_x + 1)");

//consuming f1_temp.stencil
////producing f1_temp_blur_unnormalized.stencil
  auto f1_temp_blur_unnormalized_s0_y = prg.add_loop("f1_temp_blur_unnormalized_s0_y", -1, 63);
  auto f1_temp_blur_unnormalized_s0_x = f1_temp_blur_unnormalized_s0_y->add_loop("f1_temp_blur_unnormalized_s0_x", -1, 63);

//store is: f1_temp_blur_unnormalized.stencil((f1_temp_blur_unnormalized_s0_x + 1), (f1_temp_blur_unnormalized_s0_y + 1)) = (uint16)0
  auto hcompute_f1_temp_blur_unnormalized_stencil = f1_temp_blur_unnormalized_s0_x->add_op("op_hcompute_f1_temp_blur_unnormalized_stencil");
  hcompute_f1_temp_blur_unnormalized_stencil->add_function("hcompute_f1_temp_blur_unnormalized_stencil");
  prg.buffer_port_widths["f1_temp_blur_unnormalized_stencil"] = 16;
  hcompute_f1_temp_blur_unnormalized_stencil->add_store("f1_temp_blur_unnormalized_stencil", "(f1_temp_blur_unnormalized_s0_y + 1)", "(f1_temp_blur_unnormalized_s0_x + 1)");
  auto f1_temp_blur_unnormalized_s1_y = prg.add_loop("f1_temp_blur_unnormalized_s1_y", -1, 63);
  auto f1_temp_blur_unnormalized_s1_x = f1_temp_blur_unnormalized_s1_y->add_loop("f1_temp_blur_unnormalized_s1_x", -1, 63);

//store is: f1_temp_blur_unnormalized.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1)) = ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)3) + (f1_temp_blur_unnormalized.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1)) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)21) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 3), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)3) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)21) + ((((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 3), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)7) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 3)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 3), (f1_temp_blur_unnormalized_s1_y + 3)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 3))*(uint16)7))))*(uint16)3) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)158)))))))
  auto hcompute_f1_temp_blur_unnormalized_stencil_1 = f1_temp_blur_unnormalized_s1_x->add_op("op_hcompute_f1_temp_blur_unnormalized_stencil_1");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_function("hcompute_f1_temp_blur_unnormalized_stencil_1");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 3)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 2)", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 2)", "(f1_temp_blur_unnormalized_s1_x + 3)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 3)", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 3)", "(f1_temp_blur_unnormalized_s1_x + 3)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 3)", "(f1_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_stencil", "(f1_temp_blur_unnormalized_s1_y + 2)", "(f1_temp_blur_unnormalized_s1_x + 2)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_load("f1_temp_blur_unnormalized_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 1)");
  hcompute_f1_temp_blur_unnormalized_stencil_1->add_store("f1_temp_blur_unnormalized_stencil", "(f1_temp_blur_unnormalized_s1_y + 1)", "(f1_temp_blur_unnormalized_s1_x + 1)");

//consuming f1_temp_blur_unnormalized.stencil
////producing l0_up.stencil
  auto l0_up_s0_y = prg.add_loop("l0_up_s0_y", 0, 64);
  auto l0_up_s0_x = l0_up_s0_y->add_loop("l0_up_s0_x", 0, 64);

//store is: l0_up.stencil(l0_up_s0_x, l0_up_s0_y) = (f1_temp_blur_unnormalized.stencil(l0_up_s0_x, l0_up_s0_y)/(uint16)256)
  auto hcompute_l0_up_stencil = l0_up_s0_x->add_op("op_hcompute_l0_up_stencil");
  hcompute_l0_up_stencil->add_function("hcompute_l0_up_stencil");
  hcompute_l0_up_stencil->add_load("f1_temp_blur_unnormalized_stencil", "l0_up_s0_y", "l0_up_s0_x");
  prg.buffer_port_widths["l0_up_stencil"] = 16;
  hcompute_l0_up_stencil->add_store("l0_up_stencil", "l0_up_s0_y", "l0_up_s0_x");

//consuming l0_up.stencil
////producing f0_up.stencil
  auto f0_up_s0_y = prg.add_loop("f0_up_s0_y", 0, 64);
  auto f0_up_s0_x = f0_up_s0_y->add_loop("f0_up_s0_x", 0, 64);

//store is: f0_up.stencil(f0_up_s0_x, f0_up_s0_y) = (l0_up.stencil(f0_up_s0_x, f0_up_s0_y) + h0$0.stencil(f0_up_s0_x, f0_up_s0_y))
  auto hcompute_f0_up_stencil = f0_up_s0_x->add_op("op_hcompute_f0_up_stencil");
  hcompute_f0_up_stencil->add_function("hcompute_f0_up_stencil");
  hcompute_f0_up_stencil->add_load("h0_0_stencil", "f0_up_s0_y", "f0_up_s0_x");
  hcompute_f0_up_stencil->add_load("l0_up_stencil", "f0_up_s0_y", "f0_up_s0_x");
  prg.buffer_port_widths["f0_up_stencil"] = 16;
  hcompute_f0_up_stencil->add_store("f0_up_stencil", "f0_up_s0_y", "f0_up_s0_x");

//consuming f0_up.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = f0_up.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f0_up_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}



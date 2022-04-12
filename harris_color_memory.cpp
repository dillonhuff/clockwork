#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog harris_color() {
  prog prg;
  prg.compute_unit_file = "harris_color_compute.h";
  prg.name = "harris_color";

// Stencil<int16_t, 3, 72, 72> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 66, 66> &hw_output_global_wrapper_stencil = arg_1;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -3, 69);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 36);

//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + -3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + -3)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_s0_x_x*2)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + -3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + -3)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_s0_x_x*2)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + -3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + -3)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_s0_x_x*2)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + -2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + -2)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + -2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + -2)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + -2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + -2)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", -3, 69);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 36);

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_4 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_5 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "2");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", -3, 69);
  auto gray_s0_x_x = gray_s0_y->add_loop("gray_s0_x_x", 0, 36);

//store is: gray.stencil((gray_s0_x_x*2), (gray_s0_y + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*2), (gray_s0_y + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*2), (gray_s0_y + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*2), (gray_s0_y + 3)))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "(gray_s0_x_x*2)", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "(gray_s0_x_x*2)", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "(gray_s0_x_x*2)", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "(gray_s0_y + 3)", "(gray_s0_x_x*2)");

//store is: gray.stencil(((gray_s0_x_x*2) + 1), (gray_s0_y + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*2) + 1), (gray_s0_y + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*2) + 1), (gray_s0_y + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*2) + 1), (gray_s0_y + 3)))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_1 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_function("hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "((gray_s0_x_x*2) + 1)", "1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "((gray_s0_x_x*2) + 1)", "2");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "((gray_s0_x_x*2) + 1)", "0");
  hcompute_gray_stencil_1->add_store("gray_stencil", "(gray_s0_y + 3)", "((gray_s0_x_x*2) + 1)");

//consuming gray.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", -2, 68);
  auto grad_x_unclamp_s0_x_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x_x", 0, 35);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*2), (grad_x_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s0_y + 2)", "(grad_x_unclamp_s0_x_x*2)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + 1), (grad_x_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s0_y + 2)", "((grad_x_unclamp_s0_x_x*2) + 1)");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", -2, 68);
  auto grad_x_unclamp_s1_x_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x_x", 0, 35);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 2)))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 4))))
  auto hcompute_grad_x_unclamp_stencil_2 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_function("hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_load("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 3)", "((grad_x_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 3)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 4)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 4)", "((grad_x_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_x_unclamp_stencil_2->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x*2)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 4))))
  auto hcompute_grad_x_unclamp_stencil_3 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_function("hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_load("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 3)", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 4)", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 4)", "((grad_x_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 3)", "((grad_x_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_x_unclamp_stencil_3->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 1)");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 68);
  auto lxx_s0_x_x = lxx_s0_y->add_loop("lxx_s0_x_x", 0, 35);

//store is: lxx.stencil((lxx_s0_x_x*2), (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "(lxx_s0_y + 2)", "(lxx_s0_x_x*2)");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "(lxx_s0_y + 2)", "(lxx_s0_x_x*2)");

//store is: lxx.stencil(((lxx_s0_x_x*2) + 1), (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_1 = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_function("hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_load("grad_x_unclamp_stencil", "(lxx_s0_y + 2)", "((lxx_s0_x_x*2) + 1)");
  hcompute_lxx_stencil_1->add_store("lxx_stencil", "(lxx_s0_y + 2)", "((lxx_s0_x_x*2) + 1)");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 67);
  auto lgxx_s0_x_x = lgxx_s0_y->add_loop("lgxx_s0_x_x", 0, 34);

//store is: lgxx.stencil((lgxx_s0_x_x*2), (lgxx_s0_y + 1)) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "(lgxx_s0_y + 1)", "(lgxx_s0_x_x*2)");

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + 1), (lgxx_s0_y + 1)) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "(lgxx_s0_y + 1)", "((lgxx_s0_x_x*2) + 1)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 67);
  auto lgxx_s1_x_x = lgxx_s1_y->add_loop("lgxx_s1_x_x", 0, 34);

//store is: lgxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) = (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + (lgxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 3)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 3)) + lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 3)))))))))))
  auto hcompute_lgxx_stencil_2 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_load("lgxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*2)");

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) = (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lgxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 3)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 3)) + lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 3)))))))))))
  auto hcompute_lgxx_stencil_3 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_load("lgxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "((lgxx_s1_x_x*2) + 3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", -2, 68);
  auto grad_y_unclamp_s0_x_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x_x", 0, 35);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*2), (grad_y_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s0_y + 2)", "(grad_y_unclamp_s0_x_x*2)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + 1), (grad_y_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s0_y + 2)", "((grad_y_unclamp_s0_x_x*2) + 1)");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", -2, 68);
  auto grad_y_unclamp_s1_x_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x_x", 0, 35);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 4)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 4))))
  auto hcompute_grad_y_unclamp_stencil_2 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_function("hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_load("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_2->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x*2)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), (grad_y_unclamp_s1_y + 4))))
  auto hcompute_grad_y_unclamp_stencil_3 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_function("hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_load("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "((grad_y_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_y_unclamp_stencil_3->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 1)");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 68);
  auto lxy_s0_x_x = lxy_s0_y->add_loop("lxy_s0_x_x", 0, 35);

//store is: lxy.stencil((lxy_s0_x_x*2), (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*2), (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*2), (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "(lxy_s0_y + 2)", "(lxy_s0_x_x*2)");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "(lxy_s0_y + 2)", "(lxy_s0_x_x*2)");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "(lxy_s0_y + 2)", "(lxy_s0_x_x*2)");

//store is: lxy.stencil(((lxy_s0_x_x*2) + 1), (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + 1), (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + 1), (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_1 = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_function("hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_load("grad_x_unclamp_stencil", "(lxy_s0_y + 2)", "((lxy_s0_x_x*2) + 1)");
  hcompute_lxy_stencil_1->add_load("grad_y_unclamp_stencil", "(lxy_s0_y + 2)", "((lxy_s0_x_x*2) + 1)");
  hcompute_lxy_stencil_1->add_store("lxy_stencil", "(lxy_s0_y + 2)", "((lxy_s0_x_x*2) + 1)");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 67);
  auto lgxy_s0_x_x = lgxy_s0_y->add_loop("lgxy_s0_x_x", 0, 34);

//store is: lgxy.stencil((lgxy_s0_x_x*2), (lgxy_s0_y + 1)) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "(lgxy_s0_y + 1)", "(lgxy_s0_x_x*2)");

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + 1), (lgxy_s0_y + 1)) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "(lgxy_s0_y + 1)", "((lgxy_s0_x_x*2) + 1)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 67);
  auto lgxy_s1_x_x = lgxy_s1_y->add_loop("lgxy_s1_x_x", 0, 34);

//store is: lgxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) = (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + (lgxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 3)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 3)) + lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 3)))))))))))
  auto hcompute_lgxy_stencil_2 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_load("lgxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*2)");

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) = (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lgxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 3)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 3)) + lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 3)))))))))))
  auto hcompute_lgxy_stencil_3 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_load("lgxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "((lgxy_s1_x_x*2) + 3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 68);
  auto lyy_s0_x_x = lyy_s0_y->add_loop("lyy_s0_x_x", 0, 35);

//store is: lyy.stencil((lyy_s0_x_x*2), (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_unclamp_stencil", "(lyy_s0_y + 2)", "(lyy_s0_x_x*2)");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "(lyy_s0_y + 2)", "(lyy_s0_x_x*2)");

//store is: lyy.stencil(((lyy_s0_x_x*2) + 1), (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_1 = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_function("hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_load("grad_y_unclamp_stencil", "(lyy_s0_y + 2)", "((lyy_s0_x_x*2) + 1)");
  hcompute_lyy_stencil_1->add_store("lyy_stencil", "(lyy_s0_y + 2)", "((lyy_s0_x_x*2) + 1)");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 67);
  auto lgyy_s0_x_x = lgyy_s0_y->add_loop("lgyy_s0_x_x", 0, 34);

//store is: lgyy.stencil((lgyy_s0_x_x*2), (lgyy_s0_y + 1)) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "(lgyy_s0_y + 1)", "(lgyy_s0_x_x*2)");

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + 1), (lgyy_s0_y + 1)) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "(lgyy_s0_y + 1)", "((lgyy_s0_x_x*2) + 1)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 67);
  auto lgyy_s1_x_x = lgyy_s1_y->add_loop("lgyy_s1_x_x", 0, 34);

//store is: lgyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) = (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + (lgyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 3)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 3)) + lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 3)))))))))))
  auto hcompute_lgyy_stencil_2 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_load("lgyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*2)");

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) = (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lgyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 3)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 3)) + lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 3)))))))))))
  auto hcompute_lgyy_stencil_3 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_load("lgyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "((lgyy_s1_x_x*2) + 3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 67);
  auto cim_s0_x_x = cim_s0_y->add_loop("cim_s0_x_x", 0, 34);

//store is: cim.stencil((cim_s0_x_x*2), (cim_s0_y + 1)) = ((((lgxx.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "(cim_s0_y + 1)", "(cim_s0_x_x*2)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "(cim_s0_y + 1)", "(cim_s0_x_x*2)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "(cim_s0_y + 1)", "(cim_s0_x_x*2)");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "(cim_s0_y + 1)", "(cim_s0_x_x*2)");

//store is: cim.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1)) = ((((lgxx.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_1 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_function("hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_load("lgxx_stencil", "(cim_s0_y + 1)", "((cim_s0_x_x*2) + 1)");
  hcompute_cim_stencil_1->add_load("lgxy_stencil", "(cim_s0_y + 1)", "((cim_s0_x_x*2) + 1)");
  hcompute_cim_stencil_1->add_load("lgyy_stencil", "(cim_s0_y + 1)", "((cim_s0_x_x*2) + 1)");
  hcompute_cim_stencil_1->add_store("cim_stencil", "(cim_s0_y + 1)", "((cim_s0_x_x*2) + 1)");

//consuming cim.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 66);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 33);

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 2)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 3)");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 66);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 33);

//store is: hw_output_global_wrapper.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)");

  return prg;
}


// empty

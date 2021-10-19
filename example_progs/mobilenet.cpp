#include "example_progs.h"

prog mobilenet() {
  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "mobilenet";

// Stencil<uint16_t, 8, 3, 3> &hw_filter_dw_stencil = arg_0;
  prg.add_input("hw_filter_dw_stencil");
  prg.buffer_port_widths["hw_filter_dw_stencil"] = 16;
// Stencil<uint16_t, 8, 8> &hw_filter_pw_stencil = arg_1;
  prg.add_input("hw_filter_pw_stencil");
  prg.buffer_port_widths["hw_filter_pw_stencil"] = 16;
// Stencil<uint16_t, 8, 30, 30> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 28, 28> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_filter_dw_global_wrapper.stencil
  auto hw_filter_dw_global_wrapper_s0_y = prg.add_loop("hw_filter_dw_global_wrapper_s0_y", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_x = hw_filter_dw_global_wrapper_s0_y->add_loop("hw_filter_dw_global_wrapper_s0_x", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_c = hw_filter_dw_global_wrapper_s0_x->add_loop("hw_filter_dw_global_wrapper_s0_c", 0, 8);

//store is: hw_filter_dw_global_wrapper.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil = hw_filter_dw_global_wrapper_s0_c->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_function("hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_filter_dw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_dw_global_wrapper_stencil->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");

//consuming hw_filter_dw_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);
  auto hw_input_global_wrapper_s0_c = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_c", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_c->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");

//consuming hw_input_global_wrapper.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_y = prg.add_loop("dw_conv_s0_y", 0, 28);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 28);
  auto dw_conv_s0_c = dw_conv_s0_x->add_loop("dw_conv_s0_c", 0, 8);

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_c->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "dw_conv_s0_c");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 28);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 28);
  auto dw_conv_s1_c = dw_conv_s1_x->add_loop("dw_conv_s1_c", 0, 8);
  auto dw_conv_s1_r_dw_y = dw_conv_s1_c->add_loop("dw_conv_s1_r_dw_y", 0, 3);
  auto dw_conv_s1_r_dw_x = dw_conv_s1_r_dw_y->add_loop("dw_conv_s1_r_dw_x", 0, 3);

//store is: dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) = (dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) + int16((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_r_dw_x, dw_conv_s1_r_dw_y)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_r_dw_x + dw_conv_s1_x), (dw_conv_s1_r_dw_y + dw_conv_s1_y)))))
  auto hcompute_dw_conv_stencil_1 = dw_conv_s1_r_dw_x->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "dw_conv_s1_r_dw_y", "dw_conv_s1_r_dw_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_r_dw_y + dw_conv_s1_y)", "(dw_conv_s1_r_dw_x + dw_conv_s1_x)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");

//consuming dw_conv.stencil
////producing hw_filter_pw_global_wrapper.stencil
  auto hw_filter_pw_global_wrapper_s0_c = prg.add_loop("hw_filter_pw_global_wrapper_s0_c", 0, 8);
  auto hw_filter_pw_global_wrapper_s0_k = hw_filter_pw_global_wrapper_s0_c->add_loop("hw_filter_pw_global_wrapper_s0_k", 0, 8);

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
  auto hcompute_hw_filter_pw_global_wrapper_stencil = hw_filter_pw_global_wrapper_s0_k->add_op("op_hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_function("hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_load("hw_filter_pw_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");
  prg.buffer_port_widths["hw_filter_pw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_pw_global_wrapper_stencil->add_store("hw_filter_pw_global_wrapper_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");

//consuming hw_filter_pw_global_wrapper.stencil
////producing pw_conv.stencil
  auto pw_conv_s0_y = prg.add_loop("pw_conv_s0_y", 0, 28);
  auto pw_conv_s0_x = pw_conv_s0_y->add_loop("pw_conv_s0_x", 0, 28);
  auto pw_conv_s0_c = pw_conv_s0_x->add_loop("pw_conv_s0_c", 0, 8);
  auto pw_conv_s0_k = pw_conv_s0_c->add_loop("pw_conv_s0_k", 0, 8);

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_c, pw_conv_s0_x, pw_conv_s0_y) = (int16)0
  auto hcompute_pw_conv_stencil = pw_conv_s0_k->add_op("op_hcompute_pw_conv_stencil");
  hcompute_pw_conv_stencil->add_function("hcompute_pw_conv_stencil");
  prg.buffer_port_widths["pw_conv_stencil"] = 16;
  hcompute_pw_conv_stencil->add_store("pw_conv_stencil", "pw_conv_s0_y", "pw_conv_s0_x", "pw_conv_s0_c", "pw_conv_s0_k");
  auto pw_conv_s1_y = prg.add_loop("pw_conv_s1_y", 0, 28);
  auto pw_conv_s1_x = pw_conv_s1_y->add_loop("pw_conv_s1_x", 0, 28);
  auto pw_conv_s1_c = pw_conv_s1_x->add_loop("pw_conv_s1_c", 0, 8);
  auto pw_conv_s1_k = pw_conv_s1_c->add_loop("pw_conv_s1_k", 0, 8);

//store is: pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) = (pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) + (dw_conv.stencil(pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y)*int16(hw_filter_pw_global_wrapper.stencil(pw_conv_s1_k, pw_conv_s1_c))))
  auto hcompute_pw_conv_stencil_1 = pw_conv_s1_k->add_op("op_hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_function("hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_load("dw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c");
  hcompute_pw_conv_stencil_1->add_load("hw_filter_pw_global_wrapper_stencil", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_load("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_store("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");

//consuming pw_conv.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 28);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 28);
  auto pw_conv_reduction_s0_k = pw_conv_reduction_s0_x->add_loop("pw_conv_reduction_s0_k", 0, 8);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_k->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "pw_conv_reduction_s0_k");
  auto pw_conv_reduction_s1_y = prg.add_loop("pw_conv_reduction_s1_y", 0, 28);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 28);
  auto pw_conv_reduction_s1_k = pw_conv_reduction_s1_x->add_loop("pw_conv_reduction_s1_k", 0, 8);
  auto pw_conv_reduction_s1_r_pw_x = pw_conv_reduction_s1_k->add_loop("pw_conv_reduction_s1_r_pw_x", 0, 8);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_r_pw_x, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s1_r_pw_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_r_pw_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);
  auto hw_output_s0_k = hw_output_s0_x_xi->add_loop("hw_output_s0_k", 0, 8);

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_k->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");

  return prg;
}

prog mobilenet_small() {
  prog prg;
  prg.compute_unit_file = "mobilenet_small_compute.h";
  prg.name = "mobilenet_small";

// Stencil<int16_t, 2, 3, 3> &hw_filter_dw_stencil = arg_0;
  prg.add_input("hw_filter_dw_stencil");
  prg.buffer_port_widths["hw_filter_dw_stencil"] = 16;
// Stencil<int16_t, 2, 2> &hw_filter_pw_stencil = arg_1;
  prg.add_input("hw_filter_pw_stencil");
  prg.buffer_port_widths["hw_filter_pw_stencil"] = 16;
// Stencil<int16_t, 2, 11, 11> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 2, 9, 9> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_filter_dw_global_wrapper.stencil
  auto hw_filter_dw_global_wrapper_s0_y = prg.add_loop("hw_filter_dw_global_wrapper_s0_y", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_x = hw_filter_dw_global_wrapper_s0_y->add_loop("hw_filter_dw_global_wrapper_s0_x", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_c = hw_filter_dw_global_wrapper_s0_x->add_loop("hw_filter_dw_global_wrapper_s0_c", 0, 2);

//store is: hw_filter_dw_global_wrapper.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil = hw_filter_dw_global_wrapper_s0_c->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_function("hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_filter_dw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_dw_global_wrapper_stencil->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");

//consuming hw_filter_dw_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 11);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 11);
  auto hw_input_global_wrapper_s0_c = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_c", 0, 2);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_c->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");

//consuming hw_input_global_wrapper.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_y = prg.add_loop("dw_conv_s0_y", 0, 9);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 9);
  auto dw_conv_s0_c = dw_conv_s0_x->add_loop("dw_conv_s0_c", 0, 2);

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_c->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "dw_conv_s0_c");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 9);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 9);
  auto dw_conv_s1_c = dw_conv_s1_x->add_loop("dw_conv_s1_c", 0, 2);

//store is: dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_1 = dw_conv_s1_c->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");

//consuming dw_conv.stencil
////producing hw_filter_pw_global_wrapper.stencil
  auto hw_filter_pw_global_wrapper_s0_c = prg.add_loop("hw_filter_pw_global_wrapper_s0_c", 0, 2);
  auto hw_filter_pw_global_wrapper_s0_k = hw_filter_pw_global_wrapper_s0_c->add_loop("hw_filter_pw_global_wrapper_s0_k", 0, 2);

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
  auto hcompute_hw_filter_pw_global_wrapper_stencil = hw_filter_pw_global_wrapper_s0_k->add_op("op_hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_function("hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_load("hw_filter_pw_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");
  prg.buffer_port_widths["hw_filter_pw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_pw_global_wrapper_stencil->add_store("hw_filter_pw_global_wrapper_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");

//consuming hw_filter_pw_global_wrapper.stencil
////producing pw_conv.stencil
  auto pw_conv_s0_y = prg.add_loop("pw_conv_s0_y", 0, 9);
  auto pw_conv_s0_x = pw_conv_s0_y->add_loop("pw_conv_s0_x", 0, 9);
  auto pw_conv_s0_c = pw_conv_s0_x->add_loop("pw_conv_s0_c", 0, 2);
  auto pw_conv_s0_k = pw_conv_s0_c->add_loop("pw_conv_s0_k", 0, 2);

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_c, pw_conv_s0_x, pw_conv_s0_y) = (int16)0
  auto hcompute_pw_conv_stencil = pw_conv_s0_k->add_op("op_hcompute_pw_conv_stencil");
  hcompute_pw_conv_stencil->add_function("hcompute_pw_conv_stencil");
  prg.buffer_port_widths["pw_conv_stencil"] = 16;
  hcompute_pw_conv_stencil->add_store("pw_conv_stencil", "pw_conv_s0_y", "pw_conv_s0_x", "pw_conv_s0_c", "pw_conv_s0_k");
  auto pw_conv_s1_y = prg.add_loop("pw_conv_s1_y", 0, 9);
  auto pw_conv_s1_x = pw_conv_s1_y->add_loop("pw_conv_s1_x", 0, 9);
  auto pw_conv_s1_c = pw_conv_s1_x->add_loop("pw_conv_s1_c", 0, 2);
  auto pw_conv_s1_k = pw_conv_s1_c->add_loop("pw_conv_s1_k", 0, 2);

//store is: pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) = (pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) + (hw_filter_pw_global_wrapper.stencil(pw_conv_s1_k, pw_conv_s1_c)*dw_conv.stencil(pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y)))
  auto hcompute_pw_conv_stencil_1 = pw_conv_s1_k->add_op("op_hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_function("hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_load("dw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c");
  hcompute_pw_conv_stencil_1->add_load("hw_filter_pw_global_wrapper_stencil", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_load("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_store("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");

//consuming pw_conv.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 9);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 9);
  auto pw_conv_reduction_s0_k = pw_conv_reduction_s0_x->add_loop("pw_conv_reduction_s0_k", 0, 2);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_k->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "pw_conv_reduction_s0_k");
  auto pw_conv_reduction_s1_y = prg.add_loop("pw_conv_reduction_s1_y", 0, 9);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 9);
  auto pw_conv_reduction_s1_k = pw_conv_reduction_s1_x->add_loop("pw_conv_reduction_s1_k", 0, 2);
  auto pw_conv_reduction_s1_r_pw_x = pw_conv_reduction_s1_k->add_loop("pw_conv_reduction_s1_r_pw_x", 0, 2);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_r_pw_x, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s1_r_pw_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_r_pw_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 9);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 9);
  auto hw_output_s0_k = hw_output_s0_x_xi->add_loop("hw_output_s0_k", 0, 2);

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_k->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");

  return prg;
}

prog mobilenet_unrolled() {
  prog prg;
  prg.compute_unit_file = "mobilenet_unrolled_compute.h";
  prg.name = "mobilenet_unrolled";

// Stencil<int16_t, 4, 3, 3> &hw_filter_dw_stencil = arg_0;
  prg.add_input("hw_filter_dw_stencil");
  prg.buffer_port_widths["hw_filter_dw_stencil"] = 16;
// Stencil<int16_t, 3, 4> &hw_filter_pw_stencil = arg_1;
  prg.add_input("hw_filter_pw_stencil");
  prg.buffer_port_widths["hw_filter_pw_stencil"] = 16;
// Stencil<int16_t, 4, 30, 30> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 3, 28, 28> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_filter_dw_global_wrapper.stencil
  auto hw_filter_dw_global_wrapper_s0_y = prg.add_loop("hw_filter_dw_global_wrapper_s0_y", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_x = hw_filter_dw_global_wrapper_s0_y->add_loop("hw_filter_dw_global_wrapper_s0_x", 0, 3);

//store is: hw_filter_dw_global_wrapper.stencil(0, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(0, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_function("hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_filter_dw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_dw_global_wrapper_stencil->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "0");

//store is: hw_filter_dw_global_wrapper.stencil(1, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(1, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil_1 = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil_1");
  hcompute_hw_filter_dw_global_wrapper_stencil_1->add_function("hcompute_hw_filter_dw_global_wrapper_stencil_1");
  hcompute_hw_filter_dw_global_wrapper_stencil_1->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "1");
  hcompute_hw_filter_dw_global_wrapper_stencil_1->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "1");

//store is: hw_filter_dw_global_wrapper.stencil(2, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(2, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil_2 = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil_2");
  hcompute_hw_filter_dw_global_wrapper_stencil_2->add_function("hcompute_hw_filter_dw_global_wrapper_stencil_2");
  hcompute_hw_filter_dw_global_wrapper_stencil_2->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "2");
  hcompute_hw_filter_dw_global_wrapper_stencil_2->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "2");

//store is: hw_filter_dw_global_wrapper.stencil(3, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(3, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil_3 = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil_3");
  hcompute_hw_filter_dw_global_wrapper_stencil_3->add_function("hcompute_hw_filter_dw_global_wrapper_stencil_3");
  hcompute_hw_filter_dw_global_wrapper_stencil_3->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "3");
  hcompute_hw_filter_dw_global_wrapper_stencil_3->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "3");

//consuming hw_filter_dw_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 32);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 32);

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

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//consuming hw_input_global_wrapper.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_y = prg.add_loop("dw_conv_s0_y", 0, 30);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 30);

//store is: dw_conv.stencil(0, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "0");

//store is: dw_conv.stencil(1, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil_1 = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "1");

//store is: dw_conv.stencil(2, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil_2 = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_function("hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "2");

//store is: dw_conv.stencil(3, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil_3 = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_function("hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "3");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 30);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 30);

//store is: dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(0, 0, 0)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 1)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 2)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(0, 1, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_4 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_function("hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "0");
  hcompute_dw_conv_stencil_4->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "0");

//store is: dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(1, 0, 0)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 1)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 2)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(1, 1, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_5 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_5");
  hcompute_dw_conv_stencil_5->add_function("hcompute_dw_conv_stencil_5");
  hcompute_dw_conv_stencil_5->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "1");
  hcompute_dw_conv_stencil_5->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "1");

//store is: dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(2, 0, 0)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 1)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 2)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(2, 1, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_6 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_6");
  hcompute_dw_conv_stencil_6->add_function("hcompute_dw_conv_stencil_6");
  hcompute_dw_conv_stencil_6->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "2");
  hcompute_dw_conv_stencil_6->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "2");

//store is: dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(3, 0, 0)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 1)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 2)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(3, 1, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_7 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_7");
  hcompute_dw_conv_stencil_7->add_function("hcompute_dw_conv_stencil_7");
  hcompute_dw_conv_stencil_7->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "3");
  hcompute_dw_conv_stencil_7->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "3");

//consuming dw_conv.stencil
////producing hw_filter_pw_global_wrapper.stencil
  auto hw_filter_pw_global_wrapper_s0_c = prg.add_loop("hw_filter_pw_global_wrapper_s0_c", 0, 4);
  auto hw_filter_pw_global_wrapper_s0_k = hw_filter_pw_global_wrapper_s0_c->add_loop("hw_filter_pw_global_wrapper_s0_k", 0, 3);

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
  auto hcompute_hw_filter_pw_global_wrapper_stencil = hw_filter_pw_global_wrapper_s0_k->add_op("op_hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_function("hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_load("hw_filter_pw_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");
  prg.buffer_port_widths["hw_filter_pw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_pw_global_wrapper_stencil->add_store("hw_filter_pw_global_wrapper_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");

//consuming hw_filter_pw_global_wrapper.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 30);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 30);

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_x->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "0");

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s0_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "1");

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil_2 = pw_conv_reduction_s0_x->add_op("op_hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_function("hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "2");
  auto pw_conv_reduction_s1_y = prg.add_loop("pw_conv_reduction_s1_y", 0, 30);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 30);

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(0, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(0, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(0, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(0, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
  auto hcompute_pw_conv_reduction_stencil_3 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_function("hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "3");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "0", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "1", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "3", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "2", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_3->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(1, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(1, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(1, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(1, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
  auto hcompute_pw_conv_reduction_stencil_4 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_4");
  hcompute_pw_conv_reduction_stencil_4->add_function("hcompute_pw_conv_reduction_stencil_4");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "3");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "0", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "1", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "3", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "2", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_4->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(2, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(2, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(2, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(2, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
  auto hcompute_pw_conv_reduction_stencil_5 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_5");
  hcompute_pw_conv_reduction_stencil_5->add_function("hcompute_pw_conv_reduction_stencil_5");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "3");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "1", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "3", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "2", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "0", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_5->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 30);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 30);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}



#include "example_progs.h"

prog conv_layer() {
  prog prg;
  prg.compute_unit_file = "conv_layer_compute.h";
  prg.name = "conv_layer";

// Stencil<uint16_t, 18, 18, 4> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 16, 16, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_c = prg.add_loop("hw_input_s0_c", 0, 4);
  auto hw_input_s0_y = hw_input_s0_c->add_loop("hw_input_s0_y", 0, 18);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 18);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_c) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_c)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");

//consuming hw_input.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_c = prg.add_loop("dw_conv_s0_c", 0, 4);
  auto dw_conv_s0_y = dw_conv_s0_c->add_loop("dw_conv_s0_y", 0, 16);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 16);

//store is: dw_conv.stencil(dw_conv_s0_x, dw_conv_s0_y, dw_conv_s0_c) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_x", "dw_conv_s0_y", "dw_conv_s0_c");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 16);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x, dw_conv_s1_y, 0) = (((((((((dw_conv.stencil(dw_conv_s1_x, dw_conv_s1_y, 0) + int16(hw_input.stencil(dw_conv_s1_x, dw_conv_s1_y, 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), dw_conv_s1_y, 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), dw_conv_s1_y, 0))) + int16(hw_input.stencil(dw_conv_s1_x, (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil(dw_conv_s1_x, (dw_conv_s1_y + 2), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), (dw_conv_s1_y + 2), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), (dw_conv_s1_y + 2), 0)))
  auto hcompute_dw_conv_stencil_1 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_load("dw_conv_stencil", "dw_conv_s1_x", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "dw_conv_s1_x", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 1)", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 2)", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "dw_conv_s1_x", "(dw_conv_s1_y + 1)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 1)", "(dw_conv_s1_y + 1)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 2)", "(dw_conv_s1_y + 1)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "dw_conv_s1_x", "(dw_conv_s1_y + 2)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 1)", "(dw_conv_s1_y + 2)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 2)", "(dw_conv_s1_y + 2)", "0");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s1_x", "dw_conv_s1_y", "0");
  auto dw_conv_s1_y_1 = prg.add_loop("dw_conv_s1_y_1", 0, 16);
  auto dw_conv_s1_x_1 = dw_conv_s1_y_1->add_loop("dw_conv_s1_x_1", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1) = (((((((((dw_conv.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1) + int16(hw_input.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), dw_conv_s1_y_1, 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), dw_conv_s1_y_1, 1))) + int16(hw_input.stencil(dw_conv_s1_x_1, (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil(dw_conv_s1_x_1, (dw_conv_s1_y_1 + 2), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), (dw_conv_s1_y_1 + 2), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), (dw_conv_s1_y_1 + 2), 1)))
  auto hcompute_dw_conv_stencil_2 = dw_conv_s1_x_1->add_op("op_hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_function("hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_load("dw_conv_stencil", "dw_conv_s1_x_1", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "dw_conv_s1_x_1", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 1)", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 2)", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "dw_conv_s1_x_1", "(dw_conv_s1_y_1 + 1)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 1)", "(dw_conv_s1_y_1 + 1)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 2)", "(dw_conv_s1_y_1 + 1)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "dw_conv_s1_x_1", "(dw_conv_s1_y_1 + 2)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 1)", "(dw_conv_s1_y_1 + 2)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 2)", "(dw_conv_s1_y_1 + 2)", "1");
  hcompute_dw_conv_stencil_2->add_store("dw_conv_stencil", "dw_conv_s1_x_1", "dw_conv_s1_y_1", "1");
  auto dw_conv_s1_y_2 = prg.add_loop("dw_conv_s1_y_2", 0, 16);
  auto dw_conv_s1_x_2 = dw_conv_s1_y_2->add_loop("dw_conv_s1_x_2", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2) = (((((((((dw_conv.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2) + int16(hw_input.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), dw_conv_s1_y_2, 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), dw_conv_s1_y_2, 2))) + int16(hw_input.stencil(dw_conv_s1_x_2, (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil(dw_conv_s1_x_2, (dw_conv_s1_y_2 + 2), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), (dw_conv_s1_y_2 + 2), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), (dw_conv_s1_y_2 + 2), 2)))
  auto hcompute_dw_conv_stencil_3 = dw_conv_s1_x_2->add_op("op_hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_function("hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_load("dw_conv_stencil", "dw_conv_s1_x_2", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "dw_conv_s1_x_2", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 1)", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 2)", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "dw_conv_s1_x_2", "(dw_conv_s1_y_2 + 1)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 1)", "(dw_conv_s1_y_2 + 1)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 2)", "(dw_conv_s1_y_2 + 1)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "dw_conv_s1_x_2", "(dw_conv_s1_y_2 + 2)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 1)", "(dw_conv_s1_y_2 + 2)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 2)", "(dw_conv_s1_y_2 + 2)", "2");
  hcompute_dw_conv_stencil_3->add_store("dw_conv_stencil", "dw_conv_s1_x_2", "dw_conv_s1_y_2", "2");
  auto dw_conv_s1_y_3 = prg.add_loop("dw_conv_s1_y_3", 0, 16);
  auto dw_conv_s1_x_3 = dw_conv_s1_y_3->add_loop("dw_conv_s1_x_3", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3) = (((((((((dw_conv.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3) + int16(hw_input.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), dw_conv_s1_y_3, 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), dw_conv_s1_y_3, 3))) + int16(hw_input.stencil(dw_conv_s1_x_3, (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil(dw_conv_s1_x_3, (dw_conv_s1_y_3 + 2), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), (dw_conv_s1_y_3 + 2), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), (dw_conv_s1_y_3 + 2), 3)))
  auto hcompute_dw_conv_stencil_4 = dw_conv_s1_x_3->add_op("op_hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_function("hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_load("dw_conv_stencil", "dw_conv_s1_x_3", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "dw_conv_s1_x_3", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 1)", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 2)", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "dw_conv_s1_x_3", "(dw_conv_s1_y_3 + 1)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 1)", "(dw_conv_s1_y_3 + 1)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 2)", "(dw_conv_s1_y_3 + 1)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "dw_conv_s1_x_3", "(dw_conv_s1_y_3 + 2)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 1)", "(dw_conv_s1_y_3 + 2)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 2)", "(dw_conv_s1_y_3 + 2)", "3");
  hcompute_dw_conv_stencil_4->add_store("dw_conv_stencil", "dw_conv_s1_x_3", "dw_conv_s1_y_3", "3");

//consuming dw_conv.stencil
////producing pw_conv.stencil
  auto pw_conv_s0_k = prg.add_loop("pw_conv_s0_k", 0, 3);
  auto pw_conv_s0_y = pw_conv_s0_k->add_loop("pw_conv_s0_y", 0, 16);
  auto pw_conv_s0_x = pw_conv_s0_y->add_loop("pw_conv_s0_x", 0, 16);
  auto pw_conv_s0_c = pw_conv_s0_x->add_loop("pw_conv_s0_c", 0, 4);

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_x, pw_conv_s0_y, pw_conv_s0_c) = (int16)0
  auto hcompute_pw_conv_stencil = pw_conv_s0_c->add_op("op_hcompute_pw_conv_stencil");
  hcompute_pw_conv_stencil->add_function("hcompute_pw_conv_stencil");
  prg.buffer_port_widths["pw_conv_stencil"] = 16;
  hcompute_pw_conv_stencil->add_store("pw_conv_stencil", "pw_conv_s0_k", "pw_conv_s0_x", "pw_conv_s0_y", "pw_conv_s0_c");
  auto pw_conv_s1_y = prg.add_loop("pw_conv_s1_y", 0, 16);
  auto pw_conv_s1_x = pw_conv_s1_y->add_loop("pw_conv_s1_x", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(0, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
  auto hcompute_pw_conv_stencil_1 = pw_conv_s1_x->add_op("op_hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_function("hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_load("dw_conv_stencil", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_1->add_load("pw_conv_stencil", "0", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_1->add_store("pw_conv_stencil", "0", "pw_conv_s1_x", "pw_conv_s1_y", "0");

//store is: pw_conv.stencil(1, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(1, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
  auto hcompute_pw_conv_stencil_2 = pw_conv_s1_x->add_op("op_hcompute_pw_conv_stencil_2");
  hcompute_pw_conv_stencil_2->add_function("hcompute_pw_conv_stencil_2");
  hcompute_pw_conv_stencil_2->add_load("dw_conv_stencil", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_2->add_load("pw_conv_stencil", "1", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_2->add_store("pw_conv_stencil", "1", "pw_conv_s1_x", "pw_conv_s1_y", "0");

//store is: pw_conv.stencil(2, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(2, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
  auto hcompute_pw_conv_stencil_3 = pw_conv_s1_x->add_op("op_hcompute_pw_conv_stencil_3");
  hcompute_pw_conv_stencil_3->add_function("hcompute_pw_conv_stencil_3");
  hcompute_pw_conv_stencil_3->add_load("dw_conv_stencil", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_3->add_load("pw_conv_stencil", "2", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_3->add_store("pw_conv_stencil", "2", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  auto pw_conv_s1_y_1 = prg.add_loop("pw_conv_s1_y_1", 0, 16);
  auto pw_conv_s1_x_1 = pw_conv_s1_y_1->add_loop("pw_conv_s1_x_1", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(0, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
  auto hcompute_pw_conv_stencil_4 = pw_conv_s1_x_1->add_op("op_hcompute_pw_conv_stencil_4");
  hcompute_pw_conv_stencil_4->add_function("hcompute_pw_conv_stencil_4");
  hcompute_pw_conv_stencil_4->add_load("dw_conv_stencil", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_4->add_load("pw_conv_stencil", "0", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_4->add_store("pw_conv_stencil", "0", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");

//store is: pw_conv.stencil(1, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(1, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
  auto hcompute_pw_conv_stencil_5 = pw_conv_s1_x_1->add_op("op_hcompute_pw_conv_stencil_5");
  hcompute_pw_conv_stencil_5->add_function("hcompute_pw_conv_stencil_5");
  hcompute_pw_conv_stencil_5->add_load("dw_conv_stencil", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_5->add_load("pw_conv_stencil", "1", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_5->add_store("pw_conv_stencil", "1", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");

//store is: pw_conv.stencil(2, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(2, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
  auto hcompute_pw_conv_stencil_6 = pw_conv_s1_x_1->add_op("op_hcompute_pw_conv_stencil_6");
  hcompute_pw_conv_stencil_6->add_function("hcompute_pw_conv_stencil_6");
  hcompute_pw_conv_stencil_6->add_load("dw_conv_stencil", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_6->add_load("pw_conv_stencil", "2", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_6->add_store("pw_conv_stencil", "2", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  auto pw_conv_s1_y_2 = prg.add_loop("pw_conv_s1_y_2", 0, 16);
  auto pw_conv_s1_x_2 = pw_conv_s1_y_2->add_loop("pw_conv_s1_x_2", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(0, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
  auto hcompute_pw_conv_stencil_7 = pw_conv_s1_x_2->add_op("op_hcompute_pw_conv_stencil_7");
  hcompute_pw_conv_stencil_7->add_function("hcompute_pw_conv_stencil_7");
  hcompute_pw_conv_stencil_7->add_load("dw_conv_stencil", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_7->add_load("pw_conv_stencil", "0", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_7->add_store("pw_conv_stencil", "0", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");

//store is: pw_conv.stencil(1, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(1, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
  auto hcompute_pw_conv_stencil_8 = pw_conv_s1_x_2->add_op("op_hcompute_pw_conv_stencil_8");
  hcompute_pw_conv_stencil_8->add_function("hcompute_pw_conv_stencil_8");
  hcompute_pw_conv_stencil_8->add_load("dw_conv_stencil", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_8->add_load("pw_conv_stencil", "1", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_8->add_store("pw_conv_stencil", "1", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");

//store is: pw_conv.stencil(2, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(2, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
  auto hcompute_pw_conv_stencil_9 = pw_conv_s1_x_2->add_op("op_hcompute_pw_conv_stencil_9");
  hcompute_pw_conv_stencil_9->add_function("hcompute_pw_conv_stencil_9");
  hcompute_pw_conv_stencil_9->add_load("dw_conv_stencil", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_9->add_load("pw_conv_stencil", "2", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_9->add_store("pw_conv_stencil", "2", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  auto pw_conv_s1_y_3 = prg.add_loop("pw_conv_s1_y_3", 0, 16);
  auto pw_conv_s1_x_3 = pw_conv_s1_y_3->add_loop("pw_conv_s1_x_3", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(0, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
  auto hcompute_pw_conv_stencil_10 = pw_conv_s1_x_3->add_op("op_hcompute_pw_conv_stencil_10");
  hcompute_pw_conv_stencil_10->add_function("hcompute_pw_conv_stencil_10");
  hcompute_pw_conv_stencil_10->add_load("dw_conv_stencil", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_10->add_load("pw_conv_stencil", "0", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_10->add_store("pw_conv_stencil", "0", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");

//store is: pw_conv.stencil(1, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(1, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
  auto hcompute_pw_conv_stencil_11 = pw_conv_s1_x_3->add_op("op_hcompute_pw_conv_stencil_11");
  hcompute_pw_conv_stencil_11->add_function("hcompute_pw_conv_stencil_11");
  hcompute_pw_conv_stencil_11->add_load("dw_conv_stencil", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_11->add_load("pw_conv_stencil", "1", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_11->add_store("pw_conv_stencil", "1", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");

//store is: pw_conv.stencil(2, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(2, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
  auto hcompute_pw_conv_stencil_12 = pw_conv_s1_x_3->add_op("op_hcompute_pw_conv_stencil_12");
  hcompute_pw_conv_stencil_12->add_function("hcompute_pw_conv_stencil_12");
  hcompute_pw_conv_stencil_12->add_load("dw_conv_stencil", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_12->add_load("pw_conv_stencil", "2", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_12->add_store("pw_conv_stencil", "2", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");

//consuming pw_conv.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 16);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 16);
  auto pw_conv_reduction_s0_k = pw_conv_reduction_s0_x->add_loop("pw_conv_reduction_s0_k", 0, 3);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_k->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_k", "pw_conv_reduction_s0_x", "pw_conv_reduction_s0_y");
  auto pw_conv_reduction_s1_r_pw_x = prg.add_loop("pw_conv_reduction_s1_r_pw_x", 0, 4);
  auto pw_conv_reduction_s1_y = pw_conv_reduction_s1_r_pw_x->add_loop("pw_conv_reduction_s1_y", 0, 16);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 16);

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_stencil", "0", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_r_pw_x");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_reduction_stencil", "0", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "0", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
  auto hcompute_pw_conv_reduction_stencil_2 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_function("hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_load("pw_conv_stencil", "1", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_r_pw_x");
  hcompute_pw_conv_reduction_stencil_2->add_load("pw_conv_reduction_stencil", "1", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");
  hcompute_pw_conv_reduction_stencil_2->add_store("pw_conv_reduction_stencil", "1", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
  auto hcompute_pw_conv_reduction_stencil_3 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_function("hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_load("pw_conv_stencil", "2", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_r_pw_x");
  hcompute_pw_conv_reduction_stencil_3->add_load("pw_conv_reduction_stencil", "2", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");
  hcompute_pw_conv_reduction_stencil_3->add_store("pw_conv_reduction_stencil", "2", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_k = prg.add_loop("hw_output_s0_k", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_k->add_loop("hw_output_s0_y_yi", 0, 16);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 16);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_k) = uint8(max(pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi), (int16)0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_k", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_k");

  return prg;
}

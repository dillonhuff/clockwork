#include "prog.h"

prog matmul_unroll2() {
  prog prg;
  prg.compute_unit_file = "matmul_unroll2_compute.h";
  prg.name = "matmul_unroll2";

// Stencil<int16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 32);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 32);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 32);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 32);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_x->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x");

//consuming hw_kernel_global_wrapper.stencil
////producing mul.stencil
  auto mul_s0_y = prg.add_loop("mul_s0_y", 0, 32);
  auto mul_s0_x_x = mul_s0_y->add_loop("mul_s0_x_x", 0, 32);

//store is: mul.stencil((mul_s0_x_x*2), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil = mul_s0_x_x->add_op("op_hcompute_mul_stencil");
  hcompute_mul_stencil->add_function("hcompute_mul_stencil");
  prg.buffer_port_widths["mul_stencil"] = 16;
  hcompute_mul_stencil->add_store("mul_stencil", "mul_s0_y", "(mul_s0_x_x*2)");

//store is: mul.stencil(((mul_s0_x_x*2) + 1), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_1 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_function("hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*2) + 1)");
  auto mul_s1_y = prg.add_loop("mul_s1_y", 0, 32);
  auto mul_s1_r_x_rxo = mul_s1_y->add_loop("mul_s1_r_x_rxo", 0, 32);
  auto mul_s1_x_xo = mul_s1_r_x_rxo->add_loop("mul_s1_x_xo", 0, 32);

//store is: mul.stencil((mul_s1_x_xo*2), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*2), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*2), (mul_s1_r_x_rxo*2))) + (mul.stencil((mul_s1_x_xo*2), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*2) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*2), ((mul_s1_r_x_rxo*2) + 1)))))
  auto hcompute_mul_stencil_2 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_function("hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*2)");
  hcompute_mul_stencil_2->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*2) + 1)");
  hcompute_mul_stencil_2->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*2)", "(mul_s1_x_xo*2)");
  hcompute_mul_stencil_2->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*2) + 1)", "(mul_s1_x_xo*2)");
  hcompute_mul_stencil_2->add_load("mul_stencil", "mul_s1_y", "(mul_s1_x_xo*2)");
  hcompute_mul_stencil_2->add_store("mul_stencil", "mul_s1_y", "(mul_s1_x_xo*2)");

//store is: mul.stencil(((mul_s1_x_xo*2) + 1), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*2) + 1), (mul_s1_r_x_rxo*2))) + (mul.stencil(((mul_s1_x_xo*2) + 1), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*2) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*2) + 1), ((mul_s1_r_x_rxo*2) + 1)))))
  auto hcompute_mul_stencil_3 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_function("hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*2)");
  hcompute_mul_stencil_3->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*2) + 1)");
  hcompute_mul_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*2)", "((mul_s1_x_xo*2) + 1)");
  hcompute_mul_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*2) + 1)", "((mul_s1_x_xo*2) + 1)");
  hcompute_mul_stencil_3->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*2) + 1)");
  hcompute_mul_stencil_3->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*2) + 1)");

//consuming mul.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = mul.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("mul_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

//Single tile matmul apps
prog matmul_single() {
  prog prg;
  prg.compute_unit_file = "matmul_single_compute.h";
  prg.name = "matmul_single";

// Stencil<int16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 64, 64> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 64);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 64);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_x->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x");

//consuming hw_kernel_global_wrapper.stencil
////producing mul.stencil
  auto mul_s0_y = prg.add_loop("mul_s0_y", 0, 64);
  auto mul_s0_x_x = mul_s0_y->add_loop("mul_s0_x_x", 0, 8);

//store is: mul.stencil((mul_s0_x_x*8), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil = mul_s0_x_x->add_op("op_hcompute_mul_stencil");
  hcompute_mul_stencil->add_function("hcompute_mul_stencil");
  prg.buffer_port_widths["mul_stencil"] = 16;
  hcompute_mul_stencil->add_store("mul_stencil", "mul_s0_y", "(mul_s0_x_x*8)");

//store is: mul.stencil(((mul_s0_x_x*8) + 1), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_1 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_function("hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 1)");

//store is: mul.stencil(((mul_s0_x_x*8) + 2), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_2 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_function("hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 2)");

//store is: mul.stencil(((mul_s0_x_x*8) + 3), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_3 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_function("hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 3)");

//store is: mul.stencil(((mul_s0_x_x*8) + 4), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_4 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_4");
  hcompute_mul_stencil_4->add_function("hcompute_mul_stencil_4");
  hcompute_mul_stencil_4->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 4)");

//store is: mul.stencil(((mul_s0_x_x*8) + 5), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_5 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_5");
  hcompute_mul_stencil_5->add_function("hcompute_mul_stencil_5");
  hcompute_mul_stencil_5->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 5)");

//store is: mul.stencil(((mul_s0_x_x*8) + 6), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_6 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_6");
  hcompute_mul_stencil_6->add_function("hcompute_mul_stencil_6");
  hcompute_mul_stencil_6->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 6)");

//store is: mul.stencil(((mul_s0_x_x*8) + 7), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_7 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_7");
  hcompute_mul_stencil_7->add_function("hcompute_mul_stencil_7");
  hcompute_mul_stencil_7->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 7)");
  auto mul_s1_y = prg.add_loop("mul_s1_y", 0, 64);
  auto mul_s1_r_x_rxo = mul_s1_y->add_loop("mul_s1_r_x_rxo", 0, 8);
  auto mul_s1_x_xo = mul_s1_r_x_rxo->add_loop("mul_s1_x_xo", 0, 8);

//store is: mul.stencil((mul_s1_x_xo*8), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), (mul_s1_r_x_rxo*8))) + (mul.stencil((mul_s1_x_xo*8), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*8), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_8 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_8");
  hcompute_mul_stencil_8->add_function("hcompute_mul_stencil_8");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_load("mul_stencil", "mul_s1_y", "(mul_s1_x_xo*8)");
  hcompute_mul_stencil_8->add_store("mul_stencil", "mul_s1_y", "(mul_s1_x_xo*8)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 1), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 1), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 1), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_9 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_9");
  hcompute_mul_stencil_9->add_function("hcompute_mul_stencil_9");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 1)");
  hcompute_mul_stencil_9->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 1)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 2), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 2), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 2), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_10 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_10");
  hcompute_mul_stencil_10->add_function("hcompute_mul_stencil_10");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 2)");
  hcompute_mul_stencil_10->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 2)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 3), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 3), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 3), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_11 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_11");
  hcompute_mul_stencil_11->add_function("hcompute_mul_stencil_11");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 3)");
  hcompute_mul_stencil_11->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 3)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 4), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 4), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 4), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_12 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_12");
  hcompute_mul_stencil_12->add_function("hcompute_mul_stencil_12");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 4)");
  hcompute_mul_stencil_12->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 4)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 5), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 5), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 5), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_13 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_13");
  hcompute_mul_stencil_13->add_function("hcompute_mul_stencil_13");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 5)");
  hcompute_mul_stencil_13->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 5)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 6), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 6), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 6), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_14 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_14");
  hcompute_mul_stencil_14->add_function("hcompute_mul_stencil_14");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 6)");
  hcompute_mul_stencil_14->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 6)");

//store is: mul.stencil(((mul_s1_x_xo*8) + 7), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), (mul_s1_r_x_rxo*8))) + (mul.stencil(((mul_s1_x_xo*8) + 7), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*8) + 7), ((mul_s1_r_x_rxo*8) + 6)))))))))))
  auto hcompute_mul_stencil_15 = mul_s1_x_xo->add_op("op_hcompute_mul_stencil_15");
  hcompute_mul_stencil_15->add_function("hcompute_mul_stencil_15");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*8)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 1)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 2)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 3)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 4)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 5)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*8) + 6)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*8)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 1)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 2)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 3)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 4)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 5)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 7)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*8) + 6)", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 7)");
  hcompute_mul_stencil_15->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*8) + 7)");

//consuming mul.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = mul.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("mul_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog matmul_fpga() {
  prog prg;
  prg.compute_unit_file = "resnet_multi_channel_compute.h";
  prg.name = "matmul_fpga";

// Stencil<uint16_t, 64, 58, 58> &input_host_stencil = arg_0;
  prg.add_input("input_glb_stencil");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
// Stencil<uint16_t, 64, 64, 3, 3> &kernel_host_stencil = arg_1;
  prg.add_input("kernel_glb_stencil");
  prg.buffer_port_widths["kernel_glb_stencil"] = 16;
// Stencil<uint16_t, 64, 56, 56> &hw_output_stencil = arg_2;
  prg.add_output("output_glb_stencil");
  prg.buffer_port_widths["output_glb_stencil"] = 16;

//consuming kernel_glb.stencil
////producing output_glb.stencil
  auto output_glb_s0_y_y_glb = prg.add_loop("output_glb_s0_y_y_glb", 0, 2);
  auto output_glb_s0_w_w_glb = output_glb_s0_y_y_glb->add_loop("output_glb_s0_w_w_glb", 0, 2);
  //auto output_glb_s0_w_w_glb = output_glb_s0_x_x_glb->add_loop("output_glb_s0_w_w_glb", 0, 2);
////producing output_cgra.stencil
  auto output_cgra_s0_y = output_glb_s0_w_w_glb->add_loop("output_cgra_s0_y", 0, 64);
  auto output_cgra_s0_w = output_cgra_s0_y->add_loop("output_cgra_s0_w", 0, 8);

//store is: output_cgra.stencil(0, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil",  "output_cgra_s0_y",  "output_cgra_s0_w", "0");

//store is: output_cgra.stencil(1, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_1 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "output_cgra_s0_y",  "output_cgra_s0_w","1");

//store is: output_cgra.stencil(2, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_2 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil","output_cgra_s0_y", "output_cgra_s0_w", "2");

//store is: output_cgra.stencil(3, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_3 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_function("hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_w", "3");

//store is: output_cgra.stencil(4, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_4 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_function("hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_w", "4");

//store is: output_cgra.stencil(5, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_5 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_function("hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_store("output_cgra_stencil","output_cgra_s0_y", "output_cgra_s0_w", "5");

//store is: output_cgra.stencil(6, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_6 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_function("hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_w", "6");

//store is: output_cgra.stencil(7, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_7 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_function("hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_store("output_cgra_stencil", "output_cgra_s0_y",  "output_cgra_s0_w", "7");
  auto output_cgra_s1_r_z_rz_glb = output_glb_s0_w_w_glb->add_loop("output_cgra_s1_r_z_rz_glb", 0, 2);
////producing input_cgra.stencil
  auto input_cgra_s0_y = output_cgra_s1_r_z_rz_glb->add_loop("input_cgra_s0_y", 0, 64);
  auto input_cgra_s0_z_cgra = input_cgra_s0_y->add_loop("input_cgra_s0_z_cgra", 0, 8);
  auto input_cgra_s0_z_z_cgra = input_cgra_s0_z_cgra->add_loop("input_cgra_s0_z_z_cgra", 0, 8);

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra), ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
  auto hcompute_input_cgra_stencil = input_cgra_s0_z_z_cgra->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_glb_stencil", "(output_glb_s0_y_y_glb*64) + input_cgra_s0_y", "(output_cgra_s1_r_z_rz_glb*64) + (input_cgra_s0_z_cgra*8) + input_cgra_s0_z_z_cgra");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_z_cgra", "input_cgra_s0_z_z_cgra");

//consuming input_cgra.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_z_cgra = output_cgra_s1_r_z_rz_glb->add_loop("kernel_cgra_s0_z_cgra", 0, 8);
  auto kernel_cgra_s0_z_z_cgra = kernel_cgra_s0_z_cgra->add_loop("kernel_cgra_s0_z_z_cgra", 0, 8);
  auto kernel_cgra_s0_w_cgra = kernel_cgra_s0_z_z_cgra->add_loop("kernel_cgra_s0_w_cgra", 0, 8);
  auto kernel_cgra_s0_w_w_cgra = kernel_cgra_s0_w_cgra->add_loop("kernel_cgra_s0_w_w_cgra", 0, 8);

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + kernel_cgra_s0_z_z_cgra), (((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra) + 56), kernel_cgra_s0_x, kernel_cgra_s0_y)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_w_w_cgra->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  //hcompute_kernel_cgra_stencil->add_load("kernel_glb_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "(((output_glb_s0_w_w_glb*32) + (kernel_cgra_s0_w_cgra*8) + kernel_cgra_s0_w_w_cgra))", "((output_cgra_s1_r_z_rz_glb*32) + (kernel_cgra_s0_z_cgra*8) + kernel_cgra_s0_z_z_cgra)");
  hcompute_kernel_cgra_stencil->add_load("kernel_glb_stencil",  "((output_cgra_s1_r_z_rz_glb*64) +(kernel_cgra_s0_z_cgra*8) + kernel_cgra_s0_z_z_cgra)", "(((output_glb_s0_w_w_glb*64) + (kernel_cgra_s0_w_cgra*8) + kernel_cgra_s0_w_w_cgra))");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil",  "kernel_cgra_s0_z_cgra", "kernel_cgra_s0_w_cgra", "kernel_cgra_s0_z_z_cgra", "kernel_cgra_s0_w_w_cgra");

//consuming kernel_cgra.stencil
  auto output_cgra_s1_y = output_cgra_s1_r_z_rz_glb->add_loop("output_cgra_s1_y", 0, 64);
  auto output_cgra_s1_z = output_cgra_s1_y->add_loop("output_cgra_s1_z", 0, 8);
  auto output_cgra_s1_w = output_cgra_s1_z->add_loop("output_cgra_s1_w", 0, 8);

//store is: output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_8 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_function("hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "0", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "1", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "2", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "3", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "4", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "5", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "7", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "6", "0");
  hcompute_output_cgra_stencil_8->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "0");
  hcompute_output_cgra_stencil_8->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "0");

//store is: output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_9 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_function("hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "1");
  hcompute_output_cgra_stencil_9->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "1");
  hcompute_output_cgra_stencil_9->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "1");

//store is: output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_10 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_function("hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "0", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "1", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "2", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "3", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "4", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "5", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "7", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "6", "2");
  hcompute_output_cgra_stencil_10->add_load("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "2");
  hcompute_output_cgra_stencil_10->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "2");

//store is: output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_11 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_function("hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "3");
  hcompute_output_cgra_stencil_11->add_load("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "3");
  hcompute_output_cgra_stencil_11->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "3");

//store is: output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_12 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_function("hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "4");
  hcompute_output_cgra_stencil_12->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "4");
  hcompute_output_cgra_stencil_12->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "4");

//store is: output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_13 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_function("hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "0", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "1", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "2", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "3", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "4", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "5", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "7", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "6", "5");
  hcompute_output_cgra_stencil_13->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "5");
  hcompute_output_cgra_stencil_13->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "5");

//store is: output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_14 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_function("hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "6");
  hcompute_output_cgra_stencil_14->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "6");
  hcompute_output_cgra_stencil_14->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "6");

//store is: output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_15 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_function("hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "7");
  hcompute_output_cgra_stencil_15->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "7");
  hcompute_output_cgra_stencil_15->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "7");

//consuming output_cgra.stencil
  auto output_glb_s0_y_y_cgra = output_glb_s0_w_w_glb->add_loop("output_glb_s0_y_y_cgra", 0, 64);
  auto output_glb_s0_w_cgra = output_glb_s0_y_y_cgra->add_loop("output_glb_s0_w_cgra", 0, 8);
  auto output_glb_s0_w_w_cgra = output_glb_s0_w_cgra->add_loop("output_glb_s0_w_w_cgra", 0, 8);

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*8) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*28) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*28) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil = output_glb_s0_w_w_cgra->add_op("op_hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_function("hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_w_cgra", "output_glb_s0_w_w_cgra");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_glb_stencil->add_store("output_glb_stencil", "( output_glb_s0_y_y_cgra) + output_glb_s0_y_y_glb * 64", "((output_glb_s0_w_w_glb*64) + (output_glb_s0_w_cgra*8) + output_glb_s0_w_w_cgra)");

  return prg;
}

prog matmul() {
  prog prg;
  prg.compute_unit_file = "resnet_multi_channel_compute.h";
  prg.name = "matmul";

// Stencil<uint16_t, 64, 58, 58> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 64, 64, 3, 3> &kernel_host_stencil = arg_1;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<uint16_t, 64, 56, 56> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_glb.stencil
  auto input_glb_s0_y = prg.add_loop("input_glb_s0_y", 0, 128);
  auto input_glb_s0_z = input_glb_s0_y->add_loop("input_glb_s0_z", 0, 128);

//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
  auto hcompute_input_glb_stencil = input_glb_s0_z->add_op("op_hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_function("hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_load("input_host_stencil", "input_glb_s0_y",  "input_glb_s0_z");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
  hcompute_input_glb_stencil->add_store("input_glb_stencil", "input_glb_s0_y",  "input_glb_s0_z");

//consuming input_glb.stencil
////producing kernel_glb.stencil
  auto kernel_glb_s0_y = prg.add_loop("kernel_glb_s0_z", 0, 128);
  auto kernel_glb_s0_w = kernel_glb_s0_y->add_loop("kernel_glb_s0_w", 0, 128);

//store is: kernel_glb.stencil(kernel_glb_s0_z, (kernel_glb_s0_w + 56), kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
  auto hcompute_kernel_glb_stencil = kernel_glb_s0_w->add_op("op_hcompute_kernel_glb_stencil");
  hcompute_kernel_glb_stencil->add_function("hcompute_kernel_glb_stencil");
  hcompute_kernel_glb_stencil->add_load("kernel_host_stencil", "kernel_glb_s0_z", "kernel_glb_s0_w");
  prg.buffer_port_widths["kernel_glb_stencil"] = 16;
  hcompute_kernel_glb_stencil->add_store("kernel_glb_stencil", "kernel_glb_s0_z", "(kernel_glb_s0_w )");

//consuming kernel_glb.stencil
////producing output_glb.stencil
  auto output_glb_s0_y_y_glb = prg.add_loop("output_glb_s0_y_y_glb", 0, 2);
  auto output_glb_s0_w_w_glb = output_glb_s0_y_y_glb->add_loop("output_glb_s0_w_w_glb", 0, 2);
  //auto output_glb_s0_w_w_glb = output_glb_s0_x_x_glb->add_loop("output_glb_s0_w_w_glb", 0, 2);
////producing output_cgra.stencil
  auto output_cgra_s0_y = output_glb_s0_w_w_glb->add_loop("output_cgra_s0_y", 0, 64);
  auto output_cgra_s0_w = output_cgra_s0_y->add_loop("output_cgra_s0_w", 0, 8);

//store is: output_cgra.stencil(0, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil",  "output_cgra_s0_y",  "output_cgra_s0_w", "0");

//store is: output_cgra.stencil(1, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_1 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "output_cgra_s0_y",  "output_cgra_s0_w","1");

//store is: output_cgra.stencil(2, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_2 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil","output_cgra_s0_y", "output_cgra_s0_w", "2");

//store is: output_cgra.stencil(3, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_3 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_function("hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_w", "3");

//store is: output_cgra.stencil(4, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_4 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_function("hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_w", "4");

//store is: output_cgra.stencil(5, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_5 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_function("hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_store("output_cgra_stencil","output_cgra_s0_y", "output_cgra_s0_w", "5");

//store is: output_cgra.stencil(6, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_6 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_function("hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_w", "6");

//store is: output_cgra.stencil(7, output_cgra_s0_x, output_cgra_s0_y) = (uint16)0
  auto hcompute_output_cgra_stencil_7 = output_cgra_s0_w->add_op("op_hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_function("hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_store("output_cgra_stencil", "output_cgra_s0_y",  "output_cgra_s0_w", "7");
  auto output_cgra_s1_r_z_rz_glb = output_glb_s0_w_w_glb->add_loop("output_cgra_s1_r_z_rz_glb", 0, 2);
////producing input_cgra.stencil
  auto input_cgra_s0_y = output_cgra_s1_r_z_rz_glb->add_loop("input_cgra_s0_y", 0, 64);
  auto input_cgra_s0_z_cgra = input_cgra_s0_y->add_loop("input_cgra_s0_z_cgra", 0, 8);
  auto input_cgra_s0_z_z_cgra = input_cgra_s0_z_cgra->add_loop("input_cgra_s0_z_z_cgra", 0, 8);

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra), ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
  auto hcompute_input_cgra_stencil = input_cgra_s0_z_z_cgra->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_glb_stencil", "(output_glb_s0_y_y_glb*64) + input_cgra_s0_y", "(output_cgra_s1_r_z_rz_glb*64) + (input_cgra_s0_z_cgra*8) + input_cgra_s0_z_z_cgra");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_z_cgra", "input_cgra_s0_z_z_cgra");

//consuming input_cgra.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_z_cgra = output_cgra_s1_r_z_rz_glb->add_loop("kernel_cgra_s0_z_cgra", 0, 8);
  auto kernel_cgra_s0_z_z_cgra = kernel_cgra_s0_z_cgra->add_loop("kernel_cgra_s0_z_z_cgra", 0, 8);
  auto kernel_cgra_s0_w_cgra = kernel_cgra_s0_z_z_cgra->add_loop("kernel_cgra_s0_w_cgra", 0, 8);
  auto kernel_cgra_s0_w_w_cgra = kernel_cgra_s0_w_cgra->add_loop("kernel_cgra_s0_w_w_cgra", 0, 8);

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + kernel_cgra_s0_z_z_cgra), (((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra) + 56), kernel_cgra_s0_x, kernel_cgra_s0_y)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_w_w_cgra->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  //hcompute_kernel_cgra_stencil->add_load("kernel_glb_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "(((output_glb_s0_w_w_glb*32) + (kernel_cgra_s0_w_cgra*8) + kernel_cgra_s0_w_w_cgra))", "((output_cgra_s1_r_z_rz_glb*32) + (kernel_cgra_s0_z_cgra*8) + kernel_cgra_s0_z_z_cgra)");
  hcompute_kernel_cgra_stencil->add_load("kernel_glb_stencil",  "((output_cgra_s1_r_z_rz_glb*64) +(kernel_cgra_s0_z_cgra*8) + kernel_cgra_s0_z_z_cgra)", "(((output_glb_s0_w_w_glb*64) + (kernel_cgra_s0_w_cgra*8) + kernel_cgra_s0_w_w_cgra))");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil",  "kernel_cgra_s0_z_cgra", "kernel_cgra_s0_w_cgra", "kernel_cgra_s0_z_z_cgra", "kernel_cgra_s0_w_w_cgra");

//consuming kernel_cgra.stencil
  auto output_cgra_s1_y = output_cgra_s1_r_z_rz_glb->add_loop("output_cgra_s1_y", 0, 64);
  auto output_cgra_s1_z = output_cgra_s1_y->add_loop("output_cgra_s1_z", 0, 8);
  auto output_cgra_s1_w = output_cgra_s1_z->add_loop("output_cgra_s1_w", 0, 8);

//store is: output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_8 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_function("hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_8->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "0", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "1", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "2", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "3", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "4", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "5", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "7", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "6", "0");
  hcompute_output_cgra_stencil_8->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "0");
  hcompute_output_cgra_stencil_8->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "0");

//store is: output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_9 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_function("hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_9->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "1");
  hcompute_output_cgra_stencil_9->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "1");
  hcompute_output_cgra_stencil_9->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "1");

//store is: output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_10 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_function("hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_10->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "0", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "1", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "2", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "3", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "4", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "5", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "7", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "6", "2");
  hcompute_output_cgra_stencil_10->add_load("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "2");
  hcompute_output_cgra_stencil_10->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "2");

//store is: output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_11 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_function("hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_11->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "3");
  hcompute_output_cgra_stencil_11->add_load("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "3");
  hcompute_output_cgra_stencil_11->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "3");

//store is: output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_12 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_function("hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_12->add_load("input_cgra_stencil", "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "4");
  hcompute_output_cgra_stencil_12->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "4");
  hcompute_output_cgra_stencil_12->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "4");

//store is: output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_13 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_function("hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_13->add_load("input_cgra_stencil",  "( output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "0", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "1", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "2", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "3", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "4", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "5", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "7", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel_cgra_stencil",  "output_cgra_s1_z","output_cgra_s1_w", "6", "5");
  hcompute_output_cgra_stencil_13->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "5");
  hcompute_output_cgra_stencil_13->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "5");

//store is: output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_14 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_function("hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_14->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "6");
  hcompute_output_cgra_stencil_14->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "6");
  hcompute_output_cgra_stencil_14->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "6");

//store is: output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
  auto hcompute_output_cgra_stencil_15 = output_cgra_s1_w->add_op("op_hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_function("hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "0");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "1");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "2");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "3");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "4");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "5");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "7");
  hcompute_output_cgra_stencil_15->add_load("input_cgra_stencil",  "(output_cgra_s1_y)", "output_cgra_s1_z", "6");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "0", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "1", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "2", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "3", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "4", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "5", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "7", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel_cgra_stencil", "output_cgra_s1_z","output_cgra_s1_w", "6", "7");
  hcompute_output_cgra_stencil_15->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_w", "7");
  hcompute_output_cgra_stencil_15->add_store("output_cgra_stencil", "output_cgra_s1_y","output_cgra_s1_w", "7");

//consuming output_cgra.stencil
  auto output_glb_s0_y_y_cgra = output_glb_s0_w_w_glb->add_loop("output_glb_s0_y_y_cgra", 0, 64);
  auto output_glb_s0_w_cgra = output_glb_s0_y_y_cgra->add_loop("output_glb_s0_w_cgra", 0, 8);
  auto output_glb_s0_w_w_cgra = output_glb_s0_w_cgra->add_loop("output_glb_s0_w_w_cgra", 0, 8);

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*8) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*28) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*28) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil = output_glb_s0_w_w_cgra->add_op("op_hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_function("hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_w_cgra", "output_glb_s0_w_w_cgra");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_glb_stencil->add_store("output_glb_stencil", "( output_glb_s0_y_y_cgra) + output_glb_s0_y_y_glb * 64", "((output_glb_s0_w_w_glb*64) + (output_glb_s0_w_cgra*8) + output_glb_s0_w_w_cgra)");

//consuming output_glb.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 128);
  auto hw_output_s0_w = hw_output_s0_y_yi->add_loop("hw_output_s0_w", 0, 128);

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_w->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_w");

  return prg;
}

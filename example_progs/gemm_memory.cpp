#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog gemm_reorder() {
  prog prg;
  prg.compute_unit_file = "gemm_compute.h";
  prg.name = "gemm_reorder";

// Stencil<int16_t, 32, 32> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 32, 32> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 32, 32> &hw_output_stencil = arg_2;
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
  auto mul_s0_x_x = mul_s0_y->add_loop("mul_s0_x_x", 0, 16);

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
  auto mul_s1_r_x_rxo = mul_s1_y->add_loop("mul_s1_r_x_rxo", 0, 16);
  auto mul_s1_x_xo = mul_s1_r_x_rxo->add_loop("mul_s1_x_xo", 0, 16);

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

prog gemm() {
  prog prg;
  prg.compute_unit_file = "gemm_compute.h";
  prg.name = "gemm";

// Stencil<int16_t, 256, 256> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 256, 256> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 256, 256> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 256);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 256);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 256);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 256);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_x->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x");

//consuming hw_kernel_global_wrapper.stencil
////producing mul.stencil
  auto mul_s0_y = prg.add_loop("mul_s0_y", 0, 256);
  auto mul_s0_x_x = mul_s0_y->add_loop("mul_s0_x_x", 0, 128);

//store is: mul.stencil((mul_s0_x_x*2), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil = mul_s0_x_x->add_op("op_hcompute_mul_stencil");
  hcompute_mul_stencil->add_function("hcompute_mul_stencil");
  prg.buffer_port_widths["mul_stencil"] = 16;
  hcompute_mul_stencil->add_store("mul_stencil", "mul_s0_y", "(mul_s0_x_x*2)");

//store is: mul.stencil(((mul_s0_x_x*2) + 1), mul_s0_y) = (int16)0
  auto hcompute_mul_stencil_1 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_function("hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*2) + 1)");
  auto mul_s1_y = prg.add_loop("mul_s1_y", 0, 256);
  auto mul_s1_x_xo = mul_s1_y->add_loop("mul_s1_x_xo", 0, 128);
  auto mul_s1_r_x_rxo = mul_s1_x_xo->add_loop("mul_s1_r_x_rxo", 0, 128);

//store is: mul.stencil((mul_s1_x_xo*2), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*2), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*2), (mul_s1_r_x_rxo*2))) + (mul.stencil((mul_s1_x_xo*2), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*2) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*2), ((mul_s1_r_x_rxo*2) + 1)))))
  auto hcompute_mul_stencil_2 = mul_s1_r_x_rxo->add_op("op_hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_function("hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*2)");
  hcompute_mul_stencil_2->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*2) + 1)");
  hcompute_mul_stencil_2->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*2)", "(mul_s1_x_xo*2)");
  hcompute_mul_stencil_2->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*2) + 1)", "(mul_s1_x_xo*2)");
  hcompute_mul_stencil_2->add_load("mul_stencil", "mul_s1_y", "(mul_s1_x_xo*2)");
  hcompute_mul_stencil_2->add_store("mul_stencil", "mul_s1_y", "(mul_s1_x_xo*2)");

//store is: mul.stencil(((mul_s1_x_xo*2) + 1), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*2) + 1), (mul_s1_r_x_rxo*2))) + (mul.stencil(((mul_s1_x_xo*2) + 1), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*2) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*2) + 1), ((mul_s1_r_x_rxo*2) + 1)))))
  auto hcompute_mul_stencil_3 = mul_s1_r_x_rxo->add_op("op_hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_function("hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_rxo*2)");
  hcompute_mul_stencil_3->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_rxo*2) + 1)");
  hcompute_mul_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_rxo*2)", "((mul_s1_x_xo*2) + 1)");
  hcompute_mul_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_rxo*2) + 1)", "((mul_s1_x_xo*2) + 1)");
  hcompute_mul_stencil_3->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*2) + 1)");
  hcompute_mul_stencil_3->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_xo*2) + 1)");

//consuming mul.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 256);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 256);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = mul.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("mul_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


// schedule=0 imgsize=256 myunroll=2

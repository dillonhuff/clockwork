#include "prog.h"


prog matmul_single() {
  prog prg;
  prg.compute_unit_file = "matmul_single_compute.h";
  prg.name = "matmul_single";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_2;
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

//store is: mul.stencil((mul_s0_x_x*8), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil = mul_s0_x_x->add_op("op_hcompute_mul_stencil");
  hcompute_mul_stencil->add_function("hcompute_mul_stencil");
  prg.buffer_port_widths["mul_stencil"] = 16;
  hcompute_mul_stencil->add_store("mul_stencil", "mul_s0_y", "(mul_s0_x_x*8)");

//store is: mul.stencil(((mul_s0_x_x*8) + 1), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_1 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_function("hcompute_mul_stencil_1");
  hcompute_mul_stencil_1->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 1)");

//store is: mul.stencil(((mul_s0_x_x*8) + 2), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_2 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_function("hcompute_mul_stencil_2");
  hcompute_mul_stencil_2->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 2)");

//store is: mul.stencil(((mul_s0_x_x*8) + 3), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_3 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_function("hcompute_mul_stencil_3");
  hcompute_mul_stencil_3->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 3)");

//store is: mul.stencil(((mul_s0_x_x*8) + 4), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_4 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_4");
  hcompute_mul_stencil_4->add_function("hcompute_mul_stencil_4");
  hcompute_mul_stencil_4->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 4)");

//store is: mul.stencil(((mul_s0_x_x*8) + 5), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_5 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_5");
  hcompute_mul_stencil_5->add_function("hcompute_mul_stencil_5");
  hcompute_mul_stencil_5->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 5)");

//store is: mul.stencil(((mul_s0_x_x*8) + 6), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_6 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_6");
  hcompute_mul_stencil_6->add_function("hcompute_mul_stencil_6");
  hcompute_mul_stencil_6->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 6)");

//store is: mul.stencil(((mul_s0_x_x*8) + 7), mul_s0_y) = (uint16)0
  auto hcompute_mul_stencil_7 = mul_s0_x_x->add_op("op_hcompute_mul_stencil_7");
  hcompute_mul_stencil_7->add_function("hcompute_mul_stencil_7");
  hcompute_mul_stencil_7->add_store("mul_stencil", "mul_s0_y", "((mul_s0_x_x*8) + 7)");
  auto mul_s1_y = prg.add_loop("mul_s1_y", 0, 64);
  auto mul_s1_r_x_r_x = mul_s1_y->add_loop("mul_s1_r_x_r_x", 0, 8);
  auto mul_s1_x_x = mul_s1_r_x_r_x->add_loop("mul_s1_x_x", 0, 8);

//store is: mul.stencil((mul_s1_x_x*8), mul_s1_y) = (mul.stencil((mul_s1_x_x*8), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_8 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_8");
  hcompute_mul_stencil_8->add_function("hcompute_mul_stencil_8");
  hcompute_mul_stencil_8->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "(mul_s1_x_x*8)");
  hcompute_mul_stencil_8->add_load("mul_stencil", "mul_s1_y", "(mul_s1_x_x*8)");
  hcompute_mul_stencil_8->add_store("mul_stencil", "mul_s1_y", "(mul_s1_x_x*8)");

//store is: mul.stencil(((mul_s1_x_x*8) + 1), mul_s1_y) = (mul.stencil(((mul_s1_x_x*8) + 1), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_9 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_9");
  hcompute_mul_stencil_9->add_function("hcompute_mul_stencil_9");
  hcompute_mul_stencil_9->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 1)");
  hcompute_mul_stencil_9->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 1)");
  hcompute_mul_stencil_9->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 1)");

//store is: mul.stencil(((mul_s1_x_x*8) + 2), mul_s1_y) = (mul.stencil(((mul_s1_x_x*8) + 2), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_10 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_10");
  hcompute_mul_stencil_10->add_function("hcompute_mul_stencil_10");
  hcompute_mul_stencil_10->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 2)");
  hcompute_mul_stencil_10->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 2)");
  hcompute_mul_stencil_10->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 2)");

//store is: mul.stencil(((mul_s1_x_x*8) + 3), mul_s1_y) = (mul.stencil(((mul_s1_x_x*8) + 3), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_11 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_11");
  hcompute_mul_stencil_11->add_function("hcompute_mul_stencil_11");
  hcompute_mul_stencil_11->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 3)");
  hcompute_mul_stencil_11->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 3)");
  hcompute_mul_stencil_11->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 3)");

//store is: mul.stencil(((mul_s1_x_x*8) + 4), mul_s1_y) = (mul.stencil(((mul_s1_x_x*8) + 4), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_12 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_12");
  hcompute_mul_stencil_12->add_function("hcompute_mul_stencil_12");
  hcompute_mul_stencil_12->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 4)");
  hcompute_mul_stencil_12->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 4)");
  hcompute_mul_stencil_12->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 4)");

//store is: mul.stencil(((mul_s1_x_x*8) + 5), mul_s1_y) = (mul.stencil(((mul_s1_x_x*8) + 5), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_13 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_13");
  hcompute_mul_stencil_13->add_function("hcompute_mul_stencil_13");
  hcompute_mul_stencil_13->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 5)");
  hcompute_mul_stencil_13->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 5)");
  hcompute_mul_stencil_13->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 5)");

//store is: mul.stencil(((mul_s1_x_x*8) + 6), mul_s1_y) = (mul.stencil(((mul_s1_x_x*8) + 6), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x*8) + 7))))
  auto hcompute_mul_stencil_14 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_14");
  hcompute_mul_stencil_14->add_function("hcompute_mul_stencil_14");
  hcompute_mul_stencil_14->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 6)");
  hcompute_mul_stencil_14->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 6)");
  hcompute_mul_stencil_14->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 6)");

//store is: mul.stencil(((mul_s1_x_x*8) + 7), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), (mul_s1_r_x_r_x*8))) + (mul.stencil(((mul_s1_x_x*8) + 7), mul_s1_y) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 7))) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x*8) + 6)))))))))))
  auto hcompute_mul_stencil_15 = mul_s1_x_x->add_op("op_hcompute_mul_stencil_15");
  hcompute_mul_stencil_15->add_function("hcompute_mul_stencil_15");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 2)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 3)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 4)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 5)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 6)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "(mul_s1_r_x_r_x*8)");
  hcompute_mul_stencil_15->add_load("hw_input_global_wrapper_stencil", "mul_s1_y", "((mul_s1_r_x_r_x*8) + 1)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 2)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 3)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 4)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 5)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 7)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 6)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "(mul_s1_r_x_r_x*8)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "((mul_s1_r_x_r_x*8) + 1)", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_load("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 7)");
  hcompute_mul_stencil_15->add_store("mul_stencil", "mul_s1_y", "((mul_s1_x_x*8) + 7)");

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



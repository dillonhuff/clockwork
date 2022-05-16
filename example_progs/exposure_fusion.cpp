#include "prog.h"

prog exposure_fusion_halide() {
  prog prg;
  prg.compute_unit_file = "exposure_fusion_compute.h";
  prg.name = "exposure_fusion";

// Stencil<uint16_t, 42, 42, 3> &hw_input_bright_stencil = arg_0;
  prg.add_input("hw_input_bright_stencil");
  prg.buffer_port_widths["hw_input_bright_stencil"] = 16;
// Stencil<uint16_t, 42, 42, 3> &hw_input_dark_stencil = arg_1;
  prg.add_input("hw_input_dark_stencil");
  prg.buffer_port_widths["hw_input_dark_stencil"] = 16;
// Stencil<uint16_t, 42, 42, 3> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_bright_global_wrapper.stencil
  auto hw_input_bright_global_wrapper_s0_c = prg.add_loop("hw_input_bright_global_wrapper_s0_c", 0, 3);
  auto hw_input_bright_global_wrapper_s0_y = hw_input_bright_global_wrapper_s0_c->add_loop("hw_input_bright_global_wrapper_s0_y", 0, 42);
  auto hw_input_bright_global_wrapper_s0_x = hw_input_bright_global_wrapper_s0_y->add_loop("hw_input_bright_global_wrapper_s0_x", 0, 42);

//store is: hw_input_bright_global_wrapper.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c) = hw_input_bright.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c)
  auto hcompute_hw_input_bright_global_wrapper_stencil = hw_input_bright_global_wrapper_s0_x->add_op("op_hcompute_hw_input_bright_global_wrapper_stencil");
  hcompute_hw_input_bright_global_wrapper_stencil->add_function("hcompute_hw_input_bright_global_wrapper_stencil");
  hcompute_hw_input_bright_global_wrapper_stencil->add_load("hw_input_bright_stencil", "hw_input_bright_global_wrapper_s0_c", "hw_input_bright_global_wrapper_s0_y", "hw_input_bright_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_bright_global_wrapper_stencil"] = 16;
  hcompute_hw_input_bright_global_wrapper_stencil->add_store("hw_input_bright_global_wrapper_stencil", "hw_input_bright_global_wrapper_s0_c", "hw_input_bright_global_wrapper_s0_y", "hw_input_bright_global_wrapper_s0_x");

//consuming hw_input_bright_global_wrapper.stencil
////producing binput_gpyr_gpyr_0.stencil
  auto binput_gpyr_gpyr_0_s0__0 = prg.add_loop("binput_gpyr_gpyr_0_s0__0", 0, 3);
  auto binput_gpyr_gpyr_0_s0_y = binput_gpyr_gpyr_0_s0__0->add_loop("binput_gpyr_gpyr_0_s0_y", 0, 42);
  auto binput_gpyr_gpyr_0_s0_x = binput_gpyr_gpyr_0_s0_y->add_loop("binput_gpyr_gpyr_0_s0_x", 0, 42);

//store is: binput_gpyr_gpyr_0.stencil(binput_gpyr_gpyr_0_s0_x, binput_gpyr_gpyr_0_s0_y, binput_gpyr_gpyr_0_s0__0) = hw_input_bright_global_wrapper.stencil(binput_gpyr_gpyr_0_s0_x, binput_gpyr_gpyr_0_s0_y, binput_gpyr_gpyr_0_s0__0)
  auto hcompute_binput_gpyr_gpyr_0_stencil = binput_gpyr_gpyr_0_s0_x->add_op("op_hcompute_binput_gpyr_gpyr_0_stencil");
  hcompute_binput_gpyr_gpyr_0_stencil->add_function("hcompute_binput_gpyr_gpyr_0_stencil");
  hcompute_binput_gpyr_gpyr_0_stencil->add_load("hw_input_bright_global_wrapper_stencil", "binput_gpyr_gpyr_0_s0__0", "binput_gpyr_gpyr_0_s0_y", "binput_gpyr_gpyr_0_s0_x");
  prg.buffer_port_widths["binput_gpyr_gpyr_0_stencil"] = 16;
  hcompute_binput_gpyr_gpyr_0_stencil->add_store("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_0_s0__0", "binput_gpyr_gpyr_0_s0_y", "binput_gpyr_gpyr_0_s0_x");

//consuming binput_gpyr_gpyr_0.stencil
////producing binput_gpyr_gpyr_1.stencil
  auto binput_gpyr_gpyr_1_s0__0 = prg.add_loop("binput_gpyr_gpyr_1_s0__0", 0, 3);
  auto binput_gpyr_gpyr_1_s0_y = binput_gpyr_gpyr_1_s0__0->add_loop("binput_gpyr_gpyr_1_s0_y", 0, 21);
  auto binput_gpyr_gpyr_1_s0_x = binput_gpyr_gpyr_1_s0_y->add_loop("binput_gpyr_gpyr_1_s0_x", 0, 21);

//store is: binput_gpyr_gpyr_1.stencil(binput_gpyr_gpyr_1_s0_x, binput_gpyr_gpyr_1_s0_y, binput_gpyr_gpyr_1_s0__0) = binput_gpyr_gpyr_0.stencil((binput_gpyr_gpyr_1_s0_x*2), (binput_gpyr_gpyr_1_s0_y*2), binput_gpyr_gpyr_1_s0__0)
  auto hcompute_binput_gpyr_gpyr_1_stencil = binput_gpyr_gpyr_1_s0_x->add_op("op_hcompute_binput_gpyr_gpyr_1_stencil");
  hcompute_binput_gpyr_gpyr_1_stencil->add_function("hcompute_binput_gpyr_gpyr_1_stencil");
  hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "(binput_gpyr_gpyr_1_s0_y*2)", "(binput_gpyr_gpyr_1_s0_x*2)");
  prg.buffer_port_widths["binput_gpyr_gpyr_1_stencil"] = 16;
  hcompute_binput_gpyr_gpyr_1_stencil->add_store("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_1_s0__0", "binput_gpyr_gpyr_1_s0_y", "binput_gpyr_gpyr_1_s0_x");

//consuming binput_gpyr_gpyr_1.stencil
////producing binput_lpyr_0.stencil
  auto binput_lpyr_0_s0__0 = prg.add_loop("binput_lpyr_0_s0__0", 0, 3);
  auto binput_lpyr_0_s0_y = binput_lpyr_0_s0__0->add_loop("binput_lpyr_0_s0_y", 0, 42);
  auto binput_lpyr_0_s0_x = binput_lpyr_0_s0_y->add_loop("binput_lpyr_0_s0_x", 0, 42);

//store is: binput_lpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) = (binput_gpyr_gpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) - binput_gpyr_gpyr_1.stencil((binput_lpyr_0_s0_x/2), (binput_lpyr_0_s0_y/2), binput_lpyr_0_s0__0))
  auto hcompute_binput_lpyr_0_stencil = binput_lpyr_0_s0_x->add_op("op_hcompute_binput_lpyr_0_stencil");
  hcompute_binput_lpyr_0_stencil->add_function("hcompute_binput_lpyr_0_stencil");
  hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_lpyr_0_s0__0", "binput_lpyr_0_s0_y", "binput_lpyr_0_s0_x");
  hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_0_s0__0", "floor((binput_lpyr_0_s0_y/2))", "floor((binput_lpyr_0_s0_x/2))");
  prg.buffer_port_widths["binput_lpyr_0_stencil"] = 16;
  hcompute_binput_lpyr_0_stencil->add_store("binput_lpyr_0_stencil", "binput_lpyr_0_s0__0", "binput_lpyr_0_s0_y", "binput_lpyr_0_s0_x");

//consuming binput_lpyr_0.stencil
////producing hw_input_dark_global_wrapper.stencil
  auto hw_input_dark_global_wrapper_s0_c = prg.add_loop("hw_input_dark_global_wrapper_s0_c", 0, 3);
  auto hw_input_dark_global_wrapper_s0_y = hw_input_dark_global_wrapper_s0_c->add_loop("hw_input_dark_global_wrapper_s0_y", 0, 42);
  auto hw_input_dark_global_wrapper_s0_x = hw_input_dark_global_wrapper_s0_y->add_loop("hw_input_dark_global_wrapper_s0_x", 0, 42);

//store is: hw_input_dark_global_wrapper.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c) = hw_input_dark.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c)
  auto hcompute_hw_input_dark_global_wrapper_stencil = hw_input_dark_global_wrapper_s0_x->add_op("op_hcompute_hw_input_dark_global_wrapper_stencil");
  hcompute_hw_input_dark_global_wrapper_stencil->add_function("hcompute_hw_input_dark_global_wrapper_stencil");
  hcompute_hw_input_dark_global_wrapper_stencil->add_load("hw_input_dark_stencil", "hw_input_dark_global_wrapper_s0_c", "hw_input_dark_global_wrapper_s0_y", "hw_input_dark_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_dark_global_wrapper_stencil"] = 16;
  hcompute_hw_input_dark_global_wrapper_stencil->add_store("hw_input_dark_global_wrapper_stencil", "hw_input_dark_global_wrapper_s0_c", "hw_input_dark_global_wrapper_s0_y", "hw_input_dark_global_wrapper_s0_x");

//consuming hw_input_dark_global_wrapper.stencil
////producing weight_sum.stencil
  auto weight_sum_s0_c = prg.add_loop("weight_sum_s0_c", 0, 3);
  auto weight_sum_s0_y = weight_sum_s0_c->add_loop("weight_sum_s0_y", 0, 42);
  auto weight_sum_s0_x = weight_sum_s0_y->add_loop("weight_sum_s0_x", 0, 42);

//store is: weight_sum.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c) = (((hw_input_dark_global_wrapper.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c) + hw_input_bright_global_wrapper.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c))*(uint16)2) + (uint16)1)
  auto hcompute_weight_sum_stencil = weight_sum_s0_x->add_op("op_hcompute_weight_sum_stencil");
  hcompute_weight_sum_stencil->add_function("hcompute_weight_sum_stencil");
  hcompute_weight_sum_stencil->add_load("hw_input_bright_global_wrapper_stencil", "weight_sum_s0_c", "weight_sum_s0_y", "weight_sum_s0_x");
  hcompute_weight_sum_stencil->add_load("hw_input_dark_global_wrapper_stencil", "weight_sum_s0_c", "weight_sum_s0_y", "weight_sum_s0_x");
  prg.buffer_port_widths["weight_sum_stencil"] = 16;
  hcompute_weight_sum_stencil->add_store("weight_sum_stencil", "weight_sum_s0_c", "weight_sum_s0_y", "weight_sum_s0_x");

//consuming weight_sum.stencil
////producing bweight_gpyr_0.stencil
  auto bweight_gpyr_0_s0__0 = prg.add_loop("bweight_gpyr_0_s0__0", 0, 3);
  auto bweight_gpyr_0_s0_y = bweight_gpyr_0_s0__0->add_loop("bweight_gpyr_0_s0_y", 0, 42);
  auto bweight_gpyr_0_s0_x_1 = bweight_gpyr_0_s0_y->add_loop("bweight_gpyr_0_s0_x_1", 0, 42);

//store is: bweight_gpyr_0.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0) = ((hw_input_bright_global_wrapper.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0)*(uint16)256)/weight_sum.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0))
  auto hcompute_bweight_gpyr_0_stencil = bweight_gpyr_0_s0_x_1->add_op("op_hcompute_bweight_gpyr_0_stencil");
  hcompute_bweight_gpyr_0_stencil->add_function("hcompute_bweight_gpyr_0_stencil");
  hcompute_bweight_gpyr_0_stencil->add_load("hw_input_bright_global_wrapper_stencil", "bweight_gpyr_0_s0__0", "bweight_gpyr_0_s0_y", "bweight_gpyr_0_s0_x_1");
  hcompute_bweight_gpyr_0_stencil->add_load("weight_sum_stencil", "bweight_gpyr_0_s0__0", "bweight_gpyr_0_s0_y", "bweight_gpyr_0_s0_x_1");
  prg.buffer_port_widths["bweight_gpyr_0_stencil"] = 16;
  hcompute_bweight_gpyr_0_stencil->add_store("bweight_gpyr_0_stencil", "bweight_gpyr_0_s0__0", "bweight_gpyr_0_s0_y", "bweight_gpyr_0_s0_x_1");

//consuming bweight_gpyr_0.stencil
////producing dinput_gpyr_gpyr_0.stencil
  auto dinput_gpyr_gpyr_0_s0__0 = prg.add_loop("dinput_gpyr_gpyr_0_s0__0", 0, 3);
  auto dinput_gpyr_gpyr_0_s0_y = dinput_gpyr_gpyr_0_s0__0->add_loop("dinput_gpyr_gpyr_0_s0_y", 0, 42);
  auto dinput_gpyr_gpyr_0_s0_x = dinput_gpyr_gpyr_0_s0_y->add_loop("dinput_gpyr_gpyr_0_s0_x", 0, 42);

//store is: dinput_gpyr_gpyr_0.stencil(dinput_gpyr_gpyr_0_s0_x, dinput_gpyr_gpyr_0_s0_y, dinput_gpyr_gpyr_0_s0__0) = hw_input_dark_global_wrapper.stencil(dinput_gpyr_gpyr_0_s0_x, dinput_gpyr_gpyr_0_s0_y, dinput_gpyr_gpyr_0_s0__0)
  auto hcompute_dinput_gpyr_gpyr_0_stencil = dinput_gpyr_gpyr_0_s0_x->add_op("op_hcompute_dinput_gpyr_gpyr_0_stencil");
  hcompute_dinput_gpyr_gpyr_0_stencil->add_function("hcompute_dinput_gpyr_gpyr_0_stencil");
  hcompute_dinput_gpyr_gpyr_0_stencil->add_load("hw_input_dark_global_wrapper_stencil", "dinput_gpyr_gpyr_0_s0__0", "dinput_gpyr_gpyr_0_s0_y", "dinput_gpyr_gpyr_0_s0_x");
  prg.buffer_port_widths["dinput_gpyr_gpyr_0_stencil"] = 16;
  hcompute_dinput_gpyr_gpyr_0_stencil->add_store("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_0_s0__0", "dinput_gpyr_gpyr_0_s0_y", "dinput_gpyr_gpyr_0_s0_x");

//consuming dinput_gpyr_gpyr_0.stencil
////producing dinput_gpyr_gpyr_1.stencil
  auto dinput_gpyr_gpyr_1_s0__0 = prg.add_loop("dinput_gpyr_gpyr_1_s0__0", 0, 3);
  auto dinput_gpyr_gpyr_1_s0_y = dinput_gpyr_gpyr_1_s0__0->add_loop("dinput_gpyr_gpyr_1_s0_y", 0, 21);
  auto dinput_gpyr_gpyr_1_s0_x = dinput_gpyr_gpyr_1_s0_y->add_loop("dinput_gpyr_gpyr_1_s0_x", 0, 21);

//store is: dinput_gpyr_gpyr_1.stencil(dinput_gpyr_gpyr_1_s0_x, dinput_gpyr_gpyr_1_s0_y, dinput_gpyr_gpyr_1_s0__0) = dinput_gpyr_gpyr_0.stencil((dinput_gpyr_gpyr_1_s0_x*2), (dinput_gpyr_gpyr_1_s0_y*2), dinput_gpyr_gpyr_1_s0__0)
  auto hcompute_dinput_gpyr_gpyr_1_stencil = dinput_gpyr_gpyr_1_s0_x->add_op("op_hcompute_dinput_gpyr_gpyr_1_stencil");
  hcompute_dinput_gpyr_gpyr_1_stencil->add_function("hcompute_dinput_gpyr_gpyr_1_stencil");
  hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "(dinput_gpyr_gpyr_1_s0_y*2)", "(dinput_gpyr_gpyr_1_s0_x*2)");
  prg.buffer_port_widths["dinput_gpyr_gpyr_1_stencil"] = 16;
  hcompute_dinput_gpyr_gpyr_1_stencil->add_store("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_1_s0__0", "dinput_gpyr_gpyr_1_s0_y", "dinput_gpyr_gpyr_1_s0_x");

//consuming dinput_gpyr_gpyr_1.stencil
////producing dinput_lpyr_0.stencil
  auto dinput_lpyr_0_s0__0 = prg.add_loop("dinput_lpyr_0_s0__0", 0, 3);
  auto dinput_lpyr_0_s0_y = dinput_lpyr_0_s0__0->add_loop("dinput_lpyr_0_s0_y", 0, 42);
  auto dinput_lpyr_0_s0_x = dinput_lpyr_0_s0_y->add_loop("dinput_lpyr_0_s0_x", 0, 42);

//store is: dinput_lpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) = (dinput_gpyr_gpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) - dinput_gpyr_gpyr_1.stencil((dinput_lpyr_0_s0_x/2), (dinput_lpyr_0_s0_y/2), dinput_lpyr_0_s0__0))
  auto hcompute_dinput_lpyr_0_stencil = dinput_lpyr_0_s0_x->add_op("op_hcompute_dinput_lpyr_0_stencil");
  hcompute_dinput_lpyr_0_stencil->add_function("hcompute_dinput_lpyr_0_stencil");
  hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_lpyr_0_s0__0", "dinput_lpyr_0_s0_y", "dinput_lpyr_0_s0_x");
  hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_0_s0__0", "floor((dinput_lpyr_0_s0_y/2))", "floor((dinput_lpyr_0_s0_x/2))");
  prg.buffer_port_widths["dinput_lpyr_0_stencil"] = 16;
  hcompute_dinput_lpyr_0_stencil->add_store("dinput_lpyr_0_stencil", "dinput_lpyr_0_s0__0", "dinput_lpyr_0_s0_y", "dinput_lpyr_0_s0_x");

//consuming dinput_lpyr_0.stencil
////producing dweight_gpyr_0.stencil
  auto dweight_gpyr_0_s0__0 = prg.add_loop("dweight_gpyr_0_s0__0", 0, 3);
  auto dweight_gpyr_0_s0_y = dweight_gpyr_0_s0__0->add_loop("dweight_gpyr_0_s0_y", 0, 42);
  auto dweight_gpyr_0_s0_x = dweight_gpyr_0_s0_y->add_loop("dweight_gpyr_0_s0_x", 0, 42);

//store is: dweight_gpyr_0.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0) = ((hw_input_dark_global_wrapper.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0)*(uint16)256)/weight_sum.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0))
  auto hcompute_dweight_gpyr_0_stencil = dweight_gpyr_0_s0_x->add_op("op_hcompute_dweight_gpyr_0_stencil");
  hcompute_dweight_gpyr_0_stencil->add_function("hcompute_dweight_gpyr_0_stencil");
  hcompute_dweight_gpyr_0_stencil->add_load("hw_input_dark_global_wrapper_stencil", "dweight_gpyr_0_s0__0", "dweight_gpyr_0_s0_y", "dweight_gpyr_0_s0_x");
  hcompute_dweight_gpyr_0_stencil->add_load("weight_sum_stencil", "dweight_gpyr_0_s0__0", "dweight_gpyr_0_s0_y", "dweight_gpyr_0_s0_x");
  prg.buffer_port_widths["dweight_gpyr_0_stencil"] = 16;
  hcompute_dweight_gpyr_0_stencil->add_store("dweight_gpyr_0_stencil", "dweight_gpyr_0_s0__0", "dweight_gpyr_0_s0_y", "dweight_gpyr_0_s0_x");

//consuming dweight_gpyr_0.stencil
////producing binput_gpyr_gpyr_2.stencil
  auto binput_gpyr_gpyr_2_s0__0 = prg.add_loop("binput_gpyr_gpyr_2_s0__0", 0, 3);
  auto binput_gpyr_gpyr_2_s0_y = binput_gpyr_gpyr_2_s0__0->add_loop("binput_gpyr_gpyr_2_s0_y", 0, 11);
  auto binput_gpyr_gpyr_2_s0_x = binput_gpyr_gpyr_2_s0_y->add_loop("binput_gpyr_gpyr_2_s0_x", 0, 11);

//store is: binput_gpyr_gpyr_2.stencil(binput_gpyr_gpyr_2_s0_x, binput_gpyr_gpyr_2_s0_y, binput_gpyr_gpyr_2_s0__0) = binput_gpyr_gpyr_1.stencil((binput_gpyr_gpyr_2_s0_x*2), (binput_gpyr_gpyr_2_s0_y*2), binput_gpyr_gpyr_2_s0__0)
  auto hcompute_binput_gpyr_gpyr_2_stencil = binput_gpyr_gpyr_2_s0_x->add_op("op_hcompute_binput_gpyr_gpyr_2_stencil");
  hcompute_binput_gpyr_gpyr_2_stencil->add_function("hcompute_binput_gpyr_gpyr_2_stencil");
  hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "(binput_gpyr_gpyr_2_s0_y*2)", "(binput_gpyr_gpyr_2_s0_x*2)");
  prg.buffer_port_widths["binput_gpyr_gpyr_2_stencil"] = 16;
  hcompute_binput_gpyr_gpyr_2_stencil->add_store("binput_gpyr_gpyr_2_stencil", "binput_gpyr_gpyr_2_s0__0", "binput_gpyr_gpyr_2_s0_y", "binput_gpyr_gpyr_2_s0_x");

//consuming binput_gpyr_gpyr_2.stencil
////producing binput_lpyr_1.stencil
  auto binput_lpyr_1_s0__0 = prg.add_loop("binput_lpyr_1_s0__0", 0, 3);
  auto binput_lpyr_1_s0_y = binput_lpyr_1_s0__0->add_loop("binput_lpyr_1_s0_y", 0, 21);
  auto binput_lpyr_1_s0_x = binput_lpyr_1_s0_y->add_loop("binput_lpyr_1_s0_x", 0, 21);

//store is: binput_lpyr_1.stencil(binput_lpyr_1_s0_x, binput_lpyr_1_s0_y, binput_lpyr_1_s0__0) = (binput_gpyr_gpyr_1.stencil(binput_lpyr_1_s0_x, binput_lpyr_1_s0_y, binput_lpyr_1_s0__0) - binput_gpyr_gpyr_2.stencil((binput_lpyr_1_s0_x/2), (binput_lpyr_1_s0_y/2), binput_lpyr_1_s0__0))
  auto hcompute_binput_lpyr_1_stencil = binput_lpyr_1_s0_x->add_op("op_hcompute_binput_lpyr_1_stencil");
  hcompute_binput_lpyr_1_stencil->add_function("hcompute_binput_lpyr_1_stencil");
  hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_1_s0__0", "binput_lpyr_1_s0_y", "binput_lpyr_1_s0_x");
  hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_1_s0__0", "floor((binput_lpyr_1_s0_y/2))", "floor((binput_lpyr_1_s0_x/2))");
  prg.buffer_port_widths["binput_lpyr_1_stencil"] = 16;
  hcompute_binput_lpyr_1_stencil->add_store("binput_lpyr_1_stencil", "binput_lpyr_1_s0__0", "binput_lpyr_1_s0_y", "binput_lpyr_1_s0_x");

//consuming binput_lpyr_1.stencil
////producing bweight_gpyr_1.stencil
  auto bweight_gpyr_1_s0__0 = prg.add_loop("bweight_gpyr_1_s0__0", 0, 3);
  auto bweight_gpyr_1_s0_y = bweight_gpyr_1_s0__0->add_loop("bweight_gpyr_1_s0_y", 0, 21);
  auto bweight_gpyr_1_s0_x = bweight_gpyr_1_s0_y->add_loop("bweight_gpyr_1_s0_x", 0, 21);

//store is: bweight_gpyr_1.stencil(bweight_gpyr_1_s0_x, bweight_gpyr_1_s0_y, bweight_gpyr_1_s0__0) = bweight_gpyr_0.stencil((bweight_gpyr_1_s0_x*2), (bweight_gpyr_1_s0_y*2), bweight_gpyr_1_s0__0)
  auto hcompute_bweight_gpyr_1_stencil = bweight_gpyr_1_s0_x->add_op("op_hcompute_bweight_gpyr_1_stencil");
  hcompute_bweight_gpyr_1_stencil->add_function("hcompute_bweight_gpyr_1_stencil");
  hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "(bweight_gpyr_1_s0_y*2)", "(bweight_gpyr_1_s0_x*2)");
  prg.buffer_port_widths["bweight_gpyr_1_stencil"] = 16;
  hcompute_bweight_gpyr_1_stencil->add_store("bweight_gpyr_1_stencil", "bweight_gpyr_1_s0__0", "bweight_gpyr_1_s0_y", "bweight_gpyr_1_s0_x");

//consuming bweight_gpyr_1.stencil
////producing dinput_gpyr_gpyr_2.stencil
  auto dinput_gpyr_gpyr_2_s0__0 = prg.add_loop("dinput_gpyr_gpyr_2_s0__0", 0, 3);
  auto dinput_gpyr_gpyr_2_s0_y = dinput_gpyr_gpyr_2_s0__0->add_loop("dinput_gpyr_gpyr_2_s0_y", 0, 11);
  auto dinput_gpyr_gpyr_2_s0_x = dinput_gpyr_gpyr_2_s0_y->add_loop("dinput_gpyr_gpyr_2_s0_x", 0, 11);

//store is: dinput_gpyr_gpyr_2.stencil(dinput_gpyr_gpyr_2_s0_x, dinput_gpyr_gpyr_2_s0_y, dinput_gpyr_gpyr_2_s0__0) = dinput_gpyr_gpyr_1.stencil((dinput_gpyr_gpyr_2_s0_x*2), (dinput_gpyr_gpyr_2_s0_y*2), dinput_gpyr_gpyr_2_s0__0)
  auto hcompute_dinput_gpyr_gpyr_2_stencil = dinput_gpyr_gpyr_2_s0_x->add_op("op_hcompute_dinput_gpyr_gpyr_2_stencil");
  hcompute_dinput_gpyr_gpyr_2_stencil->add_function("hcompute_dinput_gpyr_gpyr_2_stencil");
  hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "(dinput_gpyr_gpyr_2_s0_y*2)", "(dinput_gpyr_gpyr_2_s0_x*2)");
  prg.buffer_port_widths["dinput_gpyr_gpyr_2_stencil"] = 16;
  hcompute_dinput_gpyr_gpyr_2_stencil->add_store("dinput_gpyr_gpyr_2_stencil", "dinput_gpyr_gpyr_2_s0__0", "dinput_gpyr_gpyr_2_s0_y", "dinput_gpyr_gpyr_2_s0_x");

//consuming dinput_gpyr_gpyr_2.stencil
////producing dinput_lpyr_1.stencil
  auto dinput_lpyr_1_s0__0 = prg.add_loop("dinput_lpyr_1_s0__0", 0, 3);
  auto dinput_lpyr_1_s0_y = dinput_lpyr_1_s0__0->add_loop("dinput_lpyr_1_s0_y", 0, 21);
  auto dinput_lpyr_1_s0_x = dinput_lpyr_1_s0_y->add_loop("dinput_lpyr_1_s0_x", 0, 21);

//store is: dinput_lpyr_1.stencil(dinput_lpyr_1_s0_x, dinput_lpyr_1_s0_y, dinput_lpyr_1_s0__0) = (dinput_gpyr_gpyr_1.stencil(dinput_lpyr_1_s0_x, dinput_lpyr_1_s0_y, dinput_lpyr_1_s0__0) - dinput_gpyr_gpyr_2.stencil((dinput_lpyr_1_s0_x/2), (dinput_lpyr_1_s0_y/2), dinput_lpyr_1_s0__0))
  auto hcompute_dinput_lpyr_1_stencil = dinput_lpyr_1_s0_x->add_op("op_hcompute_dinput_lpyr_1_stencil");
  hcompute_dinput_lpyr_1_stencil->add_function("hcompute_dinput_lpyr_1_stencil");
  hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_1_s0__0", "dinput_lpyr_1_s0_y", "dinput_lpyr_1_s0_x");
  hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_1_s0__0", "floor((dinput_lpyr_1_s0_y/2))", "floor((dinput_lpyr_1_s0_x/2))");
  prg.buffer_port_widths["dinput_lpyr_1_stencil"] = 16;
  hcompute_dinput_lpyr_1_stencil->add_store("dinput_lpyr_1_stencil", "dinput_lpyr_1_s0__0", "dinput_lpyr_1_s0_y", "dinput_lpyr_1_s0_x");

//consuming dinput_lpyr_1.stencil
////producing dweight_gpyr_1.stencil
  auto dweight_gpyr_1_s0__0 = prg.add_loop("dweight_gpyr_1_s0__0", 0, 3);
  auto dweight_gpyr_1_s0_y = dweight_gpyr_1_s0__0->add_loop("dweight_gpyr_1_s0_y", 0, 21);
  auto dweight_gpyr_1_s0_x = dweight_gpyr_1_s0_y->add_loop("dweight_gpyr_1_s0_x", 0, 21);

//store is: dweight_gpyr_1.stencil(dweight_gpyr_1_s0_x, dweight_gpyr_1_s0_y, dweight_gpyr_1_s0__0) = dweight_gpyr_0.stencil((dweight_gpyr_1_s0_x*2), (dweight_gpyr_1_s0_y*2), dweight_gpyr_1_s0__0)
  auto hcompute_dweight_gpyr_1_stencil = dweight_gpyr_1_s0_x->add_op("op_hcompute_dweight_gpyr_1_stencil");
  hcompute_dweight_gpyr_1_stencil->add_function("hcompute_dweight_gpyr_1_stencil");
  hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "(dweight_gpyr_1_s0_y*2)", "(dweight_gpyr_1_s0_x*2)");
  prg.buffer_port_widths["dweight_gpyr_1_stencil"] = 16;
  hcompute_dweight_gpyr_1_stencil->add_store("dweight_gpyr_1_stencil", "dweight_gpyr_1_s0__0", "dweight_gpyr_1_s0_y", "dweight_gpyr_1_s0_x");

//consuming dweight_gpyr_1.stencil
////producing binput_lpyr_2.stencil
  auto binput_lpyr_2_s0__0 = prg.add_loop("binput_lpyr_2_s0__0", 0, 3);
  auto binput_lpyr_2_s0_y = binput_lpyr_2_s0__0->add_loop("binput_lpyr_2_s0_y", 0, 11);
  auto binput_lpyr_2_s0_x = binput_lpyr_2_s0_y->add_loop("binput_lpyr_2_s0_x", 0, 11);

//store is: binput_lpyr_2.stencil(binput_lpyr_2_s0_x, binput_lpyr_2_s0_y, binput_lpyr_2_s0__0) = binput_gpyr_gpyr_2.stencil(binput_lpyr_2_s0_x, binput_lpyr_2_s0_y, binput_lpyr_2_s0__0)
  auto hcompute_binput_lpyr_2_stencil = binput_lpyr_2_s0_x->add_op("op_hcompute_binput_lpyr_2_stencil");
  hcompute_binput_lpyr_2_stencil->add_function("hcompute_binput_lpyr_2_stencil");
  hcompute_binput_lpyr_2_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_2_s0__0", "binput_lpyr_2_s0_y", "binput_lpyr_2_s0_x");
  prg.buffer_port_widths["binput_lpyr_2_stencil"] = 16;
  hcompute_binput_lpyr_2_stencil->add_store("binput_lpyr_2_stencil", "binput_lpyr_2_s0__0", "binput_lpyr_2_s0_y", "binput_lpyr_2_s0_x");

//consuming binput_lpyr_2.stencil
////producing bweight_gpyr_2.stencil
  auto bweight_gpyr_2_s0__0 = prg.add_loop("bweight_gpyr_2_s0__0", 0, 3);
  auto bweight_gpyr_2_s0_y = bweight_gpyr_2_s0__0->add_loop("bweight_gpyr_2_s0_y", 0, 11);
  auto bweight_gpyr_2_s0_x = bweight_gpyr_2_s0_y->add_loop("bweight_gpyr_2_s0_x", 0, 11);

//store is: bweight_gpyr_2.stencil(bweight_gpyr_2_s0_x, bweight_gpyr_2_s0_y, bweight_gpyr_2_s0__0) = bweight_gpyr_1.stencil((bweight_gpyr_2_s0_x*2), (bweight_gpyr_2_s0_y*2), bweight_gpyr_2_s0__0)
  auto hcompute_bweight_gpyr_2_stencil = bweight_gpyr_2_s0_x->add_op("op_hcompute_bweight_gpyr_2_stencil");
  hcompute_bweight_gpyr_2_stencil->add_function("hcompute_bweight_gpyr_2_stencil");
  hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "(bweight_gpyr_2_s0_y*2)", "(bweight_gpyr_2_s0_x*2)");
  prg.buffer_port_widths["bweight_gpyr_2_stencil"] = 16;
  hcompute_bweight_gpyr_2_stencil->add_store("bweight_gpyr_2_stencil", "bweight_gpyr_2_s0__0", "bweight_gpyr_2_s0_y", "bweight_gpyr_2_s0_x");

//consuming bweight_gpyr_2.stencil
////producing dinput_lpyr_2.stencil
  auto dinput_lpyr_2_s0__0 = prg.add_loop("dinput_lpyr_2_s0__0", 0, 3);
  auto dinput_lpyr_2_s0_y = dinput_lpyr_2_s0__0->add_loop("dinput_lpyr_2_s0_y", 0, 11);
  auto dinput_lpyr_2_s0_x = dinput_lpyr_2_s0_y->add_loop("dinput_lpyr_2_s0_x", 0, 11);

//store is: dinput_lpyr_2.stencil(dinput_lpyr_2_s0_x, dinput_lpyr_2_s0_y, dinput_lpyr_2_s0__0) = dinput_gpyr_gpyr_2.stencil(dinput_lpyr_2_s0_x, dinput_lpyr_2_s0_y, dinput_lpyr_2_s0__0)
  auto hcompute_dinput_lpyr_2_stencil = dinput_lpyr_2_s0_x->add_op("op_hcompute_dinput_lpyr_2_stencil");
  hcompute_dinput_lpyr_2_stencil->add_function("hcompute_dinput_lpyr_2_stencil");
  hcompute_dinput_lpyr_2_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_2_s0__0", "dinput_lpyr_2_s0_y", "dinput_lpyr_2_s0_x");
  prg.buffer_port_widths["dinput_lpyr_2_stencil"] = 16;
  hcompute_dinput_lpyr_2_stencil->add_store("dinput_lpyr_2_stencil", "dinput_lpyr_2_s0__0", "dinput_lpyr_2_s0_y", "dinput_lpyr_2_s0_x");

//consuming dinput_lpyr_2.stencil
////producing dweight_gpyr_2.stencil
  auto dweight_gpyr_2_s0__0 = prg.add_loop("dweight_gpyr_2_s0__0", 0, 3);
  auto dweight_gpyr_2_s0_y = dweight_gpyr_2_s0__0->add_loop("dweight_gpyr_2_s0_y", 0, 11);
  auto dweight_gpyr_2_s0_x = dweight_gpyr_2_s0_y->add_loop("dweight_gpyr_2_s0_x", 0, 11);

//store is: dweight_gpyr_2.stencil(dweight_gpyr_2_s0_x, dweight_gpyr_2_s0_y, dweight_gpyr_2_s0__0) = dweight_gpyr_1.stencil((dweight_gpyr_2_s0_x*2), (dweight_gpyr_2_s0_y*2), dweight_gpyr_2_s0__0)
  auto hcompute_dweight_gpyr_2_stencil = dweight_gpyr_2_s0_x->add_op("op_hcompute_dweight_gpyr_2_stencil");
  hcompute_dweight_gpyr_2_stencil->add_function("hcompute_dweight_gpyr_2_stencil");
  hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "(dweight_gpyr_2_s0_y*2)", "(dweight_gpyr_2_s0_x*2)");
  prg.buffer_port_widths["dweight_gpyr_2_stencil"] = 16;
  hcompute_dweight_gpyr_2_stencil->add_store("dweight_gpyr_2_stencil", "dweight_gpyr_2_s0__0", "dweight_gpyr_2_s0_y", "dweight_gpyr_2_s0_x");

//consuming dweight_gpyr_2.stencil
////producing merge_pyr_2.stencil
  auto merge_pyr_2_s0__0 = prg.add_loop("merge_pyr_2_s0__0", 0, 3);
  auto merge_pyr_2_s0_y = merge_pyr_2_s0__0->add_loop("merge_pyr_2_s0_y", 0, 11);
  auto merge_pyr_2_s0_x = merge_pyr_2_s0_y->add_loop("merge_pyr_2_s0_x", 0, 11);

//store is: merge_pyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0) = (((dweight_gpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)*dinput_lpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)) + (bweight_gpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)*binput_lpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)))/(uint16)128)
  auto hcompute_merge_pyr_2_stencil = merge_pyr_2_s0_x->add_op("op_hcompute_merge_pyr_2_stencil");
  hcompute_merge_pyr_2_stencil->add_function("hcompute_merge_pyr_2_stencil");
  hcompute_merge_pyr_2_stencil->add_load("binput_lpyr_2_stencil", "merge_pyr_2_s0__0", "merge_pyr_2_s0_y", "merge_pyr_2_s0_x");
  hcompute_merge_pyr_2_stencil->add_load("bweight_gpyr_2_stencil", "merge_pyr_2_s0__0", "merge_pyr_2_s0_y", "merge_pyr_2_s0_x");
  hcompute_merge_pyr_2_stencil->add_load("dinput_lpyr_2_stencil", "merge_pyr_2_s0__0", "merge_pyr_2_s0_y", "merge_pyr_2_s0_x");
  hcompute_merge_pyr_2_stencil->add_load("dweight_gpyr_2_stencil", "merge_pyr_2_s0__0", "merge_pyr_2_s0_y", "merge_pyr_2_s0_x");
  prg.buffer_port_widths["merge_pyr_2_stencil"] = 16;
  hcompute_merge_pyr_2_stencil->add_store("merge_pyr_2_stencil", "merge_pyr_2_s0__0", "merge_pyr_2_s0_y", "merge_pyr_2_s0_x");

//consuming merge_pyr_2.stencil
////producing merge_pyr_1.stencil
  auto merge_pyr_1_s0__0 = prg.add_loop("merge_pyr_1_s0__0", 0, 3);
  auto merge_pyr_1_s0_y = merge_pyr_1_s0__0->add_loop("merge_pyr_1_s0_y", 0, 21);
  auto merge_pyr_1_s0_x = merge_pyr_1_s0_y->add_loop("merge_pyr_1_s0_x", 0, 21);

//store is: merge_pyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0) = (((dweight_gpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)*dinput_lpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)) + (bweight_gpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)*binput_lpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)))/(uint16)128)
  auto hcompute_merge_pyr_1_stencil = merge_pyr_1_s0_x->add_op("op_hcompute_merge_pyr_1_stencil");
  hcompute_merge_pyr_1_stencil->add_function("hcompute_merge_pyr_1_stencil");
  hcompute_merge_pyr_1_stencil->add_load("binput_lpyr_1_stencil", "merge_pyr_1_s0__0", "merge_pyr_1_s0_y", "merge_pyr_1_s0_x");
  hcompute_merge_pyr_1_stencil->add_load("bweight_gpyr_1_stencil", "merge_pyr_1_s0__0", "merge_pyr_1_s0_y", "merge_pyr_1_s0_x");
  hcompute_merge_pyr_1_stencil->add_load("dinput_lpyr_1_stencil", "merge_pyr_1_s0__0", "merge_pyr_1_s0_y", "merge_pyr_1_s0_x");
  hcompute_merge_pyr_1_stencil->add_load("dweight_gpyr_1_stencil", "merge_pyr_1_s0__0", "merge_pyr_1_s0_y", "merge_pyr_1_s0_x");
  prg.buffer_port_widths["merge_pyr_1_stencil"] = 16;
  hcompute_merge_pyr_1_stencil->add_store("merge_pyr_1_stencil", "merge_pyr_1_s0__0", "merge_pyr_1_s0_y", "merge_pyr_1_s0_x");
  auto merge_pyr_1_s1__0 = prg.add_loop("merge_pyr_1_s1__0", 0, 3);
  auto merge_pyr_1_s1_y = merge_pyr_1_s1__0->add_loop("merge_pyr_1_s1_y", 0, 21);
  auto merge_pyr_1_s1_x = merge_pyr_1_s1_y->add_loop("merge_pyr_1_s1_x", 0, 21);

//store is: merge_pyr_1.stencil(merge_pyr_1_s1_x, merge_pyr_1_s1_y, merge_pyr_1_s1__0) = (merge_pyr_1.stencil(merge_pyr_1_s1_x, merge_pyr_1_s1_y, merge_pyr_1_s1__0) + merge_pyr_2.stencil((merge_pyr_1_s1_x/2), (merge_pyr_1_s1_y/2), merge_pyr_1_s1__0))
  auto hcompute_merge_pyr_1_stencil_1 = merge_pyr_1_s1_x->add_op("op_hcompute_merge_pyr_1_stencil_1");
  hcompute_merge_pyr_1_stencil_1->add_function("hcompute_merge_pyr_1_stencil_1");
  hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_1_s1__0", "merge_pyr_1_s1_y", "merge_pyr_1_s1_x");
  hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_2_stencil", "merge_pyr_1_s1__0", "floor((merge_pyr_1_s1_y/2))", "floor((merge_pyr_1_s1_x/2))");
  hcompute_merge_pyr_1_stencil_1->add_store("merge_pyr_1_stencil", "merge_pyr_1_s1__0", "merge_pyr_1_s1_y", "merge_pyr_1_s1_x");

//consuming merge_pyr_1.stencil
////producing merge_pyr_0.stencil
  auto merge_pyr_0_s0__0 = prg.add_loop("merge_pyr_0_s0__0", 0, 3);
  auto merge_pyr_0_s0_y = merge_pyr_0_s0__0->add_loop("merge_pyr_0_s0_y", 0, 42);
  auto merge_pyr_0_s0_x = merge_pyr_0_s0_y->add_loop("merge_pyr_0_s0_x", 0, 42);

//store is: merge_pyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0) = (((dweight_gpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*dinput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)) + (bweight_gpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*binput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)))/(uint16)128)
  auto hcompute_merge_pyr_0_stencil = merge_pyr_0_s0_x->add_op("op_hcompute_merge_pyr_0_stencil");
  hcompute_merge_pyr_0_stencil->add_function("hcompute_merge_pyr_0_stencil");
  hcompute_merge_pyr_0_stencil->add_load("binput_lpyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  hcompute_merge_pyr_0_stencil->add_load("bweight_gpyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  hcompute_merge_pyr_0_stencil->add_load("dinput_lpyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  hcompute_merge_pyr_0_stencil->add_load("dweight_gpyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  prg.buffer_port_widths["merge_pyr_0_stencil"] = 16;
  hcompute_merge_pyr_0_stencil->add_store("merge_pyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  auto merge_pyr_0_s1__0 = prg.add_loop("merge_pyr_0_s1__0", 0, 3);
  auto merge_pyr_0_s1_y = merge_pyr_0_s1__0->add_loop("merge_pyr_0_s1_y", 0, 42);
  auto merge_pyr_0_s1_x = merge_pyr_0_s1_y->add_loop("merge_pyr_0_s1_x", 0, 42);

//store is: merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0) = (merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0) + merge_pyr_1.stencil((merge_pyr_0_s1_x/2), (merge_pyr_0_s1_y/2), merge_pyr_0_s1__0))
  auto hcompute_merge_pyr_0_stencil_1 = merge_pyr_0_s1_x->add_op("op_hcompute_merge_pyr_0_stencil_1");
  hcompute_merge_pyr_0_stencil_1->add_function("hcompute_merge_pyr_0_stencil_1");
  hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_0_stencil", "merge_pyr_0_s1__0", "merge_pyr_0_s1_y", "merge_pyr_0_s1_x");
  hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_0_s1__0", "floor((merge_pyr_0_s1_y/2))", "floor((merge_pyr_0_s1_x/2))");
  hcompute_merge_pyr_0_stencil_1->add_store("merge_pyr_0_stencil", "merge_pyr_0_s1__0", "merge_pyr_0_s1_y", "merge_pyr_0_s1_x");

//consuming merge_pyr_0.stencil
  auto hw_output_s0_c = prg.add_loop("hw_output_s0_c", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_c->add_loop("hw_output_s0_y_yi", 0, 42);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 42);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c) = merge_pyr_0.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("merge_pyr_0_stencil", "hw_output_s0_c", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_c", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}



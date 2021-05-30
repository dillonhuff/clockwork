#include "example_progs.h"

//prog exposure_fusion() {
  //prog prg;
  //prg.compute_unit_file = "exposure_fusion_compute.h";
  //prg.name = "exposure_fusion";

//// Stencil<uint16_t, 86, 86, 3> &hw_input_bright_stencil = arg_0;
  //prg.add_input("hw_input_bright_stencil");
  //prg.buffer_port_widths["hw_input_bright_stencil"] = 16;
//// Stencil<uint16_t, 86, 86, 3> &hw_input_dark_stencil = arg_1;
  //prg.add_input("hw_input_dark_stencil");
  //prg.buffer_port_widths["hw_input_dark_stencil"] = 16;
//// Stencil<float, 64, 64, 3> &hw_output_stencil = arg_2;
  //prg.add_output("hw_output_stencil");
  //prg.buffer_port_widths["hw_output_stencil"] = 32;

//////producing hw_input_bright_global_wrapper.stencil
  //auto hw_input_bright_global_wrapper_s0_c = prg.add_loop("hw_input_bright_global_wrapper_s0_c", 0, 3);
  //auto hw_input_bright_global_wrapper_s0_y = hw_input_bright_global_wrapper_s0_c->add_loop("hw_input_bright_global_wrapper_s0_y", -11, 75);
  //auto hw_input_bright_global_wrapper_s0_x = hw_input_bright_global_wrapper_s0_y->add_loop("hw_input_bright_global_wrapper_s0_x", -11, 75);

////store is: hw_input_bright_global_wrapper.stencil((hw_input_bright_global_wrapper_s0_x + 11), (hw_input_bright_global_wrapper_s0_y + 11), hw_input_bright_global_wrapper_s0_c) = hw_input_bright.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c)
  //auto hcompute_hw_input_bright_global_wrapper_stencil = hw_input_bright_global_wrapper_s0_x->add_op("op_hcompute_hw_input_bright_global_wrapper_stencil");
  //hcompute_hw_input_bright_global_wrapper_stencil->add_function("hcompute_hw_input_bright_global_wrapper_stencil");
  //hcompute_hw_input_bright_global_wrapper_stencil->add_load("hw_input_bright_stencil", "hw_input_bright_global_wrapper_s0_c", "hw_input_bright_global_wrapper_s0_y", "hw_input_bright_global_wrapper_s0_x");
  //prg.buffer_port_widths["hw_input_bright_global_wrapper_stencil"] = 16;
  //hcompute_hw_input_bright_global_wrapper_stencil->add_store("hw_input_bright_global_wrapper_stencil", "hw_input_bright_global_wrapper_s0_c", "(hw_input_bright_global_wrapper_s0_y + 11)", "(hw_input_bright_global_wrapper_s0_x + 11)");

////consuming hw_input_bright_global_wrapper.stencil
//////producing binput_gpyr_gpyr_0.stencil
  //auto binput_gpyr_gpyr_0_s0__0 = prg.add_loop("binput_gpyr_gpyr_0_s0__0", 0, 3);
  //auto binput_gpyr_gpyr_0_s0_y = binput_gpyr_gpyr_0_s0__0->add_loop("binput_gpyr_gpyr_0_s0_y", -11, 75);
  //auto binput_gpyr_gpyr_0_s0_x = binput_gpyr_gpyr_0_s0_y->add_loop("binput_gpyr_gpyr_0_s0_x", -11, 75);

////store is: binput_gpyr_gpyr_0.stencil((binput_gpyr_gpyr_0_s0_x + 11), (binput_gpyr_gpyr_0_s0_y + 11), binput_gpyr_gpyr_0_s0__0) = hw_input_bright_global_wrapper.stencil((binput_gpyr_gpyr_0_s0_x + 11), (binput_gpyr_gpyr_0_s0_y + 11), binput_gpyr_gpyr_0_s0__0)
  //auto hcompute_binput_gpyr_gpyr_0_stencil = binput_gpyr_gpyr_0_s0_x->add_op("op_hcompute_binput_gpyr_gpyr_0_stencil");
  //hcompute_binput_gpyr_gpyr_0_stencil->add_function("hcompute_binput_gpyr_gpyr_0_stencil");
  //hcompute_binput_gpyr_gpyr_0_stencil->add_load("hw_input_bright_global_wrapper_stencil", "binput_gpyr_gpyr_0_s0__0", "(binput_gpyr_gpyr_0_s0_y + 11)", "(binput_gpyr_gpyr_0_s0_x + 11)");
  //prg.buffer_port_widths["binput_gpyr_gpyr_0_stencil"] = 16;
  //hcompute_binput_gpyr_gpyr_0_stencil->add_store("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_0_s0__0", "(binput_gpyr_gpyr_0_s0_y + 11)", "(binput_gpyr_gpyr_0_s0_x + 11)");

////consuming binput_gpyr_gpyr_0.stencil
//////producing binput_gpyr_gpyr_1.stencil
  //auto binput_gpyr_gpyr_1_s0__0 = prg.add_loop("binput_gpyr_gpyr_1_s0__0", 0, 3);
  //auto binput_gpyr_gpyr_1_s0_y = binput_gpyr_gpyr_1_s0__0->add_loop("binput_gpyr_gpyr_1_s0_y", -5, 37);
  //auto binput_gpyr_gpyr_1_s0_x = binput_gpyr_gpyr_1_s0_y->add_loop("binput_gpyr_gpyr_1_s0_x", -5, 37);

////store is: binput_gpyr_gpyr_1.stencil((binput_gpyr_gpyr_1_s0_x + 5), (binput_gpyr_gpyr_1_s0_y + 5), binput_gpyr_gpyr_1_s0__0) = ((((((((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0))) + (((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0))))*3.000000f) + (((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0)))) + (((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0))))*0.015625f)
  //auto hcompute_binput_gpyr_gpyr_1_stencil = binput_gpyr_gpyr_1_s0_x->add_op("op_hcompute_binput_gpyr_gpyr_1_stencil");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_function("hcompute_binput_gpyr_gpyr_1_stencil");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 11)", "((binput_gpyr_gpyr_1_s0_x*2) + 11)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 10)", "((binput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 10)", "((binput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 10)", "((binput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 13)", "((binput_gpyr_gpyr_1_s0_x*2) + 11)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 13)", "((binput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 13)", "((binput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 13)", "((binput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 11)", "((binput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 11)", "((binput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 11)", "((binput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 12)", "((binput_gpyr_gpyr_1_s0_x*2) + 11)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 12)", "((binput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 12)", "((binput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 12)", "((binput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_binput_gpyr_gpyr_1_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_gpyr_gpyr_1_s0__0", "((binput_gpyr_gpyr_1_s0_y*2) + 10)", "((binput_gpyr_gpyr_1_s0_x*2) + 11)");
  //prg.buffer_port_widths["binput_gpyr_gpyr_1_stencil"] = 32;
  //hcompute_binput_gpyr_gpyr_1_stencil->add_store("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_1_s0__0", "(binput_gpyr_gpyr_1_s0_y + 5)", "(binput_gpyr_gpyr_1_s0_x + 5)");

////consuming binput_gpyr_gpyr_1.stencil
//////producing binput_lpyr_0.stencil
  //auto binput_lpyr_0_s0__0 = prg.add_loop("binput_lpyr_0_s0__0", 0, 3);
  //auto binput_lpyr_0_s0_y = binput_lpyr_0_s0__0->add_loop("binput_lpyr_0_s0_y", 0, 64);
  //auto binput_lpyr_0_s0_x = binput_lpyr_0_s0_y->add_loop("binput_lpyr_0_s0_x", 0, 64);

////store is: binput_lpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) = (float32(binput_gpyr_gpyr_0.stencil((binput_lpyr_0_s0_x + 11), (binput_lpyr_0_s0_y + 11), binput_lpyr_0_s0__0)) - ((((binput_gpyr_gpyr_1.stencil((((binput_lpyr_0_s0_x/2) + ((binput_lpyr_0_s0_x % 2)*2)) + 4), ((binput_lpyr_0_s0_y/2) + 5), binput_lpyr_0_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_lpyr_0_s0_x/2) + 5), ((binput_lpyr_0_s0_y/2) + 5), binput_lpyr_0_s0__0)*3.000000f))*3.000000f) + (binput_gpyr_gpyr_1.stencil((((binput_lpyr_0_s0_x/2) + ((binput_lpyr_0_s0_x % 2)*2)) + 4), (((binput_lpyr_0_s0_y/2) + ((binput_lpyr_0_s0_y % 2)*2)) + 4), binput_lpyr_0_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_lpyr_0_s0_x/2) + 5), (((binput_lpyr_0_s0_y/2) + ((binput_lpyr_0_s0_y % 2)*2)) + 4), binput_lpyr_0_s0__0)*3.000000f)))*0.062500f))
  //auto hcompute_binput_lpyr_0_stencil = binput_lpyr_0_s0_x->add_op("op_hcompute_binput_lpyr_0_stencil");
  //hcompute_binput_lpyr_0_stencil->add_function("hcompute_binput_lpyr_0_stencil");
  //hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_0_stencil", "binput_lpyr_0_s0__0", "(binput_lpyr_0_s0_y + 11)", "(binput_lpyr_0_s0_x + 11)");
  //hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_0_s0__0", "(floor((binput_lpyr_0_s0_y/2)) + 5)", "((floor((binput_lpyr_0_s0_x/2)) + ((binput_lpyr_0_s0_x % 2)*2)) + 4)");
  //hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_0_s0__0", "(floor((binput_lpyr_0_s0_y/2)) + 5)", "(floor((binput_lpyr_0_s0_x/2)) + 5)");
  //hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_0_s0__0", "((floor((binput_lpyr_0_s0_y/2)) + ((binput_lpyr_0_s0_y % 2)*2)) + 4)", "((floor((binput_lpyr_0_s0_x/2)) + ((binput_lpyr_0_s0_x % 2)*2)) + 4)");
  //hcompute_binput_lpyr_0_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_0_s0__0", "((floor((binput_lpyr_0_s0_y/2)) + ((binput_lpyr_0_s0_y % 2)*2)) + 4)", "(floor((binput_lpyr_0_s0_x/2)) + 5)");
  //prg.buffer_port_widths["binput_lpyr_0_stencil"] = 32;
  //hcompute_binput_lpyr_0_stencil->add_store("binput_lpyr_0_stencil", "binput_lpyr_0_s0__0", "binput_lpyr_0_s0_y", "binput_lpyr_0_s0_x");

////consuming binput_lpyr_0.stencil
//////producing hw_input_dark_global_wrapper.stencil
  //auto hw_input_dark_global_wrapper_s0_c = prg.add_loop("hw_input_dark_global_wrapper_s0_c", 0, 3);
  //auto hw_input_dark_global_wrapper_s0_y = hw_input_dark_global_wrapper_s0_c->add_loop("hw_input_dark_global_wrapper_s0_y", -11, 75);
  //auto hw_input_dark_global_wrapper_s0_x = hw_input_dark_global_wrapper_s0_y->add_loop("hw_input_dark_global_wrapper_s0_x", -11, 75);

////store is: hw_input_dark_global_wrapper.stencil((hw_input_dark_global_wrapper_s0_x + 11), (hw_input_dark_global_wrapper_s0_y + 11), hw_input_dark_global_wrapper_s0_c) = hw_input_dark.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c)
  //auto hcompute_hw_input_dark_global_wrapper_stencil = hw_input_dark_global_wrapper_s0_x->add_op("op_hcompute_hw_input_dark_global_wrapper_stencil");
  //hcompute_hw_input_dark_global_wrapper_stencil->add_function("hcompute_hw_input_dark_global_wrapper_stencil");
  //hcompute_hw_input_dark_global_wrapper_stencil->add_load("hw_input_dark_stencil", "hw_input_dark_global_wrapper_s0_c", "hw_input_dark_global_wrapper_s0_y", "hw_input_dark_global_wrapper_s0_x");
  //prg.buffer_port_widths["hw_input_dark_global_wrapper_stencil"] = 16;
  //hcompute_hw_input_dark_global_wrapper_stencil->add_store("hw_input_dark_global_wrapper_stencil", "hw_input_dark_global_wrapper_s0_c", "(hw_input_dark_global_wrapper_s0_y + 11)", "(hw_input_dark_global_wrapper_s0_x + 11)");

////consuming hw_input_dark_global_wrapper.stencil
//////producing weight_sum.stencil
  //auto weight_sum_s0_c = prg.add_loop("weight_sum_s0_c", 0, 3);
  //auto weight_sum_s0_y = weight_sum_s0_c->add_loop("weight_sum_s0_y", -11, 75);
  //auto weight_sum_s0_x = weight_sum_s0_y->add_loop("weight_sum_s0_x", -11, 75);

////store is: weight_sum.stencil((weight_sum_s0_x + 11), (weight_sum_s0_y + 11), weight_sum_s0_c) = ((hw_input_dark_global_wrapper.stencil((weight_sum_s0_x + 11), (weight_sum_s0_y + 11), weight_sum_s0_c) + hw_input_bright_global_wrapper.stencil((weight_sum_s0_x + 11), (weight_sum_s0_y + 11), weight_sum_s0_c))*(uint16)2)
  //auto hcompute_weight_sum_stencil = weight_sum_s0_x->add_op("op_hcompute_weight_sum_stencil");
  //hcompute_weight_sum_stencil->add_function("hcompute_weight_sum_stencil");
  //hcompute_weight_sum_stencil->add_load("hw_input_bright_global_wrapper_stencil", "weight_sum_s0_c", "(weight_sum_s0_y + 11)", "(weight_sum_s0_x + 11)");
  //hcompute_weight_sum_stencil->add_load("hw_input_dark_global_wrapper_stencil", "weight_sum_s0_c", "(weight_sum_s0_y + 11)", "(weight_sum_s0_x + 11)");
  //prg.buffer_port_widths["weight_sum_stencil"] = 16;
  //hcompute_weight_sum_stencil->add_store("weight_sum_stencil", "weight_sum_s0_c", "(weight_sum_s0_y + 11)", "(weight_sum_s0_x + 11)");

////consuming weight_sum.stencil
//////producing bweight_gpyr_0.stencil
  //auto bweight_gpyr_0_s0__0 = prg.add_loop("bweight_gpyr_0_s0__0", 0, 3);
  //auto bweight_gpyr_0_s0_y = bweight_gpyr_0_s0__0->add_loop("bweight_gpyr_0_s0_y", -11, 75);
  //auto bweight_gpyr_0_s0_x_1 = bweight_gpyr_0_s0_y->add_loop("bweight_gpyr_0_s0_x_1", -11, 75);

////store is: bweight_gpyr_0.stencil((bweight_gpyr_0_s0_x_1 + 11), (bweight_gpyr_0_s0_y + 11), bweight_gpyr_0_s0__0) = ((hw_input_bright_global_wrapper.stencil((bweight_gpyr_0_s0_x_1 + 11), (bweight_gpyr_0_s0_y + 11), bweight_gpyr_0_s0__0)*(uint16)2)/weight_sum.stencil((bweight_gpyr_0_s0_x_1 + 11), (bweight_gpyr_0_s0_y + 11), bweight_gpyr_0_s0__0))
  //auto hcompute_bweight_gpyr_0_stencil = bweight_gpyr_0_s0_x_1->add_op("op_hcompute_bweight_gpyr_0_stencil");
  //hcompute_bweight_gpyr_0_stencil->add_function("hcompute_bweight_gpyr_0_stencil");
  //hcompute_bweight_gpyr_0_stencil->add_load("hw_input_bright_global_wrapper_stencil", "bweight_gpyr_0_s0__0", "(bweight_gpyr_0_s0_y + 11)", "(bweight_gpyr_0_s0_x_1 + 11)");
  //hcompute_bweight_gpyr_0_stencil->add_load("weight_sum_stencil", "bweight_gpyr_0_s0__0", "(bweight_gpyr_0_s0_y + 11)", "(bweight_gpyr_0_s0_x_1 + 11)");
  //prg.buffer_port_widths["bweight_gpyr_0_stencil"] = 16;
  //hcompute_bweight_gpyr_0_stencil->add_store("bweight_gpyr_0_stencil", "bweight_gpyr_0_s0__0", "(bweight_gpyr_0_s0_y + 11)", "(bweight_gpyr_0_s0_x_1 + 11)");

////consuming bweight_gpyr_0.stencil
//////producing dinput_gpyr_gpyr_0.stencil
  //auto dinput_gpyr_gpyr_0_s0__0 = prg.add_loop("dinput_gpyr_gpyr_0_s0__0", 0, 3);
  //auto dinput_gpyr_gpyr_0_s0_y = dinput_gpyr_gpyr_0_s0__0->add_loop("dinput_gpyr_gpyr_0_s0_y", -11, 75);
  //auto dinput_gpyr_gpyr_0_s0_x = dinput_gpyr_gpyr_0_s0_y->add_loop("dinput_gpyr_gpyr_0_s0_x", -11, 75);

////store is: dinput_gpyr_gpyr_0.stencil((dinput_gpyr_gpyr_0_s0_x + 11), (dinput_gpyr_gpyr_0_s0_y + 11), dinput_gpyr_gpyr_0_s0__0) = hw_input_dark_global_wrapper.stencil((dinput_gpyr_gpyr_0_s0_x + 11), (dinput_gpyr_gpyr_0_s0_y + 11), dinput_gpyr_gpyr_0_s0__0)
  //auto hcompute_dinput_gpyr_gpyr_0_stencil = dinput_gpyr_gpyr_0_s0_x->add_op("op_hcompute_dinput_gpyr_gpyr_0_stencil");
  //hcompute_dinput_gpyr_gpyr_0_stencil->add_function("hcompute_dinput_gpyr_gpyr_0_stencil");
  //hcompute_dinput_gpyr_gpyr_0_stencil->add_load("hw_input_dark_global_wrapper_stencil", "dinput_gpyr_gpyr_0_s0__0", "(dinput_gpyr_gpyr_0_s0_y + 11)", "(dinput_gpyr_gpyr_0_s0_x + 11)");
  //prg.buffer_port_widths["dinput_gpyr_gpyr_0_stencil"] = 16;
  //hcompute_dinput_gpyr_gpyr_0_stencil->add_store("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_0_s0__0", "(dinput_gpyr_gpyr_0_s0_y + 11)", "(dinput_gpyr_gpyr_0_s0_x + 11)");

////consuming dinput_gpyr_gpyr_0.stencil
//////producing dinput_gpyr_gpyr_1.stencil
  //auto dinput_gpyr_gpyr_1_s0__0 = prg.add_loop("dinput_gpyr_gpyr_1_s0__0", 0, 3);
  //auto dinput_gpyr_gpyr_1_s0_y = dinput_gpyr_gpyr_1_s0__0->add_loop("dinput_gpyr_gpyr_1_s0_y", -5, 37);
  //auto dinput_gpyr_gpyr_1_s0_x = dinput_gpyr_gpyr_1_s0_y->add_loop("dinput_gpyr_gpyr_1_s0_x", -5, 37);

////store is: dinput_gpyr_gpyr_1.stencil((dinput_gpyr_gpyr_1_s0_x + 5), (dinput_gpyr_gpyr_1_s0_y + 5), dinput_gpyr_gpyr_1_s0__0) = ((((((((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0))) + (((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0))))*3.000000f) + (((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0)))) + (((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0))))*0.015625f)
  //auto hcompute_dinput_gpyr_gpyr_1_stencil = dinput_gpyr_gpyr_1_s0_x->add_op("op_hcompute_dinput_gpyr_gpyr_1_stencil");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_function("hcompute_dinput_gpyr_gpyr_1_stencil");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 11)", "((dinput_gpyr_gpyr_1_s0_x*2) + 11)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 10)", "((dinput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 10)", "((dinput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 10)", "((dinput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 13)", "((dinput_gpyr_gpyr_1_s0_x*2) + 11)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 13)", "((dinput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 13)", "((dinput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 13)", "((dinput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 11)", "((dinput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 11)", "((dinput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 11)", "((dinput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 12)", "((dinput_gpyr_gpyr_1_s0_x*2) + 11)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 12)", "((dinput_gpyr_gpyr_1_s0_x*2) + 12)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 12)", "((dinput_gpyr_gpyr_1_s0_x*2) + 10)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 12)", "((dinput_gpyr_gpyr_1_s0_x*2) + 13)");
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_gpyr_gpyr_1_s0__0", "((dinput_gpyr_gpyr_1_s0_y*2) + 10)", "((dinput_gpyr_gpyr_1_s0_x*2) + 11)");
  //prg.buffer_port_widths["dinput_gpyr_gpyr_1_stencil"] = 32;
  //hcompute_dinput_gpyr_gpyr_1_stencil->add_store("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_1_s0__0", "(dinput_gpyr_gpyr_1_s0_y + 5)", "(dinput_gpyr_gpyr_1_s0_x + 5)");

////consuming dinput_gpyr_gpyr_1.stencil
//////producing dinput_lpyr_0.stencil
  //auto dinput_lpyr_0_s0__0 = prg.add_loop("dinput_lpyr_0_s0__0", 0, 3);
  //auto dinput_lpyr_0_s0_y = dinput_lpyr_0_s0__0->add_loop("dinput_lpyr_0_s0_y", 0, 64);
  //auto dinput_lpyr_0_s0_x = dinput_lpyr_0_s0_y->add_loop("dinput_lpyr_0_s0_x", 0, 64);

////store is: dinput_lpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) = (float32(dinput_gpyr_gpyr_0.stencil((dinput_lpyr_0_s0_x + 11), (dinput_lpyr_0_s0_y + 11), dinput_lpyr_0_s0__0)) - ((((dinput_gpyr_gpyr_1.stencil((((dinput_lpyr_0_s0_x/2) + ((dinput_lpyr_0_s0_x % 2)*2)) + 4), ((dinput_lpyr_0_s0_y/2) + 5), dinput_lpyr_0_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_lpyr_0_s0_x/2) + 5), ((dinput_lpyr_0_s0_y/2) + 5), dinput_lpyr_0_s0__0)*3.000000f))*3.000000f) + (dinput_gpyr_gpyr_1.stencil((((dinput_lpyr_0_s0_x/2) + ((dinput_lpyr_0_s0_x % 2)*2)) + 4), (((dinput_lpyr_0_s0_y/2) + ((dinput_lpyr_0_s0_y % 2)*2)) + 4), dinput_lpyr_0_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_lpyr_0_s0_x/2) + 5), (((dinput_lpyr_0_s0_y/2) + ((dinput_lpyr_0_s0_y % 2)*2)) + 4), dinput_lpyr_0_s0__0)*3.000000f)))*0.062500f))
  //auto hcompute_dinput_lpyr_0_stencil = dinput_lpyr_0_s0_x->add_op("op_hcompute_dinput_lpyr_0_stencil");
  //hcompute_dinput_lpyr_0_stencil->add_function("hcompute_dinput_lpyr_0_stencil");
  //hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_0_stencil", "dinput_lpyr_0_s0__0", "(dinput_lpyr_0_s0_y + 11)", "(dinput_lpyr_0_s0_x + 11)");
  //hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_0_s0__0", "(floor((dinput_lpyr_0_s0_y/2)) + 5)", "((floor((dinput_lpyr_0_s0_x/2)) + ((dinput_lpyr_0_s0_x % 2)*2)) + 4)");
  //hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_0_s0__0", "(floor((dinput_lpyr_0_s0_y/2)) + 5)", "(floor((dinput_lpyr_0_s0_x/2)) + 5)");
  //hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_0_s0__0", "((floor((dinput_lpyr_0_s0_y/2)) + ((dinput_lpyr_0_s0_y % 2)*2)) + 4)", "((floor((dinput_lpyr_0_s0_x/2)) + ((dinput_lpyr_0_s0_x % 2)*2)) + 4)");
  //hcompute_dinput_lpyr_0_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_0_s0__0", "((floor((dinput_lpyr_0_s0_y/2)) + ((dinput_lpyr_0_s0_y % 2)*2)) + 4)", "(floor((dinput_lpyr_0_s0_x/2)) + 5)");
  //prg.buffer_port_widths["dinput_lpyr_0_stencil"] = 32;
  //hcompute_dinput_lpyr_0_stencil->add_store("dinput_lpyr_0_stencil", "dinput_lpyr_0_s0__0", "dinput_lpyr_0_s0_y", "dinput_lpyr_0_s0_x");

////consuming dinput_lpyr_0.stencil
//////producing dweight_gpyr_0.stencil
  //auto dweight_gpyr_0_s0__0 = prg.add_loop("dweight_gpyr_0_s0__0", 0, 3);
  //auto dweight_gpyr_0_s0_y = dweight_gpyr_0_s0__0->add_loop("dweight_gpyr_0_s0_y", -11, 75);
  //auto dweight_gpyr_0_s0_x = dweight_gpyr_0_s0_y->add_loop("dweight_gpyr_0_s0_x", -11, 75);

////store is: dweight_gpyr_0.stencil((dweight_gpyr_0_s0_x + 11), (dweight_gpyr_0_s0_y + 11), dweight_gpyr_0_s0__0) = ((hw_input_dark_global_wrapper.stencil((dweight_gpyr_0_s0_x + 11), (dweight_gpyr_0_s0_y + 11), dweight_gpyr_0_s0__0)*(uint16)2)/weight_sum.stencil((dweight_gpyr_0_s0_x + 11), (dweight_gpyr_0_s0_y + 11), dweight_gpyr_0_s0__0))
  //auto hcompute_dweight_gpyr_0_stencil = dweight_gpyr_0_s0_x->add_op("op_hcompute_dweight_gpyr_0_stencil");
  //hcompute_dweight_gpyr_0_stencil->add_function("hcompute_dweight_gpyr_0_stencil");
  //hcompute_dweight_gpyr_0_stencil->add_load("hw_input_dark_global_wrapper_stencil", "dweight_gpyr_0_s0__0", "(dweight_gpyr_0_s0_y + 11)", "(dweight_gpyr_0_s0_x + 11)");
  //hcompute_dweight_gpyr_0_stencil->add_load("weight_sum_stencil", "dweight_gpyr_0_s0__0", "(dweight_gpyr_0_s0_y + 11)", "(dweight_gpyr_0_s0_x + 11)");
  //prg.buffer_port_widths["dweight_gpyr_0_stencil"] = 16;
  //hcompute_dweight_gpyr_0_stencil->add_store("dweight_gpyr_0_stencil", "dweight_gpyr_0_s0__0", "(dweight_gpyr_0_s0_y + 11)", "(dweight_gpyr_0_s0_x + 11)");

////consuming dweight_gpyr_0.stencil
//////producing binput_gpyr_gpyr_2.stencil
  //auto binput_gpyr_gpyr_2_s0__0 = prg.add_loop("binput_gpyr_gpyr_2_s0__0", 0, 3);
  //auto binput_gpyr_gpyr_2_s0_y = binput_gpyr_gpyr_2_s0__0->add_loop("binput_gpyr_gpyr_2_s0_y", -2, 18);
  //auto binput_gpyr_gpyr_2_s0_x = binput_gpyr_gpyr_2_s0_y->add_loop("binput_gpyr_gpyr_2_s0_x", -2, 18);

////store is: binput_gpyr_gpyr_2.stencil((binput_gpyr_gpyr_2_s0_x + 2), (binput_gpyr_gpyr_2_s0_y + 2), binput_gpyr_gpyr_2_s0__0) = ((((((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0))*3.000000f))) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0))*3.000000f)))) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0))*3.000000f))))*0.015625f)
  //auto hcompute_binput_gpyr_gpyr_2_stencil = binput_gpyr_gpyr_2_s0_x->add_op("op_hcompute_binput_gpyr_gpyr_2_stencil");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_function("hcompute_binput_gpyr_gpyr_2_stencil");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 6)", "((binput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 6)", "((binput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 6)", "((binput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 4)", "((binput_gpyr_gpyr_2_s0_x*2) + 7)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 4)", "((binput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 4)", "((binput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 4)", "((binput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 7)", "((binput_gpyr_gpyr_2_s0_x*2) + 7)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 7)", "((binput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 7)", "((binput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 7)", "((binput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 5)", "((binput_gpyr_gpyr_2_s0_x*2) + 7)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 5)", "((binput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 5)", "((binput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 5)", "((binput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_binput_gpyr_gpyr_2_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_gpyr_gpyr_2_s0__0", "((binput_gpyr_gpyr_2_s0_y*2) + 6)", "((binput_gpyr_gpyr_2_s0_x*2) + 7)");
  //prg.buffer_port_widths["binput_gpyr_gpyr_2_stencil"] = 32;
  //hcompute_binput_gpyr_gpyr_2_stencil->add_store("binput_gpyr_gpyr_2_stencil", "binput_gpyr_gpyr_2_s0__0", "(binput_gpyr_gpyr_2_s0_y + 2)", "(binput_gpyr_gpyr_2_s0_x + 2)");

////consuming binput_gpyr_gpyr_2.stencil
//////producing binput_lpyr_1.stencil
  //auto binput_lpyr_1_s0__0 = prg.add_loop("binput_lpyr_1_s0__0", 0, 3);
  //auto binput_lpyr_1_s0_y = binput_lpyr_1_s0__0->add_loop("binput_lpyr_1_s0_y", -1, 33);
  //auto binput_lpyr_1_s0_x = binput_lpyr_1_s0_y->add_loop("binput_lpyr_1_s0_x", -1, 33);

////store is: binput_lpyr_1.stencil((binput_lpyr_1_s0_x + 1), (binput_lpyr_1_s0_y + 1), binput_lpyr_1_s0__0) = (binput_gpyr_gpyr_1.stencil((binput_lpyr_1_s0_x + 5), (binput_lpyr_1_s0_y + 5), binput_lpyr_1_s0__0) - ((((binput_gpyr_gpyr_2.stencil((((binput_lpyr_1_s0_x/2) + ((binput_lpyr_1_s0_x % 2)*2)) + 1), ((binput_lpyr_1_s0_y/2) + 2), binput_lpyr_1_s0__0) + (binput_gpyr_gpyr_2.stencil(((binput_lpyr_1_s0_x/2) + 2), ((binput_lpyr_1_s0_y/2) + 2), binput_lpyr_1_s0__0)*3.000000f))*3.000000f) + (binput_gpyr_gpyr_2.stencil((((binput_lpyr_1_s0_x/2) + ((binput_lpyr_1_s0_x % 2)*2)) + 1), (((binput_lpyr_1_s0_y/2) + ((binput_lpyr_1_s0_y % 2)*2)) + 1), binput_lpyr_1_s0__0) + (binput_gpyr_gpyr_2.stencil(((binput_lpyr_1_s0_x/2) + 2), (((binput_lpyr_1_s0_y/2) + ((binput_lpyr_1_s0_y % 2)*2)) + 1), binput_lpyr_1_s0__0)*3.000000f)))*0.062500f))
  //auto hcompute_binput_lpyr_1_stencil = binput_lpyr_1_s0_x->add_op("op_hcompute_binput_lpyr_1_stencil");
  //hcompute_binput_lpyr_1_stencil->add_function("hcompute_binput_lpyr_1_stencil");
  //hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_1_stencil", "binput_lpyr_1_s0__0", "(binput_lpyr_1_s0_y + 5)", "(binput_lpyr_1_s0_x + 5)");
  //hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_1_s0__0", "(floor((binput_lpyr_1_s0_y/2)) + 2)", "((floor((binput_lpyr_1_s0_x/2)) + ((binput_lpyr_1_s0_x % 2)*2)) + 1)");
  //hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_1_s0__0", "(floor((binput_lpyr_1_s0_y/2)) + 2)", "(floor((binput_lpyr_1_s0_x/2)) + 2)");
  //hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_1_s0__0", "((floor((binput_lpyr_1_s0_y/2)) + ((binput_lpyr_1_s0_y % 2)*2)) + 1)", "((floor((binput_lpyr_1_s0_x/2)) + ((binput_lpyr_1_s0_x % 2)*2)) + 1)");
  //hcompute_binput_lpyr_1_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_1_s0__0", "((floor((binput_lpyr_1_s0_y/2)) + ((binput_lpyr_1_s0_y % 2)*2)) + 1)", "(floor((binput_lpyr_1_s0_x/2)) + 2)");
  //prg.buffer_port_widths["binput_lpyr_1_stencil"] = 32;
  //hcompute_binput_lpyr_1_stencil->add_store("binput_lpyr_1_stencil", "binput_lpyr_1_s0__0", "(binput_lpyr_1_s0_y + 1)", "(binput_lpyr_1_s0_x + 1)");

////consuming binput_lpyr_1.stencil
//////producing bweight_gpyr_1.stencil
  //auto bweight_gpyr_1_s0__0 = prg.add_loop("bweight_gpyr_1_s0__0", 0, 3);
  //auto bweight_gpyr_1_s0_y = bweight_gpyr_1_s0__0->add_loop("bweight_gpyr_1_s0_y", -5, 37);
  //auto bweight_gpyr_1_s0_x = bweight_gpyr_1_s0_y->add_loop("bweight_gpyr_1_s0_x", -5, 37);

////store is: bweight_gpyr_1.stencil((bweight_gpyr_1_s0_x + 5), (bweight_gpyr_1_s0_y + 5), bweight_gpyr_1_s0__0) = ((((((((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0))) + (((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0))))*3.000000f) + (((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0)))) + (((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0))))*0.015625f)
  //auto hcompute_bweight_gpyr_1_stencil = bweight_gpyr_1_s0_x->add_op("op_hcompute_bweight_gpyr_1_stencil");
  //hcompute_bweight_gpyr_1_stencil->add_function("hcompute_bweight_gpyr_1_stencil");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 11)", "((bweight_gpyr_1_s0_x*2) + 11)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 10)", "((bweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 10)", "((bweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 10)", "((bweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 13)", "((bweight_gpyr_1_s0_x*2) + 11)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 13)", "((bweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 13)", "((bweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 13)", "((bweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 11)", "((bweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 11)", "((bweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 11)", "((bweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 12)", "((bweight_gpyr_1_s0_x*2) + 11)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 12)", "((bweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 12)", "((bweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 12)", "((bweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_bweight_gpyr_1_stencil->add_load("bweight_gpyr_0_stencil", "bweight_gpyr_1_s0__0", "((bweight_gpyr_1_s0_y*2) + 10)", "((bweight_gpyr_1_s0_x*2) + 11)");
  //prg.buffer_port_widths["bweight_gpyr_1_stencil"] = 32;
  //hcompute_bweight_gpyr_1_stencil->add_store("bweight_gpyr_1_stencil", "bweight_gpyr_1_s0__0", "(bweight_gpyr_1_s0_y + 5)", "(bweight_gpyr_1_s0_x + 5)");

////consuming bweight_gpyr_1.stencil
//////producing dinput_gpyr_gpyr_2.stencil
  //auto dinput_gpyr_gpyr_2_s0__0 = prg.add_loop("dinput_gpyr_gpyr_2_s0__0", 0, 3);
  //auto dinput_gpyr_gpyr_2_s0_y = dinput_gpyr_gpyr_2_s0__0->add_loop("dinput_gpyr_gpyr_2_s0_y", -2, 18);
  //auto dinput_gpyr_gpyr_2_s0_x = dinput_gpyr_gpyr_2_s0_y->add_loop("dinput_gpyr_gpyr_2_s0_x", -2, 18);

////store is: dinput_gpyr_gpyr_2.stencil((dinput_gpyr_gpyr_2_s0_x + 2), (dinput_gpyr_gpyr_2_s0_y + 2), dinput_gpyr_gpyr_2_s0__0) = ((((((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0))*3.000000f))) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0))*3.000000f)))) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0))*3.000000f))))*0.015625f)
  //auto hcompute_dinput_gpyr_gpyr_2_stencil = dinput_gpyr_gpyr_2_s0_x->add_op("op_hcompute_dinput_gpyr_gpyr_2_stencil");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_function("hcompute_dinput_gpyr_gpyr_2_stencil");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 6)", "((dinput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 6)", "((dinput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 6)", "((dinput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 4)", "((dinput_gpyr_gpyr_2_s0_x*2) + 7)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 4)", "((dinput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 4)", "((dinput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 4)", "((dinput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 7)", "((dinput_gpyr_gpyr_2_s0_x*2) + 7)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 7)", "((dinput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 7)", "((dinput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 7)", "((dinput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 5)", "((dinput_gpyr_gpyr_2_s0_x*2) + 7)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 5)", "((dinput_gpyr_gpyr_2_s0_x*2) + 4)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 5)", "((dinput_gpyr_gpyr_2_s0_x*2) + 5)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 5)", "((dinput_gpyr_gpyr_2_s0_x*2) + 6)");
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_gpyr_gpyr_2_s0__0", "((dinput_gpyr_gpyr_2_s0_y*2) + 6)", "((dinput_gpyr_gpyr_2_s0_x*2) + 7)");
  //prg.buffer_port_widths["dinput_gpyr_gpyr_2_stencil"] = 32;
  //hcompute_dinput_gpyr_gpyr_2_stencil->add_store("dinput_gpyr_gpyr_2_stencil", "dinput_gpyr_gpyr_2_s0__0", "(dinput_gpyr_gpyr_2_s0_y + 2)", "(dinput_gpyr_gpyr_2_s0_x + 2)");

////consuming dinput_gpyr_gpyr_2.stencil
//////producing dinput_lpyr_1.stencil
  //auto dinput_lpyr_1_s0__0 = prg.add_loop("dinput_lpyr_1_s0__0", 0, 3);
  //auto dinput_lpyr_1_s0_y = dinput_lpyr_1_s0__0->add_loop("dinput_lpyr_1_s0_y", -1, 33);
  //auto dinput_lpyr_1_s0_x = dinput_lpyr_1_s0_y->add_loop("dinput_lpyr_1_s0_x", -1, 33);

////store is: dinput_lpyr_1.stencil((dinput_lpyr_1_s0_x + 1), (dinput_lpyr_1_s0_y + 1), dinput_lpyr_1_s0__0) = (dinput_gpyr_gpyr_1.stencil((dinput_lpyr_1_s0_x + 5), (dinput_lpyr_1_s0_y + 5), dinput_lpyr_1_s0__0) - ((((dinput_gpyr_gpyr_2.stencil((((dinput_lpyr_1_s0_x/2) + ((dinput_lpyr_1_s0_x % 2)*2)) + 1), ((dinput_lpyr_1_s0_y/2) + 2), dinput_lpyr_1_s0__0) + (dinput_gpyr_gpyr_2.stencil(((dinput_lpyr_1_s0_x/2) + 2), ((dinput_lpyr_1_s0_y/2) + 2), dinput_lpyr_1_s0__0)*3.000000f))*3.000000f) + (dinput_gpyr_gpyr_2.stencil((((dinput_lpyr_1_s0_x/2) + ((dinput_lpyr_1_s0_x % 2)*2)) + 1), (((dinput_lpyr_1_s0_y/2) + ((dinput_lpyr_1_s0_y % 2)*2)) + 1), dinput_lpyr_1_s0__0) + (dinput_gpyr_gpyr_2.stencil(((dinput_lpyr_1_s0_x/2) + 2), (((dinput_lpyr_1_s0_y/2) + ((dinput_lpyr_1_s0_y % 2)*2)) + 1), dinput_lpyr_1_s0__0)*3.000000f)))*0.062500f))
  //auto hcompute_dinput_lpyr_1_stencil = dinput_lpyr_1_s0_x->add_op("op_hcompute_dinput_lpyr_1_stencil");
  //hcompute_dinput_lpyr_1_stencil->add_function("hcompute_dinput_lpyr_1_stencil");
  //hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_1_stencil", "dinput_lpyr_1_s0__0", "(dinput_lpyr_1_s0_y + 5)", "(dinput_lpyr_1_s0_x + 5)");
  //hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_1_s0__0", "(floor((dinput_lpyr_1_s0_y/2)) + 2)", "((floor((dinput_lpyr_1_s0_x/2)) + ((dinput_lpyr_1_s0_x % 2)*2)) + 1)");
  //hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_1_s0__0", "(floor((dinput_lpyr_1_s0_y/2)) + 2)", "(floor((dinput_lpyr_1_s0_x/2)) + 2)");
  //hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_1_s0__0", "((floor((dinput_lpyr_1_s0_y/2)) + ((dinput_lpyr_1_s0_y % 2)*2)) + 1)", "((floor((dinput_lpyr_1_s0_x/2)) + ((dinput_lpyr_1_s0_x % 2)*2)) + 1)");
  //hcompute_dinput_lpyr_1_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_1_s0__0", "((floor((dinput_lpyr_1_s0_y/2)) + ((dinput_lpyr_1_s0_y % 2)*2)) + 1)", "(floor((dinput_lpyr_1_s0_x/2)) + 2)");
  //prg.buffer_port_widths["dinput_lpyr_1_stencil"] = 32;
  //hcompute_dinput_lpyr_1_stencil->add_store("dinput_lpyr_1_stencil", "dinput_lpyr_1_s0__0", "(dinput_lpyr_1_s0_y + 1)", "(dinput_lpyr_1_s0_x + 1)");

////consuming dinput_lpyr_1.stencil
//////producing dweight_gpyr_1.stencil
  //auto dweight_gpyr_1_s0__0 = prg.add_loop("dweight_gpyr_1_s0__0", 0, 3);
  //auto dweight_gpyr_1_s0_y = dweight_gpyr_1_s0__0->add_loop("dweight_gpyr_1_s0_y", -5, 37);
  //auto dweight_gpyr_1_s0_x = dweight_gpyr_1_s0_y->add_loop("dweight_gpyr_1_s0_x", -5, 37);

////store is: dweight_gpyr_1.stencil((dweight_gpyr_1_s0_x + 5), (dweight_gpyr_1_s0_y + 5), dweight_gpyr_1_s0__0) = ((((((((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0))) + (((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0))))*3.000000f) + (((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0)))) + (((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0))))*0.015625f)
  //auto hcompute_dweight_gpyr_1_stencil = dweight_gpyr_1_s0_x->add_op("op_hcompute_dweight_gpyr_1_stencil");
  //hcompute_dweight_gpyr_1_stencil->add_function("hcompute_dweight_gpyr_1_stencil");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 11)", "((dweight_gpyr_1_s0_x*2) + 11)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 10)", "((dweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 10)", "((dweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 10)", "((dweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 13)", "((dweight_gpyr_1_s0_x*2) + 11)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 13)", "((dweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 13)", "((dweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 13)", "((dweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 11)", "((dweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 11)", "((dweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 11)", "((dweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 12)", "((dweight_gpyr_1_s0_x*2) + 11)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 12)", "((dweight_gpyr_1_s0_x*2) + 12)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 12)", "((dweight_gpyr_1_s0_x*2) + 10)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 12)", "((dweight_gpyr_1_s0_x*2) + 13)");
  //hcompute_dweight_gpyr_1_stencil->add_load("dweight_gpyr_0_stencil", "dweight_gpyr_1_s0__0", "((dweight_gpyr_1_s0_y*2) + 10)", "((dweight_gpyr_1_s0_x*2) + 11)");
  //prg.buffer_port_widths["dweight_gpyr_1_stencil"] = 32;
  //hcompute_dweight_gpyr_1_stencil->add_store("dweight_gpyr_1_stencil", "dweight_gpyr_1_s0__0", "(dweight_gpyr_1_s0_y + 5)", "(dweight_gpyr_1_s0_x + 5)");

////consuming dweight_gpyr_1.stencil
//////producing binput_lpyr_2.stencil
  //auto binput_lpyr_2_s0__0 = prg.add_loop("binput_lpyr_2_s0__0", 0, 3);
  //auto binput_lpyr_2_s0_y = binput_lpyr_2_s0__0->add_loop("binput_lpyr_2_s0_y", -2, 18);
  //auto binput_lpyr_2_s0_x = binput_lpyr_2_s0_y->add_loop("binput_lpyr_2_s0_x", -2, 18);

////store is: binput_lpyr_2.stencil((binput_lpyr_2_s0_x + 2), (binput_lpyr_2_s0_y + 2), binput_lpyr_2_s0__0) = binput_gpyr_gpyr_2.stencil((binput_lpyr_2_s0_x + 2), (binput_lpyr_2_s0_y + 2), binput_lpyr_2_s0__0)
  //auto hcompute_binput_lpyr_2_stencil = binput_lpyr_2_s0_x->add_op("op_hcompute_binput_lpyr_2_stencil");
  //hcompute_binput_lpyr_2_stencil->add_function("hcompute_binput_lpyr_2_stencil");
  //hcompute_binput_lpyr_2_stencil->add_load("binput_gpyr_gpyr_2_stencil", "binput_lpyr_2_s0__0", "(binput_lpyr_2_s0_y + 2)", "(binput_lpyr_2_s0_x + 2)");
  //prg.buffer_port_widths["binput_lpyr_2_stencil"] = 32;
  //hcompute_binput_lpyr_2_stencil->add_store("binput_lpyr_2_stencil", "binput_lpyr_2_s0__0", "(binput_lpyr_2_s0_y + 2)", "(binput_lpyr_2_s0_x + 2)");

////consuming binput_lpyr_2.stencil
//////producing bweight_gpyr_2.stencil
  //auto bweight_gpyr_2_s0__0 = prg.add_loop("bweight_gpyr_2_s0__0", 0, 3);
  //auto bweight_gpyr_2_s0_y = bweight_gpyr_2_s0__0->add_loop("bweight_gpyr_2_s0_y", -2, 18);
  //auto bweight_gpyr_2_s0_x = bweight_gpyr_2_s0_y->add_loop("bweight_gpyr_2_s0_x", -2, 18);

////store is: bweight_gpyr_2.stencil((bweight_gpyr_2_s0_x + 2), (bweight_gpyr_2_s0_y + 2), bweight_gpyr_2_s0__0) = ((((((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0))*3.000000f))) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0))*3.000000f)))) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0))*3.000000f))))*0.015625f)
  //auto hcompute_bweight_gpyr_2_stencil = bweight_gpyr_2_s0_x->add_op("op_hcompute_bweight_gpyr_2_stencil");
  //hcompute_bweight_gpyr_2_stencil->add_function("hcompute_bweight_gpyr_2_stencil");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 5)", "((bweight_gpyr_2_s0_x*2) + 7)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 4)", "((bweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 4)", "((bweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 4)", "((bweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 7)", "((bweight_gpyr_2_s0_x*2) + 7)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 7)", "((bweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 7)", "((bweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 7)", "((bweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 5)", "((bweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 5)", "((bweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 5)", "((bweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 6)", "((bweight_gpyr_2_s0_x*2) + 7)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 6)", "((bweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 6)", "((bweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 6)", "((bweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_bweight_gpyr_2_stencil->add_load("bweight_gpyr_1_stencil", "bweight_gpyr_2_s0__0", "((bweight_gpyr_2_s0_y*2) + 4)", "((bweight_gpyr_2_s0_x*2) + 7)");
  //prg.buffer_port_widths["bweight_gpyr_2_stencil"] = 32;
  //hcompute_bweight_gpyr_2_stencil->add_store("bweight_gpyr_2_stencil", "bweight_gpyr_2_s0__0", "(bweight_gpyr_2_s0_y + 2)", "(bweight_gpyr_2_s0_x + 2)");

////consuming bweight_gpyr_2.stencil
//////producing dinput_lpyr_2.stencil
  //auto dinput_lpyr_2_s0__0 = prg.add_loop("dinput_lpyr_2_s0__0", 0, 3);
  //auto dinput_lpyr_2_s0_y = dinput_lpyr_2_s0__0->add_loop("dinput_lpyr_2_s0_y", -2, 18);
  //auto dinput_lpyr_2_s0_x = dinput_lpyr_2_s0_y->add_loop("dinput_lpyr_2_s0_x", -2, 18);

////store is: dinput_lpyr_2.stencil((dinput_lpyr_2_s0_x + 2), (dinput_lpyr_2_s0_y + 2), dinput_lpyr_2_s0__0) = dinput_gpyr_gpyr_2.stencil((dinput_lpyr_2_s0_x + 2), (dinput_lpyr_2_s0_y + 2), dinput_lpyr_2_s0__0)
  //auto hcompute_dinput_lpyr_2_stencil = dinput_lpyr_2_s0_x->add_op("op_hcompute_dinput_lpyr_2_stencil");
  //hcompute_dinput_lpyr_2_stencil->add_function("hcompute_dinput_lpyr_2_stencil");
  //hcompute_dinput_lpyr_2_stencil->add_load("dinput_gpyr_gpyr_2_stencil", "dinput_lpyr_2_s0__0", "(dinput_lpyr_2_s0_y + 2)", "(dinput_lpyr_2_s0_x + 2)");
  //prg.buffer_port_widths["dinput_lpyr_2_stencil"] = 32;
  //hcompute_dinput_lpyr_2_stencil->add_store("dinput_lpyr_2_stencil", "dinput_lpyr_2_s0__0", "(dinput_lpyr_2_s0_y + 2)", "(dinput_lpyr_2_s0_x + 2)");

////consuming dinput_lpyr_2.stencil
//////producing dweight_gpyr_2.stencil
  //auto dweight_gpyr_2_s0__0 = prg.add_loop("dweight_gpyr_2_s0__0", 0, 3);
  //auto dweight_gpyr_2_s0_y = dweight_gpyr_2_s0__0->add_loop("dweight_gpyr_2_s0_y", -2, 18);
  //auto dweight_gpyr_2_s0_x = dweight_gpyr_2_s0_y->add_loop("dweight_gpyr_2_s0_x", -2, 18);

////store is: dweight_gpyr_2.stencil((dweight_gpyr_2_s0_x + 2), (dweight_gpyr_2_s0_y + 2), dweight_gpyr_2_s0__0) = ((((((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0))*3.000000f))) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0))*3.000000f)))) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0))*3.000000f))))*0.015625f)
  //auto hcompute_dweight_gpyr_2_stencil = dweight_gpyr_2_s0_x->add_op("op_hcompute_dweight_gpyr_2_stencil");
  //hcompute_dweight_gpyr_2_stencil->add_function("hcompute_dweight_gpyr_2_stencil");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 5)", "((dweight_gpyr_2_s0_x*2) + 7)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 4)", "((dweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 4)", "((dweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 4)", "((dweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 7)", "((dweight_gpyr_2_s0_x*2) + 7)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 7)", "((dweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 7)", "((dweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 7)", "((dweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 5)", "((dweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 5)", "((dweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 5)", "((dweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 6)", "((dweight_gpyr_2_s0_x*2) + 7)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 6)", "((dweight_gpyr_2_s0_x*2) + 4)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 6)", "((dweight_gpyr_2_s0_x*2) + 5)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 6)", "((dweight_gpyr_2_s0_x*2) + 6)");
  //hcompute_dweight_gpyr_2_stencil->add_load("dweight_gpyr_1_stencil", "dweight_gpyr_2_s0__0", "((dweight_gpyr_2_s0_y*2) + 4)", "((dweight_gpyr_2_s0_x*2) + 7)");
  //prg.buffer_port_widths["dweight_gpyr_2_stencil"] = 32;
  //hcompute_dweight_gpyr_2_stencil->add_store("dweight_gpyr_2_stencil", "dweight_gpyr_2_s0__0", "(dweight_gpyr_2_s0_y + 2)", "(dweight_gpyr_2_s0_x + 2)");

////consuming dweight_gpyr_2.stencil
//////producing merge_pyr_2.stencil
  //auto merge_pyr_2_s0__0 = prg.add_loop("merge_pyr_2_s0__0", 0, 3);
  //auto merge_pyr_2_s0_y = merge_pyr_2_s0__0->add_loop("merge_pyr_2_s0_y", -2, 18);
  //auto merge_pyr_2_s0_x = merge_pyr_2_s0_y->add_loop("merge_pyr_2_s0_x", -2, 18);

////store is: merge_pyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0) = ((dweight_gpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)*dinput_lpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)) + (bweight_gpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)*binput_lpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)))
  //auto hcompute_merge_pyr_2_stencil = merge_pyr_2_s0_x->add_op("op_hcompute_merge_pyr_2_stencil");
  //hcompute_merge_pyr_2_stencil->add_function("hcompute_merge_pyr_2_stencil");
  //hcompute_merge_pyr_2_stencil->add_load("binput_lpyr_2_stencil", "merge_pyr_2_s0__0", "(merge_pyr_2_s0_y + 2)", "(merge_pyr_2_s0_x + 2)");
  //hcompute_merge_pyr_2_stencil->add_load("bweight_gpyr_2_stencil", "merge_pyr_2_s0__0", "(merge_pyr_2_s0_y + 2)", "(merge_pyr_2_s0_x + 2)");
  //hcompute_merge_pyr_2_stencil->add_load("dinput_lpyr_2_stencil", "merge_pyr_2_s0__0", "(merge_pyr_2_s0_y + 2)", "(merge_pyr_2_s0_x + 2)");
  //hcompute_merge_pyr_2_stencil->add_load("dweight_gpyr_2_stencil", "merge_pyr_2_s0__0", "(merge_pyr_2_s0_y + 2)", "(merge_pyr_2_s0_x + 2)");
  //prg.buffer_port_widths["merge_pyr_2_stencil"] = 32;
  //hcompute_merge_pyr_2_stencil->add_store("merge_pyr_2_stencil", "merge_pyr_2_s0__0", "(merge_pyr_2_s0_y + 2)", "(merge_pyr_2_s0_x + 2)");

////consuming merge_pyr_2.stencil
//////producing merge_pyr_1.stencil
  //auto merge_pyr_1_s0__0 = prg.add_loop("merge_pyr_1_s0__0", 0, 3);
  //auto merge_pyr_1_s0_y = merge_pyr_1_s0__0->add_loop("merge_pyr_1_s0_y", -1, 33);
  //auto merge_pyr_1_s0_x = merge_pyr_1_s0_y->add_loop("merge_pyr_1_s0_x", -1, 33);

////store is: merge_pyr_1.stencil((merge_pyr_1_s0_x + 1), (merge_pyr_1_s0_y + 1), merge_pyr_1_s0__0) = ((dweight_gpyr_1.stencil((merge_pyr_1_s0_x + 5), (merge_pyr_1_s0_y + 5), merge_pyr_1_s0__0)*dinput_lpyr_1.stencil((merge_pyr_1_s0_x + 1), (merge_pyr_1_s0_y + 1), merge_pyr_1_s0__0)) + (bweight_gpyr_1.stencil((merge_pyr_1_s0_x + 5), (merge_pyr_1_s0_y + 5), merge_pyr_1_s0__0)*binput_lpyr_1.stencil((merge_pyr_1_s0_x + 1), (merge_pyr_1_s0_y + 1), merge_pyr_1_s0__0)))
  //auto hcompute_merge_pyr_1_stencil = merge_pyr_1_s0_x->add_op("op_hcompute_merge_pyr_1_stencil");
  //hcompute_merge_pyr_1_stencil->add_function("hcompute_merge_pyr_1_stencil");
  //hcompute_merge_pyr_1_stencil->add_load("binput_lpyr_1_stencil", "merge_pyr_1_s0__0", "(merge_pyr_1_s0_y + 1)", "(merge_pyr_1_s0_x + 1)");
  //hcompute_merge_pyr_1_stencil->add_load("bweight_gpyr_1_stencil", "merge_pyr_1_s0__0", "(merge_pyr_1_s0_y + 5)", "(merge_pyr_1_s0_x + 5)");
  //hcompute_merge_pyr_1_stencil->add_load("dinput_lpyr_1_stencil", "merge_pyr_1_s0__0", "(merge_pyr_1_s0_y + 1)", "(merge_pyr_1_s0_x + 1)");
  //hcompute_merge_pyr_1_stencil->add_load("dweight_gpyr_1_stencil", "merge_pyr_1_s0__0", "(merge_pyr_1_s0_y + 5)", "(merge_pyr_1_s0_x + 5)");
  //prg.buffer_port_widths["merge_pyr_1_stencil"] = 32;
  //hcompute_merge_pyr_1_stencil->add_store("merge_pyr_1_stencil", "merge_pyr_1_s0__0", "(merge_pyr_1_s0_y + 1)", "(merge_pyr_1_s0_x + 1)");
  //auto merge_pyr_1_s1__0 = prg.add_loop("merge_pyr_1_s1__0", 0, 3);
  //auto merge_pyr_1_s1_y = merge_pyr_1_s1__0->add_loop("merge_pyr_1_s1_y", -1, 33);
  //auto merge_pyr_1_s1_x = merge_pyr_1_s1_y->add_loop("merge_pyr_1_s1_x", -1, 33);

////store is: merge_pyr_1.stencil((merge_pyr_1_s1_x + 1), (merge_pyr_1_s1_y + 1), merge_pyr_1_s1__0) = ((merge_pyr_1.stencil((merge_pyr_1_s1_x + 1), (merge_pyr_1_s1_y + 1), merge_pyr_1_s1__0)*(((merge_pyr_2.stencil((((merge_pyr_1_s1_x/2) + ((merge_pyr_1_s1_x % 2)*2)) + 1), ((merge_pyr_1_s1_y/2) + 2), merge_pyr_1_s1__0) + (merge_pyr_2.stencil(((merge_pyr_1_s1_x/2) + 2), ((merge_pyr_1_s1_y/2) + 2), merge_pyr_1_s1__0)*3.000000f))*3.000000f) + (merge_pyr_2.stencil((((merge_pyr_1_s1_x/2) + ((merge_pyr_1_s1_x % 2)*2)) + 1), (((merge_pyr_1_s1_y/2) + ((merge_pyr_1_s1_y % 2)*2)) + 1), merge_pyr_1_s1__0) + (merge_pyr_2.stencil(((merge_pyr_1_s1_x/2) + 2), (((merge_pyr_1_s1_y/2) + ((merge_pyr_1_s1_y % 2)*2)) + 1), merge_pyr_1_s1__0)*3.000000f))))*0.062500f)
  //auto hcompute_merge_pyr_1_stencil_1 = merge_pyr_1_s1_x->add_op("op_hcompute_merge_pyr_1_stencil_1");
  //hcompute_merge_pyr_1_stencil_1->add_function("hcompute_merge_pyr_1_stencil_1");
  //hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_1_s1__0", "(merge_pyr_1_s1_y + 1)", "(merge_pyr_1_s1_x + 1)");
  //hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_2_stencil", "merge_pyr_1_s1__0", "(floor((merge_pyr_1_s1_y/2)) + 2)", "((floor((merge_pyr_1_s1_x/2)) + ((merge_pyr_1_s1_x % 2)*2)) + 1)");
  //hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_2_stencil", "merge_pyr_1_s1__0", "(floor((merge_pyr_1_s1_y/2)) + 2)", "(floor((merge_pyr_1_s1_x/2)) + 2)");
  //hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_2_stencil", "merge_pyr_1_s1__0", "((floor((merge_pyr_1_s1_y/2)) + ((merge_pyr_1_s1_y % 2)*2)) + 1)", "((floor((merge_pyr_1_s1_x/2)) + ((merge_pyr_1_s1_x % 2)*2)) + 1)");
  //hcompute_merge_pyr_1_stencil_1->add_load("merge_pyr_2_stencil", "merge_pyr_1_s1__0", "((floor((merge_pyr_1_s1_y/2)) + ((merge_pyr_1_s1_y % 2)*2)) + 1)", "(floor((merge_pyr_1_s1_x/2)) + 2)");
  //hcompute_merge_pyr_1_stencil_1->add_store("merge_pyr_1_stencil", "merge_pyr_1_s1__0", "(merge_pyr_1_s1_y + 1)", "(merge_pyr_1_s1_x + 1)");

////consuming merge_pyr_1.stencil
//////producing merge_pyr_0.stencil
  //auto merge_pyr_0_s0__0 = prg.add_loop("merge_pyr_0_s0__0", 0, 3);
  //auto merge_pyr_0_s0_y = merge_pyr_0_s0__0->add_loop("merge_pyr_0_s0_y", 0, 64);
  //auto merge_pyr_0_s0_x = merge_pyr_0_s0_y->add_loop("merge_pyr_0_s0_x", 0, 64);

////store is: merge_pyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0) = ((dinput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*float32(dweight_gpyr_0.stencil((merge_pyr_0_s0_x + 11), (merge_pyr_0_s0_y + 11), merge_pyr_0_s0__0))) + (binput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*float32(bweight_gpyr_0.stencil((merge_pyr_0_s0_x + 11), (merge_pyr_0_s0_y + 11), merge_pyr_0_s0__0))))
  //auto hcompute_merge_pyr_0_stencil = merge_pyr_0_s0_x->add_op("op_hcompute_merge_pyr_0_stencil");
  //hcompute_merge_pyr_0_stencil->add_function("hcompute_merge_pyr_0_stencil");
  //hcompute_merge_pyr_0_stencil->add_load("binput_lpyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  //hcompute_merge_pyr_0_stencil->add_load("bweight_gpyr_0_stencil", "merge_pyr_0_s0__0", "(merge_pyr_0_s0_y + 11)", "(merge_pyr_0_s0_x + 11)");
  //hcompute_merge_pyr_0_stencil->add_load("dinput_lpyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  //hcompute_merge_pyr_0_stencil->add_load("dweight_gpyr_0_stencil", "merge_pyr_0_s0__0", "(merge_pyr_0_s0_y + 11)", "(merge_pyr_0_s0_x + 11)");
  //prg.buffer_port_widths["merge_pyr_0_stencil"] = 32;
  //hcompute_merge_pyr_0_stencil->add_store("merge_pyr_0_stencil", "merge_pyr_0_s0__0", "merge_pyr_0_s0_y", "merge_pyr_0_s0_x");
  //auto merge_pyr_0_s1__0 = prg.add_loop("merge_pyr_0_s1__0", 0, 3);
  //auto merge_pyr_0_s1_y = merge_pyr_0_s1__0->add_loop("merge_pyr_0_s1_y", 0, 64);
  //auto merge_pyr_0_s1_x = merge_pyr_0_s1_y->add_loop("merge_pyr_0_s1_x", 0, 64);

////store is: merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0) = ((merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0)*(((merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + ((merge_pyr_0_s1_x % 2)*2)), ((merge_pyr_0_s1_y/2) + 1), merge_pyr_0_s1__0) + (merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + 1), ((merge_pyr_0_s1_y/2) + 1), merge_pyr_0_s1__0)*3.000000f))*3.000000f) + (merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + ((merge_pyr_0_s1_x % 2)*2)), ((merge_pyr_0_s1_y/2) + ((merge_pyr_0_s1_y % 2)*2)), merge_pyr_0_s1__0) + (merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + 1), ((merge_pyr_0_s1_y/2) + ((merge_pyr_0_s1_y % 2)*2)), merge_pyr_0_s1__0)*3.000000f))))*0.062500f)
  //auto hcompute_merge_pyr_0_stencil_1 = merge_pyr_0_s1_x->add_op("op_hcompute_merge_pyr_0_stencil_1");
  //hcompute_merge_pyr_0_stencil_1->add_function("hcompute_merge_pyr_0_stencil_1");
  //hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_0_stencil", "merge_pyr_0_s1__0", "merge_pyr_0_s1_y", "merge_pyr_0_s1_x");
  //hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_0_s1__0", "(floor((merge_pyr_0_s1_y/2)) + 1)", "(floor((merge_pyr_0_s1_x/2)) + ((merge_pyr_0_s1_x % 2)*2))");
  //hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_0_s1__0", "(floor((merge_pyr_0_s1_y/2)) + 1)", "(floor((merge_pyr_0_s1_x/2)) + 1)");
  //hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_0_s1__0", "(floor((merge_pyr_0_s1_y/2)) + ((merge_pyr_0_s1_y % 2)*2))", "(floor((merge_pyr_0_s1_x/2)) + ((merge_pyr_0_s1_x % 2)*2))");
  //hcompute_merge_pyr_0_stencil_1->add_load("merge_pyr_1_stencil", "merge_pyr_0_s1__0", "(floor((merge_pyr_0_s1_y/2)) + ((merge_pyr_0_s1_y % 2)*2))", "(floor((merge_pyr_0_s1_x/2)) + 1)");
  //hcompute_merge_pyr_0_stencil_1->add_store("merge_pyr_0_stencil", "merge_pyr_0_s1__0", "merge_pyr_0_s1_y", "merge_pyr_0_s1_x");

////consuming merge_pyr_0.stencil
  //auto hw_output_s0_c = prg.add_loop("hw_output_s0_c", 0, 3);
  //auto hw_output_s0_y_yi = hw_output_s0_c->add_loop("hw_output_s0_y_yi", 0, 64);
  //auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

////store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c) = merge_pyr_0.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c)
  //auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  //hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  //hcompute_hw_output_stencil->add_load("merge_pyr_0_stencil", "hw_output_s0_c", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  //hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_c", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  //return prg;
//}


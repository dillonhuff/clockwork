#include "example_progs.h"

prog resnet_one_input() {
  prog prg;
  prg.compute_unit_file = "resnet_one_input_compute.h";
  prg.name = "resnet_one_input";

// Stencil<int16_t, 32, 8, 8> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 8, 30> &hw_output_stencil = arg_1;
    //TODO: copy to bc_mirros

  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 8);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 8);

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

//store is: hw_input_global_wrapper.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");
  hcompute_hw_input_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");

//store is: hw_input_global_wrapper.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_5 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");
  hcompute_hw_input_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");

//store is: hw_input_global_wrapper.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");
  hcompute_hw_input_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");

//store is: hw_input_global_wrapper.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_7 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");
  hcompute_hw_input_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");

//store is: hw_input_global_wrapper.stencil(8, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(8, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_8 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_stencil_8->add_function("hcompute_hw_input_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_stencil_8->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "8");
  hcompute_hw_input_global_wrapper_stencil_8->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "8");

//store is: hw_input_global_wrapper.stencil(9, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(9, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_9 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_9");
  hcompute_hw_input_global_wrapper_stencil_9->add_function("hcompute_hw_input_global_wrapper_stencil_9");
  hcompute_hw_input_global_wrapper_stencil_9->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "9");
  hcompute_hw_input_global_wrapper_stencil_9->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "9");

//store is: hw_input_global_wrapper.stencil(10, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(10, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_10");
  hcompute_hw_input_global_wrapper_stencil_10->add_function("hcompute_hw_input_global_wrapper_stencil_10");
  hcompute_hw_input_global_wrapper_stencil_10->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "10");
  hcompute_hw_input_global_wrapper_stencil_10->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "10");

//store is: hw_input_global_wrapper.stencil(11, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(11, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_11 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_11");
  hcompute_hw_input_global_wrapper_stencil_11->add_function("hcompute_hw_input_global_wrapper_stencil_11");
  hcompute_hw_input_global_wrapper_stencil_11->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "11");
  hcompute_hw_input_global_wrapper_stencil_11->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "11");

//store is: hw_input_global_wrapper.stencil(12, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(12, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_12 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_12");
  hcompute_hw_input_global_wrapper_stencil_12->add_function("hcompute_hw_input_global_wrapper_stencil_12");
  hcompute_hw_input_global_wrapper_stencil_12->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "12");
  hcompute_hw_input_global_wrapper_stencil_12->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "12");

//store is: hw_input_global_wrapper.stencil(13, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(13, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_13 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_13");
  hcompute_hw_input_global_wrapper_stencil_13->add_function("hcompute_hw_input_global_wrapper_stencil_13");
  hcompute_hw_input_global_wrapper_stencil_13->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "13");
  hcompute_hw_input_global_wrapper_stencil_13->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "13");

//store is: hw_input_global_wrapper.stencil(14, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(14, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_14 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_14");
  hcompute_hw_input_global_wrapper_stencil_14->add_function("hcompute_hw_input_global_wrapper_stencil_14");
  hcompute_hw_input_global_wrapper_stencil_14->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "14");
  hcompute_hw_input_global_wrapper_stencil_14->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "14");

//store is: hw_input_global_wrapper.stencil(15, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(15, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_15 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_15");
  hcompute_hw_input_global_wrapper_stencil_15->add_function("hcompute_hw_input_global_wrapper_stencil_15");
  hcompute_hw_input_global_wrapper_stencil_15->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "15");
  hcompute_hw_input_global_wrapper_stencil_15->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "15");

//store is: hw_input_global_wrapper.stencil(16, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(16, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_16 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_16");
  hcompute_hw_input_global_wrapper_stencil_16->add_function("hcompute_hw_input_global_wrapper_stencil_16");
  hcompute_hw_input_global_wrapper_stencil_16->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "16");
  hcompute_hw_input_global_wrapper_stencil_16->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "16");

//store is: hw_input_global_wrapper.stencil(17, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(17, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_17 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_17");
  hcompute_hw_input_global_wrapper_stencil_17->add_function("hcompute_hw_input_global_wrapper_stencil_17");
  hcompute_hw_input_global_wrapper_stencil_17->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "17");
  hcompute_hw_input_global_wrapper_stencil_17->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "17");

//store is: hw_input_global_wrapper.stencil(18, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(18, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_18 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_18");
  hcompute_hw_input_global_wrapper_stencil_18->add_function("hcompute_hw_input_global_wrapper_stencil_18");
  hcompute_hw_input_global_wrapper_stencil_18->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "18");
  hcompute_hw_input_global_wrapper_stencil_18->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "18");

//store is: hw_input_global_wrapper.stencil(19, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(19, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_19 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_19");
  hcompute_hw_input_global_wrapper_stencil_19->add_function("hcompute_hw_input_global_wrapper_stencil_19");
  hcompute_hw_input_global_wrapper_stencil_19->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "19");
  hcompute_hw_input_global_wrapper_stencil_19->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "19");

//store is: hw_input_global_wrapper.stencil(20, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(20, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_20 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_20");
  hcompute_hw_input_global_wrapper_stencil_20->add_function("hcompute_hw_input_global_wrapper_stencil_20");
  hcompute_hw_input_global_wrapper_stencil_20->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "20");
  hcompute_hw_input_global_wrapper_stencil_20->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "20");

//store is: hw_input_global_wrapper.stencil(21, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(21, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_21 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_21");
  hcompute_hw_input_global_wrapper_stencil_21->add_function("hcompute_hw_input_global_wrapper_stencil_21");
  hcompute_hw_input_global_wrapper_stencil_21->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "21");
  hcompute_hw_input_global_wrapper_stencil_21->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "21");

//store is: hw_input_global_wrapper.stencil(22, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(22, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_22 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_22");
  hcompute_hw_input_global_wrapper_stencil_22->add_function("hcompute_hw_input_global_wrapper_stencil_22");
  hcompute_hw_input_global_wrapper_stencil_22->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "22");
  hcompute_hw_input_global_wrapper_stencil_22->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "22");

//store is: hw_input_global_wrapper.stencil(23, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(23, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_23 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_23");
  hcompute_hw_input_global_wrapper_stencil_23->add_function("hcompute_hw_input_global_wrapper_stencil_23");
  hcompute_hw_input_global_wrapper_stencil_23->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "23");
  hcompute_hw_input_global_wrapper_stencil_23->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "23");

//store is: hw_input_global_wrapper.stencil(24, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(24, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_24 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_24");
  hcompute_hw_input_global_wrapper_stencil_24->add_function("hcompute_hw_input_global_wrapper_stencil_24");
  hcompute_hw_input_global_wrapper_stencil_24->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "24");
  hcompute_hw_input_global_wrapper_stencil_24->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "24");

//store is: hw_input_global_wrapper.stencil(25, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(25, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_25 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_25");
  hcompute_hw_input_global_wrapper_stencil_25->add_function("hcompute_hw_input_global_wrapper_stencil_25");
  hcompute_hw_input_global_wrapper_stencil_25->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "25");
  hcompute_hw_input_global_wrapper_stencil_25->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "25");

//store is: hw_input_global_wrapper.stencil(26, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(26, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_26 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_26");
  hcompute_hw_input_global_wrapper_stencil_26->add_function("hcompute_hw_input_global_wrapper_stencil_26");
  hcompute_hw_input_global_wrapper_stencil_26->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "26");
  hcompute_hw_input_global_wrapper_stencil_26->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "26");

//store is: hw_input_global_wrapper.stencil(27, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(27, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_27 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_27");
  hcompute_hw_input_global_wrapper_stencil_27->add_function("hcompute_hw_input_global_wrapper_stencil_27");
  hcompute_hw_input_global_wrapper_stencil_27->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "27");
  hcompute_hw_input_global_wrapper_stencil_27->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "27");

//store is: hw_input_global_wrapper.stencil(28, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(28, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_28 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_28");
  hcompute_hw_input_global_wrapper_stencil_28->add_function("hcompute_hw_input_global_wrapper_stencil_28");
  hcompute_hw_input_global_wrapper_stencil_28->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "28");
  hcompute_hw_input_global_wrapper_stencil_28->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "28");

//store is: hw_input_global_wrapper.stencil(29, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(29, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_29 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_29");
  hcompute_hw_input_global_wrapper_stencil_29->add_function("hcompute_hw_input_global_wrapper_stencil_29");
  hcompute_hw_input_global_wrapper_stencil_29->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "29");
  hcompute_hw_input_global_wrapper_stencil_29->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "29");

//store is: hw_input_global_wrapper.stencil(30, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(30, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_30 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_30");
  hcompute_hw_input_global_wrapper_stencil_30->add_function("hcompute_hw_input_global_wrapper_stencil_30");
  hcompute_hw_input_global_wrapper_stencil_30->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "30");
  hcompute_hw_input_global_wrapper_stencil_30->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "30");

//store is: hw_input_global_wrapper.stencil(31, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(31, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_31 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_31");
  hcompute_hw_input_global_wrapper_stencil_31->add_function("hcompute_hw_input_global_wrapper_stencil_31");
  hcompute_hw_input_global_wrapper_stencil_31->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "31");
  hcompute_hw_input_global_wrapper_stencil_31->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "31");

//consuming hw_input_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_w = prg.add_loop("conv_s0_w", 0, 30);
  auto conv_s0_y = conv_s0_w->add_loop("conv_s0_y", 0, 8);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 8);

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_w", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 8);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 8);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_input_global_wrapper.stencil(0, conv_s1_x, conv_s1_y)*(int16)3) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_input_global_wrapper.stencil(1, conv_s1_x, conv_s1_y)*(int16)35) + ((hw_input_global_wrapper.stencil(2, conv_s1_x, conv_s1_y)*(int16)67) + ((hw_input_global_wrapper.stencil(3, conv_s1_x, conv_s1_y)*(int16)99) + ((hw_input_global_wrapper.stencil(4, conv_s1_x, conv_s1_y)*(int16)131) + ((hw_input_global_wrapper.stencil(5, conv_s1_x, conv_s1_y)*(int16)163) + ((hw_input_global_wrapper.stencil(6, conv_s1_x, conv_s1_y)*(int16)195) + ((hw_input_global_wrapper.stencil(7, conv_s1_x, conv_s1_y)*(int16)227) + ((hw_input_global_wrapper.stencil(8, conv_s1_x, conv_s1_y)*(int16)259) + ((hw_input_global_wrapper.stencil(9, conv_s1_x, conv_s1_y)*(int16)291) + ((hw_input_global_wrapper.stencil(10, conv_s1_x, conv_s1_y)*(int16)323) + ((hw_input_global_wrapper.stencil(11, conv_s1_x, conv_s1_y)*(int16)355) + ((hw_input_global_wrapper.stencil(12, conv_s1_x, conv_s1_y)*(int16)387) + ((hw_input_global_wrapper.stencil(13, conv_s1_x, conv_s1_y)*(int16)419) + ((hw_input_global_wrapper.stencil(14, conv_s1_x, conv_s1_y)*(int16)451) + ((hw_input_global_wrapper.stencil(15, conv_s1_x, conv_s1_y)*(int16)483) + ((hw_input_global_wrapper.stencil(16, conv_s1_x, conv_s1_y)*(int16)515) + ((hw_input_global_wrapper.stencil(17, conv_s1_x, conv_s1_y)*(int16)547) + ((hw_input_global_wrapper.stencil(18, conv_s1_x, conv_s1_y)*(int16)579) + ((hw_input_global_wrapper.stencil(19, conv_s1_x, conv_s1_y)*(int16)611) + ((hw_input_global_wrapper.stencil(20, conv_s1_x, conv_s1_y)*(int16)643) + ((hw_input_global_wrapper.stencil(21, conv_s1_x, conv_s1_y)*(int16)675) + ((hw_input_global_wrapper.stencil(22, conv_s1_x, conv_s1_y)*(int16)707) + ((hw_input_global_wrapper.stencil(23, conv_s1_x, conv_s1_y)*(int16)739) + ((hw_input_global_wrapper.stencil(24, conv_s1_x, conv_s1_y)*(int16)771) + ((hw_input_global_wrapper.stencil(25, conv_s1_x, conv_s1_y)*(int16)803) + ((hw_input_global_wrapper.stencil(26, conv_s1_x, conv_s1_y)*(int16)835) + ((hw_input_global_wrapper.stencil(27, conv_s1_x, conv_s1_y)*(int16)867) + ((hw_input_global_wrapper.stencil(28, conv_s1_x, conv_s1_y)*(int16)899) + ((hw_input_global_wrapper.stencil(29, conv_s1_x, conv_s1_y)*(int16)931) + ((hw_input_global_wrapper.stencil(31, conv_s1_x, conv_s1_y)*(int16)995) + (hw_input_global_wrapper.stencil(30, conv_s1_x, conv_s1_y)*(int16)963)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "0");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "9");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "10");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "11");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "12");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "13");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "14");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "15");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "16");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "17");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "18");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "1");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "19");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "20");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "21");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "22");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "23");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "24");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "25");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "26");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "27");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "28");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "2");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "29");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "31");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "30");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "3");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "4");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "5");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "6");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "7");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x", "8");
  hcompute_conv_stencil_1->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  auto conv_s1_y_1 = prg.add_loop("conv_s1_y_1", 0, 8);
  auto conv_s1_x_1 = conv_s1_y_1->add_loop("conv_s1_x_1", 0, 8);

//store is: conv.stencil(conv_s1_x_1, conv_s1_y_1, 1) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_1, conv_s1_y_1)*(int16)4) + (conv.stencil(conv_s1_x_1, conv_s1_y_1, 1) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_1, conv_s1_y_1)*(int16)36) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_1, conv_s1_y_1)*(int16)68) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_1, conv_s1_y_1)*(int16)100) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_1, conv_s1_y_1)*(int16)132) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_1, conv_s1_y_1)*(int16)164) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_1, conv_s1_y_1)*(int16)196) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_1, conv_s1_y_1)*(int16)228) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_1, conv_s1_y_1)*(int16)260) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_1, conv_s1_y_1)*(int16)292) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_1, conv_s1_y_1)*(int16)324) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_1, conv_s1_y_1)*(int16)356) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_1, conv_s1_y_1)*(int16)388) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_1, conv_s1_y_1)*(int16)420) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_1, conv_s1_y_1)*(int16)452) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_1, conv_s1_y_1)*(int16)484) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_1, conv_s1_y_1)*(int16)516) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_1, conv_s1_y_1)*(int16)548) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_1, conv_s1_y_1)*(int16)580) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_1, conv_s1_y_1)*(int16)612) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_1, conv_s1_y_1)*(int16)644) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_1, conv_s1_y_1)*(int16)676) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_1, conv_s1_y_1)*(int16)708) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_1, conv_s1_y_1)*(int16)740) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_1, conv_s1_y_1)*(int16)772) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_1, conv_s1_y_1)*(int16)804) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_1, conv_s1_y_1)*(int16)836) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_1, conv_s1_y_1)*(int16)868) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_1, conv_s1_y_1)*(int16)900) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_1, conv_s1_y_1)*(int16)932) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_1, conv_s1_y_1)*(int16)996) + (hw_input_global_wrapper.stencil(30, conv_s1_x_1, conv_s1_y_1)*(int16)964)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_2 = conv_s1_x_1->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_load("conv_stencil", "1", "conv_s1_y_1", "conv_s1_x_1");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "0");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "1");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "2");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "3");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "4");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "5");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "6");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "7");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "8");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "9");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "10");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "11");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "12");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "13");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "14");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "15");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "16");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "17");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "18");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "19");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "20");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "21");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "22");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "23");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "24");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "25");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "26");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "27");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "28");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "29");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "31");
  hcompute_conv_stencil_2->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_1", "conv_s1_x_1", "30");
  hcompute_conv_stencil_2->add_store("conv_stencil", "1", "conv_s1_y_1", "conv_s1_x_1");
  auto conv_s1_y_2 = prg.add_loop("conv_s1_y_2", 0, 8);
  auto conv_s1_x_2 = conv_s1_y_2->add_loop("conv_s1_x_2", 0, 8);

//store is: conv.stencil(conv_s1_x_2, conv_s1_y_2, 2) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_2, conv_s1_y_2)*(int16)5) + (conv.stencil(conv_s1_x_2, conv_s1_y_2, 2) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_2, conv_s1_y_2)*(int16)37) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_2, conv_s1_y_2)*(int16)69) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_2, conv_s1_y_2)*(int16)101) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_2, conv_s1_y_2)*(int16)133) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_2, conv_s1_y_2)*(int16)165) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_2, conv_s1_y_2)*(int16)197) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_2, conv_s1_y_2)*(int16)229) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_2, conv_s1_y_2)*(int16)261) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_2, conv_s1_y_2)*(int16)293) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_2, conv_s1_y_2)*(int16)325) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_2, conv_s1_y_2)*(int16)357) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_2, conv_s1_y_2)*(int16)389) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_2, conv_s1_y_2)*(int16)421) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_2, conv_s1_y_2)*(int16)453) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_2, conv_s1_y_2)*(int16)485) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_2, conv_s1_y_2)*(int16)517) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_2, conv_s1_y_2)*(int16)549) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_2, conv_s1_y_2)*(int16)581) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_2, conv_s1_y_2)*(int16)613) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_2, conv_s1_y_2)*(int16)645) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_2, conv_s1_y_2)*(int16)677) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_2, conv_s1_y_2)*(int16)709) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_2, conv_s1_y_2)*(int16)741) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_2, conv_s1_y_2)*(int16)773) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_2, conv_s1_y_2)*(int16)805) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_2, conv_s1_y_2)*(int16)837) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_2, conv_s1_y_2)*(int16)869) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_2, conv_s1_y_2)*(int16)901) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_2, conv_s1_y_2)*(int16)933) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_2, conv_s1_y_2)*(int16)997) + (hw_input_global_wrapper.stencil(30, conv_s1_x_2, conv_s1_y_2)*(int16)965)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_3 = conv_s1_x_2->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "2", "conv_s1_y_2", "conv_s1_x_2");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "0");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "1");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "2");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "3");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "4");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "5");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "6");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "7");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "8");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "9");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "10");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "11");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "12");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "13");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "14");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "15");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "16");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "17");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "18");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "19");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "20");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "21");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "22");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "23");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "24");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "25");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "26");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "27");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "28");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "29");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "31");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_2", "conv_s1_x_2", "30");
  hcompute_conv_stencil_3->add_store("conv_stencil", "2", "conv_s1_y_2", "conv_s1_x_2");
  auto conv_s1_y_3 = prg.add_loop("conv_s1_y_3", 0, 8);
  auto conv_s1_x_3 = conv_s1_y_3->add_loop("conv_s1_x_3", 0, 8);

//store is: conv.stencil(conv_s1_x_3, conv_s1_y_3, 3) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_3, conv_s1_y_3)*(int16)6) + (conv.stencil(conv_s1_x_3, conv_s1_y_3, 3) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_3, conv_s1_y_3)*(int16)38) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_3, conv_s1_y_3)*(int16)70) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_3, conv_s1_y_3)*(int16)102) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_3, conv_s1_y_3)*(int16)134) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_3, conv_s1_y_3)*(int16)166) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_3, conv_s1_y_3)*(int16)198) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_3, conv_s1_y_3)*(int16)230) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_3, conv_s1_y_3)*(int16)262) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_3, conv_s1_y_3)*(int16)294) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_3, conv_s1_y_3)*(int16)326) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_3, conv_s1_y_3)*(int16)358) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_3, conv_s1_y_3)*(int16)390) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_3, conv_s1_y_3)*(int16)422) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_3, conv_s1_y_3)*(int16)454) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_3, conv_s1_y_3)*(int16)486) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_3, conv_s1_y_3)*(int16)518) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_3, conv_s1_y_3)*(int16)550) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_3, conv_s1_y_3)*(int16)582) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_3, conv_s1_y_3)*(int16)614) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_3, conv_s1_y_3)*(int16)646) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_3, conv_s1_y_3)*(int16)678) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_3, conv_s1_y_3)*(int16)710) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_3, conv_s1_y_3)*(int16)742) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_3, conv_s1_y_3)*(int16)774) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_3, conv_s1_y_3)*(int16)806) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_3, conv_s1_y_3)*(int16)838) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_3, conv_s1_y_3)*(int16)870) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_3, conv_s1_y_3)*(int16)902) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_3, conv_s1_y_3)*(int16)934) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_3, conv_s1_y_3)*(int16)998) + (hw_input_global_wrapper.stencil(30, conv_s1_x_3, conv_s1_y_3)*(int16)966)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_4 = conv_s1_x_3->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "3", "conv_s1_y_3", "conv_s1_x_3");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "3");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "4");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "5");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "6");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "7");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "8");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "9");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "10");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "11");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "12");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "13");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "14");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "15");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "16");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "17");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "18");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "19");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "20");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "21");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "22");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "23");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "24");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "25");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "26");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "27");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "28");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "29");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "31");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "30");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "0");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "1");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_3", "conv_s1_x_3", "2");
  hcompute_conv_stencil_4->add_store("conv_stencil", "3", "conv_s1_y_3", "conv_s1_x_3");
  auto conv_s1_y_4 = prg.add_loop("conv_s1_y_4", 0, 8);
  auto conv_s1_x_4 = conv_s1_y_4->add_loop("conv_s1_x_4", 0, 8);

//store is: conv.stencil(conv_s1_x_4, conv_s1_y_4, 4) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_4, conv_s1_y_4)*(int16)7) + (conv.stencil(conv_s1_x_4, conv_s1_y_4, 4) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_4, conv_s1_y_4)*(int16)39) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_4, conv_s1_y_4)*(int16)71) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_4, conv_s1_y_4)*(int16)103) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_4, conv_s1_y_4)*(int16)135) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_4, conv_s1_y_4)*(int16)167) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_4, conv_s1_y_4)*(int16)199) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_4, conv_s1_y_4)*(int16)231) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_4, conv_s1_y_4)*(int16)263) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_4, conv_s1_y_4)*(int16)295) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_4, conv_s1_y_4)*(int16)327) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_4, conv_s1_y_4)*(int16)359) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_4, conv_s1_y_4)*(int16)391) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_4, conv_s1_y_4)*(int16)423) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_4, conv_s1_y_4)*(int16)455) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_4, conv_s1_y_4)*(int16)487) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_4, conv_s1_y_4)*(int16)519) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_4, conv_s1_y_4)*(int16)551) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_4, conv_s1_y_4)*(int16)583) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_4, conv_s1_y_4)*(int16)615) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_4, conv_s1_y_4)*(int16)647) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_4, conv_s1_y_4)*(int16)679) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_4, conv_s1_y_4)*(int16)711) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_4, conv_s1_y_4)*(int16)743) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_4, conv_s1_y_4)*(int16)775) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_4, conv_s1_y_4)*(int16)807) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_4, conv_s1_y_4)*(int16)839) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_4, conv_s1_y_4)*(int16)871) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_4, conv_s1_y_4)*(int16)903) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_4, conv_s1_y_4)*(int16)935) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_4, conv_s1_y_4)*(int16)999) + (hw_input_global_wrapper.stencil(30, conv_s1_x_4, conv_s1_y_4)*(int16)967)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_5 = conv_s1_x_4->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "4", "conv_s1_y_4", "conv_s1_x_4");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "0");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "1");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "2");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "3");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "4");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "5");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "6");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "7");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "8");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "9");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "10");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "11");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "12");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "13");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "14");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "15");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "16");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "17");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "18");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "19");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "20");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "21");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "22");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "23");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "24");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "25");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "26");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "27");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "28");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "29");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "31");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_4", "conv_s1_x_4", "30");
  hcompute_conv_stencil_5->add_store("conv_stencil", "4", "conv_s1_y_4", "conv_s1_x_4");
  auto conv_s1_y_5 = prg.add_loop("conv_s1_y_5", 0, 8);
  auto conv_s1_x_5 = conv_s1_y_5->add_loop("conv_s1_x_5", 0, 8);

//store is: conv.stencil(conv_s1_x_5, conv_s1_y_5, 5) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_5, conv_s1_y_5)*(int16)8) + (conv.stencil(conv_s1_x_5, conv_s1_y_5, 5) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_5, conv_s1_y_5)*(int16)40) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_5, conv_s1_y_5)*(int16)72) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_5, conv_s1_y_5)*(int16)104) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_5, conv_s1_y_5)*(int16)136) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_5, conv_s1_y_5)*(int16)168) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_5, conv_s1_y_5)*(int16)200) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_5, conv_s1_y_5)*(int16)232) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_5, conv_s1_y_5)*(int16)264) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_5, conv_s1_y_5)*(int16)296) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_5, conv_s1_y_5)*(int16)328) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_5, conv_s1_y_5)*(int16)360) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_5, conv_s1_y_5)*(int16)392) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_5, conv_s1_y_5)*(int16)424) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_5, conv_s1_y_5)*(int16)456) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_5, conv_s1_y_5)*(int16)488) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_5, conv_s1_y_5)*(int16)520) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_5, conv_s1_y_5)*(int16)552) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_5, conv_s1_y_5)*(int16)584) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_5, conv_s1_y_5)*(int16)616) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_5, conv_s1_y_5)*(int16)648) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_5, conv_s1_y_5)*(int16)680) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_5, conv_s1_y_5)*(int16)712) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_5, conv_s1_y_5)*(int16)744) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_5, conv_s1_y_5)*(int16)776) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_5, conv_s1_y_5)*(int16)808) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_5, conv_s1_y_5)*(int16)840) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_5, conv_s1_y_5)*(int16)872) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_5, conv_s1_y_5)*(int16)904) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_5, conv_s1_y_5)*(int16)936) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_5, conv_s1_y_5)*(int16)1000) + (hw_input_global_wrapper.stencil(30, conv_s1_x_5, conv_s1_y_5)*(int16)968)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_6 = conv_s1_x_5->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_load("conv_stencil", "5", "conv_s1_y_5", "conv_s1_x_5");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "0");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "1");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "2");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "3");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "4");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "5");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "6");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "7");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "8");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "9");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "10");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "11");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "12");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "13");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "14");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "15");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "16");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "17");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "18");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "19");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "20");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "21");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "22");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "23");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "24");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "25");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "26");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "27");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "28");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "29");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "31");
  hcompute_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_5", "conv_s1_x_5", "30");
  hcompute_conv_stencil_6->add_store("conv_stencil", "5", "conv_s1_y_5", "conv_s1_x_5");
  auto conv_s1_y_6 = prg.add_loop("conv_s1_y_6", 0, 8);
  auto conv_s1_x_6 = conv_s1_y_6->add_loop("conv_s1_x_6", 0, 8);

//store is: conv.stencil(conv_s1_x_6, conv_s1_y_6, 6) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_6, conv_s1_y_6)*(int16)9) + (conv.stencil(conv_s1_x_6, conv_s1_y_6, 6) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_6, conv_s1_y_6)*(int16)41) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_6, conv_s1_y_6)*(int16)73) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_6, conv_s1_y_6)*(int16)105) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_6, conv_s1_y_6)*(int16)137) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_6, conv_s1_y_6)*(int16)169) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_6, conv_s1_y_6)*(int16)201) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_6, conv_s1_y_6)*(int16)233) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_6, conv_s1_y_6)*(int16)265) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_6, conv_s1_y_6)*(int16)297) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_6, conv_s1_y_6)*(int16)329) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_6, conv_s1_y_6)*(int16)361) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_6, conv_s1_y_6)*(int16)393) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_6, conv_s1_y_6)*(int16)425) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_6, conv_s1_y_6)*(int16)457) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_6, conv_s1_y_6)*(int16)489) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_6, conv_s1_y_6)*(int16)521) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_6, conv_s1_y_6)*(int16)553) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_6, conv_s1_y_6)*(int16)585) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_6, conv_s1_y_6)*(int16)617) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_6, conv_s1_y_6)*(int16)649) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_6, conv_s1_y_6)*(int16)681) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_6, conv_s1_y_6)*(int16)713) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_6, conv_s1_y_6)*(int16)745) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_6, conv_s1_y_6)*(int16)777) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_6, conv_s1_y_6)*(int16)809) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_6, conv_s1_y_6)*(int16)841) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_6, conv_s1_y_6)*(int16)873) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_6, conv_s1_y_6)*(int16)905) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_6, conv_s1_y_6)*(int16)937) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_6, conv_s1_y_6)*(int16)1001) + (hw_input_global_wrapper.stencil(30, conv_s1_x_6, conv_s1_y_6)*(int16)969)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_7 = conv_s1_x_6->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_load("conv_stencil", "6", "conv_s1_y_6", "conv_s1_x_6");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "0");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "1");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "2");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "3");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "4");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "5");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "6");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "7");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "8");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "9");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "10");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "11");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "12");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "13");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "14");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "15");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "16");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "17");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "18");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "19");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "20");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "21");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "22");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "23");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "24");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "25");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "26");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "27");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "28");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "29");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "31");
  hcompute_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_6", "conv_s1_x_6", "30");
  hcompute_conv_stencil_7->add_store("conv_stencil", "6", "conv_s1_y_6", "conv_s1_x_6");
  auto conv_s1_y_7 = prg.add_loop("conv_s1_y_7", 0, 8);
  auto conv_s1_x_7 = conv_s1_y_7->add_loop("conv_s1_x_7", 0, 8);

//store is: conv.stencil(conv_s1_x_7, conv_s1_y_7, 7) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_7, conv_s1_y_7)*(int16)10) + (conv.stencil(conv_s1_x_7, conv_s1_y_7, 7) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_7, conv_s1_y_7)*(int16)42) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_7, conv_s1_y_7)*(int16)74) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_7, conv_s1_y_7)*(int16)106) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_7, conv_s1_y_7)*(int16)138) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_7, conv_s1_y_7)*(int16)170) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_7, conv_s1_y_7)*(int16)202) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_7, conv_s1_y_7)*(int16)234) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_7, conv_s1_y_7)*(int16)266) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_7, conv_s1_y_7)*(int16)298) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_7, conv_s1_y_7)*(int16)330) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_7, conv_s1_y_7)*(int16)362) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_7, conv_s1_y_7)*(int16)394) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_7, conv_s1_y_7)*(int16)426) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_7, conv_s1_y_7)*(int16)458) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_7, conv_s1_y_7)*(int16)490) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_7, conv_s1_y_7)*(int16)522) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_7, conv_s1_y_7)*(int16)554) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_7, conv_s1_y_7)*(int16)586) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_7, conv_s1_y_7)*(int16)618) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_7, conv_s1_y_7)*(int16)650) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_7, conv_s1_y_7)*(int16)682) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_7, conv_s1_y_7)*(int16)714) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_7, conv_s1_y_7)*(int16)746) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_7, conv_s1_y_7)*(int16)778) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_7, conv_s1_y_7)*(int16)810) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_7, conv_s1_y_7)*(int16)842) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_7, conv_s1_y_7)*(int16)874) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_7, conv_s1_y_7)*(int16)906) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_7, conv_s1_y_7)*(int16)938) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_7, conv_s1_y_7)*(int16)1002) + (hw_input_global_wrapper.stencil(30, conv_s1_x_7, conv_s1_y_7)*(int16)970)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_x_7->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "7", "conv_s1_y_7", "conv_s1_x_7");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "0");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "1");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "2");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "3");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "4");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "5");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "6");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "7");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "8");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "9");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "10");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "11");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "12");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "13");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "14");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "15");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "16");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "17");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "18");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "19");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "20");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "21");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "22");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "23");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "24");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "25");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "26");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "27");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "28");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "29");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "31");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_7", "conv_s1_x_7", "30");
  hcompute_conv_stencil_8->add_store("conv_stencil", "7", "conv_s1_y_7", "conv_s1_x_7");
  auto conv_s1_y_8 = prg.add_loop("conv_s1_y_8", 0, 8);
  auto conv_s1_x_8 = conv_s1_y_8->add_loop("conv_s1_x_8", 0, 8);

//store is: conv.stencil(conv_s1_x_8, conv_s1_y_8, 8) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_8, conv_s1_y_8)*(int16)11) + (conv.stencil(conv_s1_x_8, conv_s1_y_8, 8) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_8, conv_s1_y_8)*(int16)43) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_8, conv_s1_y_8)*(int16)75) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_8, conv_s1_y_8)*(int16)107) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_8, conv_s1_y_8)*(int16)139) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_8, conv_s1_y_8)*(int16)171) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_8, conv_s1_y_8)*(int16)203) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_8, conv_s1_y_8)*(int16)235) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_8, conv_s1_y_8)*(int16)267) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_8, conv_s1_y_8)*(int16)299) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_8, conv_s1_y_8)*(int16)331) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_8, conv_s1_y_8)*(int16)363) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_8, conv_s1_y_8)*(int16)395) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_8, conv_s1_y_8)*(int16)427) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_8, conv_s1_y_8)*(int16)459) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_8, conv_s1_y_8)*(int16)491) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_8, conv_s1_y_8)*(int16)523) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_8, conv_s1_y_8)*(int16)555) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_8, conv_s1_y_8)*(int16)587) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_8, conv_s1_y_8)*(int16)619) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_8, conv_s1_y_8)*(int16)651) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_8, conv_s1_y_8)*(int16)683) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_8, conv_s1_y_8)*(int16)715) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_8, conv_s1_y_8)*(int16)747) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_8, conv_s1_y_8)*(int16)779) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_8, conv_s1_y_8)*(int16)811) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_8, conv_s1_y_8)*(int16)843) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_8, conv_s1_y_8)*(int16)875) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_8, conv_s1_y_8)*(int16)907) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_8, conv_s1_y_8)*(int16)939) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_8, conv_s1_y_8)*(int16)1003) + (hw_input_global_wrapper.stencil(30, conv_s1_x_8, conv_s1_y_8)*(int16)971)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_x_8->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "8", "conv_s1_y_8", "conv_s1_x_8");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "0");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "1");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "2");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "3");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "4");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "5");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "6");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "7");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "8");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "9");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "10");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "11");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "12");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "13");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "14");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "15");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "16");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "17");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "18");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "19");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "20");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "21");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "22");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "23");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "24");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "25");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "26");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "27");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "28");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "29");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "31");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_8", "conv_s1_x_8", "30");
  hcompute_conv_stencil_9->add_store("conv_stencil", "8", "conv_s1_y_8", "conv_s1_x_8");
  auto conv_s1_y_9 = prg.add_loop("conv_s1_y_9", 0, 8);
  auto conv_s1_x_9 = conv_s1_y_9->add_loop("conv_s1_x_9", 0, 8);

//store is: conv.stencil(conv_s1_x_9, conv_s1_y_9, 9) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_9, conv_s1_y_9)*(int16)12) + (conv.stencil(conv_s1_x_9, conv_s1_y_9, 9) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_9, conv_s1_y_9)*(int16)44) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_9, conv_s1_y_9)*(int16)76) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_9, conv_s1_y_9)*(int16)108) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_9, conv_s1_y_9)*(int16)140) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_9, conv_s1_y_9)*(int16)172) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_9, conv_s1_y_9)*(int16)204) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_9, conv_s1_y_9)*(int16)236) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_9, conv_s1_y_9)*(int16)268) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_9, conv_s1_y_9)*(int16)300) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_9, conv_s1_y_9)*(int16)332) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_9, conv_s1_y_9)*(int16)364) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_9, conv_s1_y_9)*(int16)396) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_9, conv_s1_y_9)*(int16)428) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_9, conv_s1_y_9)*(int16)460) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_9, conv_s1_y_9)*(int16)492) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_9, conv_s1_y_9)*(int16)524) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_9, conv_s1_y_9)*(int16)556) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_9, conv_s1_y_9)*(int16)588) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_9, conv_s1_y_9)*(int16)620) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_9, conv_s1_y_9)*(int16)652) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_9, conv_s1_y_9)*(int16)684) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_9, conv_s1_y_9)*(int16)716) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_9, conv_s1_y_9)*(int16)748) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_9, conv_s1_y_9)*(int16)780) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_9, conv_s1_y_9)*(int16)812) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_9, conv_s1_y_9)*(int16)844) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_9, conv_s1_y_9)*(int16)876) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_9, conv_s1_y_9)*(int16)908) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_9, conv_s1_y_9)*(int16)940) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_9, conv_s1_y_9)*(int16)1004) + (hw_input_global_wrapper.stencil(30, conv_s1_x_9, conv_s1_y_9)*(int16)972)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_x_9->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "9", "conv_s1_y_9", "conv_s1_x_9");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "0");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "1");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "2");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "3");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "4");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "5");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "6");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "7");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "8");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "9");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "10");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "11");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "12");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "13");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "14");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "15");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "16");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "17");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "18");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "19");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "20");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "21");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "22");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "23");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "24");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "25");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "26");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "27");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "28");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "29");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "31");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_9", "conv_s1_x_9", "30");
  hcompute_conv_stencil_10->add_store("conv_stencil", "9", "conv_s1_y_9", "conv_s1_x_9");
  auto conv_s1_y_10 = prg.add_loop("conv_s1_y_10", 0, 8);
  auto conv_s1_x_10 = conv_s1_y_10->add_loop("conv_s1_x_10", 0, 8);

//store is: conv.stencil(conv_s1_x_10, conv_s1_y_10, 10) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_10, conv_s1_y_10)*(int16)13) + (conv.stencil(conv_s1_x_10, conv_s1_y_10, 10) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_10, conv_s1_y_10)*(int16)45) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_10, conv_s1_y_10)*(int16)77) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_10, conv_s1_y_10)*(int16)109) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_10, conv_s1_y_10)*(int16)141) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_10, conv_s1_y_10)*(int16)173) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_10, conv_s1_y_10)*(int16)205) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_10, conv_s1_y_10)*(int16)237) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_10, conv_s1_y_10)*(int16)269) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_10, conv_s1_y_10)*(int16)301) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_10, conv_s1_y_10)*(int16)333) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_10, conv_s1_y_10)*(int16)365) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_10, conv_s1_y_10)*(int16)397) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_10, conv_s1_y_10)*(int16)429) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_10, conv_s1_y_10)*(int16)461) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_10, conv_s1_y_10)*(int16)493) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_10, conv_s1_y_10)*(int16)525) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_10, conv_s1_y_10)*(int16)557) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_10, conv_s1_y_10)*(int16)589) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_10, conv_s1_y_10)*(int16)621) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_10, conv_s1_y_10)*(int16)653) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_10, conv_s1_y_10)*(int16)685) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_10, conv_s1_y_10)*(int16)717) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_10, conv_s1_y_10)*(int16)749) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_10, conv_s1_y_10)*(int16)781) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_10, conv_s1_y_10)*(int16)813) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_10, conv_s1_y_10)*(int16)845) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_10, conv_s1_y_10)*(int16)877) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_10, conv_s1_y_10)*(int16)909) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_10, conv_s1_y_10)*(int16)941) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_10, conv_s1_y_10)*(int16)1005) + (hw_input_global_wrapper.stencil(30, conv_s1_x_10, conv_s1_y_10)*(int16)973)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_x_10->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "10", "conv_s1_y_10", "conv_s1_x_10");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "0");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "1");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "2");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "3");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "4");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "5");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "6");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "7");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "8");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "9");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "10");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "11");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "12");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "13");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "14");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "15");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "16");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "17");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "18");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "19");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "20");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "21");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "22");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "23");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "24");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "25");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "26");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "27");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "28");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "29");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "31");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_10", "conv_s1_x_10", "30");
  hcompute_conv_stencil_11->add_store("conv_stencil", "10", "conv_s1_y_10", "conv_s1_x_10");
  auto conv_s1_y_11 = prg.add_loop("conv_s1_y_11", 0, 8);
  auto conv_s1_x_11 = conv_s1_y_11->add_loop("conv_s1_x_11", 0, 8);

//store is: conv.stencil(conv_s1_x_11, conv_s1_y_11, 11) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_11, conv_s1_y_11)*(int16)14) + (conv.stencil(conv_s1_x_11, conv_s1_y_11, 11) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_11, conv_s1_y_11)*(int16)46) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_11, conv_s1_y_11)*(int16)78) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_11, conv_s1_y_11)*(int16)110) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_11, conv_s1_y_11)*(int16)142) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_11, conv_s1_y_11)*(int16)174) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_11, conv_s1_y_11)*(int16)206) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_11, conv_s1_y_11)*(int16)238) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_11, conv_s1_y_11)*(int16)270) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_11, conv_s1_y_11)*(int16)302) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_11, conv_s1_y_11)*(int16)334) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_11, conv_s1_y_11)*(int16)366) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_11, conv_s1_y_11)*(int16)398) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_11, conv_s1_y_11)*(int16)430) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_11, conv_s1_y_11)*(int16)462) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_11, conv_s1_y_11)*(int16)494) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_11, conv_s1_y_11)*(int16)526) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_11, conv_s1_y_11)*(int16)558) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_11, conv_s1_y_11)*(int16)590) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_11, conv_s1_y_11)*(int16)622) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_11, conv_s1_y_11)*(int16)654) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_11, conv_s1_y_11)*(int16)686) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_11, conv_s1_y_11)*(int16)718) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_11, conv_s1_y_11)*(int16)750) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_11, conv_s1_y_11)*(int16)782) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_11, conv_s1_y_11)*(int16)814) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_11, conv_s1_y_11)*(int16)846) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_11, conv_s1_y_11)*(int16)878) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_11, conv_s1_y_11)*(int16)910) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_11, conv_s1_y_11)*(int16)942) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_11, conv_s1_y_11)*(int16)1006) + (hw_input_global_wrapper.stencil(30, conv_s1_x_11, conv_s1_y_11)*(int16)974)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_x_11->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "11", "conv_s1_y_11", "conv_s1_x_11");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "0");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "1");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "2");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "3");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "4");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "5");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "6");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "7");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "8");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "9");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "10");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "11");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "12");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "13");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "14");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "15");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "16");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "17");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "18");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "19");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "20");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "21");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "22");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "23");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "24");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "25");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "26");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "27");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "28");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "29");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "31");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_11", "conv_s1_x_11", "30");
  hcompute_conv_stencil_12->add_store("conv_stencil", "11", "conv_s1_y_11", "conv_s1_x_11");
  auto conv_s1_y_12 = prg.add_loop("conv_s1_y_12", 0, 8);
  auto conv_s1_x_12 = conv_s1_y_12->add_loop("conv_s1_x_12", 0, 8);

//store is: conv.stencil(conv_s1_x_12, conv_s1_y_12, 12) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_12, conv_s1_y_12)*(int16)15) + (conv.stencil(conv_s1_x_12, conv_s1_y_12, 12) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_12, conv_s1_y_12)*(int16)47) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_12, conv_s1_y_12)*(int16)79) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_12, conv_s1_y_12)*(int16)111) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_12, conv_s1_y_12)*(int16)143) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_12, conv_s1_y_12)*(int16)175) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_12, conv_s1_y_12)*(int16)207) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_12, conv_s1_y_12)*(int16)239) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_12, conv_s1_y_12)*(int16)271) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_12, conv_s1_y_12)*(int16)303) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_12, conv_s1_y_12)*(int16)335) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_12, conv_s1_y_12)*(int16)367) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_12, conv_s1_y_12)*(int16)399) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_12, conv_s1_y_12)*(int16)431) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_12, conv_s1_y_12)*(int16)463) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_12, conv_s1_y_12)*(int16)495) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_12, conv_s1_y_12)*(int16)527) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_12, conv_s1_y_12)*(int16)559) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_12, conv_s1_y_12)*(int16)591) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_12, conv_s1_y_12)*(int16)623) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_12, conv_s1_y_12)*(int16)655) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_12, conv_s1_y_12)*(int16)687) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_12, conv_s1_y_12)*(int16)719) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_12, conv_s1_y_12)*(int16)751) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_12, conv_s1_y_12)*(int16)783) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_12, conv_s1_y_12)*(int16)815) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_12, conv_s1_y_12)*(int16)847) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_12, conv_s1_y_12)*(int16)879) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_12, conv_s1_y_12)*(int16)911) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_12, conv_s1_y_12)*(int16)943) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_12, conv_s1_y_12)*(int16)1007) + (hw_input_global_wrapper.stencil(30, conv_s1_x_12, conv_s1_y_12)*(int16)975)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_x_12->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "12", "conv_s1_y_12", "conv_s1_x_12");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "0");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "1");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "2");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "3");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "4");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "5");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "6");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "7");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "8");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "9");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "10");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "11");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "12");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "13");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "14");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "15");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "16");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "17");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "18");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "19");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "20");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "21");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "22");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "23");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "24");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "25");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "26");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "27");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "28");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "29");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "31");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_12", "conv_s1_x_12", "30");
  hcompute_conv_stencil_13->add_store("conv_stencil", "12", "conv_s1_y_12", "conv_s1_x_12");
  auto conv_s1_y_13 = prg.add_loop("conv_s1_y_13", 0, 8);
  auto conv_s1_x_13 = conv_s1_y_13->add_loop("conv_s1_x_13", 0, 8);

//store is: conv.stencil(conv_s1_x_13, conv_s1_y_13, 13) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_13, conv_s1_y_13)*(int16)16) + (conv.stencil(conv_s1_x_13, conv_s1_y_13, 13) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_13, conv_s1_y_13)*(int16)48) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_13, conv_s1_y_13)*(int16)80) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_13, conv_s1_y_13)*(int16)112) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_13, conv_s1_y_13)*(int16)144) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_13, conv_s1_y_13)*(int16)176) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_13, conv_s1_y_13)*(int16)208) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_13, conv_s1_y_13)*(int16)240) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_13, conv_s1_y_13)*(int16)272) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_13, conv_s1_y_13)*(int16)304) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_13, conv_s1_y_13)*(int16)336) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_13, conv_s1_y_13)*(int16)368) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_13, conv_s1_y_13)*(int16)400) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_13, conv_s1_y_13)*(int16)432) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_13, conv_s1_y_13)*(int16)464) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_13, conv_s1_y_13)*(int16)496) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_13, conv_s1_y_13)*(int16)528) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_13, conv_s1_y_13)*(int16)560) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_13, conv_s1_y_13)*(int16)592) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_13, conv_s1_y_13)*(int16)624) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_13, conv_s1_y_13)*(int16)656) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_13, conv_s1_y_13)*(int16)688) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_13, conv_s1_y_13)*(int16)720) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_13, conv_s1_y_13)*(int16)752) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_13, conv_s1_y_13)*(int16)784) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_13, conv_s1_y_13)*(int16)816) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_13, conv_s1_y_13)*(int16)848) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_13, conv_s1_y_13)*(int16)880) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_13, conv_s1_y_13)*(int16)912) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_13, conv_s1_y_13)*(int16)944) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_13, conv_s1_y_13)*(int16)1008) + (hw_input_global_wrapper.stencil(30, conv_s1_x_13, conv_s1_y_13)*(int16)976)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_x_13->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "13", "conv_s1_y_13", "conv_s1_x_13");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "0");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "1");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "2");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "3");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "4");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "5");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "6");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "7");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "8");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "9");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "10");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "11");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "12");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "13");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "14");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "15");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "16");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "17");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "18");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "19");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "20");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "21");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "22");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "23");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "24");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "25");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "26");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "27");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "28");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "29");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "31");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_13", "conv_s1_x_13", "30");
  hcompute_conv_stencil_14->add_store("conv_stencil", "13", "conv_s1_y_13", "conv_s1_x_13");
  auto conv_s1_y_14 = prg.add_loop("conv_s1_y_14", 0, 8);
  auto conv_s1_x_14 = conv_s1_y_14->add_loop("conv_s1_x_14", 0, 8);

//store is: conv.stencil(conv_s1_x_14, conv_s1_y_14, 14) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_14, conv_s1_y_14)*(int16)17) + (conv.stencil(conv_s1_x_14, conv_s1_y_14, 14) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_14, conv_s1_y_14)*(int16)49) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_14, conv_s1_y_14)*(int16)81) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_14, conv_s1_y_14)*(int16)113) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_14, conv_s1_y_14)*(int16)145) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_14, conv_s1_y_14)*(int16)177) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_14, conv_s1_y_14)*(int16)209) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_14, conv_s1_y_14)*(int16)241) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_14, conv_s1_y_14)*(int16)273) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_14, conv_s1_y_14)*(int16)305) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_14, conv_s1_y_14)*(int16)337) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_14, conv_s1_y_14)*(int16)369) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_14, conv_s1_y_14)*(int16)401) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_14, conv_s1_y_14)*(int16)433) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_14, conv_s1_y_14)*(int16)465) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_14, conv_s1_y_14)*(int16)497) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_14, conv_s1_y_14)*(int16)529) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_14, conv_s1_y_14)*(int16)561) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_14, conv_s1_y_14)*(int16)593) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_14, conv_s1_y_14)*(int16)625) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_14, conv_s1_y_14)*(int16)657) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_14, conv_s1_y_14)*(int16)689) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_14, conv_s1_y_14)*(int16)721) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_14, conv_s1_y_14)*(int16)753) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_14, conv_s1_y_14)*(int16)785) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_14, conv_s1_y_14)*(int16)817) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_14, conv_s1_y_14)*(int16)849) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_14, conv_s1_y_14)*(int16)881) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_14, conv_s1_y_14)*(int16)913) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_14, conv_s1_y_14)*(int16)945) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_14, conv_s1_y_14)*(int16)1009) + (hw_input_global_wrapper.stencil(30, conv_s1_x_14, conv_s1_y_14)*(int16)977)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_x_14->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "14", "conv_s1_y_14", "conv_s1_x_14");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "0");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "1");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "2");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "3");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "4");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "5");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "6");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "7");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "8");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "9");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "10");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "11");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "12");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "13");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "14");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "15");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "16");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "17");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "18");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "19");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "20");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "21");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "22");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "23");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "24");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "25");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "26");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "27");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "28");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "29");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "31");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_14", "conv_s1_x_14", "30");
  hcompute_conv_stencil_15->add_store("conv_stencil", "14", "conv_s1_y_14", "conv_s1_x_14");
  auto conv_s1_y_15 = prg.add_loop("conv_s1_y_15", 0, 8);
  auto conv_s1_x_15 = conv_s1_y_15->add_loop("conv_s1_x_15", 0, 8);

//store is: conv.stencil(conv_s1_x_15, conv_s1_y_15, 15) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_15, conv_s1_y_15)*(int16)18) + (conv.stencil(conv_s1_x_15, conv_s1_y_15, 15) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_15, conv_s1_y_15)*(int16)50) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_15, conv_s1_y_15)*(int16)82) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_15, conv_s1_y_15)*(int16)114) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_15, conv_s1_y_15)*(int16)146) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_15, conv_s1_y_15)*(int16)178) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_15, conv_s1_y_15)*(int16)210) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_15, conv_s1_y_15)*(int16)242) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_15, conv_s1_y_15)*(int16)274) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_15, conv_s1_y_15)*(int16)306) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_15, conv_s1_y_15)*(int16)338) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_15, conv_s1_y_15)*(int16)370) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_15, conv_s1_y_15)*(int16)402) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_15, conv_s1_y_15)*(int16)434) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_15, conv_s1_y_15)*(int16)466) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_15, conv_s1_y_15)*(int16)498) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_15, conv_s1_y_15)*(int16)530) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_15, conv_s1_y_15)*(int16)562) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_15, conv_s1_y_15)*(int16)594) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_15, conv_s1_y_15)*(int16)626) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_15, conv_s1_y_15)*(int16)658) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_15, conv_s1_y_15)*(int16)690) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_15, conv_s1_y_15)*(int16)722) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_15, conv_s1_y_15)*(int16)754) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_15, conv_s1_y_15)*(int16)786) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_15, conv_s1_y_15)*(int16)818) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_15, conv_s1_y_15)*(int16)850) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_15, conv_s1_y_15)*(int16)882) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_15, conv_s1_y_15)*(int16)914) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_15, conv_s1_y_15)*(int16)946) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_15, conv_s1_y_15)*(int16)1010) + (hw_input_global_wrapper.stencil(30, conv_s1_x_15, conv_s1_y_15)*(int16)978)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_16 = conv_s1_x_15->add_op("op_hcompute_conv_stencil_16");
  hcompute_conv_stencil_16->add_function("hcompute_conv_stencil_16");
  hcompute_conv_stencil_16->add_load("conv_stencil", "15", "conv_s1_y_15", "conv_s1_x_15");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "0");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "1");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "2");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "3");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "4");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "5");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "6");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "7");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "8");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "9");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "10");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "11");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "12");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "13");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "14");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "15");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "16");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "17");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "18");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "19");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "20");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "21");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "22");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "23");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "24");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "25");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "26");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "27");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "28");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "29");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "31");
  hcompute_conv_stencil_16->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_15", "conv_s1_x_15", "30");
  hcompute_conv_stencil_16->add_store("conv_stencil", "15", "conv_s1_y_15", "conv_s1_x_15");
  auto conv_s1_y_16 = prg.add_loop("conv_s1_y_16", 0, 8);
  auto conv_s1_x_16 = conv_s1_y_16->add_loop("conv_s1_x_16", 0, 8);

//store is: conv.stencil(conv_s1_x_16, conv_s1_y_16, 16) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_16, conv_s1_y_16)*(int16)19) + (conv.stencil(conv_s1_x_16, conv_s1_y_16, 16) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_16, conv_s1_y_16)*(int16)51) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_16, conv_s1_y_16)*(int16)83) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_16, conv_s1_y_16)*(int16)115) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_16, conv_s1_y_16)*(int16)147) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_16, conv_s1_y_16)*(int16)179) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_16, conv_s1_y_16)*(int16)211) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_16, conv_s1_y_16)*(int16)243) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_16, conv_s1_y_16)*(int16)275) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_16, conv_s1_y_16)*(int16)307) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_16, conv_s1_y_16)*(int16)339) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_16, conv_s1_y_16)*(int16)371) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_16, conv_s1_y_16)*(int16)403) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_16, conv_s1_y_16)*(int16)435) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_16, conv_s1_y_16)*(int16)467) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_16, conv_s1_y_16)*(int16)499) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_16, conv_s1_y_16)*(int16)531) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_16, conv_s1_y_16)*(int16)563) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_16, conv_s1_y_16)*(int16)595) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_16, conv_s1_y_16)*(int16)627) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_16, conv_s1_y_16)*(int16)659) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_16, conv_s1_y_16)*(int16)691) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_16, conv_s1_y_16)*(int16)723) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_16, conv_s1_y_16)*(int16)755) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_16, conv_s1_y_16)*(int16)787) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_16, conv_s1_y_16)*(int16)819) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_16, conv_s1_y_16)*(int16)851) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_16, conv_s1_y_16)*(int16)883) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_16, conv_s1_y_16)*(int16)915) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_16, conv_s1_y_16)*(int16)947) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_16, conv_s1_y_16)*(int16)1011) + (hw_input_global_wrapper.stencil(30, conv_s1_x_16, conv_s1_y_16)*(int16)979)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_17 = conv_s1_x_16->add_op("op_hcompute_conv_stencil_17");
  hcompute_conv_stencil_17->add_function("hcompute_conv_stencil_17");
  hcompute_conv_stencil_17->add_load("conv_stencil", "16", "conv_s1_y_16", "conv_s1_x_16");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "0");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "1");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "2");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "3");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "4");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "5");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "6");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "7");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "8");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "9");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "10");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "11");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "12");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "13");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "14");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "15");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "16");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "17");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "18");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "19");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "20");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "21");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "22");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "23");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "24");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "25");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "26");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "27");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "28");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "29");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "31");
  hcompute_conv_stencil_17->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_16", "conv_s1_x_16", "30");
  hcompute_conv_stencil_17->add_store("conv_stencil", "16", "conv_s1_y_16", "conv_s1_x_16");
  auto conv_s1_y_17 = prg.add_loop("conv_s1_y_17", 0, 8);
  auto conv_s1_x_17 = conv_s1_y_17->add_loop("conv_s1_x_17", 0, 8);

//store is: conv.stencil(conv_s1_x_17, conv_s1_y_17, 17) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_17, conv_s1_y_17)*(int16)20) + (conv.stencil(conv_s1_x_17, conv_s1_y_17, 17) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_17, conv_s1_y_17)*(int16)52) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_17, conv_s1_y_17)*(int16)84) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_17, conv_s1_y_17)*(int16)116) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_17, conv_s1_y_17)*(int16)148) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_17, conv_s1_y_17)*(int16)180) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_17, conv_s1_y_17)*(int16)212) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_17, conv_s1_y_17)*(int16)244) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_17, conv_s1_y_17)*(int16)276) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_17, conv_s1_y_17)*(int16)308) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_17, conv_s1_y_17)*(int16)340) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_17, conv_s1_y_17)*(int16)372) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_17, conv_s1_y_17)*(int16)404) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_17, conv_s1_y_17)*(int16)436) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_17, conv_s1_y_17)*(int16)468) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_17, conv_s1_y_17)*(int16)500) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_17, conv_s1_y_17)*(int16)532) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_17, conv_s1_y_17)*(int16)564) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_17, conv_s1_y_17)*(int16)596) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_17, conv_s1_y_17)*(int16)628) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_17, conv_s1_y_17)*(int16)660) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_17, conv_s1_y_17)*(int16)692) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_17, conv_s1_y_17)*(int16)724) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_17, conv_s1_y_17)*(int16)756) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_17, conv_s1_y_17)*(int16)788) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_17, conv_s1_y_17)*(int16)820) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_17, conv_s1_y_17)*(int16)852) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_17, conv_s1_y_17)*(int16)884) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_17, conv_s1_y_17)*(int16)916) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_17, conv_s1_y_17)*(int16)948) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_17, conv_s1_y_17)*(int16)1012) + (hw_input_global_wrapper.stencil(30, conv_s1_x_17, conv_s1_y_17)*(int16)980)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_18 = conv_s1_x_17->add_op("op_hcompute_conv_stencil_18");
  hcompute_conv_stencil_18->add_function("hcompute_conv_stencil_18");
  hcompute_conv_stencil_18->add_load("conv_stencil", "17", "conv_s1_y_17", "conv_s1_x_17");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "0");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "1");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "2");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "3");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "4");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "5");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "6");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "7");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "8");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "9");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "10");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "11");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "12");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "13");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "14");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "15");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "16");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "17");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "18");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "19");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "20");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "21");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "22");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "23");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "24");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "25");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "26");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "27");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "28");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "29");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "31");
  hcompute_conv_stencil_18->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_17", "conv_s1_x_17", "30");
  hcompute_conv_stencil_18->add_store("conv_stencil", "17", "conv_s1_y_17", "conv_s1_x_17");
  auto conv_s1_y_18 = prg.add_loop("conv_s1_y_18", 0, 8);
  auto conv_s1_x_18 = conv_s1_y_18->add_loop("conv_s1_x_18", 0, 8);

//store is: conv.stencil(conv_s1_x_18, conv_s1_y_18, 18) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_18, conv_s1_y_18)*(int16)21) + (conv.stencil(conv_s1_x_18, conv_s1_y_18, 18) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_18, conv_s1_y_18)*(int16)53) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_18, conv_s1_y_18)*(int16)85) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_18, conv_s1_y_18)*(int16)117) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_18, conv_s1_y_18)*(int16)149) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_18, conv_s1_y_18)*(int16)181) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_18, conv_s1_y_18)*(int16)213) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_18, conv_s1_y_18)*(int16)245) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_18, conv_s1_y_18)*(int16)277) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_18, conv_s1_y_18)*(int16)309) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_18, conv_s1_y_18)*(int16)341) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_18, conv_s1_y_18)*(int16)373) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_18, conv_s1_y_18)*(int16)405) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_18, conv_s1_y_18)*(int16)437) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_18, conv_s1_y_18)*(int16)469) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_18, conv_s1_y_18)*(int16)501) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_18, conv_s1_y_18)*(int16)533) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_18, conv_s1_y_18)*(int16)565) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_18, conv_s1_y_18)*(int16)597) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_18, conv_s1_y_18)*(int16)629) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_18, conv_s1_y_18)*(int16)661) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_18, conv_s1_y_18)*(int16)693) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_18, conv_s1_y_18)*(int16)725) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_18, conv_s1_y_18)*(int16)757) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_18, conv_s1_y_18)*(int16)789) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_18, conv_s1_y_18)*(int16)821) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_18, conv_s1_y_18)*(int16)853) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_18, conv_s1_y_18)*(int16)885) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_18, conv_s1_y_18)*(int16)917) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_18, conv_s1_y_18)*(int16)949) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_18, conv_s1_y_18)*(int16)1013) + (hw_input_global_wrapper.stencil(30, conv_s1_x_18, conv_s1_y_18)*(int16)981)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_19 = conv_s1_x_18->add_op("op_hcompute_conv_stencil_19");
  hcompute_conv_stencil_19->add_function("hcompute_conv_stencil_19");
  hcompute_conv_stencil_19->add_load("conv_stencil", "18", "conv_s1_y_18", "conv_s1_x_18");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "0");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "1");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "2");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "3");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "4");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "5");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "6");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "7");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "8");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "9");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "10");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "11");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "12");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "13");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "14");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "15");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "16");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "17");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "18");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "19");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "20");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "21");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "22");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "23");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "24");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "25");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "26");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "27");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "28");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "29");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "31");
  hcompute_conv_stencil_19->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_18", "conv_s1_x_18", "30");
  hcompute_conv_stencil_19->add_store("conv_stencil", "18", "conv_s1_y_18", "conv_s1_x_18");
  auto conv_s1_y_19 = prg.add_loop("conv_s1_y_19", 0, 8);
  auto conv_s1_x_19 = conv_s1_y_19->add_loop("conv_s1_x_19", 0, 8);

//store is: conv.stencil(conv_s1_x_19, conv_s1_y_19, 19) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_19, conv_s1_y_19)*(int16)22) + (conv.stencil(conv_s1_x_19, conv_s1_y_19, 19) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_19, conv_s1_y_19)*(int16)54) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_19, conv_s1_y_19)*(int16)86) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_19, conv_s1_y_19)*(int16)118) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_19, conv_s1_y_19)*(int16)150) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_19, conv_s1_y_19)*(int16)182) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_19, conv_s1_y_19)*(int16)214) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_19, conv_s1_y_19)*(int16)246) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_19, conv_s1_y_19)*(int16)278) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_19, conv_s1_y_19)*(int16)310) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_19, conv_s1_y_19)*(int16)342) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_19, conv_s1_y_19)*(int16)374) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_19, conv_s1_y_19)*(int16)406) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_19, conv_s1_y_19)*(int16)438) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_19, conv_s1_y_19)*(int16)470) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_19, conv_s1_y_19)*(int16)502) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_19, conv_s1_y_19)*(int16)534) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_19, conv_s1_y_19)*(int16)566) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_19, conv_s1_y_19)*(int16)598) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_19, conv_s1_y_19)*(int16)630) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_19, conv_s1_y_19)*(int16)662) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_19, conv_s1_y_19)*(int16)694) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_19, conv_s1_y_19)*(int16)726) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_19, conv_s1_y_19)*(int16)758) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_19, conv_s1_y_19)*(int16)790) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_19, conv_s1_y_19)*(int16)822) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_19, conv_s1_y_19)*(int16)854) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_19, conv_s1_y_19)*(int16)886) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_19, conv_s1_y_19)*(int16)918) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_19, conv_s1_y_19)*(int16)950) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_19, conv_s1_y_19)*(int16)1014) + (hw_input_global_wrapper.stencil(30, conv_s1_x_19, conv_s1_y_19)*(int16)982)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_20 = conv_s1_x_19->add_op("op_hcompute_conv_stencil_20");
  hcompute_conv_stencil_20->add_function("hcompute_conv_stencil_20");
  hcompute_conv_stencil_20->add_load("conv_stencil", "19", "conv_s1_y_19", "conv_s1_x_19");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "0");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "1");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "2");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "3");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "4");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "5");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "6");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "7");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "8");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "9");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "10");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "11");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "12");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "13");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "14");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "15");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "16");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "17");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "18");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "19");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "20");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "21");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "22");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "23");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "24");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "25");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "26");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "27");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "28");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "29");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "31");
  hcompute_conv_stencil_20->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_19", "conv_s1_x_19", "30");
  hcompute_conv_stencil_20->add_store("conv_stencil", "19", "conv_s1_y_19", "conv_s1_x_19");
  auto conv_s1_y_20 = prg.add_loop("conv_s1_y_20", 0, 8);
  auto conv_s1_x_20 = conv_s1_y_20->add_loop("conv_s1_x_20", 0, 8);

//store is: conv.stencil(conv_s1_x_20, conv_s1_y_20, 20) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_20, conv_s1_y_20)*(int16)23) + (conv.stencil(conv_s1_x_20, conv_s1_y_20, 20) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_20, conv_s1_y_20)*(int16)55) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_20, conv_s1_y_20)*(int16)87) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_20, conv_s1_y_20)*(int16)119) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_20, conv_s1_y_20)*(int16)151) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_20, conv_s1_y_20)*(int16)183) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_20, conv_s1_y_20)*(int16)215) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_20, conv_s1_y_20)*(int16)247) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_20, conv_s1_y_20)*(int16)279) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_20, conv_s1_y_20)*(int16)311) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_20, conv_s1_y_20)*(int16)343) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_20, conv_s1_y_20)*(int16)375) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_20, conv_s1_y_20)*(int16)407) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_20, conv_s1_y_20)*(int16)439) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_20, conv_s1_y_20)*(int16)471) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_20, conv_s1_y_20)*(int16)503) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_20, conv_s1_y_20)*(int16)535) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_20, conv_s1_y_20)*(int16)567) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_20, conv_s1_y_20)*(int16)599) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_20, conv_s1_y_20)*(int16)631) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_20, conv_s1_y_20)*(int16)663) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_20, conv_s1_y_20)*(int16)695) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_20, conv_s1_y_20)*(int16)727) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_20, conv_s1_y_20)*(int16)759) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_20, conv_s1_y_20)*(int16)791) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_20, conv_s1_y_20)*(int16)823) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_20, conv_s1_y_20)*(int16)855) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_20, conv_s1_y_20)*(int16)887) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_20, conv_s1_y_20)*(int16)919) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_20, conv_s1_y_20)*(int16)951) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_20, conv_s1_y_20)*(int16)1015) + (hw_input_global_wrapper.stencil(30, conv_s1_x_20, conv_s1_y_20)*(int16)983)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_21 = conv_s1_x_20->add_op("op_hcompute_conv_stencil_21");
  hcompute_conv_stencil_21->add_function("hcompute_conv_stencil_21");
  hcompute_conv_stencil_21->add_load("conv_stencil", "20", "conv_s1_y_20", "conv_s1_x_20");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "0");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "1");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "2");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "3");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "4");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "5");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "6");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "7");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "8");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "9");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "10");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "11");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "12");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "13");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "14");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "15");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "16");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "17");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "18");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "19");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "20");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "21");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "22");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "23");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "24");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "25");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "26");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "27");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "28");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "29");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "31");
  hcompute_conv_stencil_21->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_20", "conv_s1_x_20", "30");
  hcompute_conv_stencil_21->add_store("conv_stencil", "20", "conv_s1_y_20", "conv_s1_x_20");
  auto conv_s1_y_21 = prg.add_loop("conv_s1_y_21", 0, 8);
  auto conv_s1_x_21 = conv_s1_y_21->add_loop("conv_s1_x_21", 0, 8);

//store is: conv.stencil(conv_s1_x_21, conv_s1_y_21, 21) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_21, conv_s1_y_21)*(int16)24) + (conv.stencil(conv_s1_x_21, conv_s1_y_21, 21) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_21, conv_s1_y_21)*(int16)56) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_21, conv_s1_y_21)*(int16)88) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_21, conv_s1_y_21)*(int16)120) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_21, conv_s1_y_21)*(int16)152) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_21, conv_s1_y_21)*(int16)184) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_21, conv_s1_y_21)*(int16)216) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_21, conv_s1_y_21)*(int16)248) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_21, conv_s1_y_21)*(int16)280) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_21, conv_s1_y_21)*(int16)312) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_21, conv_s1_y_21)*(int16)344) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_21, conv_s1_y_21)*(int16)376) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_21, conv_s1_y_21)*(int16)408) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_21, conv_s1_y_21)*(int16)440) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_21, conv_s1_y_21)*(int16)472) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_21, conv_s1_y_21)*(int16)504) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_21, conv_s1_y_21)*(int16)536) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_21, conv_s1_y_21)*(int16)568) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_21, conv_s1_y_21)*(int16)600) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_21, conv_s1_y_21)*(int16)632) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_21, conv_s1_y_21)*(int16)664) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_21, conv_s1_y_21)*(int16)696) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_21, conv_s1_y_21)*(int16)728) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_21, conv_s1_y_21)*(int16)760) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_21, conv_s1_y_21)*(int16)792) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_21, conv_s1_y_21)*(int16)824) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_21, conv_s1_y_21)*(int16)856) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_21, conv_s1_y_21)*(int16)888) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_21, conv_s1_y_21)*(int16)920) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_21, conv_s1_y_21)*(int16)952) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_21, conv_s1_y_21)*(int16)1016) + (hw_input_global_wrapper.stencil(30, conv_s1_x_21, conv_s1_y_21)*(int16)984)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_22 = conv_s1_x_21->add_op("op_hcompute_conv_stencil_22");
  hcompute_conv_stencil_22->add_function("hcompute_conv_stencil_22");
  hcompute_conv_stencil_22->add_load("conv_stencil", "21", "conv_s1_y_21", "conv_s1_x_21");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "0");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "1");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "2");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "3");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "4");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "5");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "6");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "7");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "8");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "9");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "10");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "11");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "12");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "13");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "14");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "15");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "16");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "17");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "18");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "19");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "20");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "21");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "22");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "23");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "24");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "25");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "26");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "27");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "28");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "29");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "31");
  hcompute_conv_stencil_22->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_21", "conv_s1_x_21", "30");
  hcompute_conv_stencil_22->add_store("conv_stencil", "21", "conv_s1_y_21", "conv_s1_x_21");
  auto conv_s1_y_22 = prg.add_loop("conv_s1_y_22", 0, 8);
  auto conv_s1_x_22 = conv_s1_y_22->add_loop("conv_s1_x_22", 0, 8);

//store is: conv.stencil(conv_s1_x_22, conv_s1_y_22, 22) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_22, conv_s1_y_22)*(int16)25) + (conv.stencil(conv_s1_x_22, conv_s1_y_22, 22) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_22, conv_s1_y_22)*(int16)57) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_22, conv_s1_y_22)*(int16)89) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_22, conv_s1_y_22)*(int16)121) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_22, conv_s1_y_22)*(int16)153) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_22, conv_s1_y_22)*(int16)185) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_22, conv_s1_y_22)*(int16)217) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_22, conv_s1_y_22)*(int16)249) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_22, conv_s1_y_22)*(int16)281) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_22, conv_s1_y_22)*(int16)313) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_22, conv_s1_y_22)*(int16)345) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_22, conv_s1_y_22)*(int16)377) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_22, conv_s1_y_22)*(int16)409) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_22, conv_s1_y_22)*(int16)441) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_22, conv_s1_y_22)*(int16)473) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_22, conv_s1_y_22)*(int16)505) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_22, conv_s1_y_22)*(int16)537) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_22, conv_s1_y_22)*(int16)569) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_22, conv_s1_y_22)*(int16)601) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_22, conv_s1_y_22)*(int16)633) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_22, conv_s1_y_22)*(int16)665) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_22, conv_s1_y_22)*(int16)697) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_22, conv_s1_y_22)*(int16)729) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_22, conv_s1_y_22)*(int16)761) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_22, conv_s1_y_22)*(int16)793) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_22, conv_s1_y_22)*(int16)825) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_22, conv_s1_y_22)*(int16)857) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_22, conv_s1_y_22)*(int16)889) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_22, conv_s1_y_22)*(int16)921) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_22, conv_s1_y_22)*(int16)953) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_22, conv_s1_y_22)*(int16)1017) + (hw_input_global_wrapper.stencil(30, conv_s1_x_22, conv_s1_y_22)*(int16)985)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_23 = conv_s1_x_22->add_op("op_hcompute_conv_stencil_23");
  hcompute_conv_stencil_23->add_function("hcompute_conv_stencil_23");
  hcompute_conv_stencil_23->add_load("conv_stencil", "22", "conv_s1_y_22", "conv_s1_x_22");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "0");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "1");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "2");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "3");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "4");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "5");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "6");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "7");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "8");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "9");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "10");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "11");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "12");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "13");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "14");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "15");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "16");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "17");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "18");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "19");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "20");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "21");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "22");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "23");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "24");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "25");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "26");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "27");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "28");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "29");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "31");
  hcompute_conv_stencil_23->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_22", "conv_s1_x_22", "30");
  hcompute_conv_stencil_23->add_store("conv_stencil", "22", "conv_s1_y_22", "conv_s1_x_22");
  auto conv_s1_y_23 = prg.add_loop("conv_s1_y_23", 0, 8);
  auto conv_s1_x_23 = conv_s1_y_23->add_loop("conv_s1_x_23", 0, 8);

//store is: conv.stencil(conv_s1_x_23, conv_s1_y_23, 23) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_23, conv_s1_y_23)*(int16)26) + (conv.stencil(conv_s1_x_23, conv_s1_y_23, 23) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_23, conv_s1_y_23)*(int16)58) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_23, conv_s1_y_23)*(int16)90) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_23, conv_s1_y_23)*(int16)122) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_23, conv_s1_y_23)*(int16)154) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_23, conv_s1_y_23)*(int16)186) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_23, conv_s1_y_23)*(int16)218) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_23, conv_s1_y_23)*(int16)250) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_23, conv_s1_y_23)*(int16)282) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_23, conv_s1_y_23)*(int16)314) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_23, conv_s1_y_23)*(int16)346) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_23, conv_s1_y_23)*(int16)378) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_23, conv_s1_y_23)*(int16)410) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_23, conv_s1_y_23)*(int16)442) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_23, conv_s1_y_23)*(int16)474) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_23, conv_s1_y_23)*(int16)506) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_23, conv_s1_y_23)*(int16)538) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_23, conv_s1_y_23)*(int16)570) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_23, conv_s1_y_23)*(int16)602) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_23, conv_s1_y_23)*(int16)634) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_23, conv_s1_y_23)*(int16)666) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_23, conv_s1_y_23)*(int16)698) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_23, conv_s1_y_23)*(int16)730) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_23, conv_s1_y_23)*(int16)762) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_23, conv_s1_y_23)*(int16)794) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_23, conv_s1_y_23)*(int16)826) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_23, conv_s1_y_23)*(int16)858) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_23, conv_s1_y_23)*(int16)890) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_23, conv_s1_y_23)*(int16)922) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_23, conv_s1_y_23)*(int16)954) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_23, conv_s1_y_23)*(int16)1018) + (hw_input_global_wrapper.stencil(30, conv_s1_x_23, conv_s1_y_23)*(int16)986)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_24 = conv_s1_x_23->add_op("op_hcompute_conv_stencil_24");
  hcompute_conv_stencil_24->add_function("hcompute_conv_stencil_24");
  hcompute_conv_stencil_24->add_load("conv_stencil", "23", "conv_s1_y_23", "conv_s1_x_23");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "0");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "1");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "2");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "3");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "4");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "5");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "6");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "7");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "8");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "9");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "10");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "11");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "12");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "13");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "14");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "15");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "16");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "17");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "18");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "19");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "20");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "21");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "22");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "23");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "24");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "25");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "26");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "27");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "28");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "29");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "31");
  hcompute_conv_stencil_24->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_23", "conv_s1_x_23", "30");
  hcompute_conv_stencil_24->add_store("conv_stencil", "23", "conv_s1_y_23", "conv_s1_x_23");
  auto conv_s1_y_24 = prg.add_loop("conv_s1_y_24", 0, 8);
  auto conv_s1_x_24 = conv_s1_y_24->add_loop("conv_s1_x_24", 0, 8);

//store is: conv.stencil(conv_s1_x_24, conv_s1_y_24, 24) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_24, conv_s1_y_24)*(int16)27) + (conv.stencil(conv_s1_x_24, conv_s1_y_24, 24) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_24, conv_s1_y_24)*(int16)59) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_24, conv_s1_y_24)*(int16)91) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_24, conv_s1_y_24)*(int16)123) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_24, conv_s1_y_24)*(int16)155) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_24, conv_s1_y_24)*(int16)187) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_24, conv_s1_y_24)*(int16)219) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_24, conv_s1_y_24)*(int16)251) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_24, conv_s1_y_24)*(int16)283) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_24, conv_s1_y_24)*(int16)315) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_24, conv_s1_y_24)*(int16)347) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_24, conv_s1_y_24)*(int16)379) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_24, conv_s1_y_24)*(int16)411) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_24, conv_s1_y_24)*(int16)443) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_24, conv_s1_y_24)*(int16)475) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_24, conv_s1_y_24)*(int16)507) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_24, conv_s1_y_24)*(int16)539) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_24, conv_s1_y_24)*(int16)571) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_24, conv_s1_y_24)*(int16)603) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_24, conv_s1_y_24)*(int16)635) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_24, conv_s1_y_24)*(int16)667) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_24, conv_s1_y_24)*(int16)699) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_24, conv_s1_y_24)*(int16)731) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_24, conv_s1_y_24)*(int16)763) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_24, conv_s1_y_24)*(int16)795) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_24, conv_s1_y_24)*(int16)827) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_24, conv_s1_y_24)*(int16)859) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_24, conv_s1_y_24)*(int16)891) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_24, conv_s1_y_24)*(int16)923) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_24, conv_s1_y_24)*(int16)955) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_24, conv_s1_y_24)*(int16)1019) + (hw_input_global_wrapper.stencil(30, conv_s1_x_24, conv_s1_y_24)*(int16)987)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_25 = conv_s1_x_24->add_op("op_hcompute_conv_stencil_25");
  hcompute_conv_stencil_25->add_function("hcompute_conv_stencil_25");
  hcompute_conv_stencil_25->add_load("conv_stencil", "24", "conv_s1_y_24", "conv_s1_x_24");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "0");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "1");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "2");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "3");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "4");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "5");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "6");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "7");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "8");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "9");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "10");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "11");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "12");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "13");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "14");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "15");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "16");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "17");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "18");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "19");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "20");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "21");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "22");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "23");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "24");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "25");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "26");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "27");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "28");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "29");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "31");
  hcompute_conv_stencil_25->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_24", "conv_s1_x_24", "30");
  hcompute_conv_stencil_25->add_store("conv_stencil", "24", "conv_s1_y_24", "conv_s1_x_24");
  auto conv_s1_y_25 = prg.add_loop("conv_s1_y_25", 0, 8);
  auto conv_s1_x_25 = conv_s1_y_25->add_loop("conv_s1_x_25", 0, 8);

//store is: conv.stencil(conv_s1_x_25, conv_s1_y_25, 25) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_25, conv_s1_y_25)*(int16)28) + (conv.stencil(conv_s1_x_25, conv_s1_y_25, 25) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_25, conv_s1_y_25)*(int16)60) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_25, conv_s1_y_25)*(int16)92) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_25, conv_s1_y_25)*(int16)124) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_25, conv_s1_y_25)*(int16)156) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_25, conv_s1_y_25)*(int16)188) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_25, conv_s1_y_25)*(int16)220) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_25, conv_s1_y_25)*(int16)252) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_25, conv_s1_y_25)*(int16)284) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_25, conv_s1_y_25)*(int16)316) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_25, conv_s1_y_25)*(int16)348) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_25, conv_s1_y_25)*(int16)380) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_25, conv_s1_y_25)*(int16)412) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_25, conv_s1_y_25)*(int16)444) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_25, conv_s1_y_25)*(int16)476) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_25, conv_s1_y_25)*(int16)508) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_25, conv_s1_y_25)*(int16)540) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_25, conv_s1_y_25)*(int16)572) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_25, conv_s1_y_25)*(int16)604) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_25, conv_s1_y_25)*(int16)636) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_25, conv_s1_y_25)*(int16)668) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_25, conv_s1_y_25)*(int16)700) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_25, conv_s1_y_25)*(int16)732) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_25, conv_s1_y_25)*(int16)764) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_25, conv_s1_y_25)*(int16)796) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_25, conv_s1_y_25)*(int16)828) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_25, conv_s1_y_25)*(int16)860) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_25, conv_s1_y_25)*(int16)892) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_25, conv_s1_y_25)*(int16)924) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_25, conv_s1_y_25)*(int16)956) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_25, conv_s1_y_25)*(int16)1020) + (hw_input_global_wrapper.stencil(30, conv_s1_x_25, conv_s1_y_25)*(int16)988)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_26 = conv_s1_x_25->add_op("op_hcompute_conv_stencil_26");
  hcompute_conv_stencil_26->add_function("hcompute_conv_stencil_26");
  hcompute_conv_stencil_26->add_load("conv_stencil", "25", "conv_s1_y_25", "conv_s1_x_25");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "0");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "1");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "2");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "3");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "4");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "5");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "6");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "7");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "8");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "9");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "10");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "11");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "12");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "13");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "14");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "15");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "16");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "17");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "18");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "19");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "20");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "21");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "22");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "23");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "24");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "25");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "26");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "27");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "28");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "29");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "31");
  hcompute_conv_stencil_26->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_25", "conv_s1_x_25", "30");
  hcompute_conv_stencil_26->add_store("conv_stencil", "25", "conv_s1_y_25", "conv_s1_x_25");
  auto conv_s1_y_26 = prg.add_loop("conv_s1_y_26", 0, 8);
  auto conv_s1_x_26 = conv_s1_y_26->add_loop("conv_s1_x_26", 0, 8);

//store is: conv.stencil(conv_s1_x_26, conv_s1_y_26, 26) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_26, conv_s1_y_26)*(int16)29) + (conv.stencil(conv_s1_x_26, conv_s1_y_26, 26) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_26, conv_s1_y_26)*(int16)61) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_26, conv_s1_y_26)*(int16)93) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_26, conv_s1_y_26)*(int16)125) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_26, conv_s1_y_26)*(int16)157) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_26, conv_s1_y_26)*(int16)189) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_26, conv_s1_y_26)*(int16)221) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_26, conv_s1_y_26)*(int16)253) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_26, conv_s1_y_26)*(int16)285) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_26, conv_s1_y_26)*(int16)317) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_26, conv_s1_y_26)*(int16)349) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_26, conv_s1_y_26)*(int16)381) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_26, conv_s1_y_26)*(int16)413) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_26, conv_s1_y_26)*(int16)445) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_26, conv_s1_y_26)*(int16)477) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_26, conv_s1_y_26)*(int16)509) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_26, conv_s1_y_26)*(int16)541) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_26, conv_s1_y_26)*(int16)573) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_26, conv_s1_y_26)*(int16)605) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_26, conv_s1_y_26)*(int16)637) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_26, conv_s1_y_26)*(int16)669) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_26, conv_s1_y_26)*(int16)701) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_26, conv_s1_y_26)*(int16)733) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_26, conv_s1_y_26)*(int16)765) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_26, conv_s1_y_26)*(int16)797) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_26, conv_s1_y_26)*(int16)829) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_26, conv_s1_y_26)*(int16)861) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_26, conv_s1_y_26)*(int16)893) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_26, conv_s1_y_26)*(int16)925) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_26, conv_s1_y_26)*(int16)957) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_26, conv_s1_y_26)*(int16)1021) + (hw_input_global_wrapper.stencil(30, conv_s1_x_26, conv_s1_y_26)*(int16)989)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_27 = conv_s1_x_26->add_op("op_hcompute_conv_stencil_27");
  hcompute_conv_stencil_27->add_function("hcompute_conv_stencil_27");
  hcompute_conv_stencil_27->add_load("conv_stencil", "26", "conv_s1_y_26", "conv_s1_x_26");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "0");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "1");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "2");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "3");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "4");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "5");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "6");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "7");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "8");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "9");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "10");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "11");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "12");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "13");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "14");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "15");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "16");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "17");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "18");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "19");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "20");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "21");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "22");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "23");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "24");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "25");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "26");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "27");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "28");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "29");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "31");
  hcompute_conv_stencil_27->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_26", "conv_s1_x_26", "30");
  hcompute_conv_stencil_27->add_store("conv_stencil", "26", "conv_s1_y_26", "conv_s1_x_26");
  auto conv_s1_y_27 = prg.add_loop("conv_s1_y_27", 0, 8);
  auto conv_s1_x_27 = conv_s1_y_27->add_loop("conv_s1_x_27", 0, 8);

//store is: conv.stencil(conv_s1_x_27, conv_s1_y_27, 27) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_27, conv_s1_y_27)*(int16)30) + (conv.stencil(conv_s1_x_27, conv_s1_y_27, 27) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_27, conv_s1_y_27)*(int16)62) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_27, conv_s1_y_27)*(int16)94) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_27, conv_s1_y_27)*(int16)126) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_27, conv_s1_y_27)*(int16)158) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_27, conv_s1_y_27)*(int16)190) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_27, conv_s1_y_27)*(int16)222) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_27, conv_s1_y_27)*(int16)254) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_27, conv_s1_y_27)*(int16)286) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_27, conv_s1_y_27)*(int16)318) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_27, conv_s1_y_27)*(int16)350) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_27, conv_s1_y_27)*(int16)382) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_27, conv_s1_y_27)*(int16)414) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_27, conv_s1_y_27)*(int16)446) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_27, conv_s1_y_27)*(int16)478) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_27, conv_s1_y_27)*(int16)510) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_27, conv_s1_y_27)*(int16)542) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_27, conv_s1_y_27)*(int16)574) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_27, conv_s1_y_27)*(int16)606) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_27, conv_s1_y_27)*(int16)638) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_27, conv_s1_y_27)*(int16)670) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_27, conv_s1_y_27)*(int16)702) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_27, conv_s1_y_27)*(int16)734) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_27, conv_s1_y_27)*(int16)766) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_27, conv_s1_y_27)*(int16)798) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_27, conv_s1_y_27)*(int16)830) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_27, conv_s1_y_27)*(int16)862) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_27, conv_s1_y_27)*(int16)894) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_27, conv_s1_y_27)*(int16)926) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_27, conv_s1_y_27)*(int16)958) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_27, conv_s1_y_27)*(int16)1022) + (hw_input_global_wrapper.stencil(30, conv_s1_x_27, conv_s1_y_27)*(int16)990)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_28 = conv_s1_x_27->add_op("op_hcompute_conv_stencil_28");
  hcompute_conv_stencil_28->add_function("hcompute_conv_stencil_28");
  hcompute_conv_stencil_28->add_load("conv_stencil", "27", "conv_s1_y_27", "conv_s1_x_27");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "0");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "1");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "2");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "3");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "4");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "5");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "6");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "7");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "8");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "9");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "10");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "11");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "12");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "13");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "14");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "15");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "16");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "17");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "18");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "19");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "20");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "21");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "22");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "23");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "24");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "25");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "26");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "27");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "28");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "29");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "31");
  hcompute_conv_stencil_28->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_27", "conv_s1_x_27", "30");
  hcompute_conv_stencil_28->add_store("conv_stencil", "27", "conv_s1_y_27", "conv_s1_x_27");
  auto conv_s1_y_28 = prg.add_loop("conv_s1_y_28", 0, 8);
  auto conv_s1_x_28 = conv_s1_y_28->add_loop("conv_s1_x_28", 0, 8);

//store is: conv.stencil(conv_s1_x_28, conv_s1_y_28, 28) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_28, conv_s1_y_28)*(int16)31) + (conv.stencil(conv_s1_x_28, conv_s1_y_28, 28) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_28, conv_s1_y_28)*(int16)63) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_28, conv_s1_y_28)*(int16)95) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_28, conv_s1_y_28)*(int16)127) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_28, conv_s1_y_28)*(int16)159) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_28, conv_s1_y_28)*(int16)191) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_28, conv_s1_y_28)*(int16)223) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_28, conv_s1_y_28)*(int16)255) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_28, conv_s1_y_28)*(int16)287) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_28, conv_s1_y_28)*(int16)319) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_28, conv_s1_y_28)*(int16)351) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_28, conv_s1_y_28)*(int16)383) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_28, conv_s1_y_28)*(int16)415) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_28, conv_s1_y_28)*(int16)447) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_28, conv_s1_y_28)*(int16)479) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_28, conv_s1_y_28)*(int16)511) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_28, conv_s1_y_28)*(int16)543) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_28, conv_s1_y_28)*(int16)575) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_28, conv_s1_y_28)*(int16)607) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_28, conv_s1_y_28)*(int16)639) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_28, conv_s1_y_28)*(int16)671) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_28, conv_s1_y_28)*(int16)703) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_28, conv_s1_y_28)*(int16)735) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_28, conv_s1_y_28)*(int16)767) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_28, conv_s1_y_28)*(int16)799) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_28, conv_s1_y_28)*(int16)831) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_28, conv_s1_y_28)*(int16)863) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_28, conv_s1_y_28)*(int16)895) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_28, conv_s1_y_28)*(int16)927) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_28, conv_s1_y_28)*(int16)959) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_28, conv_s1_y_28)*(int16)1023) + (hw_input_global_wrapper.stencil(30, conv_s1_x_28, conv_s1_y_28)*(int16)991)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_29 = conv_s1_x_28->add_op("op_hcompute_conv_stencil_29");
  hcompute_conv_stencil_29->add_function("hcompute_conv_stencil_29");
  hcompute_conv_stencil_29->add_load("conv_stencil", "28", "conv_s1_y_28", "conv_s1_x_28");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "0");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "1");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "2");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "3");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "4");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "5");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "6");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "7");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "8");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "9");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "10");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "11");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "12");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "13");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "14");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "15");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "16");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "17");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "18");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "19");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "20");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "21");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "22");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "23");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "24");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "25");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "26");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "27");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "28");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "29");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "31");
  hcompute_conv_stencil_29->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_28", "conv_s1_x_28", "30");
  hcompute_conv_stencil_29->add_store("conv_stencil", "28", "conv_s1_y_28", "conv_s1_x_28");
  auto conv_s1_y_29 = prg.add_loop("conv_s1_y_29", 0, 8);
  auto conv_s1_x_29 = conv_s1_y_29->add_loop("conv_s1_x_29", 0, 8);

//store is: conv.stencil(conv_s1_x_29, conv_s1_y_29, 29) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_29, conv_s1_y_29)*(int16)32) + (conv.stencil(conv_s1_x_29, conv_s1_y_29, 29) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_29, conv_s1_y_29)*(int16)64) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_29, conv_s1_y_29)*(int16)96) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_29, conv_s1_y_29)*(int16)128) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_29, conv_s1_y_29)*(int16)160) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_29, conv_s1_y_29)*(int16)192) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_29, conv_s1_y_29)*(int16)224) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_29, conv_s1_y_29)*(int16)256) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_29, conv_s1_y_29)*(int16)288) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_29, conv_s1_y_29)*(int16)320) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_29, conv_s1_y_29)*(int16)352) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_29, conv_s1_y_29)*(int16)384) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_29, conv_s1_y_29)*(int16)416) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_29, conv_s1_y_29)*(int16)448) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_29, conv_s1_y_29)*(int16)480) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_29, conv_s1_y_29)*(int16)512) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_29, conv_s1_y_29)*(int16)544) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_29, conv_s1_y_29)*(int16)576) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_29, conv_s1_y_29)*(int16)608) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_29, conv_s1_y_29)*(int16)640) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_29, conv_s1_y_29)*(int16)672) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_29, conv_s1_y_29)*(int16)704) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_29, conv_s1_y_29)*(int16)736) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_29, conv_s1_y_29)*(int16)768) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_29, conv_s1_y_29)*(int16)800) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_29, conv_s1_y_29)*(int16)832) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_29, conv_s1_y_29)*(int16)864) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_29, conv_s1_y_29)*(int16)896) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_29, conv_s1_y_29)*(int16)928) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_29, conv_s1_y_29)*(int16)960) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_29, conv_s1_y_29)*(int16)1024) + (hw_input_global_wrapper.stencil(30, conv_s1_x_29, conv_s1_y_29)*(int16)992)))))))))))))))))))))))))))))))))
  auto hcompute_conv_stencil_30 = conv_s1_x_29->add_op("op_hcompute_conv_stencil_30");
  hcompute_conv_stencil_30->add_function("hcompute_conv_stencil_30");
  hcompute_conv_stencil_30->add_load("conv_stencil", "29", "conv_s1_y_29", "conv_s1_x_29");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "0");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "1");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "2");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "3");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "4");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "5");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "6");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "7");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "8");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "9");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "10");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "11");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "12");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "13");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "14");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "15");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "16");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "17");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "18");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "19");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "20");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "21");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "22");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "23");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "24");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "25");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "26");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "27");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "28");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "29");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "31");
  hcompute_conv_stencil_30->add_load("hw_input_global_wrapper_stencil", "conv_s1_y_29", "conv_s1_x_29", "30");
  hcompute_conv_stencil_30->add_store("conv_stencil", "29", "conv_s1_y_29", "conv_s1_x_29");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 8);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 8);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("conv_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 8);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("conv_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  auto hw_output_s0_y_yi_3 = prg.add_loop("hw_output_s0_y_yi_3", 0, 8);
  auto hw_output_s0_x_xi_3 = hw_output_s0_y_yi_3->add_loop("hw_output_s0_x_xi_3", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3) = conv.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_x_xi_3->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("conv_stencil", "3", "hw_output_s0_y_yi_3", "hw_output_s0_x_xi_3");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "3", "hw_output_s0_y_yi_3", "hw_output_s0_x_xi_3");
  auto hw_output_s0_y_yi_4 = prg.add_loop("hw_output_s0_y_yi_4", 0, 8);
  auto hw_output_s0_x_xi_4 = hw_output_s0_y_yi_4->add_loop("hw_output_s0_x_xi_4", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4) = conv.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_x_xi_4->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("conv_stencil", "4", "hw_output_s0_y_yi_4", "hw_output_s0_x_xi_4");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "4", "hw_output_s0_y_yi_4", "hw_output_s0_x_xi_4");
  auto hw_output_s0_y_yi_5 = prg.add_loop("hw_output_s0_y_yi_5", 0, 8);
  auto hw_output_s0_x_xi_5 = hw_output_s0_y_yi_5->add_loop("hw_output_s0_x_xi_5", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5) = conv.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_x_xi_5->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("conv_stencil", "5", "hw_output_s0_y_yi_5", "hw_output_s0_x_xi_5");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "5", "hw_output_s0_y_yi_5", "hw_output_s0_x_xi_5");
  auto hw_output_s0_y_yi_6 = prg.add_loop("hw_output_s0_y_yi_6", 0, 8);
  auto hw_output_s0_x_xi_6 = hw_output_s0_y_yi_6->add_loop("hw_output_s0_x_xi_6", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6) = conv.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_x_xi_6->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("conv_stencil", "6", "hw_output_s0_y_yi_6", "hw_output_s0_x_xi_6");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "6", "hw_output_s0_y_yi_6", "hw_output_s0_x_xi_6");
  auto hw_output_s0_y_yi_7 = prg.add_loop("hw_output_s0_y_yi_7", 0, 8);
  auto hw_output_s0_x_xi_7 = hw_output_s0_y_yi_7->add_loop("hw_output_s0_x_xi_7", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7) = conv.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_x_xi_7->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("conv_stencil", "7", "hw_output_s0_y_yi_7", "hw_output_s0_x_xi_7");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "7", "hw_output_s0_y_yi_7", "hw_output_s0_x_xi_7");
  auto hw_output_s0_y_yi_8 = prg.add_loop("hw_output_s0_y_yi_8", 0, 8);
  auto hw_output_s0_x_xi_8 = hw_output_s0_y_yi_8->add_loop("hw_output_s0_x_xi_8", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_8, hw_output_s0_y_yi_8, 8) = conv.stencil(hw_output_s0_x_xi_8, hw_output_s0_y_yi_8, 8)
  auto hcompute_hw_output_stencil_8 = hw_output_s0_x_xi_8->add_op("op_hcompute_hw_output_stencil_8");
  hcompute_hw_output_stencil_8->add_function("hcompute_hw_output_stencil_8");
  hcompute_hw_output_stencil_8->add_load("conv_stencil", "8", "hw_output_s0_y_yi_8", "hw_output_s0_x_xi_8");
  hcompute_hw_output_stencil_8->add_store("hw_output_stencil", "8", "hw_output_s0_y_yi_8", "hw_output_s0_x_xi_8");
  auto hw_output_s0_y_yi_9 = prg.add_loop("hw_output_s0_y_yi_9", 0, 8);
  auto hw_output_s0_x_xi_9 = hw_output_s0_y_yi_9->add_loop("hw_output_s0_x_xi_9", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_9, hw_output_s0_y_yi_9, 9) = conv.stencil(hw_output_s0_x_xi_9, hw_output_s0_y_yi_9, 9)
  auto hcompute_hw_output_stencil_9 = hw_output_s0_x_xi_9->add_op("op_hcompute_hw_output_stencil_9");
  hcompute_hw_output_stencil_9->add_function("hcompute_hw_output_stencil_9");
  hcompute_hw_output_stencil_9->add_load("conv_stencil", "9", "hw_output_s0_y_yi_9", "hw_output_s0_x_xi_9");
  hcompute_hw_output_stencil_9->add_store("hw_output_stencil", "9", "hw_output_s0_y_yi_9", "hw_output_s0_x_xi_9");
  auto hw_output_s0_y_yi_10 = prg.add_loop("hw_output_s0_y_yi_10", 0, 8);
  auto hw_output_s0_x_xi_10 = hw_output_s0_y_yi_10->add_loop("hw_output_s0_x_xi_10", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_10, hw_output_s0_y_yi_10, 10) = conv.stencil(hw_output_s0_x_xi_10, hw_output_s0_y_yi_10, 10)
  auto hcompute_hw_output_stencil_10 = hw_output_s0_x_xi_10->add_op("op_hcompute_hw_output_stencil_10");
  hcompute_hw_output_stencil_10->add_function("hcompute_hw_output_stencil_10");
  hcompute_hw_output_stencil_10->add_load("conv_stencil", "10", "hw_output_s0_y_yi_10", "hw_output_s0_x_xi_10");
  hcompute_hw_output_stencil_10->add_store("hw_output_stencil", "10", "hw_output_s0_y_yi_10", "hw_output_s0_x_xi_10");
  auto hw_output_s0_y_yi_11 = prg.add_loop("hw_output_s0_y_yi_11", 0, 8);
  auto hw_output_s0_x_xi_11 = hw_output_s0_y_yi_11->add_loop("hw_output_s0_x_xi_11", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_11, hw_output_s0_y_yi_11, 11) = conv.stencil(hw_output_s0_x_xi_11, hw_output_s0_y_yi_11, 11)
  auto hcompute_hw_output_stencil_11 = hw_output_s0_x_xi_11->add_op("op_hcompute_hw_output_stencil_11");
  hcompute_hw_output_stencil_11->add_function("hcompute_hw_output_stencil_11");
  hcompute_hw_output_stencil_11->add_load("conv_stencil", "11", "hw_output_s0_y_yi_11", "hw_output_s0_x_xi_11");
  hcompute_hw_output_stencil_11->add_store("hw_output_stencil", "11", "hw_output_s0_y_yi_11", "hw_output_s0_x_xi_11");
  auto hw_output_s0_y_yi_12 = prg.add_loop("hw_output_s0_y_yi_12", 0, 8);
  auto hw_output_s0_x_xi_12 = hw_output_s0_y_yi_12->add_loop("hw_output_s0_x_xi_12", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_12, hw_output_s0_y_yi_12, 12) = conv.stencil(hw_output_s0_x_xi_12, hw_output_s0_y_yi_12, 12)
  auto hcompute_hw_output_stencil_12 = hw_output_s0_x_xi_12->add_op("op_hcompute_hw_output_stencil_12");
  hcompute_hw_output_stencil_12->add_function("hcompute_hw_output_stencil_12");
  hcompute_hw_output_stencil_12->add_load("conv_stencil", "12", "hw_output_s0_y_yi_12", "hw_output_s0_x_xi_12");
  hcompute_hw_output_stencil_12->add_store("hw_output_stencil", "12", "hw_output_s0_y_yi_12", "hw_output_s0_x_xi_12");
  auto hw_output_s0_y_yi_13 = prg.add_loop("hw_output_s0_y_yi_13", 0, 8);
  auto hw_output_s0_x_xi_13 = hw_output_s0_y_yi_13->add_loop("hw_output_s0_x_xi_13", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_13, hw_output_s0_y_yi_13, 13) = conv.stencil(hw_output_s0_x_xi_13, hw_output_s0_y_yi_13, 13)
  auto hcompute_hw_output_stencil_13 = hw_output_s0_x_xi_13->add_op("op_hcompute_hw_output_stencil_13");
  hcompute_hw_output_stencil_13->add_function("hcompute_hw_output_stencil_13");
  hcompute_hw_output_stencil_13->add_load("conv_stencil", "13", "hw_output_s0_y_yi_13", "hw_output_s0_x_xi_13");
  hcompute_hw_output_stencil_13->add_store("hw_output_stencil", "13", "hw_output_s0_y_yi_13", "hw_output_s0_x_xi_13");
  auto hw_output_s0_y_yi_14 = prg.add_loop("hw_output_s0_y_yi_14", 0, 8);
  auto hw_output_s0_x_xi_14 = hw_output_s0_y_yi_14->add_loop("hw_output_s0_x_xi_14", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_14, hw_output_s0_y_yi_14, 14) = conv.stencil(hw_output_s0_x_xi_14, hw_output_s0_y_yi_14, 14)
  auto hcompute_hw_output_stencil_14 = hw_output_s0_x_xi_14->add_op("op_hcompute_hw_output_stencil_14");
  hcompute_hw_output_stencil_14->add_function("hcompute_hw_output_stencil_14");
  hcompute_hw_output_stencil_14->add_load("conv_stencil", "14", "hw_output_s0_y_yi_14", "hw_output_s0_x_xi_14");
  hcompute_hw_output_stencil_14->add_store("hw_output_stencil", "14", "hw_output_s0_y_yi_14", "hw_output_s0_x_xi_14");
  auto hw_output_s0_y_yi_15 = prg.add_loop("hw_output_s0_y_yi_15", 0, 8);
  auto hw_output_s0_x_xi_15 = hw_output_s0_y_yi_15->add_loop("hw_output_s0_x_xi_15", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_15, hw_output_s0_y_yi_15, 15) = conv.stencil(hw_output_s0_x_xi_15, hw_output_s0_y_yi_15, 15)
  auto hcompute_hw_output_stencil_15 = hw_output_s0_x_xi_15->add_op("op_hcompute_hw_output_stencil_15");
  hcompute_hw_output_stencil_15->add_function("hcompute_hw_output_stencil_15");
  hcompute_hw_output_stencil_15->add_load("conv_stencil", "15", "hw_output_s0_y_yi_15", "hw_output_s0_x_xi_15");
  hcompute_hw_output_stencil_15->add_store("hw_output_stencil", "15", "hw_output_s0_y_yi_15", "hw_output_s0_x_xi_15");
  auto hw_output_s0_y_yi_16 = prg.add_loop("hw_output_s0_y_yi_16", 0, 8);
  auto hw_output_s0_x_xi_16 = hw_output_s0_y_yi_16->add_loop("hw_output_s0_x_xi_16", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_16, hw_output_s0_y_yi_16, 16) = conv.stencil(hw_output_s0_x_xi_16, hw_output_s0_y_yi_16, 16)
  auto hcompute_hw_output_stencil_16 = hw_output_s0_x_xi_16->add_op("op_hcompute_hw_output_stencil_16");
  hcompute_hw_output_stencil_16->add_function("hcompute_hw_output_stencil_16");
  hcompute_hw_output_stencil_16->add_load("conv_stencil", "16", "hw_output_s0_y_yi_16", "hw_output_s0_x_xi_16");
  hcompute_hw_output_stencil_16->add_store("hw_output_stencil", "16", "hw_output_s0_y_yi_16", "hw_output_s0_x_xi_16");
  auto hw_output_s0_y_yi_17 = prg.add_loop("hw_output_s0_y_yi_17", 0, 8);
  auto hw_output_s0_x_xi_17 = hw_output_s0_y_yi_17->add_loop("hw_output_s0_x_xi_17", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_17, hw_output_s0_y_yi_17, 17) = conv.stencil(hw_output_s0_x_xi_17, hw_output_s0_y_yi_17, 17)
  auto hcompute_hw_output_stencil_17 = hw_output_s0_x_xi_17->add_op("op_hcompute_hw_output_stencil_17");
  hcompute_hw_output_stencil_17->add_function("hcompute_hw_output_stencil_17");
  hcompute_hw_output_stencil_17->add_load("conv_stencil", "17", "hw_output_s0_y_yi_17", "hw_output_s0_x_xi_17");
  hcompute_hw_output_stencil_17->add_store("hw_output_stencil", "17", "hw_output_s0_y_yi_17", "hw_output_s0_x_xi_17");
  auto hw_output_s0_y_yi_18 = prg.add_loop("hw_output_s0_y_yi_18", 0, 8);
  auto hw_output_s0_x_xi_18 = hw_output_s0_y_yi_18->add_loop("hw_output_s0_x_xi_18", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_18, hw_output_s0_y_yi_18, 18) = conv.stencil(hw_output_s0_x_xi_18, hw_output_s0_y_yi_18, 18)
  auto hcompute_hw_output_stencil_18 = hw_output_s0_x_xi_18->add_op("op_hcompute_hw_output_stencil_18");
  hcompute_hw_output_stencil_18->add_function("hcompute_hw_output_stencil_18");
  hcompute_hw_output_stencil_18->add_load("conv_stencil", "18", "hw_output_s0_y_yi_18", "hw_output_s0_x_xi_18");
  hcompute_hw_output_stencil_18->add_store("hw_output_stencil", "18", "hw_output_s0_y_yi_18", "hw_output_s0_x_xi_18");
  auto hw_output_s0_y_yi_19 = prg.add_loop("hw_output_s0_y_yi_19", 0, 8);
  auto hw_output_s0_x_xi_19 = hw_output_s0_y_yi_19->add_loop("hw_output_s0_x_xi_19", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_19, hw_output_s0_y_yi_19, 19) = conv.stencil(hw_output_s0_x_xi_19, hw_output_s0_y_yi_19, 19)
  auto hcompute_hw_output_stencil_19 = hw_output_s0_x_xi_19->add_op("op_hcompute_hw_output_stencil_19");
  hcompute_hw_output_stencil_19->add_function("hcompute_hw_output_stencil_19");
  hcompute_hw_output_stencil_19->add_load("conv_stencil", "19", "hw_output_s0_y_yi_19", "hw_output_s0_x_xi_19");
  hcompute_hw_output_stencil_19->add_store("hw_output_stencil", "19", "hw_output_s0_y_yi_19", "hw_output_s0_x_xi_19");
  auto hw_output_s0_y_yi_20 = prg.add_loop("hw_output_s0_y_yi_20", 0, 8);
  auto hw_output_s0_x_xi_20 = hw_output_s0_y_yi_20->add_loop("hw_output_s0_x_xi_20", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_20, hw_output_s0_y_yi_20, 20) = conv.stencil(hw_output_s0_x_xi_20, hw_output_s0_y_yi_20, 20)
  auto hcompute_hw_output_stencil_20 = hw_output_s0_x_xi_20->add_op("op_hcompute_hw_output_stencil_20");
  hcompute_hw_output_stencil_20->add_function("hcompute_hw_output_stencil_20");
  hcompute_hw_output_stencil_20->add_load("conv_stencil", "20", "hw_output_s0_y_yi_20", "hw_output_s0_x_xi_20");
  hcompute_hw_output_stencil_20->add_store("hw_output_stencil", "20", "hw_output_s0_y_yi_20", "hw_output_s0_x_xi_20");
  auto hw_output_s0_y_yi_21 = prg.add_loop("hw_output_s0_y_yi_21", 0, 8);
  auto hw_output_s0_x_xi_21 = hw_output_s0_y_yi_21->add_loop("hw_output_s0_x_xi_21", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_21, hw_output_s0_y_yi_21, 21) = conv.stencil(hw_output_s0_x_xi_21, hw_output_s0_y_yi_21, 21)
  auto hcompute_hw_output_stencil_21 = hw_output_s0_x_xi_21->add_op("op_hcompute_hw_output_stencil_21");
  hcompute_hw_output_stencil_21->add_function("hcompute_hw_output_stencil_21");
  hcompute_hw_output_stencil_21->add_load("conv_stencil", "21", "hw_output_s0_y_yi_21", "hw_output_s0_x_xi_21");
  hcompute_hw_output_stencil_21->add_store("hw_output_stencil", "21", "hw_output_s0_y_yi_21", "hw_output_s0_x_xi_21");
  auto hw_output_s0_y_yi_22 = prg.add_loop("hw_output_s0_y_yi_22", 0, 8);
  auto hw_output_s0_x_xi_22 = hw_output_s0_y_yi_22->add_loop("hw_output_s0_x_xi_22", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_22, hw_output_s0_y_yi_22, 22) = conv.stencil(hw_output_s0_x_xi_22, hw_output_s0_y_yi_22, 22)
  auto hcompute_hw_output_stencil_22 = hw_output_s0_x_xi_22->add_op("op_hcompute_hw_output_stencil_22");
  hcompute_hw_output_stencil_22->add_function("hcompute_hw_output_stencil_22");
  hcompute_hw_output_stencil_22->add_load("conv_stencil", "22", "hw_output_s0_y_yi_22", "hw_output_s0_x_xi_22");
  hcompute_hw_output_stencil_22->add_store("hw_output_stencil", "22", "hw_output_s0_y_yi_22", "hw_output_s0_x_xi_22");
  auto hw_output_s0_y_yi_23 = prg.add_loop("hw_output_s0_y_yi_23", 0, 8);
  auto hw_output_s0_x_xi_23 = hw_output_s0_y_yi_23->add_loop("hw_output_s0_x_xi_23", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_23, hw_output_s0_y_yi_23, 23) = conv.stencil(hw_output_s0_x_xi_23, hw_output_s0_y_yi_23, 23)
  auto hcompute_hw_output_stencil_23 = hw_output_s0_x_xi_23->add_op("op_hcompute_hw_output_stencil_23");
  hcompute_hw_output_stencil_23->add_function("hcompute_hw_output_stencil_23");
  hcompute_hw_output_stencil_23->add_load("conv_stencil", "23", "hw_output_s0_y_yi_23", "hw_output_s0_x_xi_23");
  hcompute_hw_output_stencil_23->add_store("hw_output_stencil", "23", "hw_output_s0_y_yi_23", "hw_output_s0_x_xi_23");
  auto hw_output_s0_y_yi_24 = prg.add_loop("hw_output_s0_y_yi_24", 0, 8);
  auto hw_output_s0_x_xi_24 = hw_output_s0_y_yi_24->add_loop("hw_output_s0_x_xi_24", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_24, hw_output_s0_y_yi_24, 24) = conv.stencil(hw_output_s0_x_xi_24, hw_output_s0_y_yi_24, 24)
  auto hcompute_hw_output_stencil_24 = hw_output_s0_x_xi_24->add_op("op_hcompute_hw_output_stencil_24");
  hcompute_hw_output_stencil_24->add_function("hcompute_hw_output_stencil_24");
  hcompute_hw_output_stencil_24->add_load("conv_stencil", "24", "hw_output_s0_y_yi_24", "hw_output_s0_x_xi_24");
  hcompute_hw_output_stencil_24->add_store("hw_output_stencil", "24", "hw_output_s0_y_yi_24", "hw_output_s0_x_xi_24");
  auto hw_output_s0_y_yi_25 = prg.add_loop("hw_output_s0_y_yi_25", 0, 8);
  auto hw_output_s0_x_xi_25 = hw_output_s0_y_yi_25->add_loop("hw_output_s0_x_xi_25", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_25, hw_output_s0_y_yi_25, 25) = conv.stencil(hw_output_s0_x_xi_25, hw_output_s0_y_yi_25, 25)
  auto hcompute_hw_output_stencil_25 = hw_output_s0_x_xi_25->add_op("op_hcompute_hw_output_stencil_25");
  hcompute_hw_output_stencil_25->add_function("hcompute_hw_output_stencil_25");
  hcompute_hw_output_stencil_25->add_load("conv_stencil", "25", "hw_output_s0_y_yi_25", "hw_output_s0_x_xi_25");
  hcompute_hw_output_stencil_25->add_store("hw_output_stencil", "25", "hw_output_s0_y_yi_25", "hw_output_s0_x_xi_25");
  auto hw_output_s0_y_yi_26 = prg.add_loop("hw_output_s0_y_yi_26", 0, 8);
  auto hw_output_s0_x_xi_26 = hw_output_s0_y_yi_26->add_loop("hw_output_s0_x_xi_26", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_26, hw_output_s0_y_yi_26, 26) = conv.stencil(hw_output_s0_x_xi_26, hw_output_s0_y_yi_26, 26)
  auto hcompute_hw_output_stencil_26 = hw_output_s0_x_xi_26->add_op("op_hcompute_hw_output_stencil_26");
  hcompute_hw_output_stencil_26->add_function("hcompute_hw_output_stencil_26");
  hcompute_hw_output_stencil_26->add_load("conv_stencil", "26", "hw_output_s0_y_yi_26", "hw_output_s0_x_xi_26");
  hcompute_hw_output_stencil_26->add_store("hw_output_stencil", "26", "hw_output_s0_y_yi_26", "hw_output_s0_x_xi_26");
  auto hw_output_s0_y_yi_27 = prg.add_loop("hw_output_s0_y_yi_27", 0, 8);
  auto hw_output_s0_x_xi_27 = hw_output_s0_y_yi_27->add_loop("hw_output_s0_x_xi_27", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_27, hw_output_s0_y_yi_27, 27) = conv.stencil(hw_output_s0_x_xi_27, hw_output_s0_y_yi_27, 27)
  auto hcompute_hw_output_stencil_27 = hw_output_s0_x_xi_27->add_op("op_hcompute_hw_output_stencil_27");
  hcompute_hw_output_stencil_27->add_function("hcompute_hw_output_stencil_27");
  hcompute_hw_output_stencil_27->add_load("conv_stencil", "27", "hw_output_s0_y_yi_27", "hw_output_s0_x_xi_27");
  hcompute_hw_output_stencil_27->add_store("hw_output_stencil", "27", "hw_output_s0_y_yi_27", "hw_output_s0_x_xi_27");
  auto hw_output_s0_y_yi_28 = prg.add_loop("hw_output_s0_y_yi_28", 0, 8);
  auto hw_output_s0_x_xi_28 = hw_output_s0_y_yi_28->add_loop("hw_output_s0_x_xi_28", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_28, hw_output_s0_y_yi_28, 28) = conv.stencil(hw_output_s0_x_xi_28, hw_output_s0_y_yi_28, 28)
  auto hcompute_hw_output_stencil_28 = hw_output_s0_x_xi_28->add_op("op_hcompute_hw_output_stencil_28");
  hcompute_hw_output_stencil_28->add_function("hcompute_hw_output_stencil_28");
  hcompute_hw_output_stencil_28->add_load("conv_stencil", "28", "hw_output_s0_y_yi_28", "hw_output_s0_x_xi_28");
  hcompute_hw_output_stencil_28->add_store("hw_output_stencil", "28", "hw_output_s0_y_yi_28", "hw_output_s0_x_xi_28");
  auto hw_output_s0_y_yi_29 = prg.add_loop("hw_output_s0_y_yi_29", 0, 8);
  auto hw_output_s0_x_xi_29 = hw_output_s0_y_yi_29->add_loop("hw_output_s0_x_xi_29", 0, 8);

//store is: hw_output.stencil(hw_output_s0_x_xi_29, hw_output_s0_y_yi_29, 29) = conv.stencil(hw_output_s0_x_xi_29, hw_output_s0_y_yi_29, 29)
  auto hcompute_hw_output_stencil_29 = hw_output_s0_x_xi_29->add_op("op_hcompute_hw_output_stencil_29");
  hcompute_hw_output_stencil_29->add_function("hcompute_hw_output_stencil_29");
  hcompute_hw_output_stencil_29->add_load("conv_stencil", "29", "hw_output_s0_y_yi_29", "hw_output_s0_x_xi_29");
  hcompute_hw_output_stencil_29->add_store("hw_output_stencil", "29", "hw_output_s0_y_yi_29", "hw_output_s0_x_xi_29");

  return prg;
}

#include "example_progs.h"


prog up_sample() {
  prog prg;
  prg.compute_unit_file = "up_sample_compute.h";
  prg.name = "up_sample";

// Stencil<uint16_t, 64, 64, 1> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 128, 128, 1> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, 0) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, 0)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_y", "hw_input_s0_x");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing nearest_neighbor.stencil
  auto nearest_neighbor_s0_y = prg.add_loop("nearest_neighbor_s0_y", 0, 128);
  auto nearest_neighbor_s0_x = nearest_neighbor_s0_y->add_loop("nearest_neighbor_s0_x", 0, 128);

//store is: nearest_neighbor.stencil(nearest_neighbor_s0_x, nearest_neighbor_s0_y, 0) = hw_input.stencil((nearest_neighbor_s0_x/2), (nearest_neighbor_s0_y/2), 0)
  auto hcompute_nearest_neighbor_stencil = nearest_neighbor_s0_x->add_op("op_hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_function("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_load("hw_input_stencil", "floor((nearest_neighbor_s0_y/2))", "floor((nearest_neighbor_s0_x/2))");
  prg.buffer_port_widths["nearest_neighbor_stencil"] = 16;
  hcompute_nearest_neighbor_stencil->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "nearest_neighbor_s0_x" );

//consuming nearest_neighbor.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 128);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 128);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = uint8(nearest_neighbor.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog up_sample_glb() {
  prog prg;
  prg.compute_unit_file = "up_sample_glb_compute.h";
  prg.name = "up_sample_glb";
// Stencil<uint16_t, 3, 1536, 2560> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 3072, 5120> &hw_output_global_wrapper_stencil = arg_4;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 128);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 128);
  auto hw_input_global_wrapper_global_wrapper_s0_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "hw_input_global_wrapper_global_wrapper_s0_x", "2");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing nearest_neighbor.stencil
  auto nearest_neighbor_s0_y = prg.add_loop("nearest_neighbor_s0_y", 0, 256);
  auto nearest_neighbor_s0_x_x = nearest_neighbor_s0_y->add_loop("nearest_neighbor_s0_x_x", 0, 64);

//store is: nearest_neighbor.stencil(0, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(0, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_function("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "0");
  prg.buffer_port_widths["nearest_neighbor_stencil"] = 16;
  hcompute_nearest_neighbor_stencil->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "(nearest_neighbor_s0_x_x*2)", "0");

//store is: nearest_neighbor.stencil(1, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(1, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_1 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_1");
  hcompute_nearest_neighbor_stencil_1->add_function("hcompute_nearest_neighbor_stencil_1");
  hcompute_nearest_neighbor_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "1");
  hcompute_nearest_neighbor_stencil_1->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "(nearest_neighbor_s0_x_x*2)", "1");

//store is: nearest_neighbor.stencil(2, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(2, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_2 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_2");
  hcompute_nearest_neighbor_stencil_2->add_function("hcompute_nearest_neighbor_stencil_2");
  hcompute_nearest_neighbor_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "2");
  hcompute_nearest_neighbor_stencil_2->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "(nearest_neighbor_s0_x_x*2)", "2");

//store is: nearest_neighbor.stencil(0, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(0, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_3 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_3");
  hcompute_nearest_neighbor_stencil_3->add_function("hcompute_nearest_neighbor_stencil_3");
  hcompute_nearest_neighbor_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "0");
  hcompute_nearest_neighbor_stencil_3->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "((nearest_neighbor_s0_x_x*2) + 1)", "0");

//store is: nearest_neighbor.stencil(1, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(1, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_4 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_4");
  hcompute_nearest_neighbor_stencil_4->add_function("hcompute_nearest_neighbor_stencil_4");
  hcompute_nearest_neighbor_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "1");
  hcompute_nearest_neighbor_stencil_4->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "((nearest_neighbor_s0_x_x*2) + 1)", "1");

//store is: nearest_neighbor.stencil(2, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(2, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_5 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_5");
  hcompute_nearest_neighbor_stencil_5->add_function("hcompute_nearest_neighbor_stencil_5");
  hcompute_nearest_neighbor_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "2");
  hcompute_nearest_neighbor_stencil_5->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "((nearest_neighbor_s0_x_x*2) + 1)", "2");

//consuming nearest_neighbor.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 256);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 64);

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "0");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "0");

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "1");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "1");

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_function("hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "2");
  hcompute_hw_output_glb_stencil_2->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "2");

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_function("hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "0");
  hcompute_hw_output_glb_stencil_3->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_4 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_function("hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "1");
  hcompute_hw_output_glb_stencil_4->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_5 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_function("hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "2");
  hcompute_hw_output_glb_stencil_5->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "2");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 256);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 64);

//store is: hw_output_global_wrapper.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");

//store is: hw_output_global_wrapper.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");

//store is: hw_output_global_wrapper.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_function("hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");
  hcompute_hw_output_global_wrapper_stencil_2->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_function("hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");
  hcompute_hw_output_global_wrapper_stencil_3->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_4 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_function("hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");
  hcompute_hw_output_global_wrapper_stencil_4->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_5 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_function("hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");
  hcompute_hw_output_global_wrapper_stencil_5->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");

  return prg;

}
/*
prog up_sample_glb() {
  prog prg;
  prg.compute_unit_file = "up_sample_glb_compute.h";
  prg.name = "up_sample_glb";

// Stencil<uint16_t, 3, 1536, 2560> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 3072, 5120> &hw_output_global_wrapper_stencil = arg_4;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 128);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 32);

//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 128);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 32);
  auto hw_input_global_wrapper_global_wrapper_s0_z = hw_input_global_wrapper_global_wrapper_s0_x_x->add_loop("hw_input_global_wrapper_global_wrapper_s0_z", 0, 3);

//store is: hw_input_global_wrapper_global_wrapper.stencil(hw_input_global_wrapper_global_wrapper_s0_z, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(hw_input_global_wrapper_global_wrapper_s0_z, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_z->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "hw_input_global_wrapper_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "hw_input_global_wrapper_global_wrapper_s0_z");
  auto hw_input_global_wrapper_global_wrapper_s0_z_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_loop("hw_input_global_wrapper_global_wrapper_s0_z_1", 0, 3);

//store is: hw_input_global_wrapper_global_wrapper.stencil(hw_input_global_wrapper_global_wrapper_s0_z_1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(hw_input_global_wrapper_global_wrapper_s0_z_1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_z_1->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "hw_input_global_wrapper_global_wrapper_s0_z_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "hw_input_global_wrapper_global_wrapper_s0_z_1");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing nearest_neighbor.stencil
  auto nearest_neighbor_s0_y = prg.add_loop("nearest_neighbor_s0_y", 0, 256);
  auto nearest_neighbor_s0_x_x = nearest_neighbor_s0_y->add_loop("nearest_neighbor_s0_x_x", 0, 64);

//store is: nearest_neighbor.stencil(0, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(0, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_function("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "0");
  prg.buffer_port_widths["nearest_neighbor_stencil"] = 16;
  hcompute_nearest_neighbor_stencil->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "(nearest_neighbor_s0_x_x*2)", "0");

//store is: nearest_neighbor.stencil(1, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(1, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_1 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_1");
  hcompute_nearest_neighbor_stencil_1->add_function("hcompute_nearest_neighbor_stencil_1");
  hcompute_nearest_neighbor_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "1");
  hcompute_nearest_neighbor_stencil_1->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "(nearest_neighbor_s0_x_x*2)", "1");

//store is: nearest_neighbor.stencil(2, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(2, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_2 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_2");
  hcompute_nearest_neighbor_stencil_2->add_function("hcompute_nearest_neighbor_stencil_2");
  hcompute_nearest_neighbor_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "2");
  hcompute_nearest_neighbor_stencil_2->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "(nearest_neighbor_s0_x_x*2)", "2");

//store is: nearest_neighbor.stencil(0, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(0, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_3 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_3");
  hcompute_nearest_neighbor_stencil_3->add_function("hcompute_nearest_neighbor_stencil_3");
  hcompute_nearest_neighbor_stencil_3->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "0");
  hcompute_nearest_neighbor_stencil_3->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "((nearest_neighbor_s0_x_x*2) + 1)", "0");

//store is: nearest_neighbor.stencil(1, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(1, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_4 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_4");
  hcompute_nearest_neighbor_stencil_4->add_function("hcompute_nearest_neighbor_stencil_4");
  hcompute_nearest_neighbor_stencil_4->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "1");
  hcompute_nearest_neighbor_stencil_4->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "((nearest_neighbor_s0_x_x*2) + 1)", "1");

//store is: nearest_neighbor.stencil(2, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(2, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
  auto hcompute_nearest_neighbor_stencil_5 = nearest_neighbor_s0_x_x->add_op("op_hcompute_nearest_neighbor_stencil_5");
  hcompute_nearest_neighbor_stencil_5->add_function("hcompute_nearest_neighbor_stencil_5");
  hcompute_nearest_neighbor_stencil_5->add_load("hw_input_global_wrapper_global_wrapper_stencil", "floor((nearest_neighbor_s0_y/2))", "nearest_neighbor_s0_x_x", "2");
  hcompute_nearest_neighbor_stencil_5->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "((nearest_neighbor_s0_x_x*2) + 1)", "2");

//consuming nearest_neighbor.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 256);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 64);

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "0");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "0");

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "1");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "1");

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_function("hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "2");
  hcompute_hw_output_glb_stencil_2->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)", "2");

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_3 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_function("hcompute_hw_output_glb_stencil_3");
  hcompute_hw_output_glb_stencil_3->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "0");
  hcompute_hw_output_glb_stencil_3->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_4 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_function("hcompute_hw_output_glb_stencil_4");
  hcompute_hw_output_glb_stencil_4->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "1");
  hcompute_hw_output_glb_stencil_4->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_glb_stencil_5 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_function("hcompute_hw_output_glb_stencil_5");
  hcompute_hw_output_glb_stencil_5->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "2");
  hcompute_hw_output_glb_stencil_5->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)", "2");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 256);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 64);

//store is: hw_output_global_wrapper.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "0");

//store is: hw_output_global_wrapper.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "1");

//store is: hw_output_global_wrapper.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_function("hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");
  hcompute_hw_output_global_wrapper_stencil_2->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)", "2");

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_3 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_function("hcompute_hw_output_global_wrapper_stencil_3");
  hcompute_hw_output_global_wrapper_stencil_3->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");
  hcompute_hw_output_global_wrapper_stencil_3->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "0");

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_4 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_function("hcompute_hw_output_global_wrapper_stencil_4");
  hcompute_hw_output_global_wrapper_stencil_4->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");
  hcompute_hw_output_global_wrapper_stencil_4->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "1");

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_5 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_function("hcompute_hw_output_global_wrapper_stencil_5");
  hcompute_hw_output_global_wrapper_stencil_5->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");
  hcompute_hw_output_global_wrapper_stencil_5->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)", "2");

  return prg;
}*/

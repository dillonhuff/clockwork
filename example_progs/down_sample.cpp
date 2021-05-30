#include "example_progs.h"

prog down_sample() {
  prog prg;
  prg.compute_unit_file = "down_sample_compute.h";
  prg.name = "down_sample";

// Stencil<uint16_t, 64, 64, 4> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 32, 32, 4> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_z = prg.add_loop("hw_input_s0_z", 0, 4);
  auto hw_input_s0_y = hw_input_s0_z->add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_z) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_z)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_z", "hw_input_s0_y", "hw_input_s0_x");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_z", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing avg_pool.stencil
  auto avg_pool_s0_z = prg.add_loop("avg_pool_s0_z", 0, 4);
  auto avg_pool_s0_y = avg_pool_s0_z->add_loop("avg_pool_s0_y", 0, 32);
  auto avg_pool_s0_x = avg_pool_s0_y->add_loop("avg_pool_s0_x", 0, 32);

//store is: avg_pool.stencil(avg_pool_s0_x, avg_pool_s0_y, avg_pool_s0_z) = (uint16)0
  auto hcompute_avg_pool_stencil = avg_pool_s0_x->add_op("op_hcompute_avg_pool_stencil");
  hcompute_avg_pool_stencil->add_function("hcompute_avg_pool_stencil");
  prg.buffer_port_widths["avg_pool_stencil"] = 16;
  hcompute_avg_pool_stencil->add_store("avg_pool_stencil", "avg_pool_s0_z", "avg_pool_s0_y", "avg_pool_s0_x");
  auto avg_pool_s1_z = prg.add_loop("avg_pool_s1_z", 0, 4);
  auto avg_pool_s1_y = avg_pool_s1_z->add_loop("avg_pool_s1_y", 0, 32);
  auto avg_pool_s1_x = avg_pool_s1_y->add_loop("avg_pool_s1_x", 0, 32);

//store is: avg_pool.stencil(avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z) = (hw_input.stencil((avg_pool_s1_x*2), (avg_pool_s1_y*2), avg_pool_s1_z) + (avg_pool.stencil(avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z) + (hw_input.stencil(((avg_pool_s1_x*2) + 1), (avg_pool_s1_y*2), avg_pool_s1_z) + (hw_input.stencil(((avg_pool_s1_x*2) + 1), ((avg_pool_s1_y*2) + 1), avg_pool_s1_z) + hw_input.stencil((avg_pool_s1_x*2), ((avg_pool_s1_y*2) + 1), avg_pool_s1_z)))))
  auto hcompute_avg_pool_stencil_1 = avg_pool_s1_x->add_op("op_hcompute_avg_pool_stencil_1");
  hcompute_avg_pool_stencil_1->add_function("hcompute_avg_pool_stencil_1");
  hcompute_avg_pool_stencil_1->add_load("avg_pool_stencil", "avg_pool_s1_z", "avg_pool_s1_y", "avg_pool_s1_x");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "avg_pool_s1_z", "(avg_pool_s1_y*2)", "(avg_pool_s1_x*2)");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "avg_pool_s1_z", "(avg_pool_s1_y*2)", "((avg_pool_s1_x*2)+1)");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "avg_pool_s1_z", "((avg_pool_s1_y*2) + 1)", "((avg_pool_s1_x*2) + 1)");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "avg_pool_s1_z", "((avg_pool_s1_y*2) + 1)", "avg_pool_s1_x*2");
  hcompute_avg_pool_stencil_1->add_store("avg_pool_stencil", "avg_pool_s1_z", "avg_pool_s1_y", "avg_pool_s1_x");

//consuming avg_pool.stencil
  auto hw_output_s0_z = prg.add_loop("hw_output_s0_z", 0, 4);
  auto hw_output_s0_y = hw_output_s0_z->add_loop("hw_output_s0_y", 0, 32);
  auto hw_output_s0_x = hw_output_s0_y->add_loop("hw_output_s0_x", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z) = uint8((avg_pool.stencil(hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z)/(uint16)4))
  auto hcompute_hw_output_stencil = hw_output_s0_x->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("avg_pool_stencil", "hw_output_s0_z", "hw_output_s0_y", "hw_output_s0_x");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_z", "hw_output_s0_y", "hw_output_s0_x");

  return prg;
}


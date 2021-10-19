#include "example_progs.h"

prog conv1x1() {
  prog prg;
  prg.compute_unit_file = "conv1x1_compute.h";
  prg.name = "conv1x1";

// Stencil<uint16_t, 8, 16, 16> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 8, 8, 1, 1> &kernel_host_stencil = arg_1;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<uint16_t, 16, 16, 8> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 16);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 16);
  auto input_gb_s0_z = input_gb_s0_x->add_loop("input_gb_s0_z", 0, 8);

//store is: input_gb.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_z->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_z");
  prg.buffer_port_widths["input_gb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_gb_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_z");

//consuming input_gb.stencil
////producing kernel_gb.stencil
  auto kernel_gb_s0_w = prg.add_loop("kernel_gb_s0_w", 0, 8);
  auto kernel_gb_s0_z = kernel_gb_s0_w->add_loop("kernel_gb_s0_z", 0, 8);

//store is: kernel_gb.stencil(kernel_gb_s0_z, kernel_gb_s0_w, 0, 0) = kernel_host.stencil(kernel_gb_s0_z, kernel_gb_s0_w, 0, 0)
  auto hcompute_kernel_gb_stencil = kernel_gb_s0_z->add_op("op_hcompute_kernel_gb_stencil");
  hcompute_kernel_gb_stencil->add_function("hcompute_kernel_gb_stencil");
  hcompute_kernel_gb_stencil->add_load("kernel_host_stencil", "0", "0", "kernel_gb_s0_w", "kernel_gb_s0_z");
  prg.buffer_port_widths["kernel_gb_stencil"] = 16;
  hcompute_kernel_gb_stencil->add_store("kernel_gb_stencil", "0", "0", "kernel_gb_s0_w", "kernel_gb_s0_z");

//consuming kernel_gb.stencil
////producing output_gb.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y = prg.add_loop("output_cgra_s0_y", 0, 16);
  auto output_cgra_s0_x_x_cgra = output_cgra_s0_y->add_loop("output_cgra_s0_x_x_cgra", 0, 4);
  auto output_cgra_s0_w_w_cgra = output_cgra_s0_x_x_cgra->add_loop("output_cgra_s0_w_w_cgra", 0, 2);
////producing input_cgra.stencil
  auto input_cgra_s0_x = output_cgra_s0_w_w_cgra->add_loop("input_cgra_s0_x", 0, 4);
  auto input_cgra_s0_zz = input_cgra_s0_x->add_loop("input_cgra_s0_zz", 0, 8);

//store is: input_cgra.stencil(input_cgra_s0_zz, 0, input_cgra_s0_x, 0) = input_gb.stencil(input_cgra_s0_zz, ((output_cgra_s0_x_x_cgra*4) + input_cgra_s0_x), output_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_zz->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_gb_stencil", "output_cgra_s0_y", "((output_cgra_s0_x_x_cgra*4) + input_cgra_s0_x)", "input_cgra_s0_zz");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "0", "input_cgra_s0_x", "0", "input_cgra_s0_zz");

//consuming input_cgra.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_w = output_cgra_s0_w_w_cgra->add_loop("kernel_cgra_s0_w", 0, 4);
  auto kernel_cgra_s0_z = kernel_cgra_s0_w->add_loop("kernel_cgra_s0_z", 0, 8);

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, (kernel_cgra_s0_w + 4), 0, 0) = kernel_gb.stencil(kernel_cgra_s0_z, ((output_cgra_s0_w_w_cgra*4) + kernel_cgra_s0_w), 0, 0)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_z->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_load("kernel_gb_stencil", "0", "0", "((output_cgra_s0_w_w_cgra*4) + kernel_cgra_s0_w)", "kernel_cgra_s0_z");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil", "0", "0", "(kernel_cgra_s0_w + 4)", "kernel_cgra_s0_z");

//consuming kernel_cgra.stencil
////producing output_pond.stencil
  auto output_pond_s0_w = output_cgra_s0_w_w_cgra->add_loop("output_pond_s0_w", 0, 4);
  auto output_pond_s0_x = output_pond_s0_w->add_loop("output_pond_s0_x", 0, 4);

//store is: output_pond.stencil(output_pond_s0_x, 0, output_pond_s0_w) = (uint16)0
  auto hcompute_output_pond_stencil = output_pond_s0_x->add_op("op_hcompute_output_pond_stencil");
  hcompute_output_pond_stencil->add_function("hcompute_output_pond_stencil");
  prg.buffer_port_widths["output_pond_stencil"] = 16;
  hcompute_output_pond_stencil->add_store("output_pond_stencil", "output_pond_s0_w", "0", "output_pond_s0_x");
  auto output_pond_s1_x = output_cgra_s0_w_w_cgra->add_loop("output_pond_s1_x", 0, 4);
////producing input_pond.stencil
  auto input_pond_s0_zz = output_pond_s1_x->add_loop("input_pond_s0_zz", 0, 8);

//store is: input_pond.stencil(input_pond_s0_zz, 0, 0, 0) = input_cgra.stencil(input_pond_s0_zz, 0, output_pond_s1_x, 0)
  auto hcompute_input_pond_stencil = input_pond_s0_zz->add_op("op_hcompute_input_pond_stencil");
  hcompute_input_pond_stencil->add_function("hcompute_input_pond_stencil");
  hcompute_input_pond_stencil->add_load("input_cgra_stencil", "0", "output_pond_s1_x", "0", "input_pond_s0_zz");
  prg.buffer_port_widths["input_pond_stencil"] = 16;
  hcompute_input_pond_stencil->add_store("input_pond_stencil", "0", "0", "0", "input_pond_s0_zz");

//consuming input_pond.stencil
////producing kernel_pond.stencil
  auto kernel_pond_s0_w_w_cgra = output_pond_s1_x->add_loop("kernel_pond_s0_w_w_cgra", 0, 8);
  auto kernel_pond_s0_zz = kernel_pond_s0_w_w_cgra->add_loop("kernel_pond_s0_zz", 0, 8);

//store is: kernel_pond.stencil(kernel_pond_s0_zz, 0, kernel_pond_s0_w_w_cgra, 0, 0) = kernel_cgra.stencil(kernel_pond_s0_zz, kernel_pond_s0_w_w_cgra, 0, 0)
  auto hcompute_kernel_pond_stencil = kernel_pond_s0_zz->add_op("op_hcompute_kernel_pond_stencil");
  hcompute_kernel_pond_stencil->add_function("hcompute_kernel_pond_stencil");
  hcompute_kernel_pond_stencil->add_load("kernel_cgra_stencil", "0", "0", "kernel_pond_s0_w_w_cgra", "kernel_pond_s0_zz");
  prg.buffer_port_widths["kernel_pond_stencil"] = 16;
  hcompute_kernel_pond_stencil->add_store("kernel_pond_stencil", "0", "0", "kernel_pond_s0_w_w_cgra", "0", "kernel_pond_s0_zz");

//consuming kernel_pond.stencil
  auto output_pond_s1_w = output_pond_s1_x->add_loop("output_pond_s1_w", 0, 4);
  auto output_pond_s1_r_w = output_pond_s1_w->add_loop("output_pond_s1_r_w", 0, 8);

//store is: output_pond.stencil(output_pond_s1_x, 0, output_pond_s1_w) = (output_pond.stencil(output_pond_s1_x, 0, output_pond_s1_w) + (kernel_pond.stencil(output_pond_s1_r_w, 0, (output_pond_s1_w + 4), 0, 0)*input_pond.stencil(output_pond_s1_r_w, 0, 0, 0)))
  auto hcompute_output_pond_stencil_1 = output_pond_s1_r_w->add_op("op_hcompute_output_pond_stencil_1");
  hcompute_output_pond_stencil_1->add_function("hcompute_output_pond_stencil_1");
  hcompute_output_pond_stencil_1->add_load("input_pond_stencil", "0", "0", "0", "output_pond_s1_r_w");
  hcompute_output_pond_stencil_1->add_load("kernel_pond_stencil", "0", "0", "(output_pond_s1_w + 4)", "0", "output_pond_s1_r_w");
  hcompute_output_pond_stencil_1->add_load("output_pond_stencil", "output_pond_s1_w", "0", "output_pond_s1_x");
  hcompute_output_pond_stencil_1->add_store("output_pond_stencil", "output_pond_s1_w", "0", "output_pond_s1_x");

//consuming output_pond.stencil
  auto output_cgra_s0_x_x_pond = output_cgra_s0_w_w_cgra->add_loop("output_cgra_s0_x_x_pond", 0, 4);
  auto output_cgra_s0_w_w_pond = output_cgra_s0_x_x_pond->add_loop("output_cgra_s0_w_w_pond", 0, 4);

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*4) + output_cgra_s0_x_x_pond), output_cgra_s0_y, ((output_cgra_s0_w_w_cgra*4) + output_cgra_s0_w_w_pond)) = output_pond.stencil(output_cgra_s0_x_x_pond, 0, output_cgra_s0_w_w_pond)
  auto hcompute_output_cgra_stencil = output_cgra_s0_w_w_pond->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("output_pond_stencil", "output_cgra_s0_w_w_pond", "0", "output_cgra_s0_x_x_pond");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "((output_cgra_s0_w_w_cgra*4) + output_cgra_s0_w_w_pond)", "output_cgra_s0_y", "((output_cgra_s0_x_x_cgra*4) + output_cgra_s0_x_x_pond)");

//consuming output_cgra.stencil
  auto output_gb_s0_y_y_cgra = prg.add_loop("output_gb_s0_y_y_cgra", 0, 16);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 16);
  auto output_gb_s0_w_w_cgra = output_gb_s0_x_x_cgra->add_loop("output_gb_s0_w_w_cgra", 0, 8);

//store is: output_gb.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, output_gb_s0_w_w_cgra) = output_cgra.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, output_gb_s0_w_w_cgra)
  auto hcompute_output_gb_stencil = output_gb_s0_w_w_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("output_cgra_stencil", "output_gb_s0_w_w_cgra", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");
  prg.buffer_port_widths["output_gb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_gb_stencil", "output_gb_s0_w_w_cgra", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");

//consuming output_gb.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 8);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 16);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 16);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


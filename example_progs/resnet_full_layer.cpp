#include "example_progs.h"

prog resnet_full_layer() {
  prog prg;
  prg.compute_unit_file = "resnet_full_layer_compute.h";
  prg.name = "resnet_full_layer";

// Stencil<uint16_t, 64, 30, 30> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 64, 48, 3, 3> &kernel_host_stencil = arg_1;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 48> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 30);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 30);
  auto input_gb_s0_z = input_gb_s0_x->add_loop("input_gb_s0_z", 0, 64);

//store is: input_gb.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_z->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_z");
  prg.buffer_port_widths["input_gb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_gb_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_z");

//consuming input_gb.stencil
////producing kernel_gb.stencil
  auto kernel_gb_s0_y = prg.add_loop("kernel_gb_s0_y", 0, 3);
  auto kernel_gb_s0_x = kernel_gb_s0_y->add_loop("kernel_gb_s0_x", 0, 3);
  auto kernel_gb_s0_w = kernel_gb_s0_x->add_loop("kernel_gb_s0_w", 0, 48);
  auto kernel_gb_s0_z = kernel_gb_s0_w->add_loop("kernel_gb_s0_z", 0, 64);

//store is: kernel_gb.stencil(kernel_gb_s0_z, kernel_gb_s0_w, kernel_gb_s0_x, kernel_gb_s0_y) = kernel_host.stencil(kernel_gb_s0_z, kernel_gb_s0_w, kernel_gb_s0_x, kernel_gb_s0_y)
  auto hcompute_kernel_gb_stencil = kernel_gb_s0_z->add_op("op_hcompute_kernel_gb_stencil");
  hcompute_kernel_gb_stencil->add_function("hcompute_kernel_gb_stencil");
  hcompute_kernel_gb_stencil->add_load("kernel_host_stencil", "kernel_gb_s0_y", "kernel_gb_s0_x", "kernel_gb_s0_w", "kernel_gb_s0_z");
  prg.buffer_port_widths["kernel_gb_stencil"] = 16;
  hcompute_kernel_gb_stencil->add_store("kernel_gb_stencil", "kernel_gb_s0_y", "kernel_gb_s0_x", "kernel_gb_s0_w", "kernel_gb_s0_z");

//consuming kernel_gb.stencil
////producing output_gb.stencil
  auto output_gb_s0_w_w_gb = prg.add_loop("output_gb_s0_w_w_gb", 0, 16);
////producing output_cgra.stencil
  auto output_cgra_s0_y = output_gb_s0_w_w_gb->add_loop("output_cgra_s0_y", 0, 28);
  auto output_cgra_s0_x = output_cgra_s0_y->add_loop("output_cgra_s0_x", 0, 28);
  auto output_cgra_s0_w_w_cgra = output_cgra_s0_x->add_loop("output_cgra_s0_w_w_cgra", 0, 3);

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, (output_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))) = (uint16)0
  auto hcompute_output_cgra_stencil = output_cgra_s0_w_w_cgra->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "(output_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "output_cgra_s0_y", "output_cgra_s0_x");
  auto output_cgra_s1_r_w = output_gb_s0_w_w_gb->add_loop("output_cgra_s1_r_w", 0, 16);
////producing input_cgra.stencil
  auto input_cgra_s0_z_z_gb = output_cgra_s1_r_w->add_loop("input_cgra_s0_z_z_gb", 0, 4);
  auto input_cgra_s0_y = input_cgra_s0_z_z_gb->add_loop("input_cgra_s0_y", 0, 30);
  auto input_cgra_s0_zz = input_cgra_s0_y->add_loop("input_cgra_s0_zz", 0, 4);
  auto input_cgra_s0_x = input_cgra_s0_zz->add_loop("input_cgra_s0_x", 0, 30);
  auto input_cgra_s0_z_z_cgra = input_cgra_s0_x->add_loop("input_cgra_s0_z_z_cgra", 0, 4);

//store is: input_cgra.stencil((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4)), input_cgra_s0_zz, input_cgra_s0_x, input_cgra_s0_y) = input_gb.stencil((((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))*4) + input_cgra_s0_zz), input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_z_z_cgra->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_gb_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "(((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))*4) + input_cgra_s0_zz)");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "input_cgra_s0_zz", "(input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))");

//consuming input_cgra.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_z_z_gb = output_cgra_s1_r_w->add_loop("kernel_cgra_s0_z_z_gb", 0, 4);
  auto kernel_cgra_s0_y = kernel_cgra_s0_z_z_gb->add_loop("kernel_cgra_s0_y", 0, 3);
  auto kernel_cgra_s0_x = kernel_cgra_s0_y->add_loop("kernel_cgra_s0_x", 0, 3);
  auto kernel_cgra_s0_zz = kernel_cgra_s0_x->add_loop("kernel_cgra_s0_zz", 0, 4);
  auto kernel_cgra_s0_w_w_cgra = kernel_cgra_s0_zz->add_loop("kernel_cgra_s0_w_w_cgra", 0, 3);
  auto kernel_cgra_s0_z_z_cgra = kernel_cgra_s0_w_w_cgra->add_loop("kernel_cgra_s0_z_z_cgra", 0, 4);

//store is: kernel_cgra.stencil((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4)), kernel_cgra_s0_zz, (kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)), kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_gb.stencil((((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))*4) + kernel_cgra_s0_zz), (kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)), kernel_cgra_s0_x, kernel_cgra_s0_y)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_z_z_cgra->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_load("kernel_gb_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "(kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "(((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))*4) + kernel_cgra_s0_zz)");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "(kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "kernel_cgra_s0_zz", "(kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))");

//consuming kernel_cgra.stencil
  auto output_cgra_s1_r_y = output_cgra_s1_r_w->add_loop("output_cgra_s1_r_y", 0, 3);
  auto output_cgra_s1_r_x = output_cgra_s1_r_y->add_loop("output_cgra_s1_r_x", 0, 3);
  auto output_cgra_s1_y = output_cgra_s1_r_x->add_loop("output_cgra_s1_y", 0, 28);
  auto output_cgra_s1_x = output_cgra_s1_y->add_loop("output_cgra_s1_x", 0, 28);

//store is: output_cgra.stencil(output_cgra_s1_x, output_cgra_s1_y, (output_gb_s0_w_w_gb*3)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(output_cgra_s1_x, output_cgra_s1_y, (output_gb_s0_w_w_gb*3)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))
  auto hcompute_output_cgra_stencil_1 = output_cgra_s1_x->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("output_cgra_stencil", "(output_gb_s0_w_w_gb*3)", "output_cgra_s1_y", "output_cgra_s1_x");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "(output_gb_s0_w_w_gb*3)", "output_cgra_s1_y", "output_cgra_s1_x");
  auto output_cgra_s1_r_y_1 = output_cgra_s1_r_w->add_loop("output_cgra_s1_r_y_1", 0, 3);
  auto output_cgra_s1_r_x_1 = output_cgra_s1_r_y_1->add_loop("output_cgra_s1_r_x_1", 0, 3);
  auto output_cgra_s1_y_1 = output_cgra_s1_r_x_1->add_loop("output_cgra_s1_y_1", 0, 28);
  auto output_cgra_s1_x_1 = output_cgra_s1_y_1->add_loop("output_cgra_s1_x_1", 0, 28);

//store is: output_cgra.stencil(output_cgra_s1_x_1, output_cgra_s1_y_1, ((output_gb_s0_w_w_gb*3) + 1)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + (output_cgra.stencil(output_cgra_s1_x_1, output_cgra_s1_y_1, ((output_gb_s0_w_w_gb*3) + 1)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1)))))))
  auto hcompute_output_cgra_stencil_2 = output_cgra_s1_x_1->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 1)", "output_cgra_s1_y_1", "output_cgra_s1_x_1");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 1)", "output_cgra_s1_y_1", "output_cgra_s1_x_1");
  auto output_cgra_s1_r_y_2 = output_cgra_s1_r_w->add_loop("output_cgra_s1_r_y_2", 0, 3);
  auto output_cgra_s1_r_x_2 = output_cgra_s1_r_y_2->add_loop("output_cgra_s1_r_x_2", 0, 3);
  auto output_cgra_s1_y_2 = output_cgra_s1_r_x_2->add_loop("output_cgra_s1_y_2", 0, 28);
  auto output_cgra_s1_x_2 = output_cgra_s1_y_2->add_loop("output_cgra_s1_x_2", 0, 28);

//store is: output_cgra.stencil(output_cgra_s1_x_2, output_cgra_s1_y_2, ((output_gb_s0_w_w_gb*3) + 2)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + (output_cgra.stencil(output_cgra_s1_x_2, output_cgra_s1_y_2, ((output_gb_s0_w_w_gb*3) + 2)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2)))))))
  auto hcompute_output_cgra_stencil_3 = output_cgra_s1_x_2->add_op("op_hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_function("hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 2)", "output_cgra_s1_y_2", "output_cgra_s1_x_2");
  hcompute_output_cgra_stencil_3->add_store("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 2)", "output_cgra_s1_y_2", "output_cgra_s1_x_2");

//consuming output_cgra.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_w_w_gb->add_loop("output_gb_s0_y_y_cgra", 0, 28);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 28);
  auto output_gb_s0_w_w_cgra = output_gb_s0_x_x_cgra->add_loop("output_gb_s0_w_w_cgra", 0, 3);

//store is: output_gb.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, (output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))) = output_cgra.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, (output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)))
  auto hcompute_output_gb_stencil = output_gb_s0_w_w_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("output_cgra_stencil", "(output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");
  prg.buffer_port_widths["output_gb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_gb_stencil", "(output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");

//consuming output_gb.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 48);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

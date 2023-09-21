#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog fsrcnn_reorder() {
  prog prg;
  prg.compute_unit_file = "fsrcnn_reorder_compute.h";
  prg.name = "fsrcnn_reorder";

// Stencil<int16_t, 30, 30, 16> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<int16_t, 8, 8, 3, 3> &kernel1_host_stencil = arg_1;
  prg.add_input("kernel1_host_stencil");
  prg.buffer_port_widths["kernel1_host_stencil"] = 16;
// Stencil<int16_t, 8, 64> &kernel2_host_stencil = arg_2;
  prg.add_input("kernel2_host_stencil");
  prg.buffer_port_widths["kernel2_host_stencil"] = 16;
// Stencil<int16_t, 64, 8> &kernel_host_stencil = arg_3;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<int16_t, 64, 28, 28> &hw_output_stencil = arg_4;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_glb.stencil
  auto input_glb_s0_z_z_glb = prg.add_loop("input_glb_s0_z_z_glb", 0, 8);
  auto input_glb_s0_y = input_glb_s0_z_z_glb->add_loop("input_glb_s0_y", 0, 30);
  auto input_glb_s0_x = input_glb_s0_y->add_loop("input_glb_s0_x", 0, 30);

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, (input_glb_s0_z_z_glb*8)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, (input_glb_s0_z_z_glb*8))
  auto hcompute_input_glb_stencil = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_function("hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_load("input_host_stencil", "(input_glb_s0_z_z_glb*8)", "input_glb_s0_y", "input_glb_s0_x");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
  hcompute_input_glb_stencil->add_store("input_glb_stencil", "(input_glb_s0_z_z_glb*8)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 1)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 1))
  auto hcompute_input_glb_stencil_1 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_1");
  hcompute_input_glb_stencil_1->add_function("hcompute_input_glb_stencil_1");
  hcompute_input_glb_stencil_1->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 1)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_1->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 1)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 2)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 2))
  auto hcompute_input_glb_stencil_2 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_2");
  hcompute_input_glb_stencil_2->add_function("hcompute_input_glb_stencil_2");
  hcompute_input_glb_stencil_2->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 2)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_2->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 2)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 3)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 3))
  auto hcompute_input_glb_stencil_3 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_3");
  hcompute_input_glb_stencil_3->add_function("hcompute_input_glb_stencil_3");
  hcompute_input_glb_stencil_3->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 3)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_3->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 3)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 4)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 4))
  auto hcompute_input_glb_stencil_4 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_4");
  hcompute_input_glb_stencil_4->add_function("hcompute_input_glb_stencil_4");
  hcompute_input_glb_stencil_4->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 4)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_4->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 4)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 5)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 5))
  auto hcompute_input_glb_stencil_5 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_5");
  hcompute_input_glb_stencil_5->add_function("hcompute_input_glb_stencil_5");
  hcompute_input_glb_stencil_5->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 5)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_5->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 5)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 6)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 6))
  auto hcompute_input_glb_stencil_6 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_6");
  hcompute_input_glb_stencil_6->add_function("hcompute_input_glb_stencil_6");
  hcompute_input_glb_stencil_6->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 6)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_6->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 6)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 7)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 7))
  auto hcompute_input_glb_stencil_7 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_7");
  hcompute_input_glb_stencil_7->add_function("hcompute_input_glb_stencil_7");
  hcompute_input_glb_stencil_7->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 7)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_7->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 7)", "input_glb_s0_y", "input_glb_s0_x");

//consuming input_glb.stencil
////producing kernel_glb.stencil
  auto kernel_glb_s0_w = prg.add_loop("kernel_glb_s0_w", 0, 8);
  auto kernel_glb_s0_z_z = kernel_glb_s0_w->add_loop("kernel_glb_s0_z_z", 0, 64);

//store is: kernel_glb.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w) = kernel_host.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w)
  auto hcompute_kernel_glb_stencil = kernel_glb_s0_z_z->add_op("op_hcompute_kernel_glb_stencil");
  hcompute_kernel_glb_stencil->add_function("hcompute_kernel_glb_stencil");
  hcompute_kernel_glb_stencil->add_load("kernel_host_stencil", "kernel_glb_s0_w", "kernel_glb_s0_z_z");
  prg.buffer_port_widths["kernel_glb_stencil"] = 16;
  hcompute_kernel_glb_stencil->add_store("kernel_glb_stencil", "kernel_glb_s0_w", "kernel_glb_s0_z_z");

//consuming kernel_glb.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_w = prg.add_loop("kernel_cgra_s0_w", 0, 8);
  auto kernel_cgra_s0_z = kernel_cgra_s0_w->add_loop("kernel_cgra_s0_z", 0, 64);

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w) = kernel_glb.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_z->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_load("kernel_glb_stencil", "kernel_cgra_s0_w", "kernel_cgra_s0_z");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil", "kernel_cgra_s0_w", "kernel_cgra_s0_z");

//consuming kernel_cgra.stencil
////producing kernel1_glb.stencil
  auto kernel1_glb_s0_y = prg.add_loop("kernel1_glb_s0_y", 0, 3);
  auto kernel1_glb_s0_x = kernel1_glb_s0_y->add_loop("kernel1_glb_s0_x", 0, 3);
  auto kernel1_glb_s0_w = kernel1_glb_s0_x->add_loop("kernel1_glb_s0_w", 0, 8);
  auto kernel1_glb_s0_z_z = kernel1_glb_s0_w->add_loop("kernel1_glb_s0_z_z", 0, 8);

//store is: kernel1_glb.stencil(kernel1_glb_s0_z_z, kernel1_glb_s0_w, kernel1_glb_s0_x, kernel1_glb_s0_y) = kernel1_host.stencil(kernel1_glb_s0_z_z, kernel1_glb_s0_w, kernel1_glb_s0_x, kernel1_glb_s0_y)
  auto hcompute_kernel1_glb_stencil = kernel1_glb_s0_z_z->add_op("op_hcompute_kernel1_glb_stencil");
  hcompute_kernel1_glb_stencil->add_function("hcompute_kernel1_glb_stencil");
  hcompute_kernel1_glb_stencil->add_load("kernel1_host_stencil", "kernel1_glb_s0_y", "kernel1_glb_s0_x", "kernel1_glb_s0_w", "kernel1_glb_s0_z_z");
  prg.buffer_port_widths["kernel1_glb_stencil"] = 16;
  hcompute_kernel1_glb_stencil->add_store("kernel1_glb_stencil", "kernel1_glb_s0_y", "kernel1_glb_s0_x", "kernel1_glb_s0_w", "kernel1_glb_s0_z_z");

//consuming kernel1_glb.stencil
////producing kernel1_cgra.stencil
  auto kernel1_cgra_s0_y = prg.add_loop("kernel1_cgra_s0_y", 0, 3);
  auto kernel1_cgra_s0_x = kernel1_cgra_s0_y->add_loop("kernel1_cgra_s0_x", 0, 3);
  auto kernel1_cgra_s0_w = kernel1_cgra_s0_x->add_loop("kernel1_cgra_s0_w", 0, 8);
  auto kernel1_cgra_s0_z = kernel1_cgra_s0_w->add_loop("kernel1_cgra_s0_z", 0, 8);

//store is: kernel1_cgra.stencil(kernel1_cgra_s0_z, kernel1_cgra_s0_w, kernel1_cgra_s0_x, kernel1_cgra_s0_y) = kernel1_glb.stencil(kernel1_cgra_s0_z, kernel1_cgra_s0_w, kernel1_cgra_s0_x, kernel1_cgra_s0_y)
  auto hcompute_kernel1_cgra_stencil = kernel1_cgra_s0_z->add_op("op_hcompute_kernel1_cgra_stencil");
  hcompute_kernel1_cgra_stencil->add_function("hcompute_kernel1_cgra_stencil");
  hcompute_kernel1_cgra_stencil->add_load("kernel1_glb_stencil", "kernel1_cgra_s0_y", "kernel1_cgra_s0_x", "kernel1_cgra_s0_w", "kernel1_cgra_s0_z");
  prg.buffer_port_widths["kernel1_cgra_stencil"] = 16;
  hcompute_kernel1_cgra_stencil->add_store("kernel1_cgra_stencil", "kernel1_cgra_s0_y", "kernel1_cgra_s0_x", "kernel1_cgra_s0_w", "kernel1_cgra_s0_z");

//consuming kernel1_cgra.stencil
////producing kernel2_glb.stencil
  auto kernel2_glb_s0_w = prg.add_loop("kernel2_glb_s0_w", 0, 64);
  auto kernel2_glb_s0_z_z = kernel2_glb_s0_w->add_loop("kernel2_glb_s0_z_z", 0, 8);

//store is: kernel2_glb.stencil(kernel2_glb_s0_z_z, kernel2_glb_s0_w) = kernel2_host.stencil(kernel2_glb_s0_z_z, kernel2_glb_s0_w)
  auto hcompute_kernel2_glb_stencil = kernel2_glb_s0_z_z->add_op("op_hcompute_kernel2_glb_stencil");
  hcompute_kernel2_glb_stencil->add_function("hcompute_kernel2_glb_stencil");
  hcompute_kernel2_glb_stencil->add_load("kernel2_host_stencil", "kernel2_glb_s0_w", "kernel2_glb_s0_z_z");
  prg.buffer_port_widths["kernel2_glb_stencil"] = 16;
  hcompute_kernel2_glb_stencil->add_store("kernel2_glb_stencil", "kernel2_glb_s0_w", "kernel2_glb_s0_z_z");

//consuming kernel2_glb.stencil
////producing kernel2_cgra.stencil
  auto kernel2_cgra_s0_w = prg.add_loop("kernel2_cgra_s0_w", 0, 64);
  auto kernel2_cgra_s0_z = kernel2_cgra_s0_w->add_loop("kernel2_cgra_s0_z", 0, 8);

//store is: kernel2_cgra.stencil(kernel2_cgra_s0_z, kernel2_cgra_s0_w) = kernel2_glb.stencil(kernel2_cgra_s0_z, kernel2_cgra_s0_w)
  auto hcompute_kernel2_cgra_stencil = kernel2_cgra_s0_z->add_op("op_hcompute_kernel2_cgra_stencil");
  hcompute_kernel2_cgra_stencil->add_function("hcompute_kernel2_cgra_stencil");
  hcompute_kernel2_cgra_stencil->add_load("kernel2_glb_stencil", "kernel2_cgra_s0_w", "kernel2_cgra_s0_z");
  prg.buffer_port_widths["kernel2_cgra_stencil"] = 16;
  hcompute_kernel2_cgra_stencil->add_store("kernel2_cgra_stencil", "kernel2_cgra_s0_w", "kernel2_cgra_s0_z");

//consuming kernel2_cgra.stencil
////producing output_glb.stencil
  auto output_glb_s0_y_y_glb = prg.add_loop("output_glb_s0_y_y_glb", 0, 4);
  auto output_glb_s0_x_x_glb = output_glb_s0_y_y_glb->add_loop("output_glb_s0_x_x_glb", 0, 2);
////producing input_cgra.stencil
  auto input_cgra_s0_z_z_glb = output_glb_s0_x_x_glb->add_loop("input_cgra_s0_z_z_glb", 0, 8);
  auto input_cgra_s0_y = input_cgra_s0_z_z_glb->add_loop("input_cgra_s0_y", 0, 9);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 16);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, (input_cgra_s0_z_z_glb*8)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), (input_cgra_s0_z_z_glb*8))
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_glb_stencil", "(input_cgra_s0_z_z_glb*8)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "(input_cgra_s0_z_z_glb*8)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 1)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 1))
  auto hcompute_input_cgra_stencil_1 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_1");
  hcompute_input_cgra_stencil_1->add_function("hcompute_input_cgra_stencil_1");
  hcompute_input_cgra_stencil_1->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 1)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_1->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 1)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 2)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 2))
  auto hcompute_input_cgra_stencil_2 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_2");
  hcompute_input_cgra_stencil_2->add_function("hcompute_input_cgra_stencil_2");
  hcompute_input_cgra_stencil_2->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 2)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_2->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 2)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 3)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 3))
  auto hcompute_input_cgra_stencil_3 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_3");
  hcompute_input_cgra_stencil_3->add_function("hcompute_input_cgra_stencil_3");
  hcompute_input_cgra_stencil_3->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 3)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_3->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 3)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 4)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 4))
  auto hcompute_input_cgra_stencil_4 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_4");
  hcompute_input_cgra_stencil_4->add_function("hcompute_input_cgra_stencil_4");
  hcompute_input_cgra_stencil_4->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 4)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_4->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 4)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 5)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 5))
  auto hcompute_input_cgra_stencil_5 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_5");
  hcompute_input_cgra_stencil_5->add_function("hcompute_input_cgra_stencil_5");
  hcompute_input_cgra_stencil_5->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 5)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_5->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 5)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 6)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 6))
  auto hcompute_input_cgra_stencil_6 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_6");
  hcompute_input_cgra_stencil_6->add_function("hcompute_input_cgra_stencil_6");
  hcompute_input_cgra_stencil_6->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 6)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_6->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 6)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 7)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 7))
  auto hcompute_input_cgra_stencil_7 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_7");
  hcompute_input_cgra_stencil_7->add_function("hcompute_input_cgra_stencil_7");
  hcompute_input_cgra_stencil_7->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 7)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_7->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 7)", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing f1_cgra.stencil
  auto f1_cgra_s0_y = output_glb_s0_x_x_glb->add_loop("f1_cgra_s0_y", 0, 9);
  auto f1_cgra_s0_x = f1_cgra_s0_y->add_loop("f1_cgra_s0_x", 0, 16);

//store is: f1_cgra.stencil(0, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil");
  hcompute_f1_cgra_stencil->add_function("hcompute_f1_cgra_stencil");
  prg.buffer_port_widths["f1_cgra_stencil"] = 16;
  hcompute_f1_cgra_stencil->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "0");

//store is: f1_cgra.stencil(1, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_1 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_1");
  hcompute_f1_cgra_stencil_1->add_function("hcompute_f1_cgra_stencil_1");
  hcompute_f1_cgra_stencil_1->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "1");

//store is: f1_cgra.stencil(2, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_2 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_2");
  hcompute_f1_cgra_stencil_2->add_function("hcompute_f1_cgra_stencil_2");
  hcompute_f1_cgra_stencil_2->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "2");

//store is: f1_cgra.stencil(3, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_3 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_3");
  hcompute_f1_cgra_stencil_3->add_function("hcompute_f1_cgra_stencil_3");
  hcompute_f1_cgra_stencil_3->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "3");

//store is: f1_cgra.stencil(4, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_4 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_4");
  hcompute_f1_cgra_stencil_4->add_function("hcompute_f1_cgra_stencil_4");
  hcompute_f1_cgra_stencil_4->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "4");

//store is: f1_cgra.stencil(5, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_5 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_5");
  hcompute_f1_cgra_stencil_5->add_function("hcompute_f1_cgra_stencil_5");
  hcompute_f1_cgra_stencil_5->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "5");

//store is: f1_cgra.stencil(6, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_6 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_6");
  hcompute_f1_cgra_stencil_6->add_function("hcompute_f1_cgra_stencil_6");
  hcompute_f1_cgra_stencil_6->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "6");

//store is: f1_cgra.stencil(7, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_7 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_7");
  hcompute_f1_cgra_stencil_7->add_function("hcompute_f1_cgra_stencil_7");
  hcompute_f1_cgra_stencil_7->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "7");
  auto f1_cgra_s1_r0_0_x_rz_cgra = output_glb_s0_x_x_glb->add_loop("f1_cgra_s1_r0_0_x_rz_cgra", 0, 8);
  auto f1_cgra_s1_y = f1_cgra_s1_r0_0_x_rz_cgra->add_loop("f1_cgra_s1_y", 0, 9);
  auto f1_cgra_s1_x = f1_cgra_s1_y->add_loop("f1_cgra_s1_x", 0, 16);

//store is: f1_cgra.stencil(0, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(0, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_8 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_8");
  hcompute_f1_cgra_stencil_8->add_function("hcompute_f1_cgra_stencil_8");
  hcompute_f1_cgra_stencil_8->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "0");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_8->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "0");

//store is: f1_cgra.stencil(1, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(1, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_9 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_9");
  hcompute_f1_cgra_stencil_9->add_function("hcompute_f1_cgra_stencil_9");
  hcompute_f1_cgra_stencil_9->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "1");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_9->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "1");

//store is: f1_cgra.stencil(2, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(2, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_10 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_10");
  hcompute_f1_cgra_stencil_10->add_function("hcompute_f1_cgra_stencil_10");
  hcompute_f1_cgra_stencil_10->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "2");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_10->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "2");

//store is: f1_cgra.stencil(3, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(3, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_11 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_11");
  hcompute_f1_cgra_stencil_11->add_function("hcompute_f1_cgra_stencil_11");
  hcompute_f1_cgra_stencil_11->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "3");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_11->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "3");

//store is: f1_cgra.stencil(4, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(4, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_12 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_12");
  hcompute_f1_cgra_stencil_12->add_function("hcompute_f1_cgra_stencil_12");
  hcompute_f1_cgra_stencil_12->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "4");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_12->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "4");

//store is: f1_cgra.stencil(5, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(5, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_13 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_13");
  hcompute_f1_cgra_stencil_13->add_function("hcompute_f1_cgra_stencil_13");
  hcompute_f1_cgra_stencil_13->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "5");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_13->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "5");

//store is: f1_cgra.stencil(6, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(6, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_14 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_14");
  hcompute_f1_cgra_stencil_14->add_function("hcompute_f1_cgra_stencil_14");
  hcompute_f1_cgra_stencil_14->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "6");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_14->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "6");

//store is: f1_cgra.stencil(7, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(7, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_15 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_15");
  hcompute_f1_cgra_stencil_15->add_function("hcompute_f1_cgra_stencil_15");
  hcompute_f1_cgra_stencil_15->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "7");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_15->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "7");

//consuming f1_cgra.stencil
////producing f1_cgra$1.stencil
  auto f1_cgra_1_s0_y = output_glb_s0_x_x_glb->add_loop("f1_cgra_1_s0_y", 0, 7);
  auto f1_cgra_1_s0_x = f1_cgra_1_s0_y->add_loop("f1_cgra_1_s0_x", 0, 14);

//store is: f1_cgra$1.stencil(0, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil");
  hcompute_f1_cgra_1_stencil->add_function("hcompute_f1_cgra_1_stencil");
  prg.buffer_port_widths["f1_cgra_1_stencil"] = 16;
  hcompute_f1_cgra_1_stencil->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "0");

//store is: f1_cgra$1.stencil(1, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_1 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_1");
  hcompute_f1_cgra_1_stencil_1->add_function("hcompute_f1_cgra_1_stencil_1");
  hcompute_f1_cgra_1_stencil_1->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "1");

//store is: f1_cgra$1.stencil(2, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_2 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_2");
  hcompute_f1_cgra_1_stencil_2->add_function("hcompute_f1_cgra_1_stencil_2");
  hcompute_f1_cgra_1_stencil_2->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "2");

//store is: f1_cgra$1.stencil(3, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_3 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_3");
  hcompute_f1_cgra_1_stencil_3->add_function("hcompute_f1_cgra_1_stencil_3");
  hcompute_f1_cgra_1_stencil_3->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "3");

//store is: f1_cgra$1.stencil(4, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_4 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_4");
  hcompute_f1_cgra_1_stencil_4->add_function("hcompute_f1_cgra_1_stencil_4");
  hcompute_f1_cgra_1_stencil_4->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "4");

//store is: f1_cgra$1.stencil(5, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_5 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_5");
  hcompute_f1_cgra_1_stencil_5->add_function("hcompute_f1_cgra_1_stencil_5");
  hcompute_f1_cgra_1_stencil_5->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "5");

//store is: f1_cgra$1.stencil(6, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_6 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_6");
  hcompute_f1_cgra_1_stencil_6->add_function("hcompute_f1_cgra_1_stencil_6");
  hcompute_f1_cgra_1_stencil_6->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "6");

//store is: f1_cgra$1.stencil(7, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_7 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_7");
  hcompute_f1_cgra_1_stencil_7->add_function("hcompute_f1_cgra_1_stencil_7");
  hcompute_f1_cgra_1_stencil_7->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "7");
  auto f1_cgra_1_s1_r1_0_y = output_glb_s0_x_x_glb->add_loop("f1_cgra_1_s1_r1_0_y", 0, 3);
  auto f1_cgra_1_s1_r1_0_x = f1_cgra_1_s1_r1_0_y->add_loop("f1_cgra_1_s1_r1_0_x", 0, 3);
  auto f1_cgra_1_s1_y = f1_cgra_1_s1_r1_0_x->add_loop("f1_cgra_1_s1_y", 0, 7);
  auto f1_cgra_1_s1_x = f1_cgra_1_s1_y->add_loop("f1_cgra_1_s1_x", 0, 14);

//store is: f1_cgra$1.stencil(0, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(0, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_8 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_8");
  hcompute_f1_cgra_1_stencil_8->add_function("hcompute_f1_cgra_1_stencil_8");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "0");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "0");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "1");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "2");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "3");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "4");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "5");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "7");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "6");
  hcompute_f1_cgra_1_stencil_8->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "0");

//store is: f1_cgra$1.stencil(1, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(1, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_9 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_9");
  hcompute_f1_cgra_1_stencil_9->add_function("hcompute_f1_cgra_1_stencil_9");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "1");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "1");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "2");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "3");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "4");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "5");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "7");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "6");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "0");
  hcompute_f1_cgra_1_stencil_9->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "1");

//store is: f1_cgra$1.stencil(2, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(2, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_10 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_10");
  hcompute_f1_cgra_1_stencil_10->add_function("hcompute_f1_cgra_1_stencil_10");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "2");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "0");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "1");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "2");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "3");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "4");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "5");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "7");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "6");
  hcompute_f1_cgra_1_stencil_10->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "2");

//store is: f1_cgra$1.stencil(3, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(3, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_11 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_11");
  hcompute_f1_cgra_1_stencil_11->add_function("hcompute_f1_cgra_1_stencil_11");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "3");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "0");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "1");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "2");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "3");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "4");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "5");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "7");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "6");
  hcompute_f1_cgra_1_stencil_11->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "3");

//store is: f1_cgra$1.stencil(4, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(4, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_12 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_12");
  hcompute_f1_cgra_1_stencil_12->add_function("hcompute_f1_cgra_1_stencil_12");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "4");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "0");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "1");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "2");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "3");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "4");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "5");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "7");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "6");
  hcompute_f1_cgra_1_stencil_12->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "4");

//store is: f1_cgra$1.stencil(5, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(5, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_13 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_13");
  hcompute_f1_cgra_1_stencil_13->add_function("hcompute_f1_cgra_1_stencil_13");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "5");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "0");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "1");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "2");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "3");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "4");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "5");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "7");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "6");
  hcompute_f1_cgra_1_stencil_13->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "5");

//store is: f1_cgra$1.stencil(6, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(6, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_14 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_14");
  hcompute_f1_cgra_1_stencil_14->add_function("hcompute_f1_cgra_1_stencil_14");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "6");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "0");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "1");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "2");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "3");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "4");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "5");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "7");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "6");
  hcompute_f1_cgra_1_stencil_14->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "6");

//store is: f1_cgra$1.stencil(7, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(7, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_15 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_15");
  hcompute_f1_cgra_1_stencil_15->add_function("hcompute_f1_cgra_1_stencil_15");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "7");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "0");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "1");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "2");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "3");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "4");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "5");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "7");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "6");
  hcompute_f1_cgra_1_stencil_15->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "7");

//consuming f1_cgra$1.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y = output_glb_s0_x_x_glb->add_loop("output_cgra_s0_y", 0, 7);
  auto output_cgra_s0_x = output_cgra_s0_y->add_loop("output_cgra_s0_x", 0, 14);
  auto output_cgra_s0_w_w = output_cgra_s0_x->add_loop("output_cgra_s0_w_w", 0, 8);

//store is: output_cgra.stencil((output_cgra_s0_w_w*8), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "(output_cgra_s0_w_w*8)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 1), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_1 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 1)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 2), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_2 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 2)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 3), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_3 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_function("hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 3)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 4), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_4 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_function("hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 4)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 5), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_5 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_function("hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 5)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 6), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_6 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_function("hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 6)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 7), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_7 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_function("hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 7)");
  auto output_cgra_s1_y = output_glb_s0_x_x_glb->add_loop("output_cgra_s1_y", 0, 7);
  auto output_cgra_s1_x = output_cgra_s1_y->add_loop("output_cgra_s1_x", 0, 14);
  auto output_cgra_s1_w_w = output_cgra_s1_x->add_loop("output_cgra_s1_w_w", 0, 8);

//store is: output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_8 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_function("hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "1");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "2");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "3");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "4");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "5");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "7");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "6");
  hcompute_output_cgra_stencil_8->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "(output_cgra_s1_w_w*8)");
  hcompute_output_cgra_stencil_8->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "(output_cgra_s1_w_w*8)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_9 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_function("hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "2");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "3");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "4");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "5");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "7");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "6");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "0");
  hcompute_output_cgra_stencil_9->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 1)");
  hcompute_output_cgra_stencil_9->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 1)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_10 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_function("hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "0");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "1");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "3");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "4");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "5");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "7");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "6");
  hcompute_output_cgra_stencil_10->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 2)");
  hcompute_output_cgra_stencil_10->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 2)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_11 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_function("hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "0");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "1");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "2");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "4");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "5");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "7");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "6");
  hcompute_output_cgra_stencil_11->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 3)");
  hcompute_output_cgra_stencil_11->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 3)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_12 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_function("hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "0");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "1");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "2");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "3");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "5");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "7");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "6");
  hcompute_output_cgra_stencil_12->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 4)");
  hcompute_output_cgra_stencil_12->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 4)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_13 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_function("hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "0");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "1");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "2");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "3");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "4");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "7");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "6");
  hcompute_output_cgra_stencil_13->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 5)");
  hcompute_output_cgra_stencil_13->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 5)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_14 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_function("hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "0");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "1");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "2");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "3");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "4");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "5");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "7");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "6");
  hcompute_output_cgra_stencil_14->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 6)");
  hcompute_output_cgra_stencil_14->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 6)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_15 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_function("hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "0");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "1");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "2");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "3");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "4");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "5");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "6");
  hcompute_output_cgra_stencil_15->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 7)");
  hcompute_output_cgra_stencil_15->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 7)");

//consuming output_cgra.stencil
  auto output_glb_s0_y_y_cgra = output_glb_s0_x_x_glb->add_loop("output_glb_s0_y_y_cgra", 0, 7);
  auto output_glb_s0_x_x_cgra = output_glb_s0_y_y_cgra->add_loop("output_glb_s0_x_x_cgra", 0, 14);
  auto output_glb_s0_w_w = output_glb_s0_x_x_cgra->add_loop("output_glb_s0_w_w", 0, 8);

//store is: output_glb.stencil((output_glb_s0_w_w*8), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil((output_glb_s0_w_w*8), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_function("hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "(output_glb_s0_w_w*8)");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_glb_stencil->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "(output_glb_s0_w_w*8)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 1), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_1 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_1");
  hcompute_output_glb_stencil_1->add_function("hcompute_output_glb_stencil_1");
  hcompute_output_glb_stencil_1->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 1)");
  hcompute_output_glb_stencil_1->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 1)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 2), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_2 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_2");
  hcompute_output_glb_stencil_2->add_function("hcompute_output_glb_stencil_2");
  hcompute_output_glb_stencil_2->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 2)");
  hcompute_output_glb_stencil_2->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 2)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 3), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_3 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_3");
  hcompute_output_glb_stencil_3->add_function("hcompute_output_glb_stencil_3");
  hcompute_output_glb_stencil_3->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 3)");
  hcompute_output_glb_stencil_3->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 3)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 4), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_4 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_4");
  hcompute_output_glb_stencil_4->add_function("hcompute_output_glb_stencil_4");
  hcompute_output_glb_stencil_4->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 4)");
  hcompute_output_glb_stencil_4->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 4)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 5), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 5), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_5 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_5");
  hcompute_output_glb_stencil_5->add_function("hcompute_output_glb_stencil_5");
  hcompute_output_glb_stencil_5->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 5)");
  hcompute_output_glb_stencil_5->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 5)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 6), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 6), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_6 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_6");
  hcompute_output_glb_stencil_6->add_function("hcompute_output_glb_stencil_6");
  hcompute_output_glb_stencil_6->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 6)");
  hcompute_output_glb_stencil_6->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 6)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 7), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 7), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_7 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_7");
  hcompute_output_glb_stencil_7->add_function("hcompute_output_glb_stencil_7");
  hcompute_output_glb_stencil_7->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 7)");
  hcompute_output_glb_stencil_7->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 7)");

//consuming output_glb.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);
  auto hw_output_s0_w_w = hw_output_s0_x_xi->add_loop("hw_output_s0_w_w", 0, 8);

//store is: hw_output.stencil((hw_output_s0_w_w*8), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil((hw_output_s0_w_w*8), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "(hw_output_s0_w_w*8)");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "(hw_output_s0_w_w*8)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 1)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 2)");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 2)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 3)");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 3)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 4), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 4), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 4)");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 4)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 5), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 5), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 5)");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 5)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 6), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 6), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 6)");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 6)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 7), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 7), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 7)");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 7)");

  return prg;
}




// in_img=28 pad=1 ksize=3 stride=1 n_ic=16 n_oc=16 k_ic=8 k_oc=8 glb_i=1 glb_k=1 glb_o=1
//


prog fsrcnn_shared() {
  prog prg;
  prg.compute_unit_file = "fsrcnn_reorder_compute.h";
  prg.name = "fsrcnn_shared";

// Stencil<int16_t, 30, 30, 16> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<int16_t, 8, 8, 3, 3> &kernel1_host_stencil = arg_1;
  prg.add_input("kernel1_host_stencil");
  prg.buffer_port_widths["kernel1_host_stencil"] = 16;
// Stencil<int16_t, 8, 64> &kernel2_host_stencil = arg_2;
  prg.add_input("kernel2_host_stencil");
  prg.buffer_port_widths["kernel2_host_stencil"] = 16;
// Stencil<int16_t, 64, 8> &kernel_host_stencil = arg_3;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<int16_t, 64, 28, 28> &hw_output_stencil = arg_4;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_glb.stencil
  auto input_glb_s0_z_z_glb = prg.add_loop("input_glb_s0_z_z_glb", 0, 8);
  auto input_glb_s0_y = input_glb_s0_z_z_glb->add_loop("input_glb_s0_y", 0, 30);
  auto input_glb_s0_x = input_glb_s0_y->add_loop("input_glb_s0_x", 0, 30);

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, (input_glb_s0_z_z_glb*8)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, (input_glb_s0_z_z_glb*8))
  auto hcompute_input_glb_stencil = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_function("hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_load("input_host_stencil", "(input_glb_s0_z_z_glb*8)", "input_glb_s0_y", "input_glb_s0_x");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
  hcompute_input_glb_stencil->add_store("input_glb_stencil", "(input_glb_s0_z_z_glb*8)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 1)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 1))
  auto hcompute_input_glb_stencil_1 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_1");
  hcompute_input_glb_stencil_1->add_function("hcompute_input_glb_stencil_1");
  hcompute_input_glb_stencil_1->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 1)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_1->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 1)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 2)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 2))
  auto hcompute_input_glb_stencil_2 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_2");
  hcompute_input_glb_stencil_2->add_function("hcompute_input_glb_stencil_2");
  hcompute_input_glb_stencil_2->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 2)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_2->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 2)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 3)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 3))
  auto hcompute_input_glb_stencil_3 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_3");
  hcompute_input_glb_stencil_3->add_function("hcompute_input_glb_stencil_3");
  hcompute_input_glb_stencil_3->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 3)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_3->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 3)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 4)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 4))
  auto hcompute_input_glb_stencil_4 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_4");
  hcompute_input_glb_stencil_4->add_function("hcompute_input_glb_stencil_4");
  hcompute_input_glb_stencil_4->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 4)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_4->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 4)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 5)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 5))
  auto hcompute_input_glb_stencil_5 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_5");
  hcompute_input_glb_stencil_5->add_function("hcompute_input_glb_stencil_5");
  hcompute_input_glb_stencil_5->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 5)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_5->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 5)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 6)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 6))
  auto hcompute_input_glb_stencil_6 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_6");
  hcompute_input_glb_stencil_6->add_function("hcompute_input_glb_stencil_6");
  hcompute_input_glb_stencil_6->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 6)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_6->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 6)", "input_glb_s0_y", "input_glb_s0_x");

//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 7)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, ((input_glb_s0_z_z_glb*8) + 7))
  auto hcompute_input_glb_stencil_7 = input_glb_s0_x->add_op("op_hcompute_input_glb_stencil_7");
  hcompute_input_glb_stencil_7->add_function("hcompute_input_glb_stencil_7");
  hcompute_input_glb_stencil_7->add_load("input_host_stencil", "((input_glb_s0_z_z_glb*8) + 7)", "input_glb_s0_y", "input_glb_s0_x");
  hcompute_input_glb_stencil_7->add_store("input_glb_stencil", "((input_glb_s0_z_z_glb*8) + 7)", "input_glb_s0_y", "input_glb_s0_x");

//consuming input_glb.stencil
////producing kernel_glb.stencil
  auto kernel_glb_s0_w = prg.add_loop("kernel_glb_s0_w", 0, 8);
  auto kernel_glb_s0_z_z = kernel_glb_s0_w->add_loop("kernel_glb_s0_z_z", 0, 64);

//store is: kernel_glb.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w) = kernel_host.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w)
  auto hcompute_kernel_glb_stencil = kernel_glb_s0_z_z->add_op("op_hcompute_kernel_glb_stencil");
  hcompute_kernel_glb_stencil->add_function("hcompute_kernel_glb_stencil");
  hcompute_kernel_glb_stencil->add_load("kernel_host_stencil", "kernel_glb_s0_w", "kernel_glb_s0_z_z");
  prg.buffer_port_widths["kernel_glb_stencil"] = 16;
  hcompute_kernel_glb_stencil->add_store("kernel_glb_stencil", "kernel_glb_s0_w", "kernel_glb_s0_z_z");

//consuming kernel_glb.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_w = prg.add_loop("kernel_cgra_s0_w", 0, 8);
  auto kernel_cgra_s0_z = kernel_cgra_s0_w->add_loop("kernel_cgra_s0_z", 0, 64);

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w) = kernel_glb.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_z->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_load("kernel_glb_stencil", "kernel_cgra_s0_w", "kernel_cgra_s0_z");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil", "kernel_cgra_s0_w", "kernel_cgra_s0_z");

//consuming kernel_cgra.stencil
////producing kernel1_glb.stencil
  auto kernel1_glb_s0_y = prg.add_loop("kernel1_glb_s0_y", 0, 3);
  auto kernel1_glb_s0_x = kernel1_glb_s0_y->add_loop("kernel1_glb_s0_x", 0, 3);
  auto kernel1_glb_s0_w = kernel1_glb_s0_x->add_loop("kernel1_glb_s0_w", 0, 8);
  auto kernel1_glb_s0_z_z = kernel1_glb_s0_w->add_loop("kernel1_glb_s0_z_z", 0, 8);

//store is: kernel1_glb.stencil(kernel1_glb_s0_z_z, kernel1_glb_s0_w, kernel1_glb_s0_x, kernel1_glb_s0_y) = kernel1_host.stencil(kernel1_glb_s0_z_z, kernel1_glb_s0_w, kernel1_glb_s0_x, kernel1_glb_s0_y)
  auto hcompute_kernel1_glb_stencil = kernel1_glb_s0_z_z->add_op("op_hcompute_kernel1_glb_stencil");
  hcompute_kernel1_glb_stencil->add_function("hcompute_kernel1_glb_stencil");
  hcompute_kernel1_glb_stencil->add_load("kernel1_host_stencil", "kernel1_glb_s0_y", "kernel1_glb_s0_x", "kernel1_glb_s0_w", "kernel1_glb_s0_z_z");
  prg.buffer_port_widths["kernel1_glb_stencil"] = 16;
  hcompute_kernel1_glb_stencil->add_store("kernel1_glb_stencil", "kernel1_glb_s0_y", "kernel1_glb_s0_x", "kernel1_glb_s0_w", "kernel1_glb_s0_z_z");

//consuming kernel1_glb.stencil
////producing kernel1_cgra.stencil
  auto kernel1_cgra_s0_y = prg.add_loop("kernel1_cgra_s0_y", 0, 3);
  auto kernel1_cgra_s0_x = kernel1_cgra_s0_y->add_loop("kernel1_cgra_s0_x", 0, 3);
  auto kernel1_cgra_s0_w = kernel1_cgra_s0_x->add_loop("kernel1_cgra_s0_w", 0, 8);
  auto kernel1_cgra_s0_z = kernel1_cgra_s0_w->add_loop("kernel1_cgra_s0_z", 0, 8);

//store is: kernel1_cgra.stencil(kernel1_cgra_s0_z, kernel1_cgra_s0_w, kernel1_cgra_s0_x, kernel1_cgra_s0_y) = kernel1_glb.stencil(kernel1_cgra_s0_z, kernel1_cgra_s0_w, kernel1_cgra_s0_x, kernel1_cgra_s0_y)
  auto hcompute_kernel1_cgra_stencil = kernel1_cgra_s0_z->add_op("op_hcompute_kernel1_cgra_stencil");
  hcompute_kernel1_cgra_stencil->add_function("hcompute_kernel1_cgra_stencil");
  hcompute_kernel1_cgra_stencil->add_load("kernel1_glb_stencil", "kernel1_cgra_s0_y", "kernel1_cgra_s0_x", "kernel1_cgra_s0_w", "kernel1_cgra_s0_z");
  prg.buffer_port_widths["kernel1_cgra_stencil"] = 16;
  hcompute_kernel1_cgra_stencil->add_store("kernel1_cgra_stencil", "kernel1_cgra_s0_y", "kernel1_cgra_s0_x", "kernel1_cgra_s0_w", "kernel1_cgra_s0_z");

//consuming kernel1_cgra.stencil
////producing kernel2_glb.stencil
  auto kernel2_glb_s0_w = prg.add_loop("kernel2_glb_s0_w", 0, 64);
  auto kernel2_glb_s0_z_z = kernel2_glb_s0_w->add_loop("kernel2_glb_s0_z_z", 0, 8);

//store is: kernel2_glb.stencil(kernel2_glb_s0_z_z, kernel2_glb_s0_w) = kernel2_host.stencil(kernel2_glb_s0_z_z, kernel2_glb_s0_w)
  auto hcompute_kernel2_glb_stencil = kernel2_glb_s0_z_z->add_op("op_hcompute_kernel2_glb_stencil");
  hcompute_kernel2_glb_stencil->add_function("hcompute_kernel2_glb_stencil");
  hcompute_kernel2_glb_stencil->add_load("kernel2_host_stencil", "kernel2_glb_s0_w", "kernel2_glb_s0_z_z");
  prg.buffer_port_widths["kernel2_glb_stencil"] = 16;
  hcompute_kernel2_glb_stencil->add_store("kernel2_glb_stencil", "kernel2_glb_s0_w", "kernel2_glb_s0_z_z");

//consuming kernel2_glb.stencil
////producing kernel2_cgra.stencil
  auto kernel2_cgra_s0_w = prg.add_loop("kernel2_cgra_s0_w", 0, 64);
  auto kernel2_cgra_s0_z = kernel2_cgra_s0_w->add_loop("kernel2_cgra_s0_z", 0, 8);

//store is: kernel2_cgra.stencil(kernel2_cgra_s0_z, kernel2_cgra_s0_w) = kernel2_glb.stencil(kernel2_cgra_s0_z, kernel2_cgra_s0_w)
  auto hcompute_kernel2_cgra_stencil = kernel2_cgra_s0_z->add_op("op_hcompute_kernel2_cgra_stencil");
  hcompute_kernel2_cgra_stencil->add_function("hcompute_kernel2_cgra_stencil");
  hcompute_kernel2_cgra_stencil->add_load("kernel2_glb_stencil", "kernel2_cgra_s0_w", "kernel2_cgra_s0_z");
  prg.buffer_port_widths["kernel2_cgra_stencil"] = 16;
  hcompute_kernel2_cgra_stencil->add_store("kernel2_cgra_stencil", "kernel2_cgra_s0_w", "kernel2_cgra_s0_z");

//consuming kernel2_cgra.stencil
////producing output_glb.stencil
  auto output_glb_s0_y_y_glb = prg.add_loop("output_glb_s0_y_y_glb", 0, 4);
  auto output_glb_s0_x_x_glb = output_glb_s0_y_y_glb->add_loop("output_glb_s0_x_x_glb", 0, 2);
////producing input_cgra.stencil
  auto input_cgra_s0_z_z_glb = output_glb_s0_x_x_glb->add_loop("input_cgra_s0_z_z_glb", 0, 8);
  auto input_cgra_s0_y = input_cgra_s0_z_z_glb->add_loop("input_cgra_s0_y", 0, 9);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 16);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, (input_cgra_s0_z_z_glb*8)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), (input_cgra_s0_z_z_glb*8))
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_glb_stencil", "(input_cgra_s0_z_z_glb*8)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "(input_cgra_s0_z_z_glb*8)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 1)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 1))
  auto hcompute_input_cgra_stencil_1 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_1");
  hcompute_input_cgra_stencil_1->add_function("hcompute_input_cgra_stencil_1");
  hcompute_input_cgra_stencil_1->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 1)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_1->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 1)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 2)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 2))
  auto hcompute_input_cgra_stencil_2 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_2");
  hcompute_input_cgra_stencil_2->add_function("hcompute_input_cgra_stencil_2");
  hcompute_input_cgra_stencil_2->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 2)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_2->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 2)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 3)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 3))
  auto hcompute_input_cgra_stencil_3 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_3");
  hcompute_input_cgra_stencil_3->add_function("hcompute_input_cgra_stencil_3");
  hcompute_input_cgra_stencil_3->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 3)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_3->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 3)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 4)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 4))
  auto hcompute_input_cgra_stencil_4 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_4");
  hcompute_input_cgra_stencil_4->add_function("hcompute_input_cgra_stencil_4");
  hcompute_input_cgra_stencil_4->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 4)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_4->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 4)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 5)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 5))
  auto hcompute_input_cgra_stencil_5 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_5");
  hcompute_input_cgra_stencil_5->add_function("hcompute_input_cgra_stencil_5");
  hcompute_input_cgra_stencil_5->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 5)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_5->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 5)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 6)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 6))
  auto hcompute_input_cgra_stencil_6 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_6");
  hcompute_input_cgra_stencil_6->add_function("hcompute_input_cgra_stencil_6");
  hcompute_input_cgra_stencil_6->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 6)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_6->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 6)", "input_cgra_s0_y", "input_cgra_s0_x");

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y, ((input_cgra_s0_z_z_glb*8) + 7)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 7))
  auto hcompute_input_cgra_stencil_7 = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil_7");
  hcompute_input_cgra_stencil_7->add_function("hcompute_input_cgra_stencil_7");
  hcompute_input_cgra_stencil_7->add_load("input_glb_stencil", "((input_cgra_s0_z_z_glb*8) + 7)", "((output_glb_s0_y_y_glb*7) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)");
  hcompute_input_cgra_stencil_7->add_store("input_cgra_stencil", "((input_cgra_s0_z_z_glb*8) + 7)", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing f1_cgra.stencil
  auto f1_cgra_s0_y = output_glb_s0_x_x_glb->add_loop("f1_cgra_s0_y", 0, 9);
  auto f1_cgra_s0_x = f1_cgra_s0_y->add_loop("f1_cgra_s0_x", 0, 16);

//store is: f1_cgra.stencil(0, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil");
  hcompute_f1_cgra_stencil->add_function("hcompute_f1_cgra_stencil");
  prg.buffer_port_widths["f1_cgra_stencil"] = 16;
  hcompute_f1_cgra_stencil->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "0");

//store is: f1_cgra.stencil(1, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_1 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_1");
  hcompute_f1_cgra_stencil_1->add_function("hcompute_f1_cgra_stencil_1");
  hcompute_f1_cgra_stencil_1->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "1");

//store is: f1_cgra.stencil(2, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_2 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_2");
  hcompute_f1_cgra_stencil_2->add_function("hcompute_f1_cgra_stencil_2");
  hcompute_f1_cgra_stencil_2->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "2");

//store is: f1_cgra.stencil(3, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_3 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_3");
  hcompute_f1_cgra_stencil_3->add_function("hcompute_f1_cgra_stencil_3");
  hcompute_f1_cgra_stencil_3->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "3");

//store is: f1_cgra.stencil(4, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_4 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_4");
  hcompute_f1_cgra_stencil_4->add_function("hcompute_f1_cgra_stencil_4");
  hcompute_f1_cgra_stencil_4->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "4");

//store is: f1_cgra.stencil(5, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_5 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_5");
  hcompute_f1_cgra_stencil_5->add_function("hcompute_f1_cgra_stencil_5");
  hcompute_f1_cgra_stencil_5->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "5");

//store is: f1_cgra.stencil(6, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_6 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_6");
  hcompute_f1_cgra_stencil_6->add_function("hcompute_f1_cgra_stencil_6");
  hcompute_f1_cgra_stencil_6->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "6");

//store is: f1_cgra.stencil(7, f1_cgra_s0_x, f1_cgra_s0_y) = (int16)0
  auto hcompute_f1_cgra_stencil_7 = f1_cgra_s0_x->add_op("op_hcompute_f1_cgra_stencil_7");
  hcompute_f1_cgra_stencil_7->add_function("hcompute_f1_cgra_stencil_7");
  hcompute_f1_cgra_stencil_7->add_store("f1_cgra_stencil", "f1_cgra_s0_y", "f1_cgra_s0_x", "7");
  auto f1_cgra_s1_r0_0_x_rz_cgra = output_glb_s0_x_x_glb->add_loop("f1_cgra_s1_r0_0_x_rz_cgra", 0, 8);
  auto f1_cgra_s1_y = f1_cgra_s1_r0_0_x_rz_cgra->add_loop("f1_cgra_s1_y", 0, 9);
  auto f1_cgra_s1_x = f1_cgra_s1_y->add_loop("f1_cgra_s1_x", 0, 16);

//store is: f1_cgra.stencil(0, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(0, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 0)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_8 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_8");
  hcompute_f1_cgra_stencil_8->add_function("hcompute_f1_cgra_stencil_8");
  hcompute_f1_cgra_stencil_8->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "0");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_8->add_load("kernel_cgra_stencil", "0", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_8->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "0");

//store is: f1_cgra.stencil(1, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(1, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 1)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_9 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_9");
  hcompute_f1_cgra_stencil_9->add_function("hcompute_f1_cgra_stencil_9");
  hcompute_f1_cgra_stencil_9->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "1");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_9->add_load("kernel_cgra_stencil", "1", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_9->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "1");

//store is: f1_cgra.stencil(2, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(2, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 2)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_10 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_10");
  hcompute_f1_cgra_stencil_10->add_function("hcompute_f1_cgra_stencil_10");
  hcompute_f1_cgra_stencil_10->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "2");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_10->add_load("kernel_cgra_stencil", "2", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_10->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "2");

//store is: f1_cgra.stencil(3, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(3, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 3)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_11 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_11");
  hcompute_f1_cgra_stencil_11->add_function("hcompute_f1_cgra_stencil_11");
  hcompute_f1_cgra_stencil_11->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "3");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_11->add_load("kernel_cgra_stencil", "3", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_11->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "3");

//store is: f1_cgra.stencil(4, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(4, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 4)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_12 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_12");
  hcompute_f1_cgra_stencil_12->add_function("hcompute_f1_cgra_stencil_12");
  hcompute_f1_cgra_stencil_12->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "4");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_12->add_load("kernel_cgra_stencil", "4", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_12->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "4");

//store is: f1_cgra.stencil(5, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(5, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 5)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_13 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_13");
  hcompute_f1_cgra_stencil_13->add_function("hcompute_f1_cgra_stencil_13");
  hcompute_f1_cgra_stencil_13->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "5");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_13->add_load("kernel_cgra_stencil", "5", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_13->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "5");

//store is: f1_cgra.stencil(6, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(6, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 6)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_14 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_14");
  hcompute_f1_cgra_stencil_14->add_function("hcompute_f1_cgra_stencil_14");
  hcompute_f1_cgra_stencil_14->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "6");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_14->add_load("kernel_cgra_stencil", "6", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_14->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "6");

//store is: f1_cgra.stencil(7, f1_cgra_s1_x, f1_cgra_s1_y) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(7, f1_cgra_s1_x, f1_cgra_s1_y) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 7)*input_cgra.stencil(f1_cgra_s1_x, f1_cgra_s1_y, ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
  auto hcompute_f1_cgra_stencil_15 = f1_cgra_s1_x->add_op("op_hcompute_f1_cgra_stencil_15");
  hcompute_f1_cgra_stencil_15->add_function("hcompute_f1_cgra_stencil_15");
  hcompute_f1_cgra_stencil_15->add_load("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "7");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "(f1_cgra_s1_r0_0_x_rz_cgra*8)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("input_cgra_stencil", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)", "f1_cgra_s1_y", "f1_cgra_s1_x");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "(f1_cgra_s1_r0_0_x_rz_cgra*8)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7)");
  hcompute_f1_cgra_stencil_15->add_load("kernel_cgra_stencil", "7", "((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)");
  hcompute_f1_cgra_stencil_15->add_store("f1_cgra_stencil", "f1_cgra_s1_y", "f1_cgra_s1_x", "7");

//consuming f1_cgra.stencil
////producing f1_cgra$1.stencil
  auto f1_cgra_1_s0_y = output_glb_s0_x_x_glb->add_loop("f1_cgra_1_s0_y", 0, 7);
  auto f1_cgra_1_s0_x = f1_cgra_1_s0_y->add_loop("f1_cgra_1_s0_x", 0, 14);

//store is: f1_cgra$1.stencil(0, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil");
  hcompute_f1_cgra_1_stencil->add_function("hcompute_f1_cgra_1_stencil");
  prg.buffer_port_widths["f1_cgra_1_stencil"] = 16;
  hcompute_f1_cgra_1_stencil->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "0");

//store is: f1_cgra$1.stencil(1, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_1 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_1");
  hcompute_f1_cgra_1_stencil_1->add_function("hcompute_f1_cgra_1_stencil_1");
  hcompute_f1_cgra_1_stencil_1->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "1");

//store is: f1_cgra$1.stencil(2, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_2 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_2");
  hcompute_f1_cgra_1_stencil_2->add_function("hcompute_f1_cgra_1_stencil_2");
  hcompute_f1_cgra_1_stencil_2->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "2");

//store is: f1_cgra$1.stencil(3, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_3 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_3");
  hcompute_f1_cgra_1_stencil_3->add_function("hcompute_f1_cgra_1_stencil_3");
  hcompute_f1_cgra_1_stencil_3->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "3");

//store is: f1_cgra$1.stencil(4, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_4 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_4");
  hcompute_f1_cgra_1_stencil_4->add_function("hcompute_f1_cgra_1_stencil_4");
  hcompute_f1_cgra_1_stencil_4->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "4");

//store is: f1_cgra$1.stencil(5, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_5 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_5");
  hcompute_f1_cgra_1_stencil_5->add_function("hcompute_f1_cgra_1_stencil_5");
  hcompute_f1_cgra_1_stencil_5->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "5");

//store is: f1_cgra$1.stencil(6, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_6 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_6");
  hcompute_f1_cgra_1_stencil_6->add_function("hcompute_f1_cgra_1_stencil_6");
  hcompute_f1_cgra_1_stencil_6->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "6");

//store is: f1_cgra$1.stencil(7, f1_cgra_1_s0_x, f1_cgra_1_s0_y) = (int16)0
  auto hcompute_f1_cgra_1_stencil_7 = f1_cgra_1_s0_x->add_op("op_hcompute_f1_cgra_1_stencil_7");
  hcompute_f1_cgra_1_stencil_7->add_function("hcompute_f1_cgra_1_stencil_7");
  hcompute_f1_cgra_1_stencil_7->add_store("f1_cgra_1_stencil", "f1_cgra_1_s0_y", "f1_cgra_1_s0_x", "7");
  auto f1_cgra_1_s1_r1_0_y = output_glb_s0_x_x_glb->add_loop("f1_cgra_1_s1_r1_0_y", 0, 3);
  auto f1_cgra_1_s1_r1_0_x = f1_cgra_1_s1_r1_0_y->add_loop("f1_cgra_1_s1_r1_0_x", 0, 3);
  auto f1_cgra_1_s1_y = f1_cgra_1_s1_r1_0_x->add_loop("f1_cgra_1_s1_y", 0, 7);
  auto f1_cgra_1_s1_x = f1_cgra_1_s1_y->add_loop("f1_cgra_1_s1_x", 0, 14);

//store is: f1_cgra$1.stencil(0, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(0, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_8 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_8");
  hcompute_f1_cgra_1_stencil_8->add_function("hcompute_f1_cgra_stencil_8");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "0");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_8->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "0");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "1");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "2");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "3");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "4");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "5");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "7");
  hcompute_f1_cgra_1_stencil_8->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "0", "6");
  hcompute_f1_cgra_1_stencil_8->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "0");

//store is: f1_cgra$1.stencil(1, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(1, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_9 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_9");
  hcompute_f1_cgra_1_stencil_9->add_function("hcompute_f1_cgra_stencil_9");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "1");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_9->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "1");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "2");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "3");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "4");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "5");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "7");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "6");
  hcompute_f1_cgra_1_stencil_9->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "1", "0");
  hcompute_f1_cgra_1_stencil_9->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "1");

//store is: f1_cgra$1.stencil(2, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(2, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_10 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_10");
  hcompute_f1_cgra_1_stencil_10->add_function("hcompute_f1_cgra_stencil_10");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "2");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_10->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "0");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "1");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "2");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "3");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "4");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "5");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "7");
  hcompute_f1_cgra_1_stencil_10->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "2", "6");
  hcompute_f1_cgra_1_stencil_10->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "2");

//store is: f1_cgra$1.stencil(3, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(3, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_11 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_11");
  hcompute_f1_cgra_1_stencil_11->add_function("hcompute_f1_cgra_stencil_11");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "3");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_11->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "0");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "1");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "2");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "3");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "4");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "5");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "7");
  hcompute_f1_cgra_1_stencil_11->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "3", "6");
  hcompute_f1_cgra_1_stencil_11->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "3");

//store is: f1_cgra$1.stencil(4, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(4, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_12 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_12");
  hcompute_f1_cgra_1_stencil_12->add_function("hcompute_f1_cgra_stencil_12");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "4");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_12->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "0");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "1");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "2");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "3");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "4");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "5");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "7");
  hcompute_f1_cgra_1_stencil_12->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "4", "6");
  hcompute_f1_cgra_1_stencil_12->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "4");

//store is: f1_cgra$1.stencil(5, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(5, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_13 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_13");
  hcompute_f1_cgra_1_stencil_13->add_function("hcompute_f1_cgra_stencil_13");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "5");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_13->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "0");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "1");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "2");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "3");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "4");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "5");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "7");
  hcompute_f1_cgra_1_stencil_13->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "5", "6");
  hcompute_f1_cgra_1_stencil_13->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "5");

//store is: f1_cgra$1.stencil(6, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(6, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_14 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_14");
  hcompute_f1_cgra_1_stencil_14->add_function("hcompute_f1_cgra_stencil_14");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "6");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_14->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "0");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "1");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "2");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "3");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "4");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "5");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "7");
  hcompute_f1_cgra_1_stencil_14->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "6", "6");
  hcompute_f1_cgra_1_stencil_14->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "6");

//store is: f1_cgra$1.stencil(7, f1_cgra_1_s1_x, f1_cgra_1_s1_y) = ((kernel1_cgra.stencil(0, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (f1_cgra$1.stencil(7, f1_cgra_1_s1_x, f1_cgra_1_s1_y) + ((kernel1_cgra.stencil(1, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(2, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(3, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(4, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(5, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + ((kernel1_cgra.stencil(7, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y))) + (kernel1_cgra.stencil(6, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, (f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x), (f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)))))))))))
  auto hcompute_f1_cgra_1_stencil_15 = f1_cgra_1_s1_x->add_op("op_hcompute_f1_cgra_1_stencil_15");
  hcompute_f1_cgra_1_stencil_15->add_function("hcompute_f1_cgra_stencil_15");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "7");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "0");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "1");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "2");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "3");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "4");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "5");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "7");
  hcompute_f1_cgra_1_stencil_15->add_load("f1_cgra_stencil", "(f1_cgra_1_s1_r1_0_y + f1_cgra_1_s1_y)", "(f1_cgra_1_s1_r1_0_x + f1_cgra_1_s1_x)", "6");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "0");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "1");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "2");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "3");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "4");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "5");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "7");
  hcompute_f1_cgra_1_stencil_15->add_load("kernel1_cgra_stencil", "f1_cgra_1_s1_r1_0_y", "f1_cgra_1_s1_r1_0_x", "7", "6");
  hcompute_f1_cgra_1_stencil_15->add_store("f1_cgra_1_stencil", "f1_cgra_1_s1_y", "f1_cgra_1_s1_x", "7");

//consuming f1_cgra$1.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y = output_glb_s0_x_x_glb->add_loop("output_cgra_s0_y", 0, 7);
  auto output_cgra_s0_x = output_cgra_s0_y->add_loop("output_cgra_s0_x", 0, 14);
  auto output_cgra_s0_w_w = output_cgra_s0_x->add_loop("output_cgra_s0_w_w", 0, 8);

//store is: output_cgra.stencil((output_cgra_s0_w_w*8), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "(output_cgra_s0_w_w*8)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 1), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_1 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 1)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 2), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_2 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 2)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 3), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_3 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_function("hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 3)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 4), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_4 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_function("hcompute_output_cgra_stencil_4");
  hcompute_output_cgra_stencil_4->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 4)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 5), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_5 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_function("hcompute_output_cgra_stencil_5");
  hcompute_output_cgra_stencil_5->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 5)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 6), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_6 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_function("hcompute_output_cgra_stencil_6");
  hcompute_output_cgra_stencil_6->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 6)");

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 7), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
  auto hcompute_output_cgra_stencil_7 = output_cgra_s0_w_w->add_op("op_hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_function("hcompute_output_cgra_stencil_7");
  hcompute_output_cgra_stencil_7->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "((output_cgra_s0_w_w*8) + 7)");
  auto output_cgra_s1_y = output_glb_s0_x_x_glb->add_loop("output_cgra_s1_y", 0, 7);
  auto output_cgra_s1_x = output_cgra_s1_y->add_loop("output_cgra_s1_x", 0, 14);
  auto output_cgra_s1_w_w = output_cgra_s1_x->add_loop("output_cgra_s1_w_w", 0, 8);

//store is: output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_8 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_function("hcompute_f1_cgra_stencil_8");
  hcompute_output_cgra_stencil_8->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "(output_cgra_s1_w_w*8)");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_8->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "0");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "1");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "2");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "3");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "4");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "5");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "7");
  hcompute_output_cgra_stencil_8->add_load("kernel2_cgra_stencil", "(output_cgra_s1_w_w*8)", "6");
  hcompute_output_cgra_stencil_8->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "(output_cgra_s1_w_w*8)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_9 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_function("hcompute_f1_cgra_stencil_9");
  hcompute_output_cgra_stencil_9->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 1)");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_9->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "1");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "2");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "3");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "4");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "5");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "7");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "6");
  hcompute_output_cgra_stencil_9->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 1)", "0");
  hcompute_output_cgra_stencil_9->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 1)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_10 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_function("hcompute_f1_cgra_stencil_10");
  hcompute_output_cgra_stencil_10->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 2)");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_10->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "0");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "1");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "2");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "3");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "4");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "5");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "7");
  hcompute_output_cgra_stencil_10->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 2)", "6");
  hcompute_output_cgra_stencil_10->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 2)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_11 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_function("hcompute_f1_cgra_stencil_11");
  hcompute_output_cgra_stencil_11->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 3)");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_11->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "0");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "1");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "2");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "3");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "4");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "5");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "7");
  hcompute_output_cgra_stencil_11->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 3)", "6");
  hcompute_output_cgra_stencil_11->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 3)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_12 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_function("hcompute_f1_cgra_stencil_12");
  hcompute_output_cgra_stencil_12->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 4)");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_12->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "0");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "1");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "2");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "3");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "4");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "5");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "7");
  hcompute_output_cgra_stencil_12->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 4)", "6");
  hcompute_output_cgra_stencil_12->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 4)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_13 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_function("hcompute_f1_cgra_stencil_13");
  hcompute_output_cgra_stencil_13->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 5)");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_13->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "0");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "1");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "2");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "3");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "4");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "5");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "7");
  hcompute_output_cgra_stencil_13->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 5)", "6");
  hcompute_output_cgra_stencil_13->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 5)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_14 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_function("hcompute_f1_cgra_stencil_14");
  hcompute_output_cgra_stencil_14->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 6)");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_14->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "0");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "1");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "2");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "3");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "4");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "5");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "7");
  hcompute_output_cgra_stencil_14->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 6)", "6");
  hcompute_output_cgra_stencil_14->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 6)");

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(0, output_cgra_s1_x, output_cgra_s1_y)) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(1, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(2, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(3, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(4, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(5, output_cgra_s1_x, output_cgra_s1_y)) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(7, output_cgra_s1_x, output_cgra_s1_y)) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(6, output_cgra_s1_x, output_cgra_s1_y))))))))))
  auto hcompute_output_cgra_stencil_15 = output_cgra_s1_w_w->add_op("op_hcompute_output_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_function("hcompute_f1_cgra_stencil_15");
  hcompute_output_cgra_stencil_15->add_load("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 7)");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "0");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "1");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "2");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "3");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "4");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "5");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "7");
  hcompute_output_cgra_stencil_15->add_load("f1_cgra_1_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "6");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "0");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "1");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "2");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "3");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "4");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "5");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "7");
  hcompute_output_cgra_stencil_15->add_load("kernel2_cgra_stencil", "((output_cgra_s1_w_w*8) + 7)", "6");
  hcompute_output_cgra_stencil_15->add_store("output_cgra_stencil", "output_cgra_s1_y", "output_cgra_s1_x", "((output_cgra_s1_w_w*8) + 7)");

//consuming output_cgra.stencil
  auto output_glb_s0_y_y_cgra = output_glb_s0_x_x_glb->add_loop("output_glb_s0_y_y_cgra", 0, 7);
  auto output_glb_s0_x_x_cgra = output_glb_s0_y_y_cgra->add_loop("output_glb_s0_x_x_cgra", 0, 14);
  auto output_glb_s0_w_w = output_glb_s0_x_x_cgra->add_loop("output_glb_s0_w_w", 0, 8);

//store is: output_glb.stencil((output_glb_s0_w_w*8), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil((output_glb_s0_w_w*8), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_function("hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "(output_glb_s0_w_w*8)");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_glb_stencil->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "(output_glb_s0_w_w*8)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 1), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_1 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_1");
  hcompute_output_glb_stencil_1->add_function("hcompute_output_glb_stencil_1");
  hcompute_output_glb_stencil_1->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 1)");
  hcompute_output_glb_stencil_1->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 1)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 2), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_2 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_2");
  hcompute_output_glb_stencil_2->add_function("hcompute_output_glb_stencil_2");
  hcompute_output_glb_stencil_2->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 2)");
  hcompute_output_glb_stencil_2->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 2)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 3), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_3 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_3");
  hcompute_output_glb_stencil_3->add_function("hcompute_output_glb_stencil_3");
  hcompute_output_glb_stencil_3->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 3)");
  hcompute_output_glb_stencil_3->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 3)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 4), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_4 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_4");
  hcompute_output_glb_stencil_4->add_function("hcompute_output_glb_stencil_4");
  hcompute_output_glb_stencil_4->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 4)");
  hcompute_output_glb_stencil_4->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 4)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 5), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 5), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_5 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_5");
  hcompute_output_glb_stencil_5->add_function("hcompute_output_glb_stencil_5");
  hcompute_output_glb_stencil_5->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 5)");
  hcompute_output_glb_stencil_5->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 5)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 6), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 6), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_6 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_6");
  hcompute_output_glb_stencil_6->add_function("hcompute_output_glb_stencil_6");
  hcompute_output_glb_stencil_6->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 6)");
  hcompute_output_glb_stencil_6->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 6)");

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 7), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 7), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil_7 = output_glb_s0_w_w->add_op("op_hcompute_output_glb_stencil_7");
  hcompute_output_glb_stencil_7->add_function("hcompute_output_glb_stencil_7");
  hcompute_output_glb_stencil_7->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "((output_glb_s0_w_w*8) + 7)");
  hcompute_output_glb_stencil_7->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "((output_glb_s0_w_w*8) + 7)");

//consuming output_glb.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);
  auto hw_output_s0_w_w = hw_output_s0_x_xi->add_loop("hw_output_s0_w_w", 0, 8);

//store is: hw_output.stencil((hw_output_s0_w_w*8), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil((hw_output_s0_w_w*8), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "(hw_output_s0_w_w*8)");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "(hw_output_s0_w_w*8)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 1)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 2)");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 2)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 3)");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 3)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 4), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 4), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 4)");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 4)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 5), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 5), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 5)");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 5)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 6), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 6), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 6)");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 6)");

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 7), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 7), hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 7)");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "((hw_output_s0_w_w*8) + 7)");

  return prg;
}

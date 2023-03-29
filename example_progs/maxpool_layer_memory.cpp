#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog maxpool_layer() {
  prog prg;
  prg.compute_unit_file = "maxpool_layer_compute.h";
  prg.name = "maxpool_layer";

// Stencil<int16_t, 16, 58, 58> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<int16_t, 16, 56, 56> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_glb.stencil
  auto input_glb_s0_y = prg.add_loop("input_glb_s0_y", 0, 58);
  auto input_glb_s0_x = input_glb_s0_y->add_loop("input_glb_s0_x", 0, 58);
  auto input_glb_s0_z_z = input_glb_s0_x->add_loop("input_glb_s0_z_z", 0, 16);

//store is: input_glb.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y)
  auto hcompute_input_glb_stencil = input_glb_s0_z_z->add_op("op_hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_function("hcompute_input_glb_stencil");
  hcompute_input_glb_stencil->add_load("input_host_stencil", "input_glb_s0_y", "input_glb_s0_x", "input_glb_s0_z_z");
  prg.buffer_port_widths["input_glb_stencil"] = 16;
  hcompute_input_glb_stencil->add_store("input_glb_stencil", "input_glb_s0_y", "input_glb_s0_x", "input_glb_s0_z_z");

//consuming input_glb.stencil
////producing output_glb.stencil
  auto output_glb_s0_y_y_glb = prg.add_loop("output_glb_s0_y_y_glb", 0, 4);
  auto output_glb_s0_x_x_glb = output_glb_s0_y_y_glb->add_loop("output_glb_s0_x_x_glb", 0, 4);
  auto output_glb_s0_w_w_glb = output_glb_s0_x_x_glb->add_loop("output_glb_s0_w_w_glb", 0, 16);
////producing output_cgra.stencil
////producing input_cgra.stencil
  auto input_cgra_s0_y = output_glb_s0_w_w_glb->add_loop("input_cgra_s0_y", 0, 16);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 16);

//store is: input_cgra.stencil(0, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(output_glb_s0_w_w_glb, ((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*14) + input_cgra_s0_y))
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_glb_stencil", "((output_glb_s0_y_y_glb*14) + input_cgra_s0_y)", "((output_glb_s0_x_x_glb*14) + input_cgra_s0_x)", "output_glb_s0_w_w_glb");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "0");

//consuming input_cgra.stencil
////producing maximum_func.stencil
  auto maximum_func_s0_y = output_glb_s0_w_w_glb->add_loop("maximum_func_s0_y", 0, 14);
  auto maximum_func_s0_x = maximum_func_s0_y->add_loop("maximum_func_s0_x", 0, 14);

//store is: maximum_func.stencil(0, maximum_func_s0_x, maximum_func_s0_y) = (int16)-32768
  auto hcompute_maximum_func_stencil = maximum_func_s0_x->add_op("op_hcompute_maximum_func_stencil");
  hcompute_maximum_func_stencil->add_function("hcompute_maximum_func_stencil");
  prg.buffer_port_widths["maximum_func_stencil"] = 16;
  hcompute_maximum_func_stencil->add_store("maximum_func_stencil", "maximum_func_s0_y", "maximum_func_s0_x", "0");
  auto maximum_func_s1_y = output_glb_s0_w_w_glb->add_loop("maximum_func_s1_y", 0, 14);
  auto maximum_func_s1_x = maximum_func_s1_y->add_loop("maximum_func_s1_x", 0, 14);

//store is: maximum_func.stencil(0, maximum_func_s1_x, maximum_func_s1_y) = max(input_cgra.stencil(0, (maximum_func_s1_x + 2), (maximum_func_s1_y + 2)), max(input_cgra.stencil(0, (maximum_func_s1_x + 1), (maximum_func_s1_y + 2)), max(input_cgra.stencil(0, maximum_func_s1_x, (maximum_func_s1_y + 2)), max(input_cgra.stencil(0, (maximum_func_s1_x + 2), (maximum_func_s1_y + 1)), max(input_cgra.stencil(0, (maximum_func_s1_x + 1), (maximum_func_s1_y + 1)), max(input_cgra.stencil(0, maximum_func_s1_x, (maximum_func_s1_y + 1)), max(input_cgra.stencil(0, (maximum_func_s1_x + 2), maximum_func_s1_y), max(input_cgra.stencil(0, (maximum_func_s1_x + 1), maximum_func_s1_y), max(maximum_func.stencil(0, maximum_func_s1_x, maximum_func_s1_y), input_cgra.stencil(0, maximum_func_s1_x, maximum_func_s1_y))))))))))
  auto hcompute_maximum_func_stencil_1 = maximum_func_s1_x->add_op("op_hcompute_maximum_func_stencil_1");
  hcompute_maximum_func_stencil_1->add_function("hcompute_maximum_func_stencil_1");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "(maximum_func_s1_y + 2)", "(maximum_func_s1_x + 2)", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "(maximum_func_s1_y + 2)", "(maximum_func_s1_x + 1)", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "(maximum_func_s1_y + 2)", "maximum_func_s1_x", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "(maximum_func_s1_y + 1)", "(maximum_func_s1_x + 2)", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "(maximum_func_s1_y + 1)", "(maximum_func_s1_x + 1)", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "(maximum_func_s1_y + 1)", "maximum_func_s1_x", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "maximum_func_s1_y", "(maximum_func_s1_x + 2)", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "maximum_func_s1_y", "(maximum_func_s1_x + 1)", "0");
  hcompute_maximum_func_stencil_1->add_load("input_cgra_stencil", "maximum_func_s1_y", "maximum_func_s1_x", "0");
  hcompute_maximum_func_stencil_1->add_load("maximum_func_stencil", "maximum_func_s1_y", "maximum_func_s1_x", "0");
  hcompute_maximum_func_stencil_1->add_store("maximum_func_stencil", "maximum_func_s1_y", "maximum_func_s1_x", "0");

//consuming maximum_func.stencil
  auto output_cgra_s0_y = output_glb_s0_w_w_glb->add_loop("output_cgra_s0_y", 0, 14);
  auto output_cgra_s0_x = output_cgra_s0_y->add_loop("output_cgra_s0_x", 0, 14);

//store is: output_cgra.stencil(0, output_cgra_s0_x, output_cgra_s0_y) = maximum_func.stencil(0, output_cgra_s0_x, output_cgra_s0_y)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("maximum_func_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "0");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "output_cgra_s0_y", "output_cgra_s0_x", "0");

//consuming output_cgra.stencil
  auto output_glb_s0_y_y_cgra = output_glb_s0_w_w_glb->add_loop("output_glb_s0_y_y_cgra", 0, 14);
  auto output_glb_s0_x_x_cgra = output_glb_s0_y_y_cgra->add_loop("output_glb_s0_x_x_cgra", 0, 14);

//store is: output_glb.stencil(output_glb_s0_w_w_glb, ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*14) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(0, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
  auto hcompute_output_glb_stencil = output_glb_s0_x_x_cgra->add_op("op_hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_function("hcompute_output_glb_stencil");
  hcompute_output_glb_stencil->add_load("output_cgra_stencil", "output_glb_s0_y_y_cgra", "output_glb_s0_x_x_cgra", "0");
  prg.buffer_port_widths["output_glb_stencil"] = 16;
  hcompute_output_glb_stencil->add_store("output_glb_stencil", "((output_glb_s0_y_y_glb*14) + output_glb_s0_y_y_cgra)", "((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra)", "output_glb_s0_w_w_glb");

//consuming output_glb.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 56);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 56);
  auto hw_output_s0_w_w = hw_output_s0_x_xi->add_loop("hw_output_s0_w_w", 0, 16);

//store is: hw_output.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_w_w->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_w_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_w_w");

  return prg;
}


// in_img=56 pad=1 ksize=3 stride=1 n_ic=16 n_oc=16

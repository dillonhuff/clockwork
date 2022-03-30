#include "coreir_backend.h"
#ifdef COREIR
#include "cwlib.h"
#include "cgralib.h"
#endif
#include "app.h"
#include "prog_splitting_test.h"
#include "codegen.h"
#include "example_progs.h"
#include "lake_target.h"
#include "simple_example_progs.h"
#include "prog.h"
#include "ubuffer.h"

#include <chrono>

#ifdef COREIR
CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff);
#endif

void blur_example();

prog resnet_hc_multitile() {
  prog prg;
  prg.compute_unit_file = "resnet_compute.h";
  prg.name = "resnet";

  // Stencil<uint16_t, 8, 30, 30> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
  // Stencil<uint16_t, 8, 16, 3, 3> &kernel_copy_stencil = arg_1;
  prg.add_input("kernel_copy_stencil");
  prg.buffer_port_widths["kernel_copy_stencil"] = 16;
  // Stencil<void *> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


  //consuming kernel_copy.stencil

  //consuming input_copy.stencil
  ////producing hw_input.stencil
  auto hw_input_s0_t = prg.add_loop("hw_input_s0_t", 0, 4);
  auto hw_input_s0_y = hw_input_s0_t->add_loop("hw_input_s0_y", 0, 32);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 32);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 8);

  //store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_t", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_t", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");
  ////producing hw_kernel.stencil
  auto hw_kernel_s0_t = prg.add_loop("hw_kernel_s0_t", 0, 4);
  auto hw_kernel_s0_y = hw_kernel_s0_t->add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 16);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 8);

  //store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_t", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_t", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");
  ////producing conv.stencil
  auto conv_s0_t = prg.add_loop("conv_s0_t", 0, 4);
  auto conv_s0_w = conv_s0_t->add_loop("conv_s0_w", 0, 16);
  auto conv_s0_y = conv_s0_w->add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

  //store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_t", "conv_s0_y", "conv_s0_x", "conv_s0_w");

  //consuming hw_kernel.stencil

  //consuming hw_input.stencil
  auto conv_s1_r_t = prg.add_loop("conv_s1_r_t", 0, 4);
  auto conv_s1_r_y = conv_s1_r_t->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_oc = conv_s1_r_x->add_loop("conv_s1_oc", 0, 4);
  auto conv_s1_y = conv_s1_oc->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);
  auto conv_s1_ic = conv_s1_x->add_loop("conv_s1_ic", 0, 4);

  //store is: conv.stencil(conv.s1.x, conv.s1.y, 0) = ((hw_kernel.stencil(0, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 0) + (hw_kernel.stencil(7, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_ic->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  for (int oc_unroll = 0; oc_unroll < 4; oc_unroll ++) {
    hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_r_t", "conv_s1_y", "conv_s1_x", "conv_s1_oc*4+" +  to_string(oc_unroll));
    for (int ic_unroll = 0; ic_unroll < 2; ic_unroll ++) {
      if (oc_unroll == 0)
        hcompute_conv_stencil_1->add_load(
            "hw_input_stencil", "conv_s1_r_t",
            "(conv_s1_r_y + conv_s1_y)",
            "(conv_s1_r_x + conv_s1_x)",
            to_string(ic_unroll) + "+conv_s1_ic*2");
      hcompute_conv_stencil_1->add_load(
          "hw_kernel_stencil", "conv_s1_r_t",
          "(conv_s1_r_y)", "(conv_s1_r_x)",
          to_string(oc_unroll) + "+conv_s1_oc*4",
          to_string(ic_unroll) + "+conv_s1_ic*2");
    }
    hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_r_t", "conv_s1_y", "conv_s1_x", to_string(oc_unroll) + "+conv_s1_oc*4");
  }

  //consuming conv.stencil
  auto hw_output_s0_t = prg.add_loop("hw_output_s0_t", 0, 4);
  auto hw_output_s0_w = hw_output_s0_t->add_loop("hw_output_s0_w", 0, 16);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

  //store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_t", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_t", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_w");

  return prg;
}

prog resnet_hc() {
  prog prg;
  prg.compute_unit_file = "resnet_compute.h";
  prg.name = "resnet";

  // Stencil<uint16_t, 8, 30, 30> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
  // Stencil<uint16_t, 8, 16, 3, 3> &kernel_copy_stencil = arg_1;
  prg.add_input("kernel_copy_stencil");
  prg.buffer_port_widths["kernel_copy_stencil"] = 16;
  // Stencil<void *> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


  //consuming kernel_copy.stencil

  //consuming input_copy.stencil
  ////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 32);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 32);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 8);

  //store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");
  ////producing hw_kernel.stencil
  auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 16);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 8);

  //store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");
  ////producing conv.stencil
  auto conv_s0_w = prg.add_loop("conv_s0_w", 0, 16);
  auto conv_s0_y = conv_s0_w->add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

  //store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x", "conv_s0_w");

  //consuming hw_kernel.stencil

  //consuming hw_input.stencil
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_oc = conv_s1_r_x->add_loop("conv_s1_oc", 0, 4);
  auto conv_s1_y = conv_s1_oc->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);
  auto conv_s1_ic = conv_s1_x->add_loop("conv_s1_ic", 0, 4);

  //store is: conv.stencil(conv.s1.x, conv.s1.y, 0) = ((hw_kernel.stencil(0, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 0) + (hw_kernel.stencil(7, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_ic->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  for (int oc_unroll = 0; oc_unroll < 4; oc_unroll ++) {
    hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x", "conv_s1_oc*4+" +  to_string(oc_unroll));
    for (int ic_unroll = 0; ic_unroll < 2; ic_unroll ++) {
      if (oc_unroll == 0)
        hcompute_conv_stencil_1->add_load("hw_input_stencil",
            "(conv_s1_r_y + conv_s1_y)",
            "(conv_s1_r_x + conv_s1_x)",
            to_string(ic_unroll) + "+conv_s1_ic*2");
      hcompute_conv_stencil_1->add_load("hw_kernel_stencil",
          "(conv_s1_r_y)", "(conv_s1_r_x)",
          to_string(oc_unroll) + "+conv_s1_oc*4",
          to_string(ic_unroll) + "+conv_s1_ic*2");
    }
    hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x", to_string(oc_unroll) + "+conv_s1_oc*4");
  }

  //consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 16);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

  //store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_w");

  return prg;
}

//prog resnet() {
//prog prg;
//prg.compute_unit_file = "resnet_compute.h";
//prg.name = "resnet";

//// Stencil<uint16_t, 8, 30, 30> &input_copy_stencil = arg_0;
//prg.add_input("input_copy_stencil");
//prg.buffer_port_widths["input_copy_stencil"] = 16;
//// Stencil<uint16_t, 8, 16, 3, 3> &kernel_copy_stencil = arg_1;
//prg.add_input("kernel_copy_stencil");
//prg.buffer_port_widths["kernel_copy_stencil"] = 16;
//// Stencil<void *> &hw_output_stencil = arg_2;
//prg.add_output("hw_output_stencil");
//prg.buffer_port_widths["hw_output_stencil"] = 16;


////consuming kernel_copy.stencil

////consuming input_copy.stencil
//////producing hw_input.stencil
//auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 30);
//auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 30);
//auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 8);

////store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
//auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
//hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
//hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
//prg.buffer_port_widths["hw_input_stencil"] = 16;
//hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
//////producing hw_kernel.stencil
//auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
//auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
//auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 16);
//auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 8);

////store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
//auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
//hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
//hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
//prg.buffer_port_widths["hw_kernel_stencil"] = 16;
//hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
//////producing conv.stencil
//auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
//auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);
//auto conv_s0_w = conv_s0_x->add_loop("conv_s0_w", 0, 16);

////store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
//auto hcompute_conv_stencil = conv_s0_w->add_op("op_hcompute_conv_stencil");
//hcompute_conv_stencil->add_function("hcompute_conv_stencil");
//prg.buffer_port_widths["conv_stencil"] = 16;
//hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y", "conv_s0_w");

////consuming hw_kernel.stencil

////consuming hw_input.stencil
//auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
//auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
//auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
//auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

////store is: conv.stencil(conv.s1.x, conv.s1.y, 0) = ((hw_kernel.stencil(0, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 0) + (hw_kernel.stencil(7, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
//hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
//hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "0");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "0", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "1", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "2", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "3", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "4", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "5", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "6", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "7", "0", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "0");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 1) = ((hw_kernel.stencil(0, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 1) + (hw_kernel.stencil(7, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_2 = conv_s1_x->add_op("op_hcompute_conv_stencil_2");
//hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
//hcompute_conv_stencil_2->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "1");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "1", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "2", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "3", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "4", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "5", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "6", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "7", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "0", "1", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_2->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "1");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 2) = ((hw_kernel.stencil(0, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 2) + (hw_kernel.stencil(7, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_3 = conv_s1_x->add_op("op_hcompute_conv_stencil_3");
//hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
//hcompute_conv_stencil_3->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "2");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "0", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "1", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "2", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "3", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "4", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "5", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "6", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "7", "2", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_3->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "2");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 3) = ((hw_kernel.stencil(0, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 3) + (hw_kernel.stencil(7, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_4 = conv_s1_x->add_op("op_hcompute_conv_stencil_4");
//hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
//hcompute_conv_stencil_4->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "3");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "0", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "1", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "2", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "3", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "4", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "5", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "6", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "7", "3", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_4->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "3");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 4) = ((hw_kernel.stencil(0, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 4) + (hw_kernel.stencil(7, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_5 = conv_s1_x->add_op("op_hcompute_conv_stencil_5");
//hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
//hcompute_conv_stencil_5->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "4");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "0", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "1", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "2", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "3", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "4", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "5", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "6", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "7", "4", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_5->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "4");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 5) = ((hw_kernel.stencil(0, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 5) + (hw_kernel.stencil(7, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_6 = conv_s1_x->add_op("op_hcompute_conv_stencil_6");
//hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
//hcompute_conv_stencil_6->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "5");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "0", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "1", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "2", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "3", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "4", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "5", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "6", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "7", "5", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_6->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "5");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 6) = ((hw_kernel.stencil(0, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 6) + (hw_kernel.stencil(7, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_7 = conv_s1_x->add_op("op_hcompute_conv_stencil_7");
//hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
//hcompute_conv_stencil_7->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "6");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "0", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "1", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "2", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "3", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "4", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "5", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "6", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "7", "6", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_7->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "6");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 7) = ((hw_kernel.stencil(0, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 7) + (hw_kernel.stencil(7, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_8 = conv_s1_x->add_op("op_hcompute_conv_stencil_8");
//hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
//hcompute_conv_stencil_8->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "7");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "0", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "1", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "2", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "3", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "4", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "5", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "6", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "7", "7", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_8->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "7");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 8) = ((hw_kernel.stencil(0, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 8) + (hw_kernel.stencil(7, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_9 = conv_s1_x->add_op("op_hcompute_conv_stencil_9");
//hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
//hcompute_conv_stencil_9->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "8");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "0", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "1", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "2", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "3", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "4", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "5", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "6", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "7", "8", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_9->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "8");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 9) = ((hw_kernel.stencil(0, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 9) + (hw_kernel.stencil(7, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_10 = conv_s1_x->add_op("op_hcompute_conv_stencil_10");
//hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
//hcompute_conv_stencil_10->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "9");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "0", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "1", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "2", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "3", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "4", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "5", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "6", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "7", "9", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_10->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "9");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 10) = ((hw_kernel.stencil(0, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 10) + (hw_kernel.stencil(7, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_11 = conv_s1_x->add_op("op_hcompute_conv_stencil_11");
//hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
//hcompute_conv_stencil_11->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "10");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "0", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "1", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "2", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "3", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "4", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "5", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "6", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "7", "10", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_11->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "10");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 11) = ((hw_kernel.stencil(0, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 11) + (hw_kernel.stencil(7, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_12 = conv_s1_x->add_op("op_hcompute_conv_stencil_12");
//hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
//hcompute_conv_stencil_12->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "11");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "0", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "1", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "2", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "3", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "4", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "5", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "6", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "7", "11", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_12->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "11");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 12) = ((hw_kernel.stencil(0, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 12) + (hw_kernel.stencil(7, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_13 = conv_s1_x->add_op("op_hcompute_conv_stencil_13");
//hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
//hcompute_conv_stencil_13->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "12");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "3", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "4", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "5", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "6", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "7", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "0", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "1", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "2", "12", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_13->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "12");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 13) = ((hw_kernel.stencil(0, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 13) + (hw_kernel.stencil(7, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_14 = conv_s1_x->add_op("op_hcompute_conv_stencil_14");
//hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
//hcompute_conv_stencil_14->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "13");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "0", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "1", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "2", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "3", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "4", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "5", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "6", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "7", "13", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_14->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "13");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 14) = ((hw_kernel.stencil(0, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 14) + (hw_kernel.stencil(7, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_15 = conv_s1_x->add_op("op_hcompute_conv_stencil_15");
//hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
//hcompute_conv_stencil_15->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "14");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "0", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "1", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "2", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "3", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "4", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "5", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "6", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "7", "14", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_15->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "14");

////store is: conv.stencil(conv.s1.x, conv.s1.y, 15) = ((hw_kernel.stencil(0, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 15) + (hw_kernel.stencil(7, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
//auto hcompute_conv_stencil_16 = conv_s1_x->add_op("op_hcompute_conv_stencil_16");
//hcompute_conv_stencil_16->add_function("hcompute_conv_stencil_16");
//hcompute_conv_stencil_16->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "15");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "0", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "1", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "2", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "3", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "4", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "5", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "6", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "7", "15", "conv_s1_r_x", "conv_s1_r_y");
//hcompute_conv_stencil_16->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "15");

////consuming conv.stencil
//auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 16);
//auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
//auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

////store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
//auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
//hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
//hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");
//hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");

//return prg;
//}

prog mini_conv_halide_fixed() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_compute.h";
  prg.name = "mini_conv_halide_fixed";

  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;

  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

  auto loop_hw_input_copy_s0_x = prg.add_loop("hw_input_copy_s0_x", 0, 64);

  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x");

  auto loop_hw_output_s0_x_xo = prg.add_loop("hw_output_s0_x_xo", 0, 62);

  auto hcompute_conv_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  prg.buffer_port_widths["conv_stencil_init"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil_init", "hw_output_s0_x_xo");

  auto hcompute_conv_stencil_1 = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil_init", "hw_output_s0_x_xo");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "hw_output_s0_x_xo");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xo");

  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo");

  return prg;
}

prog mini_conv_halide() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_compute.h";
  prg.name = "mini_conv_halide";

  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;

  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

  auto loop_hw_input_copy_s0_x = prg.add_loop("hw_input_copy_s0_x", 0, 64);

  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x");

  auto loop_hw_output_s0_x_xo = prg.add_loop("hw_output_s0_x_xo", 0, 62);

  auto hcompute_conv_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_x_xo");

  auto hcompute_conv_stencil_1 = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_x_xo");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "hw_output_s0_x_xo");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xo");

  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo");

  return prg;
}

prog conv_3_3_halide() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_compute.h";
  prg.name = "conv_3_3_halide";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming hw_input.stencil
////producing hw_input_copy.stencil
  auto loop_hw_input_copy_s0_y = prg.add_loop("hw_input_copy_s0_y", 0, 64);
  auto loop_hw_input_copy_s0_x = loop_hw_input_copy_s0_y->add_loop("hw_input_copy_s0_x", 0, 64);

//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y)
  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");

//consuming hw_input_copy.stencil
  auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
  auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);
////producing conv.stencil

//store is: conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = 0
  auto hcompute_conv_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  //prg.buffer_port_widths["conv_stencil_init"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  //hcompute_conv_stencil->add_store("conv_stencil_init", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

//store is: conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = (conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) + int32(hw_input_copy.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo)))
  auto hcompute_conv_stencil_1 = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  //hcompute_conv_stencil_1->add_load("conv_stencil_init", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  return prg;
}

prog conv_3_3_halide_fixed() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_compute.h";
  prg.name = "conv_3_3_halide";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming hw_input.stencil
////producing hw_input_copy.stencil
  auto loop_hw_input_copy_s0_y = prg.add_loop("hw_input_copy_s0_y", 0, 64);
  auto loop_hw_input_copy_s0_x = loop_hw_input_copy_s0_y->add_loop("hw_input_copy_s0_x", 0, 64);

//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y)
  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");

//consuming hw_input_copy.stencil
  auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
  auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);
////producing conv.stencil

//store is: conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = 0
  auto hcompute_conv_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  prg.buffer_port_widths["conv_stencil_init"] = 16;
  //hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_conv_stencil->add_store("conv_stencil_init", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

//store is: conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = (conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) + int32(hw_input_copy.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo)))
  auto hcompute_conv_stencil_1 = loop_hw_output_s0_x_xo->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  //hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_conv_stencil_1->add_load("conv_stencil_init", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  return prg;
}

prog clockwork_target() {
  prog prg;
  prg.compute_unit_file = "clockwork_target_compute.h";
  prg.name = "clockwork_target";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming hw_input.stencil
////producing hw_input_copy.stencil
  auto loop_hw_input_copy_s0_y = prg.add_loop("hw_input_copy_s0_y", 0, 64);
  auto loop_hw_input_copy_s0_x = loop_hw_input_copy_s0_y->add_loop("hw_input_copy_s0_x", 0, 64);

//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y)
  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");
////producing conv.stencil
  auto loop_conv_s0_y = prg.add_loop("conv_s0_y", 0, 62);
  auto loop_conv_s0_x = loop_conv_s0_y->add_loop("conv_s0_x", 0, 62);

//store is: conv.stencil(conv.s0.x, conv.s0.y) = 0
  auto hcompute_conv_stencil = loop_conv_s0_x->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y");

//consuming hw_input_copy.stencil
  auto loop_conv_s1_y = prg.add_loop("conv_s1_y", 0, 62);
  auto loop_conv_s1_x = loop_conv_s1_y->add_loop("conv_s1_x", 0, 62);

//store is: conv.stencil(conv.s1.x, conv.s1.y) = ((int32(hw_input_copy.stencil(conv.s1.x, conv.s1.y))*17) + (conv.stencil(conv.s1.x, conv.s1.y) + ((int32(hw_input_copy.stencil((conv.s1.x + 1), conv.s1.y))*7) + ((int32(hw_input_copy.stencil((conv.s1.x + 2), conv.s1.y))*5) + ((int32(hw_input_copy.stencil(conv.s1.x, (conv.s1.y + 1)))*4) + ((int32(hw_input_copy.stencil((conv.s1.x + 1), (conv.s1.y + 1)))*19) + ((int32(hw_input_copy.stencil((conv.s1.x + 2), (conv.s1.y + 1)))*21) + ((int32(hw_input_copy.stencil(conv.s1.x, (conv.s1.y + 2)))*6) + ((int32(hw_input_copy.stencil((conv.s1.x + 2), (conv.s1.y + 2)))*15) + (int32(hw_input_copy.stencil((conv.s1.x + 1), (conv.s1.y + 2)))*4))))))))))
  auto hcompute_conv_stencil_1 = loop_conv_s1_x->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "conv_s1_x", "conv_s1_y");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_x + 1)", "conv_s1_y");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_x + 2)", "conv_s1_y");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "conv_s1_x", "(conv_s1_y + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_x + 1)", "(conv_s1_y + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_x + 2)", "(conv_s1_y + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "conv_s1_x", "(conv_s1_y + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_x + 2)", "(conv_s1_y + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_x + 1)", "(conv_s1_y + 2)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y");

//consuming conv.stencil
  auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
  auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  return prg;
}

void synth_reduce_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  // for i in 0, 4:
  //    m[i] = 0
  //    for j in 0 3:
  //      r = m[i]
  //      m[i] = r + 1
  //    out = m[i]
	isl_union_set *domain =
    isl_union_set_read_from_str(ctx, "{ init[i] : 0 <= i <= 4;  read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3; update[i, j] : 0 <= i <= 4 and 0 <= j <= 3; out[i] : 0 <= i <= 4 }");
  auto naive_sched =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> [0, i, 0, 0, 0]; read0[i, j] -> [0, i, 1, j, 0]; update[i, j] -> [0, i, 1, j, 1]; out[i] -> [0, i, 2, 0, 0] }"), domain);
  //cout << "Code for naive schedule..." << endl;
  //cout << codegen_c(naive_sched) << endl;

  auto before = lex_lt(naive_sched, naive_sched);
  auto writes =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> M[i]; update[i, j] -> M[i] }"), domain);
  auto reads =
    its(isl_union_map_read_from_str(ctx, "{ read0[i, j] -> M[i]; out[i] -> M[i] }"), domain);
	isl_union_map *validity =
    its(dot(writes, inv(reads)), before);
  //cout << "Validity" << endl;
	isl_union_map *proximity =
    cpy(validity);

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
  auto schedmap = its(isl_schedule_get_map(sched), domain);
  //cout << "Reduce schedule..." << endl;

  //cout << "Code for reduce..." << endl;
  //cout << codegen_c(schedmap) << endl;

  UBuffer buf;
  buf.name = "reduce";
  buf.ctx = ctx;

  buf.add_in_pt("init",
    "{ init[i] : 0 <= i <= 4}",
    "{ init[i] -> M[i] : 0 <= i <= 4 }",
    "{ init[i] -> [0, i, 0, 0, 0] : 0 <= i <= 4 }");

  buf.add_in_pt("update",
    "{ update[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> [0, i, 1, j, 1] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("read0",
    "{ read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> [0, i, 1, j, 0] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("out",
    "{ out[i] : 0 <= i <= 4 }",
    "{ out[i] -> M[i] : 0 <= i <= 4 }",
    "{ out[i] -> [0, i, 2, 0, 0] : 0 <= i <= 4 }");

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_reduce.cpp reduce.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_upsample_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "upsample";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i, j] : 0 <= i < 10 and 0 <= j < 2}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[i, j] -> M[i] : 0 <= i < 10 and 0 <= j < 2}");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i, j] -> [i, 1, j] : 0 <= i < 10 and 0 <= j < 2 }");
  buf.isIn["read0"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_upsample.cpp upsample.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
  cout << "Upsample passed" << endl;
}

void synth_sr_boundary_condition_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "shift_reg_bc";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 10}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 10}");
  buf.access_map["read1"] =
    rdmap(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 9; read1[i] -> M[9] : 9 <= i < 10 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 10 }");
  buf.access_map["read2"] =
    rdmap(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8; read2[i] -> M[9] : 8 <= i < 10}");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read2"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_shift_reg_bc.cpp shift_reg_bc.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);

}

void synth_id_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 8}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> conv[i] : 0 <= i < 8}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 8 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i] : 0 <= i < 8}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i] -> conv[i] : 0 <= i < 8}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i] -> [i + 16] : 0 <= i < 8}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv", buf});
  buffer_vectorization({1}, {"conv"}, 4, buffers);

  vector<string> file_list({"conv.cpp"});
  for (auto it: buffers) {
    cout << it.second << endl;
    file_list.push_back(it.first + ".cpp");
    generate_hls_code_unit_test(it.second);
  }

  int res = cmd("clang++ -std=c++11 tb_id_vec.cpp " + sep_list(file_list, "", "", " "));
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void twoport_vec_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "two_pt";
  buf.ctx = ctx;

  buf.domain["write0"] =
    isl_set_read_from_str(ctx, "{ write0[root = 0, i] : 0 <= i < 16}");
  buf.access_map["write0"] =
    rdmap(ctx, "{ write0[root = 0, i] -> two_pt[i] : 0 <= i < 16}");
  buf.schedule["write0"] =
    isl_union_map_read_from_str(ctx, "{ write0[root = 0, i] -> [i] : 0 <= i < 16 }");
  buf.isIn["write0"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[root = 0, i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[root = 0, i] -> two_pt[i] : 0 <= i < 8}");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[root = 0, i] -> [i + 32] : 0 <= i < 8}");
  buf.isIn["read0"] = false;

  // Read 0 through 7
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[root = 0, i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    rdmap(ctx, "{ read1[root = 0, i] -> two_pt[i+8] : 0 <= i < 8}");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[root = 0, i] -> [i + 32] : 0 <= i < 8}");
  buf.isIn["read1"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"two_pt", buf});
  buffer_vectorization({1}, {"two_pt"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_two_pt.cpp two_pt_vec.cpp two_pt.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void upsample_vectorization_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "ups";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> ups[i] : 0 <= i < 16}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [2*i] : 0 <= i < 16 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i] : 0 <= i < 32 }");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i] -> ups[floor(i / 2)] : 0 <= i < 32 }");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i] -> [i + 16] : 0 <= i < 32 }");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  buf.simplify_floor_div_expr();
  map<string, UBuffer> buffers;
  buffers.insert({"ups", buf});
  buffer_vectorization({1}, {"ups"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_ups.cpp ups.cpp ups_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void upsample_pad_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "ups";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> ups[i] : 0 <= i < 16}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [2*i] : 0 <= i < 16 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i] : 0 <= i < 30 }");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i] -> ups[floor((i+1) / 2)] : 0 <= i < 30 }");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i] -> [i + 16] : 0 <= i < 30 }");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  buf.simplify_floor_div_expr();
  map<string, UBuffer> buffers;
  buffers.insert({"ups", buf});
  buffer_vectorization({1}, {"ups"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_ups.cpp ups.cpp ups_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void rolled_conv_reorder_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv_rolled";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> conv_rolled[i] : 0 <= i < 16}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 16 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j] : 0 <= i <= 2 and 0 <= j < 12}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j] -> conv_rolled[i + j] : 0 <= i <= 2 and 0 <= j < 12}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j] -> [j + 16*i + 16] : 0 <= i <= 2 and 0 <= j < 12}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv_rolled", buf});
  buffer_vectorization({1}, {"conv_rolled"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv_rolled.cpp conv_rolled.cpp conv_rolled_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void stride_id_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "id_stride";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> id_stride[i] : 0 <= i < 16}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 16 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i] : 0 <= i < 8}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i] -> id_stride[i*2] : 0 <= i < 8}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i] -> [i + 16] : 0 <= i < 8 }");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"id_stride", buf});
  buffer_vectorization({1}, {"id_stride"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_id_stride.cpp id_stride.cpp id_stride_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void stride_conv_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv_stride";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 20}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> conv_stride[i] : 0 <= i < 20}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 20 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, j, i] : 0 <= i < 8 and 0 <= j <= 2}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, j, i] -> conv_stride[i*2 + j] : 0 <= i < 8 and 0<=j<=2}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, j, i] -> [i + 8*j + 20] : 0 <= i < 8 and 0<=j<=2}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv_stride", buf});
  buffer_vectorization({1}, {"conv_stride"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv_stride.cpp conv_stride.cpp conv_stride_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}


void rolled_conv2D_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv2D_rolled";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i, j] : 0 <= i < 16 and 0<=j<16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i, j] -> conv2D_rolled[i, j] : 0 <= i < 16 and 0<=j<16}}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i, j] -> [16*i + j] : 0 <= i < 16 and 0<=j<16}}");
  buf.isIn["write"] = true;
  map_insert(buf.port_bundles, string("write"),  string("write"));

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j, ii, jj] : 0 <= i < 12 and 0 <= j < 12 and 0 <= ii < 4 and 0 <= jj < 4}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j, ii, jj] -> conv2D_rolled[i + ii, j + jj] : 0 <= i < 12 and 0 <= j < 12 and 0 <= ii < 4 and 0 <= jj < 4}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j, ii, jj] -> [jj + 4*ii + 16*j + 256*i + 256] : 0 <= i < 12 and 0 <= j < 12 and 0 <= ii < 4 and 0 <= jj < 4}");
  buf.isIn["read"] = false;
  map_insert(buf.port_bundles, string("read"),  string("read"));

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv2D_rolled", buf});
  buffer_vectorization({1}, {"conv2D_rolled"}, 4, buffers);


  for (auto& it: buffers) {
    auto & buf = it.second;
    buf.simplify_address_space();
    buf.linear_address_space(to_set(buf.global_range()), 4);
  }

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv2D_rolled.cpp conv2D_rolled.cpp conv2D_rolled_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void outer_rolled_conv2D_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv2D_outer_rolled";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i, j] : 0 <= i < 16 and 0<=j<16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i, j] -> conv2D_outer_rolled[i, j] : 0 <= i < 16 and 0<=j<16}}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i, j] -> [16*i + j] : 0 <= i < 16 and 0<=j<16}}");
  buf.isIn["write"] = true;
  map_insert(buf.port_bundles, string("write"),  string("write"));

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j, ii, jj] : 0 <= i < 7 and 0 <= j < 7 and 0 <= ii < 8 and 0 <= jj < 8}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j, ii, jj] -> conv2D_outer_rolled[i + ii, j + jj] : 0 <= i < 7 and 0 <= j < 7 and 0 <= ii < 8 and 0 <= jj < 8}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j, ii, jj] -> [jj + 12*ii + 96*j + 768*i + 256] : 0 <= i < 7 and 0 <= j < 7 and 0 <= ii < 8 and 0 <= jj < 8}");
  buf.isIn["read"] = false;
  map_insert(buf.port_bundles, string("read"),  string("read"));

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv2D_outer_rolled", buf});
  buffer_vectorization({1}, {"conv2D_outer_rolled"}, 4, buffers);

  for (auto& it: buffers) {
    auto & buf = it.second;
    buf.simplify_address_space();
    buf.linear_address_space(to_set(buf.global_range()), 4);
  }

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv2D_outer_rolled.cpp conv2D_outer_rolled.cpp conv2D_outer_rolled_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void upsample_2d_unit_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "up2D";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i, j] : 0 <= i < 16 and 0<=j<16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i, j] -> up2D[i, j] : 0 <= i < 16 and 0<=j<16}}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i, j] -> [64*i + 2*j] : 0 <= i < 16 and 0<=j<16}}");
  buf.isIn["write"] = true;
  map_insert(buf.port_bundles, string("write"),  string("write"));

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j] : 0 <= i < 32 and 0 <= j < 32}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j] -> up2D[floor(i/2) , floor(j/2) ] : 0 <= i < 32 and 0 <= j < 32 }");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j] -> [j + 32*i + 16] : 0 <= i < 32 and 0 <= j < 32}");
  buf.isIn["read"] = false;
  map_insert(buf.port_bundles, string("read"),  string("read"));

  generate_hls_code(buf);
  buf.simplify_floor_div_expr();

  map<string, UBuffer> buffers;
  buffers.insert({"up2D", buf});
  buffer_vectorization({1}, {"up2D"}, 4, buffers);

  for (auto& it: buffers) {
    auto & buf = it.second;
    buf.simplify_address_space();
    buf.linear_address_space(to_set(buf.global_range()), 4);
  }

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_up2D.cpp up2D.cpp up2D_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}


void rolled_conv_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv_rolled";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 16}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> conv_rolled[i] : 0 <= i < 16}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 16 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j] : 0 <= i < 12 and 0 <= j <= 2}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j] -> conv_rolled[i + j] : 0 <= i < 12 and 0 <= j <= 2}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j] -> [j + 3*i + 16] : 0 <= i < 12 and 0 <= j <= 2}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv_rolled", buf});
  buffer_vectorization({1}, {"conv_rolled"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv_rolled.cpp conv_rolled.cpp conv_rolled_vec.cpp" );
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void synth_id_auto_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 8}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> conv[i] : 0 <= i < 8}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 8 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i] : 0 <= i < 8}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i] -> conv[i] : 0 <= i < 8}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i] -> [i + 16] : 0 <= i < 8}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv", buf});
  buffer_vectorization({1}, {"conv"}, 4, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv.cpp conv_vec.cpp conv.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}


void synth_id_fetch2_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "conv";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 8}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> conv[i] : 0 <= i < 8}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 8 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i] : 0 <= i < 8}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i] -> conv[i] : 0 <= i < 8}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i] -> [i + 16] : 0 <= i < 8}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"conv", buf});
  buffer_vectorization({1}, {"conv"}, 2, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_conv.cpp conv_vec.cpp conv.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

//TODO: need to fix the two dimensional address generation issue
void sw_fetch2_2d_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "sw";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i, j] : 0 <= i < 10 and 0 <= j < 10}");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i, j] -> sw[i, j] : 0 <= i < 10 and 0 <= j < 10}");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i, j] -> [10*i+j] : 0 <= i < 10and 0 <= j < 10}");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j, m, n] : 0 <= i < 3 and 0<=j < 3 and 0<=m<8 and 0<=n<8}");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j, m, n] -> sw[i+m, j+n] : 0 <= i < 3 and 0<=j < 3 and 0<=m<8 and 0<=n<8}");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j, m, n] -> [100 + n+ 10*m + 80*j+ 320*i] : 0 <= i < 3 and 0<=j < 3 and 0<=m<8 and 0<=n<8}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"sw", buf});
  buffer_vectorization({1}, {"sw"}, 2, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_sw.cpp sw_vec.cpp sw.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void sw_fetch2_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "sw";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[root = 0, i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[root = 0, i] -> sw[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[root = 0, i] -> [i] : 0 <= i < 10}");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read"] =
    isl_set_read_from_str(ctx, "{ read[root = 0, i, j] : 0 <= i < 3 and 0<=j < 8 }");
  buf.access_map["read"] =
    rdmap(ctx, "{ read[root = 0, i, j] -> sw[i+j] : 0 <= i < 3 and 0<=j < 8 }");
  buf.schedule["read"] =
    isl_union_map_read_from_str(ctx, "{ read[root = 0, i, j] -> [10 + j+ 10*i] : 0 <= i < 3 and 0<=j < 8}");
  buf.isIn["read"] = false;

  generate_hls_code(buf);

  map<string, UBuffer> buffers;
  buffers.insert({"sw", buf});
  buffer_vectorization({1}, {"sw"}, 2, buffers);

  generate_hls_code_unit_test(buffers, buf.name);

  generate_vectorization_unit_testbench(buf);

  int res = cmd("clang++ -std=c++11 unit_tb_sw.cpp sw_vec.cpp sw.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void synth_wire_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "shift_reg";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[i] -> M[i] : 0 <= i < 8 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    rdmap(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 8 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 8}");
  buf.access_map["read2"] =
    rdmap(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8 }");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read2"] = false;

  generate_hls_code(buf);

  int res = system("clang++ -std=c++11 tb_shift_reg.cpp shift_reg.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_lb_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "linebuffer_3x3";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i, j] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> M[j, i] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> [i, j, 0] : 0 <= i < 64 and 0 <= j < 64 }"
      );

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      string rn = "read_" + to_string(r) + "_" + to_string(c);
      buf.add_out_pt(rn,
          "{ " + rn + "[i, j] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> M[j + " + to_string(c) + ", i + " + to_string(r)  + "] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> [i + 2, j + 2, 1] : 0 <= i < 62 and 0 <= j < 62 }"
          );

      //int r0 = check_value_dd(buf, rn, "write0");
      int r0 = compute_dd_bound(buf, rn, "write0");
      cout << "Delay (" << c << ", " << r << "): " << r0 << endl;
    }
  }

  generate_hls_code(buf);

  int res = system("clang++ -std=c++11 tb_linebuffer_3x3.cpp linebuffer_3x3.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}


/* Main driver function for vectorization, loop through all the ubuffer
 * Find the one with depth large than shift register,
 * vectorize it and return the new ubuffer,
 * Also need to return the input_vec statement for sheduler to remove proximity
 * and a umap to add extra raw dependency for those added shift registers
 */
map<string, UBuffer> vectorization_from_buf_map(
        map<string, UBuffer> & buffers_opt,
        vector<string> & input_vec_stmt,
        umap* & extra_raw_deps) {

  vector<string> vec_cand;
  map<string, UBuffer> ubuf_pool;

  CodegenOptions opt;
  opt.merge_threshold = 4;
  int max_inpt = 2, max_outpt = 2;

  cout << "post processing buf" << endl;
  for (auto it: buffers_opt) {
    opt.conditional_merge = true;
    auto post_proc_buffers = it.second.generate_ubuffer(opt);
    opt.conditional_merge = false;
    auto rewrite_buffer = it.second.generate_ubuffer(opt);
    for (auto it: post_proc_buffers) {
      cout << "post: " << it.first << endl;
      vec_cand.push_back(it.first);
      extra_raw_deps = unn(extra_raw_deps, it.second.global_sv_map());
    }
    for (auto it: rewrite_buffer) {
      cout << "rewrite: " << it.first << endl;
      ubuf_pool.insert(it);
    }
  }

  input_vec_stmt = buffer_vectorization(vec_cand, 1, 4, ubuf_pool);

  return ubuf_pool;
}

map<string, UBuffer> vectorization_from_buf_map(
        map<string, UBuffer> & buffers_opt,
        vector<string> & input_vec_stmt,
        vector<int> & iis,
        umap* & extra_raw_deps) {

  vector<string> vec_cand;
  map<string, UBuffer> ubuf_pool;

  CodegenOptions opt;
  opt.merge_threshold = 4;
  int max_inpt = 2, max_outpt = 2;

  cout << "post processing buf" << endl;
  for (auto it: buffers_opt) {
    opt.conditional_merge = true;
    auto post_proc_buffers = it.second.generate_ubuffer(opt);
    opt.conditional_merge = false;
    auto rewrite_buffer = it.second.generate_ubuffer(opt);
    for (auto it: post_proc_buffers) {
      cout << "post: " << it.first << endl;
      vec_cand.push_back(it.first);
      extra_raw_deps = unn(extra_raw_deps, it.second.global_sv_map());
    }
    for (auto it: rewrite_buffer) {
      cout << "rewrite: " << it.first << endl;
      ubuf_pool.insert(it);
    }
  }

  input_vec_stmt = buffer_vectorization(iis, vec_cand, 1, 4, ubuf_pool);
  cout << "\nPrint all the buffers\n" << endl;

  //linearize schedule for all the non-vectorized buffers
  for (auto & it: ubuf_pool) {
    auto & buf = it.second;
    if (!buf.has_hw_schedule()) {
      buf.linear_buf_schedule(iis);
    }
    cout << it.second << endl;
  }

  return ubuf_pool;
}

isl_union_map* optimized_schedule_from_buffers_DB(const map<string, UBuffer> &buffers, const vector<string> remove_deps, umap* extra) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_set* domain = isl_union_set_read_from_str(ctx, "{}");
    for (auto it : buffers) {
      string buf_name = it.first;
      auto buf = it.second;
      global_sched = unn(buf.global_schedule(), global_sched);
      global_p_map = unn(buf.producer_map(), global_p_map);
      global_c_map = unn(buf.consumer_map(), global_c_map);
      domain = unn(buf.global_domain(), domain);
    }
    global_c_map = flatten_umap_domain_with_dim_from_outer(global_c_map, 2);
    global_p_map = flatten_umap_domain_with_dim_from_outer(global_p_map, 2);
    global_sched = flatten_umap_domain_with_dim_from_outer(global_sched, 2);
    domain = ::domain(global_sched);
    cout << "Global Schedule: " << str(global_sched) << endl;
    cout << "Global Domain: " << str(domain) << endl;
    cout << "Producer Map: " << str(global_p_map) << endl;
    cout << "Consumer Map: " << str(global_c_map) << endl;
    auto order_deps = get_rel_order(ctx, global_sched);
    cout << "Lex_lt : " << str(lex_lt(global_sched, global_sched)) << endl;
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    extra = flatten_umap_domain_with_dim_from_outer(extra, 2);
    extra = inv(flatten_umap_domain_with_dim_from_outer(inv(extra), 2));
    raw_deps = unn(extra, raw_deps);
    auto validity = unn(order_deps, raw_deps);
    validity = unn(validity, extra);
    auto proximity = cpy(raw_deps);

    for (string remove_stmt: remove_deps){
      proximity = remove_dep_domain_name(proximity, remove_stmt);
    }

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}

isl_union_map* optimized_schedule_from_buffers(const map<string, UBuffer> &buffers, const vector<string> remove_deps, umap* extra) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_set* domain = isl_union_set_read_from_str(ctx, "{}");
    //auto extra = rdmap(ctx, "{ conv_2[0, i0, i1] -> conv[0, i0, i1-2] : 0<=i0<=13 and 2<=i1<=15 }");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_sched = unn(buf.global_schedule(), global_sched);
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        domain = unn(buf.global_domain(), domain);
    }
    cout << "Global Schedule: " << str(global_sched) << endl;
    cout << "Producer Map: " << str(global_p_map) << endl;
    cout << "Consumer Map: " << str(global_c_map) << endl;
    auto order_deps = get_rel_order(ctx, global_sched);
    cout << "Lex_lt : " << str(lex_lt(global_sched, global_sched)) << endl;
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    raw_deps = unn(raw_deps, extra);
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //proximity = filter_inner_sram_deps(ctx, proximity);
    for (string remove_stmt: remove_deps){
        proximity = remove_dep_domain_name(proximity, remove_stmt);
    }

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}

isl_union_map* optimized_schedule_from_buffers(const map<string, UBuffer> &buffers) {
    isl_ctx* ctx = isl_ctx_alloc();
    auto um = isl_union_map_read_from_str(ctx, "{}");
    return optimized_schedule_from_buffers(buffers, {}, um);
}

isl_union_map* optimized_schedule_from_buffers(const map<string, UBuffer> &buffers, isl_union_map* global_sched, bool has_global_constraint) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    //isl_union_set* domain = isl_union_set_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        //domain = unn(buf.global_domain(), domain);
    }
    isl_union_set* domain = ::domain(global_sched);
    global_c_map = flatten_umap_domain(ctx, global_c_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map);
    cout << "Global Schedule: " << str(global_sched) << endl;
    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);
    if (has_global_constraint)
        proximity = remove_dep_domain_name(proximity, "input_vec");

    //Try to remove proximity between_input vec to output_vec
    //proximity = filter_inner_sram_deps(ctx, proximity);

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}


vector<std::string> topological_sort_from_buffer(const map<string, UBuffer> &buffers, vector<string> remove_deps = {}) {
    //map<string, int> ii_map = {{"input", 1}, {"output", 1}, {"input_vec", 1}, {"output_vec",1}};
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        global_sched = unn(its(buf.global_schedule(), buf.global_domain()), global_sched);
    }
    //get all map domain flatten
    global_c_map = flatten_umap_domain(ctx, global_c_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map);
    global_sched = flatten_umap_domain(ctx, global_sched);
    isl_union_set* domain = ::domain(global_sched);

    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
      for (auto name : remove_deps) {
        validity = remove_dep_domain_name(validity, name);
      }
    return topological_sort(get_sets(domain), get_maps(validity));
}

isl_union_map* optimized_schedule_from_buffers_flatten(const map<string, UBuffer> &buffers, bool second_round, vector<string> domain_name_list) {
    //map<string, int> ii_map = {{"input", 1}, {"output", 1}, {"input_vec", 1}, {"output_vec",1}};
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        global_sched = unn(its(buf.global_schedule(), buf.global_domain()), global_sched);
    }
    cout << "\tschedule: " << str(coalesce(global_sched)) << endl;
    //get all map domain flatten
    global_c_map = flatten_umap_domain(ctx, global_c_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map);
    global_sched = flatten_umap_domain(ctx, global_sched);
    isl_union_set* domain = ::domain(global_sched);

    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //FIXME: the name is hacky
    if (second_round) {
      for (auto name : domain_name_list) {
        proximity = remove_dep_domain_name(proximity, name);
      }
    }

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}

isl_union_map* optimized_schedule_from_buffers_flatten(const map<string, UBuffer> &buffers, bool second_round) {
    //map<string, int> ii_map = {{"input", 1}, {"output", 1}, {"input_vec", 1}, {"output_vec",1}};
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        global_sched = unn(its(buf.global_schedule(), buf.global_domain()), global_sched);
        cout << "dom buf: " << it.first << "\n " << str(buf.global_domain()) << endl;
        cout << "sched  buf: " << it.first << "\n " << str(buf.global_schedule()) << endl;
        cout << "GLB sched after buf: " << it.first << "\n " << str(global_sched) << endl;
    }
    cout << "\tschedule: " << str(coalesce(global_sched)) << endl;
    cout << "Producer Map: " << str(global_p_map) << endl;
    cout << "Consumer Map: " << str(global_c_map) << endl;
    //get all map domain flatten
    global_c_map = flatten_umap_domain(ctx, global_c_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map);
    global_sched = flatten_umap_domain(ctx, global_sched);
    isl_union_set* domain = ::domain(global_sched);

    auto identity_map = isl_union_set_identity(cpy(domain));

    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);

    cout << "\tits identity with validity: " << str(its(validity, identity_map)) << endl;
    //assert(false);

    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //FIXME: the name is hacky
    if (second_round)
        //proximity = remove_dep_domain_name(proximity, "op_hcompute_hw_input_stencil_vec");
        proximity = remove_dep_domain_name(proximity, "input_vec");
    //proximity = filter_inner_sram_deps(ctx, proximity);

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}

isl_union_map* optimized_schedule_from_buffers_flatten_extra_with_validity(const map<string, UBuffer> &buffers, vector<string> rem_deps, umap* extra) {

    isl_ctx* ctx = pick(buffers).second.ctx;

    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        global_sched = unn(its(buf.global_schedule(), buf.global_domain()), global_sched);
    }
    cout << "\tschedule: " << str(coalesce(global_sched)) << endl;
    //get all map domain flatten
    global_c_map = flatten_umap_domain(ctx, global_c_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map);
    global_sched = flatten_umap_domain(ctx, global_sched);
    isl_union_set* domain = ::domain(global_sched);
    //extra = flatten_umap_domain(ctx, extra);
    //extra = flatten_umap_domain(ctx, inv(extra));

    //auto extra = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil[root=0, 8191]->op_hcompute_conv_stencil_1_sram2tb[root, 0]}");
    //auto extra = isl_union_map_read_from_str(ctx,"{op_hcompute_conv_stencil[root=0, 12543]->op_hcompute_conv_stencil_1_sram2tb[root, 0]}");
    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    raw_deps = unn(raw_deps, extra);
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //FIXME: the name is hacky
    for (auto dep: rem_deps) {
      proximity = remove_dep_domain_name(proximity, dep);
    }

    //proximity = filter_inner_sram_deps(ctx, proximity);

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}

isl_union_map* optimized_schedule_from_buffers_flatten_extra_with_validity(const map<string, UBuffer> &buffers, bool second_round, vector<string> rem_deps) {
    //map<string, int> ii_map = {{"input", 1}, {"output", 1}, {"input_vec", 1}, {"output_vec",1}};

    isl_ctx* ctx = pick(buffers).second.ctx;
    //auto extra = rdmap(ctx, "{ conv[0, i0, i1] -> conv_2[0, i0, i1+2] : 0<=i0<=13 and 0<=i1<=13 }");
    //extra = unn(extra, rdmap(ctx, "{ conv2[0, i0, 15] -> conv[0, i0+1, 0] : 0<=i0<=12 }"));

    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        global_sched = unn(its(buf.global_schedule(), buf.global_domain()), global_sched);
    }
    cout << "\tschedule: " << str(coalesce(global_sched)) << endl;
    //get all map domain flatten
    global_c_map = flatten_umap_domain(ctx, global_c_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map);
    global_sched = flatten_umap_domain(ctx, global_sched);
    isl_union_set* domain = ::domain(global_sched);
    //extra = flatten_umap_domain(ctx, extra);
    //extra = flatten_umap_domain(ctx, inv(extra));

    //auto extra = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil[root=0, 8191]->op_hcompute_conv_stencil_1_sram2tb[root, 0]}");
    auto extra = isl_union_map_read_from_str(ctx,"{op_hcompute_conv_stencil[root=0, 12543]->op_hcompute_conv_stencil_1_sram2tb[root, 0]}");
    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    raw_deps = unn(raw_deps, extra);
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //FIXME: the name is hacky
    if (second_round) {
        for (auto dep: rem_deps) {
            proximity = remove_dep_domain_name(proximity, dep);
        }
    }
    //proximity = filter_inner_sram_deps(ctx, proximity);

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

}

isl_union_map* optimized_schedule_from_buffers_feautrier(const map<string, UBuffer> &buffers, bool second_round) {
    //map<string, int> ii_map = {{"input", 1}, {"output", 1}, {"input_vec", 1}, {"output_vec",1}};
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_p_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_c_map = isl_union_map_read_from_str(ctx, "{}");
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        string buf_name = it.first;
        auto buf = it.second;
        global_p_map = unn(buf.producer_map(), global_p_map);
        global_c_map = unn(buf.consumer_map(), global_c_map);
        global_sched = unn(its(buf.global_schedule(), buf.global_domain()), global_sched);
    }
    //get all map domain flatten
    //global_c_map = flatten_umap_domain(ctx, global_c_map);
    //global_p_map = flatten_umap_domain(ctx, global_p_map);
    //global_sched = flatten_umap_domain(ctx, global_sched);
    isl_union_set* domain = ::domain(global_sched);

    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //FIXME: using the name is hacky

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    auto c = ::ctx(domain);
    //int val = isl_options_get_schedule_whole_component(c);
    int val = isl_options_get_schedule_algorithm(c);
    cout << "\n\n\n\n\n get options: " << val << endl;
    //isl_options_set_schedule_whole_component(c, 0);
    //isl_options_set_schedule_serialize_sccs(c, 1);
    isl_options_set_schedule_algorithm(c, 1);
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;
}

void permute_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "permute";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i] : 0 <= i < 10 }",
      "{ write0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ write0[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_in_pt("write1",
      "{ write1[i] : 0 <= i < 10 }",
      "{ write1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ write1[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read0",
      "{ read0[i] : 0 <= i < 10 }",
      "{ read0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ read0[i] -> [1, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read1",
      "{ read1[i] : 0 <= i < 10 }",
      "{ read1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ read1[i] -> [1, i] : 0 <= i < 10 }"
      );

  generate_hls_code(buf);
}

void conv_1d_bc_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_bounds["out"] = {32 - 2, 32 - 2};

  // Where the ast gets built
  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto read0 = c->add_op("read0");

  read0->add_load("M", "min(c, 9)");
  read0->add_load("M", "min(c + 1, 9)");
  read0->add_load("M", "min(c + 2, 9)");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("out", "c");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  umap* opt_sched = prg.optimized_codegen();

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_1d_bc() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  /*compute->add_load("M", {{"c < 2", "0"}, {"2 <= c <= 7", "c"}, {"7 < c <= 8", "9"}, {"c > 8", "8"}});
  compute->add_load("M", {{"c < 2", "0"}, {"2 <= c <= 7", "c"}, {"7 < c <= 8", "9"}, {"c > 8", "8"}});
  compute->add_load("M", {{"c < 2", "0"}, {"2 <= c <= 7", "c"}, {"7 < c <= 8", "9"}, {"c > 8", "8"}});*/
  compute->add_load("M", {{"0 <= c < 9", "c"}, {"c >= 9", "9"}});
  compute->add_load("M", {{"0 <= c < 8", "c + 1"}, {"c >= 8", "9"}});
  compute->add_load("M", {{"0 <= c < 7", "c + 2"}, {"c >= 7", "9"}});
/*  compute->add_load("M", "min(c, 9)");
  compute->add_load("M", "min(c + 1, 9)");
  compute->add_load("M", "min(c + 2, 9)");*/
  compute->add_store("out", "c");
  return prg;
}

prog conv_1d() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  compute->add_load("M", "c");
  compute->add_load("M", "c + 1");
  compute->add_load("M", "c + 2");
  compute->add_store("out", "c");

  return prg;
}

void aha_talk_print_info(prog& prg);

struct tb_config {
    vector<int> indices;
    int range_inner;
    int range_outer;
    int stride;

    string csv_config_str(int tb_cnt) {
        ostringstream out;
        int pos = 0;
        if (indices.size()) {
            for (int index : indices) {
                out << "tba_" << tb_cnt << "_tb_0_indices_"  << pos << "," << index<< endl;
                pos ++;
            }
            out << "tba_" << tb_cnt << "_tb_0_range_inner," << range_inner << endl;
            out << "tba_" << tb_cnt << "_tb_0_range_outer," << range_outer<< endl;
            out << "tba_" << tb_cnt << "_tb_0_stride," << stride<< endl;
            out << "tba_" << tb_cnt << "_tb_0_dimensionality," << 2<< endl;
        }
        else {
            out << "tba_" << tb_cnt << "_tb_0_range_outer," << range_outer<< endl;
            out << "tba_" << tb_cnt << "_tb_0_stride," << stride << endl;
            out << "tba_" << tb_cnt << "_tb_0_dimensionality," << 1<< endl;
        }
        return out.str();
    }
};

struct sram_config {
    vector<int> range;
    vector<int> stride;
    int dimensionality;
    int start_addr;
    string IO;

    void initial_sequential_access(int num_itr) {
        range.push_back(num_itr);
        dimensionality = 1;
        stride.push_back(1);
        start_addr = 0;
    }

    void configIO(string io_config) {
        IO = io_config;
    }

    string csv_config_str(int port_cnt) {
        ostringstream out;
        int pos = 0;

        out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_dimensionality," << dimensionality << endl;
        out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_starting_addr," << start_addr << endl;
        for (int loop_dim = 0; loop_dim < dimensionality; loop_dim ++) {
            out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_ranges_" << loop_dim << "," << range[loop_dim] << endl;
            out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_strides_" << loop_dim << "," << stride[loop_dim] << endl;
        }
        return out.str();
    }
};

struct memtile_config {
  int agg_align_0_line_length;

   int agg_in_0_in_period;
   int agg_in_0_in_sched_0;
   int agg_in_0_out_period;
   int agg_in_0_out_sched_0;

   int bank_num;
   int bank_capacity;

   vector<tb_config> tb_config_vec;
   vector<sram_config> sram_config_output;
   vector<sram_config> sram_config_input;
   vector<int> tb_sync_group;

   memtile_config():
       agg_align_0_line_length(64),
       agg_in_0_in_period(1),
       agg_in_0_out_period(1),
       agg_in_0_in_sched_0(0),
       agg_in_0_out_sched_0(0),
       bank_num(1),
       bank_capacity(512){}

    void extract_config(map<string, UBuffer> &buffers) {

        for (auto buffer : buffers) {
            if (buffer.first == "sram") {
                auto buf = buffer.second;

                //TODO: put this into a function
                //generate the input port configuration, currently assume all write is consecutive
                cout << "\tConfig input addr stream" << endl;
                string inpt = pick(buf.get_in_ports());
                int num_reads = int_upper_bound(card((domain(buf.access_map.at(inpt)))));
                cout <<"total data input: " << num_reads << endl;
                sram_config tmp;
                tmp.initial_sequential_access(num_reads);
                tmp.configIO("input");
                sram_config_input.push_back(tmp);

                //generate the output configuration register
                cout << "\tConfig output addr stream" << endl;

                //the backend will suto schedule the parallel access
                string outpt_sram = pick(buf.get_out_ports());
                auto acc_pattern = AccessPattern(to_map(buf.access_map.at(outpt_sram)), buf.ctx);
                int output_port_size = acc_pattern.in_range.back();
                sram_config tmp_out;
                for(int i = 0; i < output_port_size; i ++){
                    //FIXME: this dimension drop is specific for this case need a more general solution
                    //drop the last dimension, since that will be handle by the handshake
                    tmp_out.range = acc_pattern.in_range;
                    if (acc_pattern.var_dim > 2) {
                        tmp_out.dimensionality = acc_pattern.var_dim - 1 - 1;
                        tmp_out.range.pop_back();
                    }
                    else
                        tmp_out.dimensionality = acc_pattern.var_dim - 1;
                    std::reverse(tmp_out.range.begin(),tmp_out.range.end());

                    vector<int> stride;
                    vector<int> dim_ref;
                    for (int i = 0; i < tmp_out.dimensionality; i ++)
                        dim_ref.push_back(i);

                    std::reverse(dim_ref.begin(), dim_ref.end());
                    acc_pattern.get_flatten_stride(stride, dim_ref);
                    tmp_out.start_addr = stride.back() * i;
                    tmp_out.stride = stride;
                    if (tmp_out.stride.size() > 1)
                        tmp_out.stride.pop_back();
                    std::reverse(tmp_out.stride.begin(),tmp_out.stride.end());

                    tmp_out.IO = string("output");
                    sram_config_output.push_back(tmp_out);
                }
            }
            if (buffer.first == "tb") {
                cout << "\tConfig TB address stream" << endl;
                auto buf = buffer.second;
                auto output_pt_map = buf.get_out_ports();
                auto fetch_width = buf.get_in_ports().size();
                for (string outpt : output_pt_map) {
                    tb_config tmp;
                    //auto acc_pattern = buf.access_pattern.at(outpt);
                    auto acc_pattern = AccessPattern(to_map(buf.access_map.at(outpt)), buf.ctx);
                    vector<int> dim_ref;
                    for (int i = 0; i < acc_pattern.addr_dim; i ++)
                        dim_ref.push_back(i);
                    std::reverse(dim_ref.begin(), dim_ref.end());
                    acc_pattern.init_flatten_stride(dim_ref);
                    tb_sync_group.push_back(1);
                    if (acc_pattern.is_1D_contigous_access()) {
                        tmp.range_outer = acc_pattern.in_range.back() / fetch_width;
                        tmp.stride = 1;
                    }
                    else if (acc_pattern.merge_lastdim()) {
                        tmp.range_outer = acc_pattern.in_range.back();
                        tmp.stride = acc_pattern.stride.back();
                    }
                    else {
                        cout << "NOT IMPLEMENTED" << endl;
                        assert(false);
                    }
                    tb_config_vec.push_back(tmp);
                }
            }

            //cout << buffer.first << "_______________________________ \n " << buffer.second<< endl;
        }
    }
   void emit_config_file_csv(string fname) {
       ofstream out(fname + ".csv");
       out << "agg_align_0_line_length," << agg_align_0_line_length << endl;
       out << "agg_in_0_in_period," << agg_in_0_in_period << endl;
       out << "agg_in_0_in_sched_0," << agg_in_0_in_sched_0 << endl;
       out << "agg_in_0_out_period," << agg_in_0_in_period << endl;
       out << "agg_in_0_out_sched_0," << agg_in_0_out_sched_0 << endl;

       int i = 0;
       for (auto sram_in: sram_config_input) {
           out << sram_in.csv_config_str(i);
           i++;
       }

       i = 0;
       for (auto sram_out: sram_config_output) {
           out << sram_out.csv_config_str(i);
           i++;
       }

       i = 0;
       for (auto tb_config : tb_config_vec) {
           out << tb_config.csv_config_str(i);
           i ++;
       }
       for (int bank = 0; bank < bank_num; bank ++) {
           out << "input_addr_ctrl_offsets_cfg_0_" << bank << "," <<bank*bank_capacity << endl;
       }
       for (size_t grp = 0; grp < tb_sync_group.size(); grp ++) {
           out << "sync_grp_sync_group_" << grp << "," << tb_sync_group[grp] << endl;
       }

       out.close();
   }
};

void agg_test() {

  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "agg";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["agg"] = 32;
  prg.buffer_port_widths["tb"] = 32;
  prg.buffer_port_widths["sram"] = 32;

  auto p = prg.add_loop("p", 0, 12);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("agg", "p");

  auto c = prg.add_loop("c", 0, 3);

  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("agg", "4*c");
  compute->add_load("agg", "4*c+1");
  compute->add_load("agg", "4*c+2");
  compute->add_load("agg", "4*c+3");
  compute->add_store("sram", "4*c");
  compute->add_store("sram", "4*c+1");
  compute->add_store("sram", "4*c+2");
  compute->add_store("sram", "4*c+3");
  {
  auto c = prg.add_loop("d", 0, 3);
  auto compute = c->add_op("sram2tb");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("sram", "4*d");
  compute->add_load("sram", "4*d+1");
  compute->add_load("sram", "4*d+2");
  compute->add_load("sram", "4*d+3");
  compute->add_store("tb", "4*d");
  compute->add_store("tb", "4*d+1");
  compute->add_store("tb", "4*d+2");
  compute->add_store("tb", "4*d+3");
  }
  {
  auto p = prg.add_loop("e", 0, 12);
  auto write = p->add_op("tb2out");
  write->add_load("tb", "e");
  write->add_store("out", "e");
  }
  auto sched = prg.unoptimized_schedule();
  cout << codegen_c(sched) << endl;

  auto sched_opt = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
 // auto sched_opt = isl_schedule_get_map(prg.optimized_schedule());
  cout << "Sched map: " << str(sched_opt) << endl;
  cout << codegen_c(sched_opt) << endl;
  //aha_talk_print_info(prg);
  //hardcode some configuration registers
  memtile_config memtile;
  auto buffers = build_buffers(prg, sched_opt);
  memtile.extract_config(buffers);
  memtile.emit_config_file_csv("lake_memtile_config");
}


void vec_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "vec";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 8);
  auto write = p->add_op("pass");
  write->add_load("in", "po, pi");
  write->add_store("out", "po, pi");

  //auto sched = prg.unoptimized_schedule();
  //cout << codegen_c(sched) << endl;

  auto sched_opt = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());

  isl_union_map* acc_map;
  auto buffers = build_buffers(prg);
  for (auto buf : buffers){
     for (auto pt: buf.second.get_out_ports()) {
         acc_map = buf.second.access_map.at(pt);
         cout << "\tAccess map: " << str(acc_map) << endl;
     }

  }
  isl_union_map* produced;
  /*
  for (int i = 0; i < 4; i ++) {
      if (i == 0)
          produced = to_umap(isl_map_read_from_str(prg.ctx, string("{ pass_vec[root=0,po, p_vec] -> pass[0, po,4*p_vec+"+to_string(i)+"]} ").c_str()));
      else
        produced = unn(produced, to_umap(isl_map_read_from_str(prg.ctx, string("{ pass_vec[root=0, po, p_vec] -> pass[0,po,4*p_vec+"+to_string(i)+"]}").c_str())));
    cout << str(produced) << endl;

  }*/
  string read_string = "{pass[root, po, pi] -> pass_vec[root, po, floor(pi / 4)]}";
  isl_union_map* vectorized_map = isl_union_map_read_from_str(prg.ctx, read_string.c_str());
  auto vectorized_access = dot(inv(acc_map), vectorized_map);
  cout << "vectorize map" << str(vectorized_access) << endl;
  cout << "vectorize range: " << str(range(vectorized_access)) << "\n vectorize domain" << str(domain(vectorized_access)) << endl;
  //auto sched_opt = isl_schedule_get_map(prg.optimized_schedule());
  //cout << "Sched map: " << str(sched_opt) << endl;
  //cout << codegen_c(sched_opt) << endl;
  //aha_talk_print_info(prg);
  //hardcode some configuration registers
  //memtile_config memtile;
  //auto buffers = build_buffers(prg, sched_opt);
  //memtile.extract_config(buffers);
  //memtile.emit_config_file_csv("lake_memtile_config");
}


void flatten_sched_test() {
  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "vec";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf", "po, pi");

  auto q = prg.add_nest("qo", 0, 6, "qi", 0, 16);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++)
      for (size_t wx = 0; wx < 1; wx ++) {
        read->add_load("buf", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  read->add_store("out", "po, pi");

  //optimized first time
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  buffers_opt.at("buf").generate_banks_and_merge(opt);
  cout << buffers_opt.at("buf") << endl;
  auto rewrite_buf = buffers_opt.at("buf").port_grouping(4);
  for (auto buf : rewrite_buf) {
    cout << buf << endl;
    buffers_opt[buf.name] = buf;
  }
  buffers_opt.erase("buf");
  buffer_vectorization("buf1", 1, 4, buffers_opt);

  //second time
  auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
  cout << codegen_c(opt_sched) << endl;
  cout <<"Multi-dim schedule:\n" << str(opt_sched) << endl;
  auto new_opt_sched = optimized_schedule_from_buffers_flatten(buffers_opt, true);
  cout << "Flatten-dim schedule:\n" << codegen_c(new_opt_sched) << endl;
  cout << str(new_opt_sched) << endl;
}



void emit_top_address_stream(string fname, TileConstraints lake_mem_tile, vector<int> read_cycle, vector<int> write_cycle,
        vector<vector<int> > read_addr, vector<vector<int> > write_addr) {
  ofstream out(fname+".csv");

  //TODO: put this into a tile constraint file
  int input_width = lake_mem_tile.ic_in, output_width = lake_mem_tile.ic_out;
  int latency_ren2read = lake_mem_tile.delay_ren2read;

  int cycle = 0;
  size_t rd_itr = 0;
  size_t wr_itr = 0;
  out << "data_in, wen, ren, data_out, valid_out" << endl;
  while (rd_itr < read_cycle.size() && wr_itr < write_cycle.size()) {
    bool wen = false, ren = false, valid = false;
    auto addr_in = vector<int>(input_width, 0);
    auto addr_out = vector<int>(output_width, 0);
    if (rd_itr < read_cycle.size()) {
      if (read_cycle.at(rd_itr) <= cycle + latency_ren2read) {
        ren = true;
      }
      if (read_cycle.at(rd_itr) == cycle) {
        valid = true;
        for (size_t i = 0; i < read_addr.at(rd_itr).size(); i ++)
          addr_out.at(i) = read_addr.at(rd_itr).at(i);

        //cout << cycle << tab(1) << "rd" << tab(1) << addr_out << endl;
        //out << "rd@" << cycle << tab(1) << ",data=" <<sep_list(addr, "[", "]", " ") << endl;
        rd_itr ++;
      }
    }
    if (wr_itr < write_cycle.size()) {
      if (write_cycle.at(wr_itr) == cycle) {
        wen = true;
        for (size_t i = 0; i < write_addr.at(wr_itr).size(); i ++)
          addr_in.at(i) = write_addr.at(wr_itr).at(i);
        //cout << cycle << tab(1) << "wr" << tab(1) << addr_in << endl;
        //out << "wr@" << cycle << tab(1) << ",data="<< sep_list(addr, "[", "]", " ") << endl;
        //out << cycle << tab(1) << "wr"  << endl;
        wr_itr ++;
      }
    }

    //for generate multiple bit valid/wen
    int out_width = pick(read_addr).size();
    int in_width = pick(write_addr).size();
    int mul_out = pow(2, out_width) - 1;
    int mul_in = pow(2, in_width) - 1;

    //Some fix for the output format
    string l_in = addr_in.size() > 1 ? "[[" : "";
    string l_out = addr_out.size() > 1 ? "[[" : "";
    string r_in = addr_in.size() > 1 ? "]]" : "";
    string r_out = addr_out.size() > 1 ? "]]" : "";

    out << sep_list(addr_in, l_in, r_in, "],[") << ", " << wen*mul_in << ", " << ren* mul_out << ", "<< sep_list(addr_out, l_out, r_out, "],[") << ", " << valid * mul_out << endl;

    cycle ++;
  }
  out.close();
}

void emit_sram_address_stream(string fname, vector<int> read_cycle, vector<int> write_cycle,
        vector<vector<int> > read_addr, vector<vector<int> > write_addr) {
  ofstream out(fname+".csv");
  int cycle = 0;
  size_t rd_itr = 0;
  size_t cen_itr = 0;
  size_t wr_itr = 0;
  out << "data_in, wen, cen, data_out, valid_data" << endl;
  int in_width = pick(write_addr).size();
  int out_width = pick(read_addr).size();
  auto addr_out = vector<int>(out_width, 0);
  while (rd_itr < read_cycle.size() && wr_itr < write_cycle.size()) {
    bool wen = false, cen =false, valid = false;
    auto addr_in = vector<int>(in_width, 0);
    if (rd_itr < read_cycle.size()) {
      if (cen_itr < read_cycle.size())
        if (read_cycle.at(cen_itr) == cycle + 1) {
          cen = true;
          cen_itr ++;
      }
      if (read_cycle.at(rd_itr) == cycle) {
        valid = true;
        addr_out = read_addr.at(rd_itr);

        //cout << cycle << tab(1) << "rd" << tab(1) << addr_out << endl;
        //out << "rd@" << cycle << tab(1) << ",data=" <<sep_list(addr, "[", "]", " ") << endl;
        rd_itr ++;
      }
    }
    if (wr_itr < write_cycle.size()) {
      if (write_cycle.at(wr_itr) == cycle) {
        wen = true;
        cen = true;
        addr_in = write_addr.at(wr_itr);
        addr_out = vector<int>(out_width, 0);
        //cout << cycle << tab(1) << "wr" << tab(1) << addr_in << endl;
        //out << "wr@" << cycle << tab(1) << ",data="<< sep_list(addr, "[", "]", " ") << endl;
        //out << cycle << tab(1) << "wr"  << endl;
        wr_itr ++;
      }
    }

    out << sep_list(addr_in, "[[", "]]", "],[") << ", " << wen << ", " << cen << ", "<< sep_list(addr_out, "[[", "]]", "],[") << ", " << valid << endl;
    cycle ++;
  }
  out.close();
}

map<string, umap*> get_op2sched(map<string, UBuffer>& buffers_opt, umap* opt_sched, bool flatten=true) {
  map<string, umap*> op2sched;
  //get a map from op to schedule
  for (auto & buf : buffers_opt) {
      UBuffer& buffer = buf.second;
      for (string pt: buffer.get_in_ports()) {
          auto rddom = buffer.domain.at(pt);
          string op_name = name(rddom);
          auto pt_sched = to_umap(get_maps_in_map(opt_sched).at(op_name));
          cout << "Schedule for pt: " << pt << " is " << str(pt_sched) << endl;
          buffer.schedule.at(pt) = pt_sched;
          if (flatten) {
            auto origin_access_map = buffer.access_map.at(pt);
            buffer.access_map.at(pt) = flatten_umap_domain(buffer.ctx, origin_access_map);
          }
          if(op2sched.count(op_name) == 0) {
              op2sched[op_name] = pt_sched;
          }
      }
      for (string pt: buffer.get_out_ports()) {
          auto wtdom = buffer.domain.at(pt);
          string op_name = name(wtdom);
          auto pt_sched = to_umap(get_maps_in_map(opt_sched).at(op_name));
          cout << "Schedule for pt: " << pt << " is " << str(pt_sched) << endl;
          buffer.schedule.at(pt) = pt_sched;
          if (flatten) {
            //flatten_access map
            auto origin_access_map = buffer.access_map.at(pt);
            buffer.access_map.at(pt) = flatten_umap_domain(buffer.ctx, origin_access_map);
          }
          if(op2sched.count(op_name) == 0) {
              op2sched[op_name] = pt_sched;
          }
      }
  }
  return op2sched;

}


void lattice_schedule_buf(isl_ctx* ctx, map<string, UBuffer> & buffers_opt, umap* opt_sched, HWconstraints sram) {

  //cout << "Lattice schedule: " << str(opt_sched) << endl;


  //get a map from op to schedule
  auto op2sched = get_op2sched(buffers_opt, opt_sched);

  for (auto it: op2sched) {
    cout <<"\tOP: " << it.first << " has sched: " << str(it.second) << endl;
  }
  //assert(false);

  //compute the bound of the schedule
  cout << str(lexmin(range(opt_sched))) << endl << str(lexmax(range(opt_sched))) <<endl;
  auto bound = Box(opt_sched);
  isl_set* sched_set = bound.to_set(ctx, "");
  auto bset_vec = constraints(sched_set);
  for (auto bset: bset_vec) {
      cout << "constraints: " << str(bset) << endl;
  }

  //Initialize the variable for lattice count
  map<string, bool> update_map;
  size_t cycle = 0;
  string sram_name;
  for (auto buf : buffers_opt) {
      update_map[buf.first] = false;
      if (is_suffix(buf.first, "sram")) {
          sram_name = buf.first;
      }
  }
  buffers_opt.at(sram_name).hardware = sram;
  cout << str(sched_set) << endl;
  auto point_vec = get_points(sched_set);
  std::sort(point_vec.begin(), point_vec.end(), lex_lt_pt);
  for (auto point : point_vec) {
      //cout << str(point) << endl;
      //auto input_sched = op2sched.at("input");
      //auto isExeQP = card(its_range(input_sched, to_uset(isl_set_from_point(cpy(point)))));
      //cout <<"Card Expr: " << str(isExeQP) << endl;
      //bool isExe = int_lower_bound(isExeQP) == 1;
      //cout << "input OP execute in this point = " << isExe << endl;
      for (auto & it: buffers_opt) {
          auto & buf = it.second;
          //cout << "Buffer: " << buf.name << endl;
          //cout << str(point) << " read = " << buf.is_rd(point) << endl;
          //cout << str(point) << " write = " << buf.is_wr(point) << endl;
          //tcout << endl;

          //first pass to update cycle
          //FIXME: possible bug. we need to add the buffer constraints of rd/wr same cycle
          if (buf.is_wr(point) ){//|| buf.is_rd(point)) {
              if (update_map.at(it.first)) {
                  cout <<  " Buffer: " << buf.name << " update cycle" << endl;
                  cycle ++;
                  for (auto & it: update_map) {
                      it.second = false;
                  }
              }
          }

          //second pass to process read and write
          if (buf.is_wr(point) && is_suffix(buf.name, "agg")) {
            auto pt = pick(buf.get_in_ports());
            auto rd_sched = to_map(buf.schedule.at(pt));
            auto iter_set = domain(its_range(rd_sched, isl_set_from_point(point)));
            buf.mark_write(cycle, iter_set);
            update_map.at(it.first) = true;

            cout << "Buffer: " << buf.name << endl;
            //cout << str(point) << " read = " << buf.is_rd(point) << endl;
            cout << str(point) << " write = " << buf.is_wr(point) << " at cycle:" << cycle << endl;
            cout << endl;

          }
          else if (buf.is_rd(point) && is_suffix(buf.name, "tb")) {
            auto pt = pick(buf.get_out_ports());
            auto rd_sched = to_map(buf.schedule.at(pt));
            auto iter_set = domain(its_range(rd_sched, isl_set_from_point(point)));
            buf.mark_read(cycle, iter_set);
            update_map.at(it.first) = true;

            cout << "Buffer: " << buf.name << endl;
            cout << str(point) << " read = " << buf.is_rd(point) << " at cycle:" << cycle << endl;
            //cout << str(point) << " write = " << buf.is_wr(point) << " at cycle:" << cycle << endl;
            cout << endl;
            //TODO: pop out sram rd operation ahead of tb read
            buffers_opt.at(sram_name).schedule_read_sram(cycle, iter_set, buf);
          }
          else if(buf.is_wr(point) && is_suffix(buf.name, "sram")) {
              //TODO:get the number of cycle depend on hw constraints
            cout << "Buffer: " << buf.name << endl;
            cout << str(point) << " write = " << buf.is_wr(point) << " at cycle:" << cycle << endl;
            cout << endl;
            auto pt = pick(buf.get_in_ports());
            auto rd_sched = to_map(buf.schedule.at(pt));
            auto iter_set = domain(its_range(rd_sched, isl_set_from_point(point)));
            buf.mark_write_sram(cycle, iter_set);
          }
          else if(buf.is_rd(point) && is_suffix(buf.name, "sram")) {
              //TODO: push operation into queue and its corresponding cycle:
            cout << "Buffer: " << buf.name << endl;
            cout << str(point) << " push read to queue  at cycle:" << cycle << endl;
            cout << endl;
            auto pt = pick(buf.get_out_ports());
            auto rd_sched = to_map(buf.schedule.at(pt));
            auto iter_set = domain(its_range(rd_sched, isl_set_from_point(point)));
            buf.mark_read_sram(iter_set);
          }
      }
  }
}

void emit_address_stream2file(map<string, UBuffer> buffers_opt, string read_buf, string write_buf, string file_name, bool is_top, TileConstraints tc) {
  vector<int> sram_read = buffers_opt.at(read_buf).read_cycle;
  vector<int> sram_write = buffers_opt.at(write_buf).write_cycle;
  auto read_addr = buffers_opt.at(read_buf).read_addr;
  auto write_addr = buffers_opt.at(write_buf).write_addr;
  if (is_top) {
    emit_top_address_stream(file_name, tc, sram_read, sram_write, read_addr, write_addr);
  } else {
    emit_sram_address_stream(file_name, sram_read, sram_write, read_addr, write_addr);
  }
}


void find_high_bandwidth_non_const_rd_reads(prog& prg) {
  cout << "Ops..." << endl;
  map<string, vector<op*> > high_bw_buffers;
  for (auto op : prg.all_ops()) {
    cout << tab(1) << op->name << endl;
    for (auto b : op->buffers_read()) {
      if (op->num_read_ports(b) > 1) {
        high_bw_buffers[b].push_back(op);
      }
    }
  }

  cout << "High bandwidth" << endl;
  for (auto b : high_bw_buffers) {
    cout << tab(1) << b.first << endl;

    for (auto vo : prg.iter_vars()) {
      auto op = vo.first;
      vector<string> vars = vo.second;
      cout << tab(2) << "Reads from " << b.first << " by " << op->name << "..." << endl;
      for (auto addr : op->read_addrs(b.first)) {
        auto expr = to_pw_multi_aff(prg.ctx, vars, addr);
        cout << tab(3) << str(expr) << endl;
      }

      cout << tab(2) << "Writes to " << b.first << " by " << op->name << "..." << endl;
      for (auto addr : op->write_addrs(b.first)) {
        auto expr = to_pw_multi_aff(prg.ctx, vars, addr);
        cout << tab(3) << str(expr) << endl;
      }
    }
  }

  //assert(false);

  auto consumer_map = coalesce(prg.consumer_map());
  auto producer_map = prg.producer_map();

  cout << tab(2) << "consumer map: " << str(consumer_map) << endl;
  cout << tab(2) << "card        : " << str(card(consumer_map)) << endl;
  cout << tab(2) << "Pieces..." << endl;
  for (auto m : get_maps(consumer_map)) {
    cout << tab(3) << str(m) << endl;
    cout << tab(3) << str(card(m)) << endl << endl;
  }

  cout << "Iter vars..." << endl;
  for (auto vo : prg.iter_vars()) {
    cout << tab(1) << vo.first->name << " -> " << comma_list(vo.second) << endl;
    cout << tab(2) << "Consumed..." << endl;
    for (auto cp : vo.first->consumes_pair()) {
      cout << tab(3) << cp.first << ": " << str(cp.second) << endl;
    }

    cout << tab(2) << "Produced..." << endl;
    for (auto cp : vo.first->produces()) {
      cout << tab(3) << cp << endl;
    }
  }


  // Now: Find the re-use distances for the pieces?
  // Q: What is the re-use distance? The difference
  // between the time when a value is written and
  // the time(s) when it is read.
  //
  // Or: Maybe we should analyze the re-use port by
  // port?
  //
  // Note: Operations are at the same level if
  // their schedules are separated only by a constant
  // in one component of the schedule?
  //
  // Also two operations may not need the same port
  // at the same time even if they are at the same
  // level because that level may be high up
  // in the loop hierarchy, so they are separated
  // by a large amount of time due to the lower
  // levels of the loop nest executing between them.

  //cout << tab(2) << "coalesced   : " << str(coalesce(consumer_map)) << endl;
  //cout << tab(2) << "producer map: " << str(producer_map) << endl;
}

void insert_pad_loops(const int level, op* root, const map<string, vector<int> >& pad_indexes) {
  if (!root->is_loop()) {
    return;
  }

  cout << "level = " << level << ", op = " << root->name << endl;
  for (auto c : root->children) {
    cout << tab(1) << "child = " << c->name << endl;
    for (auto n : c->descendant_op_names()) {
      cout << tab(2) << "checking if we should pad " << n << endl;
      int should_pad = map_find(n, pad_indexes)[level + 1];
      if (should_pad == -1) {
        cout << "Should insert pad between: " << root->name << " and " << c->name << endl;
        op* lp = new op();
        lp->name = "pad_" + root->name + "_to_" + c->name;
        lp->ctx = root->ctx;
        lp->parent = root;
        lp->tp = IR_NODE_TYPE_LOOP;
        lp->start = 0;
        lp->end_exclusive = 1;
        lp->children.push_back(c);
        root->replace_child(c, lp);
        break;
      }
    }
  }

  for (auto c : root->children) {
    insert_pad_loops(level + 1, c, pad_indexes);
  }

  //insert_pad_loops(prg.root, pad_indexes);
}

void insert_pad_loops(prog& prg, const map<string, vector<int> >& pad_indexes) {
  insert_pad_loops(0, prg.root, pad_indexes);
}

std::set<string> buffers_referenced(op* p) {
  assert(!p->is_loop());

  std::set<string> bufs;
  //for (auto b : p->produce_locs) {
  for (auto b : p->buffers_written()) {
    bufs.insert(b);
  }

  //for (auto b : p->consume_locs_pair) {
  for (auto b : p->buffers_read()) {
    bufs.insert(b);
  }

  return bufs;
}

void reaccess_no_hierarchy_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "reaccess_conv_no_hierarchy_rolled";
  prg.add_input("in");
  prg.add_input("weights_oc");
  prg.add_output("out_oc");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["weights_oc"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["out_oc"] = 16;
  prg.buffer_port_widths["bufl2"] = 16;
  prg.buffer_port_widths["weights"] = 16;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "pi, po");
  write->add_store("bufl2", "pi, po");

  // Load weights
  {
    auto p = prg.add_nest("aow", 0, 2, "pow", 0, 3, "piw", 0, 3);
    auto write = p->add_op("load_weights");
    write->add_load("weights_oc", "piw, pow, aow");
    write->add_store("weights", "piw, pow, aow");
  }

  auto q = prg.add_nest("ao", 0 , 2, "qo", 0, 6, "qi", 0, 14);
  auto init_out = q->add_op("init_out");
  init_out->add_function("set_zero_16");
  init_out->add_store("out", "qi, qo, ao");

  auto qw = q->add_loop("wy", 0, 3);
  auto read = qw->add_op("output");
  read->add_load("out", "qi, qo, ao");
  read->add_function("weighted_conv_3_1");
  for (size_t wx = 0; wx < 3; wx ++) {
    read->add_load("weights", str(wx) + ", wy, ao");
    read->add_load("bufl2", "qi+" + str(wx) + ", qo+wy");
  }
  read->add_store("out", "qi, qo, ao");

  auto write_oc = q->add_op("write_out_oc");
  write_oc->add_load("out", "qi, qo, ao");
  write_oc->add_store("out_oc", "qi, qo, ao");


  cout << "Before padding..." << endl;
  prg.pretty_print();
  //assert(false);

  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  cout << "Running unoptimized code" << endl;
  vector<string> unoptimized_res = run_regression_tb(prg);

  for (auto op : prg.all_ops()) {
    cout << op->name << endl;
    auto vars = map_find(op, prg.iter_vars());
    for (auto v : buffers_referenced(op)) {
      cout << tab(1) << v << endl;
      for (auto a : addrs_referenced(op, v)) {
        assert(a.size() > 0);
        isl_multi_aff* ma = to_multi_aff(prg.ctx, vars, a.at(0).second);
        cout << tab(2) << str(a) << endl;
        cout << tab(2) << str(ma) << endl;
        for (int i = 0; i < isl_multi_aff_dim(ma, isl_dim_set); i++) {
          auto aff = isl_multi_aff_get_aff(ma, i);
          cout << tab(3) << i << ": " << str(aff) << endl;

          for (int d = 0; d < num_in_dims(aff); d++) {
            cout << tab(4) << dim_name(aff, d) << ": " << str(get_coeff(aff, d)) << endl;
          }
        }
      }
    }
  }

  //assert(false);

  //generate_optimized_code(prg);
  //generate_regression_testbench(prg);
  //vector<string> unoptimized_res = run_regression_tb(prg);

  //generate_optimized_code(prg);
  //assert(false);

  auto dom = prg.whole_iteration_domain();
  auto valid = coalesce(prg.validity_deps());

  cout << "dom = " << str(dom) << endl;
  cout << "validity = " << str(valid) << endl;

  auto pad_indexes = pad_insertion_indexes(dom, valid);
  for (auto p : pad_indexes) {
    cout << p.first << " -> " << str(p.second) << endl;
  }
  //assert(false);

  insert_pad_loops(prg, pad_indexes);

  cout << "After padding..." << endl;
  prg.pretty_print();

  string target_op = "output";
  string target_buf = "bufl2";

  make_constant_dd(target_op, target_buf, prg);

  cout << "After loop insertion" << endl;
  prg.pretty_print();
  //assert(false);

  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  cout << "Running optimized code" << endl;
  vector<string> optimized_res = run_regression_tb(prg);
  assert(optimized_res == unoptimized_res);
}

void reaccess_no_hierarchy_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "reaccess_conv_no_hierarchy";
  prg.add_input("in");
  prg.add_input("weights_oc");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["weights_oc"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["bufl2"] = 16;
  prg.buffer_port_widths["weights"] = 16;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "pi, po");
  write->add_store("bufl2", "pi, po");

  // Load weights
  {
    auto p = prg.add_nest("aow", 0, 2, "pow", 0, 3, "piw", 0, 3);
    auto write = p->add_op("load_weights");
    write->add_load("weights_oc", "piw, pow, aow");
    write->add_store("weights", "piw, pow, aow");
  }

  auto q = prg.add_nest("ao", 0 , 2, "qo", 0, 6, "qi", 0, 14);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_function("weighted_conv_3_3");
        read->add_load("weights", to_string(wy) + ", " + to_string(wx) + ", ao");
        read->add_load("bufl2", "qi+" + to_string(wy) + ", qo+" + to_string(wx));
      }
  }
  read->add_store("out", "qi, qo, ao");

  auto dom = prg.whole_iteration_domain();
  auto valid = coalesce(prg.validity_deps());

  cout << "Before padding..." << endl;
  prg.pretty_print();

  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);

  //generate_optimized_code(prg);
  //assert(false);

  auto pad_indexes = pad_insertion_indexes(dom, valid);
  insert_pad_loops(prg, pad_indexes);

  //cout << "After padding..." << endl;
  //prg.pretty_print();

  string target_op = "output";
  string target_buf = "bufl2";

  vector<string> upsamples =
    upsample_vars(target_buf, prg.find_op(target_op), prg);

  assert(upsamples.size() == 1);
  assert(upsamples.at(0) == "ao");

  make_constant_dd(target_op, target_buf, prg);

  cout << "After loop insertion" << endl;
  prg.pretty_print();
  //generate_optimized_code(prg);
  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  //options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
  generate_optimized_code(options, prg);

  generate_regression_testbench(prg);
  vector<string> optimized_res = run_regression_tb(prg);
  assert(optimized_res == unoptimized_res);
  //assert(false);
}

void reaccess_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "reaccess_conv";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["bufl2"] = 16;
  prg.buffer_port_widths["bufl1"] = 16;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "pi, po");
  write->add_store("bufl2", "pi, po");

  {
    auto e = prg.add_nest("eao", 0 , 2, "eqo", 0, 8, "eqi", 0, 16);
    auto rd = e->add_op("ld_bufl2_l1");
    rd->add_load("bufl2", "eqi, eqo");
    rd->add_store("bufl1", "eqi, eqo, eao");
  }


  auto q = prg.add_nest("ao", 0 , 2, "qo", 0, 6, "qi", 0, 14);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("bufl1", "qi+" + to_string(wy) + ", qo+" + to_string(wx) + ", ao");
      }
  }
  read->add_store("out", "qi, qo, ao");

#ifdef COREIR
  auto opt_sched = prg.optimized_schedule();
  auto schedmap = its(isl_schedule_get_map(opt_sched), prg.whole_iteration_domain());
  auto bufs = build_buffers(prg, schedmap);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  for (auto& b : bufs) {
    if (b.second.get_in_ports().size() > 0) {
      b.second.generate_banks_and_merge(opt);

      //Assign an configuration file,
      json config;
      config["name"][0] = "TOP_address.csv";
      b.second.set_config(config);

      b.second.port_group2bank(opt);
    }
  }
  generate_coreir(opt, bufs, prg, schedmap);
#endif


  //generate_optimized_code(prg);

  //auto buffers_opt = build_buffers(prg);
  //CodegenOptions opt;
  //opt.conditional_merge = false;
  //buffers_opt.at("buf").generate_bank_and_merge(opt);

}

#ifdef COREIR
json parse_config_file(string filename) {
    json ret;
    std::ifstream file(filename);
    std::string line;
    while(std::getline(file, line)) {
        auto expr_val = split_at(line, " = ");
        assert(expr_val.size() == 2);
        string val_str = expr_val.at(1);
        int val = safe_stoi(expr_val.at(1));
        string config_key = take_btw(expr_val.at(0), "[\"", "\"]");
        ret[config_key][0] = val;
    }
    return ret;
}
#endif


void conv45_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "vec";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf", "po, pi");

  auto q = prg.add_nest("qo", 0, 5, "qi", 0, 12);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 4; wy ++) {
      for (size_t wx = 0; wx < 5; wx ++) {
        read->add_load("buf", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("out", "po, pi");

  //unoptimized schedule
  auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());
  auto buffers = build_buffers(prg, sched_naive);

  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  buffers_opt.at("buf").generate_banks_and_merge(opt);
  cout << buffers_opt.at("buf") << endl;
  buffers_opt.at("buf").port_group2bank(opt);
  cout << buffers_opt.at("buf") << endl;
  buffers_opt.at("buf").print_bank_info();

#ifdef COREIR
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cwlib(context);
  //json config_reg_map = parse_config_file("sample_configuration.txt");
  json config_reg_map;
  config_reg_map["name"][0] = "TOP_address.csv";
  buffers_opt.at("buf").set_config(config_reg_map);
  auto def = generate_coreir(opt, context, buffers_opt.at("buf"));

  if(!saveToFile(context->getNamespace("global"), "conv45_ubuffer.json")) {
    cout << "Could not save ubuffer coreir!" << endl;
    context->die();
  }
  CoreIR::deleteContext(context);
#endif

  auto post_proc_buffers = buffers_opt.at("buf").generate_ubuffer(opt);
  /*opt.conditional_merge = false;
  auto rewrite_buffers = buffers_opt.at("buf").generate_ubuffer(opt);

  for (auto it: post_proc_buffers) {
    buffer_vectorization(it.first, 1, 4, rewrite_buffers);

    //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
    auto opt_sched = optimized_schedule_from_buffers_flatten(rewrite_buffers, true);
    cout << codegen_c(opt_sched) << endl;

    rewrite_buffers.erase(it.first);

    HWconstraints sram = {4, 1, 512, false, true};

    lattice_schedule_buf(prg.ctx, rewrite_buffers, opt_sched, sram);

    TileConstraints tc{1,3,0};
    emit_address_stream2file(rewrite_buffers, it.first+"_sram", it.first+"_sram", it.first+"_SRAM_address", false, tc);
    emit_address_stream2file(rewrite_buffers, it.first+"_tb", it.first+"_agg", it.first+"_reg_TOP_address", true, tc);
    compare_to_gold(it.first+"_SRAM_address.csv", "SRAM_address_tapeout.csv");
    compare_to_gold(it.first+"_reg_TOP_address.csv", "TOP_address.csv");
  }*/
}

prog cnn_conv_layer() {

  prog prg;
  /*
  string read_string = "{conv_read[root, i] -> [i+2]: 0<=i<=9 }";
  string write_string = "{conv_write[root, j] -> [j]: 0<=j<=11}";
  isl_map* read_sched= isl_map_read_from_str(prg.ctx, read_string.c_str());
  isl_map* write_sched= isl_map_read_from_str(prg.ctx, write_string.c_str());
  auto before_acc = lex_gt(read_sched, write_sched);
  cout <<"\tlexlt result: " << str(before_acc) << endl;
  */

  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "cnn_conv_layer";
  prg.add_input("ifmap");
  //prg.add_input("weight");
  prg.add_output("ofmap");
  prg.buffer_port_widths["ifmap"] = 32;
  prg.buffer_port_widths["ifbuf"] = 32;
  prg.buffer_port_widths["ofmap"] = 32;
  //prg.buffer_port_widths["weight"] = 32;
  int unroll_pi = 4, unroll_po = 1;

  {
    auto y = prg.add_loop("y", 0, 16);
    auto x = y->add_loop("x", 0, 16);
    auto ich = x->add_loop("ich", 0, 32 / unroll_pi);
    auto write = ich->add_op("dma_if");
    for (int i = 0; i < unroll_pi; i ++) {
        string channel = "ich*" + to_string(unroll_pi) + "+" + to_string(i);
        write->add_load("ifmap", channel + ", x, y");
        write->add_store("ifbuf", channel + ", x, y");
    }
  }

  {
    auto buf_y = prg.add_loop("ly", 0, 16 - 2);
    auto buf_x = buf_y->add_loop("lx", 0, 16 - 2);
    auto buf_och= buf_x->add_loop("loch", 0, 32 / unroll_po);
    auto init = buf_och->add_op("init_psum");
    init->add_function("set_zero_32");
    init->add_store("psum", "0");
    auto buf_fy= buf_och->add_loop("lfy", 0, 3);
    auto buf_fx= buf_fy->add_loop("lfx", 0, 3);
    auto buf_ich = buf_fx->add_loop("lich", 0, 32 / unroll_pi);
    auto mac = buf_ich->add_op("mac");
    // Need to load 9 values
    for (int po = 0; po < unroll_po; po++) {
      for (int pi = 0; pi < unroll_pi; pi++) {
        string c = to_string(unroll_pi) + "*lich + " + to_string(pi);
        mac->add_load("ifbuf", c + ", lfx + lx, lfy + ly" );
      }
    }
    mac->add_load("psum", "0");
    mac->add_function("cnn_mac");
    mac->add_store("psum", "0");
    auto output = buf_och-> add_op("output");
    output->add_load("psum", "0");
    output->add_store("ofmap", "loch, lx, ly");
  }
  return prg;
}

void double_buffer_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "db_test";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["buf"] = 16;

  auto tile = prg.add_nest("t", 0, 4);
  auto p = tile->add_nest("po", 0, 16, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "t, po, pi");
  write->add_store("buf", "t, po, pi");

  auto q = tile->add_nest( "r", 0, 2, "qo", 0, 16, "qi", 0, 16);
  auto read = q->add_op("output");
  read->add_load("buf", "t, qi, qo");
  read->add_store("out", "r, t, qo, qi");

  //unoptimized_schedule
  auto buffer_opt = build_buffers(prg);
  auto sched_nf = optimized_schedule_from_buffers(buffer_opt);
  auto sched_opt = optimized_schedule_from_buffers_flatten(buffer_opt, false);
  auto sched_fea = optimized_schedule_from_buffers_feautrier(buffer_opt, false);
  umap* sched = isl_union_map_read_from_str(ctx(sched_opt),
          "{input[root=0, t, po, pi]->[t, pi+16*po]: 0<=t<=3 and 0<=po<=15 and 0<=pi<=15;output[root=0, t, po, pi, c]->[t+1, c + 8*pi + 128*po]: 0<=t<=3 and 0<=c<=7 and 0<=po<=15 and 0<=pi<=15}");
  cout << str(sched) << endl;
  cout << str(sched_opt) << endl;
  cout <<codegen_c(sched_opt) << endl;
  cout <<codegen_c(sched_nf) << endl;
  cout <<codegen_c(sched_fea) << endl;
  cout <<codegen_c(sched) << endl;

}

void conv33_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "conv33_naive_compute";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["buf"] = 16;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf", "po, pi");

  auto q = prg.add_nest("qo", 0, 6, "qi", 0, 14);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("buf", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("out", "po, pi");

  //unoptimized_schedule
  auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());

  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  //int max_inpt = 2, max_outpt = 2;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  //buffers_opt.at("buf").generate_bank_and_merge(opt);
  //cout << buffers_opt.at("buf") << endl;
  //buffers_opt.at("buf").port_group2bank(2, 2);
  //cout << buffers_opt.at("buf") << endl;

#ifdef COREIR
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cwlib(context);
  //json config_reg_map = parse_config_file("sample_configuration.txt");
  //buffers_opt.at("buf").set_config(config_reg_map);
  //auto def = generate_coreir(opt, context, buffers_opt.at("buf"));

  //if(!saveToFile(context->getNamespace("global"), "conv33_ubuffer.json", def)) {
  //  cout << "Could not save ubuffer coreir!" << endl;
  //  context->die();
  //}
  //CoreIR::deleteContext(context);
  for (auto& b : buffers_opt) {
    b.second.generate_banks_and_merge(opt);

    //Assign an configuration file,
    json config_reg_map = parse_config_file("conv33_configuration.txt");
    b.second.set_config(config_reg_map);

    b.second.port_group2bank(opt);
  }
  generate_coreir(opt, buffers_opt, prg, sched_naive);
#endif

  cout << "post processing buf" << endl;
  cout << buffers_opt.at("buf");

  auto post_proc_buffers = buffers_opt.at("buf").generate_ubuffer(opt);
  opt.conditional_merge = false;
  auto rewrite_buffers = buffers_opt.at("buf").generate_ubuffer(opt);

  for (auto it : post_proc_buffers) {
    cout << "Vectorizing " << it.first << endl;
    cout << it.second << endl;
    buffer_vectorization(it.first, 1, 4, rewrite_buffers);
    cout << "Done with vectorization" << endl;

    //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
    auto opt_sched = optimized_schedule_from_buffers_flatten(rewrite_buffers, true);
    cout << codegen_c(opt_sched) << endl;

    rewrite_buffers.erase(it.first);

    HWconstraints sram = {4, 1, 512, false, true};

    lattice_schedule_buf(prg.ctx, rewrite_buffers, opt_sched, sram);

    TileConstraints tc{1,3,0};
    emit_address_stream2file(rewrite_buffers, it.first+"_sram", it.first+"_sram", it.first+"_SRAM_address", false, tc);
    emit_address_stream2file(rewrite_buffers, it.first+"_tb", it.first+"_agg", it.first+"_reg_TOP_address", true, tc);
    compare_to_gold(it.first+"_SRAM_address.csv", "SRAM_address_tapeout.csv");
    compare_to_gold(it.first+"_reg_TOP_address.csv", "TOP_address.csv");
  }
}

void conv33_large_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "vec";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;

  auto p = prg.add_nest("po", 0, 64, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf", "po, pi");

  auto q = prg.add_nest("qo", 0, 62, "qi", 0, 14);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("buf", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("out", "po, pi");

  //unoptimized schedule
  auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());
  auto buffers = build_buffers(prg, sched_naive);

  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  buffers_opt.at("buf").generate_banks_and_merge(opt);
  cout << buffers_opt.at("buf") << endl;
  buffers_opt.at("buf").port_group2bank(opt);
  cout << buffers_opt.at("buf") << endl;

#ifdef COREIR
  //CoreIR::Context* context = CoreIR::newContext();
  //CoreIRLoadLibrary_commonlib(context);
  //CoreIRLoadLibrary_cwlib(context);
  //json config_reg_map = parse_config_file("sample_configuration.txt");
  //buffers_opt.at("buf").set_config(config_reg_map);
  //generate_coreir(opt, context, buffers_opt.at("buf"));

  //if(!saveToFile(context->getNamespace("global"), "conv33_ubuffer.json")) {
  //  cout << "Could not save ubuffer coreir!" << endl;
  //  context->die();
  //}
  //CoreIR::deleteContext(context);
#endif

  auto post_proc_buffers = buffers_opt.at("buf").generate_ubuffer(opt);
  opt.conditional_merge = false;
  auto rewrite_buffers = buffers_opt.at("buf").generate_ubuffer(opt);

  for (auto it: post_proc_buffers) {
    buffer_vectorization(it.first, 1, 4, rewrite_buffers);

    //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
    auto opt_sched = optimized_schedule_from_buffers_flatten(rewrite_buffers, true);
    cout << codegen_c(opt_sched) << endl;

    rewrite_buffers.erase(it.first);

    HWconstraints sram = {4, 1, 512, false, true};

    lattice_schedule_buf(prg.ctx, rewrite_buffers, opt_sched, sram);

    TileConstraints tc{1,3,0};
    emit_address_stream2file(rewrite_buffers, it.first+"_sram", it.first+"_sram", it.first+"_SRAM_large_address", false, tc);
    emit_address_stream2file(rewrite_buffers, it.first+"_tb", it.first+"_agg", it.first+"_reg_TOP_large_address", true, tc);
    //compare_to_gold(it.first+"_SRAM_address.csv", "SRAM_address_tapeout.csv");
    //compare_to_gold(it.first+"_reg_TOP_address.csv", "TOP_address.csv");
  }
}

void bankmerge_vec_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "vec";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf", "po, pi");

  auto q = prg.add_nest("qo", 0, 6, "qi", 0, 16);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++)
      for (size_t wx = 0; wx < 1; wx ++) {
        read->add_load("buf", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  read->add_store("out", "po, pi");

  //optimized first time
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  buffers_opt.at("buf").generate_banks_and_merge(opt);
  //cout << buffers_opt.at("buf") << endl;
  //auto rewrite_buf = buffers_opt.at("buf").port_grouping(4);
  buffers_opt.at("buf").port_group2bank(opt);

  auto post_proc_buffers = buffers_opt.at("buf").generate_ubuffer(opt);
  opt.conditional_merge = false;
  auto rewrite_buffers = buffers_opt.at("buf").generate_ubuffer(opt);

  for (auto it: post_proc_buffers) {
    buffer_vectorization(it.first, 1, 4, rewrite_buffers);
    string buf_name = it.first;

    //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
    auto opt_sched = optimized_schedule_from_buffers_flatten(rewrite_buffers, true);
    cout << codegen_c(opt_sched) << endl;

    rewrite_buffers.erase(buf_name);

    HWconstraints sram = {4, 1, 512, false, true};

    lattice_schedule_buf(prg.ctx, rewrite_buffers, opt_sched, sram);

    TileConstraints tc{1,3,0}, tc_tape{2,2,4};
    emit_address_stream2file(rewrite_buffers, buf_name +"_sram", buf_name+"_sram", "SRAM_address_tapeout", false, tc);
    emit_address_stream2file(rewrite_buffers, it.first+"_tb", it.first+"_agg", "TOP_address", true, tc);
    emit_address_stream2file(rewrite_buffers, it.first+"_tb", it.first+"_agg", "TOP_address_tapeout", true, tc_tape);
    compare_to_gold("SRAM_address_tapeout.csv");
    compare_to_gold("TOP_address.csv");
  }
  /*for (auto buf : rewrite_buf) {
    cout << buf << endl;
    buffers_opt[buf.name] = buf;
  }*/
  //buffers_opt.erase("buf");
  //buffer_vectorization("buf1", 1, 4, rewrite_buffers);

  //second time
  //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
  //auto opt_sched = optimized_schedule_from_buffers_flatten(rewrite_buffers, true);
  //cout << codegen_c(opt_sched) << endl;
  //cout << str(opt_sched) << endl;

  //buffers_opt.erase("buf0");
  //buffers_opt.erase("in");
  //buffers_opt.erase("out");

 // HWconstraints sram = {4, 1, 512, false, true};

 // lattice_schedule_buf(prg.ctx, rewrite_buffers, opt_sched, sram);

 // TileConstraints tc{1,3,0}, tc_tape{2,2,4};
 // emit_address_stream2file(rewrite_buffers, "buf1_sram", "buf1_sram", "SRAM_address_tapeout", false, tc);
 // emit_address_stream2file(rewrite_buffers, "buf1_tb", "buf1_agg", "TOP_address", true, tc);
 // emit_address_stream2file(rewrite_buffers, "buf1_tb", "buf1_agg", "TOP_address_tapeout", true, tc_tape);

 // compare_to_gold("SRAM_address_tapeout.csv");
 // compare_to_gold("TOP_address.csv");
}

void auto_vec_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "vec";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 8);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf", "po, pi");

  auto q = prg.add_nest("qo", 0, 6, "qi", 0, 8);
  // put read / write
  auto read = q->add_op("output");
  read->add_load("buf", "qo, qi");
  read->add_load("buf", "qo+1, qi");
  read->add_load("buf", "qo+2, qi");
  read->add_store("out", "qo, qi");

  auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());

  auto buffers = build_buffers(prg, sched_naive);
  int fetch_width = 4;
  buffer_vectorization("buf", 1, fetch_width, buffers);

  auto opt_sched = optimized_schedule_from_buffers(buffers);
  auto opt_sched_new = optimized_schedule_from_buffers_flatten(buffers, false);
  cout << codegen_c(opt_sched) << endl;
  cout << codegen_c(opt_sched_new) << endl;
  for (auto buf : buffers) {
      UBuffer& buffer = buf.second;
      for (string pt: buffer.get_in_ports()) {
          auto rddom = buffer.domain.at(pt);
          auto pt_sched = its(opt_sched, rddom);
          cout << "Schedule for pt: " << pt << " is " << str(pt_sched) << endl;
          buffer.schedule.at(pt) = pt_sched;
      }
      for (string pt: buffer.get_out_ports()) {
          auto wtdom = buffer.domain.at(pt);
          auto pt_sched = its(opt_sched, wtdom);
          cout << "Schedule for pt: " << pt << " is " << str(pt_sched) << endl;
          buffer.schedule.at(pt) = pt_sched;
      }
      cout << "Vectorized buffer: " << buf.second << endl;
  }
}

void conv_1d_test() {
  prog prg = conv_1d();

  regression_test(prg);
}

isl_schedule_node* print_sched_tp(isl_schedule_node* n, void* user) {
  cout << "\tNode..." << endl;

  isl_schedule_node_type tp = isl_schedule_node_get_type(n);
  cout << "\t\ttp = " << tp << endl;
  if (tp == isl_schedule_node_sequence) {
    cout << "\t\t\tseq" << endl;
  } else if (tp == isl_schedule_node_band) {
    cout << "\t\t\tband" << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_space(n)) << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_partial_schedule_union_map(n)) << endl;

    int* ind = (int*) user;
    if (*ind == 1 || *ind == 2) {
      isl_multi_val* tile_factor = isl_multi_val_zero(isl_schedule_node_band_get_space(n));
      isl_val* tile_val = isl_val_int_from_si(isl_schedule_node_get_ctx(n), 2);
      isl_multi_val_set_val(tile_factor, 0, tile_val);

      isl_schedule_node_band_tile(n, tile_factor);
      //*seen = true;
      *ind = *ind + 1;
    } else {
      *ind = *ind + 1;
    }
  }
  return n;
}

//void mmul_test() {
  //prog prg;
  //auto r = prg.add_loop("r", 0, 8);
  //auto c = r->add_loop("c", 0, 8);
  //auto rd = c->add_op("read");
  //rd->add_store("T", "0");

  //auto k = c->add_loop("k", 0, 8);
  //auto accum = k->add_op("accum");
  //accum->add_load("T", "0");
  //accum->add_store("T", "0");

  //auto write = c->add_op("write");
  //write->add_load("T", "0");
  //write->add_store("M", "r, c");


  //cout << "Program code without optimization..." << endl;
  //prg.unoptimized_codegen();

  //cout << "Program with optimized schedule..." << endl;
  //isl_schedule* opt_sched = prg.optimized_schedule();

  //int ind = 0;
  //opt_sched = isl_schedule_map_schedule_node_bottom_up(opt_sched, print_sched_tp, &ind);


  //auto domain = prg.whole_iteration_domain();
  //auto schedmap = its(isl_schedule_get_map(opt_sched), domain);
  ////cout << "Optimized schedule..." << endl;
  ////cout << codegen_c(schedmap);
//}

void pyramid_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["T1"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "c");
  read0->add_load("M", "c + 1");
  read0->add_load("M", "c + 2");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("M1", "c");

  auto l = prg.add_loop("l", 0, 6);
  auto read1 = l->add_op("read1");
  read1->add_load("M1", "l");
  read1->add_load("M1", "l + 1");
  read1->add_load("M1", "l + 2");
  read1->add_store("T1", "l");

  auto compute1 = l->add_op("compute_out_1");
  compute1->add_function("accumulate_3");
  compute1->add_load("T1", "l");
  compute1->add_store("out", "l");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_2d() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 64);
    auto pc = pr->add_loop("pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64 - 2);
    auto pc = pr->add_loop("lc", 0, 64 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }
  return prg;
}



void ram_addr_unit_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "ram_addr_unit_test_linear";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_bounds["in"] = {15};
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_bounds["out"] = {1};
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_bounds["I"] = {15};
  prg.buffer_port_widths["tmp"] = 32;
  prg.buffer_bounds["tmp"] = {1};

  {
    auto read_in = prg.add_loop("rd_in", 0, 14);
    auto rop = read_in->add_op("read_input_stream");
    rop->add_load("in", "rd_in");
    rop->add_store("I", "rd_in");
  }

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_loop("a", 0, 14);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "a");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  {
    auto buffers = build_buffers(prg);
    CodegenOptions options;
    options.internal = true;
    options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
    all_register_files(prg, options);
    generate_app_code(options, buffers, prg, opt_sched);
  }
  //generate_regression_testbench(prg, buffers);
  generate_regression_testbench(prg);
  auto linear_res = run_regression_tb(prg);

  {
    prg.name = "ram_addr_unit_test_stack";
    auto buffers = build_buffers(prg);
    CodegenOptions options;
    options.internal = true;
    generate_app_code(options, buffers, prg, opt_sched);
  }
  generate_regression_testbench(prg);
  auto stack_res = run_regression_tb(prg);

  assert(linear_res == stack_res);
}

void cnn_test() {
  //prog prg = cnn_conv_layer();
  //prog prg = resnet();
  prog prg = harris();
  auto domain = prg.whole_iteration_domain();

  auto order_deps = prg.relative_orders();
  cout << "Getting validity deps..." << endl;
  isl_union_map *raw_deps = prg.validity_deps();
  cout << "Got validity deps..." << endl;
  cout << "Validity: " << str(raw_deps) << endl;
  auto validity =
    unn(order_deps, raw_deps);
  isl_union_map *proximity =
    cpy(raw_deps);

  auto clksched = hardware_schedule(domain, validity, proximity);
  auto doms = get_sets(domain);
  cout << "---- Domains..." << endl;
  for (auto d : doms) {
    cout << tab(1) << str(d) << endl;
  }
  cout << "---- Hardware schedule:" << endl;
  for (auto s : clksched) {
    cout << tab(1) << s.first << " -> " << str(s.second) << endl;
  }
  assert(false);
  umap* opt_sched = prg.optimized_codegen();
  ////cout << "------ ISL schedule" << endl;
  ////for (auto m : get_maps(opt_sched)) {
    ////cout << tab(1) << str(m) << endl;
  ////}

  //auto domain = prg.whole_iteration_domain();
  //auto schedmap = its(opt_sched, domain);
  //cout << "Optimized schedule..." << endl;
  //cout << codegen_c(schedmap);

    auto buffers = build_buffers(prg);
    CodegenOptions options;
    options.internal = true;
    options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
    generate_app_code(options, buffers, prg, opt_sched);

    generate_regression_testbench(prg, buffers);
    //generate_regression_testbench(prg);

    int res = system(string("g++ -std=c++11 regression_tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
    assert(res == 0);

    res = system("./a.out");
    assert(res == 0);
}

void conv_test() {
    prog prg = conv_2d();

    umap* opt_sched = prg.optimized_codegen();
    auto domain = prg.whole_iteration_domain();
    auto schedmap = its(opt_sched, domain);
    cout << "Optimized schedule..." << endl;
    cout << codegen_c(schedmap);

    auto buffers = build_buffers(prg);
    generate_hls_code(buffers["I"]);
}

void pyramid_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_3x3_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*9;
  prg.buffer_port_widths["T1"] = 32*9;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 10);
    auto pc = pr->add_loop("pc", 0, 10);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 10 - 2);
    auto pc = pr->add_loop("lc", 0, 10 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("CI", "lc, lr");
  }

  {
    auto pr = prg.add_loop("dr", 0, 8 / 2);
    auto pc = pr->add_loop("dc", 0, 8 / 2);
    auto rd = pc->add_op("read_down");
    rd->add_load("CI", "2*dc, 2*dr");
    rd->add_store("D", "dc, dr");
  }

  {
    auto pr = prg.add_loop("sr", 0, 8 / 2 - 2);
    auto pc = pr->add_loop("sc", 0, 8 / 2 - 2);
    auto rd = pc->add_op("read_conv");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "sc + " + to_string(i);
        string r = "sr + " + to_string(j);
        rd->add_load("D", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "sc, sr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

}

void reduce_1d_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_1d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_bounds["in"] = {15};
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_bounds["out"] = {1};
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_bounds["I"] = {15};
  prg.buffer_port_widths["tmp"] = 32;
  prg.buffer_bounds["tmp"] = {1};

  {
    auto read_in = prg.add_loop("rd_in", 0, 14);
    auto rop = read_in->add_op("read_input_stream");
    rop->add_load("in", "rd_in");
    rop->add_store("I", "rd_in");
  }

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_loop("a", 0, 14);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "a");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

}

void reduce_rows_test() {
  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_rows";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;

  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  auto read_in =
    prg.add_nest("rd_r", 0, 3, "rd_c", 0, 10)->add_op({"I", "rd_c, rd_r"}, "id", {"in", "rd_c, rd_r"});

  {

    //auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 10);
    auto accum_loop = prg.add_nest("ar", 0, 3);
    auto init = accum_loop->add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "ar");

    auto accum_inner_loop = accum_loop->add_loop("ac", 0, 10);
    auto accum = accum_inner_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "ar");
    auto next = accum->add_load("I", "ac, ar");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "ar");

    auto write_out = accum_loop->add_op("output");
    write_out->add_load("tmp", "ar");
    write_out->add_store("out", "ar");
  }

  //prg.pretty_print();
  //assert(false);

  CodegenOptions options;
  options.internal = true;
  options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
  //options.inner_bank_offset_mode = INNER_BANK_OFFSET_STACK;
  regression_test(options, prg);
  //assert(false);
}

void reduce_2d_test() {
  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  //prg.buffer_bounds["in"] = {3, 3};

  prg.buffer_port_widths["out"] = 32;
  prg.buffer_bounds["out"] = {1};

  prg.buffer_port_widths["I"] = 32;
  //prg.buffer_bounds["I"] = {3, 3};

  prg.buffer_port_widths["tmp"] = 32;
  prg.buffer_bounds["tmp"] = {1};

  auto read_in =
    prg.add_nest("rd_r", 0, 3, "rd_c", 0, 10)->add_op({"I", "rd_c, rd_r"}, "id", {"in", "rd_c, rd_r"});

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 10);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "ac, ar");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  CodegenOptions options;
  options.internal = true;
  options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
  regression_test(options, prg);
}

umap* input_chunk(UBuffer& buf, const std::string& out_bundle) {

  umap* sched = buf.global_schedule();

  auto bundle_ops = buf.bundle_domain(out_bundle);
  auto DataRead = buf.bundle_access(out_bundle);

  // Assume there is only 1 input port (for now)
  auto in_bundle = pick(buf.get_in_bundles());

  auto write_ops = buf.bundle_domain(in_bundle);
  auto DataWritten = buf.bundle_access(in_bundle);

  auto EventsBeforeRead = lex_gt(sched, sched);

  auto ReadsBeforeCurrentRead = its_range(its(EventsBeforeRead, bundle_ops), bundle_ops);
  // lexmax wrt schedule
  auto PreviousRead = lexmax(ReadsBeforeCurrentRead);

  auto WritesBeforePreviousRead =
    its_range(its(dot(PreviousRead, EventsBeforeRead), bundle_ops), write_ops);

  auto DataWrittenBeforePreviousRead =
    dot(WritesBeforePreviousRead, DataWritten);

  return isl_union_map_subtract(DataRead,
      DataWrittenBeforePreviousRead);
}

void aha_talk_print_program_representation(prog& prg) {
  cout << "#### Info for input program: " << prg.name << endl << endl;

  auto iter_domain = prg.whole_iteration_domain();
  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\tread    = " << str(reads) << endl << endl;

  cout << "---- Statements that read each value" << endl;
  cout << "\tread^-1 = " << str(inv(reads)) << endl << endl;

  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();
  cout << endl << endl;

}

void aha_talk_print_raw_deps(prog& prg) {

  auto iter_domain = prg.whole_iteration_domain();

  auto sched = prg.unoptimized_schedule();

  auto reads =
    its(prg.consumer_map(), iter_domain);

  auto writes =
    its(prg.producer_map(), iter_domain);

  cout << "---- Write   = " << str((writes)) << endl << endl;
  cout << "---- Read    = " << str((reads)) << endl << endl;
  cout << "---- Read^-1 = " << str(inv(reads)) << endl << endl;
  cout << "---- Write . Read^-1 = " << str(dot(writes, inv(reads))) << endl << endl;
  cout << "---- Schedule << Schedule = " << str(lex_lt(sched, sched)) << endl << endl;
  cout << "---- RaW deps = " << str(its(dot(writes, inv(reads)), lex_lt(sched, sched))) << endl << endl;
  cout << "---- RaW^-1   = " << str(coalesce(inv(its(dot(writes, inv(reads)), lex_lt(sched, sched))))) << endl << endl;
}

void aha_talk_print_info(prog& prg) {

  auto iter_domain = prg.whole_iteration_domain();

  cout << "#### Info for input program: " << prg.name << endl << endl;

  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\t" << str(reads) << endl << endl;

  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();
  cout << endl << endl;

  cout << "----- Statement RaW dependencies..." << endl;
  cout << str(isl_union_map_coalesce(inv(prg.validity_deps()))) << endl << endl;

  cout << "----- Optimized loop nests for program minimizing (write -> read) time..." << endl;
  cout << prg.optimized_loop_nest() << endl << endl;

  auto buffers = build_buffers(prg);
  cout << "###### Unified buffers..." << endl;
  cout << "Number of buffers: " << buffers.size() << endl;
  for (auto& b : buffers) {
    UBuffer& buf = b.second;

    cout << "--- " << (prg.is_boundary(b.second.name) ? "External Buffer: " : "Internal Buffer: ") << b.second.name << endl;
    cout << "\t---- In ports" << endl;
    for (auto inpt : b.second.get_in_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
      cout << "\t\t\tbuffer capacity: " << compute_max_dd(b.second, inpt) << endl;
      cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
      cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    }

    cout << "\t---- Out ports" << endl;
    for (auto inpt : b.second.get_out_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
      cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
      cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    }

    cout << "\t---- Output Bundles" << endl;
    for (auto out_bundle : b.second.get_out_bundles()) {
      cout << "\t\t" << out_bundle << endl;
      auto ports = b.second.port_bundles.at(out_bundle);
      cout << "\t\t---- Ports..." << endl;
      for (auto p : ports) {
        cout << "\t\t\t" << p << endl;
      }

      if (buf.get_in_ports().size() == 0) {
        continue;
      }

      auto inpt = pick(buf.get_in_ports());
      buf.port_bundles[inpt] = {inpt};

      auto in_chunk = isl_union_map_coalesce(input_chunk(buf, out_bundle));
      cout << "\t\t Input Chunk: " << str(in_chunk) << endl;
      cout << "\t\t Input Chunk Sizes: " << str(card(in_chunk)) << endl;
    }

    cout << endl << endl;
  }

  generate_app_code(buffers, prg);
  cout << "output code for application is in file: " << prg.name << ".cpp" << endl;
}

void conv_2d_bc_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64);
    auto pc = pr->add_loop("lc", 0, 64);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "min(lc + " + to_string(i) + ", 63)";
        string r = "min(lr + " + to_string(j) + ", 63)";
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  regression_test(prg);
}

prog conv_2d_bc() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64);
    auto pc = pr->add_loop("lc", 0, 64);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
	rd->add_load("I", {{"0 <= lc < " + to_string(63 - i) + " and 0 <= lr < " + to_string(63 - j), "lc + " + to_string(i) + ", lr + " + to_string(j)},
			  {"lc >= " + to_string(63 - i) + " and lr >= " + to_string(63 - j), "63, 63"},
			  {"0 <= lc < " + to_string(63 - i) + " and lr >= " + to_string(63 - j), "lc + " + to_string(i) + ", 63"},
			  {"lc >= " + to_string(63 - i) +  " and 0 <= lr < " + to_string(63 - j), "63, lr + " + to_string(j)}});
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }

  return prg;
}


void conv_1d_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_1d_rolled";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["R"] = 32;

  {
    auto pc = prg.add_loop("pr", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pr");
    write->add_store("I", "pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64 - 2);
    auto rd = pr->add_op("init");
    rd->add_store("R", "lr");
    rd->add_function("set_zero_32");

    auto reduce_inner_loop = pr->add_loop("rr", 0, 3);
    auto reduce_inner = reduce_inner_loop->add_op({"R", "lr"}, "inc", {"R", "lr", "I", "lr + rr"});
  }

  {
    auto outlp = prg.add_nest("xr", 0, 64 - 2);
    outlp->store({"out", "xr"}, {"R", "xr"});
  }

  regression_test(prg);
}

string add_conv_stage(prog& prg, const std::string& inbuffer) {
  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};

  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  auto ns = prg.add_nest(rb, 0, res_rows, rc, 0, res_cols);
  ns->add_op({blur, rb + "," + rc}, "conv_3_3", loads);

  return blur;
}

string add_conv_stage_out(prog& prg, const std::string& inbuffer) {
  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};

  string output = blur;
  string out_stream = output + "_out";
  prg.buffer_port_widths[out_stream] = prg.buffer_port_widths[output];
  prg.buffer_bounds[out_stream] = prg.buffer_bounds[output];
  prg.add_output(out_stream);

  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  auto ns = prg.add_nest(rb, 0, res_rows, rc, 0, res_cols);
  ns->add_op({blur, rb + "," + rc}, "conv_3_3", loads);
  ns->store({out_stream, rb + ", " + rc}, {output, rb + ", " + rc});

  return out_stream;
}

string add_gaussian_stage(prog& prg, const std::string& inbuffer) {

  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};
  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  prg.add_nest(rb, 0, res_rows, rc, 0, res_cols)->add_op({blur, rb + "," + rc}, "conv_3_3", loads);

  string ds = blur + "_ds";
  string dr = ds + "_r";
  string dc = ds + "_c";
  prg.buffer_port_widths[ds] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[ds] = {res_rows / 2, res_cols / 2};
  prg.add_nest(dr, 0, res_rows / 2, dc, 0, res_cols / 2)->
    add_op({ds, dr + ", " + dc}, "id", {blur, "2*" + dr + ", 2*" + dc});

  return ds;
}

void write_out(prog& prg, const std::string& output) {
  string out_stream = output + "_out";
  prg.buffer_port_widths[out_stream] = prg.buffer_port_widths[output];
  prg.buffer_bounds[out_stream] = prg.buffer_bounds[output];
  prg.add_output(out_stream);

  int res_rows = prg.dim(output, 0);
  int res_cols = prg.dim(output, 1);

  string r = out_stream + "_r";
  string c = out_stream + "_c";
  prg.add_nest(r, 0, res_rows, c, 0, res_cols)->store({out_stream, r + ", " + c}, {output, r + ", " + c});
}

void gaussian_pyramid_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "gaussian_pyramid";
  prg.add_input("in");

  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["in"] = 32;

  prg.buffer_bounds["in"] = {32, 32};
  prg.buffer_bounds["I"] = {32, 32};

  prg.add_nest("pr", 0, 32, "pc", 0, 32)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  string I1 = add_gaussian_stage(prg, "I");
  string I2 = add_gaussian_stage(prg, I1);

  write_out(prg, I2);

  regression_test(prg);
}

void jacobi_2d_4_test() {

  const int unroll = 4;
  string us = to_string(unroll);
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d_" + us;
  prg.buffer_port_widths["I"] = 32;

  vector<string> inputs;
  vector<string> outputs;
  for (int i = 0; i < unroll; i++) {
    string in_name_0 = "in_" + us;
    string out_name_0 = "out_" + us;

    prg.buffer_port_widths[in_name_0] = 32;
    prg.add_input(in_name_0);
    prg.buffer_port_widths[out_name_0] = 32;
    prg.add_output(out_name_0);

    inputs.push_back("in_" + us);
    outputs.push_back("out_" + us);
  }

  int rows = 32;
  int cols = 32;

  assert(cols % unroll == 0);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols / unroll);
  for (size_t i = 0; i < inputs.size(); i++) {
    string in_name_0 = inputs.at(i);
    in_nest->add_op({"I", us + "*id0 + " + to_string(i) + ", id1"}, "id", {in_name_0, "id0, id1"});
  }

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, (cols - 1) / unroll);
  for (size_t i = 0; i < outputs.size(); i++) {
    string out_name_1 = outputs.at(i);
    blur_y_nest->
      stencil_op(out_name_1, "jacobi2d_compute", "I", {us + "*(d0) + " + to_string(i) + " - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  }

  regression_test(prg);
}

void jacobi_2d_2_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d_2";
  prg.buffer_port_widths["I"] = 32;

  int unroll_factor = 4;

  string in_name_0 = "in_0";
  string in_name_1 = "in_1";

  string out_name_0 = "out_0";
  string out_name_1 = "out_1";

  int rows = 32;
  int cols = 32;

  prg.buffer_port_widths[in_name_0] = 32;
  prg.add_input(in_name_0);
  prg.buffer_port_widths[in_name_1] = 32;
  prg.add_input(in_name_1);

  prg.buffer_port_widths[out_name_0] = 32;
  prg.add_output(out_name_0);
  prg.buffer_port_widths[out_name_1] = 32;
  prg.add_output(out_name_1);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols / 2);
  in_nest->store({"I", "2*id0, id1"}, {in_name_0, "id0, id1"});
  in_nest->store({"I", "2*id0 + 1, id1"}, {in_name_1, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, (cols - 1) / 2);
  blur_y_nest->
    stencil_op(out_name_0, "jacobi2d_compute", "I", {"2*d0 - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  blur_y_nest->
    stencil_op(out_name_1, "jacobi2d_compute", "I", {"2*(d0) + 1 - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});

  regression_test(prg);
}

void jacobi_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d";
  prg.buffer_port_widths["I"] = 32;

  string in_name = "in";
  string out_name = "out";

  int rows = 32;
  int cols = 32;

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  // This code (in SODA is described as blur_x)
  // blur_x(0, 0) = in(0, 0) + in(0, 1) + in(0, 2)
  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  blur_y_nest->
    stencil_op(out_name, "jacobi2d_compute", "I", {"d0", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});

  regression_test(prg);
}

struct BaseExpr {
  string name;
  vector<Token> dims;
};

ostream& operator<<(ostream& out, const BaseExpr& e) {
  out << e.name << "(" << comma_list(e.dims) << ")";
  return out;
}

struct StencilProgram {
  string name;
  int burst_width;
  int unroll_factor;

  vector<pair<BaseExpr, Expr*> > operations;
};

bool is_isolated_token(const char nextc) {
  if (nextc == '-') {
    return true;
  }
  if (nextc == '+') {
    return true;
  }
  if (nextc == '*') {
    return true;
  }
  if (nextc == '/') {
    return true;
  }
  if (nextc == '.') {
    return true;
  }
  if (nextc == ':') {
    return true;
  }
  if (nextc == ',') {
    return true;
  }
  if (nextc == '(') {
    return true;
  }
  if (nextc == ')') {
    return true;
  }

  return false;
}

bool is_token_break(const char nextc) {
  if (isspace(nextc)) {
    return true;
  }

  if (nextc == '-') {
    return true;
  }
  if (nextc == '+') {
    return true;
  }
  if (nextc == '*') {
    return true;
  }
  if (nextc == '/') {
    return true;
  }
  if (nextc == '.') {
    return true;
  }

  if (nextc == ':') {
    return true;
  }

  if (nextc == ',') {
    return true;
  }

  if (nextc == '(') {
    return true;
  }

  if (nextc == ')') {
    return true;
  }

  return false;
}

void add_token(vector<Token>& toks, const string& t) {
  if (t.size() == 0) {
    return;
  }
  toks.push_back({t});
}

bool expr_start(const Token& t) {
  return t.txt != "local" && t.txt != "input" && t.txt != "output";
}

bool done(vector<Token>& tokens, size_t& pos) {
  return tokens.size() <= pos;
}

bool is_int(const Token& t) {
  return is_number(t.txt);
}

bool is_float(const Token& t) {
  return false;
}

vector<string> all_operators() {
  return {"-", "+", "*", "/"};
}

vector<string> unary_operators() {
  return {"-"};
}

map<string, int> precedences() {
  return {{"-", 500}, {"+", 100}, {"*", 200}, {"/", 200}};
}

int precedence(const Token& t) {
  return map_find(t.txt, precedences());
}


bool is_higher_prec(const Token& t, const Token& l) {
  return precedence(t) > precedence(l);
}

bool is_unary(const Token& t) {
  return elem(t.txt, unary_operators());
}
bool is_operator(const Token& t) {
  return elem(t.txt, all_operators());
}

bool is_function_call(const Token& t) {
  return isalpha(t.txt.at(0));
}

bool is_function_separator(const Token& t) {
  return t.txt == ",";
}

vector<Token> merge_floats(const vector<Token>& toks) {
  vector<Token> merged;
  int i = 0;
  while (i < toks.size()) {
    Token next_tok = toks.at(i);
    if (!is_int(next_tok)) {
      merged.push_back(next_tok);
      i++;
    } else {
      Token middle_tok = toks.at(i + 1);
      if (middle_tok.txt != ".") {
        merged.push_back(next_tok);
        i++;
      } else {
        Token right = toks.at(i + 2);
        cout << "Right tok = " << right << endl;
        if (isdigit(right.txt.at(0)) &&
            right.txt.back() == 'f') {
          merged.push_back(Token(next_tok.txt + "." + right.txt));
          i += 3;
        } else {
          merged.push_back(next_tok);
          i++;
        }
      }
    }
  }

  return merged;
}

vector<Token> tokenize(istream& in) {
  vector<Token> toks;
  char nextc;
  string next;
  while (in.get(nextc)) {
    cout << "Next = " << nextc << endl;
    if (is_token_break(nextc)) {
      add_token(toks, next);
      next = "";
      if (!isspace(nextc)) {
        if (is_isolated_token(nextc)) {
          string n = "";
          n += nextc;
          add_token(toks, {n});
        } else {
          next += (nextc);
        }
      }
    } else {
      next += nextc;
    }
  }
  add_token(toks, next);
  return merge_floats(toks);
}

Token consume(vector<Token>& tokens, size_t& pos, const string& next) {
  assert(pos < tokens.size());
  pos++;
  assert(tokens.at(pos - 1).txt == next);
  return tokens.at(pos - 1);
}

Token peek(vector<Token>& tokens, size_t& pos) {
  assert(pos < tokens.size());
  return tokens.at(pos);
}

Token next(vector<Token>& tokens, size_t& pos) {
  assert(pos < tokens.size());
  pos++;
  return tokens.at(pos - 1);
}

BaseExpr parse_base(vector<Token>& tokens, size_t& pos) {
  string name = next(tokens, pos).txt;
  vector<Token> tks;
  if (peek(tokens, pos).txt == "(") {
    next(tokens, pos);
    while (peek(tokens, pos).txt != ")") {
      tks.push_back(next(tokens, pos));
      if (peek(tokens, pos).txt == ",") {
        consume(tokens, pos, ",");
      } else {
        break;
      }
    }
    consume(tokens, pos, ")");
  }
  return BaseExpr{name, tks};
}

Expr* evaluate(deque<Token>& output) {
  assert(output.size() > 0);

  Token next = pop(output);
  if (is_int(next)) {
    return new IntConst(next.txt);
  }

  if (is_function_call(next)) {
    auto arg0 = evaluate(output);
    auto arg1 = evaluate(output);
    return new FunctionCall(next.txt, {arg0, arg1});
  }

  if (is_operator(next)) {
    auto arg0 = evaluate(output);
    auto arg1 = evaluate(output);
    return new Binop(next.txt, arg0, arg1);
  }

  assert(false);
}

#define FINISH(arg) if ((arg) != nullptr) { return arg; }

#define CONSUME(token, toks, pos) if (!done(toks, pos) && peek(toks, pos).txt == (token)) { next(toks, pos); } else { return nullptr; }

bool comma_token(vector<Token>& orig_tokens, size_t& pos) {
  if (!done(orig_tokens, pos) && peek(orig_tokens, pos).txt == ",") {
    next(orig_tokens, pos);
    return true;
  }
  return false;
}

template<typename Sep, typename E>
vector<Expr*> sep_list(Sep s, E e, vector<Token>& orig_tokens, size_t& pos) {
  vector<Expr*> es;
  do {
    es.push_back(e(orig_tokens, pos));
    cout << "tokens: " << comma_list(orig_tokens) << endl;
  } while (s(orig_tokens, pos));

  return es;
}

template<typename F>
Expr* try_parse(F f, vector<Token>& orig_tokens, size_t& pos) {
  auto old = pos;
  auto res = f(orig_tokens, pos);
  if (res == nullptr) {
    pos = old;
  }
  return res;
}

Expr* parse_paren_expr(vector<Token>& orig_tokens, size_t& pos);

Expr* parse_expression(vector<Token>& orig_tokens, size_t& pos);
Expr* parse_operator_expr(vector<Token>& orig_tokens, size_t& pos) {
  return nullptr;
}

Expr* parse_base_expr(vector<Token>& orig_tokens, size_t& pos) {
  cout << "Parsing base expr: " << comma_list(orig_tokens) << endl;
  if (!done(orig_tokens, pos) && is_function_call(peek(orig_tokens, pos))) {
    cout << tab(1) << "Next token is funcall" << endl;
    auto name = next(orig_tokens, pos);
    CONSUME("(", orig_tokens, pos);
    vector<Expr*> args =
      sep_list(comma_token, parse_expression, orig_tokens, pos);
    CONSUME(")", orig_tokens, pos);
    return new FunctionCall(name.txt, args);
  }

  cout << "Got base expr" << endl;

  if (is_int(peek(orig_tokens, pos))) {
    string val = next(orig_tokens, pos).txt;
    return new IntConst(val);
  }

  return nullptr;
}

Expr* parse_expression(vector<Token>& orig_tokens, size_t& pos) {
  auto paren = try_parse(parse_paren_expr, orig_tokens, pos);

  FINISH(paren);

  auto op = try_parse(parse_operator_expr, orig_tokens, pos);

  FINISH(op);

  auto basic = try_parse(parse_base_expr, orig_tokens, pos);

  FINISH(basic);

  return nullptr;
}

Expr* parse_paren_expr(vector<Token>& orig_tokens, size_t& pos) {
  CONSUME("(", orig_tokens, pos);
  auto res = try_parse(parse_expression, orig_tokens, pos);
  CONSUME(")", orig_tokens, pos);

  cout << "Got paren expr: " << comma_list(orig_tokens) << endl;
  return res;
}

Expr* parse_expr(vector<Token>& orig_tokens, size_t& pos) {
  vector<Token> tokens;
  while (!done(orig_tokens, pos) && expr_start(peek(orig_tokens, pos))) {
    tokens.push_back(next(orig_tokens, pos));
  }

  cout << "Parsing expr: " << comma_list(tokens) << endl;

  return parse_expression(tokens, pos);

  //deque<Token> op_stack;
  //deque<Token> output;
  //while (tokens.size() > 0) {
    //Token t = tokens.front();
    //tokens.pop_front();

    //cout << "T = " << t << endl;
    //if (is_float(t)) {
      //cout << tab(1) << " is float" << endl;
      //output.push_back(t);
    //} else if (is_int(t)) {
      //cout << tab(1) << " is number" << endl;
      //output.push_back(t);
    //} else if (is_function_call(t)) {
      //cout << tab(1) << " is function call" << endl;
      //op_stack.push_back(t);
    //} else if (is_function_separator(t)) {
      //cout << tab(1) << " is function separator" << endl;
      //while (op_stack.back().txt != "(") {
        //output.push_back(op_stack.back());
        //op_stack.pop_back();
      //}
    //} else if (is_operator(t)) {
      //cout << tab(1) << " is function operator" << endl;
      //if (!is_unary(t)) {
        //// Pop higher precedence operators off the stack
        //while (op_stack.size() > 0 &&
            //is_operator(op_stack.back()) &&
            //is_higher_prec(op_stack.back(), t)) {
          //output.push_back(op_stack.back());
          //op_stack.pop_back();
        //}
      //} else {
        //// Pop higher precedence operators off the stack
        //while (op_stack.size() > 0 &&
            //is_operator(op_stack.back()) &&
            //is_unary(op_stack.back()) &&
            //is_higher_prec(op_stack.back(), t)) {
          //output.push_back(op_stack.back());
          //op_stack.pop_back();
        //}
      //}
      //op_stack.push_back(t);
    //} else if (t.txt == "(") {
      //op_stack.push_back(t);
    //} else if (t.txt == ")") {
      //cout << "Popping off lparen" << endl;
      //cout << "Current stack..." << endl;
      //for (auto elem : op_stack) {
        //cout << tab(1) << elem << endl;
      //}
      //while (op_stack.size() > 0 && op_stack.back().txt != "(") {
        //output.push_back(op_stack.back());
        //op_stack.pop_back();
      //}

      //assert((op_stack.size() > 0));
      //assert((op_stack.back().txt == "("));

      //op_stack.pop_back();
    //} else {
      //cout << "Error: Unsupported token: " << t << ", len: " << t.txt.size() << endl;
      //assert(false);
    //}
  //}

  //while (op_stack.size() > 0) {
    //auto next = op_stack.back();
    //op_stack.pop_back();

    //assert(next.txt != ")");
    //assert(next.txt != "(");

    //output.push_back(next);
  //}
  //assert(op_stack.size() == 0);

  //cout << "Output..." << endl;
  //for (auto out : output) {
    //cout << out << " ";
  //}
  //cout << endl;

  //assert(output.size() > 0);

  //Expr* e = evaluate(output);
  //return e;
}

Expr* parse_expr(const std::string& input) {
  stringstream instr;
  instr << input;
  vector<Token> tokens = tokenize(instr);
  size_t pos = 0;
  return parse_expr(tokens, pos);
}

StencilProgram parse_soda_program(istream& in) {
  StencilProgram program;

  vector<Token> tokens = tokenize(in);
  //cout << "Tokens = " << endl;
  for (auto t : tokens) {
    //cout << "\ttok: " << t.txt << endl;
    assert(t.txt.size() > 0);
  }

  size_t pos = 0;
  while (pos < tokens.size()) {
    string next = tokens[pos].txt;
    if (next == "kernel") {
      pos += 3;
      program.name = tokens.at(pos + 2).txt;
    } else if (next == "burst") {
      program.burst_width = safe_stoi(tokens.at(pos + 3).txt);
      pos += 4;
    } else if (next == "unroll") {
      program.unroll_factor = safe_stoi(tokens.at(pos + 3).txt);
      pos += 4;
    } else if (next == "iterate") {
      //program.unroll_factor = to_string(tokens.at(pos + 3).txt);
      pos += 3;
    } else if (next == "input") {
      //string tp = tokens.at(pos + 1);
      pos = pos + 3;
      BaseExpr b = parse_base(tokens, pos);
      cout << "Base: " << b.name << "(";
      for (auto e : b.dims) {
        cout << e.txt << ", ";
      }
      cout << " )" << endl;
    } else if (next == "local" || next == "output") {
      pos = pos + 3;
      BaseExpr b = parse_base(tokens, pos);
      cout << "Base: " << b.name << "(";
      for (auto e : b.dims) {
        cout << e.txt << ", ";
      }
      cout << " )" << endl;

      consume(tokens, pos, "=");
      Expr* e = parse_expr(tokens, pos);
      assert(e != nullptr);
      cout << "After expr: " <<
        endl;
      for (size_t i = pos; i < tokens.size(); i++) {
        cout << "tok: " << tokens.at(i).txt << endl;
      }
      program.operations.push_back({b, e});
    } else {
      cout << "Unsupported next token: " << tokens.at(pos).txt << endl;
      assert(false);
    }
  }

  cout << "Program: " << program.name << endl;
  for (auto op : program.operations) {
    BaseExpr b = op.first;
    cout << b.name << "(";
    for (auto e : b.dims) {
      cout << e.txt << ", ";
    }
    cout << " ) = ";

    Expr* e = op.second;
    //for (auto t : e->tokens) {
      //cout << t.txt << " ";
    //}
    //cout << endl;
  }
  cout << "Done" << endl;
  return program;
}

void parse_denoise3d_test() {
  ifstream in("denoise3d.soda");
  auto prg = parse_soda_program(in);
  cout << "Name: " << prg.name << endl;
  cout << "Burst width: " << prg.burst_width << endl;
  cout << "Operations..." << endl;
  for (auto op : prg.operations) {
    cout << tab(1) << op.first << " = " << *(op.second) << endl;
  }

}

void duplicate_upsample_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "duplicate_upsample";
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["MDuplicate"] = 32;

  int rows = 32;

  prg.buffer_bounds["I"] = {rows};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, rows);
  in_nest->add_op({"I", "id0"}, "id", {in_name, "id0"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, rows);

  //blur_y_nest->
    //stencil_op("tmp", "blur_3_32", "I", {"d0", "d1"},
        //{{-1, 0}, {0, 0}, {1, 0}});

  //auto blur_out_nest=
    //prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  //blur_out_nest->
    //stencil_op(out_name, "blur_3_32", "tmp", {"d0", "d1"},
        //{{0, -1}, {0, 0}, {0, 1}});

  regression_test(prg);
}

void seidel2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "seidel2d";
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  int rows = 32;
  int cols = 32;

  prg.buffer_bounds["I"] = {rows, cols};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, rows, "d0", 1, cols - 1);
  blur_y_nest->
    stencil_op("tmp", "blur_3_32", "I", {"d0", "d1"},
        {{-1, 0}, {0, 0}, {1, 0}});

  auto blur_out_nest=
    prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  blur_out_nest->
    stencil_op(out_name, "blur_3_32", "tmp", {"d0", "d1"},
        {{0, -1}, {0, 0}, {0, 1}});

  regression_test(prg);
}

struct App {
  isl_ctx* ctx;
  map<string, Result> app_dag;
  map<string, Box> domain_boxes;

  // Map from functions to compute invocations of
  // other functions that they need
  map<string, isl_set*> compute_sets;
  map<string, isl_map*> compute_maps;

  int default_pixel_width;
  num_type default_num_type;

  App() {
    ctx = isl_ctx_alloc();
    default_pixel_width = 32;
    default_num_type = NUM_TYPE_UNSIGNED;
  }

  ~App() {
    isl_ctx_free(ctx);
  }

  void compute_unit_needs_index_variable(const int index, const std::string& func) {
    app_dag[func].updates[0].index_variables_needed.push_back("d" + str(index));
  }

  void update(const string& func,
      const string& accum,
      const string& compute,
      const vector<Window>& args,
      Box reduce_ranges) {

    assert(reduce_ranges.dimension() > 0);
    assert(contains_key(func, app_dag));
    vector<Window> rargs;
    for (auto a : args) {
      a.reduce_var_ranges = reduce_ranges;
      rargs.push_back(a);
    }
    app_dag.at(func).add_reduce_update(accum, compute, rargs, reduce_ranges);
  }

  bool is_input(const std::string& name) const {
    return producers(name).size() == 0;
  }

  string add_func(const std::string& name,
      const std::string compute,
      const int ndims,
      const vector<Window>& windows) {
    assert(!contains_key(name, app_dag));

    Result res;
    for (auto w : windows) {
      if (!contains_key(w.name, app_dag)) {
        cout << "Error: App dag already contains: " << w.name << endl;
      }
      assert(contains_key(w.name, app_dag));
      w.needed = build_needed(name, w);
      res.srcs.push_back(w);
    }

    vector<QAV> strides;
    vector<int> pt;
    for (int i = 0; i < ndims; i++) {
      strides.push_back(qconst(1));
      pt.push_back(0);
    }

    res.provided = Window(name, strides, {pt});
    res.add_init_update(name, compute, res.srcs);

    app_dag[name] = res;

    set_width(name, default_pixel_width);
    set_num_type(name, default_num_type);
    return name;
  }

  string func3d(const std::string& name, Expr* def) {
    Result res;

    string compute_name = name + "_generated_compute";

    map<string, vector<FunctionCall*> > calls;
    visit_function_calls(def, [this, &calls](FunctionCall* c) {
        if (contains_key(c->name, app_dag)) {
        calls[c->name].push_back(c);
        }
        });

    vector<Window> windows;
    map<string, vector<vector<int> > > offset_map;
    for (auto c : calls) {
      string window_name = c.first;
      vector<QAV> strides{qconst(1), qconst(1), qconst(1)};
      std::set<vector<int> > offsets;
      for (auto off : c.second) {
        vector<int> offset = get_offset(off);
        offsets.insert(offset);
      }

      vector<vector<int> > offsets_vec(begin(offsets), end(offsets));
      offset_map[window_name] = offsets_vec;
      Window w{window_name, strides, offsets_vec};
      windows.push_back(w);
    }

    cout << "Windows..." << endl;
    for (auto w : windows) {
      cout << tab(1) << w << endl;
    }

    add_func(name,
        compute_name,
        3,
        windows);

    app_dag[name].updates.back().compute_unit_impl =
      compute_unit_string(default_num_type, default_pixel_width, compute_name, windows, def, offset_map);
    app_dag[name].updates.back().def = def;

    return name;
  }

  string func2d(const std::string& name, Expr* def) {
    Result res;

    string compute_name = name + "_generated_compute";

    map<string, vector<FunctionCall*> > calls;
    visit_function_calls(def, [this, &calls](FunctionCall* c) {
        if (contains_key(c->name, app_dag)) {
        calls[c->name].push_back(c);
        }
        });

    vector<Window> windows;
    map<string, vector<vector<int> > > offset_map;
    for (auto c : calls) {
      string window_name = c.first;
      vector<QAV> strides{qconst(1), qconst(1)};
      std::set<vector<int> > offsets;
      for (auto off : c.second) {
        vector<int> offset = get_offset(off);
        offsets.insert(offset);
      }

      vector<vector<int> > offsets_vec(begin(offsets), end(offsets));
      offset_map[window_name] = offsets_vec;
      Window w{window_name, strides, offsets_vec};
      windows.push_back(w);
    }

    cout << "Windows..." << endl;
    for (auto w : windows) {
      cout << tab(1) << w << endl;
    }

    add_func(name,
        compute_name,
        2,
        windows);

    app_dag[name].updates.back().compute_unit_impl =
      compute_unit_string(default_num_type, default_pixel_width, compute_name, windows, def, offset_map);
    app_dag[name].updates.back().def = def;

    return name;
  }

  string func3d(const std::string& name) {
    return add_func(name, "", 3, {});
  }

  string func2d(const std::string& name) {
    return add_func(name, "", 2, {});
  }

  string func3d(const std::string& name,
      const string& compute,
      const Window& window) {
    vector<Window> windows{window};
    return func3d(name, compute, windows);
  }

  string func3d(const std::string& name,
      const string& compute,
      const vector<Window>& windows) {
    return add_func(name, compute, 3, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const Window& a,
      const Window& b) {
    vector<Window> windows{a, b};
    return func2d(name, compute, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const Window& window) {
    vector<Window> windows{window};
    return func2d(name, compute, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const vector<Window>& windows) {
    return add_func(name, compute, 2, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<vector<int> >& offsets) {
    assert(offsets.size() > 0);
    size_t ndims = offsets.at(0).size();
    vector<int> strides;
    for (size_t i = 0; i < ndims; i++) {
      strides.push_back(1);
    }
    return func2d(name, compute, arg, strides, offsets);
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<QAV>& strides,
      const vector<vector<int> >& offsets) {
    Window w{arg, strides, offsets};

    return func2d(name, compute, {w});
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<int>& strides,
      const vector<vector<int> >& offsets) {

    Window w{arg, strides, offsets};

    return func2d(name, compute, {w});
  }

  void set_default_num_type(const num_type tp) {
    default_num_type = tp;
  }

  void set_default_pixel_width(const int width) {
    default_pixel_width = width;
  }

  void set_num_type(const string& func, const num_type tp) {
    assert(contains_key(func, app_dag));
    app_dag.at(func).tp = tp;
  }
  void set_width(const string& func, const int width) {
    assert(width > 0);
    assert(contains_key(func, app_dag));
    app_dag.at(func).pixel_width = width;
  }

  void unroll(const string& func, const int unroll_factor) {
    assert(unroll_factor > 0);
    assert(contains_key(func, app_dag));
    app_dag.at(func).updates[0].unroll_factor = unroll_factor;
  }

  Update last_update(const string& func) const {
    if (!(contains_key(func, app_dag))) {
      cout << tab(1) << "Error: No key " << func << " in app dag" << endl;
    }
    assert(contains_key(func, app_dag));
    assert(app_dag.at(func).updates.size() > 0);
    return app_dag.at(func).updates.back();
  }

  umap* build_needed(const string& name, const Window& w) {

    assert(w.dimension() > 0);
    int ndims = w.dimension();

    vector<int> mins;
    vector<int> maxs;
    for (int i = 0; i < ndims; i++) {
      mins.push_back(10000);
      maxs.push_back(-1);
    }

    for (auto s : w.offsets) {
      for (size_t d = 0; d < s.size(); d++) {
        if (s[d] < mins[d]) {
          mins[d] = s[d];
        }
        if (s[d] > maxs[d]) {
          maxs[d] = s[d];
        }
      }
    }

    vector<string> box_strs;
    vector<string> base_vars;
    vector<string> arg_vars;
    for (size_t i = 0; i < mins.size(); i++) {
      QAV stride = w.stride(i);
      string base_var = "d" + to_string(i);
      base_vars.push_back(base_var);
      string kv = "k" + to_string(i);
      arg_vars.push_back(kv);
      int min = mins[i];
      int max = maxs[i];
      string base_expr = to_string(stride) + "*" + base_var;
      if (!stride.is_whole()) {
        base_expr = "floor(" + base_var + " / " + to_string(stride.denom) + ")";
      }
      box_strs.push_back(base_expr + " + " + to_string(min) + " <= " + kv + " <= " + base_expr + " + " + to_string(max));
    }
    string box_cond = "{ " + name + sep_list(base_vars, "[", "]", ", ") + " -> " + w.name + sep_list(arg_vars, "[", "]", ", ") + " : " + sep_list(box_strs, "", "", " and ") + " }";
    cout << "Box needed: " << box_cond << endl;
    umap* m = isl_union_map_read_from_str(ctx, box_cond.c_str());
    cout << "Map       : " << str(m) << endl;

    return m;
  }

  vector<Window> producers(const string& f) const {
    //cout << "Getting producers for: " << f << endl;
    if (contains_key(f, app_dag)) {
      //cout << "In app dag: " << f << endl;
      //for (auto s : app_dag) {
        //cout << "\t" << s.first << endl;
      //}
      vector<Window> sources;
      for (auto u : map_find(f, app_dag).updates) {
        concat(sources, u.get_srcs());
      }
      //auto res = map_find(f, app_dag).get_srcs();
      //cout << "Got res from map" << endl;
      return sources;
    }
    return {};
  }

  vector<pair<string, Window> > consumer_windows(const string& f) const {
    vector<pair<string, Window> > cons;
    for (auto other_func : app_dag) {
      for (auto d : other_func.second.get_srcs()) {
        if (d.name == f) {
          cons.push_back({other_func.first, d});
          break;
        }
      }
    }
    return cons;
  }

  std::set<string> consumers(const string& f) const {
    std::set<string> cons;
    for (auto other_func : app_dag) {
      for (auto d : other_func.second.get_srcs()) {
        if (d.name == f) {
          cons.insert(other_func.first);
          break;
        }
      }
    }
    //cout << "# of consumers of " << f << " = " << cons.size() << endl;
    return cons;
  }

  Update get_update(const std::string& u) const {
    for (auto f : sort_functions()) {
      for (auto other : app_dag.at(f).updates) {
        if (other.name() == u) {
          return other;
        }
      }
    }
    cout << "Error: No update named " << u << endl;
    assert(false);
    return {};
  }

  vector<string> sort_updates() const {
    vector<string> updates;
    for (auto f : sort_functions()) {
      for (auto u : app_dag.at(f).updates) {
        updates.push_back(u.name());
      }
    }
    return updates;
  }

  vector<string> sort_functions() const {
    vector<string> sorted;

    while (sorted.size() != app_dag.size()) {
      for (auto fs : app_dag) {
        if (elem(fs.first, sorted)) {
          continue;
        }
        string f = fs.first;
        bool consumers_done = true;
        for (auto c : consumers(f)) {
          if (!elem(c, sorted)) {
            consumers_done = false;
            break;
          }
        }

        if (consumers_done) {
          sorted.push_back(f);
        }
      }
    }
    assert(sorted.size() == app_dag.size());

    reverse(sorted);

    return sorted;
  }

  Box data_domain(const std::string& f) {
    if (!contains_key(f, domain_boxes)) {
      cout << "Error: No key for: " << f << " in domain_boxes" << endl;
    }
    assert(contains_key(f, domain_boxes));
    return map_find(f, domain_boxes);
  }

  void fill_compute_domain(const std::string& f,
      Update& update) {

    int ndims = data_dimension();
    vector<string> data_vars;
    vector<string> later_data_vars;
    for (int i = 0; i < ndims; i++) {
      data_vars.push_back("d" + str(i));
      if (i > 0) {
        later_data_vars.push_back("d" + str(i));
      }
    }

    int sdims = schedule_dimension();
    assert(sdims >= ndims);

    vector<string> sched_vars;
    vector<string> later_sched_vars;
    for (int i = 0; i < ndims; i++) {
      sched_vars.push_back("d" + str(i));
      if (i > 0) {
        later_sched_vars.push_back("d" + str(i));
      }
    }
    for (int i = ndims; i < sdims; i++) {
      sched_vars.push_back("s" + str(i));
      if (i > 0) {
        later_sched_vars.push_back("s" + str(i));
      }
    }

    compute_maps[update.name()] =
      to_map(rdmap(ctx, "{ " + f + "[" + comma_list(data_vars) + " ] -> " +
            update.name() + "[floor(d0 / " + to_string(update.unroll_factor) + "), " + comma_list(later_sched_vars) + "] }"));

    //cout << "compute map for " << update.name() << " is " << str(compute_maps[update.name()]) << endl;
    compute_sets[update.name()] =
      range(its(
            compute_maps[update.name()],
            data_domain(f).to_set(ctx, f)));
    //cout << "Compute domain for " << update.name() << " is " << str(compute_sets[update.name()]) << endl;
  }

  void fill_compute_domain() {
    //int ndims = data_dimension();
    //vector<string> data_vars;
    //vector<string> later_data_vars;
    //for (int i = 0; i < ndims; i++) {
      //data_vars.push_back("d" + str(i));
      //if (i > 0) {
        //later_data_vars.push_back("d" + str(i));
      //}
    //}

    //int sdims = schedule_dimension();
    //assert(sdims >= ndims);

    //vector<string> sched_vars;
    //vector<string> later_sched_vars;
    //for (int i = 0; i < ndims; i++) {
      //sched_vars.push_back("d" + str(i));
      //if (i > 0) {
        //later_sched_vars.push_back("d" + str(i));
      //}
    //}
    //for (int i = ndims; i < sdims; i++) {
      //sched_vars.push_back("s" + str(i));
      //if (i > 0) {
        //later_sched_vars.push_back("s" + str(i));
      //}
    //}

    for (auto f : sort_functions()) {
      for (auto update : app_dag.at(f).updates) {
        fill_compute_domain(f, update);

        //compute_maps[update.name()] =
          //to_map(rdmap(ctx, "{ " + f + "[" + comma_list(data_vars) + " ] -> " +
                //update.name() + "[floor(d0 / " + to_string(update.unroll_factor) + "), " + comma_list(later_sched_vars) + "] }"));

        //cout << "compute map for " << update.name() << " is " << str(compute_maps[update.name()]) << endl;
        //compute_sets[update.name()] =
          //range(its(
                //compute_maps[update.name()],
                //data_domain(f).to_set(ctx, f)));
        //cout << "Compute domain for " << update.name() << " is " << str(compute_sets[update.name()]) << endl;
      }
    }
    //cout << "Got compute domain" << endl;
    //assert(false);
  }

  void fill_data_domain(const std::string& name, const int d0, const int d1) {
    fill_data_domain(name, {d0, d1});
  }

  int schedule_dimension() const {
    int max_dims = -1;
    for (auto f : sort_functions()) {
      for (auto w : producers(f)) {
        int dm = w.total_dimension();
        if (dm > max_dims) {
          max_dims = dm;
        }
      }
    }
    return max_dims;
  }

  int data_dimension() const {
    int max_dims = -1;
    for (auto f : sort_functions()) {
      for (auto w : producers(f)) {
        int dm = w.dimension();
        if (dm > max_dims) {
          max_dims = dm;
        }
      }
    }
    return max_dims;
  }

  void fill_data_domain(const std::string& name, const vector<int>& dims) {
    fill_data_domain({{name, dims}});
  }

  void fill_data_domain(const std::vector<std::pair<std::string, std::vector<int> > >& bounds) {
    domain_boxes = {};

    int max_dims = data_dimension();
    for (auto b : bounds) {
      string name = b.first;
      vector<int> dims = b.second;
      Box sbox;

      cout << "Filling: " << name << endl;
      cout << "# dims = " << dims.size() << endl;
      for (auto d : dims) {
        cout << tab(1) << d << endl;
        sbox.intervals.push_back({0, d - 1});
      }
      for (int i = dims.size(); i < max_dims; i++) {
        sbox.intervals.push_back({0, 0});
      }

      cout << "padding to " << last_update(name).unroll_factor << endl;
      sbox = sbox.pad_range_to_nearest_multiple(last_update(name).unroll_factor);

      cout << "Filling data domain " << name << " from: " << sbox << endl;

      string n = name;
      domain_boxes[n] = sbox;
    }
    //assert(false);

    vector<string> buffers = sort_functions();
    assert(buffers.size() > 0);

    reverse(buffers);

    cout << "Buffers..." << endl;
    for (auto b : buffers) {
      cout << tab(1) << b << endl;
    }

    bool found = false;
    for (auto b : bounds) {
      if (buffers.at(0) == b.first) {
        found = true;
      }
    }
    assert(found);
    //assert(buffers.at(0) == name);
    //for (int i = 1; i < (int) buffers.size(); i++) {
    for (int i = bounds.size(); i < (int) buffers.size(); i++) {
      string next = buffers.at(i);
      cout << next << " has consumers " << endl;
      map<string, Box> needed_windows;
      for (auto consumer_data : consumer_windows(next)) {
        string consumer = consumer_data.first;
        Window win = consumer_data.second;

        Box consumer_domain =
          map_find(consumer, domain_boxes);

        Box in_box;
        int dim = 0;
        for (auto range : consumer_domain.intervals) {
          int min_result_addr = range.min;
          int max_result_addr = range.max;

          int min_input_addr = win.min_addr(dim, min_result_addr);
          int max_input_addr = win.max_addr(dim, max_result_addr);
          dim++;
          in_box.intervals.push_back({min_input_addr, max_input_addr});
        }

        cout << tab(1) << consumer << " needs: " << in_box << endl;
        needed_windows[consumer] = in_box;
      }
      Box final_dom(max_dims);
      for (auto nn : needed_windows) {
        final_dom = unn(final_dom, nn.second);
      }
      cout << "padding to " << last_update(next).unroll_factor << endl;
      final_dom = final_dom.pad_range_to_nearest_multiple(last_update(next).unroll_factor);

      domain_boxes[next] = final_dom;
      //for (auto update : app_dag.at(next).updates) {
        //fill_compute_domain(next, update);
      //}
    }

    cout << domain_boxes.size() << " data domains.." << endl;
    assert(domain_boxes.size() == sort_functions().size());
    for (auto f : sort_functions()) {
      auto d = domain_boxes.at(f);
      cout << f << " = " << d << endl;
    }

    //assert(false);
    //fill_compute_domain();
  }


  Box compute_box(const std::string& name) {
    cout << "Getting box: " << name << endl;
    cout << tab(1) << "lexmin: " << str(lexmin(compute_domain(name))) << endl;
    cout << tab(1) << "lexmax: " << str(lexmax(compute_domain(name))) << endl;

    auto min_pt =
      parse_pt(sample(lexmin(compute_domain(name))));
    auto max_pt =
      parse_pt(sample(lexmax(compute_domain(name))));

    assert(min_pt.size() == max_pt.size());

    Box b;
    for (size_t i = 0; i < min_pt.size(); i++) {
      b.intervals.push_back({min_pt.at(i), max_pt.at(i)});
    }
    return b;
  }


  // Too vague of a name
  isl_map* compute_map(const std::string& f) {
    return map_find(f, compute_maps);
  }

  isl_set* compute_domain(const std::string& name) {
    return map_find(name, compute_sets);
  }

  Window box_touched(const std::string& consumer, const std::string& producer) {
    cout << "Getting box of " << producer << " touched by " << consumer << endl;
    //assert(contains_key(consumer, app_dag));

    for (auto f : app_dag) {
      for (auto up : f.second.updates) {
        if (up.name() == consumer) {
          for (auto src : up.get_srcs()) {
            cout << "src: " << src << endl;
            if (src.name == producer) {
              cout << "Got box" << endl;
              return src;
            }
          }
        }
      }
    }
    assert(false);
    return {};
  }

  umap* validity_deps() {
    umap* writes = rdmap(ctx, "{}");
    umap* reads = rdmap(ctx, "{}");

    for (auto u : sort_updates()) {
      writes =
        unn(writes, to_umap(pixels_written(u)));
      reads =
        unn(reads, pixels_read(u));
    }

    assert(writes != nullptr);
    assert(reads != nullptr);

    uset* domain = whole_compute_domain();
    assert(domain != nullptr);

    umap* naive_sched = schedule_naive();
    auto before = lex_lt(naive_sched, naive_sched);

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);

    return validity;
  }

  map<string, vector<QExpr> > rectangular_schedules() {

    umap* writes = rdmap(ctx, "{}");
    umap* reads = rdmap(ctx, "{}");

    for (auto u : sort_updates()) {
      writes =
        unn(writes, to_umap(pixels_written(u)));
      reads =
        unn(reads, pixels_read(u));
    }

    assert(writes != nullptr);
    assert(reads != nullptr);

    uset* domain = whole_compute_domain();
    assert(domain != nullptr);

    umap* naive_sched = schedule_naive();
    auto before = lex_lt(naive_sched, naive_sched);

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);
    cout << "validity: " << str(validity) << endl;

    isl_union_map *proximity =
      cpy(validity);

    isl_union_map *coincidence =
      cpy(validity);

    std::set<string> high_bandwidth_buffers;
    for (auto f : sort_functions()) {
      auto cs = consumers(f);
      if (cs.size() > 1) {
        high_bandwidth_buffers.insert(f);
      }
    }
    cout << "High bandwidth buffers" << endl;
    for (auto b : high_bandwidth_buffers) {
      cout << tab(1) << b << endl;
    }
    cout << endl;

    map<string, vector<string> > high_bandwidth_deps;
    for (auto un : sort_updates()) {
      auto u = get_update(un);
      for (auto w : u.get_srcs()) {
        if (elem(w.name, high_bandwidth_buffers) || (w.pts().size() > 1)) {
          high_bandwidth_deps[u.name()].push_back(last_update(w.name).name());
        }
      }
    }
    cout << "High bandwidth deps..." << endl;
    for (auto b : high_bandwidth_deps) {
      cout << tab(1) << b.first << endl;
      cout << tab(2) << comma_list(b.second) << endl;
    }


    //print_hw_schedule(cpy(domain), cpy(validity));
    //assert(false);

    map<string, vector<isl_aff*> > sched =
      clockwork_schedule(domain, validity, proximity, high_bandwidth_deps);

    map<string, vector<QExpr> > scheds;
    for (auto s : sched) {
      string name = s.first;
      vector<isl_aff*> vals = s.second;

      scheds[name] = {};
      int i = 0;
      for (auto v : vals) {
        QExpr rate = qexpr("d" + str(i));
        auto rate_coeff =
          qexpr(int_coeff(v, 0));
        auto delay =
          qexpr(int_const_coeff(v));

        QExpr expr =
          rate_coeff*rate + delay;
        scheds[name].push_back(expr);
        i++;
      }
    }

    // schedule is dN, ..., d1, d0
    for (auto& s : scheds) {
      reverse(s.second);
    }

    cout << "Final schedule..." << endl;
    for (auto s : scheds) {
      cout << tab(1) << s.first << endl;
      for (auto v : s.second) {
        cout << tab(2) << v << endl;
      }
      cout << endl;
    }

    return scheds;
  }

  umap* pixels_read(const std::string& u) {
    Update up = get_update(u);
    umap* read = rdmap(ctx, "{}");
    for (auto s : up.get_srcs()) {
      read = unn(read, dot(pixels_written(u), unn(read, s.needed)));
    }
    return read;
  }

  isl_map* pixels_written(const std::string& u) {
    return inv(compute_map(u));
  }

  umap* schedule_isl() {
    isl_options_set_schedule_algorithm(ctx, ISL_SCHEDULE_ALGORITHM_ISL);

    umap* writes = rdmap(ctx, "{}");
    umap* reads = rdmap(ctx, "{}");

    //uset* domain = isl_union_set_read_from_str(ctx, "{}");

    for (auto u : sort_updates()) {
      writes =
        unn(writes, to_umap(pixels_written(u)));
      cout << "Pixels read by " << endl;
      //u << " = " << str(pixels_read(u)) << endl;
      reads =
        unn(reads, pixels_read(u));
      cout << "Got all reads" << endl;
    }

    assert(writes != nullptr);
    assert(reads != nullptr);

    cout << "reads  :" << str(reads) << endl;
    cout << "writes :" << str(writes) << endl;

    // Relative order of accesses for each op must be the same
    umap* naive_sched = schedule_naive();
    auto before = lex_lt(naive_sched, naive_sched);

    umap* rel_order = isl_union_map_read_from_str(ctx, "{}");
    for (auto update : sort_updates()) {
      auto op_sched = its(naive_sched, compute_domain(update));
      auto op_order = lex_lt(op_sched, op_sched);
      rel_order = unn(rel_order, op_order);
    }

    uset* domain = whole_compute_domain();
    assert(domain != nullptr);

    cout << "rel order: " << str(rel_order) << endl;

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);
    cout << "validity: " << str(validity) << endl;

    //cout << "validity maps..." << endl;
    //for (auto m : get_maps(validity)) {
      //cout << tab(1) << str(m) << endl;
      //cout << tab(2) << str(lexmin(m)) << endl;
    //}
    validity = unn(validity, rel_order);

    isl_union_map *proximity =
      cpy(validity);

    isl_union_map *coincidence =
      cpy(validity);

    auto finite_domain = cpy(domain);

    // TODO: MAYBE REMOVE THIS?
    //clockwork_schedule(cpy(domain), cpy(validity), cpy(proximity));

    isl_schedule_constraints* constraints =
      isl_schedule_constraints_on_domain(domain);
    constraints = isl_schedule_constraints_set_validity(constraints, validity);
    constraints = isl_schedule_constraints_set_proximity(constraints, proximity);
    constraints = isl_schedule_constraints_set_coincidence(constraints, coincidence);
    auto sched = isl_schedule_constraints_compute_schedule(constraints);

    //domain = unn(domain, isl_union_set_universe(cpy(domain)));
    //experimental_opt(cpy(domain), cpy(validity), cpy(proximity));
    //isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);


    auto schedmap = its(isl_schedule_get_map(sched), finite_domain);

    assert(schedmap != nullptr);
    cout << "Final isl schedule: " << str(schedmap) << endl;
    cout << "C code; " << codegen_c(schedmap) << endl;

    isl_options_set_schedule_algorithm(ctx, ISL_SCHEDULE_ALGORITHM_ISL);

    return schedmap;
  }

  umap* schedule_naive() {

    map<string, vector<QExpr> > schedules;
    int pos = 0;
    int dim = schedule_dimension();
    for (auto f : sort_updates()) {
      cout << "schedule for: " << f << endl;
      schedules[f].push_back(qexpr(pos));
      for (int i = 0; i < dim; i++) {
        schedules[f].push_back(qexpr("d" + str(dim - i - 1)));
      }
      pos++;
    }

    cout << "Creating umap" << endl;

    // TODO: Replace with umap
    umap* m = rdmap(ctx, "{}");
    for (auto fn : schedules) {
      string f = fn.first;
      vector<string> sched_exprs;
      vector<string> var_names;
      int i = 0;
      for (auto v : map_find(f, schedules)) {
        string dv = "d" + to_string(i);
        sched_exprs.push_back(isl_str(v));
        var_names.push_back(dv);
        i++;
      }
      var_names.pop_back();
      string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

      auto rm = rdmap(ctx, map_str);
      m = unn(m, rm);
      isl_union_map_free(rm);
      cout << "union" << endl;
    }

    return m;
  }

  Window data_window_provided_by_compute(const std::string& update) {
    for (auto f : app_dag) {
      for (auto u : f.second.updates) {
        if (u.name() == update) {
          //return u.get_provided().unroll_cpy(unroll_factor);
          return u.get_provided().unroll_cpy(u.unroll_factor);
        }
      }
    }
    cout << "Error: No update named " << update << " in app" << endl;
    assert(false);
    return {};
  }

  Window data_window_needed_by_one_compute_lane(const std::string& consumer,
      const std::string& producer) {
    return box_touched(consumer, producer);
  }

  Window data_window_needed_by_compute(const std::string& consumer,
      const std::string& producer) {
    Window w = box_touched(consumer, producer).unroll_cpy(get_update(consumer).unroll_factor);
    return w;
  }

  map<string, UBuffer> build_buffers(umap* m) {
    auto sorted_functions = sort_functions();
    vector<string> var_names;
    for (int i = 0; i < schedule_dimension(); i++) {
      string dv = "d" + to_string(i);
      var_names.push_back(dv);
    }

    map<string, UBuffer> buffers;
    for (auto f : sorted_functions) {
      cout << "Adding buffer: " << f << endl;
      UBuffer b;
      b.ctx = ctx;
      b.name = f;
      b.port_widths = app_dag.at(f).pixel_width;

      // Create write ports
      for (auto u : app_dag.at(f).updates) {
        isl_set* domain =
          compute_domain(u.name());
        isl_union_map* sched =
          its(m, domain);

        Window write_box = data_window_provided_by_compute(u.name());
        int i = 0;
        //cout << "Write box for: " << f << " has " << write_box.pts().size() << " points in it" << endl;
        for (auto p : write_box.pts()) {
          vector<string> coeffs;
          for (auto e : p) {
            coeffs.push_back(isl_str(e));
          }
          //cout << "Coeffs: " << sep_list(coeffs, "[", "]", ", ") << endl;
          auto access_map =
            rdmap(ctx, "{ " + u.name() + "[" + comma_list(var_names) + "] -> " +
                f + sep_list(coeffs, "[", "]", ", ") + " }");
          string pt_name = f + "_" + u.name() + "_write" + to_string(i);
          b.add_in_pt(pt_name, domain, its(to_map(access_map), domain), sched);
          i++;
          b.port_bundles[u.name() + "_write"].push_back(pt_name);
        }
        //cout << "Port bundle has " << b.port_bundles[u.name() + "_write"].size() << " ports in it" << endl;
      }

      for (auto consumer : consumers(f)) {
        //cout << "Getting consumer compute domain: " << consumer << endl;
        for (auto u : app_dag.at(consumer).updates) {
          isl_set* domain =
            compute_domain(u.name());
          isl_union_map* sched =
            its(m, domain);

          //cout << "Getting map from " << u.name() << " to " << consumer << endl;
          //cout << tab(1) << "unroll factor: " << u.unroll_factor << endl;

          int i = 0;
          for (int lane = 0; lane < u.unroll_factor; lane++) {
            //Window f_win = data_window_needed_by_compute(u.name(), f);

            //Window f_win = data_window_needed_by_compute(u.name(), f);
            Window orig_dw =
              data_window_needed_by_one_compute_lane(u.name(), f);
            //cout << "original window = " << orig_dw << endl;
            Window f_win =
              data_window_needed_by_one_compute_lane(u.name(), f).increment(orig_dw.stride(0), lane).scale_stride(u.unroll_factor);
            //cout << "unrolled window f_win = " << f_win << endl;
            for (auto p : f_win.pts()) {
              vector<string> coeffs;
              for (auto e : p) {
                coeffs.push_back(isl_str(e));
              }
              //cout << "Coeffs: " << sep_list(coeffs, "[", "]", ", ") << endl;
              auto access_map =
                rdmap(ctx, "{ " + u.name() + "[" + comma_list(var_names) + "] -> " +
                    f + sep_list(coeffs, "[", "]", ", ") + " }");
              //cout << "Access map: " << str(access_map) << endl;
              string pt_name = consumer + "_rd" + to_string(i);
              b.add_out_pt(pt_name, domain, its(to_map(access_map), domain), sched);
              i++;
              b.port_bundles[u.name() + "_read"].push_back(pt_name);
            }
          }
        }
      }

      buffers[f] = b;
    }

    return buffers;
  }

  void populate_program(CodegenOptions& options,
      prog& prg,
      const string& name,
      const std::vector<string>& outputs,
      umap* m,
      map<string, UBuffer>& buffers) {

    generate_compute_unit_file(prg.compute_unit_file);

    uset* whole_dom = whole_compute_domain();
    auto sorted_functions = sort_functions();

    auto action_domain = cpy(whole_dom);
    map<string, isl_set*> domain_map;
    for (auto f : sorted_functions) {
      prg.buffer_port_widths[f] =
        app_dag.at(f).pixel_width;

      Box domain = data_domain(f);
      vector<int> lens;
      for (int i = 0; i < domain.dimension(); i++) {
        lens.push_back(domain.length(i));
        //prg.buffer_bounds[f].push_back(domain.length(i));
      }
      //reverse(lens);
      prg.buffer_bounds[f] = lens;

      for (auto u : app_dag.at(f).updates) {
        if (u.get_srcs().size() == 0) {
          prg.ins.insert(f);
          action_domain =
            isl_union_set_subtract(action_domain,
                to_uset(compute_domain(u.name())));
        } else {
          Box compute_b =
            compute_box(u.name());
          op* nest = prg.root;
          int i = 0;

          auto intervals = compute_b.intervals;
          reverse(intervals);
          for (auto r : intervals) {
            nest = nest->add_nest(f + "_" + to_string(i), r.min, r.max + 1);
            i++;
          }
          auto op = nest->add_op(u.name());
          cout << "added op " << op->name << endl;
          auto surrounding = surrounding_vars(op, prg);
          vector<string> offsets;
          for (auto var : surrounding) {
            if (var != "root") {
              offsets.push_back(var);
            }
          }
          assert(offsets.size() == 2);
          // TODO: Replace with real description of apps
          reverse(offsets);
          op->add_store(f, sep_list(offsets, "", "", ", "));
          //cout << "offsets: " << offsets << endl;

          vector<string> fargs;
          for (auto p : u.get_srcs()) {
            vector<string> vars;
            for (auto var : surrounding) {
              if (var != "root") {
                vars.push_back(var);
              }
            }
            assert(vars.size() == 2);

            cout << tab(1) << " op loads " << p.name << endl;
            for (auto off : p.offsets) {
              assert(off.size() == 2);
              vector<string> terms;
              int i = 0;
              reverse(off);
              for (auto offt : off) {
                QAV stride = p.stride(i);
                if (stride.denom != 1) {
                  int num = stride.num;
                  int denom = stride.denom;
                  terms.push_back("floor((" + str(num) + "*" + vars.at(i) + ")/" + str(denom) + ")" + " + " + str(offt));
                } else {
                  terms.push_back(to_string(stride) + "*" + vars.at(i) + " + " + str(offt));
                }
                i++;
              }
              reverse(terms);
              op->add_load(p.name, comma_list(terms));
            }

            if (!elem(p.name, fargs)) {
              fargs.push_back(p.name);
            }
          }

          op->add_function(u.compute_name() + "_unrolled_" + str(u.unroll_factor));
          for (auto index : u.index_variables_needed_by_compute()) {
            op->compute_unit_needs_index_variable(index);
          }
          op->unroll_factor = u.unroll_factor;

          domain_map[u.name()] =
            compute_domain(u.name());
        }
      }
    }

    for (auto out : outputs) {
      prg.add_output(out);
    }

    generate_app_code(options, buffers, prg, its(m, action_domain), domain_map);
    generate_regression_testbench(prg);
    generate_soda_file(prg.name);
  }

  string num_type_cstring() const {
    if (default_num_type == NUM_TYPE_FLOAT) {
      return "float";
    }
    return "uint" + str(default_pixel_width);
  }

  int original_buffer_size(const std::string& max_buffer) {
    return data_domain(max_buffer).cardinality();
  }

  void generate_soda_file(const std::string& name) {
    string max_buffer = max_buf();
    string rep = pick(app_dag).first;
    Box domain = data_domain(max_buffer);
    //assert(domain.dimension() == 2);
    vector<string> dims;
    for (int i = 0; i < domain.dimension(); i++) {
      if (i < domain.dimension() - 1) {
        dims.push_back(str(domain.length(i)));
      } else {
        dims.push_back("*");
      }
    }
    generate_soda_file(name, last_update(rep).unroll_factor, dims);
  }

  void generate_soda_file(const std::string& name, const int unroll_factor) {
    string max_buffer = max_buf();
    string rep = pick(app_dag).first;
    Box domain = data_domain(max_buffer);
    vector<string> dims;
    for (int i = 0; i < domain.dimension(); i++) {
      if (i < domain.dimension() - 1) {
        dims.push_back(str(domain.length(i)));
      } else {
        dims.push_back("*");
      }
    }
    generate_soda_file(name, unroll_factor, dims);
  }

  std::string max_buf() {
    std::set<string> external_buffers;
    for (auto f : sort_functions()) {
      if (producers(f).size() == 0) {
        external_buffers.insert(f);
      }
    }

    string max_buffer;
    int max_size = -1;
    for (auto b : external_buffers) {
      if (original_buffer_size(b) > max_size) {
        max_buffer = b;
        max_size = original_buffer_size(b);
      }
    }

    return max_buffer;
  }

  void generate_soda_file(const std::string& name, const int unroll_factor, std::vector<std::string>& dims) {
    ofstream out(name + ".soda");
    out << "kernel: " << name << endl;

    string rep = pick(app_dag).first;
    //int unroll_factor = last_update(rep).unroll_factor;
    int width = app_dag.at(rep).pixel_width;

    out << "unroll factor: " << unroll_factor << endl;
    out << "burst width: " << width*unroll_factor << endl << endl;

    std::set<string> external_buffers;
    for (auto f : sort_functions()) {
      if (producers(f).size() == 0) {
        external_buffers.insert(f);
      }
    }

    assert(external_buffers.size() > 0);
    string max_buffer = max_buf();
    //string max_buffer;
    //int max_size = -1;
    //for (auto b : external_buffers) {
      //if (original_buffer_size(b) > max_size) {
        //max_buffer = b;
        //max_size = original_buffer_size(b);
      //}
    //}
    //for (auto b : external_buffers) {
      //if (b != max_buffer) {
        //out << "input " << num_type_cstring() << ": " << b << endl;
      //}
    //}
    //Box domain = data_domain(max_buffer);
    //assert(domain.dimension() == 2);
    //vector<string> dims;
    //for (int i = 0; i < domain.dimension(); i++) {
      //if (i < domain.dimension() - 1) {
        //dims.push_back(str(domain.length(i)));
      //} else {
        //dims.push_back("*");
      //}
    //}
    out << "input " << num_type_cstring() << ": " << max_buffer << sep_list(dims, "(", ")", ", ") << endl << endl;

    vector<string> zeros;
    for (int i = 0; i < data_dimension(); i++) {
      zeros.push_back("0");
    }
    auto zrs = sep_list(zeros, "(", ")", ", ");
    for (auto f : sort_functions()) {

      for (auto u : app_dag.at(f).updates) {
        if (u.get_srcs().size() == 0) {
        } else {
          if (consumers(f).size() == 0) {
            out << "output " << num_type_cstring() << ": " << f << zrs << " = ";
              out << soda_compute_string(width, u.def) << endl << endl;
          } else {

            out << "local " << num_type_cstring() << ": " << f << zrs << " = ";
            out << soda_compute_string(width, u.def) << endl << endl;
          }
        }
      }
    }

    out << endl;
    out << "iterate: 1" << endl;

    out.close();
  }

  umap* realize_opt_schedule(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    set_unroll_factors(name, name, unroll_factor);
    fill_data_domain(name, {d0, d1});
    fill_compute_domain();

    umap* m =
      schedule();
    return m;
  }

  umap* realize_isl_schedule(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    set_unroll_factors(name, name, unroll_factor);
    fill_data_domain(name, {d0, d1});
    fill_compute_domain();

    umap* m =
      schedule_isl();
    return m;
  }

  void realize_naive(CodegenOptions& options, const std::string& name, const int d0, const int d1) {
    realize_naive(options, name, {d0, d1});
  }

  void realize_naive(CodegenOptions& options, const std::string& name, const std::vector<int>& dims) {
    if (!options.unroll_factors_as_pad) {
      const int unroll_factor = 1;
      set_unroll_factors(name, name, unroll_factor);
    } else {
      cout << "realizing naive with padded unroll factors" << endl;
    }

    fill_data_domain(name, dims);
    set_unroll_factors(name, name, 1);

    fill_compute_domain();

    umap* m = nullptr;
    if (options.scheduling_algorithm == SCHEDULE_ALGORITHM_NAIVE) {
      m = schedule_naive();
    } else {
      assert(options.scheduling_algorithm == SCHEDULE_ALGORITHM_ISL);
      m = schedule_isl();
    }

    assert(m != nullptr);
    cout << "Schedule: " << str(m) << endl;

    map<string, UBuffer> buffers = build_buffers(m);

    prog prg;
    prg.name = name + "_naive";
    prg.compute_unit_file = prg.name + "_compute_units.h";

    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_MULTILINEAR;
    options.default_banking_strategy = {"none"};
    populate_program(options, prg, name, {name}, m, buffers);

    return;
  }

  void realize_naive(const std::string& name, const vector<int>& dims) {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;
    realize_naive(options, name, dims);
  }

  void realize_naive(const std::string& name, const int d0, const int d1) {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;

    realize_naive(options, name, d0, d1);
  }

  map<string, vector<QExpr> > schedule_opt() {

    map<string, vector<QExpr> > schedules =
      rectangular_schedules();

    int pos = 0;
    cout << "Sorted pipeline..." << endl;
    for (auto f : sort_updates()) {
      cout << "\t" << f << endl;
      schedules[f].push_back(qexpr(pos));
      pos++;
    }
    return schedules;
  }

  umap* schedule() {
    auto schedules = schedule_opt();
    return qschedule_to_map(ctx, schedules);

  }

  string unrolled_compute_name(const string& f) {
    return map_find(f, app_dag).unrolled_compute_name();
  }

  string compute_name(const string& f) {
    return map_find(f, app_dag).compute_name();
  }

  void generate_compute_unit_file(const std::string& filename) {
    ofstream cfile(filename);
    cfile << "#pragma once" << endl << endl;
    cfile << "#include \"conv_3x3.h\"" << endl << endl;

    cfile << "// Generated compute units..." << endl;
    for (auto u : sort_updates()) {
      if (get_update(u).compute_unit_impl != "") {
        cfile << get_update(u).compute_unit_impl << endl << endl;
      }
    }
    cfile << endl << endl;

    cfile << "// Compute unit banks..." << endl;
    std::set<string> already_seen;
    for (auto f : sort_functions()) {
      if (producers(f).size() == 0) {
        continue;
      }

      if (elem(unrolled_compute_name(f), already_seen)) {
        continue;
      }

      int fwidth = app_dag.at(f).pixel_width;

      for (auto u : app_dag.at(f).updates) {
        cfile << tab(1) << "// " << u.name() << " unroll factor: " << u.unroll_factor << endl;

        int out_width = u.unroll_factor*fwidth;
        vector<pair<int, string> > args_and_widths;
        for (auto p : producers(f)) {
          int arg_width = app_dag.at(p.name).pixel_width;
          int lanes = u.unroll_factor;
          int offsets_per_lane =
            data_window_needed_by_one_compute_lane(u.name(), p.name).pts().size();
          int input_bits = arg_width*lanes*offsets_per_lane;

          args_and_widths.push_back({input_bits, p.name});
        }

        vector<string> arg_decls;
        for (auto a : args_and_widths) {
          arg_decls.push_back("hw_uint<" + to_string(a.first) + ">& " + a.second);
        }
        for (auto index : u.index_variables_needed_by_compute()) {
          arg_decls.push_back("int " + index);
        }

        string out_type_string = "hw_uint<" + to_string(out_width) + "> ";
        cfile << out_type_string << " " << unrolled_compute_name(f) << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;

        cfile << tab(1) << "hw_uint<" << out_width << "> whole_result;" << endl;

        for (int lane = 0; lane < u.unroll_factor; lane++) {
          cfile << endl;
          vector<string> arg_names;
          for (auto arg : args_and_widths) {
            int arg_width = app_dag.at(arg.second).pixel_width;

            string p = arg.second;
            Window arg_input_window =
              data_window_needed_by_one_compute_lane(u.name(), p);
            int offsets_per_lane =
              arg_input_window.pts().size();
            int input_bits = arg_width*offsets_per_lane;

            string arg_name = "lane_" + to_string(lane) + "_" + p;

            arg_names.push_back(arg_name);
            cout << "getting window for " << u.name() << endl;

            int base = lane*input_bits;
            int end = (lane + 1)*input_bits - 1;

            cfile << tab(1) << "hw_uint<" << input_bits << "> " << arg_name << ";" << endl;
            cfile << tab(1) << "set_at<0, " << input_bits << ", " << input_bits << ">(" << arg_name << ", " << p << ".extract<" << base << ", " << end << ">());" << endl;
          }
        for (auto index : u.index_variables_needed_by_compute()) {
          arg_names.push_back(index);
        }
          cfile << tab(1) << "auto result_" << lane << " = " << compute_name(f) << "(" << comma_list(arg_names) << ");" << endl;
          cfile << tab(1) << "set_at<" << fwidth*lane << ", " << out_width << ", " << fwidth << ">(whole_result, result_" << lane << ");" << endl;
        }
        cfile << tab(1) << "return whole_result;" << endl;
        cfile << "}" << endl << endl;

        already_seen.insert(unrolled_compute_name(f));
      }
    }

    cfile.close();
  }

  bool is_external(const string& update) {
    for (auto f : app_dag) {
      for (auto u : f.second.updates) {
        if (u.name() == update) {
          return u.get_srcs().size() == 0;
        }
      }
    }

    cout << "No source for update " << update << endl;
    assert(false);
    return false;
  }

  uset* whole_compute_domain() {
    uset* whole_dom =
      isl_union_set_read_from_str(ctx, "{}");
    assert(whole_dom != nullptr);
    for (auto u : sort_updates()) {
      whole_dom =
        unn(whole_dom, to_uset(compute_domain(u)));
    }

    return whole_dom;
  }

  prog schedule_and_codegen(CodegenOptions& options, const std::string& name, const std::vector<string>& outputs) {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
    std::string time_str(buffer);

    //auto m = schedule_isl();

    auto scheds = schedule_opt();
    umap* m = qschedule_to_map(ctx, scheds);
    assert(m != nullptr);

    map<string, Box> compute_domains;
    vector<string> ops;
    for (auto u : sort_updates()) {
      if (!is_external(u)) {
        ops.push_back(u);
        compute_domains[u] = compute_box(u);
      }
    }

    string cgn = box_codegen(options, ops, scheds, compute_domains);
    options.code_string = cgn;

    map<string, UBuffer> buffers = build_buffers(m);

    uset* whole_dom =
      whole_compute_domain();
    auto sorted_functions = sort_functions();

    prog prg;
    prg.name = name + "_opt";
    prg.compute_unit_file = prg.name + "_compute_units.h";

    populate_program(options, prg, name, outputs, m, buffers);

    return prg;
  }

  void no_unrolling() {
    for (auto& r : app_dag) {
      for (auto& u : r.second.updates) {
        u.unroll_factor = 1;
      }
    }
  }

  void set_unroll_factors(const std::string& reference_function,
      const std::string& to_unroll_function,
      const int unroll_factor) {
    int dummy_value = 10;
    set_unroll_factors({{reference_function, {dummy_value, dummy_value}}}, to_unroll_function, unroll_factor);
  }

  void set_unroll_factors(
      const std::vector<std::pair<std::string, std::vector<int> > >& bounds,
      const std::string& to_unroll_function,
      const int unroll_factor) {
    cout << "Unrolling " << to_unroll_function << " by " << unroll_factor << endl;


    // Preprocess application graph to compute qfactors
    App cpy = *this;
    //// TODO: Update to fill with ndims dimensions
    cpy.no_unrolling();
    //cpy.fill_data_domain(reference_function, {dummy_value, dummy_value});
    cpy.fill_data_domain(bounds);
    //reference_function, {dummy_value, dummy_value});
    cpy.fill_compute_domain();

    cout << "Padding validity deps..." << endl;

    umap* deps = pad_map(cpy.validity_deps());
    cout << "Done padding validity deps" << endl;
    auto umaps = get_maps(deps);
    vector<isl_map*> projected_deps;
    for (auto m : umaps) {
      isl_map* projected = project_all_but(m, 0);
      projected_deps.push_back(projected);
    }
    cout << "Computing qfactors..." << endl;
    map<string, isl_val*> qfs = compute_qfactors(projected_deps);
    cout << "Got qfactors..." << endl;
    for (auto q : qfs) {
      cout << tab(1) << q.first << " -> " << str(q.second) << endl;
    }

    string reference_update =
      sched_var_name(last_update(to_unroll_function).name());
    cout << "reference: " << reference_update << endl;

    cout << "to unroll: " << to_unroll_function << endl;

    int ref_q = to_int(map_find(reference_update, qfs));
    cout << "ref_q = " << ref_q << endl;
    int umax = ref_q * unroll_factor;
    cout << "umax  = " << umax << endl;

    // Use these factors to set unrolled behavior
    for (auto& r : app_dag) {
      for (auto& u : r.second.updates) {
        cout << "finding factor for: " << u.name() << endl;
        int u_qfactor = to_int(map_find(sched_var_name(u.name()), qfs));
        cout << tab(1) << "u_qfactor = " << u_qfactor << endl;
        cout << tab(1) << "ref update= " << umax << endl;
        int fres = (int) max(1.0f, floor(((float) umax) / (float) u_qfactor));
        int u_unroll_factor = fres;
        u.unroll_factor = u_unroll_factor;
        cout << tab(1) << u.unroll_factor << endl;
        if (r.first == to_unroll_function) {
          assert(u.unroll_factor == unroll_factor);
        }
      }
    }
    //assert(false);
  }

  void realize_no_unroll(CodegenOptions& options,
      const std::string& name,
      const std::vector<int>& dims) {
    realize_no_unroll(options, {{name, dims}});
  }

  prog realize_no_unroll(CodegenOptions& options,
      const std::vector<std::pair<std::string, std::vector<int> > >& bounds) {
    fill_data_domain(bounds);
    fill_compute_domain();
    vector<string> names;
    for (auto n : bounds) {
      names.push_back(n.first);
    }
    string concat_name = sep_list(names, "", "", "_");
    return schedule_and_codegen(options, concat_name, names);
  }

  prog realize(const std::string& name, const int d0, const int d1) {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    return realize(options, name, d0, d1);
  }

  prog realize(CodegenOptions& options,
      const std::string& name,
      const int d0,
      const int d1) {
    return realize(options, name, {d0, d1}, 1);
  }

  prog realize(CodegenOptions& options, const std::string& name, const int d0, const int d1, const int unroll_factor) {
    return realize(options, name, {d0, d1}, unroll_factor);
  }

  prog realize(CodegenOptions& options, const std::string& name, const vector<int>& dims, const int unroll_factor) {
    return realize(options, name, dims, name, unroll_factor);
  }

  prog realize(CodegenOptions& options,
      const std::string& out_name,
      const vector<int>& dims,
      const std::string& unroll_target,
      const int unroll_factor) {
    return realize(options, {{out_name, dims}}, unroll_target, unroll_factor);
  }

  prog realize(CodegenOptions& options,
      const std::vector<std::pair<std::string, std::vector<int> > >& bounds,
      const std::string& unroll_target,
      const int unroll_factor) {

    double total_elapsed = 0.;
    auto start = std::chrono::system_clock::now();

    assert(bounds.size() > 0);

    string out_name = bounds.at(0).first;
    vector<int> dims = bounds.at(0).second;

    set_unroll_factors(bounds, unroll_target, unroll_factor);
    prog prg = realize_no_unroll(options, bounds);

    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    total_elapsed += elapsed.count();
    ofstream schedule_info("./scratch/" + out_name + ".txt");
    schedule_info << "time to realize " << out_name << ": " << total_elapsed << endl;
    schedule_info.close();

    return prg;
  }

  prog realize(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;

    return realize(options, name, {d0, d1}, unroll_factor);
  }

};


void memtile_test() {

  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "memtile";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["agg"] = 32;
  prg.buffer_port_widths["tb"] = 32;
  prg.buffer_port_widths["sram"] = 32;

  /* this program will be a test of memory tile flatten,
   * I hand written the memory access pattern after vectorization
   * and see if the Polyhedra analysis could figure out the
   * correct schedule and memory size for me.
   * */


  {
    auto agg_loop = prg.add_nest("po", 0, 8, "pi", 0, 2, "dummy", 0, 4);
    //auto agg_loop = prg.add_nest("po", 0, 8, "pi", 0, 8);
    auto agg = agg_loop->add_op("in2agg");
    agg->add_load("in", "po, 4*pi+dummy");
    agg->add_store("agg", "po, 4*pi+dummy");
    //agg->add_load("in", "po, pi");
    //agg->add_store("agg", "po, pi");
  }

  {
    //auto sram_loop = prg.add_nest("qo", 0, 8, "qi", 0, 2, "dummy0", 0 ,1);
    auto sram_loop = prg.add_nest("qo", 0, 8, "qi", 0, 2);
    auto sram = sram_loop->add_op("agg2sram");
    sram->add_load("agg", "qo, qi*4");
    sram->add_load("agg", "qo, qi*4+1");
    sram->add_load("agg", "qo, qi*4+2");
    sram->add_load("agg", "qo, qi*4+3");

    sram->add_store("sram", "qo, qi*4");
    sram->add_store("sram", "qo, qi*4+1");
    sram->add_store("sram", "qo, qi*4+2");
    sram->add_store("sram", "qo, qi*4+3");
  }

  {
    auto tb_loop = prg.add_nest("k", 0, 6, "l", 0, 2, "m", 0, 3);
    auto tb = tb_loop->add_op("sram2tb");
    tb->add_load("sram", "(k+m), l*4");
    tb->add_load("sram", "(k+m), l*4+1");
    tb->add_load("sram", "(k+m), l*4+2");
    tb->add_load("sram", "(k+m), l*4+3");


    tb->add_store("tb", "k, m, l*4");
    tb->add_store("tb", "k, m, l*4+1");
    tb->add_store("tb", "k, m, l*4+2");
    tb->add_store("tb", "k, m, l*4+3");
  }

  {
    auto out_loop = prg.add_nest("a", 0, 6, "b", 0, 2, "c", 0, 4);
    auto out = out_loop->add_op("tb2out");
    out->add_load("tb", "a, 0, 4*b + c");
    out->add_load("tb", "a, 1, 4*b + c");
    out->add_load("tb", "a, 2, 4*b + c");

    out->add_store("out", "a, 0, 4*b+c");
    out->add_store("out", "a, 1, 4*b+c");
    out->add_store("out", "a, 2, 4*b+c");
  }

  auto sched = prg.unoptimized_schedule();
  cout << codegen_c(sched) << endl;
  auto itr_domain = prg.whole_iteration_domain();
  cout << "iter domain = " << str(itr_domain) << endl;

  //auto sched_opt = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
  auto domain_boxes = prg.get_domain_boxes();
  map<string, Box> op_boxes;
  for (auto b : domain_boxes) {
      op_boxes[b.first->name] = b.second;
      cout << tab(1) << b.first->name << "->" << b.second << endl;
  }

  vector<string> sorted_functions = {"in2agg", "agg2sram", "sram2tb", "tb2out"};
  int ndims = 3;
  map<string, vector<QExpr> > schedules;
  map<string, Result> app_dag;
  for (auto func : sorted_functions) {
      Result res;
      app_dag[func] = {};
  }

  {
    auto sched_opt =
      isl_schedule_get_map(prg.optimized_schedule());
    //Start generate the config
    //TODO: hacky first try, based on my understanding of the configuration register
    //FIXME: there is config register related to the memory size, no need to use schedule result
    auto buffers = build_buffers(prg, sched_opt);

    cout << "\n***Dump configuration file into CSV***" << endl;
    memtile_config memtile;
    memtile.extract_config(buffers);
    memtile.emit_config_file_csv("lake_memtile_config_conv33");
    compare_to_gold("lake_memtile_config_conv33.csv");
  }

}

Window win(const std::string& name, const std::vector<vector<int > >& offsets) {
  assert(offsets.size() > 0);
  size_t ndims = offsets.at(0).size();
  vector<int> strides;
  for (size_t i = 0; i < ndims; i++) {
    strides.push_back(1);
  }
  return Window{name, strides, offsets};
}

Expr* stencilv(int xl, int xr, int yl, int yr, const std::string& name) {
  vector<Expr*> offsets;
  for (int i = xl; i <= xr; i++) {
    for (int j = yl; j <= yr; j++) {
      offsets.push_back(v(name, i, j));
    }
  }
  return add(offsets);
}

Window stencil(int xl, int xr, int yl, int yr, const std::string& name) {
  vector<vector<int> > offsets;
  for (int i = xl; i <= xr; i++) {
    for (int j = yl; j <= yr; j++) {
      offsets.push_back({i, j});
    }
  }
  return Window{name, {1, 1}, offsets};
}

Window downsample(const int factor, const std::string& name) {
  return Window{name, {qconst(factor), qconst(factor)}, {{0, 0}}};
}

Window upsample0(const int factor, const std::string& name) {
  return Window{name, {qconst(1, factor), qconst(1)}, {{0, 0}}};
}


Window upsample(const int factor, const std::string& name) {
  return Window{name, {qconst(1, factor), qconst(1, factor)}, {{0, 0}}};
}

Window pt(const std::string& name) {
  return Window{name, {1, 1}, {{0, 0}}};
}

Window pt3(const std::string& name) {
  return Window{name, {1, 1, 1}, {{0, 0, 0}}};
}

App gauss_pyramid_fpga(const std::string& out_name);

void updown_merge_test() {
  App ds;
  ds.func2d("A_off");
  ds.func2d("B_off");

  ds.func2d("A", "id", "A_off", {1, 1}, {{0, 0}});
  ds.func2d("B", "id", "B_off", {1, 1}, {{0, 0}});

  Window awin("A", {qconst(1, 2), qconst(1, 5)}, {{0, 0}});
  Window bwin("B", {qconst(4), qconst(3)}, {{0, 0}});
  ds.func2d("C", "diff", {awin, bwin});

  ds.realize("C", 10, 10, 1);

  int res = system("g++ -std=c++11 -c C_opt.cpp");
  assert(res == 0);
}

void upsample2d_test() {
  App ds;
  ds.func2d("A");
  Window awin("A", {qconst(1, 2), qconst(1, 5)}, {{0, 0}});
  ds.func2d("B", "id", awin);
  ds.realize("B", 10, 10, 1);

  int res = system("g++ -std=c++11 -c B_opt.cpp");
  assert(res == 0);
}

void downsample2d_test() {
  App ds;
  ds.func2d("A_oc");
  ds.func2d("A", "id", pt("A_oc"));

  Window awin{"A", {2, 2}, {{0, 0}}};
  ds.func2d("B", "id", awin);
  ds.realize("B", 10, 10, 1);

  int res = system("g++ -std=c++11 -c B_opt.cpp");
  assert(res == 0);
}

//App tricky_reconvergence(const std::string& name) {
  //App dn;
  //dn.set_default_num_type(NUM_TYPE_FLOAT);

  //dn.func2d("f_off_chip");
  //dn.func2d("u_off_chip");
  //dn.func2d("f", v("f_off_chip"));
  //dn.func2d("u", v("u_off_chip"));

  //Expr* diff = sub(v("u", 0, -1), v("u", 0, 0));
  //dn.func2d("diff_qwe", diff);
  //dn.func2d("diff_d", "diff_d2d", "u", {{0, 0}, {0, 1}});
  //dn.func2d("diff_l", "diff_l2d", "u", {
      //{-1, 0},
      //{0, 0}
      //});
  //dn.func2d("diff_r", "diff_r2d", "u", {{0, 0}, {1, 0}});

  //dn.func2d("g", div(fc("1.0f"), func("sqrt", add({sq("diff_qwe"), sq("diff_d"), sq("diff_l"), sq("diff_r")}))));
  //dn.func2d("r0", "comp_r02d", {pt("u"), pt("f")});
  //dn.func2d("r1", "r1_comp2d", pt("r0"));
  ////dn.func2d(name, "r1_comp2d", pt("r0"));
  //dn.func2d(name,
      //"out_comp_dn2d",
      //{pt("r1"),
      //pt("f"),
      //win("u", {
          //{-1, 0},
          //{0, -1},
          //{0, 0},
          //{1, 0}
          //}),
      //win("g", {
          //{-1, 0},
          //{0, -1},
          //{0, 1},
          //{1, 0}
          //})});

  //return dn;
//}


prog halide_dnn_conv() {
  prog prg;
  prg.compute_unit_file = "conv_multi_compute.h";
  prg.name = "halide_dnn_conv";

// Stencil<uint16_t, 64, 64, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming hw_input.stencil
////producing hw_input_copy.stencil
  auto loop_hw_input_copy_s0_z = prg.add_loop("hw_input_copy_s0_z", 0, 2);
  auto loop_hw_input_copy_s0_y = loop_hw_input_copy_s0_z->add_loop("hw_input_copy_s0_y", 0, 64);
  auto loop_hw_input_copy_s0_x = loop_hw_input_copy_s0_y->add_loop("hw_input_copy_s0_x", 0, 64);

//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z)
  auto hcompute_hw_input_copy_stencil = loop_hw_input_copy_s0_x->add_op("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y", "hw_input_copy_s0_z");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y", "hw_input_copy_s0_z");

//consuming hw_input_copy.stencil
  auto loop_hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto loop_hw_output_s0_x_xi = loop_hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);
////producing conv.stencil

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = 0
  auto hcompute_conv_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  auto loop_conv_s1_r_y = loop_hw_output_s0_x_xi->add_loop("conv_s1_r_y", 0, 3);
  auto loop_conv_s1_r_x = loop_conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = ((conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) + int32(hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), (conv.s1.r$y + hw_output.s0.y.yi), 0))) + int32(hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), (conv.s1.r$y + hw_output.s0.y.yi), 1)))
  auto hcompute_conv_stencil_1 = loop_conv_s1_r_x->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_r_x + hw_output_s0_x_xi)", "(conv_s1_r_y + hw_output_s0_y_yi)", "0");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_r_x + hw_output_s0_x_xi)", "(conv_s1_r_y + hw_output_s0_y_yi)", "1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

void halide_dnn_test() {
  prog prg = halide_dnn_conv();
  cout << "Created program..." << endl;
  prg.pretty_print();

  //generate_optimized_code(prg);

  regression_test(prg);
}

prog halide_cascade() {
  prog prg;
  prg.compute_unit_file = "clockwork_target_compute.h";
  prg.name = "halide_cascade";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


  int size = 64;
//consuming hw_input.stencil
////producing conv1.stencil
  auto loop_conv1_s0_y = prg.add_loop("conv1_s0_x", 0, size);
  auto loop_conv1_s0_x = loop_conv1_s0_y->add_loop("conv1_s0_y", 0, size);

//store is: conv1.stencil(conv1.s0.x, conv1.s0.y) = 0
  auto compute_conv1_stencil = loop_conv1_s0_x->add_op("compute_conv1_stencil");
  compute_conv1_stencil->add_function("compute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 16;
  compute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_x", "conv1_s0_y");
  auto loop_conv1_s1_y = prg.add_loop("conv1_s1_x", 0, size);
  auto loop_conv1_s1_x = loop_conv1_s1_y->add_loop("conv1_s1_y", 0, size);

//store is: conv1.stencil(conv1.s1.x, conv1.s1.y) = (((((conv1.stencil(conv1.s1.x, conv1.s1.y) + (((((int32(hw_input.stencil((conv1.s1.x + 1), (conv1.s1.y + 1)))*2) + (int32(hw_input.stencil((conv1.s1.x + 1), (conv1.s1.y + 2))) + int32(hw_input.stencil((conv1.s1.x + 2), (conv1.s1.y + 1))))) + int32(hw_input.stencil(conv1.s1.x, (conv1.s1.y + 1)))) + int32(hw_input.stencil((conv1.s1.x + 1), conv1.s1.y)))*2)) + int32(hw_input.stencil(conv1.s1.x, conv1.s1.y))) + int32(hw_input.stencil((conv1.s1.x + 2), conv1.s1.y))) + int32(hw_input.stencil(conv1.s1.x, (conv1.s1.y + 2)))) + int32(hw_input.stencil((conv1.s1.x + 2), (conv1.s1.y + 2))))
  auto compute_conv1_stencil_1 = loop_conv1_s1_x->add_op("compute_conv1_stencil_1");
  compute_conv1_stencil_1->add_function("compute_conv1_stencil_1");
  compute_conv1_stencil_1->add_load("conv1_stencil", "conv1_s1_x", "conv1_s1_y");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 1)", "(conv1_s1_y + 1)");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 1)", "(conv1_s1_y + 2)");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 2)", "(conv1_s1_y + 1)");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "conv1_s1_x", "(conv1_s1_y + 1)");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 1)", "conv1_s1_y");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "conv1_s1_x", "conv1_s1_y");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 2)", "conv1_s1_y");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "conv1_s1_x", "(conv1_s1_y + 2)");
  compute_conv1_stencil_1->add_load("hw_input_stencil", "(conv1_s1_x + 2)", "(conv1_s1_y + 2)");
  compute_conv1_stencil_1->add_store("conv1_stencil", "conv1_s1_x", "conv1_s1_y");
////producing conv2.stencil
  auto loop_conv2_s0_y = prg.add_loop("conv2_s0_x", 0, size - 2);
  auto loop_conv2_s0_x = loop_conv2_s0_y->add_loop("conv2_s0_y", 0, size - 2);

//store is: conv2.stencil(conv2.s0.x, conv2.s0.y) = 0
  auto compute_conv2_stencil = loop_conv2_s0_x->add_op("compute_conv2_stencil");
  compute_conv2_stencil->add_function("compute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 16;
  compute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_x", "conv2_s0_y");

//consuming conv1.stencil
  auto loop_conv2_s1_y = prg.add_loop("conv2_s1_x", 0, size - 2);
  auto loop_conv2_s1_x = loop_conv2_s1_y->add_loop("conv2_s1_y", 0, size - 2);

//store is: conv2.stencil(conv2.s1.x, conv2.s1.y) = (conv1.stencil(conv2.s1.x, conv2.s1.y) + (conv2.stencil(conv2.s1.x, conv2.s1.y) + ((conv1.stencil((conv2.s1.x + 1), conv2.s1.y)*2) + (conv1.stencil((conv2.s1.x + 2), conv2.s1.y) + ((conv1.stencil(conv2.s1.x, (conv2.s1.y + 1))*2) + ((conv1.stencil((conv2.s1.x + 1), (conv2.s1.y + 1))*4) + ((conv1.stencil((conv2.s1.x + 2), (conv2.s1.y + 1))*2) + (conv1.stencil(conv2.s1.x, (conv2.s1.y + 2)) + (conv1.stencil((conv2.s1.x + 2), (conv2.s1.y + 2)) + (conv1.stencil((conv2.s1.x + 1), (conv2.s1.y + 2))*2))))))))))
  auto compute_conv2_stencil_1 = loop_conv2_s1_x->add_op("compute_conv2_stencil_1");
  compute_conv2_stencil_1->add_function("compute_conv2_stencil_1");
  compute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_x", "conv2_s1_y");
  compute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 1)", "conv2_s1_y");
  compute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 2)", "conv2_s1_y");
  compute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_x", "(conv2_s1_y + 1)");
  compute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 1)", "(conv2_s1_y + 1)");
  compute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 2)", "(conv2_s1_y + 1)");
  compute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_x", "(conv2_s1_y + 2)");
  compute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 2)", "(conv2_s1_y + 2)");
  compute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_x + 1)", "(conv2_s1_y + 2)");
  compute_conv2_stencil_1->add_load("conv2_stencil", "conv2_s1_x", "conv2_s1_y");
  compute_conv2_stencil_1->add_store("conv2_stencil", "conv2_s1_x", "conv2_s1_y");

//consuming conv2.stencil
  auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_x_xo", 0, size - 2);
  auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_y_yo", 0, size - 2);

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv2.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  auto compute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("compute_hw_output_stencil");
  compute_hw_output_stencil->add_function("compute_hw_output_stencil");
  compute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  compute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  return prg;
}

//void mini_conv_halide_test() {

  //prog prg = mini_conv_halide();
  //prg.pretty_print();

  //generate_optimized_code(prg);
  //generate_regression_testbench(prg);
  //vector<string> auto_gen_res = run_regression_tb(prg);

  //prog prg_fixed = mini_conv_halide_fixed();
  //prg_fixed.pretty_print();

  //generate_optimized_code(prg_fixed);
  //generate_regression_testbench(prg_fixed);
  //vector<string> optimized_res = run_regression_tb(prg_fixed);
  //assert(optimized_res == auto_gen_res);
//}

void conv_3_3_halide_test() {
  prog prg_fixed = conv_3_3_halide_fixed();
  prg_fixed.pretty_print();
  //assert(false);

  generate_optimized_code(prg_fixed);
  generate_regression_testbench(prg_fixed);
  vector<string> optimized_res = run_regression_tb(prg_fixed);

  prog prg = conv_3_3_halide();
  prg.pretty_print();

  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> auto_gen_res = run_regression_tb(prg);
  assert(optimized_res == auto_gen_res);
}

void halide_cascade_test() {
  prog prg = halide_cascade();
  cout << "Created program..." << endl;
  prg.pretty_print();

  //auto domain = prg.whole_iteration_domain();

  //auto order_deps = prg.relative_orders();
  //cout << "Getting validity deps..." << endl;
  //isl_union_map *raw_deps = prg.validity_deps();
  //cout << "Got validity deps..." << endl;
  //cout << "Validity: " << str(raw_deps) << endl;
  //auto validity =
    //unn(order_deps, raw_deps);
  //isl_union_map *proximity =
    //cpy(raw_deps);

  //auto clksched = clockwork_schedule(domain, validity, proximity);
  //cout << "---- Clockwork schedule:" << endl;
  //isl_space* test_space = map_space(prg.ctx, 2, 3);
  //isl_local_space* aff_space = local_set_space(prg.ctx, 2);
  //for (auto s : clksched) {
    //auto ma = isl_multi_aff_zero(test_space);

    //cout << tab(1) << s.first << " -> ";
    //int i = 0;
    //for (auto v : s.second) {
      //cout << str(v) << ", ";
      //isl_aff* av = isl_aff_zero_on_domain(aff_space);
      //av = set_const_coeff(av, const_coeff(v));
      //isl_multi_aff_set_aff(ma, i, av);
      //i++;
    //}
    //cout << endl;
    //cout << tab(2) << "ma = " << str(ma) << endl;
  //}

  //generate_optimized_code(prg);

  regression_test(prg);
}

void halide_frontend_test() {
  // call the function generated by Halide to hardware
  prog prg = clockwork_target();
  cout << "Created program..." << endl;
  prg.pretty_print();
  generate_optimized_code(prg);

  //regression_test(prg);
}

void tricky_shift_register_reconvergence_test() {
  App sobel;
  sobel.func2d("C_oc");
  sobel.func2d("C", v("C_oc"));

  sobel.func2d("B", add(v("C", -2, 0), v("C", -1, 0), v("C", 0, 0)));
  sobel.func2d("A", add(v("C", 2, 0), v("C", 3, 0), v("C", 4, 0)));

  sobel.func2d("D", add({
        v("A", 0, 0), v("A", 1, 0), v("A", 2, 0),
        v("B", 0, 0), v("B", 1, 0), v("B", 2, 0)}));

  int size = 10;
  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  sobel.realize(options, "D", size, 1, 1);

  sobel.realize_naive("D", size, 1);

  std::vector<std::string> naive =
    run_regression_tb("D_naive");
  cout << "Naive    : " << naive << endl;
  std::vector<std::string> optimized =
    run_regression_tb("D_opt");
  cout << "Optimized: " << optimized << endl;
  assert(naive == optimized);
}
void mismatched_stencil_test() {
  App sobel;

  sobel.func2d("off_chip_img0");
  sobel.func2d("img0", "id", "off_chip_img0", {1, 1}, {{0, 0}});

  sobel.func2d("off_chip_img1");
  sobel.func2d("img1", "id", "off_chip_img1", {1, 1}, {{0, 0}});

  Window xwindow{"img0", {1, 1}, {{0, 0}, {1, 0}, {2, 0}}};
  Window ywindow{"img1", {1, 1}, {{0, 0}, {1, 0}}};
  sobel.func2d("mismatched_stencils", "contrived", {xwindow, ywindow});

  int size = 10;
  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  sobel.realize(options, "mismatched_stencils", size, 1, 1);

  sobel.realize_naive("mismatched_stencils", size, 1);

  std::vector<std::string> naive =
    run_regression_tb("mismatched_stencils_naive");
  cout << "Naive    : " << naive << endl;
  std::vector<std::string> optimized =
    run_regression_tb("mismatched_stencils_opt");
  cout << "Optimized: " << optimized << endl;
  assert(naive == optimized);

}

void conv_app_rolled_reduce_test() {
  App cv;
  cv.func2d("Img_off_chip");
  cv.func2d("Img", "id", pt("Img_off_chip"));

  vector<QAV> dim_strides{qconst(1), qconst(1)};
  vector<QAV> reduce_strides{qconst(1), qconst(1)};

  vector<vector<int> > offsets{{0, 0}};
  Box reduce_ranges;
  reduce_ranges.intervals.push_back({0, 2});
  reduce_ranges.intervals.push_back({0, 2});
  Window img_win{"Img", dim_strides, reduce_strides, offsets};

  vector<Window> empty;
  cv.func2d("reduce_conv", "zero", empty);
  cv.update("reduce_conv", "add", "id", {img_win}, reduce_ranges);
  cv.realize("reduce_conv", 32, 32, 1);

}

vector<string> gauss_pyramid(const int num_levels, const string& func, App& app) {
  string last = func;
  vector<string> gauss_levels;
  gauss_levels.push_back(last);
  for (int l = 1; l < num_levels; l++) {
    string next_blur = func + "_gauss_blur_" + str(l);
    string next_out = func + "_gauss_ds_" + str(l);

    vector<vector<int > > offsets;
    //for (int r = 0; r < 3; r++) {
      //for (int c = 0; c < 3; c++) {
    for (int r = -1; r < 2; r++) {
      for (int c = -1; c < 2; c++) {
        offsets.push_back({c, r});
      }
    }

    Window blur_window{last, {qconst(1), qconst(1)}, offsets};
    app.func2d(next_blur, "reduce_gauss", blur_window);
    app.func2d(next_out, "id", next_blur, {qconst(2), qconst(2)}, {{0, 0}});

    last = next_out;
    gauss_levels.push_back(last);
  }

  assert(gauss_levels.size() == num_levels);

  return gauss_levels;
}

vector<string> laplace_pyramid(const int num_levels, const string& func, App& app) {
  auto gauss_levels = gauss_pyramid(num_levels, func, app);

  vector<string> laplace_levels;
  for (int l = 0; l < num_levels - 1; l++) {
    string larger_image = gauss_levels.at(l);
    string smaller_image = gauss_levels.at(l + 1);

    string next_us = func + "_laplace_us_" + str(l);
    string next_out = func + "_laplace_diff_" + str(l);

    // Upsample the image
    app.func2d(next_us, "id", smaller_image, {qconst(1, 2), qconst(1, 2)}, {{0, 0}});

    Window ad{larger_image, {qconst(1), qconst(1)}, {{0, 0}}};
    Window ud{next_us, {qconst(1), qconst(1)}, {{0, 0}}};
    app.func2d(next_out, "diff", {ad, ud});

    laplace_levels.push_back(next_out);
  }

  laplace_levels.push_back(gauss_levels.back());

  assert(laplace_levels.size() == num_levels);

  return laplace_levels;
}

void up_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});
  lp.func2d("us", "id", {upsample(2, "in")});

  int size = 16;
  lp.unroll("us", 2);

  lp.realize("us", size, size);
  auto opt = run_regression_tb("us_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "us", size, size);
  auto naive = run_regression_tb("us_naive");

  assert(opt == naive);
}

void up_unrolled_4_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});
  lp.func2d("us", "id", {upsample(2, "in")});

  int size = 16;
  lp.unroll("us", 4);

  lp.realize("us", size, size);
  auto opt = run_regression_tb("us_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "us", size, size);
  auto naive = run_regression_tb("us_naive");

  assert(opt == naive);
}

void up_down_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample(2, "in")});
  lp.func2d("ds", "id", {downsample(2, "us")});

  int size = 16;
  lp.unroll("us", 4);

  lp.realize("ds", size, size);
  auto opt = run_regression_tb("ds_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "ds", size, size);
  auto naive = run_regression_tb("ds_naive");

  assert(opt == naive);
}

void neg_stencil_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("neg_stencil", "conv_3_3", {stencil(-1, 1, -1, 1, "in")});

  int size = 16;

  lp.realize("neg_stencil", size, size);
  auto opt = run_regression_tb("neg_stencil_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  //options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "neg_stencil", size, size);
  auto naive = run_regression_tb("neg_stencil_naive");

  assert(opt == naive);
}

void up_stencil_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample0(2, "in")});
  //lp.func2d("up_stencil", "conv_3_3", {stencil(-2, 0, -2, 0, "us")});
  //lp.func2d("up_stencil", "conv_3_3", {stencil(-1, 1, -1, 1, "us")});
  lp.func2d("up_stencil", "conv_1_3", {stencil(-1, 1, 0, 0, "us")});
  //lp.func2d("up_stencil", "conv_3_3", {stencil(0, 2, 0, 2, "us")});

  int size = 4;

  //auto isl_sched = lp.realize_isl_schedule("up_stencil", size, size);
  //auto isl_maps = get_maps(isl_sched);

  //auto opt_sched = lp.realize_opt_schedule("up_stencil", size, size);
  //auto opt_maps = get_maps(opt_sched);

  //cout << "--- ISL Schedule" << endl;
  //for (auto m : isl_maps) {
    //cout << tab(1) << str(m) <<  endl;
  //}
  //cout << endl << endl;

  //cout << "--- OPT Schedule" << endl;
  //for (auto m : opt_maps) {
    //cout << tab(1) << str(m) <<  endl;
  //}
  //cout << endl << endl;


  lp.realize("up_stencil", size, size);
  auto opt = run_regression_tb("up_stencil_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  //options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "up_stencil", size, size);
  auto naive = run_regression_tb("up_stencil_naive");

  assert(opt == naive);
}

void up_down_auto_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample(2, "in")});
  lp.func2d("up_stencil_down", "id", {downsample(2, "us")});

  int size = 16;

  lp.realize("up_stencil_down", size, size, 4);
  auto opt = run_regression_tb("up_stencil_down_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "up_stencil_down", size, size);
  auto naive = run_regression_tb("up_stencil_down_naive");

  assert(opt == naive);
}

void up_stencil_auto_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  string app_name = "up_stencil";
  lp.func2d("us", "id", {upsample(2, "in")});
  //lp.func2d(app_name, "conv_3_3", {stencil(-1, 1, -1, 1, "us")});
  lp.func2d(app_name, "conv_3_3", {stencil(0, 2, 0, 2, "us")});

  int size = 16;

  lp.realize(app_name, size, size, 4);
  auto opt = run_regression_tb(app_name + "_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, app_name, size, size);
  auto naive = run_regression_tb(app_name + "_naive");

  assert(opt == naive);
}

void up_stencil_down_auto_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample(2, "in")});
  lp.func2d("stencil", "conv_3_3", {stencil(0, 2, 0, 2, "us")});
  //lp.func2d("stencil", "conv_3_3", {stencil(-1, 1, -1, 1, "us")});
  lp.func2d("up_stencil_down", "id", {downsample(2, "stencil")});

  int size = 16;

  lp.realize("up_stencil_down", size, size, 4);
  auto opt = run_regression_tb("up_stencil_down_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "up_stencil_down", size, size);
  auto naive = run_regression_tb("up_stencil_down_naive");

  assert(opt == naive);
}

void up_stencil_down_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample(2, "in")});
  lp.func2d("stencil", "conv_3_3", {stencil(-1, 1, -1, 1, "us")});
  lp.func2d("ds", "id", {downsample(2, "stencil")});

  int size = 16;

  //auto isl_sched = lp.realize_isl_schedule("ds", size, size);
  //auto isl_maps = get_maps(isl_sched);

  //auto opt_sched = lp.realize_opt_schedule("ds", size, size);
  //auto opt_maps = get_maps(opt_sched);

  //cout << "--- ISL Schedule" << endl;
  //for (auto m : isl_maps) {
    //cout << tab(1) << str(m) <<  endl;
  //}
  //cout << endl << endl;

  //cout << "--- OPT Schedule" << endl;
  //for (auto m : opt_maps) {
    //cout << tab(1) << str(m) <<  endl;
  //}
  //cout << endl << endl;


  lp.realize("ds", size, size);
  auto opt = run_regression_tb("ds_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "ds", size, size);
  auto naive = run_regression_tb("ds_naive");

  compare("ds", opt, naive);
  //assert(opt == naive);
}

void up_stencil_down_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample(2, "in")});
  lp.func2d("stencil", "conv_3_3", {stencil(-1, 1, -1, 1, "us")});
  lp.func2d("ds", "id", {downsample(2, "stencil")});

  int size = 16;
  lp.unroll("us", 4);
  lp.unroll("stencil", 2);

  lp.realize("ds", size, size);
  auto opt = run_regression_tb("ds_opt");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  lp.realize_naive(options, "ds", size, size);
  auto naive = run_regression_tb("ds_naive");

  assert(opt == naive);
}

App harris_cartoon(const std::string& out_name) {
  App harris;
  harris.set_default_pixel_width(16);
  harris.func2d("img_oc");
  harris.func2d("img", v("img_oc"));

  //harris.func2d("grad_x", stencilv(0, 2, 0, 0, "img"));
  //harris.func2d(out_name, stencilv(0, 2, 0, 0, "grad_x"));

  harris.func2d("grad_x", stencilv(-1, 1, 0, 0, "img"));
  harris.func2d(out_name, stencilv(-1, 1, 0, 0, "grad_x"));

  return harris;
}

App different_path_latencies(const std::string& out_name) {
  App harris;
  harris.set_default_pixel_width(16);
  harris.func2d("img_oc");
  harris.func2d("img", v("img_oc"));
  harris.func2d("short_path", v("img"));
  harris.func2d("long_path", div(mul(v("img"), add(v("img"), 1)), 29));
  harris.func2d(out_name, add(v("long_path"), v("short_path")));

  return harris;
}

void box_blur(App& app, const string& res, const string& src) {
  app.func2d(res + "_a", stencilv(-1, 1, -1, 1, src));
  app.func2d(res, div(v(res + "_a"), 9));
}

App harris16(const std::string& out_name) {
  App harris;
  harris.set_default_pixel_width(16);
  harris.func2d("img_oc");
  harris.func2d("img", v("img_oc"));
  //harris.func2d("grad_x",
      //add(sub(v("img", 1, -1), v("img", -1, -1)),
        //mul(sub(v("img", 1, 0), v("img", -1, 0)), 2),
        //sub(v("img", 1, 1), v("img", -1, 1))));
  // This example causes SODA and our code to disagree
  //harris.func2d(out_name, div(sub(v("img"), 30000), 128));

  harris.func2d("grad_x",
      add(sub(v("img", 1, -1), v("img", -1, -1)),
        mul(sub(v("img", 1, 0), v("img", -1, 0)), 2),
        sub(v("img", 1, 1), v("img", -1, 1))));

  harris.func2d("grad_y",
      add(sub(v("img", -1, 1), v("img", -1, -1)),
        mul(sub(v("img", 0, 1), v("img", 0, -1)), 2),
        sub(v("img", 1, 1), v("img", 1, -1))));

  //harris.func2d(out_name, div(square(v("grad_x")), 128));

  harris.func2d("lxx", div(square(v("grad_x")), 128));
  harris.func2d("lyy", div(square(v("grad_y")), 128));
  harris.func2d("lxy", div(mul(v("grad_x"), v("grad_y")), 128));

  box_blur(harris, "lgxx", "lxx");
  box_blur(harris, "lgyy", "lyy");
  box_blur(harris, "lgxy", "lxy");

  //harris.func2d("lgxx", div(stencilv(-1, 1, -1, 1, "lxx"), 9));
  //harris.func2d("lgyy", div(stencilv(-1, 1, -1, 1, "lyy"), 9));
  //harris.func2d("lgxy", div(stencilv(-1, 1, -1, 1, "lxy"), 9));

  harris.func2d("lgxx8", div(v("lgxx"), 64));
  harris.func2d("lgyy8", div(v("lgyy"), 64));
  harris.func2d("lgxy8", div(v("lgxy"), 64));

  harris.func2d("det", add(mul("lgxx8", "lgyy8"), square("lgxy8")));
  harris.func2d("trace", mul("lgxx8", "lgyy8"));
  harris.func2d(out_name, add(v("det"),
        add(square("trace"), 8)));

  return harris;
}

App harris(const std::string& out_name) {
  App harris;
  //harris.set_default_pixel_width(16);
  harris.func2d("img_oc");
  harris.func2d("img", v("img_oc"));
  harris.func2d("grad_x",
      add(sub(v("img", 1, -1), v("img", -1, -1)),
        mul(sub(v("img", 1, 0), v("img", -1, 0)), 2),
        sub(v("img", 1, 1), v("img", -1, 1))));

  harris.func2d("grad_y",
      add(sub(v("img", -1, 1), v("img", -1, -1)),
        mul(sub(v("img", 0, 1), v("img", 0, -1)), 2),
        sub(v("img", 1, 1), v("img", 1, -1))));

  harris.func2d("lxx", add(square(v("grad_x")), 128));
  harris.func2d("lyy", add(square(v("grad_y")), 128));
  harris.func2d("lxy", add(mul(v("grad_x"), v("grad_y")), 128));

  harris.func2d("lgxx", stencilv(-1, 1, -1, 1, "lxx"));
  harris.func2d("lgyy", stencilv(-1, 1, -1, 1, "lyy"));
  harris.func2d("lgxy", stencilv(-1, 1, -1, 1, "lxy"));

  harris.func2d("lgxx8", add(v("lgxx"), 64));
  harris.func2d("lgyy8", add(v("lgyy"), 64));
  harris.func2d("lgxy8", add(v("lgxy"), 64));

  harris.func2d("det", add(mul("lgxx8", "lgyy8"), square("lgxy8")));
  harris.func2d("trace", mul("lgxx8", "lgyy8"));
  harris.func2d(out_name, add(v("det"),
        mul(square("trace"), 8)));

  return harris;
}

void harris_unrolled_test() {
  int rows = 1;
  int cols = 1;
  int unroll_factor = 2;
  cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
  string out_name = "harris_" + str(unroll_factor);

  App h = harris_cartoon(out_name);
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    h.realize(options, out_name, cols, rows, unroll_factor);
  }

  {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;
    options.unroll_factors_as_pad = true;
    h.realize_naive(options, out_name, cols, rows);
  }

  std::vector<std::string> naive =
    run_regression_tb("harris_2_naive");
  std::vector<std::string> optimized =
    run_regression_tb("harris_2_opt");
  assert(naive == optimized);

  move_to_benchmarks_folder(out_name + "_opt");
}

string sharpen(App& cp, const std::string& r) {
  string bx = r + "_bx";
  string by = r + "_by";
  string bdiff = r + "_diff";
  cp.func2d(bx + "b", stencilv(0, 2, 0, 0, r));
  cp.func2d(bx, div(v(bx + "b"), 3));

  cp.func2d(by + "b", stencilv(0, 0, 0, 2, bx));
  cp.func2d(by, div(v(by + "b"), 3));

  cp.func2d(bdiff, sub(v(by), v(r)));
  return bdiff;
}

string sharpen_all_adds(App& cp, const std::string& r) {
  string bx = r + "_bx";
  string by = r + "_by";
  string bdiff = r + "_diff";
  cp.func2d(bx, add(stencilv(0, 2, 0, 0, r), 3));
  cp.func2d(by, add(stencilv(0, 0, 0, 2, bx), 3));

  cp.func2d(bdiff, add(v(by), v(r)));
  return bdiff;
}

string sharpen_all_adds_linear(App& cp, const std::string& r) {
  string bx = r + "_bx";
  string by = r + "_by";
  string bdiff = r + "_diff";
  cp.func2d(bx, add(stencilv(0, 2, 0, 0, r), 3));
  cp.func2d(by, add(stencilv(0, 0, 0, 2, bx), 3));

  cp.func2d(bdiff, add(v(by), 1));
  return bdiff;
}

App camera_pipeline_all_adds_only_denoise_demosaic(const std::string& out_name) {
  App cp;
  cp.set_default_pixel_width(16);

  cp.func2d("raw_oc");
  cp.func2d("raw", v("raw_oc"));
  cp.func2d("denoised", add(stencilv(-2, 2, -2, 2, "raw"), 25));
  cp.func2d(out_name, add(stencilv(-1, 1, -1, 1, "denoised"), 9));

  //string sharpened = sharpen_all_adds_linear(cp, "demosaic");

  //cp.func2d(out_name, add(v(sharpened), 20));
  return cp;
}

App camera_pipeline_all_adds_linear(const std::string& out_name) {
  App cp;
  cp.set_default_pixel_width(16);

  cp.func2d("raw_oc");
  cp.func2d("raw", v("raw_oc"));
  cp.func2d("denoised", add(stencilv(-2, 2, -2, 2, "raw"), 25));
  cp.func2d("demosaic", add(stencilv(-1, 1, -1, 1, "denoised"), 9));

  string sharpened = sharpen_all_adds_linear(cp, "demosaic");

  cp.func2d(out_name, add(v(sharpened), 20));
  return cp;
}

App camera_pipeline_all_adds(const std::string& out_name) {
  App cp;
  cp.set_default_pixel_width(16);

  cp.func2d("raw_oc");
  cp.func2d("raw", v("raw_oc"));
  cp.func2d("denoised", add(stencilv(-2, 2, -2, 2, "raw"), 25));
  cp.func2d("demosaic", add(stencilv(-1, 1, -1, 1, "denoised"), 9));

  string sharpened = sharpen_all_adds(cp, "demosaic");

  cp.func2d(out_name, add(v(sharpened), 20));
  return cp;
}

App camera_pipeline(const std::string& out_name) {
  App cp;
  cp.set_default_pixel_width(16);

  cp.func2d("raw_oc");
  cp.func2d("raw", v("raw_oc"));
  cp.func2d("denoiseb", stencilv(-2, 2, -2, 2, "raw"));
  cp.func2d("denoise", div(v("denoiseb"), 25));
  cp.func2d("demosaicb", stencilv(-1, 1, -1, 1, "denoise"));
  cp.func2d("demosaic", div(v("demosaicb"), 9));

  string sharpened = sharpen(cp, "demosaic");

  cp.func2d(out_name, add(v(sharpened), 20));
  return cp;
}

void generate_app_benchmark(
    const std::string& name,
    App& app,
    const std::vector<int>& dimensions,
    const int unroll_factor) {

  vector<int> mini_dimensions;
  mini_dimensions.resize(dimensions.size(), 256);

  CodegenOptions options;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  app.realize(options, name, mini_dimensions, 1);
  int bmp_res = run_sw_bmp_test_harness(name + "_opt");
  //assert(false);
  {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;
    options.unroll_factors_as_pad = true;
    app.realize_naive(options, name, mini_dimensions);
  }

  std::vector<std::string> naive =
    run_regression_tb(name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(name + "_opt");
  compare(name + " generate app benchmark mini sanity check", optimized, naive);

  app.realize(options, name, dimensions, unroll_factor);
  move_to_benchmarks_folder(name + "_opt");
}

void camera_pipeline_all_adds_only_denoise_demosaic_test(const std::string& prefix) {
  string app_name = prefix + "_mini";
  int mini_rows = 10;
  int mini_cols = 1920;
  auto hmini = camera_pipeline_all_adds_only_denoise_demosaic(app_name);
  hmini.realize_naive(app_name, mini_cols, mini_rows);
  hmini.realize(app_name, mini_cols, mini_rows, 1);

  std::vector<std::string> naive =
    run_regression_tb(app_name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(app_name + "_opt");
  assert(naive == optimized);
  move_to_benchmarks_folder(app_name + "_opt");
}

void camera_pipeline_all_adds_linear_test(const std::string& prefix) {
  string app_name = prefix + "_mini";
  int mini_rows = 10;
  int mini_cols = 1920;
  auto hmini = camera_pipeline_all_adds_linear(app_name);
  hmini.realize_naive(app_name, mini_cols, mini_rows);
  hmini.realize(app_name, mini_cols, mini_rows, 1);

  std::vector<std::string> naive =
    run_regression_tb(app_name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(app_name + "_opt");
  assert(naive == optimized);
  move_to_benchmarks_folder(app_name + "_opt");
}

void camera_pipeline_all_adds_test(const std::string& prefix) {
  string app_name = "cp_all_adds_mini";
  int mini_rows = 10;
  int mini_cols = 1920;
  auto hmini = camera_pipeline_all_adds(app_name);
  hmini.realize_naive(app_name, mini_cols, mini_rows);
  hmini.realize(app_name, mini_cols, mini_rows, 1);

  std::vector<std::string> naive =
    run_regression_tb(app_name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(app_name + "_opt");
  assert(naive == optimized);
  move_to_benchmarks_folder(app_name + "_opt");

  //int rows = 1080;
  //int cols = 1920;
  ////vector<int> factors{1, 2, 4};
  //vector<int> factors{1};
  //for (int i = 0; i < (int) factors.size(); i++) {
    //int unroll_factor = factors.at(i);
    ////cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    //string out_name = prefix + "_" + str(unroll_factor);

    //CodegenOptions options;
    //options.internal = true;
    //options.simplify_address_expressions = true;
    ////options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    //options.use_custom_code_string = false;
    //options.debug_options.expect_all_linebuffers = true;
    ////options.num_input_epochs = 30;
    //camera_pipeline_all_adds(out_name).realize(options, out_name, cols, rows, unroll_factor);

    //move_to_benchmarks_folder(out_name + "_opt");
  //}
}

void camera_pipeline_test(const std::string& prefix) {
  //string app_name = "camera_mini";
  //int mini_rows = 30;
  //int mini_cols = 100;
  //auto hmini = camera_pipeline(app_name);
  //hmini.realize_naive(app_name, mini_cols, mini_rows);
  //hmini.realize(app_name, mini_cols, mini_rows, 1);

  //std::vector<std::string> naive =
    //run_regression_tb(app_name + "_naive");
  //std::vector<std::string> optimized =
    //run_regression_tb(app_name + "_opt");
  //assert(naive == optimized);
  //move_to_benchmarks_folder(app_name + "_opt");


  int rows = 1080;
  int cols = 1920;
  //vector<int> factors{1, 2, 4};
  vector<int> factors{1, 16, 32};
  for (int i = 0; i < (int) factors.size(); i++) {
    int unroll_factor = factors.at(i);
    //cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    options.num_input_epochs = 30;
    camera_pipeline(out_name).realize(options, out_name, cols, rows, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
}

void different_path_latencies_test(const std::string& prefix) {
  int mini_size = 32;
  auto hmini = different_path_latencies(prefix);
  hmini.realize_naive(prefix, mini_size, mini_size);
  hmini.realize(prefix, mini_size, mini_size, 1);

  std::vector<std::string> naive =
    run_regression_tb(prefix + "_opt");
  std::vector<std::string> optimized =
    run_regression_tb(prefix + "_naive");
  assert(naive == optimized);
  move_to_benchmarks_folder(prefix + "_opt");
}

void harris16_test(const std::string& prefix) {
  int mini_size = 32;
  auto hmini = harris16("harris16_mini");
  hmini.realize_naive("harris16_mini", mini_size, mini_size);
  hmini.realize("harris16_mini", mini_size, mini_size, 1);

  std::vector<std::string> naive =
    run_regression_tb("harris16_mini_opt");
  std::vector<std::string> optimized =
    run_regression_tb("harris16_mini_naive");
  assert(naive == optimized);
  move_to_benchmarks_folder("harris16_mini_opt");


  //int rows = 1080;
  //int cols = 1920;
  //vector<int> factors{1, 2, 4};
  ////8, 16};
  //for (int i = 0; i < (int) factors.size(); i++) {
    //int unroll_factor = factors.at(i);
    //cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    //string out_name = prefix + "_" + str(unroll_factor);

    //CodegenOptions options;
    //options.internal = true;
    //options.simplify_address_expressions = true;
    //options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    //options.debug_options.expect_all_linebuffers = true;
    //options.num_input_epochs = 30;
    //harris16(out_name).realize(options, out_name, cols, rows, unroll_factor);

    //move_to_benchmarks_folder(out_name + "_opt");
  //}
}

void harris_test() {
  int mini_size = 32;
  auto hmini = harris("harris_mini");
  hmini.realize_naive("harris_mini", mini_size, mini_size);
  hmini.realize("harris_mini", mini_size, mini_size, 1);

  std::vector<std::string> naive =
    run_regression_tb("harris_mini_opt");
  std::vector<std::string> optimized =
    run_regression_tb("harris_mini_naive");
  assert(naive == optimized);
  move_to_benchmarks_folder("harris_mini_opt");


  //int rows = 1080;
  //int cols = 1920;
  //vector<int> factors{1, 8, 16};
  //for (int i = 0; i < (int) factors.size(); i++) {
    //int unroll_factor = factors.at(i);
    //cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    //string out_name = "hr_" + str(unroll_factor);

    //CodegenOptions options;
    //options.internal = true;
    //options.simplify_address_expressions = true;
    //options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    //options.debug_options.expect_all_linebuffers = true;
    //harris(out_name).realize(options, out_name, cols, rows, unroll_factor);

    //move_to_benchmarks_folder(out_name + "_opt");
  //}
}

App denoise3d_reconverge(const std::string& out_name) {
  App dn;
  dn.set_default_pixel_width(16);
  dn.func3d("u_oc");
  dn.func3d("f_oc");

  dn.func3d("u", v3("u_oc", 0, 0, 0));
  dn.func3d("f", v3("f_oc", 0, 0, 0));

  dn.func3d("diff_i", sub(v("u", 0, 0, 0), v("u", 0, 0, -1)));
  dn.func3d("diff_o", sub(v("u", 0, 0, 0), v("u", 0, 0, 1)));

  dn.func3d("g",
      add({sq3("diff_i"), sq3("diff_o")}));
  dn.func3d("r0", mul(v3("u"), v3("f")));
  dn.func3d("r1", sq3("r0"));
  dn.func3d(out_name,
      add({v3("u", 0, 0, 0), v3("g", 1, 0, 0), v3("r1", 0, 0, 0)}));

  return dn;
}

App denoise3d(const std::string& out_name) {
  App dn;
  dn.set_default_pixel_width(16);
  dn.func3d("u_oc");
  dn.func3d("f_oc");

  dn.func3d("u", v3("u_oc", 0, 0, 0));
  dn.func3d("f", v3("f_oc", 0, 0, 0));

  dn.func3d("diff_u", sub(v("u", 0, 0, 0), v("u", 0, -1, 0)));
  dn.func3d("diff_d", sub(v("u", 0, 0, 0), v("u", 0, 1, 0)));
  dn.func3d("diff_l", sub(v("u", 0, 0, 0), v("u", -1, 0, 0)));
  dn.func3d("diff_r", sub(v("u", 0, 0, 0), v("u", 1, 0, 0)));
  dn.func3d("diff_i", sub(v("u", 0, 0, 0), v("u", 0, 0, -1)));
  dn.func3d("diff_o", sub(v("u", 0, 0, 0), v("u", 0, 0, 1)));

  dn.func3d("g",
      add({sq3("diff_u"), sq3("diff_d"), sq3("diff_l"), sq3("diff_r"), sq3("diff_i"), sq3("diff_o")}));

  dn.func3d("r0", mul(v3("u"), v3("f")));
  dn.func3d("r1", sq3("r0"));
  dn.func3d(out_name,
      add({v3("u", 0, 0, 0), v3("g", 1, 0, 0), v3("r1", 0, 0, 0)}));

  //dn.func3d(out_name,
      //add({v3("u", 0, 0, 0), v3("u", 1, 0, 0), v3("g", 1, 0, 0), v3("u", -1, 0, 0), v3("g", -1, 0, 0),
        //v3("u", 0, 1, 0), v3("g", 0, 1, 0), v3("u", 0, -1, 0), v3("g", 0, -1, 0), v3("u", 0, 0, 1), v3("g", 0, 0, 1),
        //v3("u", 0, 0, -1), v3("g", 0, 0, -1), v3("f", 0, 0, 0), v3("r1", 0, 0, 0),
        //v3("g", 1, 0, 0), v3("g", -1, 0, 0), v3("g", 0, 1, 0), v3("g", 0, -1, 0), v3("g", 0, 0, 1), v3("g", 0, 0, -1)}));

  return dn;
}

void denoise3d_reconvergence_test() {
  string name = "dn_reconv";
  int mini_size = 8;
  auto hmini = denoise3d_reconverge(name);
  hmini.realize_naive(name, {mini_size, mini_size, mini_size});

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  //options.all_rams = true;
  //options.debug_options.expect_all_linebuffers = true;
  hmini.realize(options, name, {mini_size, mini_size, mini_size}, 1);

  std::vector<std::string> naive =
    run_regression_tb(name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(name + "_opt");
  assert(naive == optimized);
  move_to_benchmarks_folder(name + "_opt");
}

void denoise3d_test() {
  int mini_size = 8;
  auto hmini = denoise3d("dn3d_mini");
  hmini.realize_naive("dn3d_mini", {mini_size, mini_size, mini_size});

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  //options.debug_options.expect_all_linebuffers = true;
  hmini.realize(options, "dn3d_mini", {mini_size, mini_size, mini_size}, 1);

  std::vector<std::string> naive =
    run_regression_tb("dn3d_mini_naive");
  std::vector<std::string> optimized =
    run_regression_tb("dn3d_mini_opt");
  assert(naive == optimized);
  move_to_benchmarks_folder("dn3d_mini_opt");



  int rows = 32;
  int cols = 32;
  int channels = 32;
  vector<int> factors{1, 8, 16};
  for (int i = 0; i < (int) factors.size(); i++) {
    int unroll_factor = factors.at(i);
    cout << tab(1) << "denoise3d unroll factor: " << unroll_factor << endl;
    string out_name = "dn3d_" + str(unroll_factor);

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    denoise3d(out_name).realize(options, out_name, {cols, rows, channels}, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
}

App max_pooling(const std::string& out_name) {
  App mp;
  mp.set_default_pixel_width(16);
  mp.func3d("in_oc");
  mp.func3d("in", "id", pt3("in_oc"));
  Window max_win{"in", {qconst(2), qconst(2), qconst(1)}, {{0, 0, 0}, {1, 0, 0}, {0, 1, 0}, {1, 1, 0}}};
  mp.func3d(out_name, "max_pool_2x2", {max_win});

  return mp;
}

void max_pooling_test_sizes(const std::string& prefix) {
  int W = 8;
  int H = 8;
  int D = 4;

  int factor = 1;
  string name = prefix + "_" + str(factor);
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    max_pooling(name).realize(options, name, {H, W, D}, "in", factor);
  }
  {
    CodegenOptions options;
    options.internal = true;
    options.num_input_epochs = 1;
    options.simplify_address_expressions = true;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_ISL;
    max_pooling(name).realize_naive(options, name, {H, W, D});
  }
  move_to_benchmarks_folder(name + "_opt");
  move_naive_to_benchmarks_folder(name);
}

void gauss_pyramid_test(const std::string& prefix) {

  int in_rows = 1080;
  int in_cols = 1920;

  int rows = 1080 / pow(2, 4 - 1);
  int cols = 1920 / pow(2, 4 - 1);
  //vector<int> unroll_factors{1, 2, 4, 8, 16, 32};
  vector<int> unroll_factors{32};
  for (auto factor : unroll_factors) {
    string name = prefix + "_" + str(factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;

    gauss_pyramid_fpga(name).realize(options, name, {cols, rows}, "in", factor);
    move_to_benchmarks_folder(name + "_opt");
  }

  //CodegenOptions options;
  //options.internal = true;
  //options.all_rams = true;
  //options.unroll_factors_as_pad = true;
  //max_pooling("mp_naive").realize_naive(options, "mp_naive", {H, W, D});
  //move_to_benchmarks_folder("mp_naive");

  //std::vector<std::string> naive =
    //run_regression_tb("max_pool_opt");
  //std::vector<std::string> optimized =
    //run_regression_tb("max_pool_naive");
  //assert(naive == optimized);
}
void max_pooling_test(const std::string& prefix) {
  int W = 64;
  int H = 64;
  int D = 64;

  vector<int> unroll_factors{1, 2, 4, 8, 16, 32};
  //vector<int> unroll_factors{32};
  for (auto factor : unroll_factors) {
    string name = prefix + "_" + str(factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;

    max_pooling(name).realize(options, name, {H, W, D}, "in", factor);
    move_to_benchmarks_folder(name + "_opt");
  }

  //CodegenOptions options;
  //options.internal = true;
  //options.all_rams = true;
  //options.unroll_factors_as_pad = true;
  //max_pooling("mp_naive").realize_naive(options, "mp_naive", {H, W, D});
  //move_to_benchmarks_folder("mp_naive");

  //std::vector<std::string> naive =
    //run_regression_tb("max_pool_opt");
  //std::vector<std::string> optimized =
    //run_regression_tb("max_pool_naive");
  //assert(naive == optimized);
}

App gauss_pyramid_fpga(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", "id", pt("in_off_chip"));

  int pyramid_levels = 4;

  auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "in", lp);

  lp.func2d(out_name, "id", pt(dark_weight_pyramid.back()));

  return lp;
}

App ef_cartoon(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", "id", pt("in_off_chip"));

  // Two synthetic exposures
  lp.func2d("bright", "id", pt("in"));
  lp.func2d("dark", "scale_exposure", pt("in"));

  lp.func2d("bright_weights", "psef_weight", pt("bright"));
  lp.func2d("dark_weights", "psef_weight", pt("dark"));

  lp.func2d("bright_weights_normed", "psef_normalize_weights", {pt("bright_weights")});
  lp.func2d("dark_weights_normed", "psef_normalize_weights", {pt("dark_weights")});

  int pyramid_levels = 4;

  auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "dark_weights_normed", lp);
  auto bright_weight_pyramid = gauss_pyramid(pyramid_levels, "bright_weights_normed", lp);

  auto dark_pyramid = laplace_pyramid(pyramid_levels, "dark", lp);
  auto bright_pyramid = laplace_pyramid(pyramid_levels, "bright", lp);

  vector<string> merged_images;
  for (int i = 0; i < dark_pyramid.size(); i++) {
    string fused = "fused_level_" + str(i);
    lp.func2d(fused, "psef_weighted_merge", {pt(bright_pyramid.at(i)), pt(dark_pyramid.at(i)),
        pt(bright_weight_pyramid.at(i)), pt(dark_weight_pyramid.at(i))});
    merged_images.push_back(fused);
  }

  // Collapse the blended pyramid into a single image
  assert(merged_images.size() == pyramid_levels);

  string image = merged_images.back();
  for (int i = merged_images.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    //lp.func2d(merged_level, "average", {upsample(2, image), pt(merged_images.at(i))});
    lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    image = merged_level;
  }

  lp.func2d(out_name, "id", pt(image));

  //lp.func2d(out_name, "average", {pt("bright"), pt("dark")});
  return lp;
}

void weight_add_exposure_fusion_app(
    const std::string& in_name,
    const std::string& out_name,
    App& lp) {

  const int pyramid_levels = 4;

  lp.func2d("in", "id", pt(in_name));

  // Two synthetic exposures
  lp.func2d("bright", "id", pt("in"));
  lp.func2d("dark", "scale_exposure", pt("in"));

  // Compute weights which measure the "quality" of
  // pixels in each image
  lp.func2d("bright_weights", "exposure_weight", pt("bright"));
  lp.func2d("dark_weights", "exposure_weight", pt("dark"));

  // Normalize weights so that the weight matrices entries sum to one
  lp.func2d("weight_sums", "add", {pt("dark_weights"), pt("bright_weights")});
  lp.func2d("bright_weights_normed", "f_divide", pt("bright_weights"), pt("weight_sums"));
  lp.func2d("dark_weights_normed", "f_divide", pt("dark_weights"), pt("weight_sums"));

  string fused = "fused_level_" + str((int) 0);
  lp.func2d(fused, "merge_exposures", {pt("bright"), pt("dark"),
      pt("bright_weights_normed"), pt("dark_weights_normed")});

  //int n_levels = 2;
  //// Create pyramids of the weights
  //auto dark_weight_pyramid = gauss_pyramid(n_levels, "dark_weights_normed", lp);
  //auto bright_weight_pyramid = gauss_pyramid(n_levels, "bright_weights_normed", lp);

  //// Create laplacian pyramids of the synthetic exposures
  //auto dark_pyramid = laplace_pyramid(n_levels, "dark", lp);
  //auto bright_pyramid = laplace_pyramid(n_levels, "bright", lp);

  //// Merge weighted pyramids
  //vector<string> merged_images;
  //for (int i = 0; i < dark_pyramid.size(); i++) {
    //string fused = "fused_level_" + str(i);
    //lp.func2d(fused, "merge_exposures", {pt(bright_pyramid.at(i)),
        //pt(dark_pyramid.at(i)), pt(bright_weight_pyramid.at(i)), pt(dark_weight_pyramid.at(i))});
    //merged_images.push_back(fused);
  //}

  //// Collapse the blended pyramid into a single image
  //assert(merged_images.size() == n_levels);
  //string image = merged_images.back();
  //for (int i = merged_images.size() - 2; i >= 0; i--) {
    //string merged_level = "final_merged_" + str(i);
    //lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    //image = merged_level;
  //}

  lp.func2d(out_name, "id", pt(fused));
}

void two_level_exposure_fusion_app(
    const std::string& in_name,
    const std::string& out_name,
    App& lp) {

  lp.func2d("in", "id", pt(in_name));

  // Two synthetic exposures
  lp.func2d("bright", "id", pt("in"));
  lp.func2d("dark", "scale_exposure", pt("in"));

  // Compute weights which measure the "quality" of
  // pixels in each image
  lp.func2d("bright_weights", "exposure_weight", pt("bright"));
  lp.func2d("dark_weights", "exposure_weight", pt("dark"));

  // Normalize weights so that the weight matrices entries sum to one
  lp.func2d("weight_sums", "add", {pt("dark_weights"), pt("bright_weights")});
  lp.func2d("bright_weights_normed", "f_divide", pt("bright_weights"), pt("weight_sums"));
  lp.func2d("dark_weights_normed", "f_divide", pt("dark_weights"), pt("weight_sums"));


  int n_levels = 2;
  // Create pyramids of the weights
  auto dark_weight_pyramid = gauss_pyramid(n_levels, "dark_weights_normed", lp);
  auto bright_weight_pyramid = gauss_pyramid(n_levels, "bright_weights_normed", lp);

  // Create laplacian pyramids of the synthetic exposures
  auto dark_pyramid = laplace_pyramid(n_levels, "dark", lp);
  auto bright_pyramid = laplace_pyramid(n_levels, "bright", lp);

  // Merge weighted pyramids
  vector<string> merged_images;
  for (int i = 0; i < dark_pyramid.size(); i++) {
    string fused = "fused_level_" + str(i);
    lp.func2d(fused, "merge_exposures", {pt(bright_pyramid.at(i)),
        pt(dark_pyramid.at(i)), pt(bright_weight_pyramid.at(i)), pt(dark_weight_pyramid.at(i))});
    merged_images.push_back(fused);
  }

  // Collapse the blended pyramid into a single image
  assert(merged_images.size() == n_levels);
  string image = merged_images.back();
  for (int i = merged_images.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    image = merged_level;
  }

  lp.func2d(out_name, "id", pt(image));
}

void exposure_fusion_app(
    const std::string& in_name,
    const std::string& out_name,
    App& lp) {

  lp.func2d("in", "id", pt(in_name));

  const int pyramid_levels = 4;

  // Two synthetic exposures
  lp.func2d("bright", "id", pt("in"));
  lp.func2d("dark", "scale_exposure", pt("in"));

  // Compute weights which measure the "quality" of
  // pixels in each image
  lp.func2d("bright_weights", "exposure_weight", pt("bright"));
  lp.func2d("dark_weights", "exposure_weight", pt("dark"));

  // Normalize weights so that the weight matrices entries sum to one
  lp.func2d("weight_sums", "add", {pt("dark_weights"), pt("bright_weights")});
  lp.func2d("bright_weights_normed", "f_divide", pt("bright_weights"), pt("weight_sums"));
  lp.func2d("dark_weights_normed", "f_divide", pt("dark_weights"), pt("weight_sums"));


  // Create pyramids of the weights
  auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "dark_weights_normed", lp);
  auto bright_weight_pyramid = gauss_pyramid(pyramid_levels, "bright_weights_normed", lp);

  // Create laplacian pyramids of the synthetic exposures
  auto dark_pyramid = laplace_pyramid(pyramid_levels, "dark", lp);
  auto bright_pyramid = laplace_pyramid(pyramid_levels, "bright", lp);

  // Merge weighted pyramids
  vector<string> merged_images;
  for (int i = 0; i < dark_pyramid.size(); i++) {
    string fused = "fused_level_" + str(i);
    lp.func2d(fused, "merge_exposures", {pt(bright_pyramid.at(i)),
        pt(dark_pyramid.at(i)), pt(bright_weight_pyramid.at(i)), pt(dark_weight_pyramid.at(i))});
    merged_images.push_back(fused);
  }

  // Collapse the blended pyramid into a single image
  assert(merged_images.size() == pyramid_levels);
  string image = merged_images.back();
  for (int i = merged_images.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    image = merged_level;
  }

  lp.func2d(out_name, "id", pt(image));
}

App exposure_fusion_app(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  lp.func2d("in_off_chip");

  exposure_fusion_app("in_off_chip", out_name, lp);

  // The temporary buffer we store the input image in
  return lp;
}

void ef_cartoon_iccad_unrolls(const std::string& prefix) {
  vector<int> throughputs{1, 2, 4, 8, 16, 32};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = ef_cartoon(name);
    int rows = 1080;
    int cols = 1920;
    lp.realize(name, cols, rows, throughput);
    move_to_benchmarks_folder(name + "_opt");
    move_naive_to_benchmarks_folder(name);
  }
}

void ef_cartoon_fusion_iccad_sizes(const std::string& prefix) {
  vector<pair<int, int> > sizes{{16, 16}, {256, 256}, {1280, 720}, {1920, 1080}};
  for (auto dims : sizes) {
    int cols = dims.first;
    int rows = dims.second;

    string name = prefix + "_" + str(cols) + "_" + str(rows);
    {
      App lp = ef_cartoon(name);
      CodegenOptions options;
      options.internal = true;
      options.num_input_epochs = 1;
      options.simplify_address_expressions = true;
      lp.realize(options, name, cols, rows, 1);
    }

    {
      App lp = ef_cartoon(name);
      CodegenOptions options;
      options.internal = true;
      options.num_input_epochs = 1;
      options.simplify_address_expressions = true;
      options.scheduling_algorithm = SCHEDULE_ALGORITHM_ISL;
      lp.realize_naive(options, name, cols, rows);
    }
    std::vector<std::string> naive =
      run_regression_tb(name + "_naive");
    cout << "Naive    : " << naive << endl;
    std::vector<std::string> optimized =
      run_regression_tb(name + "_opt");
    cout << "Optimized: " << optimized << endl;
    assert(naive == optimized);
    move_to_benchmarks_folder(name + "_opt");
    move_naive_to_benchmarks_folder(name);
  }
}

void exposure_fusion_iccad_sizes(const std::string& prefix) {
  vector<pair<int, int> > sizes{{16, 16}, {256, 256}, {1280, 720}, {1920, 1080}};
  for (auto dims : sizes) {
    int cols = dims.first;
    int rows = dims.second;

    string name = prefix + "_" + str(cols) + "_" + str(rows);
    {
      App lp = exposure_fusion_app(name);
      CodegenOptions options;
      options.internal = true;
      options.num_input_epochs = 1;
      options.simplify_address_expressions = true;
      lp.realize(options, name, cols, rows, 1);
    }

    {
      App lp = exposure_fusion_app(name);
      CodegenOptions options;
      options.internal = true;
      options.num_input_epochs = 1;
      options.simplify_address_expressions = true;
      options.scheduling_algorithm = SCHEDULE_ALGORITHM_ISL;
      lp.realize_naive(options, name, cols, rows);
    }
    std::vector<std::string> naive =
      run_regression_tb(name + "_naive");
    cout << "Naive    : " << naive << endl;
    std::vector<std::string> optimized =
      run_regression_tb(name + "_opt");
    cout << "Optimized: " << optimized << endl;
    assert(naive == optimized);
    move_to_benchmarks_folder(name + "_opt");
  }
}

App increment_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  lp.func2d(out_name, add(v("in"), 1));

  return lp;
}

App identity_stream_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  lp.func2d(out_name, v("in"));

  return lp;
}

App stencil_chain_fan_out(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 5;
  string last0 = "in";
  string last1 = "in";
  string last2 = "in";
  for (int i = 0; i < levels; i++) {
    {
      string current = "f0" + str(i);
      lp.func2d(current,
          div(add({
              v(last0, 0, 1),
              v(last0, 1, 0),
              v(last0, 0, 0),
              v(last0, -1, 0),
              v(last0, 0, -1)}), 5));
      last0 = current;
    }
    {
      string current = "f1" + str(i);
      lp.func2d(current,
          div(add({
              v(last1, 0, 1),
              v(last1, 1, 0),
              v(last1, 0, 0),
              v(last1, -1, 0),
              v(last1, 0, -1)}), 5));
      last1 = current;
    }
    {
      string current = "f2" + str(i);
      lp.func2d(current,
          div(add({
              v(last2, 0, 1),
              v(last2, 1, 0),
              v(last2, 0, 0),
              v(last2, -1, 0),
              v(last2, 0, -1)}), 5));
      last2 = current;
    }
  }

  lp.func2d("final", div(add({v(last0, 0, 0), v(last1, 0, 0), v(last2, 0, 0)}), 3));
  lp.func2d(out_name, v("final"));

  return lp;
}

App stencil_chain_eight_stage_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 8;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      div(add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}), 5));
    last = current;
  }

  lp.func2d(out_name, v(last));

  return lp;
}

App stencil_chain_five_stage_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 5;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      div(add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}), 5));
    last = current;
  }

  lp.func2d(out_name, v(last));

  return lp;
}
App stencil_chain_one_stage_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 1;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      //(add({
        //v(last, 0, 1),
        //v(last, 1, 0),
        //v(last, 0, 0),
        //v(last, -1, 0),
        //v(last, 0, 1)})));

      //mul(v(last, 0, 0), 5));

      mul(add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}), 5));

      //div(add({
        //v(last, 0, 1),
        //v(last, 1, 0),
        //v(last, 0, 0),
        //v(last, -1, 0),
        //v(last, 0, 1)}), 5));
    last = current;
  }

  lp.func2d(out_name, v(last));

  return lp;
}

App stencil_chain_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 10;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      div(add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}), 5));
    last = current;
  }
  //auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "in", lp);

  lp.func2d(out_name, v(last));

  return lp;
}

App stencil_chain_stage_iccad(const std::string& out_name, const int levels) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      div(add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}), 5));
    last = current;
  }
  //auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "in", lp);

  lp.func2d(out_name, v(last));

  return lp;
}
App stencil_chain_20_stage_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 20;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      div(add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}), 5));
    last = current;
  }
  //auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "in", lp);

  lp.func2d(out_name, v(last));

  return lp;
}

App stencil_chain_no_dsp_long_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 20;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}));
    last = current;
  }

  lp.func2d(out_name, v(last));

  return lp;
}

App stencil_chain_no_dsp_iccad(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", v("in_off_chip"));

  int levels = 10;
  string last = "in";
  for (int i = 0; i < levels; i++) {
    string current = "stg" + str(i);
    lp.func2d(current,
      add({
        v(last, 0, 1),
        v(last, 1, 0),
        v(last, 0, 0),
        v(last, -1, 0),
        v(last, 0, 1)}));
    last = current;
  }
  //auto dark_weight_pyramid = gauss_pyramid(pyramid_levels, "in", lp);

  lp.func2d(out_name, v(last));

  return lp;
}

void increment_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = increment_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void identity_stream_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = identity_stream_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_no_dsp_long_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_no_dsp_long_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_no_dsp_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_no_dsp_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_fan_out_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_fan_out(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_eight_stage_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_eight_stage_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_five_stage_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_five_stage_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_one_stage_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_one_stage_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

App heat_3d_real_iccad(const std::string& out_name, const int num_stages) {
  App dn;
  dn.set_default_num_type(NUM_TYPE_FLOAT);

  dn.func3d("in");

  dn.func3d("in_cc", v3("in", 0, 0, 0));

  //int num_stages = 1;
  string last = "in_cc";
  for (int i = 0; i < num_stages; i++) {
    string current = "h3_" + str(i);
//.125f * (in(1, 0, 0) - 2.f * in(0, 0, 0) + in(-1,  0,  0)) +
    //.125f * (in(0, 1, 0) - 2.f * in(0, 0, 0) + in( 0, -1,  0)) +
    //.125f * (in(0, 0, 1) - 2.f * in(0, 0, 0) + in( 0,  0, -1)) +
    //in(0, 0, 0)
    dn.func3d(current,
        add({
          mul(fc("0.125"), v3(last, 1, 0, 0)), mul(fc("-0.125"), v3(last, 0, 0, 0)), mul(fc("0.125"), v3(last, -1, 0, 0)),
          mul(fc("0.125"), v3(last, 0, 1, 0)), mul(fc("-0.125"), v3(last, 0, 0, 0)), mul(fc("0.125"), v3(last, 0, -1, 0)),
          mul(fc("0.125"), v3(last, 0, 0, 1)), mul(fc("-0.125"), v3(last, 0, 0, 0)), mul(fc("0.125"), v3(last, 0, 0, -1)),
          v3(last, 0, 0, 0)
          }));
    last = current;
  }

  dn.func3d(out_name, v3(last, 0, 0, 0));

  return dn;
}

App heat_3d_iccad(const std::string& name) {
  App dn;
  dn.set_default_num_type(NUM_TYPE_FLOAT);

  dn.func2d("in");

  dn.func2d("in_cc", v("in"));

  int num_stages = 1;
  string last = "in_cc";
  for (int i = 0; i < num_stages; i++) {
    string current = "h3_" + str(i);
    dn.func2d(current,
        add({
          mul(fc("0.125"), v(last, 1, 0)),
          mul(fc("0.125"), v(last, -1, 0)),
          mul(fc("0.125"), v(last, 0, 1)),
          mul(fc("0.125"), v(last, 0, -1)),
          mul(fc("0.25"), v(last, 0, 0))
          }));
    last = current;
  }

  dn.func2d(name, v(last));

  return dn;
}

App float_big_stencil_iccad(const std::string& name, const int num_stages) {
  App dn;
  dn.set_default_num_type(NUM_TYPE_FLOAT);

  dn.func2d("in");

  dn.func2d("in_cc", v("in"));
  dn.func2d(name, add({mul(fc("0.125"), v("in_cc", 0, 0)),
        mul(fc("0.125"), v("in_cc", 0, -1)),
        mul(fc("0.125"), v("in_cc", 0, -2))}));

  return dn;
}

App float_stencil_iccad(const std::string& name) {
  App dn;
  dn.set_default_num_type(NUM_TYPE_FLOAT);

  dn.func2d("in");

  dn.func2d("in_cc", v("in"));
  dn.func2d(name, add({mul(fc("0.125"), v("in_cc", 0, 0)),
        mul(fc("0.125"), v("in_cc", 0, -1))}));

  return dn;
}

App float_add_iccad(const std::string& name) {
  App dn;
  dn.set_default_num_type(NUM_TYPE_FLOAT);

  dn.func2d("in");

  dn.func2d("in_cc", v("in"));
  dn.func2d(name, add({fc("0.125"), v("in_cc", 0, 0)}));

  return dn;
}

void float_stencil_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  //vector<int> throughputs{32};
  //vector<int> throughputs{16};
  //vector<int> throughputs{2, 4, 8, 12};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = float_stencil_iccad(name);
    int rows = 32;
    int cols = 32;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);

}

void float_add_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  //vector<int> throughputs{32};
  //vector<int> throughputs{16};
  //vector<int> throughputs{2, 4, 8, 12};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = float_add_iccad(name);
    int rows = 32;
    int cols = 32;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);

}

void float_big_stencil_iccad_apps(const std::string& prefix, const int num_stages) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  //vector<int> throughputs{32};
  //vector<int> throughputs{16};
  //vector<int> throughputs{2, 4, 8, 12};
  //vector<int> throughputs{1, 8, 16};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = float_big_stencil_iccad(name, num_stages);
    int rows = 32;
    int cols = 32;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);

}
void heat_3d_real_iccad_apps(const std::string& prefix, const int num_stages) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  //vector<int> throughputs{32};
  //vector<int> throughputs{16};
  //vector<int> throughputs{2, 4, 8, 12};
  //vector<int> throughputs{1, 8, 16};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = heat_3d_real_iccad(name, num_stages);
    int rows = 128;
    int cols = 128;
    int channels = 32;
    CodegenOptions options;
    options.internal = true;
    options.num_input_epochs = 1;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows, channels}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);

}

void heat_3d_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  //vector<int> throughputs{32};
  //vector<int> throughputs{16};
  //vector<int> throughputs{2, 4, 8, 12};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = heat_3d_iccad(name);
    int rows = 32;
    int cols = 32;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);

}

void stencil_chain_12_stage_iccad_apps(const std::string& prefix) {
  //vector<int> throughputs{1, 16, 32};
  vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_stage_iccad(name, 12);
    int rows = 10;
    int cols = 19;
    //int rows = 1080;
    //int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}
void stencil_chain_15_stage_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_stage_iccad(name, 15);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    //options.rtl_options.hls_clock_target_Hz = 300000000;
    options.rtl_options.hls_clock_target_Hz = 275000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}
void stencil_chain_20_stage_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_20_stage_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 300000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void stencil_chain_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 16, 32};
  //vector<int> throughputs{1};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = stencil_chain_iccad(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.rtl_options.hls_clock_target_Hz = 500000000;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  assert(false);
}

void gauss_pyramid_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 2, 4, 8, 16};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = gauss_pyramid_fpga(name);
    int rows = 1080 / pow(2, 4 - 1);
    int cols = 1920 / pow(2, 4 - 1);
    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, {cols, rows}, "in", throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  //assert(false);
}

void exposure_fusion_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1};
  //, 2, 4, 8, 16};
  //vector<int> throughputs{1, 2, 4, 8, 16};
  //vector<int> throughputs{16};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = exposure_fusion_app(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    lp.realize(options, name, cols, rows, throughput);

    move_to_benchmarks_folder(name + "_opt");
  }
  //assert(false);
}

void exposure_fusion_fpga_test(const std::string& name) {

  int in_rows = 1080;
  int in_cols = 1920;

  int rows = 1080;
  int cols = 1920;
  App gp = exposure_fusion_app(name);
  //gp.realize(name, cols, rows);
  ////move_to_benchmarks_folder("pyramid_synthetic_exposure_fusion_opt");

  ////lp.realize("pyramid_synthetic_exposure_fusion", size, size, 4);

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;
  gp.realize_naive(options, name, cols, rows);

  //std::vector<std::string> optimized =
    //run_regression_tb("out_opt");
  //std::vector<std::string> naive =
    //run_regression_tb(name + "_naive");
  //compare("exposure fusion naive", naive, optimized);
  move_to_benchmarks_folder(name + "_naive");
}

void gauss_pyramid_fpga_test(const std::string& name) {

  int in_rows = 1080;
  int in_cols = 1920;

  int rows = 1080 / pow(2, 4 - 1);
  int cols = 1920 / pow(2, 4 - 1);
  App gp = gauss_pyramid_fpga(name);
  gp.realize(name, cols, rows);
  ////move_to_benchmarks_folder("pyramid_synthetic_exposure_fusion_opt");

  ////lp.realize("pyramid_synthetic_exposure_fusion", size, size, 4);

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  //options.unroll_factors_as_pad = true;
  gp.realize_naive(options, name, cols, rows);

  //std::vector<std::string> optimized =
    //run_regression_tb("out_opt");
  //std::vector<std::string> naive =
    //run_regression_tb(name + "_naive");
  //compare("gp naive", naive, optimized);
  move_to_benchmarks_folder(name + "_naive");
  //assert(false);
}

void exposure_fusion() {

  App lp = exposure_fusion_app("pyramid_synthetic_exposure_fusion");
  int size =
    128;
    //1250;
    //200;

  //auto isl_sched = lp.realize_isl_schedule("pyramid_synthetic_exposure_fusion", size, size, 1);
  //auto isl_maps = get_maps(isl_sched);

  //auto opt_sched = lp.realize_opt_schedule("pyramid_synthetic_exposure_fusion", size, size, 1);
  ////auto dom = domain(opt_sched);
  ////opt_sched = unn_domain(opt_sched, isl_union_set_universe(cpy(dom)));
  //auto opt_maps = get_maps(opt_sched);

  //cout << "--- ISL Schedule" << endl;
  //for (auto m : isl_maps) {
    //cout << tab(1) << str(m) <<  endl;
  //}
  //cout << endl << endl;

  //cout << "--- OPT Schedule" << endl;
  //for (auto m : opt_maps) {
    //cout << tab(1) << str(m) <<  endl;
  //}
  //cout << endl << endl;

  //assert(isl_maps.size() == opt_maps.size());
  //cout << "--- MATCHED Schedules" << endl;
  //for (auto opt : opt_maps) {
    //isl_map* imap = nullptr;
    //for (auto isl : isl_maps) {
      //if (domain_name(isl) == domain_name(opt)) {
        //imap = isl;
        //break;
      //}
    //}
    //assert(imap != nullptr);

    //cout << tab(1) << "opt: " << str(opt) << endl;
    //cout << tab(1) << "isl: " << str(imap) << endl;
    //cout << endl;
  //}


  lp.realize("pyramid_synthetic_exposure_fusion", size, size, 1);
  //move_to_benchmarks_folder("pyramid_synthetic_exposure_fusion_opt");

  //lp.realize("pyramid_synthetic_exposure_fusion", size, size, 4);

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;
  lp.realize_naive(options, "pyramid_synthetic_exposure_fusion", size, size);

  std::vector<std::string> naive =
    run_regression_tb("pyramid_synthetic_exposure_fusion_naive");
  std::vector<std::string> optimized =
    run_regression_tb("pyramid_synthetic_exposure_fusion_opt");
  assert(naive == optimized);
}

void laplacian_pyramid_app_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", pt("in_off_chip"));

  int n_levels = 4;
  string last = "in";
  vector<string> gauss_levels;
  gauss_levels.push_back("in");
  for (int l = 1; l < n_levels + 1; l++) {
    string next_blur = "gauss_blur_" + str(l);
    string next_out = "gauss_ds_" + str(l);

    vector<vector<int > > offsets;
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
        offsets.push_back({c, r});
      }
    }

    Window blur_window{last, {qconst(1), qconst(1)}, offsets};
    lp.func2d(next_blur, "reduce_gauss", blur_window);
    lp.func2d(next_out, "id", next_blur, {qconst(2), qconst(2)}, {{0, 0}});

    last = next_out;
    gauss_levels.push_back(last);
  }

  assert(gauss_levels.size() == n_levels + 1);

  vector<string> laplace_levels;
  for (int l = 0; l < n_levels; l++) {
    string larger_image = gauss_levels.at(l);
    string smaller_image = gauss_levels.at(l + 1);

    string next_us = "laplace_us_" + str(l);
    string next_out = "laplace_diff_" + str(l);

    // Upsample the image
    lp.func2d(next_us, "id", smaller_image, {qconst(1, 2), qconst(1, 2)}, {{0, 0}});

    Window ad{larger_image, {qconst(1), qconst(1)}, {{0, 0}}};
    Window ud{next_us, {qconst(1), qconst(1)}, {{0, 0}}};
    lp.func2d(next_out, "diff", {ad, ud});

    last = next_out;
    laplace_levels.push_back(last);
  }

  vector<Window> blended;
  int level_num = 0;
  for (auto l : laplace_levels) {
    Window lw = pt(l);
    int factor = pow(2, level_num);
    string blend_us = "blend_us_" + l;
    lp.func2d(blend_us, "id", l, {qconst(1, factor), qconst(1, factor)}, {{0, 0}});
    blended.push_back(pt(blend_us));
    level_num++;
  }

  lp.func2d("blended", "blend_levels", blended);

  int size = 32;
  lp.realize("blended", size, size, 1);
  lp.realize_naive("blended", size, size);

  std::vector<std::string> naive =
    run_regression_tb("blended_naive");
  std::vector<std::string> optimized =
    run_regression_tb("blended_opt");
  assert(naive == optimized);


}

App gaussian_pyramid_app(const std::string& out_name, const int n_levels) {
  App gp;
  gp.set_default_pixel_width(16);

  gp.func2d("in_off_chip");
  gp.func2d("in", "id", pt("in_off_chip"));
  //int n_levels = 3
  string last = "in";
  for (int l = 0; l < n_levels; l++) {
    string next = "level_" + to_string(l);
    vector<vector<int > > offsets;
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
        offsets.push_back({c, r});
      }
    }
    Window last_window{last, {qconst(2), qconst(2)}, offsets};
    gp.func2d(next, "reduce_gauss", last_window);
    last = next;
  }


  gp.func2d(out_name, "id", pt(last));
  return gp;
}

void single_gaussian_pyramid_app_test() {
  string name = "gp";

  App gp = gaussian_pyramid_app(name, 4);
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    gp.realize(options, name, 4, 4, 2);
  }

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;
  gp.realize_naive(options, name, 4, 4);

  std::vector<std::string> naive =
    run_regression_tb(name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(name + "_opt");
  assert(naive == optimized);
}

void ef_cartoon_test(const std::string& out_name) {
  App gp = ef_cartoon(out_name);
  //int size = 200;
  int cols = 1920;
  int rows = 1080;
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    gp.realize(options, out_name, {cols, rows}, "in", 32);
    move_naive_to_benchmarks_folder(out_name + "_opt");
  }
  //{
    //CodegenOptions options;
    //options.internal = true;
    //options.simplify_address_expressions = true;
    //options.use_custom_code_string = false;
    //options.scheduling_algorithm = SCHEDULE_ALGORITHM_ISL;
    //gp.realize_naive(options, out_name, {cols, rows});
    ////move_to_benchmarks_folder(out_name + "_opt");
  //}
}


void gaussian_pyramid_app_test(const std::string& prefix) {
  cout << "Starting gaussian pyramid test" << endl;
  string name = "gp";
  App gp = gaussian_pyramid_app(name, 3);
  int size = 64;
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    gp.realize(options, name, {size, size}, "in", 2);
  }

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;
  gp.realize_naive(options, name, size, size);

  cout << "Running naive " << name << endl;
  std::vector<std::string> naive =
    run_regression_tb(name + "_naive");

  cout << "Running optimized " << name << endl;
  std::vector<std::string> optimized =
    run_regression_tb(name + "_opt");
  assert(naive == optimized);

  //assert(false);

  vector<int> unroll_factors{1, 2, 4, 8, 16, 32};
  for (auto factor : unroll_factors) {
    string name = prefix + "_" + str(factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;

    gaussian_pyramid_app(name, 4).realize(options, name, {64, 64}, "in", factor);
    move_to_benchmarks_folder(name + "_opt");
    if (factor == 16) {
    }
  }

}

App sobel_mag_x() {
  App sobel;
  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  sobel.func2d("mag_x", "sobel_mx", "img", {1, 1},
      {{-1, -1}, {-1, 0}, {-1, 1}, {1, -1}, {1, 0}, {1, 1}});
      //{{1, -1}, {-1, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}});

  return sobel;
}

App sobel_mag_y() {
  App sobel;
  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  sobel.func2d("mag_y", "sobel_my", "img", {1, 1},
      {{-1, -1}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 1}});

  return sobel;
}

App blur_x_16_simp(const std::string output_name) {
  App blur;
  blur.set_default_pixel_width(16);
  blur.func2d("input_arg");
  blur.func2d("input", v("input_arg"));
  blur.func2d(output_name, add(v("input", 0, 0), v("input", 1, 0), v("input", 2, 0)));

  return blur;
}


App blur_x_16(const std::string output_name) {
  App blur;
  blur.set_default_pixel_width(16);
  blur.func2d("input_arg");
  blur.func2d("input", v("input_arg"));
  blur.func2d(output_name, div(add(v("input", 0, 0), v("input", 0, 1), v("input", 0, 2)), 3));

  return blur;
}

App blur_xy_16(const std::string output_name) {
  App blur;
  blur.set_default_pixel_width(16);
  blur.func2d("input_arg");
  blur.func2d("input", v("input_arg"));
  blur.func2d("blurx", div(add(v("input", 0, 0), v("input", 0, 1), v("input", 0, 2)), 3));
  blur.func2d(output_name, div(add(v("blurx", 0, 0), v("blurx", 1, 0), v("blurx", 2, 0)), 3));

  return blur;
}

App sobel16_stage_x(const std::string output_name) {
  App sobel;
  sobel.set_default_pixel_width(16);
  sobel.func2d("off_chip_img");
  sobel.func2d("img", v("off_chip_img"));
  sobel.func2d(output_name,
      //add(add(v("img", 1, -1), v("img", -1, -1)),
        //add(add(v("img", 1, 0), v("img", -1, 0)), 3),
        //add(v("img", 1, 1), v("img", -1, 1))));
      add(sub(v("img", 1, -1), v("img", -1, -1)),
        mul(sub(v("img", 1, 0), v("img", -1, 0)), 3),
        sub(v("img", 1, 1), v("img", -1, 1))));


  return sobel;
}

App sobel16(const std::string output_name) {
  App sobel;
  sobel.set_default_pixel_width(16);
  sobel.func2d("off_chip_img");
  sobel.func2d("img", v("off_chip_img"));
  sobel.func2d("mag_x",
      add(sub(v("img", 1, -1), v("img", -1, -1)),
        mul(sub(v("img", 1, 0), v("img", -1, 0)), 3),
        sub(v("img", 1, 1), v("img", -1, 1))));

  sobel.func2d("mag_y",
      add(sub(v("img", -1, 1), v("img", -1, -1)),
        mul(sub(v("img", 0, 1), v("img", 0, -1)), 3),
        sub(v("img", 1, 1), v("img", 1, -1))));

  sobel.func2d(output_name,
      add(square(v("mag_x")), square(v("mag_y"))));

  return sobel;
}

App sobel(const std::string output_name) {
  App sobel;
  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  sobel.func2d("mag_x", "sobel_mx", "img", {1, 1},
      {{-1, -1}, {-1, 0}, {-1, 1}, {1, -1}, {1, 0}, {1, 1}});
  sobel.func2d("mag_y", "sobel_my", "img", {1, 1},
      {{-1, -1}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 1}});

  Window xwindow{"mag_x", {1, 1}, {{0, 0}}};
  Window ywindow{"mag_y", {1, 1}, {{0, 0}}};
  sobel.func2d(output_name, "mag_cu", {xwindow, ywindow});

  return sobel;
}

App seidel(const std::string output_name) {
  App jac;
  jac.func2d("input_arg");
  jac.func2d("input", "id", pt("input_arg"));
  jac.func2d("tmp", "seidel_tmp_comp", "input", {1, 1}, {{-1, 0}, {0, 0}, {1, 0}});
  jac.func2d(output_name, "seidel_output_comp", "input", {1, 1}, {{0, -1}, {0, 0}, {0, 1}});
  return jac;
}

App pointwise_add(const std::string output_name) {
  App jac;
  jac.set_default_pixel_width(16);
  jac.func2d("input_arg");
  jac.func2d("input", v("input_arg"));
  jac.func2d(output_name, div(v("input"), 9));
  return jac;
}

App multi_channel(const std::string output_name) {
  App jac;
  jac.set_default_pixel_width(16);
  jac.func2d("in0_oc");
  jac.func2d("in1_oc");
  jac.func2d("in0", "id", pt("in0_oc"));
  jac.func2d("in1", "id", pt("in1_oc"));

  Window in0 = pt("in0");
  Window in1 = pt("in1");
  jac.func2d("average", "add", {in0, in1});
  jac.func2d(output_name, "id", pt("average"));
  return jac;
}

App blur_xy(const std::string output_name) {
  App jac;
  jac.func2d("input_arg");
  jac.func2d("input", "id", pt("input_arg"));
  jac.func2d("blurx", "blurx_comp", "input", {1, 1}, {{0, 0}, {0, 1}, {0, 2}});
  jac.func2d(output_name, "blury_comp", "blurx", {1, 1}, {{0, 0}, {1, 0}, {2, 0}});
  return jac;
}

App pointwise2d(const std::string output_name) {
  App jac;
  jac.func2d("t1_arg");
  jac.func2d("t1", v("t1_arg"));
  jac.func2d(output_name, v("t1"));
  return jac;
}

App jacobi2d(const std::string output_name) {
  App jac;
  jac.func2d("t1_arg");
  jac.func2d("t1", "id", pt("t1_arg"));
  jac.func2d(output_name, "jacobi2d_compute", "t1", {1, 1}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  return jac;
}

App jacobi3d(const std::string output_name) {
  App jac;
  jac.func2d("t1_arg");
  jac.func2d("t1", "id", pt("t1_arg"));
  jac.func2d(output_name, "jacobi3d_compute", "t1", {1, 1, 1},
      {{0, 0, 0},
      {1, 0, 0}, {-1, 0, 0},
      {0, 1, 0}, {0, -1, 0},
      {0, 0, 1}, {0, 0, -1}});
  return jac;
}

App denoise2d(const std::string& name) {
  App dn;
  dn.set_default_num_type(NUM_TYPE_FLOAT);

  dn.func2d("f_off_chip");
  dn.func2d("u_off_chip");
  dn.func2d("f", v("f_off_chip"));
  dn.func2d("u", v("u_off_chip"));

  Expr* diff = sub(v("u", 0, -1), v("u", 0, 0));
  dn.func2d("diff_qwe", diff);
  dn.func2d("diff_d", "diff_d2d", "u", {{0, 0}, {0, 1}});
  dn.func2d("diff_l", "diff_l2d", "u", {
      {-1, 0},
      {0, 0}
      });
  dn.func2d("diff_r", "diff_r2d", "u", {{0, 0}, {1, 0}});

  dn.func2d("g", div(fc("1.0f"), func("sqrt", add({sq("diff_qwe"), sq("diff_d"), sq("diff_l"), sq("diff_r")}))));
  dn.func2d("r0", "comp_r02d", {pt("u"), pt("f")});
  dn.func2d("r1", "r1_comp2d", pt("r0"));
  dn.func2d(name,
      "out_comp_dn2d",
      {pt("r1"),
      pt("f"),
      win("u", {
          {-1, 0},
          {0, -1},
          {0, 0},
          {1, 0}
          }),
      win("g", {
          {-1, 0},
          {0, -1},
          {0, 1},
          {1, 0}
          })});

  return dn;
}


App sum_denoise2d(const std::string& outname) {
  App dn;

  dn.func2d("f_off_chip");
  dn.func2d("u_off_chip");
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("diff_qwe", "fadd", "u", {{0, 0}, {0, -1}});
  dn.func2d("diff_d", "fadd", "u", {{0, 0}, {0, 1}});
  dn.func2d("diff_l", "fadd", "u", {{0, 0}, {-1, 0}});
  dn.func2d("diff_r", "fadd", "u", {{0, 0}, {1, 0}});

  dn.func2d("g", "fmag2d", {pt("diff_qwe"), pt("diff_d"), pt("diff_l"), pt("diff_r")});
  dn.func2d("r0", "fadd2", {pt("u"), pt("f")});
  dn.func2d("r1", "id", pt("r0"));
  dn.func2d(outname, "out_comp_fadd", {pt("r1"), pt("f"), win("u", {{0, 0}, {0, -1}, {-1, 0}, {1, 0}}), win("g", {{0, 1}, {0, -1}, {-1, 0}, {1, 0}})});

  return dn;
}

vector<vector<int> > offsets2d(const int d0l, const int d0r, const int d1l, const int d1r) {
  vector<vector<int> > offs;
  for (int r = d1l; r < d1r + 1; r++) {
    for (int c = d0l; c < d0r + 1; c++) {
      offs.push_back({c, r});
    }
  }
  return offs;
}

void upsample_stencil_2d_test() {
  App us;
  us.func2d("Img_off");
  us.func2d("Img", "id", pt("Img_off"));

  auto loads = offsets2d(-1, 1, -1, 1);
  //auto loads = offsets2d(0, 2, 0, 0);
  Window imgwin{"Img", {qconst(1, 2), qconst(1, 2)}, loads};
  //cout << "Strides before assignment" << endl;
  //for (auto s : imgwin.strides) {
    //cout << tab(1) << s << endl;
  //}
  us.func2d("upsample_stencil", "conv_3_3", imgwin);

  us.realize("upsample_stencil", 32, 32, 1);
  us.realize_naive("upsample_stencil", 32, 32);

  std::vector<std::string> optimized =
    run_regression_tb("upsample_stencil_opt");

  std::vector<std::string> naive =
    run_regression_tb("upsample_stencil_naive");

  assert(optimized.size() == naive.size());
  for (size_t i = 0; i < optimized.size(); i++) {
    cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
    assert(optimized.at(i) == naive.at(i));
  }

  assert(optimized == naive);
}

void grayscale_conversion_test() {
  App gs;
  gs.func3d("Img_off");
  gs.func3d("Img", "id", pt3("Img_off"));

  Window inwindow{"Img", {{qconst(1), qconst(1), qconst(0)}}, {{0, 0, 0}, {0, 0, 1}, {0, 0, 2}}};
  gs.func2d("gray", "avg", inwindow);

  gs.realize_naive("gray", 32, 32);
  gs.realize("gray", 32, 32, 1);

  std::vector<std::string> optimized =
    run_regression_tb("gray_opt");

  std::vector<std::string> naive =
    run_regression_tb("gray_naive");

  assert(naive == optimized);

}

void upsample_stencil_1d_test() {
  App us;
  us.func2d("Img_off");
  us.func2d("Img", "id", pt("Img_off"));

  //auto loads = offsets2d(-1, 1, -1, 1);
  auto loads = offsets2d(0, 2, 0, 0);
  Window imgwin{"Img", {qconst(1, 2), qconst(1, 1)}, loads};
  //cout << "Strides before assignment" << endl;
  //for (auto s : imgwin.strides) {
    //cout << tab(1) << s << endl;
  //}
  us.func2d("upsample_stencil_1d", "conv_1_3", imgwin);

  us.realize("upsample_stencil_1d", 32, 1, 1);
  us.realize_naive("upsample_stencil_1d", 32, 1);

  std::vector<std::string> optimized =
    run_regression_tb("upsample_stencil_1d_opt");

  std::vector<std::string> naive =
    run_regression_tb("upsample_stencil_1d_naive");

  assert(optimized.size() == naive.size());
  for (size_t i = 0; i < optimized.size(); i++) {
    cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
    assert(optimized.at(i) == naive.at(i));
  }

  assert(optimized == naive);
}

void sobel_mag_y_test() {
  int cols = 32;
  int rows = 32;

  string out_name = "mag_y";
  sobel_mag_y().realize("mag_y", cols, rows, 1);

  string app_dir =
    "./soda_codes/sobel_stage_2";
  string synth_dir =
    "./soda_codes/sobel_stage_2/our_code/";

  system(("mkdir " + app_dir).c_str());
  system(("mkdir " + synth_dir).c_str());
  system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv " + out_name + "*.h " + synth_dir).c_str());
  system(("mv regression_tb_" + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv tb_soda_" + out_name + "*.cpp " + synth_dir).c_str());
}

void sobel_mag_x_test() {
  int cols = 32;
  int rows = 32;

  string out_name = "mag_x";
  cout << "sobel" << endl;
  sobel_mag_x().realize("mag_x", cols, rows, 1);

  //std::vector<std::string> optimized =
  //run_regression_tb(out_name + "_opt");

  string app_dir =
    "./soda_codes/sobel_stage_1";
  string synth_dir =
    "./soda_codes/sobel_stage_1/our_code/";

  system(("mkdir " + app_dir).c_str());
  system(("mkdir " + synth_dir).c_str());
  system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv " + out_name + "*.h " + synth_dir).c_str());
  system(("mv regression_tb_" + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv tb_soda_" + out_name + "*.cpp " + synth_dir).c_str());
}

void sobel_16_stage_x_app_test() {
  int cols = 30;
  int rows = 30;

  for (int i = 0; i < 1; i++) {
    int unroll_factor = pow(2, i);
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = "sobel_16_stage_x_unrolled_" + str(unroll_factor);
    sobel16_stage_x(out_name).realize(out_name, cols, rows, unroll_factor);

    std::vector<std::string> optimized =
      run_regression_tb(out_name + "_opt");

    move_to_benchmarks_folder(out_name + "_opt");
  }

}

void sobel_16_app_test(const std::string& prefix) {
  int cols = 1920;
  int rows = 1080;

  //int cols = 10;
  //int rows = 10;
  //vector<int> factors{1, 2, 4, 8};
  vector<int> factors{1, 16, 32};
  //for (int i = 0; i < 5; i++) {
  for (auto factor : factors) {
    int unroll_factor = factor;
      //pow(2, i);
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.num_input_epochs = 30;
    options.debug_options.expect_all_linebuffers = true;
    sobel16(out_name).realize(options, out_name, cols, rows, unroll_factor);

    //std::vector<std::string> optimized =
      //run_regression_tb(out_name + "_opt");

    move_to_benchmarks_folder(out_name + "_opt");
  }

}

void sobel_app_test() {
  int cols = 1920;
  int rows = 1080;

  cout << "sobel" << endl;
  for (int i = 0; i < 5; i++) {
    int unroll_factor = pow(2, i);
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = "sobel_unrolled_" + str(unroll_factor);
    sobel(out_name).realize(out_name, cols, rows, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }

    //std::vector<std::string> optimized =
      //run_regression_tb(out_name + "_opt");

}

void blur_xy_16_app_test(const std::string& prefix) {
  int cols = 1920;
  int rows = 1080;

  //vector<int> factors{1, 2, 4, 8};
  vector<int> factors{1, 16, 32};
  for (auto f : factors) {
    int unroll_factor = f;
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    blur_xy_16(out_name).realize(options, out_name, cols, rows, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
}

void pointwise_app_test() {
  int cols = 1920;
  int rows = 1080;

  cout << "pointwise math" << endl;
  int unroll_factor = 1;
  string out_name = "pw16n";
  pointwise_add(out_name).realize(out_name, cols, rows, unroll_factor);
  move_to_benchmarks_folder(out_name + "_opt");
}

void blur_xy_app_test() {
  int cols = 1920;
  int rows = 1080;

  cout << "blur_xy" << endl;
  for (int i = 0; i < 5; i++) {
    int unroll_factor = pow(2, i);
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = "blur_xy_unrolled_" + str(unroll_factor);
    blur_xy(out_name).realize(out_name, cols, rows, unroll_factor);

    //std::vector<std::string> optimized =
      //run_regression_tb(out_name + "_opt");

    string synth_dir =
      "./synth_examples/" + out_name;
    system(("mkdir " + synth_dir).c_str());
    system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
    system(("mv " + out_name + "*.h " + synth_dir).c_str());
    system(("mv regression_tb_" + out_name + "*.cpp " + synth_dir).c_str());
    system(("mv tb_soda_" + out_name + "*.cpp " + synth_dir).c_str());
  }

}

void jacobi2d_app_test() {
  App jac = jacobi2d("t0");
  jac.realize_naive("t0", 32, 28);

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  jac.realize(options, "t0", 32, 28, 1);

  std::vector<std::string> optimized =
    run_regression_tb("t0_opt");

  std::vector<std::string> naive =
    run_regression_tb("t0_naive");

  assert(naive == optimized);

  //int cols = 1920;
  //int rows = 1080;

  int cols = 16;
  int rows = 16;
  for (int i = 0; i < 3; i++) {
    int unroll_factor = pow(2, i);
    string out_name = "jacobi2d_unrolled_" + str(unroll_factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.debug_options.expect_all_linebuffers = true;
    jacobi2d(out_name).realize(options, out_name, cols, rows, unroll_factor);
    std::vector<std::string> optimized =
      run_regression_tb(out_name + "_opt");
    string synth_dir =
      "./synth_examples/" + out_name;
    system(("mkdir " + synth_dir).c_str());
    system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
    system(("mv " + out_name + "*.h " + synth_dir).c_str());
    system(("mv regression_tb_" + out_name + "*.cpp " + synth_dir).c_str());
    system(("mv tb_soda_" + out_name + "*.cpp " + synth_dir).c_str());
  }

}

void sum_diffs_test() {
  App dn;

  string out_name = "sum_diffs";
  dn.func2d("f_off_chip");
  dn.func2d("u_off_chip");
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("diff_qwe", "fadd", "u", {{0, 0}, {0, -1}});
  dn.func2d("diff_d", "fadd", "u", {{0, 0}, {0, 1}});
  dn.func2d("diff_l", "fadd", "u", {{0, 0}, {-1, 0}});
  dn.func2d("diff_r", "fadd", "u", {{0, 0}, {1, 0}});

  dn.func2d("magval", "fmag2d", {pt("diff_qwe"), pt("diff_d"), pt("diff_l"), pt("diff_r")});
  dn.func2d(out_name, "fadd2", {pt("magval"), pt("f")});

  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, out_name, size, size);
    std::vector<std::string> optimized =
      run_regression_tb(out_name + "_opt");

  move_to_benchmarks_folder(out_name);
}

void dummy_app_test() {
  App dn;
  string out_name = "dummy_app";

  dn.func2d("u_off_chip");

  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});

  dn.func2d(out_name, sub(v("u", 0, 0), v("u", 0, -1)));

  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, out_name, size, size);
  std::vector<std::string> optimized =
    run_regression_tb(out_name + "_opt");

  move_to_benchmarks_folder(out_name + "_opt");
}

void two_input_denoise_pipeline_test() {
  App dn;
  string out_name = "two_input_denoise_pipeline";

  dn.func2d("u_off_chip");
  dn.func2d("f_off_chip");

  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});

  dn.func2d("diff_u", sub(v("u", 0, 0), v("u", 0, -1)));
  dn.func2d("diff_d", sub(v("u", 0, 0), v("u", 0, 1)));
  dn.func2d("diff_l", sub(v("u", 0, 0), v("u", -1, 0)));
  dn.func2d("diff_r", sub(v("u", 0, 0), v("u", 1, 0)));

  dn.func2d("diff_sums", add(add(v("diff_u"), v("diff_d")), add(v("diff_l"), v("diff_r"))));
  dn.func2d("g",
      add({v("diff_sums"), v("f"),
        v("f", -1, 0),
        v("f", 1, 0),
        v("f", 0, -1),
        v("f", 0, 1)}));

  dn.func2d("r0", add(v("u"), v("f")));
  dn.func2d("r1", add(v("r0"), v("r0")));
  dn.func2d(out_name, add({v("u"), v("g"), v("f"), v("r1")}));

  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  //options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, out_name, size, size);
  std::vector<std::string> optimized =
    run_regression_tb(out_name + "_opt");

  move_to_benchmarks_folder(out_name + "_opt");

}

void two_input_mag_test() {
  App dn;
  string out_name = "two_input_mag";

  dn.func2d("u_off_chip");
  dn.func2d("f_off_chip");

  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});

  dn.func2d("diff_u", sub(v("u", 0, 0), v("u", 0, -1)));
  dn.func2d("diff_d", sub(v("u", 0, 0), v("u", 0, 1)));
  dn.func2d("diff_l", sub(v("u", 0, 0), v("u", -1, 0)));
  dn.func2d("diff_r", sub(v("u", 0, 0), v("u", 1, 0)));

  dn.func2d("diff_sums", add(add(v("diff_u"), v("diff_d")), add(v("diff_l"), v("diff_r"))));
  dn.func2d(out_name,
      add({v("diff_sums"), v("f"),
        v("f", -1, 0),
        v("f", 1, 0),
        v("f", 0, -1),
        v("f", 0, 1)}));

  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, out_name, size, size);
    std::vector<std::string> optimized =
      run_regression_tb(out_name + "_opt");

  move_to_benchmarks_folder(out_name);
}

void one_input_mag_test() {
  App dn;
  string out_name = "one_input_mag";
  dn.func2d("u_off_chip");
  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("diff_u", sub(v("u", 0, 0), v("u", 0, -1)));
  dn.func2d("diff_d", sub(v("u", 0, 0), v("u", 0, 1)));
  dn.func2d("diff_l", sub(v("u", 0, 0), v("u", -1, 0)));
  dn.func2d("diff_r", sub(v("u", 0, 0), v("u", 1, 0)));

  dn.func2d(out_name, add(add(v("diff_u"), v("diff_d")), add(v("diff_l"), v("diff_r"))));

  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, out_name, size, size);
    std::vector<std::string> optimized =
      run_regression_tb(out_name + "_opt");

  move_to_benchmarks_folder(out_name);
}

void sum_float_test() {
  App dn;

  string out_name = "sum_float";
  dn.func2d("f_off_chip");
  dn.func2d("u_off_chip");
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d(out_name, "fadd2", {pt("f"), pt("u")});
  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, out_name, size, size);
    std::vector<std::string> optimized =
      run_regression_tb(out_name + "_opt");

  move_to_benchmarks_folder(out_name);
}

void sum_denoise_test() {
  App dn = sum_denoise2d("sum_denoise2d");
  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, "sum_denoise2d", size, size);
    std::vector<std::string> optimized =
      run_regression_tb("sum_denoise2d_opt");

  move_to_benchmarks_folder("sum_denoise2d");
}

void denoise2d_test() {
  App dn = denoise2d("denoise2d");
  int size = 30;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  dn.realize(options, "denoise2d", size, size);

  std::vector<std::string> optimized =
    run_regression_tb("denoise2d_opt");

  {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = false;
    dn.realize_naive(options, "denoise2d", size, size);

    std::vector<std::string> naive =
      run_regression_tb("denoise2d_naive");

    assert(optimized.size() == naive.size());
    for (size_t i = 0; i < optimized.size(); i++) {
      cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
      assert(optimized.at(i) == naive.at(i));
    }

    assert(naive == optimized);
  }

  {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;
    dn.realize_naive(options, "denoise2d", size, size);

    std::vector<std::string> naive =
      run_regression_tb("denoise2d_naive");

    assert(optimized.size() == naive.size());
    for (size_t i = 0; i < optimized.size(); i++) {
      cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
      assert(optimized.at(i) == naive.at(i));
    }

    assert(naive == optimized);
  }

  move_to_benchmarks_folder("denoise2d");
}

void conv3x3_app_unrolled_uneven_test() {

  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app_unrolled_uneven", "conv_3_3", "img", {1, 1}, offsets);

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  sobel.realize(options, "conv3x3_app_unrolled_uneven", 30, 30, 7);

  int res = system("g++ -std=c++11 conv3x3_app_unrolled_uneven_opt.cpp -c ");
  assert(res == 0);

}

void conv3x3_app_unrolled_test() {

  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app_unrolled", "conv_3_3", "img", {1, 1}, offsets);

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  sobel.realize(options, "conv3x3_app_unrolled", 30, 30, 2);

  int res = system("g++ -std=c++11 tb_app_unrolled_conv3x3.cpp conv3x3_app_unrolled_opt.cpp");
  assert(res == 0);

  int tb_res = system("./a.out");
  assert(tb_res == 0);
}


void conv3x3_app_test() {
  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app", "conv_3_3", "img", {1, 1}, offsets);

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  sobel.realize(options, "conv3x3_app", 30, 30);

  int res = system("g++ -std=c++11 tb_app_conv3x3.cpp conv3x3_app_opt.cpp");
  assert(res == 0);

  int tb_res = system("./a.out");
  assert(tb_res == 0);
}

void sobel_test() {
  App sobela = sobel("mag");

  sobela.realize("mag", 30, 30, 1);

  int res = system("g++ -std=c++11 -c mag_opt.cpp");
  assert(res == 0);
}

void heat_3d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "heat3d";
  prg.buffer_port_widths["I"] = 32;

  int rows = 32;
  int cols = 32;
  int channels = 32;

  prg.buffer_bounds["I"] = {rows, cols, channels};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id2", 0, rows, "id1", 0, cols, "id0", 0, channels);
  in_nest->add_op({"I", "id0, id1, id2"}, "id", {in_name, "id0, id1, id2"});

  auto blur_y_nest =
    prg.add_nest("d2", 1, rows - 1, "d1", 1, cols - 1, "d0", 1, channels - 1);
  blur_y_nest->
    stencil_op(out_name, "heat3d_compute", "I", {"d0", "d1", "d2"},
        {{1, 0, 0}, {0, 0, 0}, {-1, 0, 0},
        {0, 1, 0}, {0, 0, 0}, {0, -1, 0},
        {0, 0, 1}, {0, 0, 0}, {0, 0, -1}});

  // Need to fix repeated reads from the same location
  regression_test(prg);
}

void blur_x_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "blur_x";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_bounds["i"] = {32, 8};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.buffer_bounds[in_name] = {32, 8};
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.buffer_bounds[in_name] = {32 - 2, 8 - 2};
  prg.add_output(out_name);

  // This code (in SODA is described as blur_x)
  // blur_x(0, 0) = in(0, 0) + in(0, 1) + in(0, 2)
  auto in_nest = prg.add_nest("id1", 0, 8, "id0", 0, 32);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, 8 - 2, "d0", 0, 32);
  auto lds = prg.vector_load("I", "d0", 0, 1, "d1", 0, 3);
  blur_y_nest->
    add_op({out_name, "d0, d1"}, "blur_3", lds);

  regression_test(prg);
}

void pointwise_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "pointwise";
  prg.buffer_port_widths["I"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, 32, "id0", 0, 8);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, 32, "d0", 0, 8);
  blur_y_nest->
    add_op({out_name, "d0, d1"}, "plus_one", {"I", "d0, d1"});


  regression_test(prg);
}

void stencil_3d_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "stencil_3d";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_port_widths["blur_x"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("ir", 0, 32, "ic", 0, 32, "ib", 0, 32);
  in_nest->add_op({"I", "ir, ic, ib"}, "id", {in_name, "ir, ic, ib"});

  auto blur_y_nest =
    prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32 - 2), "xb", 0, (32 - 2));
  auto lds0 = prg.vector_load("I", "xr", 0, 3, "xc", 0, 3, "xb", 0, 3);
  blur_y_nest->
    add_op({out_name, "xr, xc, xb"}, "blur_27", lds0);


  // How do I want to schedule things?
  //  - Using a single loop nest over input pixels giving each pixel
  //    a time?
  regression_test(prg);
}

void soda_blur_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "soda_blur";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_port_widths["blur_x"] = 16;

  int unroll_factor = 2;
  for (int i = 0; i < unroll_factor; i++) {
    string in_name = "in_" + to_string(i);
    string out_name = "out_" + to_string(i);

    prg.buffer_port_widths[in_name] = 16;
    prg.add_input(in_name);

    prg.buffer_port_widths[out_name] = 16;
    prg.add_output(out_name);
  }

  auto in_nest = prg.add_nest("ir", 0, 32, "ic", 0, 32 / unroll_factor);
  for (int i = 0; i < unroll_factor; i++) {
    string in_name = "in_" + to_string(i);
    in_nest->add_op({"I", "ir, " + to_string(unroll_factor) + "*ic + " + to_string(i)}, "id", {in_name, "ir, ic"});
  }

  auto blur_y_nest =
    prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32) / unroll_factor);
  for (int i = 0; i < unroll_factor; i++) {
    string is = to_string(i);
    string uf = to_string(unroll_factor);

    string out_name = "out_" + to_string(i);
    auto lds0 = prg.vector_load("I", "xr", 0, 3, to_string(unroll_factor) + "*xc + " + to_string(i), 0, 1);
    blur_y_nest->
      add_op({out_name, "xr, " + uf + "*xc + " + is}, "blur_3", lds0);
  }

  //auto blur_x_nest =
    //prg.add_nest("yr", 0, 32, "yc", 0, (32 - 2) / unroll_factor);
  //for (int i = 0; i < unroll_factor; i++) {
    //auto lds = prg.vector_load("I", "yr", 0, 1, to_string(unroll_factor) + "*yc + " + to_string(i), 0, 3);

    //string is = to_string(i);
    //string uf = to_string(unroll_factor);
    //blur_x_nest->add_op({"blur_x", "yr, " + uf + "*yc + " + is}, "blur_3", lds);
  //}

  //auto blur_y_nest =
    //prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32 - 2) / unroll_factor);
  //for (int i = 0; i < unroll_factor; i++) {
    //string is = to_string(i);
    //string uf = to_string(unroll_factor);

    //string out_name = "out_" + to_string(i);
    //auto lds0 = prg.vector_load("blur_x", "xr", 0, 3, to_string(unroll_factor) + "*xc + " + to_string(i), 0, 1);
    //blur_y_nest->
      //add_op({out_name, "xr, " + uf + "*xc + " + is}, "blur_3", lds0);
  //}

  regression_test(prg);
}

void conv_2d_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_rolled";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["R"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pr, pc");
    write->add_store("I", "pr, pc");
  }

  {
    auto pr = prg.add_loop("lr", 1, 64 - 1);
    auto pc = pr->add_loop("lc", 1, 64 - 1);

    auto rd = pc->add_op("init");
    rd->add_store("R", "lr, lc");
    rd->add_function("set_zero_32");

    auto reduce_inner_loop = pc->add_nest("rr", -1, 2, "rc", -1, 2);
    auto reduce_inner = reduce_inner_loop->add_op({"R", "lr - 1, lc - 1"}, "inc", {"R", "lr, lc", "I", "lr + rr, lc + rc"});
  }

  {
    auto outlp = prg.add_nest("xr", 0, 64 - 2, "xc", 0, 64 - 2);
    outlp->store({"out", "xr, xc"}, {"R", "xr, xc"});
  }

  regression_test(prg);
}

void unsharp_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "unsharp";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["Blur"] = 32;
  prg.buffer_port_widths["Diff"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  vector<string> conv_loads;
  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      conv_loads.push_back("I");
      conv_loads.push_back("br + " + to_string(r) + ", bc + " + to_string(c));
    }
  }

  prg.add_nest("br", 0, 64 - 2, "bc", 0, 64 - 2)->add_op({"Blur", "br,bc"}, "conv_3_3", conv_loads);
  prg.add_nest("dr", 0, 64 - 2, "dc", 0, 64 - 2)->add_op({"Diff", "dr, dc"}, "diff", {"I", "dr, dc", "Blur", "dr, dc"});
  prg.add_nest("xr", 0, 64 - 2, "xc", 0, 64 - 2)->store({"out", "xr, xc"}, {"Diff", "xr, xc"});

  regression_test(prg);
}

void warp_and_upsample_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "warp_and_upsample";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["warped_0"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});

  auto loads = prg.vector_load("I", "br", 0, 3, "bc", 0, 3);
  cout << "# of loads: " << loads.size() << endl;
  prg.add_nest("br", 0, 64 - 2, "bc", 0, 64 - 2)->add_op({"warped_0", "br,bc"}, "conv_3_3", loads);
  prg.add_nest("ur", 0, 64 - 2, "kr", 0, 2)->add_nest("uc", 0, 64 - 2, "kc", 0, 2)->
    add_op({"out", "ur, uc"}, "id", {"warped_0", "ur, uc"});

  regression_test(prg);
}

void downsample_and_blur_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "downsample_and_blur";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["downsampled"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});

  prg.add_nest("dr", 0, (64) / 2, "dc", 0, (64) / 2)->
    add_op({"downsampled", "dr, dc"}, "id", {"I", "2*dr, 2*dc"});

  auto loads = prg.vector_load("downsampled", "br", 0, 3, "bc", 0, 3);
  prg.add_nest("br", 0, 32 - 2, "bc", 0, 32 - 2)->add_op({"out", "br,bc"}, "conv_3_3", loads);

  regression_test(prg);
}

void two_in_conv2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_two_in_window";
  prg.add_input("in0");
  prg.add_input("in1");
  prg.add_output("out");

  prg.buffer_port_widths["I"] = 32;
  int img_size = 20;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto ldi = prg.add_nest("pr", 0, img_size, "pc", 0, img_size / 2);
  ldi->store({"I", "pr, 2*pc"}, {"in0", "pr, 2*pc"});
  ldi->store({"I", "pr, 2*pc + 1"}, {"in1", "pr, 2*pc + 1"});

  auto cpi = prg.add_nest("r", 0, (img_size / 2) - 2, "c", 0, (img_size / 2) - 2);
  auto ld = prg.vector_load("I", "2*r", 0, 3, "2*c", 0, 3);
  cpi->add_op({"out", "r, c"}, "conv_3_3", ld);

  regression_test(prg);
}

void two_in_window_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "two_in_window";
  prg.add_input("in0");
  prg.add_input("in1");
  prg.add_output("out");

  prg.buffer_port_widths["I"] = 32;
  int img_size = 10;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto ldi = prg.add_nest("pr", 0, img_size);
  ldi->store({"I", "2*pr"}, {"in0", "pr"});
  ldi->store({"I", "2*pr + 1"}, {"in1", "pr"});

  auto cpi = prg.add_nest("c", 0, (img_size / 2) - 2);
  auto ld = prg.vector_load("I", "2*c", 0, 3);
  cout << "Loads..." << endl;
  for (auto d : ld) {
    cout << "\t" << d << endl;
  }
  cpi->add_op({"out", "c"}, "conv_1_3", ld);

  prg.pretty_print();
  regression_test(prg);
  //assert(false);
}

void upsample_reduce_test() {

  // Maybe we should build memories using the principle
  // that total new data for next iteration - total data that dies in this iteration
  // must be a constant
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "upsample_reduce_test";
  prg.add_input("in");
  //prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  int img_size = 15;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto y_nest =
    prg.add_nest("y", 0, img_size, "yu", 0, 3);
  auto x_nest =
    y_nest->add_nest("x", 0, img_size, "xu", 0, 3);
  auto reduce_nest =
    x_nest->add_nest("yi", 0, 4, "xi", 0, 4);
  reduce_nest->add_op({"I", "3*x + xu, 3*y + yu"}, "id", {"in", "x + xi, y + yi"});

  prg.pretty_print();
  cout << "Consumer maps..." << endl;
  cout << tab(1) << str(prg.consumer_map()) << endl;

  cout << "Schedules..." << endl;
  for (auto s : prg.schedules()) {
    cout << tab(1) << str(s.second) << endl;
    auto next_op = lexmin(lex_lt(s.second, s.second));
    cout << "next op: " << str(next_op) << endl;
  }

  prog pcpy = duplicate_interface(prg);
  for (auto c : prg.all_loops()) {
    cout << "Adding loop: " << c->name << endl;
    string lc = c->name + "_cache";
    pcpy.buffer_bounds[lc] = {};
  }

  cout << "Copy..." << endl;
  pcpy.pretty_print();

}

void blur_and_downsample_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "blur_and_downsample";
  prg.add_input("in");
  prg.buffer_port_widths["I"] = 32;
  int img_size = 15;
  prg.buffer_bounds["I"] = {img_size, img_size};

  prg.add_nest("pr", 0, img_size, "pc", 0, img_size)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  string bds = add_gaussian_stage(prg, "I");
  string cv = add_conv_stage(prg, bds);
  write_out(prg, cv);

  regression_test(prg);
}

void test_if_complex();
void test_loop_perfection();



  /*
   * l is the long sequence, s is the short sequence,
   * This function will return a array with length of s,
   * each item of the array is the align position in the long sequence
   * it will also return the min diff
   */
pair<int, vector<int> > find_best_alignment(vector<int> & l, vector<int> & s) {
    if (s.size() == 1) {
        int val = pick(s);
        int min_diff = INT_MAX;
        int target_idx = -1;
        for (int i = 0; i < l.size(); i ++) {
            int diff = abs(val - l.at(i));
            if (diff < min_diff) {
                target_idx = i;
                min_diff = diff;
            }
        }
        assert(target_idx >= 0);
        return {min_diff, {target_idx}};
    } else {
        int range = l.size() - s.size() + 1;
        int min_diff = INT_MAX;
        vector<int> align_idx;
        for (int i = 0; i < range; i ++) {
            vector<int> s_tail(s.begin() + 1, s.end());
            vector<int> l_tail(l.begin() + i + 1, l.end());
            auto ret = find_best_alignment(l_tail, s_tail);
            int cur_diff = ret.first + abs(l.at(i) - s.at(0));
            if (cur_diff < min_diff) {
                min_diff = cur_diff;

                //update the align idx array
                align_idx.clear();
                align_idx.push_back(i);
                for (auto idx: ret.second) {
                    align_idx.push_back(idx + i + 1);
                }
            }
        }
        return {min_diff, align_idx};
    }
}

void print_alignment(vector<int> & a, vector<int> & b) {

    auto val_alignment_pair = find_best_alignment(a, b);
    cout << "min diff : " << val_alignment_pair.first << endl;
    cout << "alignment array: " << val_alignment_pair.second << endl << endl;;
}

vector<int> get_alignment_array(vector<int>& a, vector<int>& b) {
    auto val_alignment_pair = find_best_alignment(a, b);
    auto val_alignment = val_alignment_pair.second;
    auto it = val_alignment.begin();
    vector<int> alignment_arr({0});
    for (int i = 0; i < a.size(); i ++) {
        if(*it == i) {
            alignment_arr.push_back((int) (it - val_alignment.begin() + 1));
            it ++;
        } else {
            alignment_arr.push_back(-1);
        }
    }
    assert(alignment_arr.size() == a.size() + 1);
    return alignment_arr;
}


void playground() {
    {
        prog app = camera_pipeline_2x2_unroll();
        app.pretty_print();
        loop_split(app);
        app.pretty_print();
        assert(false);
    }

    {
        vector<int> a = {3, 40, 3, 40};
        vector<int> b = {44, 44};
        print_alignment(a, b);
        cout << get_alignment_array(a, b) << endl;

        a = {39, 40, 5, 90};
        b = {44, 44};
        print_alignment(a, b);
        cout << get_alignment_array(a, b) << endl;

        assert(false);

    }
    {
      isl_ctx* ctx = isl_ctx_alloc();
      auto sched_wr = isl_map_read_from_str(ctx,"{ wr[root=0, i0, i1]-> [8*i0 + i1, 0]: 0<=i0<8 and 0<=i1<8}");
      auto sched_rd = isl_map_read_from_str(ctx,"{ rd[root=0, i0, i1]-> [8*i0 + i1 + 9, 1]: 0<=i0<7 and 0<=i1<7}");
      auto lexm = simplify(lex_gt(sched_rd, sched_wr));
      cout << "read deps" << str(lexmax(lexm)) << endl;
      //for (auto pt: get_points(domain(sched_rd))) {
      //    auto m = lexmax(its(lexm, to_set(pt)));
      //    cout << "\t pt: " << str(pt) << "\n\t\t" << str(m) << endl;
      //}
      auto lexm_wr = simplify(lex_gt(sched_wr, sched_rd));
      cout << "wr deps" << str(lexmax(lexm_wr)) << endl;
      for (auto pt: get_points(domain(sched_wr))) {
          auto m = lexmax(its(lexm_wr, to_set(pt)));
          cout << "\t pt: " << str(pt) << "\n\t\t" << str(m) << endl;
      }
      assert(false);
    }
    {
      isl_ctx* ctx = isl_ctx_alloc();
      auto acc_0 = isl_map_read_from_str(ctx,"{ a[root=0, i0, i1]-> [0]: 0<=i0<8 and 0<=i1<8}");
      auto sched_0 = isl_map_read_from_str(ctx,"{ s[root = 0, i0, i1]-> [10*i0+i1]: 0<=i0<8 and 0<=i1<8}");
      map<int, int> dim2pad = get_all_domain_pad_dims(sched_0, acc_0);
      cout << "Dim2pad: " << dim2pad << endl;
      assert(false);
    }
    {
      auto sp_mem = create_single_port_wide_fetch_memory(4, 512, 2);
      sp_mem.print_points();

      auto dp_mem = create_dual_port_memory(512);
      dp_mem.print_points();
      assert(false);
    }
  test_loop_perfection();
    {
      isl_ctx* ctx = isl_ctx_alloc();
      auto acc_0 = isl_map_read_from_str(ctx,"{ [i0]-> [3*i0]: 0<=i0<8}");
      auto delta_set = isl_map_deltas(acc_0);
      cout << "Delta: " << str(delta_set) << endl;
      assert(false);
    }
    {
      isl_ctx* ctx = isl_ctx_alloc();
      auto acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1]-> [4000 + i1]: i0=0 and i1=0}");
      auto aff = get_aff(acc_0);
      assert(false);
    }
    {
        isl_ctx* ctx = isl_ctx_alloc();
        auto acc_0 = isl_map_read_from_str(ctx,"{ sram2tb[i0, i2, i1]-> data[i0, i1+i2]: 0<=i0<=61 and 0<=i1<=61 and 0<=i2<=7}");

        auto trans = isl_map_read_from_str(ctx,"{ sram2tb[i0, i1]-> sram2tb[i0, i2, 4*i1+1]}");
        auto slice = isl_map_read_from_str(ctx,"{ data[i0, i1]-> data[i0, floor(i1/4)]}");
        //auto trans = get_domain_trans(domain(acc_0), 2, 4);
        auto res = dot(trans, acc_0);
        cout << "After vectorization: " << str(res) << endl;
        res = simplify(dot(res, slice));
        cout << "After vectorization: " << str(res) << endl;
        assert(false);
    }
    {
        isl_ctx* ctx = isl_ctx_alloc();
        auto acc_0 = isl_map_read_from_str(ctx,"{ sram2tb[i0, i1]-> data[130+64*i0+i1]: 0<=i0<=61 and 0<=i1<=61}");
        for (int dom_dim = 0; dom_dim < num_in_dims(acc_0); dom_dim ++) {
          auto trans = get_domain_trans(domain(acc_0), dom_dim, 4);
          auto res = dot(trans, acc_0);
          cout << "\tInitial result : " << str(res) << endl;
          //project all the inner dim
          for (int reset_dim = dom_dim+1; reset_dim < num_in_dims(acc_0); reset_dim ++) {
              res = reset_domain_coeff(res, reset_dim, 0);
              cout << "\treset: " << str(res) << endl;
          }
          if (dom_dim < num_in_dims(acc_0) - 1)
              res = isl_map_project_out(cpy(res), isl_dim_in, dom_dim+1, num_in_dims(acc_0) - dom_dim - 1);
          cout << "\tAfter trans: " << str(res) << endl;
        }
        //take the map with the lexmin point
        //auto sub_maps = get_basic_maps(res);
        //isl_map* target;
        //isl_point* min_pt;
        //for (auto m: sub_maps) {
        //    auto pt = lexminpt(range(to_map(m)));
        //    if (pt) {
        //        min_pt = pt;
        //        target = to_map(m);
        //    } else if(lex_gt_pt(pt, min_pt)){
        //        min_pt = pt;
        //        target = to_map(m);
        //    }
        //}
        //cout << "Final trans: " << str(target) << endl;
        assert(false);

    }
    {
        isl_ctx* ctx = isl_ctx_alloc();
        auto in_0 = isl_map_read_from_str(ctx,"{ input[i0, i1]-> data[i0, i1]: 0<=i0<=61 and 0<=i1<=61}");
        auto in_sched = isl_map_read_from_str(ctx,"{ input[i0, i1]-> [62*i0 + i1]: 0<=i0<=61 and 0<=i1<=61}");

        auto out_0 = isl_map_read_from_str(ctx,"{ output[i0, i1]-> data[i0, i1]: 0<=i0<=59 and 0<=i1<=61}");
        auto out_1 = isl_map_read_from_str(ctx,"{ output[i0, i1]-> data[i0+1, i1]: 0<=i0<=59 and 0<=i1<=61}");
        auto out_2 = isl_map_read_from_str(ctx,"{ output[i0, i1]-> data[i0+2, i1]: 0<=i0<=59 and 0<=i1<=61}");
        auto out_sched = isl_map_read_from_str(ctx,"{ output[i0, i1]-> [124+62*i0 + i1]: 0<=i0<=59 and 0<=i1<=61}");
        auto in_sched_shift = linear_schedule(in_sched, {1}, 62, false);
        auto data2cycle = dot(inv(in_0), in_sched_shift);
        auto new_outpt_acc = dot(out_sched, inv(data2cycle));
        cout << str(in_sched_shift) << endl;
        cout << str(data2cycle) << endl;
        cout << str(simplify_expr(new_outpt_acc)) << endl;
        assert(false);

    }

    {
        //Try to merge dimension
        isl_ctx* ctx = isl_ctx_alloc();
        auto access_map = isl_map_read_from_str(ctx, "{ conv[root = 0, y, x, ky, kx]->data[3*ky+kx]: 0<=x<=27 and 0<=y<=27 and 0<=kx<=2 and 0 <=ky<=2 }");
        cout << "Final access map: " << str(merge_domain_dim(access_map)) << endl;
        assert(false);
        get_domain_merge_dims(access_map);
        auto reduce_map = linear_domain_map_with_index(domain(access_map), {2,3});
        //auto reduce_map_2D = linear_address_map_with_index(range(access_map), {0,2});
        auto flatten_access_map = dot_domain(to_umap(access_map), to_umap(reduce_map));
        //auto flatten_access_map_2D = dot(access_map, reduce_map_2D);
        cout << "Origin: " << str(access_map) << endl;
        cout << "Reduce map: " << str(reduce_map) << endl;
        cout << "Rewrite: " << str(flatten_access_map) << endl;
        //cout << "Rewrite 2D: " << str(flatten_access_map_2D) << endl;
        assert(false);
    }
    /*{
        isl_ctx* ctx = isl_ctx_alloc();
        auto sched_0 = isl_map_read_from_str(ctx,  "{sram2tb[i0, i1]->[123 + 64*i0 + i1]: 0<=i0<=63 and 0<=i1<=63}");
        auto acc_0 = isl_map_read_from_str(ctx,"{ sram2tb[i0, i1]-> data[64*i0 + i1]: 0<=i0<=63 and 0<=i1<=63}");
        //auto domain_trans = isl_map_read_from_str(ctx,"{ sram2tb[i0, i1]-> sram2tb[floor(i0/2), i1]}");
        for ( int bk_num = 0; bk_num < 2; bk_num ++ ) {
          auto bank_func_0 = isl_set_read_from_str(ctx, string("{ data[i0]: floor((i0%128) / 64) = "+ str(bk_num) + "}").c_str());
          auto bank_0_acc_map = its_range(acc_0, bank_func_0);
          auto dom_0 = simplify(domain(bank_0_acc_map));
          cout << "domain " << bk_num <<": " << str(dom_0) << endl;
          vector<string> origin_var, new_var;
          for (int i = 0; i < num_dims(dom_0); i ++) {
              string name = dim_name(dom_0, i);
              origin_var.push_back(name);
              isl_val* res;
              isl_val* mod;
              isl_set_dim_residue_class_val(dom_0, i, &mod, &res);
              cout << "residual: " << isl_val_get_num_si(res) << endl;
              cout << "modulo: " << isl_val_get_num_si(mod) << endl;
              auto info = isl_set_get_stride_info(dom_0, i);
              auto aff = isl_stride_info_get_offset(info);
              int offset = -to_int(const_coeff(aff));
              cout << str(aff) << endl;
              cout << "tile " << bk_num << " dom stride " << i << " = " << stride_in_dim(dom_0, i) << endl;
              new_var.push_back(name + "*" + str(stride_in_dim(dom_0, i)) + "+" + str(offset));
          }
          string d_name = ::name(dom_0);
          string str_map = "{" + d_name + sep_list(origin_var, "[", "]", ",") + "->"
                  + d_name + sep_list(new_var, "[", "]", ",") + "}";
          auto op_trans = isl_map_read_from_str(ctx, str_map.c_str());
          cout << "Tile " << bk_num << " schedule: " << str(simplify(dot(op_trans, sched_0))) << endl;
          cout << "Tile " << bk_num << " acc_map : " << str(simplify(dot(op_trans, bank_0_acc_map))) << endl;

        }

        assert(false);
    }*/
    {
        isl_ctx* ctx = isl_ctx_alloc();
        auto acc_0 = isl_map_read_from_str(ctx,"{ sram2tb[i0, i1]-> data[i0+i1]: 0<=i0<=2 and 0<=i1<=28}");
        auto op_trans = isl_map_read_from_str(ctx, "{sram2tb[i0, i1]->sram2tb[i0, floor(i1/4)]}");
        auto op_trans_new = isl_map_read_from_str(ctx,
                "{sram2tb[i0, i1]->sram2tb[4*floor(i0/4), 4*floor(i1/4)];\
                sram2tb[i0, i1]->sram2tb[4*floor(i0/4), 4*floor(i1/4)+1];\
                sram2tb[i0, i1]->sram2tb[4*floor(i0/4), 4*floor(i1/4)+2];\
                sram2tb[i0, i1]->sram2tb[4*floor(i0/4), 4*floor(i1/4)+3]}");
        vector<int> min_by_dim = parse_pt(lexminpt(::domain(acc_0)));
        vector<int> max_by_dim = parse_pt(lexmaxpt(::domain(acc_0)));
        int vec_dim = num_in_dims(acc_0) - 1;
        int vectorized_dim_extent =
            max_by_dim.at(vec_dim) - min_by_dim.at(vec_dim);
        //Need to pad the map if it's exactly the multiplier of 4
        if (vectorized_dim_extent % 4) {
            acc_0 = pad_to_domain_ubuf_map(acc_0, vec_dim, 1);
        }
        cout << "After pad: " << str(acc_0) << endl;
        auto align_trans = isl_map_read_from_str(ctx, "{data[i]->data[i - i%4]}");
        auto vectorize_trans = isl_map_read_from_str(ctx, "{data[i]->data[i]; data[i]->data[i+1]; data[i]->data[i+2]; data[i]->data[i+3]}");
        auto acc_vec = dot(inv(op_trans), acc_0);
        auto acc_align = dot(inv(op_trans), dot(op_trans_new, acc_0));
        /*auto acc_align = isl_map_read_from_str(ctx,
                "\
                {\
                sram2tb[i0, i1]->data[floor(i0/4) + 4*i1 + 0];\
                sram2tb[i0, i1]->data[floor(i0/4) + 4*i1 + 1];\
                sram2tb[i0, i1]->data[floor(i0/4) + 4*i1 + 2];\
                sram2tb[i0, i1]->data[floor(i0/4) + 4*i1 + 3];\
                }\
                ");*/
        acc_align = its(acc_align, domain(acc_0));


        //auto acc_align = dot(dot(acc_0, align_trans), vectorize_trans);
        cout << "get align map range: " << str(range(acc_align)) << endl;
        cout << "get align map domain: " << str(domain(acc_align)) << endl;
        cout << "get align map: " << str(acc_align) << endl;
        auto pt_cnt = 0;
        for (auto b_map: get_basic_maps(acc_align)){
            cout << tab(2) << "Pt: " <<  pt_cnt << " => " << str(get_aff(to_map(b_map))) << endl;
        }
        assert(false);
    }
    //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto access_map = isl_map_read_from_str(ctx,"{ output_2_sram2tb[i0, i1, i2, i3] -> data[2 + 16i1 + 4i2 + 4i3 - 4*floor((1 + i3)/2)]: 0<=i3<=1}");
    //auto padded = pad_map(access_map, 5);
    //auto tile_map = pad_identity_relation_to_map(access_map, 1, 0, -1, 3);
    //cout << "Insert: " << str(tile_map) << endl;
    //cout << "Padded: " << str(padded) << endl;
    //cout << str(access_map) << endl << str(simplify_expr(access_map)) << endl;
    //cout << str(get_aff(simplify_expr(access_map))) << endl;
    //assert(false);
    //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto access_map = isl_map_read_from_str(ctx, "{ conv[root = 0, x, y, z]->data[x, y, z]: 0<=x<=4 and 0<=y<=6 and 0<=z<=1 }");
    //auto reduce_map = linear_address_map_with_index(range(access_map), {0,1,2});
    //auto reduce_map_2D = linear_address_map_with_index(range(access_map), {0,2});
    //auto flatten_access_map = dot(access_map, reduce_map);
    //auto flatten_access_map_2D = dot(access_map, reduce_map_2D);
    //cout << "Origin: " << str(access_map) << endl;
    //cout << "Rewrite: " << str(flatten_access_map) << endl;
    //cout << "Rewrite 2D: " << str(flatten_access_map_2D) << endl;
    //assert(false);
  //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto access_map = isl_map_read_from_str(ctx, "{ a[root=0, x, y, z]-> b[2*x + y, 4*z]: 0<=x<=7 and 0<=y<=7 and 0<=z<=3}");
    //for (int i = 0; i < get_in_dim(access_map); i ++) {
        //cout << "map input : " << get_dim_min(domain(access_map), i)
            //<< get_dim_max(domain(access_map), i) <<endl;
    //}
    //for (int i = 0; i < get_out_dim(access_map); i ++) {
        //cout << "map output card: " << str(get_out_range(access_map, i)) << endl;
    //}
    //assert(false);

  //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto sched = rdmap(ctx, "{ op_hcompute_hw_input_stencil_agg2sram[0,i0, i1] -> [i0, 3 + 4i1, 2] : 0 <= i0 <= 3 and 0 <= i1 <= 2047; op_hcompute_conv_stencil_1[0, i0, i1] -> [i0, 8191 + i1, 3] : 0 <= i0 <= 3 and 0 <= i1 <= 112895; op_hcompute_hw_input_stencil[0, i0, i1] -> [i0, i1, 0] : 0<= i0 <= 3 and 0 <= i1 <= 8191; op_hcompute_conv_stencil_1_sram2tb[0, i0, i1] -> [i0, 8191 + 2i1, 1] : 0 <= i0 <= 3 and 0 <= i1 <= 56447 }");
    //cout << codegen_c(sched) << endl;
    //assert(false);
  //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //cout << str(form_pt({0,1})) << endl;
    //auto access_map = isl_map_read_from_str(ctx, "{ a[root=0, x, y, z]-> b[x + y, z]: 0<=x<=7 and 0<=y<=7 and 0<=z<=3}");
    //cout << str(project_all_but(access_map, 1)) << endl;
    //cout << str(project_all_but(access_map, 0)) << endl;
    //auto acc_map = isl_map_read_from_str(ctx, "{ a[root=0, x, y, z]-> [x + y, x]: z=2}");
    //auto sched = isl_map_read_from_str(ctx, "{ p[x, y, z]->[0, 0, x, 0, y, 0, z, 0]}");
    //auto sched_exp = isl_map_read_from_str(ctx, "{ p[0, x, y, z]->[x+2, y+1, 2*z+3]: 0<=x<=14 and 0<=y<=15 and 0<=z<=10}");
    //cout << str(sample(range(sched_exp))) << endl;
    //cout << int_upper_bound(get_out_range(sched_exp, 2));
    //auto pad_sched = pad_one_more_dim_to_sched_map_with_id(to_umap(sched_exp), 1, 0);
    //auto delay_sched = delay_schedule_domain_dim(sched, 2 , 1);
    //auto peel_sched = peel_schedule_domain_dim(sched, 1 , 1);
    //auto trans = flatten_map_domain_trans_with_dim(sched_exp, 2);
    //cout << str(trans) << endl;
    //cout << "origin: " << str(sched) << "\ndelay: " << str(delay_sched) << "\npeel:" << str(peel_sched) <<  endl;
    //cout << "origin: " << str(sched_exp) << "\npad_sched: " << str(pad_sched) <<  endl;
    //cout << "relation map:" << relation_map(acc_map) << endl;

    //isl_ctx_free(ctx);
    //assert(false);
  //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto dom = isl_union_set_read_from_str(ctx, "{ p[x] : 0 <= x <= 200; c[x] : 30 <= x <= 50 }");
    //auto dep = rdmap(ctx, "{ p[x] -> c[y] : 2*y - 10 <= x <= 2*y + 10 }");
    //print_hw_schedule(dom, its(dep, dom));

    //isl_ctx_free(ctx);
    //assert(false);
  //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto dom = isl_map_read_from_str(ctx, "{ p[x] -> c[k] : exists y : 2y = x and x = 3*k }");
    //cout << "dom = " << str(dom) << endl;
    //for (auto m : get_basic_maps(dom)) {
      //cout << "flattened = " << str(flatten_bmap_to_bset(m)) << endl;
    //}
    ////auto dep = rdmap(ctx, "{ p[x, y] -> c[x, y] }");
    ////print_hw_schedule(dom, its(dep, dom));

    //isl_ctx_free(ctx);
    //assert(false);
  //}
  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto dom = isl_union_set_read_from_str(ctx, "{ p[x, y] : 0 <= x <= 200 and 0 <= y <= 10; c[x, y] : 30 <= x <= 50 and 0 <= y <= 10}");
    //auto dep = rdmap(ctx, "{ p[x, y] -> c[x, y] }");
    //print_hw_schedule(dom, its(dep, dom));

    //isl_ctx_free(ctx);
    //assert(false);
  //}

  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto s = rdset(ctx, "{ [x, y] : 2y = x }");
    //cout << "pre projection: " << str(s) << endl;

    //auto p = isl_set_project_out(s, isl_dim_set, 1, 1);
    //cout << "post          : " << str(p) << endl;
    //for (auto bset : get_basic_sets(p)) {
      //cout << str(bset) << endl;
      //auto ineqs = isl_basic_set_inequalities_matrix(bset,
          //isl_dim_set, isl_dim_div, isl_dim_param, isl_dim_cst);
      //cout << "ineqs: " << endl;
      //cout << str(ineqs) << endl;
      //auto eqs = isl_basic_set_equalities_matrix(bset,
          //isl_dim_set, isl_dim_div, isl_dim_param, isl_dim_cst);
      //cout << "eqs: " << endl;
      //cout << str(eqs) << endl;
    //}
    //isl_ctx_free(ctx);
    //assert(false);
  //}

  //{
    //isl_ctx* ctx = isl_ctx_alloc();
    //auto s = rdset(ctx, "{ [x, y] : y = 5 and x >= -4 and x < 19}");
    //auto fs = form_farkas_constraints(to_bset(s), {{"x", "II_x"}, {"y", "II_y"}}, "d");
    //cout << "fs = " << str(fs) << endl;
    //auto extra_constraint = rdset(ctx, "{ [II_x, II_y, b, c, d, e, f, g] : II_y >= 1 and II_x >= 1 }");
    //auto sol = its(extra_constraint, to_set(fs));
    //cout << "New fs = " << str(sol) << endl;
    //auto pt = sample(sol);
    //cout << "Example solution: " << str(pt) << endl;
    //isl_ctx_free(ctx);
  //}

  //assert(false);
  //{
    //prog prg;


    //umap* sched = rdmap(prg.ctx, "{ B[k, 0] -> [k, 0]; B[k, 1] -> [k, 1] }");
    //umap* m = rdmap(prg.ctx, "{ B[k, 0] -> b[k]; B[k, 1] -> b[k + 1]}");
    //auto read_id = isl_union_set_identity(cpy(domain(m)));
    //auto same = diff(dot(m, inv(m)), read_id);
    //cout << "same = " << str(same) << endl;
    //auto earlier = lex_gt(sched, sched);
    //auto se = its(same, earlier);
    //cout << "se   = " << str(se) << endl;
    //for (auto m : get_maps(se)) {
      //auto pw = isl_pw_multi_aff_from_map(m);
      //cout << tab(1) << str(pw) << endl;
    //}
    //assert(false);
  //}

  //prog prg;
  //prg.compute_unit_file = "mobilenet_compute.h";
  //prg.name = "reduce_2d";
  //prg.add_input("in");
  //prg.add_output("out");
  //prg.buffer_port_widths["in"] = 32;
  //prg.buffer_bounds["in"] = {3, 3};

  //prg.buffer_port_widths["out"] = 32;
  //prg.buffer_bounds["out"] = {1};

  //prg.buffer_port_widths["I"] = 32;
  //prg.buffer_bounds["I"] = {3, 3};

  //prg.buffer_port_widths["tmp"] = 32;
  //prg.buffer_bounds["tmp"] = {1};

  //auto read_in = prg.add_nest("rd_r", 0, 3, "rd_c", 0, 3)->add_op({"I", "rd_r, rd_c"}, "id", {"in", "rd_r, rd_c"});

  //{
    //auto init = prg.add_op("set_z");
    //init->add_function("set_zero_32");
    //init->add_store("tmp", "0");

    //auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 3);
    //auto accum = accum_loop->add_op("accumulate");
    //auto tmp = accum->add_load("tmp", "0");
    //auto next = accum->add_load("I", "ar, ac");
    //accum->add_function("inc", {tmp, next});
    //accum->add_store("tmp", "0");

    //auto write_out = prg.add_op("output");
    //write_out->add_load("tmp", "0");
    //write_out->add_store("out", "0");
  //}

  //cout << "Original program" << endl;
  //prg.pretty_print();
  //cout << endl;

  //auto domain = prg.whole_iteration_domain();

  //auto order_deps = prg.relative_orders();
  //cout << "Getting validity deps..." << endl;
  //isl_union_map *raw_deps = prg.validity_deps();
  //cout << "Got validity deps..." << endl;
  //cout << "Validity: " << str(raw_deps) << endl;
  //auto validity =
    //unn(order_deps, raw_deps);
  //isl_union_map *proximity =
    //cpy(raw_deps);

  //umap* clksched_map = clockwork_schedule_umap(domain, validity, proximity);
  ////map<string, isl_aff*> clksched = clockwork_schedule(domain, validity, proximity);
  ////cout << "---- Clockwork schedule:" << endl;
  ////for (auto s : clksched) {
    ////cout << tab(1) << s.first << " -> ";
    ////for (auto v : s.second) {
      ////cout << str(v) << ", ";
    ////}
    ////cout << endl;
  ////}

  ////auto clksched_map = its(to_umap(clksched), domain);
  //cout << "sched map: " << str(clksched_map) << endl;
  ////assert(false);
  ////cout << "Program code without optimization..." << endl;
  ////prg.unoptimized_codegen();
  ////cout << endl;

  ////cout << "Program with optimized schedule..." << endl;
  ////umap* opt_sched = prg.optimized_codegen();
  ////cout << "Consumer maps..." << endl;
  ////cout << tab(1) << str(prg.consumer_map()) << endl;

  ////cout << "Schedules..." << endl;
  ////for (auto s : prg.schedules()) {
    ////cout << tab(1) << str(s.second) << endl;
    ////auto next_op = lexmin(lex_lt(s.second, s.second));
    ////cout << "next op: " << str(next_op) << endl;
  ////}

  ////isl_ctx* ct = isl_ctx_alloc();

  //////uset* dom = isl_union_set_read_from_str(ct, "{ P[x] : 0 <= x <= 10; C[x] : 0 <= x <= 10 }");
  ////uset* dom =
    ////isl_union_set_read_from_str(ct, "{ P[x, k] : 0 <= x <= 10 and 0 <= k <= 10; C[x, k] : 0 <= x <= 10 and 0 <= k <= 10 }");
  ////umap* validity =
    ////rdmap(ct, "{ P[x, k] -> C[y, l] : x = 2y + 3 }");
    //////rdmap(ct, "{ P[x, k] -> C[y, l] : k = l and x = 2y + 3 }");
    //////rdmap(ct, "{ P[x] -> C[y] : x = 2y + 3 }");
    //////rdmap(ct, "{ P[x] -> C[y] : x = floor(y/2) }");
    //////rdmap(ct, "{ P[x] -> C[x] }");
  ////umap* proximity =
    ////cpy(validity);

  ////clockwork_schedule(dom, validity, proximity);
  //////experimental_opt(dom, validity, proximity);


  ////isl_aff* zero = rdaff(ct, "{ [a, b] -> [0] }");
  ////isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor(a/2) + 3] }");
  //////isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor((a + 3b + floor(2a - 7b / 9)) / 2)] }");
  //////isl_aff* aff = rdaff(ct, "{ [a, b] -> [3 a / 2 + 2 b / 15] }");
  //////isl_aff* aff = rdaff(ct, "{ [a, b] -> [(a + b) % 2] }");
  //////isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor((a + 3b) / 2)] }");
  //////isl_aff* aff = rdaff(ct, "{ [a, b] -> [(a + 3b) % 2 + a / 6] }");
  ////cout << "aff = " << str(aff) << endl;
  ////cout << "const = " << str(constant(aff)) << endl;
  ////int in_dims = num_in_dims(aff);
  ////cout << "input dimension: " << in_dims << endl;
  ////int out_dims = num_out_dims(aff);
  ////cout << "output dimension: " << out_dims << endl;

  ////isl_local_space* ls = isl_aff_get_local_space(aff);
  ////int div_dims = isl_local_space_dim(ls, isl_dim_div);
  ////cout << "div dimension   : " << isl_local_space_dim(ls, isl_dim_div) << endl;
  ////cout << "all dimensions  : " << isl_local_space_dim(ls, isl_dim_all) << endl;
  ////cout << "Local space: " << str(ls) << endl;

  ////for (int i = 0; i < in_dims; i++) {
    ////cout << i << "th coeff: " << str(isl_aff_get_coefficient_val(aff, isl_dim_in, i)) << endl;
  ////}
  //////for (int i = 0; i < out_dims; i++) {
    //////cout << i << "th div  : " << str(isl_aff_get_div(aff, i)) << endl;
  //////}
  ////for (int i = 0; i < div_dims; i++) {
    ////cout << i << "th div      : " << str(isl_aff_get_div(aff, i)) << endl;
    ////cout << i << "th div coeff: " << str(isl_aff_get_coefficient_val(aff, isl_dim_div, i)) << endl;
  ////}

  ////isl_basic_set* bset = isl_aff_eq_basic_set(cpy(aff), cpy(zero));
    //////isl_basic_set_read_from_str(ct, "{ [a, b] }");
    //////isl_basic_set_universe(get_space(aff));


  ////cout << "bset: " << str(bset) << endl;
  ////auto mat = isl_basic_set_equalities_matrix(bset, isl_dim_cst, isl_dim_param, isl_dim_set, isl_dim_div);
  ////cout << "Eq Rows: " << isl_mat_rows(mat) << endl;
  ////cout << "Eq Cols: " << isl_mat_cols(mat) << endl;

  ////auto ineqmat = isl_basic_set_inequalities_matrix(bset, isl_dim_cst, isl_dim_param, isl_dim_set, isl_dim_div);
  ////cout << "Ineq Rows: " << isl_mat_rows(ineqmat) << endl;
  ////cout << "Ineq Cols: " << isl_mat_cols(ineqmat) << endl;
  ////for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
    ////for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
      ////cout << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
    ////}
    ////cout << endl;
  ////}


  ////auto prev = rdaff(ct, "{ [x] -> [floor(x / 2)] }");
  ////auto next = rdaff(ct, "{ [x] -> [floor((x + 1) / 2)] }");

  ////cout << "prev: " << str(prev) << endl;
  ////cout << "next: " << str(next) << endl;
  ////cout << "diff: " << str(isl_aff_sub(cpy(next), cpy(prev))) << endl;

  ////auto comps_set = isl_set_read_from_str(ct, "{ [a, b] : 0 <= a <= 10 and 0 <= b <= 11 }");
  ////auto flat_set = isl_set_flatten(cpy(comps_set));
  ////cout << "comps_set: " << str(comps_set) << endl;
  ////cout << "flat_set : " << str(flat_set) << endl;

  //////isl_mat* matrix = aff->ls->div;
  ////isl_ctx_free(ct);

}

void new_bankmerge_tests() {
  conv33_test();
  //assert(false);

  bankmerge_vec_test();
  auto_vec_test();
  flatten_sched_test();
}

void naive_implementations() {
  exposure_fusion_fpga_test("ef_fpga");
  gauss_pyramid_fpga_test("gp_fpga");
  max_pooling_test("mp25");
  //assert(false);
}

void iccad_tests() {
  // ef_cartoon
  int throughput = 1;
  //string name = "ef_" + str(throughput) + "_500";
  string name = "ef_" + str(throughput); // + "_500";
  App ef = ef_cartoon(name);
  CodegenOptions options;
  options.internal = true;
  //options.num_input_epochs = 1;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  //options.rtl_options.hls_clock_target_Hz = 500000000;
  int rows = 1920;
  int cols = 1080;
  ef.realize(options, name, {cols, rows}, "in", throughput);

  move_to_benchmarks_folder(name + "_opt");
  assert(false);

  // exposure_fusion_app
  exposure_fusion_iccad_apps("ef_fpga_rerun");

  stencil_chain_15_stage_iccad_apps("ic15_275MHz");
  assert(false);

  // ef_cartoon
  ef_cartoon_test("ef_cartoon");


  // exposure_fusion_app
  exposure_fusion();
  assert(false);



  heat_3d_real_iccad_apps("heat3dlafe_1", 1);
  //heat_3d_real_iccad_apps("heat3dla_8", 8);
  float_big_stencil_iccad_apps("flt_stencil", 1);

  stencil_chain_12_stage_iccad_apps("ic12_small_300MHz");
  stencil_chain_15_stage_iccad_apps("ic15_300MHz");
  heat_3d_iccad_apps("heat2d_1");
  float_stencil_iccad_apps("float_stencil");
  float_add_iccad_apps("float_add");
  //heat_3d_iccad_apps("h10_1_300MHz");
  //stencil_chain_iccad_apps("icsc_500MHz");
  //stencil_chain_20_stage_iccad_apps("ic20_500MHz");
  //stencil_chain_20_stage_iccad_apps("ic20_400MHz");
  stencil_chain_20_stage_iccad_apps("ic20_300MHz");
  stencil_chain_iccad_apps("icsc_500MHz");
  stencil_chain_fan_out_iccad_apps("icfo");
  stencil_chain_eight_stage_iccad_apps("icsc_8s");
  stencil_chain_one_stage_iccad_apps("icsc_1s");
  increment_iccad_apps("inc");
  camera_pipeline_test("cp_noinit_ln1c");
  sobel_16_app_test("sbl_ln");
  blur_xy_16_app_test("bxy_noinit_ln");
  assert(false);

  stencil_chain_five_stage_iccad_apps("icsc_5s");
  stencil_chain_no_dsp_long_iccad_apps("icsc_ndln");
  stencil_chain_no_dsp_iccad_apps("icsc_nd");
  identity_stream_iccad_apps("idstream");


  gauss_pyramid_iccad_apps("gp_fpga");
  gauss_pyramid_test("gp_fpga");
  max_pooling_test("mpr16b_32");


  App gp = gauss_pyramid_fpga("gp_sm");
  generate_app_benchmark("gp_sm", gp, {64, 64}, 1);

  gauss_pyramid_fpga_test("gp_fpga");

  gauss_pyramid_fpga_test("gp_fpga");

  int index = 20;
  string istr = str(index);


  harris16_test("hr" + istr);
  different_path_latencies_test("dp");
  harris_test();
  pointwise_app_test();
}

void mini_application_tests() {
  reduce_2d_test();
  reduce_1d_test();
  up_unrolled_4_test();
  up_unrolled_test();
  up_down_unrolled_test();
  jacobi2d_app_test();
  two_in_window_test();
  two_in_conv2d_test();
  gaussian_pyramid_test();
  warp_and_upsample_test();
  up_stencil_test();
  neg_stencil_test();
  blur_x_test();
  harris16_test("hrs");
  denoise3d_reconvergence_test();
  blur_xy_16_app_test("bxy");
  sobel_16_app_test("sbl");
  single_gaussian_pyramid_app_test();
  max_pooling_test("mp");
  exposure_fusion();
}

prog pyr_conv_1d() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "pyr_conv_1d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M1"] = 32;
  prg.buffer_port_widths["M2"] = 32;
  prg.buffer_port_widths["M3"] = 32;
  prg.buffer_port_widths["M1_o"] = 32;
  prg.buffer_port_widths["M2_o"] = 32;
  prg.buffer_port_widths["M3_o"] = 32;

  int size1 = 134;
  int size1_o = size1 - 2;
  int size2 = size1_o / 2;
  int size2_o = size2 - 2;
  int size3 = size2_o / 2;
  int size3_o = size3 - 2;

  cout << "Pyramid sizes: " << size1 << " " << size1_o << " " << size2 << " " << size2_o << " " << size3 << " " << size3_o << endl;

  //prg.add_nest("dr", 0, (64) / 2, "dc", 0, (64) / 2)->
    //add_op({"downsampled", "dr, dc"}, "id", {"I", "2*dr, 2*dc"});

  auto p = prg.add_loop("p", 0, size1);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M1", "p");

  // compute
  auto c1 = prg.add_loop("c1", 0, size1_o);
  auto compute1 = c1->add_op("compute_level_1");
  compute1->add_function("accumulate_3");
  compute1->add_load("M1", "c1");
  compute1->add_load("M1", "c1 + 1");
  compute1->add_load("M1", "c1 + 2");
  compute1->add_store("M1_o", "c1");

  // downsample
  prg.add_nest("d1", 0, size2, "dc1", 0, size2)->
    add_op({"M1_o", "d1, dc1"}, "id", {"M2", "2*d1, 2*dc1"}); // FIXME use of undeclared identifier 'id'

//  auto d1 = prg.add_loop("d1", 0, size2);
//  auto down1 = p->add_op("downsample");
//  down1->add_load("M1_o", "2 * d1"); // FIXME compile error
//  down1->add_store("M2", "d1");

  // compute
  auto c2 = prg.add_loop("c2", 0, size2_o);
  auto compute2 = c2->add_op("compute_level_2");
  compute2->add_function("accumulate_3");
  compute2->add_load("M2", "c2");
  compute2->add_load("M2", "c2 + 1");
  compute2->add_load("M2", "c2 + 2");
  compute2->add_store("M2_o", "c2");

  // downsample
  prg.add_nest("d2", 0, size3, "dc2", 0, size3)->
    add_op({"M2_o", "d2, dc2"}, "id", {"M3", "2*d2, 2*dc2"}); // FIXME use of undeclared identifier 'id'

//  auto d2 = prg.add_loop("d2", 0, size3);
//  auto down2 = p->add_op("downsample");
//  down2->add_load("M2_o", "2*d2"); // FIXME compile error
//  down2->add_store("M3", "d2");

  // compute
  auto c3 = prg.add_loop("c3", 0, size3_o);
  auto compute3 = c3->add_op("compute_level_3");
  compute3->add_function("accumulate_3");
  compute3->add_load("M3", "c3");
  compute3->add_load("M3", "c3 + 1");
  compute3->add_load("M3", "c3 + 2");
  compute3->add_store("out", "c3");

  return prg;
}

void pyr_1d_conv_test() {
  prog pyr = pyr_conv_1d();
  regression_test(pyr);
}

void compute_unit_with_index_variables_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "compute_unit_with_index_variable";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto compute = c->add_op("compute_output");
  compute->add_function("compute_with_variable");
  compute->compute_unit_needs_index_variable("c");
  compute->add_load("M", "c");
  compute->add_store("out", "c");

  regression_test(prg);


}

void register_file_test() {
  prog prg("reduce_register_file");
  prg.add_input("in_oc");
  prg.add_output("out_oc");

  int len = 1000;

  auto load_in = prg.add_loop("li", 0, len);
  auto ld = load_in->add_op("ld_in");
  ld->add_load("in_oc", "li");
  ld->add_store("in", "li");

  auto clp = prg.add_loop("c", 0, len - 2);
  auto init = clp->add_op("init_tmp");
  init->add_function("set_zero_32");
  init->add_store("tmp", "c");
  auto comp = clp->add_loop("i", 0, 3)->add_op("cp");
  comp->add_function("add");
  comp->add_load("tmp", "c");
  comp->add_load("in", "c + i");
  comp->add_store("tmp", "c");

  auto st = clp->add_op("store_out");
  st->add_load("tmp", "c");
  st->add_store("out_oc", "c");

  prg.pretty_print();
  prg.sanity_check();
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;
  options.banking_strategies["tmp"] = {"register_file"};
  options.banking_strategies["in"] = {"register_file"};
  regression_test(options, prg);
  //assert(false);
}

void print_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

	const char *str;
	isl_set *set;
	isl_union_map *schedule;
	isl_union_map *options;
	isl_ast_build *build;
	isl_ast_node *tree;

	str = "{ A[i,j] -> [i,j] : 0 <= i,j <= 1 }";
	schedule = isl_union_map_read_from_str(ctx, str);
	set = isl_set_universe(isl_space_params_alloc(ctx, 0));
	build = isl_ast_build_from_context(set);

	//str = "{ [i,j] -> atomic[1] : i + j = 1; [i,j] -> unroll[1] : i = j }";
	//str = "{ [i, j] -> atomic[1] }";
  //str = "{ [i,j] -> unroll[0] }";
  //[i,j] -> atomic[1] : i + j = 1; [i,j] -> unroll[1] : i = j }";
	options = isl_union_map_read_from_str(ctx, str);
	build = isl_ast_build_set_options(build, options);
	tree = isl_ast_build_node_from_schedule_map(build, schedule);
  char* code_str = isl_ast_node_to_C_str(tree);
  std::string code_string(code_str);
  free(code_str);
  cout << "Code..." << endl;
  cout << code_string << endl;
	isl_ast_build_free(build);
	isl_ast_node_free(tree);

  isl_ctx_free(ctx);
  //assert(false);
}

void manual_unroll_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "manual_unroll";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 5);
  {
    auto write = p->add_op("get_input0");
    write->add_load("in", "2*p");
    write->add_load("in", "2*p + 1");
    write->add_store("M", "2*p");
    write->add_store("M", "2*p + 1");
  }

  auto c = prg.add_loop("c", 0, 3);
  {
    auto compute = c->add_op("l0");
    compute->add_function("conv_1_3");
    compute->add_load("M", "2*c");
    compute->add_load("M", "2*c + 1");
    compute->add_load("M", "2*c + 2");
    compute->add_store("out", "2*c");
  }
  {
    auto compute = c->add_op("l1");
    compute->add_function("conv_1_3");
    compute->add_load("M", "2*c + 1");
    compute->add_load("M", "2*c + 2");
    compute->add_load("M", "2*c + 3");
    compute->add_store("out", "2*c + 1");
  }

  //{
    //auto p = prg.add_loop("co", 0, 6);
    //auto write = p->add_op("push_out");
    //write->add_load("out_tmp", "co");
    //write->add_store("out", "co");
  //}
  regression_test(prg);

  //assert(false);
}

void histogram_test() {
  prog prg;
  prg.name = "histogram";
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.add_input("image_oc");
  prg.add_output("color_counts");

  auto ld = prg.add_loop("im", 0, 20)->
    add_op("load_image_oc");
  ld->add_load("image_oc", "im");
  ld->add_store("image", "im");

  // Assume zero initialization for now
  {
    auto st = prg.add_loop("iz", 0, 20)->
      add_op("init_counts");
    st->add_function("set_zero_32");
    st->add_store("buckets", "iz");
  }

  auto count_loop = prg.add_loop("i", 0, 20);
  auto update = count_loop->add_op("update_counts");
  update->add_function("histogram_inc");
  update->add_dynamic_load("buckets", "image", "i"); // buckets[image[i]]
  update->add_dynamic_store("buckets", "image", "i");// buckets[image[i]]

  auto st = prg.add_loop("sm", 0, 20)->
    add_op("store_results");
  st->add_load("buckets", "sm");
  st->add_store("color_counts", "sm");

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  generate_unoptimized_code(options, prg);
  generate_regression_testbench(prg);

  int res = system(string("g++ -fstack-protector-all -std=c++11 -c unoptimized_" + prg.name + ".cpp").c_str());
  assert(res == 0);

  int compile_res = system("g++ -std=c++11 unoptimized_histogram.cpp ./manual_tbs/histogram_tb.cpp -I .");
  assert(compile_res == 0);

  int run_res = system("./a.out");
  assert(run_res == 0);

  prg.pretty_print();
  //assert(false);
}

template<typename T>
vector<T> levels_above(const T& target_level, const std::vector<T>& c) {
  vector<T> above;
  for (auto l : c) {
    if (l != target_level) {
      above.push_back(l);
    } else {
      break;
    }
  }
  return above;
}

template<typename T>
T last_common_level(const std::vector<T>& a, const std::vector<T>& b) {
  for (int i = 0; i < (int) a.size() - 1; i++) {
    assert((int) a.size() > i + 1);
    assert((int) b.size() > i + 1);
    if (a.at(i + 1) != b.at(i + 1)) {
      return a.at(i);
    }
  }

  assert(false);
  return a.back();
}

template<typename T>
vector<T> levels_below(const T& target_level, const std::vector<T>& c) {
  vector<T> above;
  bool past = false;
  for (auto l : c) {
    if (l != target_level) {
      if (past) {
        above.push_back(l);
      }
    } else {
      past = true;
    }
  }
  return above;
}


void register_file_optimization_test() {
  prog prg("register_file");
  prg.add_input("in_oc");
  prg.add_output("out_oc");

  int len = 1000;

  auto load_in = prg.add_loop("li", 0, len);
  auto ld = load_in->add_op("ld_in");
  ld->add_load("in_oc", "li");
  ld->add_store("in", "li");

  auto clp = prg.add_loop("c", 0, len - 2);
  auto comp = clp->add_loop("i", 0, 3)->add_op("cp");
  comp->add_function("add");
  comp->add_load("tmp", "c");
  //comp->add_load("in_rf", "c, i");
  //comp->add_load("in", "c, i");
  comp->add_load("in", "c + i");
  comp->add_store("tmp", "c");

  auto st = clp->add_op("store_out");
  st->add_load("tmp", "c");
  st->add_store("out_oc", "c");

  prg.pretty_print();
  prg.sanity_check();

  string old_name = prg.name;
  prg.name = "unoptimized_" + prg.name;
  generate_unoptimized_code(prg);
  generate_regression_testbench(prg);
  auto unopt = run_regression_tb(prg);
  prg.name = old_name;

  auto iter_vars = prg.iter_vars();
  string target_buf = "in";
  string target_level = "c";
  cout << "Registerizing: " << target_buf << " at level " << target_level << endl;
  op* source = find_writer(target_buf, prg);
  auto source_levels = map_find(source, iter_vars);
  cout << "source = " << source->name << endl;
  auto possible_ops = prg.find_loop(target_level)->descendant_ops();
  for (auto op : possible_ops) {
    if (elem(target_buf, buffers_referenced(op))) {
      cout << tab(1) << "op: " << op->name << endl;
      auto levels = map_find(op, iter_vars);
      cout << tab(2) << "levels: " << str(levels) << endl;
      cout << tab(3) << "above target: " << str(levels_above(target_level, levels)) << endl;
      cout << tab(3) << "below target: " << str(levels_below(target_level, levels)) << endl;
      cout << tab(3) << "last common : " << last_common_level(levels, source_levels) << endl;

      auto level_c = prg.find_loop(target_level);
      auto lc = prg.find_loop(last_common_level(levels, source_levels));
      string rf_var = target_buf + "_rf";
      auto fresh = lc->add_loop_after(source, rf_var, level_c->start - 2, level_c->end_exclusive);
      int i = 0;
      string register_file = target_buf + "_rf_at_" + op->name;
      for (auto lv : levels_below(target_level, levels)) {
        for (int tc = 0; tc < prg.trip_count(lv); tc++) {
          auto ld = fresh->add_op("unrolled_" + str(i));
          ld->add_load(target_buf, rf_var + " + " + str(i));
          ld->add_store(register_file, rf_var + ", " + str(i));
          i++;
        }
      }

      op->replace_reads_from(target_buf, register_file);
      piecewise_address addr{{"", "c, i"}};
      op->consume_locs_pair[1] =
      {op->consume_locs_pair[1].first, addr};
    }
  }

  cout << "After registerizing" << endl;
  prg.pretty_print();
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;
  //options.register_files.insert("in_rf");
  options.banking_strategies["in_rf_at_cp"] = {"register_file"};

  assert(prg.compute_unit_file != "");


  //assert(false);
  generate_optimized_code(options, prg);
  generate_regression_testbench(prg);
  auto opt = run_regression_tb(prg);

  compare("register_file_optimization_test", opt, unopt);

  assert(false);
}

prog conv_layer_3D() {
  prog prg;
  prg.compute_unit_file = "conv_layer_3D_compute.h";
  prg.name = "conv_layer_3D";

// Stencil<uint16_t, 18, 26, 64> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint16_t, 3, 3, 64, 46> &weight_copy_stencil = arg_1;
  prg.add_input("weight_copy_stencil");
  prg.buffer_port_widths["weight_copy_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming weight_copy.stencil
//consuming input_copy.stencil
////producing hw_input.stencil
  auto loop_hw_input_s0_c = prg.add_loop("hw_input_s0_c", 0, 64);
  auto loop_hw_input_s0_y = loop_hw_input_s0_c->add_loop("hw_input_s0_y", 0, 26);
  auto loop_hw_input_s0_x = loop_hw_input_s0_y->add_loop("hw_input_s0_x", 0, 18);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c)
  auto hcompute_hw_input_stencil = loop_hw_input_s0_x->add_op("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");
////producing hw_weight.stencil
  auto loop_hw_weight_s0_k = prg.add_loop("hw_weight_s0_k", 0, 46);
  auto loop_hw_weight_s0_c = loop_hw_weight_s0_k->add_loop("hw_weight_s0_c", 0, 64);
  auto loop_hw_weight_s0_y = loop_hw_weight_s0_c->add_loop("hw_weight_s0_y", 0, 3);
  auto loop_hw_weight_s0_x = loop_hw_weight_s0_y->add_loop("hw_weight_s0_x", 0, 3);

//store is: hw_weight.stencil(hw_weight.s0.x, hw_weight.s0.y, hw_weight.s0.c, hw_weight.s0.k) = weight_copy.stencil(hw_weight.s0.x, hw_weight.s0.y, hw_weight.s0.c, hw_weight.s0.k)
  auto hcompute_hw_weight_stencil = loop_hw_weight_s0_x->add_op("hcompute_hw_weight_stencil");
  hcompute_hw_weight_stencil->add_function("hcompute_hw_weight_stencil");
  hcompute_hw_weight_stencil->add_load("weight_copy_stencil", "hw_weight_s0_x", "hw_weight_s0_y", "hw_weight_s0_c", "hw_weight_s0_k");
  prg.buffer_port_widths["hw_weight_stencil"] = 16;
  hcompute_hw_weight_stencil->add_store("hw_weight_stencil", "hw_weight_s0_x", "hw_weight_s0_y", "hw_weight_s0_c", "hw_weight_s0_k");
////producing conv.stencil
  auto loop_conv_s0_k = prg.add_loop("conv_s0_k", 0, 46);
  auto loop_conv_s0_y = loop_conv_s0_k->add_loop("conv_s0_y", 0, 24);
  auto loop_conv_s0_x = loop_conv_s0_y->add_loop("conv_s0_x", 0, 16);

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.k) = 0
  auto hcompute_conv_stencil = loop_conv_s0_x->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y", "conv_s0_k");

//consuming hw_weight.stencil

//consuming hw_input.stencil
  auto loop_conv_s1_k = prg.add_loop("conv_s1_k", 0, 46);
  auto loop_conv_s1_y = loop_conv_s1_k->add_loop("conv_s1_y", 0, 24);
  auto loop_conv_s1_x = loop_conv_s1_y->add_loop("conv_s1_x", 0, 16);
  auto loop_conv_s1_win_z = loop_conv_s1_x->add_loop("conv_s1_win_z", 0, 64);
  auto loop_conv_s1_win_y = loop_conv_s1_win_z->add_loop("conv_s1_win_y", 0, 3);
  auto loop_conv_s1_win_x = loop_conv_s1_win_y->add_loop("conv_s1_win_x", 0, 3);

//store is: conv.stencil(conv.s1.x, conv.s1.y, conv.s1.k) = (conv.stencil(conv.s1.x, conv.s1.y, conv.s1.k) + int32((hw_weight.stencil(conv.s1.win$x, conv.s1.win$y, conv.s1.win$z, conv.s1.k)*hw_input.stencil((conv.s1.win$x + conv.s1.x), (conv.s1.win$y + conv.s1.y), conv.s1.win$z))))
  auto hcompute_conv_stencil_1 = loop_conv_s1_win_x->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "conv_s1_k");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_win_x + conv_s1_x)", "(conv_s1_win_y + conv_s1_y)", "conv_s1_win_z");
  hcompute_conv_stencil_1->add_load("hw_weight_stencil", "conv_s1_win_x", "conv_s1_win_y", "conv_s1_win_z", "conv_s1_k");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "conv_s1_k");

//consuming conv.stencil
  auto loop_hw_output_s0_k_ki = prg.add_loop("hw_output_s0_k_ki", 0, 46);
  auto loop_hw_output_s0_y_yi = loop_hw_output_s0_k_ki->add_loop("hw_output_s0_y_yi", 0, 24);
  auto loop_hw_output_s0_x_xi = loop_hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 16);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.k.ki) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.k.ki))
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_k_ki");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_k_ki");

  return prg;
}

prog simplified_conv_layer() {
  prog prg;
  prg.compute_unit_file = "conv_layer_3D_compute.h";
  prg.name = "conv_layer_3D";

  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
  prg.add_input("weight_copy_stencil");
  prg.buffer_port_widths["weight_copy_stencil"] = 16;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

  int bound = 20;

  auto loop_hw_input_s0_x = prg.add_loop("hw_input_s0_x", 0, bound);

  auto hcompute_hw_input_stencil = loop_hw_input_s0_x->add_op("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x");

  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x");

  auto loop_hw_weight_s0_x = prg.add_loop("hw_weight_s0_x", 0, bound);

  auto hcompute_hw_weight_stencil = loop_hw_weight_s0_x->add_op("hcompute_hw_weight_stencil");
  hcompute_hw_weight_stencil->add_function("hcompute_hw_weight_stencil");
  hcompute_hw_weight_stencil->add_load("weight_copy_stencil", "hw_weight_s0_x");
  prg.buffer_port_widths["hw_weight_stencil"] = 16;
  hcompute_hw_weight_stencil->add_store("hw_weight_stencil", "hw_weight_s0_x");

  auto loop_conv_s0_x = prg.add_loop("conv_s0_x", 0, bound);
  auto hcompute_conv_stencil = loop_conv_s0_x->add_op("hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x");

  auto loop_conv_s1_win_x = prg.add_loop("conv_s1_win_x", 0, bound);

  auto hcompute_conv_stencil_1 = loop_conv_s1_win_x->add_op("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_win_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_win_x");
  hcompute_conv_stencil_1->add_load("hw_weight_stencil", "conv_s1_win_x");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_win_x");

  auto loop_hw_output_s0_x_xi = prg.add_loop("hw_output_s0_x_xi", 0, bound);
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi");

  return prg;
}

std::vector<string> verilator_results(const std::string& name) {
  ifstream infile("regression_result_" + name + "_verilog.txt");
  vector<string> lines;
  std::string line;
  while (std::getline(infile, line))
  {
    lines.push_back(line);
  }
  return lines;
}

int run_verilator_on(const std::string& top_module,
    const std::string& tb_file,
    const std::vector<string>& verilog_files,
    bool extra_flag = false) {

  //int verilator_build = cmd("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " --exe --build " + tb_file + " --top-module " + top_module + " -Wno-lint");
  int verilator_build = 0;
  if (extra_flag) {
#ifdef CGRAFLOW
      cmd("echo $CLKWRK_PATH");
      cmd("echo $FP_COMPT_PATH");
      verilator_build = cmd("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " --exe --build --trace " + tb_file + " -CFLAGS -I$CLKWRK_PATH -I$FP_COMP_PATH --top-module " + top_module + " -Wno-UNUSED -Wno-PINMISSING -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNDRIVEN -Wno-CASEINCOMPLETE -Wno-MODDUP -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-LATCH -Wno-VARHIDDEN");
#else
      //verilator_build = cmd("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " --exe --build --trace " + tb_file + " --top-module " + top_module + " -Wno-UNUSED -Wno-PINMISSING -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNDRIVEN -Wno-CASEINCOMPLETE -Wno-MODDUP -Wno-UNOPTFLAT -Wno-CMPCONST");
      verilator_build = cmd("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " -exe --build --trace " + tb_file + " --top-module " + top_module + " -I$FP_COMP_PATH  -Wno-UNUSED -Wno-PINMISSING -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNDRIVEN -Wno-CASEINCOMPLETE -Wno-MODDUP -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-VARHIDDEN");
#endif
  } else {
      verilator_build = cmd("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " --exe --build --trace " + tb_file + " --top-module " + top_module + " -Wno-UNUSED -Wno-WIDTH -Wno-PINMISSING -Wno-DECLFILENAME");
  }

  assert(verilator_build == 0);
  //int verilator_d = cmd("make -C ./obj_dir/ V" + top_module);
  //assert(verilator_d == 0);

  int verilator_run = cmd("./obj_dir/V" + top_module);
  return verilator_run;
}


void run_verilator_verilog_tb(const std::string& name) {
  int compute_to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs commonlib,cgralib --input ./coreir_compute/" + name + "_compute.json --output " + name + "_compute.v -p \"rungenerators; wireclocks-arst; wireclocks-clk\"");
  assert(compute_to_verilog_res == 0);

  int res = run_verilator_on(name, name + "_verilog_tb.cpp", {name + ".v", name + "_verilog_collateral.sv", "./lake_components/dualwithadd/lake_top.sv", name + "_compute.v"});
  assert(res == 0);
}

void run_verilator_tb(const std::string& name) {

  //int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --load_libs commonlib --input " + name + ".json --output " + name + ".v --passes rungenerators;flattentypes;verilog");
  //int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs commonlib --input " + name + ".json --output " + name + ".v");
  int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs commonlib,cgralib --input " + name + ".json --output " + name + ".v -p \"rungenerators; wireclocks-arst; wireclocks-clk\"");
  assert(to_verilog_res == 0);

  int res = run_verilator_on(name,
      name + "_verilog_tb.cpp",
      {name + ".v", name + "_verilog_collateral.sv",
      "./lake_components/dualwithadd/lake_top.sv",
      //"./lake_components/wide_tile/lake_top_1_port.sv",
      //"./lake_components/ASPLOS_designs/bare_dual_port.v",
      "./lake_components/inner_affine_controller.sv"});
  cmd("rm -rf obj_dir/");
  assert(res == 0);
  //int verilator_build = cmd("verilator -Wall --cc " + name + ".v --exe --build " + name + "_verilog_tb.cpp --top-module " + name + " -Wno-lint");
  //assert(verilator_build == 0);

  //int verilator_run = cmd("./obj_dir/V" + name);
  //assert(verilator_run == 0);
}

void generate_verilog_tb(const std::string& name) {

    cmd("echo $LD_LIBRARY_PATH");
  int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs commonlib,cwlib --input " + name + ".json --output " + name + ".v -p \"rungenerators; wireclocks-clk; wireclocks-arst; deletedeadinstances; add-dummy-inputs\"");
  assert(to_verilog_res == 0);
}

#ifdef COREIR
void generate_garnet_verilog_top(CodegenOptions& options, const std::string& name) {

    cmd("echo $LD_LIBRARY_PATH");
    int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs float,float_DW,commonlib,cwlib,cgralib --input " + options.dir  + "/"+name +".json --output " + name + ".v -p \"rungenerators; wireclocks-clk; wireclocks-arst; deletedeadinstances; add-dummy-inputs\"");
  assert(to_verilog_res == 0);

  //run verilator on all the generated verilog
  //auto verilog_files = get_files("./aha_garnet_design/"+name+"/verilog/");
  //verilog_files.push_back(name + ".v");
  //verilog_files.push_back("LakeWrapper.v");
  //int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files);
  //cmd("rm LakeWrapper.v");
  //assert(res == 0);
}

void generate_cgra_tb(std::map<string, UBuffer> buffers_opt, prog prg, CodegenOptions& opt) {
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cwlib(context);
  schedule_info hwinfo;
  hwinfo.use_metamapper = false;
  opt.rtl_options.use_prebuilt_memory = true;
  opt.rtl_options.use_external_controllers = false;
  auto sched = global_schedule_from_buffers(buffers_opt);
  generate_coreir(opt, buffers_opt, prg, sched, hwinfo);
  generate_verilog_tb(prg.name);
}

void generate_garnet_coreir(std::map<string, UBuffer> buffers_opt, prog prg, CodegenOptions& opt, schedule_info& hwinfo, bool use_metamapper, string dse_compute_filename) {
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cwlib(context);
  //schedule_info hwinfo;
  hwinfo.use_metamapper = use_metamapper;

  //TODO: add lake memory tile configuration here

  umap* sched = global_schedule_from_buffers(buffers_opt);
  if (use_metamapper) {
    generate_coreir_without_ctrl(opt, buffers_opt, prg, sched, hwinfo, dse_compute_filename);
  } else {
    generate_coreir(opt, buffers_opt, prg, sched, hwinfo);
  }
  //cmd("mv " + prg.name + ".v " + opt.dir + "verilog");
}
#endif

void generate_smt_stream(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg) {
  for (auto & buf: buffers) {
    if (!prg.is_boundary(buf.first)) {
      //generate stream with the rewrite buffer
      buf.second.generate_smt_stream(options);
    }
  }
}

void Mem_access_count(CodegenOptions& options, map<string, UBuffer>& buffers, mem_access_cnt& mem_access, prog& prg) {
  for (auto & buf: buffers) {
    if (!prg.is_boundary(buf.first)) {
      //generate stream with the rewrite buffer
      buf.second.collect_memory_cnt(options, mem_access);
    }
  }
}


void identity_stream_through_mem_coreir_test() {
  prog prg("identity_stream_through_mem");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["in_buf"] = 16;
  prg.buffer_port_widths["tmp"] = 16;

  prg.add_input("in");
  prg.add_output("out");
  auto ld = prg.add_loop("x", 0, 10)->add_op("ld");
  ld->add_load("in", "x");
  ld->add_store("in_buf", "x");

  auto rd = prg.add_loop("r", 0, 10)->add_op("transfer");
  rd->add_load("in_buf", "r");
  rd->add_store("tmp", "r");

  auto st = prg.add_loop("y", 0, 10)->add_op("st");
  st->add_load("tmp", "y");
  st->add_store("out", "y");
  prg.pretty_print();
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;

#ifdef COREIR

  //auto dom = pad_uset(prg.whole_iteration_domain());
  //auto valid = pad_map(prg.validity_deps());
  auto dom = (prg.whole_iteration_domain());
  auto valid = (prg.validity_deps());
  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  cout << "sched before its = " << str(sched) << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }
  //assert(false);
  sched = its(sched, dom);
  cout << "sched after its = " << str(sched) << endl;

  cout << "Hw schedule" << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  //assert(false);

  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  //assert(false);

  generate_coreir(options, bufs, prg, sched);
  run_verilator_tb(prg.name);
  //assert(false);
#endif

}

void reduce_stream_schedule_test() {
  auto ctx = isl_ctx_alloc();

  //auto dom = isl_union_set_read_from_str(ctx, "{ reduce[root = 0, r, k] : 0 <= r < 6 and 0 <= k <= 2 }");
  //auto valid = rdmap(ctx, "{ reduce[x] -> reduce[e] : e > x }");
  //auto dom = isl_union_set_read_from_str(ctx, "{ reduce[root = 0, r, k] : 0 <= r < 6 and 0 <= k <= 2; init[root = 0, r] : 0 <= r <= 6 }");
  //auto valid = rdmap(ctx, "{ reduce[root = 0, r, k] -> reduce[root' = 0, r' = r, k'] : 0 <= r <= 6 and 0 <= k <= 2 and k' > k and 0 <= k' <= 2; init[root = 0, r] -> reduce[root' = 0, r' = r, k] : 0 <= r <= 6 and 0 <= k <= 7 }");

  auto dom = isl_union_set_read_from_str(ctx, "{ reduce[r, k] : 0 <= r < 6 and 0 <= k <= 2; init[r] : 0 <= r <= 6 }");
  auto valid = rdmap(ctx, "{ reduce[r, k] -> reduce[r' = r, k'] : 0 <= r <= 6 and 0 <= k <= 2 and k' > k and 0 <= k' <= 2; init[r] -> reduce[r' = r, k] : 0 <= r <= 6 and 0 <= k <= 2 }");

  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  cout << "valids..." << endl;
  for (auto d : get_maps(valid)) {
    cout << tab(1) << str(d) << endl;
  }
  cout << "schedule..." << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  isl_ctx_free(ctx);
  assert(false);
}

void reduce_stream_coreir_test() {
  prog prg("reduce_stream");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["in_buf"] = 16;
  prg.buffer_port_widths["tmp"] = 16;

  prg.add_input("in");
  prg.add_output("out");
  auto ld = prg.add_loop("x", 0, 10)->add_loop("dx", 0, 1)->add_op("ld");
  ld->add_load("in", "x");
  ld->add_store("in_buf", "x");

  auto rd = prg.add_loop("r", 0, 7);
  auto init = rd->add_op("init");
  init->add_function("set_zero_16");
  init->add_store("tmp", "r");
  auto reduce = rd->add_loop("k", 0, 3)->add_op("reduce");
  reduce->add_function("fmadd_16");
  reduce->add_load("tmp", "r");
  reduce->add_load("in_buf", "r + k");
  reduce->add_store("tmp", "r");

  auto st = prg.add_loop("y", 0, 7)->add_op("st");
  st->add_load("tmp", "y");
  st->add_store("out", "y");
  prg.pretty_print();
  regression_test(prg);
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;

#ifdef COREIR

  //auto dom = pad_uset(prg.whole_iteration_domain());
  //auto valid = pad_map(prg.validity_deps());
  auto dom = (prg.whole_iteration_domain());
  auto valid = (prg.validity_deps());
  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  cout << "domains..." << endl;
  for (auto d : get_sets(dom)) {
    cout << tab(1) << str(d) << endl;
  }
  cout << "valid..." << endl;
  for (auto v : get_maps(valid)) {
    cout << tab(1) << str(v) << endl;
  }
  cout << "schedule..." << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }
  cout << "sched before its = " << str(sched) << endl;
  sched = its(sched, dom);
  cout << "sched after its = " << str(sched) << endl;

  cout << "Hw schedule" << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  //assert(false);

  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  //assert(false);

  generate_coreir(options, bufs, prg, sched);
  run_verilator_tb(prg.name);
  //assert(false);

#endif

}

void identity_stream_2d_coreir_test() {
  prog prg("identity_stream_2d");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["in_buf"] = 16;

  prg.add_input("in");
  prg.add_output("out");
  auto ld = prg.add_loop("x", 0, 10)->add_loop("xi", 0, 4)->add_op("ld");
  ld->add_load("in", "x, xi");
  ld->add_store("in_buf", "x, xi");

  auto st = prg.add_loop("y", 0, 10)->add_loop("yi", 0, 4)->add_op("st");
  st->add_load("in_buf", "y, yi");
  st->add_store("out", "y, yi");
  prg.pretty_print();

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;

#ifdef COREIR

  auto dom = prg.whole_iteration_domain();
  auto valid = prg.validity_deps();
  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  sched = its(sched, prg.whole_iteration_domain());

  cout << "Hw schedule" << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  //assert(false);

  generate_coreir(options, bufs, prg, sched);
  run_verilator_tb(prg.name);
  //int to_verilog_res = cmd("./coreir/bin/coreir --input identity_stream.json --output identity_stream.v --passes flattentypes;verilog");
  //assert(to_verilog_res == 0);

  //int verilator_build = cmd("verilator -Wall --cc identity_stream.v --exe --build identity_stream_verilog_tb.cpp --top-module identity_stream -Wno-lint");
  //assert(verilator_build == 0);

  //int verilator_run = cmd("./obj_dir/Videntity_stream");
  //assert(verilator_run == 0);

  //assert(false);
#endif

}

void identity_stream_coreir_test() {
  prog prg("identity_stream");
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["in_buf"] = 16;

  prg.add_input("in");
  prg.add_output("out");
  auto ld = prg.add_loop("x", 0, 10)->add_op("ld");
  ld->add_load("in", "x");
  ld->add_store("in_buf", "x");

  auto st = prg.add_loop("y", 0, 10)->add_op("st");
  st->add_load("in_buf", "y");
  st->add_store("out", "y");
  prg.pretty_print();
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;

#ifdef COREIR

  auto dom = prg.whole_iteration_domain();
  auto valid = prg.validity_deps();
  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  sched = its(sched, prg.whole_iteration_domain());

  cout << "Hw schedule" << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  //assert(false);

  generate_coreir(options, bufs, prg, sched);

  run_verilator_tb(prg.name);
  //int to_verilog_res = cmd("./coreir/bin/coreir --input identity_stream.json --output identity_stream.v --passes flattentypes;verilog");
  //assert(to_verilog_res == 0);

  //int verilator_build = cmd("verilator -Wall --cc identity_stream.v --exe --build identity_stream_verilog_tb.cpp --top-module identity_stream -Wno-lint");
  //assert(verilator_build == 0);

  //int verilator_run = cmd("./obj_dir/Videntity_stream");
  //assert(verilator_run == 0);

  //assert(false);
#endif

}
void weight_streaming_test() {
  prog prg = simplified_conv_layer();
  prg.pretty_print();
  regression_test(prg);
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;
  //generate_optimized_code(options, prg);

#ifdef COREIR

  auto dom = prg.whole_iteration_domain();
  auto valid = prg.validity_deps();
  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  sched = its(sched, prg.whole_iteration_domain());

  cout << "Hw schedule" << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }
  //assert(false);

  //string hw_str = string("{ hcompute_conv_stencil[root = 0, conv_s0_x] -> [conv_s0_x + 1] : 0 <= conv_s0_x <= 19; ") +
    //"hcompute_conv_stencil_1[root = 0, conv_s1_win_x] -> [20 + conv_s1_win_x] : 0 <= conv_s1_win_x <= 19; " +
    //"hcompute_hw_weight_stencil[root = 0, hw_weight_s0_x] -> [hw_weight_s0_x + 1] : 0 <= hw_weight_s0_x <= 19; " +
    //"hcompute_hw_output_stencil[root = 0, hw_output_s0_x_xi] -> [2*hw_output_s0_x_xi + 40] : 0 <= hw_output_s0_x_xi <= 19; " +
    //"hcompute_hw_input_stencil[root = 0, hw_input_s0_x] -> [hw_input_s0_x + 1] : 0 <= hw_input_s0_x <= 19 }";
  //auto sched = isl_union_map_read_from_str(prg.ctx, hw_str.c_str());

  //auto sched = prg.optimized_codegen();
  //cout << "=== sched: " << str(sched) << endl;
  //string sstre = "{ ld_o[root = 0, cs, ys, xs] -> [2 + cs, 2 + ys, 2 + xs, 1] : 0 <= cs <= 2 and 0 <= ys <= 2 and 0 <= xs <= 2; ld[root = 0, c, y, x] -> [c, y, x, 0] : 0 <= c <= 2 and 0 <= y <= 2 and 0 <= x <= 2 }";
  //string sstr = "{ ld_o[root = 0, cs, ys, xs] -> [2 + cs, 2 + ys, 2 + xs, 1] : 0 <= cs <= 2 and 0 <= ys <= 2 and 0 <= xs <= 2; ld[root = 0, c, y, x] -> [c, y, x, 0] : 0 <= c <= 2 and 0 <= y <= 2 and 0 <= x <= 2 }";
 //cout << "=== sched; " << str(sched) << endl;
 //string oned_sched = "{ ld_o[root = 0, cs] -> [2 + cs, 1] : 0 <= cs <= 2; ld[root = 0, c] -> [c, 0] : 0 <= c <= 2 }";
  //string hw_sched = "{ ld_o[root = 0, cs] -> [10 + 2*cs] : 0 <= cs <= 2; ld[root = 0, c] -> [2*c] : 0 <= c <= 2 }";
  //auto sched = isl_union_map_read_from_str(prg.ctx, hw_sched.c_str());

 //assert(false);
  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  //generate_verilog(options, bufs, prg, sched);
  //assert(false);

  generate_coreir(options, bufs, prg, sched);

  run_verilator_tb(prg.name);
  //int to_verilog_res = cmd("./coreir/bin/coreir --input conv_layer_3D.json --output conv_layer_3D.v --passes flattentypes;verilog");
  //assert(to_verilog_res == 0);

  //int verilator_build = cmd("verilator -Wall --cc conv_layer_3D.v --exe --build conv_layer_3D_verilog_tb.cpp --top-module conv_layer_3D -Wno-lint");
  //assert(verilator_build == 0);

  //int verilator_run = cmd("./obj_dir/Vconv_layer_3D");
  //assert(verilator_run == 0);

  //assert(false);
#endif

}

void halide_conv_layer_3D_test() {
  prog prg = conv_layer_3D();
  prg.pretty_print();

  cout << "getting validity / dom"  << endl;
  auto dom = prg.whole_iteration_domain();
  auto valid = prg.validity_deps();
  auto proximity = cpy(valid);

  cout << "createing hw schedule" << endl;

  //auto hs = hardware_schedule(dom, valid, proximity);
  //for (auto h : hs) {
    //cout << tab(1) << h.first << " -> " << str(h.second) << endl;
  //}
  //assert(false);

  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;
  //generate_optimized_code(options, prg);

#ifdef COREIR
  auto sched = prg.optimized_codegen();
  cout << "sched = " << str(sched) << endl;
  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  generate_coreir(options, bufs, prg, sched);

  run_verilator_tb(prg.name);
  //int to_verilog_res = cmd("./coreir/bin/coreir --input conv_layer_3D.json --output conv_layer_3D.v --passes flattentypes;verilog");
  //assert(to_verilog_res == 0);

  //int verilator_build = cmd("verilator -Wall --cc conv_layer_3D.v --exe --build conv_layer_3D_verilog_tb.cpp --top-module conv_layer_3D -Wno-lint");
  //assert(verilator_build == 0);

  //int verilator_run = cmd("./obj_dir/Vconv_layer_3D");
  //assert(verilator_build == 0);

  //assert(false);
#endif

  //regression_test(prg);
  //assert(false);
}

void load_buffer(const std::string& dest, const std::string& src, const vector<int>& ranges, prog& prg) {
  assert(ranges.size() % 2 == 0);

  auto op = prg.root;
  for (int r = 0; r < ranges.size() / 2; r++) {
    op = op->add_loop(prg.unique_name("l"), ranges.at(2*r), ranges.at(2*r + 1));
  }
  op = op->add_op(prg.unique_name("op"));
  vector<string> vs = map_find(op, prg.iter_vars());
  reverse(vs);
  // root is not used
  vs.pop_back();
  op->add_load(src, comma_list(vs));
  op->add_store(dest, comma_list(vs));
}

prog partially_unrolled_conv() {
  prog prg("cyclic_banked_conv");
  prg.add_input("in_oc");
  prg.add_output("out");

  load_buffer("in", "in_oc", {0, 10, 0, 10}, prg);
  auto reduce = prg.add_nest("y", 0, 8, "x", 0, 8, "yi", 0, 3)->add_op(prg.unique_name("op"));
  reduce->add_function("conv_1_3");
  for (int c = 0; c < 3; c++) {
    reduce->add_load("in", "x + " + str(c), "y + yi");
  }
  reduce->add_store("out", "x, y");

  return prg;

}

void reuse_buffered_conv_test() {
  prog prg = partially_unrolled_conv();
  prg.pretty_print();
  prg.sanity_check();

  {
    CodegenOptions options;
    options.all_rams = true;
    all_register_files(prg, options);
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
    generate_unoptimized_code(options, prg);

  }

  auto naive = run_regression_tb(prg);

  add_reuse_buffer("y", "in", prg);

  prg.pretty_print();
  //assert(false);

  CodegenOptions options;
  options.all_rams = true;
  all_register_files(prg, options);
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;

  generate_unoptimized_code(options, prg);
  auto opt = run_regression_tb(prg);

  compare("reuse_buffered_conv", opt, naive);
  //assert(false);
}

void cyclic_banked_conv_test() {
  prog prg = partially_unrolled_conv();
  prg.pretty_print();
  prg.sanity_check();

  CodegenOptions options;
  options.all_rams = true;
  options.banking_strategies["in"] =
  {"cyclic", {3, 1}};
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;

  generate_optimized_code(options, prg);
}

void copy(const std::string& dst, const std::string& src, const std::vector<int>& dims, prog& prg) {
  op* lp = prg.root;
  for (int d : dims) {
    lp = lp->add_loop(prg.unique_name("c"), 0, d);
  }
  auto c = lp->add_op(prg.unique_name("cp"));
  auto iter_vars_no_root = prg.iter_vars(c);
  reverse(iter_vars_no_root);
  iter_vars_no_root.pop_back();
  reverse(iter_vars_no_root);
  c->add_load(src, comma_list(iter_vars_no_root));
  c->add_store(dst, comma_list(iter_vars_no_root));
}

void init(const std::string& dst, const std::string& func, const std::vector<int>& dims, prog& prg) {
  op* lp = prg.root;
  for (int d : dims) {
    lp = lp->add_loop(prg.unique_name("i"), 0, d);
  }
  auto c = lp->add_op(prg.unique_name("init"));
  auto iter_vars_no_root = prg.iter_vars(c);
  reverse(iter_vars_no_root);
  iter_vars_no_root.pop_back();
  reverse(iter_vars_no_root);
  c->add_function(func);
  c->add_store(dst, comma_list(iter_vars_no_root));
}

typedef std::vector<int> dimlist;

void reduce(
    const dimlist& dims,
    const std::string& dst, const dimlist& cvars,
    const std::string& func,
    const std::string& a, const dimlist& avars,
    const std::string& b, const dimlist& bvars,
    prog& prg) {

  op* lp = prg.root;
  for (int d : dims) {
    lp = lp->add_loop(prg.unique_name("r"), 0, d);
  }
  auto c = lp->add_op(prg.unique_name("reduce"));
  auto iter_vars_no_root = prg.iter_vars(c);
  reverse(iter_vars_no_root);
  iter_vars_no_root.pop_back();
  reverse(iter_vars_no_root);

  vector<string> avar_names;
  for (auto d : avars) {
    avar_names.push_back(iter_vars_no_root.at(d));
  }

  vector<string> bvar_names;
  for (auto d : bvars) {
    bvar_names.push_back(iter_vars_no_root.at(d));
  }

  vector<string> cvar_names;
  for (auto d : cvars) {
    cvar_names.push_back(iter_vars_no_root.at(d));
  }

  c->add_function(func);
  c->add_load(dst, comma_list(cvar_names));
  c->add_load(a, comma_list(avar_names));
  c->add_load(b, comma_list(bvar_names));
  c->add_store(dst, comma_list(cvar_names));
}

void copy(const dimlist& dims, const std::string dst, const dimlist& avars,
    const std::string& src,
    const dimlist& bvars,
    prog& prg) {

  op* lp = prg.root;
  for (int d : dims) {
    lp = lp->add_loop(prg.unique_name("c"), 0, d);
  }
  auto c = lp->add_op(prg.unique_name("c"));
  auto iter_vars_no_root = prg.iter_vars(c);
  reverse(iter_vars_no_root);
  iter_vars_no_root.pop_back();
  reverse(iter_vars_no_root);

  vector<string> avar_names;
  for (auto d : avars) {
    avar_names.push_back(iter_vars_no_root.at(d));
  }

  vector<string> bvar_names;
  for (auto d : bvars) {
    bvar_names.push_back(iter_vars_no_root.at(d));
  }

  c->add_store(dst, comma_list(avar_names));
  c->add_load(src, comma_list(bvar_names));
}

void mmul_outer_prod_test() {
  prog prg("mmul_outer_prod");
  prg.add_input("B_oc");
  prg.add_input("A_oc");
  prg.add_output("C_oc");

  int M = 5;
  int t = 200;
  int K = 10;

  copy("A", "A_oc", {5, 2, 10}, prg);
  // Upsample
  copy({5, 5, t, 10}, "Ar", {0, 1, 2, 3}, "A", {0, 2, 3}, prg);
  copy("B", "B_oc", {5, 5, 10, t}, prg);
  init("C", "set_zero_32", {5, 5, t, t}, prg);
  reduce({5, 5, 10, t, t}, "C", {0, 1, 3, 4}, "fma_32", "Ar", {0, 1, 4, 2}, "B", {0, 1, 2, 4}, prg);
  copy("C_oc", "C", {5, 5, t, t}, prg);

  //copy("A", "A_oc", {5, 5, 2, 2}, prg);
  //copy("B", "B_oc", {5, 5, 2, 2}, prg);
  //init("C", "set_zero_32", {5, 5, 2, 2}, prg);
  //reduce({5, 5, 5, 2, 2}, "C", {0, 1, 3, 4}, "fma_32", "A", {0, 1, 3, 4}, "B", {0, 1, 3, 4}, prg);
  ////reduce({5, 5, 5, 2, 2}, "C", {0, 1, 3, 4}, "fma_32", "A", {0, 1, 2, 3}, "B", {0, 1, 2, 3}, prg);
  //copy("C_oc", "C", {5, 5, 2, 2}, prg);

  //auto ldc =
    //prg.add_nest("cit", 0, 10, "cjt", 0, 10)->add_op("init_c");
  //ldc->add_store("C", "cit", "cjt");
  //ldc->add_function("set_zero_32");

  //auto update_c =
    //prg.add_nest("ucit", 0, 10, "ucjt", 0, 10, "uck", 0, 10)->
    //add_op("update_c");
  //update_c->add_load("C", "ucit", "ucjt");
  //update_c->add_load("A_oc", "ucit", "uck");
  //update_c->add_load("B_oc", "uck", "ucjt");
  //update_c->add_store("C", "ucit", "ucjt");
  //update_c->add_function("fma_32");

  //auto stc =
    //prg.add_nest("sit", 0, 10, "sjt", 0, 10)->add_op("store_c_oc");
  //stc->add_load("C", "sit", "sjt");
  //stc->add_store("C_oc", "sit", "sjt");

  //auto ldc =
    //prg.add_nest("cit", 0, 10, "cjt", 0, 10,
        //"cii", 0, 3, "cji", 0, 3)->add_op("init_c");
  //ldc->add_store("C", "cit", "cjt", "cii", "cji");
  //ldc->add_function("set_zero_32");

  //auto ldb =
    //prg.add_nest("bit", 0, 10, "bjt", 0, 10,
        //// within each tile of C:
        //"bii", 0, 10, "bij", 0, 3)->add_op("ld_b");
  //ldb->add_load("B_oc", "bit", "bjt", "bii", "bij");
  //ldb->add_store("B", "bit", "bjt", "bii", "bij");

  //auto lda =
    //prg.add_nest("ait", 0, 10,
        //// within each row of tiles of C:
        //"aii", 0, 3, "aij", 0, 10)->add_op("ld_a");
  //lda->add_load("A_oc", "ait", "aii", "aij");
  //lda->add_store("A", "ait", "aii", "aij");

  //auto update_c =
    //prg.add_nest("ucit", 0, 10, "ucjt", 0, 10,
        //"uck", 0, 10)->add_nest(
        //"ucii", 0, 3, "ucji", 0, 3)->add_op("update_c");
  //update_c->add_load("C", "ucit", "ucjt", "ucii", "ucji");
  //update_c->add_load("A", "ucit", "uck", "ucji");
  //update_c->add_load("B", "ucit, ucjt, ucii, uck");
  //update_c->add_store("C", "ucit", "ucjt", "ucii", "ucji");
  //update_c->add_function("fma_32");

  //auto stc =
    //prg.add_nest("ocit", 0, 10, "ocjt", 0, 10,
        //"ocii", 0, 3, "ocji", 0, 3)->add_op("out_c");
  //stc->add_load("C", "ocit", "ocjt", "ocii", "ocji");
  //stc->add_store("C_oc", "ocit", "ocjt", "ocii", "ocji");

  prg.pretty_print();
  prg.sanity_check();
  //assert(false);

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.banking_strategies["C"] = {"register_file"};
  options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
  generate_optimized_code(options, prg);
  //regression_test(options, prg);
  move_to_synthesis_folder(prg.name);

  //assert(false);
}

//void emit_lake_controller_config(const std::string& filename, isl_set* write_domain, isl_aff* write_sched, isl_aff* write_addr) {
void emit_lake_controller_config(std::ostream& out, isl_set* write_domain, isl_aff* write_sched) {
  cout << str(write_sched) << endl;
  out << "\"dimensionality\"," << num_dims(write_domain) << ",0" << endl;
  out << "\"cycle_starting_addr\"," << to_int(const_coeff(write_sched)) << ",0" << endl;
  for (int d = 0; d < num_dims(write_domain); d++) {
    auto ds = project_all_but(write_domain, d);
    int extent_d = to_int(lexmaxval(ds)) - to_int(lexminval(ds)) + 1;
    int ldim = num_dims(write_domain) - d - 1;
    out << "\"extent_" << ldim << "\"," << extent_d << ",0" << endl;
    out << "\"cycle_stride_" << ldim << "\"," << to_int(get_coeff(write_sched, d)) << ",0" << endl;
  }
}

int get_stride_from_ubuf(UBuffer& ubuf, int raw_st, bool is_rd) {
    int st = raw_st;
    int capacity = ubuf.capacity() + 1;
    cout << "buffer : " << ubuf.name << " capacity = " << capacity << endl;
    if (contains(ubuf.name, "tb")) {
        st = st;
    }
    if (contains(ubuf.name, "agg" ) ){
        st = st % 4;
    }
    if (is_rd && (ubuf.hardware.out_port_width > 1) ) {
        st = st / ubuf.hardware.out_port_width;
    } else if (!is_rd && (ubuf.hardware.in_port_width > 1) ) {
        st = st / ubuf.hardware.in_port_width;
    }
    return st;
}

string get_ubuf_name(vector<isl_map*> access_maps, string op_name) {
    for (auto access_map: access_maps) {
        if (domain_name(access_map) == op_name) {
            string buf_name = range_name(access_map);
            cout << "bufname: " << buf_name << endl;
            string ret = take_until_str(buf_name, "ubuf");
            cout << ret << endl;
            return ret + "ubuf";
        }
    }
    cout << "Error: Did not found the op name in all rewritten ubuffers." << endl;
    assert(false);
}

void emit_lake_addrgen_config(std::ostream& out, map<string, UBuffer>& buffers_opt, vector<isl_map*> access_maps, string op_name) {
  for (auto access_map: access_maps) {
    if (domain_name(access_map) == op_name) {
      cout << "\taddress info: " << str(simplify(access_map)) << endl;

      for(auto single_access_map: get_basic_maps(access_map)) {
          cout << "single access bmap : " << str(single_access_map) << endl;
        string buf_name = range_name(access_map);
        auto reduce_map = linear_address_map_lake(range(access_map), 4);
        auto ubuf = buffers_opt.at(buf_name);
        bool is_rd = ubuf.is_read_op(op_name);

        //Need to judge whether we need selection logic
        //Case are we have only one input port
        //but multiple output port for this buffer
        //that means we need selection logic
        if ( (ubuf.num_in_ports() > 1)) {
            //TODO: this only work for tb
            auto pt2connect = ubuf.get_connection_map_to_outpt(to_map(single_access_map));
            bool need_mux = true;
            for (auto it: pt2connect) {
                need_mux &= it.second;
            }
            int out_dim = num_out_dims(access_map);
            vector<int> mux_index;
            vector<int> addr_index;
            for (int i = out_dim - 1; i >= 0; i --) {
                //FIXME: this is hardcode, may not work for dnn
                if (i == out_dim - 2) {
                    mux_index.push_back(i);
                } else {
                    addr_index.push_back(i);
                }
            }
            //rewrite the original addr_reduce map
            if (contains(buf_name, "tb"))
              reduce_map = linear_address_map_with_index(range(access_map), addr_index, 4);
            if (need_mux) {
                auto mux_reduce_map = linear_address_map_with_index(range(access_map), mux_index, 4);
                auto mux_addr_expr = dot(access_map, mux_reduce_map);
                cout << str(mux_addr_expr) << endl;
                isl_aff* addr = get_aff(mux_addr_expr);
                string prefix = is_rd ? "mux_read" : "mux_write";
                out << "\""+prefix+"\"," << "\"" << buf_name << "\"" << endl;
                out << "\""+prefix+"_data_starting_addr\"," <<
                    to_int(const_coeff(addr))  << ",0" << endl;
                for (int d = 0; d < num_in_dims(addr); d++) {
                  int ldim = num_in_dims(addr) - d - 1;
                  out << "\""+prefix+"_data_stride_" << ldim << "\"," <<
                      to_int(get_coeff(addr, d))  << ",0" << endl;
                }
            }
        }
        cout << "reduce map: " << str(reduce_map) << endl;


        auto addr_expr_map = dot(to_map(single_access_map), reduce_map);
        cout << str(addr_expr_map) << endl;
        string pt = is_rd ? pick(ubuf.get_out_ports()) : pick(ubuf.get_in_ports());
        isl_aff* addr = get_aff(addr_expr_map);

        //Simplify map will work only when you its with domain
        if (ubuf.retrive_domain.count(pt) )
            addr = get_aff(simplify(its(addr_expr_map, ubuf.retrive_domain.at(pt))));
        cout << "\t address generator aff expr:" << str(addr) << endl;

        string prefix = is_rd ? "read" : "write";
        out << "\""+prefix+"\"," << "\"" << buf_name << "\"" << endl;

        //FIXME: this function is a hack for fetch width = 4 aggregator
        int st = get_stride_from_ubuf(ubuf, to_int(const_coeff(addr)), is_rd);

        out << "\""+prefix+"_data_starting_addr\"," << st << ",0" << endl;
        for (int d = 0; d < num_in_dims(addr); d++) {
          int ldim = num_in_dims(addr) - d - 1;
          int st = get_stride_from_ubuf(ubuf, to_int(get_coeff(addr, d)), is_rd);
          cout << "get st: " << st << endl;
          out << "\""+prefix+"_data_stride_" << ldim << "\"," << st << ",0" << endl;
        }
        if (is_rd && (ubuf.hardware.out_port_width > 1) )
            break;
        if (!is_rd&& (ubuf.hardware.in_port_width > 1) )
            break;
      }
    }
  }
}

void emit_lake_stream(map<string, UBuffer>& buffers_opt,
        umap* hardware_schedule, string dir, bool flatten=true) {
  //assign the hardware schedule to each buffer
  auto op2sched = get_op2sched(buffers_opt, hardware_schedule, flatten);
  for (auto & it : buffers_opt) {
    if (it.second.get_out_ports().size() == 0 || it.second.get_in_ports().size() == 0) {
      continue;
    }
    lattice_schedule_buf(it.second, hardware_schedule);
  }
  CodegenOptions options;
  emit_lake_address_stream2file(options, buffers_opt, dir);
}

void check_lake_config(const vector<string> & op_name_vec, string out_dir, string gold_dir) {
  for (string op_name: op_name_vec) {
    string target = out_dir + op_name + ".csv";
    string golden = gold_dir + op_name + ".csv";
    compare_to_gold_file(target, golden);
  }
}

vector<string> emit_lake_config(map<string, UBuffer>& buffers_opt,
        umap* hardware_schedule, string dir) {
  vector<string> generated_op;
  auto glb_access_map = global_access_map_from_buffers(buffers_opt);
  auto glb_domain = global_domain_from_buffers(buffers_opt);
  auto glb_retrive_domain = retrive_domain_from_buffers(buffers_opt);
  auto retrive_dom_map = get_sets_in_map(glb_retrive_domain);
  auto dom_map = get_sets_in_map(glb_domain);
  auto access_maps = get_maps(glb_access_map);

  //produce the schedule config for each op
  for (auto m : get_maps(hardware_schedule)) {
    cout << tab(1) << domain_name(m) << endl;
    string op_name = domain_name(m);
    generated_op.push_back(op_name);

    isl_map* write_sched = m;
    auto dom = dom_map.at(op_name);
    if (retrive_dom_map.count(op_name)) {
      dom = retrive_dom_map.at(op_name);

      //transform the iteration domain back to it's original dimension
      write_sched = retrive_map_domain_with_dim(m, dom);
      for (auto& it: access_maps) {
        if (domain_name(it)== op_name) {
          it = retrive_map_domain_with_dim(it, dom);
        }
      }
    }
    cout << "\tretrive dom: " << str(glb_retrive_domain) << endl;

    //FIXME: The dimension retrive algorithm seems wrong for conv33, may have some special purpose for resnet
    //if (num_in_dims(write_sched) != num_dims(dom_map.at(op_name))) {
    //    cout << "\t retrive the domain for schedule: " << str(write_sched) << endl;
    //    dom = dom_map.at(op_name);
    //    write_sched = retrive_map_domain_with_dim(m, dom);
    //    cout << "\t after retrive : " << str(write_sched) << endl;
    //}

    ////find the memory tile interface op we need to generate multiple file
    vector<isl_map*> access_map_for_op;
    for (auto acc_map: access_maps) {
        if (domain_name(acc_map) == op_name) {

            //remove the wire
            string buf_name = range_name(acc_map);
            auto ubuf = buffers_opt.at(buf_name);
            cout << "buffer name: " << buf_name << " capacity = " << ubuf.capacity() << endl;
            if (ubuf.capacity() == 0) {
                cout << "remove 0 capacity buffer: " << buf_name << endl;
                continue;
            }

            access_map_for_op.push_back(acc_map);
        }
    }


    if (access_map_for_op.size() > 1) {

        //generate configuration for internal sram related controller
        string sub_folder = get_ubuf_name(access_maps, op_name);
        string sub_dir = dir + sub_folder;
        cout << "sub folder name: " << sub_folder << endl;
        cmd("mkdir -p " + sub_dir);
        ofstream out(sub_dir +"/" + op_name + ".csv");
        cout << "\tGenerate config csv for : " << tab(1) << op_name << endl;

        emit_lake_controller_config(out, dom, get_aff(write_sched));

        //emit address config
        emit_lake_addrgen_config(out, buffers_opt, access_maps, op_name);

        out.close();
    }
    else if (access_map_for_op.size() == 1) {
      int pt_cnt = 0;
      for(auto single_access_map: get_basic_maps(pick(access_map_for_op))) {
        cout << "single access bmap : " << str(single_access_map) << endl;

        string sub_folder = get_ubuf_name({to_map(single_access_map)}, op_name);
        string sub_dir = dir + sub_folder;
        cout << "sub folder name: " << sub_folder << endl;

        string buf_name = range_name(to_map(single_access_map));
        auto ubuf = buffers_opt.at(buf_name);
        string suffix = "_" + to_string(pt_cnt);
        if (ubuf.is_read_op(op_name))
          suffix = "_tb2out" + suffix;
        else
          suffix = "_in2agg" + suffix;

        cmd("mkdir -p " + sub_dir);
        ofstream out(sub_dir +"/"+ op_name + suffix + ".csv");
        cout << "\tGenerate config csv for : " << tab(1) << op_name + suffix << endl;
        emit_lake_controller_config(out, dom, get_aff(write_sched));

        //emit address config
        emit_lake_addrgen_config(out, buffers_opt, {to_map(single_access_map)}, op_name);
        pt_cnt ++;
      }
    }
  }
  return generated_op;
}


isl_aff* get_aff_addr(op* op, const std::string& buf_name,
    const address& addr,
    prog& prg) {
  auto vars = map_find(op, prg.iter_vars());
  auto pwaff = to_multi_aff(prg.ctx, vars, addr);

  assert(isl_multi_aff_dim(pwaff, isl_dim_set) == 1);

  return isl_multi_aff_get_aff(pwaff, 0);
}

isl_union_map* generate_hardware_schedule_heu_new(isl_union_map* new_opt_sched,
        map<string, UBuffer> buffers, map<pair<string, string>, int> latency, int ii, vector<string> remove = {}) {
  vector<string> sort_op = topological_sort_from_buffer(buffers, remove);
  cout << "Topology sort: " << sort_op << endl;

  int i = 0;
  map<string, isl_point*> sched_seq;
  map<string, vector<string>> expr_base;
  map<string, int> topo_seq, delay_map;
  map<string, isl_map*> op2sched;

  int loop_dim = get_in_dim(pick(get_maps(new_opt_sched))) - 1;
  vector<int> max_iteration(loop_dim, 0);

  for (auto op: sort_op) {
    topo_seq[op] = i;
    delay_map[op] = 0;
    i ++;
  }

  //sort the latency according to the sequence of buffers
  auto cmp = [&topo_seq](const pair<string, string>& p1,
          const pair<string, string>& p2) {
      return topo_seq.at(p1.first) < topo_seq.at(p2.first);
  };
  map<pair<string, string>, int, decltype(cmp)> latency_sort(cmp);

  for (auto it: latency) {
      latency_sort.insert(it);
  }

  //process the schedule map,
  //From the observation, if we keep the schedule dimension
  //It will give a schedule with in dim in front and a constant sequence vector
  //We need to flatten the expression in the beginning into 1D
  //And add the  constant offset based on the latency and sequence
  for (auto m: get_maps(new_opt_sched)) {
    string op_name = domain_name(m);
    op2sched[op_name] = m;
    auto affs = get_aff_vec(m);
    assert(affs.size() >= get_in_dim(m));
    vector<string> sched_expr_list;
    vector<int> sched_seq_vec;
    int dom_dim = get_in_dim(m) - 1;
    for (int i = 0; i < dom_dim; i ++) {
      sched_expr_list.push_back(take_btw(str(affs.at(i)), "[(", ")]"));
      int card_range = int_upper_bound(get_out_range(m, i));
      max_iteration.at(i) = std::max(card_range, max_iteration.at(i));
    }
    for (int i = dom_dim; i < affs.size(); i ++) {
      sched_seq_vec.push_back(safe_stoi(take_btw(str(affs.at(i)), "[(", ")]")));
    }
    sched_seq[op_name] = form_pt(sched_seq_vec);
    expr_base[op_name] = sched_expr_list;
  }
  cout << "max iteration: " << max_iteration <<endl;


  for (auto it: latency_sort) {
    string anchor = it.first.first;
    string target = it.first.second;
    int lat = it.second;

    //if anchor is producer and targe is consumer
    if (topo_seq.at(anchor) < topo_seq.at(target)) {
      //assert(lat >= 0);
      if ( lex_gt_pt(sched_seq.at(anchor), sched_seq.at(target)) )
        lat -= 1;
      delay_map.at(target) = delay_map.at(anchor) + lat;
    }
    //if anchor is consumer and target is producer
    else {
      //assert(lat <= 0);
      if (lex_lt_pt(sched_seq.at(anchor), sched_seq.at(target)))
        lat += 1;
      delay_map.at(target) = delay_map.at(anchor) + lat;
    }
  }
  cout << "Delay map: " << delay_map << endl;

  vector<int> rolling_dim = rolling_vec_dim(max_iteration, ii);
  cout << "rolling dim: " << rolling_dim << endl;

  //reconstruct the 1D schedule
  auto hw_sched = isl_union_map_empty(get_space(new_opt_sched));
  for (auto op_name: sort_op) {
    auto sched_map = op2sched.at(op_name);
    auto expr_list = expr_base.at(op_name);
    for ( size_t i = 0; i < expr_list.size(); i++ ){
      expr_list.at(i) = "(" + expr_list.at(i)  + ")*" + to_string(rolling_dim.at(i));
    }

    //add the latency
    expr_list.push_back(to_string(delay_map.at(op_name)));

    string expr = sep_list(expr_list, "", "", "+");
    auto ctx = ::ctx(sched_map);
    auto var_list = get_map_in_dim_id(sched_map);
    auto hs = gen_hw_sched_from_sched_vec(ctx, {expr}, var_list, op_name);
    hs = its(hs, domain(sched_map));
    hw_sched = unn(hw_sched, to_umap(hs));
  }

  //TODO: add a post check to see if there is any hardware violation
  cout << "\tHW Schedule:" << str(hw_sched) << endl;

  return hw_sched;
}

isl_union_map* generate_hardware_schedule_heu(isl_union_map* new_opt_sched,
        map<string, UBuffer> buffers,
        map<pair<string, string>, int> latency,
        int ii,
        vector<string> remove = {}) {
  vector<string> sort_op = topological_sort_from_buffer(buffers, remove);
  cout << "Topology sort: " << sort_op << endl;

  int i = 0;
  map<string, int> sched_seq, topo_seq, delay_map;
  map<string, string> expr_base;
  map<string, isl_map*> op2sched;
  for (auto op: sort_op) {
    topo_seq[op] = i;
    delay_map[op] = 0;
    i ++;
  }

  //sort the latency according to the sequence of buffers
  auto cmp = [&topo_seq](const pair<string, string>& p1,
          const pair<string, string>& p2) {
      return topo_seq.at(p1.first) < topo_seq.at(p2.first);
  };
  map<pair<string, string>, int, decltype(cmp)> latency_sort(cmp);

  for (auto it: latency) {
      latency_sort.insert(it);
  }

  for (auto m: get_maps(new_opt_sched)) {
    string op_name = domain_name(m);
    op2sched[op_name] = m;
    auto affs = get_aff_vec(m);
    //assert(affs.size() == 2);
    sched_seq[op_name] = safe_stoi(
            take_btw(str(affs.at(1)), "[(", ")]"));
    expr_base[op_name] = take_btw(str(affs.at(0)), "[(", ")]");

  }

  for (auto it: latency_sort) {
    string anchor = it.first.first;
    string target = it.first.second;
    int lat = it.second;

    //if anchor is producer and targe is consumer
    if (topo_seq.at(anchor) < topo_seq.at(target)) {
      assert(lat >= 0);
      if (sched_seq.at(anchor) > topo_seq.at(target))
        lat -= 1;
      delay_map.at(target) = delay_map.at(anchor) + lat;
    }
    //if anchor is consumer and target is producer
    else {
      assert(lat <= 0);
      if (sched_seq.at(anchor) < topo_seq.at(target))
        lat += 1;
      delay_map.at(target) = delay_map.at(anchor) + lat;
    }
  }

  //reconstruct the 1D schedule
  auto hw_sched = isl_union_map_empty(get_space(new_opt_sched));
  for (auto op_name: sort_op) {
    auto sched_map = op2sched.at(op_name);
    string expr;
    if (ii == 1) {
      expr = expr_base.at(op_name) + "+"
          + to_string(delay_map.at(op_name));
    }
    else {
      expr = expr_base.at(op_name) + "*" + to_string(ii)
          + "+" +to_string(delay_map.at(op_name));
    }
    auto ctx = ::ctx(sched_map);
    auto hs = gen_hw_sched_from_sched_vec(ctx, {expr}, op_name);
    hs = its(hs, domain(sched_map));
    hw_sched = unn(hw_sched, to_umap(hs));
  }
  return hw_sched;
}

//void lake_resnet_multitile_test() {
  //auto prg = resnet_hc_multitile();
  //prg.pretty_print();

  //CodegenOptions options;
  //options.all_rams = true;
  //all_register_files(prg, options);
  //options.banking_strategies["conv_stencil"] = {"cyclic", {1, 1, 1, 4}};
  //options.banking_strategies["hw_kernel_stencil"] = {"exhaustive"};
  //options.banking_strategies["hw_input_stencil"] = {"exhaustive"};
  //options.inner_bank_offset_mode =
    //INNER_BANK_OFFSET_MULTILINEAR;
  ////generate_optimized_code(options, prg);

  //auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());
  ////optimized schedule
  //auto buffers_opt = build_buffers(prg, sched_naive);
  //CodegenOptions opt;
  //opt.conditional_merge = true;
  //opt.merge_threshold = 4;
  //int max_inpt = 2, max_outpt = 2;
  ////buffers_opt.at("buf").generate_bank_and_merge(opt);
  ////cout << buffers_opt.at("buf") << endl;
  ////buffers_opt.at("buf").port_group2bank(2, 2);
  ////cout << buffers_opt.at("buf") << endl;

  //for (auto& b : buffers_opt) {
    //cout << b.first << endl << b.second << endl;
    //if ((b.second.get_in_ports().size() && b.second.get_out_ports().size()) == 0)
        //continue;
    //b.second.generate_banks_and_merge(options);
    //b.second.print_bank_info();

    //b.second.port_group2bank(max_inpt, max_outpt);
    //b.second.print_bank_info();
  //}

  ////auto post_proc_buffers = buffers_opt.at("hw_input_stencil").generate_ubuffer(opt);
  ////auto post_proc_buffers = buffers_opt.at("hw_kernel_stencil").generate_ubuffer(opt);
  //for (auto it: buffers_opt) {
    //if (it.second.get_out_ports().size() == 0 || it.second.get_in_ports().size() == 0) {
        //continue;
    //}
  //auto buf = it.second;
  //auto ubuf_name = it.first;
  //if (ubuf_name != "hw_input_stencil")
      //continue;
  ////auto post_proc_buffers = buffers_opt.at("conv_stencil").generate_ubuffer(opt);
  //auto post_proc_buffers = buf.generate_ubuffer(opt);
  //opt.conditional_merge = false;
  ////auto rewrite_buffers = buffers_opt.at("conv_stencil").generate_ubuffer(opt);
  ////auto rewrite_buffers = buffers_opt.at("hw_input_stencil").generate_ubuffer(opt);
  //auto rewrite_buffers = buf.generate_ubuffer(opt);
  //for (auto it: post_proc_buffers) {
    //cout << "\tpost: " << it.first << ": " << it.second << endl;
  //}
  //for (auto it: rewrite_buffers) {
    //cout << "\trewrite_buffers: " << it.first << ": " << it.second << endl;
  //}

  //for (auto it : post_proc_buffers) {
    //map<string, UBuffer> tmp;
    //map<string, UBuffer> temp;
    //tmp.insert(it);
    //cout << "Vectorizing " << it.first << endl;
    //cout << it.second << endl;
    //buffer_vectorization(it.first, 3, 4, tmp);
    //cout << "Done with vectorization" << endl;
    //for (auto it: tmp) {
        //auto buf = it.second;
        //if (buf.get_in_ports().size() == 1)
            //temp.insert(it);
        //cout << it.first<< endl;
    //}

    ////auto opt_sched = optimized_schedule_from_buffers_feautrier(buffers_opt, false);
    ////auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, false);
    ////auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, false);

    ////auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, true, {"op_hcompute_hw_input_stencil_vec"});
    ////auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, true, {"op_hcompute_conv_stencil_vec", "op_hcompute_conv_stencil_1_vec_in"});
    ////auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, true, {"op_hcompute_hw_kernel_stencil_vec"});

    ////isl_union_set* gb_domain = global_domain_from_buffers(tmp);
    ////isl_ctx* ctx = ::ctx(gb_domain);
    ////auto um = isl_union_map_read_from_str(ctx,"{}");
    ////auto um = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil_agg2sram[root=0, i0, i1, i2, i3]->op_hcompute_conv_stencil_1_sram2tb[root, i0, i1', i2', i3', i4', i5', i6']}");
    //auto um = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil[root=0, i1, i2]->op_hcompute_conv_stencil_1[root, i1, i2'] : 0<=i1<=3}");

    //cout << str(um) << endl;
    //auto um2 = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil_agg2sram[root=0, i1, 0]->op_hcompute_hw_input_stencil[root, i1, 4] : 0<=i1<=3}");
    //cout << str(um2) << endl;
    //um = unn(um, um2);
    //////        //"{op_hcompute_hw_input_stencil[root=0, i0, i1, i2, i3]->op_hcompute_conv_stencil_1[root, i0, i1', i2', i3', i4', i5', i6']; op_hcompute_conv_stencil_1[root=0, i0, i1', i2', i3', i4', i5', i6']->op_hcompute_hw_input_stencil[root, i0+1, i1, i2, i3]}");
    ////cout << "\t global domain" << str(gb_domain) << endl;
    ////cout << "\tDouble buffer dependency: " << str(um) << endl;
    ////um = its(um, gb_domain);
    ////cout << "\tDouble buffer dependency: " << str(um) << endl;
    ////um = its_range(um, gb_domain);
    //cout << "\tDouble buffer dependency: " << str(um) << endl;
    ////auto opt_sched = optimized_schedule_from_buffers_DB(tmp, vector<string>({"op_hcompute_hw_input_stencil_agg2sram"}), um);
    ////auto opt_sched = optimized_schedule_from_buffers_DB(temp, vector<string>({}), um);
    ////auto opt_sched = optimized_schedule_from_buffers_flatten(temp, false);
    ////auto opt_sched = optimized_schedule_from_buffers_flatten_extra_with_validity(tmp, true, {"op_hcompute_hw_input_stencil_agg2sram"});
    ////cout << str(opt_sched) << endl;
    ////cout << codegen_c(opt_sched) << endl;
    ////assert(false);
    //int app_target_II = 1;

    ////map<pair<string, string>, int> latency({{{"input", "input_vec"}, 1},
    ////      {{"output_2", "output_2_vec"}, -1}});
    ////auto hsh = generate_hardware_schedule_heu(opt_sched, tmp, {}, app_target_II, {"op_hcompute_conv_stencil_1_vec_in"});
    ////cout << str(hsh) << endl;
    ////cout << codegen_c(hsh) << endl;
    ////cmd("mkdir -p ./lake_controllers/resnet/"+ubuf_name);
    ////auto op_vec = emit_lake_config(tmp, hsh, "./lake_controllers/resnet/"+ubuf_name);
    //////check_lake_config(op_vec, "./lake_controllers/conv_3_3/", "./lake_gold/conv_3_3/");
    ////assert(false);

  //}

  //}
//}

//void lake_resnet_test() {
//  auto prg = resnet_hc();
//  prg.pretty_print();
//
//  CodegenOptions options;
//  options.all_rams = true;
//  all_register_files(prg, options);
//  options.banking_strategies["conv_stencil"] = {"cyclic", {1, 1, 4}};
//  options.banking_strategies["hw_kernel_stencil"] = {"exhaustive"};
//  options.banking_strategies["hw_input_stencil"] = {"exhaustive"};
//  options.inner_bank_offset_mode =
//    INNER_BANK_OFFSET_MULTILINEAR;
//  //generate_optimized_code(options, prg);
//
//  auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());
//  //optimized schedule
//  auto buffers_opt = build_buffers(prg, sched_naive);
//  CodegenOptions opt;
//  opt.conditional_merge = true;
//  opt.merge_threshold = 4;
//  opt.rtl_options.max_inpt = 2;
//  opt.rtl_options.max_outpt = 2;
//  //buffers_opt.at("buf").generate_bank_and_merge(opt);
//  //cout << buffers_opt.at("buf") << endl;
//  //buffers_opt.at("buf").port_group2bank(2, 2);
//  //cout << buffers_opt.at("buf") << endl;
//
//  for (auto& b : buffers_opt) {
//    cout << b.first << endl << b.second << endl;
//    if ((b.second.get_in_ports().size() && b.second.get_out_ports().size()) == 0)
//        continue;
//    b.second.generate_banks_and_merge(options);
//    b.second.print_bank_info();
//
//    //Assign an configuration file,
//    //json config_reg_map = parse_config_file("conv33_configuration.txt");
//    //b.second.set_config(config_reg_map);
//
//    b.second.port_group2bank(opt);
//    b.second.print_bank_info();
//
//
//#ifdef COREIR
//    CoreIR::Context* context = CoreIR::newContext();
//    CoreIRLoadLibrary_commonlib(context);
//    CoreIRLoadLibrary_cwlib(context);
//    schedule_info hwinfo;
//    hwinfo.use_dse_compute = false;
//    auto def = generate_coreir_without_ctrl(opt, context, b.second, hwinfo);
//    if(!saveToFile(context->getNamespace("global"), "lake_"+b.first+".json", def)) {
//      cout << "Could not save ubuffer coreir!" << endl;
//      context->die();
//    }
//    CoreIR::deleteContext(context);
//#endif
//
//  }
//
//#ifdef COREIR
//  //generate_cgra_tb(buffers_opt, prg, opt);
//#endif
//
//  map<string, int> dim_id_map({{"hw_input_stencil", 1},
//          {"hw_kernel_stencil", 2},
//          {"conv_stencil", 2}});
//  auto post_proc_buffers = buffers_opt.at("hw_input_stencil").generate_ubuffer(opt);
//  //auto post_proc_buffers = buffers_opt.at("hw_kernel_stencil").generate_ubuffer(opt);
//  for (auto it: buffers_opt) {
//    if (it.second.get_out_ports().size() == 0 || it.second.get_in_ports().size() == 0) {
//        continue;
//    }
//  auto buf = it.second;
//  auto ubuf_name = it.first;
//  if (ubuf_name != "hw_input_stencil")
//      continue;
//  //auto post_proc_buffers = buffers_opt.at("conv_stencil").generate_ubuffer(opt);
//  auto post_proc_buffers = buf.generate_ubuffer(opt);
//  opt.conditional_merge = false;
//  //auto rewrite_buffers = buffers_opt.at("conv_stencil").generate_ubuffer(opt);
//  //auto rewrite_buffers = buffers_opt.at("hw_input_stencil").generate_ubuffer(opt);
//  auto rewrite_buffers = buf.generate_ubuffer(opt);
//  for (auto it: post_proc_buffers) {
//    cout << "\tpost: " << it.first << ": " << it.second << endl;
//  }
//  for (auto it: rewrite_buffers) {
//    cout << "\trewrite_buffers: " << it.first << ": " << it.second << endl;
//  }
//
//  for (auto it : post_proc_buffers) {
//    map<string, UBuffer> tmp;
//    map<string, UBuffer> temp;
//    tmp.insert(it);
//    cout << "Vectorizing " << it.first << endl;
//    cout << it.second << endl;
//    buffer_vectorization(it.first, 2, 4, tmp);
//    cout << "Done with vectorization" << endl;
//    for (auto it: tmp) {
//        auto buf = it.second;
//        if (buf.get_in_ports().size() == 4)
//            temp.insert(it);
//        cout << it.first<< endl;
//    }
//
//    //auto opt_sched = optimized_schedule_from_buffers_feautrier(buffers_opt, false);
//    //auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, false);
//    //auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, false);
//
//    //auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, true, {"op_hcompute_hw_input_stencil_vec"});
//    //auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, true, {"op_hcompute_conv_stencil_vec", "op_hcompute_conv_stencil_1_vec_in"});
//    //auto opt_sched = optimized_schedule_from_buffers_flatten(tmp, true, {"op_hcompute_hw_kernel_stencil_vec"});
//
//    isl_union_set* gb_domain = global_domain_from_buffers(tmp);
//    isl_ctx* ctx = ::ctx(gb_domain);
//    //auto um = isl_union_map_read_from_str(ctx,"{}");
//    //auto um = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil_agg2sram[root=0, i0, i1, i2, i3]->op_hcompute_conv_stencil_1_sram2tb[root, i0, i1', i2', i3', i4', i5', i6']}");
//    auto um = isl_union_map_read_from_str(ctx,"{op_hcompute_hw_input_stencil[root=0, 8191]->op_hcompute_conv_stencil_1_sram2tb[root, 0]}");
//    ////        //"{op_hcompute_hw_input_stencil[root=0, i0, i1, i2, i3]->op_hcompute_conv_stencil_1[root, i0, i1', i2', i3', i4', i5', i6']; op_hcompute_conv_stencil_1[root=0, i0, i1', i2', i3', i4', i5', i6']->op_hcompute_hw_input_stencil[root, i0+1, i1, i2, i3]}");
//    //cout << "\t global domain" << str(gb_domain) << endl;
//    //cout << "\tDouble buffer dependency: " << str(um) << endl;
//    //um = its(um, gb_domain);
//    //cout << "\tDouble buffer dependency: " << str(um) << endl;
//    //um = its_range(um, gb_domain);
//    //cout << "\tDouble buffer dependency: " << str(um) << endl;
//    //auto opt_sched = optimized_schedule_from_buffers_DB(tmp, vector<string>({"op_hcompute_hw_input_stencil_agg2sram"}), um);
//    //auto opt_sched = optimized_schedule_from_buffers_DB(temp, vector<string>({}), um);
//    //auto opt_sched = optimized_schedule_from_buffers_flatten(temp, false);
//    auto opt_sched = optimized_schedule_from_buffers_flatten_extra_with_validity(tmp, {"op_hcompute_hw_input_stencil_agg2sram"}, um);
//    //auto opt_sched = optimized_schedule_from_buffers_flatten_extra_with_validity(tmp, true, {"op_hcompute_conv_stencil_agg2sram", "op_hcompute_conv_stencil_1_agg2sram"});
//    cout << str(opt_sched) << endl;
//    cout << codegen_c(opt_sched) << endl;
//    auto multi_tile_sched = pad_identity_relation_to_umap(opt_sched, 1, 0, 0, 3);
//    cout << codegen_c(multi_tile_sched) << endl;
//    cout << str(multi_tile_sched) << endl;
//    map<pair<string, string>, int> latency({
//          {{"op_hcompute_hw_input_stencil", "op_hcompute_hw_input_stencil_agg2sram"}, 1},
//          {{"op_hcompute_hw_input_stencil_agg2sram", "op_hcompute_conv_stencil_1_sram2tb"}, 0},
//          {{"op_hcompute_conv_stencil_1_sram2tb", "op_hcompute_conv_stencil_1"}, 1}});
//    auto hsh = generate_hardware_schedule_heu_new(multi_tile_sched, tmp, latency, 1);
//    cout << codegen_c(hsh) << endl;
//    cmd("mkdir -p ./lake_controllers/resnet/");
//    //auto op_vec = emit_lake_config(tmp, hsh, "./lake_controllers/resnet/");
//    //assert(false);
//
//  }
//
//  }
//}

void lake_cascade_autovec_test() {
  //prog prg = halide_cascade();
  //cout << "Created program..." << endl;
  //prg.pretty_print();

  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "cascade_lake";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["out"] = 16;
  prg.buffer_port_widths["buf1"] = 16;
  prg.buffer_port_widths["buf2"] = 16;

  auto p = prg.add_nest("po", 0, 20, "pi", 0, 20);
  auto write = p->add_op("input");
  write->add_load("in", "po, pi");
  write->add_store("buf1", "po, pi");

  auto q = prg.add_nest("qo", 0, 16, "qi", 0, 16);
  auto read = q->add_op("conv");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("buf1", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("buf2", "qo, qi");

  auto k = prg.add_nest("ko", 0, 14, "ki", 0, 14);
  auto read_ = k->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read_->add_load("buf2", "ko+" + to_string(wy) + ", ki+" + to_string(wx));
      }
  }
  read_->add_store("out", "ko, ki");

  //naive buffer without banking
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;

  for (auto& b : buffers_opt) {
    cout << "\tGenerate bank for buffer: " << b.first << endl;
    if (b.first == "in" || b.first == "out")
        continue;
    b.second.generate_banks_and_merge(opt);
    b.second.port_group2bank(opt);
  }
#ifdef COREIR
  generate_cgra_tb(buffers_opt, prg, opt);
#endif

  //return the buffers after vectorization and the proximity deps you want to remove
  vector<string> input_vec_stmts;
  isl_ctx* ctx = isl_ctx_alloc();
  umap* extra_raw_deps = isl_union_map_read_from_str(ctx, "{}");
  auto ubuf_pool = vectorization_from_buf_map(buffers_opt, input_vec_stmts, extra_raw_deps);
  auto opt_sched = optimized_schedule_from_buffers(ubuf_pool, input_vec_stmts, extra_raw_deps);
  cout << str(opt_sched) << endl << endl;
  cout << codegen_c(opt_sched) << endl << endl;
  map<pair<string, string>, int> latency({
          {{"input", "input_agg2sram"}, 1},
          {{"input_agg2sram", "conv_2_sram2tb"}, -3},
          {{"conv_2_sram2tb", "conv_2"}, 2},
          {{"conv_2", "conv"}, -1},
          {{"conv", "conv_agg2sram"}, 0},
          {{"conv_agg2sram", "output_2_sram2tb"}, -1},
          {{"output_2_sram2tb", "output_2"}, 1}});
  auto hsh = generate_hardware_schedule_heu_new(opt_sched, ubuf_pool, latency, 1);
  cout << codegen_c(hsh) << endl;
  cmd("mkdir -p ./lake_controllers/cascade/");
  auto op_vec = emit_lake_config(ubuf_pool, hsh, "./lake_controllers/cascade/");
  //emit_lake_stream(ubuf_pool, hsh, "./lake_stream/cascade/", false);
  //check_lake_config(op_vec, "./lake_controllers/cascade/", "./lake_gold/cascade/");
}

//void lake_harris_autovec_test() {
  //prog prg = harris_remove();

  ////optimized schedule
  //auto buffers_opt = build_buffers(prg);
  //CodegenOptions opt;
  //opt.conditional_merge = true;
  //opt.merge_threshold = 4;
  //int max_inpt = 2, max_outpt = 2;

  //for (auto& b : buffers_opt) {
    //cout << "\tGenerate bank for buffer: " << b.first << b.second << endl;
    //if (b.second.num_in_ports() == 0 || b.second.num_out_ports() == 0)
        //continue;
    //b.second.generate_banks_and_merge(opt);
    //b.second.port_group2bank(max_inpt, max_outpt);
  //}
//#ifdef COREIR
  //generate_cgra_tb(buffers_opt, prg, opt);
//#endif

  ////return the buffers after vectorization and the proximity deps you want to remove
  //vector<string> input_vec_stmts;
  //isl_ctx* ctx = isl_ctx_alloc();
  //umap* extra_raw_deps = isl_union_map_read_from_str(ctx, "{}");
  //auto ubuf_pool = vectorization_from_buf_map(buffers_opt, input_vec_stmts, extra_raw_deps);
  //auto opt_sched = optimized_schedule_from_buffers(ubuf_pool, input_vec_stmts, extra_raw_deps);
  //cout << str(opt_sched) << endl << endl;
  //cout << codegen_c(opt_sched) << endl << endl;

  //map<pair<string, string>, int> latency({});
  //auto hsh = generate_hardware_schedule_heu_new(opt_sched, ubuf_pool, latency, 1);
  //cout << codegen_c(hsh) << endl;
  //cmd("mkdir -p ./lake_controllers/harris/");
  //auto op_vec = emit_lake_config(ubuf_pool, hsh, "./lake_controllers/harris/");
  //cmd("mkdir -p ./lake_stream/harris/");
  ////emit_lake_stream(ubuf_pool, hsh, "./lake_stream/harris/", false);
//}

void lake_gaussian_autovec_test() {
  prog prg = gaussian();

  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;

  for (auto& b : buffers_opt) {
    cout << "\tGenerate bank for buffer: " << b.first << b.second << endl;
    if (b.second.num_in_ports() == 0 || b.second.num_out_ports() == 0)
        continue;
    b.second.generate_banks_and_merge(opt);
    b.second.port_group2bank(opt);
  }
#ifdef COREIR
  generate_cgra_tb(buffers_opt, prg, opt);
#endif

  //return the buffers after vectorization and the proximity deps you want to remove
  vector<string> input_vec_stmts;
  isl_ctx* ctx = isl_ctx_alloc();
  umap* extra_raw_deps = isl_union_map_read_from_str(ctx, "{}");
  auto ubuf_pool = vectorization_from_buf_map(buffers_opt, input_vec_stmts, extra_raw_deps);
  auto opt_sched = optimized_schedule_from_buffers(ubuf_pool, input_vec_stmts, extra_raw_deps);
  cout << str(opt_sched) << endl << endl;
  cout << codegen_c(opt_sched) << endl << endl;

  map<pair<string, string>, int> latency({
          {{"op_hcompute_hw_input_stencil", "op_hcompute_hw_input_stencil_agg2sram"}, 1},
          {{"op_hcompute_hw_input_stencil_agg2sram", "op_hcompute_blur_unnormalized_stencil_1_2_sram2tb"}, -3},
          {{"op_hcompute_blur_unnormalized_stencil_1_2_sram2tb", "op_hcompute_blur_unnormalized_stencil_1_2"}, 2}});
  auto hsh = generate_hardware_schedule_heu_new(opt_sched, ubuf_pool, latency, 1);
  cout << codegen_c(hsh) << endl;
  cmd("mkdir -p ./lake_controllers/gaussian/");
  //auto op_vec = emit_lake_config(ubuf_pool, hsh, "./lake_controllers/gaussian/");
  cmd("mkdir -p ./lake_stream/gaussian/");
  //emit_lake_stream(ubuf_pool, hsh, "./lake_stream/harris/", false);
}

void lake_conv33_autovec_aha_test() {
  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "conv33_naive_compute";
  prg.add_input("in_inst");
  prg.add_output("out_inst");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in_inst"] = 16;
  prg.buffer_port_widths["out_inst"] = 16;
  prg.buffer_port_widths["buf_inst"] = 16;

  auto p = prg.add_nest("po", 0, 64, "pi", 0, 64);
  auto write = p->add_op("input");
  write->add_load("in_inst", "po, pi");
  write->add_store("buf_inst", "po, pi");

  auto q = prg.add_nest("qo", 0, 62, "qi", 0, 62);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("buf_inst", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("out_inst", "qo, qi");


  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.use_prebuilt_memory = true;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  //auto sched = global_schedule_from_buffers(buffers_opt);
  //generate_coreir(opt, buffers_opt, prg, sched);

  for (auto& b : buffers_opt) {
    cout << "\tGenerate bank for buffer: " << b.first << endl;
    if (b.second.num_in_ports() == 0 || b.second.num_out_ports() == 0)
        continue;
    b.second.generate_banks_and_merge(opt);
    b.second.port_group2bank(opt);

    //auto def = generate_coreir(opt, context, b.second);

    //if(!saveToFile(context->getNamespace("global"), b.first+ ".json")) {
    //  cout << "Could not save ubuffer coreir!" << endl;
    //  context->die();
    //}
    //CoreIR::deleteContext(context);
  }

#ifdef COREIR
  generate_cgra_tb(buffers_opt, prg, opt);
#endif


  //return the buffers after vectorization and the proximity deps you want to remove
  vector<string> input_vec_stmts;
  isl_ctx* ctx = isl_ctx_alloc();
  umap* extra_raw_deps = isl_union_map_read_from_str(ctx, "{}");
  auto ubuf_pool = vectorization_from_buf_map(buffers_opt, input_vec_stmts, extra_raw_deps);
  auto opt_sched = optimized_schedule_from_buffers(ubuf_pool, input_vec_stmts, extra_raw_deps);
  cout << str(opt_sched) << endl << endl;
  cout << codegen_c(opt_sched) << endl << endl;
  map<pair<string, string>, int> latency({
          {{"input", "input_agg2sram"}, 1},
          {{"input_agg2sram", "output_2_sram2tb"}, -3},
          {{"output_2_sram2tb", "output_2"}, 2}});
  auto hsh = generate_hardware_schedule_heu_new(opt_sched, ubuf_pool, latency, 1);
  cout << codegen_c(hsh) << endl;
  cmd("mkdir -p ./lake_controllers/conv_3_3_aha/");
  auto op_vec = emit_lake_config(ubuf_pool, hsh, "./lake_controllers/conv_3_3_aha/");
  cmd("mkdir -p ./lake_stream/conv_3_3_aha/");
  //emit_lake_stream(ubuf_pool, hsh, "./lake_stream/conv_3_3_new/", false);
  //check_lake_config(op_vec, "./lake_controllers/conv_3_3_aha/", "./lake_gold/conv_3_3_aha/");
}

umap* generate_garnet_hw_sched(prog& prg, CodegenOptions & options);
umap* clockwork_schedule(prog& prg);
vector<int> garnet_fuse_ii_level(prog& prg);

void lake_conv33_recipe_test() {
  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "conv_3_3_recipe";
  prg.add_input("hw_input_stencil");
  prg.add_output("conv_stencil");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  prg.buffer_port_widths["conv_stencil"] = 16;
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;

  auto p = prg.add_nest("po", 0, 64, "pi", 0, 64);
  auto write = p->add_op("input");
  write->add_function("hcompute_hw_input_global_wrapper_stencil");
  write->add_load("hw_input_stencil", "po, pi");
  write->add_store("hw_input_global_wrapper_stencil", "po, pi");

  auto q = prg.add_nest("qo", 0, 62, "qi", 0, 62);
  auto read = q->add_op("output");
  read->add_function("hcompute_conv_stencil_1");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("hw_input_global_wrapper_stencil", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("conv_stencil", "qo, qi");


  //optimized schedule
  cmd("mkdir -p aha_garnet_design/" + prg.name);
  auto iis = garnet_fuse_ii_level(prg);
  CodegenOptions options;
  auto buffers_opt = build_buffers(prg, clockwork_schedule(prg));
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.iis = iis;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  //auto sched = global_schedule_from_buffers(buffers_opt);

  for (auto& b : buffers_opt) {
    cout << "\tGenerate bank for buffer: " << b.first << endl << b.second << endl;
    if (b.second.num_in_ports() == 0 || b.second.num_out_ports() == 0)
        continue;
    b.second.generate_banks_and_merge(opt);
    b.second.port_group2bank(opt);

    //auto def = generate_coreir(opt, context, b.second);

    //if(!saveToFile(context->getNamespace("global"), b.first+ ".json")) {
    //  cout << "Could not save ubuffer coreir!" << endl;
    //  context->die();
    //}
    //CoreIR::deleteContext(context);
  }

#ifdef COREIR
  //generate_garnet_tb(buffers_opt, prg, opt);
#endif


  //return the buffers after vectorization and the proximity deps you want to remove
  vector<string> input_vec_stmts;
  isl_ctx* ctx = isl_ctx_alloc();
  umap* extra_raw_deps = isl_union_map_read_from_str(ctx, "{}");
  auto ubuf_pool = vectorization_from_buf_map(buffers_opt, input_vec_stmts, iis, extra_raw_deps);
  isl_union_map* hsh = global_schedule_from_buffers(ubuf_pool);
  cout << "hardware schedule: " << str(hsh) << endl;
  //cmd("mkdir -p ./lake_stream/conv_3_3_recipe/");
  //emit_lake_stream(ubuf_pool, hsh, "./lake_stream/conv_3_3_recipe/", false);
  //cmd("mkdir -p ./lake_controllers/conv_3_3_recipe/");
  //auto op_vec = emit_lake_config(ubuf_pool, hsh, "./lake_controllers/conv_3_3_recipe/");
}

void dsa_writers(prog& prg);
void dsa_readers(prog& prg);
void break_up_multi_channel_outputs(prog& prg);
void break_up_multi_channel_inputs(prog& prg);
void load_pe_power_stats(power_analysis_params& power_params, const std::string& file);

void Init_PE_energy_cost(power_analysis_params& power_params)  {
    const double COST_PER_PE_MUL_PJ = 40.0 / 1000;
    const double COST_PER_PE_ADD_PJ = 20.0 / 1000;

    const double COST_PER_PE_SUB_PJ = 0.035;
    const double COST_PER_PE_SHIFT_PJ = 0.01;
    const double COST_PER_PE_LOGIC_BINOP_PJ = 0.01;
    const double COST_PER_PE_EQ_PJ = 0.01;
    const double COST_PER_PE_MUX_PJ = 0.5;
    const double COST_PER_PE_CMP_PJ = 0.035;

    power_params.alu_op_energy_costs["mult_0"] = COST_PER_PE_MUL_PJ;
    power_params.alu_op_energy_costs["add"] = COST_PER_PE_ADD_PJ;
    power_params.alu_op_energy_costs["rshft"] = COST_PER_PE_SHIFT_PJ;
    power_params.alu_op_energy_costs["sub"] = COST_PER_PE_SUB_PJ;
    power_params.alu_op_energy_costs["and"] = COST_PER_PE_LOGIC_BINOP_PJ;
    power_params.alu_op_energy_costs["or"] = COST_PER_PE_LOGIC_BINOP_PJ;
    power_params.alu_op_energy_costs["eq"] = COST_PER_PE_EQ_PJ;
    power_params.alu_op_energy_costs["sel"] = COST_PER_PE_MUX_PJ;
    power_params.alu_op_energy_costs["ult"] = COST_PER_PE_CMP_PJ;
    power_params.alu_op_energy_costs["lt"] = COST_PER_PE_CMP_PJ;
    power_params.alu_op_energy_costs["le"] = COST_PER_PE_CMP_PJ;
    power_params.alu_op_energy_costs["ule"] = COST_PER_PE_CMP_PJ;
    //Currently does not have
    power_params.alu_op_energy_costs["max"] = COST_PER_PE_CMP_PJ + COST_PER_PE_MUX_PJ;
    power_params.alu_op_energy_costs["umax"] = COST_PER_PE_CMP_PJ + COST_PER_PE_MUX_PJ;
    power_params.alu_op_energy_costs["abs"] = COST_PER_PE_SUB_PJ;

    load_pe_power_stats(power_params, "./power_models/conv_3_3/PEs.txt");


}


void compile_for_garnet_single_port_mem(prog & prg, string dir, bool gen_smt_stream, bool gen_config_only,bool multi_level_mem, bool use_metamapper, string dse_compute_filename, bool energy_model = false);
void compile_for_garnet_fetch2_mem(prog & prg, string dir, bool gen_smt_stream, bool gen_config_only, bool multi_level_mem, bool use_metampper, bool energy_model = false);
void compile_for_garnet_dual_port_mem(prog& prg,
        string dir,
        bool gen_smt_stream,
        bool config_gen_only,
        bool multi_level_mem,
        bool use_metamapper,
        string dse_compute_filename,
        bool energy_model =false);
void cpy_app_to_folder(const std::string& app_type, const std::string& prg_name);
void generate_resnet_latency_experiment(prog& prg,
        ofstream& profiling_file,
        string dir,
        bool use_metamapper = false);

void verilator_regression_test(prog& prg, vector<string>& collateral_files, string app_type) {

  string name = prg.name;
  auto cpu = unoptimized_result(prg);
  vector<string> verilog_files;// = get_files("./" + dir + "/"+name+"/verilog/");
  verilog_files.push_back(name + ".v");
  for (auto file: collateral_files) {
    verilog_files.push_back(file);
  }
  //verilog_files.push_back("laketop_new.sv");
  //verilog_files.push_back("LakeTop_flat.v");
  //verilog_files.push_back("lake_module_wrappers.v");
  //cmd("mv laketop_new.sv laketop.sv");
  bool extra_flag_for_lake = true;
  int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
  assert(res == 0);
  //cmd("rm LakeTop_W_new.v");
  //cmd("rm LakeWrapper.v");
  //cmd("rm lake_module_wrappers.v");
  //cmd("rm laketop_new.sv");
  //cmd("rm LakeTop_flat.v");
  for (auto file: collateral_files) {
    cmd("rm " + file);
  }

  auto verilator_res = verilator_results(prg.name);
  compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
  //string app_type = "dualwithaddr";
  //string app_type = "single_port_buffer";
  cpy_app_to_folder(app_type, prg.name);
}

void test_pond(string dir, bool run_verilator=true) {
  vector<prog> test_apps;
  //Need to change the schedule for vectorization
  //test_apps.push_back(complex_mem_pond_input());

  //fp app need pond for accumulation buffer
  //test_apps.push_back(nlmeans_rolled_7x7());

  //test_apps.push_back(nlmeans_simple_blur());
  test_apps.push_back(nlmeans_simple());
  test_apps.push_back(resnet_simple());
  test_apps.push_back(resnet());
  test_apps.push_back(three_level_pond_copy());
  test_apps.push_back(three_level_pond_rolled());
  test_apps.push_back(conv_1_3());
  test_apps.push_back(conv_rolled());
  test_apps.push_back(complex_mem_pond_rolled());
  test_apps.push_back(complex_mem_pond());
  test_apps.push_back(resnet_init_unroll_tile());

  //TODO:Currently not work because of floating point, also need to check the cyclic banking condition
  //test_apps.push_back(fft8_unroll8_split());

  //TODO: tobe tested with new pond
  //test_apps.push_back(three_level_pond());
  //test_apps.push_back(three_level_pond_rolled());
  for ( auto prg: test_apps) {
    cout << "====== Running CGRA Single Port test for " << prg.name << endl;
    prg.pretty_print();
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers_new(prg);
    prg.pretty_print();
    bool gen_config_only = !run_verilator;

#ifdef COREIR
    compile_for_garnet_single_port_mem(prg, dir,
            false, /*generate smt stream*/
            gen_config_only,/*gen_config_only*/
            true, /*multi level hierarchy*/
            false, /*for metamapper*/
            "",
            false);
    //generate_regression_testbench(prg);

    cout << "Output name: " << prg.name << endl;
    //run_verilator_tb(prg.name);
    //TODO: move to a function
    //run verilator on all the generated verilog
    if (!gen_config_only) {
      vector<string> verilog_files;
      verilog_files.push_back("LakeTop_flat.v");
      verilog_files.push_back("laketop_new.sv");
      verilog_files.push_back("PondTop_flat.v");
      verilog_files.push_back("pondtop.sv");
      verilog_files.push_back("pond_module_wrappers.v");
      verilog_files.push_back("lake_module_wrappers.v");
      add_default_initial_block("laketop", "endmodule   // sram_sp__0");
      verilator_regression_test(prg, verilog_files, "single_port_buffer");
    }

#endif
  }
}


void test_energy_model(string dir) {
  bool gen_config_only = true;
  vector<prog> test_apps;
  test_apps.push_back(conv_3_3());
  //test_apps.push_back(harris());
  //test_apps.push_back(resnet());

  for ( auto prg: test_apps) {
    cout << "====== Running Energy Model test for " << prg.name << endl;
    prg.pretty_print();
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
    prg.pretty_print();
    auto cpu = unoptimized_result(prg);

    //compile_for_garnet_platonic_mem(prg);
    compile_for_garnet_single_port_mem(prg, dir, false, gen_config_only, false, false, "", true);
    generate_regression_testbench(prg);

    cout << "Output name: " << prg.name << endl;
    //run_verilator_tb(prg.name);
    //TODO: move to a function
    //run verilator on all the generated verilog
    if (!gen_config_only) {
      string name = prg.name;
      auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
      verilog_files.push_back(name + ".v");
      verilog_files.push_back("LakeWrapper.v");
      bool extra_flag_for_lake = true;
      int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
      assert(res == 0);
      cmd("rm LakeWrapper.v");

      auto verilator_res = verilator_results(prg.name);
      compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
      //string app_type = "dualwithaddr";
      string app_type = "single_port_buffer";
      cpy_app_to_folder(app_type, prg.name);
    }
  }
}

void test_fetchwidth2_mem(bool gen_config_only, bool multi_accessor=false, string dir="aha_garnet_design_fetch2") {
  vector<prog> test_apps;

  test_apps.push_back(conv_3_3());
  //test_apps.push_back(camera_pipeline_new());
  //test_apps.push_back(laplacian_pyramid());
  //test_apps.push_back(counter());
  //test_apps.push_back(gaussian());
  //test_apps.push_back(down_sample());
  //test_apps.push_back(cascade());
  //test_apps.push_back(harris());
  //test_apps.push_back(rom());
  //test_apps.push_back(conv_1_2());
  //test_apps.push_back(demosaic_unrolled());
  //test_apps.push_back(camera_pipeline());
  //test_apps.push_back(up_sample());
  //test_apps.push_back(unsharp());
  //test_apps.push_back(camera_pipeline_new());

  //DNN apps
  test_apps.push_back(resnet_tiny());
  test_apps.push_back(resnet_multi_tiny());

  //Big applications
  //test_apps.push_back(mobilenet_unrolled());

  for ( auto prg: test_apps) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
    prg.pretty_print();

    //compile_for_garnet_platonic_mem(prg);
    compile_for_garnet_fetch2_mem(prg, dir, false, gen_config_only, false, false);
    cout << "Output name: " << prg.name << endl;
    //TODO: move to a function
    //run verilator on all the generated verilog
    if (!gen_config_only) {
      string name = prg.name;
      auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
      verilog_files.push_back(name + ".v");
      verilog_files.push_back("LakeWrapper.v");
      bool extra_flag_for_lake = true;
      auto cpu = unoptimized_result(prg);
      int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
      assert(res == 0);
      cmd("rm LakeWrapper.v");

      auto verilator_res = verilator_results(prg.name);
      compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
      //string app_type = "dualwithaddr";
      string app_type = "single_port_buffer";
      cpy_app_to_folder(app_type, prg.name);
    }
  }
}

void resnet_profiling() {

  vector<prog> test_apps;
  test_apps.push_back(resnet1_full());
  test_apps.push_back(resnet2_x_full());
  test_apps.push_back(resnet3_1_full());
  test_apps.push_back(resnet3_x_full());
  test_apps.push_back(resnet4_1_full());
  test_apps.push_back(resnet4_x_full());
  test_apps.push_back(resnet5_1_full());
  test_apps.push_back(resnet5_x_full());
  test_apps.push_back(resnet5_1_unroll_full());
  test_apps.push_back(resnet5_x_unroll_full());
  //test_apps.push_back(resnet3_1());

  ofstream out("resnet_profiling.csv");
  for ( auto prg: test_apps) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
    prg.pretty_print();

    //compile_for_garnet_platonic_mem(prg);
    generate_resnet_latency_experiment(prg, out, "aha_garnet_design");
  }
  out.close();
  cout << "FINISH Full Resnet profiling! Check <./resnet_profiling.csv>. " << endl;
}

void test_glb(bool gen_config_only, bool multi_accessor=false, string dir="aha_garnet_design") {
  vector<prog> test_apps;


  //camera pipeline variant tests
  test_apps.push_back(camera_pipeline_2x2_unroll());
  //Still not work need to add a fanin pass support delay row buffer
  //test_apps.push_back(camera_pipeline_extra_buf_glb());
  test_apps.push_back(camera_pipeline_extra_buf());
  test_apps.push_back(camera_pipeline_unrolly());
  test_apps.push_back(camera_pipeline_2x2());

  //ISSCC application without unroll
  test_apps.push_back(harris_color());
  test_apps.push_back(harris_color_unroll4());
  test_apps.push_back(gaussian_isscc());
  test_apps.push_back(camera_pipeline_isscc());
  test_apps.push_back(unsharp_isscc());

  //GLB tests
  test_apps.push_back(unsharp_glb());
  test_apps.push_back(gaussian_glb2());
  test_apps.push_back(camera_pipeline_glb());
  test_apps.push_back(harris_glb2());
  test_apps.push_back(up_sample_glb());
  test_apps.push_back(gaussian_glb8());

  //Dense Linear algebra
  test_apps.push_back(glb_channel_reduction());
  test_apps.push_back(matmul());

  //Simplified multi-tile DNN application
  test_apps.push_back(resnet_init_unroll_tile());

  //Too large which will go beyound the 64k counter ub
  //test_apps.push_back(resnet5_1_full());
  //test_apps.push_back(resnet2_x_full());

  //For debug the 7x7 layer
  test_apps.push_back(resnet_last());

  //Sample DNN Layers
  //test_apps.push_back(resnet1_docker());
  test_apps.push_back(resnet1());
  test_apps.push_back(resnet_1x1());
  test_apps.push_back(resnet3_1());
  test_apps.push_back(resnet4_x());
  test_apps.push_back(resnet5_1());
  test_apps.push_back(resnet5_x());
  test_apps.push_back(resnet5_x_new());
  test_apps.push_back(resnet5_1_new());
  test_apps.push_back(resnet5_1_unroll());
  test_apps.push_back(resnet5_1_unroll_cyclic());
  test_apps.push_back(resnet5_glb_unroll());
  //test_apps.push_back(resnet_multi_channel());

  //two different resnet5x tests
  test_apps.push_back(resnet5_x_unroll());
  test_apps.push_back(resnet5_x_unroll_mic());

  //Test with non double buffer, not tested with db
  test_apps.push_back(resnet_output_stationary_small());
  test_apps.push_back(resnet_output_stationary_tiny());

  for ( auto prg: test_apps) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
    prg.pretty_print();

#ifdef COREIR
    //compile_for_garnet_platonic_mem(prg);
    compile_for_garnet_single_port_mem(prg, dir, false, gen_config_only, false, false, "", false);
    cout << "Output name: " << prg.name << endl;
    //TODO: move to a function
    //run verilator on all the generated verilog
    if (!gen_config_only) {
      vector<string> verilog_files;// = get_files("./" + dir + "/"+name+"/verilog/");
      verilog_files.push_back("laketop_new.sv");
      verilog_files.push_back("LakeTop_flat.v");
      verilog_files.push_back("lake_module_wrappers.v");
      add_default_initial_block("laketop", "endmodule   // sram_sp__0");
      verilator_regression_test(prg, verilog_files, "single_port_buffer");
    }
#endif
  }
}

void test_single_port_mem(bool gen_config_only, bool multi_accessor=false, string dir="aha_garnet_design") {
  vector<prog> test_apps;
  //TODO:has issue  with multiple input
  //test_apps.push_back(demosaic_complex());
  //test_apps.push_back(fft8_unroll8());
  //
  ////fp apps
  //test_apps.push_back(nlmeans_unroll_reorder());
  //test_apps.push_back(nlmeans_simple_trunc());
  //test_apps.push_back(fp_pointwise());
  //test_apps.push_back(fp_arith());
  //test_apps.push_back(camera_pipeline_2x2_unroll());

  //CGRA tests
  test_apps.push_back(nlmeans_simple_trunc());
  test_apps.push_back(conv_3_3());
  test_apps.push_back(counter());
  test_apps.push_back(rom());
  test_apps.push_back(camera_pipeline_new());
  test_apps.push_back(unsharp_new());
  test_apps.push_back(unsharp_large());
  test_apps.push_back(unsharp());
  test_apps.push_back(gaussian());
  test_apps.push_back(cascade());
  test_apps.push_back(harris());
  test_apps.push_back(conv_1_2());
  test_apps.push_back(demosaic_unrolled());
  test_apps.push_back(down_sample());
  test_apps.push_back(up_sample());
  test_apps.push_back(laplacian_pyramid());
  test_apps.push_back(laplacian_pyramid_docker());

  //DNN apps
  test_apps.push_back(resnet_tiny());
  test_apps.push_back(resnet_simple());
  test_apps.push_back(matmul_single());
  test_apps.push_back(matmul_unroll2());
  test_apps.push_back(resnet_size_test());
  test_apps.push_back(resnet());

  //Big applications
  test_apps.push_back(mobilenet_unrolled());
  //test_apps.push_back(resnet_one_input());
  //test_apps.push_back(resnet88());
  //test_apps.push_back(resnet88_chain());

  //test_apps.push_back(resnet_coarse_pipeline_loop());

  //coarse grained pipeline
  //test_apps.push_back(resnet_coarse_pipeline_loop());

  //test_apps.push_back(conv_3_3_wide());
  //TODO: break in the middle of vectorization
  //test_apps.push_back(down_sample());

  for ( auto prg: test_apps) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers_new(prg);
    prg.pretty_print();
#ifdef COREIR
    //compile_for_garnet_platonic_mem(prg);
    compile_for_garnet_single_port_mem(prg, dir, false, gen_config_only, false, false, "", false);
    cout << "Output name: " << prg.name << endl;
    //run verilator on all the generated verilog
    if (!gen_config_only) {
      vector<string> verilog_files;;
      verilog_files.push_back("laketop_new.sv");
      verilog_files.push_back("LakeTop_flat.v");
      verilog_files.push_back("lake_module_wrappers.v");
      add_default_initial_block("laketop", "endmodule   // sram_sp__0");
      verilator_regression_test(prg, verilog_files, "single_port_buffer");
    }
#endif
  }
}

void test_dual_port_mem(bool gen_config_only, bool multi_accessor=false, string dir="aha_garnet_dp") {
  vector<prog> test_apps;

  //CGRA tests that pass dual port test
  //test_apps.push_back(matmul());
  test_apps.push_back(camera_pipeline_2x2());
  test_apps.push_back(unsharp_large());
  test_apps.push_back(harris_color());
  test_apps.push_back(conv_3_3());
  test_apps.push_back(gaussian());
  test_apps.push_back(cascade());
  test_apps.push_back(harris());
  test_apps.push_back(down_sample());
  test_apps.push_back(unsharp());
  test_apps.push_back(unsharp_new());
  test_apps.push_back(counter());
  test_apps.push_back(rom());
  test_apps.push_back(conv_1_2());
  test_apps.push_back(demosaic_unrolled());
  test_apps.push_back(up_sample());
  test_apps.push_back(camera_pipeline_new());
  test_apps.push_back(resnet88());
  test_apps.push_back(laplacian_pyramid_docker());
  test_apps.push_back(laplacian_pyramid());

  //////DNN apps
  ////Not working
  ////test_apps.push_back(matmul_single());

  //test_apps.push_back(resnet_tiny());
  //test_apps.push_back(resnet_simple());
  //test_apps.push_back(resnet());

  //////Big applications
  //test_apps.push_back(mobilenet_unrolled());
  //test_apps.push_back(resnet_one_input());
  //test_apps.push_back(resnet88());
  //test_apps.push_back(resnet88_chain());

  //test_apps.push_back(resnet_coarse_pipeline_loop());

  //coarse grained pipeline
  //test_apps.push_back(resnet_coarse_pipeline_loop());

  //test_apps.push_back(conv_3_3_wide());
  //TODO: break in the middle of vectorization
  //test_apps.push_back(down_sample());

  for ( auto prg: test_apps) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
    prg.pretty_print();
#ifdef COREIR
    //compile_for_garnet_platonic_mem(prg);
    compile_for_garnet_dual_port_mem(prg, dir, false, gen_config_only, false, false, "", false);
    cout << "Output name: " << prg.name << endl;
    //run verilator on all the generated verilog
    if (!gen_config_only) {
      vector<string> verilog_files;;
      verilog_files.push_back("PondTop_flat.v");
      verilog_files.push_back("pondtop_new.sv");
      verilog_files.push_back("pond_module_wrappers.v");
      add_default_initial_block("pondtop", "endmodule   // sram_dp__0");
      verilator_regression_test(prg, verilog_files, "dual_port_buffer");
    }
#endif
  }
}

void generate_smt_stream_for_garnet_single_port_mem(prog& prg);
void test_single_port_mem_smt_stream() {
  vector<prog> test_apps;
  //test_apps.push_back(conv_3_3(28, 28, "_SMT_28_28"));
  //test_apps.push_back(cascade(28, 28, "_SMT_28_28"));
  test_apps.push_back(harris(14, 14, "_SMT_16_16"));

  for ( auto prg: test_apps) {
    cout << "====== Running CGRA Single Port test for " << prg.name << endl;
    prg.pretty_print();
    prg.sanity_check();

    dsa_writers(prg);
    prg.pretty_print();

    generate_smt_stream_for_garnet_single_port_mem(prg);

    cout << "Output name: " << prg.name << endl;
  }
}



void lake_conv33_autovec_test() {
  prog prg;
  prg.compute_unit_file = "vec_access.h";
  prg.name = "conv33_naive_compute";
  prg.add_input("in_inst");
  prg.add_output("out_inst");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in_inst"] = 16;
  prg.buffer_port_widths["out_inst"] = 16;
  prg.buffer_port_widths["buf_inst"] = 16;

  auto p = prg.add_nest("po", 0, 8, "pi", 0, 16);
  auto write = p->add_op("input");
  write->add_load("in_inst", "po, pi");
  write->add_store("buf_inst", "po, pi");

  auto q = prg.add_nest("qo", 0, 6, "qi", 0, 14);
  auto read = q->add_op("output");
  for (size_t wy = 0; wy < 3; wy ++) {
      for (size_t wx = 0; wx < 3; wx ++) {
        read->add_load("buf_inst", "qo+" + to_string(wy) + ", qi+" + to_string(wx));
      }
  }
  read->add_store("out_inst", "qo, qi");


  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.use_prebuilt_memory = true;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  //auto sched = global_schedule_from_buffers(buffers_opt);
  //generate_coreir(opt, buffers_opt, prg, sched);

  for (auto& b : buffers_opt) {
    cout << "\tGenerate bank for buffer: " << b.first << endl;
    if (b.second.num_in_ports() == 0 || b.second.num_out_ports() == 0)
        continue;
    b.second.generate_banks_and_merge(opt);
    b.second.port_group2bank(opt);

    //auto def = generate_coreir(opt, context, b.second);

    //if(!saveToFile(context->getNamespace("global"), b.first+ ".json")) {
    //  cout << "Could not save ubuffer coreir!" << endl;
    //  context->die();
    //}
    //CoreIR::deleteContext(context);
  }

#ifdef COREIR
  generate_cgra_tb(buffers_opt, prg, opt);
#endif


  //return the buffers after vectorization and the proximity deps you want to remove
  vector<string> input_vec_stmts;
  isl_ctx* ctx = isl_ctx_alloc();
  umap* extra_raw_deps = isl_union_map_read_from_str(ctx, "{}");
  auto ubuf_pool = vectorization_from_buf_map(buffers_opt, input_vec_stmts, extra_raw_deps);
  auto opt_sched = optimized_schedule_from_buffers(ubuf_pool, input_vec_stmts, extra_raw_deps);
  cout << str(opt_sched) << endl << endl;
  cout << codegen_c(opt_sched) << endl << endl;
  map<pair<string, string>, int> latency({
          {{"input", "input_agg2sram"}, 1},
          {{"input_agg2sram", "output_2_sram2tb"}, -3},
          {{"output_2_sram2tb", "output_2"}, 2}});
  auto hsh = generate_hardware_schedule_heu_new(opt_sched, ubuf_pool, latency, 1);
  cout << codegen_c(hsh) << endl;
  cout << "hardware schedule: " << str(hsh) << endl;
  cmd("mkdir -p ./lake_controllers/conv_3_3_new/");
  auto op_vec = emit_lake_config(ubuf_pool, hsh, "./lake_controllers/conv_3_3_new/");
  cmd("mkdir -p ./lake_stream/conv_3_3_new/");
  //emit_lake_stream(ubuf_pool, hsh, "./lake_stream/conv_3_3_new/", false);
  check_lake_config(op_vec, "./lake_controllers/conv_3_3_new/", "./lake_gold/conv_3_3_new/");
  /*
  auto post_proc_buffers = buffers_opt.at("buf").generate_ubuffer(opt);
  opt.conditional_merge = false;
  auto rewrite_buffers = buffers_opt.at("buf").generate_ubuffer(opt);
  for (auto it: post_proc_buffers) {
    cout << "post: " << it.first << ": " << it.second << endl;
  }
  for (auto it: rewrite_buffers) {
    cout << "rewrite_buffers: " << it.first << ": " << it.second << endl;
  }

  cmd("mkdir -p ./lake_controllers/conv_3_3/");
  map<pair<string, string>, int> latency({{{"input", "input_vec"}, 1},
          {{"output_2", "output_2_vec"}, -1}});
  for (auto it : post_proc_buffers) {
    cout << "Vectorizing " << it.first << endl;
    cout << it.second << endl;
    buffer_vectorization(it.first, 1, 4, rewrite_buffers);
    cout << "Done with vectorization" << endl;

    auto opt_sched = optimized_schedule_from_buffers(rewrite_buffers);
    //auto opt_sched = optimized_schedule_from_buffers_flatten(rewrite_buffers, true);
    cout << str(opt_sched) << endl;
    cout << codegen_c(opt_sched) << endl;
    assert(false);

    int app_target_II = 1;
    auto hsh = generate_hardware_schedule_heu(opt_sched, rewrite_buffers, latency, app_target_II);
    cout << str(hsh) << endl;
    cout << codegen_c(hsh) << endl;

    auto op_vec = emit_lake_config(rewrite_buffers, hsh, "./lake_controllers/conv_3_3/");
    check_lake_config(op_vec, "./lake_controllers/conv_3_3/", "./lake_gold/conv_3_3/");
  }*/

}

void lake_identity_stream_SMT_test(int x, int y, string suffix) {
  prog lake_agg("lake_agg_test");
  lake_agg.add_input("in");
  lake_agg.add_output("out");

  int app_target_II = 1;

  //corresponding to the aggI/O, sramI/O, TBI/O latency
  map<pair<string, string>, int> latency({{{"in2buf", "in2buf_agg2sram"}, 1},
          {{"in2buf_agg2sram", "buf2out_sram2tb"}, 1},
          {{"buf2out_sram2tb", "buf2out"}, 2}});

  auto in2buf = lake_agg.add_nest("a1", 0, y, "a0", 0, x)->add_op("in2buf");
  in2buf->add_load("in", "a1, a0");
  in2buf->add_store("buf_ubuf", "a1, a0");

  auto buf2out= lake_agg.add_nest("b1", 0, y, "b0", 0, x)->add_op("buf2out");
  buf2out->add_load("buf_ubuf", "b1, b0");
  buf2out->add_store("out", "b1, b0");

  auto buffers_opt = build_buffers(lake_agg);
  buffer_vectorization("buf_ubuf", 1, 4, buffers_opt);
  auto new_opt_sched = optimized_schedule_from_buffers_flatten(buffers_opt, false);
  cout << "\t optimized schedule map: " << str(new_opt_sched) << endl;
  cout << codegen_c(new_opt_sched) << endl;

  auto hsh = generate_hardware_schedule_heu(new_opt_sched, buffers_opt, latency, app_target_II);
  cout << str(hsh) << endl;
  cout << codegen_c(hsh) << endl;

  cmd("mkdir -p ./lake_controllers/identity_stream/");
  //auto op_vec = emit_lake_config(buffers_opt, hsh, "./lake_controllers/identity_stream/");
  //check_lake_config(op_vec, "./lake_controllers/identity_stream/", "./lake_gold/identity_stream/");
  //cmd("mkdir -p ./lake_stream/identity_stream/");
  //emit_lake_stream(buffers_opt, hsh, "./lake_stream/identity_stream/");
  CodegenOptions options;
  options.add_memory_hierarchy("mem");
  options.add_memory_hierarchy("glb");
  UBuffer tmp;
  //options.mem_tile.multi_sram_accessor = true;
  options.dir = "./lake_controllers/identity_stream/";
  map<string, UBuffer> rewrite_buffers;
  auto sched_map = get_maps_in_map(hsh);
  for ( auto it: buffers_opt ){
      if (it.second.num_out_ports() != 0 && it.second.num_in_ports() != 0) {
          auto & buf = it.second;
          for (string pt : buf.get_all_ports()) {
            auto dom = buf.domain.at(pt);
            auto hw_sched = sched_map.at(::name(dom));
            hw_sched = retrive_map_domain_with_dim(hw_sched, dom);
            buf.schedule.at(pt) = to_umap(hw_sched);
          }
          rewrite_buffers.insert(it);
      }
  }
  //Generate configuration for identity stream
#ifdef COREIR
  auto config = tmp.generate_ubuf_args(options, rewrite_buffers);
  emit_lake_config_collateral(options, "buf_" + suffix, config);
#endif
  //Generate stream for identity stream
  options.dir = "./aha_garnet_smt/identity_stream_"+suffix+"/";
  generate_lake_stream(options, rewrite_buffers, hsh);

}

void lake_dual_port_test() {
  prog lake_agg("lake_agg_test");
  lake_agg.add_input("in");
  lake_agg.add_output("out");

  int app_target_II = 1;
  map<pair<string, string>, int> latency({{{"in2buf", "buf2out"}, 1}});

  auto in2buf = lake_agg.add_nest("a1", 0, 8, "a0", 0, 8)->add_op("in2buf");
  in2buf->add_load("in", "a1, a0");
  in2buf->add_store("buf", "a1, a0");

  auto buf2out= lake_agg.add_nest("b1", 0, 8, "b0", 0, 8, "r", 0, 2)->add_op("buf2out");
  buf2out->add_load("buf", "b1, b0");
  buf2out->add_store("out", "b1, b0");

  auto buffers_opt = build_buffers(lake_agg);
  auto new_opt_sched = optimized_schedule_from_buffers_flatten(buffers_opt, false);
  cout << "\t optimized schedule map: " << str(new_opt_sched) << endl;
  cout << codegen_c(new_opt_sched) << endl;

  auto hsh = generate_hardware_schedule_heu(new_opt_sched, buffers_opt, latency, app_target_II);
  cout << str(hsh) << endl;
  cout << codegen_c(hsh) << endl;

  cmd("mkdir -p ./lake_controllers/dual_port_test/");
  //auto op_vec = emit_lake_config(buffers_opt, hsh, "./lake_controllers/dual_port_test/");
  cmd("mkdir -p ./lake_stream/dual_port_test/");
  //emit_lake_stream(buffers_opt, hsh, "./lake_stream/dual_port_test");
  //check_lake_config(op_vec, "./lake_controllers/identity_stream/", "./lake_gold/identity_stream/");
  //cmd("mkdir -p ./lake_stream/identity_stream/");
  //emit_lake_stream(buffers_opt, hsh, "./lake_stream/identity_stream/");
}
/*
void lake_identity_stream_SMT_test(int x, int y, string suffix) {
  prog lake_agg("lake_agg_test");
  lake_agg.add_input("in");
  lake_agg.add_output("out");

  int app_target_II = 1;

  //corresponding to the aggI/O, sramI/O, TBI/O latency
  map<pair<string, string>, int> latency({{{"in2buf", "in2buf_agg2sram"}, 1},
          {{"in2buf_agg2sram", "buf2out_sram2tb"}, 2},
          {{"buf2out_sram2tb", "buf2out"}, 1}});

  auto in2buf = lake_agg.add_nest("a1", 0, y, "a0", 0, x)->add_op("in2buf");
  in2buf->add_load("in", "a1, a0");
  in2buf->add_store("buf", "a1, a0");

  auto buf2out= lake_agg.add_nest("b1", 0, y, "b0", 0, x)->add_op("buf2out");
  buf2out->add_load("buf", "b1, b0");
  buf2out->add_store("out", "b1, b0");

  auto buffers_opt = build_buffers(lake_agg);
  buffer_vectorization("buf", 1, 4, buffers_opt);
  auto new_opt_sched = optimized_schedule_from_buffers_flatten(buffers_opt, false);
  cout << "\t optimized schedule map: " << str(new_opt_sched) << endl;
  cout << codegen_c(new_opt_sched) << endl;

  auto hsh = generate_hardware_schedule_heu(new_opt_sched, buffers_opt, latency, app_target_II);
  cout << str(hsh) << endl;
  cout << codegen_c(hsh) << endl;

  cmd("mkdir -p ./aha_garnet_design/identity_stream_"+suffix+"/");
  //emit_lake_stream(buffers_opt, hsh, "./lake_stream/identity_stream_"+suffix+"/");
  CodegenOptions options;
  options.mem_tile.multi_sram_accessor = true;
  options.dir = "./aha_garnet_smt/identity_stream_"+suffix+"/";
  generate_lake_stream(options, buffers_opt, hsh);
}*/

void lake_agg_sram_tb_config_test() {
  prog lake_agg("lake_agg_test");
  lake_agg.add_input("in");
  lake_agg.add_output("out");

  auto in2agg = lake_agg.add_nest("a1", 0, 8, "a0", 0, 8)->add_op("in2agg");
  in2agg->add_load("in", "a0 + 8*a1");
  in2agg->add_store("agg", "a0 + 8*a1");

  auto agg2sram = lake_agg.add_nest("as1", 0, 8, "as0", 0, 2)->add_op("agg2sram");
  for (int i = 0; i < 4; i++) {
    agg2sram->add_load("agg", str(i) + " + 4*as1");
  }
  agg2sram->add_store("sram", "as1");

  auto sram2tb = lake_agg.add_nest("at1", 0, 8, "at0", 0, 2)->add_op("sram2tb");
  sram2tb->add_load("sram", "at1");
  for (int i = 0; i < 4; i++) {
    sram2tb->add_store("tb", str(i) + " + 4*at1");
  }

  auto tb2out = lake_agg.add_nest("ao1", 0, 8, "ao0", 0, 8)->add_op("tb2out");
  tb2out->add_load("tb", "ao0 + 8*ao1");
  tb2out->add_store("out", "ao0 + 8*ao1");

  lake_agg.pretty_print();
  //assert(false);

  auto valid = lake_agg.validity_deps();

  lake_agg.pretty_print();
  cout << "validity: " << str(valid) << endl;
  cout << "Schedule..." << endl;
  map<string, int> latencies;
  map<string, int> iis;
  for (auto f : get_sets(lake_agg.whole_iteration_domain())) {
    latencies[name(f)] = 1;
    iis[name(f)] = 1;
  }

  auto ct = lake_agg.ctx;
  vector<pair<string, isl_val*> > obj;
  for (auto f : get_sets(lake_agg.whole_iteration_domain())) {
    string n = name(f);
    int dim = num_dims(f);

    for (int i = 0; i < dim; i++) {
      //obj.push_back({ii_var(n, i), one(ct)});
      obj.push_back({ii_var(n, i), isl_val_int_from_si(ct, 1000)});
    }

    obj.push_back({hw_delay_var(n), one(ct)});
  }

  vector<linear_constraint> extras;
  extras.push_back(linear_constraint{{{hw_delay_var("sram2tb"), 1},
    {hw_delay_var("sram2tb") + "_ml", -2}}, 1, true});

  extras.push_back(linear_constraint{{{ii_var("sram2tb", 2), 1}}, -4, true});
  extras.push_back(linear_constraint{{{ii_var("agg2sram", 2), 1}}, -4, true});

  //auto valid = lake_agg.validity_deps();
  auto prox = cpy(valid);
  auto hs =
        //hardware_schedule(lake_agg.whole_iteration_domain(), valid, prox, latencies, iis, obj, extras);
    to_umap(
        lake_agg.whole_iteration_domain(),
        hardware_schedule(lake_agg.whole_iteration_domain(), valid, prox, latencies, iis, obj, extras));
  hs = its(hs, lake_agg.whole_iteration_domain());
  cout << "hs = " << str(hs) << endl;
  //hs = its(hs, lake_agg.whole_iteration_domain());
  //for (auto m : hs) {
    //cout << tab(1) << m.first << " -> " << str(m.second) << endl;
    ////cout << tab(1) << str(m) << endl;
  //}
  //cout << "schedule: " << codegen_c(hs) << endl;
  //assert(false);

  //auto buffers = build_buffers(lake_agg, hs);
  //for (auto b : buffers) {
    //if (b.first == "agg") {
      //isl_map* fold_func = isl_map_read_from_str(lake_agg.ctx, "{ agg[x] -> M[x % 10] }");
      //assert(inner_bank_offset_is_legal(fold_func, b.second));
      //assert(false);
    //}
  //}
  cmd("mkdir -p ./lake_controllers/identity_stream/");
  for (auto op : lake_agg.all_ops()) {
    ofstream out(string("./lake_controllers/identity_stream/") + op->name + ".csv");

    bool found = false;
    for (auto m : get_maps(hs)) {
      cout << tab(1) << domain_name(m) << endl;
      if (domain_name(m) == op->name) {
        found = true;
        cout << tab(1) << str(m) << endl;
        auto dom = domain(m);
        auto write_sched = m;
        //isl_aff* write_addr =
          //rdaff(lake_agg.ctx, "{ " + domain_name(m) + "[root, a, b] -> [(2*a + b)] }");
        emit_lake_controller_config(out, dom, get_aff(write_sched));
        //, write_addr);
        break;
      }
    }
  //}

    //assert(found);

    //for (auto locs_written : op->produce_locs) {
    ////for (auto locs_written : op->write_addrs()) {
      ////assert(locs_written.size() == 1);
      ////auto loc_sec = locs_written.at(0).second;
      //out << "\"write\"," << "\"" << locs_written.first << "\"" << endl;
      //isl_aff* write_addr = get_aff_addr(op, locs_written.first, locs_written.second, lake_agg);
      ////isl_aff* write_addr = get_aff_addr(op, locs_written.first, loc_sec, lake_agg);
      //out << "\"data_starting_addr\"," << to_int(const_coeff(write_addr)) << ",0" << endl;
      //for (int d = 0; d < num_in_dims(write_addr); d++) {
        //int ldim = num_in_dims(write_addr) - d - 1;
        //out << "\"data_stride_" << ldim << "\"," << to_int(get_coeff(write_addr, d)) << ",0" << endl;
      //}
    //}

    for (auto locs_read : op->consume_locs_pair) {
      out << "\"read\"," << "\"" << locs_read.first << "\"" << endl;
      assert(locs_read.second.size() == 1);
      auto lread = locs_read.second.at(0).second;
      isl_aff* write_addr = get_aff_addr(op, locs_read.first, lread, lake_agg);
      out << "\"data_starting_addr\"," << to_int(const_coeff(write_addr)) << ",0" << endl;
      for (int d = 0; d < num_in_dims(write_addr); d++) {
        int ldim = num_in_dims(write_addr) - d - 1;
        out << "\"data_stride_" << ldim << "\"," << to_int(get_coeff(write_addr, d)) << ",0" << endl;
      }
    }

    out.close();
  }
}

//void lake_accessor_config_test() {
  //isl_ctx* ctx = isl_ctx_alloc();
  //{
    //isl_set* write_domain = rdset(ctx, "{ op[a] : 0 <= a <= 9 }");
    //isl_aff* write_sched = rdaff(ctx, "{ op[a] -> [(2*a)]}");
    //isl_aff* write_addr = rdaff(ctx, "{ op[a] -> [(a)]}");

    //cout << "write domain: " << str(write_domain) << endl;
    //cout << "write  sched: " << str(write_sched) << endl;

    //emit_lake_controller_config("test_write_domain.csv", write_domain, write_sched, write_addr);
  //}

  //{
    //isl_set* write_domain = rdset(ctx, "{ op[a] : 0 <= a <= 9 }");
    //isl_aff* write_sched = rdaff(ctx, "{ op[a] -> [(2*a + 3)]}");
    //isl_aff* write_addr = rdaff(ctx, "{ op[a] -> [(a)]}");

    //cout << "write domain: " << str(write_domain) << endl;
    //cout << "write  sched: " << str(write_sched) << endl;

    //emit_lake_controller_config("test_read_domain.csv", write_domain, write_sched, write_addr);
  //}
  //isl_ctx_free(ctx);

  ////assert(false);
//}

umap* clockwork_schedule(prog& prg) {
  auto valid = prg.validity_deps();
  auto dom = prg.whole_iteration_domain();
  auto doms = get_sets(dom);
  auto valids = get_maps(valid);
  auto topologically_sorted =
    topological_sort(doms, valids);

  auto cs =
    clockwork_schedule(dom, valid, cpy(valid));
  umap* csm = (isl_union_map_read_from_str(prg.ctx, "{}"));
  for (auto sched : cs) {

    int num_dims = sched.second.size();
    isl_multi_aff* sched_aff =
      isl_multi_aff_zero(map_space(prg.ctx, num_dims, num_dims + 1));

    for (int d = 0; d < num_dims; d++) {
      isl_local_space* aff_space = local_set_space(prg.ctx, num_dims);
      isl_aff* aff = isl_aff_zero_on_domain(aff_space);
      aff = set_const_coeff(aff, const_coeff(sched.second.at(d)));
      aff = set_coeff(aff, d, get_coeff(sched.second.at(d), 0));
      isl_multi_aff_set_aff(sched_aff, d, aff);
    }


    {
      isl_local_space* aff_space = local_set_space(prg.ctx, num_dims);
      isl_aff* aff = isl_aff_zero_on_domain(aff_space);

      int pos = -1;
      for (int i = 0; i < topologically_sorted.size(); i++) {
        if (topologically_sorted.at(i) == sched.first) {
          pos = i;
          break;
        }
      }
      assert(pos >= 0);
      aff = set_const_coeff(aff, isl_val_int_from_si(prg.ctx, pos));
      isl_multi_aff_set_aff(sched_aff, num_dims, aff);
    }

    auto m = isl_map_from_multi_aff(sched_aff);
    m = set_domain_name(m, sched.first);
    csm = unn(csm, to_umap(m));
  }
  return csm;
}

void adobe_downsample_two_adds_epochs() {
  prog prg("adobe_downsample");
  prg.add_input("off_chip_image");
  prg.add_output("out");

  auto ld = prg.add_nest("yl", 0, 16, "ye", 0, 2, "xl", 0, 16)->add_op("load_from_off_chip");
  ld->add_load("off_chip_image", "2*xl", "2*yl + ye");
  ld->add_load("off_chip_image", "2*xl + 1", "2*yl + ye");
  ld->add_store("image", "2*xl", "2*yl + ye");
  ld->add_store("image", "2*xl + 1", "2*yl + ye");

  {
    auto ds = prg.add_nest("y", 0, 16, "dp", 0, 1, "x", 0, 16)->add_op("downsample");
    ds->add_function("inc");
    ds->add_load("image", "2*x", "2*y");
    ds->add_load("image", "2*x + 1", "2*y");
    ds->add_store("downsampled", "2*x", "y");
    ds->add_store("downsampled", "2*x + 1", "y");
  }

  {
    auto ds = prg.add_nest("oy", 0, 16, "oe", 0, 2, "ox", 0, 16)->add_op("scale");
    ds->add_function("scale");
    ds->add_load("downsampled", "ox + 16*oe", "oy");
    ds->add_store("out", "ox + 16*oe", "oy");
  }

  prg.pretty_print();
  //assert(false);
  cout << optimized_code_string(prg) << endl;
}

void generate_optimized_trace(prog& prg) {
  auto sched = prg.optimized_codegen();
  generate_trace(prg, sched);
}

void adobe_downsample_two_adds() {
  prog prg("adobe_downsample");
  prg.add_input("off_chip_image");
  prg.add_output("out");

  auto ld = prg.add_nest("yl", 0, 32, "xl", 0, 16)->add_op("load_from_off_chip");
  ld->add_load("off_chip_image", "2*xl", "yl");
  ld->add_load("off_chip_image", "2*xl + 1", "yl");
  ld->add_store("image", "2*xl", "yl");
  ld->add_store("image", "2*xl + 1", "yl");

  {
    auto ds = prg.add_nest("y", 0, 16, "x", 0, 16)->add_op("downsample");
    ds->add_function("inc");
    ds->add_load("image", "2*x", "2*y");
    ds->add_load("image", "2*x + 1", "2*y");
    ds->add_store("downsampled", "2*x", "y");
    ds->add_store("downsampled", "2*x + 1", "y");
  }

  {
    auto ds = prg.add_nest("oy", 0, 16, "ox", 0, 32)->add_op("scale");
    ds->add_function("scale");
    ds->add_load("downsampled", "ox", "oy");
    ds->add_store("out", "ox", "oy");
  }

  prg.pretty_print();
  {
    auto valid = prg.validity_deps();
    auto dom = prg.whole_iteration_domain();
    map<string, int> dummy_latencies;
    for (auto d : get_sets(dom)) {
      dummy_latencies[name(d)] = 1;
    }

    print_hw_schedule("scale", dom, valid, dummy_latencies);

    //assert(false);
    //auto fs = form_farkas_constraints(to_bset(s), {{"x", "II_x"}}, "d");
    //cout << "fs = " << str(fs) << endl;
    //auto extra_constraint = rdset(ctx, "{ [II_x, a, b, c, d] : II_x >= 1 }");
    //auto sol = its(extra_constraint, to_set(fs));
    //cout << "New fs = " << str(sol) << endl;
    //auto pt = sample(sol);
    //cout << "Example solution: " << str(pt) << endl;
  }
  //cout << optimized_code_string(prg) << endl;
  //generate_optimized_trace(prg);
  //assert(false);
  //regression_test(prg);
  //move_to_synthesis_folder(prg.name);
}

void adobe_downsample() {
  prog prg("adobe_downsample");
  prg.add_input("off_chip_image");
  prg.add_output("out");

  int rows = 4;
  int cols = 4;

  auto ld = prg.add_nest("yl", 0, rows, "xl", 0, cols)->add_op("load_from_off_chip");
  ld->add_load("off_chip_image", "xl", "yl");
  ld->add_store("image", "xl", "yl");

  {
    auto ds = prg.add_nest("y", 0, rows / 2, "x", 0, cols)->add_op("downsample");
    ds->add_function("inc");
    ds->add_load("image", "x", "2*y");
    ds->add_store("downsampled", "x", "y");
  }

  {
    auto ds = prg.add_nest("oy", 0, rows / 2, "ox", 0, cols)->add_op("scale");
    ds->add_function("scale");
    ds->add_load("downsampled", "ox", "oy");
    ds->add_store("out", "ox", "oy");
  }

  prg.pretty_print();
  auto cs = clockwork_schedule(prg);
  cout << "clockwork schedule: " << str(cs) << endl;
  cout << "Code..." << endl;
  cout << codegen_c(its(cs, prg.whole_iteration_domain())) << endl;
  //assert(false);
  cmd("mkdir -p ./lake_controllers/identity_stream/");

  //cout << optimized_code_string(prg) << endl;
  //auto hs = hardware_schedule(prg);
  //for (auto m : get_maps(hs)) {
    //cout << tab(1) << str(m) << endl;
    //auto dom = domain(m);
    //auto write_sched = m;
    //isl_aff* write_addr =
      //rdaff(prg.ctx, domain_name(m) + "[a, b] -> [(2*a + b)]");
    //emit_lake_controller_config("./lake_controllers/identity_stream/" + domain_name(m) + ".csv", dom, get_aff(write_sched), write_addr);
  //}
  //assert(false);
  regression_test(prg);
  move_to_synthesis_folder(prg.name);
}

void adobe_sharpen() {
  prog prg("adobe_sharpen");
  prg.add_input("off_chip_image");
  prg.add_output("sharpened");

  auto ld = prg.add_nest("yl", 0, 32, "xl", 0, 32)->add_op("load_from_off_chip");
  ld->add_load("off_chip_image", "xl", "yl");
  ld->add_store("image", "xl", "yl");

  auto ds = prg.add_nest("y", 0, 32 - 2, "x", 0, 32 - 2)->add_op("blur");
  ds->add_function("conv_3_3");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ds->add_load("image", "x + " + str(i), "y + " + str(j));
    }
  }
  ds->add_store("blurred", "x", "y");

  auto diff = prg.add_nest("yd", 0, 32 - 2, "xd", 0, 32 - 2)->add_op("diff");
  diff->add_function("diff");
  diff->add_load("image", "xd", "yd");
  diff->add_load("blurred", "xd", "yd");
  diff->add_store("sharpened", "xd", "yd");

  prg.pretty_print();

  regression_test(prg);
  move_to_synthesis_folder(prg.name);

}

void adobe_meeting_apps() {
  adobe_downsample_two_adds();
  //assert(false);
  adobe_downsample();
  adobe_downsample_two_adds_epochs();
  adobe_sharpen();
}

prog halide_up_sample() {
  prog prg;
  prg.compute_unit_file = "up_sample_compute.h";
  prg.name = "up_sample";

// Stencil<uint16_t, 32, 32, 4> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming input_copy.stencil
////producing hw_input.stencil
  auto hw_input_s0_z = prg.add_loop("hw_input_s0_z", 0, 4);
  auto hw_input_s0_y = hw_input_s0_z->add_loop("hw_input_s0_y", 0, 32);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 32);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.z) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.z)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_z");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_z");
////producing nearest_neighbor.stencil

//consuming hw_input.stencil
  auto nearest_neighbor_s0_z = prg.add_loop("nearest_neighbor_s0_z", 0, 4);
  auto nearest_neighbor_s0_y = nearest_neighbor_s0_z->add_loop("nearest_neighbor_s0_y", 0, 64);
  auto nearest_neighbor_s0_x = nearest_neighbor_s0_y->add_loop("nearest_neighbor_s0_x", 0, 64);

//store is: nearest_neighbor.stencil(nearest_neighbor.s0.x, nearest_neighbor.s0.y, nearest_neighbor.s0.z) = hw_input.stencil((nearest_neighbor.s0.x/2), (nearest_neighbor.s0.y/2), nearest_neighbor.s0.z)
  auto hcompute_nearest_neighbor_stencil = nearest_neighbor_s0_x->add_op("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_function("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_load("hw_input_stencil", "floor(nearest_neighbor_s0_x/2)", "floor(nearest_neighbor_s0_y/2)", "nearest_neighbor_s0_z");
  prg.buffer_port_widths["nearest_neighbor_stencil"] = 16;
  hcompute_nearest_neighbor_stencil->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_x", "nearest_neighbor_s0_y", "nearest_neighbor_s0_z");

//consuming nearest_neighbor.stencil
  auto hw_output_s0_z = prg.add_loop("hw_output_s0_z", 0, 4);
  auto hw_output_s0_y_yo = hw_output_s0_z->add_loop("hw_output_s0_y_yo", 0, 64);
  auto hw_output_s0_x_xo = hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 64);

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo, hw_output.s0.z) = uint8(nearest_neighbor.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo, hw_output.s0.z))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xo->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("nearest_neighbor_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo", "hw_output_s0_z");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo", "hw_output_s0_z");

  return prg;

}

void halide_up_sample_test() {
  auto us = halide_up_sample();
  us.pretty_print();
  //assert(false);
  regression_test(us);
}

void unet_conv_3_3_test() {
  prog prg = unet_conv_3_3();
  prg.pretty_print();

  //prg.merge_ops("conv_s1_r_x");
  prg.pretty_print();
  //assert(false);

  //auto sched = prg.unoptimized_schedule();


  //auto buffers = build_buffers(prg, sched);
  //auto buf = map_find(string("conv_stencil"), buffers);

  //isl_map* bank_func =
    //isl_map_read_from_str(prg.ctx,
        //"{conv_stencil[x, y, z] -> B[x % 3, y % 3, z]}");
  //assert(banking_scheme_is_legal(bank_func, buf));

  CodegenOptions options;
  options.all_rams = true;
  //options.banking_strategies["conv_stencil"] = {"cyclic", {3, 3, 1}};
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  all_register_files(prg, options);

  //generate_optimized_code(options, prg);
  //assert(false);
  regression_test(options, prg);
}

void coreir_set_test() {
#ifdef COREIR
  CoreIR::Context* context = CoreIR::newContext();
  isl_ctx* ctx = isl_ctx_alloc();

  //auto dom = rdset(ctx, "{ st[root, y] : y <= 2 }");
  auto dom = rdset(ctx, "{ reduce[root, r, k] : k > 0 }");

  auto ctrl = coreir_for_set(context, dom);
  context->runPasses({"wireclocks-coreir"});

  ctrl->print();
  if(!saveToFile(context->getNamespace("global"),
        ctrl->getName() + ".json",
        ctrl)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  run_verilator_tb(ctrl->getName());

  //assert(false);
  isl_ctx_free(ctx);
  deleteContext(context);
#endif // COREIR
}

void coreir_controller_test() {
#ifdef COREIR
  CoreIR::Context* context = CoreIR::newContext();
  isl_ctx* ctx = isl_ctx_alloc();

  auto aff = rdaff(ctx, "{ [y, yi] -> [(10*y + yi)] }");
  auto dom = rdset(ctx, "{ [y, yi] : 0 <= y < 10 and 0 <= yi < 3 }");

  auto ctrl = affine_controller(context, dom, aff);
  context->runPasses({"wireclocks-coreir"});

  ctrl->print();
  if(!saveToFile(context->getNamespace("global"),
        ctrl->getName() + ".json",
        ctrl)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  run_verilator_tb(ctrl->getName());

  isl_ctx_free(ctx);
  deleteContext(context);
#endif // COREIR
}

void unet_coreir_test() {
  prog prg = unet_conv_3_3();

#ifdef COREIR

  auto dom = (prg.whole_iteration_domain());
  auto valid = (prg.validity_deps());
  auto prox = cpy(valid);
  auto sched = hardware_schedule_umap(dom, valid, prox);
  sched = its(sched, dom);

  cout << "Hw schedule" << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  assert(false);
  CodegenOptions options;
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_LINEAR;
  options.all_rams = true;
  auto bufs = build_buffers(prg, sched);
  for (auto& b : bufs) {
    if (b.second.num_in_ports() > 0 &&
        b.second.num_out_ports() > 0) {
      //cout << b.second << endl;
      b.second.generate_banks_and_merge(options);
    }
  }

  generate_coreir(options, bufs, prg, sched);
  run_verilator_tb(prg.name);

#endif

}

void non_rate_matched_ds_test() {
  prog prg("non_rate_matched_downsample");
  prg.add_input("in_oc");
  prg.add_output("out");

  auto ld = prg.add_nest("ldy", 0, 8, "ldx", 0, 8)->add_op("ld");
  ld->add_load("in_oc", "ldx, ldy");
  ld->add_store("in", "ldx, ldy");

  auto ds = prg.add_nest("dsy", 0, 4, "dsx", 0, 8)->add_op("ds");
  ds->add_load("in", "dsx", "2*dsy");
  ds->add_store("ds", "dsx, dsy");

  auto ml = prg.add_nest("mly", 0, 4, "mlx", 0, 8)->add_op("ml");
  ml->add_load("ds", "mlx, mly");
  ml->add_store("out", "mlx, mly");

  prg.pretty_print();
  prg.sanity_check();

  map<string, int> latencies{{"ld", 2}, {"ds", 2}, {"ml", 2}};
  map<string, int> iis{{"ld", 1}, {"ds", 1}, {"ml", 2}};

  auto dom = (prg.whole_iteration_domain());
  auto valid = (prg.validity_deps());
  auto prox = cpy(valid);

  auto ct = ctx(dom);
  vector<pair<string, isl_val*> > obj;
  for (auto f : get_sets(dom)) {
    string n = name(f);
    int dim = num_dims(f);

    if (n == "ml") {
      for (int i = 0; i < dim; i++) {
        auto dp = project_all_but(f, i);
        auto tc =
          sub(lexmaxval(dp), lexminval(dp));
        //auto tc =
          //add(sub(lexmaxval(dp), lexminval(dp)), one(ct));
        obj.push_back({ii_var(n, i), tc});
      }
      obj.push_back({hw_delay_var(n), one(ct)});
    }
  }
  auto sched = hardware_schedule_umap(dom, valid, prox, latencies, iis, obj);
  cout << "domains..." << endl;
  for (auto d : get_sets(dom)) {
    cout << tab(1) << str(d) << endl;
  }
  cout << "valid..." << endl;
  for (auto v : get_maps(valid)) {
    cout << tab(1) << str(v) << endl;
  }
  cout << "schedule..." << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
  }

  auto later = lex_lt(sched, sched);
  cout << "later = " << str(later) << endl;

  auto violated = its(inv(later), valid);
  cout << "violated = " << str(violated) << endl;
  generate_trace(prg, its(sched, dom));
  auto buffers = build_buffers(prg, its(sched, dom));
  for (auto b : buffers) {
    cout << b.second << endl;
  }
  //assert(false);
  generate_app_code(buffers, prg, its(sched, dom));
  //assert(false);
}

void coreir_tests() {
  //reduce_stream_schedule_test();
  //reduce_stream_coreir_test();
  identity_stream_coreir_test();
  identity_stream_through_mem_coreir_test();
  //unet_coreir_test();

  identity_stream_2d_coreir_test();
  coreir_set_test();
  coreir_controller_test();
  weight_streaming_test();

  // Not yet working
  //assert(false);
}

void resnet_test() {
  auto prg = resnet_hc();
  prg.pretty_print();
  //assert(false);
  add_reuse_buffer("conv_s1_x", "conv_stencil", prg);
  prg.pretty_print();
  //assert(false);
  generate_unoptimized_code(prg);
  //assert(false);

  CodegenOptions options;
  options.all_rams = true;
  all_register_files(prg, options);
  options.banking_strategies["conv_stencil"] = {"cyclic", {1, 1, 4}};
  options.banking_strategies["hw_kernel_stencil"] = {"exhaustive"};
  options.banking_strategies["hw_input_stencil"] = {"exhaustive"};
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_MULTILINEAR;
  //generate_optimized_code(options, prg);

  auto sched_naive = its(prg.unoptimized_schedule(), prg.whole_iteration_domain());
  //optimized schedule
  auto buffers_opt = build_buffers(prg, sched_naive);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  opt.rtl_options.max_inpt = 2;
  opt.rtl_options.max_outpt = 2;
  //buffers_opt.at("buf").generate_bank_and_merge(opt);
  //cout << buffers_opt.at("buf") << endl;
  //buffers_opt.at("buf").port_group2bank(2, 2);
  //cout << buffers_opt.at("buf") << endl;

#ifdef COREIR
  for (auto& b : buffers_opt) {
    cout << b.first << endl << b.second << endl;
    if ((b.second.get_in_ports().size() && b.second.get_out_ports().size()) == 0)
        continue;
    b.second.generate_banks_and_merge(options);
    b.second.print_bank_info();

    //Assign an configuration file,
    //json config_reg_map = parse_config_file("conv33_configuration.txt");
    //b.second.set_config(config_reg_map);

    b.second.port_group2bank(opt);
    b.second.print_bank_info();

    CoreIR::Context* context = CoreIR::newContext();
    CoreIRLoadLibrary_commonlib(context);
    CoreIRLoadLibrary_cwlib(context);
    json config_reg_map;
    config_reg_map["name"][0] = "TOP_address.csv";
    b.second.set_config(config_reg_map);
    auto def = generate_coreir(options, context, b.second);

    if(!saveToFile(context->getNamespace("global"), b.first+ ".json")) {
      cout << "Could not save ubuffer coreir!" << endl;
      context->die();
    }
    CoreIR::deleteContext(context);
  }
  generate_coreir(opt, buffers_opt, prg, sched_naive);
#endif
  //assert(false);

  //assert(false);
  //cout << "after adding rb" << endl;
  //add_reuse_buffer("conv_s1_x", "conv_stencil", prg);
  //prg.pretty_print();
  //assert(false);
}

void multi_output_app_test() {
  App sobel;
  sobel.set_default_pixel_width(16);

  string out0 = "out0";
  string out1 = "out1_ac";

  sobel.func2d("in0_oc");
  sobel.func2d("in1_oc");

  sobel.func2d("in0", "id", "in0_oc", {1, 1}, {{0, 0}});
  sobel.func2d("in1", "id", "in1_oc", {1, 1}, {{0, 0}});

  sobel.func2d(out0, "id", "in0", {1, 1}, {{0, 0}});
  sobel.func2d(out1, "id", "in1", {1, 1}, {{0, 0}});

  int rows = 1080;
  int cols = 1920;
  int unroll = 32;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  sobel.realize(options, {{out0, {rows, cols}}, {out1,{rows, cols}}}, out0, unroll);

  string name = out0 + "_" + out1;
  //auto opt = run_regression_tb(name + "_opt");

  // Generate un-optimized code
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;

  //sobel.realize_naive(options, {{out0, {rows, cols}}, {out1,{rows, cols}}}, out0, unroll);
  //auto naive = run_regression_tb("us_naive");
  //assert(false);

  //assert(opt == naive);

  move_to_benchmarks_folder(name);
}

string load_off_chip_one_channel(const std::string& prefix, App& lp) {
  string in0_oc = prefix + "0_oc";

  lp.func2d(in0_oc);

  string in0 = prefix + "0";

  lp.func2d(in0, "id", pt(in0_oc));
  return in0;
}

string load_off_chip_two_channels(const std::string& prefix, App& lp) {
  string in0_oc = prefix + "0_oc";
  string in1_oc = prefix + "1_oc";

  lp.func2d(in0_oc);
  lp.func2d(in1_oc);

  string in0 = prefix + "0";
  string in1 = prefix + "1";

  lp.func2d(in0, "id", pt(in0_oc));
  lp.func2d(in1, "id", pt(in1_oc));

  Window in0_win{in0, {qconst(1, 2), qconst(1)}, {{0, 0}}};;
  Window in1_win{in1, {qconst(1, 2), qconst(1)}, {{0, 0}}};;

  string res = in0_oc + "_" + in1_oc;
  lp.func2d(res, "interleave", in0_win, in1_win);
  lp.compute_unit_needs_index_variable(0, res);
  return res;
}

string store_off_chip_one_channel(const std::string& input, App& lp) {

  string res0 = input + "0";

  lp.func2d(res0, "id", pt(input));

  return res0;
}

pair<string, string> store_off_chip_two_channels(const std::string& input, App& lp) {

  Window win0{input, {qconst(2), qconst(1)}, {{0, 0}}};;
  Window win1{input, {qconst(2), qconst(1)}, {{1, 0}}};;

  string res0 = input + "0";
  string res1 = input + "1";

  lp.func2d(res0, "id", win0);
  lp.func2d(res1, "id", win1);

  return {res0, res1};
}

void two_stage_psef() {
  int rows = 1080;
  int cols = 1920 / 2;
  int unroll = 16;

  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  string input_image = load_off_chip_two_channels("in_off_chip", lp);
  two_level_exposure_fusion_app(input_image, "ls" + str(unroll), lp);


  pair<string, string> output_image = store_off_chip_two_channels("ls" + str(unroll), lp);

  string out0 = output_image.first;
  string out1 = output_image.second;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  lp.realize(options, {{out0, {cols, rows}}, {out1, {cols, rows}}}, out0, unroll);

  compile_compute(out0 + "_" + out1 + "_opt.cpp");

  move_to_benchmarks_folder(out0 + "_" + out1);
}

void psef_multi_output_test() {
  int rows = 1080;
  int cols = 1920 / 2;
  int unroll = 16;

  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  string input_image = load_off_chip_two_channels("in_off_chip", lp);
  exposure_fusion_app(input_image, "ps" + str(unroll), lp);


  pair<string, string> output_image = store_off_chip_two_channels("ps" + str(unroll), lp);

  string out0 = output_image.first;
  string out1 = output_image.second;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  lp.realize(options, {{out0, {cols, rows}}, {out1, {cols, rows}}}, out0, unroll);

  compile_compute(out0 + "_" + out1 + "_opt.cpp");

  move_to_benchmarks_folder(out0 + "_" + out1);
}

void async_add_test() {
  int rows = 1080;
  int cols = 1920;
  //int unroll = 32;

  vector<int> ufs{1, 2, 4, 8, 16, 32};
  for (int unroll : ufs) {
    App lp;
    lp.set_default_pixel_width(16);

    // The off chip input we are reading from
    string input_image = load_off_chip_one_channel("in_off_chip", lp);

    string af = "one_pipe";
    lp.func2d(af + str(unroll), "id", pt(input_image));

    string output_image = store_off_chip_one_channel(af + str(unroll), lp);

    CodegenOptions options;
    options.internal = true;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
    options.num_pipelines = 1;
    lp.realize(options, {{output_image, {cols, rows}}}, output_image, unroll);

    compile_compute(output_image);

    move_to_benchmarks_folder(output_image);
  }
}

void add_four_channels() {
  int rows = 1080;
  int cols = 1920 / 2;
  int unroll = 32;

  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  string input_image = load_off_chip_two_channels("in_off_chip", lp);

  string af = "af";
  lp.func2d(af + str(unroll), "id", pt(input_image));


  pair<string, string> output_image = store_off_chip_two_channels(af + str(unroll), lp);

  string out0 = output_image.first;
  string out1 = output_image.second;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  lp.realize(options, {{out0, {cols, rows}}, {out1, {cols, rows}}}, out0, unroll);

  compile_compute(out0 + "_" + out1 + "_opt.cpp");

  move_to_benchmarks_folder(out0 + "_" + out1);
}

void weight_add_psef() {
  int rows = 1080;
  int cols = 1920 / 2;
  int unroll = 32;

  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  string input_image = load_off_chip_two_channels("in_off_chip", lp);

  weight_add_exposure_fusion_app(input_image, "wa" + str(unroll), lp);


  pair<string, string> output_image = store_off_chip_two_channels("wa" + str(unroll), lp);

  string out0 = output_image.first;
  string out1 = output_image.second;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  lp.realize(options, {{out0, {cols, rows}}, {out1, {cols, rows}}}, out0, unroll);

  compile_compute(out0 + "_" + out1 + "_opt.cpp");

  move_to_benchmarks_folder(out0 + "_" + out1);
}

void us_unroll_test() {
  prog prg("us_unroll");
  prg.add_input("in");
  prg.add_output("out");

  {
    auto in = prg.add_nest("iy", 0, 20, "ix", 0, 20)->add_op("inrd");
    in->add_load("in", "ix, iy");
    in->add_store("a", "ix, iy");
  }

  {
    auto ol = prg.add_nest("y", 0, 10, "x", 0, 10);
    auto init = ol->add_op("init");
    init->add_store("comp", "x, y");
    init->add_function("set_zero_32");
    auto il = ol->add_nest("yi", 0, 3, "xi", 0, 3)->add_op("update");
    il->add_load("comp", "x, y");
    il->add_load("a", "x + floor(xi / 2), y + floor(yi / 2)");
    il->add_store("comp", "x, y");
    il->add_function("add");
  }

  {
    auto in = prg.add_nest("oy", 0, 10, "ox", 0, 10)->add_op("outwr");
    in->add_load("comp", "ox, oy");
    in->add_store("out", "ox, oy");
  }

  prg.pretty_print();
  prg.sanity_check();

  auto pre = unoptimized_result(prg);

  unroll(prg, "xi");
  unroll(prg, "yi");

  prg.pretty_print();

  auto post = unoptimized_result(prg);
  compare("us_unroll_test", pre, post);
}

void ds_unroll_test() {
  prog prg("ds_unroll");
  prg.add_input("in");
  prg.add_output("out");

  {
    auto in = prg.add_nest("iy", 0, 20, "ix", 0, 20)->add_op("inrd");
    in->add_load("in", "ix, iy");
    in->add_store("a", "ix, iy");
  }

  {
    auto ol = prg.add_nest("y", 0, 10, "x", 0, 10);
    auto init = ol->add_op("init");
    init->add_store("comp", "x, y");
    init->add_function("set_zero_32");
    auto il = ol->add_nest("yi", 0, 3, "xi", 0, 3)->add_op("update");
    il->add_load("comp", "x, y");
    il->add_load("a", "x + 2*xi, y + 2*yi");
    il->add_store("comp", "x, y");
    il->add_function("add");
  }

  {
    auto in = prg.add_nest("oy", 0, 10, "ox", 0, 10)->add_op("outwr");
    in->add_load("comp", "ox, oy");
    in->add_store("out", "ox, oy");
  }

  prg.pretty_print();
  prg.sanity_check();


  auto pre = unoptimized_result(prg);

  //assert(false);

  unroll(prg, "xi");
  unroll(prg, "yi");

  prg.pretty_print();
  //assert(false);

  auto post = unoptimized_result(prg);
  compare("ds_unroll_test", pre, post);

}

void prg_unroll_test() {
  prog prg("pre_roll");

  prg.add_input("in");
  prg.add_output("out");

  {
    auto ns = prg.add_nest("xi", 0, 10, "yi", 0, 3);
    auto p = ns->add_op("inw");
    p->add_load("in", "xi", "yi");
    p->add_store("a", "xi", "yi");
  }

  auto ns = prg.add_nest("x", 0, 10, "y", 0, 3);
  auto p = ns->add_op("hello");
  p->add_load("a", "x", "y");
  p->add_store("b", "x", "y");

  auto ot = prg.add_nest("xo", 0, 10, "yo", 0, 3);
  auto px = ot->add_op("outw");
  px->add_load("b", "xo", "yo");
  px->add_store("out", "xo", "yo");

  prg.pretty_print();
  auto pre = unoptimized_result(prg);

  unroll(prg, "y");

  prg.pretty_print();
  auto post = unoptimized_result(prg);

  compare("unroll_test", pre, post);
}

void llf_to_grayscale(const std::string& out, const std::string& in, prog& prg) {
  string pr = in + "_to_gray";
  string y = prg.unique_name(pr);
  string x = prg.unique_name(pr);
  auto cn = prg.add_nest(y, 0, 1, x, 0, 1);
  auto convert = cn->add_op(prg.unique_name("to_gray"));
  convert->add_function("llf_to_gray_float");
  convert->add_load(in, "0", x, y);
  convert->add_load(in, "1", x, y);
  convert->add_load(in, "2", x, y);
  convert->add_store(out, x, y);
}

void llf_to_color_no_scales(const std::string& out, const std::string& original, const std::string& gray, prog& prg) {
  string pr = out + "_to_color";
  string y = prg.unique_name(pr);
  string x = prg.unique_name(pr);
  string b = prg.unique_name(pr);
  auto cn = prg.add_nest(y, 0, 1, x, 0, 1, b, 0, 3);

  auto convert = cn->add_op(prg.unique_name("cc"));
  convert->add_function("llf_to_color_float_no_scales");
  convert->add_load(original, b, x, y);
  convert->add_load(gray, x, y);
  convert->add_store(out, b, x, y);
}

void llf_rescale_gray(const std::string& out, const std::string& scales, const std::string& gray, prog& prg) {
  string pr = out + "_rescale_gray";
  string y = prg.unique_name(pr);
  string x = prg.unique_name(pr);
  auto cn = prg.add_nest(y, 0, 1, x, 0, 1);

  auto convert = cn->add_op(prg.unique_name("cc"));
  convert->add_function("llf_rescale_gray_float");
  convert->add_load(scales, x, y);
  convert->add_load(gray, x, y);
  convert->add_store(out, x, y);
}

void llf_to_color(const std::string& out, const std::string& original, const std::string& scales, const std::string& gray, prog& prg) {
  string pr = out + "_to_color";
  string y = prg.unique_name(pr);
  string x = prg.unique_name(pr);
  string b = prg.unique_name(pr);
  auto cn = prg.add_nest(y, 0, 1, x, 0, 1, b, 0, 3);

  auto convert = cn->add_op(prg.unique_name("cc"));
  convert->add_function("llf_to_color_float");
  convert->add_load(scales, x, y);
  convert->add_load(original, b, x, y);
  convert->add_load(gray, x, y);
  convert->add_store(out, b, x, y);
}

vector<string> gaussian_pyramid(const std::string& in, const int num_pyramid_levels, prog& prg) {
  vector<string> gls;
  gls.resize(num_pyramid_levels);
  gls[0] = in;
  for (int j = 1; j < num_pyramid_levels; j++) {
    string pr = "gp_" + in + "_" + str(j);
    string last_level = gls[j - 1];
    string current_level = prg.unique_name(pr + "_buf");
    string y = prg.unique_name(pr);
    string x = prg.unique_name(pr);
    string yi = prg.unique_name(pr);
    string xi = prg.unique_name(pr);

    auto ol = prg.add_nest(y, 0, 1, x, 0, 1);
    auto init = ol->add_op(prg.un("init"));
    init->add_function("llf_set_zero_float_32");
    init->add_store(current_level, x, y);
    auto il = ol->add_nest(yi, -1, 2, xi, -1, 2);

    auto update = il->add_op(prg.un("update"));
    update->add_function("llf_add_float_32");
    update->add_load(current_level, x, y);
    update->add_load(last_level, "2*" + x + " + " + xi, "2*" + y + " + " + yi);
    update->add_store(current_level, x, y);

    auto avg = ol->add_op(prg.un("avg"));
    avg->add_function("avg_9_float");
    avg->add_load(current_level, x, y);
    avg->add_store(current_level, x, y);

    gls[j] = current_level;
  }
  return gls;
}

string upsample(const std::string& in, prog& prg) {
  string pr = "us_" + in;
  string current_level = prg.unique_name(in + "_us");
  string y = prg.unique_name(pr);
  string x = prg.unique_name(pr);

  auto ol = prg.add_nest(y, 0, 1, x, 0, 1);
  auto update = ol->add_op(prg.un("us"));
  update->add_load(in, "floor(" + x + " / 2)", "floor(" + y + " / 2)");
  update->add_store(current_level, x, y);

  return current_level;
}

vector<string> laplacian_pyramid(const std::string& in, const int num_pyramid_levels, prog& prg) {
  vector<string> gls = gaussian_pyramid(in, num_pyramid_levels, prg);
  assert((int) gls.size() == num_pyramid_levels);

  vector<string> lls;
  lls.resize(num_pyramid_levels);
  lls[num_pyramid_levels - 1] = gls[num_pyramid_levels - 1];

  cout << "input laplacians..." << endl;
  int i = 0;
  for (auto l : lls) {
    cout << tab(1) << i << " = " << l << endl;
    i++;
  }
  for (int j = num_pyramid_levels - 2; j >= 0; j--) {
    string us_pyramid = upsample(gls.at(j + 1), prg);
    string current_gs = gls.at(j);

    string pr = "lp_" + in + "_" + str(j);
    string current_level = prg.unique_name(pr + "_buf");
    string y = prg.unique_name(pr);
    string x = prg.unique_name(pr);

    auto ol = prg.add_nest(y, 0, 1, x, 0, 1);
    auto init = ol->add_op(prg.un("diff"));
    init->add_function("llf_diff_float_32");
    init->add_load(current_gs, x, y);
    init->add_load(us_pyramid, x, y);
    init->add_store(current_level, x, y);
    lls[j] = current_level;
  }
  cout << "output laplacians..." << endl;
  int ip = 0;
  for (auto l : lls) {
    cout << tab(1) << ip << " = " << l << endl;
    ip++;
  }
  return lls;
}

string llf_interpolate_intensity(const std::string& gray, const std::vector<string>& intensity_levels, prog& prg) {
  string out = prg.unique_name(gray + "_interpolated");

  string pr = prg.unique_name(gray + "_interpolate_lp");
  string y = prg.un(pr);
  string x = prg.un(pr);
  auto in = prg.add_nest(y, 0, 1, x, 0, 1)->add_op(prg.un("interp"));
  in->add_function("llf_interpolate_float");
  for (auto i : intensity_levels) {
    assert(i != "");
    in->add_load(i, x, y);
  }
  in->add_load(gray, x, y);
  in->add_store(out, x, y);

  return out;
}

string reconstruct_gaussian(const std::vector<string>& output_levels, prog& prg) {
  assert(output_levels.size() >= 2);

  vector<string> lgs;
  lgs.resize(output_levels.size());
  lgs[output_levels.size() - 1] = output_levels.back();

  for (int i = output_levels.size() - 2; i >= 0; i--) {
    string pr = prg.unique_name(output_levels.at(i) + "_reconstruct_lp");
    string y = prg.un(pr);
    string x = prg.un(pr);

    string current_level = prg.unique_name(pr + "_buf");
    string current_gs = output_levels.at(i);
    string next_level = upsample(lgs.at(i + 1), prg);

    auto ns = prg.add_nest(y, 0, 1, x, 0, 1)->add_op(prg.un("rc"));
    ns->add_function("llf_add_float_32");
    ns->add_load(current_gs, x, y);
    ns->add_load(next_level, x, y);
    ns->add_store(current_level, x, y);

    lgs[i] = current_level;
  }

  return lgs[0];
}


void pointwise(const std::string& out, const std::string& func, const std::string& in0, const std::string& in1, const int dim, prog& prg) {
  string pr = prg.un("pw_math_" + in0 + "_" + in1);
  op* lp = prg.root;
  vector<string> vars;
  for (int d = 0; d < dim; d++) {
    string var = prg.un(pr);
    lp = lp->add_loop(var, 0, 1);
    vars.push_back(var);
  }
  reverse(vars);
  auto ld = lp->add_op(prg.un(pr));
  string vlist = comma_list(vars);
  ld->add_load(in0, vlist);
  ld->add_load(in1, vlist);
  ld->add_function(func);
  ld->add_store(out, vlist);

}

void pointwise(const std::string& out, const std::string& func, const std::string& in, const int dim, prog& prg) {
  string pr = prg.un("pw_math_" + in);
  op* lp = prg.root;
  vector<string> vars;
  for (int d = 0; d < dim; d++) {
    string var = prg.un(pr);
    lp = lp->add_loop(var, 0, 1);
    vars.push_back(var);
  }
  reverse(vars);
  auto ld = lp->add_op(prg.un(pr));
  string vlist = comma_list(vars);
  ld->add_load(in, vlist);
  ld->add_function(func);
  ld->add_store(out, vlist);

}

void load_input(const std::string& in, const std::string& out, const int dim, prog& prg) {
  string pr = prg.un("oc_load_" + in);
  op* lp = prg.root;
  vector<string> vars;
  for (int d = 0; d < dim; d++) {
    string var = prg.un(pr);
    lp = lp->add_loop(var, 0, 1);
    vars.push_back(var);
  }
  reverse(vars);
  auto ld = lp->add_op(prg.un(pr));
  string vlist = comma_list(vars);
  ld->add_load(in, vlist);
  ld->add_store(out, vlist);
}

void lchannel_test() {
  prog prg("lchannel");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("color_in_oc");
  prg.add_output("color_out");

  load_input("color_in_oc", "color_in", 3, prg);
  load_input("color_in", "color_out", 3, prg);

  cout << "Before bounds inference..." << endl;
  prg.pretty_print();

  infer_bounds("color_out", {3, 256, 256}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();

  generate_unoptimized_code(prg);
  compile_compute("unoptimized_" + prg.name + ".cpp");

  //assert(false);
}

void gf_test() {
  prog prg("gray_convert");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("color_in_oc");
  prg.add_output("gray");

  load_input("color_in_oc", "color_in", 3, prg);
  llf_to_grayscale("gray", "color_in", prg);


  infer_bounds("gray", {256, 256}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();

  generate_unoptimized_code(prg);
  compile_compute("unoptimized_" + prg.name + ".cpp");

}

void cpy(const std::string& dst, const std::string& src, const int l, prog& prg) {
  pointwise(dst, "id", src, l, prg);
}

void llf_pyramid_test() {
  int num_pyramid_levels = 4;

  prog prg("llf_pyramid_test");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("color_in_oc");
  prg.add_output("color_out");

  cpy("color_in_int", "color_in_oc", 2, prg);
  vector<string> gray_levels = gaussian_pyramid("color_in_int", num_pyramid_levels, prg);

  cpy("color_out", gray_levels.back(), 2, prg);

  infer_bounds("color_out", {16, 16}, prg);

  std::vector<string> orig_result =
    unoptimized_result(prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);

  std::vector<string> unrolled_result =
    unoptimized_result(prg);
  cout << "======================================" << endl;
  cout << "========= After unrolling reduce loops" << endl;
  prg.pretty_print();

  compare("llf_pyramid", orig_result, unrolled_result);

  merge_basic_block_ops(prg);
  prg.pretty_print();
  //assert(false);

  std::vector<string> merged_result =
    unoptimized_result(prg);

  compare("llf_pyramid_folded", orig_result, merged_result);

  //assert(false);
}

prog llf_grayscale_float(const int r, const int c) {
  int num_pyramid_levels = 4;
  int num_intensity_levels = 8;

  prog prg("llf_gs");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("gray_in_oc");
  prg.add_output("gray_out");

  load_input("gray_in_oc", "gray_int", 2, prg);
  pointwise("gray", "llf_int_to_float", "gray_int", 2, prg);

  // Make intensity pyramids
  vector<vector<string> > intensity_level_pyramids;
  for (int i = 0; i < num_intensity_levels; i++) {
    string pw = prg.un("level_table");
    pointwise(pw, "llf_level_entry_" + str(i), "gray", 2, prg);

    intensity_level_pyramids.push_back(laplacian_pyramid(pw, num_pyramid_levels, prg));
  }

  // Make input Gaussian pyramid
  vector<string> gray_levels = gaussian_pyramid("gray", num_pyramid_levels, prg);

  // Compute levels for interpolated output
  vector<string> output_levels;
  for (int i = 0; i < num_pyramid_levels; i++) {
    vector<string> intensities_at_level;
    for (auto pyramid : intensity_level_pyramids) {
      assert(pyramid.at(i) != "");
      intensities_at_level.push_back(pyramid.at(i));
    }
    output_levels.push_back(llf_interpolate_intensity(gray_levels.at(i), intensities_at_level, prg));
  }

  string scales = reconstruct_gaussian(output_levels, prg);

  llf_rescale_gray("gray_out_float", scales, "gray", prg);
  pointwise("gray_out", "llf_float_to_int", "gray_out_float", 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  infer_bounds("gray_out", {r, c}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  return prg;
}

prog llf_grayscale_float() {
  return llf_grayscale_float(2048, 2048);
}


prog llf_float() {
  int num_pyramid_levels = 4;
  int num_intensity_levels = 8;

  prog prg("local_laplacian_filters");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("color_in_oc");
  prg.add_output("color_out");

  load_input("color_in_oc", "color_in_int", 3, prg);
  pointwise("color_in", "llf_int_to_float", "color_in_int", 3, prg);

  llf_to_grayscale("gray", "color_in", prg);

  // Make intensity pyramids
  vector<vector<string> > intensity_level_pyramids;
  for (int i = 0; i < num_intensity_levels; i++) {
    string pw = prg.un("level_table");
    pointwise(pw, "llf_level_entry_" + str(i), "gray", 2, prg);

    intensity_level_pyramids.push_back(laplacian_pyramid(pw, num_pyramid_levels, prg));

    //intensity_level_pyramids.push_back(laplacian_pyramid("gray", num_pyramid_levels, prg));
  }

  // Make input Gaussian pyramid
  vector<string> gray_levels = gaussian_pyramid("gray", num_pyramid_levels, prg);


  // Compute levels for interpolated output
  vector<string> output_levels;
  for (int i = 0; i < num_pyramid_levels; i++) {
    vector<string> intensities_at_level;
    for (auto pyramid : intensity_level_pyramids) {
      assert(pyramid.at(i) != "");
      intensities_at_level.push_back(pyramid.at(i));
    }
    output_levels.push_back(llf_interpolate_intensity(gray_levels.at(i), intensities_at_level, prg));
  }

  string scales = reconstruct_gaussian(output_levels, prg);

  llf_to_color("color_out_float", "color_in", scales, "gray", prg);
  pointwise("color_out", "llf_float_to_int", "color_out_float", 3, prg);

  prg.pretty_print();
  prg.sanity_check();

  cout << "# loop levels = " << prg.root->children.size() << endl;
  cout << "# kernels     = " << get_kernels(prg).size() << endl;
  //auto producers = get_producers("color_out_to_color431", prg);
  //cout << "Producers for " << "color_out_to_color_431" << endl;
  //for (auto p : producers) {
    //cout << tab(1) << p << endl;
  //}

  //assert(false);

  infer_bounds("color_out", {3, 2048, 2048}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  return prg;
}

void llf_test() {

  prog prg = llf_float();

  cout << "======================================" << endl;
  cout << "========= After unrolling reduce loops" << endl;
  prg.pretty_print();

  assert(false);

  //auto valid = prg.validity_deps();
  //cout << "Got valid" << endl;
  //auto valid_maps = get_maps(valid);
  //auto qfs = compute_qfactors(valid_maps);
  //cout << "Q factors" << endl;

  //cout << "Getting optimized schedule..." << endl;
  //auto sched = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
  //cout << "Optimized schedule..." << endl;
  //for (auto m : get_maps(sched)) {
    //cout << tab(1) << str(m) << endl;
  //}
  //assert(false);

  generate_unoptimized_code(prg);
  compile_compute("unoptimized_" + prg.name + ".cpp");

  assert(false);
}

void union_test() {
  isl_ctx* ctx = isl_ctx_alloc();
  isl_union_map* um0 = isl_union_map_read_from_str(ctx, "{input[root=0, i0, i1, 0]->buf[i0, i1]: 0<=i0<=7 and 0<=i1<=7}");
  cout << str(um0) << endl;
  isl_union_map* um1 = isl_union_map_read_from_str(ctx, "{input[root=0, i0, i1, 1]->buf[1+i0, i1]: 0<=i0<=7 and 0<=i1<=7}");
  cout << str(um1) << endl;
  auto out = unn(um0, um1);
  cout << str(coalesce(out)) << endl;

  isl_union_map* sched0 = isl_union_map_read_from_str(ctx, "{input[root=0, i0, i1, 0]->[1, i0, i1,0]: 0<=i0<=7 and 0<=i1<=7}");
  isl_union_map* sched1 = isl_union_map_read_from_str(ctx, "{input[root=0, i0, i1, 1]->[1, i0, i1,1]: 0<=i0<=7 and 0<=i1<=7}");
  auto out_sched = unn(sched0, sched1);
  cout << str(coalesce(out_sched)) << endl;

  isl_union_map* hw_sched0 = isl_union_map_read_from_str(ctx, "{input[root=0, i0, 0]->[i0]: 0<=i0<=7 }");
  isl_union_map* hw_sched1 = isl_union_map_read_from_str(ctx, "{input[root=0, i0, i1]->[i0+10*i1]: 0<=i0<=7 and 1<=i1<=7 }");
  auto hw_sched = unn(hw_sched0, hw_sched1);
  cout << str(coalesce(hw_sched)) << endl;
}

void dual_port_lake_test();

void lake_smt_tests() {
  //identity stream has a separate stream generation pass,
  //because it will be optimized into a wire in ubuffer flow
  //lake_identity_stream_SMT_test(28, 28, "28_28");
  test_single_port_mem_smt_stream();
  assert(false);
  //assert (false);
}

void access_pattern_read_unit_tests() {
  isl_ctx* ctx = isl_ctx_alloc();
  int dummy_dim;

  auto acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[i0]: 0<=i0<=61}");
  auto sched = isl_map_read_from_str(ctx,"{ op[i0]-> [i0]: 0<=i0<=61 }");
  //auto read_ir = get_vectorized_read(acc_0, sched, {}, 4, 0);
  auto read_ir = get_vectorized_read_simplified(acc_0, sched, {}, 4, 0, dummy_dim);
  auto acc_vec = read_ir.first;
  auto sched_vec = read_ir.second;
  cout << "After vec read access map: " << str(simplify_expr(acc_vec)) << endl;
  cout << "After vec read sched: " << str(sched_vec) << endl;
  assert(get_dim_min(range(sched_vec), 0) == -2);
  assert(get_dim_max(domain(acc_vec), 0) == 15);

  acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[i0]: 0<=i0<=61}");
  sched = isl_map_read_from_str(ctx,"{ op[i0]-> [15 + i0]: 0<=i0<=61 }");
  auto sched_read = isl_map_read_from_str(ctx,"{ op_read[i0]-> [13 + 4*i0]: 0<=i0<=15 }");
  auto sched_write = isl_map_read_from_str(ctx,"{ op_write[i0]-> [4 + 4*i0]: 0<=i0<=15 }");
  //read_ir = get_vectorized_read(acc_0, sched,
  read_ir = get_vectorized_read_simplified(acc_0, sched,
          {{"sram2tb_0", sched_read}, {"agg2sram_0", sched_write}}, 4, 0, dummy_dim);
  acc_vec = read_ir.first;
  sched_vec = read_ir.second;
  cout << "After vec read access map: " << str(acc_vec) << endl;
  cout << "After vec read sched: " << str(sched_vec) << endl;
  assert(get_dim_min(range(sched_vec), 0) == 11);

  //Need prefetch 1 word
  acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[2+i0]: 0<=i0<=61}");
  sched = isl_map_read_from_str(ctx,"{ op[i0]-> [16 + i0]: 0<=i0<=61 }");
  sched_read = isl_map_read_from_str(ctx,"{ op_read[i0]-> [13 + 4*i0]: 0<=i0<=15 }");
  sched_write = isl_map_read_from_str(ctx,"{ op_write[i0]-> [4 + 4*i0]: 0<=i0<=15 }");
  //read_ir = get_vectorized_read(acc_0, sched,
  read_ir = get_vectorized_read_simplified(acc_0, sched,
          {{"sram2tb_0", sched_read}, {"agg2sram_0", sched_write}}, 4, 0, dummy_dim);
  acc_vec = read_ir.first;
  sched_vec = read_ir.second;
  cout << "After vec read access map: " << str(acc_vec) << endl;
  cout << "After vec read sched: " << str(sched_vec) << endl;
  assert(get_dim_min(range(sched_vec), 0) == 11);

  acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1]-> data[i0]: 0<=i0<=7 and 0 <= i1 <= 1}");
  sched = isl_map_read_from_str(ctx,"{ op[i0, i1]-> [14 + i0*2+i1]: 0<=i0<=7 and 0 <= i1 <=1 }");
  sched_write = isl_map_read_from_str(ctx,"{ op_write[i0]-> [8 + 8*i0]: 0<=i0<=7 }");
  //read_ir = get_vectorized_read(acc_0, sched,
  read_ir = get_vectorized_read_simplified(acc_0, sched,
          {{"agg2sram_0", sched_write}}, 4, 0, dummy_dim);
  acc_vec = read_ir.first;
  sched_vec = read_ir.second;
  cout << "After vec read access map: " << str(acc_vec) << endl;
  cout << "After vec read sched: " << str(sched_vec) << endl;
  assert(get_dim_min(range(sched_vec), 0) == 12);

  //acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1]-> data[3*i0 + i1]: 0<=i0<=2 and 0 <= i1 <= 2}");
  //sched = isl_map_read_from_str(ctx,"{ op[i0, i1]-> [14 + i0*3 + i1]: 0<=i0<=2 and 0 <= i1 <= 2 }");
  //read_ir = get_vectorized_read(acc_0, sched, {}, 4, 0);
  //acc_vec = read_ir.first;
  //sched_vec = read_ir.second;
  //cout << str(range(simplify_expr(acc_vec))) << endl;
  //auto range_interpolation = get_vectorize_interpolate(range(acc_vec), 0, 4);
  //for (auto inte: range_interpolation) {
  //    cout << "rewrite access map: " << str(get_aff(dot(acc_vec, inte))) << endl;
  //}
  //cout << "After vec read access map: " << str(simplify_expr(acc_vec)) << endl;
  //cout << "After vec read sched: " << str(sched_vec) << endl;

  acc_0 = isl_map_read_from_str(ctx,"{ sram2tb[root = 0, i0, i2, i1]-> data[i0, i1+i2]: 0<=i0<=61 and 0<=i1<=61 and 0<=i2<=7}");
  sched = isl_map_read_from_str(ctx,"{ sram2tb[root = 0, i0, i2, i1]-> [560*i0+ 70*i2+i1]: 0<=i0<=61 and 0<=i1<=61 and 0<=i2<=7}");
  read_ir = get_vectorized_read_simplified(acc_0, sched, {}, 4, 1, dummy_dim);
  //read_ir = get_vectorized_read(acc_0, sched, {}, 4, 1);
  acc_vec = read_ir.first;
  sched_vec = read_ir.second;
  assert(stride_in_dim(sched_vec, 2) == 280);
  assert(stride_in_dim(acc_vec, 2, 1) == 1);
  cout << "After vec read access map: " << str(acc_vec) << endl;
  cout << "After vec read sched: " << str(sched_vec) << endl;

  acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1]-> data[i0 + i1]: 0<=i0<8 and 0 <= i1 <= 2}");
  sched = isl_map_read_from_str(ctx,"{ op[i0, i1]-> [14 + i0*3 + i1]: 0<=i0<8and 0 <= i1 <= 2 }");
  //read_ir = get_vectorized_read(acc_0, sched, {}, 4, 0);
  read_ir = get_vectorized_read_simplified(acc_0, sched, {}, 4, 0, dummy_dim);
  acc_vec = read_ir.first;
  sched_vec = read_ir.second;
  cout << "After vec read access map: " << str(simplify_expr(acc_vec)) << endl;
  cout << "stride vec dim: " << stride_in_dim(acc_vec, 0) << endl;
  cout << "After vec read sched: " << str(sched_vec) << endl;

  //auto acc_1 = isl_map_read_from_str(ctx,"{ sram2tb[root = 0, i0, i1, i2]-> data[i0, i1+i2]: 0<=i0<=61 and 0<=i1<=61 and 0<=i2<=7}");
  //AccessPattern acc_pattern_ = AccessPattern(acc_1, ctx);
  //auto trans_pair_ = acc_pattern_.get_op_transform(ctx, 1, 4);
  //cout << "trans_op map: " << str(trans_pair_.first) << endl;

  //auto trans = isl_map_read_from_str(ctx,"{ sram2tb[root = 0, i0, i1]-> sram2tb[root = 0, i0, i2, 4*i1+1]}");
  //auto slice = isl_map_read_from_str(ctx,"{ data[i0, i1]-> data[i0, floor(i1/4)]}");
  ////auto trans = get_domain_trans(domain(acc_0), 2, 4);
  //auto res = dot(trans, acc_0);
  //cout << "After vectorization: " << str(res) << endl;
  //res = simplify(dot(res, slice));
  //cout << "After vectorization: " << str(res) << endl;

}

void access_pattern_write_unit_tests() {
  isl_ctx* ctx = isl_ctx_alloc();
  auto acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[i0+1]: 0<=i0<=10 }");
  auto sched = isl_map_read_from_str(ctx, "{ op[i0] -> [i0]: 0 <=i0<=10 }");
  auto ir_vec = get_vectorized_write(acc_0, sched, {}, 4/*fetch_width*/, 0/*dom_dim*/);
  auto acc_vec = ir_vec.first;
  auto sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 0) == 0);
  assert(get_dim_max(range(acc_vec), 0) == 2);
  assert(get_dim_min(range(sched_vec), 0) == 4);
  assert(get_dim_max(range(sched_vec), 0) == 12);
  assert(stride_in_dim(sched_vec, 0) == 4);

  for (auto buf_interpolation: get_vectorize_interpolate(range(acc_vec), 0, 4)) {
    cout << "after interpolate" << str(dot(acc_vec, buf_interpolation)) << endl;
  }

  acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[i0]: 0<=i0<=11 }");
  sched = isl_map_read_from_str(ctx, "{ op[i0] -> [i0]: 0 <=i0<=10 }");
  ir_vec= get_vectorized_write(acc_0, sched, {}, 4/*fetch_width*/, 0/*dom_dim*/);
  acc_vec = ir_vec.first;
  sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 0) == 0);
  assert(get_dim_max(range(acc_vec), 0) == 2);
  assert(get_dim_min(range(sched_vec), 0) == 4);
  assert(get_dim_max(range(sched_vec), 0) == 12);
  assert(stride_in_dim(sched_vec, 0) == 4);

  acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[i0+1]: 0<=i0<=11 }");
  sched = isl_map_read_from_str(ctx, "{ op[i0] -> [i0]: 0 <=i0<=11 }");
  ir_vec= get_vectorized_write(acc_0, sched, {}, 4/*fetch_width*/, 0/*dom_dim*/);
  acc_vec = ir_vec.first;
  sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 0) == 0);
  assert(get_dim_max(range(acc_vec), 0) == 3);
  assert(get_dim_min(range(sched_vec), 0) == 4);
  assert(get_dim_max(range(sched_vec), 0) == 16);
  assert(stride_in_dim(sched_vec, 0) == 4);

  acc_0 = isl_map_read_from_str(ctx,"{ op[i0]-> data[i0+4]: 0<=i0<=11 }");
  sched = isl_map_read_from_str(ctx, "{ op[i0] -> [i0]: 0 <=i0<=11 }");
  ir_vec= get_vectorized_write(acc_0, sched, {}, 4/*fetch_width*/, 0/*dom_dim*/);
  acc_vec = ir_vec.first;
  sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 0) == 1);
  assert(get_dim_max(range(acc_vec), 0) == 3);
  assert(get_dim_min(range(sched_vec), 0) == 4);
  assert(get_dim_max(range(sched_vec), 0) == 12);
  assert(stride_in_dim(sched_vec, 0) == 4);

  //2D case
  acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1]-> data[i0, i1]: 0<=i0<=11 and 0 <=i1 <= 11 }");
  sched = isl_map_read_from_str(ctx, "{ op[i0, i1] -> [12 * i0 + i1]: 0 <=i0<=11 and 0<= i1 <= 11 }");
  ir_vec = get_vectorized_write(acc_0, sched, {}, 4/*fetch_width*/, 1/*dom_dim*/);
  acc_vec = ir_vec.first;
  sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 1) == 0);
  assert(get_dim_max(range(acc_vec), 1) == 2);
  assert(get_dim_min(range(sched_vec), 0) == 4);
  assert(get_dim_max(range(sched_vec), 0) == 144);
  assert(stride_in_dim(sched_vec, 1) == 4);
  assert(stride_in_dim(sched_vec, 0) == 12);

  //2D case with reaccess
  acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1]-> data[i0]: 0<=i0<=11 and 0 <=i1 <= 11 }");
  sched = isl_map_read_from_str(ctx, "{ op[i0, i1] -> [12 * i0 + i1]: 0 <=i0<=11 and 0<= i1 <= 11 }");
  ir_vec = get_vectorized_write(acc_0, sched, {},  4/*fetch_width*/, 0/*dom_dim*/);
  acc_vec = ir_vec.first;
  sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 0) == 0);
  assert(get_dim_max(range(acc_vec), 0) == 2);
  assert(get_dim_min(range(sched_vec), 0) == 48);
  assert(get_dim_max(range(sched_vec), 0) == 144);
  assert(get_in_dim(acc_vec) == 1);
  assert(stride_in_dim(sched_vec, 0) == 48);

  //3D case with reaccess
  acc_0 = isl_map_read_from_str(ctx,"{ op[i0, i1, i2]-> data[i0]: 0<=i0<=11 and 0 <=i1 <= 11 and 0 <= i2 <= 3}");
  sched = isl_map_read_from_str(ctx, "{ op[i0, i1, i2] -> [48 * i0 + 4*i1 + i2]: 0 <=i0<=11 and 0<= i1 <= 11 and 0 <= i2 <= 3}");
  ir_vec = get_vectorized_write(acc_0, sched, {},  4/*fetch_width*/, 0/*dom_dim*/);
  acc_vec = ir_vec.first;
  sched_vec = ir_vec.second;
  cout << "before vectorization: " << str(acc_0) << endl;
  cout << "after vectorization: " << str(acc_vec) << endl;
  cout << "sched after vectorization: " << str(sched_vec) << endl;
  assert(get_dim_min(range(acc_vec), 0) == 0);
  assert(get_dim_max(range(acc_vec), 0) == 2);
  assert(get_in_dim(acc_vec) == 1);
}

void vectorization_unit_tests() {
  //access_pattern_write_unit_tests();
  //access_pattern_read_unit_tests();
  synth_id_test();
  synth_id_auto_test();
  synth_id_fetch2_test();
  twoport_vec_test();
  rolled_conv_test();
  rolled_conv_reorder_test();
  upsample_vectorization_test();
  upsample_pad_test();
  stride_id_test();
  stride_conv_test();
  upsample_2d_unit_test();
  outer_rolled_conv2D_test();
  rolled_conv2D_test();

  //FIXME: Did not work need to test after ASPLOS
  //sw_fetch2_test();
}

void lake_tests() {
  //vectorization_unit_tests();
  //vectorization_unit_tests();
  test_single_port_mem(false, true, "aha_garnet_design_new");
  test_pond("aha_garnet_design_pond");
  //test_single_port_mem(false, false, "aha_garnet_design");
  //assert(false);
  //vectorization_unit_tests();
  ////double_buffer_test();
  ////lake_identity_stream_autovec_test();
  //lake_gaussian_autovec_test();
  ////lake_dual_port_test();
  //lake_cascade_autovec_test();
  //lake_harris_autovec_test();
  //lake_resnet_multitile_test();
  //lake_resnet_test();
  //resnet_test();
}

void halide_camera_pipeline_test() {
  prog prg = camera_pipeline();
  prg.sanity_check();
  regression_test(prg);
}

void infer_uneven_bounds_test() {
  prog prg("infer_bounds_unroll");
  prg.add_input("in_oc");
  prg.add_output("out");
  cpy("in", "in_oc", 2, prg);

  auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
  auto init = lp->add_op(prg.un("init"));
  init->add_store("c", "x, y");
  init->add_function("set_zero_32");
  auto red = lp->add_nest("ry", 0, 3, "rx", 0, 3)->add_op(prg.un("r"));
  red->add_load("c", "x, y");
  red->add_load("in", "x + rx, y + ry");
  red->add_store("c", "x, y");
  red->add_function("add");
  cpy("out", "c", 2, prg);

  infer_bounds_and_unroll("out", {16, 16}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  regression_test(prg);
}

void infer_bounds_unrolled_test() {

  vector<string> correct;
  {
    prog prg("infer_bounds_unroll");
    prg.add_input("in_oc");
    prg.add_output("out");
    cpy("in", "in_oc", 2, prg);
    cpy("out", "in", 2, prg);
    infer_bounds("out", {32, 32}, prg);

    correct = unoptimized_result(prg);
  }

  vector<string> actual;
  {
    prog prg("infer_bounds_unroll");
    prg.add_input("in_oc");
    prg.add_output("out");
    cpy("in", "in_oc", 2, prg);
    cpy("out", "in", 2, prg);

    infer_bounds("out", {32, 32}, prg);
    unroll_producer_matching("out", 4, prg);
    merge_basic_block_ops(prg);

    actual = unoptimized_result(prg);
  }

  compare("strip_mine_unroll_test", correct, actual);

}

vector<op*> inner_ops(prog& prg) {
  vector<op*> ordered_inner =
    get_ordered_inner_loops(prg);
  vector<op*> ops;
  for (auto ord : ordered_inner) {
    for (auto c : ord->children) {
      assert(!c->is_loop());
      ops.push_back(c);
    }
  }
  return ops;
}

void set_scheduled_loop_latency(schedule_info& hwinfo, op* op, prog& prg) {
  int latency = 0;
  for (auto other : op->children) {
    int old_latency = latency;
    latency += hwinfo.total_latency(other);
    if (old_latency == latency) {
      latency += 1;
    }
  }

  hwinfo.loop_iis[op->name] = max(latency, 1);

  //hwinfo.instance_latencies[op] = latency;
}

int get_vectorization_dim(isl_map* m, int fetch_width) {
  for(int i = num_out_dims(m)-1; i >= 0; i --) {
    int ext = get_dim_extent(range(m), i);
    if (ext >= fetch_width) {
      return i;
    }
  }
  return -1; //need merge or use single pixel vectorization
}

void relax_write(schedule_info& sched, op* loop, prog& prg, int fetch_width) {
  //only look at loop op
  if (!loop->is_loop())
    return;
  cout << "op name: " << loop->name << endl;
  auto write_map = written_at(loop->name, prg);
  auto levels = get_variable_levels(prg);
  cout << "op level: " << levels.at(loop->name) << endl;
  if(write_map == nullptr)
      return;
  //Do not pad glb loop
  if (contains(loop->name, "glb"))
      return;
  for (auto wr_map: get_maps(write_map)) {
    cout << tab(4) << "write map: \n\t" << str(wr_map) << endl;
    auto b_map = to_map(pick(get_basic_maps(wr_map)));
    auto write_addr_involve_dim = out_involve_dim(b_map, levels.at(loop->name));
    cout << tab(4) << "addr involve dim: " << write_addr_involve_dim << endl;

    //Chances are that this dimension is fully unrolled
    //Involve the vectorization dimension
    int vec_dim = get_vectorization_dim(b_map, fetch_width);
    if (write_addr_involve_dim.size() > 0
            && (elem(vec_dim, write_addr_involve_dim))) {
      assert(write_addr_involve_dim.size() == 1);
      int packed_addr_dim = pick(write_addr_involve_dim);
      auto in_involve_d = in_involve_dim(b_map, packed_addr_dim);
      cout << "\tInvolve in dim: " << in_involve_d << endl;

      //Do not pad if this dimension will be merged
      if (loop->trip_count() < fetch_width) {
          continue;
      } else {
          sched.op_offset_within_parent[loop] += (fetch_width - (loop->trip_count() * sched.II(loop)) % fetch_width) % fetch_width;
          cout << "\t change loop : " << loop->name << "'s offset to " << sched.op_offset_within_parent.at(loop) << endl;
      }
    }
    //Should only go over one time
    return;
  }
}

bool need_relax(schedule_info& sched, op* loop, prog& prg, int fetch_width) {
  //only look at loop op
  if (!loop->is_loop())
    return false;
  cout << "op name: " << loop->name << endl;
  auto read_map = read_at(loop->name, prg);
  auto levels = get_variable_levels(prg);
  cout << "op level: " << levels.at(loop->name) << endl;
  if(read_map == nullptr)
      return false;
  //cout << "Get read map: " << str(read_map) << endl;
  for (auto rd_map: get_maps(read_map)) {
    cout << tab(4) << "Read map: \n\t" << str(rd_map) << endl;
    auto b_map = to_map(pick(get_basic_maps(rd_map)));
    auto read_addr_involve_dim = out_involve_dim(b_map, levels.at(loop->name));
    cout << tab(4) << "addr involve dim: " << read_addr_involve_dim << endl;

    //Chances are that this dimension is fully unrolled
    //Involve the vectorization dimension
    int vec_dim = get_vectorization_dim(b_map, fetch_width);
    if (read_addr_involve_dim.size() > 0
            && (elem(vec_dim, read_addr_involve_dim))) {
      assert(read_addr_involve_dim.size() == 1);
      int packed_addr_dim = pick(read_addr_involve_dim);
      auto in_involve_d = in_involve_dim(b_map, packed_addr_dim);
      cout << "\tInvolve in dim: " << in_involve_d << endl;
      //Do not have sliding window
      if (in_involve_d.size() == 1) {
          continue;
      } else if (loop->trip_count() < fetch_width) {
          continue;
      } else {
          //int stride = stride_in_dim(b_map, levels.at(loop->name), packed_addr_dim);
          //TODO: double check if this correct
          //double check this logic we need to go over all the involve dimension
          //except the innermost
          //for (int i = 0; i < /*in_involve_d.size()-*/1; i ++) {
          //  int in_involve_dim = in_involve_d.at(i);
          //
          //The logic here should be if we have multiple access check if upper level access go across wide fetch width
          bool need_relax = false;
          for (int i = 0; i < in_involve_d.size() - 1; i ++) {
            int in_involve_dim = in_involve_d.at(i);
            int stride = stride_in_dim(b_map, in_involve_dim, packed_addr_dim);
            cout << "Dim " << in_involve_dim << "\n\t hasStride : " << stride << endl;
            if (stride % fetch_width != 0) {
              need_relax = true;
            }
          }

          //  int stride = stride_in_dim(b_map, in_involve_dim, packed_addr_dim);
            //cout << "Dim " << in_involve_dim << "\n\t hasStride : " << stride << endl;
            //if (stride % fetch_width != 0) {
            if (need_relax) {
              cout << tab(4) << "Relax ii latency for op: " << loop->name << endl;
              //cout << tab(4) << "Original offset within parent: " << sched.offset_in_parent(child) << endl;
              cout << tab(4) << "Original offset within parent: " << sched.offset_in_parent(loop) << endl;
              cout << tab(4) << "loop trip count: " << loop->trip_count() << endl;

              //This loop is the innermost loop that access the vectorized dimension
              if (levels.at(loop->name) == in_involve_d.back()) {
                  sched.op_offset_within_parent.at(loop) = sched.II(loop) * ((loop->trip_count()) % fetch_width + fetch_width * (loop->trip_count()%fetch_width== 0));
             } else {
                  //int range_span = get_dim_extent(range(b_map), packed_addr_dim);
                  //if (range_span % fetch_width)
                  //TODO: also check the logic here, this is conservative
                  sched.op_offset_within_parent.at(loop) = sched.II(loop) * ((4- (loop->trip_count()) % fetch_width));
              }
              cout << tab(4) << "New offset within parent: " << sched.offset_in_parent(loop) << endl;
              return true;
            }
          //}
      }
    }
  }
  return false;
}

void relax_inner_delay_for_vec_read(schedule_info& sched, op* loop, prog& prg, int fetch_width);
void relax_inner_delay_for_vec_write(schedule_info& sched, op* loop, prog& prg, int fetch_width);

void asap_inner_loops_schedule(schedule_info& sched, op* op, prog& prg, int fetch_width) {
  //cout << "scheduling: " << op->name << endl;

  if (op->is_op()) {
    int total_latency = op_latency(op, sched);
    return;
  }

  for (auto other : op->children) {
    asap_inner_loops_schedule(sched, other, prg, fetch_width);
  }

  if (is_inner_loop(op)) {
    int latency = 0;
    for (auto other : op->children) {
      int old_latency = latency;
      sched.op_offset_within_parent[other] = 0;
      latency = max(latency, sched.total_latency(other));
    }
    sched.loop_iis[op->name] = max(latency, 1);
  } else if(op->is_loop()) {
    int latency = 0;
    for (auto other : op->children) {
      int old_latency = latency;
      sched.op_offset_within_parent[other] = latency;
      //if (is_inner_loop(other)) {
      //  //TODO: currently only need to pad read op
      //  relax_inner_delay_for_vec_read(sched, other, prg, fetch_width);
      //}
      relax_write(sched, other, prg, fetch_width);
      if (need_relax(sched, other, prg, fetch_width)) {
        cout << tab(4) << other->name << "--> Enter relax condition loop!" << endl;
      }
      //if (other->is_loop())
      //    sched.op_offset_within_parent[other] += (fetch_width -
      //        (other->trip_count() * sched.II(other) % fetch_width)) % fetch_width;
      latency = sched.total_latency(other) + sched.offset_in_parent(other);
      //TODO:  this offset by 1 is trying to pipeline instead of braodacsting
      if (old_latency == latency) {
        latency += 1;
      }
    }
    sched.loop_iis[op->name] = max(latency, 1);
  } else if (op->is_if()) {
    assert(op->children.size() == 1);
    auto child = pick(op->children);
    sched.op_offset_within_parent[child] = 0;
    sched.loop_iis[op->name] = sched.total_latency(child) + sched.offset_in_parent(child);
  } else {
    cout << "Did not implemented visitor pass for IR Node type: " << op->tp << endl;
    assert(false);
  }
}

void sequential_schedule(schedule_info& hwinfo, op* op, prog& prg) {
  //cout << "scheduling: " << op->name << endl;

  if (!op->is_loop()) {
    int total_latency = op_latency(op, hwinfo);
    //hwinfo.instance_latencies[op] = total_latency;
    return;
  }

  for (auto other : op->children) {
    sequential_schedule(hwinfo, other, prg);
  }

  int latency = 0;
  for (auto other : op->children) {
    int old_latency = latency;
    hwinfo.op_offset_within_parent[other] = latency;
    latency += hwinfo.total_latency(other);
    if (old_latency == latency) {
      latency += 1;
    }
  }

  hwinfo.loop_iis[op->name] = max(latency, 1);

  //hwinfo.instance_latencies[op] = latency;
}

void rate_matched_schedule(schedule_info& sched, op* root, prog& prg, const int dims) {
  pad_top_level_ops_with_loops(prg);

  // Data structures for the fusion plan
  map<int, int> level_iis;
  map<string, int> loop_delays;

  vector<op*> l2_loops = ops_at_level(2, prg);
  level_iis[2] = -1;
  cout << "l2 loops..." << endl;
  int max_tc = 0;
  int l2_latency = 0;
  for (auto l : l2_loops) {
    cout << tab(1) << l->name << endl;
    sequential_schedule(sched, l, prg);
    cout << tab(2) << "total latency    : " << sched.total_latency(l) << endl;
    cout << tab(2) << "iteration latency: " << sched.instance_latency(l) << endl;
    level_iis[2] = max(sched.instance_latency(l), level_iis[2]);
    loop_delays[l->name] = 0;
    cout << tab(2) << "iter start delay : " << loop_delays[l->name] << endl;
    max_tc = max(l->trip_count(), max_tc);
  }

  for (auto l : l2_loops) {
    sched.loop_iis[l->name] = level_iis[2];
    sched.op_offset_within_parent[l] = 0;
  }

  cout << "L2 II = " << level_iis[2] << endl;
  cout << "L2 TC = " << max_tc << endl;

  int outer_ii = max_tc*level_iis[2];
  cout << "Outer II = " << outer_ii << endl;


  vector<op*> l1_loops = ops_at_level(1, prg);

  std::set<op*> edge_loops;
  for (auto l : l1_loops) {
    bool no_reads_from_internal_buffer = true;
    for (auto op : l->descendant_ops()) {
      for (auto b : op->buffers_read()) {
        if (!prg.is_input(b)) {
          no_reads_from_internal_buffer = false;
          break;
        }
      }
    }
    if (no_reads_from_internal_buffer) {
      edge_loops.insert(l);
      sched.loop_iis[l->name] = outer_ii;
      sched.op_offset_within_parent[l] = 0;
    }
  }

  int pos = 3;
  for (auto l : l1_loops) {
    if (!elem(l, edge_loops)) {
      sched.loop_iis[l->name] = outer_ii;
      sched.op_offset_within_parent[l] = pos*outer_ii;
      pos += 3;
    }
  }
  sched.loop_iis["root"] = sched.instance_latency(prg.find_loop("root"));

  //assert(false);
  //adjust_outer_delays(sched, prg);
}

//Just test if add delay work
void add_delay_to_op(string op_name, prog& prg, schedule_info& sched) {
    for (auto kernel: topologically_sort_kernels(prg)) {
        auto lp = prg.find_non_op(kernel);
        cout << "\t kernel name: " << lp<< ", delay: " << sched.op_offset_within_parent[lp]<< endl;
      if (!contains(kernel, "hw_input")) {
          sched.op_offset_within_parent[lp] += 64;
      }
    }
}

void tighten_iis(schedule_info& sched, prog& prg) {
  bool tightened = true;
  while (tightened) {
    tightened = false;
    for (auto loop : prg.all_loops()) {
      cout << loop->name << endl;
      int ii = sched.II(loop);
      if (ii != 1) {
        int L = sched.last_update_delay(loop);
        if (ii > L) {
          cout << "Tightening ii " << loop->name << " from " << ii << " to " << L << endl;
          sched.loop_iis[loop->name] = max(L, 1);
          tightened = true;
          break;
        }
      }
    }
  }
}

std::set<op*> find_perfect_lp_outside_cgpl(schedule_info& sched, prog& prg) {
  vector<op*> cgpl_lps;
  std::set<op*> ret;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  for (auto loop : prg.all_loops()) {
    auto lower_ops = loop->descendants();
    bool outside_cgpl = false;
    for(op* lp: cgpl_lps){
      if(elem(lp, lower_ops)) {
        ret.insert(lp);
        break;
      }
    }
  }
  return ret;
}

//This is the loop flatten pass
void tighten_coarse_grained_iis(schedule_info& sched, prog& prg) {
  bool tightened = true;
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  while (tightened) {
    tightened = false;
    for (auto loop : prg.all_loops()) {
      auto lower_ops = loop->descendants();
      bool outside_cgpl = false;
      for(op* lp: cgpl_lps){
        if(elem(lp, lower_ops) && (lp!=loop)) {
          outside_cgpl = true;
          break;
        }
      }
      if (!outside_cgpl)
          continue;
      cout << "\tOP: " << loop->name << "is a loop outside cgpl " << endl;
      int ii = sched.II(loop);
      if (ii != 1) {
        int L = sched.doublebuffer_update_delay(loop);
        cout << "Double buffer update delay  for loop: " << loop->name << ": " << L << endl;
        if (ii > L) {
          cout << "Tightening ii " << loop->name << " from " << ii << " to " << L << endl;
          sched.loop_iis[loop->name] = max(L, 1);
          tightened = true;
          break;
        }
      }
    }
  }
}


void relax_inner_iis(schedule_info& sched, op* loop, umap* read_map, int fetch_width) {

    //Handle the sliding window over vectorization dimension
    //always vectorize the inner most loop
    for (auto rd_map: get_maps(read_map)) {
      cout << tab(4) << "Read map: \n" << str(rd_map) << endl;
      auto b_map = to_map(pick(get_basic_maps(rd_map)));
      auto read_addr_involve_dim = out_involve_dim(b_map, num_in_dims(b_map) - 1);
      cout << tab(4) << "addr involve dim: " << read_addr_involve_dim << endl;

      //Chances are that this dimension is fully unrolled
      if (read_addr_involve_dim.size() > 0) {
        assert(read_addr_involve_dim.size() == 1);
        int packed_addr_dim = pick(read_addr_involve_dim);
        auto in_involve_d = in_involve_dim(b_map, packed_addr_dim);
        cout << "Involve in dim: " << in_involve_d << endl;
        //Do not have sliding window
        if (in_involve_d.size() == 1) {
            continue;
        }
        for (int in_dim : in_involve_d) {
            if (in_dim == num_in_dims(b_map) - 1)
                continue;
            auto proj_map = project_all_out_but(b_map, packed_addr_dim);
            auto aff = get_aff(proj_map);
            int stride = int_coeff(aff, in_dim);
            cout << "Dim " << in_dim << " of AFF: " << str(aff) << "\n\t hasStride : " << stride << endl;
            if (stride % fetch_width != 0) {
              cout << tab(4) << "Relax ii latency for op: " << loop->name << endl;
              //cout << tab(4) << "Original offset within parent: " << sched.offset_in_parent(child) << endl;
              cout << tab(4) << "Original offset within parent: " << sched.offset_in_parent(loop) << endl;
              cout << tab(4) << "loop trip count: " << loop->trip_count() << endl;
              sched.op_offset_within_parent.at(loop) = (loop->trip_count()) % fetch_width
                  + fetch_width * (loop->trip_count()%fetch_width== 0);
              cout << tab(4) << "New offset within parent: " << sched.offset_in_parent(loop) << endl;
            }
        }
        /*
        auto reads = range(b_map);
        int ext = to_int(lexmaxval(
                    project_all_but(reads, packed_addr_dim)
                    )) + 1;
        cout << tab(4) << "packed dim extent: " << ext << endl;
        //TODO change 4 into codegen options,fetch_width
        if (ext > loop->trip_count()) {
            cout << tab(4) << "Relax ii latency for op: " << loop->name << endl;
            //cout << tab(4) << "Original offset within parent: " << sched.offset_in_parent(child) << endl;
            cout << tab(4) << "Original offset within parent: " << sched.offset_in_parent(loop) << endl;
            cout << tab(4) << "loop trip count: " << loop->trip_count() << endl;
            sched.op_offset_within_parent.at(loop) = (loop->trip_count()) % fetch_width
                + fetch_width * (loop->trip_count()%fetch_width== 0);
            cout << tab(4) << "New offset within parent: " << sched.offset_in_parent(loop) << endl;
        }*/
        }
    }
}

void relax_inner_delay_for_vec_read(schedule_info& sched, op* loop, prog& prg, int fetch_width) {
  auto read_map = read_at(loop->name, prg);
  if(read_map != nullptr) {
    cout << tab(2) << "Relax for read op: \n\t"<< str(read_map) << endl;
    relax_inner_iis(sched, loop, read_map, fetch_width);
  }
}

void relax_inner_delay_for_vec_write(schedule_info& sched, op* loop, prog& prg, int fetch_width) {
  auto write_map = written_at(loop->name, prg);
  if(write_map != nullptr) {
    cout << tab(2) << "Relax for write op: \n\t"<< str(write_map) << endl;
    relax_inner_iis(sched, loop, write_map, fetch_width);
  }
}

void relax_iis_for_vectorization(schedule_info& sched, prog& prg) {
    //for (auto b: all_buffers(prg)) {
    //  map<op*, isl_map*> cons = prg.consumer_maps(b);
    //  for (auto opm: cons) {
    //    op* op = opm.first;
    //    if (opm.second != nullptr) {
    //      auto read_map = opm.second;
    //      cout << "Get Read Map: " << str(read_map) << endl;
    //    }
    //  }
    //}
      /* TODO
       * If loop is the inner most check all buffer in the program if this op
       * get the read range from that dimension and if the extent (max-min+1)
       * is not the multiplier of your fetch width pad that to the multiplier of fetch width
       */
    for (auto loop : prg.all_loops()) {
      int ii = sched.II(loop);
      if (is_inner_loop(loop)) {
        cout << tab(2) << "<" << loop->name << " >II after tight: " << ii << endl;
        for (auto op: loop->descendant_ops()) {
          cout << tab(2) << op->name << endl;
          for ( auto prods: op->buffers_read() ) {
              cout << tab(2) << "consume buffer: " << prods << endl;
          }
          //cout << "Read map: " << str(prg.read_map(op)) << endl;
        }
        auto write_map = written_at(loop->name, prg);
        //cout << tab(2) << "Relax for write op: \n\t"<< str(write_map) << endl;
        //relax_inner_iis(sched, loop, write_map);
        auto read_map = read_at(loop->name, prg);
        if(read_map != nullptr) {
          cout << tab(2) << "Relax for read op: \n\t"<< str(read_map) << endl;
          relax_inner_iis(sched, loop, read_map, 4);
        }
      }
    }
  bool relaxed = true;
  while (relaxed) {
    relaxed  = false;
    for (auto loop : prg.all_loops()) {
      int ii = sched.II(loop);
      if (ii != 1) {
        int L = sched.last_update_delay(loop);
        if (ii < L) {
          cout << "Relax ii " << loop->name << " from " << ii << " to " << L << endl;
          sched.loop_iis[loop->name] = max(L, 1);
          relaxed = true;
          break;
        }
      }
    }
  }
}


void adjust_coarse_grained_loop_delays_sequentially_without_opt(schedule_info& sched, prog& prg) {
  int d = 0;
  map<string, int> coarse_pipeline_II;
  //op* coarse_pipeline_loop = find_coarse_grained_pipeline_loop(prg.root, prg);


  //you need to adjust delay for each block sequentially
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  for (op* coarse_pipeline_loop: cgpl_lps) {
    cout << "adjust delay under coarse loop: "
        << coarse_pipeline_loop->name << endl;
    vector<string> sorted_kernels = topologically_sort_kernels(coarse_pipeline_loop, prg);
    map<string, int> head_op_latency;
    for (auto name : sorted_kernels) {
      auto lp = prg.find_non_op(name);
      cout << tab(1) << "Push kernel <" << lp->name << "> into delay adjusting queue." << endl;
      //cout << tab(2) << "II: " << sched.II(lp) << endl;
      //cout << tab(2) << "TP: " << (lp)->trip_count() << endl;
      auto producers = get_producers(name, coarse_pipeline_loop, prg);
      for (auto prod:  producers)
          cout << "\tprod: " << prod << endl;

      //reset the delay
      //coarse_pipeline_II[name] = sched.II(lp) * lp->trip_count();
      coarse_pipeline_II[name] = sched.total_latency(lp);
      sched.op_offset_within_parent[lp] = 0;
      if (producers.size() == 0) {
          head_op_latency[name] = coarse_pipeline_II.at(name);
      }
    }

    int max_head_op_latency = 0;
    for (auto it: head_op_latency) {
        max_head_op_latency = max(it.second, max_head_op_latency);
    }

    for (auto name : sorted_kernels) {
      auto lp = prg.find_non_op(name);
      cout << tab(2) << "Adjusting delay of " << lp->name << endl;
      //cout << tab(2) << "II: " << sched.II(lp) << endl;
      int max_delay = 0;
      auto producers = get_producers(name, coarse_pipeline_loop, prg);
      for (string prod: producers){
          op* prod_op = prg.find_non_op(prod);
          max_delay = max(max_delay,
                  coarse_pipeline_II.at(prod) + sched.op_offset_within_parent.at(prod_op));
      }
      sched.op_offset_within_parent.at(lp) = max_delay;
      cout << tab(1) << "final delay of " << lp->name <<
          ": \t"<< max_delay << endl << endl;
    }
  }
}

void align_glb_load_start_cycle(schedule_info& sched, prog& prg) {
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  for (op* coarse_pipeline_loop: cgpl_lps) {
    cout << "adjust delay under coarse loop: "
        << coarse_pipeline_loop->name << endl;
    vector<string> sorted_kernels = topologically_sort_kernels(coarse_pipeline_loop, prg);
    vector<string> kernels_to_be_aligned;
    for (auto name : sorted_kernels) {
      //cout << tab(2) << "II: " << sched.II(lp) << endl;
      //cout << tab(2) << "TP: " << (lp)->trip_count() << endl;
      auto producers = get_producers(name, coarse_pipeline_loop, prg);

      if (producers.size() == 0) {
         kernels_to_be_aligned.push_back(name);
         cout << tab(1) << "Push kernel <" << name << "> into GLB alignment list." << endl;
      }
    }


    int max_delay = 0;
    map<string, int> delay_map;
    for (auto name : kernels_to_be_aligned) {
      auto lp = prg.find_non_op(name);
      delay_map[name] = sched.starting_delay_to_leaf(lp);
      max_delay = max(delay_map.at(name), max_delay);
    }
    for (auto name : kernels_to_be_aligned) {
      auto lp = prg.find_non_op(name);
      sched.op_offset_within_parent.at(lp) =  - delay_map.at(name);
    }
  }
}

void adjust_coarse_grained_loop_delays_sequentially(schedule_info& sched, prog& prg) {
  int d = 0;
  map<string, int> coarse_pipeline_II;
  //op* coarse_pipeline_loop = find_coarse_grained_pipeline_loop(prg.root, prg);


  //you need to adjust delay for each block sequentially
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  for (op* coarse_pipeline_loop: cgpl_lps) {
    cout << "adjust delay under coarse loop: "
        << coarse_pipeline_loop->name << endl;
    vector<string> sorted_kernels = topologically_sort_kernels(coarse_pipeline_loop, prg);
    map<string, int> head_op_latency;
    for (auto name : sorted_kernels) {
      auto lp = prg.find_non_op(name);
      cout << tab(1) << "Push kernel <" << lp->name << "> into delay adjusting queue." << endl;
      //cout << tab(2) << "II: " << sched.II(lp) << endl;
      //cout << tab(2) << "TP: " << (lp)->trip_count() << endl;
      auto producers = get_producers(name, coarse_pipeline_loop, prg);
      for (auto prod:  producers)
          cout << "\tprod: " << prod << endl;

      //reset the delay
      //coarse_pipeline_II[name] = sched.II(lp) * lp->trip_count();
      coarse_pipeline_II[name] = sched.total_latency(lp);
      sched.op_offset_within_parent[lp] = 0;
      if (producers.size() == 0) {
          head_op_latency[name] = coarse_pipeline_II.at(name);
      }
    }

    int max_head_op_latency = 0;
    for (auto it: head_op_latency) {
        max_head_op_latency = max(it.second, max_head_op_latency);
    }

    for (auto name : sorted_kernels) {
      auto lp = prg.find_non_op(name);
      cout << tab(2) << "Adjusting delay of " << lp->name << endl;
      //cout << tab(2) << "II: " << sched.II(lp) << endl;
      int max_delay = 0;
      auto producers = get_producers(name, coarse_pipeline_loop, prg);
      for (string prod: producers){
          op* prod_op = prg.find_non_op(prod);
          max_delay = max(max_delay,
                  coarse_pipeline_II.at(prod) + sched.op_offset_within_parent.at(prod_op));
      }
      //An optimization, if this the head of the graph, push it back
      if (producers.size() == 0 ) {
        max_delay = max_head_op_latency - head_op_latency.at(name);
      }

      //TODO: this code is commented out, glb can only support 0 latency
      //auto all_producers = get_producers(name, prg);
      //if ((producers.size() == 0) && (all_producers.size() == 0)) {

      //  //max_delay = max_head_op_latency - head_op_latency.at(name);
      //  //FIXME: this 784 is only for resnet
      //  cout << "HACK: " << name << endl;
      //  max_delay = max_head_op_latency - head_op_latency.at(name);
      //  //TODO: save this delay
      //}
      //else if ((producers.size() == 0) && (all_producers.size() != 0)) {
      //  max_delay -= 785;
      //}

      sched.op_offset_within_parent.at(lp) = max_delay;
      cout << tab(1) << "final delay of " << lp->name <<
          ": \t"<< max_delay << endl << endl;
    }
  }
}

void dump_DNN_delays(schedule_info& sched, prog& prg, ofstream& out) {
  cout << "Showing delay of " << prg.name << endl;
  int d = 0;
  map<string, int> coarse_pipeline_II;
  int start = INT_MAX, end = 0;
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Kernel, " << name << ", " << sched.op_offset_within_parent.at(lp) << endl;
    if (sched.op_offset_within_parent.at(lp) != 0){
        start = min(sched.op_offset_within_parent.at(lp), start);
        end = max(sched.op_offset_within_parent.at(lp), end);
    }
  }
  cout << "CGRA latency: " <<  end - start << endl;
  out <<  end-start;
}

void adjust_outer_delays_sequentially_with_glb_guard(schedule_info& sched, prog& prg) {
  cout << "Adjusting delays of " << prg.name << "After vectorization" << endl;
  int d = 0;
  int glb_load_latency = 0;
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    auto prods =  get_producers(name, prg);
    if (prods.size() == 0 && contains(name, "glb")) {
      cout << "\tkernel <" << lp->name << "> is the glb loading kernel." << endl;
      cout << "\tname<" << name << endl;
      glb_load_latency = std::max(sched.total_latency(lp), glb_load_latency);
    }
  }
  cout << "Find GLB load latency = " << glb_load_latency << endl;
  map<string, int> coarse_pipeline_II;
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Push kernel <" << lp->name << "> into delay adjusting queue." << endl;
    cout << "II: " << sched.II(lp) << endl;
    cout << "TP: " << (lp)->trip_count() << endl;
    for (auto prod:  get_producers(name, prg))
        cout << "\tprod: " << prod << endl;
    //This only works for the schedule without pipeline should change into total latency
    //coarse_pipeline_II[name] = sched.II(lp) * lp->trip_count();
    coarse_pipeline_II[name] = sched.total_latency(lp);
    sched.op_offset_within_parent[lp] = 0;
  }
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Adjusting delay of " << lp->name << endl;
    cout << "II: " << sched.II(lp) << endl;
    int max_delay = 0;
    for (string prod: get_producers(name, prg)){
        op* prod_op = prg.find_loop(prod);
        max_delay = max(coarse_pipeline_II.at(prod)
                + sched.op_offset_within_parent.at(prod_op), max_delay);
    }
    //FIXME: Hack for glb latency sync nothing can start before glb transfer
    if (!contains(name, "glb")) {
      max_delay = max(glb_load_latency, max_delay);
    }

    sched.op_offset_within_parent.at(lp) = max_delay;
    cout << "final delay of " << lp->name <<
        ": \n\t"<< max_delay << endl;
  }
}

int find_glb_load_latency(schedule_info& sched, prog& prg) {
  int glb_load_latency = 0;
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    auto prods =  get_producers(name, prg);
    if (prods.size() == 0 && contains(name, "glb")) {
      cout << "\tkernel <" << lp->name << "> is the glb loading kernel." << endl;
      cout << "\tname<" << name << endl;
      glb_load_latency = std::max(sched.total_latency(lp), glb_load_latency);
    }
  }
  cout << "Find GLB load latency = " << glb_load_latency << endl;
  return glb_load_latency;
}


void adjust_outer_delays_sequentially(schedule_info& sched, prog& prg, bool glb_sync = true) {
  cout << "Adjusting delays of " << prg.name << "After vectorization" << endl;
  int d = 0;
  map<string, int> coarse_pipeline_II;
  int glb_load_latency = 0;
  if (glb_sync) {
    for (auto name : topologically_sort_kernels(prg)) {
      auto lp = prg.find_loop(name);
      auto prods =  get_producers(name, prg);
      if (prods.size() == 0 && contains(name, "glb")) {
        cout << "\tkernel <" << lp->name << "> is the glb loading kernel." << endl;
        cout << "\tname<" << name << endl;
        glb_load_latency = std::max(sched.total_latency(lp), glb_load_latency);
      }
    }
    cout << "Find GLB load latency = " << glb_load_latency << endl;
  }
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Push kernel <" << lp->name << "> into delay adjusting queue." << endl;
    cout << "II: " << sched.II(lp) << endl;
    cout << "TP: " << (lp)->trip_count() << endl;
    for (auto prod:  get_producers(name, prg))
        cout << "\tprod: " << prod << endl;
    //This only works for the schedule without pipeline should change into total latency
    //coarse_pipeline_II[name] = sched.II(lp) * lp->trip_count();
    coarse_pipeline_II[name] = sched.total_latency(lp);
    sched.op_offset_within_parent[lp] = 0;
  }
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Adjusting delay of " << lp->name << endl;
    cout << "II: " << sched.II(lp) << endl;
    int max_delay = 0;
    for (string prod: get_producers(name, prg)){
        op* prod_op = prg.find_loop(prod);
        max_delay = max(coarse_pipeline_II.at(prod)
                + sched.op_offset_within_parent.at(prod_op), max_delay);
    }
    //FIXME: Hack for glb latency sync nothing can start before glb transfer
    if (glb_sync) {
      if (!contains(name, "glb")) {
        max_delay = max(glb_load_latency, max_delay);
      }
    }

    sched.op_offset_within_parent.at(lp) = max_delay;
    cout << "final delay of " << lp->name <<
        ": \n\t"<< max_delay << endl;
  }
}

void adjust_outer_delays_sequentially_cgpl(schedule_info& sched, prog& prg) {
  cout << "Adjusting delays of " << prg.name << "After vectorization" << endl;
  int d = 0;
  map<string, int> coarse_pipeline_II;
  //op* coarse_pipeline_loop = find_coarse_grained_pipeline_loop(prg.root, prg);
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Push kernel <" << lp->name << "> into delay adjusting queue." << endl;
    cout << "II: " << sched.II(lp) << endl;
    cout << "TP: " << (lp)->trip_count() << endl;
    for (auto prod:  get_producers(name, prg))
        cout << "\tprod: " << prod << endl;
    auto lower_ops = lp->descendants();
    int cgpl_offset = 0;
    for (op* coarse_pipeline_loop: cgpl_lps){
      if(elem(coarse_pipeline_loop, lower_ops)){
        for(auto child: coarse_pipeline_loop->children) {
          int delay = map_find(child, sched.op_offset_within_parent);
          cgpl_offset = max(cgpl_offset, delay);
          cout << "Child: " << child->name << "has delay: " << delay << endl;
        }
      }
    }
    cout << "final initial delay of KERNEL [" << name << "] : " << cgpl_offset << endl;
    //This only works for the schedule without pipeline should change into total latency
    coarse_pipeline_II[name] = sched.II(lp) * lp->trip_count() + cgpl_offset;
    cout << "coarse pipeline outer latency: " << coarse_pipeline_II.at(name) << endl;
    sched.op_offset_within_parent[lp] = 0;
  }
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Adjusting delay of " << lp->name << endl;
    cout << "II: " << sched.II(lp) << endl;
    int max_delay = 0;
    for (string prod: get_producers(name, prg)){
        op* prod_op = prg.find_loop(prod);
        max_delay = max(coarse_pipeline_II.at(prod)
                + sched.op_offset_within_parent.at(prod_op), max_delay);
    }

    sched.op_offset_within_parent.at(lp) = max_delay;
    cout << "final delay of " << lp->name <<
        ": \n\t"<< max_delay << endl;
  }
}

void relax_delays_rate_matched(CodegenOptions& options, schedule_info& sched, prog& prg) {
  cout << "Adjusting delays of " << prg.name << endl;
  map<string, int> delay_relaxation;
  int fetch_width = options.mem_hierarchy.at("mem").fetch_width;
  if (fetch_width == 1)
      return;
  auto start_times = its(op_times_map(sched, prg), prg.whole_iteration_domain());
  auto start_times_map = get_maps_in_map(start_times);
  auto domains = prg.domains();
  for (auto name : topologically_sort_kernels(prg)) {
    delay_relaxation[name] = 0;
    auto lp = prg.find_loop(name);
    auto cons_op_vec = lp->all_ops();
    int delay_max = 0;
    cout << "Adjusting delay of " << lp->name << endl;
    auto kernel_read_map = read_at(lp->name, prg);
    //chances are that a op does consume any buffer
    if (!kernel_read_map) {
      continue;
    }
    cout << "read map: " << str(kernel_read_map) << endl;
    string dsa_writer;
    for (auto cons_op: cons_op_vec) {
      for(auto prod: get_producers(name, prg)){
        auto prod_loop = prg.find_loop(prod);
        auto kernel_write_map = written_at(prod_loop->name, prg);
        auto write_maps = get_maps_in_map(kernel_write_map);
        cout << "write map: " << str(kernel_write_map) << endl;
        for (auto prod_op: prod_loop->all_ops()) {
          auto prod_op_name = prod_op->name;
          auto cons_op_name = cons_op->name;
          auto prod_dom = domains.at(prod_op);
          auto cons_dom = domains.at(cons_op);
          auto prod_sched = (start_times_map.at(prod_op->name));
          auto cons_sched = (start_times_map.at(cons_op->name));

          //auto dd = dependence_distance_singleton(kernel_write_map, kernel_read_map, start_times);
          //Get the dependency distance set
          auto dds = dependence_distance_set(kernel_write_map, kernel_read_map, start_times);
          bool need_relax = false;
          if (empty(dds)) {
            //The read op and write op does have data dependence
            continue;
          } else {
            auto ddc = to_set(dds);
            //All constant dependency distance can be optimized into shift registers
            if(!all_const(ddc)) {
              int min_dd = to_int(lexminval(ddc));
              int max_dd = to_int(lexmaxval(ddc));
              cout << tab(2) << "Min DD: " << min_dd << endl
                << tab(2) << "Max DD: " << max_dd << endl;
              int prod_ii = sched.II(prod_op->parent);
              cout << "\t\top " << prod_op_name << " has ii: " << prod_ii << endl;
              if (min_dd < prod_ii * fetch_width * 2)
                need_relax = true;
            }
          }
          if (contains(pick(prod_op->buffers_written()), "clkwrk_dsa")) {
            dsa_writer = prod;
          }

          cout << tab(2) << "Producers: " << prod_op_name << endl;
          cout << tab(2) << "sched: " << str(prod_sched) << endl;

          cout << tab(2) << "Consumers: " << cons_op_name << endl;
          cout << tab(2) << "sched: " << str(cons_sched) << endl;

          int cons_start_time = to_int(lexminval(range(its(cons_sched, cons_dom))));
          int prod_start_time = to_int(lexminval(range(its(prod_sched, prod_dom))));

          bool equal_start_time = (cons_start_time == prod_start_time);
          bool prod_need_index = pick(cons_op_vec)->index_variables_needed_by_compute.size();
          int offset = 0;
          if (need_relax) {
              //change into current op ii
              int prod_ii = sched.II(prod_op->parent);
              int cons_ii = sched.II(cons_op->parent);
              //Relaxation recipe input/output
              offset = std::max(cons_ii, prod_ii) * fetch_width * 2;
          } else if (equal_start_time && prod_need_index && (cons_start_time < 3)) {
              offset = 3 - cons_start_time;
          }
          //get the max delay relaxation from all producer,
          //topographical sort can have close area, AKA all connected
          if (delay_relaxation.count(prod))
            delay_max = max(delay_max, delay_relaxation.at(prod) + offset);
        } // for each producer op
      } //for each producer kernel
    } //for each consumer op
    delay_relaxation.at(name) = delay_max;

    //For dsa writer kernel add the delay
    //Since topological sort may put the init kernel in beginning
    if (!dsa_writer.empty()) {
      sched.op_offset_within_parent[prg.find_loop(dsa_writer)] += delay_max;
    }

    sched.op_offset_within_parent[lp] += delay_max;
    cout  << "Kernel <" << name << "> has Delay slack: " << delay_max << endl;
    cout  << "Offset with in parent: " << sched.op_offset_within_parent.at(lp) << endl;
  } //for each kernel in topographical order
}

void asap_input_iis(schedule_info& sched, prog& prg) {

    //Looks for buffer all reading location is constant localtion
    //lower the ii to be one
    std::set<string> config_buffers;
    for (auto b : all_buffers(prg)) {
        if (prg.is_boundary(b)) {
            continue;
        }
        bool all_write_from_offchip = true;
        for (auto op_in : find_writers(b, prg)) {
            bool all_read_offchip = true;
            for (auto rdbuf : op_in->buffers_read()) {
                if (!prg.is_boundary(rdbuf)) {
                    all_read_offchip = false;
                    break;
                }
            }
            if (!all_read_offchip) {
                all_write_from_offchip = false;
                break;
            }

        }
        if (all_write_from_offchip) {
            config_buffers.insert(b);
        }
    }
    //FIXME: fix this hack
    std::set<string> filter_buffers;
    for ( auto b : config_buffers ) {
        cout << tab(2) << "Find buffers need to be rewritten: " << b << endl;
        if (contains(b, "hw_filter")) {
            filter_buffers.insert(b);
        }
    }
    cout << "\nFilter buffers...\n" << endl;
    for (auto b : filter_buffers) {
        cout << tab(2) << "Left: " << b << endl;
        for (auto op: find_writers(b, prg)) {
            auto write_rep = op;
            vector<string> loop_vars = surrounding_vars(write_rep, prg);
            for (auto l_var: loop_vars) {
                cout << tab(2) << "loop index var: " << l_var << endl;
            }
            assert(loop_vars.size() >= 1);
            int ii = 1;
            for (int it = loop_vars.size() - 1; it > 0; it --) {
                string loop_name = loop_vars.at(it);
                cout << "loop name: " << loop_name << endl;
                cout << "original delay within parent: " <<
                    sched.op_offset_within_parent[prg.find_loop(loop_name)] << endl;
                sched.op_offset_within_parent[prg.find_loop(loop_name)] = 0;
                sched.loop_iis[loop_name] = ii;
                ii *= prg.find_loop(loop_name)->trip_count() + 1;
            }
        //    op->pretty_print();
        //    cout << "\tOP delay: " << sched.op_offset_within_parent[op] << endl;

        }
    }


}

void break_up_multi_channel_outputs(prog& prg) {
  std::set<string> to_erase;
  for (auto out : prg.outs) {
    std::set<op*> writers = find_writers(out, prg);
    if (writers.size() > 1) {
      for (auto wr : writers) {
        string replacement = prg.un(out + "_clkwrk_");
        wr->replace_writes_to(out, replacement);
        prg.outs.insert(replacement);
        prg.buffer_port_widths[replacement] = prg.buffer_port_width(out);
      }
      to_erase.insert(out);
    }
  }
  for (auto e : to_erase) {
    prg.outs.erase(e);
  }
}

void break_up_multi_channel_inputs(prog& prg) {
  std::set<string> to_erase;
  for (auto in : prg.ins) {
    std::set<op*> readers = find_readers(in, prg);
    if (readers.size() > 1) {
      for (auto rd : readers) {
        string replacement = prg.un(in + "_clkwrk_");
        rd->replace_reads_from(in, replacement);
        prg.ins.insert(replacement);
        prg.buffer_port_widths[replacement] = prg.buffer_port_width(in);
      }
      to_erase.insert(in);
    }
  }
  for (auto e : to_erase) {
    prg.ins.erase(e);
  }
}

void adjust_schedule_forward(schedule_info& sched, prog& prg, int offset = 1) {
  assert(all_ops_scheduled(sched, prg));
  //cout << "schedule: " << str(op_start_times_map(sched, prg)) << endl;;
  //cout << "iteration domain: " << str(op_start_times_domain(prg)) << endl;;

  auto start_times = its(op_start_times_map(sched, prg), op_start_times_domain(prg));
  cout << "Start times..." << endl;
  cout << str(start_times) << endl;
  auto ranges = range(start_times);
  auto range_set = to_set(ranges);
  int min = to_int(lexminval(range_set));
  cout << tab(1) << "pre adjustment min: " << str(lexmin(ranges)) << endl;

  // Just to be safe we start the cycle after reset
  min = min - offset;

  if (min <= 0) {
    for (auto k : get_kernels(prg)) {
      auto loop = prg.find_loop(k);
      sched.op_offset_within_parent[loop] = map_find(loop, sched.op_offset_within_parent) - min;
    }
  }

}

void pad_to_single_depth(prog& prg) {
  bool single_depth = all_loop_nests_same_depth(prg);
  int max_depth = max_loop_depth(prg);


  if (!single_depth) {
    for (auto c : prg.root->children) {
      assert(c->is_loop());
    }

    map<string, vector<int> > pad_indexes;
    for (auto k : get_kernels(prg)) {
      auto lp = prg.find_loop(k);
      for (auto rep : lp->descendant_ops()) {
        int depth_m = loop_depth(prg.find_loop(k));
        vector<int> inds;
        inds.push_back(0);
        for (int p = 0; p < max_depth - depth_m; p++) {
          inds.push_back(-1);
        }
        for (int d = 1; d < depth_m + 1; d++) {
          inds.push_back(d);
        }

        pad_indexes[rep->name] = inds;
      }
    }
    cout << "Pad inds..." << endl;
    for (auto p : pad_indexes) {
      cout << tab(1) << p.first << ": " << comma_list(p.second) << endl;
    }
    insert_pad_loops(prg, pad_indexes);
  }
  prg.pretty_print();
  single_depth = all_loop_nests_same_depth(prg);
  assert(single_depth);

}

void assign_to_least_used_resource(op* op, schedule_info& sched) {
  sched.resource_assignment[op] = {map_find(op, sched.resource_requirements), 0};
}

vector<int> garnet_fuse_ii_level(prog& prg) {
  assert(is_rate_matchable(prg));
  //auto rvars = reduce_vars(prg);
  //bool perfect = all_perfect_loop_nests(prg);
  //if (rvars.size() == 0 &&
      //perfect) {
    prg.pretty_print();
    bool single_depth = all_loop_nests_same_depth(prg);
    int max_depth = max_loop_depth(prg);


    if (!single_depth) {
      map<string, vector<int> > pad_indexes;
      for (auto k : get_kernels(prg)) {
        auto lp = prg.find_loop(k);
        for (auto rep : lp->descendant_ops()) {
          int depth_m = loop_depth(prg.find_loop(k));
          vector<int> inds;
          inds.push_back(0);
          for (int p = 0; p < max_depth - depth_m; p++) {
            inds.push_back(-1);
          }
          for (int d = 1; d < depth_m + 1; d++) {
            inds.push_back(d);
          }

          pad_indexes[rep->name] = inds;
        }
      }
      cout << "Pad inds..." << endl;
      for (auto p : pad_indexes) {
        cout << tab(1) << p.first << ": " << comma_list(p.second) << endl;
      }
      insert_pad_loops(prg, pad_indexes);
    }
    prg.pretty_print();
    single_depth = all_loop_nests_same_depth(prg);
    assert(single_depth);

    prg.pretty_print();
    cout << prg.name << " is a stencil pipeline" << endl;
    //assert(false);
    auto valid = prg.validity_deps();
    auto dom = prg.whole_iteration_domain();
    umap* clksched_map = clockwork_schedule_umap(dom, valid, cpy(valid));
    cout << "Clockwork schedule..." << endl;
    for (auto m : get_maps(clksched_map)) {
      cout << tab(1) << str(m) << endl;
    }
    cout << "Domain..." << endl;
    for (auto d : get_sets(dom)) {
      cout << tab(1) << str(d) << endl;
    }
    uset* sbounds = range(its(clksched_map, dom));
    cout << "bounds..." << str(sbounds) << endl;
    auto bsets = get_sets(sbounds);
    assert(bsets.size() == 1);

    auto bset = pick(bsets);
    //assert(false);
    vector<pair<int, int> > bounds;
    vector<int> lengths;
    for (int d = 0; d < num_dims(bset); d++) {
      auto pr = project_all_but(bset, d);
      int lmin = to_int(lexminval(pr));
      int lmax = to_int(lexmaxval(pr));
      bounds.push_back({lmin, lmax});
      lengths.push_back(lmax - lmin + 1);
    }

    // Reorder so that root is level 0
    reverse(lengths);
    lengths.push_back(1);
    reverse(bounds);

    vector<int> fused_level_iis;
    fused_level_iis.resize(lengths.size());
    fused_level_iis[fused_level_iis.size() - 1] = 1;
    for (int l = fused_level_iis.size() - 2; l >= 0; l--) {
      fused_level_iis[l] = fused_level_iis[l + 1] * lengths.at(l + 1);
    }

    cout << "lengths" << endl;
    for (auto l : lengths) {
      cout << l << endl;
    }

    fused_level_iis.pop_back();

    cout << "Fused iis" << endl;
    for (auto i : fused_level_iis) {
      cout << tab(1) << i << endl;
    }
    return fused_level_iis;
}

void sanity_check_hw_schedule(schedule_info& sched, prog& prg);
void pad_to_single_depth(schedule_info& sched, op* root, prog& prg);

////Return boolean indicate if this is a perfect loop nest from CGPL
//bool coarse_grained_pipeline_optimization(schedule_info& sched, op* node) {
//  /*
//   *Rewrite the coarse grained pipeline loop optimization
//   Walk on the graph,
//   1. if this is a coarse grained loop,
//      a. use the most compute intensive stage to be it's II
//      b. adjust the latency sequentially
//   2. if this is a perfect loop
//      a. adjust the latency using the traditional method
//    TODO: add a loop perfection optimization
//   */
//}
//
void update_coarse_grained_loop_iis(schedule_info& sched, op* cgpl) {

    cout << "Found coarse pipeline loop:" << cgpl->name << " with childreen..." << endl;
    int max_time = INT_MIN;
    op* most_compute_intensive_stage = nullptr;
    for (auto op : cgpl->children) {
      op->pretty_print();
      cout << tab(1) << "Completion time: " << sched.total_latency(op) << endl;
      cout << tab(1) << "Offset         : " << sched.offset_in_parent(op) << endl;
      cout << endl;
      if (sched.total_latency(op) > max_time) {
        max_time = sched.total_latency(op);
        most_compute_intensive_stage = op;
      }
    }
    assert(most_compute_intensive_stage != nullptr);

    cout << "Most compute intensive stage: " << most_compute_intensive_stage->name << endl;
    cout << tab(1) << "Current II        : " << sched.II(cgpl) << endl;
    sched.loop_iis[cgpl->name] =
      max(sched.total_latency(most_compute_intensive_stage), 1);
    cout << tab(1) << "Adjusting II to   : " << sched.II(cgpl) << endl;
}

void coarse_grained_pipeline_optimization(schedule_info& sched, prog& prg) {

  vector<op*> cgpls;
  //Find the cgpl in post order from AST leaves to root
  find_coarse_grained_pipeline_loops(prg.root, cgpls, prg);
  for (auto cgpl: cgpls) {
    if (cgpl!= nullptr && cgpl->name != "root") {
      update_coarse_grained_loop_iis(sched, cgpl);
      tighten_iis(sched, prg);
    }
  }
}

void adjust_coarse_grained_loop_iis(schedule_info& sched, prog & prg) {
  //fix me need to take a look
  op* coarse_pipeline_loop = find_coarse_grained_pipeline_loop(prg.root, prg);
  if (coarse_pipeline_loop != nullptr &&
      coarse_pipeline_loop->name != "root") {
    cout << "Found coarse pipeline loop:" << coarse_pipeline_loop->name << " with childreen..." << endl;
    int max_time = INT_MIN;
    op* most_compute_intensive_stage = nullptr;
    for (auto op : coarse_pipeline_loop->children) {
      op->pretty_print();
      cout << tab(1) << "Completion time: " << sched.total_latency(op) << endl;
      cout << tab(1) << "Offset         : " << sched.offset_in_parent(op) << endl;
      cout << endl;
      if (sched.total_latency(op) > max_time) {
        max_time = sched.total_latency(op);
        most_compute_intensive_stage = op;
      }
    }
    assert(most_compute_intensive_stage != nullptr);

    cout << "Most compute intensive stage: " << most_compute_intensive_stage->name << endl;
    cout << tab(1) << "Current II        : " << sched.II(coarse_pipeline_loop) << endl;
    sched.loop_iis[coarse_pipeline_loop->name] =
      max(sched.total_latency(most_compute_intensive_stage), 1);
    cout << tab(1) << "Adjusting II to   : " << sched.II(coarse_pipeline_loop) << endl;
  }
}

void sanity_check_iis_for_vectorization(schedule_info& sched, prog& prg, int fetch_width) {
    auto inner_loop = get_inner_loops(prg);
    for (auto lp : prg.all_loops()) {
        if (!elem(lp, inner_loop)) {
            assert(sched.II(lp) % fetch_width == 0);
        }
    }
}

void dump_resnet_latency(CodegenOptions& options, schedule_info& sched, op* root, prog& prg, ofstream& out, bool loop_perfection) {

  if (loop_perfection) {
    ::loop_perfection(prg);
    cout << "Finish loop perfection!" << endl;
  }

  prg.pretty_print();
  /*
   * old method for ISCA deadline*/
  asap_inner_loops_schedule(sched, root, prg,
          options.mem_hierarchy.at("mem").fetch_width);
  //sequential_schedule(sched, root, prg);

  adjust_inner_iis(sched, prg);
  tighten_iis(sched, prg);


  //only adjust coarse grained ii while optimize double buffer
  if (options.fallback_schedule == ASPLOS_SCHEDULE) {
    adjust_coarse_grained_loop_iis(sched, prg);
    adjust_coarse_grained_loop_delays_sequentially(sched, prg);
    tighten_coarse_grained_iis(sched, prg);
    //adjust_outer_delays_sequentially_cgpl(sched, prg);
    adjust_outer_delays_sequentially(sched, prg);
  } else if(options.fallback_schedule == VANILLA_DB_SCHEDULE) {
    coarse_grained_pipeline_optimization(sched, prg);
    adjust_coarse_grained_loop_delays_sequentially_without_opt(sched, prg);
    adjust_outer_delays_sequentially(sched, prg);

  } else if(options.fallback_schedule == ISCA_SCHEDULE) {
    coarse_grained_pipeline_optimization(sched, prg);
    adjust_coarse_grained_loop_delays_sequentially_without_opt(sched, prg);
    align_glb_load_start_cycle(sched, prg);
    tighten_coarse_grained_iis(sched, prg);
    adjust_outer_delays_sequentially(sched, prg);


  } else if (options.fallback_schedule == SEQUENTIAL_SCHEDULE){
    //adjust_outer_delays(sched, prg);
    adjust_outer_delays_sequentially(sched, prg);
  }

  dump_DNN_delays(sched, prg, out);

  auto op_sched = op_start_times_map(sched, prg);
  cout << "\tFinal schedule : " << str(op_sched)  << endl;

  adjust_schedule_forward(sched, prg, 0);
  sanity_check_hw_schedule(sched, prg);;
  return;
}


void garnet_single_port_ram_schedule(CodegenOptions& options, schedule_info& sched, op* root, prog& prg) {
    //FIXME: remove this hack for fft
  if (contains(prg.name, "fft")) {
    //An hack on the fft schedule
    sequential_schedule(sched, root, prg);
    return;
  } else if (is_rate_matchable(prg) || contains(prg.name, "nlmeans")) {
    prg.pretty_print();

    loop_split(prg);
    prg.sanity_check();
    //TODO: need another function to choose between pad bottom level or top level
    //pad_bottom_level_ops_with_loops(prg);
    pad_to_single_depth(sched, root, prg);

    prg.pretty_print();
    cout << prg.name << " is a stencil pipeline" << endl;
    //assert(false);
    auto valid = prg.validity_deps();
    auto dom = prg.whole_iteration_domain();
    umap* clksched_map = clockwork_schedule_umap(dom, valid, cpy(valid));
    cout << "Clockwork schedule..." << endl;
    for (auto m : get_maps(clksched_map)) {
      cout << tab(1) << str(m) << endl;
    }
    cout << "Domain..." << endl;
    for (auto d : get_sets(dom)) {
      cout << tab(1) << str(d) << endl;
    }
    uset* sbounds = range(its(clksched_map, dom));
    cout << "bounds..." << str(sbounds) << endl;
    auto bsets = get_sets(sbounds);
    assert(bsets.size() == 1);

    auto bset = pick(bsets);
    //assert(false);
    vector<pair<int, int> > bounds;
    vector<int> lengths;
    for (int d = 0; d < num_dims(bset); d++) {
      auto pr = project_all_but(bset, d);
      int lmin = to_int(lexminval(pr));
      int lmax = to_int(lexmaxval(pr));
      bounds.push_back({lmin, lmax});
      lengths.push_back(lmax - lmin + 1);
    }

    // Reorder so that root is level 0
    reverse(lengths);
    lengths.push_back(1);
    reverse(bounds);

    vector<int> fused_level_iis;
    fused_level_iis.resize(lengths.size());
    fused_level_iis[fused_level_iis.size() - 1] = 1;
    for (int l = fused_level_iis.size() - 2; l >= 0; l--) {
      fused_level_iis[l] = fused_level_iis[l + 1] * lengths.at(l + 1);
    }

    cout << "lengths" << endl;
    for (auto l : lengths) {
      cout << l << endl;
    }

    fused_level_iis.pop_back();

    cout << "Fused iis" << endl;
    for (auto i : fused_level_iis) {
      cout << tab(1) << i << endl;
    }

    auto cs = clockwork_schedule(dom, valid, cpy(valid));
    auto levels = get_variable_levels(prg);
    cout << "Original Loop iis" << endl;
    for (auto op : prg.all_ops()) {
      vector<string> surrounding = surrounding_vars(op, prg);
      for (auto var : surrounding) {
        int level = map_find(var, levels);
        auto container = prg.find_loop(var);
        cout << op->name << endl;
        int qfactor = to_int(get_coeff(map_find(op->name, cs).at(level), 0));
        int delay = to_int(int_const_coeff(map_find(op->name, cs).at(level)));
        cout << tab(1) << var << " q: " << qfactor << ", d = " << delay << endl;
        sched.loop_iis[var] = qfactor*fused_level_iis.at(level);
        sched.op_offset_within_parent[container] = delay*fused_level_iis.at(level);
        //sched.instance_latencies[container] = 1;
        cout << tab(2) << "ii = " << sched.II(container) << endl;
      }
    }
    //int total_latency = 0;
    //for (auto op : inner_ops(prg)) {
    //    cout << "inner ops: " << op->name << ", total latency: "<< total_latency << endl;
    //  sched.op_offset_within_parent[op] = total_latency;
    //  //sched.instance_latencies[op] = op_latency(op, sched);
    //  //total_latency += op_latency(op, sched) + 2;
    //  total_latency += op_latency(op, sched);
    //}

    vector<op*> scheduled;
    for (auto op : inner_ops(prg)) {
      cout << "inner ops: " << op->name << endl;
      auto read = op->buffers_read();
      int offset = 0;
      std::vector<::op*> init_ops;
      for (auto other : scheduled) {
        if (intersection(other->buffers_written(), read).size() > 0) {
          offset = max(offset, sched.op_offset_within_parent[other] + op_latency(other, sched));
          if (contains(pick(other->buffers_written()), "clkwrk_dsa")) {
              //This is the op which need forcing to have the same offset
              init_ops.push_back(other);
          }
        }
      }
      sched.op_offset_within_parent[op] = offset;
      for (auto init_op: init_ops) {
        assert(sched.op_offset_within_parent[init_op] <= offset);
        sched.op_offset_within_parent[init_op] = offset;
        cout << "force inner op: " << init_op->name << ", has same offset as update: " << offset << endl;
      }
      cout << "inner ops: " << op->name << ", offset: "<< offset << endl;
      //sched.op_offset_within_parent[op] = total_latency;
      //total_latency += op_latency(op, sched);
      scheduled.push_back(op);
    }
    //auto init_op_sched = op_start_times_map(sched, prg);
    //cout << "init sched: " << str(init_op_sched)  << endl;
    //for (auto it: sched.op_offset_within_parent) {
    //    cout << "\t" << it.first->name << ": " << it.second << endl;
    //}
    //assert(false);

    auto op_sched = op_start_times_map(sched, prg);
    cout << "orginal schedule before relax: " << str(op_sched)  << endl;
    adjust_schedule_forward(sched, prg, 0);

    //Add delay for identity stream
    relax_delays_rate_matched(options, sched, prg);

    //Make input as fast as possible
    asap_input_iis(sched, prg);
    op_sched = op_start_times_map(sched, prg);
    cout << "Final schedule after relax: " << str(op_sched)  << endl;
    op_sched = op_end_times_map(sched, prg);
    cout << "Final end schedule after relax: " << str(op_sched)  << endl;
    sanity_check_hw_schedule(sched, prg);
    return;
  } else if (contains(prg.name, "split")) {
    sequential_schedule(sched, root, prg);
    auto op_sched = op_start_times_map(sched, prg);
    cout << "\tFinal schedule : " << str(op_sched)  << endl;
    sanity_check_hw_schedule(sched, prg);
    return;
  }

  prg.pretty_print();
  cout << prg.name << " is not a stencil" << endl;
  //cout << tab(1) << "Perfect: " << perfect << endl;
  //cout << tab(1) << "# rvars: " << rvars.size() << endl;
  //for (auto rv : rvars) {
    //cout << tab(2) << rv << endl;
  //}
  //assert(false);

  do {
    options.rtl_options.double_buffer_optimization = options.fallback_schedule < 3;
    /*
     * old method for ISCA deadline*/
    asap_inner_loops_schedule(sched, root, prg,
            options.mem_hierarchy.at("mem").fetch_width);
    //sequential_schedule(sched, root, prg);

    adjust_inner_iis(sched, prg);
    tighten_iis(sched, prg);

    //only adjust coarse grained ii while optimize double buffer
    if (options.fallback_schedule == ASPLOS_SCHEDULE) {
      adjust_coarse_grained_loop_iis(sched, prg);
      adjust_coarse_grained_loop_delays_sequentially(sched, prg);
      tighten_coarse_grained_iis(sched, prg);
      //adjust_outer_delays_sequentially_cgpl(sched, prg);
      adjust_outer_delays_sequentially(sched, prg);
    } else if(options.fallback_schedule == VANILLA_DB_SCHEDULE) {
      coarse_grained_pipeline_optimization(sched, prg);
      adjust_coarse_grained_loop_delays_sequentially_without_opt(sched, prg);
      adjust_outer_delays_sequentially(sched, prg);

    } else if(options.fallback_schedule == ISCA_SCHEDULE) {
      coarse_grained_pipeline_optimization(sched, prg);
      adjust_coarse_grained_loop_delays_sequentially_without_opt(sched, prg);
      align_glb_load_start_cycle(sched, prg);
      tighten_coarse_grained_iis(sched, prg);
      adjust_outer_delays_sequentially(sched, prg);
      //int glb_load_latency = find_glb_load_latency(sched, prg);
      //adjust_outer_delays_exhaustively(sched, prg, glb_load_latency);

    } else if (options.fallback_schedule == SEQUENTIAL_SCHEDULE){
      //adjust_outer_delays(sched, prg);
      adjust_outer_delays_sequentially(sched, prg);
    } else {
      cout << "No schedule works..." << endl;
      assert(false);
    }
    //change to the fallback schedule
    options.fallback_schedule =  DNNScheduleAlgorithm(options.fallback_schedule + 1);
    cout << " Fall back schedule No. "  << options.fallback_schedule << endl;
  } while (!no_violated_buf_write_port_assignments(options, sched, prg));
  //dump_DNN_delays(sched, prg);

  auto op_sched = op_start_times_map(sched, prg);
  cout << "\tFinal schedule : " << str(op_sched)  << endl;
  assert(no_violated_buf_write_port_assignments(options, sched, prg));

  adjust_schedule_forward(sched, prg, 0);
  sanity_check_hw_schedule(sched, prg);
  return;
}
void pad_to_single_depth(schedule_info& sched, op* root, prog& prg) {
  bool single_depth = all_loop_nests_same_depth(prg);
  int max_depth = max_loop_depth(prg);
  assert(max_depth >= 1);

  if (!single_depth) {
    pad_top_level_ops_with_loops(prg);
    //vector<op*> old_children = prg.root->children;
    //prg.root->children = {};
    //for (auto c : old_children) {
      //if (c->is_loop()) {
        //prg.root->children.push_back(c);
      //} else {
        //op* lp = prg.root->add_loop(prg.un("pad_wrapper"), 0, 1);
        //for (int d = 1; d < max_depth - 1; d++) {
          //lp = lp->add_loop(prg.un("pad_wrapper"), 0, 1);
        //}
        //lp->children.push_back(c);
        //c->parent = lp;
      //}
    //}
    //prg.pretty_print();
    //assert(false);

    //First pass to collect all the deepest loops loop bound
    vector<int> depth_record(max_depth - 1, 0);
    int div_factor = 0;
    for (auto k : get_kernels(prg)) {
      auto lp = prg.find_loop(k);
      for (auto rep : lp->descendant_ops()) {
        int depth_m = loop_depth(prg.find_loop(k));
        if (depth_m == max_depth - 1) {
          auto vec = loop_depth_vector(lp);
          for (int  i = 0; i < max_depth - 1; i++ ) {
            depth_record.at(i) += vec.at(i);
          }
          div_factor ++;
          cout << " op: " << rep->name << endl;
          cout << tab(2) << loop_depth_vector(lp) << endl;
        }
      }
    }
    for (auto & it: depth_record) {
        it /= div_factor;
    }
    cout << "Final depth vec: " << depth_record << endl;

    //next pass to get all the other loops' pad level
    map<string, vector<int> > pad_indexes;
    for (auto k : get_kernels(prg)) {
      auto lp = prg.find_loop(k);
      for (auto rep : lp->descendant_ops()) {
        int depth_m = loop_depth(prg.find_loop(k));
        if (depth_m < max_depth - 1) {
          auto vec = loop_depth_vector(lp);
          vector<int> inds = get_alignment_array(depth_record, vec);
          pad_indexes[rep->name] = inds;
        } else {
          vector<int> inds;
          inds.push_back(0);
          for (int d = 1; d < depth_m + 1; d++) {
            inds.push_back(d);
          }
          pad_indexes[rep->name] = inds;
        }

        //Pad the inner loop
        //for (int p = 0; p < max_depth - depth_m - 1; p++) {
        //  inds.push_back(-1);
        //}

      }
    }
    cout << "Pad inds..." << endl;
    for (auto p : pad_indexes) {
      cout << tab(1) << p.first << ": " << comma_list(p.second) << endl;
    }
    insert_pad_loops(prg, pad_indexes);

  }

  prg.pretty_print();
  single_depth = all_loop_nests_same_depth(prg);
  assert(single_depth);
}

void cycle_accurate_clockwork_schedule(schedule_info& sched, op* root, prog& prg) {
  prg.pretty_print();
  //assert(false);

  pad_to_single_depth(sched, root, prg);

  auto valid = prg.validity_deps();
  auto dom = prg.whole_iteration_domain();
  umap* clksched_map = clockwork_schedule_umap(dom, valid, cpy(valid));
  uset* sbounds = range(its(clksched_map, dom));
  auto bsets = get_sets(sbounds);
  assert(bsets.size() == 1);

  auto bset = pick(bsets);
  vector<int> lengths;
  for (int d = 0; d < num_dims(bset); d++) {
    auto pr = project_all_but(bset, d);
    int lmin = to_int(lexminval(pr));
    int lmax = to_int(lexmaxval(pr));
    lengths.push_back(lmax - lmin + 1);
  }

  // Reorder so that root is level 0
  reverse(lengths);
  lengths.push_back(1);

  vector<int> fused_level_iis;
  fused_level_iis.resize(lengths.size());
  fused_level_iis[fused_level_iis.size() - 1] = 1;
  for (int l = fused_level_iis.size() - 2; l >= 0; l--) {
    fused_level_iis[l] = fused_level_iis[l + 1] * lengths.at(l + 1);
  }

  fused_level_iis.pop_back();

  auto cs = clockwork_schedule(dom, valid, cpy(valid));
  for (auto s : get_sets(dom)) {
    assert(contains_key(name(s), cs));
  }
  for (auto op : prg.all_ops()) {
    assert(contains_key(op->name, cs));
  }
  auto levels = get_variable_levels(prg);
  cout << "Domain..." << endl;
  auto ops = prg.all_ops();
  for (auto s : get_sets(dom)) {
    cout << tab(1) << str(s) << endl;
    bool found = false;
    for (auto op : ops) {
      if (op->name == name(s)) {
        found = true;
        break;
      }
    }
    assert(found);
  }
  for (auto op : ops) {
    bool found = false;
    for (auto s : get_sets(dom)) {
      if (op->name == name(s)) {
        found = true;
        break;
      }
    }
    assert(found);
  }

  prg.pretty_print();
  for (auto op : prg.all_ops()) {
    vector<string> surrounding = surrounding_vars(op, prg);
    for (auto var : surrounding) {

      int level = map_find(var, levels);
      auto container = prg.find_loop(var);

      assert(contains_key(op->name, cs));

      int qfactor = to_int(get_coeff(map_find(op->name, cs).at(level), 0));
      int delay = to_int(int_const_coeff(map_find(op->name, cs).at(level)));
      sched.loop_iis[var] = qfactor*fused_level_iis.at(level);
      sched.op_offset_within_parent[container] = delay*fused_level_iis.at(level);
      //sched.op_offset_within_parent[container] = (delay + 2)*fused_level_iis.at(level);
    }
  }

  int total_latency = 0;
  vector<op*> scheduled;
  for (auto op : inner_ops(prg)) {
    cout << "inner ops: " << op->name << endl;
    auto read = op->buffers_read();
    int offset = 0;
    for (auto other : scheduled) {
      if (intersection(other->buffers_written(), read).size() > 0) {
        offset = max(offset, sched.op_offset_within_parent[other] + op_latency(other, sched));
      }
    }
    sched.op_offset_within_parent[op] = offset;
    //sched.op_offset_within_parent[op] = total_latency;
    //total_latency += op_latency(op, sched);
    scheduled.push_back(op);
  }

  // Compute the innermost fused pipeline layout
  //int total_latency = 0;
  //for (auto op : inner_ops(prg)) {
    //cout << "inner ops: " << op->name << endl;
    //sched.op_offset_within_parent[op] = total_latency;
    //total_latency += op_latency(op, sched);
  //}

  //assert(no_violated_cycle_accurate_dependencies(sched, prg));
}

void coarse_pipeline_schedule(schedule_info& sched, op* root, prog& prg) {
  prg.pretty_print();
  cout << prg.name << " is not a rate matchable pipeline... searching for outer loop parallelism" << endl;

  //sequential_schedule(sched, root, prg);
  asap_inner_loops_schedule(sched, root, prg, 1);
  cout << "Computed initial sequential schedule" << endl;
  sanity_check_iis(sched);


  adjust_inner_iis(sched, prg);
  sanity_check_iis(sched);
  tighten_iis(sched, prg);
  sanity_check_iis(sched);
  adjust_coarse_grained_loop_iis(sched, prg);

  /*
  op* coarse_pipeline_loop = find_coarse_grained_pipeline_loop(prg.root);
  if (coarse_pipeline_loop != nullptr &&
      coarse_pipeline_loop->name != "root") {
    cout << "Found coarse pipeline loop:" << coarse_pipeline_loop->name << " with childreen..." << endl;
    int max_time = INT_MIN;
    op* most_compute_intensive_stage = nullptr;
    for (auto op : coarse_pipeline_loop->children) {
      op->pretty_print();
      cout << tab(1) << "Completion time: " << sched.total_latency(op) << endl;
      cout << tab(1) << "Offset         : " << sched.offset_in_parent(op) << endl;
      cout << endl;
      if (sched.total_latency(op) > max_time) {
        max_time = sched.total_latency(op);
        most_compute_intensive_stage = op;
      }
    }
    assert(most_compute_intensive_stage != nullptr);

    cout << "Most compute intensive stage: " << most_compute_intensive_stage->name << endl;
    cout << tab(1) << "Current II        : " << sched.II(coarse_pipeline_loop) << endl;
    sched.loop_iis[coarse_pipeline_loop->name] =
      max(sched.total_latency(most_compute_intensive_stage), 1);
  }*/

  cout << "Adjusting outer pipeline delays" << endl;
  sanity_check_iis(sched);

  adjust_outer_pipeline_delays(sched, prg);
  //adjust_coarse_grained_loop_delays_sequentially(sched, prg);
  //tighten_coarse_grained_iis(sched, prg);

  cout << "Done Adjusting outer pipeline delays" << endl;
  sanity_check_iis(sched);

}

void garnet_dual_port_ram_schedule(schedule_info& sched, op* root, prog& prg) {

  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      assert(contains_key(op, sched.resource_requirements));
      assign_to_least_used_resource(op, sched);
    }
  }

  op* pl =
    find_coarse_grained_pipeline_loop(prg.root);
  if (pl->name != "root") {
    coarse_pipeline_schedule(sched, root, prg);
  } else {
    if (is_rate_matchable(prg)) {
      cycle_accurate_clockwork_schedule(sched, root, prg);
    } else {
      std::set<int> buffer_dims;
      for (auto b : all_buffers(prg)) {
        buffer_dims.insert(logical_dimension(b, prg));
      }

      //TODO fix this scheduler
      if (buffer_dims.size() > 1) {
        coarse_pipeline_schedule(sched, root, prg);
      } else {
        rate_matched_schedule(sched, root, prg, pick(buffer_dims));
      }
    }
  }

  sanity_check_iis(sched);
  adjust_schedule_forward(sched, prg, 1);
  sanity_check_iis(sched);
}

schedule_info garnet_schedule_info(CodegenOptions& options, prog& prg, bool use_metamapper=false, string dse_compute_filename="") {
  schedule_info sched;
  sched.use_metamapper = use_metamapper;
  sched.dse_compute_filename = dse_compute_filename;

  if (use_metamapper) {
    json kernel_latencies;
    std::ifstream kernel_latencies_file(prg.name + "_compute_kernel_latencies.json", std::ifstream::binary);
    kernel_latencies_file >> kernel_latencies;

    for (auto op : prg.all_ops()) {
      if (op->func != "") {
        sched.resource_requirements[op] = op->func;
      }
      cout << op->func << endl;
      if (kernel_latencies[op->func] == NULL || kernel_latencies[op->func] == "null") {
        sched.compute_unit_latencies[op->func] = 0;
      } else {
        sched.compute_unit_latencies[op->func] = kernel_latencies[op->func];
        cout << "KERNEL LATENCY " <<  op->func << " : " << kernel_latencies[op->func] << endl;
      }


    for (auto b: op->buffers_written()) {
      //assign a write
      sched.assign_memory_write_resource(options, op, b);
    }


      for (auto b : op->buffers_referenced()) {
        if (!prg.is_boundary(b)) {
          sched.buffer_load_latencies[b] = buffer_load_latency(options);
          sched.buffer_store_latencies[b] = buffer_store_latency(options);
        } else {
          sched.buffer_load_latencies[b] = 0;
          sched.buffer_store_latencies[b] = 0;
        }
      auto pmap = prg.producer_map(b);
      cout << "\tBuffer <" << b << "> \n\tproducer map: "<< str(pmap)
          << "\n\tcapacity: " << logical_capacity(b, prg) << endl <<
          "\thierarchy level: " << options.get_hierarchy_level(logical_capacity(b, prg)) << endl;
      sched.buf2level[b] = options.get_hierarchy_level(logical_capacity(b, prg));

      }
    }
    cout << sched.compute_unit_latencies << endl;
  } else {

  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      sched.resource_requirements[op] = op->func;
    }

    if (op->func != "") {
      sched.compute_unit_latencies[op->func] = op->latency;
      //sched.op_compute_unit_latencies[op->name] = 0;
    } else {
      //sched.op_compute_unit_latencies[op->name] = 0;
    }

    for (auto b: op->buffers_written()) {
      //assign a write
      sched.assign_memory_write_resource(options, op, b);
    }

    for (auto b : op->buffers_referenced()) {
      if (!prg.is_boundary(b)) {
        sched.buffer_load_latencies[b] = buffer_load_latency(options);
        sched.buffer_store_latencies[b] = buffer_store_latency(options);
      } else {
        sched.buffer_load_latencies[b] = 0;
        sched.buffer_store_latencies[b] = 0;
      }
      auto pmap = prg.producer_map(b);
      cout << "\tBuffer <" << b << "> \n\tproducer map: "<< str(pmap)
          << "\n\tcapacity: " << logical_capacity(b, prg) << endl <<
          "\thierarchy level: " << options.get_hierarchy_level(logical_capacity(b, prg)) << endl;
      sched.buf2level[b] = options.get_hierarchy_level(logical_capacity(b, prg));
    }
  }
  }
  cout << sched.compute_unit_latencies << endl;

  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      if (options.rtl_options.use_pipelined_compute_units) {
        sched.op_compute_unit_names[op->name] = op->func + "_pipelined";
      } else {
        sched.op_compute_unit_names[op->name] = op->func;
      }
    }
  }

#ifdef COREIR
  pipeline_compute_units(prg, sched);
#endif
  return sched;
}


CodegenOptions garnet_codegen_single_port_with_addrgen_options(prog& prg, string dir) {
  CodegenOptions options;
  options.rtl_options.target_tile = TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN;
  options.conditional_merge = true;
  options.fallback_schedule = ISCA_SCHEDULE;
  options.merge_threshold = 10;
  options.iis = {1};
  options.rtl_options.max_inpt = 2;
  options.rtl_options.max_outpt = 2;
  //all_unbanked(prg, options);

  //coreIR codegen options
  options.rtl_options.use_prebuilt_memory = true;
  options.rtl_options.use_external_controllers = false;
  options.rtl_options.double_buffer_optimization = true;
  options.inline_vectorization = true;
  options.pass_through_valid= true;
  options.dir = dir + "/" + prg.name + "/";

  if (!is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}

CodegenOptions garnet_codegen_dual_port_with_addrgen_options(prog& prg, string dir) {
  CodegenOptions options;
  options.rtl_options.target_tile = TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN;
  options.conditional_merge = true;
  options.fallback_schedule = ISCA_SCHEDULE;
  options.merge_threshold = 10;
  options.iis = {1};
  options.rtl_options.max_inpt = 2;
  options.rtl_options.max_outpt = 2;
  //all_unbanked(prg, options);

  //coreIR codegen options
  options.rtl_options.use_prebuilt_memory = true;
  options.rtl_options.use_external_controllers = false;
  options.rtl_options.double_buffer_optimization = true;
  options.inline_vectorization = true;
  options.pass_through_valid= true;
  options.dir = dir + "/" + prg.name + "/";

  if (!is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}

CodegenOptions garnet_baseline_codegen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN;

  if (is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_CYCLE_DELAY;
  } else {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}


CodegenOptions garnet_codegen_dual_port_with_addrgen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN;
  all_unbanked(prg, options);

  if (is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_CYCLE_DELAY;
  } else {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}

CodegenOptions generic_SRAM_codegen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_GENERIC_SRAM;
  all_unbanked(prg, options);

  if (is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_CYCLE_DELAY;
  } else {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}

CodegenOptions FPGA_BRAM_codegen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_BRAM;
  all_unbanked(prg, options);

  if (is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_CYCLE_DELAY;
  } else {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}

CodegenOptions CGRA_M1_codegen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_M1;
  options.debug_options.traceWave = true;
  //all_unbanked(prg, options);
  all_exhaustive_banked(prg, options);
  return options;
}

CodegenOptions CGRA_M3_codegen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_M3;
  all_unbanked(prg, options);

  return options;
}

CodegenOptions garnet_codegen_options(prog& prg) {
  CodegenOptions options;
  options.rtl_options.use_external_controllers = true;
  options.rtl_options.target_tile =
    TARGET_TILE_PLATONIC;
  all_unbanked(prg, options);

  if (is_rate_matchable(prg)) {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_CYCLE_DELAY;
  } else {
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_LINEAR;
  }

  return options;
}

bool all_operations_assigned_to_resources(schedule_info& sched, prog& prg) {
  for (auto op : prg.all_ops()) {
    if (!contains_key(op, sched.resource_assignment)) {
      return false;
    }
  }
  return true;
}

// bool is_cst(isl_multi_aff* diff) {
//   for (auto aff : get_affs(diff)) {
//     if (!isl_aff_is_cst(aff)) {
//       return false;
//     }
//     release(aff);
//   }
//   return true;
// }

void sanity_check_hw_schedule(schedule_info& sched, prog& prg) {
  assert(all_ops_scheduled(sched, prg));
  //assert(all_operations_assigned_to_resources(sched, prg));
  assert(no_violated_resource_assignments(sched, prg));
  assert(no_violated_cycle_accurate_dependencies(sched, prg));
  //assert(schedule_bounds_fit_controller_bitwidth(16, sched, prg));
}

void compile_cycle_accurate_hw(CodegenOptions& options, schedule_info& sched, prog& prg) {
  normalize_bounds(prg);

  garnet_dual_port_ram_schedule(sched, prg.root, prg);

  auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());

  cout << "final schedule: " << str(hw_sched) << endl;
  sanity_check_hw_schedule(sched, prg);

  auto buffers = build_buffers(prg, hw_sched);

#ifdef COREIR

  generate_coreir(options,
    buffers,
    prg,
    hw_sched,
    sched);
  generate_verilator_tb(options, prg, hw_sched, buffers);
  generate_vivado_rtl_tb(options, prg, hw_sched, buffers);
  generate_deepak_power_flow_rtl_tb(options, prg, hw_sched, buffers);

#endif
}

void compile_for_generic_SRAM_mem(prog& prg) {
  auto options = generic_SRAM_codegen_options(prg);
  schedule_info sched = garnet_schedule_info(options, prg);
  compile_cycle_accurate_hw(options, sched, prg);
}

void compile_for_CGRA_M1_mem(prog& prg) {
  auto options = CGRA_M1_codegen_options(prg);
  schedule_info sched = garnet_schedule_info(options, prg);
  compile_cycle_accurate_hw(options, sched, prg);
}

void compile_for_CGRA_M3_mem(prog& prg) {
  auto options = CGRA_M3_codegen_options(prg);
  schedule_info sched = garnet_schedule_info(options, prg);
  compile_cycle_accurate_hw(options, sched, prg);
}

void compile_for_FPGA_BRAM_mem(prog& prg) {
  auto options = FPGA_BRAM_codegen_options(prg);
  options.rtl_options.use_pipelined_compute_units = true;
  //options.rtl_options.global_signals.synchronous_reset = true;
  schedule_info sched = garnet_schedule_info(options, prg);
  compile_cycle_accurate_hw(options, sched, prg);
}

void compile_for_garnet_platonic_mem(prog& prg) {
  auto options = garnet_codegen_options(prg);
  //options.rtl_options.use_pipelined_compute_units = true;
  schedule_info sched = garnet_schedule_info(options, prg);
  compile_cycle_accurate_hw(options, sched, prg);
}

void compile_for_garnet_dual_port_mem(prog& prg) {
  auto options = garnet_codegen_dual_port_with_addrgen_options(prg);
  schedule_info sched = garnet_schedule_info(options, prg);
  compile_cycle_accurate_hw(options, sched, prg);
}

void generate_smt_stream_for_garnet_single_port_mem(prog& prg) {

  //make sure the loop bound and address is positive
  normalize_bounds(prg);
  normalize_address_offsets(prg);
  prg.sanity_check();
  prg.pretty_print();


  //optimized schedule
  cmd("mkdir -p aha_garnet_smt/" + prg.name);

  //auto iis = garnet_fuse_ii_level(prg);
  //auto buffers_opt = build_buffers(prg, clockwork_schedule(prg));

  CodegenOptions options = garnet_codegen_single_port_with_addrgen_options(prg, "aha_garnet_smt");
  options.add_memory_hierarchy("mem");
  options.add_memory_hierarchy("glb");
  options.emit_smt_stream = true;
  schedule_info sched = garnet_schedule_info(options, prg);
  garnet_single_port_ram_schedule(options, sched, prg.root, prg);
  auto sched_map = op_times_map(sched, prg);
  auto hw_sched = its(sched_map,
          prg.whole_iteration_domain());
  cout << "result schedule: " << str(hw_sched) << endl;
  auto buffers_opt = build_buffers(prg, hw_sched);
  //for (auto b: buffers_opt) {
  //    cout << "create shift register for " << b.first << endl;

  //  //compare out2in
  //  auto shift_registered_outputs = determine_shift_reg_map(prg, b.second, sched);
  //  //compare out2out
  //  auto o2o = determine_output_shift_reg_map(prg, b.second, sched);
  //  cout << o2o.size() << endl;
  //  for (auto it: shift_registered_outputs) {
  //    cout << it.first << " -> " << it.second.first << ", depth = " << it.second.second << endl;
  //  }
  //}
  ////auto sched = global_schedule_from_buffers(buffers_opt);

  for (auto& b : buffers_opt) {
    cout << "\tGenerate bank for buffer: " << b.first << endl << b.second << endl;
    if (b.second.num_in_ports() == 0 || b.second.num_out_ports() == 0)
        continue;
    if (is_rate_matchable(prg)) {
      b.second.generate_banks_and_merge(options);
      b.second.port_group2bank(options);

    } else {

      auto partition = embarassing_partition(b.second);
      assert(partition.has_value());
      cout << tab(1) << "Found partition: " << endl;
      std::set<int> partition_dim = partition.get_value();
      vector<int> cyclic_partition_factor;
      vector<int> min_addr, max_addr;
      min_addr = min_offsets_by_dimension(b.second);
      max_addr = max_offsets_by_dimension(b.second);
      for (int d = 0; d < b.second.logical_dimension(); d ++) {
          if (elem(d, partition_dim)) {
            cyclic_partition_factor.push_back(max_addr.at(d) - min_addr.at(d) + 1);
          } else {
            cyclic_partition_factor.push_back(1);
            //cyclic_partition_factor.push_back(max_addr.at(d) - min_addr.at(d) + 1);
          }
      }
      for (auto dim : partition_dim) {
          cout << tab(2) << "Partition: " << dim << endl;
      }
      cout << "number of banks = " << card(cyclic_partition_factor) << endl;
      options.banking_strategies[b.first] = {"cyclic", cyclic_partition_factor};
      b.second.generate_banks_and_merge(options);
      b.second.port_group2bank(options);
    }
  }
  generate_smt_stream(options, buffers_opt, prg);
}

void emit_mem_access_count_to_csv(string dir, CodegenOptions& options, mem_access_cnt& acc_cnt) {

    cmd("mkdir -p "+dir);
    ofstream rd(dir +"/" + "memory_read.csv");
    ofstream wr(dir +"/" + "memory_write.csv");
    cout << "\tGenerate Memory Count Collateral for : " << tab(1) << dir << endl;
    for (auto it: acc_cnt.read_cnt) {
        string buf_name = it.first;
        cout << tab(2) << "Emit Memory Access Count for Buffer: " << buf_name << endl;
        rd << buf_name << ",";
        for (auto sub_buf: it.second) {
            cout << tab(4) << "Sub buf read: " << sub_buf.first << ": " << sub_buf.second << endl;
            rd << sub_buf.first << ", " << sub_buf.second << ",";
        }
        rd << endl;

        wr << buf_name << ",";
        for (auto sub_buf: acc_cnt.write_cnt.at(buf_name)) {
            cout << tab(4) << "Sub buf write: " << sub_buf.first << ": " << sub_buf.second << endl;
            wr << sub_buf.first << ", " << sub_buf.second<< ",";
        }
        wr << endl;
    }
    rd.close();
    wr.close();
}

void compile_for_garnet_fetch2_mem(prog& prg,
        string dir,
        bool gen_smt_stream,
        bool config_gen_only,
        bool multi_level_mem,
        bool use_metamapper,
        bool energy_model) {

  //make sure the loop bound and address is positive
  normalize_bounds(prg);
  normalize_address_offsets(prg);
  //remove_div(prg);
  prg.sanity_check();
  prg.pretty_print();


  //optimized schedule
  cmd("mkdir -p " + dir + "/" + prg.name);

  CodegenOptions options = garnet_codegen_single_port_with_addrgen_options(prg, dir);
  options.add_memory_hierarchy("mem");
  options.add_memory_hierarchy("glb");
  options.mem_hierarchy.at("mem").set_config_fetch2();
  cout << options.mem_hierarchy.at("mem").fetch_width << endl;
  if (multi_level_mem)
      options.add_memory_hierarchy("regfile");
  options.emit_smt_stream = gen_smt_stream;
  options.config_gen_only = config_gen_only;
  //if (multi_sram)
  //    options.mem_tile.multi_sram_accessor = true;
  schedule_info sched = garnet_schedule_info(options, prg, use_metamapper);
  garnet_single_port_ram_schedule(options, sched, prg.root, prg);
  auto sched_map = op_times_map(sched, prg);
  auto hw_sched = its(sched_map,
          prg.whole_iteration_domain());
  cout << "result schedule: " << str(hw_sched) << endl;
  auto buffers_opt = build_buffers(prg, hw_sched);
  auto sched_max = lexmaxpt(range(hw_sched));
  cout << "Latency of application is: " << str((sched_max)) << endl;

  tag_coarse_grained_loop_to_ubuf(buffers_opt, prg);
  //FIXME: put into separate pass for power analysis
  if (energy_model) {
    mem_access_cnt mem_access;
    Mem_access_count(options, buffers_opt, mem_access, prg);
    emit_mem_access_count_to_csv(dir + "/MemCount/" + prg.name, options, mem_access);

    power_analysis_params power_params;
    power_analysis_info power_stats;
    Init_PE_energy_cost(power_params);

#ifdef COREIR
    PE_energy_cost_instance_model(power_params, power_stats, prg);
    PE_energy_cost(power_params, power_stats, prg);
#endif

  }


#ifdef COREIR
  generate_garnet_coreir(buffers_opt, prg, options, sched, use_metamapper, "");
  if (!options.config_gen_only) {
    generate_garnet_verilog_top(options, prg.name);
    generate_garnet_verilator_tb(options, prg, hw_sched, buffers_opt);
  }
#endif
}

void generate_resnet_latency_experiment(prog& prg,
        ofstream& profiling_file,
        string dir,
        bool use_metamapper) {

  //make sure the loop bound and address is positive
  normalize_bounds(prg);
  normalize_address_offsets(prg);
  //remove_div(prg);
  prg.sanity_check();
  prg.pretty_print();


  //optimized schedule
  cmd("mkdir -p " + dir + "/" + prg.name);

  //auto iis = garnet_fuse_ii_level(prg);
  //auto buffers_opt = build_buffers(prg, clockwork_schedule(prg));

  CodegenOptions options = garnet_codegen_single_port_with_addrgen_options(prg, dir);
  options.add_memory_hierarchy("mem");
  options.add_memory_hierarchy("glb");
  profiling_file << prg.name << ", ";

  schedule_info sched = garnet_schedule_info(options, prg, use_metamapper);
  dump_resnet_latency(options, sched, prg.root, prg, profiling_file, false);
  profiling_file << ", ";

  schedule_info sched_db_vanilla = garnet_schedule_info(options, prg, use_metamapper);
  options.fallback_schedule = VANILLA_DB_SCHEDULE;
  dump_resnet_latency(options, sched_db_vanilla, prg.root, prg, profiling_file, false);
  profiling_file << ", ";

  //options.fallback_schedule = ASPLOS_SCHEDULE;
  //schedule_info sched_db = garnet_schedule_info(options, prg, use_dse_compute);
  //dump_resnet_latency(options, sched_db, prg.root, prg, profiling_file, false);
  //profiling_file << ", ";

  options.fallback_schedule = ISCA_SCHEDULE;
  schedule_info sched_db_loop_perfect = garnet_schedule_info(options, prg, use_metamapper);
  dump_resnet_latency(options, sched_db_loop_perfect, prg.root, prg, profiling_file, true);
  profiling_file << endl;
}


void compile_for_garnet_dual_port_mem(prog& prg,
        string dir,
        bool gen_smt_stream,
        bool config_gen_only,
        bool multi_level_mem,
        bool use_metamapper,
        string dse_compute_filename,
        bool energy_model) {

  //make sure the loop bound and address is positive
  normalize_bounds(prg);
  normalize_address_offsets(prg);
  //remove_div(prg);
  prg.sanity_check();
  prg.pretty_print();


  //optimized schedule
  cmd("mkdir -p " + dir + "/" + prg.name);

  //auto iis = garnet_fuse_ii_level(prg);
  //auto buffers_opt = build_buffers(prg, clockwork_schedule(prg));
  CodegenOptions options = garnet_codegen_dual_port_with_addrgen_options(prg, dir);
  options.debug_options.traceWave = true;
  options.add_memory_hierarchy("mem");
  options.add_memory_hierarchy("glb");
  options.mem_hierarchy.at("mem").set_config_dp();
  if (multi_level_mem) {
    options.add_memory_hierarchy("regfile");
    options.rtl_options.double_buffer_optimization = false;
    options.fallback_schedule = SEQUENTIAL_SCHEDULE;
  }
  options.emit_smt_stream = gen_smt_stream;
  options.config_gen_only = config_gen_only;
  //if (multi_sram)
  //    options.mem_tile.multi_sram_accessor = true;

  if(options.fallback_schedule == ISCA_SCHEDULE) {
    loop_perfection(prg);
    cout << "After Loop Perfection" << endl;
    prg.pretty_print();
  }

  schedule_info sched = garnet_schedule_info(options, prg, use_metamapper);
  garnet_single_port_ram_schedule(options, sched, prg.root, prg);
  auto sched_map = op_times_map(sched, prg);
  auto hw_sched = its(sched_map,
          prg.whole_iteration_domain());
  cout << "result schedule: " << str(hw_sched) << endl;
  auto buffers_opt = build_buffers(prg, hw_sched);
  auto sched_max = lexmaxpt(range(hw_sched));
  cout << "Latency of application is: " << str((sched_max)) << endl;

  tag_coarse_grained_loop_to_ubuf(buffers_opt, prg);
  //FIXME: put into separate pass for power analysis
  if (energy_model) {
    mem_access_cnt mem_access;
    Mem_access_count(options, buffers_opt, mem_access, prg);
    emit_mem_access_count_to_csv(dir + "/MemCount/" + prg.name, options, mem_access);

    power_analysis_params power_params;
    power_analysis_info power_stats;
    Init_PE_energy_cost(power_params);

#ifdef COREIR
    PE_energy_cost_instance_model(power_params, power_stats, prg);
    PE_energy_cost(power_params, power_stats, prg);
#endif

  }

#ifdef COREIR
  generate_garnet_coreir(buffers_opt, prg, options, sched, use_metamapper, dse_compute_filename);
  if (!options.config_gen_only) {
    generate_garnet_verilog_top(options, prg.name);
    generate_garnet_verilator_tb(options, prg, hw_sched, buffers_opt);
  }
#endif
}

void compile_for_garnet_single_port_mem(prog& prg,
        string dir,
        bool gen_smt_stream,
        bool config_gen_only,
        bool multi_level_mem,
        bool use_metamapper,
        string dse_compute_filename,
        bool energy_model) {

  //make sure the loop bound and address is positive
  normalize_bounds(prg);
  normalize_address_offsets(prg);
  //remove_div(prg);
  prg.sanity_check();
  prg.pretty_print();


  //optimized schedule
  cmd("mkdir -p " + dir + "/" + prg.name);

  //auto iis = garnet_fuse_ii_level(prg);
  //auto buffers_opt = build_buffers(prg, clockwork_schedule(prg));
  CodegenOptions options = garnet_codegen_single_port_with_addrgen_options(prg, dir);
  options.debug_options.traceWave = true;
  options.add_memory_hierarchy("mem");
  options.add_memory_hierarchy("glb");
  if (multi_level_mem) {
    options.add_memory_hierarchy("regfile");
    //options.rtl_options.double_buffer_optimization = false;
    //options.fallback_schedule = SEQUENTIAL_SCHEDULE;
  }
  options.rtl_options.double_buffer_optimization = true;
  options.emit_smt_stream = gen_smt_stream;
  options.config_gen_only = config_gen_only;
  //if (multi_sram)
  //    options.mem_tile.multi_sram_accessor = true;

  if(options.fallback_schedule == ISCA_SCHEDULE) {
    loop_perfection(prg);
    cout << "After Loop Perfection" << endl;
    prg.pretty_print();
  }

  schedule_info sched = garnet_schedule_info(options, prg, use_metamapper);
  garnet_single_port_ram_schedule(options, sched, prg.root, prg);
  auto sched_map = op_times_map(sched, prg);
  auto hw_sched = its(sched_map,
          prg.whole_iteration_domain());
  cout << "result schedule: " << str(hw_sched) << endl;
  auto buffers_opt = build_buffers(prg, hw_sched);
  auto sched_max = lexmaxpt(range(hw_sched));
  cout << "Latency of application is: " << str((sched_max)) << endl;

  tag_coarse_grained_loop_to_ubuf(buffers_opt, prg);
  //FIXME: put into separate pass for power analysis
  if (energy_model) {
    mem_access_cnt mem_access;
    Mem_access_count(options, buffers_opt, mem_access, prg);
    emit_mem_access_count_to_csv(dir + "/MemCount/" + prg.name, options, mem_access);

    power_analysis_params power_params;
    power_analysis_info power_stats;
    Init_PE_energy_cost(power_params);

#ifdef COREIR
    PE_energy_cost_instance_model(power_params, power_stats, prg);
    PE_energy_cost(power_params, power_stats, prg);
#endif

  }

#ifdef COREIR
  generate_garnet_coreir(buffers_opt, prg, options, sched, use_metamapper, dse_compute_filename);
  if (!options.config_gen_only) {
    generate_garnet_verilog_top(options, prg.name);
    generate_garnet_verilator_tb(options, prg, hw_sched, buffers_opt);
  }
#endif
}

bool schedule_bounds_fit_controller_bitwidth(const int bitwidth, schedule_info& sched, prog& prg) {
  int max_val = pow(2, bitwidth);

  auto start_times =
    its(op_start_times_map(sched, prg), op_start_times_domain(prg));
  cout << endl << endl;
  cout << "start times: " << str(start_times) << endl;
  cout << endl << endl;
  for (auto s : get_maps(start_times)) {
    cout << str(s) << endl;
    auto d = range(s);
    cout << tab(1) << "Min: " << str(lexminval(d)) << endl;
    cout << tab(1) << "Max: " << str(lexmaxval(d)) << endl;
  }

  cout << endl << endl;
  for (auto s : get_sets(range(start_times))) {
    int max_dim = to_int(lexmaxval(s));
    cout << tab(1) << "max for s: " << max_dim << endl;
    if (!(max_dim < max_val)) {
      cout << tab(1) << "Error: Schedule max time of " << max_dim << " is larger than the largest controller supported value: " << max_val << endl;
    }
    assert(max_dim < max_val);

    release(s);
  }
  return true;
}

void test_schedules_single_port(vector<prog>& test_programs) {

  for (auto& prg : test_programs) {
    CodegenOptions options = garnet_codegen_single_port_with_addrgen_options(prg, "");
    options.add_memory_hierarchy("mem");
    options.mem_hierarchy.at("mem").fetch_width = 1;
    options.fallback_schedule = ISCA_SCHEDULE;
    schedule_info sched =
      garnet_schedule_info(options, prg);

    garnet_single_port_ram_schedule(options, sched, prg.root, prg);
    cout << "Checking " << prg.name << " schedule" << endl;
    prg.pretty_print();

    assert(no_violated_cycle_accurate_dependencies(sched, prg));
    auto ss = op_start_times_map(sched, prg);
    for (auto m : get_maps(ss)) {
      //cout << tab(1) << str(m) << endl;
    }
    auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());
    auto sched_max = lexmaxpt(range(hw_sched));
    cout << "APP: " << prg.name  << endl;
    cout << "\tLatency of application is: " << str((sched_max)) << endl;
  }

  //assert(false);
}


void test_schedules(vector<prog>& test_programs) {

  for (auto& prg : test_programs) {
    CodegenOptions options;
    schedule_info sched =
      garnet_schedule_info(options, prg);
    garnet_dual_port_ram_schedule(sched, prg.root, prg);
    cout << "Checking " << prg.name << " schedule" << endl;
    prg.pretty_print();

    assert(no_violated_cycle_accurate_dependencies(sched, prg));
    auto ss = op_start_times_map(sched, prg);
    for (auto m : get_maps(ss)) {
      //cout << tab(1) << str(m) << endl;
    }
  }

  //assert(false);
}

vector<prog> stencil_programs() {
  vector<prog> test_programs;
  //test_programs.push_back(rom());

  //test_programs.push_back(unsharp());

  test_programs.push_back(harris());
  test_programs.push_back(pointwise());
  test_programs.push_back(camera_pipeline());
  test_programs.push_back(gaussian());

  // Fails with dual port tile?
  test_programs.push_back(strided_conv());
  test_programs.push_back(mini_conv_halide_fixed());
  test_programs.push_back(down_sample());
  test_programs.push_back(cascade());

  test_programs.push_back(up_sample());

  // Bounds are too long. Software simulation
  // takes forever
  //test_programs.push_back(stereo());


  return test_programs;
}

vector<prog> harris_variants() {
  vector<prog> test_programs;

  // 1. At least two mapper passes fail
  // 2. Final output is wrong
  //test_programs.push_back(harris_sch1_onebuf());

  // 2. Final output is wrong,
  // 3. Schedule violates dependencies?
  //test_programs.push_back(harris_sch2_fourbuf());

  // Now: They also have an error in the ROMs
  //test_programs.push_back(harris_sch3_1pp9c());
  //test_programs.push_back(harris_sch4_1pp3c());

  // Works
  //test_programs.push_back(harris_sch5_1ppc());
  //test_programs.push_back(harris_sch6_2ppc());
  //test_programs.push_back(harris_sch7_bigtile());
  //test_programs.push_back(harris_sch8_endcim());
  test_programs.push_back(harris_sch5_1ppc());
  test_programs.push_back(harris_sch6_2ppc());
  test_programs.push_back(harris_sch7_bigtile());
  test_programs.push_back(harris_sch8_endcim());

  return test_programs;
}

vector<prog> isca_programs_m3() {
  vector<prog> test_programs;
  //test_programs.push_back(harris_sch5_1ppc());
  //test_programs.push_back(harris_sch6_2ppc());
  //test_programs.push_back(harris_sch7_bigtile());
  //test_programs.push_back(harris_sch8_endcim());
  //test_programs.back().pretty_print();

  //FIXME: not work for M1 and M3
  //test_programs.push_back(three_level_pond_rolled());

  test_programs.push_back(gaussian());
  //test_programs.push_back(cascade());
  //test_programs.push_back(down_sample());
  //test_programs.push_back(harris());
  //test_programs.push_back(camera_pipeline());
  //test_programs.push_back(unsharp());
  //test_programs.push_back(unsharp_new());
  //test_programs.push_back(mobilenet_unrolled());
  //test_programs.push_back(resnet());


  return test_programs;
}

vector<prog> isca_programs() {
  vector<prog> test_programs;
  //test_programs.push_back(harris_sch5_1ppc());
  //test_programs.push_back(harris_sch6_2ppc());
  //test_programs.push_back(harris_sch7_bigtile());
  //test_programs.push_back(harris_sch8_endcim());
  //test_programs.back().pretty_print();

  //FIXME: not work for M1 and M3
  //test_programs.push_back(three_level_pond_rolled());

  test_programs.push_back(camera_pipeline_new());
  test_programs.push_back(matmul_single());
  test_programs.push_back(camera_pipeline_2x2());
  test_programs.push_back(unsharp_large());
  test_programs.push_back(harris_color());
  test_programs.push_back(gaussian());
  //test_programs.push_back(cascade());
  //test_programs.push_back(down_sample());
  //test_programs.push_back(harris());
  //test_programs.push_back(camera_pipeline());
  test_programs.push_back(up_sample());
  //test_programs.push_back(unsharp());
  //test_programs.push_back(unsharp_new());
  //test_programs.push_back(resnet());
  test_programs.push_back(resnet88_chain());
  test_programs.push_back(mobilenet_unrolled());


  return test_programs;
}

vector<prog> all_cgra_programs() {

  vector<prog> test_programs;

  concat(test_programs, stencil_programs());
  test_programs.push_back(mobilenet_unrolled());
  test_programs.push_back(resnet());
  test_programs.push_back(conv_multi());
  test_programs.push_back(conv_layer());

  test_programs.push_back(mobilenet_small());
  test_programs.push_back(unet_conv_3_3());
  test_programs.push_back(resnet_coarse_pipeline_loop());



  concat(test_programs, harris_variants());




  // Too large to fit in 16 bit controller,
  // and not the schedule we want anyway
  //test_programs.push_back(mobilenet());
  //
  // Uses a ROM which forces the code to be too small
  //test_programs.push_back(accumulation());




  return test_programs;
}

void cpy_app_to_folder(const std::string& app_type, const std::string& prg_name) {
  cmd("mkdir -p ./coreir_apps/" + app_type + "/" + prg_name);
  //cmd("mv LakeWrapper.v ./coreir_apps/coreir_apps/" + app_type +"/" + prg_name + "/");
  cmd("mv " + prg_name + ".json ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv cgra_resource_estimation.csv ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + "_post_mapping.json ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + ".v ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + "_verilog_collateral.sv ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + "_compute.v ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv cycle_accurate_regression_result_" + prg_name + ".csv ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + "_verilog_tb.cpp ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + "_vivado_verilog_tb.sv ./coreir_apps/" + app_type + "/" + prg_name + "/");
  cmd("mv " + prg_name + "_deepak_power_flow_tb.sv ./coreir_apps/" + app_type + "/" + prg_name + "/");
}

template<typename CodegenFunction>
void test_codegen(vector<prog>& test_programs, CodegenFunction& codegen) {
  for (auto& prg : test_programs) {
    cout << "====== Running CGRA test for " << prg.name << endl;
    prg.pretty_print();
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);

    prg.pretty_print();
    prg.sanity_check();

    auto cpu = unoptimized_result(prg);

    codegen(prg);
    generate_regression_testbench(prg);

    cout << "Output name: " << prg.name << endl;
    run_verilator_tb(prg.name);
    auto verilator_res = verilator_results(prg.name);
    compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
    string app_type = "platonic_buffer";
    cpy_app_to_folder(app_type, prg.name);
  }
}

void test_platonic_codegen(vector<prog>& test_programs) {
  test_codegen(test_programs, compile_for_garnet_platonic_mem);
}

void cw_print_body(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds) {

  int ndims = pick(index_bounds).second.intervals.size();
  int next_level = level + 1;
  out << endl;
  out << "#ifdef __VIVADO_SYNTH__" << endl;
  out << "#pragma HLS pipeline II=1" << endl;
  out << "#endif // __VIVADO_SYNTH__" << endl << endl;

  vector<string> vars;
  for (int i = 0; i < ndims; i++) {
    vars.push_back("c" + str(i));
  }
  // NOTE: This is because scheduling reverses order of component variables
  //reverse(vars);

  for (auto f : op_order) {
    auto box = index_bounds.at(f);
    vector<int> rates;
    vector<int> delays;
    for (auto s : scheds.at(f)) {
      rates.push_back(s.linear_coeff_int());
      auto ct = s.const_term();
      ct.simplify();
      delays.push_back(ct.to_int());
    }

    //assert(delays.size() == vars.size() + 1);
    //assert(rates.size() == vars.size() + 1);

    //delays.pop_back();
    //reverse(delays);
    //rates.pop_back();
    //reverse(rates);

    out << tab(next_level) << "if (" << sep_list(ifconds(vars, box, rates, delays), "", "", " && ") << ") {" << endl;

    vector<string> var_exprs;

    for (int i = 0; i < vars.size(); i++) {
      var_exprs.push_back("(" + vars.at(i) + " - " + str(delays.at(i)) + ") / " + str(rates.at(i)));
    }

    out << tab(next_level + 1) << f << "(" << comma_list(var_exprs) << ");" << endl;
    out << tab(next_level) << "}" << endl << endl;
  }
}

void cw_print_loops(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds) {

  int ndims = pick(index_bounds).second.intervals.size();

  int min = whole_dom.intervals.at(level).min;
  int max = whole_dom.intervals.at(level).max;

  string ivar = "c" + str(level);
  out << tab(level) << "for (int " << ivar << " = " << min << "; " << ivar << " <= " << max << "; " << ivar << "++) {" << endl;
  int next_level = level + 1;
  if (next_level == ndims) {
    cw_print_body(level, out, op_order, whole_dom, index_bounds, scheds);
  } else {
    cw_print_loops(level + 1, out, op_order, whole_dom, index_bounds, scheds);
  }
  out << tab(level) << "}" << endl;
}

std::string cw_box_codegen(CodegenOptions& options,
    const vector<string>& op_order,
    map<string, vector<QExpr> >& scheds,
    map<string, Box>& compute_domains) {

  assert(compute_domains.size() > 0);

  ostringstream ss;
  ss << tab(1) << "// Schedules..." << endl;
  for (auto s : scheds) {
    vector<string> qstrings;
    for (auto q : s.second) {
      ostringstream qs;
      qs << q;
      qstrings.push_back(qs.str());
    }
    string schedstr = sep_list(qstrings, "[", "]", ",");

    ss << tab(2) <<  "// " << s.first << " -> " << schedstr << endl;
  }

  int ndims = pick(compute_domains).second.intervals.size();

  map<string, Box> index_bounds;
  Box whole_dom(ndims);
  for (auto f : compute_domains) {

    auto dom = f.second;
    cout << "Processing " << f.first << endl;

    cout << "Scheds..." << endl;
    for (auto f : scheds) {
      cout << tab(1) << f.first << " -> ";
      for (auto s : f.second) {
        cout << s << ", ";
      }
      cout << endl;
    }

    assert(contains_key(f.first, scheds));

    Box bounds;
    for (int d = 0; d < ndims; d++) {


      int domain_min = dom.intervals.at(d).min;
      int domain_max = dom.intervals.at(d).max;

      cout << "----------------" << endl;
      cout << "Domain " << d << " min: " << domain_min << endl;
      cout << "Domain " << d << " max: " << domain_max << endl;
      cout << endl;

      // Note: The schedule is from innermost to outermost
      int sched_min = scheds.at(f.first).at(d).const_eval_at(domain_min);
      int sched_max = scheds.at(f.first).at(d).const_eval_at(domain_max);

      cout << "Sched min: " << sched_min << endl;
      cout << "Sched max: " << sched_max << endl;

      bounds.intervals.push_back({sched_min, sched_max});
    }
    index_bounds[f.first] = bounds;
    whole_dom = unn(whole_dom, bounds);
  }

  //auto& bnds = whole_dom.intervals;
  //reverse(bnds);
  cout << "Whole domain: " << whole_dom << endl;
  //assert(false);
  cw_print_loops(0, ss, op_order, whole_dom, index_bounds, scheds);

  return ss.str();
}

void generate_fpga_clockwork_code(prog& prg) {

  if (is_rate_matchable(prg)) {
    auto valid = prg.validity_deps();
    auto dom = prg.whole_iteration_domain();
    map<string, vector<isl_aff*> > cwsched =
      clockwork_schedule(dom, valid, cpy(valid));

    cout << "Clockwork sched..." << endl;
    std::vector<op*> dft_ops = get_dft_ops(prg);
    cout << "DFT op order" << endl;
    int pos = 0;
    map<string, int> positions;
    vector<string> ops;
    for (auto op : dft_ops) {
      cout << tab(1) << op->name << endl;
      positions[op->name] = pos;
      ops.push_back(op->name);
      pos++;
    }

    map<string, vector<QExpr> > scheds;
    for (auto s : cwsched) {
      string name = s.first;
      vector<isl_aff*> vals = s.second;

      scheds[name] = {};
      int i = 0;
      for (auto v : vals) {
        QExpr rate = qexpr("d" + str(i));
        auto rate_coeff =
          qexpr(int_coeff(v, 0));
        auto delay =
          qexpr(int_const_coeff(v));

        QExpr expr =
          rate_coeff*rate + delay;
        scheds[name].push_back(expr);
        i++;
      }
    }

    cout << "Final schedule..." << endl;
    for (auto s : scheds) {
      cout << tab(1) << s.first << endl;
      for (auto v : s.second) {
        cout << tab(2) << v << endl;
      }
      cout << endl;
    }

    auto sched = qschedule_to_map_final_sort(prg.ctx, scheds, positions);
    sched = its(sched, dom);

    cout << "Optimized schedule..." << endl;
    for (auto s : get_maps(sched)) {
      cout << tab(1) << str(s) << endl;
    }

    //assert(false);
    //cout << tab(1) << ": " << str(sched) << endl << endl;
    //cout << codegen_c(sched) << endl;

    auto buffers = build_buffers(prg, sched);

    assert(prg.compute_unit_file != "");
    cout << "Compute unit file: "
      << prg.compute_unit_file << endl;
    CodegenOptions options;
    options.internal = true;
    generate_app_code(options, buffers, prg, sched);

    release(sched);
  } else {
    auto sched = prg.unoptimized_schedule();

    auto buffers = build_buffers(prg, prg.unoptimized_schedule());

    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;
    all_unbanked(prg, options);
    options.inner_bank_offset_mode =
      INNER_BANK_OFFSET_MULTILINEAR;
    generate_app_code(options, buffers, prg, sched);
  }
}

void fpga_asplos_tests() {

  //auto test_programs = stencil_programs();
  auto test_programs = {resnet88()};
  //auto test_programs = {pointwise()};
  for (auto prg : test_programs) {
    cout << "==== FPGA clockwork code for " << prg.name << endl;
    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
    pad_to_single_depth(prg);
    std::vector<string> no_opt =
      unoptimized_result(prg);

    generate_fpga_clockwork_code(prg);
    generate_regression_testbench(prg);

    std::vector<std::string> opt =
      run_regression_tb(prg);
    compare(prg.name + " ASPLOS FPGA flow", opt, no_opt);
    move_to_benchmarks_folder(prg.name);
  }
}

void cgra_flow_tests() {


  //vector<prog> bram_test_programs{pointwise(), gaussian(), harris(), resnet()};
  //vector<prog> bram_test_programs{resnet88()};
  //vector<prog> bram_test_programs{pointwise()};
  //test_codegen(bram_test_programs, compile_for_FPGA_BRAM_mem);

  //vector<prog> M3_test_programs = harris_variants();
  //vector<prog> M3_test_programs{up_sample(), resnet()};
  //vector<prog> M3_test_programs{resnet()};
  //vector<prog> M3_test_programs{gaussian()};
  //vector<prog> M3_test_programs = isca_programs_m3();
  //test_codegen(M3_test_programs, compile_for_CGRA_M3_mem);
  //assert(false);

  //vector<prog> M1_test_programs{resnet88_chain()};
  vector<prog> M1_test_programs = isca_programs();
  test_codegen(M1_test_programs, compile_for_CGRA_M1_mem);

  //auto test_programs = all_cgra_programs();
  //test_platonic_codegen(test_programs);

  //vector<prog> sram_test_programs{pointwise(), camera_pipeline(), resnet()};
  //test_codegen(sram_test_programs, compile_for_generic_SRAM_mem);

}

void dse_flow_tests() {

  vector<prog> test_programs;

  // test_programs.push_back(camera_pipeline());
  //test_programs.push_back(unsharp());
  // test_programs.push_back(gaussian());
  // test_programs.push_back(pointwise());
  // test_programs.push_back(harris());
  // test_programs.push_back(down_sample());
  // test_programs.push_back(cascade());
  test_programs.push_back(stereo());

  // Delayed incorrectly?

  // Compute units gone?
  //test_programs.push_back(rom());
  //test_programs.push_back(mini_conv_halide_fixed());
  //test_programs.push_back(strided_conv());





  test_platonic_codegen(test_programs);
  //test_schedules(test_programs);

  assert(false);
}

void dual_port_lake_test() {
    auto prg = gaussian();
    cout << "====== Running CGRA test for " << prg.name << endl;
    dsa_writers(prg);
    prg.sanity_check();
    compile_for_garnet_dual_port_mem(prg);
    assert(false);

}

void test_dual_port_latency() {

  vector<prog> test_programs;
  test_programs.push_back(gaussian());
  test_programs.push_back(harris());
  test_programs.push_back(unsharp_large());
  test_programs.push_back(camera_pipeline_2x2());
  test_programs.push_back(up_sample());
  test_programs.push_back(resnet88());
  test_programs.push_back(mobilenet_unrolled());
  test_programs.push_back(matmul_single());


  test_schedules_single_port(test_programs);
}

void full_cgra_flow_tests() {

#ifdef COREIR
  //mini_sram_garnet_test();
#endif // COREIR

  vector<prog> test_programs;
  test_programs.push_back(harris());
  test_programs.push_back(camera_pipeline_dse_1());
  test_programs.push_back(cascade());
  test_programs.push_back(pointwise());
  test_programs.push_back(camera_pipeline());
  test_programs.push_back(camera_pipeline());
  test_programs.push_back(unet_conv_3_3());

  test_programs.push_back(gaussian());
  //test_programs.push_back(mini_conv_halide_fixed());
  test_programs.push_back(halide_harris());

  test_programs.push_back(conv_layer());
  test_programs.push_back(partially_unrolled_conv());
  test_programs.push_back(accumulation());
  test_programs.push_back(up_sample());
  test_programs.push_back(strided_conv());
  test_programs.push_back(down_sample());
  test_programs.push_back(resnet());

  test_programs.push_back(unsharp());
  test_programs.push_back(conv_multi());

  test_schedules(test_programs);

  for (auto& prg : test_programs) {
    cout << "====== Running CGRA test for " << prg.name << endl;
    prg.sanity_check();

    //auto cpu = unoptimized_result(prg);
    //assert(false);

    compile_for_garnet_dual_port_mem(prg);
    generate_regression_testbench(prg);
    //auto cgra_sim = run_regression_tb(prg.name);

    cout << "Output name: " << prg.name << endl;
    //assert(false);
    //compare("cgra_" + prg.name + "_cpu_comparison", cpu, cgra_sim);
    run_verilator_tb(prg.name);
    assert(false);
    cmd("mkdir -p ./coreir_apps/raw_sram/" + prg.name);
    cmd("mv " + prg.name + ".json ./coreir_apps/raw_sram/" + prg.name + "/");
    cmd("mv " + prg.name + ".v ./coreir_apps/raw_sram/" + prg.name + "/");
    cmd("mv cycle_accurate_regression_result_" + prg.name + ".csv ./coreir_apps/raw_sram/" + prg.name + "/");
    cmd("mv " + prg.name + "_verilog_tb.cpp ./coreir_apps/raw_sram/" + prg.name + "/");
    assert(false);
  }
}

void infer_bounds_single_stage_negative_conv_test() {
  prog prg("negative_single_stage_conv_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 2, prg);

  {
    auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("in", "x - 1, y - 1");
    red->add_load("in", "x - 1, y");
    red->add_load("in", "x, y - 1");
    red->add_load("in", "x, y");
    red->add_store("down", "x, y");
    red->add_function("blur_2x2_32");
  }

  cpy("out", "down", 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  infer_bounds_and_unroll("out", {20, 20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  regression_test(prg);
}

void infer_bounds_multi_stage_negative_conv1d_test() {
  prog prg("negative_multi_stage_conv1d_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 1, prg);

  {
    auto lp = prg.add_nest("x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("in", "x + 2");
    red->add_load("in", "x + 1");
    red->add_load("in", "x");
    red->add_store("down", "x");
    red->add_function("blur_1x3_32");
  }

  {
    auto lp = prg.add_nest("x2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("down", "x2 + 2");
    red->add_load("down", "x2 + 1");
    red->add_load("down", "x2");
    red->add_store("down1", "x2");
    red->add_function("blur_1x3_32");
  }


  cpy("out", "down1", 1, prg);

  prg.pretty_print();
  prg.sanity_check();

  infer_bounds_and_unroll("out", {20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();
  sanity_check_all_reads_defined(prg);

  // Add inferred buffer size check too

  regression_test(prg);
}

void infer_bounds_three_stage_negative_conv_test() {
  prog prg("negative_three_stage_conv_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 2, prg);

  {
    auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("in", "x - 1, y - 1");
    red->add_load("in", "x - 1, y");
    red->add_load("in", "x, y - 1");
    red->add_load("in", "x, y");
    red->add_store("down", "x, y");
    red->add_function("blur_2x2_32");
  }

  {
    auto lp = prg.add_nest("y2", 0, 1, "x2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("down", "x2 - 1, y2 - 1");
    red->add_load("down", "x2 - 1, y2");
    red->add_load("down", "x2, y2 - 1");
    red->add_load("down", "x2, y2");
    red->add_store("down1", "x2, y2");
    red->add_function("blur_2x2_32");
  }


  {
    auto lp = prg.add_nest("y3", 0, 1, "x3", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("down1", "x3 - 1, y3 - 1");
    red->add_load("down1", "x3 - 1, y3");
    red->add_load("down1", "x3, y3 - 1");
    red->add_load("down1", "x3, y3");
    red->add_store("down2", "x3, y3");
    red->add_function("blur_2x2_32");
  }
  cpy("out", "down2", 2, prg);

  prg.pretty_print();
  prg.sanity_check();


  infer_bounds_and_unroll("out", {20, 20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);

  //assert(false);
}

void infer_bounds_multi_5x1_stage_negative_conv_test() {
  prog prg("negative_multi_5x1_stage_conv_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("incp", "in_oc", 1, prg);
  cpy("in", "incp", 1, prg);

  {
    auto lp = prg.add_nest("y", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int y = -2; y <= 2; y++) {
      red->add_load("in", "y + " + str(y));
    }
    red->add_store("down", "y");
    red->add_function("blur_5x1_32");
  }

  {
    auto lp = prg.add_nest("y2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int y = -2; y <= 2; y++) {
      red->add_load("down", "y2 + " + str(y));
    }
    red->add_store("down1", "y2");
    red->add_function("blur_5x1_32");
  }


  cpy("out", "down1", 1, prg);

  prg.pretty_print();
  prg.sanity_check();

  //assert(false);

  infer_bounds_and_unroll("out", {20}, 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);
  //assert(false);
}

void infer_bounds_multi_5x5_stage_negative_conv_test() {
  prog prg("negative_multi_5x5_stage_conv_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("incp", "in_oc", 2, prg);
  cpy("in", "incp", 2, prg);

  {
    auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int x = -2; x <= 2; x++) {
      for (int y = -2; y <= 2; y++) {
        red->add_load("in", "x + " + str(x), "y + " + str(y));
      }
    }
    red->add_store("down", "x, y");
    red->add_function("blur_5x5_32");
  }

  {
    auto lp = prg.add_nest("y2", 0, 1, "x2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int x = -2; x <= 2; x++) {
      for (int y = -2; y <= 2; y++) {
        red->add_load("down", "x2 + " + str(x), "y2 + " + str(y));
      }
    }
    red->add_store("down1", "x2, y2");
    red->add_function("blur_5x5_32");
  }


  cpy("out", "down1", 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  //assert(false);

  infer_bounds_and_unroll("out", {20, 20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);

  //assert(false);
}
void infer_bounds_multi_stage_negative_conv_test() {
  prog prg("negative_multi_stage_conv_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 2, prg);

  {
    auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("in", "x - 1, y - 1");
    red->add_load("in", "x - 1, y");
    red->add_load("in", "x, y - 1");
    red->add_load("in", "x, y");
    red->add_store("down", "x, y");
    red->add_function("blur_2x2_32");
  }

  {
    auto lp = prg.add_nest("y2", 0, 1, "x2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    red->add_load("down", "x2 - 1, y2 - 1");
    red->add_load("down", "x2 - 1, y2");
    red->add_load("down", "x2, y2 - 1");
    red->add_load("down", "x2, y2");
    red->add_store("down1", "x2, y2");
    red->add_function("blur_2x2_32");
  }


  cpy("out", "down1", 2, prg);

  prg.pretty_print();
  prg.sanity_check();


  infer_bounds_and_unroll("out", {50, 55}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);

  //assert(false);
}

void infer_bounds_negative_conv_test() {
  prog prg("negative_conv_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 2, prg);

  auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
  auto red = lp->add_op(prg.un("ds"));
  red->add_load("in", "x - 1, y - 1");
  red->add_load("in", "x - 1, y");
  red->add_load("in", "x, y - 1");
  red->add_load("in", "x, y");
  red->add_store("down", "x, y");
  red->add_function("blur_2x2_32");

  cpy("out", "down", 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  infer_bounds_and_unroll("out", {20, 20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();
  //assert(false);

  regression_test(prg);

}

void infer_bounds_color_downsample_test() {
  prog prg("infer_bounds_downsample");
  prg.add_input("in_oc");
  prg.add_output("out");
  cpy("in", "in_oc", 3, prg);

  auto lp = prg.add_nest("c", 0, 1, "y", 0, 1, "x", 0, 1);
  auto red = lp->add_op(prg.un("ds"));
  red->add_load("in", "2*x, 2*y, c");
  red->add_store("down", "x, y, c");

  cpy("out", "down", 3, prg);

  prg.pretty_print();
  prg.sanity_check();

  infer_bounds_and_unroll("out", {20, 20, 3}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();
  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);
}

void infer_bounds_multiple_inputs() {
  prog prg("infer_bounds_multi_input");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("incp", "in_oc", 2, prg);
  cpy("in", "incp", 2, prg);

  {
    auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int x = -2; x <= 2; x++) {
      for (int y = -2; y <= 2; y++) {
        red->add_load("in", "x + " + str(x), "y + " + str(y));
      }
    }
    red->add_store("down", "x, y");
    red->add_function("blur_5x5_32");
  }

  {
    auto lp = prg.add_nest("y2", 0, 1, "x2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int x = -2; x <= 2; x++) {
      for (int y = -2; y <= 2; y++) {
        red->add_load("in", "x2 + " + str(x), "y2 + " + str(y));
      }
    }
    red->add_store("down1", "x2, y2");
    red->add_function("blur_5x5_32");
  }

  {
    auto lp = prg.add_nest("ys", 0, 1, "xs", 0, 1);
    auto red = lp->add_op(prg.un("add"));
    red->add_load("down1", "xs, ys");
    red->add_load("down", "xs, ys");
    red->add_store("summed", "xs, ys");
    red->add_function("add");
  }


  cpy("out", "summed", 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  //assert(false);

  infer_bounds_and_unroll("out", {20, 20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);

  regression_test(prg);

  //assert(false);

}

void infer_bounds_16_stage_5x5_conv_test() {
  prog prg("conv_16_stage_5x5_test");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("incp", "in_oc", 2, prg);
  cpy("in", "incp", 2, prg);

  {
    auto lp = prg.add_nest("y", 0, 1, "x", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int x = -2; x <= 2; x++) {
      for (int y = -2; y <= 2; y++) {
        red->add_load("in", "x + " + str(x), "y + " + str(y));
      }
    }
    red->add_store("down", "x, y");
    red->add_function("blur_5x5_32");
  }

  {
    auto lp = prg.add_nest("y2", 0, 1, "x2", 0, 1);
    auto red = lp->add_op(prg.un("ds"));
    for (int x = -2; x <= 2; x++) {
      for (int y = -2; y <= 2; y++) {
        red->add_load("down", "x2 + " + str(x), "y2 + " + str(y));
      }
    }
    red->add_store("down1", "x2, y2");
    red->add_function("blur_5x5_32");
  }


  cpy("out", "down1", 2, prg);

  prg.pretty_print();
  prg.sanity_check();

  //assert(false);

  infer_bounds_and_unroll("out", {20, 20}, 4, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);

}

void raw_memtile_verilog_test() {

  int max_depth = (1 << 16) - 1;
  isl_ctx* ctx = isl_ctx_alloc();
  isl_aff* write_sched = rdaff(ctx, "{ wr[a] -> [(a)] }");
  isl_aff* write_addr = rdaff(ctx, "{ wr[a] -> [(0)] }");
  isl_set* write_dom = isl_set_read_from_str(ctx, ("{ wr[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  isl_aff* read_sched = rdaff(ctx, "{ rd[a] -> [(a)] }");
  isl_aff* read_addr = rdaff(ctx, "{ rd[a] -> [(0)] }");
  isl_set* read_dom = isl_set_read_from_str(ctx, ("{ rd[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  ofstream out("lake_verilog_tile.sv");
  component_controller write_ctrl{"sram_write", write_sched, write_addr, write_dom, 16};
  component_controller read_ctrl{"sram_read", read_sched, read_addr, read_dom, 16};
  //generate_lake_collateral("lake_verilog_tile", out, {write_ctrl, read_ctrl}, write_sched, write_addr, write_dom, read_sched, read_addr, read_dom);
  generate_lake_collateral("lake_verilog_tile", out, {write_ctrl, read_ctrl});
  out.close();

  run_verilator_on("lake_verilog_tile",
        "lake_verilog_tb.cpp",
        {"./lake_components/dualwithadd/lake_top.sv", "lake_verilog_tile.sv"});

  isl_ctx_free(ctx);
}

void raw_memtile_verilog_as_delay_test() {

  ofstream out("lake_delay_tile.sv");
  generate_lake_collateral_delay("lake_delay_tile", out, 17);
  out.close();

  run_verilator_on("lake_delay_tile",
        "lake_delay_verilog_tb.cpp",
        {"./lake_components/dualwithadd/lake_top.sv", "lake_delay_tile.sv"});

  assert(false);
}

void brighten_blur_asplos_example() {
  prog prg("brighten_blur");
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 2, prg);

  auto br = prg.add_nest("y0", 0, 1, "x0", 0, 1)->add_op("br");
  br->add_load("in", "x0, y0");
  br->add_store("brighten", "x0, y0");

  auto bl = prg.add_nest("y1", 0, 1, "x1", 0, 1)->add_op("blur");
  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      bl->add_load("brighten", "x1 + " + str(x) + ", y1 + " + str(y));
    }
  }
  bl->add_store("blurred", "x1, y1");
  cpy("out", "blurred", 2, prg);

  infer_bounds("out", {63, 63}, prg);
  prg.pretty_print();
  prg.sanity_check();

  //auto sched = its(prg.optimized_codegen(), prg.whole_iteration_domain());
  //auto buffers = build_buffers(prg, sched);

  CodegenOptions options;
  schedule_info hwsched = garnet_schedule_info(options, prg);
  garnet_dual_port_ram_schedule(hwsched, prg.root, prg);
  auto sts = op_start_times_map(hwsched, prg);
  for (auto m : get_maps(sts)) {
    cout << tab(1) << str(m) << endl;
  }
  sts = its(op_times_map(hwsched, prg), prg.whole_iteration_domain());
  auto buffers = build_buffers(prg, sts);

  //cout << "sts: " << str(sts) << endl;
  cout << "Buffers..." << endl;
  for (auto b : buffers) {
    cout << b.second << endl;
  }
  //assert(false);
}

void histogram_2d_test() {
  prog prg = histogram();
  prg.pretty_print();

  //assert(false);
}

void infer_bounds_tests() {
  infer_uneven_bounds_test();
  infer_bounds_unrolled_test();
  infer_bounds_multiple_inputs();
  infer_bounds_16_stage_5x5_conv_test();
  infer_bounds_multi_5x1_stage_negative_conv_test();
  infer_bounds_multi_5x5_stage_negative_conv_test();
  infer_bounds_multi_stage_negative_conv_test();
  //infer_bounds_color_downsample_test();
  infer_bounds_multi_stage_negative_conv1d_test();
  infer_bounds_three_stage_negative_conv_test();

  infer_bounds_single_stage_negative_conv_test();
  infer_bounds_negative_conv_test();


}

void up_to_hist_tests() {
  cout << "past upsample2d_test" << endl;
  upsample2d_test();
  upsample_stencil_2d_test();
  upsample_stencil_1d_test();
  up_unrolled_4_test();
  reduce_rows_test();
  reaccess_no_hierarchy_test();

  up_unrolled_test();
  sum_denoise_test();
  up_down_unrolled_test();
  histogram_test();

  cout << "past histogram test" << endl;
}

void up_to_id_stream_tests() {
  tricky_shift_register_reconvergence_test();
  mmul_outer_prod_test();
  grayscale_conversion_test();
  compute_unit_with_index_variables_test();
  halide_dnn_test();

  //conv_1d_bc_test();
  //print_test();
  //manual_unroll_test();
  //pyr_1d_conv_test();

  conv_1d_test();
  jacobi2d_app_test();
  downsample2d_test();
  up_stencil_down_test();
  downsample_and_blur_test();
  updown_merge_test();
  harris_unrolled_test();


  cout << "at identity_stream_coreir_test" << endl;
}

void up_to_weight_add_psef() {
  identity_stream_coreir_test();
  weight_streaming_test();

  identity_stream_through_mem_coreir_test();
  reduce_stream_coreir_test();

  us_unroll_test();
  ds_unroll_test();
  prg_unroll_test();
  lchannel_test();
  gf_test();

  halide_frontend_test();
  halide_up_sample_test();
  halide_conv_layer_3D_test();
  conv_3_3_halide_test();

  async_add_test();
  seidel2d_test();
  add_four_channels();
  weight_add_psef();
  cout << "at weight add psef" << endl;
}

void up_to_sobel_mag_y_test() {

  two_stage_psef();
  psef_multi_output_test();
  non_rate_matched_ds_test();
  histogram_2d_test();
  // Possibly failing
  conv_test();
  resnet_test();
  multi_output_app_test();
  sobel_test();
  jacobi_2d_test();
  reaccess_no_hierarchy_rolled_test();
  two_input_mag_test();
  one_input_mag_test();
  sum_float_test();
  sobel_mag_y_test();
  cout << "at sobel_mag_y_test" << endl;

}

void up_to_pyramid_test() {

  sobel_app_test();
  sobel_mag_x_test();
  heat_3d_test();
  upsample_reduce_test();
  pointwise_test();
  stencil_3d_test();
  neg_stencil_test();
  gaussian_pyramid_test();
  warp_and_upsample_test();
  unsharp_test();
  pyramid_2d_test();
  pyramid_test();

}

void up_to_register_file_test() {
  up_stencil_auto_unrolled_test();
  up_down_auto_unrolled_test();
  up_stencil_down_auto_unrolled_test();
  conv3x3_app_unrolled_test();
  conv3x3_app_test();
  conv3x3_app_unrolled_uneven_test();
  jacobi2d_app_test();
  up_stencil_test();
  blur_x_test();
  // Got past this
  llf_pyramid_test();
  llf_test();
  blur_example();
  register_file_test();

  cout << "past register file test" << endl;
}

void up_to_ram_addr_unit_test() {
  two_in_window_test();
  jacobi_2d_2_test();
  soda_blur_test();
  two_in_conv2d_test();
  sobel_16_stage_x_app_test();
  up_stencil_test();
  blur_x_test();
  dummy_app_test();
  blur_and_downsample_test();
  denoise2d_test();
  brighten_blur_asplos_example();
  sum_diffs_test();
  denoise3d_reconvergence_test();
  tricky_shift_register_reconvergence_test();
  mismatched_stencil_test();
  gaussian_pyramid_app_test("gp64x64");
  reduce_1d_test();
  reduce_2d_test();
  ram_addr_unit_test();
  cout << "past sobel_16_stage_x_app_test" << endl;

}

void misc_tests() {
  conv_2d_bc_test();
  conv_1d_rolled_test();
  synth_upsample_test();
  conv_2d_rolled_test();
  unet_conv_3_3_test();
  cyclic_banked_conv_test();
  register_file_optimization_test();
  reuse_buffered_conv_test();

  two_input_denoise_pipeline_test();
  synth_wire_test();
  synth_sr_boundary_condition_test();
  synth_lb_test();
  conv_app_rolled_reduce_test();
  up_stencil_down_unrolled_test();
  laplacian_pyramid_app_test();
  parse_denoise3d_test();
  halide_camera_pipeline_test();
  raw_memtile_verilog_test();
  raw_memtile_verilog_as_delay_test();
  adobe_meeting_apps();
  halide_cascade_test();
  mmul_outer_prod_test();
  playground();
  coreir_tests();
  cnn_test();
  lake_agg_sram_tb_config_test();
  lake_tests();
  iccad_tests();
  exposure_fusion_iccad_apps("ef_cc_10_level");

}

void generate_cpu_reference_body(const int level, ostream& out, op* op, prog& prg) {
  if (op->is_loop()) {
    out << tab(level) << "for (int " << op->name << " = 0; " << op->name << " < " << op->trip_count() << "; " << op->name << "++) {" << endl;
    for (auto child : op->children) {
      generate_cpu_reference_body(level + 1, out, child, prg);
    }
    out << tab(level) << "}" << endl;
  } else {

    vector<string> compute_inputs;
    for (auto loc : op->consume_locs_pair) {
      isl_multi_aff* write_addr = pick(read_addrs(op, loc.first, prg));
      vector<int> dims = map_find(loc.first, prg.buffer_bounds);
      vector<int> strs = strides(dims);
      //reverse(strs);
      vector<string> components;
      for (int i = 0; i < isl_multi_aff_dim(write_addr, isl_dim_set); i++) {
        components.push_back(str(strs.at(i)) + "*" + codegen_c(isl_multi_aff_get_aff(write_addr, i)));
      }
      out << tab(level) << "float " << loc.first << "_v = " << loc.first << "[" << sep_list(components, "", "", " + ") << "];" << endl;
      compute_inputs.push_back(loc.first + "_v");
    }

    assert(op->produce_locs.size() == 1);
    auto loc = pick(op->produce_locs);
    isl_multi_aff* write_addr = pick(write_addrs(op, loc.first, prg));
    vector<int> dims = map_find(loc.first, prg.buffer_bounds);
    vector<int> strs = strides(dims);
    //reverse(strs);
    vector<string> components;
    for (int i = 0; i < isl_multi_aff_dim(write_addr, isl_dim_set); i++) {
      components.push_back(str(strs.at(i)) + "*" + codegen_c(isl_multi_aff_get_aff(write_addr, i)));
    }
    out << tab(level) << loc.first << "[" << sep_list(components, "", "", " + ") << "] = " << op->func << sep_list(compute_inputs, "(", ")", ", ") << ";" << endl;
  }

}

void generate_cuda_code(prog& prg, isl_map* gpu_sched) {
  op* op = pick(prg.all_ops());
  isl_set* dom = map_find(op, prg.domains());
  cout << "domain: " << str(dom) << endl;

  isl_map* gpu_sched_bounded = its(gpu_sched, dom);

  cout << "bounded gpu schedule: " << str(gpu_sched_bounded) << endl;
  isl_set* gpu_launches = range(gpu_sched_bounded);
  cout << "gpu launches: " << str(gpu_launches) << endl;

  vector<int> k_mins = mins(gpu_launches);
  vector<int> k_maxs = maxs(gpu_launches);

  cout << "kernel min: " << k_mins.at(0) << endl;
  cout << "kernel max: " << k_maxs.at(0) << endl;

  cout << "block x min: " << k_mins.at(1) << endl;
  cout << "block x max: " << k_maxs.at(1) << endl;

  cout << "thread x min: " << k_mins.at(4) << endl;
  cout << "thread x max: " << k_maxs.at(4) << endl;

  int block_xs = k_maxs.at(1) - k_mins.at(1) + 1;
  int block_ys = k_maxs.at(2) - k_mins.at(2) + 1;
  int block_zs = k_maxs.at(3) - k_mins.at(3) + 1;

  int thread_xs = k_maxs.at(4) - k_mins.at(4) + 1;
  int thread_ys = k_maxs.at(5) - k_mins.at(5) + 1;
  int thread_zs = k_maxs.at(6) - k_mins.at(6) + 1;

  vector<int> blocks{block_xs, block_ys, block_zs};
  vector<int> threads{thread_xs, thread_ys, thread_zs};
  ofstream out(prg.name + ".cu");
  out << "#include <stdio.h>" << endl << endl;
  out << "#include <assert.h>" << endl << endl;
  out << "#include \"" << prg.compute_unit_file << "\"" << endl << endl;
  out << endl;
  out << "template<typename T>" << endl;
  out << "__host__" << endl;
  out << "__device__" << endl;
  out << "inline" << endl;
  out << "T id(const T& v) {" << endl;
  out << "  return v;" << endl;
  out << "}" << endl;

  out << endl;

  out << "// Operation logic" << endl;
  for (auto op : prg.all_ops()) {
    vector<string> arg_decls;
    for (auto b : buffer_arg_names(op, prg)) {
      arg_decls.push_back("float* " + b);
    }
    vector<string> surrounding = surrounding_vars(op, prg);
    for (int i = 0; i < (int) surrounding.size(); i++) {
      arg_decls.push_back("int " + surrounding.at(i)); //"int d" + str(i));
    }
    out << "__host__" << endl;
    out << "__device__" << endl;
    out << "inline" << endl;
    out << "void " << op->name << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;

    vector<string> compute_inputs;
    for (auto loc : op->consume_locs_pair) {
      isl_multi_aff* write_addr = pick(read_addrs(op, loc.first, prg));
      vector<int> dims = map_find(loc.first, prg.buffer_bounds);
      vector<int> strs = strides(dims);
      //reverse(strs);
      vector<string> components;
      for (int i = 0; i < isl_multi_aff_dim(write_addr, isl_dim_set); i++) {
        components.push_back(str(strs.at(i)) + "*" + codegen_c(isl_multi_aff_get_aff(write_addr, i)));
      }
      out << tab(1) << "float " << loc.first << "_v = " << loc.first << "[" << sep_list(components, "", "", " + ") << "];" << endl;
      compute_inputs.push_back(loc.first + "_v");
    }

    assert(op->produce_locs.size() == 1);
    auto loc = pick(op->produce_locs);
    isl_multi_aff* write_addr = pick(write_addrs(op, loc.first, prg));
    //out << tab(1) << "// " << str(write_addr) << endl;
    vector<int> dims = map_find(loc.first, prg.buffer_bounds);
    vector<int> strs = strides(dims);
    //reverse(strs);
    vector<string> components;
    for (int i = 0; i < isl_multi_aff_dim(write_addr, isl_dim_set); i++) {
      components.push_back(str(strs.at(i)) + "*" + codegen_c(isl_multi_aff_get_aff(write_addr, i)));
    }
    out << tab(1) << loc.first << "[" << sep_list(components, "", "", " + ") << "] = " << op->func << sep_list(compute_inputs, "(", ")", ", ") << ";" << endl;
    out << "}" << endl;
  }
  out << endl;

  vector<string> arg_decls;
  for (auto b : prg.boundary_buffers()) {
    arg_decls.push_back("float* " + b);
  }

  out << "void " << prg.name << "_cpu_reference" << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;
  generate_cpu_reference_body(1, out, prg.root, prg);
  out << "}" << endl;
  out << endl;

  out << "__global__" << endl;
  out << "void " << prg.name << "_kernel" << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;

  vector<string> conds;
  conds.push_back("threadIdx.x < " + str(thread_xs));
  conds.push_back("threadIdx.y < " + str(thread_ys));
  conds.push_back("threadIdx.z < " + str(thread_zs));
  conds.push_back("blockIdx.x < " + str(block_xs));
  conds.push_back("blockIdx.y < " + str(block_ys));
  conds.push_back("blockIdx.z < " + str(block_zs));
  out << tab(1) << "if (" << sep_list(conds, "", "", " && ") << ") {" << endl;
  isl_multi_aff* aff = get_multi_aff(inv(gpu_sched_bounded));
  // TODO: Handle loops inside the schedule
  vector<string> surrounding = surrounding_vars(op, prg);
  vector<string> args = buffer_arg_names(op, prg);
  for (int i = 0; i < (int) surrounding.size(); i++) {
    auto comp = isl_multi_aff_get_aff(aff, i);
    out << tab(2) << "// " << str(comp) << endl;
    comp = isl_aff_set_dim_id(comp, isl_dim_in, 1, id(prg.ctx, "blockIdx.x"));
    comp = isl_aff_set_dim_id(comp, isl_dim_in, 2, id(prg.ctx, "blockIdx.y"));
    comp = isl_aff_set_dim_id(comp, isl_dim_in, 3, id(prg.ctx, "blockIdx.z"));
    comp = isl_aff_set_dim_id(comp, isl_dim_in, 4, id(prg.ctx, "threadIdx.x"));
    comp = isl_aff_set_dim_id(comp, isl_dim_in, 5, id(prg.ctx, "threadIdx.y"));
    comp = isl_aff_set_dim_id(comp, isl_dim_in, 6, id(prg.ctx, "threadIdx.z"));
    out << tab(2) << "int d" << str(i) << " = " << codegen_c(comp) << ";" << endl;
    args.push_back("d" + str(i));
  }
  string args_list = sep_list(args, "", "", ", ");
  out << tab(2) << op->name << "(" << args_list << ");" << endl;
  out << tab(2) << "// " << str(aff) << endl;
  // Now: Execute all statement instances scheduled for this thread?

  auto min_instances = get_multi_aff(lexmin(inv(gpu_sched_bounded)));
  auto max_instances = get_multi_aff(lexmax(inv(gpu_sched_bounded)));
  out << tab(2) << "// " << str(min_instances) << endl;
  out << tab(2) << "// " << str(max_instances) << endl;
  out << tab(1) << "}" << endl;
  out << "}" << endl;

  out << endl;

  out << "void " << prg.name << "" << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;
  vector<string> kernel_args;
  for (auto b : prg.boundary_buffers()) {
    out << tab(1) << "float* " << b << "_cuda;" << endl;
    string buf_size = str(prg.buffer_size(b));
    out << tab(1) << "cudaMalloc(&" << b << "_cuda, sizeof(float)*" << buf_size << ");" << endl;
    kernel_args.push_back(b + "_cuda");
  }
  for (auto b : prg.ins) {
    string buf_size = str(prg.buffer_size(b));
    out << tab(1) << "cudaMemcpy(" <<
      b << "_cuda" <<
      ", " <<
      b <<
      "," <<
      "sizeof(float)*" << buf_size << ", cudaMemcpyHostToDevice);" << endl;
  }

  out << tab(1) << "dim3 blocks(" << comma_list(blocks) << ");" << endl;
  out << tab(1) << "dim3 threads(" << comma_list(threads) << ");" << endl;
  out << endl;

  out << tab(1) << "cudaEvent_t start, stop;" << endl;
  out << tab(1) << "cudaEventCreate(&start);" << endl;
  out << tab(1) << "cudaEventCreate(&stop);" << endl;
  out << tab(1) << "cudaEventRecord(start);" << endl;
  out << tab(1) << prg.name << "_kernel<<<blocks, threads>>>" << sep_list(kernel_args, "(", ")", ", ") << ";" << endl;
  out << tab(1) << "cudaEventRecord(stop);" << endl;
  out << endl;
  out << tab(1) << "cudaEventSynchronize(stop);" << endl;
  out << tab(1) << "float milliseconds = 0;" << endl;
  out << tab(1) << "cudaEventElapsedTime(&milliseconds, start, stop);" << endl;
  out << tab(1) << "printf(\"GPU Exe time (ms): %f\\n\", milliseconds);" << endl;

  out << endl;

  for (auto b : prg.outs) {
    string buf_size = str(prg.buffer_size(b));
    out << tab(1) << "cudaMemcpy(" <<
      b <<
      ", " <<
      b << "_cuda" <<
      "," <<
      "sizeof(float)*" << buf_size << ", cudaMemcpyDeviceToHost);" << endl;
  }
  for (auto b : prg.boundary_buffers()) {
    out << tab(1) << "cudaFree(" << b << "_cuda);" << endl;
  }
  out << "}" << endl;

  out << endl;

  out << "int main() {" << endl;
  {
    vector<string> args;
    vector<string> cpu_args;
    for (auto b : prg.boundary_buffers()) {
      {
        out << tab(1) << "float* " << b << ";" << endl;
        string buf_size = str(prg.buffer_size(b));
        out << tab(1) << b << " = (float*) malloc(sizeof(float)*" << buf_size << ");" << endl;
        args.push_back(b);
        if (elem(b, prg.ins)) {
          out << tab(1) << "for (int i = 0; i < " << buf_size << "; i++) {" << endl;
          out << tab(2) << b << "[i] = i;" << endl;
          out << tab(1) << "}" << endl;
        }
      }
      {
        out << tab(1) << "float* " << b << "_cpu_ref;" << endl;
        string buf_size = str(prg.buffer_size(b));
        out << tab(1) << b << "_cpu_ref = (float*) malloc(sizeof(float)*" << buf_size << ");" << endl;
        cpu_args.push_back(b + "_cpu_ref");
        if (elem(b, prg.ins)) {
          out << tab(1) << "for (int i = 0; i < " << buf_size << "; i++) {" << endl;
          out << tab(2) << b << "_cpu_ref[i] = i;" << endl;
          out << tab(1) << "}" << endl;
        }
      }
    }

    out << endl;
    out << tab(1) << prg.name << "_cpu_reference" << sep_list(cpu_args, "(", ");", ", ") << endl;
    out << tab(1) << "printf(\"Done with CPU reference\\n\");" << endl;
    out << tab(1) << prg.name << sep_list(args, "(", ");", ", ") << endl;
    out << endl;
    for (auto b : prg.boundary_buffers()) {
      string buf_size = str(prg.buffer_size(b));
      if (elem(b, prg.outs)) {
        out << tab(1) << "for (int i = 0; i < " << buf_size << "; i++) {" << endl;
        //out << tab(2) << "printf(\"" << b << "[%d] = %f\\n\", i, " << b << "[i]);" << endl;
        //out << tab(2) << "printf(\"" << b << "_cpu_ref[%d] = %f\\n\", i, " << b << "_cpu_ref[i]);" << endl;
        out << tab(2) << "assert(" << b << "[i] == " << b << "_cpu_ref[i]);" << endl;
        out << tab(1) << "}" << endl;
      }
      out << tab(1) << "free(" << b << ");" << endl;
      out << tab(1) << "free(" << b << "_cpu_ref);" << endl;
    }
  }

  out << "}" << endl;
  out.close();
}

void gpu_codegen_test() {
  prog prg("hello_gpu");
  prg.compute_unit_file = "clockwork_cuda_standard_compute_units.h";
  prg.add_input("x_dram");
  prg.add_output("y_dram");

  cpy("y_dram", "x_dram", 2, prg);
  infer_bounds("y_dram", {8, 64}, prg);

  prg.pretty_print();
  op* op = pick(prg.all_ops());
  string name = op->name;
  op->pretty_print();
  string gpu_schedule = curlies(name + "[root, x, y] -> [0, x, 0, 0, y, 0, 0]");
  cout << "GPU schedule:" << gpu_schedule << endl;
  isl_map* gpu_sched = isl_map_read_from_str(prg.ctx, gpu_schedule.c_str());
  cout << "gpu thread locs to instances: " << str(inv(gpu_sched)) << endl;
  cout << tab(1) << "# statement instances per thread: " << str(card(inv(gpu_sched))) << endl;

  generate_cuda_code(prg, gpu_sched);

  int res = cmd("nvcc -o hg hello_gpu.cu");
  assert(res == 0);
  res = cmd("./hg");
  assert(res == 0);

  assert(false);
}

void histogram1d_test() {
  prog prg = histogram1d();

  prg.pretty_print();
  //assert(false);

  assert(unoptimized_compiles(prg));
  //assert(false);
}

isl_set* bounds(const std::string& in, prog& prg) {
  vector<int> bnds = map_find(in, prg.buffer_bounds);

  vector<string> vars;
  vector<string> clauses;
  string name = in;
  for (int i = 0; i < (int) bnds.size(); i++) {
    auto v = "d" + str(i);
    vars.push_back(v);
    clauses.push_back("0 <= " + v + " < " + str(bnds.at(i)));
  }

  string srep =
    curlies(name + bracket_list(vars) + " : " + sep_list(clauses, "", "", " and "));

  return rdset(prg.ctx, srep);
}

void sanity_check_all_input_pixels_read(prog& prg) {
  for (auto in : prg.ins) {
    for (auto op : prg.all_ops()) {
      if (elem(in, op->buffers_read())) {
        cout << "Getting read map" << endl;
        auto rd = prg.read_map(op, in);
        cout << "Got read map" << endl;
        if (rd != nullptr) {
          rd = its(rd, prg.domain(op));
          isl_set* read = (range(rd));
          cout << op->name << " reads " << str(read) << endl;

          isl_set* bnds = bounds(in, prg);

          cout << in << " bounds: " << str(bnds) << endl;

          assert(empty(diff(bnds, read)));
          assert(empty(diff(read, bnds)));
        }
      }
    }
  }
}

void blurx_app_to_prog_test() {
  string out_name = "blurx";

  int cols = 32;
  int rows = 32;

  prog prg = blur_x_16(out_name).realize(out_name, cols, rows);


  prg.pretty_print();
  prg.sanity_check();
  sanity_check_all_reads_defined(prg);
  sanity_check_all_input_pixels_read(prg);

  std::vector<std::string> optimized =
    run_regression_tb(out_name + "_opt");

  //auto res = unoptimized_result(prg);

  prg.name = "prg_" + prg.name;
  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  auto res = run_regression_tb(prg);

  //compare("blurx opt vs. unopt prog: " + prg.name, opt, res);
  //assert(false);


  compare("blurx test:" + prg.name + "_cpu_comparison", res, optimized);

  //assert(false);
}

void updated_blur_static_dynamic_comparison() {
  string out_name = "ubxy_d";

  int cols = 64;
  int rows = 64;

  prog prg = blur_xy_16(out_name).realize(out_name, cols, rows);

  std::vector<std::string> optimized =
    run_regression_tb(out_name + "_opt");

  auto res = unoptimized_result(prg);

  compare(prg.name + "_cpu_comparison", res, optimized);

  //assert(false);
}

void updated_blur1_static_dynamic_comparison() {
  string prefix = "bxy2_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = blur_xy_16(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 2};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur_static_dynamic_comparison() {
  string prefix = "bxy_d";

  int cols = 1920;
  int rows = 1080;

  int unroll_factor = 1;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;
  prog prg = blur_xy_16(out_name).realize(options, out_name, cols, rows, unroll_factor);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(out_name + "_opt");

  assert(false);

}

void blur32_static_dynamic_comparison() {
  string prefix = "bxy_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = 32;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  prog prg = blur_xy_16(out_name).realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur16_static_dynamic_comparison() {
  string prefix = "bxy_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = 16;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;
  prog prg = blur_xy_16(out_name).realize(options, out_name, cols, rows, 1);
  prg.name = "bxy_d_16_opt";
  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);
  //app_dag dag = partition_application(fusion_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void jac32_static_dynamic_comparison() {
  string prefix = "jac_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = stencil_chain_stage_iccad(out_name, 15);
  prog prg = jac.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

void jac16_static_dynamic_comparison() {
  string prefix = "jac_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = stencil_chain_stage_iccad(out_name, 15);
  prog prg = jac.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

void cp32_static_dynamic_comparison() {
  string prefix = "cp";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = camera_pipeline(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void cp16_static_dynamic_comparison() {
  string prefix = "cp";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = camera_pipeline(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void cp_static_dynamic_comparison() {
  string prefix = "cp";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = camera_pipeline(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void jac_static_dynamic_comparison() {
  string prefix = "jac_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = stencil_chain_stage_iccad(out_name, 15);
  prog prg = jac.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

void sbl32_static_dynamic_comparison_larger_bounds_to_prevent_vivado_unroll_error() {
  string prefix = "sbl_dlb";

  int size = 4096;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = 32;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App sbl = sobel16(out_name);
  prog prg = sbl.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  sbl.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

void sbl32_static_dynamic_comparison() {
  string prefix = "sbl_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = 32;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App sbl = sobel16(out_name);
  prog prg = sbl.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  sbl.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void sbl16_static_dynamic_comparison_short_FIFOs() {
  string prefix = "sbl_dsd";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = 16;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App sbl = sobel16(out_name);
  prog prg = sbl.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  sbl.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void sbl16_static_dynamic_comparison() {
  string prefix = "sbl_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = 16;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App sbl = sobel16(out_name);
  prog prg = sbl.realize(options, out_name, cols, rows, 1);
  prg.name = out_name + "_opt";

  sbl.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void sbl_static_dynamic_comparison() {
  string prefix = "sbl_d";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = 1;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App sbl = sobel16(out_name);
  prog prg = sbl.realize(options, out_name, cols, rows, 1);
  sbl.generate_soda_file(out_name, throughput);
  prg.name = out_name + "_opt";

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);


  move_to_benchmarks_folder(prg.name);

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void cp16_static_dynamic_comparison_fresh_codegen() {
  string prefix = "cpfc";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = camera_pipeline(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

prog two_in_blnd(const int r, const int c);

void two_in_blnd_16pix_static_dynamic_comparison() {
  const int throughput = 16;
  const int size = 2048;

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_" + str(throughput);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);
    prg.sanity_check();

    CodegenOptions options;
    options = CodegenOptions();
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

    generate_optimized_code(options, prg);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_d_" + str(throughput);
    prg.sanity_check();

    auto fusion_groups = one_stage_per_group(prg);


    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    CodegenOptions options;
    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  assert(false);
}

void two_in_blnd_8pix_static_dynamic_comparison() {
  const int throughput = 8;
  const int size = 2048;

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_" + str(throughput);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);
    prg.sanity_check();

    CodegenOptions options;
    options = CodegenOptions();
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

    generate_optimized_code(options, prg);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_d_" + str(throughput);
    prg.sanity_check();

    auto fusion_groups = one_stage_per_group(prg);


    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    CodegenOptions options;
    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  assert(false);
}

void two_in_blnd_4pix_static_dynamic_comparison() {
  const int throughput = 4;
  const int size = 2048;

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_" + str(throughput);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);
    prg.sanity_check();

    CodegenOptions options;
    options = CodegenOptions();
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

    generate_optimized_code(options, prg);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_d_" + str(throughput);
    prg.sanity_check();

    auto fusion_groups = one_stage_per_group(prg);


    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    CodegenOptions options;
    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  assert(false);
}

void two_in_blnd_2pix_static_dynamic_comparison() {
  const int throughput = 2;
  const int size = 2048;

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_" + str(throughput);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);
    prg.sanity_check();

    CodegenOptions options;
    options = CodegenOptions();
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

    generate_optimized_code(options, prg);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_d_" + str(throughput);
    prg.sanity_check();

    auto fusion_groups = one_stage_per_group(prg);

    //app_dag dag = partition_application(fusion_groups, prg);

    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    CodegenOptions options;
    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);
    cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");
  }

  assert(false);

}

void two_in_blnd_static_dynamic_comparison() {
  {
    prog prg = two_in_blnd(2048, 2048);
    prg.sanity_check();

    auto fusion_groups = one_stage_per_group(prg);
    app_dag dag = partition_application(fusion_groups, prg);

    CodegenOptions options;
    options = CodegenOptions();
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

    generate_optimized_code(options, prg);

    move_to_benchmarks_folder(prg.name);

    assert(false);
  }

  {
    prog prg = two_in_blnd(2048, 2048);
    prg.name = prg.name + "_d";
    prg.sanity_check();

    auto fusion_groups = one_stage_per_group(prg);
    app_dag dag = partition_application(fusion_groups, prg);

    CodegenOptions options;
    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

  }

  assert(false);
}

void jac4_static_dynamic_comparison(const int throughput) {
  string prefix = "jac4";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = stencil_chain_stage_iccad(out_name, 15);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}
void cp4_static_dynamic_comparison(const int throughput) {
  string prefix = "cp4";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = camera_pipeline(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void test_sbl8_static_dynamic_comparison() {
  string prefix = "sbl8";

  int rows = 16;
  int cols = 16;

  //int unroll_factor = throughput;
  string out_name = prefix; //+ "_sd_comp"; // + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = sobel16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  vector<string> res1pix;
  vector<string> res2pix;
  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, 1, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    generate_regression_testbench(static_prg);

    res1pix = run_regression_tb(static_prg);
  }

  {
    int unroll_factor = 2;
    prog static_prg = prg.deep_copy();
    static_prg.name = static_prg.name + "_" + str(unroll_factor);
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, unroll_factor, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    generate_regression_testbench(static_prg);

    res2pix = run_regression_tb(static_prg);
  }

  compare(prg.name + "_throughput_comp", res1pix, res2pix);

}


void sbl7_static_dynamic_comparison(const int throughput) {
  string prefix = "sbl7";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = sobel16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void sbl4_static_dynamic_comparison(const int throughput) {
  string prefix = "sbl4";

  //int size = 1080;
  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  //int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = sobel16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void one_stage_blurx6_test(const int throughput) {
  string prefix = "blurx6";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_x_16_simp(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    //static_prg.pretty_print();
    //assert(false);

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();
    assert(false);

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  //{
    //prog static_prg = prg.deep_copy();
    //static_prg.name = out_name + "_opt_d32";
    //static_prg.reset_context();

    //static_prg.pretty_print();

    //auto fusion_groups = one_stage_per_group(static_prg);
    //auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    //unroll_mismatched_inner_loops(static_prg);
    //merge_basic_block_ops(static_prg);
    //infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    //assert(unoptimized_compiles(static_prg));

    //app_dag dag = partition_groups(fresh_groups, static_prg);

    //options = CodegenOptions();
    //options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    //options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    //generate_app_code(options, dag);

    //move_to_benchmarks_folder(static_prg.name);

    //string synth_dir =
      //"./soda_codes/" + static_prg.name+ "/our_code/";
    //system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  //}

  //{
    //prog static_prg = prg.deep_copy();
    //prg.reset_context();

    //static_prg.pretty_print();

    //prg.name = out_name + "_opt_dis";

    //auto fusion_groups = one_stage_per_group(prg);
    //auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    //unroll_mismatched_inner_loops(prg);
    //merge_basic_block_ops(prg);
    //infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    //assert(unoptimized_compiles(prg));

    //app_dag dag = partition_groups(fresh_groups, prg);

    //options = CodegenOptions();
    //options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    //options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    //generate_app_code(options, dag);

    //move_to_benchmarks_folder(prg.name);

    //string synth_dir =
      //"./soda_codes/" + prg.name+ "/our_code/";

    //system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  //}
  //cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur9_static_dynamic_comparison(const int throughput) {
  string prefix = "blur9";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_xy_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  //assert(false);
}


void sbl9_static_dynamic_comparison(const int throughput) {
  string prefix = "sbl9";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = sobel16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}


void cp9_static_dynamic_comparison(const int throughput) {
  string prefix = "cp9";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = camera_pipeline(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void jac9_static_dynamic_comparison(const int throughput) {
  string prefix = "jac9";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;
  options.rtl_options.hls_clock_target_Hz = 300000000;

  App app = stencil_chain_stage_iccad(out_name, 15);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void one_stage_blurx7_static_dynamic_comparison(const int throughput) {
  string prefix = "blurx7";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_x_16_simp(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void one_stage_blurx6_static_dynamic_comparison(const int throughput) {
  string prefix = "blurx6";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_x_16_simp(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}


void one_stage_blurx5_static_dynamic_comparison(const int throughput) {
  string prefix = "blurx5";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_x_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}
void pw5_static_dynamic_comparison(const int throughput) {
  string prefix = "pw5";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = pointwise2d(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur5_static_dynamic_comparison(const int throughput) {
  string prefix = "blur5";

  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_xy_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);

    static_prg.pretty_print();
    string buf = pick(static_prg.ins);
    cout << "Buf = " << buf << endl;
    vector<int> input_bounds_vs = map_find(buf, static_prg.buffer_bounds);
    cout << tab(1) << "bounds: " << comma_list(input_bounds_vs) << endl;
    vector<string> input_bounds;
    int i = 0;
    for (auto b : input_bounds_vs) {
      if (i < ((int) input_bounds_vs.size()) - 1) {
        input_bounds.push_back(str(b));
      } else {
        input_bounds.push_back("*");
      }
      i++;
    }
    app.generate_soda_file(static_prg.name, throughput, input_bounds);
    //assert(false);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur4_static_dynamic_comparison(const int throughput) {
  string prefix = "blur4";

  //int size = 1080;
  int rows = 1080;
  int cols = 1920;

  int unroll_factor = throughput;
  //int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_xy_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {cols, rows}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur3_16_static_dynamic_comparison() {
  string prefix = "blur3";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 16;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_xy_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur3_1_static_dynamic_comparison() {
  string prefix = "blur3";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_xy_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");
  }

  {
    prog static_prg = prg.deep_copy();
    static_prg.name = out_name + "_opt_d32";
    static_prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    auto fusion_groups = one_stage_per_group(static_prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, static_prg);
    unroll_mismatched_inner_loops(static_prg);
    merge_basic_block_ops(static_prg);
    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    assert(unoptimized_compiles(static_prg));

    app_dag dag = partition_groups(fresh_groups, static_prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(static_prg.name);

    string synth_dir =
      "./soda_codes/" + static_prg.name+ "/our_code/";
    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    prg.reset_context();

    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void blur3_32_static_dynamic_comparison() {
  string prefix = "blur3";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App app = blur_xy_16(out_name);
  prog prg = app.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  {
    prog static_prg = prg.deep_copy();
    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");

    prg.name = out_name + "_opt";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");

    prg.name = out_name + "_opt_d32";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 32};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }

  {
    prog static_prg = prg.deep_copy();
    infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

    static_prg.pretty_print();

    generate_optimized_code(options, static_prg);
    app.generate_soda_file(static_prg.name, throughput);

    move_to_benchmarks_folder(out_name + "_opt");

    prg.name = out_name + "_opt_dis";

    auto fusion_groups = one_stage_per_group(prg);
    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
    unroll_mismatched_inner_loops(prg);
    merge_basic_block_ops(prg);
    infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

    assert(unoptimized_compiles(prg));

    app_dag dag = partition_groups(fresh_groups, prg);

    options = CodegenOptions();
    options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
    options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 2};
    generate_app_code(options, dag);

    move_to_benchmarks_folder(prg.name);

    string synth_dir =
      "./soda_codes/" + prg.name+ "/our_code/";

    system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());
  }
  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void jac3_32_static_dynamic_comparison() {
  string prefix = "jac3";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App jac = stencil_chain_stage_iccad(out_name, 15);
  prog prg = jac.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  prog static_prg = prg.deep_copy();
  infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

  static_prg.pretty_print();

  generate_optimized_code(options, static_prg);
  jac.generate_soda_file(static_prg.name, throughput);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 2};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void jac3_2_static_dynamic_comparison() {
  string prefix = "jac3";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 2;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.debug_options.expect_all_linebuffers = true;

  App jac = stencil_chain_stage_iccad(out_name, 15);
  prog prg = jac.realize(options, out_name, cols, rows, 1);
  prepare_for_clockwork_scheduling(prg);

  prog static_prg = prg.deep_copy();
  infer_bounds_and_unroll(pick(static_prg.outs), {size, size}, throughput, static_prg);

  static_prg.pretty_print();

  generate_optimized_code(options, static_prg);
  jac.generate_soda_file(static_prg.name, throughput);

  move_to_benchmarks_folder(out_name + "_opt");

  assert(false);

  prg.name = out_name + "_opt_d";

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 2};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void updated_jac32_static_dynamic_comparison() {
  string prefix = "jac2";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 32;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.debug_options.expect_all_linebuffers = true;

  App jac = stencil_chain_stage_iccad(out_name, 15);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 2};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void updated_soda_comparison() {
  jac3_32_static_dynamic_comparison();
  jac3_2_static_dynamic_comparison();

  updated_jac32_static_dynamic_comparison();

  updated_blur1_static_dynamic_comparison();
  //updated_blur16_static_dynamic_comparison();
  //updated_blur32_static_dynamic_comparison();
}

void initial_soda_comparison() {
  cp32_static_dynamic_comparison();
  cp16_static_dynamic_comparison();
  cp_static_dynamic_comparison();

  sbl32_static_dynamic_comparison();
  sbl16_static_dynamic_comparison();
  sbl_static_dynamic_comparison();

  jac32_static_dynamic_comparison();
  jac16_static_dynamic_comparison();
  jac_static_dynamic_comparison();

  cp16_static_dynamic_comparison_fresh_codegen();


  sbl16_static_dynamic_comparison_short_FIFOs();
  sbl32_static_dynamic_comparison_larger_bounds_to_prevent_vivado_unroll_error();


  blur32_static_dynamic_comparison();
  blur16_static_dynamic_comparison();
  blur_static_dynamic_comparison();
}

void llf_init() {
  prog prg = llf_float();
  prg.name = "llf_ospg";

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  assert(false);
}

void large_pyramid_blend_pointwise_fusion() {
  prog prg("pyrblnd_pwf");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";
  prg.add_input("in");
  prg.add_output("out");

  cpy("in_on_chip", "in", 2, prg);

  const int num_pyramid_levels = 4;
  vector<string> lps = laplacian_pyramid("in_on_chip", num_pyramid_levels, prg);

  string reconstructed = reconstruct_gaussian(lps, prg);
  cpy("out", reconstructed, 2, prg);

  infer_bounds("out", {2048, 2048}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  auto fusion_groups = fuse_pointwise_stages(prg);

  cout << "# of kernels: " << get_kernels(prg).size() << endl;
  cout << "# of groups : " << fusion_groups.size() << endl;
  //assert(false);

  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  //all_unbanked(prg, ostart_pos ptions);
  //options.inner_bank_offset_mode =
    //INNER_BANK_OFFSET_MULTILINEAR;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  generate_regression_testbench(dag.prg);


  move_to_benchmarks_folder(dag.prg.name);
  assert(false);
}

void grayscale_llf_static_2pix_per_cycle() {
  const int size = 2048;
  const int throughput = 2;
  prog prg = llf_grayscale_float();
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  prg.name = prg.name + "_st";
  prg.sanity_check();

  CodegenOptions options;
  options = CodegenOptions();
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  generate_optimized_code(options, prg);

  move_to_benchmarks_folder(prg.name);

  assert(false);
}


void grayscale_llf_static() {
  prog prg = llf_grayscale_float();
  prg.name = prg.name + "_st";
  prg.sanity_check();

  CodegenOptions options;
  options = CodegenOptions();
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  generate_optimized_code(options, prg);

  move_to_benchmarks_folder(prg.name);

  assert(false);
}

void grayscale_llf_dynamic() {
  prog prg = llf_grayscale_float();
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  assert(false);
}

void sef_static_and_dynamic() {
  string prefix = "sefss";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = ef_cartoon(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 1};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

void multi_rate_dynamic_apps() {
  sef_static_and_dynamic();
  large_pyramid_blend_pointwise_fusion();
  //grayscale_llf_static_2pix_per_cycle();


  grayscale_llf_static();
  grayscale_llf_dynamic();

  llf_init();
}

void resnet88_test() {
  //prog prg = resnet88();
  prog prg = resnet();

  prg.sanity_check();

  break_up_multi_channel_inputs(prg);
  break_up_multi_channel_outputs(prg);
  dsa_writers(prg);
  pad_to_single_depth(prg);
  generate_fpga_clockwork_code(prg);

  move_to_benchmarks_folder(prg.name);
  assert(false);
}

void llf_grayscale_debugging() {
  prog prg = llf_grayscale_float(128, 128);
  prg.name = prg.name + "_st";
  prg.sanity_check();

  CodegenOptions options;
  options = CodegenOptions();
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  generate_optimized_code(options, prg);
  generate_regression_testbench(prg);

  cout << "LLF prog: " << prg.name << endl;
  assert(false);
}

prog two_in_blnd(const int r, const int c) {
  const int num_pyramid_levels = 4;

  prog prg("two_in_blnd");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("in0_oc");
  prg.add_input("in1_oc");
  prg.add_output("out");

  pointwise("in0", "llf_int_to_float", "in0_oc", 2, prg);
  pointwise("in1", "llf_int_to_float", "in1_oc", 2, prg);

  vector<string> lp0 = laplacian_pyramid("in0", num_pyramid_levels, prg);
  vector<string> lp1 = laplacian_pyramid("in1", num_pyramid_levels, prg);

  vector<string> merged_pyramid;
  for (int i = 0; i < (int) lp0.size(); i++) {
    string l0 = lp0.at(i);
    string l1 = lp1.at(i);
    string res = "merged_" + str(i);
    pointwise(res, "llf_float_average", l0, l1, 2, prg);
    merged_pyramid.push_back(res);
  }

  string values = reconstruct_gaussian(merged_pyramid, prg);

  pointwise("out", "llf_float_to_int", values, 2, prg);

  infer_bounds("out", {r, c}, prg);


  prepare_for_clockwork_scheduling(prg);

  return prg;
}

void two_input_blending_test() {

  prog prg = two_in_blnd(64, 64);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();

  CodegenOptions options;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  generate_optimized_code(options, prg);

  assert(false);
}

void pyr_blnd_non_blocking_test() {
  //prog prg = two_in_blnd(2048, 2048);
  prog prg = llf_grayscale_float(2048, 2048);
  prg.name = prg.name + "_count_fifos";
  //auto ures = unoptimized_result(prg);

  CodegenOptions options;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 0};

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);
  generate_app_code(options, dag);

  //generate_regression_testbench(prg);

  //auto ores = run_regression_tb(prg);


  //compare(prg.name + "opt comparison", ures, ores);
  //assert(false);
  move_to_benchmarks_folder(prg.name);

  assert(false);
}

void float_sharing_test() {
  prog prg("float_cpy_resource");
  prg.add_input("in");
  prg.add_output("out");

  pointwise("A", "id", "in", 2, prg);
  pointwise("Ac", "float_square", "A", 2, prg);
  pointwise("B", "id", "Ac", 2, prg);
  pointwise("Bc", "float_square", "B", 2, prg);
  pointwise("out", "id", "Bc", 2, prg);

  infer_bounds("out", {8, 8}, prg);

  prg.pretty_print();
  prg.sanity_check();

  prg.name = prg.name + "_s";
  prg.sanity_check();

  map<string, std::set<string> > fusion_groups =
  {{"lda", {"pw_math_in01"}}, {"comp", {"pw_math_A45", "pw_math_B1213", "pw_math_Bc1617"}}, {"ldb", {"pw_math_Ac89"}}};

  auto unopt_postprocessed = unoptimized_result(prg);

  app_dag dag = partition_application(fusion_groups, prg);

  //assert(false);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_NON_BLOCKING;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);
  move_to_benchmarks_folder(dag.prg.name);
  assert(false);

  generate_regression_testbench(dag.prg);
  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("resource_shared" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  assert(false);
}

// Generating high performance designs?
void resource_sharing_test() {
  //prog prg("oned_r_oc2");
  //prg.add_input("in");
  //prg.add_output("out");

  //pointwise("ina", "id", "in", 1, prg);

  //auto lo = prg.add_loop("y", 0, 1)->add_op("soc");
  //lo->add_load("ina", "y");
  //lo->add_load("ina", "y+1");
  //lo->add_load("ina", "y+2");
  //lo->add_store("so", "y");
  //lo->add_function("float_stencil_1x3");

  //auto ds = prg.add_loop("d", 0, 1)->add_op("ds");
  //ds->add_load("so", "2*d");
  //ds->add_store("sd", "d");

  //lo = prg.add_loop("y1", 0, 1)->add_op("s1");
  //lo->add_load("sd", "y1");
  //lo->add_load("sd", "y1+1");
  //lo->add_load("sd", "y1+2");
  //lo->add_store("out", "y1");
  //lo->add_function("float_stencil_1x3");

  //infer_bounds("out", {128}, prg);
  //prg.pretty_print();

  ////prog prg = two_in_blnd(64, 64);
  //auto ures = unoptimized_result(prg);

  //CodegenOptions options;
  //options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  //options.hls_loop_codegen = HLS_LOOP_CODEGEN_NON_BLOCKING;
  //generate_optimized_code(options, prg);
  //generate_regression_testbench(prg);

  //auto ores = run_regression_tb(prg);


  //compare(prg.name + "opt comparison", ures, ores);
  //move_to_benchmarks_folder(prg.name);

  //assert(false);

  ////prog prg = two_in_blnd(64, 64);

  //auto valid_deps = prg.validity_deps();
  //auto global_sched =
    //its(clockwork_schedule_umap_reversed(prg.whole_iteration_domain(), valid_deps, valid_deps),
        //prg.whole_iteration_domain());
  //cout << "Sched: " << str(global_sched) << endl;
  //resource_sharing_loop_codegen(global_sched);
  //assert(false);

  prog prg("cpy_resource2");
  prg.add_input("in");
  prg.add_output("out");

  pointwise("A", "id", "in", 2, prg);
  pointwise("Ac", "plus_one", "A", 2, prg);
  pointwise("B", "id", "Ac", 2, prg);
  pointwise("Bc", "plus_one", "B", 2, prg);
  pointwise("out", "id", "Bc", 2, prg);

  infer_bounds("out", {8, 8}, prg);

  prg.pretty_print();
  prg.sanity_check();

  prg.name = prg.name + "_s";
  prg.sanity_check();

  map<string, std::set<string> > fusion_groups =
  {{"lda", {"pw_math_in01"}}, {"comp", {"pw_math_A45", "pw_math_B1213", "pw_math_Bc1617"}}, {"ldb", {"pw_math_Ac89"}}};

  auto unopt_postprocessed = unoptimized_result(prg);

  app_dag dag = partition_application(fusion_groups, prg);

  //assert(false);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_NON_BLOCKING;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);
  move_to_benchmarks_folder(dag.prg.name);
  assert(false);

  generate_regression_testbench(dag.prg);
  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("resource_shared" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  assert(false);
}

void llf_intelligent_channels() {
  prog prg = llf_grayscale_float(2048, 2048);
  prg.name = prg.name + "_icd";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 90};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);
}
void path_sensitive_channel_sizing() {
  //prog prg = two_in_blnd(2048, 2048);
  prog prg = llf_grayscale_float(2048, 2048);
  prg.name = prg.name + "_d";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  //options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 5};
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);

  assert(false);
}

void two_in_blend_intelligent_channels() {
  prog prg = two_in_blnd(2048, 2048);
  prg.name = prg.name + "_icd";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 90};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);
}

void cp_intelligent_channels() {
  string prefix = "cp";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = camera_pipeline(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d_ic";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 10};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void sef_intelligent_channels() {
  string prefix = "sef";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = ef_cartoon(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d_ic";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 10};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);

}

void sef_250_channels() {
  string prefix = "sef";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = ef_cartoon(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_250";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void llf_250_channels(const int throughput) {
  int rows = 2048;
  int cols = rows;

  prog prg = llf_grayscale_float(cols, rows);
  prg.name = prg.name + str(throughput) + "p";

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  CodegenOptions options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);
}

void llf_2pix_250_channels() {
  int throughput = 2;
  int rows = 2048;
  int cols = rows;

  prog prg = llf_grayscale_float(cols, rows);
  prg.name = prg.name + "2p";

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {cols, rows}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  CodegenOptions options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);
}

void llf_250_channels() {
  prog prg = llf_grayscale_float(2048, 2048);
  prg.name = prg.name + "_250";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);

}

void two_in_blend_250_channels() {
  prog prg = two_in_blnd(2048, 2048);
  prg.name = prg.name + "_250";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, 250};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);

}

void llf_intelligent_channels3() {
  prog prg = llf_grayscale_float(2048, 2048);
  prg.name = prg.name + "_icd3";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 90};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);
}

void two_in_blend_intelligent_channels2() {
  prog prg = two_in_blnd(2048, 2048);
  prg.name = prg.name + "_icd2";
  prg.sanity_check();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.scheduling_algorithm = SCHEDULE_ALGORITHM_CW;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 90};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);
  cmd("cp local_laplacian_filter* ./soda_codes/" + prg.name + "/our_code/");

  assert(false);
}

void cp_intelligent_channels2() {
  string prefix = "cp";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = camera_pipeline(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d_ic2";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 10};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void sef_channels(const int unroll_factor, const int channel_depth) {
  string prefix = "sef";

  int size = 1080;
  int rows = size;
  int cols = size;

  //int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = ef_cartoon(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d_d" + str(unroll_factor);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_FIXED, channel_depth};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}
void sef_intelligent_channels2() {
  string prefix = "sef";

  int size = 1080;
  int rows = size;
  int cols = size;

  int unroll_factor = 1;
  int throughput = unroll_factor;
  string out_name = prefix + "_" + str(unroll_factor);

  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;

  App jac = ef_cartoon(out_name);
  prog prg = jac.realize(options, out_name, cols, rows, 1);

  move_to_benchmarks_folder(out_name + "_opt");

  prg.name = out_name + "_opt_d_ic2";

  jac.generate_soda_file(prg.name, throughput);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto fusion_groups = one_stage_per_group(prg);
  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  infer_bounds_and_unroll(pick(prg.outs), {size, size}, throughput, prg);

  assert(unoptimized_compiles(prg));

  app_dag dag = partition_groups(fresh_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  options.slack_matching = {SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE, 10};
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  string synth_dir =
    "./soda_codes/" + prg.name+ "/our_code/";

  system(("cp " + out_name + "_opt" + "*.h " + synth_dir).c_str());

  cout << "prg name: " << prg.name << endl;

  assert(false);
}

void scheduling_benchmarks() {
  //prog prg = two_in_blnd(2048, 2048);
  prog prg = llf_grayscale_float(2048, 2048);
  //prog prg = pointwise();
  //prog prg = harris();

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);
  prg = dag.prg;
  cout << "# of statements to schedule: " << prg.all_ops().size() << endl;

  auto um = clockwork_schedule_prog(prg);
  auto umi = prg.optimized_schedule();
  assert(false);
}

void printout_tests() {
  isl_ctx* ctx = isl_ctx_alloc();

  umap* s = isl_union_map_read_from_str(ctx, "{ P[j] -> [0, j] : 0 <= j <= 5; C[i] -> [1, i] : 0 <= i <= 2 }");
  cout << codegen_c(s) << endl;

  {
    umap* s = isl_union_map_read_from_str(ctx, "{ P[j] -> [0, j] : 0 <= j <= 5; C[i] -> [1, 2*i + 1] : 0 <= i <= 2 }");
    cout << codegen_c(s) << endl;
  }

  {
    umap* s = isl_union_map_read_from_str(ctx, "{ P[j] -> [j, 0] : 0 <= j <= 5; C[i] -> [2*i + 1, 1] : 0 <= i <= 2 }");
    cout << codegen_c(s) << endl;
  }

  isl_ctx_free(ctx);

  assert(false);
}

void application_tests() {

  printout_tests();

  float_sharing_test();

  cp9_static_dynamic_comparison(32);
  cp9_static_dynamic_comparison(16);

  sbl9_static_dynamic_comparison(32);
  sbl9_static_dynamic_comparison(1);

  blur9_static_dynamic_comparison(1);
  blur9_static_dynamic_comparison(32);

  jac9_static_dynamic_comparison(32);
  jac9_static_dynamic_comparison(1);
  cp9_static_dynamic_comparison(1);
  jac9_static_dynamic_comparison(16);
  blur9_static_dynamic_comparison(16);
  sbl9_static_dynamic_comparison(16);

  test_sbl8_static_dynamic_comparison();

  sbl7_static_dynamic_comparison(32);
  sbl7_static_dynamic_comparison(16);
  sbl7_static_dynamic_comparison(1);

  one_stage_blurx7_static_dynamic_comparison(1);
  one_stage_blurx7_static_dynamic_comparison(32);
  one_stage_blurx7_static_dynamic_comparison(16);

  one_stage_blurx7_static_dynamic_comparison(2);
  one_stage_blurx6_test(2);
  one_stage_blurx6_static_dynamic_comparison(1);
  one_stage_blurx6_static_dynamic_comparison(2);
  one_stage_blurx5_static_dynamic_comparison(2);
  pw5_static_dynamic_comparison(2);
  blur5_static_dynamic_comparison(2);

  resource_sharing_test();
  pyr_blnd_non_blocking_test();

  sef_channels(2, 500);


  blur5_static_dynamic_comparison(16);

  scheduling_benchmarks();

  path_sensitive_channel_sizing();
  llf_250_channels(8);
  llf_250_channels(4);
  llf_2pix_250_channels();

  jac4_static_dynamic_comparison(32);
  jac4_static_dynamic_comparison(16);
  jac4_static_dynamic_comparison(1);

  cp4_static_dynamic_comparison(32);
  cp4_static_dynamic_comparison(16);
  cp4_static_dynamic_comparison(1);

  sbl4_static_dynamic_comparison(32);
  sbl4_static_dynamic_comparison(16);
  sbl4_static_dynamic_comparison(1);

  blur4_static_dynamic_comparison(32);
  blur4_static_dynamic_comparison(16);
  blur4_static_dynamic_comparison(1);

  blur3_16_static_dynamic_comparison();
  blur3_1_static_dynamic_comparison();
  blur3_32_static_dynamic_comparison();

  llf_intelligent_channels3();
  two_in_blend_intelligent_channels2();
  sef_intelligent_channels2();
  cp_intelligent_channels2();


  cp_intelligent_channels();

  llf_250_channels();
  two_in_blend_250_channels();
  sef_250_channels();


  sef_intelligent_channels();
  llf_intelligent_channels();
  two_in_blend_intelligent_channels();

  two_in_blnd_16pix_static_dynamic_comparison();
  two_in_blnd_8pix_static_dynamic_comparison();
  two_in_blnd_4pix_static_dynamic_comparison();
  two_in_blnd_2pix_static_dynamic_comparison();
  two_in_blnd_static_dynamic_comparison();
  multi_rate_dynamic_apps();

  updated_soda_comparison();

  two_input_blending_test();

  initial_soda_comparison();
  llf_grayscale_debugging();

  resnet88_test();
  histogram_test();
  histogram1d_test();
  iccad_tests();

  gpu_codegen_test();

  up_to_id_stream_tests();
  up_to_ram_addr_unit_test();
  up_to_register_file_test();
  up_to_pyramid_test();
  up_to_sobel_mag_y_test();
  up_to_weight_add_psef();
  up_to_hist_tests();
  infer_bounds_tests();
}

void affine_controller_test() {
#ifdef COREIR
  isl_ctx* ctx = isl_ctx_alloc();
  isl_set* dom = isl_set_read_from_str(ctx, "{ event[i, j] : 0 <= i <= 9 and 0 <= j <= 3 }");
  isl_aff* aff = isl_aff_read_from_str(ctx, "{ event[i, j] -> [(10*i + j)] }");
  auto context = CoreIR::newContext();
  auto ac = affine_controller(context, dom, aff);

  ac->print();
  context->runPasses({"flattentypes", "flatten", "wireclocks-coreir"});

  cmd("rm -f event.json");
  saveToFile(context->getNamespace("global"), "event.json", ac);

  deleteContext(context);
  isl_ctx_free(ctx);
  //assert(false);
#endif
}

void memory_tile_tests() {
  affine_controller_test();
  conv33_test();
  conv33_large_test();
  conv45_test();
  //assert(false);
  vec_test();
  bankmerge_vec_test();
  reaccess_test();

  //new_bankmerge_tests();
  memtile_test();
  auto_vec_test();
  agg_test();

  //assert(false);
}

void multi_channel_example() {
  int cols = 1920;
  int rows = 1080;

  const int unroll_factor = 32;
  string out_name = "three_channel_" + str(unroll_factor);
  multi_channel(out_name).realize(out_name, cols, rows, unroll_factor);
  move_to_benchmarks_folder(out_name);
}

Window hblur_3(const std::string& name) {
  return Window{name, {qconst(2), qconst(2)}, {{0, 0}, {1, 0}}};
}

string as_ds(const std::string& input, App& ds) {
  string hb = input + "_hblur";

  ds.func2d(hb, "as_hblur", hblur_3(input));
  return hb;
}

vector<string> as_gauss_pyramid(const int num_levels, const string& func, App& app) {
  string last = func;
  vector<string> gauss_levels;
  gauss_levels.push_back(last);
  for (int l = 1; l < num_levels; l++) {
    string next_blur = func + "_gauss_blur_" + str(l);
    string next_out = func + "_gauss_ds_" + str(l);

    //vector<vector<int > > offsets{{1, 0}, {0, 0}};
    //Window blur_window{last, {qconst(1), qconst(1)}, offsets};
    app.func2d(next_out, "as_hblur", hblur_3(last));

    last = next_out;
    gauss_levels.push_back(last);
  }

  assert(gauss_levels.size() == num_levels);

  return gauss_levels;
}

vector<string> as_laplace_pyramid(const int num_levels, const string& func, App& app) {
  auto gauss_levels = as_gauss_pyramid(num_levels, func, app);

  vector<string> laplace_levels;
  for (int l = 0; l < num_levels - 1; l++) {
    string larger_image = gauss_levels.at(l);
    string smaller_image = gauss_levels.at(l + 1);

    string next_us = func + "_laplace_us_" + str(l);
    string next_out = func + "_laplace_diff_" + str(l);

    // Upsample the image
    app.func2d(next_us, "id", smaller_image, {qconst(1, 2), qconst(1, 2)}, {{0, 0}});

    Window ad{larger_image, {qconst(1), qconst(1)}, {{0, 0}}};
    Window ud{next_us, {qconst(1), qconst(1)}, {{0, 0}}};
    app.func2d(next_out, "diff", {ad, ud});

    laplace_levels.push_back(next_out);
  }

  laplace_levels.push_back(gauss_levels.back());

  assert(laplace_levels.size() == num_levels);

  return laplace_levels;
}

void asplos_ds_test() {
  App ds;
  ds.func2d("in_oc");
  ds.func2d("in", "id", pt("in_oc"));

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;

  string hblur = as_ds("in", ds);
  ds.realize(options, hblur, 30, 30, 1);
}

void asplos_gp_test() {
  App ds;
  ds.func2d("in_oc");
  ds.func2d("in", "id", pt("in_oc"));

  auto gp = as_gauss_pyramid(4, "in", ds);
  cout << "GP functions" << endl;
  for (auto g : gp) {
    cout << tab(1) << g << endl;
  }

  string hblur = gp.back();
  cout << "hblur = " << hblur << endl;

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  options.debug_options.expect_all_linebuffers = true;
  ds.realize(options, hblur, 30, 30, 1);
}

void asplos_lp_test() {
  App ds;
  ds.func2d("in_oc");
  ds.func2d("in", "id", pt("in_oc"));

  auto lp = as_laplace_pyramid(4, "in", ds);
  string image = lp.back();
  for (int i = lp.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    ds.func2d(merged_level, "add", {upsample(2, image), pt(lp.at(i))});
    image = merged_level;
  }

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  ds.realize(options, image, 30, 30, 1);
}

void asplos_ef_test() {
  App ds;
  ds.func2d("in_oc");
  ds.func2d("in", "id", pt("in_oc"));

  ds.func2d("dark", "id", pt("in"));
  ds.func2d("bright", "as_ef_scale", pt("in"));

  ds.func2d("dark_weights", "as_ef_weight", pt("dark"));
  ds.func2d("bright_weights", "as_ef_weight", pt("bright"));

  auto dp = as_laplace_pyramid(4, "dark", ds);
  auto bp = as_laplace_pyramid(4, "bright", ds);

  auto dwp = as_gauss_pyramid(4, "dark_weights", ds);
  auto bwp = as_gauss_pyramid(4, "bright_weights", ds);

  vector<string> lp;
  for (int i = 0; i < dp.size(); i++) {
    string merged = "merged_weights_" + str(i);
    ds.func2d(merged, "as_ef_merge", {pt(dp.at(i)), pt(dwp.at(i)), pt(bp.at(i)), pt(bwp.at(i))});
    lp.push_back(merged);
  }

  string image = lp.back();
  for (int i = lp.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    ds.func2d(merged_level, "add", {upsample(2, image), pt(lp.at(i))});
    image = merged_level;
  }

  CodegenOptions options;
  options.internal = true;
  options.simplify_address_expressions = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;
  ds.realize(options, image, 30, 30, 1);

}

void generate_asplos_examples() {
  asplos_ds_test();
  asplos_gp_test();
  asplos_lp_test();
  asplos_ef_test();
}

void blur_example() {
  int cols = 1920;
  int rows = 1080;

  const int unroll_factor = 2;
  cout << "blur_xy" << endl;
  cout << tab(1) << "unroll factor: " << unroll_factor << endl;
  string out_name = "blur_example";
  blur_xy_16(out_name).realize(out_name, cols, rows, unroll_factor);

  string synth_dir =
    "./" + out_name;
  system(("mkdir -p " + synth_dir).c_str());
  system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv " + out_name + "*.h " + synth_dir).c_str());
  system(("mv regression_tb_" + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv tb_soda_" + out_name + "*.cpp " + synth_dir).c_str());
  system(("cp ./aws_collateral/xrt.ini " + synth_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + synth_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + synth_dir).c_str());
  system(("cp conv_3x3.h " + synth_dir).c_str());
  system(("cp clockwork_standard_compute_units.h " + synth_dir).c_str());
  system(("cp hw_classes.h " + synth_dir).c_str());
  make_exe("set_app.sh");
  system(("mv set_app.sh " + synth_dir).c_str());

  int res = cmd("g++ -std=c++11 ./blur_example/blur_example_opt_sw_bmp_test_harness.cpp ./blur_example/blur_example_opt.cpp -I ./aws_collateral/ -I .");
  assert(res == 0);
}

class fusion_group {
  public:

    std::map<op*, string> fuse_levels;
};

void naively_extend_bounds_to_multiple_of(op* loop, const int inner_tile_size) {
  loop->pretty_print();
  if (loop->trip_count() % inner_tile_size == 0)  {
    return;
  }

  cout << tab(1) << "Tile size:  " << inner_tile_size << endl;
  cout << tab(1) << "Trip count: " << loop->trip_count() << endl;
  assert(loop->start == 0);
  loop->end_exclusive = loop->end_exclusive + (inner_tile_size - loop->trip_count() % inner_tile_size);
  loop->pretty_print();
  assert(loop->trip_count() % inner_tile_size == 0);
}


void tile_for_time_sharing(prog& prg) {
  assert(is_rate_matchable(prg));
  int num_levels = loop_depth(prg.root);

  map<string, vector<op*> > inner_tiles;
  for (int level = num_levels - 1; level > 0; level--) {
    vector<isl_map*> mps;
    for (auto m : get_maps(prg.validity_deps())) {
      mps.push_back(project_all_but(m, level));
      release(m);
    }
    map<string, isl_val*> qfs =
      compute_qfactors(mps);
    cout << "QFactors..." << endl;
    int max = -1;
    for (auto q : qfs) {
      cout << tab(1) << q.first << " -> " << str(q.second) << endl;
      if (to_int(q.second) > max) {
        max = to_int(q.second);
      }
    }
    assert(max >= 1);

    cout << "Tile factors..." << endl;
    for (auto q : qfs) {
      string name = q.first.substr(2);
      if (!contains_key(name, inner_tiles)) {
        inner_tiles[name] = {};
      }
      int inner_tile_size = max / to_int(q.second);
      cout << tab(1) << name << " -> " << max / to_int(q.second) << endl;
      op* loop = prg.find_loop(surrounding_vars(name, prg).at(level));
      naively_extend_bounds_to_multiple_of(loop, inner_tile_size);
      op* inner_tile_loop = strip_mine(inner_tile_size, loop, prg);
      inner_tiles[name].push_back(inner_tile_loop);
    }
  }

  for (auto& ent : inner_tiles) {
    for (auto lp : ent.second) {
      push_to_bottom_of_band_ignoring(ent.second, lp, prg);
    }
  }
}

void test_outer_strip_mine() {
  prog prg("time_sharing_pyramid_1d");

  prg.add_input("in");
  prg.add_output("b1");

  {
    auto ld = prg.add_loop("i0", 0, 1)->add_loop("i1", 0, 1)->add_op("cpy");
    ld->add_load("in", "i0, i1");
    ld->add_store("b0", "i0, i1");
  }

  {
    auto ld = prg.add_loop("x0", 0, 1)->add_loop("x1", 0, 1)->add_op("ldin0");
    ld->add_load("b0", "2*x0 + 0, 2*x1 + 1");
    ld->add_load("b0", "2*x0 + 1, 2*x1 + 1");
    ld->add_store("b1", "x0, x1");
    ld->add_function("add_2");
  }


  infer_bounds("b1", {4, 4}, prg);
  auto unopt = unoptimized_result(prg);

  strip_mine(2, "x0", prg);
  prg.pretty_print();

  auto strip_mined = unoptimized_result(prg);
  prg.pretty_print();
  compare("outer_strip_mine_" + prg.name + "_vs_unopt", strip_mined, unopt);
}

void test_multi_kernel_design() {
  int num_pyramid_levels = 3;

  prog prg("multi_kernel_design");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("in");
  prg.add_output("out");

  load_input("in", "gray", 2, prg);

  cpy("out", "gray", 2, prg);

  infer_bounds("out", {4, 4}, prg);

  prg.pretty_print();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();

  auto unopt_postprocessed = unoptimized_result(prg);

  map<std::string, std::set<string> > fusion_groups;
  int i = 0;
  for (auto gp : get_kernels(prg)) {
    fusion_groups["gp_" + str(i)] = {gp};
    i++;
  }
  app_dag dag = partition_application(fusion_groups, prg);

  generate_regression_testbench(dag.prg);

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  all_unbanked(prg, options);
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_MULTILINEAR;
  generate_app_code(options, dag);
  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  move_to_benchmarks_folder(dag.prg.name);
}

void test_time_sharing_gaussian_pyramid() {
  int num_pyramid_levels = 3;

  prog prg("time_sharing_gauss_pyramid");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("in");
  prg.add_output("out");

  load_input("in", "gray", 2, prg);

  // Make input Gaussian pyramid
  vector<string> gray_levels = gaussian_pyramid("gray", num_pyramid_levels, prg);
  cpy("out", gray_levels.back(), 2, prg);

  infer_bounds("out", {4, 4}, prg);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  for (auto lp : prg.all_loops()) {
    if (lp->name != "root") {
      naively_extend_bounds_to_multiple_of(lp, 2);
    }
  }
  prg.pretty_print();

  auto unopt_postprocessed = unoptimized_result(prg);
  move_to_benchmarks_folder(prg.name);

  tile_for_time_sharing(prg);
  prg.name = "time_sharing_gauss_pyramid_tiled";
  prg.pretty_print();
  //assert(false);

  prg.root->replace_reads_from("in", "in_rob");

  auto lp = prg.root->add_loop_before(
      prg.root->children.front(),
      prg.un("reorder_load"),
      0,
      5*4);
  auto in = lp->add_loop(prg.un("d"), 0, 5*4);
  auto rd = in->add_op(prg.un("rob"));
  rd->add_load("in", in->name, lp->name);
  rd->add_store("in_rob", in->name, lp->name);

  prg.pretty_print();
  //assert(false);

  auto tiled = unoptimized_result(prg);
  compare("time_sharing_" + prg.name + "_vs_unopt", tiled, unopt_postprocessed);
  move_to_benchmarks_folder(prg.name);
}

void test_multi_kernel_mismatched_loop_depths() {
  prog prg("mismatched_depths");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("color_in_oc");
  prg.add_output("color_out");

  load_input("color_in_oc", "color_in_int", 3, prg);
  pointwise("color_in", "llf_int_to_float", "color_in_int", 3, prg);

  llf_to_grayscale("gray", "color_in", prg);

  llf_to_color_no_scales("color_out_float", "color_in", "gray", prg);
  pointwise("color_out", "llf_float_to_int", "color_out_float", 3, prg);

  prg.pretty_print();
  prg.sanity_check();

  infer_bounds("color_out", {3, 23, 23}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();

  unroll_mismatched_inner_loops(prg);
  cout << "After flattening..." << endl;
  prg.pretty_print();

  assert(all_loop_nests_same_depth(prg));

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  auto unopt_postprocessed = unoptimized_result(prg);

  auto fusion_groups = one_stage_per_group(prg);

  //auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  //unroll_mismatched_inner_loops(prg);

  //prg.pretty_print();
  //assert(false);

  prg.name = "mismatched_loops_plus_kernels";
  //vector<string> multi_kernel_res = unoptimized_result(prg);

  app_dag dag = partition_application(fusion_groups, prg);
  string target = "gp_in_on_chip_1_buf4_to_gp_1112";
  dag.prg.pretty_print();

  CodegenOptions options;

  //options.internal = true;
  //options.all_rams = true;
  //all_unbanked(prg, options);
  //options.inner_bank_offset_mode =
    //INNER_BANK_OFFSET_MULTILINEAR;

  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  //options.hls_loop_codegen = HLS_LOOP_CODEGEN_ISL;
  generate_app_code(options, dag);

  generate_regression_testbench(dag.prg);
  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  //move_to_benchmarks_folder(dag.prg.name);

  //assert(false);
}

void test_multi_kernel_llf() {
  prog prg = llf_float();
  prg.name = "llf_dcons_2048";
  //auto unopt_postprocessed = unoptimized_result(prg);

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);
  string target = "gp_in_on_chip_1_buf4_to_gp_1112";
  dag.prg.pretty_print();

  CodegenOptions options;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  //options.hls_loop_codegen = HLS_LOOP_CODEGEN_ISL;
  generate_app_code(options, dag);

  //generate_regression_testbench(dag.prg);
  //vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  //compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  move_to_benchmarks_folder(dag.prg.name);
  assert(false);
}

vector<path> all_paths_between(const std::string& src, const std::string& dst, prog& prg) {
  assert(src != dst);

  path start_path{src};
  std::set<string> visited;
  vector<path> active_paths{start_path};
  vector<path> finished_paths;

  while (active_paths.size() > 0) {
    path p = active_paths.back();
    active_paths.pop_back();

    string node = p.back();
    visited.insert(node);


    for (auto c : children(node, prg)) {
      if (c == dst) {
        path pcpy = p;
        pcpy.push_back(dst);
        finished_paths.push_back(pcpy);
      } else {
        if (!elem(c, visited)) {
          path fresh = p;
          fresh.push_back(c);
          active_paths.push_back(fresh);
        }
      }
    }
  }

  return finished_paths;
}

bool groups_are_topologically_closed(map<string, std::set<string> >& fusion_groups, prog& prg) {

  for (auto g : fusion_groups) {
    for (auto src : g.second) {
      for (auto dst : g.second) {
        if (src != dst) {
          vector<path> paths = all_paths_between(src, dst, prg);
          for (auto p : paths) {
            for (auto kernel : p) {
              if (!elem(kernel, g.second)) {
                return false;
              }
            }
          }
        }
      }
    }
  }
  return true;
}

bool is_partition(map<string, std::set<string> >& fusion_groups, prog& prg) {
  int total_size = 0;
  for (auto g : fusion_groups) {
    total_size += g.second.size();
  }

  int num_kernels = get_kernels(prg).size();
  return total_size == num_kernels;
}

void test_chain_grouping() {
  prog prg("pyr_blnd2d500_2048");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";
  prg.add_input("in");
  prg.add_output("out");

  cpy("in_on_chip", "in", 2, prg);

  const int num_pyramid_levels = 4;
  vector<string> lps = laplacian_pyramid("in_on_chip", num_pyramid_levels, prg);

  string reconstructed = reconstruct_gaussian(lps, prg);
  cpy("out", reconstructed, 2, prg);

  infer_bounds("out", {64, 64}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  auto unopt_postprocessed = unoptimized_result(prg);

  auto fusion_groups = fuse_pointwise_stages(prg);

  assert(is_partition(fusion_groups, prg));
  assert(groups_are_topologically_closed(fusion_groups, prg));
  //assert(groups_are_contiguous(fusion_groups, prg));
}

void test_multi_kernel_pyramid_collapsing() {

  prog prg("pyr_blnd2d500_2048");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";
  prg.add_input("in");
  prg.add_output("out");

  cpy("in_on_chip", "in", 2, prg);

  const int num_pyramid_levels = 4;
  vector<string> lps = laplacian_pyramid("in_on_chip", num_pyramid_levels, prg);

  string reconstructed = reconstruct_gaussian(lps, prg);
  cpy("out", reconstructed, 2, prg);

  infer_bounds("out", {64, 64}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  auto unopt_postprocessed = unoptimized_result(prg);

  //auto fusion_groups = one_stage_per_group(prg);
  auto fusion_groups = fuse_pointwise_stages(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  CodegenOptions options;
  //all_unbanked(prg, ostart_pos ptions);
  //options.inner_bank_offset_mode =
    //INNER_BANK_OFFSET_MULTILINEAR;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  generate_regression_testbench(dag.prg);

  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  move_to_benchmarks_folder(dag.prg.name);
}

void test_artificial_deadlock() {
  prog prg("art_dead100");
  prg.add_input("in");
  prg.add_output("out");

  load_input("in", "gray", 2, prg);

  auto blurred = prg.add_nest("yb", 0, 1, "xb", 0, 1)->add_op("blur");
  blurred->add_load("gray", "xb", "yb");
  blurred->add_store("blurred", "xb", "yb");
  blurred->add_function("conv_3_3_float_one");


  auto diff = prg.add_nest("y", 0, 1, "x", 0, 1)->add_op("diff");
  diff->add_load("gray", "x", "y");
  diff->add_load("blurred", "x", "y");
  diff->add_store("out", "x", "y");
  diff->add_function("diff");


  infer_bounds("out", {64, 64}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  auto unopt_postprocessed = unoptimized_result(prg);

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);
  for (auto& gp : dag.fusion_group_progs) {
    cout << "============================" << endl;
    gp.second.pretty_print();
    cout << endl;
  }

  dag.prg.pretty_print();

  CodegenOptions options;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  generate_regression_testbench(dag.prg);
  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  move_to_benchmarks_folder(dag.prg.name);
}

void test_multi_kernel_unsharp() {
  prog prg("us_mk1_ii1");
  prg.add_input("in");
  prg.add_output("out");

  load_input("in", "gray", 2, prg);
  cpy("gray_blur", "gray", 2, prg);
  cpy("gray_blur_cache", "gray_blur", 2, prg);

  auto blurred = prg.add_nest("yb", 0, 1, "xb", 0, 1)->add_op("blur");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      blurred->add_load("gray_blur_cache", "xb + " + str(i), "yb + " + str(j));
    }
  }
  blurred->add_store("blurred", "xb", "yb");
  blurred->add_function("conv_3_3");


  cpy("gray_diff", "gray", 2, prg);
  auto diff = prg.add_nest("y", 0, 1, "x", 0, 1)->add_op("diff");
  diff->add_load("gray_diff", "x", "y");
  diff->add_load("blurred", "x", "y");
  diff->add_store("out", "x", "y");
  diff->add_function("diff");


  infer_bounds("out", {64, 64}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  auto unopt_postprocessed = unoptimized_result(prg);

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);
  for (auto& gp : dag.fusion_group_progs) {
    cout << "============================" << endl;
    gp.second.pretty_print();
    cout << endl;
  }

  dag.prg.pretty_print();

  CodegenOptions options;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  generate_regression_testbench(dag.prg);
  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  move_to_benchmarks_folder(dag.prg.name);
  //assert(false);
}

void test_gaussian_pyramid_shared_pes() {
  int num_pyramid_levels = 8;

  prog prg("time_sharing_gauss_pyramid");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";

  prg.add_input("in");
  prg.add_output("out");

  load_input("in", "gray", 2, prg);

  // Make input Gaussian pyramid
  vector<string> gray_levels = gaussian_pyramid("gray", num_pyramid_levels, prg);
  cpy("out", gray_levels.back(), 2, prg);

  infer_bounds("out", {4, 4}, prg);

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();

  auto valid = prg.validity_deps();

  vector<op*> op_order = get_dft_ops(prg);
  auto sched_affs = clockwork_schedule(prg.whole_iteration_domain(), valid, cpy(valid));
  map<string, isl_set*> domains;
  for (auto d : get_sets(prg.whole_iteration_domain())) {
    domains[name(d)] = d;
  }

  cout << endl;
  cout << "Schedule..." << endl;
  int i = 0;
  vector<isl_map*> schedules_at_level_1;
  for (auto aff : sched_affs) {
    auto expr = cpy(aff.second.at(1));
    expr = set_name(expr, aff.first);
    isl_set* dom = project_all_but(domains.at(aff.first), 1);

    isl_map* m = its(to_map(expr), dom);


    cout << tab(1) << str(m) << endl;
    schedules_at_level_1.push_back(m);
    i++;
  }

  assert(false);
}

void test_if_construction() {
  prog prg("if_example");
  auto lp = prg.add_loop("x", 0, 10);
  auto ifs = lp->add_if("0 <= x <= 5");
  ifs->add_op("hello");
  prg.pretty_print();

  auto doms = prg.domains();
  assert(doms.size() == 1);
  for (auto d : doms) {
    cout << tab(1) << d.first->name << " -> " << str(d.second) << endl;
  }

  auto dom = project_all_but(pick(doms).second, 1);
  assert(to_int(lexminval(dom)) == 0);
  assert(to_int(lexmaxval(dom)) == 5);

  //assert(false);
}

void test_if_complex() {
  prog prg("if_example");
  auto lp = prg.add_loop("c", 0, 10);
  auto ifs = lp->add_if("c = 0");
  auto ifs_lp = ifs->add_loop("x_init", 0, 10);
  auto init_op = ifs_lp->add_op("init");
  init_op->add_store("output", "x_init");
  auto lp_input = lp->add_loop("x_input", 0, 20);
  auto input_op = lp_input->add_op("input");
  input_op->add_store("input", "input");
  input_op->add_store("input_dram", "c", "input");
  auto lp_comp_x = lp->add_loop("x_comp", 0, 10);
  auto lp_comp_y = lp_comp_x->add_loop("y_comp", 0, 10);
  auto comp_op = lp_comp_y->add_op("comp");
  comp_op->add_load("output", "x_comp");
  comp_op->add_load("input", "x_comp+y_comp");
  comp_op->add_store("output", "x_comp");
  auto if_wb = lp->add_if("c=9");
  auto lp_wb_x = if_wb->add_loop("x_wb", 0, 10);
  auto wb_op = lp_wb_x->add_op("write_back");
  wb_op->add_load("output", "x_wb");
  wb_op->add_store("output_dram", "x_wb");
  prg.pretty_print();

  auto doms = prg.domains();
  //assert(doms.size() == 1);
  for (auto d : doms) {
    cout << tab(1) << d.first->name << " -> " << str(d.second) << endl;
  }

  CodegenOptions options;
  schedule_info sched =
    garnet_schedule_info(options, prg);
  garnet_dual_port_ram_schedule(sched, prg.root, prg);

  //auto dom = project_all_but(pick(doms).second, 1);
  //assert(to_int(lexminval(dom)) == 0);
  //assert(to_int(lexmaxval(dom)) == 5);

  assert(false);
}

void test_loop_perfection() {
  prog prg("loop_perfection_example");
  auto lp_0 = prg.add_loop("r", 0, 10);
  auto ifs_lp = lp_0->add_loop("x_init", 0, 10);
  auto init_op = ifs_lp->add_op("init");
  init_op->add_store("output", "x_init");
  auto lp = lp_0->add_loop("c", 0, 10);
  auto lp_input = lp->add_loop("x_input", 0, 20);
  auto input_op = lp_input->add_op("input");
  input_op->add_store("input", "input");
  input_op->add_store("input_dram", "c", "input");
  auto lp_comp_x = lp->add_loop("x_comp", 0, 10);
  auto lp_comp_y = lp_comp_x->add_loop("y_comp", 0, 10);
  auto comp_op = lp_comp_y->add_op("comp");
  comp_op->add_load("output", "x_comp");
  comp_op->add_load("input", "x_comp+y_comp");
  comp_op->add_store("output", "x_comp");
  auto lp_wb_x = lp_0->add_loop("x_wb", 0, 10);
  auto wb_op = lp_wb_x->add_op("write_back");
  wb_op->add_load("output", "x_wb");
  wb_op->add_store("output_dram", "x_wb");
  prg.pretty_print();

  loop_perfection(prg);
  cout << "After Loop perfection" << endl;
  prg.pretty_print();

  assert(single_coarse_pipeline_loop_nests(prg));

  CodegenOptions options;
  schedule_info sched =
    garnet_schedule_info(options, prg);
  garnet_dual_port_ram_schedule(sched, prg.root, prg);
}

void load_pe_power_stats(power_analysis_params& power_params, const std::string& file) {
  cout << "File = " << file << endl;
  ifstream input(file);
  for( std::string line; getline( input, line );) {
    cout << "Line = " << line << endl;
    vector<string> comps = split_at(line, " ");
    assert(comps.size() == 2);
    string instance = comps.at(0);
    double energy_cost = stod(comps.at(1));
    power_params.instance_energy_costs[instance] = energy_cost;
    //cout << tab(1) << instance << ": " << energy_cost << endl;
  }
  //assert(false);
}

std::set<op*> find_users(const std::string& buf, prog& prg) {
  std::set<op*> rds = find_readers(buf, prg);
  for (auto p : find_writers(buf, prg)) {
    rds.insert(p);
  }
  return rds;
}

vector<dgraph> possible_in_to_out_shift_registers(prog& prg, UBuffer& buf, schedule_info& sched) {
  map<string,pair<string,int>> shift_registered_outputs = determine_shift_reg_map(prg, buf, sched);

  vector<dgraph> dgs;
  for (auto inpt : buf.get_in_ports()) {
    dgraph dg;
    for (auto pt : shift_registered_outputs) {
      if (pt.second.first == inpt) {
        dg.add_edge(pt.second.first, pt.first, pt.second.second);
      }
    }
    dgs.push_back(dg);
  }
  return dgs;
}

dgraph possible_shift_registers(prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  map<string,pair<string,int>> shift_registered_outputs = determine_shift_reg_map(prg, buf, hwinfo);
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs = determine_output_shift_reg_map(prg, buf, hwinfo);

  cout << "out -> out srs: " << shift_registered_outputs_to_outputs.size() << endl;

  dgraph dg;
  for (auto pt : shift_registered_outputs) {
    dg.add_edge(pt.second.first, pt.first, pt.second.second);
  }
  for (auto pt : shift_registered_outputs_to_outputs) {
    dg.add_edge(pt.second.first, pt.first, pt.second.second);
  }

  return dg;
}


template<typename T, typename Q>
void sort_lt_snd(std::vector<std::pair<T, Q> >& outputs) {
  sort_lt(outputs, [](const std::pair<T,Q> &x){return x.second;});
}

prog stencil_chain(const std::string& name) {
  prog prg(name);
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.add_input("in_oc");
  prg.add_output("out");

  cpy("in", "in_oc", 2, prg);

  string last_level = "in";
  string current_level = "";

  const int NUM_STAGES = 0;
  //const int NUM_STAGES = 15;
  //const int NUM_STAGES = 2;
  //const int NUM_STAGES = 200;
  //const int UNROLL_FACTOR = 16;
  for (int i = 0; i < NUM_STAGES; i++) {
    current_level = "stencil_" + str(i);
    string y = prg.unique_name(current_level);
    string x = prg.unique_name(current_level);
    string yi = prg.unique_name(current_level);
    string xi = prg.unique_name(current_level);

    auto ol = prg.add_nest(y, 0, 1, x, 0, 1);
    auto init = ol->add_op(prg.un("conv"));
    init->add_function("conv_3_3");
    for (int i = -1; i < 2; i++) {
      for (int j = -1; j < 2; j++) {
        init->add_load(last_level, x + " + " + str(i), y + " + " + str(j));
      }
    }
    init->add_store(current_level, x, y);

    last_level = current_level;
  }

  cpy("out", last_level, 2, prg);

  //infer_bounds("out", {128, 128}, prg);
  cout << "==== DONE BUILDING PROGRAM, STARTING BOUNDS INFERENCE" << endl;
  //infer_bounds_and_unroll("out", {1920, 1080}, UNROLL_FACTOR, prg);

  //normalize_bounds(prg);
  //normalize_address_offsets(prg);

  vector<int> bounds = {128, 128};
  infer_bounds("out", bounds, prg);

  prg.pretty_print();
  prg.sanity_check();

  //assert(false);

  return prg;
}

void dhuff_playground() {
  {
    prog prg = lucas_kanade();

    prg.sanity_check();

    cout << "# results: " << unoptimized_result(prg) << endl;
    assert(false);
  }

  {
    resnet().pretty_print();
    assert(false);
  }

  {
    prog prg = mod_example();
    prg.pretty_print();

    //generate_unoptimized_code(prg);

    auto res = unoptimized_result(prg);
    assert(false);
  }
  {
    prog prg = resnet88();
    prg.pretty_print();
    assert(false);
  }
  {
    prog prg = harris();
    int num_buffers = all_buffers(prg).size();
    cout << "# of buffers: " << num_buffers << endl;
    assert(false);
  }
  {
    prog prg = demosaic_unrolled();
    prg.pretty_print();
    assert(false);
  }
  {
#ifdef COREIR
    for (auto prg : harris_variants()) {
      prg.pretty_print();
      for (auto op : prg.all_ops()) {
        if (op->func != "") {
          cout << op->func << endl;
          int tb_res = generate_compute_unit_regression_tb(op, prg);
          if (tb_res != 0) {
            cout << "==== In prog: " << prg.name << " compute unit: " << op->func << " has a mismatch between C++ and coreir" << endl;
            assert(false);
          }
        }
      }
    }
    assert(false);
#endif
  }
  //llf_test();
  //assert(false);
  {
    //auto prg = stencil_chain("sc_stat");
    //generate_optimized_code(prg);
    //generate_regression_testbench(prg);
    //auto unopt_postprocessed = run_regression_tb(prg);
    //move_to_benchmarks_folder(prg.name);

    vector<int> bounds = {1920, 1080};
    const int unroll_factor = 16;
    prog prg = stencil_chain("sc_dyn_7_32");

    map<std::string, std::set<string> > fusion_groups =
      one_stage_per_group(prg);

    unroll_reduce_loops(prg);
    merge_basic_block_ops(prg);

    prg.reset_context();

    auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);

    extend_bounds_to_multiple_of(unroll_factor, "out", prg);
    normalize_bounds(prg);
    unroll_producer_matching("out", unroll_factor, prg);
    merge_basic_block_ops(prg);

    cout << "==== DONE PRODUCING PROGRAM, STARTING PARTITIONING" << endl;
    app_dag dag = partition_groups(fresh_groups, prg);

    cout << "==== DONE PARTITIONING PROGRAM, STARTING CODEGEN" << endl;
    for (auto& gp : dag.fusion_group_progs) {
      cout << "============================" << endl;
      gp.second.pretty_print();
      cout << endl;
    }

    //generate_regression_testbench(dag.prg);

    CodegenOptions options;
    generate_app_code(options, dag);

    //vector<string> multi_kernel_res = run_regression_tb(dag.prg);
    //cout << "# lines in multi kernel res = " << multi_kernel_res.size() << endl;
    //compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);

    cout << "==== DONE CODEGENING PROGRAM, STARTING MOVE TO BENCHMARKS" << endl;
    move_to_benchmarks_folder(dag.prg.name);
    assert(false);
  }

  {
    auto prg = mobilenet_unrolled();
    prg.pretty_print();
    assert(false);
  }
  {
    //vector<prog> hrs{harris()};
    //vector<prog> hrs{camera_pipeline()};
    vector<prog> hrs;
    //{harris()};
    concat(hrs, harris_variants());
    for (auto prg : hrs) {
      break_up_multi_channel_inputs(prg);
      break_up_multi_channel_outputs(prg);
      dsa_writers(prg);

      //unroll_reduce_loops(prg);
      //merge_basic_block_ops(prg);

      prg.pretty_print();
      prg.sanity_check();
      //assert(false);

      auto options = CGRA_M3_codegen_options(prg);
      schedule_info sched = garnet_schedule_info(options, prg);
      normalize_bounds(prg);

      garnet_dual_port_ram_schedule(sched, prg.root, prg);

      auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());

      sanity_check_hw_schedule(sched, prg);

      int time = max_completion_time(sched, prg);

      cout << tab(1) << "=== Completion time for optimized sched: " << prg.name << " = " << time << endl;
      auto buffers = build_buffers(prg, hw_sched);
      int total_tiles = 0;
      for (auto b : buffers) {

        if (!prg.is_boundary(b.first)) {
          dgraph sr_edges = possible_shift_registers(prg, b.second, sched);
          cout << sr_edges << endl;
          UBuffer del = delete_ports(sr_edges.nodes, b.second);
          assert(del.get_out_ports().size() == 0);
          vector<dgraph> in_to_out_srs = possible_in_to_out_shift_registers(prg, b.second, sched);
          cout << tab(2) << b.first << " can be broken into " << in_to_out_srs.size() << " shift registers" << endl;
          for (auto sr : in_to_out_srs) {
            cout << sr << endl;
          }

          for (auto sr : in_to_out_srs) {
            assert(sr.nodes.size() > 0);
            string inpt = pick(sr.out_edges).first;
            vector<pair<string, int> > vals;
            for (auto v : sr.out_edges.at(inpt)) {
              vals.push_back({v, sr.weight(inpt, v)});
            }
            sort_lt_snd(vals);
            for (auto v : vals) {
              cout << tab(1) << v.first << " -(" << v.second << ")-> " << v.second << endl;
            }

            vector<vector<pair<string, int> > > reg_chains;
            split_by(vals, reg_chains, [](const pair<string, int>& a, const pair<string, int>& b) {
                return abs(a.second - b.second) < 30;
                });
            cout << tab(3) << "# of reg chains: " << reg_chains.size() << endl;
            total_tiles += reg_chains.size() / 2 + (reg_chains.size() % 2 == 0);
          }
        }
      }

      cout << "Total tiles in " << prg.name << ": " << total_tiles << endl;
    }
    assert(false);
  }
  {
    prog prg = mobilenet_unrolled();
    prg.pretty_print();
    assert(false);
  }
#ifdef COREIR
  {
    vector<prog> apps;
    apps.push_back(camera_pipeline());
    //apps.push_back(mobilenet_unrolled());
    //apps.push_back(harris());
    for (auto app: apps) {
        auto pe_op_count = get_PE_optype_count_garnet(app);

        ofstream out("aha_garnet_design_new/"+ app.name +"/pe_count_garnet.csv");
        for (auto it: pe_op_count) {
            out << it.first << "," << it.second << endl;
        }
    }
    assert(false);

  }
#endif
  {
    prog prg = harris_sch6_2ppc();
    dsa_writers(prg);
    prg.pretty_print();

    for (auto b : all_buffers(prg)) {
      auto users = find_users(b, prg);
      cout << "Users of " << b << endl;
      bool all_const = true;
      for (auto u : users) {
        cout << tab(1) << u->name << endl;
        for (auto rda : read_addrs(u, b, prg)) {
          cout << tab(2) << str(rda) << endl;
          if (!is_cst(rda)) {
            all_const = false;
            break;
          }
        }
        for (auto rda : write_addrs(u, b, prg)) {
          cout << tab(2) << str(rda) << endl;
          if (!is_cst(rda)) {
            all_const = false;
            break;
          }
        }
      }
      if (all_const) {
        cout << "All references to " << b << " are constant" << endl;
        assert(false);
      }
    }

    //for (auto op : get_dft_ops(prg)) {
      //op->pretty_print();
    //}

    assert(false);
  }
  //{
    //for (auto prg : isca_programs()) {
      //auto options = CGRA_M3_codegen_options(prg);
      //schedule_info sched = garnet_schedule_info(options, prg);
      //normalize_bounds(prg);
      //garnet_dual_port_ram_schedule(sched, prg.root, prg);

      //auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());

      ////sequential_schedule(sched, prg.root, prg);
      //int time = max_completion_time(sched, prg);

      //cout << tab(1) << "=== Completion time for optimized sched: " << prg.name << " = " << time << endl;
      ////auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());

      ////auto buffers = build_buffers(prg, hw_sched);


      ////int total_capacity = 0;
      ////for (auto b : buffers) {
        ////if (!prg.is_boundary(b.first)) {
          ////total_capacity += card(extents_by_dimension(b.second));
        ////}
      ////}
      ////cout << tab(1) << "=== SRAM bytes for " << prg.name << total_capacity << endl;
    //}
    //assert(false);
  //}
  //{
//#ifdef COREIR


//#endif
  //}
  {
#ifdef COREIR
    power_analysis_params power_params;
    power_analysis_info power_stats;
    // Interpolated from MAC cost in Xuans paper Interstellar
    //const double COST_PER_PE_MUL_PJ = 0.04;
    //const double COST_PER_PE_ADD_PJ = 0.035;

    // From Dalys discussion of arithmetic
    const double COST_PER_PE_MUL_PJ = 40 / 1000;
    const double COST_PER_PE_ADD_PJ = 20 / 1000;

    const double COST_PER_PE_SUB_PJ = 0.035;
    const double COST_PER_PE_SHIFT_PJ = 0.01;
    const double COST_PER_PE_LOGIC_BINOP_PJ = 0.01;
    const double COST_PER_PE_EQ_PJ = 0.01;
    const double COST_PER_PE_MUX_PJ = 0.5;
    const double COST_PER_PE_CMP_PJ = 0.035;

    power_params.alu_op_energy_costs["mult_0"] = COST_PER_PE_MUL_PJ;
    power_params.alu_op_energy_costs["add"] = COST_PER_PE_ADD_PJ;
    power_params.alu_op_energy_costs["rshft"] = COST_PER_PE_SHIFT_PJ;
    power_params.alu_op_energy_costs["sub"] = COST_PER_PE_SUB_PJ;
    power_params.alu_op_energy_costs["and"] = COST_PER_PE_LOGIC_BINOP_PJ;
    power_params.alu_op_energy_costs["or"] = COST_PER_PE_LOGIC_BINOP_PJ;
    power_params.alu_op_energy_costs["eq"] = COST_PER_PE_EQ_PJ;
    power_params.alu_op_energy_costs["sel"] = COST_PER_PE_MUX_PJ;
    power_params.alu_op_energy_costs["ult"] = COST_PER_PE_CMP_PJ;
    power_params.alu_op_energy_costs["lt"] = COST_PER_PE_CMP_PJ;
    power_params.alu_op_energy_costs["le"] = COST_PER_PE_CMP_PJ;

    load_pe_power_stats(power_params, "./power_models/conv_3_3/PEs.txt");

    CodegenOptions options;
    for (auto prg : {conv_3_3()}) {
      PE_energy_cost_instance_model(power_params, power_stats, prg);
      //MEM_energy_cost(options, power_params, power_stats, prg);
    }
    assert(false);
#endif
  }
  {
#ifdef COREIR
    for (auto prg : {unsharp()}) {
      prg.pretty_print();
      for (auto op : prg.all_ops()) {
        if (op->func != "") {
          cout << op->func << endl;
          int tb_res = generate_compute_unit_regression_tb(op, prg);
          if (tb_res != 0) {
            cout << "==== In prog: " << prg.name << " compute unit: " << op->func << " has a mismatch between C++ and coreir" << endl;
            assert(false);
          }
        }
      }
    }
    assert(false);
#endif
  }
  {
    prog prg = unsharp();
    prg.pretty_print();
    assert(false);
  }

  {
    for (auto prg : isca_programs()) {
      auto options = generic_SRAM_codegen_options(prg);
      schedule_info sched = garnet_schedule_info(options, prg);
      compile_cycle_accurate_hw(options, sched, prg);
      normalize_bounds(prg);
      sequential_schedule(sched, prg.root, prg);

      auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());

      auto buffers = build_buffers(prg, hw_sched);


      int total_capacity = 0;
      for (auto b : buffers) {
        if (!prg.is_boundary(b.first)) {
          total_capacity += card(extents_by_dimension(b.second));
        }
      }
      cout << tab(1) << "=== SRAM bytes for " << prg.name << total_capacity << endl;
    }
    assert(false);
  }
  {
    prog prg = mobilenet_unrolled();
    prg.pretty_print();
    assert(false);
  }
  {
    isl_ctx* ctx = isl_ctx_alloc();
    isl_map* addr = isl_map_read_from_str(ctx, "{ [c, x, y] -> [c, x, y] }");
    isl_map* ibo = isl_map_read_from_str(ctx, "{ [c, x, y] -> [x, y] }");
    isl_map* bank_sel = isl_map_read_from_str(ctx, "{ [c, x, y] -> [c] }");
    isl_map* sched = isl_map_read_from_str(ctx, "{ [c, x, y] -> [256*c + 28*x + y] : 0 <= c <= 2 and 0 <= x <= 4 and 0 <= y <= 27 }");

    // What is the problem that needs to be solved?
    // Given: Original address, and schedule and a banking scheme, and a bank ID
    // Produce: An address domain and schedule for the given bank that fits
    // an affine controller
    assert(false);
  }
  {
    prog prg = resnet_unrolled();
    vector<prog> test_prgs{prg};
    test_codegen(test_prgs, compile_for_FPGA_BRAM_mem);
    assert(false);
  }
  {
    prog prg = harris();
    prg.pretty_print();
    assert(false);
    generate_unoptimized_code(prg);
    assert(false);
  }

  {
    //prog prg = resnet_full_layer();
    //prg.pretty_print();
    prog prg = harris_sch4_1pp3c();
    prg.pretty_print();
    assert(false);
  }
  {
    prog prg = resnet();
#ifdef COREIR
    //pipeline_compute_units(prg);
#endif
    assert(false);
  }
  //{
    //vector<prog> prgs = all_cgra_programs();
    //vector<prog> not_coarse;
    //cout << "Finding coarse pipelines" << endl;
    //for (auto prg : prgs) {
      //op* pl =
        //find_coarse_grained_pipeline_loop(prg.root);
      //if (pl->name != "root") {
        ////cout << tab(1) << prg.name << " is coarse-pipelinable" << endl;
      //} else {
        //if (is_rate_matchable(prg)) {
        //} else {
          ////cout << tab(1) << prg.name << " is not coarse-pipelinable or rate matchable" << endl;
          //std::set<int> buffer_dims;
          //for (auto b : all_buffers(prg)) {
            ////cout << tab(2) << b << " : " << logical_dimension(b, prg) << endl;
            //buffer_dims.insert(logical_dimension(b, prg));
          //}
          //if (buffer_dims.size() > 1) {
            //cout << tab(2) << prg.name << " has dimension reduction" << endl;
          //} else {
            //cout << tab(2) << prg.name << " is a scan pipeline" << endl;
          //}
        //}
      //}
    //}
    //assert(false);
  //}

  //{
    //prog prg = harris_sch1();
    //prg.pretty_print();
    //prg.ins.insert("padded16_global_wrapper_stencil");
    //prg.ins.erase("padded16_stencil");
    //prg.root->delete_child(prg.root->children.front());
    //prg.pretty_print();
    ////assert(false);
    //vector<prog> prgs{prg};
    //test_codegen(prgs, compile_for_FPGA_BRAM_mem);
    //assert(false);
  //}
    //prog prg = mobilenet_unrolled();
    //break_up_multi_channel_inputs(prg);
    //break_up_multi_channel_outputs(prg);

    //generate_optimized_code(prg);
    //move_to_benchmarks_folder(prg.name);
    //assert(false);
  //}

  ////{
    ////prog prg = mobilenet_unrolled();
    ////prg.sanity_check();
    //////compile_for_FPGA_BRAM_mem(prg);
    ////vector<prog> prgs{prg};
    ////test_codegen(prgs, compile_for_FPGA_BRAM_mem);
    ////assert(false);
  ////}

  //{
    //// coreir is wrong?
    ////prog prg = harris_sch1();
    //// Bank list has length 0? grad_x_unclamp
    //// stencil is never written?
    ////prog prg = harris_sch6();

    //// Verilator reports circular feedback?
    //prog prg = harris_sch2();

    //// schedule takes too long
    ////prog prg = harris_sch4();
    ////prog prg = harris_sch3();
    //prg.pretty_print();
    //assert(false);
  //}

  //{
    //prog prg = mobilenet_unrolled();
    //dsa_writers(prg);
    //break_up_multi_channel_inputs(prg);

    //prg.pretty_print();
    //prg.sanity_check();

    //auto domain = prg.whole_iteration_domain();

    //string target = "op_hcompute_dw_conv_stencil";
    //auto writes =
      //its(prg.producer_map(), domain);
    //for (auto m : get_maps(writes)) {
      //if (domain_name(m) == target) {
        //cout << "writes by " << target << ": " << str(m) << endl;
        //assert(false);
      //}
    //}

    //auto reads =
      //its(prg.consumer_map(), domain);


    //assert(false);

    ////auto valid = prg.validity_deps();
    ////auto dom = prg.whole_iteration_domain();
    ////cout << "Validity deps..." << endl;
    ////std::set<string> validity_doms;
    ////for (auto v : get_maps(valid)) {
      ////cout << tab(1) << str(v) << endl;
      ////validity_doms.insert(range_name(v));
      ////validity_doms.insert(domain_name(v));
    ////}
    ////cout << "Dependence checks" << endl;
    ////for (auto s : get_sets(dom)) {
      ////if (!elem(name(s), validity_doms)) {
        ////cout << tab(1) << name(s) << " is not used in any dependency" << endl;
      ////}
    ////}
    ////auto res = unoptimized_result(prg);
    //assert(false);
  //}

  //{
    //prog prg = harris_sch6();
    //cout << "Harris schedule variant 6" << endl;
    //prg.pretty_print();
    //prg.sanity_check();
    //auto res = unoptimized_result(prg);
    //assert(false);
  //}
  //{
    ////prog prg = up_sample();
    //prog prg = pointwise();
    //prg.pretty_print();
    //assert(false);
  //}
  //{
    //prog prg = resnet_coarse_pipeline_loop();
    ////prog prg = resnet();
    //prg.pretty_print();
    //prg.sanity_check();
    //auto options = garnet_codegen_options(prg);
    //schedule_info sched = garnet_schedule_info(options, prg);
    //normalize_bounds(prg);

    //garnet_dual_port_ram_schedule(sched, prg.root, prg);

    //auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());

    ////sanity_check_hw_schedule(sched, prg);

    //auto buffers = build_buffers(prg, hw_sched);

    //auto& buf = buffers["conv_stencil"];
    //string bank_func = "{ conv_stencil[c, x, y, t] -> B[c % 3, x % 1, y % 1, t % 2] }";
    ////string bank_func = "{ conv_stencil[c, x, y, t] -> B[c % 3, x % 1, y % 1, t % 1] }";
    //isl_map* bf =
      //isl_map_read_from_str(buf.ctx, bank_func.c_str());

    //bool bs = banking_scheme_is_legal(bf, buf);
    //cout << "Legal banking: " << bs << endl;

    //assert(false);
  //}
  //{
    //prog prg("mmul");
    //auto init = prg.add_nest("ii", 0, 1024, "ji", 0, 1024)->add_op("init");
    //init->add_store("C", "ii", "ji");
    //init->add_function("init_c");

    //auto lp = prg.add_nest("i", 0, 1024, "j", 0, 1024, "k", 0, 1024)->add_op("mop");
    //lp->add_load("C", "i", "j");
    //lp->add_load("A", "i", "k");
    //lp->add_load("B", "k", "j");
    //lp->add_store("C", "i", "j");
    //lp->add_function("mac");

    //prg.pretty_print();

    //auto outer_init_i = strip_mine(4, "ii", prg);
    //auto outer_init_j = strip_mine(4, "ji", prg);
    //push_to_bottom_of_band_ignoring({}, outer_init_i, prg);
    //push_to_bottom_of_band_ignoring({}, outer_init_j, prg);

    //auto outer_i = strip_mine(4, "i", prg);
    //auto outer_j = strip_mine(4, "j", prg);
    //push_to_bottom_of_band_ignoring({}, outer_i, prg);
    //push_to_bottom_of_band_ignoring({}, outer_j, prg);
    //prg.pretty_print();

    //vector<op*> children = {};
    //for (auto c : prg.find_loop("ji")->children) {
      //children.push_back(c);
    //}
    //concat(children, prg.find_loop("j")->children);
    //prg.find_loop("j")->children = children;
    //prg.find_loop("ji")->children = {};

    //prg.pretty_print();

    //add_reuse_buffer_no_delta("i", "A", prg);
    //add_reuse_buffer_no_delta("j", "B", prg);

    //prg.root->replace_variable("ii", "i");
    //prg.root->replace_variable("ji", "j");

    //add_reuse_buffer_no_delta("j", "C", prg);

    //prg.pretty_print();

    //assert(false);
  //}


  //test_gaussian_pyramid_shared_pes();

  //assert(false);

  //{
    //prog prg = resnet_unrolled();
    //prg.pretty_print();
    //assert(false);
  //}

  //test_multi_kernel_design();
  //test_time_sharing_gaussian_pyramid();

  ////for (auto prg : all_cgra_programs()) {
    ////cout << "====== Running CGRA test for " << prg.name << endl;
    ////prg.pretty_print();
    ////prg.sanity_check();

    ////dsa_writers(prg);
    ////prg.pretty_print();

    ////compile_for_garnet_platonic_mem(prg);
  ////}
  ////assert(false);

  //test_outer_strip_mine();

  //prog prg("time_sharing_pyramid_1d");

  //prg.add_input("in");
  //prg.add_output("b2");

  //{
    //auto ld = prg.add_loop("i0", 0, 1)->add_op("cpy");
    //ld->add_load("in", "i0");
    //ld->add_store("b0", "i0");
  //}

  //{
    //auto ld = prg.add_loop("x0", 0, 1)->add_op("ldin0");
    //ld->add_load("b0", "2*x0 + 0");
    //ld->add_load("b0", "2*x0 + 1");
    //ld->add_store("b1", "x0");
    //ld->add_function("add_2");
  //}

  //{
    //auto ld = prg.add_loop("x1", 0, 1)->add_op("ldin1");
    //ld->add_load("b1", "2*x1 + 0");
    //ld->add_load("b1", "2*x1 + 1");
    //ld->add_store("b2", "x1");
    //ld->add_function("add_2");
  //}

  //infer_bounds("b2", {16}, prg);
  //auto unopt = unoptimized_result(prg);
  //prg.pretty_print();

  //tile_for_time_sharing(prg);
  //prg.pretty_print();
  //auto tiled = unoptimized_result(prg);
  //compare("time_sharing_" + prg.name + "_vs_unopt", tiled, unopt);

}

void unoptimized_mem_baseline() {
    //vector<prog> isscc_programs = {gaussian(), unsharp_new(), harris(), camera_pipeline_new()};
    vector<prog> isscc_programs;
    isscc_programs.push_back(gaussian_isscc());
    isscc_programs.push_back(unsharp_isscc());
    isscc_programs.push_back(harris_color());
    isscc_programs.push_back(camera_pipeline_2x2());

    for (auto prg : isscc_programs) {
      normalize_bounds(prg);
      dsa_writers(prg);
      auto options = garnet_baseline_codegen_options(prg);
      schedule_info sched = garnet_schedule_info(options, prg);
      options.add_memory_hierarchy("mem");
      //compile_cycle_accurate_hw(options, sched, prg);
      //sequential_schedule(sched, prg.root, prg);
      garnet_single_port_ram_schedule(options, sched, prg.root, prg);

      auto hw_sched = its(op_times_map(sched, prg), prg.whole_iteration_domain());
      auto sched_max = lexmaxpt(range(hw_sched));
      cout << "Latency of application is: " << str((sched_max)) << endl;

      auto buffers = build_buffers(prg, hw_sched);


      int total_capacity = 0;
      int total_tile = 0;
      for (auto b : buffers) {
        if (!prg.is_boundary(b.first)) {
          int buf_size = card(extents_by_dimension(b.second));
          total_capacity += buf_size;
          int mem_tile_num_by_capacity = (buf_size + 2047) / 2048;
          options.default_banking_strategy = {"exhausive"};
          b.second.generate_banks(options);
          int mem_tile_num_by_bank = b.second.get_banks().size();
          cout << tab(4) << "naive capacity tile number: " << mem_tile_num_by_capacity << endl;
          cout << tab(4) << "naive banking number: " << mem_tile_num_by_bank << endl;
          //total_tile += max(mem_tile_num_by_capacity, mem_tile_num_by_bank);
          total_tile += mem_tile_num_by_bank;
        }
      }
      cout << tab(1) << "=== SRAM bytes for " << prg.name << ": " << total_capacity << endl;
      cout << tab(1) << "=== Memory tile for " << prg.name << ": " << total_tile << endl;
    }
    assert(false);
}


void stencil_chain_multi_kernel_test() {
  auto prgs = stencil_chain("sc_stat");
  generate_optimized_code(prgs);
  generate_regression_testbench(prgs);
  auto unopt_postprocessed = run_regression_tb(prgs);
  move_to_benchmarks_folder(prgs.name);

  prog prg = stencil_chain("sc_dyn_7_32");
  prg.pretty_print();
  //assert(false);

  map<std::string, std::set<string> > fusion_groups =
    one_stage_per_group(prg);

  prg.reset_context();

  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  prg.pretty_print();

  cout << "==== DONE PRODUCING PROGRAM, STARTING PARTITIONING" << endl;
  app_dag dag = partition_groups(fresh_groups, prg);

  cout << "==== DONE PARTITIONING PROGRAM, STARTING CODEGEN" << endl;
  for (auto& gp : dag.fusion_group_progs) {
    cout << "============================" << endl;
    gp.second.pretty_print();
    cout << endl;
  }
  //assert(false);

  generate_regression_testbench(dag.prg);

  CodegenOptions options;
  generate_app_code(options, dag);

  vector<string> multi_kernel_res = run_regression_tb(dag.prg);
  cout << "# lines in multi kernel res = " << multi_kernel_res.size() << endl;
  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);

  cout << "==== DONE CODEGENING PROGRAM, STARTING MOVE TO BENCHMARKS" << endl;
  move_to_benchmarks_folder(dag.prg.name);
  //assert(false);

}

void test_app_to_prog_conversion() {
  App jac = pointwise2d("jac");
  int size = 10;
  prog prg = jac.realize("jac", size, size);

  prg.pretty_print();
  prg.sanity_check();
  sanity_check_all_input_pixels_read(prg);

  auto original = run_regression_tb("jac_opt");
  cout << "Original result: " << original << endl;

  auto extracted = unoptimized_result(prg);
  cout << "Extracted result: " << extracted << endl;

  compare("jac_extracted" + prg.name + "_vs_unopt", original, extracted);
}

void test_jacobi15_dynamic() {
  string prefix = "jacdynl2";
  int throughput = 1;
  string name = prefix + "_" + str(throughput);
  App lp = stencil_chain_stage_iccad(name, 15);
  int rows = 1080;
  int cols = 1080;
  CodegenOptions options;
  options.internal = true;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_CUSTOM;

  prog prg = lp.realize(options, name, {cols, rows}, "in", 1);
  generate_optimized_code(prg);
  assert(false);

  //auto extracted = unoptimized_result(prg);

  auto fusion_groups = one_stage_per_group(prg);
  app_dag dag = partition_application(fusion_groups, prg);

  //auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  //unroll_mismatched_inner_loops(prg);
  //merge_basic_block_ops(prg);
  //infer_bounds_and_unroll(pick(prg.outs), {1080, 1080}, throughput, prg);

  //app_dag dag = partition_groups(fresh_groups, prg);
  //assert(unoptimized_compiles(dag.prg));

  //prg.pretty_print();
  //assert(false);
  //app_dag dag = partition_application(fusion_groups, prg);

  options = CodegenOptions();
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  move_to_benchmarks_folder(prg.name);

  assert(false);
}

void test_multi_kernel_gp() {
  prog prg("gp");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";
  prg.add_input("in");
  prg.add_output("out");

  cpy("in_on_chip", "in", 2, prg);

  const int num_pyramid_levels = 2;
  vector<string> lps = gaussian_pyramid("in_on_chip", num_pyramid_levels, prg);

  string reconstructed = reconstruct_gaussian(lps, prg);
  cpy("out", reconstructed, 2, prg);

  infer_bounds("out", {64, 64}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  auto unopt_postprocessed = unoptimized_result(prg);

  auto fusion_groups = one_stage_per_group(prg);
  cout << "# of groups: " << fusion_groups.size() << endl;
  //assert(false);

  app_dag dag = partition_application(fusion_groups, prg);
  //string target = "gp_in_on_chip_1_buf4_to_gp_1112";
  dag.prg.pretty_print();
  //assert(false);

  CodegenOptions options;
  //all_unbanked(prg, options);
  //options.inner_bank_offset_mode =
    //INNER_BANK_OFFSET_MULTILINEAR;
  options.hls_loop_codegen = HLS_LOOP_CODEGEN_PERFECT;
  generate_app_code(options, dag);

  generate_regression_testbench(dag.prg);

  vector<string> multi_kernel_res = run_regression_tb(dag.prg);

  compare("multi_kernel_" + prg.name + "_vs_unopt", multi_kernel_res, unopt_postprocessed);
  move_to_benchmarks_folder(dag.prg.name);

}

void generate_gv_output(prog& prg) {
  ofstream out(prg.name + ".gv");
  out << "digraph " << prg.name << "{" << endl;
  out << tab(1) << "layout=neato" << endl;

  vector<string> kernels;
  int i = 0;
  for (auto k : get_kernels(prg)) {
    kernels.push_back(k);
  }

  out << tab(1) << "node [shape=circle,fixedsize=false,width=0.9,style=filled,color=green]; " << sep_list(kernels, "", ";", ";") << endl;

  vector<pair<string, string> > edges;
  for (auto k : get_kernels(prg)) {
    auto written = buffers_written(prg.find_loop(k));
    for (auto l : get_kernels(prg)) {
      auto read = buffers_read(prg.find_loop(l));
      if (intersection(read, written).size() > 0) {
        edges.push_back({k, l});
      }
    }
  }

  for (auto e : edges) {
    out << tab(1) << e.first << "->" << e.second << ";" << endl;
  }

  out << tab(1) << "overlap=false" << endl;
  out << tab(1) << "fontsize=12" << endl;
  out << "}" << endl;
  out.close();

}

void gv_generation_pyramid() {
  {
    prog prg = llf_float();
    prg.name = "llf";
    generate_gv_output(prg);
    assert(false);
  }

  prog prg("pbgraph");
  prg.compute_unit_file = "local_laplacian_filters_compute.h";
  prg.add_input("in");
  prg.add_output("out");

  cpy("in_on_chip", "in", 2, prg);

  const int num_pyramid_levels = 4;
  vector<string> lps = laplacian_pyramid("in_on_chip", num_pyramid_levels, prg);

  string reconstructed = reconstruct_gaussian(lps, prg);
  cpy("out", reconstructed, 2, prg);

  infer_bounds("out", {64, 64}, prg);

  prg.pretty_print();
  prg.sanity_check();

  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);

  prg.pretty_print();
  prg.sanity_check();

  generate_gv_output(prg);
  assert(false);
}

void dhuff_tests() {
  test_sbl8_static_dynamic_comparison();
  test_multi_kernel_pyramid_collapsing();
  test_multi_kernel_unsharp();
  test_multi_kernel_design();
  test_multi_kernel_gp();

  infer_bounds_tests();
  test_app_to_prog_conversion();
  blurx_app_to_prog_test();
  updated_blur_static_dynamic_comparison();

  //gv_generation_pyramid();

  test_chain_grouping();

  //test_jacobi15_dynamic();
  //test_multi_kernel_llf();

  test_multi_kernel_mismatched_loop_depths();
  test_artificial_deadlock();
  upsample2d_test();
  up_stencil_down_test();
  stencil_chain_multi_kernel_test();
  test_if_construction();
  test_time_sharing_gaussian_pyramid();
  jacobi_2d_2_test();
  register_file_test();
  reduce_1d_test();
  reduce_2d_test();
  compute_unit_with_index_variables_test();
  downsample2d_test();
  gaussian_pyramid_test();

  return;

  heat_3d_test();
  halide_dnn_test();

  exposure_fusion();

  blur_and_downsample_test();
  downsample_and_blur_test();
  upsample_stencil_2d_test();
  upsample_stencil_1d_test();
  updown_merge_test();
  harris_unrolled_test();
  mismatched_stencil_test();
  sobel_test();
  upsample_reduce_test();
  pointwise_test();
  stencil_3d_test();
  soda_blur_test();
  two_in_window_test();
  two_in_conv2d_test();
  warp_and_upsample_test();
}

int main(int argc, char** argv) {

  if (argc > 1) {
    assert(argc == 2);
    string cmd = argv[1];

    if (cmd == "dhuff-playground") {
      dhuff_playground();
      return 0;
    }

    if (cmd == "jliu-playground") {
      playground();
      return 0;
    }

    if (cmd == "fpga-asplos-flow") {
      fpga_asplos_tests();
      return 0;
    }

    if (cmd == "cgra-flow") {
      cgra_flow_tests();
      return 0;
    }


    if (cmd == "dse-flow") {
      dse_flow_tests();
      return 0;
    }

    if (cmd == "asplos-examples") {
      generate_asplos_examples();
      return 0;
    }

    if (cmd == "simple-example-progs") {
      generate_simple_example_progs();
      return 0;
    }

    if (cmd == "multi-channel-example") {
      multi_channel_example();
      return 0;
    }

    if (cmd == "isabela-project") {
      prog_splitting_tests();
      return 0;
    }

    if (cmd == "blur-example") {
      blur_example();
      return 0;
    }
    if (cmd == "dhuff-tests") {
      dhuff_tests();
      return 0;
    }

    if (cmd == "jliu-tests") {
      dhuff_tests();
      cgra_flow_tests();
      lake_tests();
      bool use_multi_accessor_tile = true;
      bool gen_config_only = false;
      test_glb(gen_config_only, use_multi_accessor_tile, "aha_garnet_design_new");
      return 0;
    }

    if (cmd == "lake-tests") {
      lake_tests();
      return 0;
    }

    if (cmd == "baseline-tests") {
      unoptimized_mem_baseline();
      return 0;
    }

    if (cmd == "fetchwidth-tests") {
      test_fetchwidth2_mem(false, true, "aha_garnet_design_fetch2");
      return 0;
    }

    if (cmd == "unit-tests") {
      vectorization_unit_tests();
      return 0;
    }

    if (cmd == "pond-tests") {
      bool run_verilator = true;
      test_pond("aha_garnet_design_pond", run_verilator);
      return 0;
    }

    if (cmd == "dp-tests") {
      bool gen_config_only = false;
      bool use_multi_accessor_tile = true;
      test_dual_port_mem(gen_config_only, use_multi_accessor_tile, "aha_garnet_design_dp");
      return 0;
    }

    if (cmd == "dp-latency") {
      test_dual_port_latency();
      return 0;
    }

    if (cmd == "pond-exp") {
      bool run_verilator = false;
      test_pond("aha_garnet_design_pond", run_verilator);
      return 0;
    }

    if (cmd == "energy-tests") {
      test_energy_model("aha_energy_model");
      return 0;
    }

    if (cmd == "glb-tests") {
      bool use_multi_accessor_tile = true;
      bool gen_config_only = false;
      test_glb(gen_config_only, use_multi_accessor_tile, "aha_garnet_design_new");
      return 0;
    }

    if (cmd == "glb-exp") {
      bool use_multi_accessor_tile = true;
      bool gen_config_only = true;
      test_glb(gen_config_only, use_multi_accessor_tile, "aha_garnet_design_new");
      return 0;
    }

    if (cmd == "lake-exp") {
      bool use_multi_accessor_tile = true;
      bool gen_config_only = true;
      test_single_port_mem(gen_config_only, use_multi_accessor_tile, "aha_garnet_design_new");
      return 0;
    }

    if (cmd == "resnet-exp") {
      resnet_profiling();
      return 0;
    }

    if (cmd == "smt-tests") {
      lake_smt_tests();
      return 0;
    }

    if (cmd == "program_representation") {
      prog prg = conv_1d();
      aha_talk_print_program_representation(prg);
      return 0;
    }

    if (cmd == "raw_deps") {
      prog prg = conv_1d();
      aha_talk_print_raw_deps(prg);
      return 0;
    }

    if (cmd == "conv_1d") {
      prog prg = conv_1d();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_1d_bc") {
      prog prg = conv_1d_bc();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_2d") {
      prog prg = conv_2d();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_2d_bc_test") {
      conv_2d_bc_test();
      return 0;
    }

    if (cmd == "conv_2d_bc") {
      prog prg = conv_2d_bc();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "minitest") {
      mini_application_tests();
      cout << "Minitest passed" << endl;
      return 0;
    }

    cout << "Error: Unrecognized command: " << cmd << endl;
    assert(false);

  } else if (argc == 1) {

    system("mkdir -p scratch");
    application_tests();
    memory_tile_tests();
    //prog_splitting_tests();
    cout << "All tests passed" << endl;

  } else {
    assert(false);
  }

  return 0;
}

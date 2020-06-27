#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "coreir_backend.h"
#include "coreir_lib.h"

#include "prog.h"

#include <chrono>

void compare(vector<string>& opt, vector<string>& naive) {
  assert(opt.size() == naive.size());
  for (size_t i = 0; i < opt.size(); i++) {
    if (!(opt.at(i) == naive.at(i))) {
      cout << "Error: Opt and naive disagree at " << i << ", opt = " << opt.at(i) << ", naive = " << naive.at(i) << endl;
    }
    assert(opt.at(i) == naive.at(i));
  }
  assert(opt == naive);
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

  //prog prg;
  //prg.compute_unit_file = "clockwork_target_compute.h";
  //prg.name = "clockwork_target";

//// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  //prg.add_input("hw_input_stencil");
  //prg.buffer_port_widths["hw_input_stencil"] = 16;
//// Stencil<void *> &hw_output_stencil = arg_1;
  //prg.add_output("hw_output_stencil");
  //prg.buffer_port_widths["hw_output_stencil"] = 16;


////consuming hw_input.stencil
//////producing conv.stencil
  //auto loop_conv_s0_y = prg.add_loop("conv_s0_y", 0, 62);
  //auto loop_conv_s0_x = loop_conv_s0_y->add_loop("conv_s0_x", 0, 62);

////store is: conv.stencil(conv.s0.x, conv.s0.y) = 0
  //auto compute_conv_stencil = loop_conv_s0_x->add_op("compute_conv_stencil");
  //compute_conv_stencil->add_function("compute_conv_stencil");
  //prg.buffer_port_widths["conv_stencil"] = 16;
  //compute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y");
  //auto loop_conv_s1_y = prg.add_loop("conv_s1_y", 0, 62);
  //auto loop_conv_s1_x = loop_conv_s1_y->add_loop("conv_s1_x", 0, 62);

////store is: conv.stencil(conv.s1.x, conv.s1.y) = ((int32(hw_input.stencil(conv.s1.x, conv.s1.y))*17) + (conv.stencil(conv.s1.x, conv.s1.y) + ((int32(hw_input.stencil((conv.s1.x + 1), conv.s1.y))*7) + ((int32(hw_input.stencil((conv.s1.x + 2), conv.s1.y))*5) + ((int32(hw_input.stencil(conv.s1.x, (conv.s1.y + 1)))*4) + ((int32(hw_input.stencil((conv.s1.x + 1), (conv.s1.y + 1)))*19) + ((int32(hw_input.stencil((conv.s1.x + 2), (conv.s1.y + 1)))*21) + ((int32(hw_input.stencil(conv.s1.x, (conv.s1.y + 2)))*6) + ((int32(hw_input.stencil((conv.s1.x + 2), (conv.s1.y + 2)))*15) + (int32(hw_input.stencil((conv.s1.x + 1), (conv.s1.y + 2)))*4))))))))))
  //auto compute_conv_stencil_1 = loop_conv_s1_x->add_op("compute_conv_stencil_1");
  //compute_conv_stencil_1->add_function("compute_conv_stencil_1");
  //compute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_x", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 1)", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 2)", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_x", "(conv_s1_y + 1)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 1)", "(conv_s1_y + 1)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 2)", "(conv_s1_y + 1)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_x", "(conv_s1_y + 2)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 2)", "(conv_s1_y + 2)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 1)", "(conv_s1_y + 2)");
  //compute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y");

////consuming conv.stencil
  //auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
  //auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);

////store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  //auto compute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("compute_hw_output_stencil");
  //compute_hw_output_stencil->add_function("compute_hw_output_stencil");
  //compute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  //compute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  //return prg;
  //prog prg;
  //prg.compute_unit_file = "clockwork_target_compute.h";
  //prg.name = "clockwork_target";

//// Stencil<void *> &hw_output_stencil = arg_0;
  //prg.add_output("hw_output_stencil");
  //prg.buffer_port_widths["hw_output_stencil"] = 16;
//// Stencil<void *> &hw_input_stencil = arg_1;
  //prg.add_input("hw_input_stencil");
  //prg.buffer_port_widths["hw_input_stencil"] = 16;

  //auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
  //auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);
//////producing conv.stencil
  //auto loop_conv_s0_y = loop_hw_output_s0_x_xo->add_loop("conv_s0_y", 0, 62);
  //auto loop_conv_s0_x = loop_conv_s0_y->add_loop("conv_s0_x", 0, 62);

////store is: conv.stencil(conv.s0.x, conv.s0.y) = 0
  //auto compute_conv_stencil = loop_conv_s0_x->add_op("compute_conv_stencil");
  //compute_conv_stencil->add_function("compute_conv_stencil");
  //prg.buffer_port_widths["conv_stencil"] = 16;
  //compute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y");

////consuming hw_input.stencil
  //auto loop_conv_s1_y = loop_hw_output_s0_x_xo->add_loop("conv_s1_y", 0, 62);
  //auto loop_conv_s1_x = loop_conv_s1_y->add_loop("conv_s1_x", 0, 62);

////store is: conv.stencil(conv.s1.x, conv.s1.y) = ((int32(hw_input.stencil(conv.s1.x, conv.s1.y))*17) + (conv.stencil(conv.s1.x, conv.s1.y) + ((int32(hw_input.stencil((conv.s1.x + 1), conv.s1.y))*7) + ((int32(hw_input.stencil((conv.s1.x + 2), conv.s1.y))*5) + ((int32(hw_input.stencil(conv.s1.x, (conv.s1.y + 1)))*4) + ((int32(hw_input.stencil((conv.s1.x + 1), (conv.s1.y + 1)))*19) + ((int32(hw_input.stencil((conv.s1.x + 2), (conv.s1.y + 1)))*21) + ((int32(hw_input.stencil(conv.s1.x, (conv.s1.y + 2)))*6) + ((int32(hw_input.stencil((conv.s1.x + 2), (conv.s1.y + 2)))*15) + (int32(hw_input.stencil((conv.s1.x + 1), (conv.s1.y + 2)))*4))))))))))
  //auto compute_conv_stencil_1 = loop_conv_s1_x->add_op("compute_conv_stencil_1");
  //compute_conv_stencil_1->add_function("compute_conv_stencil_1");
  //compute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_x", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 1)", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 2)", "conv_s1_y");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_x", "(conv_s1_y + 1)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 1)", "(conv_s1_y + 1)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 2)", "(conv_s1_y + 1)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_x", "(conv_s1_y + 2)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 2)", "(conv_s1_y + 2)");
  //compute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_x + 1)", "(conv_s1_y + 2)");
  //compute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y");

////consuming conv.stencil

////store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  //auto compute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("compute_hw_output_stencil");
  //compute_hw_output_stencil->add_function("compute_hw_output_stencil");
  //compute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  //compute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  //return prg;

  //prog prg;
  //prg.compute_unit_file = "clockwork_target_compute.h";
  //prg.name = "clockwork_target";

//// Stencil<void *> &hw_output = arg_0;
  //prg.add_output("hw_output");
  //prg.buffer_port_widths["hw_output"] = 16;
//// Stencil<void *> &hw_inputa0 = arg_1;
  //prg.add_input("hw_inputa0");
  //prg.buffer_port_widths["hw_inputa0"] = 16;

  //auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
//////producing kernel
  //auto loop_kernel_s0_y = loop_hw_output_s0_y_yo->add_loop("kernel_s0_y", 0, 3);
  //auto loop_kernel_s0_x = loop_kernel_s0_y->add_loop("kernel_s0_x", 0, 3);

////store is: kernela1[(kernel.s0.x + (kernel.s0.y*3))] = 0
  //auto compute_kernela1 = loop_kernel_s0_x->add_op("compute_kernela1");
  //compute_kernela1->add_function("compute_kernela1");
  //prg.buffer_port_widths["kernela1"] = 16;
  //compute_kernela1->add_store("kernela1", "(kernel.s0.x + (kernel.s0.y*3))");

////store is: kernela1[0] = 17
  //auto compute_kernela1_1 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_1");
  //compute_kernela1_1->add_function("compute_kernela1_1");
  //compute_kernela1_1->add_store("kernela1", "0");

////store is: kernela1[3] = 4
  //auto compute_kernela1_2 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_2");
  //compute_kernela1_2->add_function("compute_kernela1_2");
  //compute_kernela1_2->add_store("kernela1", "3");

////store is: kernela1[6] = 6
  //auto compute_kernela1_3 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_3");
  //compute_kernela1_3->add_function("compute_kernela1_3");
  //compute_kernela1_3->add_store("kernela1", "6");

////store is: kernela1[1] = 7
  //auto compute_kernela1_4 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_4");
  //compute_kernela1_4->add_function("compute_kernela1_4");
  //compute_kernela1_4->add_store("kernela1", "1");

////store is: kernela1[4] = 19
  //auto compute_kernela1_5 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_5");
  //compute_kernela1_5->add_function("compute_kernela1_5");
  //compute_kernela1_5->add_store("kernela1", "4");

////store is: kernela1[7] = 4
  //auto compute_kernela1_6 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_6");
  //compute_kernela1_6->add_function("compute_kernela1_6");
  //compute_kernela1_6->add_store("kernela1", "7");

////store is: kernela1[2] = 5
  //auto compute_kernela1_7 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_7");
  //compute_kernela1_7->add_function("compute_kernela1_7");
  //compute_kernela1_7->add_store("kernela1", "2");

////store is: kernela1[5] = 21
  //auto compute_kernela1_8 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_8");
  //compute_kernela1_8->add_function("compute_kernela1_8");
  //compute_kernela1_8->add_store("kernela1", "5");

////store is: kernela1[8] = 15
  //auto compute_kernela1_9 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_9");
  //compute_kernela1_9->add_function("compute_kernela1_9");
  //compute_kernela1_9->add_store("kernela1", "8");
////consuming kernel
  //auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);
//////producing conv
  //auto loop_conv_s0_y = loop_hw_output_s0_x_xo->add_loop("conv_s0_y", 0, 62);
  //auto loop_conv_s0_x = loop_conv_s0_y->add_loop("conv_s0_x", 0, 62);

////store is: conva2[(conv.s0.x + (conv.s0.y*62))] = 0
  //auto compute_conva2 = loop_conv_s0_x->add_op("compute_conva2");
  //compute_conva2->add_function("compute_conva2");
  //prg.buffer_port_widths["conva2"] = 16;
  //compute_conva2->add_store("conva2", "(conv.s0.x + (conv.s0.y*62))");
////consuming hw_input
  //auto loop_conv_s1_y = loop_hw_output_s0_x_xo->add_loop("conv_s1_y", 0, 62);
  //auto loop_conv_s1_x = loop_conv_s1_y->add_loop("conv_s1_x", 0, 62);

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[0]*int32(hw_inputa0[(conv.s1.x + (conv.s1.y*64))])))
  //auto compute_conva2_1 = loop_conv_s1_x->add_op("compute_conva2_1");
  //compute_conva2_1->add_function("compute_conva2_1");
  //compute_conva2_1->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_1->add_load("hw_inputa0", "(conv.s1.x + (conv.s1.y*64))");
  //compute_conva2_1->add_load("kernela1", "0");
  //compute_conva2_1->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[1]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 1)])))
  //auto compute_conva2_2 = loop_conv_s1_x->add_op("compute_conva2_2");
  //compute_conva2_2->add_function("compute_conva2_2");
  //compute_conva2_2->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_2->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 1)");
  //compute_conva2_2->add_load("kernela1", "1");
  //compute_conva2_2->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[2]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 2)])))
  //auto compute_conva2_3 = loop_conv_s1_x->add_op("compute_conva2_3");
  //compute_conva2_3->add_function("compute_conva2_3");
  //compute_conva2_3->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_3->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 2)");
  //compute_conva2_3->add_load("kernela1", "2");
  //compute_conva2_3->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[3]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 64)])))
  //auto compute_conva2_4 = loop_conv_s1_x->add_op("compute_conva2_4");
  //compute_conva2_4->add_function("compute_conva2_4");
  //compute_conva2_4->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_4->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 64)");
  //compute_conva2_4->add_load("kernela1", "3");
  //compute_conva2_4->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[4]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 65)])))
  //auto compute_conva2_5 = loop_conv_s1_x->add_op("compute_conva2_5");
  //compute_conva2_5->add_function("compute_conva2_5");
  //compute_conva2_5->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_5->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 65)");
  //compute_conva2_5->add_load("kernela1", "4");
  //compute_conva2_5->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[5]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 66)])))
  //auto compute_conva2_6 = loop_conv_s1_x->add_op("compute_conva2_6");
  //compute_conva2_6->add_function("compute_conva2_6");
  //compute_conva2_6->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_6->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 66)");
  //compute_conva2_6->add_load("kernela1", "5");
  //compute_conva2_6->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[6]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 128)])))
  //auto compute_conva2_7 = loop_conv_s1_x->add_op("compute_conva2_7");
  //compute_conva2_7->add_function("compute_conva2_7");
  //compute_conva2_7->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_7->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 128)");
  //compute_conva2_7->add_load("kernela1", "6");
  //compute_conva2_7->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[7]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 129)])))
  //auto compute_conva2_8 = loop_conv_s1_x->add_op("compute_conva2_8");
  //compute_conva2_8->add_function("compute_conva2_8");
  //compute_conva2_8->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_8->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 129)");
  //compute_conva2_8->add_load("kernela1", "7");
  //compute_conva2_8->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");

////store is: conva2[(conv.s1.x + (conv.s1.y*62))] = (conva2[(conv.s1.x + (conv.s1.y*62))] + (kernela1[8]*int32(hw_inputa0[((conv.s1.x + (conv.s1.y*64)) + 130)])))
  //auto compute_conva2_9 = loop_conv_s1_x->add_op("compute_conva2_9");
  //compute_conva2_9->add_function("compute_conva2_9");
  //compute_conva2_9->add_load("conva2", "(conv.s1.x + (conv.s1.y*62))");
  //compute_conva2_9->add_load("hw_inputa0", "((conv.s1.x + (conv.s1.y*64)) + 130)");
  //compute_conva2_9->add_load("kernela1", "8");
  //compute_conva2_9->add_store("conva2", "(conv.s1.x + (conv.s1.y*62))");
////consuming conv

////store is: hw_output[(hw_output.s0.x.xo + (hw_output.s0.y.yo*62))] = uint8(conva2[(hw_output.s0.x.xo + (hw_output.s0.y.yo*62))])
  //auto compute_hw_output = loop_hw_output_s0_x_xo->add_op("compute_hw_output");
  //compute_hw_output->add_function("compute_hw_output");
  //compute_hw_output->add_load("conva2", "(hw_output.s0.x.xo + (hw_output.s0.y.yo*62))");
  //compute_hw_output->add_store("hw_output", "(hw_output.s0.x.xo + (hw_output.s0.y.yo*62))");

  //return prg;

  //prog prg;
  //prg.compute_unit_file = "clockwork_target_compute.h";
  //prg.name = "clockwork_target";

//// Stencil<void *> &_hw_output = arg_0;
  //prg.add_output("_hw_output");
  //prg.buffer_port_widths["_hw_output"] = 16;
//// Stencil<void *> &_hw_input = arg_1;
  //prg.add_input("_hw_inputa0");
  //prg.buffer_port_widths["_hw_inputa0"] = 16;

  //auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 62);
//////producing kernel
  //auto loop_kernel_s0_y = loop_hw_output_s0_y_yo->add_loop("kernel_s0_y", 0, 3);
  //auto loop_kernel_s0_x = loop_kernel_s0_y->add_loop("kernel_s0_x", 0, 3);

////store is: kernela1[(kernel.s0.x + (kernel.s0.y*3))] = 0
  //auto compute_kernela1 = loop_kernel_s0_x->add_op("compute_kernela1");
  //compute_kernela1->add_function("compute_kernela1");
  //prg.buffer_port_widths["_kernela1"] = 16;
  //compute_kernela1->add_store("_kernela1", "(kernel_s0_x + (kernel_s0_y*3))");

//////store is: kernela1[0] = 17
  ////auto compute_kernela1$1 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_1");
  ////compute_kernela1$1->add_function("compute_kernela1_1");
  ////compute_kernela1$1->add_store("_kernela1", "0");

//////store is: kernela1[3] = 4
  ////auto compute_kernela1$2 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_2");
  ////compute_kernela1$2->add_function("compute_kernela1_2");
  ////compute_kernela1$2->add_store("_kernela1", "3");

//////store is: kernela1[6] = 6
  ////auto compute_kernela1$3 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_3");
  ////compute_kernela1$3->add_function("compute_kernela1_3");
  ////compute_kernela1$3->add_store("_kernela1", "6");

//////store is: kernela1[1] = 7
  ////auto compute_kernela1$4 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_4");
  ////compute_kernela1$4->add_function("compute_kernela1_4");
  ////compute_kernela1$4->add_store("_kernela1", "1");

//////store is: kernela1[4] = 19
  ////auto compute_kernela1$5 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_5");
  ////compute_kernela1$5->add_function("compute_kernela1_5");
  ////compute_kernela1$5->add_store("_kernela1", "4");

//////store is: kernela1[7] = 4
  ////auto compute_kernela1$6 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_6");
  ////compute_kernela1$6->add_function("compute_kernela1_6");
  ////compute_kernela1$6->add_store("_kernela1", "7");

//////store is: kernela1[2] = 5
  ////auto compute_kernela1$7 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_7");
  ////compute_kernela1$7->add_function("compute_kernela1_7");
  ////compute_kernela1$7->add_store("_kernela1", "2");

//////store is: kernela1[5] = 21
  ////auto compute_kernela1$8 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_8");
  ////compute_kernela1$8->add_function("compute_kernela1_8");
  ////compute_kernela1$8->add_store("_kernela1", "5");

//////store is: kernela1[8] = 15
  ////auto compute_kernela1$9 = loop_hw_output_s0_y_yo->add_op("compute_kernela1_9");
  ////compute_kernela1$9->add_function("compute_kernela1_9");
  ////compute_kernela1$9->add_store("_kernela1", "8");
////consuming kernel
  //auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, 62);
//////producing conv
  //auto loop_conv_s0_y = loop_hw_output_s0_x_xo->add_loop("conv_s0_y", 0, 62);
  //auto loop_conv_s0_x = loop_conv_s0_y->add_loop("conv_s0_x", 0, 62);

  //auto compute_conva2 = loop_conv_s0_x->add_op("compute_conva2");
  //compute_conva2->add_function("compute_conva2");
  //prg.buffer_port_widths["_conva2"] = 16;
  //compute_conva2->add_store("_conva2", "(conv_s0_x + (conv_s0_y*62))");
////consuming hw_input
  //auto loop_conv_s1_y = loop_hw_output_s0_x_xo->add_loop("conv_s1_y", 0, 62);
  //auto loop_conv_s1_x = loop_conv_s1_y->add_loop("conv_s1_x", 0, 62);

  //auto compute_conva2$1 = loop_conv_s1_x->add_op("compute_conva2_1");
  //compute_conva2$1->add_function("compute_conva2_1");
  //compute_conva2$1->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  //prg.buffer_port_widths["_hw_inputa0"] = 16;
  //compute_conva2$1->add_load("_hw_inputa0", "(conv_s1_x + (conv_s1_y*64))");
  //compute_conva2$1->add_load("_kernela1", "0");
  //compute_conva2$1->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$2 = loop_conv_s1_x->add_op("compute_conva2_2");
  ////compute_conva2$2->add_function("compute_conva2_2");
  ////compute_conva2$2->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$2->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 1)");
  ////compute_conva2$2->add_load("_kernela1", "1");
  ////compute_conva2$2->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$3 = loop_conv_s1_x->add_op("compute_conva2_3");
  ////compute_conva2$3->add_function("compute_conva2_3");
  ////compute_conva2$3->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$3->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 2)");
  ////compute_conva2$3->add_load("_kernela1", "2");
  ////compute_conva2$3->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$4 = loop_conv_s1_x->add_op("compute_conva2_4");
  ////compute_conva2$4->add_function("compute_conva2_4");
  ////compute_conva2$4->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$4->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 64)");
  ////compute_conva2$4->add_load("_kernela1", "3");
  ////compute_conva2$4->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$5 = loop_conv_s1_x->add_op("compute_conva2_5");
  ////compute_conva2$5->add_function("compute_conva2$5");
  ////compute_conva2$5->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$5->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 65)");
  ////compute_conva2$5->add_load("_kernela1", "4");
  ////compute_conva2$5->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$6 = loop_conv_s1_x->add_op("compute_conva2_6");
  ////compute_conva2$6->add_function("compute_conva2_6");
  ////compute_conva2$6->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$6->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 66)");
  ////compute_conva2$6->add_load("_kernela1", "5");
  ////compute_conva2$6->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$7 = loop_conv_s1_x->add_op("compute_conva2_7");
  ////compute_conva2$7->add_function("compute_conva2_7");
  ////compute_conva2$7->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$7->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 128)");
  ////compute_conva2$7->add_load("_kernela1", "6");
  ////compute_conva2$7->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$8 = loop_conv_s1_x->add_op("compute_conva2_8");
  ////compute_conva2$8->add_function("compute_conva2_8");
  ////compute_conva2$8->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$8->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 129)");
  ////compute_conva2$8->add_load("_kernela1", "7");
  ////compute_conva2$8->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  ////auto compute_conva2$9 = loop_conv_s1_x->add_op("compute_conva2_9");
  ////compute_conva2$9->add_function("compute_conva2_9");
  ////compute_conva2$9->add_load("_conva2", "(conv_s1_x + (conv_s1_y*62))");
  ////compute_conva2$9->add_load("_hw_inputa0", "((conv_s1_x + (conv_s1_y*64)) + 130)");
  ////compute_conva2$9->add_load("_kernela1", "8");
  ////compute_conva2$9->add_store("_conva2", "(conv_s1_x + (conv_s1_y*62))");

  //auto compute_hw_output = loop_hw_output_s0_x_xo->add_op("compute_hw_output");
  //compute_hw_output->add_function("compute_hw_output");
  //compute_hw_output->add_load("_conva2", "(hw_output_s0_x_xo + (hw_output_s0_y_yo*62))");
  //prg.buffer_port_widths["_hw_output"] = 16;
  //compute_hw_output->add_store("_hw_output", "(hw_output_s0_x_xo + (hw_output_s0_y_yo*62))");

  //return prg;
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

void buffer_vectorization(string vec_buf_name, int dim_id, int fetch_width, map<string, UBuffer> & buffers) {
    /* Function to vectorize the buffer access, will rewrite the buffer access pattern,
     * generate the new domain and access map and also add two other buffer on
     * both input and output side
     * */
    //TODO: add SRAM, do not overwrite the original sram
    UBuffer agg, tb, sram;
    for(auto it : buffers) {
        if (it.first == vec_buf_name) {
            auto target_buffer = it.second;
            target_buffer.vectorization(dim_id, fetch_width, agg, sram, tb);
            break;
        }
        //else {
        //    //add extra dimension in the schedule vector
        //    auto buffer = it.second;
        //    for(auto it_sched : buffer.schedule) {
        //        cout << "pad one more dim" << endl;
        //        umap* sched = it_sched.second;
        //        string key = it_sched.first;
        //        buffer.schedule[key] = pad_one_more_dim_to_sched_map(buffer.ctx, sched, "0");
        //    }
        //}
    }
    buffers.erase(vec_buf_name);
    buffers[agg.name] = agg;
    buffers[sram.name] = sram;
    buffers[tb.name] = tb;
}

//This method does not work.
isl_union_map* filter_inner_sram_deps(isl_ctx* ctx, isl_union_map* deps) {
    vector<isl_map*> deps_map = get_maps(deps);
    umap* ret = rdmap(ctx, "{}");
    for ( auto m : deps_map ) {
        auto dname = domain_name(m);
        auto rname = range_name(m);
        bool is_sram_in = dname.find("output_vec") != std::string::npos;
        bool is_sram_out = rname.find("output") != std::string::npos;
        if (is_sram_in && is_sram_out) {
            ret = unn(ret, to_umap(inv(m)));
        }
        else {
            cout << "union: " << str(m) << endl;
            ret = unn(ret, to_umap(m));
        }
    }
    return ret;
}

isl_union_map* optimized_schedule_from_buffers(const map<string, UBuffer> &buffers) {
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
    cout << "Global Schedule: " << str(global_sched) << endl;
    cout << "Producer Map: " << str(global_p_map) << endl;
    cout << "Consumer Map: " << str(global_c_map) << endl;
    auto order_deps = get_rel_order(ctx, global_sched);
    cout << "Lex_lt : " << str(lex_lt(global_sched, global_sched)) << endl;
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //proximity = filter_inner_sram_deps(ctx, proximity);

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto sched_map = its(isl_schedule_get_map(sched), domain);
    return sched_map;

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

isl_union_map* optimized_schedule_from_buffers_flatten(const map<string, UBuffer> &buffers, bool second_round) {
    map<string, int> ii_map = {{"input", 1}, {"output", 1}, {"input_vec", 1}, {"output_vec",1}};
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
    global_c_map = flatten_umap_domain(ctx, global_c_map, ii_map);
    global_p_map = flatten_umap_domain(ctx, global_p_map, ii_map);
    global_sched = flatten_umap_domain(ctx, global_sched, ii_map);
    isl_union_set* domain = ::domain(global_sched);

    cout << "Global Schedule: " << str(global_sched) << endl;
    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    if (second_round)
        proximity = remove_dep_domain_name(proximity, "input_vec");
    //proximity = filter_inner_sram_deps(ctx, proximity);

    cout << "Raw_deps: " << str(raw_deps) << endl;
    cout << "proximity: " << str(proximity) << endl;
    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
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
  buffers_opt.at("buf").generate_bank_and_merge(opt);
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

map<string, umap*> get_op2sched(map<string, UBuffer>& buffers_opt, umap* opt_sched) {
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
          auto origin_access_map = buffer.access_map.at(pt);
          buffer.access_map.at(pt) = flatten_umap_domain(buffer.ctx, origin_access_map);
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
          //flatten_access map
          auto origin_access_map = buffer.access_map.at(pt);
          buffer.access_map.at(pt) = flatten_umap_domain(buffer.ctx, origin_access_map);
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
  for (auto buf : buffers_opt) {
      update_map[buf.first] = false;
  }
  buffers_opt.at("buf1_sram").hardware = sram;
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
            buffers_opt.at("buf1_sram").schedule_read_sram(cycle, iter_set, buf);
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

void reaccess_test() {

  prog prg;
  prg.compute_unit_file = "vec_access.h";
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
  int max_inpt = 2;
  int max_outpt = 2;
  for (auto& b : bufs) {
    b.second.generate_bank_and_merge(opt);

    //Assign an configuration file,
    json config;
    config["name"][0] = "TOP_address.csv";
    b.second.set_config(config);

    b.second.port_group2bank(max_inpt, max_outpt);
  }
  generate_coreir(opt, bufs, prg, schedmap);
#endif

  //assert(false);

  //generate_optimized_code(prg);
  //assert(false);

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
        cout << "\tconfig_key: " << config_key << ", val: " << val << endl;
    }
    return ret;
}
#endif

void shift_reg_test() {

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

  auto q = prg.add_nest("qo", 0, 6, "qi", 0, 14);
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
  //buffers.at("buf").port_reduction();

  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  buffers_opt.at("buf").generate_bank_and_merge(opt);
  cout << buffers_opt.at("buf") << endl;
  buffers_opt.at("buf").port_group2bank(2, 2);
  cout << buffers_opt.at("buf") << endl;

#ifdef COREIR
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cwlib(context);
  json config_reg_map = parse_config_file("sample_configuration.txt");
  buffers_opt.at("buf").set_config(config_reg_map);
  generate_coreir(opt, context, buffers_opt.at("buf"));

  if(!saveToFile(context->getNamespace("global"), "conv33_ubuffer.json")) {
    cout << "Could not save ubuffer coreir!" << endl;
    context->die();
  }
  CoreIR::deleteContext(context);
#endif

  assert(false);
  auto rewrite_buf = buffers_opt.at("buf").port_grouping(4);
  for (auto buf : rewrite_buf) {
    cout << buf << endl;
    buffers_opt[buf.name] = buf;
  }
  buffers_opt.erase("buf");
  buffer_vectorization("buf1", 1, 4, buffers_opt);

  //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
  auto opt_sched = optimized_schedule_from_buffers_flatten(buffers_opt, true);
  cout << codegen_c(opt_sched) << endl;

  buffers_opt.erase("buf0");
  buffers_opt.erase("in");
  buffers_opt.erase("out");

  HWconstraints sram = {4, 1, 512, false, true};

  lattice_schedule_buf(prg.ctx, buffers_opt, opt_sched, sram);

  TileConstraints tc{1,3,0};
  emit_address_stream2file(buffers_opt, "buf1_sram", "buf1_sram", "shift_reg_SRAM_address", false, tc);
  emit_address_stream2file(buffers_opt, "buf1_tb", "buf1_agg", "shift_reg_TOP_address", true, tc);
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
  buffers_opt.at("buf").generate_bank_and_merge(opt);
  cout << buffers_opt.at("buf") << endl;
  auto rewrite_buf = buffers_opt.at("buf").port_grouping(4);
  for (auto buf : rewrite_buf) {
    cout << buf << endl;
    buffers_opt[buf.name] = buf;
  }
  buffers_opt.erase("buf");
  buffer_vectorization("buf1", 1, 4, buffers_opt);

  //second time
  //auto opt_sched = optimized_schedule_from_buffers(buffers_opt);
  auto opt_sched = optimized_schedule_from_buffers_flatten(buffers_opt, true);
  cout << codegen_c(opt_sched) << endl;
  cout << str(opt_sched) << endl;

  buffers_opt.erase("buf0");
  buffers_opt.erase("in");
  buffers_opt.erase("out");

  HWconstraints sram = {4, 1, 512, false, true};

  lattice_schedule_buf(prg.ctx, buffers_opt, opt_sched, sram);

  TileConstraints tc{1,3,0}, tc_tape{2,2,4};
  emit_address_stream2file(buffers_opt, "buf1_sram", "buf1_sram", "SRAM_address_tapeout", false, tc);
  emit_address_stream2file(buffers_opt, "buf1_tb", "buf1_agg", "TOP_address", true, tc);
  emit_address_stream2file(buffers_opt, "buf1_tb", "buf1_agg", "TOP_address_tapeout", true, tc_tape);

  compare_to_gold("SRAM_address_tapeout.csv");
  compare_to_gold("TOP_address.csv");
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

std::vector<std::string> run_regression_tb(const std::string& name) {
  int res = system(string("g++ -fstack-protector-all -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  ifstream infile("regression_result_" + name + ".txt");
  vector<string> lines;
  std::string line;
  while (std::getline(infile, line))
  {
    lines.push_back(line);
  }
  return lines;
}

std::vector<std::string> run_regression_tb(prog& prg) {
  return run_regression_tb(prg.name);
}


void run_tb(prog& prg) {
  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void generate_regression_testbench(prog& prg, map<string, UBuffer>& buffers) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream in_pix(\"" << "input_pixels_regression_result_" << prg.name << ".txt\");" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  vector<string> optimized_streams;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());

    rgtb << tab(1) << "HWStream<" << buf.bundle_type_string(bundle) << " > " << bundle << ";" << endl;
    optimized_streams.push_back(bundle);
  }
  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    rgtb << tab(1) << "HWStream<" << buf.bundle_type_string(bundle) << " > " << bundle << ";" << endl;
    optimized_streams.push_back(bundle);
  }

  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());
    int port_width = buf.port_width(in);
    int bundle_width = buf.port_bundle_width(bundle);

    auto cmap = prg.consumer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);

    vector<string> pts = buf.port_bundles.at(bundle);
    int num_ports = pts.size();

    rgtb << tab(1) << "// cmap    : " << str(cmap) << endl;
    rgtb << tab(1) << "// read map: " << str(read_map) << endl;
    rgtb << tab(1) << "// rng     : " << str(rng) << endl;

    rgtb << tab(1) << "for (int i = 0; i < " << num_pushes << "; i++) {" << endl;
    rgtb << tab(2) << buf.bundle_type_string(bundle) << " in_val;" << endl;
    for (int p = 0; p < num_ports; p++) {
      string next_val = str(num_ports) + "*i + " + str(p);
      rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      rgtb << tab(2) << "in_pix << in_val << endl;" << endl;
    }
    rgtb << tab(2) << bundle << ".write(in_val);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }

  rgtb << tab(1) << prg.name << "(" << comma_list(optimized_streams) << ");" << endl << endl;

  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    auto cmap = prg.producer_map(out);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pops = int_upper_bound(range_card);
    int port_width = buf.port_width(out);

    vector<string> pts = buf.port_bundles.at(bundle);
    int num_ports = pts.size();

    rgtb << tab(1) << "for (int i = 0; i < " << (num_pops) << "; i++) {" << endl;
    rgtb << tab(2) << buf.bundle_type_string(bundle) << " actual = " << bundle << ".read();" << endl;
    for (int p = 0; p < num_ports; p++) {
      rgtb << tab(2) << "auto actual_lane_" << p
        << " = actual.extract<" << p << "*" << port_width << ", "
        << (p + 1)*port_width - 1 << ">();" << endl;

      rgtb << tab(2) << "fout << actual_lane_" << p << " << endl;" << endl;
      //rgtb << tab(2) << "fout << (uint64_t) actual_lane_" << p << " << endl;" << endl;
    }

    rgtb << tab(1) << "}" << endl << endl;
  }

  rgtb << tab(1) << "in_pix.close();" << endl;
  rgtb << tab(1) << "fout.close();" << endl;
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void generate_regression_testbench(prog& prg) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  //vector<string> unoptimized_streams;
  vector<string> optimized_streams;
  for (auto in : prg.ins) {
    rgtb << tab(1) << "HWStream<" << prg.buffer_element_type_string(in) << " > " << in << ";" << endl;
    optimized_streams.push_back(in);
  }
  for (auto out : prg.outs) {
    rgtb << tab(1) << "HWStream<" << prg.buffer_element_type_string(out) << " > " << out << ";" << endl;
    optimized_streams.push_back(out);
  }

  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  for (auto in : prg.ins) {
    auto cmap = prg.consumer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);

    rgtb << tab(1) << "// cmap    : " << str(cmap) << endl;
    rgtb << tab(1) << "// read map: " << str(read_map) << endl;
    rgtb << tab(1) << "// rng     : " << str(rng) << endl;
    rgtb << tab(1) << "for (int i = 0; i < " << num_pushes << "; i++) {" << endl;
    rgtb << tab(2) << in << ".write(i);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << prg.name << "(" << comma_list(optimized_streams) << ");" << endl;

  for (auto out : prg.outs) {
    auto cmap = prg.producer_map(out);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pops = int_upper_bound(range_card);
    rgtb << tab(1) << "for (int i = 0; i < " << num_pops << "; i++) {" << endl;
    rgtb << tab(2) << "int actual = " << out << ".read();" << endl;
    rgtb << tab(2) << "fout << actual << endl;" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void regression_test(prog& prg) {
  generate_unoptimized_code(prg);

  cout << "Built unoptimized code" << endl;
  auto old_name = prg.name;
  prg.name = "unoptimized_" + old_name;
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);
  prg.name = old_name;

  cout << "Building optimized code" << endl;
  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> optimized_res = run_regression_tb(prg);

  assert(unoptimized_res.size() == optimized_res.size());
  for (size_t i = 0; i < unoptimized_res.size(); i++) {

    if (!(unoptimized_res.at(i) == optimized_res.at(i))) {
      cout << "Error: After optimization, at output " << i << " unoptimized_res != optimized_res" << endl;
      cout << "\tunoptimized = " << unoptimized_res.at(i) << endl;
      cout << "\toptimized   = " << optimized_res.at(i) << endl;
      assert(unoptimized_res.at(i) == optimized_res.at(i));
    }
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

void mmul_test() {
  prog prg;
  auto r = prg.add_loop("r", 0, 8);
  auto c = r->add_loop("c", 0, 8);
  auto rd = c->add_op("read");
  rd->add_store("T", "0");

  auto k = c->add_loop("k", 0, 8);
  auto accum = k->add_op("accum");
  accum->add_load("T", "0");
  accum->add_store("T", "0");

  auto write = c->add_op("write");
  write->add_load("T", "0");
  write->add_store("M", "r, c");


  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  isl_schedule* opt_sched = prg.optimized_schedule();

  int ind = 0;
  opt_sched = isl_schedule_map_schedule_node_bottom_up(opt_sched, print_sched_tp, &ind);


  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(isl_schedule_get_map(opt_sched), domain);
  //cout << "Optimized schedule..." << endl;
  //cout << codegen_c(schedmap);
}

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

void ram_addr_unit_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "ram_addr_unit_test";
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
  CodegenOptions options;
  options.internal = true;
  options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
  generate_app_code(options, buffers, prg, opt_sched);

  generate_regression_testbench(prg, buffers);

  int res = system(string("g++ -std=c++11 regression_tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void cnn_test() {
  prog prg = cnn_conv_layer();
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

  //auto clksched = hardware_schedule(domain, validity, proximity);
  //auto doms = get_sets(domain);
  //cout << "---- Domains..." << endl;
  //for (auto d : doms) {
    //cout << tab(1) << str(d) << endl;
  //}
  //cout << "---- Hardware schedule:" << endl;
  //for (auto s : clksched) {
    //cout << tab(1) << s.first << " -> " << str(s.second) << endl;
  //}
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

void reduce_2d_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_bounds["in"] = {3, 3};

  prg.buffer_port_widths["out"] = 32;
  prg.buffer_bounds["out"] = {1};

  prg.buffer_port_widths["I"] = 32;
  prg.buffer_bounds["I"] = {3, 3};

  prg.buffer_port_widths["tmp"] = 32;
  prg.buffer_bounds["tmp"] = {1};

  auto read_in = prg.add_nest("rd_r", 0, 3, "rd_c", 0, 3)->add_op({"I", "rd_r, rd_c"}, "id", {"in", "rd_r, rd_c"});

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 3);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "ar, ac");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  regression_test(prg);
}

//void mobilenet_test() {

  //prog prg;
  //prg.compute_unit_file = "mobilenet_compute.h";
  //prg.name = "mobilenet";
  //prg.add_input("in");
  //prg.add_input("weights");
  //prg.add_output("out");
  //prg.buffer_port_widths["in"] = 32;
  //prg.buffer_port_widths["out"] = 32;
  //prg.buffer_port_widths["dw_conv"] = 32;
  //prg.buffer_port_widths["weights"] = 32;
  //prg.buffer_port_widths["I"] = 32;

  //{
    //auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    //auto write = read_in->add_op("read_input_stream");
    //write->add_load("in", "px, py, pc");
    //write->add_store("I", "px, py, pc");
  //}

  //{
    //auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    //auto write = read_in->add_op("read_weight_input_stream");
    //write->add_load("weights", "px, py, pc");
    //write->add_store("weight_buffer", "px, py, pc");
  //}

  //{
    //// dw_conv
    //auto set_dw = prg.add_nest("dwx", 0, 14 - 2, "dwy", 0, 14 - 2, "dwc", 0, 4);
    //auto init_dw = set_dw->add_op("init_dw");
    //init_dw->add_store("dw_conv", "dwx, dwy, dwz");
    //init_dw->add_function("set_zero_32");
    //// Set dw_conv to be
    //auto update_dw = set_dw->add_nest("rx", 0, 3, "ry", 0, 3);
    //auto rdw = update_dw->add_op("rdw");
    //auto l1 = rdw->add_load("I", "dwx + rx, dwy + ry, dwc");
    //auto w = rdw->add_load("weight_buffer", "dwx + rx, dwy + ry, dwc");
    //auto l2 = rdw->add_load("dw_conv", "dwx, dwy, dwc");
    //rdw->add_function("fma", {l1, w, l2});
    //rdw->add_store("dw_conv", "dwx, dwy, dwc");
  //}

  //{
    //auto read_in = prg.add_nest("ox", 0, 14 - 2, "oy", 0, 14 - 2, "ok", 0, 4);
    //auto write = read_in->add_op("write_max_out");
    //write->add_load("dw_conv", "ox, oy, ok");
    //write->add_function("max_zero");
    //write->add_store("out", "ox, oy, ok");
  //}

  //cout << "Program code without optimization..." << endl;
  //prg.unoptimized_codegen();

  //umap* opt_sched = prg.optimized_codegen();
  //auto domain = prg.whole_iteration_domain();
  //auto schedmap = its(opt_sched, domain);
  //cout << "Optimized schedule..." << endl;
  //cout << codegen_c(schedmap);

  //auto buffers = build_buffers(prg);
  //generate_app_code(buffers, prg);

  //int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  //assert(res == 0);

  //res = system("./a.out");
  //assert(res == 0);

//}


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

    Box sbox;
    int max_dims = data_dimension();

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

    vector<string> buffers = sort_functions();
    assert(buffers.size() > 0);

    reverse(buffers);

    cout << "Buffers..." << endl;
    for (auto b : buffers) {
      cout << tab(1) << b << endl;
    }

    assert(buffers.at(0) == name);
    string n = name;
    domain_boxes = {};
    domain_boxes[n] = sbox;
    //for (auto update : app_dag.at(n).updates) {
      //fill_compute_domain(n, update);
    //}

    for (int i = 1; i < (int) buffers.size(); i++) {
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

  void populate_program(CodegenOptions& options, prog& prg, const string& name, umap* m, map<string, UBuffer>& buffers) {

    generate_compute_unit_file(prg.compute_unit_file);

    uset* whole_dom = whole_compute_domain();
    auto sorted_functions = sort_functions();

    auto action_domain = cpy(whole_dom);
    map<string, isl_set*> domain_map;
    for (auto f : sorted_functions) {
      prg.buffer_port_widths[f] =
        app_dag.at(f).pixel_width;

      Box domain = data_domain(f);
      for (int i = 0; i < domain.dimension(); i++) {
        prg.buffer_bounds[f].push_back(domain.length(i));
      }

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
          for (auto r : compute_b.intervals) {
            nest = nest->add_nest(f + "_" + to_string(i), r.min, r.max + 1);
            i++;
          }
          auto op = nest->add_op(u.name());
          cout << "added op " << op->name << endl;
          // TODO: Replace with real description of apps
          op->add_store(f, "0, 0");

          vector<string> fargs;
          for (auto p : u.get_srcs()) {
            cout << tab(1) << " op loads " << p.name << endl;
            op->add_load(p.name, "0, 0");
            if (!elem(p.name, fargs)) {
              fargs.push_back(p.name);
            }
          }

          op->add_function(u.compute_name() + "_unrolled_" + str(u.unroll_factor));
          op->unroll_factor = u.unroll_factor;

          domain_map[u.name()] =
            compute_domain(u.name());
        }
      }
    }

    cout << "Op consume / produce locs..." << endl;
    for (auto op : prg.all_ops()) {
      cout << "### " << op->name << endl;
      for (auto l : op->produce_locs) {
        cout << tab(1) << l.first << endl;
      }
      //cout << "Consume..." << endl;
      for (auto l : op->consume_locs) {
        cout << tab(1) << l.first << endl;
      }
    }

    prg.outs = {name};

    generate_app_code(options, buffers, prg, its(m, action_domain), domain_map);
    generate_regression_testbench(prg, buffers);
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
    ofstream out(name + ".soda");
    out << "kernel: " << name << endl;

    string rep = pick(app_dag).first;
    int unroll_factor = last_update(rep).unroll_factor;
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
    string max_buffer;
    int max_size = -1;
    for (auto b : external_buffers) {
      if (original_buffer_size(b) > max_size) {
        max_buffer = b;
        max_size = original_buffer_size(b);
      }
    }
    for (auto b : external_buffers) {
      if (b != max_buffer) {
        out << "input " << num_type_cstring() << ": " << b << endl;
      }
    }
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
            //bool all_producers_external = true;
            //for (auto p : producers(f)) {
              //if (!elem(p.name, external_buffers)) {
                //all_producers_external = false;
                //break;
              //}
            //}

            //if (all_producers_external) {
              //Box domain = data_domain(f);
              ////assert(domain.dimension() == 2);
              //vector<string> dims;
              //for (int i = 0; i < domain.dimension(); i++) {
                //if (i < domain.dimension() - 1) {
                  //dims.push_back(str(domain.length(i)));
                //} else {
                  //dims.push_back("*");
                //}
              //}
              //out << "input " << num_type_cstring() << ": " << f << sep_list(dims, "(", ")", ", ") << endl << endl;
            //} else {
              out << "local " << num_type_cstring() << ": " << f << zrs << " = ";
              out << soda_compute_string(width, u.def) << endl << endl;
            //}
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
    //schedule_isl();

    assert(m != nullptr);
    cout << "Schedule: " << str(m) << endl;

    map<string, UBuffer> buffers = build_buffers(m);

    prog prg;
    prg.name = name + "_naive";
    prg.compute_unit_file = prg.name + "_compute_units.h";
    populate_program(options, prg, name, m, buffers);

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

  umap* qschedule_to_map(map<string, vector<QExpr> >& schedules) {
    umap* m = rdmap(ctx, "{}");
    for (auto fn : schedules) {
      string f = fn.first;
      vector<string> sched_exprs;
      vector<string> var_names;
      int i = 0;
      for (auto v : map_find(f, schedules)) {
        string dv = "d" + to_string(i);
        sched_exprs.push_back(isl_str(v));
        cout << "Sched expr: " << sched_exprs.back() << endl;
        var_names.push_back(dv);
        i++;
      }
      var_names.pop_back();
      string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

      cout << "Map str: " << map_str << endl;
      auto rm = rdmap(ctx, map_str);
      cout << "map got str" << endl;
      m = unn(m, rm);
      isl_union_map_free(rm);
    }

    return m;
  }

  umap* schedule() {
    auto schedules = schedule_opt();
    return qschedule_to_map(schedules);

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
          //args_and_widths.push_back({arg_width*data_window_needed_by_compute(u.name(), p.name).pts().size(), p.name});
        }

        vector<string> arg_decls;
        for (auto a : args_and_widths) {
          arg_decls.push_back("hw_uint<" + to_string(a.first) + ">& " + a.second);
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
              //data_window_needed_by_compute(u.name(), p);
            int offsets_per_lane =
              arg_input_window.pts().size();
            int input_bits = arg_width*offsets_per_lane;

            string arg_name = "lane_" + to_string(lane) + "_" + p;

            arg_names.push_back(arg_name);
            cout << "getting window for " << u.name() << endl;
            //Window orig_dw =
              //data_window_needed_by_one_compute_lane(u.name(), p);
            //Window win_needed =
              //data_window_needed_by_one_compute_lane(u.name(), p).increment(orig_dw.stride(0), lane);
            //cout << "Win needed: " << win_needed << endl;

            int base = lane*input_bits;
            int end = (lane + 1)*input_bits - 1;

            cfile << tab(1) << "hw_uint<" << input_bits << "> " << arg_name << ";" << endl;
            cfile << tab(1) << "set_at<0, " << input_bits << ", " << input_bits << ">(" << arg_name << ", " << p << ".extract<" << base << ", " << end << ">());" << endl;
            //int win_pos = 0;
            //for (auto off : win_needed.offsets) {
              //cfile << tab(1) << "// Need offset: " << str(off) << endl;
              //int npts = win_needed.pts().size()*arg_width;
              //for (int i = 0; i < arg_input_window.offsets.size(); i++) {
                //if (arg_input_window.offsets.at(i) == off) {
                  //int base = i*arg_width;
                  //int end = (i + 1)*arg_width - 1;
                  //cfile << tab(1) << "set_at<" << win_pos*arg_width << ", " << npts << ", " << arg_width << ">(" << arg_name << ", " << p << ".extract<" << base << ", " << end << ">());" << endl;
                //}
              //}
              //win_pos++;
            //}
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

  void schedule_and_codegen(CodegenOptions& options, const std::string& name) {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
    std::string time_str(buffer);

    //auto m = schedule_isl();

    auto scheds = schedule_opt();
    umap* m = qschedule_to_map(scheds);
    //umap* m = schedule();
    ofstream schedule_out(name + "_sched_" + time_str);
    for (auto k : get_maps(m)) {
      schedule_out << str(k) << endl;
    }
    schedule_out.close();
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

    populate_program(options, prg, name, m, buffers);

    return;
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
    cout << "Unrolling " << to_unroll_function << " by " << unroll_factor << endl;

    //assert(reference_function == to_unroll_function);

    // Preprocess application graph to compute qfactors
    App cpy = *this;
    // TODO: Update to fill with ndims dimensions
    int dummy_value = 10;
    cpy.no_unrolling();
    cpy.fill_data_domain(reference_function, {dummy_value, dummy_value});
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
      //sched_var_name(last_update(reference_function).name());
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
        int fres = (int) max(1.0f, floor(((float) umax) / (float) u_qfactor));
        int u_unroll_factor = fres;
        u.unroll_factor = u_unroll_factor;
        cout << tab(1) << u.unroll_factor << endl;
        if (r.first == to_unroll_function) {
          assert(u.unroll_factor == unroll_factor);
        }
      }
    }
  }

  void realize_no_unroll(CodegenOptions& options,
      const std::string& name,
      const std::vector<int>& dims) {
    fill_data_domain(name, dims);
    fill_compute_domain();
    schedule_and_codegen(options, name);
  }


  void realize(const std::string& name, const int d0, const int d1) {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    realize(options, name, d0, d1);
  }

  void realize(CodegenOptions& options,
      const std::string& name,
      const int d0,
      const int d1) {
    realize(options, name, {d0, d1}, 1);
  }

  void realize(CodegenOptions& options, const std::string& name, const int d0, const int d1, const int unroll_factor) {
    realize(options, name, {d0, d1}, unroll_factor);
  }

  void realize(CodegenOptions& options, const std::string& name, const vector<int>& dims, const int unroll_factor) {
    realize(options, name, dims, name, unroll_factor);
  }

  void realize(CodegenOptions& options,
      const std::string& out_name,
      const vector<int>& dims,
      const std::string& unroll_target,
      const int unroll_factor) {
      double total_elapsed = 0.;
      auto start = std::chrono::system_clock::now();

      //assert(out_name == unroll_target);
      set_unroll_factors(out_name, unroll_target, unroll_factor);
      realize_no_unroll(options, out_name, dims);

      auto end = std::chrono::system_clock::now();
      std::chrono::duration<double> elapsed = end - start;
      total_elapsed += elapsed.count();
      ofstream schedule_info("./scratch/" + out_name + ".txt");
      schedule_info << "time to realize " << out_name << ": " << total_elapsed << endl;
      schedule_info.close();
  }

  void realize(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;

    realize(options, name, {d0, d1}, unroll_factor);
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

App tricky_reconvergence(const std::string& name) {
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
  //dn.func2d(name, "r1_comp2d", pt("r0"));
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

prog halide_harris() {
  prog prg;
  prg.compute_unit_file = "clockwork_target_compute.h";
  prg.name = "halide_harris";

// Stencil<uint8_t, 64, 64> &hw_input_copy_stencil = arg_0;
  prg.add_input("hw_input_copy_stencil");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming hw_input_copy.stencil
////producing padded16.stencil
  auto loop_padded16_s0_y = prg.add_loop("padded16_s0_y", -3, 64);
  auto loop_padded16_s0_x = loop_padded16_s0_y->add_loop("padded16_s0_x", -3, 64);

//store is: padded16.stencil(padded16.s0.x, padded16.s0.y) = int16(hw_input_copy.stencil(padded16.s0.x, padded16.s0.y))
  auto hcompute_padded16_stencil = loop_padded16_s0_x->add_op("hcompute_padded16_stencil");
  hcompute_padded16_stencil->add_function("hcompute_padded16_stencil");
  hcompute_padded16_stencil->add_load("hw_input_copy_stencil", "padded16_s0_x", "padded16_s0_y");
  prg.buffer_port_widths["padded16_stencil"] = 16;
  hcompute_padded16_stencil->add_store("padded16_stencil", "padded16_s0_x", "padded16_s0_y");
////producing grad_x.stencil

//consuming padded16.stencil
  auto loop_grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 62);
  auto loop_grad_x_s0_x = loop_grad_x_s0_y->add_loop("grad_x_s0_x", -2, 62);

//store is: grad_x.stencil(grad_x.s0.x, grad_x.s0.y) = max(min(((((padded16.stencil((grad_x.s0.x + 1), (grad_x.s0.y + -1)) + (padded16.stencil((grad_x.s0.x + 1), (grad_x.s0.y + 1)) + (padded16.stencil((grad_x.s0.x + 1), grad_x.s0.y)*(int16)2))) - padded16.stencil((grad_x.s0.x + -1), (grad_x.s0.y + -1))) - (padded16.stencil((grad_x.s0.x + -1), grad_x.s0.y)*(int16)2)) - padded16.stencil((grad_x.s0.x + -1), (grad_x.s0.y + 1))), (int16)255), (int16)-255)
  auto hcompute_grad_x_stencil = loop_grad_x_s0_x->add_op("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + 1)", "(grad_x_s0_y + -1)");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + 1)", "(grad_x_s0_y + 1)");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + 1)", "grad_x_s0_y");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + -1)", "(grad_x_s0_y + -1)");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + -1)", "grad_x_s0_y");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + -1)", "(grad_x_s0_y + 1)");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_x", "grad_x_s0_y");
////producing lxx.stencil

//consuming grad_x.stencil
  auto loop_lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 62);
  auto loop_lxx_s0_x = loop_lxx_s0_y->add_loop("lxx_s0_x", -2, 62);

//store is: lxx.stencil(lxx.s0.x, lxx.s0.y) = ((int32(grad_x.stencil(lxx.s0.x, lxx.s0.y))*int32(grad_x.stencil(lxx.s0.x, lxx.s0.y)))/128)
  auto hcompute_lxx_stencil = loop_lxx_s0_x->add_op("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_x", "lxx_s0_y");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_x", "lxx_s0_y");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_x", "lxx_s0_y");
////producing lgxx.stencil
  auto loop_lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 60);
  auto loop_lgxx_s0_x = loop_lgxx_s0_y->add_loop("lgxx_s0_x", -1, 60);

//store is: lgxx.stencil(lgxx.s0.x, lgxx.s0.y) = 0
  auto hcompute_lgxx_stencil = loop_lgxx_s0_x->add_op("hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_x", "lgxx_s0_y");

//consuming lxx.stencil
  auto loop_lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 60);
  auto loop_lgxx_s1_x = loop_lgxx_s1_y->add_loop("lgxx_s1_x", -1, 60);

//store is: lgxx.stencil(lgxx.s1.x, lgxx.s1.y) = (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + -1)) + (lgxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + -1), lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + 1), lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + 1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + 1)) + lxx.stencil(lgxx.s1.x, (lgxx.s1.y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = loop_lgxx_s1_x->add_op("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_x", "lgxx_s1_y");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_x + -1)", "(lgxx_s1_y + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_x", "(lgxx_s1_y + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_x + 1)", "(lgxx_s1_y + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_x + -1)", "lgxx_s1_y");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_x", "lgxx_s1_y");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_x + 1)", "lgxx_s1_y");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_x + -1)", "(lgxx_s1_y + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_x + 1)", "(lgxx_s1_y + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_x", "(lgxx_s1_y + 1)");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_x", "lgxx_s1_y");
////producing grad_y.stencil

//consuming padded16.stencil
  auto loop_grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 62);
  auto loop_grad_y_s0_x = loop_grad_y_s0_y->add_loop("grad_y_s0_x", -2, 62);

//store is: grad_y.stencil(grad_y.s0.x, grad_y.s0.y) = max(min(((((padded16.stencil((grad_y.s0.x + -1), (grad_y.s0.y + 1)) + (padded16.stencil((grad_y.s0.x + 1), (grad_y.s0.y + 1)) + (padded16.stencil(grad_y.s0.x, (grad_y.s0.y + 1))*(int16)2))) - padded16.stencil((grad_y.s0.x + -1), (grad_y.s0.y + -1))) - (padded16.stencil(grad_y.s0.x, (grad_y.s0.y + -1))*(int16)2)) - padded16.stencil((grad_y.s0.x + 1), (grad_y.s0.y + -1))), (int16)255), (int16)-255)
  auto hcompute_grad_y_stencil = loop_grad_y_s0_x->add_op("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "grad_y_s0_x", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + 1)", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + -1)", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + 1)", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "grad_y_s0_x", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + -1)", "(grad_y_s0_y + -1)");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_x", "grad_y_s0_y");
////producing lxy.stencil

//consuming grad_y.stencil

//consuming grad_x.stencil
  auto loop_lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 62);
  auto loop_lxy_s0_x = loop_lxy_s0_y->add_loop("lxy_s0_x", -2, 62);

//store is: lxy.stencil(lxy.s0.x, lxy.s0.y) = ((int32(grad_x.stencil(lxy.s0.x, lxy.s0.y))*int32(grad_y.stencil(lxy.s0.x, lxy.s0.y)))/128)
  auto hcompute_lxy_stencil = loop_lxy_s0_x->add_op("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_x", "lxy_s0_y");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_x", "lxy_s0_y");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_x", "lxy_s0_y");
////producing lgxy.stencil
  auto loop_lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 60);
  auto loop_lgxy_s0_x = loop_lgxy_s0_y->add_loop("lgxy_s0_x", -1, 60);

//store is: lgxy.stencil(lgxy.s0.x, lgxy.s0.y) = 0
  auto hcompute_lgxy_stencil = loop_lgxy_s0_x->add_op("hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_x", "lgxy_s0_y");

//consuming lxy.stencil
  auto loop_lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 60);
  auto loop_lgxy_s1_x = loop_lgxy_s1_y->add_loop("lgxy_s1_x", -1, 60);

//store is: lgxy.stencil(lgxy.s1.x, lgxy.s1.y) = (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + -1)) + (lgxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + -1), lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + 1), lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + 1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + 1)) + lxy.stencil(lgxy.s1.x, (lgxy.s1.y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = loop_lgxy_s1_x->add_op("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_x", "lgxy_s1_y");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_x + -1)", "(lgxy_s1_y + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_x", "(lgxy_s1_y + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_x + 1)", "(lgxy_s1_y + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_x + -1)", "lgxy_s1_y");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_x", "lgxy_s1_y");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_x + 1)", "lgxy_s1_y");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_x + -1)", "(lgxy_s1_y + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_x + 1)", "(lgxy_s1_y + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_x", "(lgxy_s1_y + 1)");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_x", "lgxy_s1_y");
////producing lyy.stencil

//consuming grad_y.stencil
  auto loop_lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 62);
  auto loop_lyy_s0_x = loop_lyy_s0_y->add_loop("lyy_s0_x", -2, 62);

//store is: lyy.stencil(lyy.s0.x, lyy.s0.y) = ((int32(grad_y.stencil(lyy.s0.x, lyy.s0.y))*int32(grad_y.stencil(lyy.s0.x, lyy.s0.y)))/128)
  auto hcompute_lyy_stencil = loop_lyy_s0_x->add_op("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_x", "lyy_s0_y");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_x", "lyy_s0_y");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_x", "lyy_s0_y");
////producing lgyy.stencil
  auto loop_lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 60);
  auto loop_lgyy_s0_x = loop_lgyy_s0_y->add_loop("lgyy_s0_x", -1, 60);

//store is: lgyy.stencil(lgyy.s0.x, lgyy.s0.y) = 0
  auto hcompute_lgyy_stencil = loop_lgyy_s0_x->add_op("hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_x", "lgyy_s0_y");

//consuming lyy.stencil
  auto loop_lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 60);
  auto loop_lgyy_s1_x = loop_lgyy_s1_y->add_loop("lgyy_s1_x", -1, 60);

//store is: lgyy.stencil(lgyy.s1.x, lgyy.s1.y) = (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + -1)) + (lgyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + -1), lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + 1), lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + 1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + 1)) + lyy.stencil(lgyy.s1.x, (lgyy.s1.y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = loop_lgyy_s1_x->add_op("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_x", "lgyy_s1_y");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_x + -1)", "(lgyy_s1_y + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_x", "(lgyy_s1_y + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_x + 1)", "(lgyy_s1_y + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_x + -1)", "lgyy_s1_y");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_x", "lgyy_s1_y");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_x + 1)", "lgyy_s1_y");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_x + -1)", "(lgyy_s1_y + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_x + 1)", "(lgyy_s1_y + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_x", "(lgyy_s1_y + 1)");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_x", "lgyy_s1_y");
////producing cim.stencil

//consuming lgyy.stencil

//consuming lgxy.stencil

//consuming lgxx.stencil
  auto loop_cim_s0_y = prg.add_loop("cim_s0_y", -1, 60);
  auto loop_cim_s0_x = loop_cim_s0_y->add_loop("cim_s0_x", -1, 60);

//store is: cim.stencil(cim.s0.x, cim.s0.y) = (let t47 = ((lgxx.stencil(cim.s0.x, cim.s0.y)/64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/64)) in ((((lgxx.stencil(cim.s0.x, cim.s0.y)/64)*(lgyy.stencil(cim.s0.x, cim.s0.y)/64)) - ((lgxy.stencil(cim.s0.x, cim.s0.y)/64)*(lgxy.stencil(cim.s0.x, cim.s0.y)/64))) - ((t47*t47)/16)))
  auto hcompute_cim_stencil = loop_cim_s0_x->add_op("hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_x", "cim_s0_y");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_x", "cim_s0_y");
////producing cim_output.stencil

//consuming cim.stencil
  auto loop_cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto loop_cim_output_s0_x = loop_cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output.s0.x, cim_output.s0.y) = uint8(select((((((((((cim.stencil((cim_output.s0.x + -1), (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y)) && (cim.stencil(cim_output.s0.x, (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + -1), cim_output.s0.y) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), cim_output.s0.y) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + -1), (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil(cim_output.s0.x, (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (1 <= cim.stencil(cim_output.s0.x, cim_output.s0.y))), 255, 0))
  auto hcompute_cim_output_stencil = loop_cim_output_s0_x->add_op("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + -1)", "(cim_output_s0_y + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + -1)", "(cim_output_s0_y + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "(cim_output_s0_y + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + 1)", "(cim_output_s0_y + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "(cim_output_s0_y + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + 1)", "(cim_output_s0_y + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + -1)", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + 1)", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  prg.buffer_port_widths["cim_output_stencil"] = 16;
  hcompute_cim_output_stencil->add_store("cim_output_stencil", "cim_output_s0_x", "cim_output_s0_y");

//consuming cim_output.stencil
  auto loop_hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto loop_hw_output_s0_x_xi = loop_hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = cim_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi)
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

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

void halide_harris_test() {
  prog prg = halide_harris();
  cout << "Created program..." << endl;
  prg.pretty_print();
  generate_optimized_code(prg);

  //regression_test(prg);
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


  int size = 6200;
//consuming hw_input.stencil
////producing conv1.stencil
  auto loop_conv1_s0_y = prg.add_loop("conv1_s0_y", 0, size);
  auto loop_conv1_s0_x = loop_conv1_s0_y->add_loop("conv1_s0_x", 0, size);

//store is: conv1.stencil(conv1.s0.x, conv1.s0.y) = 0
  auto compute_conv1_stencil = loop_conv1_s0_x->add_op("compute_conv1_stencil");
  compute_conv1_stencil->add_function("compute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 16;
  compute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_x", "conv1_s0_y");
  auto loop_conv1_s1_y = prg.add_loop("conv1_s1_y", 0, size);
  auto loop_conv1_s1_x = loop_conv1_s1_y->add_loop("conv1_s1_x", 0, size);

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
  auto loop_conv2_s0_y = prg.add_loop("conv2_s0_y", 0, size - 2);
  auto loop_conv2_s0_x = loop_conv2_s0_y->add_loop("conv2_s0_x", 0, size - 2);

//store is: conv2.stencil(conv2.s0.x, conv2.s0.y) = 0
  auto compute_conv2_stencil = loop_conv2_s0_x->add_op("compute_conv2_stencil");
  compute_conv2_stencil->add_function("compute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 16;
  compute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_x", "conv2_s0_y");

//consuming conv1.stencil
  auto loop_conv2_s1_y = prg.add_loop("conv2_s1_y", 0, size - 2);
  auto loop_conv2_s1_x = loop_conv2_s1_y->add_loop("conv2_s1_x", 0, size - 2);

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
  auto loop_hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, size - 2);
  auto loop_hw_output_s0_x_xo = loop_hw_output_s0_y_yo->add_loop("hw_output_s0_x_xo", 0, size - 2);

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv2.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
  auto compute_hw_output_stencil = loop_hw_output_s0_x_xo->add_op("compute_hw_output_stencil");
  compute_hw_output_stencil->add_function("compute_hw_output_stencil");
  compute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");
  compute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xo", "hw_output_s0_y_yo");

  return prg;
}

void halide_cascade_test() {
  prog prg = halide_cascade();
  cout << "Created program..." << endl;
  prg.pretty_print();

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

  auto clksched = clockwork_schedule(domain, validity, proximity);
  cout << "---- Clockwork schedule:" << endl;
  isl_space* test_space = map_space(prg.ctx, 2, 3);
  isl_local_space* aff_space = local_set_space(prg.ctx, 2);
  for (auto s : clksched) {
    auto ma = isl_multi_aff_zero(test_space);

    cout << tab(1) << s.first << " -> ";
    int i = 0;
    for (auto v : s.second) {
      cout << str(v) << ", ";
      isl_aff* av = isl_aff_zero_on_domain(aff_space);
      av = set_const_coeff(av, const_coeff(v));
      isl_multi_aff_set_aff(ma, i, av);
      i++;
    }
    cout << endl;
    cout << tab(2) << "ma = " << str(ma) << endl;
  }

  generate_optimized_code(prg);

  //regression_test(prg);
}

void halide_frontend_test() {
  prog prg = clockwork_target();
  cout << "Created program..." << endl;
  prg.pretty_print();
  generate_optimized_code(prg);

  //regression_test(prg);
}

void tricky_shift_register_reconvergence_test() {
  //App sobel = tricky_reconvergence("A");
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
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

  compare(opt, naive);
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
    options.use_custom_code_string = true;
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

  int rows = 1080;
  int cols = 1920;
  //vector<int> factors{1, 2, 4};
  vector<int> factors{1};
  for (int i = 0; i < (int) factors.size(); i++) {
    int unroll_factor = factors.at(i);
    //cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    //options.use_custom_code_string = true;
    options.use_custom_code_string = false;
    options.debug_options.expect_all_linebuffers = true;
    //options.num_input_epochs = 30;
    camera_pipeline_all_adds(out_name).realize(options, out_name, cols, rows, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
}

void camera_pipeline_test(const std::string& prefix) {
  string app_name = "camera_mini";
  int mini_rows = 30;
  int mini_cols = 100;
  auto hmini = camera_pipeline(app_name);
  hmini.realize_naive(app_name, mini_cols, mini_rows);
  hmini.realize(app_name, mini_cols, mini_rows, 1);

  std::vector<std::string> naive =
    run_regression_tb(app_name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(app_name + "_opt");
  assert(naive == optimized);
  move_to_benchmarks_folder(app_name + "_opt");


  int rows = 1080;
  int cols = 1920;
  vector<int> factors{1, 2, 4};
  for (int i = 0; i < (int) factors.size(); i++) {
    int unroll_factor = factors.at(i);
    //cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
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


  int rows = 1080;
  int cols = 1920;
  vector<int> factors{1, 2, 4};
  //8, 16};
  for (int i = 0; i < (int) factors.size(); i++) {
    int unroll_factor = factors.at(i);
    cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    options.debug_options.expect_all_linebuffers = true;
    options.num_input_epochs = 30;
    harris16(out_name).realize(options, out_name, cols, rows, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
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


  int rows = 1080;
  int cols = 1920;
  vector<int> factors{1, 8, 16};
  for (int i = 0; i < (int) factors.size(); i++) {
    int unroll_factor = factors.at(i);
    cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    string out_name = "hr_" + str(unroll_factor);

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    options.debug_options.expect_all_linebuffers = true;
    harris(out_name).realize(options, out_name, cols, rows, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
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
  //options.use_custom_code_string = false;
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
    options.use_custom_code_string = true;
    options.debug_options.expect_all_linebuffers = true;
    denoise3d(out_name).realize(options, out_name, {cols, rows, channels}, unroll_factor);

    move_to_benchmarks_folder(out_name + "_opt");
  }
}

App max_pooling(const std::string& out_name) {
  App mp;
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
    options.use_custom_code_string = true;
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

void max_pooling_test(const std::string& prefix) {
  int W = 64;
  int H = 64;
  int D = 64;

  vector<int> unroll_factors{1, 2, 4, 8, 16, 32};
  for (auto factor : unroll_factors) {
    string name = prefix + "_" + str(factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;

    max_pooling(name).realize(options, name, {H, W, D}, "in", factor);
    move_to_benchmarks_folder(name + "_opt");
  }

  //CodegenOptions options;
  //options.internal = true;
  //options.all_rams = true;
  //options.unroll_factors_as_pad = true;
  //mp.realize_naive(options, "max_pool", {H, W, D});

  //std::vector<std::string> naive =
    //run_regression_tb("max_pool_opt");
  //std::vector<std::string> optimized =
    //run_regression_tb("max_pool_naive");
  //assert(naive == optimized);

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
    lp.func2d(merged_level, "average", {upsample(2, image), pt(merged_images.at(i))});
    //lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    image = merged_level;
  }

  lp.func2d(out_name, "id", pt(image));

  //lp.func2d(out_name, "average", {pt("bright"), pt("dark")});
  return lp;
}

App exposure_fusion_app(const std::string& out_name) {
  App lp;
  lp.set_default_pixel_width(16);
  // The off chip input we are reading from
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", "id", pt("in_off_chip"));

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
  auto dark_weight_pyramid = gauss_pyramid(4, "dark_weights_normed", lp);
  auto bright_weight_pyramid = gauss_pyramid(4, "bright_weights_normed", lp);

  // Create laplacian pyramids of the synthetic exposures
  auto dark_pyramid = laplace_pyramid(4, "dark", lp);
  auto bright_pyramid = laplace_pyramid(4, "bright", lp);

  // Merge weighted pyramids
  vector<string> merged_images;
  for (int i = 0; i < dark_pyramid.size(); i++) {
    string fused = "fused_level_" + str(i);
    lp.func2d(fused, "merge_exposures", {pt(bright_pyramid.at(i)),
        pt(dark_pyramid.at(i)), pt(bright_weight_pyramid.at(i)), pt(dark_weight_pyramid.at(i))});
    merged_images.push_back(fused);
  }

  // Collapse the blended pyramid into a single image
  assert(merged_images.size() == 4);
  string image = merged_images.back();
  for (int i = merged_images.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    image = merged_level;
  }

  lp.func2d(out_name, "id", pt(image));

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

void exposure_fusion_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 2, 4, 8, 16, 32};
  for (auto throughput : throughputs) {
    //const int throughput = 4;
    string name = prefix + "_" + str(throughput);
    App lp = exposure_fusion_app(name);
    int rows = 1080;
    int cols = 1920;
    lp.realize(name, cols, rows, throughput);
    move_to_benchmarks_folder(name + "_opt");
  }
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
    options.use_custom_code_string = true;
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
  int cols = 256;
  int rows = 256;
  //{
    //CodegenOptions options;
    //options.internal = true;
    //options.simplify_address_expressions = true;
    //options.use_custom_code_string = true;
    //gp.realize(options, out_name, {cols, rows}, "in", 1);
  //}
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = false;
    options.scheduling_algorithm = SCHEDULE_ALGORITHM_ISL;
    gp.realize_naive(options, out_name, {cols, rows});
    //move_to_benchmarks_folder(out_name + "_opt");
  }
}


void gaussian_pyramid_app_test(const std::string& prefix) {
  string name = "gp";
  App gp = gaussian_pyramid_app(name, 3);
  int size = 64;
  {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    options.debug_options.expect_all_linebuffers = true;
    gp.realize(options, name, {size, size}, "in", 2);
  }

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  options.unroll_factors_as_pad = true;
  gp.realize_naive(options, name, size, size);

  std::vector<std::string> naive =
    run_regression_tb(name + "_naive");
  std::vector<std::string> optimized =
    run_regression_tb(name + "_opt");
  assert(naive == optimized);

  vector<int> unroll_factors{1, 2, 4, 8, 16, 32};
  for (auto factor : unroll_factors) {
    string name = prefix + "_" + str(factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;

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
      //add(square(v("mag_x")), square(v("mag_y"))));
      //sub(65535, add(square(v("mag_x")), square(v("mag_y")))));
      //sub(100, add(square(v("mag_x")), square(v("mag_y")))));
      add(square(v("mag_x")), square(v("mag_y"))));
      //sub(65535, add(square(v("mag_x")), square(v("mag_y")))));


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
      //{{-1, 1}, {-1, -1}, {0, 1}, {0, - 1}, {1, 1}, {1, -1}});

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

App blur_xy(const std::string output_name) {
  App jac;
  jac.func2d("input_arg");
  jac.func2d("input", "id", pt("input_arg"));
  jac.func2d("blurx", "blurx_comp", "input", {1, 1}, {{0, 0}, {0, 1}, {0, 2}});
  jac.func2d(output_name, "blury_comp", "blurx", {1, 1}, {{0, 0}, {1, 0}, {2, 0}});
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
  vector<int> factors{1, 2, 4, 8};
  //for (int i = 0; i < 5; i++) {
  for (auto factor : factors) {
    int unroll_factor = factor;
      //pow(2, i);
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
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

  vector<int> factors{1, 2, 4, 8};
  for (auto f : factors) {
    int unroll_factor = f;
    cout << tab(1) << "unroll factor: " << unroll_factor << endl;
    string out_name = prefix + "_" + str(unroll_factor);
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    //options.num_input_epochs = 30;
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
  options.use_custom_code_string = true;
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
    options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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

  regression_test(prg);
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

isl_val* constant(isl_aff* a) {
  return isl_aff_get_constant_val(a);
}

void playground() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_bounds["in"] = {3, 3};

  prg.buffer_port_widths["out"] = 32;
  prg.buffer_bounds["out"] = {1};

  prg.buffer_port_widths["I"] = 32;
  prg.buffer_bounds["I"] = {3, 3};

  prg.buffer_port_widths["tmp"] = 32;
  prg.buffer_bounds["tmp"] = {1};

  auto read_in = prg.add_nest("rd_r", 0, 3, "rd_c", 0, 3)->add_op({"I", "rd_r, rd_c"}, "id", {"in", "rd_r, rd_c"});

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 3);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "ar, ac");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  cout << "Original program" << endl;
  prg.pretty_print();
  cout << endl;

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

  auto clksched = clockwork_schedule(domain, validity, proximity);
  cout << "---- Clockwork schedule:" << endl;
  for (auto s : clksched) {
    cout << tab(1) << s.first << " -> ";
    for (auto v : s.second) {
      cout << str(v) << ", ";
    }
    cout << endl;
  }

  //cout << "Program code without optimization..." << endl;
  //prg.unoptimized_codegen();
  //cout << endl;

  //cout << "Program with optimized schedule..." << endl;
  //umap* opt_sched = prg.optimized_codegen();
  //cout << "Consumer maps..." << endl;
  //cout << tab(1) << str(prg.consumer_map()) << endl;

  //cout << "Schedules..." << endl;
  //for (auto s : prg.schedules()) {
    //cout << tab(1) << str(s.second) << endl;
    //auto next_op = lexmin(lex_lt(s.second, s.second));
    //cout << "next op: " << str(next_op) << endl;
  //}

  //isl_ctx* ct = isl_ctx_alloc();

  ////uset* dom = isl_union_set_read_from_str(ct, "{ P[x] : 0 <= x <= 10; C[x] : 0 <= x <= 10 }");
  //uset* dom =
    //isl_union_set_read_from_str(ct, "{ P[x, k] : 0 <= x <= 10 and 0 <= k <= 10; C[x, k] : 0 <= x <= 10 and 0 <= k <= 10 }");
  //umap* validity =
    //rdmap(ct, "{ P[x, k] -> C[y, l] : x = 2y + 3 }");
    ////rdmap(ct, "{ P[x, k] -> C[y, l] : k = l and x = 2y + 3 }");
    ////rdmap(ct, "{ P[x] -> C[y] : x = 2y + 3 }");
    ////rdmap(ct, "{ P[x] -> C[y] : x = floor(y/2) }");
    ////rdmap(ct, "{ P[x] -> C[x] }");
  //umap* proximity =
    //cpy(validity);

  //clockwork_schedule(dom, validity, proximity);
  ////experimental_opt(dom, validity, proximity);


  //isl_aff* zero = rdaff(ct, "{ [a, b] -> [0] }");
  //isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor(a/2) + 3] }");
  ////isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor((a + 3b + floor(2a - 7b / 9)) / 2)] }");
  ////isl_aff* aff = rdaff(ct, "{ [a, b] -> [3 a / 2 + 2 b / 15] }");
  ////isl_aff* aff = rdaff(ct, "{ [a, b] -> [(a + b) % 2] }");
  ////isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor((a + 3b) / 2)] }");
  ////isl_aff* aff = rdaff(ct, "{ [a, b] -> [(a + 3b) % 2 + a / 6] }");
  //cout << "aff = " << str(aff) << endl;
  //cout << "const = " << str(constant(aff)) << endl;
  //int in_dims = num_in_dims(aff);
  //cout << "input dimension: " << in_dims << endl;
  //int out_dims = num_out_dims(aff);
  //cout << "output dimension: " << out_dims << endl;

  //isl_local_space* ls = isl_aff_get_local_space(aff);
  //int div_dims = isl_local_space_dim(ls, isl_dim_div);
  //cout << "div dimension   : " << isl_local_space_dim(ls, isl_dim_div) << endl;
  //cout << "all dimensions  : " << isl_local_space_dim(ls, isl_dim_all) << endl;
  //cout << "Local space: " << str(ls) << endl;

  //for (int i = 0; i < in_dims; i++) {
    //cout << i << "th coeff: " << str(isl_aff_get_coefficient_val(aff, isl_dim_in, i)) << endl;
  //}
  ////for (int i = 0; i < out_dims; i++) {
    ////cout << i << "th div  : " << str(isl_aff_get_div(aff, i)) << endl;
  ////}
  //for (int i = 0; i < div_dims; i++) {
    //cout << i << "th div      : " << str(isl_aff_get_div(aff, i)) << endl;
    //cout << i << "th div coeff: " << str(isl_aff_get_coefficient_val(aff, isl_dim_div, i)) << endl;
  //}

  //isl_basic_set* bset = isl_aff_eq_basic_set(cpy(aff), cpy(zero));
    ////isl_basic_set_read_from_str(ct, "{ [a, b] }");
    ////isl_basic_set_universe(get_space(aff));


  //cout << "bset: " << str(bset) << endl;
  //auto mat = isl_basic_set_equalities_matrix(bset, isl_dim_cst, isl_dim_param, isl_dim_set, isl_dim_div);
  //cout << "Eq Rows: " << isl_mat_rows(mat) << endl;
  //cout << "Eq Cols: " << isl_mat_cols(mat) << endl;

  //auto ineqmat = isl_basic_set_inequalities_matrix(bset, isl_dim_cst, isl_dim_param, isl_dim_set, isl_dim_div);
  //cout << "Ineq Rows: " << isl_mat_rows(ineqmat) << endl;
  //cout << "Ineq Cols: " << isl_mat_cols(ineqmat) << endl;
  //for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
    //for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
      //cout << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
    //}
    //cout << endl;
  //}


  //auto prev = rdaff(ct, "{ [x] -> [floor(x / 2)] }");
  //auto next = rdaff(ct, "{ [x] -> [floor((x + 1) / 2)] }");

  //cout << "prev: " << str(prev) << endl;
  //cout << "next: " << str(next) << endl;
  //cout << "diff: " << str(isl_aff_sub(cpy(next), cpy(prev))) << endl;

  //auto comps_set = isl_set_read_from_str(ct, "{ [a, b] : 0 <= a <= 10 and 0 <= b <= 11 }");
  //auto flat_set = isl_set_flatten(cpy(comps_set));
  //cout << "comps_set: " << str(comps_set) << endl;
  //cout << "flat_set : " << str(flat_set) << endl;

  ////isl_mat* matrix = aff->ls->div;
  //isl_ctx_free(ct);

}

void new_bankmerge_tests() {
  shift_reg_test();
  //assert(false);

  bankmerge_vec_test();
  auto_vec_test();
  flatten_sched_test();
}

void iccad_tests() {
  ef_cartoon_test("ef_cartoon_gauss");
  //assert(false);

  gaussian_pyramid_app_test("gp64x64");

  max_pooling_test("mp25");
  exposure_fusion();

  int index = 20;
  string istr = str(index);

  camera_pipeline_test("cp_noinit_" + istr);
  blur_xy_16_app_test("bxy_noinit_p2" + istr);

  harris16_test("hr" + istr);
  sobel_16_app_test("sbl" + istr);

  denoise3d_reconvergence_test();

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

void travis_tests() {
  reduce_1d_test();
  reduce_2d_test();
  return;
  heat_3d_test();
  upsample2d_test();
  halide_dnn_test();
  compute_unit_with_index_variables_test();

  exposure_fusion();

  downsample2d_test();
  up_stencil_down_test();
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
  gaussian_pyramid_test();
  warp_and_upsample_test();
}

void application_tests() {
  reduce_1d_test();
  reduce_2d_test();

  iccad_tests();

  compute_unit_with_index_variables_test();

  //pyr_1d_conv_test();
  halide_cascade_test();
  halide_dnn_test();
  halide_harris_test();
  //conv_1d_bc_test();
  halide_frontend_test();

  ram_addr_unit_test();
  denoise2d_test();

  conv_1d_test();

  tricky_shift_register_reconvergence_test();

  //playground();
  jacobi2d_app_test();

  grayscale_conversion_test();
  upsample2d_test();

  denoise2d_test();

  downsample2d_test();
  up_stencil_down_test();
  blur_and_downsample_test();
  downsample_and_blur_test();

  upsample_stencil_2d_test();
  upsample_stencil_1d_test();

  updown_merge_test();
  harris_unrolled_test();

  mismatched_stencil_test();
  cnn_test();

  sobel_test();

  seidel2d_test();
  jacobi_2d_2_test();
  jacobi_2d_test();


  two_input_mag_test();
  one_input_mag_test();
  sum_diffs_test();
  sum_float_test();
  sum_denoise_test();

  sobel_mag_y_test();
  sobel_app_test();
  sobel_mag_x_test();


  heat_3d_test();

  upsample_reduce_test();

  pointwise_test();

  stencil_3d_test();
  soda_blur_test();
  two_in_window_test();
  two_in_conv2d_test();
  gaussian_pyramid_test();
  warp_and_upsample_test();

  //conv_1d_rolled_test();
  //synth_upsample_test();
  unsharp_test();
  //conv_2d_rolled_test();
  conv_2d_bc_test();
  //mobilenet_test();
  pyramid_2d_test();
  pyramid_test();

  up_stencil_auto_unrolled_test();
  up_down_auto_unrolled_test();
  up_stencil_down_auto_unrolled_test();
  conv3x3_app_unrolled_test();
  conv3x3_app_test();
  conv3x3_app_unrolled_uneven_test();

  up_unrolled_4_test();


  up_unrolled_test();
  up_down_unrolled_test();

  jacobi2d_app_test();

  up_stencil_test();
  neg_stencil_test();
  blur_x_test();

  //parse_denoise3d_test();
  //app added for cnn
  //conv_test();

  sum_diffs_test();

  sobel_16_stage_x_app_test();

  up_stencil_test();
  neg_stencil_test();
  blur_x_test();

  dummy_app_test();

  //two_input_denoise_pipeline_test();


  //synth_wire_test();
  //synth_sr_boundary_condition_test();
  //synth_lb_test();
  //conv_app_rolled_reduce_test();

  //up_stencil_down_unrolled_test();
  //laplacian_pyramid_app_test();
}

void memory_tile_tests() {
  //shift_reg_test();
  bankmerge_vec_test();
  reaccess_test();

  //new_bankmerge_tests();
  memtile_test();
  auto_vec_test();
  vec_test();
  agg_test();

  //assert(false);
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
}

int main(int argc, char** argv) {

  if (argc > 1) {
    assert(argc == 2);
    string cmd = argv[1];

    if (cmd == "blur-example") {
      blur_example();
      return 0;
    }
    if (cmd == "travis-tests") {
      travis_tests();
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
    memory_tile_tests();
    application_tests();
    cout << "All tests passed" << endl;

  } else {
    assert(false);
  }

  return 0;

}


#include "coreir_backend.h"
#ifdef COREIR
#include "cwlib.h"
#endif
#include "app.h"
#include "prog_splitting_test.h"
#include "codegen.h"
#include "example_progs.h"
#include "simple_example_progs.h"
#include "prog.h"
#include "ubuffer.h"

#include <chrono>

#ifdef COREIR
CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff);
#endif

bool no_violated_cycle_accurate_dependencies(schedule_info& sched, prog& prg);

void blur_example();

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
      cout << "buffer_vectorization Vectorizing: " << target_buffer.name << endl;
      cout << target_buffer << endl;
      target_buffer.vectorization(dim_id, fetch_width, agg, sram, tb);
      break;
    }
  }
  buffers.erase(vec_buf_name);
  buffers[agg.name] = agg;
  buffers[sram.name] = sram;
  buffers[tb.name] = tb;
}


////This method does not work.
//isl_union_map* filter_inner_sram_deps(isl_ctx* ctx, isl_union_map* deps) {
    //vector<isl_map*> deps_map = get_maps(deps);
    //umap* ret = rdmap(ctx, "{}");
    //for ( auto m : deps_map ) {
        //auto dname = domain_name(m);
        //auto rname = range_name(m);
        //bool is_sram_in = dname.find("output_vec") != std::string::npos;
        //bool is_sram_out = rname.find("output") != std::string::npos;
        //if (is_sram_in && is_sram_out) {
            //ret = unn(ret, to_umap(inv(m)));
        //}
        //else {
            //cout << "union: " << str(m) << endl;
            //ret = unn(ret, to_umap(m));
        //}
    //}
    //return ret;
//}

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

    cout << "Global Schedule: " << str(global_sched) << endl;
    auto order_deps = get_rel_order(ctx, global_sched);
    auto raw_deps = its(dot(global_p_map, inv(global_c_map)), lex_lt(global_sched, global_sched));
    auto validity = unn(order_deps, raw_deps);
    auto proximity = cpy(raw_deps);

    //Try to remove proximity between_input vec to output_vec
    //FIXME: using the name is hacky
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
  if (!root->is_loop) {
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
        lp->is_loop = true;
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
  assert(!p->is_loop);

  std::set<string> bufs;
  for (auto b : p->produce_locs) {
    bufs.insert(b.first);
  }

  for (auto b : p->consume_locs_pair) {
    bufs.insert(b.first);
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
  int max_inpt = 2;
  int max_outpt = 2;
  for (auto& b : bufs) {
    if (b.second.get_in_ports().size() > 0) {
      b.second.generate_banks_and_merge(opt);

      //Assign an configuration file,
      json config;
      config["name"][0] = "TOP_address.csv";
      b.second.set_config(config);

      b.second.port_group2bank(max_inpt, max_outpt);
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
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;

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
  buffers_opt.at("buf").generate_banks_and_merge(opt);
  cout << buffers_opt.at("buf") << endl;
  buffers_opt.at("buf").port_group2bank(2, 2);
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
  generate_coreir(opt, context, buffers_opt.at("buf"));

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

void conv33_test() {

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

  //optimized schedule
  auto buffers_opt = build_buffers(prg);
  CodegenOptions opt;
  opt.conditional_merge = true;
  opt.merge_threshold = 4;
  buffers_opt.at("buf").generate_banks_and_merge(opt);
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
  buffers_opt.at("buf").generate_banks_and_merge(opt);
  //cout << buffers_opt.at("buf") << endl;
  //auto rewrite_buf = buffers_opt.at("buf").port_grouping(4);
  buffers_opt.at("buf").port_group2bank(2, 2);

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

  //void realize_naive(CodegenOptions& options, const std::string& name, const std::vector<int>& dims) {
    //realize_naive(options, {{name, dims}});
  //}

  void realize_naive(CodegenOptions& options, const std::string& name, const std::vector<int>& dims) {
  //void realize_naive(CodegenOptions& options,
      //const std::vector<std::pair<string, std::vector<int> > >& bounds) {
      //const std::string& name, const std::vector<int>& dims) {
    if (!options.unroll_factors_as_pad) {
      const int unroll_factor = 1;
      set_unroll_factors(name, name, unroll_factor);
      //set_unroll_factors(name, bounds, unroll_factor);
    } else {
      cout << "realizing naive with padded unroll factors" << endl;
    }

    fill_data_domain(name, dims);
    set_unroll_factors(name, name, 1);

    //fill_data_domain(bounds);
    //set_unroll_factors(name, bounds, 1);
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

  void schedule_and_codegen(CodegenOptions& options, const std::string& name, const std::vector<string>& outputs) {
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
    //umap* m = schedule();
    //ofstream schedule_out(name + "_sched_" + time_str);
    //for (auto k : get_maps(m)) {
      //schedule_out << str(k) << endl;
    //}
    //schedule_out.close();
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

    //populate_program(options, prg, name, m, buffers);
    populate_program(options, prg, name, outputs, m, buffers);

    release(prg);

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
    realize_no_unroll(options, {{name, dims}});
  }

  void realize_no_unroll(CodegenOptions& options,
      const std::vector<std::pair<std::string, std::vector<int> > >& bounds) {
    fill_data_domain(bounds);
    fill_compute_domain();
    vector<string> names;
    for (auto n : bounds) {
      names.push_back(n.first);
    }
    string concat_name = sep_list(names, "", "", "_");
    schedule_and_codegen(options, concat_name, names);
  }

  void realize(const std::string& name, const int d0, const int d1) {
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    //options.use_custom_code_string = true;
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
    realize(options, {{out_name, dims}}, unroll_target, unroll_factor);
  }

  void realize(CodegenOptions& options,
      const std::vector<std::pair<std::string, std::vector<int> > >& bounds,
      const std::string& unroll_target,
      const int unroll_factor) {

    double total_elapsed = 0.;
    auto start = std::chrono::system_clock::now();

    assert(bounds.size() > 0);

    string out_name = bounds.at(0).first;
    vector<int> dims = bounds.at(0).second;

    set_unroll_factors(bounds, unroll_target, unroll_factor);
    realize_no_unroll(options, bounds);

    //set_unroll_factors(out_name, unroll_target, unroll_factor);
    //realize_no_unroll(options, out_name, dims);

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
    //options.use_custom_code_string = true;

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

void halide_harris_test() {
  prog prg = halide_harris();
  cout << "Created program..." << endl;
  prg.pretty_print();
  //generate_optimized_code(prg);

  regression_test(prg);
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

void mini_conv_halide_test() {

  prog prg = mini_conv_halide();
  prg.pretty_print();

  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> auto_gen_res = run_regression_tb(prg);

  prog prg_fixed = mini_conv_halide_fixed();
  prg_fixed.pretty_print();

  generate_optimized_code(prg_fixed);
  generate_regression_testbench(prg_fixed);
  vector<string> optimized_res = run_regression_tb(prg_fixed);
  assert(optimized_res == auto_gen_res);
}

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
    ////options.use_custom_code_string = true;
    //options.use_custom_code_string = false;
    //options.debug_options.expect_all_linebuffers = true;
    ////options.num_input_epochs = 30;
    //camera_pipeline_all_adds(out_name).realize(options, out_name, cols, rows, unroll_factor);

    //move_to_benchmarks_folder(out_name + "_opt");
  //}
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


  //int rows = 1080;
  //int cols = 1920;
  //vector<int> factors{1, 2, 4};
  //for (int i = 0; i < (int) factors.size(); i++) {
    //int unroll_factor = factors.at(i);
    ////cout << tab(1) << "harris unroll factor: " << unroll_factor << endl;
    //string out_name = prefix + "_" + str(unroll_factor);

    //CodegenOptions options;
    //options.internal = true;
    //options.simplify_address_expressions = true;
    //options.use_custom_code_string = true;
    //options.debug_options.expect_all_linebuffers = true;
    //options.num_input_epochs = 30;
    //camera_pipeline(out_name).realize(options, out_name, cols, rows, unroll_factor);

    //move_to_benchmarks_folder(out_name + "_opt");
  //}
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
    //options.use_custom_code_string = true;
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
    //options.use_custom_code_string = true;
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

void weight_add_exposure_fusion_app(
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

void exposure_fusion_iccad_apps(const std::string& prefix) {
  vector<int> throughputs{1, 8, 16, 32};
  for (auto throughput : throughputs) {
    string name = prefix + "_" + str(throughput);
    App lp = exposure_fusion_app(name);
    int rows = 1080;
    int cols = 1920;
    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    lp.realize(options, name, cols, rows, throughput);
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
  cout << "Starting gaussian pyramid test" << endl;
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

isl_val* constant(isl_aff* a) {
  return isl_aff_get_constant_val(a);
}

void playground() {
  {
    isl_ctx* ctx = isl_ctx_alloc();
    auto dom = isl_union_set_read_from_str(ctx, "{ p[x] : 0 <= x <= 200; c[x] : 30 <= x <= 50 }");
    auto dep = rdmap(ctx, "{ p[x] -> c[y] : 2*y - 10 <= x <= 2*y + 10 }");
    print_hw_schedule(dom, its(dep, dom));

    isl_ctx_free(ctx);
    assert(false);
  }
  {
    isl_ctx* ctx = isl_ctx_alloc();
    auto dom = isl_map_read_from_str(ctx, "{ p[x] -> c[k] : exists y : 2y = x and x = 3*k }");
    cout << "dom = " << str(dom) << endl;
    for (auto m : get_basic_maps(dom)) {
      cout << "flattened = " << str(flatten_bmap_to_bset(m)) << endl;
    }
    //auto dep = rdmap(ctx, "{ p[x, y] -> c[x, y] }");
    //print_hw_schedule(dom, its(dep, dom));

    isl_ctx_free(ctx);
    assert(false);
  }
  {
    isl_ctx* ctx = isl_ctx_alloc();
    auto dom = isl_union_set_read_from_str(ctx, "{ p[x, y] : 0 <= x <= 200 and 0 <= y <= 10; c[x, y] : 30 <= x <= 50 and 0 <= y <= 10}");
    auto dep = rdmap(ctx, "{ p[x, y] -> c[x, y] }");
    print_hw_schedule(dom, its(dep, dom));

    isl_ctx_free(ctx);
    assert(false);
  }

  {
    isl_ctx* ctx = isl_ctx_alloc();
    auto s = rdset(ctx, "{ [x, y] : 2y = x }");
    cout << "pre projection: " << str(s) << endl;

    auto p = isl_set_project_out(s, isl_dim_set, 1, 1);
    cout << "post          : " << str(p) << endl;
    for (auto bset : get_basic_sets(p)) {
      cout << str(bset) << endl;
      auto ineqs = isl_basic_set_inequalities_matrix(bset,
          isl_dim_set, isl_dim_div, isl_dim_param, isl_dim_cst);
      cout << "ineqs: " << endl;
      cout << str(ineqs) << endl;
      auto eqs = isl_basic_set_equalities_matrix(bset,
          isl_dim_set, isl_dim_div, isl_dim_param, isl_dim_cst);
      cout << "eqs: " << endl;
      cout << str(eqs) << endl;
    }
    isl_ctx_free(ctx);
    assert(false);
  }

  {
    isl_ctx* ctx = isl_ctx_alloc();
    auto s = rdset(ctx, "{ [x, y] : y = 5 and x >= -4 and x < 19}");
    auto fs = form_farkas_constraints(to_bset(s), {{"x", "II_x"}, {"y", "II_y"}}, "d");
    cout << "fs = " << str(fs) << endl;
    auto extra_constraint = rdset(ctx, "{ [II_x, II_y, b, c, d, e, f, g] : II_y >= 1 and II_x >= 1 }");
    auto sol = its(extra_constraint, to_set(fs));
    cout << "New fs = " << str(sol) << endl;
    auto pt = sample(sol);
    cout << "Example solution: " << str(pt) << endl;
    isl_ctx_free(ctx);
  }

  assert(false);
  {
    prog prg;


    umap* sched = rdmap(prg.ctx, "{ B[k, 0] -> [k, 0]; B[k, 1] -> [k, 1] }");
    umap* m = rdmap(prg.ctx, "{ B[k, 0] -> b[k]; B[k, 1] -> b[k + 1]}");
    auto read_id = isl_union_set_identity(cpy(domain(m)));
    auto same = diff(dot(m, inv(m)), read_id);
    cout << "same = " << str(same) << endl;
    auto earlier = lex_gt(sched, sched);
    auto se = its(same, earlier);
    cout << "se   = " << str(se) << endl;
    for (auto m : get_maps(se)) {
      auto pw = isl_pw_multi_aff_from_map(m);
      cout << tab(1) << str(pw) << endl;
    }
    assert(false);
  }

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

  umap* clksched_map = clockwork_schedule_umap(domain, validity, proximity);
  //map<string, isl_aff*> clksched = clockwork_schedule(domain, validity, proximity);
  //cout << "---- Clockwork schedule:" << endl;
  //for (auto s : clksched) {
    //cout << tab(1) << s.first << " -> ";
    //for (auto v : s.second) {
      //cout << str(v) << ", ";
    //}
    //cout << endl;
  //}

  //auto clksched_map = its(to_umap(clksched), domain);
  cout << "sched map: " << str(clksched_map) << endl;
  //assert(false);
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
  conv33_test();
  //assert(false);

  bankmerge_vec_test();
  auto_vec_test();
  flatten_sched_test();
}

void iccad_tests() {
  //ef_cartoon_test("ef_cartoon_gauss");
  //assert(false);


  exposure_fusion();
  max_pooling_test("mp25");

  int index = 20;
  string istr = str(index);

  camera_pipeline_test("cp_noinit_" + istr);
  blur_xy_16_app_test("bxy_noinit_p2" + istr);

  harris16_test("hr" + istr);
  sobel_16_app_test("sbl" + istr);


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

void travis_tests() {
  jacobi_2d_2_test();
  register_file_test();
  reduce_1d_test();
  reduce_2d_test();
  compute_unit_with_index_variables_test();
  upsample2d_test();
  downsample2d_test();
  up_stencil_down_test();
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
  update->add_dynamic_load("buckets", "image", "i");
  update->add_dynamic_store("buckets", "image", "i");

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

void run_verilator_tb(const std::string& name) {

  //int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --load_libs commonlib --input " + name + ".json --output " + name + ".v --passes rungenerators;flattentypes;verilog");
  int to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs commonlib --input " + name + ".json --output " + name + ".v");
  assert(to_verilog_res == 0);

  int verilator_build = cmd("verilator -Wall --cc " + name + ".v --exe --build " + name + "_verilog_tb.cpp --top-module " + name + " -Wno-lint");
  assert(verilator_build == 0);

  int verilator_run = cmd("./obj_dir/V" + name);
  assert(verilator_run == 0);
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

isl_map* next_iteration(isl_set* domain) {
  vector<string> invars;
  vector<string> outvars;
  for (int d = 0; d < num_dims(domain); d++) {
    string v = "v_" + str(d);
    invars.push_back(v);
    if (d == num_dims(domain) - 1) {
      outvars.push_back(v + " + 1");
    } else {
      outvars.push_back(v);
    }
  }

  string sname = name(domain);
  return isl_map_read_from_str(ctx(domain), curlies(arrow(sname + bracket_list(invars), sname + bracket_list(outvars))).c_str());
}

void write_out(op* loop, isl_set* read_data, const std::string& rb_name, prog& prg) {
  assert(loop->is_loop);

  string buf = name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  //for (auto v : surrounding_vars(loop, prg)) {
    //store_addrs.push_back(v);
  //}
  //store_addrs.push_back(loop->name);

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    string lname = prg.unique_name(buf + "_st");
    next_lp = next_lp->add_loop(lname, lb, ub);
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  auto ld = next_lp->add_op(prg.unique_name("store_from_" + rb_name));
  ld->add_load(rb_name, comma_list(store_addrs));
  ld->add_store(buf, comma_list(load_addrs));
}

void read_in_before(op* iloop, isl_map* read_data, const std::string& rb_name, prog& prg) {
  assert(iloop->is_loop);
  string container = surrounding_vars(iloop, prg).back();
  op* loop = prg.find_loop(container);
  
  string buf = range_name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  //for (auto v : surrounding_vars(loop, prg)) {
    //store_addrs.push_back(v);
  //}
  //store_addrs.push_back(loop->name);
  //store_addrs.push_back(str(iloop->start));
  auto minpw =
    isl_map_lexmin_pw_multi_aff(cpy(read_data));
  auto maxpw =
    isl_map_lexmax_pw_multi_aff(cpy(read_data));

  auto min_ma = get_pieces(minpw).at(0).second;
  auto max_ma = get_pieces(maxpw).at(0).second;

  for (int d = 0; d < num_out_dims(read_data); d++) {
    isl_aff* min = isl_multi_aff_get_aff(min_ma, d);
    isl_aff* max = isl_multi_aff_get_aff(max_ma, d);
    isl_aff* diff = sub(max, min);

    cout << "Diff = " << str(diff) << endl;
    assert(isl_aff_is_cst(diff));

    int ext = to_int(const_coeff(diff)) + 1;
    isl_aff* addr =
      set_const_coeff(min, zero(prg.ctx));
    
    int lb = 0;
    int ub = ext;
    string lname = prg.unique_name(buf + "_ld");
    if (d == 0) {
      next_lp = next_lp->add_loop_before(iloop, lname, lb, ub);
    } else {
      next_lp = next_lp->add_loop(lname, lb, ub);
    }
    load_addrs.push_back(lname + " + " + codegen_c(addr));
    store_addrs.push_back(lname + " + " + codegen_c(addr));
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

void read_in_after(op* loop, isl_map* read_data, const std::string& rb_name, prog& prg) {
  assert(loop->is_loop);

  cout << "reading in data: " << str(read_data) << " at " << loop->name << endl;

  string buf = range_name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  //for (auto v : surrounding_vars(loop, prg)) {
    //store_addrs.push_back(v);
  //}
  //store_addrs.push_back(loop->name);
  auto minpw =
    isl_map_lexmin_pw_multi_aff(cpy(read_data));
  auto maxpw =
    isl_map_lexmax_pw_multi_aff(cpy(read_data));

  auto min_ma = get_pieces(minpw).at(0).second;
  auto max_ma = get_pieces(maxpw).at(0).second;

  for (int d = 0; d < num_out_dims(read_data); d++) {
    isl_aff* min = isl_multi_aff_get_aff(min_ma, d);
    isl_aff* max = isl_multi_aff_get_aff(max_ma, d);
    isl_aff* diff = sub(max, min);

    cout << "Diff = " << str(diff) << endl;
    assert(isl_aff_is_cst(diff));

    int ext = to_int(const_coeff(diff)) + 1;
    isl_aff* addr =
      set_const_coeff(min, zero(prg.ctx));
    
    int lb = 0;
    int ub = ext;
    string lname = prg.unique_name(buf + "_ld");
    next_lp = next_lp->add_loop(lname, lb, ub);
    load_addrs.push_back(lname + " + " + codegen_c(addr));
    store_addrs.push_back(lname + " + " + codegen_c(addr));
    //load_addrs.push_back(lname);
    //store_addrs.push_back(lname);
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

void read_in(op* loop, isl_set* read_data, const std::string& rb_name, prog& prg) {
  assert(loop->is_loop);

  string buf = name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  for (auto v : surrounding_vars(loop, prg)) {
    store_addrs.push_back(v);
  }
  store_addrs.push_back(loop->name);

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    string lname = prg.unique_name(buf + "_ld");
    next_lp = next_lp->add_loop_front(lname, lb, ub);
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

isl_set* data_demands(const int start_of_inner_loops, isl_map* m) {

  int num_params = start_of_inner_loops;
  cout << "params in new set: " << num_params << endl;
  auto pr = isl_map_project_out(cpy(m), isl_dim_in, start_of_inner_loops, num_in_dims(m) - start_of_inner_loops);
  cout << "projected = " << str(pr) << endl;
  auto bms = get_basic_maps(pr);
  isl_set* demands = nullptr;
  for (auto bm : bms) {
    assert(num_div_dims(bm) == 0);
    assert(num_param_dims(bm) == 0);

    auto bs = flatten_bmap_to_bset(bm);
    cout << "bs = " << str(bs) << endl;
    auto eq = isl_basic_set_equalities_matrix(bs, isl_dim_set, isl_dim_param, isl_dim_div, isl_dim_cst);
    auto ineq = isl_basic_set_inequalities_matrix(bs, isl_dim_set, isl_dim_param, isl_dim_div, isl_dim_cst);

    auto space = isl_space_set_alloc(ctx(m), num_params, num_out_dims(pr) + num_in_dims(pr) - num_params);
    auto ps = isl_basic_set_from_constraint_matrices(space, eq, ineq, isl_dim_param, isl_dim_set, isl_dim_div, isl_dim_cst);
    cout << "ps = " << str(ps) << endl;
    if (demands == nullptr) {
      demands = to_set(ps);
    } else {
      demands = unn(demands, to_set(ps));
    }
  }
  demands = set_name(demands, range_name(m));
  //assert(false);
  return demands;

}

isl_map* delta_data(loop* loop, const std::string& buffer, prog& prg) {
  auto level_map = get_variable_levels(prg);
  auto ops = loop->descendant_ops();

  auto idom = iteration_domain(loop, prg);
  cout << str(idom) << endl;
  auto earlier = its_range(its(isl_map_lex_gt(get_space(idom)), idom), idom);
  cout << "earlier = " << str(earlier) << endl;
  auto earlier_in_same_level = cpy(earlier);

  auto later_in_same_level = its_range(its(isl_map_lex_lt(get_space(idom)), idom), idom);
  for (int i = 0; i < num_in_dims(later_in_same_level) - 1; i++) {
    later_in_same_level = isl_map_equate(later_in_same_level, isl_dim_in, i, isl_dim_out, i);
    earlier_in_same_level = isl_map_equate(earlier_in_same_level, isl_dim_in, i, isl_dim_out, i);
  }
  cout << "later in same level = " << str(later_in_same_level) << endl;
  auto next = lexmin(later_in_same_level);
  cout << "next iter: " << str(next) << endl;
  cout << endl;


  auto reads = consumer_map(loop, buffer, prg);
  auto read_by_next_iter = dot(next, reads);
  print_box_bounds("read by next iter", read_by_next_iter);
  auto read_before = dot(dot(next, earlier_in_same_level), reads);
  print_box_bounds("already loaded to RB", read_before);
  cout << endl;

  auto diff_data = diff(read_by_next_iter, read_before);

  return diff_data;
}

void add_reuse_buffer(const std::string& level, const std::string& buffer, prog& prg) {

  //umap* reads = read_at(level, buffer, prg);
  //cout << "reads = " << str(reads) << endl;

  auto loop = prg.find_loop(level);
  //int outer_vars = surrounding_vars(loop, prg).size();

  //umap* first_reads = first_iteration_reads(reads, level, prg);
  //cout << "first reads = " << str(first_reads) << endl;

  //cout << "Re-use " << buffer << " at" << endl;
  //loop->pretty_print();

  //auto sched = prg.unoptimized_schedule();
  //auto earlier = lex_gt(sched, sched);
  //cout << "earlier = " << str(earlier) << endl;
 
  //auto read = prg.consumer_map(buffer);
  //cout << "consumed = " << str(read) << endl;
  //for (auto m : get_maps(read)) {
    //print_box_bounds(domain_name(m), m);
  //}
  //cout << endl;

  //auto read_earlier = coalesce(dot(earlier, read));
  //cout << "consumed earlier = " << str(read_earlier) << endl;
  //for (auto m : get_maps(read_earlier)) {
    //print_box_bounds(domain_name(m), m);
  //}
  //cout << endl;

  //auto consumed_earlier_and_now = its(read_earlier, read);
  //cout << "overlap          = " << str(consumed_earlier_and_now) << endl;
  //auto consumed_first_time = diff(read, consumed_earlier_and_now);
  //auto csf = cpy(consumed_first_time);
  //cout << "first time read  = " << str(consumed_first_time) << endl;
  ////uset* not_first = 
  ////auto not_first = isl_union_set_read_from_str(prg.ctx, "{ op3[root, y, x, yi] : y > 0 }");
  ////cout << "not first        = " << str(not_first) << endl;
  ////consumed_first_time = its(consumed_first_time, not_first);
  //consumed_first_time = coalesce(consumed_first_time);
  //cout << "first time read  = " << str(consumed_first_time) << endl;

  isl_map* initial_data = get_initial_data(level, buffer, prg);
  cout << "initially read: " << str(initial_data) << endl;
  string rb_name = buffer + "_rb_at_" + level;
  read_in_before(loop, initial_data, rb_name, prg);
  //{
    //auto lmin = lexmin(initial_data);
    //auto lmax = lexmax(initial_data);
    //cout << "Initial data min/max" << endl;
    //cout << tab(1) << "min              = " << str(lmin) << endl;
    //cout << tab(1) << "max              = " << str(lmax) << endl;
  //}

  //cout << "consumed first time = " << str(consumed_first_time) << endl;
  //isl_map* pr = nullptr;
  //for (auto m : get_maps(consumed_first_time)) {
    //cout << "m = " << str(m) << endl;
    //assert(outer_vars < num_in_dims(m));
    //int to_remove = num_in_dims(m) - outer_vars;
    //cout << tab(1) << "removing " << to_remove << " dims at " << outer_vars << endl;
    //auto prj = isl_map_project_out(cpy(m), isl_dim_in, outer_vars + 1, num_in_dims(m) - outer_vars - 1);
    //if (pr == nullptr) {
      //pr = prj;
    //} else {
      //pr = unn(pr, prj);
    //}
  //}

  ////auto maps = get_maps(consumed_first_time);
  ////assert(maps.size() == 1);
  ////auto mpa = maps.at(0);
  ////cout << "mpa = " << str(mpa) << endl;
  //cout << "initial data = " << str(initial_data) << endl;
  //////mpa = diff(mpa, initial_data);
  //////assert(false);
  ////auto pr = isl_map_project_out(cpy(mpa), isl_dim_in, 2, 2);
  //cout << "pr = " << str(pr) << endl;
  //{
    //auto lmin = lexmin(pr);
    //auto lmax = lexmax(pr);
    //cout << "pre-diff pr min              = " << str(lmin) << endl;
    //cout << "pre-diff pr max              = " << str(lmax) << endl;
  //}
  //pr = diff(pr, initial_data);
  //auto lmin = lexmin(pr);
  //auto lmax = lexmax(pr);
  //cout << "min              = " << str(lmin) << endl;
  //cout << "max              = " << str(lmax) << endl;
 
  auto pr = delta_data(loop, buffer, prg);
  read_in_after(loop, pr, rb_name, prg);

  cout << "pr = " << str(pr) << endl;

  std::set<op*> users;
  for (auto op : loop->descendant_ops()) {
    if (elem(buffer, op->buffers_referenced())) {
      users.insert(op);
    }
  }
  cout << "Users..." << endl;
  for (auto u : users) {
    cout << tab(1) << u->name << endl;
  }
  for (auto rd : users) {
    rd->replace_reads_from(buffer, rb_name);
  }
  
  for (auto rd : users) {
    rd->replace_writes_to(buffer, rb_name);
  }

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
  options.use_custom_code_string = true;
  options.banking_strategies["C"] = {"register_file"};
  options.inner_bank_offset_mode = INNER_BANK_OFFSET_LINEAR;
  generate_optimized_code(options, prg);
  //regression_test(options, prg);
  move_to_synthesis_folder(prg.name);

  //assert(false);
}

//void emit_lake_controller_config(const std::string& filename, isl_set* write_domain, isl_aff* write_sched, isl_aff* write_addr) {
void emit_lake_controller_config(std::ostream& out, isl_set* write_domain, isl_aff* write_sched) {
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

isl_aff* get_aff_addr(op* op, const std::string& buf_name,
    const address& addr,
    prog& prg) {
  auto vars = map_find(op, prg.iter_vars());
  auto pwaff = to_multi_aff(prg.ctx, vars, addr);

  assert(isl_multi_aff_dim(pwaff, isl_dim_set) == 1);

  return isl_multi_aff_get_aff(pwaff, 0);
}

void lake_agg_sram_tb_config_test() {
  prog lake_agg("lake_agg_test");
  lake_agg.add_input("in");
  lake_agg.add_output("out");

  auto in2agg = lake_agg.add_nest("a1", 0, 8, "a0", 0, 4)->add_op("in2agg");
  in2agg->add_load("in", "a0 + 4*a1");
  in2agg->add_store("agg", "a0 + 4*a1");

  auto agg2sram = lake_agg.add_nest("as1", 0, 8, "as0", 0, 1)->add_op("agg2sram");
  for (int i = 0; i < 4; i++) {
    agg2sram->add_load("agg", str(i) + " + 4*as1");
  }
  agg2sram->add_store("sram", "as1");

  auto sram2tb = lake_agg.add_nest("at1", 0, 8, "at0", 0, 1)->add_op("sram2tb");
  sram2tb->add_load("sram", "at1");
  for (int i = 0; i < 4; i++) {
    sram2tb->add_store("tb", str(i) + " + 4*at1");
  }

  auto tb2out = lake_agg.add_nest("ao1", 0, 8, "ao0", 0, 4)->add_op("tb2out");
  tb2out->add_load("tb", "ao0 + 4*ao1");
  tb2out->add_store("out", "ao0 + 4*ao1");

  lake_agg.pretty_print();
  //assert(false);

  auto valid = lake_agg.validity_deps();

  lake_agg.pretty_print();
  cout << "validity: " << str(valid) << endl;
  cout << "Schedule..." << endl;
  map<string, int> latencies;
  map<string, int> iis;
  for (auto f : get_sets(lake_agg.whole_iteration_domain())) {
    latencies[name(f)] = 2;
    iis[name(f)] = 1;
  }

  auto ct = lake_agg.ctx;
  vector<pair<string, isl_val*> > obj;
  for (auto f : get_sets(lake_agg.whole_iteration_domain())) {
    string n = name(f);
    int dim = num_dims(f);

    for (int i = 0; i < dim; i++) {
      obj.push_back({ii_var(n, i), one(ct)});
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

    for (auto locs_written : op->produce_locs) {
    //for (auto locs_written : op->write_addrs()) {
      //assert(locs_written.size() == 1);
      //auto loc_sec = locs_written.at(0).second;
      out << "\"write\"," << "\"" << locs_written.first << "\"" << endl;
      isl_aff* write_addr = get_aff_addr(op, locs_written.first, locs_written.second, lake_agg);
      //isl_aff* write_addr = get_aff_addr(op, locs_written.first, loc_sec, lake_agg);
      out << "\"data_starting_addr\"," << to_int(const_coeff(write_addr)) << ",0" << endl;
      for (int d = 0; d < num_in_dims(write_addr); d++) {
        int ldim = num_in_dims(write_addr) - d - 1;
        out << "\"data_stride_" << ldim << "\"," << to_int(get_coeff(write_addr, d)) << ",0" << endl;
      }
    }

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
  auto prg = resnet();
  prg.pretty_print();
  //assert(false);
  add_reuse_buffer("conv_s1_x", "conv_stencil", prg);
  prg.pretty_print();
  generate_unoptimized_code(prg);
  //assert(false);

  CodegenOptions options;
  options.all_rams = true;
  all_register_files(prg, options);
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_MULTILINEAR;
  generate_optimized_code(options, prg);
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
    options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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

void llf_test() {
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

  infer_bounds("color_out", {3, 256, 256}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();

  unroll_reduce_loops(prg);

  cout << "======================================" << endl;
  cout << "========= After unrolling reduce loops" << endl;
  prg.pretty_print();

  //assert(false);

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

  //assert(false);
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

int op_latency(op* op, const schedule_info& hwinfo) {
  assert(!op->is_loop);

  int total_latency = 0;

  // Account for time to load data from inputs
  vector<int> load_latencies;
  for (auto b : op->buffers_read()) {
    load_latencies.push_back(map_find(b, hwinfo.buffer_load_latencies));
  }
  sort(begin(load_latencies), end(load_latencies));
  if (load_latencies.size() > 0) {
    total_latency += load_latencies.back();
  }

  // Then we need to wait for the compute unit to finish
  if (op->func != "") {
    int latency = map_find(op->func, hwinfo.compute_unit_latencies);
    //assert(latency == 0);
    total_latency += latency;
  }

  // Then we need to wait for the data that comes out of the compute
  // unit to be finished
  vector<int> store_latencies;
  for (auto b : op->buffers_written()) {
    store_latencies.push_back(map_find(b, hwinfo.buffer_store_latencies));
  }
  sort(begin(store_latencies), end(store_latencies));
  if (store_latencies.size() > 0) {
    total_latency += store_latencies.back();
  }

  return total_latency;
}

vector<op*> inner_ops(prog& prg) {
  vector<op*> ordered_inner =
    get_ordered_inner_loops(prg);
  vector<op*> ops;
  for (auto ord : ordered_inner) {
    for (auto c : ord->children) {
      assert(!c->is_loop);
      ops.push_back(c);
    }
  }
  return ops;
}

void sequential_schedule(schedule_info& hwinfo, op* op, prog& prg) {
  cout << "scheduling: " << op->name << endl;

  if (!op->is_loop) {
    int total_latency = op_latency(op, hwinfo);
    hwinfo.instance_latencies[op] = total_latency;
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
    //if (other->is_loop) {
      //int inner_ii = map_find(other->name, hwinfo.loop_iis);
      //latency += inner_ii*prg.trip_count(other->name);
    //} else {
      //latency += map_find(other, hwinfo.total_op_latencies);
    //}
    if (old_latency == latency) {
      latency += 1;
    }
  }

  //auto inner = get_inner_loops(prg);
  //if (elem(op, inner)) {
    //hwinfo.loop_iis[op->name] = 2; //max(latency, 1);
  //} else {
    //hwinfo.loop_iis[op->name] = max(latency, 1);
  //}
  hwinfo.loop_iis[op->name] = max(latency, 1);

  hwinfo.instance_latencies[op] = latency;
  //hwinfo.loop_latencies[op->name] = latency;
}

void build_schedule_exprs(op* parent, map<op*, QExpr>& schedule_exprs, schedule_info& sched, prog& prg) {
  if (!parent->is_loop) {
    return;
  }

  QExpr parent_sched = map_find(parent, schedule_exprs);
  for (auto c : parent->children) {
    if (c->is_loop) {
      QTerm root_sched_t{{qconst(map_find(c->name, sched.loop_iis)), qvar(c->name)}};
      QExpr root_sched{{root_sched_t}};

      QAV delayv = qconst(map_find(c, sched.op_offset_within_parent));
      QTerm delayt{{delayv}};
      QExpr delay{{delayt}};

      root_sched = parent_sched + root_sched + delay;
      schedule_exprs[c] = root_sched;
    } else {
      QAV delayv = qconst(map_find(c, sched.op_offset_within_parent));
      QTerm delayt{{delayv}};
      QExpr delay{{delayt}};

      auto root_sched = parent_sched + delay;
      schedule_exprs[c] = root_sched;
    }
    build_schedule_exprs(c, schedule_exprs, sched, prg);
  }
}

map<op*, isl_aff*> op_start_times(schedule_info& sched, prog& prg) {
  op* root = prg.root;
  QTerm root_sched_t{{qconst(map_find(root->name, sched.loop_iis)), qvar(root->name)}};
  QExpr root_sched{{root_sched_t}};

  map<op*, QExpr> schedule_exprs{{root, root_sched}};
  map<op*, isl_aff*> schedule_affs;
  build_schedule_exprs(root, schedule_exprs, sched, prg);

  cout << "==== Schedules..." << endl;
  for (auto opl : schedule_exprs) {
    auto op = opl.first;
    cout << tab(1) << op->name << " -> " << opl.second << endl;
    ostringstream ss;
    ss << opl.second;
    if (!op->is_loop) {
      isl_aff* aff = isl_aff_read_from_str(prg.ctx,
          curlies(op->name + sep_list(surrounding_vars(op, prg), "[", "]", ", ") + " -> " + brackets(parens(ss.str()))).c_str());
      schedule_affs[op] = aff;
    }
  }

  return schedule_affs;
}

map<op*, isl_aff*> op_end_times(schedule_info& sched, prog& prg) {
  op* root = prg.root;
  QTerm root_sched_t{{qconst(map_find(root->name, sched.loop_iis)), qvar(root->name)}};
  QExpr root_sched{{root_sched_t}};

  map<op*, QExpr> schedule_exprs{{root, root_sched}};
  map<op*, isl_aff*> schedule_affs;
  build_schedule_exprs(root, schedule_exprs, sched, prg);

  cout << "==== Schedules..." << endl;
  for (auto opl : schedule_exprs) {
    auto op = opl.first;
    QExpr expr = opl.second;
    QAV val = qconst(sched.total_latency(op)); //map_find(op, sched.total_op_latencies));
    QTerm offsett{{val}};
    QExpr offset{{offsett}};
    expr = expr + offset;
    cout << tab(1) << op->name << " -> " << expr << endl;
    ostringstream ss;
    ss << expr;
    if (!op->is_loop) {
      isl_aff* aff = isl_aff_read_from_str(prg.ctx,
          curlies(op->name + sep_list(surrounding_vars(op, prg), "[", "]", ", ") + " -> " + brackets(parens(ss.str()))).c_str());
      schedule_affs[op] = aff;
    }
  }

  return schedule_affs;

}

uset* op_start_times_domain(prog& prg) {
  auto start_times = prg.whole_iteration_domain();

  uset* s = isl_union_set_read_from_str(prg.ctx, "{}");
  for (auto a : get_sets(start_times)) {
    a = set_name(a, "start_" + name(a));
    s = unn(s, to_uset(a));
    release(a);
  }

  return s;
}

umap* op_start_times_map(schedule_info& sched, prog& prg) {
  auto start_times = op_start_times(sched, prg);

  map<string, isl_aff*> hs;
  for (auto a : start_times) {
    hs["start_" + a.first->name] = a.second;
  }

  return to_umap(hs);
}

umap* op_end_times_map(schedule_info& sched, prog& prg) {
  auto start_times = op_end_times(sched, prg);

  map<string, isl_aff*> hs;
  for (auto a : start_times) {
    hs["end_" + a.first->name] = a.second;
  }

  return to_umap(hs);
}


int max_loop_depth(prog& prg) {
  int maxl = -1;
  for (auto op : prg.all_ops()) {
    int l = surrounding_vars(op, prg).size();
    maxl = max(l, maxl);
  }
  return maxl;
}

void tighten_iis(schedule_info& sched, prog& prg) {
  bool tightened = true;
  while (tightened) {
    tightened = false;
    for (auto loop : prg.all_loops()) {
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

void adjust_inner_iis(schedule_info& sched, prog& prg) {
  cout << "Adjusting iis of " << prg.name << endl;
  for (auto lp : get_inner_loops(prg)) {
    cout << "Adjusting ii of " << lp->name << endl;
    int old_ii = map_find(lp->name, sched.loop_iis);
    int old_total_latency = old_ii*(lp->trip_count() - 1) + sched.instance_latency(lp);
    int try_ii = 1;
    bool found_smaller_ii = false;
    while (try_ii < old_ii) {
      sched.loop_iis[lp->name] = try_ii;
      //sched.total_op_latencies[lp] = try_ii*(lp->trip_count() - 1) + sched.instance_latency(lp);
      if (no_violated_cycle_accurate_dependencies(sched, prg)) {
        found_smaller_ii = true;
        break;
      }
      try_ii *= 2;
    }

    if (!found_smaller_ii) {
      sched.loop_iis[lp->name] = old_ii;
      //sched.total_op_latencies[lp] = old_total_latency;
    }
  }
}

bool is_perfect(op* loop, prog& prg) {
  assert(loop->is_loop);
  if (is_inner_loop(loop)) {
    return true;
  }

  if (loop->children.size() > 1) {
    return false;
  }

  return is_perfect(loop->children.at(0), prg);
}

bool all_perfect_loop_nests(prog& prg) {
  for (auto l : prg.all_loops()) {
    if (l->name != "root") {
      if (!is_perfect(l, prg)) {
        return false;
      }
    }
  }
  return true;
}

int loop_depth(op* op) {
  int d = op->is_loop;
  int max_child_depth = 0;
  for (auto c : op->children) {
    max_child_depth = max(loop_depth(c), max_child_depth);
  }
  return d + max_child_depth;

}
bool all_loop_nests_same_depth(prog& prg) {
  auto ops = prg.all_ops();

  if (ops.size() == 0) {
    return true;
  }
  std::set<int> depths;
  for (auto op : ops) {
    depths.insert(surrounding_vars(op, prg).size());
  }
  return depths.size() == 1;
}

void dsa_writers(prog& prg) {
  std::set<string> all_buffers;
  std::set<string> multi_write_buffers;
  map<string, std::set<string> > producer_kernels;
  std::set<string> reduced_kernels;
  for (auto op : prg.all_ops()) {
    auto read = op->buffers_read();
    auto written = op->buffers_written();
    for (auto b : intersection(read, written)) {
      reduced_kernels.insert(b);
    }
  }

  for (auto k : get_kernels(prg)) {
    for (auto b : get_produced_buffers(k, prg)) {
      all_buffers.insert(b);
      producer_kernels[b].insert(k);
    }
  }

  for (auto k : get_kernels(prg)) {
    for (auto b : get_produced_buffers(k, prg)) {
      auto producers = producer_kernels[b];

      if (elem(b, reduced_kernels) && producers.size() > 1) {
        cout << b << " has " << producers.size() << " producers" << endl;
        for (auto p : producers) {
          cout << tab(1) << p << endl;
        }
        auto writers = find_writers(b, prg);
        prg.pretty_print();
        assert(writers.size() <= 2);
        if (writers.size() > 1) {
          multi_write_buffers.insert(b);
        }
      }

    }
  }

  cout << "Multi-write buffers" << endl;
  map<string, op*> initializers;
  map<string, op*> updaters;
  for (auto b : multi_write_buffers) {
    cout << tab(1) << b << endl;
    auto writers = find_writers(b, prg);
    assert(writers.size() == 2);
    vector<op*> ws;
    for (auto w : writers) {
      ws.push_back(w);
    }
    op* w0 = ws.at(0);
    op* w1 = ws.at(1);

    if (w0->read_addrs().size() == 0) {
      initializers[b] = w0;
      updaters[b] = w1;
    } else {
      initializers[b] = w1;
      updaters[b] = w0;
    }
  }

  cout << "Built initializer / update maps" << endl;

  for (auto b : multi_write_buffers) {
    string init_buffer = prg.un(b + "_clkwrk_dsa");
    auto init = initializers[b];
    assert(init != 0);
    auto updated = updaters[b];
    assert(updated != 0);
    cout << "Replacing writes" << endl;
    init->replace_writes_to(b, init_buffer);
    cout << "Replacing reads from " << b << " in " << updated->name << endl;
    updated->replace_reads_from(b, init_buffer);
    prg.buffer_port_widths[init_buffer] = prg.buffer_port_width(b);
  }

  prg.pretty_print();
  //assert(false);

  // Split up buffers that are read at constants in one of their components
  for (auto b : all_buffers) {
    auto writers = find_writers(b, prg);
    auto readers = find_readers(b, prg);

    if (writers.size() > 1 && readers.size() == 0) {
      cout << b << " has " << writers.size() << " writers and " << readers.size() << " readers" << endl;
      assert(prg.is_output(b));
      for (auto writer : writers) {
        string init_buffer = prg.un(b + "_clkwrk_write_duplicate");
        writer->replace_writes_to(b, init_buffer);
        prg.add_output(init_buffer);
        prg.buffer_port_widths[init_buffer] = prg.buffer_port_width(b);
      }

      prg.outs.erase(b);

      //// Now: Group writers and readers by their overlap sets?

      //auto pmaps = prg.producer_maps(b);
      //auto cmaps = prg.consumer_maps(b);
      //map<op*, std::set<op*> > overlap;
      //for (auto writer : writers) {
        //auto written = map_find(writer, pmaps);
        //for (auto reader : readers) {
          //auto read = map_find(reader, cmaps);
          //if (!empty(its(range(read), range(written)))) {
            //overlap[writer].insert(reader);
          //}
        //}
      //}

      //cout << "Writer overlap..." << endl;
      //for (auto w : overlap) {
        //cout << tab(1) << w.first->name << " = " << w.second.size() << endl;
      //}
      //assert(false);
    }
  }
}

void adjust_schedule_forward(schedule_info& sched, prog& prg) {
  auto start_times = its(op_start_times_map(sched, prg), op_start_times_domain(prg));
  cout << "Start times..." << endl;
  cout << str(start_times) << endl;
  auto ranges = range(start_times);
  auto range_set = to_set(ranges);
  int min = to_int(lexminval(range_set));
  cout << tab(1) << "pre adjustment min: " << str(lexmin(ranges)) << endl;

  // Just to be safe we start the cycle after reset
  min = min - 1;

  if (min <= 0) {
    for (auto k : get_kernels(prg)) {
      auto loop = prg.find_loop(k);
      sched.op_offset_within_parent[loop] = map_find(loop, sched.op_offset_within_parent) - min;
    }
  }


}

void garnet_dual_port_ram_schedule(schedule_info& sched, op* root, prog& prg) {
  auto rvars = reduce_vars(prg);
  bool perfect = all_perfect_loop_nests(prg);
  if (rvars.size() == 0 &&
      perfect) {
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
        sched.instance_latencies[container] = 1;
        cout << tab(2) << "ii = " << sched.II(container) << endl;
      }
    }
    int total_latency = 0;
    for (auto op : inner_ops(prg)) {
      sched.op_offset_within_parent[op] = total_latency;
      sched.instance_latencies[op] = op_latency(op, sched);
      total_latency += op_latency(op, sched) + 2;
    }

    adjust_schedule_forward(sched, prg);
    return;
  }

  prg.pretty_print();
  cout << prg.name << " is not a stencil" << endl;
  cout << tab(1) << "Perfect: " << perfect << endl;
  cout << tab(1) << "# rvars: " << rvars.size() << endl;
  for (auto rv : rvars) {
    cout << tab(2) << rv << endl;
  }
  assert(false);

  sequential_schedule(sched, root, prg);

  adjust_inner_iis(sched, prg);
  tighten_iis(sched, prg);
  //assert(false);
  return;

  //auto rvars = reduce_vars(prg);
  //if (rvars.size() == 0) {
    //auto valid = prg.validity_deps();
    //auto dom = prg.whole_iteration_domain();
    //auto cs = clockwork_schedule(dom, valid, cpy(valid));
    //cout << "Clockwork schedule..." << endl;
    //for (auto op : cs) {
      //cout << tab(1) << op.first << " -> ";
      //for (auto aff : op.second) {
        //cout << str(aff) << " ";
      //}
      //cout << endl;
    //}

    //for (auto other : prg.all_ops()) {
      //sched.op_offset_within_parent[other] = 0;
    //}

    //int num_levels = max_loop_depth(prg);

    //// Offset of ops in parents we can assume will always be 0 (for now)
    //// Offset of a loop within its parent will be delay_at_level * ii at that level
    //// II at a given level will be?
    ////  1 at level 1
    ////  latency of lower levels?
    ////

    //vector<int> level_iis;
    //level_iis.resize(num_levels, 0);
    //for (int i = num_levels - 1; i >= 0; i--) {
      //for (auto other : prg.all_ops()) {
        //auto surrounding = surrounding_vars(other, prg);
        //cout << "# surrounding = " << surrounding.size() << endl;
        //cout << "i = " << i << endl;
        //assert(surrounding.size() > i);
        //string lname = surrounding.at(i);
        //op* loop = prg.find_loop(lname);
        //int lii = -1;
        //int qfactor = to_int(get_coeff(map_find(other->name, cs).at(i), 0));
        //int delay = to_int(int_const_coeff(map_find(other->name, cs).at(i)));

        //if (i == num_levels - 1) {
          //lii = qfactor;
        //} else {
          //lii = qfactor*loop->trip_count()*level_iis.at(i + 1);
        //}
        //lii = 1;
        //assert(lii > 0);

        //sched.loop_iis[lname] = lii;
        //level_iis.at(i) = lii;
        //sched.op_offset_within_parent[loop] = lii*delay;
      //}
    //}
    ////assert(false);
  //} else {
    //sequential_schedule(sched, root, prg);
  //}
}

schedule_info garnet_schedule_info(prog& prg) {
  schedule_info sched;
  for (auto op : prg.all_ops()) {
    // Extremely hacky rom latency introduction
    if (op->func == "hcompute_curved_stencil") {
      sched.compute_unit_latencies[op->func] = 1;
      sched.op_compute_unit_latencies[op->name] = 1;
    } else if (op->func == "hcompute_curved_stencil_1") {
      sched.compute_unit_latencies[op->func] = 1;
      sched.op_compute_unit_latencies[op->name] = 1;
    } else if (op->func == "hcompute_curved_stencil_2") {
      sched.compute_unit_latencies[op->func] = 1;
      sched.op_compute_unit_latencies[op->name] = 1;
    } else if (prg.name == "rom" && op->func == "hcompute_hw_output_stencil") {
      //assert(false);
      sched.compute_unit_latencies[op->func] = 1;
      sched.op_compute_unit_latencies[op->name] = 1;
    } else if (op->func != "") {
      sched.compute_unit_latencies[op->func] = 0;
      sched.op_compute_unit_latencies[op->name] = 0;
    } else {
      sched.op_compute_unit_latencies[op->name] = 0;
    }

    for (auto b : op->buffers_referenced()) {
      if (!prg.is_boundary(b)) {
        sched.buffer_load_latencies[b] = 1;
        sched.buffer_store_latencies[b] = 1;
      } else {
        sched.buffer_load_latencies[b] = 0;
        sched.buffer_store_latencies[b] = 0;
      }
    }
  }

  return sched;
}

void compile_for_garnet_dual_port_mem(prog& prg) {
  normalize_bounds(prg);

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  all_exhaustive_banked(prg, options);

  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_CYCLE_DELAY;

  schedule_info sched = garnet_schedule_info(prg);
  garnet_dual_port_ram_schedule(sched, prg.root, prg);

  op* root = prg.root;
  QTerm root_sched_t{{qconst(map_find(root->name, sched.loop_iis)), qvar(root->name)}};
  QExpr root_sched{{root_sched_t}};

  map<op*, QExpr> schedule_exprs{{root, root_sched}};
  map<string, isl_aff*> schedule_affs;
  build_schedule_exprs(root, schedule_exprs, sched, prg);

  cout << "==== Schedules..." << endl;
  for (auto opl : schedule_exprs) {
    auto op = opl.first;
    cout << tab(1) << op->name << " -> " << opl.second << endl;
    ostringstream ss;
    ss << opl.second;
    if (!op->is_loop) {
      isl_aff* aff = isl_aff_read_from_str(prg.ctx,
          curlies(op->name + sep_list(surrounding_vars(op, prg), "[", "]", ", ") + " -> " + brackets(parens(ss.str()))).c_str());
      schedule_affs[op->name] = aff;
    }
  }

  prg.pretty_print();

  cout << "==== Affine schedule expressions" << endl;
  for (auto ef : schedule_affs) {
    cout << tab(1) << ef.first<< " -> " << str(ef.second) << endl;
  }

  auto hw_sched = its(to_umap(prg.whole_iteration_domain(), schedule_affs), prg.whole_iteration_domain());
  cout << "Hw schedule..." << str(hw_sched) << endl;
  for (auto m : get_maps(hw_sched)) {
    cout << tab(1) << str(m) << endl;
  }

  assert(no_violated_cycle_accurate_dependencies(sched, prg));
  auto buffers = build_buffers(prg, hw_sched);
  //generate_app_code(options, buffers, prg, hw_sched);

#ifdef COREIR

  //generate_coreir_addrgen_in_tile(options,
    //buffers,
    //prg,
    //hw_sched);
  //assert(false);

  generate_coreir(options,
    buffers,
    prg,
    hw_sched,
    sched);
  generate_verilator_tb(prg, hw_sched, buffers);

  // Insert coreir generation here
#endif
}

umap* cycle_accurate_deps(schedule_info& sched, prog& prg) {
  auto valid = prg.validity_deps();
  umap* final_dep = rdmap(prg.ctx, "{}");
  for (auto m : get_maps(valid)) {
    string dom_name = "end_" + domain_name(m);
    string rname = "start_" + range_name(m);
    m = set_domain_name(set_range_name(m, rname), dom_name);
    auto um = to_umap(m);
    final_dep = unn(final_dep, um);
    release(m);
    release(um);
  }

  release(valid);
  return final_dep;
}

void sanity_check_iis(schedule_info& sched) {
  for (auto lii : sched.loop_iis) {
    assert(lii.second > 0);
  }
}

void sanity_check_negative_starts(schedule_info& sched, prog& prg) {
  auto start_times = its(op_start_times_map(sched, prg), op_start_times_domain(prg));
  cout << "Start times..." << endl;
  //cout << str(start_times) << endl;
  for (auto m : get_maps(start_times)) {
    cout << tab(1) << str(m) << endl;
  }
  //assert(false);
  auto ranges = range(start_times);
  auto range_set = to_set(ranges);
  int min = to_int(lexminval(range_set));

  cout << tab(1) << "min: " << str(lexmin(ranges)) << endl;
  assert(min >= 0);
}

bool no_violated_cycle_accurate_dependencies(schedule_info& sched, prog& prg) {
  sanity_check_iis(sched);
  sanity_check_negative_starts(sched, prg);

  auto start_times = op_start_times_map(sched, prg);
  auto end_times = op_end_times_map(sched, prg);
  auto all_times = unn(start_times, end_times);

  cout << "Schedule..." << endl;
  for (auto m : get_maps(start_times)) {
    cout << tab(1) << str(m) << endl;
    release(m);
  }
  auto deps = cycle_accurate_deps(sched, prg);
  cout << tab(1) << "Cycle deps: " << str(deps) << endl;

  deps = inv(deps);
  auto earlier = lex_lt(all_times, all_times);

  cout << tab(1) << "Earlier deps: " << str(earlier) << endl;

  auto violated = its(earlier, deps);

  cout << tab(1) << "Violated deps: " << str(violated) << endl;
  bool safe = empty(violated);

  release(violated);
  release(earlier);
  release(start_times);
  release(end_times);
  release(all_times);
  return safe;
}

void test_schedules(vector<prog>& test_programs) {
  
  for (auto& prg : test_programs) {
    schedule_info sched =
      garnet_schedule_info(prg);
    garnet_dual_port_ram_schedule(sched, prg.root, prg);
    cout << "Checking " << prg.name << " schedule" << endl;
    prg.pretty_print();

    assert(no_violated_cycle_accurate_dependencies(sched, prg));
    auto ss = op_start_times_map(sched, prg);
    for (auto m : get_maps(ss)) {
      cout << tab(1) << str(m) << endl;
    }
  }

  //assert(false);
}

vector<prog> stencil_programs() {
  vector<prog> test_programs;

  // Working
  test_programs.push_back(camera_pipeline());
  test_programs.push_back(mini_conv_halide_fixed());
  test_programs.push_back(gaussian());
  test_programs.push_back(pointwise());
  test_programs.push_back(down_sample());
  test_programs.push_back(strided_conv());
  test_programs.push_back(cascade());
  test_programs.push_back(harris());
  test_programs.push_back(halide_harris());

  // commonlib div?
  //test_programs.push_back(unsharp());
  // Fails at 256?
  //test_programs.push_back(rom());
  return test_programs;
}

void test_stencil_codegen(vector<prog>& test_programs) {
  for (auto& prg : test_programs) {
    cout << "====== Running CGRA test for " << prg.name << endl;
    prg.pretty_print();
    prg.sanity_check();
    //assert(false);

    dsa_writers(prg);
    auto cpu = unoptimized_result(prg);
    //assert(false);

    compile_for_garnet_dual_port_mem(prg);
    generate_regression_testbench(prg);
    //auto cgra_sim = run_regression_tb(prg.name);

    cout << "Output name: " << prg.name << endl;
    //assert(false);
    //compare("cgra_" + prg.name + "_cpu_comparison", cpu, cgra_sim);
    run_verilator_tb(prg.name);
    auto verilator_res = verilator_results(prg.name);
    compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
    //assert(false);
    //cmd("mkdir -p ./coreir_apps/raw_sram/" + prg.name);
    //cmd("mv " + prg.name + ".json ./coreir_apps/raw_sram/" + prg.name + "/");
    //cmd("mv " + prg.name + ".v ./coreir_apps/raw_sram/" + prg.name + "/");
    //cmd("mv cycle_accurate_regression_result_" + prg.name + ".csv ./coreir_apps/raw_sram/" + prg.name + "/");
    //cmd("mv " + prg.name + "_verilog_tb.cpp ./coreir_apps/raw_sram/" + prg.name + "/");
  }
}

void cgra_flow_tests() {
  auto test_programs = stencil_programs();
  test_stencil_codegen(test_programs);
  //test_schedules(test_programs);

  assert(false);
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
  test_programs.push_back(mini_conv_halide_fixed());
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

  infer_bounds_and_unroll("out", {20, 20}, 16, prg);

  prg.pretty_print();
  prg.sanity_check();

  sanity_check_all_reads_defined(prg);
  //assert(false);

  regression_test(prg);

  assert(false);

}

void remove_reduce_inits_test() {
  assert(false);
}

void application_tests() {
  infer_bounds_16_stage_5x5_conv_test();
  infer_bounds_multi_5x1_stage_negative_conv_test();
  infer_bounds_multi_5x5_stage_negative_conv_test();
  infer_bounds_multi_stage_negative_conv_test();
  //infer_bounds_color_downsample_test();
  infer_bounds_multi_stage_negative_conv1d_test();
  infer_bounds_three_stage_negative_conv_test();
  
  infer_bounds_single_stage_negative_conv_test();
  infer_bounds_negative_conv_test();

  
  sum_diffs_test();
  denoise3d_reconvergence_test();
  tricky_shift_register_reconvergence_test();
  mismatched_stencil_test();
  gaussian_pyramid_app_test("gp64x64");

  reduce_1d_test();
  reduce_2d_test();
  ram_addr_unit_test();


  upsample2d_test();
  upsample_stencil_2d_test();
  upsample_stencil_1d_test();
  up_unrolled_4_test();
  reduce_rows_test();
  reaccess_no_hierarchy_test();
  //playground();

  up_unrolled_test();

  //adobe_meeting_apps();
  sum_denoise_test();
  //assert(false);

  up_down_unrolled_test();


  histogram_test();
  //assert(false);
  

  //mmul_outer_prod_test();

  tricky_shift_register_reconvergence_test();

  mmul_outer_prod_test();

  mini_conv_halide_test();
  grayscale_conversion_test();
  //print_test();
  //manual_unroll_test();

  compute_unit_with_index_variables_test();

  //pyr_1d_conv_test();
  halide_dnn_test();
  //conv_1d_bc_test();

  conv_1d_test();

  jacobi2d_app_test();
  downsample2d_test();
  up_stencil_down_test();
  downsample_and_blur_test();

  updown_merge_test();
  harris_unrolled_test();


  identity_stream_coreir_test();
  weight_streaming_test();

  identity_stream_through_mem_coreir_test();
  reduce_stream_coreir_test();
  conv_test();
  conv_2d_bc_test();

  
  us_unroll_test();
  ds_unroll_test();
  prg_unroll_test();
  lchannel_test();
  gf_test();

  halide_frontend_test();
  halide_harris_test();
  halide_up_sample_test();
  halide_conv_layer_3D_test();
  conv_3_3_halide_test();

  async_add_test();
  lake_agg_sram_tb_config_test();
  seidel2d_test();
  add_four_channels();
  weight_add_psef();

  two_stage_psef();
  psef_multi_output_test();

  non_rate_matched_ds_test();
  resnet_test();

  iccad_tests();

  coreir_tests();
  multi_output_app_test();

  sobel_test();
  jacobi_2d_test();

  reaccess_no_hierarchy_rolled_test();

  two_input_mag_test();
  one_input_mag_test();

  sum_float_test();

  sobel_mag_y_test();
  sobel_app_test();
  sobel_mag_x_test();
  heat_3d_test();

  upsample_reduce_test();

  pointwise_test();

  stencil_3d_test();
  //assert(false);

  //unet_conv_3_3_test();
  cyclic_banked_conv_test();
  //register_file_optimization_test();
  
  // Does not work with register files?
  //cnn_test();

  neg_stencil_test();
  
  gaussian_pyramid_test();
  warp_and_upsample_test();

  //conv_1d_rolled_test();
  //synth_upsample_test();
  unsharp_test();
  //conv_2d_rolled_test();
  //mobilenet_test();
  pyramid_2d_test();
  pyramid_test();

  up_stencil_auto_unrolled_test();
  up_down_auto_unrolled_test();
  up_stencil_down_auto_unrolled_test();
  conv3x3_app_unrolled_test();
  conv3x3_app_test();
  conv3x3_app_unrolled_uneven_test();

  jacobi2d_app_test();

  up_stencil_test();
  blur_x_test();

  //remove_reduce_inits_test();

  reuse_buffered_conv_test();
  infer_uneven_bounds_test();
  llf_pyramid_test();
  infer_bounds_unrolled_test();
  llf_test();
  blur_example();
  //assert(false);
  //halide_camera_pipeline_test();
  register_file_test();

  //exposure_fusion_iccad_apps("ef_cc");

  //assert(false);

  // Failing?
  two_in_window_test();
  jacobi_2d_2_test();
  soda_blur_test();
  two_in_conv2d_test();
  //assert(false);
  
  //parse_denoise3d_test();
  //app added for cnn


  sobel_16_stage_x_app_test();

  up_stencil_test();
  blur_x_test();

  dummy_app_test();

  blur_and_downsample_test();
  denoise2d_test();


  //two_input_denoise_pipeline_test();
  //synth_wire_test();
  //synth_sr_boundary_condition_test();
  //synth_lb_test();
  //conv_app_rolled_reduce_test();
  //up_stencil_down_unrolled_test();
  //laplacian_pyramid_app_test();
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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
  options.use_custom_code_string = true;
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

int main(int argc, char** argv) {

  if (argc > 1) {
    assert(argc == 2);
    string cmd = argv[1];

    if (cmd == "cgra-flow") {
      cgra_flow_tests();
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
    application_tests();
    memory_tile_tests();
    //prog_splitting_tests();
    cout << "All tests passed" << endl;

  } else {
    assert(false);
  }

  return 0;
}


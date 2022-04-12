#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog harris() {
  prog prg;
  prg.compute_unit_file = "harris_compute.h";
  prg.name = "harris";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil((padded16_global_wrapper_s0_x + 3), (padded16_global_wrapper_s0_y + 3)) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "(padded16_global_wrapper_s0_y + 3)", "(padded16_global_wrapper_s0_x + 3)");

//consuming padded16_global_wrapper.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", -2, 60);
  auto grad_x_unclamp_s0_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x", -2, 60);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x + 2), (grad_x_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s0_y + 2)", "(grad_x_unclamp_s0_x + 2)");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", -2, 60);
  auto grad_x_unclamp_s1_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x", -2, 60);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 2)) = ((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 2)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 4), (grad_x_unclamp_s1_y + 2)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 4), (grad_x_unclamp_s1_y + 4)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 4), (grad_x_unclamp_s1_y + 3))*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 2))) - (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 3))*(int16)2)) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 4)))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s1_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x + 4)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 4)", "(grad_x_unclamp_s1_x + 4)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 3)", "(grad_x_unclamp_s1_x + 4)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 3)", "(grad_x_unclamp_s1_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 4)", "(grad_x_unclamp_s1_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x + 2)");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil((lxx_s0_x + 2), (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x + 2), (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x + 2), (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "(lxx_s0_y + 2)", "(lxx_s0_x + 2)");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "(lxx_s0_y + 2)", "(lxx_s0_x + 2)");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, 59);

//store is: lgxx.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 1)) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "(lgxx_s0_y + 1)", "(lgxx_s0_x + 1)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);

//store is: lgxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) = (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + (lgxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 3), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x + 2), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x + 3), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 3)) + (lxx.stencil((lgxx_s1_x + 3), (lgxx_s1_y + 3)) + lxx.stencil((lgxx_s1_x + 2), (lgxx_s1_y + 3)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 3)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x + 3)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "(lgxx_s1_x + 3)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "(lgxx_s1_x + 2)");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", -2, 60);
  auto grad_y_unclamp_s0_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x", -2, 60);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x + 2), (grad_y_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s0_y + 2)", "(grad_y_unclamp_s0_x + 2)");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", -2, 60);
  auto grad_y_unclamp_s1_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x", -2, 60);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 2)) = ((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 2)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 4)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 4), (grad_y_unclamp_s1_y + 4)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 3), (grad_y_unclamp_s1_y + 4))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 2))) - (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 3), (grad_y_unclamp_s1_y + 2))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 4), (grad_y_unclamp_s1_y + 2)))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s1_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x + 2)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x + 2)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x + 3)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x + 4)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 4)", "(grad_y_unclamp_s1_x + 2)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 4)", "(grad_y_unclamp_s1_x + 4)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 4)", "(grad_y_unclamp_s1_x + 3)");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x + 2)");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil((lxy_s0_x + 2), (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x + 2), (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x + 2), (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "(lxy_s0_y + 2)", "(lxy_s0_x + 2)");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "(lxy_s0_y + 2)", "(lxy_s0_x + 2)");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "(lxy_s0_y + 2)", "(lxy_s0_x + 2)");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, 59);

//store is: lgxy.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 1)) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "(lgxy_s0_y + 1)", "(lgxy_s0_x + 1)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);

//store is: lgxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) = (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + (lgxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 3), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x + 2), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x + 3), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 3)) + (lxy.stencil((lgxy_s1_x + 3), (lgxy_s1_y + 3)) + lxy.stencil((lgxy_s1_x + 2), (lgxy_s1_y + 3)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 3)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x + 3)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "(lgxy_s1_x + 3)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "(lgxy_s1_x + 2)");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil((lyy_s0_x + 2), (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x + 2), (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x + 2), (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_unclamp_stencil", "(lyy_s0_y + 2)", "(lyy_s0_x + 2)");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "(lyy_s0_y + 2)", "(lyy_s0_x + 2)");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, 59);

//store is: lgyy.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 1)) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "(lgyy_s0_y + 1)", "(lgyy_s0_x + 1)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);

//store is: lgyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) = (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + (lgyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 3), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x + 2), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x + 3), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 3)) + (lyy.stencil((lgyy_s1_x + 3), (lgyy_s1_y + 3)) + lyy.stencil((lgyy_s1_x + 2), (lgyy_s1_y + 3)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 3)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x + 3)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "(lgyy_s1_x + 3)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "(lgyy_s1_x + 2)");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, 59);

//store is: cim.stencil((cim_s0_x + 1), (cim_s0_y + 1)) = ((((lgxx.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)*(lgyy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)*(lgxy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64))*((lgxx.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "(cim_s0_y + 1)", "(cim_s0_x + 1)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "(cim_s0_y + 1)", "(cim_s0_x + 1)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "(cim_s0_y + 1)", "(cim_s0_x + 1)");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "(cim_s0_y + 1)", "(cim_s0_x + 1)");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil(cim_output_s0_x, cim_output_s0_y) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 2), cim_output_s0_y) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 2), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 2)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 2)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 2), (cim_output_s0_y + 2)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && ((int16)1 <= cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 2)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 2)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 2)", "(cim_output_s0_x + 2)");
  prg.buffer_port_widths["cim_output_stencil"] = 16;
  hcompute_cim_output_stencil->add_store("cim_output_stencil", "cim_output_s0_y", "cim_output_s0_x");

//consuming cim_output.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


// empty

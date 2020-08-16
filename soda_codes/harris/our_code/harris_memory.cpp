#include "app.h"
#include "ubuffer.h"
#include "codegen.h"
#include "prog.h"

prog harris() {
  prog prg;
  prg.compute_unit_file = "harris_compute.h";
  prg.name = "harris";

// Stencil<int16_t, 64, 64> &hw_input_copy_stencil = arg_0;
  prg.add_input("hw_input_copy_stencil");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
// Stencil<uint8_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16.stencil
  auto padded16_s0_y = prg.add_loop("padded16_s0_y", -3, 61);
  auto padded16_s0_x = padded16_s0_y->add_loop("padded16_s0_x", -3, 61);

//store is: padded16.stencil(padded16.s0.x, padded16.s0.y) = hw_input_copy.stencil(padded16.s0.x, padded16.s0.y)
  auto hcompute_padded16_stencil = padded16_s0_x->add_op("op_hcompute_padded16_stencil");
  hcompute_padded16_stencil->add_function("hcompute_padded16_stencil");
  hcompute_padded16_stencil->add_load("hw_input_copy_stencil", "padded16_s0_x", "padded16_s0_y");
  prg.buffer_port_widths["padded16_stencil"] = 16;
  hcompute_padded16_stencil->add_store("padded16_stencil", "padded16_s0_x", "padded16_s0_y");

//consuming padded16.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, 60);

//store is: grad_x.stencil(grad_x.s0.x, grad_x.s0.y) = max(min(((((padded16.stencil((grad_x.s0.x + 1), (grad_x.s0.y + -1)) + (padded16.stencil((grad_x.s0.x + 1), (grad_x.s0.y + 1)) + (padded16.stencil((grad_x.s0.x + 1), grad_x.s0.y)*(int16)2))) - padded16.stencil((grad_x.s0.x + -1), (grad_x.s0.y + -1))) - (padded16.stencil((grad_x.s0.x + -1), grad_x.s0.y)*(int16)2)) - padded16.stencil((grad_x.s0.x + -1), (grad_x.s0.y + 1))), (int16)255), (int16)-255)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + 1)", "(grad_x_s0_y + -1)");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + 1)", "(grad_x_s0_y + 1)");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + 1)", "grad_x_s0_y");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + -1)", "(grad_x_s0_y + -1)");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + -1)", "grad_x_s0_y");
  hcompute_grad_x_stencil->add_load("padded16_stencil", "(grad_x_s0_x + -1)", "(grad_x_s0_y + 1)");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_x", "grad_x_s0_y");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil(lxx.s0.x, lxx.s0.y) = ((grad_x.stencil(lxx.s0.x, lxx.s0.y)*grad_x.stencil(lxx.s0.x, lxx.s0.y))/(int16)128)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_x", "lxx_s0_y");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_x", "lxx_s0_y");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, 59);

//store is: lgxx.stencil(lgxx.s0.x, lgxx.s0.y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_x", "lgxx_s0_y");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);

//store is: lgxx.stencil(lgxx.s1.x, lgxx.s1.y) = (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + -1)) + (lgxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + -1), lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + 1), lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + 1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + 1)) + lxx.stencil(lgxx.s1.x, (lgxx.s1.y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
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

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, 60);

//store is: grad_y.stencil(grad_y.s0.x, grad_y.s0.y) = max(min(((((padded16.stencil((grad_y.s0.x + -1), (grad_y.s0.y + 1)) + (padded16.stencil((grad_y.s0.x + 1), (grad_y.s0.y + 1)) + (padded16.stencil(grad_y.s0.x, (grad_y.s0.y + 1))*(int16)2))) - padded16.stencil((grad_y.s0.x + -1), (grad_y.s0.y + -1))) - (padded16.stencil(grad_y.s0.x, (grad_y.s0.y + -1))*(int16)2)) - padded16.stencil((grad_y.s0.x + 1), (grad_y.s0.y + -1))), (int16)255), (int16)-255)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + -1)", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "grad_y_s0_x", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + 1)", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + -1)", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + 1)", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "grad_y_s0_x", "(grad_y_s0_y + 1)");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_x", "grad_y_s0_y");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil(lxy.s0.x, lxy.s0.y) = ((grad_x.stencil(lxy.s0.x, lxy.s0.y)*grad_y.stencil(lxy.s0.x, lxy.s0.y))/(int16)128)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_x", "lxy_s0_y");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_x", "lxy_s0_y");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_x", "lxy_s0_y");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, 59);

//store is: lgxy.stencil(lgxy.s0.x, lgxy.s0.y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_x", "lgxy_s0_y");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);

//store is: lgxy.stencil(lgxy.s1.x, lgxy.s1.y) = (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + -1)) + (lgxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + -1), lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + 1), lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + 1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + 1)) + lxy.stencil(lgxy.s1.x, (lgxy.s1.y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
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

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil(lyy.s0.x, lyy.s0.y) = ((grad_y.stencil(lyy.s0.x, lyy.s0.y)*grad_y.stencil(lyy.s0.x, lyy.s0.y))/(int16)128)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_x", "lyy_s0_y");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_x", "lyy_s0_y");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, 59);

//store is: lgyy.stencil(lgyy.s0.x, lgyy.s0.y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_x", "lgyy_s0_y");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);

//store is: lgyy.stencil(lgyy.s1.x, lgyy.s1.y) = (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + -1)) + (lgyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + -1), lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + 1), lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + 1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + 1)) + lyy.stencil(lgyy.s1.x, (lgyy.s1.y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
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

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, 59);

//store is: cim.stencil(cim.s0.x, cim.s0.y) = ((((lgxx.stencil(cim.s0.x, cim.s0.y)/(int16)64)*(lgyy.stencil(cim.s0.x, cim.s0.y)/(int16)64)) - ((lgxy.stencil(cim.s0.x, cim.s0.y)/(int16)64)*(lgxy.stencil(cim.s0.x, cim.s0.y)/(int16)64))) - ((((lgxx.stencil(cim.s0.x, cim.s0.y)/(int16)64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/(int16)64))*((lgxx.stencil(cim.s0.x, cim.s0.y)/(int16)64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_x", "cim_s0_y");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_x", "cim_s0_y");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output.s0.x, cim_output.s0.y) = int16(select((((((((((cim.stencil((cim_output.s0.x + -1), (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y)) && (cim.stencil(cim_output.s0.x, (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + -1), cim_output.s0.y) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), cim_output.s0.y) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + -1), (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil(cim_output.s0.x, (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && ((int16)1 <= cim.stencil(cim_output.s0.x, cim_output.s0.y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + -1)", "(cim_output_s0_y + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "(cim_output_s0_y + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + 1)", "(cim_output_s0_y + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + -1)", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + 1)", "cim_output_s0_y");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + -1)", "(cim_output_s0_y + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_x", "(cim_output_s0_y + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_x + 1)", "(cim_output_s0_y + 1)");
  prg.buffer_port_widths["cim_output_stencil"] = 16;
  hcompute_cim_output_stencil->add_store("cim_output_stencil", "cim_output_s0_x", "cim_output_s0_y");

//consuming cim_output.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(cim_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

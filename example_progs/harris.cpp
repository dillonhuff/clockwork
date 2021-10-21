#include "example_progs.h"


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

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, 60);

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(((((padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1))), (int16)255), (int16)-255)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + 1)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + -1)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + -1)");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, 59);

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, 60);

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(((((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1))), (int16)255), (int16)-255)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "grad_y_s0_x");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, 59);

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, 59);

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, 59);

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
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

prog harris_glb2() {
  prog prg;
  prg.compute_unit_file = "harris_glb2_compute.h";
  prg.name = "harris_glb2";

// Stencil<int16_t, 3, 2766, 2506> &hw_input_stencil = arg_1;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 1440, 2500> &hw_output_global_wrapper_stencil = arg_3;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 256);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 64);

//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -3)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -3)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -3)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*2)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -2)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -2)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y + -3)", "((hw_input_global_wrapper_s0_x_x*2) + -2)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*2) + 1)", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 256);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 64);

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*2)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_4 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_5 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1)", "2");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", 0, 256);
  auto gray_s0_x_x = gray_s0_y->add_loop("gray_s0_x_x", 0, 63);

//store is: gray.stencil((gray_s0_x_x*2), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*2), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*2), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*2), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*2)", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*2)", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*2)", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "gray_s0_y", "(gray_s0_x_x*2)");

//store is: gray.stencil(((gray_s0_x_x*2) + 1), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*2) + 1), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*2) + 1), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*2) + 1), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_1 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_function("hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*2) + 1)", "1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*2) + 1)", "2");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*2) + 1)", "0");
  hcompute_gray_stencil_1->add_store("gray_stencil", "gray_s0_y", "((gray_s0_x_x*2) + 1)");

//consuming gray.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", 0, 254);
  auto grad_x_unclamp_s0_x_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x_x", 0, 62);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*2), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "(grad_x_unclamp_s0_x_x*2)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + 1), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "((grad_x_unclamp_s0_x_x*2) + 1)");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", 0, 254);
  auto grad_x_unclamp_s1_x_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x_x", 0, 62);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), grad_x_unclamp_s1_y))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_2 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_function("hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_x_unclamp_stencil_2->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*2)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), grad_x_unclamp_s1_y))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_3 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_function("hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_x_unclamp_stencil_3->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + 1)");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", 0, 254);
  auto lxx_s0_x_x = lxx_s0_y->add_loop("lxx_s0_x_x", 0, 62);

//store is: lxx.stencil((lxx_s0_x_x*2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "(lxx_s0_x_x*2)");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "(lxx_s0_x_x*2)");

//store is: lxx.stencil(((lxx_s0_x_x*2) + 1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_1 = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_function("hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "((lxx_s0_x_x*2) + 1)");
  hcompute_lxx_stencil_1->add_store("lxx_stencil", "lxx_s0_y", "((lxx_s0_x_x*2) + 1)");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", 0, 252);
  auto lgxx_s0_x_x = lgxx_s0_y->add_loop("lgxx_s0_x_x", 0, 61);

//store is: lgxx.stencil((lgxx_s0_x_x*2), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "(lgxx_s0_x_x*2)");

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + 1), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*2) + 1)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", 0, 252);
  auto lgxx_s1_x_x = lgxx_s1_y->add_loop("lgxx_s1_x_x", 0, 61);

//store is: lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) = (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_2 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_load("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) + (lgxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_3 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*2) + 2)");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 1)");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", 0, 254);
  auto grad_y_unclamp_s0_x_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x_x", 0, 62);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*2), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "(grad_y_unclamp_s0_x_x*2)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + 1), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "((grad_y_unclamp_s0_x_x*2) + 1)");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", 0, 254);
  auto grad_y_unclamp_s1_x_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x_x", 0, 62);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*2), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), grad_y_unclamp_s1_y))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_2 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_function("hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_2->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*2)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), grad_y_unclamp_s1_y))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_3 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_function("hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*2) + 3)");
  hcompute_grad_y_unclamp_stencil_3->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + 1)");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", 0, 254);
  auto lxy_s0_x_x = lxy_s0_y->add_loop("lxy_s0_x_x", 0, 62);

//store is: lxy.stencil((lxy_s0_x_x*2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*2), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*2), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "(lxy_s0_x_x*2)");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "(lxy_s0_x_x*2)");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "(lxy_s0_x_x*2)");

//store is: lxy.stencil(((lxy_s0_x_x*2) + 1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + 1), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + 1), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_1 = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_function("hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + 1)");
  hcompute_lxy_stencil_1->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + 1)");
  hcompute_lxy_stencil_1->add_store("lxy_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + 1)");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", 0, 252);
  auto lgxy_s0_x_x = lgxy_s0_y->add_loop("lgxy_s0_x_x", 0, 61);

//store is: lgxy.stencil((lgxy_s0_x_x*2), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "(lgxy_s0_x_x*2)");

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + 1), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*2) + 1)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", 0, 252);
  auto lgxy_s1_x_x = lgxy_s1_y->add_loop("lgxy_s1_x_x", 0, 61);

//store is: lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) = (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_2 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_load("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) + (lgxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_3 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*2) + 2)");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 1)");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", 0, 254);
  auto lyy_s0_x_x = lyy_s0_y->add_loop("lyy_s0_x_x", 0, 62);

//store is: lyy.stencil((lyy_s0_x_x*2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "(lyy_s0_x_x*2)");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "(lyy_s0_x_x*2)");

//store is: lyy.stencil(((lyy_s0_x_x*2) + 1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_1 = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_function("hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "((lyy_s0_x_x*2) + 1)");
  hcompute_lyy_stencil_1->add_store("lyy_stencil", "lyy_s0_y", "((lyy_s0_x_x*2) + 1)");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", 0, 252);
  auto lgyy_s0_x_x = lgyy_s0_y->add_loop("lgyy_s0_x_x", 0, 61);

//store is: lgyy.stencil((lgyy_s0_x_x*2), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "(lgyy_s0_x_x*2)");

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + 1), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*2) + 1)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", 0, 252);
  auto lgyy_s1_x_x = lgyy_s1_y->add_loop("lgyy_s1_x_x", 0, 61);

//store is: lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) = (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_2 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_load("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) + (lgyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_3 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*2) + 2)");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 1)");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", 0, 252);
  auto cim_s0_x_x = cim_s0_y->add_loop("cim_s0_x_x", 0, 61);

//store is: cim.stencil((cim_s0_x_x*2), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "(cim_s0_x_x*2)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "(cim_s0_x_x*2)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "(cim_s0_x_x*2)");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "(cim_s0_x_x*2)");

//store is: cim.stencil(((cim_s0_x_x*2) + 1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_1 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_function("hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*2) + 1)");
  hcompute_cim_stencil_1->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*2) + 1)");
  hcompute_cim_stencil_1->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*2) + 1)");
  hcompute_cim_stencil_1->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*2) + 1)");

//consuming cim.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 250);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 60);

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 2)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*2) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*2) + 3)");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 250);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 60);

//store is: hw_output_global_wrapper.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*2)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*2) + 1)");

  return prg;
}

prog harris_color() {
  prog prg;
  prg.compute_unit_file = "harris_color_compute.h";
  prg.name = "harris_color";

// Stencil<int16_t, 3, 72, 72> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 66, 66> &hw_output_global_wrapper_stencil = arg_1;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -3, 69);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 72);

//store is: hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_s0_x_x, (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, (hw_input_global_wrapper_s0_x_x + -3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x + -3)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_s0_x_x", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_s0_x_x, (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, (hw_input_global_wrapper_s0_x_x + -3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x + -3)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_s0_x_x", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_s0_x_x, (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, (hw_input_global_wrapper_s0_x_x + -3), hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x + -3)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_s0_x_x", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", -3, 69);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 72);

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_global_wrapper_s0_x_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_global_wrapper_s0_x_x", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_global_wrapper_s0_x_x", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_global_wrapper_s0_x_x", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3))
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_global_wrapper_s0_x_x", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "(hw_input_global_wrapper_global_wrapper_s0_y + 3)", "hw_input_global_wrapper_global_wrapper_s0_x_x", "2");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", -3, 69);
  auto gray_s0_x_x = gray_s0_y->add_loop("gray_s0_x_x", 0, 72);

//store is: gray.stencil(gray_s0_x_x, (gray_s0_y + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, gray_s0_x_x, (gray_s0_y + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, gray_s0_x_x, (gray_s0_y + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, gray_s0_x_x, (gray_s0_y + 3)))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "gray_s0_x_x", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "gray_s0_x_x", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "(gray_s0_y + 3)", "gray_s0_x_x", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "(gray_s0_y + 3)", "gray_s0_x_x");

//consuming gray.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", -2, 68);
  auto grad_x_unclamp_s0_x_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x_x", 0, 70);

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s0_x_x, (grad_x_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s0_y + 2)", "grad_x_unclamp_s0_x_x");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", -2, 68);
  auto grad_x_unclamp_s1_x_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x_x", 0, 70);

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 2)) = ((((((grad_x_unclamp.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 2)) + (int16(gray.stencil((grad_x_unclamp_s1_x_x + 2), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil((grad_x_unclamp_s1_x_x + 2), (grad_x_unclamp_s1_y + 2)))) - (int16(gray.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 4)))) + int16(gray.stencil((grad_x_unclamp_s1_x_x + 2), (grad_x_unclamp_s1_y + 4))))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "grad_x_unclamp_s1_x_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 3)", "(grad_x_unclamp_s1_x_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "grad_x_unclamp_s1_x_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 3)", "grad_x_unclamp_s1_x_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 4)", "grad_x_unclamp_s1_x_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 4)", "(grad_x_unclamp_s1_x_x + 2)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "(grad_x_unclamp_s1_y + 2)", "grad_x_unclamp_s1_x_x");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 68);
  auto lxx_s0_x_x = lxx_s0_y->add_loop("lxx_s0_x_x", 0, 70);

//store is: lxx.stencil(lxx_s0_x_x, (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(lxx_s0_x_x, (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(lxx_s0_x_x, (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "(lxx_s0_y + 2)", "lxx_s0_x_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "(lxx_s0_y + 2)", "lxx_s0_x_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 67);
  auto lgxx_s0_x_x = lgxx_s0_y->add_loop("lgxx_s0_x_x", 0, 68);

//store is: lgxx.stencil(lgxx_s0_x_x, (lgxx_s0_y + 1)) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "(lgxx_s0_y + 1)", "lgxx_s0_x_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 67);
  auto lgxx_s1_x_x = lgxx_s1_y->add_loop("lgxx_s1_x_x", 0, 68);

//store is: lgxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 1)) = (lxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 1)) + (lgxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x + 1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x + 2), (lgxx_s1_y + 1)) + (lxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x_x + 1), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x_x + 2), (lgxx_s1_y + 2)) + (lxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 3)) + (lxx.stencil((lgxx_s1_x_x + 2), (lgxx_s1_y + 3)) + lxx.stencil((lgxx_s1_x_x + 1), (lgxx_s1_y + 3)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "lgxx_s1_x_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "lgxx_s1_x_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "(lgxx_s1_x_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 3)", "(lgxx_s1_x_x + 1)");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x_x");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", -2, 68);
  auto grad_y_unclamp_s0_x_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x_x", 0, 70);

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s0_x_x, (grad_y_unclamp_s0_y + 2)) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s0_y + 2)", "grad_y_unclamp_s0_x_x");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", -2, 68);
  auto grad_y_unclamp_s1_x_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x_x", 0, 70);

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 2)) = ((((((grad_y_unclamp.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 2)) + (int16(gray.stencil((grad_y_unclamp_s1_x_x + 1), (grad_y_unclamp_s1_y + 4)))*(int16)2)) - int16(gray.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 2)))) - (int16(gray.stencil((grad_y_unclamp_s1_x_x + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x + 2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 4)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x + 2), (grad_y_unclamp_s1_y + 4))))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "grad_y_unclamp_s1_x_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x + 2)");
  hcompute_grad_y_unclamp_stencil_1->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "grad_y_unclamp_s1_x_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "(grad_y_unclamp_s1_x_x + 2)");
  hcompute_grad_y_unclamp_stencil_1->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 4)", "(grad_y_unclamp_s1_x_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "grad_y_unclamp_s1_x_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "(grad_y_unclamp_s1_y + 2)", "grad_y_unclamp_s1_x_x");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 68);
  auto lxy_s0_x_x = lxy_s0_y->add_loop("lxy_s0_x_x", 0, 70);

//store is: lxy.stencil(lxy_s0_x_x, (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(lxy_s0_x_x, (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(lxy_s0_x_x, (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "(lxy_s0_y + 2)", "lxy_s0_x_x");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "(lxy_s0_y + 2)", "lxy_s0_x_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "(lxy_s0_y + 2)", "lxy_s0_x_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 67);
  auto lgxy_s0_x_x = lgxy_s0_y->add_loop("lgxy_s0_x_x", 0, 68);

//store is: lgxy.stencil(lgxy_s0_x_x, (lgxy_s0_y + 1)) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "(lgxy_s0_y + 1)", "lgxy_s0_x_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 67);
  auto lgxy_s1_x_x = lgxy_s1_y->add_loop("lgxy_s1_x_x", 0, 68);

//store is: lgxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 1)) = (lxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 1)) + (lgxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x + 1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x + 2), (lgxy_s1_y + 1)) + (lxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x_x + 1), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x_x + 2), (lgxy_s1_y + 2)) + (lxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 3)) + (lxy.stencil((lgxy_s1_x_x + 2), (lgxy_s1_y + 3)) + lxy.stencil((lgxy_s1_x_x + 1), (lgxy_s1_y + 3)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "lgxy_s1_x_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "lgxy_s1_x_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "(lgxy_s1_x_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 3)", "(lgxy_s1_x_x + 1)");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 68);
  auto lyy_s0_x_x = lyy_s0_y->add_loop("lyy_s0_x_x", 0, 70);

//store is: lyy.stencil(lyy_s0_x_x, (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil(lyy_s0_x_x, (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(lyy_s0_x_x, (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_unclamp_stencil", "(lyy_s0_y + 2)", "lyy_s0_x_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "(lyy_s0_y + 2)", "lyy_s0_x_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 67);
  auto lgyy_s0_x_x = lgyy_s0_y->add_loop("lgyy_s0_x_x", 0, 68);

//store is: lgyy.stencil(lgyy_s0_x_x, (lgyy_s0_y + 1)) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "(lgyy_s0_y + 1)", "lgyy_s0_x_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 67);
  auto lgyy_s1_x_x = lgyy_s1_y->add_loop("lgyy_s1_x_x", 0, 68);

//store is: lgyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 1)) = (lyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 1)) + (lgyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x + 1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x + 2), (lgyy_s1_y + 1)) + (lyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x_x + 1), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x_x + 2), (lgyy_s1_y + 2)) + (lyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 3)) + (lyy.stencil((lgyy_s1_x_x + 2), (lgyy_s1_y + 3)) + lyy.stencil((lgyy_s1_x_x + 1), (lgyy_s1_y + 3)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "lgyy_s1_x_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "lgyy_s1_x_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "(lgyy_s1_x_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 3)", "(lgyy_s1_x_x + 1)");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 67);
  auto cim_s0_x_x = cim_s0_y->add_loop("cim_s0_x_x", 0, 68);

//store is: cim.stencil(cim_s0_x_x, (cim_s0_y + 1)) = ((((lgxx.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)*(lgyy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)*(lgxy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64))*((lgxx.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "(cim_s0_y + 1)", "cim_s0_x_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "(cim_s0_y + 1)", "cim_s0_x_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "(cim_s0_y + 1)", "cim_s0_x_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "(cim_s0_y + 1)", "cim_s0_x_x");

//consuming cim.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 66);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 66);

//store is: hw_output.glb.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil((hw_output_s0_x_xi_xi + 1), hw_output_s0_y_yi) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 2), hw_output_s0_y_yi) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(hw_output_s0_x_xi_xi, (hw_output_s0_y_yi + 1)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 2), (hw_output_s0_y_yi + 1)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(hw_output_s0_x_xi_xi, (hw_output_s0_y_yi + 2)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 2)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 2), (hw_output_s0_y_yi + 2)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi_xi");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi_xi + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi_xi");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi_xi + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "hw_output_s0_x_xi_xi");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi_xi + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi_xi + 2)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi_xi");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 66);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 66);

//store is: hw_output_global_wrapper.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "hw_output_global_wrapper_s0_x_xi_xi");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "hw_output_global_wrapper_s0_x_xi_xi");

  return prg;
}

prog harris_color_unroll() {
  prog prg;
  prg.compute_unit_file = "harris_color_unroll_compute.h";
  prg.name = "harris_color_unroll";

// Stencil<int16_t, 3, 2766, 2506> &hw_input_stencil = arg_1;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 1440, 2500> &hw_output_global_wrapper_stencil = arg_3;
  prg.add_output("hw_output_global_wrapper_stencil");
  prg.buffer_port_widths["hw_output_global_wrapper_stencil"] = 16;

////producing hw_input_global_wrapper.glb.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 256);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 44);

//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*3), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_function("hcompute_hw_input_global_wrapper_glb_stencil");
  hcompute_hw_input_global_wrapper_glb_stencil->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y)", "((hw_input_global_wrapper_s0_x_x*3))", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_glb_stencil"] = 16;
  hcompute_hw_input_global_wrapper_glb_stencil->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*3)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*3), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_function("hcompute_hw_input_global_wrapper_glb_stencil_1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) )", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_1->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*3)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*3), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + -3), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_2 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_function("hcompute_hw_input_global_wrapper_glb_stencil_2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) )", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_2->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "(hw_input_global_wrapper_s0_x_x*3)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_3 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_function("hcompute_hw_input_global_wrapper_glb_stencil_3");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) + 1)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_3->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*3) + 1)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_4 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_function("hcompute_hw_input_global_wrapper_glb_stencil_4");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) + 1)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_4->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*3) + 1)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + -2), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_5 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_function("hcompute_hw_input_global_wrapper_glb_stencil_5");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) + 1)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_5->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*3) + 1)", "2");

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + -1), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_6 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_function("hcompute_hw_input_global_wrapper_glb_stencil_6");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) + 2)", "0");
  hcompute_hw_input_global_wrapper_glb_stencil_6->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*3) + 2)", "0");

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + -1), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_7 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_function("hcompute_hw_input_global_wrapper_glb_stencil_7");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) + 2)", "1");
  hcompute_hw_input_global_wrapper_glb_stencil_7->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*3) + 2)", "1");

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + -1), (hw_input_global_wrapper_s0_y + -3))
  auto hcompute_hw_input_global_wrapper_glb_stencil_8 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_glb_stencil_8");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_function("hcompute_hw_input_global_wrapper_glb_stencil_8");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_load("hw_input_stencil", "(hw_input_global_wrapper_s0_y )", "((hw_input_global_wrapper_s0_x_x*3) + 2)", "2");
  hcompute_hw_input_global_wrapper_glb_stencil_8->add_store("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_s0_y", "((hw_input_global_wrapper_s0_x_x*3) + 2)", "2");

//consuming hw_input_global_wrapper.glb.stencil
////producing hw_output.glb.stencil
////producing hw_input_global_wrapper_global_wrapper.stencil
  auto hw_input_global_wrapper_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_global_wrapper_s0_y", 0, 256);
  auto hw_input_global_wrapper_global_wrapper_s0_x_x = hw_input_global_wrapper_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_global_wrapper_s0_x_x", 0, 44);

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*3)", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_global_wrapper_stencil->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*3)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*3)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*3)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*3)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "(hw_input_global_wrapper_global_wrapper_s0_x_x*3)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_4 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_5 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1)", "2");

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_6 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2)", "0");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2)", "0");

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_7 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2)", "1");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2)", "1");

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_global_wrapper_stencil_8 = hw_input_global_wrapper_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_function("hcompute_hw_input_global_wrapper_global_wrapper_stencil_8");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_load("hw_input_global_wrapper_glb_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2)", "2");
  hcompute_hw_input_global_wrapper_global_wrapper_stencil_8->add_store("hw_input_global_wrapper_global_wrapper_stencil", "hw_input_global_wrapper_global_wrapper_s0_y", "((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2)", "2");

//consuming hw_input_global_wrapper_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", 0, 256);
  auto gray_s0_x_x = gray_s0_y->add_loop("gray_s0_x_x", 0, 44);

//store is: gray.stencil((gray_s0_x_x*3), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*3), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*3), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*3), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*3)", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*3)", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "(gray_s0_x_x*3)", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "gray_s0_y", "(gray_s0_x_x*3)");

//store is: gray.stencil(((gray_s0_x_x*3) + 1), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*3) + 1), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*3) + 1), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*3) + 1), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_1 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_function("hcompute_gray_stencil_1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 1)", "1");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 1)", "2");
  hcompute_gray_stencil_1->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 1)", "0");
  hcompute_gray_stencil_1->add_store("gray_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 1)");

//store is: gray.stencil(((gray_s0_x_x*3) + 2), gray_s0_y) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*3) + 2), gray_s0_y))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*3) + 2), gray_s0_y))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*3) + 2), gray_s0_y))*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil_2 = gray_s0_x_x->add_op("op_hcompute_gray_stencil_2");
  hcompute_gray_stencil_2->add_function("hcompute_gray_stencil_2");
  hcompute_gray_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 2)", "1");
  hcompute_gray_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 2)", "2");
  hcompute_gray_stencil_2->add_load("hw_input_global_wrapper_global_wrapper_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 2)", "0");
  hcompute_gray_stencil_2->add_store("gray_stencil", "gray_s0_y", "((gray_s0_x_x*3) + 2)");

//consuming gray.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", 0, 254);
  auto grad_x_unclamp_s0_x_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x_x", 0, 42);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*3), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "(grad_x_unclamp_s0_x_x*3)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*3) + 1), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "((grad_x_unclamp_s0_x_x*3) + 1)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*3) + 2), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_2 = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_function("hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "((grad_x_unclamp_s0_x_x*3) + 2)");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", 0, 254);
  auto grad_x_unclamp_s1_x_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x_x", 0, 42);

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*3), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*3), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*3), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), grad_x_unclamp_s1_y))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*3), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*3), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_3 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_function("hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "(grad_x_unclamp_s1_x_x*3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "(grad_x_unclamp_s1_x_x*3)");
  hcompute_grad_x_unclamp_stencil_3->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_3->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*3)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 1), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 1), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 3), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 1), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 3), grad_x_unclamp_s1_y))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 1), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 1), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 3), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_4 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_4");
  hcompute_grad_x_unclamp_stencil_4->add_function("hcompute_grad_x_unclamp_stencil_4");
  hcompute_grad_x_unclamp_stencil_4->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_x_unclamp_stencil_4->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_x_unclamp_stencil_4->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 1)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 2), grad_x_unclamp_s1_y) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 2), grad_x_unclamp_s1_y) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 4), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), grad_x_unclamp_s1_y))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 4), grad_x_unclamp_s1_y))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), (grad_x_unclamp_s1_y + 1)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 4), (grad_x_unclamp_s1_y + 2))))
  auto hcompute_grad_x_unclamp_stencil_5 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_5");
  hcompute_grad_x_unclamp_stencil_5->add_function("hcompute_grad_x_unclamp_stencil_5");
  hcompute_grad_x_unclamp_stencil_5->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*3) + 4)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 4)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_x_unclamp_stencil_5->add_load("gray_stencil", "(grad_x_unclamp_s1_y + 2)", "((grad_x_unclamp_s1_x_x*3) + 4)");
  hcompute_grad_x_unclamp_stencil_5->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*3) + 2)");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", 0, 254);
  auto lxx_s0_x_x = lxx_s0_y->add_loop("lxx_s0_x_x", 0, 42);

//store is: lxx.stencil((lxx_s0_x_x*3), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*3), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*3), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "(lxx_s0_x_x*3)");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "(lxx_s0_x_x*3)");

//store is: lxx.stencil(((lxx_s0_x_x*3) + 1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 1), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 1), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_1 = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_function("hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "((lxx_s0_x_x*3) + 1)");
  hcompute_lxx_stencil_1->add_store("lxx_stencil", "lxx_s0_y", "((lxx_s0_x_x*3) + 1)");

//store is: lxx.stencil(((lxx_s0_x_x*3) + 2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 2), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 2), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_2 = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil_2");
  hcompute_lxx_stencil_2->add_function("hcompute_lxx_stencil_2");
  hcompute_lxx_stencil_2->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "((lxx_s0_x_x*3) + 2)");
  hcompute_lxx_stencil_2->add_store("lxx_stencil", "lxx_s0_y", "((lxx_s0_x_x*3) + 2)");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", 0, 252);
  auto lgxx_s0_x_x = lgxx_s0_y->add_loop("lgxx_s0_x_x", 0, 41);

//store is: lgxx.stencil((lgxx_s0_x_x*3), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "(lgxx_s0_x_x*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*3) + 1)");

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 2), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_2 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*3) + 2)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", 0, 252);
  auto lgxx_s1_x_x = lgxx_s1_y->add_loop("lgxx_s1_x_x", 0, 41);

//store is: lgxx.stencil((lgxx_s1_x_x*3), lgxx_s1_y) = (lxx.stencil((lgxx_s1_x_x*3), lgxx_s1_y) + (lgxx.stencil((lgxx_s1_x_x*3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*3), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*3) + 1), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_3 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_load("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x_x*3)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*3)");

//store is: lgxx.stencil(((lgxx_s1_x_x*3) + 1), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*3) + 1), lgxx_s1_y) + (lgxx.stencil(((lgxx_s1_x_x*3) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*3) + 2), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_4 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_function("hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 3)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 3)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 1)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 3)");
  hcompute_lgxx_stencil_4->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_4->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 1)");

//store is: lgxx.stencil(((lgxx_s1_x_x*3) + 2), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*3) + 2), lgxx_s1_y) + (lgxx.stencil(((lgxx_s1_x_x*3) + 2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 4), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 4), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 4), (lgxx_s1_y + 2)) + lxx.stencil(((lgxx_s1_x_x*3) + 3), (lgxx_s1_y + 2)))))))))))
  auto hcompute_lgxx_stencil_5 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_function("hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 3)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 4)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 3)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*3) + 4)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 2)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 4)");
  hcompute_lgxx_stencil_5->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "((lgxx_s1_x_x*3) + 3)");
  hcompute_lgxx_stencil_5->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*3) + 2)");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", 0, 254);
  auto grad_y_unclamp_s0_x_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x_x", 0, 42);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*3), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "(grad_y_unclamp_s0_x_x*3)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*3) + 1), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "((grad_y_unclamp_s0_x_x*3) + 1)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*3) + 2), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_2 = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_function("hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "((grad_y_unclamp_s0_x_x*3) + 2)");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", 0, 254);
  auto grad_y_unclamp_s1_x_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x_x", 0, 42);

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*3), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*3), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*3), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), grad_y_unclamp_s1_y))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*3), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_3 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_function("hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*3)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*3)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "(grad_y_unclamp_s1_x_x*3)");
  hcompute_grad_y_unclamp_stencil_3->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_3->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "(grad_y_unclamp_s1_x_x*3)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 1), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 1), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), grad_y_unclamp_s1_y))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_4 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_4");
  hcompute_grad_y_unclamp_stencil_4->add_function("hcompute_grad_y_unclamp_stencil_4");
  hcompute_grad_y_unclamp_stencil_4->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 1)");
  hcompute_grad_y_unclamp_stencil_4->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_y_unclamp_stencil_4->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 1)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 2), grad_y_unclamp_s1_y) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 2), grad_y_unclamp_s1_y) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), grad_y_unclamp_s1_y))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), grad_y_unclamp_s1_y))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 4), grad_y_unclamp_s1_y))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 4), (grad_y_unclamp_s1_y + 2))))
  auto hcompute_grad_y_unclamp_stencil_5 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_5");
  hcompute_grad_y_unclamp_stencil_5->add_function("hcompute_grad_y_unclamp_stencil_5");
  hcompute_grad_y_unclamp_stencil_5->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 3)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 4)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 2)");
  hcompute_grad_y_unclamp_stencil_5->add_load("gray_stencil", "(grad_y_unclamp_s1_y + 2)", "((grad_y_unclamp_s1_x_x*3) + 4)");
  hcompute_grad_y_unclamp_stencil_5->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*3) + 2)");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", 0, 254);
  auto lxy_s0_x_x = lxy_s0_y->add_loop("lxy_s0_x_x", 0, 42);

//store is: lxy.stencil((lxy_s0_x_x*3), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*3), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*3), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "(lxy_s0_x_x*3)");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "(lxy_s0_x_x*3)");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "(lxy_s0_x_x*3)");

//store is: lxy.stencil(((lxy_s0_x_x*3) + 1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*3) + 1), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*3) + 1), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_1 = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_function("hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*3) + 1)");
  hcompute_lxy_stencil_1->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*3) + 1)");
  hcompute_lxy_stencil_1->add_store("lxy_stencil", "lxy_s0_y", "((lxy_s0_x_x*3) + 1)");

//store is: lxy.stencil(((lxy_s0_x_x*3) + 2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*3) + 2), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*3) + 2), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_2 = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil_2");
  hcompute_lxy_stencil_2->add_function("hcompute_lxy_stencil_2");
  hcompute_lxy_stencil_2->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*3) + 2)");
  hcompute_lxy_stencil_2->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*3) + 2)");
  hcompute_lxy_stencil_2->add_store("lxy_stencil", "lxy_s0_y", "((lxy_s0_x_x*3) + 2)");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", 0, 252);
  auto lgxy_s0_x_x = lgxy_s0_y->add_loop("lgxy_s0_x_x", 0, 41);

//store is: lgxy.stencil((lgxy_s0_x_x*3), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "(lgxy_s0_x_x*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*3) + 1)");

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 2), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_2 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*3) + 2)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", 0, 252);
  auto lgxy_s1_x_x = lgxy_s1_y->add_loop("lgxy_s1_x_x", 0, 41);

//store is: lgxy.stencil((lgxy_s1_x_x*3), lgxy_s1_y) = (lxy.stencil((lgxy_s1_x_x*3), lgxy_s1_y) + (lgxy.stencil((lgxy_s1_x_x*3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*3), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*3) + 1), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_3 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_load("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x_x*3)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*3)");

//store is: lgxy.stencil(((lgxy_s1_x_x*3) + 1), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*3) + 1), lgxy_s1_y) + (lgxy.stencil(((lgxy_s1_x_x*3) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*3) + 2), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_4 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_function("hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 3)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 3)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 1)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 3)");
  hcompute_lgxy_stencil_4->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_4->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 1)");

//store is: lgxy.stencil(((lgxy_s1_x_x*3) + 2), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*3) + 2), lgxy_s1_y) + (lgxy.stencil(((lgxy_s1_x_x*3) + 2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 4), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 4), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 4), (lgxy_s1_y + 2)) + lxy.stencil(((lgxy_s1_x_x*3) + 3), (lgxy_s1_y + 2)))))))))))
  auto hcompute_lgxy_stencil_5 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_function("hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 3)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 4)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 3)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*3) + 4)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 2)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 4)");
  hcompute_lgxy_stencil_5->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "((lgxy_s1_x_x*3) + 3)");
  hcompute_lgxy_stencil_5->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*3) + 2)");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", 0, 254);
  auto lyy_s0_x_x = lyy_s0_y->add_loop("lyy_s0_x_x", 0, 42);

//store is: lyy.stencil((lyy_s0_x_x*3), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*3), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*3), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_2 = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil_2");
  hcompute_lyy_stencil_2->add_function("hcompute_lyy_stencil_2");
  hcompute_lyy_stencil_2->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "(lyy_s0_x_x*3)");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil_2->add_store("lyy_stencil", "lyy_s0_y", "(lyy_s0_x_x*3)");

//store is: lyy.stencil(((lyy_s0_x_x*3) + 1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 1), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 1), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_3 = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil_3");
  hcompute_lyy_stencil_3->add_function("hcompute_lyy_stencil_3");
  hcompute_lyy_stencil_3->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "((lyy_s0_x_x*3) + 1)");
  hcompute_lyy_stencil_3->add_store("lyy_stencil", "lyy_s0_y", "((lyy_s0_x_x*3) + 1)");

//store is: lyy.stencil(((lyy_s0_x_x*3) + 2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 2), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 2), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_4 = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil_4");
  hcompute_lyy_stencil_4->add_function("hcompute_lyy_stencil_4");
  hcompute_lyy_stencil_4->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "((lyy_s0_x_x*3) + 2)");
  hcompute_lyy_stencil_4->add_store("lyy_stencil", "lyy_s0_y", "((lyy_s0_x_x*3) + 2)");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", 0, 252);
  auto lgyy_s0_x_x = lgyy_s0_y->add_loop("lgyy_s0_x_x", 0, 41);

//store is: lgyy.stencil((lgyy_s0_x_x*3), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "(lgyy_s0_x_x*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*3) + 1)");

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 2), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_2 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*3) + 2)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", 0, 252);
  auto lgyy_s1_x_x = lgyy_s1_y->add_loop("lgyy_s1_x_x", 0, 41);

//store is: lgyy.stencil((lgyy_s1_x_x*3), lgyy_s1_y) = (lyy.stencil((lgyy_s1_x_x*3), lgyy_s1_y) + (lgyy.stencil((lgyy_s1_x_x*3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*3), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*3) + 1), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_3 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_load("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x_x*3)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*3)");

//store is: lgyy.stencil(((lgyy_s1_x_x*3) + 1), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*3) + 1), lgyy_s1_y) + (lgyy.stencil(((lgyy_s1_x_x*3) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*3) + 2), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_4 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_function("hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 3)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 3)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 1)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 3)");
  hcompute_lgyy_stencil_4->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_4->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 1)");

//store is: lgyy.stencil(((lgyy_s1_x_x*3) + 2), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*3) + 2), lgyy_s1_y) + (lgyy.stencil(((lgyy_s1_x_x*3) + 2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 4), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 4), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 4), (lgyy_s1_y + 2)) + lyy.stencil(((lgyy_s1_x_x*3) + 3), (lgyy_s1_y + 2)))))))))))
  auto hcompute_lgyy_stencil_5 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_function("hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 3)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 4)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 3)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*3) + 4)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 2)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 4)");
  hcompute_lgyy_stencil_5->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "((lgyy_s1_x_x*3) + 3)");
  hcompute_lgyy_stencil_5->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*3) + 2)");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", 0, 252);
  auto cim_s0_x_x = cim_s0_y->add_loop("cim_s0_x_x", 0, 41);

//store is: cim.stencil((cim_s0_x_x*3), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*3), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "(cim_s0_x_x*3)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "(cim_s0_x_x*3)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "(cim_s0_x_x*3)");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "(cim_s0_x_x*3)");

//store is: cim.stencil(((cim_s0_x_x*3) + 1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 1), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_1 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_function("hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 1)");
  hcompute_cim_stencil_1->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 1)");
  hcompute_cim_stencil_1->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 1)");
  hcompute_cim_stencil_1->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 1)");

//store is: cim.stencil(((cim_s0_x_x*3) + 2), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 2), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_2 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_2");
  hcompute_cim_stencil_2->add_function("hcompute_cim_stencil_2");
  hcompute_cim_stencil_2->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 2)");
  hcompute_cim_stencil_2->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 2)");
  hcompute_cim_stencil_2->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 2)");
  hcompute_cim_stencil_2->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*3) + 2)");

//consuming cim.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 250);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 40);

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_function("hcompute_hw_output_glb_stencil");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*3)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi_xi*3)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi_xi*3)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_glb_stencil->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 2)");
  prg.buffer_port_widths["hw_output_glb_stencil"] = 16;
  hcompute_hw_output_glb_stencil->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*3)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_function("hcompute_hw_output_glb_stencil_1");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 3)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil_1->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 3)");
  hcompute_hw_output_glb_stencil_1->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 1)");

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))), 255, 0))
  auto hcompute_hw_output_glb_stencil_2 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_function("hcompute_hw_output_glb_stencil_2");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 3)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 3)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 4)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 1)", "((hw_output_s0_x_xi_xi*3) + 4)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 3)");
  hcompute_hw_output_glb_stencil_2->add_load("cim_stencil", "(hw_output_s0_y_yi + 2)", "((hw_output_s0_x_xi_xi*3) + 4)");
  hcompute_hw_output_glb_stencil_2->add_store("hw_output_glb_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*3) + 2)");

//consuming hw_output.glb.stencil
  auto hw_output_global_wrapper_s0_y_yi = prg.add_loop("hw_output_global_wrapper_s0_y_yi", 0, 250);
  auto hw_output_global_wrapper_s0_x_xi_xi = hw_output_global_wrapper_s0_y_yi->add_loop("hw_output_global_wrapper_s0_x_xi_xi", 0, 40);

//store is: hw_output_global_wrapper.stencil((hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_function("hcompute_hw_output_global_wrapper_stencil");
  hcompute_hw_output_global_wrapper_stencil->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*3)");
  hcompute_hw_output_global_wrapper_stencil->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "(hw_output_global_wrapper_s0_x_xi_xi*3)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_1 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_function("hcompute_hw_output_global_wrapper_stencil_1");
  hcompute_hw_output_global_wrapper_stencil_1->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*3) + 1)");
  hcompute_hw_output_global_wrapper_stencil_1->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*3) + 1)");

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi)
  auto hcompute_hw_output_global_wrapper_stencil_2 = hw_output_global_wrapper_s0_x_xi_xi->add_op("op_hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_function("hcompute_hw_output_global_wrapper_stencil_2");
  hcompute_hw_output_global_wrapper_stencil_2->add_load("hw_output_glb_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*3) + 2)");
  hcompute_hw_output_global_wrapper_stencil_2->add_store("hw_output_global_wrapper_stencil", "hw_output_global_wrapper_s0_y_yi", "((hw_output_global_wrapper_s0_x_xi_xi*3) + 2)");

  return prg;
}

prog harris(int arg_1, int arg_2, string suffix) {
  prog prg;
  prg.compute_unit_file = "harris_compute.h";
  prg.name = "harris" + suffix;

// Stencil<int16_t, (tileSize_x + 6), (tileSize_y + 6)> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
int32_t &tileSize_x = arg_1;
int32_t &tileSize_y = arg_2;
// Stencil<int16_t, tileSize_x, tileSize_y> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, (tileSize_y + 3));
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, (tileSize_x + 3));

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, (tileSize_y + 2));
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, (tileSize_x + 2));
////producing grad_x_unclamp.stencil

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((((grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1)))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x_unclamp.stencil

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, (tileSize_y + 2));
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, (tileSize_x + 2));

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, (tileSize_y + 1));
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, (tileSize_x + 1));

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, (tileSize_y + 1));
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, (tileSize_x + 1));

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, (tileSize_y + 2));
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, (tileSize_x + 2));
////producing grad_y_unclamp.stencil

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((((grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1)))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y_unclamp.stencil

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, (tileSize_y + 2));
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, (tileSize_x + 2));

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, (tileSize_y + 1));
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, (tileSize_x + 1));

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, (tileSize_y + 1));
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, (tileSize_x + 1));

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, (tileSize_y + 2));
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, (tileSize_x + 2));

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, (tileSize_y + 1));
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, (tileSize_x + 1));

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, (tileSize_y + 1));
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, (tileSize_x + 1));

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, (tileSize_y + 1));
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, (tileSize_x + 1));

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, tileSize_y);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, tileSize_x);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
  prg.buffer_port_widths["cim_output_stencil"] = 16;
  hcompute_cim_output_stencil->add_store("cim_output_stencil", "cim_output_s0_y", "cim_output_s0_x");

//consuming cim_output.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, tileSize_y);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, tileSize_x);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


prog harris_remove() {
  prog prg;
  prg.compute_unit_file = "harris_compute_remove.h";
  prg.name = "harris";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", 0, 64);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", 0, 64);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", 0, 62);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", 0, 62);

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(((((padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1))), (int16)255), (int16)-255)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y)", "(grad_x_s0_x + 2)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 2)", "(grad_x_s0_x + 2)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y + 1", "(grad_x_s0_x + 2)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y)", "(grad_x_s0_x )");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y + 1", "(grad_x_s0_x)");
  hcompute_grad_x_stencil->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 2)", "(grad_x_s0_x)");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", 0, 62);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", 0, 62);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", 0, 60);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", 0, 60);

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  //hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", 0, 60);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", 0, 60);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y )", "(lgxx_s1_x)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y )", "lgxx_s1_x + 1");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y )", "(lgxx_s1_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y + 1", "(lgxx_s1_x )");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y + 1", "lgxx_s1_x + 1");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y + 1", "(lgxx_s1_x + 2)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x )");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "(lgxx_s1_x +1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 2)", "lgxx_s1_x + 2");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", 0, 62);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", 0, 62);

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(((((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1))), (int16)255), (int16)-255)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y )", "(grad_y_s0_x )");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y )", "grad_y_s0_x + 1");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y )", "(grad_y_s0_x + 2)");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 2 )", "(grad_y_s0_x )");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 2 )", "(grad_y_s0_x + 1)");
  hcompute_grad_y_stencil->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 2 )", "grad_y_s0_x + 2");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", 0, 62);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", 0, 62);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", 0, 60);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", 0, 60);

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  //hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", 0, 60);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", 0, 60);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y )", "(lgxy_s1_x )");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y )", "lgxy_s1_x + 1");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y )", "(lgxy_s1_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y + 1", "(lgxy_s1_x )");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y + 1", "lgxy_s1_x + 1");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y + 1", "(lgxy_s1_x + 2)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x )");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 2)", "lgxy_s1_x + 2");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", 0, 62);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", 0, 62);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", 0, 60);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", 0, 60);

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  //hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", 0, 60);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", 0, 60);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y )", "(lgyy_s1_x )");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y )", "lgyy_s1_x + 1");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y )", "(lgyy_s1_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y+ 1", "(lgyy_s1_x )");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y+ 1", "lgyy_s1_x + 1");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y+ 1", "(lgyy_s1_x + 2)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x )");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 2)", "lgyy_s1_x + 2");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", 0, 60);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", 0, 60);

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y )", "(cim_output_s0_x)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y + 1", "cim_output_s0_x + 1");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y )", "cim_output_s0_x + 1");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y )", "(cim_output_s0_x + 2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y + 1", "(cim_output_s0_x)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y + 1", "(cim_output_s0_x + 2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 2)", "(cim_output_s0_x)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 2)", "cim_output_s0_x + 1");
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

prog halide_harris() {
  prog prg;
  prg.compute_unit_file = "harris_compute.h";
  prg.name = "harris";

// Stencil<int16_t, 64, 64> &hw_input_copy_stencil = arg_0;
  prg.add_input("hw_input_copy_stencil");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming hw_input_copy.stencil
////producing padded16.stencil
  auto loop_padded16_s0_y = prg.add_loop("padded16_s0_y", -3, 64);
  auto loop_padded16_s0_x = loop_padded16_s0_y->add_loop("padded16_s0_x", -3, 64);

//store is: padded16.stencil(padded16.s0.x, padded16.s0.y) = hw_input_copy.stencil(padded16.s0.x, padded16.s0.y)
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
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + -1)", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "grad_y_s0_x", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + 1)", "(grad_y_s0_y + -1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + -1)", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "(grad_y_s0_x + 1)", "(grad_y_s0_y + 1)");
  hcompute_grad_y_stencil->add_load("padded16_stencil", "grad_y_s0_x", "(grad_y_s0_y + 1)");
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

//store is: cim.stencil(cim.s0.x, cim.s0.y) = ((((lgxx.stencil(cim.s0.x, cim.s0.y)/64)*(lgyy.stencil(cim.s0.x, cim.s0.y)/64)) - ((lgxy.stencil(cim.s0.x, cim.s0.y)/64)*(lgxy.stencil(cim.s0.x, cim.s0.y)/64))) - ((((lgxx.stencil(cim.s0.x, cim.s0.y)/64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/64))*((lgxx.stencil(cim.s0.x, cim.s0.y)/64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/64)))/16))
  auto hcompute_cim_stencil = loop_cim_s0_x->add_op("hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_x", "cim_s0_y");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_x", "cim_s0_y");
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
  auto loop_hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto loop_hw_output_s0_x_xi = loop_hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = cim_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi)
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

prog harris_sch1_onebuf() {
  prog prg;
  prg.compute_unit_file = "harris_sch1_onebuf_compute.h";
  prg.name = "harris_sch1_onebuf";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);


  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "(hw_output_s0_x_xi + -3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "(hw_output_s0_x_xi + 2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + 3)", "(hw_output_s0_x_xi + 3)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + -2)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -3)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("padded16_global_wrapper_stencil", "(hw_output_s0_y_yi + -2)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog harris_sch2_fourbuf() {
  prog prg;
  prg.compute_unit_file = "harris_sch2_fourbuf_compute.h";
  prg.name = "harris_sch2_fourbuf";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, 59);

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (((max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + -2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), lgxx_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + -2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), lgxx_s0_y)), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -2)) + (padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), lgxx_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -2)) + (padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), lgxx_s0_y)), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + -2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -2))) - (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + -2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -2))) - (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1)) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1)) + (padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -2), lgxx_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1)) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1)) + (padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -2), lgxx_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + 1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + -1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), lgxx_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -1), lgxx_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + -1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), lgxx_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxx_s0_x + -1), lgxx_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + 1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + -1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), lgxx_s0_y)*(int16)2))) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1))) - (padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + -1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), lgxx_s0_y)*(int16)2))) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + -1))) - (padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 2)) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), lgxx_s0_y)) - (padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + 2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 2)) + (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), lgxx_s0_y)) - (padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -2), (lgxx_s0_y + 2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 2), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)) - (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 2), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 2), (lgxx_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil(lgxx_s0_x, lgxx_s0_y)) - (padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil(lgxx_s0_x, (lgxx_s0_y + 2))), (int16)180), (int16)-180))/(int16)64) + ((max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 1), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), lgxx_s0_y)) - (padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + 2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxx_s0_x + 1), lgxx_s0_y) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), lgxx_s0_y)) - (padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((lgxx_s0_x + -1), (lgxx_s0_y + 2))), (int16)180), (int16)-180))/(int16)64)))))))))
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -2)", "(lgxx_s0_x + 1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -2)", "(lgxx_s0_x + -2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -1)", "(lgxx_s0_x + -2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "lgxx_s0_y", "(lgxx_s0_x + -2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -2)", "(lgxx_s0_x + 2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "lgxx_s0_y", "(lgxx_s0_x + 2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -1)", "(lgxx_s0_x + 2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 1)", "lgxx_s0_x");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 1)", "(lgxx_s0_x + -2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 1)", "(lgxx_s0_x + 1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 1)", "(lgxx_s0_x + -1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "lgxx_s0_y", "(lgxx_s0_x + 1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 1)", "(lgxx_s0_x + 2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 2)", "lgxx_s0_x");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 2)", "(lgxx_s0_x + -2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 2)", "(lgxx_s0_x + 2)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 2)", "(lgxx_s0_x + 1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + 2)", "(lgxx_s0_x + -1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -1)", "(lgxx_s0_x + 1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -2)", "(lgxx_s0_x + -1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -1)", "(lgxx_s0_x + -1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "lgxx_s0_y", "(lgxx_s0_x + -1)");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -2)", "lgxx_s0_x");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "lgxx_s0_y", "lgxx_s0_x");
  hcompute_lgxx_stencil->add_load("padded16_global_wrapper_stencil", "(lgxx_s0_y + -1)", "lgxx_s0_x");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");

//consuming lgxx.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, 59);

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (((max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y) + (padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -2))) - (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -2)) + (padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), lgxy_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + -2), lgxy_s0_y) + (padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + -2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + -1))*(int16)2))) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -2))) - (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + -2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1)) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxy_s0_x + -2), lgxy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + -1))) - (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + -1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), lgxy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1))) - (padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + -1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), lgxy_s0_y)) - (padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + 2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + -2), (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -2), lgxy_s0_y)) - (padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + 2), lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)) - (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 2), (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)) - (padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + 2), lgxy_s0_y)), (int16)180), (int16)-180))/(int16)64) + ((max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y)) - (padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgxy_s0_x + -1), (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgxy_s0_x, (lgxy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil((lgxy_s0_x + -1), lgxy_s0_y)) - (padded16_global_wrapper.stencil(lgxy_s0_x, lgxy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgxy_s0_x + 1), lgxy_s0_y)), (int16)180), (int16)-180))/(int16)64)))))))))
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -2)", "(lgxy_s0_x + 1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "lgxy_s0_y", "(lgxy_s0_x + 1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -1)", "(lgxy_s0_x + 1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -2)", "(lgxy_s0_x + -1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -1)", "(lgxy_s0_x + -1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "lgxy_s0_y", "(lgxy_s0_x + -1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "lgxy_s0_y", "lgxy_s0_x");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -2)", "lgxy_s0_x");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -1)", "lgxy_s0_x");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -2)", "(lgxy_s0_x + -2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -1)", "(lgxy_s0_x + -2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "lgxy_s0_y", "(lgxy_s0_x + -2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -2)", "(lgxy_s0_x + 2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "lgxy_s0_y", "(lgxy_s0_x + 2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + -1)", "(lgxy_s0_x + 2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 1)", "lgxy_s0_x");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 1)", "(lgxy_s0_x + -2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 1)", "(lgxy_s0_x + -1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 1)", "(lgxy_s0_x + 1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 1)", "(lgxy_s0_x + 2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 2)", "lgxy_s0_x");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 2)", "(lgxy_s0_x + -2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 2)", "(lgxy_s0_x + -1)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 2)", "(lgxy_s0_x + 2)");
  hcompute_lgxy_stencil->add_load("padded16_global_wrapper_stencil", "(lgxy_s0_y + 2)", "(lgxy_s0_x + 1)");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");

//consuming lgxy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, 59);

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (((max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y) + (padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -2))) - (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y) + (padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -2))) - (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -2), lgyy_s0_y) + (padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -2), lgyy_s0_y) + (padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + 2), lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + -2))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + 2), lgyy_s0_y) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y)*(int16)2))) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -2))) - (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -2))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + -2))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -1))) - (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + -1))) - (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + -1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + 1)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + -1))) - (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + -1))), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -2), lgyy_s0_y)) - (padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -2), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -2), lgyy_s0_y)) - (padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)), (int16)180), (int16)-180))/(int16)64) + (((max(min(((((padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)) - (padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 2), lgyy_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 2), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)) - (padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 2), lgyy_s0_y)), (int16)180), (int16)-180))/(int16)64) + ((max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y)) - (padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y)), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil((lgyy_s0_x + -1), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 2)) + (padded16_global_wrapper.stencil(lgyy_s0_x, (lgyy_s0_y + 2))*(int16)2))) - padded16_global_wrapper.stencil((lgyy_s0_x + -1), lgyy_s0_y)) - (padded16_global_wrapper.stencil(lgyy_s0_x, lgyy_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((lgyy_s0_x + 1), lgyy_s0_y)), (int16)180), (int16)-180))/(int16)64)))))))))
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "lgyy_s0_y", "(lgyy_s0_x + -1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "lgyy_s0_y", "(lgyy_s0_x + 1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "lgyy_s0_y", "lgyy_s0_x");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -2)", "(lgyy_s0_x + -1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -2)", "lgyy_s0_x");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -2)", "(lgyy_s0_x + 1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "lgyy_s0_y", "(lgyy_s0_x + -2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -2)", "(lgyy_s0_x + -2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "lgyy_s0_y", "(lgyy_s0_x + 2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -2)", "(lgyy_s0_x + 2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 1)", "(lgyy_s0_x + -2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 1)", "lgyy_s0_x");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 1)", "(lgyy_s0_x + -1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -1)", "(lgyy_s0_x + -2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -1)", "(lgyy_s0_x + -1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -1)", "lgyy_s0_x");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 1)", "(lgyy_s0_x + 1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -1)", "(lgyy_s0_x + 1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 1)", "(lgyy_s0_x + 2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + -1)", "(lgyy_s0_x + 2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 2)", "(lgyy_s0_x + -2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 2)", "lgyy_s0_x");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 2)", "(lgyy_s0_x + -1)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 2)", "(lgyy_s0_x + 2)");
  hcompute_lgyy_stencil->add_load("padded16_global_wrapper_stencil", "(lgyy_s0_y + 2)", "(lgyy_s0_x + 1)");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");

//consuming lgyy.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = int16(select((((((((((((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16))) && (((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && ((int16)1 <= ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))), 255, 0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "(hw_output_s0_y_yi + -1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgxx_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "(hw_output_s0_y_yi + -1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgxy_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "(hw_output_s0_y_yi + -1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "(hw_output_s0_y_yi + -1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + -1)");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("lgyy_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog harris_sch3_1pp9c() {
  prog prg;
  prg.compute_unit_file = "harris_sch3_1pp9c_compute.h";
  prg.name = "harris_sch3_1pp9c";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing kernel_x.stencil

//store is: kernel_x.stencil(-1, -1) = (int16)0
  auto hcompute_kernel_x_stencil = prg.add_op("op_hcompute_kernel_x_stencil");
  hcompute_kernel_x_stencil->add_function("hcompute_kernel_x_stencil");
  prg.buffer_port_widths["kernel_x_stencil"] = 16;
  hcompute_kernel_x_stencil->add_store("kernel_x_stencil", "-1", "-1");

//store is: kernel_x.stencil(0, -1) = (int16)0
  auto hcompute_kernel_x_stencil_1 = prg.add_op("op_hcompute_kernel_x_stencil_1");
  hcompute_kernel_x_stencil_1->add_function("hcompute_kernel_x_stencil_1");
  hcompute_kernel_x_stencil_1->add_store("kernel_x_stencil", "-1", "0");

//store is: kernel_x.stencil(1, -1) = (int16)0
  auto hcompute_kernel_x_stencil_2 = prg.add_op("op_hcompute_kernel_x_stencil_2");
  hcompute_kernel_x_stencil_2->add_function("hcompute_kernel_x_stencil_2");
  hcompute_kernel_x_stencil_2->add_store("kernel_x_stencil", "-1", "1");

//store is: kernel_x.stencil(-1, 0) = (int16)0
  auto hcompute_kernel_x_stencil_3 = prg.add_op("op_hcompute_kernel_x_stencil_3");
  hcompute_kernel_x_stencil_3->add_function("hcompute_kernel_x_stencil_3");
  hcompute_kernel_x_stencil_3->add_store("kernel_x_stencil", "0", "-1");

//store is: kernel_x.stencil(0, 0) = (int16)0
  auto hcompute_kernel_x_stencil_4 = prg.add_op("op_hcompute_kernel_x_stencil_4");
  hcompute_kernel_x_stencil_4->add_function("hcompute_kernel_x_stencil_4");
  hcompute_kernel_x_stencil_4->add_store("kernel_x_stencil", "0", "0");

//store is: kernel_x.stencil(1, 0) = (int16)0
  auto hcompute_kernel_x_stencil_5 = prg.add_op("op_hcompute_kernel_x_stencil_5");
  hcompute_kernel_x_stencil_5->add_function("hcompute_kernel_x_stencil_5");
  hcompute_kernel_x_stencil_5->add_store("kernel_x_stencil", "0", "1");

//store is: kernel_x.stencil(-1, 1) = (int16)0
  auto hcompute_kernel_x_stencil_6 = prg.add_op("op_hcompute_kernel_x_stencil_6");
  hcompute_kernel_x_stencil_6->add_function("hcompute_kernel_x_stencil_6");
  hcompute_kernel_x_stencil_6->add_store("kernel_x_stencil", "1", "-1");

//store is: kernel_x.stencil(0, 1) = (int16)0
  auto hcompute_kernel_x_stencil_7 = prg.add_op("op_hcompute_kernel_x_stencil_7");
  hcompute_kernel_x_stencil_7->add_function("hcompute_kernel_x_stencil_7");
  hcompute_kernel_x_stencil_7->add_store("kernel_x_stencil", "1", "0");

//store is: kernel_x.stencil(1, 1) = (int16)0
  auto hcompute_kernel_x_stencil_8 = prg.add_op("op_hcompute_kernel_x_stencil_8");
  hcompute_kernel_x_stencil_8->add_function("hcompute_kernel_x_stencil_8");
  hcompute_kernel_x_stencil_8->add_store("kernel_x_stencil", "1", "1");

//store is: kernel_x.stencil(-1, -1) = (int16)-1
  auto hcompute_kernel_x_stencil_9 = prg.add_op("op_hcompute_kernel_x_stencil_9");
  hcompute_kernel_x_stencil_9->add_function("hcompute_kernel_x_stencil_9");
  hcompute_kernel_x_stencil_9->add_store("kernel_x_stencil", "-1", "-1");

//store is: kernel_x.stencil(-1, 0) = (int16)-2
  auto hcompute_kernel_x_stencil_10 = prg.add_op("op_hcompute_kernel_x_stencil_10");
  hcompute_kernel_x_stencil_10->add_function("hcompute_kernel_x_stencil_10");
  hcompute_kernel_x_stencil_10->add_store("kernel_x_stencil", "0", "-1");

//store is: kernel_x.stencil(-1, 1) = (int16)-1
  auto hcompute_kernel_x_stencil_11 = prg.add_op("op_hcompute_kernel_x_stencil_11");
  hcompute_kernel_x_stencil_11->add_function("hcompute_kernel_x_stencil_11");
  hcompute_kernel_x_stencil_11->add_store("kernel_x_stencil", "1", "-1");

//store is: kernel_x.stencil(1, -1) = (int16)1
  auto hcompute_kernel_x_stencil_12 = prg.add_op("op_hcompute_kernel_x_stencil_12");
  hcompute_kernel_x_stencil_12->add_function("hcompute_kernel_x_stencil_12");
  hcompute_kernel_x_stencil_12->add_store("kernel_x_stencil", "-1", "1");

//store is: kernel_x.stencil(1, 0) = (int16)2
  auto hcompute_kernel_x_stencil_13 = prg.add_op("op_hcompute_kernel_x_stencil_13");
  hcompute_kernel_x_stencil_13->add_function("hcompute_kernel_x_stencil_13");
  hcompute_kernel_x_stencil_13->add_store("kernel_x_stencil", "0", "1");

//store is: kernel_x.stencil(1, 1) = (int16)1
  auto hcompute_kernel_x_stencil_14 = prg.add_op("op_hcompute_kernel_x_stencil_14");
  hcompute_kernel_x_stencil_14->add_function("hcompute_kernel_x_stencil_14");
  hcompute_kernel_x_stencil_14->add_store("kernel_x_stencil", "1", "1");

//consuming kernel_x.stencil
////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, 60);
////producing grad_x_unclamp.stencil

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  auto grad_x_unclamp_s1_r_y = grad_x_s0_x->add_loop("grad_x_unclamp_s1_r_y", -1, 2);
  auto grad_x_unclamp_s1_r_x = grad_x_unclamp_s1_r_y->add_loop("grad_x_unclamp_s1_r_x", -1, 2);

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + grad_x_unclamp_s1_r_x), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(grad_x_unclamp_s1_r_x, grad_x_unclamp_s1_r_y)))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s1_r_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("kernel_x_stencil", "grad_x_unclamp_s1_r_y", "grad_x_unclamp_s1_r_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + grad_x_unclamp_s1_r_y)", "(grad_x_s0_x + grad_x_unclamp_s1_r_x)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x_unclamp.stencil

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y_y = prg.add_loop("lgxx_s0_y_y", 0, 20);
  auto lgxx_s0_x_x = lgxx_s0_y_y->add_loop("lgxx_s0_x_x", 0, 20);

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + -1)", "((lgxx_s0_x_x*3) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + -1)", "(lgxx_s0_x_x*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxx_stencil_2 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + -1)", "((lgxx_s0_x_x*3) + 1)");
  auto lgxx_s0_x_x_1 = lgxx_s0_y_y->add_loop("lgxx_s0_x_x_1", 0, 20);

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
  auto hcompute_lgxx_stencil_3 = lgxx_s0_x_x_1->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "(lgxx_s0_y_y*3)", "((lgxx_s0_x_x_1*3) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
  auto hcompute_lgxx_stencil_4 = lgxx_s0_x_x_1->add_op("op_hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_function("hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_store("lgxx_stencil", "(lgxx_s0_y_y*3)", "(lgxx_s0_x_x_1*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
  auto hcompute_lgxx_stencil_5 = lgxx_s0_x_x_1->add_op("op_hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_function("hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_store("lgxx_stencil", "(lgxx_s0_y_y*3)", "((lgxx_s0_x_x_1*3) + 1)");
  auto lgxx_s0_x_x_2 = lgxx_s0_y_y->add_loop("lgxx_s0_x_x_2", 0, 20);

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxx_stencil_6 = lgxx_s0_x_x_2->add_op("op_hcompute_lgxx_stencil_6");
  hcompute_lgxx_stencil_6->add_function("hcompute_lgxx_stencil_6");
  hcompute_lgxx_stencil_6->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + 1)", "((lgxx_s0_x_x_2*3) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxx_stencil_7 = lgxx_s0_x_x_2->add_op("op_hcompute_lgxx_stencil_7");
  hcompute_lgxx_stencil_7->add_function("hcompute_lgxx_stencil_7");
  hcompute_lgxx_stencil_7->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + 1)", "(lgxx_s0_x_x_2*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxx_stencil_8 = lgxx_s0_x_x_2->add_op("op_hcompute_lgxx_stencil_8");
  hcompute_lgxx_stencil_8->add_function("hcompute_lgxx_stencil_8");
  hcompute_lgxx_stencil_8->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + 1)", "((lgxx_s0_x_x_2*3) + 1)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);
  auto lgxx_s1_box_y = lgxx_s1_x->add_loop("lgxx_s1_box_y", -1, 2);
  auto lgxx_s1_box_x = lgxx_s1_box_y->add_loop("lgxx_s1_box_x", -1, 2);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_box_x + lgxx_s1_x), (lgxx_s1_box_y + lgxx_s1_y)))
  auto hcompute_lgxx_stencil_9 = lgxx_s1_box_x->add_op("op_hcompute_lgxx_stencil_9");
  hcompute_lgxx_stencil_9->add_function("hcompute_lgxx_stencil_9");
  hcompute_lgxx_stencil_9->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_9->add_load("lxx_stencil", "(lgxx_s1_box_y + lgxx_s1_y)", "(lgxx_s1_box_x + lgxx_s1_x)");
  hcompute_lgxx_stencil_9->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing kernel_y.stencil

//store is: kernel_y.stencil(-1, -1) = (int16)0
  auto hcompute_kernel_y_stencil = prg.add_op("op_hcompute_kernel_y_stencil");
  hcompute_kernel_y_stencil->add_function("hcompute_kernel_y_stencil");
  prg.buffer_port_widths["kernel_y_stencil"] = 16;
  hcompute_kernel_y_stencil->add_store("kernel_y_stencil", "-1", "-1");

//store is: kernel_y.stencil(0, -1) = (int16)0
  auto hcompute_kernel_y_stencil_1 = prg.add_op("op_hcompute_kernel_y_stencil_1");
  hcompute_kernel_y_stencil_1->add_function("hcompute_kernel_y_stencil_1");
  hcompute_kernel_y_stencil_1->add_store("kernel_y_stencil", "-1", "0");

//store is: kernel_y.stencil(1, -1) = (int16)0
  auto hcompute_kernel_y_stencil_2 = prg.add_op("op_hcompute_kernel_y_stencil_2");
  hcompute_kernel_y_stencil_2->add_function("hcompute_kernel_y_stencil_2");
  hcompute_kernel_y_stencil_2->add_store("kernel_y_stencil", "-1", "1");

//store is: kernel_y.stencil(-1, 0) = (int16)0
  auto hcompute_kernel_y_stencil_3 = prg.add_op("op_hcompute_kernel_y_stencil_3");
  hcompute_kernel_y_stencil_3->add_function("hcompute_kernel_y_stencil_3");
  hcompute_kernel_y_stencil_3->add_store("kernel_y_stencil", "0", "-1");

//store is: kernel_y.stencil(0, 0) = (int16)0
  auto hcompute_kernel_y_stencil_4 = prg.add_op("op_hcompute_kernel_y_stencil_4");
  hcompute_kernel_y_stencil_4->add_function("hcompute_kernel_y_stencil_4");
  hcompute_kernel_y_stencil_4->add_store("kernel_y_stencil", "0", "0");

//store is: kernel_y.stencil(1, 0) = (int16)0
  auto hcompute_kernel_y_stencil_5 = prg.add_op("op_hcompute_kernel_y_stencil_5");
  hcompute_kernel_y_stencil_5->add_function("hcompute_kernel_y_stencil_5");
  hcompute_kernel_y_stencil_5->add_store("kernel_y_stencil", "0", "1");

//store is: kernel_y.stencil(-1, 1) = (int16)0
  auto hcompute_kernel_y_stencil_6 = prg.add_op("op_hcompute_kernel_y_stencil_6");
  hcompute_kernel_y_stencil_6->add_function("hcompute_kernel_y_stencil_6");
  hcompute_kernel_y_stencil_6->add_store("kernel_y_stencil", "1", "-1");

//store is: kernel_y.stencil(0, 1) = (int16)0
  auto hcompute_kernel_y_stencil_7 = prg.add_op("op_hcompute_kernel_y_stencil_7");
  hcompute_kernel_y_stencil_7->add_function("hcompute_kernel_y_stencil_7");
  hcompute_kernel_y_stencil_7->add_store("kernel_y_stencil", "1", "0");

//store is: kernel_y.stencil(1, 1) = (int16)0
  auto hcompute_kernel_y_stencil_8 = prg.add_op("op_hcompute_kernel_y_stencil_8");
  hcompute_kernel_y_stencil_8->add_function("hcompute_kernel_y_stencil_8");
  hcompute_kernel_y_stencil_8->add_store("kernel_y_stencil", "1", "1");

//store is: kernel_y.stencil(-1, 1) = (int16)1
  auto hcompute_kernel_y_stencil_9 = prg.add_op("op_hcompute_kernel_y_stencil_9");
  hcompute_kernel_y_stencil_9->add_function("hcompute_kernel_y_stencil_9");
  hcompute_kernel_y_stencil_9->add_store("kernel_y_stencil", "1", "-1");

//store is: kernel_y.stencil(0, 1) = (int16)2
  auto hcompute_kernel_y_stencil_10 = prg.add_op("op_hcompute_kernel_y_stencil_10");
  hcompute_kernel_y_stencil_10->add_function("hcompute_kernel_y_stencil_10");
  hcompute_kernel_y_stencil_10->add_store("kernel_y_stencil", "1", "0");

//store is: kernel_y.stencil(1, 1) = (int16)1
  auto hcompute_kernel_y_stencil_11 = prg.add_op("op_hcompute_kernel_y_stencil_11");
  hcompute_kernel_y_stencil_11->add_function("hcompute_kernel_y_stencil_11");
  hcompute_kernel_y_stencil_11->add_store("kernel_y_stencil", "1", "1");

//store is: kernel_y.stencil(-1, -1) = (int16)-1
  auto hcompute_kernel_y_stencil_12 = prg.add_op("op_hcompute_kernel_y_stencil_12");
  hcompute_kernel_y_stencil_12->add_function("hcompute_kernel_y_stencil_12");
  hcompute_kernel_y_stencil_12->add_store("kernel_y_stencil", "-1", "-1");

//store is: kernel_y.stencil(0, -1) = (int16)-2
  auto hcompute_kernel_y_stencil_13 = prg.add_op("op_hcompute_kernel_y_stencil_13");
  hcompute_kernel_y_stencil_13->add_function("hcompute_kernel_y_stencil_13");
  hcompute_kernel_y_stencil_13->add_store("kernel_y_stencil", "-1", "0");

//store is: kernel_y.stencil(1, -1) = (int16)-1
  auto hcompute_kernel_y_stencil_14 = prg.add_op("op_hcompute_kernel_y_stencil_14");
  hcompute_kernel_y_stencil_14->add_function("hcompute_kernel_y_stencil_14");
  hcompute_kernel_y_stencil_14->add_store("kernel_y_stencil", "-1", "1");

//consuming kernel_y.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, 60);
////producing grad_y_unclamp.stencil

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  auto grad_y_unclamp_s1_r_y = grad_y_s0_x->add_loop("grad_y_unclamp_s1_r_y", -1, 2);
  auto grad_y_unclamp_s1_r_x = grad_y_unclamp_s1_r_y->add_loop("grad_y_unclamp_s1_r_x", -1, 2);

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + grad_y_unclamp_s1_r_x), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(grad_y_unclamp_s1_r_x, grad_y_unclamp_s1_r_y)))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s1_r_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("kernel_y_stencil", "grad_y_unclamp_s1_r_y", "grad_y_unclamp_s1_r_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + grad_y_unclamp_s1_r_y)", "(grad_y_s0_x + grad_y_unclamp_s1_r_x)");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y_unclamp.stencil

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y_y = prg.add_loop("lgxy_s0_y_y", 0, 20);
  auto lgxy_s0_x_x = lgxy_s0_y_y->add_loop("lgxy_s0_x_x", 0, 20);

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + -1)", "((lgxy_s0_x_x*3) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + -1)", "(lgxy_s0_x_x*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxy_stencil_2 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + -1)", "((lgxy_s0_x_x*3) + 1)");
  auto lgxy_s0_x_x_1 = lgxy_s0_y_y->add_loop("lgxy_s0_x_x_1", 0, 20);

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
  auto hcompute_lgxy_stencil_3 = lgxy_s0_x_x_1->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "(lgxy_s0_y_y*3)", "((lgxy_s0_x_x_1*3) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
  auto hcompute_lgxy_stencil_4 = lgxy_s0_x_x_1->add_op("op_hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_function("hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_store("lgxy_stencil", "(lgxy_s0_y_y*3)", "(lgxy_s0_x_x_1*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
  auto hcompute_lgxy_stencil_5 = lgxy_s0_x_x_1->add_op("op_hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_function("hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_store("lgxy_stencil", "(lgxy_s0_y_y*3)", "((lgxy_s0_x_x_1*3) + 1)");
  auto lgxy_s0_x_x_2 = lgxy_s0_y_y->add_loop("lgxy_s0_x_x_2", 0, 20);

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxy_stencil_6 = lgxy_s0_x_x_2->add_op("op_hcompute_lgxy_stencil_6");
  hcompute_lgxy_stencil_6->add_function("hcompute_lgxy_stencil_6");
  hcompute_lgxy_stencil_6->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + 1)", "((lgxy_s0_x_x_2*3) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxy_stencil_7 = lgxy_s0_x_x_2->add_op("op_hcompute_lgxy_stencil_7");
  hcompute_lgxy_stencil_7->add_function("hcompute_lgxy_stencil_7");
  hcompute_lgxy_stencil_7->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + 1)", "(lgxy_s0_x_x_2*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxy_stencil_8 = lgxy_s0_x_x_2->add_op("op_hcompute_lgxy_stencil_8");
  hcompute_lgxy_stencil_8->add_function("hcompute_lgxy_stencil_8");
  hcompute_lgxy_stencil_8->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + 1)", "((lgxy_s0_x_x_2*3) + 1)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);
  auto lgxy_s1_box_y = lgxy_s1_x->add_loop("lgxy_s1_box_y", -1, 2);
  auto lgxy_s1_box_x = lgxy_s1_box_y->add_loop("lgxy_s1_box_x", -1, 2);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_box_x + lgxy_s1_x), (lgxy_s1_box_y + lgxy_s1_y)))
  auto hcompute_lgxy_stencil_9 = lgxy_s1_box_x->add_op("op_hcompute_lgxy_stencil_9");
  hcompute_lgxy_stencil_9->add_function("hcompute_lgxy_stencil_9");
  hcompute_lgxy_stencil_9->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_9->add_load("lxy_stencil", "(lgxy_s1_box_y + lgxy_s1_y)", "(lgxy_s1_box_x + lgxy_s1_x)");
  hcompute_lgxy_stencil_9->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y_y = prg.add_loop("lgyy_s0_y_y", 0, 20);
  auto lgyy_s0_x_x = lgyy_s0_y_y->add_loop("lgyy_s0_x_x", 0, 20);

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + -1)", "((lgyy_s0_x_x*3) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + -1)", "(lgyy_s0_x_x*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgyy_stencil_2 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + -1)", "((lgyy_s0_x_x*3) + 1)");
  auto lgyy_s0_x_x_1 = lgyy_s0_y_y->add_loop("lgyy_s0_x_x_1", 0, 20);

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
  auto hcompute_lgyy_stencil_3 = lgyy_s0_x_x_1->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "(lgyy_s0_y_y*3)", "((lgyy_s0_x_x_1*3) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
  auto hcompute_lgyy_stencil_4 = lgyy_s0_x_x_1->add_op("op_hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_function("hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_store("lgyy_stencil", "(lgyy_s0_y_y*3)", "(lgyy_s0_x_x_1*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
  auto hcompute_lgyy_stencil_5 = lgyy_s0_x_x_1->add_op("op_hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_function("hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_store("lgyy_stencil", "(lgyy_s0_y_y*3)", "((lgyy_s0_x_x_1*3) + 1)");
  auto lgyy_s0_x_x_2 = lgyy_s0_y_y->add_loop("lgyy_s0_x_x_2", 0, 20);

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgyy_stencil_6 = lgyy_s0_x_x_2->add_op("op_hcompute_lgyy_stencil_6");
  hcompute_lgyy_stencil_6->add_function("hcompute_lgyy_stencil_6");
  hcompute_lgyy_stencil_6->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + 1)", "((lgyy_s0_x_x_2*3) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgyy_stencil_7 = lgyy_s0_x_x_2->add_op("op_hcompute_lgyy_stencil_7");
  hcompute_lgyy_stencil_7->add_function("hcompute_lgyy_stencil_7");
  hcompute_lgyy_stencil_7->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + 1)", "(lgyy_s0_x_x_2*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgyy_stencil_8 = lgyy_s0_x_x_2->add_op("op_hcompute_lgyy_stencil_8");
  hcompute_lgyy_stencil_8->add_function("hcompute_lgyy_stencil_8");
  hcompute_lgyy_stencil_8->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + 1)", "((lgyy_s0_x_x_2*3) + 1)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);
  auto lgyy_s1_box_y = lgyy_s1_x->add_loop("lgyy_s1_box_y", -1, 2);
  auto lgyy_s1_box_x = lgyy_s1_box_y->add_loop("lgyy_s1_box_x", -1, 2);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_box_x + lgyy_s1_x), (lgyy_s1_box_y + lgyy_s1_y)))
  auto hcompute_lgyy_stencil_9 = lgyy_s1_box_x->add_op("op_hcompute_lgyy_stencil_9");
  hcompute_lgyy_stencil_9->add_function("hcompute_lgyy_stencil_9");
  hcompute_lgyy_stencil_9->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_9->add_load("lyy_stencil", "(lgyy_s1_box_y + lgyy_s1_y)", "(lgyy_s1_box_x + lgyy_s1_x)");
  hcompute_lgyy_stencil_9->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, 59);

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
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

prog harris_sch4_1pp3c() {
  prog prg;
  prg.compute_unit_file = "harris_sch4_1pp3c_compute.h";
  prg.name = "harris_sch4_1pp3c";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing kernel_x.stencil

//store is: kernel_x.stencil(-1, -1) = (int16)0
  auto hcompute_kernel_x_stencil = prg.add_op("op_hcompute_kernel_x_stencil");
  hcompute_kernel_x_stencil->add_function("hcompute_kernel_x_stencil");
  prg.buffer_port_widths["kernel_x_stencil"] = 16;
  hcompute_kernel_x_stencil->add_store("kernel_x_stencil", "-1", "-1");

//store is: kernel_x.stencil(0, -1) = (int16)0
  auto hcompute_kernel_x_stencil_1 = prg.add_op("op_hcompute_kernel_x_stencil_1");
  hcompute_kernel_x_stencil_1->add_function("hcompute_kernel_x_stencil_1");
  hcompute_kernel_x_stencil_1->add_store("kernel_x_stencil", "-1", "0");

//store is: kernel_x.stencil(1, -1) = (int16)0
  auto hcompute_kernel_x_stencil_2 = prg.add_op("op_hcompute_kernel_x_stencil_2");
  hcompute_kernel_x_stencil_2->add_function("hcompute_kernel_x_stencil_2");
  hcompute_kernel_x_stencil_2->add_store("kernel_x_stencil", "-1", "1");

//store is: kernel_x.stencil(-1, 0) = (int16)0
  auto hcompute_kernel_x_stencil_3 = prg.add_op("op_hcompute_kernel_x_stencil_3");
  hcompute_kernel_x_stencil_3->add_function("hcompute_kernel_x_stencil_3");
  hcompute_kernel_x_stencil_3->add_store("kernel_x_stencil", "0", "-1");

//store is: kernel_x.stencil(0, 0) = (int16)0
  auto hcompute_kernel_x_stencil_4 = prg.add_op("op_hcompute_kernel_x_stencil_4");
  hcompute_kernel_x_stencil_4->add_function("hcompute_kernel_x_stencil_4");
  hcompute_kernel_x_stencil_4->add_store("kernel_x_stencil", "0", "0");

//store is: kernel_x.stencil(1, 0) = (int16)0
  auto hcompute_kernel_x_stencil_5 = prg.add_op("op_hcompute_kernel_x_stencil_5");
  hcompute_kernel_x_stencil_5->add_function("hcompute_kernel_x_stencil_5");
  hcompute_kernel_x_stencil_5->add_store("kernel_x_stencil", "0", "1");

//store is: kernel_x.stencil(-1, 1) = (int16)0
  auto hcompute_kernel_x_stencil_6 = prg.add_op("op_hcompute_kernel_x_stencil_6");
  hcompute_kernel_x_stencil_6->add_function("hcompute_kernel_x_stencil_6");
  hcompute_kernel_x_stencil_6->add_store("kernel_x_stencil", "1", "-1");

//store is: kernel_x.stencil(0, 1) = (int16)0
  auto hcompute_kernel_x_stencil_7 = prg.add_op("op_hcompute_kernel_x_stencil_7");
  hcompute_kernel_x_stencil_7->add_function("hcompute_kernel_x_stencil_7");
  hcompute_kernel_x_stencil_7->add_store("kernel_x_stencil", "1", "0");

//store is: kernel_x.stencil(1, 1) = (int16)0
  auto hcompute_kernel_x_stencil_8 = prg.add_op("op_hcompute_kernel_x_stencil_8");
  hcompute_kernel_x_stencil_8->add_function("hcompute_kernel_x_stencil_8");
  hcompute_kernel_x_stencil_8->add_store("kernel_x_stencil", "1", "1");

//store is: kernel_x.stencil(-1, -1) = (int16)-1
  auto hcompute_kernel_x_stencil_9 = prg.add_op("op_hcompute_kernel_x_stencil_9");
  hcompute_kernel_x_stencil_9->add_function("hcompute_kernel_x_stencil_9");
  hcompute_kernel_x_stencil_9->add_store("kernel_x_stencil", "-1", "-1");

//store is: kernel_x.stencil(-1, 0) = (int16)-2
  auto hcompute_kernel_x_stencil_10 = prg.add_op("op_hcompute_kernel_x_stencil_10");
  hcompute_kernel_x_stencil_10->add_function("hcompute_kernel_x_stencil_10");
  hcompute_kernel_x_stencil_10->add_store("kernel_x_stencil", "0", "-1");

//store is: kernel_x.stencil(-1, 1) = (int16)-1
  auto hcompute_kernel_x_stencil_11 = prg.add_op("op_hcompute_kernel_x_stencil_11");
  hcompute_kernel_x_stencil_11->add_function("hcompute_kernel_x_stencil_11");
  hcompute_kernel_x_stencil_11->add_store("kernel_x_stencil", "1", "-1");

//store is: kernel_x.stencil(1, -1) = (int16)1
  auto hcompute_kernel_x_stencil_12 = prg.add_op("op_hcompute_kernel_x_stencil_12");
  hcompute_kernel_x_stencil_12->add_function("hcompute_kernel_x_stencil_12");
  hcompute_kernel_x_stencil_12->add_store("kernel_x_stencil", "-1", "1");

//store is: kernel_x.stencil(1, 0) = (int16)2
  auto hcompute_kernel_x_stencil_13 = prg.add_op("op_hcompute_kernel_x_stencil_13");
  hcompute_kernel_x_stencil_13->add_function("hcompute_kernel_x_stencil_13");
  hcompute_kernel_x_stencil_13->add_store("kernel_x_stencil", "0", "1");

//store is: kernel_x.stencil(1, 1) = (int16)1
  auto hcompute_kernel_x_stencil_14 = prg.add_op("op_hcompute_kernel_x_stencil_14");
  hcompute_kernel_x_stencil_14->add_function("hcompute_kernel_x_stencil_14");
  hcompute_kernel_x_stencil_14->add_store("kernel_x_stencil", "1", "1");

//consuming kernel_x.stencil
////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, 60);
////producing grad_x_unclamp.stencil

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  auto grad_x_unclamp_s1_r_y = grad_x_s0_x->add_loop("grad_x_unclamp_s1_r_y", -1, 2);

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(-1, grad_x_unclamp_s1_r_y)) + ((padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(0, grad_x_unclamp_s1_r_y)) + (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(1, grad_x_unclamp_s1_r_y)))))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s1_r_y->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("kernel_x_stencil", "grad_x_unclamp_s1_r_y", "-1");
  hcompute_grad_x_unclamp_stencil_1->add_load("kernel_x_stencil", "grad_x_unclamp_s1_r_y", "0");
  hcompute_grad_x_unclamp_stencil_1->add_load("kernel_x_stencil", "grad_x_unclamp_s1_r_y", "1");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + grad_x_unclamp_s1_r_y)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + grad_x_unclamp_s1_r_y)", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + grad_x_unclamp_s1_r_y)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x_unclamp.stencil

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y_y = prg.add_loop("lgxx_s0_y_y", 0, 20);
  auto lgxx_s0_x_x = lgxx_s0_y_y->add_loop("lgxx_s0_x_x", 0, 20);

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + -1)", "((lgxx_s0_x_x*3) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + -1)", "(lgxx_s0_x_x*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxx_stencil_2 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + -1)", "((lgxx_s0_x_x*3) + 1)");
  auto lgxx_s0_x_x_1 = lgxx_s0_y_y->add_loop("lgxx_s0_x_x_1", 0, 20);

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
  auto hcompute_lgxx_stencil_3 = lgxx_s0_x_x_1->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "(lgxx_s0_y_y*3)", "((lgxx_s0_x_x_1*3) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
  auto hcompute_lgxx_stencil_4 = lgxx_s0_x_x_1->add_op("op_hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_function("hcompute_lgxx_stencil_4");
  hcompute_lgxx_stencil_4->add_store("lgxx_stencil", "(lgxx_s0_y_y*3)", "(lgxx_s0_x_x_1*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
  auto hcompute_lgxx_stencil_5 = lgxx_s0_x_x_1->add_op("op_hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_function("hcompute_lgxx_stencil_5");
  hcompute_lgxx_stencil_5->add_store("lgxx_stencil", "(lgxx_s0_y_y*3)", "((lgxx_s0_x_x_1*3) + 1)");
  auto lgxx_s0_x_x_2 = lgxx_s0_y_y->add_loop("lgxx_s0_x_x_2", 0, 20);

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxx_stencil_6 = lgxx_s0_x_x_2->add_op("op_hcompute_lgxx_stencil_6");
  hcompute_lgxx_stencil_6->add_function("hcompute_lgxx_stencil_6");
  hcompute_lgxx_stencil_6->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + 1)", "((lgxx_s0_x_x_2*3) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxx_stencil_7 = lgxx_s0_x_x_2->add_op("op_hcompute_lgxx_stencil_7");
  hcompute_lgxx_stencil_7->add_function("hcompute_lgxx_stencil_7");
  hcompute_lgxx_stencil_7->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + 1)", "(lgxx_s0_x_x_2*3)");

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxx_stencil_8 = lgxx_s0_x_x_2->add_op("op_hcompute_lgxx_stencil_8");
  hcompute_lgxx_stencil_8->add_function("hcompute_lgxx_stencil_8");
  hcompute_lgxx_stencil_8->add_store("lgxx_stencil", "((lgxx_s0_y_y*3) + 1)", "((lgxx_s0_x_x_2*3) + 1)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);
  auto lgxx_s1_box_y = lgxx_s1_x->add_loop("lgxx_s1_box_y", -1, 2);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_box_y + lgxx_s1_y)) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_box_y + lgxx_s1_y)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_box_y + lgxx_s1_y)))))
  auto hcompute_lgxx_stencil_9 = lgxx_s1_box_y->add_op("op_hcompute_lgxx_stencil_9");
  hcompute_lgxx_stencil_9->add_function("hcompute_lgxx_stencil_9");
  hcompute_lgxx_stencil_9->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_9->add_load("lxx_stencil", "(lgxx_s1_box_y + lgxx_s1_y)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_9->add_load("lxx_stencil", "(lgxx_s1_box_y + lgxx_s1_y)", "lgxx_s1_x");
  hcompute_lgxx_stencil_9->add_load("lxx_stencil", "(lgxx_s1_box_y + lgxx_s1_y)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_9->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing kernel_y.stencil

//store is: kernel_y.stencil(-1, -1) = (int16)0
  auto hcompute_kernel_y_stencil = prg.add_op("op_hcompute_kernel_y_stencil");
  hcompute_kernel_y_stencil->add_function("hcompute_kernel_y_stencil");
  prg.buffer_port_widths["kernel_y_stencil"] = 16;
  hcompute_kernel_y_stencil->add_store("kernel_y_stencil", "-1", "-1");

//store is: kernel_y.stencil(0, -1) = (int16)0
  auto hcompute_kernel_y_stencil_1 = prg.add_op("op_hcompute_kernel_y_stencil_1");
  hcompute_kernel_y_stencil_1->add_function("hcompute_kernel_y_stencil_1");
  hcompute_kernel_y_stencil_1->add_store("kernel_y_stencil", "-1", "0");

//store is: kernel_y.stencil(1, -1) = (int16)0
  auto hcompute_kernel_y_stencil_2 = prg.add_op("op_hcompute_kernel_y_stencil_2");
  hcompute_kernel_y_stencil_2->add_function("hcompute_kernel_y_stencil_2");
  hcompute_kernel_y_stencil_2->add_store("kernel_y_stencil", "-1", "1");

//store is: kernel_y.stencil(-1, 0) = (int16)0
  auto hcompute_kernel_y_stencil_3 = prg.add_op("op_hcompute_kernel_y_stencil_3");
  hcompute_kernel_y_stencil_3->add_function("hcompute_kernel_y_stencil_3");
  hcompute_kernel_y_stencil_3->add_store("kernel_y_stencil", "0", "-1");

//store is: kernel_y.stencil(0, 0) = (int16)0
  auto hcompute_kernel_y_stencil_4 = prg.add_op("op_hcompute_kernel_y_stencil_4");
  hcompute_kernel_y_stencil_4->add_function("hcompute_kernel_y_stencil_4");
  hcompute_kernel_y_stencil_4->add_store("kernel_y_stencil", "0", "0");

//store is: kernel_y.stencil(1, 0) = (int16)0
  auto hcompute_kernel_y_stencil_5 = prg.add_op("op_hcompute_kernel_y_stencil_5");
  hcompute_kernel_y_stencil_5->add_function("hcompute_kernel_y_stencil_5");
  hcompute_kernel_y_stencil_5->add_store("kernel_y_stencil", "0", "1");

//store is: kernel_y.stencil(-1, 1) = (int16)0
  auto hcompute_kernel_y_stencil_6 = prg.add_op("op_hcompute_kernel_y_stencil_6");
  hcompute_kernel_y_stencil_6->add_function("hcompute_kernel_y_stencil_6");
  hcompute_kernel_y_stencil_6->add_store("kernel_y_stencil", "1", "-1");

//store is: kernel_y.stencil(0, 1) = (int16)0
  auto hcompute_kernel_y_stencil_7 = prg.add_op("op_hcompute_kernel_y_stencil_7");
  hcompute_kernel_y_stencil_7->add_function("hcompute_kernel_y_stencil_7");
  hcompute_kernel_y_stencil_7->add_store("kernel_y_stencil", "1", "0");

//store is: kernel_y.stencil(1, 1) = (int16)0
  auto hcompute_kernel_y_stencil_8 = prg.add_op("op_hcompute_kernel_y_stencil_8");
  hcompute_kernel_y_stencil_8->add_function("hcompute_kernel_y_stencil_8");
  hcompute_kernel_y_stencil_8->add_store("kernel_y_stencil", "1", "1");

//store is: kernel_y.stencil(-1, 1) = (int16)1
  auto hcompute_kernel_y_stencil_9 = prg.add_op("op_hcompute_kernel_y_stencil_9");
  hcompute_kernel_y_stencil_9->add_function("hcompute_kernel_y_stencil_9");
  hcompute_kernel_y_stencil_9->add_store("kernel_y_stencil", "1", "-1");

//store is: kernel_y.stencil(0, 1) = (int16)2
  auto hcompute_kernel_y_stencil_10 = prg.add_op("op_hcompute_kernel_y_stencil_10");
  hcompute_kernel_y_stencil_10->add_function("hcompute_kernel_y_stencil_10");
  hcompute_kernel_y_stencil_10->add_store("kernel_y_stencil", "1", "0");

//store is: kernel_y.stencil(1, 1) = (int16)1
  auto hcompute_kernel_y_stencil_11 = prg.add_op("op_hcompute_kernel_y_stencil_11");
  hcompute_kernel_y_stencil_11->add_function("hcompute_kernel_y_stencil_11");
  hcompute_kernel_y_stencil_11->add_store("kernel_y_stencil", "1", "1");

//store is: kernel_y.stencil(-1, -1) = (int16)-1
  auto hcompute_kernel_y_stencil_12 = prg.add_op("op_hcompute_kernel_y_stencil_12");
  hcompute_kernel_y_stencil_12->add_function("hcompute_kernel_y_stencil_12");
  hcompute_kernel_y_stencil_12->add_store("kernel_y_stencil", "-1", "-1");

//store is: kernel_y.stencil(0, -1) = (int16)-2
  auto hcompute_kernel_y_stencil_13 = prg.add_op("op_hcompute_kernel_y_stencil_13");
  hcompute_kernel_y_stencil_13->add_function("hcompute_kernel_y_stencil_13");
  hcompute_kernel_y_stencil_13->add_store("kernel_y_stencil", "-1", "0");

//store is: kernel_y.stencil(1, -1) = (int16)-1
  auto hcompute_kernel_y_stencil_14 = prg.add_op("op_hcompute_kernel_y_stencil_14");
  hcompute_kernel_y_stencil_14->add_function("hcompute_kernel_y_stencil_14");
  hcompute_kernel_y_stencil_14->add_store("kernel_y_stencil", "-1", "1");

//consuming kernel_y.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, 60);
////producing grad_y_unclamp.stencil

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  auto grad_y_unclamp_s1_r_y = grad_y_s0_x->add_loop("grad_y_unclamp_s1_r_y", -1, 2);

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(-1, grad_y_unclamp_s1_r_y)) + ((padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(0, grad_y_unclamp_s1_r_y)) + (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(1, grad_y_unclamp_s1_r_y)))))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s1_r_y->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("kernel_y_stencil", "grad_y_unclamp_s1_r_y", "-1");
  hcompute_grad_y_unclamp_stencil_1->add_load("kernel_y_stencil", "grad_y_unclamp_s1_r_y", "0");
  hcompute_grad_y_unclamp_stencil_1->add_load("kernel_y_stencil", "grad_y_unclamp_s1_r_y", "1");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + grad_y_unclamp_s1_r_y)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + grad_y_unclamp_s1_r_y)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + grad_y_unclamp_s1_r_y)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y_unclamp.stencil

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y_y = prg.add_loop("lgxy_s0_y_y", 0, 20);
  auto lgxy_s0_x_x = lgxy_s0_y_y->add_loop("lgxy_s0_x_x", 0, 20);

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + -1)", "((lgxy_s0_x_x*3) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + -1)", "(lgxy_s0_x_x*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgxy_stencil_2 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + -1)", "((lgxy_s0_x_x*3) + 1)");
  auto lgxy_s0_x_x_1 = lgxy_s0_y_y->add_loop("lgxy_s0_x_x_1", 0, 20);

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
  auto hcompute_lgxy_stencil_3 = lgxy_s0_x_x_1->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "(lgxy_s0_y_y*3)", "((lgxy_s0_x_x_1*3) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
  auto hcompute_lgxy_stencil_4 = lgxy_s0_x_x_1->add_op("op_hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_function("hcompute_lgxy_stencil_4");
  hcompute_lgxy_stencil_4->add_store("lgxy_stencil", "(lgxy_s0_y_y*3)", "(lgxy_s0_x_x_1*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
  auto hcompute_lgxy_stencil_5 = lgxy_s0_x_x_1->add_op("op_hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_function("hcompute_lgxy_stencil_5");
  hcompute_lgxy_stencil_5->add_store("lgxy_stencil", "(lgxy_s0_y_y*3)", "((lgxy_s0_x_x_1*3) + 1)");
  auto lgxy_s0_x_x_2 = lgxy_s0_y_y->add_loop("lgxy_s0_x_x_2", 0, 20);

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxy_stencil_6 = lgxy_s0_x_x_2->add_op("op_hcompute_lgxy_stencil_6");
  hcompute_lgxy_stencil_6->add_function("hcompute_lgxy_stencil_6");
  hcompute_lgxy_stencil_6->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + 1)", "((lgxy_s0_x_x_2*3) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxy_stencil_7 = lgxy_s0_x_x_2->add_op("op_hcompute_lgxy_stencil_7");
  hcompute_lgxy_stencil_7->add_function("hcompute_lgxy_stencil_7");
  hcompute_lgxy_stencil_7->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + 1)", "(lgxy_s0_x_x_2*3)");

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgxy_stencil_8 = lgxy_s0_x_x_2->add_op("op_hcompute_lgxy_stencil_8");
  hcompute_lgxy_stencil_8->add_function("hcompute_lgxy_stencil_8");
  hcompute_lgxy_stencil_8->add_store("lgxy_stencil", "((lgxy_s0_y_y*3) + 1)", "((lgxy_s0_x_x_2*3) + 1)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);
  auto lgxy_s1_box_y = lgxy_s1_x->add_loop("lgxy_s1_box_y", -1, 2);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_box_y + lgxy_s1_y)) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_box_y + lgxy_s1_y)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_box_y + lgxy_s1_y)))))
  auto hcompute_lgxy_stencil_9 = lgxy_s1_box_y->add_op("op_hcompute_lgxy_stencil_9");
  hcompute_lgxy_stencil_9->add_function("hcompute_lgxy_stencil_9");
  hcompute_lgxy_stencil_9->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_9->add_load("lxy_stencil", "(lgxy_s1_box_y + lgxy_s1_y)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_9->add_load("lxy_stencil", "(lgxy_s1_box_y + lgxy_s1_y)", "lgxy_s1_x");
  hcompute_lgxy_stencil_9->add_load("lxy_stencil", "(lgxy_s1_box_y + lgxy_s1_y)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_9->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y_y = prg.add_loop("lgyy_s0_y_y", 0, 20);
  auto lgyy_s0_x_x = lgyy_s0_y_y->add_loop("lgyy_s0_x_x", 0, 20);

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + -1)", "((lgyy_s0_x_x*3) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + -1)", "(lgyy_s0_x_x*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
  auto hcompute_lgyy_stencil_2 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + -1)", "((lgyy_s0_x_x*3) + 1)");
  auto lgyy_s0_x_x_1 = lgyy_s0_y_y->add_loop("lgyy_s0_x_x_1", 0, 20);

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
  auto hcompute_lgyy_stencil_3 = lgyy_s0_x_x_1->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "(lgyy_s0_y_y*3)", "((lgyy_s0_x_x_1*3) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
  auto hcompute_lgyy_stencil_4 = lgyy_s0_x_x_1->add_op("op_hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_function("hcompute_lgyy_stencil_4");
  hcompute_lgyy_stencil_4->add_store("lgyy_stencil", "(lgyy_s0_y_y*3)", "(lgyy_s0_x_x_1*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
  auto hcompute_lgyy_stencil_5 = lgyy_s0_x_x_1->add_op("op_hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_function("hcompute_lgyy_stencil_5");
  hcompute_lgyy_stencil_5->add_store("lgyy_stencil", "(lgyy_s0_y_y*3)", "((lgyy_s0_x_x_1*3) + 1)");
  auto lgyy_s0_x_x_2 = lgyy_s0_y_y->add_loop("lgyy_s0_x_x_2", 0, 20);

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgyy_stencil_6 = lgyy_s0_x_x_2->add_op("op_hcompute_lgyy_stencil_6");
  hcompute_lgyy_stencil_6->add_function("hcompute_lgyy_stencil_6");
  hcompute_lgyy_stencil_6->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + 1)", "((lgyy_s0_x_x_2*3) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgyy_stencil_7 = lgyy_s0_x_x_2->add_op("op_hcompute_lgyy_stencil_7");
  hcompute_lgyy_stencil_7->add_function("hcompute_lgyy_stencil_7");
  hcompute_lgyy_stencil_7->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + 1)", "(lgyy_s0_x_x_2*3)");

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
  auto hcompute_lgyy_stencil_8 = lgyy_s0_x_x_2->add_op("op_hcompute_lgyy_stencil_8");
  hcompute_lgyy_stencil_8->add_function("hcompute_lgyy_stencil_8");
  hcompute_lgyy_stencil_8->add_store("lgyy_stencil", "((lgyy_s0_y_y*3) + 1)", "((lgyy_s0_x_x_2*3) + 1)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);
  auto lgyy_s1_box_y = lgyy_s1_x->add_loop("lgyy_s1_box_y", -1, 2);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_box_y + lgyy_s1_y)) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_box_y + lgyy_s1_y)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_box_y + lgyy_s1_y)))))
  auto hcompute_lgyy_stencil_9 = lgyy_s1_box_y->add_op("op_hcompute_lgyy_stencil_9");
  hcompute_lgyy_stencil_9->add_function("hcompute_lgyy_stencil_9");
  hcompute_lgyy_stencil_9->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_9->add_load("lyy_stencil", "(lgyy_s1_box_y + lgyy_s1_y)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_9->add_load("lyy_stencil", "(lgyy_s1_box_y + lgyy_s1_y)", "lgyy_s1_x");
  hcompute_lgyy_stencil_9->add_load("lyy_stencil", "(lgyy_s1_box_y + lgyy_s1_y)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_9->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, 59);

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
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

prog harris_sch5_1ppc() {
  prog prg;
  prg.compute_unit_file = "harris_sch5_1ppc_compute.h";
  prg.name = "harris_sch5_1ppc";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, 60);
////producing grad_x_unclamp.stencil

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((((grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1)))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x_unclamp.stencil

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, 59);

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, 60);
////producing grad_y_unclamp.stencil

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((((grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1)))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y_unclamp.stencil

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, 59);

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, 59);

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -1, 59);

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", 0, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
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

prog harris_sch6_2ppc() {
  prog prg;
  prg.compute_unit_file = "harris_sch6_2ppc_compute.h";
  prg.name = "harris_sch6_2ppc";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 58, 58> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x_x", 0, 32);

//store is: padded16_global_wrapper.stencil(((padded16_global_wrapper_s0_x_x*2) + -3), padded16_global_wrapper_s0_y) = padded16.stencil(((padded16_global_wrapper_s0_x_x*2) + -3), padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "((padded16_global_wrapper_s0_x_x*2) + -3)");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "((padded16_global_wrapper_s0_x_x*2) + -3)");

//store is: padded16_global_wrapper.stencil(((padded16_global_wrapper_s0_x_x*2) + -2), padded16_global_wrapper_s0_y) = padded16.stencil(((padded16_global_wrapper_s0_x_x*2) + -2), padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil_1 = padded16_global_wrapper_s0_x_x->add_op("op_hcompute_padded16_global_wrapper_stencil_1");
  hcompute_padded16_global_wrapper_stencil_1->add_function("hcompute_padded16_global_wrapper_stencil_1");
  hcompute_padded16_global_wrapper_stencil_1->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "((padded16_global_wrapper_s0_x_x*2) + -2)");
  hcompute_padded16_global_wrapper_stencil_1->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "((padded16_global_wrapper_s0_x_x*2) + -2)");

//consuming padded16_global_wrapper.stencil
////producing grad_x_unclamp.stencil
  auto grad_x_unclamp_s0_y = prg.add_loop("grad_x_unclamp_s0_y", -2, 60);
  auto grad_x_unclamp_s0_x_x = grad_x_unclamp_s0_y->add_loop("grad_x_unclamp_s0_x_x", 0, 31);

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + -2), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "((grad_x_unclamp_s0_x_x*2) + -2)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + -1), grad_x_unclamp_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_unclamp_s0_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s0_y", "((grad_x_unclamp_s0_x_x*2) + -1)");
  auto grad_x_unclamp_s1_y = prg.add_loop("grad_x_unclamp_s1_y", -2, 60);
  auto grad_x_unclamp_s1_x_x = grad_x_unclamp_s1_y->add_loop("grad_x_unclamp_s1_x_x", 0, 31);

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y) = ((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y)*(int16)2)))) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), (grad_x_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), grad_x_unclamp_s1_y)*(int16)2)) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), (grad_x_unclamp_s1_y + 1)))
  auto hcompute_grad_x_unclamp_stencil_2 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_function("hcompute_grad_x_unclamp_stencil_2");
  hcompute_grad_x_unclamp_stencil_2->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_x_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + -1)", "((grad_x_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_x_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_x_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_x_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + -1)", "((grad_x_unclamp_s1_x_x*2) + -3)");
  hcompute_grad_x_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -3)");
  hcompute_grad_x_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*2) + -3)");
  hcompute_grad_x_unclamp_stencil_2->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -2)");

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y) = ((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), grad_x_unclamp_s1_y)*(int16)2)))) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y)*(int16)2)) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + 1)))
  auto hcompute_grad_x_unclamp_stencil_3 = grad_x_unclamp_s1_x_x->add_op("op_hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_function("hcompute_grad_x_unclamp_stencil_3");
  hcompute_grad_x_unclamp_stencil_3->add_load("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_x_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + -1)", "((grad_x_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 1)", "((grad_x_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + -1)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_x_unclamp_s1_y + 1)", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "grad_x_unclamp_s1_y", "(grad_x_unclamp_s1_x_x*2)");
  hcompute_grad_x_unclamp_stencil_3->add_store("grad_x_unclamp_stencil", "grad_x_unclamp_s1_y", "((grad_x_unclamp_s1_x_x*2) + -1)");

//consuming grad_x_unclamp.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x_x = lxx_s0_y->add_loop("lxx_s0_x_x", 0, 31);

//store is: lxx.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "((lxx_s0_x_x*2) + -2)");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "((lxx_s0_x_x*2) + -2)");

//store is: lxx.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxx_stencil_1 = lxx_s0_x_x->add_op("op_hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_function("hcompute_lxx_stencil_1");
  hcompute_lxx_stencil_1->add_load("grad_x_unclamp_stencil", "lxx_s0_y", "((lxx_s0_x_x*2) + -1)");
  hcompute_lxx_stencil_1->add_store("lxx_stencil", "lxx_s0_y", "((lxx_s0_x_x*2) + -1)");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x_x = lgxx_s0_y->add_loop("lgxx_s0_x_x", 0, 30);

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + -1), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "((lgxx_s0_x_x*2) + -1)");

//store is: lgxx.stencil((lgxx_s0_x_x*2), lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil_1 = lgxx_s0_x_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s0_y", "(lgxx_s0_x_x*2)");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x_x = lgxx_s1_y->add_loop("lgxx_s1_x_x", 0, 30);

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + -2), (lgxx_s1_y + -1)) + (lgxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + -2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_2 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_function("hcompute_lgxx_stencil_2");
  hcompute_lgxx_stencil_2->add_load("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "((lgxx_s1_x_x*2) + -2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + -2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + -2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_2->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_2->add_store("lgxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + -1)");

//store is: lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + -1)) + (lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_3 = lgxx_s1_x_x->add_op("op_hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_function("hcompute_lgxx_stencil_3");
  hcompute_lgxx_stencil_3->add_load("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "lgxx_s1_y", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + -1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "((lgxx_s1_x_x*2) + 1)");
  hcompute_lgxx_stencil_3->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x_x*2)");
  hcompute_lgxx_stencil_3->add_store("lgxx_stencil", "lgxx_s1_y", "(lgxx_s1_x_x*2)");

//consuming lgxx.stencil
////producing grad_y_unclamp.stencil
  auto grad_y_unclamp_s0_y = prg.add_loop("grad_y_unclamp_s0_y", -2, 60);
  auto grad_y_unclamp_s0_x_x = grad_y_unclamp_s0_y->add_loop("grad_y_unclamp_s0_x_x", 0, 31);

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -2), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "((grad_y_unclamp_s0_x_x*2) + -2)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -1), grad_y_unclamp_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_unclamp_s0_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s0_y", "((grad_y_unclamp_s0_x_x*2) + -1)");
  auto grad_y_unclamp_s1_y = prg.add_loop("grad_y_unclamp_s1_y", -2, 60);
  auto grad_y_unclamp_s1_x_x = grad_y_unclamp_s1_y->add_loop("grad_y_unclamp_s1_x_x", 0, 31);

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y) = ((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), (grad_y_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + -1)))
  auto hcompute_grad_y_unclamp_stencil_2 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_function("hcompute_grad_y_unclamp_stencil_2");
  hcompute_grad_y_unclamp_stencil_2->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 1)", "((grad_y_unclamp_s1_x_x*2) + -3)");
  hcompute_grad_y_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 1)", "((grad_y_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_y_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 1)", "((grad_y_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + -1)", "((grad_y_unclamp_s1_x_x*2) + -3)");
  hcompute_grad_y_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + -1)", "((grad_y_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_y_unclamp_stencil_2->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + -1)", "((grad_y_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_y_unclamp_stencil_2->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + -2)");

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y) = ((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + -1)))
  auto hcompute_grad_y_unclamp_stencil_3 = grad_y_unclamp_s1_x_x->add_op("op_hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_function("hcompute_grad_y_unclamp_stencil_3");
  hcompute_grad_y_unclamp_stencil_3->add_load("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 1)", "((grad_y_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 1)", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + 1)", "((grad_y_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + -1)", "((grad_y_unclamp_s1_x_x*2) + -2)");
  hcompute_grad_y_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + -1)", "((grad_y_unclamp_s1_x_x*2) + -1)");
  hcompute_grad_y_unclamp_stencil_3->add_load("padded16_global_wrapper_stencil", "(grad_y_unclamp_s1_y + -1)", "(grad_y_unclamp_s1_x_x*2)");
  hcompute_grad_y_unclamp_stencil_3->add_store("grad_y_unclamp_stencil", "grad_y_unclamp_s1_y", "((grad_y_unclamp_s1_x_x*2) + -1)");

//consuming grad_y_unclamp.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x_x = lxy_s0_y->add_loop("lxy_s0_x_x", 0, 31);

//store is: lxy.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + -2)");
  hcompute_lxy_stencil->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + -2)");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + -2)");

//store is: lxy.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lxy_stencil_1 = lxy_s0_x_x->add_op("op_hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_function("hcompute_lxy_stencil_1");
  hcompute_lxy_stencil_1->add_load("grad_x_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + -1)");
  hcompute_lxy_stencil_1->add_load("grad_y_unclamp_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + -1)");
  hcompute_lxy_stencil_1->add_store("lxy_stencil", "lxy_s0_y", "((lxy_s0_x_x*2) + -1)");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x_x = lgxy_s0_y->add_loop("lgxy_s0_x_x", 0, 30);

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + -1), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "((lgxy_s0_x_x*2) + -1)");

//store is: lgxy.stencil((lgxy_s0_x_x*2), lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil_1 = lgxy_s0_x_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s0_y", "(lgxy_s0_x_x*2)");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x_x = lgxy_s1_y->add_loop("lgxy_s1_x_x", 0, 30);

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + -2), (lgxy_s1_y + -1)) + (lgxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + -2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_2 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_function("hcompute_lgxy_stencil_2");
  hcompute_lgxy_stencil_2->add_load("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "((lgxy_s1_x_x*2) + -2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + -2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + -2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_2->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_2->add_store("lgxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + -1)");

//store is: lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + -1)) + (lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_3 = lgxy_s1_x_x->add_op("op_hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_function("hcompute_lgxy_stencil_3");
  hcompute_lgxy_stencil_3->add_load("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "lgxy_s1_y", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + -1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "((lgxy_s1_x_x*2) + 1)");
  hcompute_lgxy_stencil_3->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x_x*2)");
  hcompute_lgxy_stencil_3->add_store("lgxy_stencil", "lgxy_s1_y", "(lgxy_s1_x_x*2)");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x_x = lyy_s0_y->add_loop("lyy_s0_x_x", 0, 31);

//store is: lyy.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "((lyy_s0_x_x*2) + -2)");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "((lyy_s0_x_x*2) + -2)");

//store is: lyy.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
  auto hcompute_lyy_stencil_1 = lyy_s0_x_x->add_op("op_hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_function("hcompute_lyy_stencil_1");
  hcompute_lyy_stencil_1->add_load("grad_y_unclamp_stencil", "lyy_s0_y", "((lyy_s0_x_x*2) + -1)");
  hcompute_lyy_stencil_1->add_store("lyy_stencil", "lyy_s0_y", "((lyy_s0_x_x*2) + -1)");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x_x = lgyy_s0_y->add_loop("lgyy_s0_x_x", 0, 30);

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + -1), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "((lgyy_s0_x_x*2) + -1)");

//store is: lgyy.stencil((lgyy_s0_x_x*2), lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil_1 = lgyy_s0_x_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s0_y", "(lgyy_s0_x_x*2)");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x_x = lgyy_s1_y->add_loop("lgyy_s1_x_x", 0, 30);

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + -2), (lgyy_s1_y + -1)) + (lgyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + -2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_2 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_function("hcompute_lgyy_stencil_2");
  hcompute_lgyy_stencil_2->add_load("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "((lgyy_s1_x_x*2) + -2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + -2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + -2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_2->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_2->add_store("lgyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + -1)");

//store is: lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + -1)) + (lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_3 = lgyy_s1_x_x->add_op("op_hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_function("hcompute_lgyy_stencil_3");
  hcompute_lgyy_stencil_3->add_load("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "lgyy_s1_y", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + -1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "((lgyy_s1_x_x*2) + 1)");
  hcompute_lgyy_stencil_3->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x_x*2)");
  hcompute_lgyy_stencil_3->add_store("lgyy_stencil", "lgyy_s1_y", "(lgyy_s1_x_x*2)");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -1, 59);
  auto cim_s0_x_x = cim_s0_y->add_loop("cim_s0_x_x", 0, 30);

//store is: cim.stencil(((cim_s0_x_x*2) + -1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "((cim_s0_x_x*2) + -1)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "((cim_s0_x_x*2) + -1)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "((cim_s0_x_x*2) + -1)");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "((cim_s0_x_x*2) + -1)");

//store is: cim.stencil((cim_s0_x_x*2), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil_1 = cim_s0_x_x->add_op("op_hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_function("hcompute_cim_stencil_1");
  hcompute_cim_stencil_1->add_load("lgxx_stencil", "cim_s0_y", "(cim_s0_x_x*2)");
  hcompute_cim_stencil_1->add_load("lgxy_stencil", "cim_s0_y", "(cim_s0_x_x*2)");
  hcompute_cim_stencil_1->add_load("lgyy_stencil", "cim_s0_y", "(cim_s0_x_x*2)");
  hcompute_cim_stencil_1->add_store("cim_stencil", "cim_s0_y", "(cim_s0_x_x*2)");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", 0, 58);
  auto cim_output_s0_x_x = cim_output_s0_y->add_loop("cim_output_s0_x_x", 0, 29);

//store is: cim_output.stencil((cim_output_s0_x_x*2), cim_output_s0_y) = int16(select((((((((((cim.stencil(((cim_output_s0_x_x*2) + -1), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y)) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + -1), cim_output_s0_y) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + -1), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && ((int16)1 <= cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "((cim_output_s0_x_x*2) + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x_x*2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x_x*2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "((cim_output_s0_x_x*2) + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "((cim_output_s0_x_x*2) + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "((cim_output_s0_x_x*2) + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "((cim_output_s0_x_x*2) + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x_x*2)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "((cim_output_s0_x_x*2) + 1)");
  prg.buffer_port_widths["cim_output_stencil"] = 16;
  hcompute_cim_output_stencil->add_store("cim_output_stencil", "cim_output_s0_y", "(cim_output_s0_x_x*2)");

//store is: cim_output.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y)) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), cim_output_s0_y) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && ((int16)1 <= cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil_1 = cim_output_s0_x_x->add_op("op_hcompute_cim_output_stencil_1");
  hcompute_cim_output_stencil_1->add_function("hcompute_cim_output_stencil_1");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x_x*2)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "cim_output_s0_y", "((cim_output_s0_x_x*2) + 1)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "(cim_output_s0_y + -1)", "((cim_output_s0_x_x*2) + 1)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "(cim_output_s0_y + -1)", "((cim_output_s0_x_x*2) + 2)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x_x*2)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "cim_output_s0_y", "((cim_output_s0_x_x*2) + 2)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x_x*2)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "(cim_output_s0_y + 1)", "((cim_output_s0_x_x*2) + 1)");
  hcompute_cim_output_stencil_1->add_load("cim_stencil", "(cim_output_s0_y + 1)", "((cim_output_s0_x_x*2) + 2)");
  hcompute_cim_output_stencil_1->add_store("cim_output_stencil", "cim_output_s0_y", "((cim_output_s0_x_x*2) + 1)");

//consuming cim_output.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi_xi", 0, 29);

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = cim_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi_xi*2)");

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = cim_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("cim_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "((hw_output_s0_x_xi_xi*2) + 1)");

  return prg;
}

prog harris_sch7_bigtile() {
  prog prg;
  prg.compute_unit_file = "harris_sch7_bigtile_compute.h";
  prg.name = "harris_sch7_bigtile";

// Stencil<int16_t, 128, 128> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 122, 122> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -67, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -67, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -66, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -66, 60);
////producing grad_x_unclamp.stencil

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((((grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1)))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x_unclamp.stencil

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -66, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -66, 60);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -65, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -65, 59);

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -65, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -65, 59);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -66, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -66, 60);
////producing grad_y_unclamp.stencil

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((((grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1)))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y_unclamp.stencil

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -66, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -66, 60);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -65, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -65, 59);

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -65, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -65, 59);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -66, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -66, 60);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -65, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -65, 59);

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -65, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -65, 59);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
////producing cim.stencil
  auto cim_s0_y = prg.add_loop("cim_s0_y", -65, 59);
  auto cim_s0_x = cim_s0_y->add_loop("cim_s0_x", -65, 59);

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgxy_stencil", "cim_s0_y", "cim_s0_x");
  hcompute_cim_stencil->add_load("lgyy_stencil", "cim_s0_y", "cim_s0_x");
  prg.buffer_port_widths["cim_stencil"] = 16;
  hcompute_cim_stencil->add_store("cim_stencil", "cim_s0_y", "cim_s0_x");

//consuming cim.stencil
////producing cim_output.stencil
  auto cim_output_s0_y = prg.add_loop("cim_output_s0_y", -64, 58);
  auto cim_output_s0_x = cim_output_s0_y->add_loop("cim_output_s0_x", -64, 58);

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
  auto hcompute_cim_output_stencil = cim_output_s0_x->add_op("op_hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_function("hcompute_cim_output_stencil");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + -1)", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "cim_output_s0_y", "(cim_output_s0_x + 1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + -1)");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "cim_output_s0_x");
  hcompute_cim_output_stencil->add_load("cim_stencil", "(cim_output_s0_y + 1)", "(cim_output_s0_x + 1)");
  prg.buffer_port_widths["cim_output_stencil"] = 16;
  hcompute_cim_output_stencil->add_store("cim_output_stencil", "cim_output_s0_y", "cim_output_s0_x");

//consuming cim_output.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 122);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 122);

//store is: hw_output.stencil((hw_output_s0_x_xi + -64), (hw_output_s0_y_yi + -64)) = cim_output.stencil((hw_output_s0_x_xi + -64), (hw_output_s0_y_yi + -64))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "(hw_output_s0_y_yi + -64)", "(hw_output_s0_x_xi + -64)");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "(hw_output_s0_y_yi + -64)", "(hw_output_s0_x_xi + -64)");

  return prg;
}

prog harris_sch8_endcim() {
  prog prg;
  prg.compute_unit_file = "harris_sch8_endcim_compute.h";
  prg.name = "harris_sch8_endcim";

// Stencil<int16_t, 64, 64> &padded16_stencil = arg_0;
  prg.add_input("padded16_stencil");
  prg.buffer_port_widths["padded16_stencil"] = 16;
// Stencil<int16_t, 60, 60> &cim_stencil = arg_1;
  prg.add_output("cim_stencil");
  prg.buffer_port_widths["cim_stencil"] = 16;

////producing padded16_global_wrapper.stencil
  auto padded16_global_wrapper_s0_y = prg.add_loop("padded16_global_wrapper_s0_y", -3, 61);
  auto padded16_global_wrapper_s0_x = padded16_global_wrapper_s0_y->add_loop("padded16_global_wrapper_s0_x", -3, 61);

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
  auto hcompute_padded16_global_wrapper_stencil = padded16_global_wrapper_s0_x->add_op("op_hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_function("hcompute_padded16_global_wrapper_stencil");
  hcompute_padded16_global_wrapper_stencil->add_load("padded16_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");
  prg.buffer_port_widths["padded16_global_wrapper_stencil"] = 16;
  hcompute_padded16_global_wrapper_stencil->add_store("padded16_global_wrapper_stencil", "padded16_global_wrapper_s0_y", "padded16_global_wrapper_s0_x");

//consuming padded16_global_wrapper.stencil
////producing grad_x.stencil
  auto grad_x_s0_y = prg.add_loop("grad_x_s0_y", -2, 60);
  auto grad_x_s0_x = grad_x_s0_y->add_loop("grad_x_s0_x", -2, 60);
////producing grad_x_unclamp.stencil

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
  auto hcompute_grad_x_unclamp_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil");
  hcompute_grad_x_unclamp_stencil->add_function("hcompute_grad_x_unclamp_stencil");
  prg.buffer_port_widths["grad_x_unclamp_stencil"] = 16;
  hcompute_grad_x_unclamp_stencil->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((((grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1)))
  auto hcompute_grad_x_unclamp_stencil_1 = grad_x_s0_x->add_op("op_hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_function("hcompute_grad_x_unclamp_stencil_1");
  hcompute_grad_x_unclamp_stencil_1->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + 1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + -1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "grad_x_s0_y", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_x_s0_y + 1)", "(grad_x_s0_x + -1)");
  hcompute_grad_x_unclamp_stencil_1->add_store("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x_unclamp.stencil

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_x_stencil = grad_x_s0_x->add_op("op_hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_function("hcompute_grad_x_stencil");
  hcompute_grad_x_stencil->add_load("grad_x_unclamp_stencil", "grad_x_s0_y", "grad_x_s0_x");
  prg.buffer_port_widths["grad_x_stencil"] = 16;
  hcompute_grad_x_stencil->add_store("grad_x_stencil", "grad_x_s0_y", "grad_x_s0_x");

//consuming grad_x.stencil
////producing lxx.stencil
  auto lxx_s0_y = prg.add_loop("lxx_s0_y", -2, 60);
  auto lxx_s0_x = lxx_s0_y->add_loop("lxx_s0_x", -2, 60);

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
  auto hcompute_lxx_stencil = lxx_s0_x->add_op("op_hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_y", "lxx_s0_x");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_y", "lxx_s0_x");

//consuming lxx.stencil
////producing lgxx.stencil
  auto lgxx_s0_y = prg.add_loop("lgxx_s0_y", -1, 59);
  auto lgxx_s0_x = lgxx_s0_y->add_loop("lgxx_s0_x", -1, 59);

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
  auto hcompute_lgxx_stencil = lgxx_s0_x->add_op("op_hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_y", "lgxx_s0_x");
  auto lgxx_s1_y = prg.add_loop("lgxx_s1_y", -1, 59);
  auto lgxx_s1_x = lgxx_s1_y->add_loop("lgxx_s1_x", -1, 59);

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = lgxx_s1_x->add_op("op_hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + -1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "lgxx_s1_y", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + -1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "(lgxx_s1_x + 1)");
  hcompute_lgxx_stencil_1->add_load("lxx_stencil", "(lgxx_s1_y + 1)", "lgxx_s1_x");
  hcompute_lgxx_stencil_1->add_store("lgxx_stencil", "lgxx_s1_y", "lgxx_s1_x");

//consuming lgxx.stencil
////producing grad_y.stencil
  auto grad_y_s0_y = prg.add_loop("grad_y_s0_y", -2, 60);
  auto grad_y_s0_x = grad_y_s0_y->add_loop("grad_y_s0_x", -2, 60);
////producing grad_y_unclamp.stencil

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
  auto hcompute_grad_y_unclamp_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil");
  hcompute_grad_y_unclamp_stencil->add_function("hcompute_grad_y_unclamp_stencil");
  prg.buffer_port_widths["grad_y_unclamp_stencil"] = 16;
  hcompute_grad_y_unclamp_stencil->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((((grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1)))
  auto hcompute_grad_y_unclamp_stencil_1 = grad_y_s0_x->add_op("op_hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_function("hcompute_grad_y_unclamp_stencil_1");
  hcompute_grad_y_unclamp_stencil_1->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + -1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + -1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "(grad_y_s0_x + 1)");
  hcompute_grad_y_unclamp_stencil_1->add_load("padded16_global_wrapper_stencil", "(grad_y_s0_y + 1)", "grad_y_s0_x");
  hcompute_grad_y_unclamp_stencil_1->add_store("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y_unclamp.stencil

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
  auto hcompute_grad_y_stencil = grad_y_s0_x->add_op("op_hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_function("hcompute_grad_y_stencil");
  hcompute_grad_y_stencil->add_load("grad_y_unclamp_stencil", "grad_y_s0_y", "grad_y_s0_x");
  prg.buffer_port_widths["grad_y_stencil"] = 16;
  hcompute_grad_y_stencil->add_store("grad_y_stencil", "grad_y_s0_y", "grad_y_s0_x");

//consuming grad_y.stencil
////producing lxy.stencil
  auto lxy_s0_y = prg.add_loop("lxy_s0_y", -2, 60);
  auto lxy_s0_x = lxy_s0_y->add_loop("lxy_s0_x", -2, 60);

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
  auto hcompute_lxy_stencil = lxy_s0_x->add_op("op_hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_y", "lxy_s0_x");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_y", "lxy_s0_x");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_y", "lxy_s0_x");

//consuming lxy.stencil
////producing lgxy.stencil
  auto lgxy_s0_y = prg.add_loop("lgxy_s0_y", -1, 59);
  auto lgxy_s0_x = lgxy_s0_y->add_loop("lgxy_s0_x", -1, 59);

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
  auto hcompute_lgxy_stencil = lgxy_s0_x->add_op("op_hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_y", "lgxy_s0_x");
  auto lgxy_s1_y = prg.add_loop("lgxy_s1_y", -1, 59);
  auto lgxy_s1_x = lgxy_s1_y->add_loop("lgxy_s1_x", -1, 59);

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = lgxy_s1_x->add_op("op_hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + -1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "lgxy_s1_y", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + -1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "(lgxy_s1_x + 1)");
  hcompute_lgxy_stencil_1->add_load("lxy_stencil", "(lgxy_s1_y + 1)", "lgxy_s1_x");
  hcompute_lgxy_stencil_1->add_store("lgxy_stencil", "lgxy_s1_y", "lgxy_s1_x");

//consuming lgxy.stencil
////producing lyy.stencil
  auto lyy_s0_y = prg.add_loop("lyy_s0_y", -2, 60);
  auto lyy_s0_x = lyy_s0_y->add_loop("lyy_s0_x", -2, 60);

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
  auto hcompute_lyy_stencil = lyy_s0_x->add_op("op_hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_y", "lyy_s0_x");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_y", "lyy_s0_x");

//consuming lyy.stencil
////producing lgyy.stencil
  auto lgyy_s0_y = prg.add_loop("lgyy_s0_y", -1, 59);
  auto lgyy_s0_x = lgyy_s0_y->add_loop("lgyy_s0_x", -1, 59);

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
  auto hcompute_lgyy_stencil = lgyy_s0_x->add_op("op_hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_y", "lgyy_s0_x");
  auto lgyy_s1_y = prg.add_loop("lgyy_s1_y", -1, 59);
  auto lgyy_s1_x = lgyy_s1_y->add_loop("lgyy_s1_x", -1, 59);

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = lgyy_s1_x->add_op("op_hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + -1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "lgyy_s1_y", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + -1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "(lgyy_s1_x + 1)");
  hcompute_lgyy_stencil_1->add_load("lyy_stencil", "(lgyy_s1_y + 1)", "lgyy_s1_x");
  hcompute_lgyy_stencil_1->add_store("lgyy_stencil", "lgyy_s1_y", "lgyy_s1_x");

//consuming lgyy.stencil
  auto cim_s0_y_yi = prg.add_loop("cim_s0_y_yi", 0, 60);
  auto cim_s0_x_xi = cim_s0_y_yi->add_loop("cim_s0_x_xi", 0, 60);

//store is: cim.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1)) = ((((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)))/(int16)16))
  auto hcompute_cim_stencil = cim_s0_x_xi->add_op("op_hcompute_cim_stencil");
  hcompute_cim_stencil->add_function("hcompute_cim_stencil");
  hcompute_cim_stencil->add_load("lgxx_stencil", "(cim_s0_y_yi + -1)", "(cim_s0_x_xi + -1)");
  hcompute_cim_stencil->add_load("lgxy_stencil", "(cim_s0_y_yi + -1)", "(cim_s0_x_xi + -1)");
  hcompute_cim_stencil->add_load("lgyy_stencil", "(cim_s0_y_yi + -1)", "(cim_s0_x_xi + -1)");
  hcompute_cim_stencil->add_store("cim_stencil", "(cim_s0_y_yi + -1)", "(cim_s0_x_xi + -1)");

  return prg;
}

prog three_level_memory_two() {
  prog prg;
  prg.compute_unit_file = "three_level_memory_compute.h";
  prg.name = "three_level_memory";

// Stencil<uint16_t, 258, 258> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint8_t, 256, 256> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 8;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 258);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 258);

//store is: input_gb.stencil(input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_x->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x");
  prg.buffer_port_widths["input_gb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_gb_stencil", "input_gb_s0_y", "input_gb_s0_x");

//consuming input_gb.stencil
////producing output_gb.stencil
  auto output_gb_s0_y_y_gb = prg.add_loop("output_gb_s0_y_y_gb", 0, 4);
  auto output_gb_s0_x_x_gb = output_gb_s0_y_y_gb->add_loop("output_gb_s0_x_x_gb", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_gb_s0_x_x_gb->add_loop("hw_input_s0_y", 0, 66);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 66);

//store is: hw_input.stencil(((output_gb_s0_x_x_gb*64) + hw_input_s0_x), ((output_gb_s0_y_y_gb*64) + hw_input_s0_y)) = input_gb.stencil(((output_gb_s0_x_x_gb*64) + hw_input_s0_x), ((output_gb_s0_y_y_gb*64) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_gb_stencil", "((output_gb_s0_y_y_gb*64) + hw_input_s0_y)", "((output_gb_s0_x_x_gb*64) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + hw_input_s0_y)", "((output_gb_s0_x_x_gb*64) + hw_input_s0_x)");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_gb_s0_x_x_gb->add_loop("conv_s0_y", 0, 64);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 64);

//store is: conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s0_x), ((output_gb_s0_y_y_gb*64) + conv_s0_y)) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s0_y)", "((output_gb_s0_x_x_gb*64) + conv_s0_x)");
  auto conv_s1_y = output_gb_s0_x_x_gb->add_loop("conv_s1_y", 0, 64);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 64);

//store is: conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) = (hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + (hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)) + (hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)) + hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");

//consuming conv.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_x_x_gb->add_loop("output_gb_s0_y_y_cgra", 0, 64);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 64);

//store is: output_gb.stencil((output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64)), (output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64))) = conv.stencil((output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64)), (output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64)))
  auto hcompute_output_gb_stencil = output_gb_s0_x_x_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("conv_stencil", "(output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64))", "(output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64))");
  prg.buffer_port_widths["output_gb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_gb_stencil", "(output_gb_s0_y_y_cgra + (output_gb_s0_y_y_gb*64))", "(output_gb_s0_x_x_cgra + (output_gb_s0_x_x_gb*64))");

//consuming output_gb.stencil
  auto hw_output_s0_y_y_host_1 = prg.add_loop("hw_output_s0_y_y_host_1", 0, 256);
  auto hw_output_s0_x_x_host_1 = hw_output_s0_y_y_host_1->add_loop("hw_output_s0_x_x_host_1", 0, 256);

//store is: hw_output.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1) = uint8(output_gb.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1))
  auto hcompute_hw_output_stencil = hw_output_s0_x_x_host_1->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "hw_output_s0_y_y_host_1", "hw_output_s0_x_x_host_1");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_y_host_1", "hw_output_s0_x_x_host_1");

  return prg;
}

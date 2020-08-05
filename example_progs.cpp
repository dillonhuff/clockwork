#include "example_progs.h"

prog brighten_blur() {
  prog prg;
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.name = "brighten_blur";
  prg.add_input("off_chip_input");
  prg.add_output("off_chip_output");
  prg.buffer_port_widths["off_chip_input"] = 16;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["brightened"] = 16;
  prg.buffer_port_widths["blurred"] = 16;
  prg.buffer_port_widths["off_chip_output"] = 16;

  int input_image_rows = 256;
  int input_image_cols = 256;

  // Actually you dont have to fill these
  // buffer bounds in. I am just adding them for completeness.
  prg.buffer_bounds["off_chip_input"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["in"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["brightened"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["blurred"] = {input_image_cols - 2, input_image_rows - 2};
  prg.buffer_bounds["off_chip_output"] = {input_image_cols - 2, input_image_rows - 2};

  auto p = prg.add_nest("po", 0, input_image_rows, "pi", 0, input_image_cols);
  auto write = p->add_op("load_image_from_off_chip");
  write->add_load("off_chip_input", "pi, po");
  write->add_store("in", "pi, po");

  auto br = prg.add_nest("bo", 0, input_image_rows, "bi", 0, input_image_cols);
  auto scale = br->add_op("brighten_image");
  scale->add_function("multiply_by_two");
  scale->add_load("in", "bi, bo");
  scale->add_store("brightened", "bi, bo");

  auto blr = prg.add_nest("y", 0 , input_image_rows, "x", 0, input_image_cols);
  auto blur = blr->add_op("blur_image");
  blur->add_function("inc");
  blur->add_load("brightened", "x","y");
  blur->add_store("blurred", "x","y");

  auto write_out = prg.add_nest("m", 0, input_image_rows, "n", 0, input_image_cols);
  auto write_op = write_out->add_op("write_blurred_off_chip");
  write_op->add_load("blurred", "n, m");
  write_op->add_store("off_chip_output", "n, m");

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
  auto loop_padded16_s0_y = prg.add_loop("padded16_s0_x", -3, 64);
  auto loop_padded16_s0_x = loop_padded16_s0_y->add_loop("padded16_s0_y", -3, 64);

//store is: padded16.stencil(padded16.s0.x, padded16.s0.y) = hw_input_copy.stencil(padded16.s0.x, padded16.s0.y)
  auto hcompute_padded16_stencil = loop_padded16_s0_x->add_op("hcompute_padded16_stencil");
  hcompute_padded16_stencil->add_function("hcompute_padded16_stencil");
  hcompute_padded16_stencil->add_load("hw_input_copy_stencil", "padded16_s0_x", "padded16_s0_y");
  prg.buffer_port_widths["padded16_stencil"] = 16;
  hcompute_padded16_stencil->add_store("padded16_stencil", "padded16_s0_x", "padded16_s0_y");
////producing grad_x.stencil

//consuming padded16.stencil
  auto loop_grad_x_s0_y = prg.add_loop("grad_x_s0_x", -2, 62);
  auto loop_grad_x_s0_x = loop_grad_x_s0_y->add_loop("grad_x_s0_y", -2, 62);

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
  auto loop_lxx_s0_y = prg.add_loop("lxx_s0_x", -2, 62);
  auto loop_lxx_s0_x = loop_lxx_s0_y->add_loop("lxx_s0_y", -2, 62);

//store is: lxx.stencil(lxx.s0.x, lxx.s0.y) = ((int32(grad_x.stencil(lxx.s0.x, lxx.s0.y))*int32(grad_x.stencil(lxx.s0.x, lxx.s0.y)))/128)
  auto hcompute_lxx_stencil = loop_lxx_s0_x->add_op("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_function("hcompute_lxx_stencil");
  hcompute_lxx_stencil->add_load("grad_x_stencil", "lxx_s0_x", "lxx_s0_y");
  prg.buffer_port_widths["lxx_stencil"] = 16;
  hcompute_lxx_stencil->add_store("lxx_stencil", "lxx_s0_x", "lxx_s0_y");
////producing lgxx.stencil
  auto loop_lgxx_s0_y = prg.add_loop("lgxx_s0_x", -1, 60);
  auto loop_lgxx_s0_x = loop_lgxx_s0_y->add_loop("lgxx_s0_y", -1, 60);

//store is: lgxx.stencil(lgxx.s0.x, lgxx.s0.y) = 0
  auto hcompute_lgxx_stencil = loop_lgxx_s0_x->add_op("hcompute_lgxx_stencil");
  hcompute_lgxx_stencil->add_function("hcompute_lgxx_stencil");
  prg.buffer_port_widths["lgxx_stencil"] = 16;
  hcompute_lgxx_stencil->add_store("lgxx_stencil", "lgxx_s0_x", "lgxx_s0_y");

//consuming lxx.stencil
  auto loop_lgxx_s1_y = prg.add_loop("lgxx_s1_x", -1, 60);
  auto loop_lgxx_s1_x = loop_lgxx_s1_y->add_loop("lgxx_s1_y", -1, 60);

//store is: lgxx.stencil(lgxx.s1.x, lgxx.s1.y) = (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + -1)) + (lgxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + -1), lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + 1), lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + 1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + 1)) + lxx.stencil(lgxx.s1.x, (lgxx.s1.y + 1)))))))))))
  auto hcompute_lgxx_stencil_1 = loop_lgxx_s1_x->add_op("hcompute_lgxx_stencil_1");
  hcompute_lgxx_stencil_1->add_function("hcompute_lgxx_stencil_1");
  //hcompute_lgxx_stencil_1->add_load("lgxx_stencil", "lgxx_s1_x", "lgxx_s1_y");
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
  auto loop_grad_y_s0_y = prg.add_loop("grad_y_s0_x", -2, 62);
  auto loop_grad_y_s0_x = loop_grad_y_s0_y->add_loop("grad_y_s0_y", -2, 62);

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
  auto loop_lxy_s0_y = prg.add_loop("lxy_s0_x", -2, 62);
  auto loop_lxy_s0_x = loop_lxy_s0_y->add_loop("lxy_s0_y", -2, 62);

//store is: lxy.stencil(lxy.s0.x, lxy.s0.y) = ((int32(grad_x.stencil(lxy.s0.x, lxy.s0.y))*int32(grad_y.stencil(lxy.s0.x, lxy.s0.y)))/128)
  auto hcompute_lxy_stencil = loop_lxy_s0_x->add_op("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_function("hcompute_lxy_stencil");
  hcompute_lxy_stencil->add_load("grad_x_stencil", "lxy_s0_x", "lxy_s0_y");
  hcompute_lxy_stencil->add_load("grad_y_stencil", "lxy_s0_x", "lxy_s0_y");
  prg.buffer_port_widths["lxy_stencil"] = 16;
  hcompute_lxy_stencil->add_store("lxy_stencil", "lxy_s0_x", "lxy_s0_y");
////producing lgxy.stencil
  auto loop_lgxy_s0_y = prg.add_loop("lgxy_s0_x", -1, 60);
  auto loop_lgxy_s0_x = loop_lgxy_s0_y->add_loop("lgxy_s0_y", -1, 60);

//store is: lgxy.stencil(lgxy.s0.x, lgxy.s0.y) = 0
  auto hcompute_lgxy_stencil = loop_lgxy_s0_x->add_op("hcompute_lgxy_stencil");
  hcompute_lgxy_stencil->add_function("hcompute_lgxy_stencil");
  prg.buffer_port_widths["lgxy_stencil"] = 16;
  hcompute_lgxy_stencil->add_store("lgxy_stencil", "lgxy_s0_x", "lgxy_s0_y");

//consuming lxy.stencil
  auto loop_lgxy_s1_y = prg.add_loop("lgxy_s1_x", -1, 60);
  auto loop_lgxy_s1_x = loop_lgxy_s1_y->add_loop("lgxy_s1_y", -1, 60);

//store is: lgxy.stencil(lgxy.s1.x, lgxy.s1.y) = (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + -1)) + (lgxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + -1), lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + 1), lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + 1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + 1)) + lxy.stencil(lgxy.s1.x, (lgxy.s1.y + 1)))))))))))
  auto hcompute_lgxy_stencil_1 = loop_lgxy_s1_x->add_op("hcompute_lgxy_stencil_1");
  hcompute_lgxy_stencil_1->add_function("hcompute_lgxy_stencil_1");
  //hcompute_lgxy_stencil_1->add_load("lgxy_stencil", "lgxy_s1_x", "lgxy_s1_y");
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
  auto loop_lyy_s0_y = prg.add_loop("lyy_s0_x", -2, 62);
  auto loop_lyy_s0_x = loop_lyy_s0_y->add_loop("lyy_s0_y", -2, 62);

//store is: lyy.stencil(lyy.s0.x, lyy.s0.y) = ((int32(grad_y.stencil(lyy.s0.x, lyy.s0.y))*int32(grad_y.stencil(lyy.s0.x, lyy.s0.y)))/128)
  auto hcompute_lyy_stencil = loop_lyy_s0_x->add_op("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_function("hcompute_lyy_stencil");
  hcompute_lyy_stencil->add_load("grad_y_stencil", "lyy_s0_x", "lyy_s0_y");
  prg.buffer_port_widths["lyy_stencil"] = 16;
  hcompute_lyy_stencil->add_store("lyy_stencil", "lyy_s0_x", "lyy_s0_y");
////producing lgyy.stencil
  auto loop_lgyy_s0_y = prg.add_loop("lgyy_s0_x", -1, 60);
  auto loop_lgyy_s0_x = loop_lgyy_s0_y->add_loop("lgyy_s0_y", -1, 60);

//store is: lgyy.stencil(lgyy.s0.x, lgyy.s0.y) = 0
  auto hcompute_lgyy_stencil = loop_lgyy_s0_x->add_op("hcompute_lgyy_stencil");
  hcompute_lgyy_stencil->add_function("hcompute_lgyy_stencil");
  prg.buffer_port_widths["lgyy_stencil"] = 16;
  hcompute_lgyy_stencil->add_store("lgyy_stencil", "lgyy_s0_x", "lgyy_s0_y");

//consuming lyy.stencil
  auto loop_lgyy_s1_y = prg.add_loop("lgyy_s1_x", -1, 60);
  auto loop_lgyy_s1_x = loop_lgyy_s1_y->add_loop("lgyy_s1_y", -1, 60);

//store is: lgyy.stencil(lgyy.s1.x, lgyy.s1.y) = (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + -1)) + (lgyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + -1), lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + 1), lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + 1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + 1)) + lyy.stencil(lgyy.s1.x, (lgyy.s1.y + 1)))))))))))
  auto hcompute_lgyy_stencil_1 = loop_lgyy_s1_x->add_op("hcompute_lgyy_stencil_1");
  hcompute_lgyy_stencil_1->add_function("hcompute_lgyy_stencil_1");
  //hcompute_lgyy_stencil_1->add_load("lgyy_stencil", "lgyy_s1_x", "lgyy_s1_y");
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
  auto loop_cim_s0_y = prg.add_loop("cim_s0_x", -1, 60);
  auto loop_cim_s0_x = loop_cim_s0_y->add_loop("cim_s0_y", -1, 60);

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
  auto loop_cim_output_s0_y = prg.add_loop("cim_output_s0_x", 0, 58);
  auto loop_cim_output_s0_x = loop_cim_output_s0_y->add_loop("cim_output_s0_y", 0, 58);

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
  auto loop_hw_output_s0_y_yi = prg.add_loop("hw_output_s0_x_xi", 0, 58);
  auto loop_hw_output_s0_x_xi = loop_hw_output_s0_y_yi->add_loop("hw_output_s0_y_yi", 0, 58);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = cim_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi)
  auto hcompute_hw_output_stencil = loop_hw_output_s0_x_xi->add_op("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("cim_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

prog unet_conv_3_3() {
  prog prg;
  prg.compute_unit_file = "unet_conv_3_3_compute.h";
  prg.name = "conv_3_3";

// Stencil<uint16_t, 2, 16, 16> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint16_t, 2, 4, 3, 3> &kernel_copy_stencil = arg_1;
  prg.add_input("kernel_copy_stencil");
  prg.buffer_port_widths["kernel_copy_stencil"] = 16;
// Stencil<void *> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;


//consuming kernel_copy.stencil

//consuming input_copy.stencil
////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 16);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 16);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 2);

//store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
////producing hw_kernel.stencil
  auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 4);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 2);

//store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 14);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 14);
  auto conv_s0_w = conv_s0_x->add_loop("conv_s0_w", 0, 4);

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_w->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y", "conv_s0_w");

//consuming hw_kernel.stencil

//consuming hw_input.stencil
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_r_z = conv_s1_r_x->add_loop("conv_s1_r_z", 0, 2);
  auto conv_s1_w = conv_s1_r_z->add_loop("conv_s1_w", 0, 4);
  auto conv_s1_y_y = conv_s1_w->add_loop("conv_s1_y_y", 0, 5);
  auto conv_s1_x_x = conv_s1_y_y->add_loop("conv_s1_x_x", 0, 5);

//store is: conv.stencil((conv.s1.x.x*3), (conv.s1.y.y*3), conv.s1.w) = (conv.stencil((conv.s1.x.x*3), (conv.s1.y.y*3), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, ((conv.s1.x.x*3) + conv.s1.r$x), (conv.s1.r$y + (conv.s1.y.y*3)))))
  auto hcompute_conv_stencil_1 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "(conv_s1_x_x*3)", "(conv_s1_y_y*3)", "conv_s1_w");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_r_z", "((conv_s1_x_x*3) + conv_s1_r_x)", "(conv_s1_r_y + (conv_s1_y_y*3))");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_store("conv_stencil", "(conv_s1_x_x*3)", "(conv_s1_y_y*3)", "conv_s1_w");

//store is: conv.stencil(((conv.s1.x.x*3) + 1), (conv.s1.y.y*3), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 1), (conv.s1.y.y*3), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 1), (conv.s1.r$y + (conv.s1.y.y*3)))))
  auto hcompute_conv_stencil_2 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_load("conv_stencil", "((conv_s1_x_x*3) + 1)", "(conv_s1_y_y*3)", "conv_s1_w");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "conv_s1_r_z", "(((conv_s1_x_x*3) + conv_s1_r_x) + 1)", "(conv_s1_r_y + (conv_s1_y_y*3))");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_store("conv_stencil", "((conv_s1_x_x*3) + 1)", "(conv_s1_y_y*3)", "conv_s1_w");

//store is: conv.stencil(((conv.s1.x.x*3) + 2), (conv.s1.y.y*3), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 2), (conv.s1.y.y*3), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 2), (conv.s1.r$y + (conv.s1.y.y*3)))))
  auto hcompute_conv_stencil_3 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "((conv_s1_x_x*3) + 2)", "(conv_s1_y_y*3)", "conv_s1_w");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "conv_s1_r_z", "(((conv_s1_x_x*3) + conv_s1_r_x) + 2)", "(conv_s1_r_y + (conv_s1_y_y*3))");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_store("conv_stencil", "((conv_s1_x_x*3) + 2)", "(conv_s1_y_y*3)", "conv_s1_w");
  auto conv_s1_x_x_1 = conv_s1_y_y->add_loop("conv_s1_x_x", 0, 5);

//store is: conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 1), conv.s1.w) = (conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 1), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, ((conv.s1.x.x*3) + conv.s1.r$x), ((conv.s1.r$y + (conv.s1.y.y*3)) + 1))))
  auto hcompute_conv_stencil_4 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "(conv_s1_x_x*3)", "((conv_s1_y_y*3) + 1)", "conv_s1_w");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "conv_s1_r_z", "((conv_s1_x_x*3) + conv_s1_r_x)", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_store("conv_stencil", "(conv_s1_x_x*3)", "((conv_s1_y_y*3) + 1)", "conv_s1_w");

//store is: conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 1), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 1), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 1), ((conv.s1.r$y + (conv.s1.y.y*3)) + 1))))
  auto hcompute_conv_stencil_5 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "((conv_s1_x_x*3) + 1)", "((conv_s1_y_y*3) + 1)", "conv_s1_w");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "conv_s1_r_z", "(((conv_s1_x_x*3) + conv_s1_r_x) + 1)", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_store("conv_stencil", "((conv_s1_x_x*3) + 1)", "((conv_s1_y_y*3) + 1)", "conv_s1_w");

//store is: conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 1), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 1), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 2), ((conv.s1.r$y + (conv.s1.y.y*3)) + 1))))
  auto hcompute_conv_stencil_6 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_load("conv_stencil", "((conv_s1_x_x*3) + 2)", "((conv_s1_y_y*3) + 1)", "conv_s1_w");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "conv_s1_r_z", "(((conv_s1_x_x*3) + conv_s1_r_x) + 2)", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_store("conv_stencil", "((conv_s1_x_x*3) + 2)", "((conv_s1_y_y*3) + 1)", "conv_s1_w");
  auto conv_s1_x_x_2 = conv_s1_y_y->add_loop("conv_s1_x_x", 0, 5);

//store is: conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 2), conv.s1.w) = (conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 2), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, ((conv.s1.x.x*3) + conv.s1.r$x), ((conv.s1.r$y + (conv.s1.y.y*3)) + 2))))
  auto hcompute_conv_stencil_7 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_load("conv_stencil", "(conv_s1_x_x*3)", "((conv_s1_y_y*3) + 2)", "conv_s1_w");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "conv_s1_r_z", "((conv_s1_x_x*3) + conv_s1_r_x)", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_store("conv_stencil", "(conv_s1_x_x*3)", "((conv_s1_y_y*3) + 2)", "conv_s1_w");

//store is: conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 2), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 2), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 1), ((conv.s1.r$y + (conv.s1.y.y*3)) + 2))))
  auto hcompute_conv_stencil_8 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "((conv_s1_x_x*3) + 1)", "((conv_s1_y_y*3) + 2)", "conv_s1_w");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "conv_s1_r_z", "(((conv_s1_x_x*3) + conv_s1_r_x) + 1)", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_store("conv_stencil", "((conv_s1_x_x*3) + 1)", "((conv_s1_y_y*3) + 2)", "conv_s1_w");

//store is: conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 2), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 2), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 2), ((conv.s1.r$y + (conv.s1.y.y*3)) + 2))))
  auto hcompute_conv_stencil_9 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "((conv_s1_x_x*3) + 2)", "((conv_s1_y_y*3) + 2)", "conv_s1_w");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "conv_s1_r_z", "(((conv_s1_x_x*3) + conv_s1_r_x) + 2)", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "conv_s1_r_z", "conv_s1_w", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_store("conv_stencil", "((conv_s1_x_x*3) + 2)", "((conv_s1_y_y*3) + 2)", "conv_s1_w");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 4);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 14);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 14);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");

  return prg;
}

prog resnet() {
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
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 30);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 30);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 8);

//store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_z", "hw_input_s0_x", "hw_input_s0_y");
////producing hw_kernel.stencil
  auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 16);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 8);

//store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_z", "hw_kernel_s0_w", "hw_kernel_s0_x", "hw_kernel_s0_y");
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);
  auto conv_s0_w = conv_s0_x->add_loop("conv_s0_w", 0, 16);

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_w->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y", "conv_s0_w");

//consuming hw_kernel.stencil

//consuming hw_input.stencil
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);
  auto conv_s1_r_y = conv_s1_x->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);

//store is: conv.stencil(conv.s1.x, conv.s1.y, 0) = ((hw_kernel.stencil(0, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 0) + (hw_kernel.stencil(7, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "0");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "0", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "1", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "2", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "3", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "4", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "5", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "6", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "7", "0", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "0");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 1) = ((hw_kernel.stencil(0, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 1) + (hw_kernel.stencil(7, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_2 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "1");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "1", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "2", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "3", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "4", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "5", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "6", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "7", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "0", "1", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_2->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "1");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 2) = ((hw_kernel.stencil(0, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 2) + (hw_kernel.stencil(7, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_3 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "2");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "0", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "1", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "2", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "3", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "4", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "5", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "6", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "7", "2", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_3->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "2");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 3) = ((hw_kernel.stencil(0, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 3) + (hw_kernel.stencil(7, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_4 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "3");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "0", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "1", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "2", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "3", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "4", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "5", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "6", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "7", "3", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_4->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "3");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 4) = ((hw_kernel.stencil(0, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 4) + (hw_kernel.stencil(7, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_5 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "4");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "0", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "1", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "2", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "3", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "4", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "5", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "6", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "7", "4", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_5->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "4");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 5) = ((hw_kernel.stencil(0, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 5) + (hw_kernel.stencil(7, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_6 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "5");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "0", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "1", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "2", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "3", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "4", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "5", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "6", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "7", "5", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_6->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "5");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 6) = ((hw_kernel.stencil(0, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 6) + (hw_kernel.stencil(7, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_7 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "6");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "0", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "1", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "2", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "3", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "4", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "5", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "6", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "7", "6", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_7->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "6");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 7) = ((hw_kernel.stencil(0, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 7) + (hw_kernel.stencil(7, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "7");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "0", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "1", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "2", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "3", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "4", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "5", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "6", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "7", "7", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_8->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "7");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 8) = ((hw_kernel.stencil(0, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 8) + (hw_kernel.stencil(7, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "8");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "0", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "1", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "2", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "3", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "4", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "5", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "6", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "7", "8", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_9->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "8");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 9) = ((hw_kernel.stencil(0, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 9) + (hw_kernel.stencil(7, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "9");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "0", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "1", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "2", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "3", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "4", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "5", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "6", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_load("hw_kernel_stencil", "7", "9", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_10->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "9");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 10) = ((hw_kernel.stencil(0, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 10) + (hw_kernel.stencil(7, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "10");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "0", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "1", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "2", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "3", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "4", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "5", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "6", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_load("hw_kernel_stencil", "7", "10", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_11->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "10");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 11) = ((hw_kernel.stencil(0, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 11) + (hw_kernel.stencil(7, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "11");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "0", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "1", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "2", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "3", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "4", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "5", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "6", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_load("hw_kernel_stencil", "7", "11", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_12->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "11");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 12) = ((hw_kernel.stencil(0, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 12) + (hw_kernel.stencil(7, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "12");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "3", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "4", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "5", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "6", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "7", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "0", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "1", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_load("hw_kernel_stencil", "2", "12", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_13->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "12");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 13) = ((hw_kernel.stencil(0, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 13) + (hw_kernel.stencil(7, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "13");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "0", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "1", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "2", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "3", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "4", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "5", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "6", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_load("hw_kernel_stencil", "7", "13", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_14->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "13");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 14) = ((hw_kernel.stencil(0, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 14) + (hw_kernel.stencil(7, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "14");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "0", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "1", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "2", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "3", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "4", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "5", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "6", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_load("hw_kernel_stencil", "7", "14", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_15->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "14");

//store is: conv.stencil(conv.s1.x, conv.s1.y, 15) = ((hw_kernel.stencil(0, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 15) + (hw_kernel.stencil(7, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
  auto hcompute_conv_stencil_16 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_16");
  hcompute_conv_stencil_16->add_function("hcompute_conv_stencil_16");
  hcompute_conv_stencil_16->add_load("conv_stencil", "conv_s1_x", "conv_s1_y", "15");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "0", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "1", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "2", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "3", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "4", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "5", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "6", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_input_stencil", "7", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "0", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "1", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "2", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "3", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "4", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "5", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "6", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_load("hw_kernel_stencil", "7", "15", "conv_s1_r_x", "conv_s1_r_y");
  hcompute_conv_stencil_16->add_store("conv_stencil", "conv_s1_x", "conv_s1_y", "15");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 16);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_w");

  return prg;
}
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

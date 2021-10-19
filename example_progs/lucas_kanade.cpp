#include "example_progs.h"

prog lucas_kanade() {
  prog prg;
  prg.compute_unit_file = "lucas_kanade_compute.h";
  prg.name = "lucas_kanade";

// Stencil<float, 34, 34, 2, 2> &AtA_stencil = arg_0;
  prg.add_input("AtA_stencil");
  prg.buffer_port_widths["AtA_stencil"] = 32;
// Stencil<uint8_t, 65, 65> &input0_copy_stencil = arg_1;
  prg.add_input("input0_copy_stencil");
  prg.buffer_port_widths["input0_copy_stencil"] = 8;
// Stencil<uint8_t, 65, 65> &input1_copy_stencil = arg_2;
  prg.add_input("input1_copy_stencil");
  prg.buffer_port_widths["input1_copy_stencil"] = 8;
// Stencil<float, 34, 34, 2> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 32;

  auto hw_output_s0_z = prg.add_loop("hw_output_s0_z", 0, 2);
  auto hw_output_s0_y_yi = hw_output_s0_z->add_loop("hw_output_s0_y_yi", 0, 34);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 34);
////producing nu.stencil
  auto nu_s0_w = hw_output_s0_x_xi->add_loop("nu_s0_w", 0, 2);

//store is: nu.stencil(0, 0, nu_s0_w) = 0.000000f
  auto hcompute_nu_stencil = nu_s0_w->add_op("op_hcompute_nu_stencil");
  hcompute_nu_stencil->add_function("hcompute_nu_stencil");
  prg.buffer_port_widths["nu_stencil"] = 32;
  hcompute_nu_stencil->add_store("nu_stencil", "nu_s0_w", "0", "0");
  auto nu_s1_w = hw_output_s0_x_xi->add_loop("nu_s1_w", 0, 2);
  auto nu_s1_rwin_x_rwin_x = nu_s1_w->add_loop("nu_s1_rwin_x_rwin_x", 0, 120);
////producing ft.stencil
  auto ft_s0_x = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x", 0, 31);

//store is: ft.stencil(ft_s0_x, 0) = 0.000000f
  auto hcompute_ft_stencil = ft_s0_x->add_op("op_hcompute_ft_stencil");
  hcompute_ft_stencil->add_function("hcompute_ft_stencil");
  prg.buffer_port_widths["ft_stencil"] = 32;
  hcompute_ft_stencil->add_store("ft_stencil", "0", "ft_s0_x");
  auto ft_s1_x = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x", 0, 31);

//store is: ft.stencil(ft_s1_x, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))) - float32(uint16(input0_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))) - float32(uint16(input0_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_1 = ft_s1_x->add_op("op_hcompute_ft_stencil_1");
  hcompute_ft_stencil_1->add_function("hcompute_ft_stencil_1");
  hcompute_ft_stencil_1->add_load("ft_stencil", "0", "ft_s1_x");
  hcompute_ft_stencil_1->add_load("input0_copy_stencil", "((floor(((nu_s1_rwin_x_rwin_x*8)/31)) + hw_output_s0_y_yi) + 1)", "((ft_s1_x + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_1->add_load("input0_copy_stencil", "(floor(((nu_s1_rwin_x_rwin_x*8)/31)) + hw_output_s0_y_yi)", "(ft_s1_x + hw_output_s0_x_xi)");
  hcompute_ft_stencil_1->add_load("input1_copy_stencil", "((floor(((nu_s1_rwin_x_rwin_x*8)/31)) + hw_output_s0_y_yi) + 1)", "((ft_s1_x + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_1->add_load("input1_copy_stencil", "(floor(((nu_s1_rwin_x_rwin_x*8)/31)) + hw_output_s0_y_yi)", "(ft_s1_x + hw_output_s0_x_xi)");
  hcompute_ft_stencil_1->add_store("ft_stencil", "0", "ft_s1_x");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil");
  hcompute_Apinv_stencil->add_function("hcompute_Apinv_stencil");
  prg.buffer_port_widths["Apinv_stencil"] = 32;
  hcompute_Apinv_stencil->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x, 0) = 0.000000f
  auto hcompute_fx_1_stencil = fx_1_s0_x->add_op("op_hcompute_fx_1_stencil");
  hcompute_fx_1_stencil->add_function("hcompute_fx_1_stencil");
  prg.buffer_port_widths["fx_1_stencil"] = 32;
  hcompute_fx_1_stencil->add_store("fx_1_stencil", "0", "fx_1_s0_x");
  auto fx_1_s1_x = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_1 = fx_1_s1_x->add_op("op_hcompute_fx_1_stencil_1");
  hcompute_fx_1_stencil_1->add_function("hcompute_fx_1_stencil_1");
  hcompute_fx_1_stencil_1->add_load("fx_1_stencil", "0", "fx_1_s1_x");
  hcompute_fx_1_stencil_1->add_load("input0_copy_stencil", "((floor(((nu_s1_rwin_x_rwin_x*8)/31)) + hw_output_s0_y_yi) + 1)", "((fx_1_s1_x + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_1->add_load("input0_copy_stencil", "(floor(((nu_s1_rwin_x_rwin_x*8)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_1->add_store("fx_1_stencil", "0", "fx_1_s1_x");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil(((nu_s1_rwin_x_rwin_x*8) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil(((nu_s1_rwin_x_rwin_x*8) % 31), 0))))
  auto hcompute_Apinv_stencil_1 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_1");
  hcompute_Apinv_stencil_1->add_function("hcompute_Apinv_stencil_1");
  hcompute_Apinv_stencil_1->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_1->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_1->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_1->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_1->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  prg.buffer_port_widths["fx_stencil"] = 32;
  hcompute_Apinv_stencil_1->add_load("fx_stencil", "0", "((nu_s1_rwin_x_rwin_x*8) % 31)");
  hcompute_Apinv_stencil_1->add_load("fx_1_stencil", "0", "((nu_s1_rwin_x_rwin_x*8) % 31)");
  prg.buffer_port_widths["inv_stencil"] = 32;
  hcompute_Apinv_stencil_1->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_1->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_1->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil(((nu_s1_rwin_x_rwin_x*8) % 31), 0))
  auto hcompute_nu_stencil_1 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_1");
  hcompute_nu_stencil_1->add_function("hcompute_nu_stencil_1");
  hcompute_nu_stencil_1->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_1->add_load("ft_stencil", "0", "((nu_s1_rwin_x_rwin_x*8) % 31)");
  hcompute_nu_stencil_1->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_1 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_1", 0, 31);

//store is: ft.stencil(ft_s0_x_1, 0) = 0.000000f
  auto hcompute_ft_stencil_2 = ft_s0_x_1->add_op("op_hcompute_ft_stencil_2");
  hcompute_ft_stencil_2->add_function("hcompute_ft_stencil_2");
  hcompute_ft_stencil_2->add_store("ft_stencil", "0", "ft_s0_x_1");
  auto ft_s1_x_1 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_1", 0, 31);

//store is: ft.stencil(ft_s1_x_1, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_1, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_3 = ft_s1_x_1->add_op("op_hcompute_ft_stencil_3");
  hcompute_ft_stencil_3->add_function("hcompute_ft_stencil_3");
  hcompute_ft_stencil_3->add_load("ft_stencil", "0", "ft_s1_x_1");
  hcompute_ft_stencil_3->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 32)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_1 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_3->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 1)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_1 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_3->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 32)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_1 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_3->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 1)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_1 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_3->add_store("ft_stencil", "0", "ft_s1_x_1");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_2 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_2");
  hcompute_Apinv_stencil_2->add_function("hcompute_Apinv_stencil_2");
  hcompute_Apinv_stencil_2->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_1 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_1", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_1, 0) = 0.000000f
  auto hcompute_fx_1_stencil_2 = fx_1_s0_x_1->add_op("op_hcompute_fx_1_stencil_2");
  hcompute_fx_1_stencil_2->add_function("hcompute_fx_1_stencil_2");
  hcompute_fx_1_stencil_2->add_store("fx_1_stencil", "0", "fx_1_s0_x_1");
  auto fx_1_s1_x_1 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_1", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_1, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_1, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_3 = fx_1_s1_x_1->add_op("op_hcompute_fx_1_stencil_3");
  hcompute_fx_1_stencil_3->add_function("hcompute_fx_1_stencil_3");
  hcompute_fx_1_stencil_3->add_load("fx_1_stencil", "0", "fx_1_s1_x_1");
  hcompute_fx_1_stencil_3->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 32)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_1 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_3->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 1)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_1 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_3->add_store("fx_1_stencil", "0", "fx_1_s1_x_1");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 1) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 1) % 31), 0))))
  auto hcompute_Apinv_stencil_3 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_3");
  hcompute_Apinv_stencil_3->add_function("hcompute_Apinv_stencil_3");
  hcompute_Apinv_stencil_3->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_3->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_3->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_3->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_3->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_3->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 1) % 31)");
  hcompute_Apinv_stencil_3->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 1) % 31)");
  hcompute_Apinv_stencil_3->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_3->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_3->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 1) % 31), 0))
  auto hcompute_nu_stencil_2 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_2");
  hcompute_nu_stencil_2->add_function("hcompute_nu_stencil_2");
  hcompute_nu_stencil_2->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_2->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 1) % 31)");
  hcompute_nu_stencil_2->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_2 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_2", 0, 31);

//store is: ft.stencil(ft_s0_x_2, 0) = 0.000000f
  auto hcompute_ft_stencil_4 = ft_s0_x_2->add_op("op_hcompute_ft_stencil_4");
  hcompute_ft_stencil_4->add_function("hcompute_ft_stencil_4");
  hcompute_ft_stencil_4->add_store("ft_stencil", "0", "ft_s0_x_2");
  auto ft_s1_x_2 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_2", 0, 31);

//store is: ft.stencil(ft_s1_x_2, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_2, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_5 = ft_s1_x_2->add_op("op_hcompute_ft_stencil_5");
  hcompute_ft_stencil_5->add_function("hcompute_ft_stencil_5");
  hcompute_ft_stencil_5->add_load("ft_stencil", "0", "ft_s1_x_2");
  hcompute_ft_stencil_5->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 2)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_2 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_5->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 33)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_2 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_5->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 33)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_2 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_5->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 2)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_2 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_5->add_store("ft_stencil", "0", "ft_s1_x_2");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_4 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_4");
  hcompute_Apinv_stencil_4->add_function("hcompute_Apinv_stencil_4");
  hcompute_Apinv_stencil_4->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_2 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_2", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_2, 0) = 0.000000f
  auto hcompute_fx_1_stencil_4 = fx_1_s0_x_2->add_op("op_hcompute_fx_1_stencil_4");
  hcompute_fx_1_stencil_4->add_function("hcompute_fx_1_stencil_4");
  hcompute_fx_1_stencil_4->add_store("fx_1_stencil", "0", "fx_1_s0_x_2");
  auto fx_1_s1_x_2 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_2", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_2, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_2, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_5 = fx_1_s1_x_2->add_op("op_hcompute_fx_1_stencil_5");
  hcompute_fx_1_stencil_5->add_function("hcompute_fx_1_stencil_5");
  hcompute_fx_1_stencil_5->add_load("fx_1_stencil", "0", "fx_1_s1_x_2");
  hcompute_fx_1_stencil_5->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 33)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_2 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_5->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 2)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_2 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_5->add_store("fx_1_stencil", "0", "fx_1_s1_x_2");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 2) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 2) % 31), 0))))
  auto hcompute_Apinv_stencil_5 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_5");
  hcompute_Apinv_stencil_5->add_function("hcompute_Apinv_stencil_5");
  hcompute_Apinv_stencil_5->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_5->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_5->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_5->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_5->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_5->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 2) % 31)");
  hcompute_Apinv_stencil_5->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 2) % 31)");
  hcompute_Apinv_stencil_5->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_5->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_5->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 2) % 31), 0))
  auto hcompute_nu_stencil_3 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_3");
  hcompute_nu_stencil_3->add_function("hcompute_nu_stencil_3");
  hcompute_nu_stencil_3->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_3->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 2) % 31)");
  hcompute_nu_stencil_3->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_3 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_3", 0, 31);

//store is: ft.stencil(ft_s0_x_3, 0) = 0.000000f
  auto hcompute_ft_stencil_6 = ft_s0_x_3->add_op("op_hcompute_ft_stencil_6");
  hcompute_ft_stencil_6->add_function("hcompute_ft_stencil_6");
  hcompute_ft_stencil_6->add_store("ft_stencil", "0", "ft_s0_x_3");
  auto ft_s1_x_3 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_3", 0, 31);

//store is: ft.stencil(ft_s1_x_3, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_3, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_7 = ft_s1_x_3->add_op("op_hcompute_ft_stencil_7");
  hcompute_ft_stencil_7->add_function("hcompute_ft_stencil_7");
  hcompute_ft_stencil_7->add_load("ft_stencil", "0", "ft_s1_x_3");
  hcompute_ft_stencil_7->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 34)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_3 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_7->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 3)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_3 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_7->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 34)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_3 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_7->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 3)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_3 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_7->add_store("ft_stencil", "0", "ft_s1_x_3");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_6 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_6");
  hcompute_Apinv_stencil_6->add_function("hcompute_Apinv_stencil_6");
  hcompute_Apinv_stencil_6->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_3 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_3", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_3, 0) = 0.000000f
  auto hcompute_fx_1_stencil_6 = fx_1_s0_x_3->add_op("op_hcompute_fx_1_stencil_6");
  hcompute_fx_1_stencil_6->add_function("hcompute_fx_1_stencil_6");
  hcompute_fx_1_stencil_6->add_store("fx_1_stencil", "0", "fx_1_s0_x_3");
  auto fx_1_s1_x_3 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_3", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_3, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_3, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_7 = fx_1_s1_x_3->add_op("op_hcompute_fx_1_stencil_7");
  hcompute_fx_1_stencil_7->add_function("hcompute_fx_1_stencil_7");
  hcompute_fx_1_stencil_7->add_load("fx_1_stencil", "0", "fx_1_s1_x_3");
  hcompute_fx_1_stencil_7->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 34)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_3 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_7->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 3)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_3 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_7->add_store("fx_1_stencil", "0", "fx_1_s1_x_3");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 3) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 3) % 31), 0))))
  auto hcompute_Apinv_stencil_7 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_7");
  hcompute_Apinv_stencil_7->add_function("hcompute_Apinv_stencil_7");
  hcompute_Apinv_stencil_7->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_7->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_7->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_7->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_7->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_7->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 3) % 31)");
  hcompute_Apinv_stencil_7->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 3) % 31)");
  hcompute_Apinv_stencil_7->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_7->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_7->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 3) % 31), 0))
  auto hcompute_nu_stencil_4 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_4");
  hcompute_nu_stencil_4->add_function("hcompute_nu_stencil_4");
  hcompute_nu_stencil_4->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_4->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 3) % 31)");
  hcompute_nu_stencil_4->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_4 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_4", 0, 31);

//store is: ft.stencil(ft_s0_x_4, 0) = 0.000000f
  auto hcompute_ft_stencil_8 = ft_s0_x_4->add_op("op_hcompute_ft_stencil_8");
  hcompute_ft_stencil_8->add_function("hcompute_ft_stencil_8");
  hcompute_ft_stencil_8->add_store("ft_stencil", "0", "ft_s0_x_4");
  auto ft_s1_x_4 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_4", 0, 31);

//store is: ft.stencil(ft_s1_x_4, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_4, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_9 = ft_s1_x_4->add_op("op_hcompute_ft_stencil_9");
  hcompute_ft_stencil_9->add_function("hcompute_ft_stencil_9");
  hcompute_ft_stencil_9->add_load("ft_stencil", "0", "ft_s1_x_4");
  hcompute_ft_stencil_9->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 35)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_4 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_9->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 4)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_4 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_9->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 4)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_4 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_9->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 35)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_4 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_9->add_store("ft_stencil", "0", "ft_s1_x_4");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_8 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_8");
  hcompute_Apinv_stencil_8->add_function("hcompute_Apinv_stencil_8");
  hcompute_Apinv_stencil_8->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_4 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_4", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_4, 0) = 0.000000f
  auto hcompute_fx_1_stencil_8 = fx_1_s0_x_4->add_op("op_hcompute_fx_1_stencil_8");
  hcompute_fx_1_stencil_8->add_function("hcompute_fx_1_stencil_8");
  hcompute_fx_1_stencil_8->add_store("fx_1_stencil", "0", "fx_1_s0_x_4");
  auto fx_1_s1_x_4 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_4", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_4, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_4, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_9 = fx_1_s1_x_4->add_op("op_hcompute_fx_1_stencil_9");
  hcompute_fx_1_stencil_9->add_function("hcompute_fx_1_stencil_9");
  hcompute_fx_1_stencil_9->add_load("fx_1_stencil", "0", "fx_1_s1_x_4");
  hcompute_fx_1_stencil_9->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 35)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_4 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_9->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 4)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_4 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_9->add_store("fx_1_stencil", "0", "fx_1_s1_x_4");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 4) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 4) % 31), 0))))
  auto hcompute_Apinv_stencil_9 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_9");
  hcompute_Apinv_stencil_9->add_function("hcompute_Apinv_stencil_9");
  hcompute_Apinv_stencil_9->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_9->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_9->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_9->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_9->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_9->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 4) % 31)");
  hcompute_Apinv_stencil_9->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 4) % 31)");
  hcompute_Apinv_stencil_9->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_9->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_9->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 4) % 31), 0))
  auto hcompute_nu_stencil_5 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_5");
  hcompute_nu_stencil_5->add_function("hcompute_nu_stencil_5");
  hcompute_nu_stencil_5->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_5->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 4) % 31)");
  hcompute_nu_stencil_5->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_5 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_5", 0, 31);

//store is: ft.stencil(ft_s0_x_5, 0) = 0.000000f
  auto hcompute_ft_stencil_10 = ft_s0_x_5->add_op("op_hcompute_ft_stencil_10");
  hcompute_ft_stencil_10->add_function("hcompute_ft_stencil_10");
  hcompute_ft_stencil_10->add_store("ft_stencil", "0", "ft_s0_x_5");
  auto ft_s1_x_5 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_5", 0, 31);

//store is: ft.stencil(ft_s1_x_5, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_5, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_11 = ft_s1_x_5->add_op("op_hcompute_ft_stencil_11");
  hcompute_ft_stencil_11->add_function("hcompute_ft_stencil_11");
  hcompute_ft_stencil_11->add_load("ft_stencil", "0", "ft_s1_x_5");
  hcompute_ft_stencil_11->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 36)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_5 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_11->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 5)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_5 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_11->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 36)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_5 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_11->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 5)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_5 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_11->add_store("ft_stencil", "0", "ft_s1_x_5");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_10 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_10");
  hcompute_Apinv_stencil_10->add_function("hcompute_Apinv_stencil_10");
  hcompute_Apinv_stencil_10->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_5 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_5", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_5, 0) = 0.000000f
  auto hcompute_fx_1_stencil_10 = fx_1_s0_x_5->add_op("op_hcompute_fx_1_stencil_10");
  hcompute_fx_1_stencil_10->add_function("hcompute_fx_1_stencil_10");
  hcompute_fx_1_stencil_10->add_store("fx_1_stencil", "0", "fx_1_s0_x_5");
  auto fx_1_s1_x_5 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_5", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_5, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_5, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_11 = fx_1_s1_x_5->add_op("op_hcompute_fx_1_stencil_11");
  hcompute_fx_1_stencil_11->add_function("hcompute_fx_1_stencil_11");
  hcompute_fx_1_stencil_11->add_load("fx_1_stencil", "0", "fx_1_s1_x_5");
  hcompute_fx_1_stencil_11->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 36)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_5 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_11->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 5)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_5 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_11->add_store("fx_1_stencil", "0", "fx_1_s1_x_5");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 5) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 5) % 31), 0))))
  auto hcompute_Apinv_stencil_11 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_11");
  hcompute_Apinv_stencil_11->add_function("hcompute_Apinv_stencil_11");
  hcompute_Apinv_stencil_11->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_11->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_11->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_11->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_11->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_11->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 5) % 31)");
  hcompute_Apinv_stencil_11->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 5) % 31)");
  hcompute_Apinv_stencil_11->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_11->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_11->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 5) % 31), 0))
  auto hcompute_nu_stencil_6 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_6");
  hcompute_nu_stencil_6->add_function("hcompute_nu_stencil_6");
  hcompute_nu_stencil_6->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_6->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 5) % 31)");
  hcompute_nu_stencil_6->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_6 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_6", 0, 31);

//store is: ft.stencil(ft_s0_x_6, 0) = 0.000000f
  auto hcompute_ft_stencil_12 = ft_s0_x_6->add_op("op_hcompute_ft_stencil_12");
  hcompute_ft_stencil_12->add_function("hcompute_ft_stencil_12");
  hcompute_ft_stencil_12->add_store("ft_stencil", "0", "ft_s0_x_6");
  auto ft_s1_x_6 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_6", 0, 31);

//store is: ft.stencil(ft_s1_x_6, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_6, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_13 = ft_s1_x_6->add_op("op_hcompute_ft_stencil_13");
  hcompute_ft_stencil_13->add_function("hcompute_ft_stencil_13");
  hcompute_ft_stencil_13->add_load("ft_stencil", "0", "ft_s1_x_6");
  hcompute_ft_stencil_13->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 37)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_6 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_13->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 6)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_6 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_13->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 37)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_6 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_13->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 6)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_6 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_13->add_store("ft_stencil", "0", "ft_s1_x_6");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_12 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_12");
  hcompute_Apinv_stencil_12->add_function("hcompute_Apinv_stencil_12");
  hcompute_Apinv_stencil_12->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_6 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_6", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_6, 0) = 0.000000f
  auto hcompute_fx_1_stencil_12 = fx_1_s0_x_6->add_op("op_hcompute_fx_1_stencil_12");
  hcompute_fx_1_stencil_12->add_function("hcompute_fx_1_stencil_12");
  hcompute_fx_1_stencil_12->add_store("fx_1_stencil", "0", "fx_1_s0_x_6");
  auto fx_1_s1_x_6 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_6", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_6, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_6, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_13 = fx_1_s1_x_6->add_op("op_hcompute_fx_1_stencil_13");
  hcompute_fx_1_stencil_13->add_function("hcompute_fx_1_stencil_13");
  hcompute_fx_1_stencil_13->add_load("fx_1_stencil", "0", "fx_1_s1_x_6");
  hcompute_fx_1_stencil_13->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 37)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_6 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_13->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 6)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_6 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_13->add_store("fx_1_stencil", "0", "fx_1_s1_x_6");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 6) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 6) % 31), 0))))
  auto hcompute_Apinv_stencil_13 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_13");
  hcompute_Apinv_stencil_13->add_function("hcompute_Apinv_stencil_13");
  hcompute_Apinv_stencil_13->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_13->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_13->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_13->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_13->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_13->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 6) % 31)");
  hcompute_Apinv_stencil_13->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 6) % 31)");
  hcompute_Apinv_stencil_13->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_13->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_13->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 6) % 31), 0))
  auto hcompute_nu_stencil_7 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_7");
  hcompute_nu_stencil_7->add_function("hcompute_nu_stencil_7");
  hcompute_nu_stencil_7->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_7->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 6) % 31)");
  hcompute_nu_stencil_7->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_7 = nu_s1_rwin_x_rwin_x->add_loop("ft_s0_x_7", 0, 31);

//store is: ft.stencil(ft_s0_x_7, 0) = 0.000000f
  auto hcompute_ft_stencil_14 = ft_s0_x_7->add_op("op_hcompute_ft_stencil_14");
  hcompute_ft_stencil_14->add_function("hcompute_ft_stencil_14");
  hcompute_ft_stencil_14->add_store("ft_stencil", "0", "ft_s0_x_7");
  auto ft_s1_x_7 = nu_s1_rwin_x_rwin_x->add_loop("ft_s1_x_7", 0, 31);

//store is: ft.stencil(ft_s1_x_7, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(ft_s1_x_7, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
  auto hcompute_ft_stencil_15 = ft_s1_x_7->add_op("op_hcompute_ft_stencil_15");
  hcompute_ft_stencil_15->add_function("hcompute_ft_stencil_15");
  hcompute_ft_stencil_15->add_load("ft_stencil", "0", "ft_s1_x_7");
  hcompute_ft_stencil_15->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 38)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_7 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_15->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 7)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_7 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_15->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 38)/31)) + hw_output_s0_y_yi)", "((ft_s1_x_7 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_15->add_load("input1_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 7)/31)) + hw_output_s0_y_yi)", "(ft_s1_x_7 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_15->add_store("ft_stencil", "0", "ft_s1_x_7");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_14 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_14");
  hcompute_Apinv_stencil_14->add_function("hcompute_Apinv_stencil_14");
  hcompute_Apinv_stencil_14->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_7 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s0_x_7", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_7, 0) = 0.000000f
  auto hcompute_fx_1_stencil_14 = fx_1_s0_x_7->add_op("op_hcompute_fx_1_stencil_14");
  hcompute_fx_1_stencil_14->add_function("hcompute_fx_1_stencil_14");
  hcompute_fx_1_stencil_14->add_store("fx_1_stencil", "0", "fx_1_s0_x_7");
  auto fx_1_s1_x_7 = nu_s1_rwin_x_rwin_x->add_loop("fx_1_s1_x_7", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_7, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_7, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi))))*0.000980f))))
  auto hcompute_fx_1_stencil_15 = fx_1_s1_x_7->add_op("op_hcompute_fx_1_stencil_15");
  hcompute_fx_1_stencil_15->add_function("hcompute_fx_1_stencil_15");
  hcompute_fx_1_stencil_15->add_load("fx_1_stencil", "0", "fx_1_s1_x_7");
  hcompute_fx_1_stencil_15->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 38)/31)) + hw_output_s0_y_yi)", "((fx_1_s1_x_7 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_15->add_load("input0_copy_stencil", "(floor((((nu_s1_rwin_x_rwin_x*8) + 7)/31)) + hw_output_s0_y_yi)", "(fx_1_s1_x_7 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_15->add_store("fx_1_stencil", "0", "fx_1_s1_x_7");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 7) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 7) % 31), 0))))
  auto hcompute_Apinv_stencil_15 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_Apinv_stencil_15");
  hcompute_Apinv_stencil_15->add_function("hcompute_Apinv_stencil_15");
  hcompute_Apinv_stencil_15->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_15->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_15->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_15->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_15->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_15->add_load("fx_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 7) % 31)");
  hcompute_Apinv_stencil_15->add_load("fx_1_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 7) % 31)");
  hcompute_Apinv_stencil_15->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_15->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_15->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 7) % 31), 0))
  auto hcompute_nu_stencil_8 = nu_s1_rwin_x_rwin_x->add_op("op_hcompute_nu_stencil_8");
  hcompute_nu_stencil_8->add_function("hcompute_nu_stencil_8");
  hcompute_nu_stencil_8->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_8->add_load("ft_stencil", "0", "(((nu_s1_rwin_x_rwin_x*8) + 7) % 31)");
  hcompute_nu_stencil_8->add_store("nu_stencil", "nu_s1_w", "0", "0");
////producing ft.stencil
  auto ft_s0_x_8 = nu_s1_w->add_loop("ft_s0_x_8", 0, 31);

//store is: ft.stencil(ft_s0_x_8, 0) = 0.000000f
  auto hcompute_ft_stencil_16 = ft_s0_x_8->add_op("op_hcompute_ft_stencil_16");
  hcompute_ft_stencil_16->add_function("hcompute_ft_stencil_16");
  hcompute_ft_stencil_16->add_store("ft_stencil", "0", "ft_s0_x_8");
  auto ft_s1_x_8 = nu_s1_w->add_loop("ft_s1_x_8", 0, 31);

//store is: ft.stencil(ft_s1_x_8, 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))) - float32(uint16(input0_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))))*0.000980f) + (ft.stencil(ft_s1_x_8, 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))) - float32(uint16(input0_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))))*0.000980f)))))
  auto hcompute_ft_stencil_17 = ft_s1_x_8->add_op("op_hcompute_ft_stencil_17");
  hcompute_ft_stencil_17->add_function("hcompute_ft_stencil_17");
  hcompute_ft_stencil_17->add_load("ft_stencil", "0", "ft_s1_x_8");
  hcompute_ft_stencil_17->add_load("input0_copy_stencil", "(hw_output_s0_y_yi + 31)", "((ft_s1_x_8 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_17->add_load("input0_copy_stencil", "(hw_output_s0_y_yi + 30)", "(ft_s1_x_8 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_17->add_load("input1_copy_stencil", "(hw_output_s0_y_yi + 31)", "((ft_s1_x_8 + hw_output_s0_x_xi) + 1)");
  hcompute_ft_stencil_17->add_load("input1_copy_stencil", "(hw_output_s0_y_yi + 30)", "(ft_s1_x_8 + hw_output_s0_x_xi)");
  hcompute_ft_stencil_17->add_store("ft_stencil", "0", "ft_s1_x_8");

//consuming ft.stencil
////producing Apinv.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
  auto hcompute_Apinv_stencil_16 = nu_s1_w->add_op("op_hcompute_Apinv_stencil_16");
  hcompute_Apinv_stencil_16->add_function("hcompute_Apinv_stencil_16");
  hcompute_Apinv_stencil_16->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming inv.stencil
////producing fx$1.stencil
  auto fx_1_s0_x_8 = nu_s1_w->add_loop("fx_1_s0_x_8", 0, 31);

//store is: fx$1.stencil(fx_1_s0_x_8, 0) = 0.000000f
  auto hcompute_fx_1_stencil_16 = fx_1_s0_x_8->add_op("op_hcompute_fx_1_stencil_16");
  hcompute_fx_1_stencil_16->add_function("hcompute_fx_1_stencil_16");
  hcompute_fx_1_stencil_16->add_store("fx_1_stencil", "0", "fx_1_s0_x_8");
  auto fx_1_s1_x_8 = nu_s1_w->add_loop("fx_1_s1_x_8", 0, 31);

//store is: fx$1.stencil(fx_1_s1_x_8, 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31))))*0.000980f) + ((fx$1.stencil(fx_1_s1_x_8, 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30))))*0.000980f))))
  auto hcompute_fx_1_stencil_17 = fx_1_s1_x_8->add_op("op_hcompute_fx_1_stencil_17");
  hcompute_fx_1_stencil_17->add_function("hcompute_fx_1_stencil_17");
  hcompute_fx_1_stencil_17->add_load("fx_1_stencil", "0", "fx_1_s1_x_8");
  hcompute_fx_1_stencil_17->add_load("input0_copy_stencil", "(hw_output_s0_y_yi + 31)", "((fx_1_s1_x_8 + hw_output_s0_x_xi) + 1)");
  hcompute_fx_1_stencil_17->add_load("input0_copy_stencil", "(hw_output_s0_y_yi + 30)", "(fx_1_s1_x_8 + hw_output_s0_x_xi)");
  hcompute_fx_1_stencil_17->add_store("fx_1_stencil", "0", "fx_1_s1_x_8");

//consuming fx$1.stencil

//consuming fx.stencil

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil(30, 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil(30, 0))))
  auto hcompute_Apinv_stencil_17 = nu_s1_w->add_op("op_hcompute_Apinv_stencil_17");
  hcompute_Apinv_stencil_17->add_function("hcompute_Apinv_stencil_17");
  hcompute_Apinv_stencil_17->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_Apinv_stencil_17->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_17->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_17->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_17->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_Apinv_stencil_17->add_load("fx_stencil", "0", "30");
  hcompute_Apinv_stencil_17->add_load("fx_1_stencil", "0", "30");
  hcompute_Apinv_stencil_17->add_load("inv_stencil", "nu_s1_w", "1", "0", "0");
  hcompute_Apinv_stencil_17->add_load("inv_stencil", "nu_s1_w", "0", "0", "0");
  hcompute_Apinv_stencil_17->add_store("Apinv_stencil", "0", "0", "0", "0");

//consuming Apinv.stencil

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil(30, 0))
  auto hcompute_nu_stencil_9 = nu_s1_w->add_op("op_hcompute_nu_stencil_9");
  hcompute_nu_stencil_9->add_function("hcompute_nu_stencil_9");
  hcompute_nu_stencil_9->add_load("Apinv_stencil", "0", "0", "0", "0");
  hcompute_nu_stencil_9->add_load("ft_stencil", "0", "30");
  hcompute_nu_stencil_9->add_store("nu_stencil", "nu_s1_w", "0", "0");

//consuming nu.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_z) = select(((select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f) - ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))))*0.250000f), 0.000000f) + (min((select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), (sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f))) + (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1))))*select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), (sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f))) + (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1))))), (select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)))))*select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)))))))*0.250000f)) < 0.010000f), 0.000000f, (nu.stencil(0, 0, 0) + nu.stencil(0, 0, 1)))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("AtA_stencil", "1", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("AtA_stencil", "0", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("AtA_stencil", "0", "1", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("AtA_stencil", "1", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("nu_stencil", "0", "0", "0");
  hcompute_hw_output_stencil->add_load("nu_stencil", "1", "0", "0");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_z", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


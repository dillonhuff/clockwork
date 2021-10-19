#include "example_progs.h"

prog bilateral() {
  prog prg;
  prg.compute_unit_file = "bilateral_compute.h";
  prg.name = "bilateral";

// Stencil<uint16_t, 128, 128> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 12, 12, 22> &hw_input_hist_stencil = arg_1;
  prg.add_input("hw_input_hist_stencil");
  prg.buffer_port_widths["hw_input_hist_stencil"] = 16;
// Stencil<uint16_t, 12, 12, 22> &hw_input_hist_count_stencil = arg_2;
  prg.add_input("hw_input_hist_count_stencil");
  prg.buffer_port_widths["hw_input_hist_count_stencil"] = 16;
// Stencil<uint8_t, 128, 128> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 8;

////producing hw_input_hist_global_wrapper.stencil
  auto hw_input_hist_global_wrapper_s0_z = prg.add_loop("hw_input_hist_global_wrapper_s0_z", -2, 20);
  auto hw_input_hist_global_wrapper_s0_y = hw_input_hist_global_wrapper_s0_z->add_loop("hw_input_hist_global_wrapper_s0_y", -2, 10);
  auto hw_input_hist_global_wrapper_s0_x = hw_input_hist_global_wrapper_s0_y->add_loop("hw_input_hist_global_wrapper_s0_x", -2, 10);

//store is: hw_input_hist_global_wrapper.stencil(hw_input_hist_global_wrapper_s0_x, hw_input_hist_global_wrapper_s0_y, hw_input_hist_global_wrapper_s0_z) = hw_input_hist.stencil(hw_input_hist_global_wrapper_s0_x, hw_input_hist_global_wrapper_s0_y, hw_input_hist_global_wrapper_s0_z)
  auto hcompute_hw_input_hist_global_wrapper_stencil = hw_input_hist_global_wrapper_s0_x->add_op("op_hcompute_hw_input_hist_global_wrapper_stencil");
  hcompute_hw_input_hist_global_wrapper_stencil->add_function("hcompute_hw_input_hist_global_wrapper_stencil");
  hcompute_hw_input_hist_global_wrapper_stencil->add_load("hw_input_hist_stencil", "hw_input_hist_global_wrapper_s0_z", "hw_input_hist_global_wrapper_s0_y", "hw_input_hist_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_hist_global_wrapper_stencil"] = 16;
  hcompute_hw_input_hist_global_wrapper_stencil->add_store("hw_input_hist_global_wrapper_stencil", "hw_input_hist_global_wrapper_s0_z", "hw_input_hist_global_wrapper_s0_y", "hw_input_hist_global_wrapper_s0_x");

//consuming hw_input_hist_global_wrapper.stencil
////producing input_copy_hist.stencil
  auto input_copy_hist_s0_z = prg.add_loop("input_copy_hist_s0_z", -2, 20);
  auto input_copy_hist_s0_y = input_copy_hist_s0_z->add_loop("input_copy_hist_s0_y", -2, 10);
  auto input_copy_hist_s0_x = input_copy_hist_s0_y->add_loop("input_copy_hist_s0_x", -2, 10);

//store is: input_copy_hist.stencil(input_copy_hist_s0_x, input_copy_hist_s0_y, input_copy_hist_s0_z) = hw_input_hist_global_wrapper.stencil(input_copy_hist_s0_x, input_copy_hist_s0_y, input_copy_hist_s0_z)
  auto hcompute_input_copy_hist_stencil = input_copy_hist_s0_x->add_op("op_hcompute_input_copy_hist_stencil");
  hcompute_input_copy_hist_stencil->add_function("hcompute_input_copy_hist_stencil");
  hcompute_input_copy_hist_stencil->add_load("hw_input_hist_global_wrapper_stencil", "input_copy_hist_s0_z", "input_copy_hist_s0_y", "input_copy_hist_s0_x");
  prg.buffer_port_widths["input_copy_hist_stencil"] = 16;
  hcompute_input_copy_hist_stencil->add_store("input_copy_hist_stencil", "input_copy_hist_s0_z", "input_copy_hist_s0_y", "input_copy_hist_s0_x");

//consuming input_copy_hist.stencil
////producing blurz.stencil
  auto blurz_s0_z = prg.add_loop("blurz_s0_z", 0, 18);
  auto blurz_s0_y = blurz_s0_z->add_loop("blurz_s0_y", -2, 10);
  auto blurz_s0_x = blurz_s0_y->add_loop("blurz_s0_x", -2, 10);

//store is: blurz.stencil(blurz_s0_x, blurz_s0_y, blurz_s0_z) = ((input_copy_hist.stencil(blurz_s0_x, blurz_s0_y, (blurz_s0_z + -1))*(uint16)4) + (input_copy_hist.stencil(blurz_s0_x, blurz_s0_y, (blurz_s0_z + -2)) + ((input_copy_hist.stencil(blurz_s0_x, blurz_s0_y, blurz_s0_z)*(uint16)6) + (input_copy_hist.stencil(blurz_s0_x, blurz_s0_y, (blurz_s0_z + 2)) + (input_copy_hist.stencil(blurz_s0_x, blurz_s0_y, (blurz_s0_z + 1))*(uint16)4)))))
  auto hcompute_blurz_stencil = blurz_s0_x->add_op("op_hcompute_blurz_stencil");
  hcompute_blurz_stencil->add_function("hcompute_blurz_stencil");
  hcompute_blurz_stencil->add_load("input_copy_hist_stencil", "(blurz_s0_z + -1)", "blurz_s0_y", "blurz_s0_x");
  hcompute_blurz_stencil->add_load("input_copy_hist_stencil", "(blurz_s0_z + -2)", "blurz_s0_y", "blurz_s0_x");
  hcompute_blurz_stencil->add_load("input_copy_hist_stencil", "blurz_s0_z", "blurz_s0_y", "blurz_s0_x");
  hcompute_blurz_stencil->add_load("input_copy_hist_stencil", "(blurz_s0_z + 2)", "blurz_s0_y", "blurz_s0_x");
  hcompute_blurz_stencil->add_load("input_copy_hist_stencil", "(blurz_s0_z + 1)", "blurz_s0_y", "blurz_s0_x");
  prg.buffer_port_widths["blurz_stencil"] = 16;
  hcompute_blurz_stencil->add_store("blurz_stencil", "blurz_s0_z", "blurz_s0_y", "blurz_s0_x");

//consuming blurz.stencil
////producing blurx.stencil
  auto blurx_s0_z = prg.add_loop("blurx_s0_z", 0, 18);
  auto blurx_s0_y = blurx_s0_z->add_loop("blurx_s0_y", -2, 10);
  auto blurx_s0_x = blurx_s0_y->add_loop("blurx_s0_x", 0, 8);

//store is: blurx.stencil(blurx_s0_x, blurx_s0_y, blurx_s0_z) = ((blurz.stencil((blurx_s0_x + -1), blurx_s0_y, blurx_s0_z)*(uint16)4) + (blurz.stencil((blurx_s0_x + -2), blurx_s0_y, blurx_s0_z) + ((blurz.stencil(blurx_s0_x, blurx_s0_y, blurx_s0_z)*(uint16)6) + (blurz.stencil((blurx_s0_x + 2), blurx_s0_y, blurx_s0_z) + (blurz.stencil((blurx_s0_x + 1), blurx_s0_y, blurx_s0_z)*(uint16)4)))))
  auto hcompute_blurx_stencil = blurx_s0_x->add_op("op_hcompute_blurx_stencil");
  hcompute_blurx_stencil->add_function("hcompute_blurx_stencil");
  hcompute_blurx_stencil->add_load("blurz_stencil", "blurx_s0_z", "blurx_s0_y", "(blurx_s0_x + -1)");
  hcompute_blurx_stencil->add_load("blurz_stencil", "blurx_s0_z", "blurx_s0_y", "(blurx_s0_x + -2)");
  hcompute_blurx_stencil->add_load("blurz_stencil", "blurx_s0_z", "blurx_s0_y", "blurx_s0_x");
  hcompute_blurx_stencil->add_load("blurz_stencil", "blurx_s0_z", "blurx_s0_y", "(blurx_s0_x + 2)");
  hcompute_blurx_stencil->add_load("blurz_stencil", "blurx_s0_z", "blurx_s0_y", "(blurx_s0_x + 1)");
  prg.buffer_port_widths["blurx_stencil"] = 16;
  hcompute_blurx_stencil->add_store("blurx_stencil", "blurx_s0_z", "blurx_s0_y", "blurx_s0_x");

//consuming blurx.stencil
////producing blury.stencil
  auto blury_s0_z = prg.add_loop("blury_s0_z", 0, 18);
  auto blury_s0_y = blury_s0_z->add_loop("blury_s0_y", 0, 8);
  auto blury_s0_x = blury_s0_y->add_loop("blury_s0_x", 0, 8);

//store is: blury.stencil(blury_s0_x, blury_s0_y, blury_s0_z) = ((blurx.stencil(blury_s0_x, (blury_s0_y + -1), blury_s0_z)*(uint16)4) + (blurx.stencil(blury_s0_x, (blury_s0_y + -2), blury_s0_z) + ((blurx.stencil(blury_s0_x, blury_s0_y, blury_s0_z)*(uint16)6) + (blurx.stencil(blury_s0_x, (blury_s0_y + 2), blury_s0_z) + (blurx.stencil(blury_s0_x, (blury_s0_y + 1), blury_s0_z)*(uint16)4)))))
  auto hcompute_blury_stencil = blury_s0_x->add_op("op_hcompute_blury_stencil");
  hcompute_blury_stencil->add_function("hcompute_blury_stencil");
  hcompute_blury_stencil->add_load("blurx_stencil", "blury_s0_z", "(blury_s0_y + -1)", "blury_s0_x");
  hcompute_blury_stencil->add_load("blurx_stencil", "blury_s0_z", "(blury_s0_y + -2)", "blury_s0_x");
  hcompute_blury_stencil->add_load("blurx_stencil", "blury_s0_z", "blury_s0_y", "blury_s0_x");
  hcompute_blury_stencil->add_load("blurx_stencil", "blury_s0_z", "(blury_s0_y + 2)", "blury_s0_x");
  hcompute_blury_stencil->add_load("blurx_stencil", "blury_s0_z", "(blury_s0_y + 1)", "blury_s0_x");
  prg.buffer_port_widths["blury_stencil"] = 16;
  hcompute_blury_stencil->add_store("blury_stencil", "blury_s0_z", "blury_s0_y", "blury_s0_x");

//consuming blury.stencil
////producing xf.stencil
  auto xf_s0_y_1 = prg.add_loop("xf_s0_y_1", 0, 128);
  auto xf_s0_x = xf_s0_y_1->add_loop("xf_s0_x", 0, 128);

//store is: xf.stencil(xf_s0_x, xf_s0_y_1) = uint16((xf_s0_x % 24))
  auto hcompute_xf_stencil = xf_s0_x->add_op("op_hcompute_xf_stencil");
  hcompute_xf_stencil->add_function("hcompute_xf_stencil");
  prg.buffer_port_widths["xf_stencil"] = 16;
  hcompute_xf_stencil->add_store("xf_stencil", "xf_s0_y_1", "xf_s0_x");
  hcompute_xf_stencil->compute_unit_needs_index_variable("xf_s0_x");

//consuming xf.stencil
////producing xii.stencil
  auto xii_s0_y = prg.add_loop("xii_s0_y", 0, 128);
  auto xii_s0_x = xii_s0_y->add_loop("xii_s0_x", 0, 128);

//store is: xii.stencil(xii_s0_x, xii_s0_y) = uint16((xii_s0_x/24))
  auto hcompute_xii_stencil = xii_s0_x->add_op("op_hcompute_xii_stencil");
  hcompute_xii_stencil->add_function("hcompute_xii_stencil");
  prg.buffer_port_widths["xii_stencil"] = 16;
  hcompute_xii_stencil->add_store("xii_stencil", "xii_s0_y", "xii_s0_x");
  hcompute_xii_stencil->compute_unit_needs_index_variable("xii_s0_x");

//consuming xii.stencil
////producing yf$9.stencil
  auto yf_9_s0_y = prg.add_loop("yf_9_s0_y", 0, 128);
  auto yf_9_s0_x = yf_9_s0_y->add_loop("yf_9_s0_x", 0, 128);

//store is: yf$9.stencil(yf_9_s0_x, yf_9_s0_y) = uint16((yf_9_s0_y % 24))
  auto hcompute_yf_9_stencil = yf_9_s0_x->add_op("op_hcompute_yf_9_stencil");
  hcompute_yf_9_stencil->add_function("hcompute_yf_9_stencil");
  prg.buffer_port_widths["yf_9_stencil"] = 16;
  hcompute_yf_9_stencil->add_store("yf_9_stencil", "yf_9_s0_y", "yf_9_s0_x");
  hcompute_yf_9_stencil->compute_unit_needs_index_variable("yf_9_s0_y");

//consuming yf$9.stencil
////producing yii.stencil
  auto yii_s0_y = prg.add_loop("yii_s0_y", 0, 128);
  auto yii_s0_x = yii_s0_y->add_loop("yii_s0_x", 0, 128);

//store is: yii.stencil(yii_s0_x, yii_s0_y) = uint16((yii_s0_y/24))
  auto hcompute_yii_stencil = yii_s0_x->add_op("op_hcompute_yii_stencil");
  hcompute_yii_stencil->add_function("hcompute_yii_stencil");
  prg.buffer_port_widths["yii_stencil"] = 16;
  hcompute_yii_stencil->add_store("yii_stencil", "yii_s0_y", "yii_s0_x");
  hcompute_yii_stencil->compute_unit_needs_index_variable("yii_s0_y");

//consuming yii.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 128);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 128);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing input_copy.stencil
  auto input_copy_s0_y = prg.add_loop("input_copy_s0_y", 0, 128);
  auto input_copy_s0_x = input_copy_s0_y->add_loop("input_copy_s0_x", 0, 128);

//store is: input_copy.stencil(input_copy_s0_x, input_copy_s0_y) = hw_input_global_wrapper.stencil(input_copy_s0_x, input_copy_s0_y)
  auto hcompute_input_copy_stencil = input_copy_s0_x->add_op("op_hcompute_input_copy_stencil");
  hcompute_input_copy_stencil->add_function("hcompute_input_copy_stencil");
  hcompute_input_copy_stencil->add_load("hw_input_global_wrapper_stencil", "input_copy_s0_y", "input_copy_s0_x");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
  hcompute_input_copy_stencil->add_store("input_copy_stencil", "input_copy_s0_y", "input_copy_s0_x");

//consuming input_copy.stencil
////producing val2.stencil
  auto val2_s0_y = prg.add_loop("val2_s0_y", 0, 128);
  auto val2_s0_x = val2_s0_y->add_loop("val2_s0_x", 0, 128);

//store is: val2.stencil(val2_s0_x, val2_s0_y) = input_copy.stencil(val2_s0_x, val2_s0_y)
  auto hcompute_val2_stencil = val2_s0_x->add_op("op_hcompute_val2_stencil");
  hcompute_val2_stencil->add_function("hcompute_val2_stencil");
  hcompute_val2_stencil->add_load("input_copy_stencil", "val2_s0_y", "val2_s0_x");
  prg.buffer_port_widths["val2_stencil"] = 16;
  hcompute_val2_stencil->add_store("val2_stencil", "val2_s0_y", "val2_s0_x");
  auto val2_s1_y = prg.add_loop("val2_s1_y", 0, 128);
  auto val2_s1_x = val2_s1_y->add_loop("val2_s1_x", 0, 128);

//store is: val2.stencil(val2_s1_x, val2_s1_y) = min(val2.stencil(val2_s1_x, val2_s1_y), (uint16)255)
  auto hcompute_val2_stencil_1 = val2_s1_x->add_op("op_hcompute_val2_stencil_1");
  hcompute_val2_stencil_1->add_function("hcompute_val2_stencil_1");
  hcompute_val2_stencil_1->add_load("val2_stencil", "val2_s1_y", "val2_s1_x");
  hcompute_val2_stencil_1->add_store("val2_stencil", "val2_s1_y", "val2_s1_x");

//consuming val2.stencil
////producing zf.stencil
  auto zf_s0_y = prg.add_loop("zf_s0_y", 0, 128);
  auto zf_s0_x = zf_s0_y->add_loop("zf_s0_x", 0, 128);

//store is: zf.stencil(zf_s0_x, zf_s0_y) = min((val2.stencil(zf_s0_x, zf_s0_y) % (uint16)16), (uint16)16)
  auto hcompute_zf_stencil = zf_s0_x->add_op("op_hcompute_zf_stencil");
  hcompute_zf_stencil->add_function("hcompute_zf_stencil");
  hcompute_zf_stencil->add_load("val2_stencil", "zf_s0_y", "zf_s0_x");
  prg.buffer_port_widths["zf_stencil"] = 16;
  hcompute_zf_stencil->add_store("zf_stencil", "zf_s0_y", "zf_s0_x");

//consuming zf.stencil
////producing zi2.stencil
  auto zi2_s0_y = prg.add_loop("zi2_s0_y", 0, 128);
  auto zi2_s0_x = zi2_s0_y->add_loop("zi2_s0_x", 0, 128);

//store is: zi2.stencil(zi2_s0_x, zi2_s0_y) = min((val2.stencil(zi2_s0_x, zi2_s0_y)/(uint16)16), (uint16)16)
  auto hcompute_zi2_stencil = zi2_s0_x->add_op("op_hcompute_zi2_stencil");
  hcompute_zi2_stencil->add_function("hcompute_zi2_stencil");
  hcompute_zi2_stencil->add_load("val2_stencil", "zi2_s0_y", "zi2_s0_x");
  prg.buffer_port_widths["zi2_stencil"] = 16;
  hcompute_zi2_stencil->add_store("zi2_stencil", "zi2_s0_y", "zi2_s0_x");

//consuming zi2.stencil
////producing interpolated.stencil
  auto interpolated_s0_y = prg.add_loop("interpolated_s0_y", 0, 128);
  auto interpolated_s0_x = interpolated_s0_y->add_loop("interpolated_s0_x", 0, 128);

//store is: interpolated.stencil(interpolated_s0_x, interpolated_s0_y) = ((((zf.stencil(interpolated_s0_x, interpolated_s0_y)*(((((yf$9.stencil(interpolated_s0_x, interpolated_s0_y)*((blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)))))/(uint16)24)) - (blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)))))/(uint16)24))))/(uint16)24) + (blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((zi2.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)))))/(uint16)24))) - ((yf$9.stencil(interpolated_s0_x, interpolated_s0_y)*((blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y)))))/(uint16)24)) - (blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y)))))/(uint16)24))))/(uint16)24)) - (blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y)))))/(uint16)24))))/(uint16)16) + ((yf$9.stencil(interpolated_s0_x, interpolated_s0_y)*((blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32((yii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y)))))/(uint16)24)) - (blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y)))))/(uint16)24))))/(uint16)24)) + (blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) + ((xf.stencil(interpolated_s0_x, interpolated_s0_y)*(blury.stencil(int32((xii.stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y))) - blury.stencil(int32(xii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(yii.stencil(interpolated_s0_x, interpolated_s0_y)), int32(zi2.stencil(interpolated_s0_x, interpolated_s0_y)))))/(uint16)24)))
  auto hcompute_interpolated_stencil = interpolated_s0_x->add_op("op_hcompute_interpolated_stencil");
  hcompute_interpolated_stencil->add_function("hcompute_interpolated_stencil");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32((zi2_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32((yii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32(xii_stencil(interpolated_s0_x, interpolated_s0_y))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32((zi2_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32((yii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32((xii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32((zi2_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32(yii_stencil(interpolated_s0_x, interpolated_s0_y))", "int32(xii_stencil(interpolated_s0_x, interpolated_s0_y))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32((zi2_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32(yii_stencil(interpolated_s0_x, interpolated_s0_y))", "int32((xii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32(zi2_stencil(interpolated_s0_x, interpolated_s0_y))", "int32((yii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32(xii_stencil(interpolated_s0_x, interpolated_s0_y))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32(zi2_stencil(interpolated_s0_x, interpolated_s0_y))", "int32((yii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))", "int32((xii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32(zi2_stencil(interpolated_s0_x, interpolated_s0_y))", "int32(yii_stencil(interpolated_s0_x, interpolated_s0_y))", "int32(xii_stencil(interpolated_s0_x, interpolated_s0_y))");
  hcompute_interpolated_stencil->add_load("blury_stencil", "int32(zi2_stencil(interpolated_s0_x, interpolated_s0_y))", "int32(yii_stencil(interpolated_s0_x, interpolated_s0_y))", "int32((xii_stencil(interpolated_s0_x, interpolated_s0_y) + (uint16)1))");
  hcompute_interpolated_stencil->add_load("xf_stencil", "interpolated_s0_y", "interpolated_s0_x");
  hcompute_interpolated_stencil->add_load("yf_9_stencil", "interpolated_s0_y", "interpolated_s0_x");
  hcompute_interpolated_stencil->add_load("zf_stencil", "interpolated_s0_y", "interpolated_s0_x");
  prg.buffer_port_widths["interpolated_stencil"] = 16;
  hcompute_interpolated_stencil->add_store("interpolated_stencil", "interpolated_s0_y", "interpolated_s0_x");

//consuming interpolated.stencil
////producing hw_input_hist_count_global_wrapper.stencil
  auto hw_input_hist_count_global_wrapper_s0_z = prg.add_loop("hw_input_hist_count_global_wrapper_s0_z", -2, 20);
  auto hw_input_hist_count_global_wrapper_s0_y = hw_input_hist_count_global_wrapper_s0_z->add_loop("hw_input_hist_count_global_wrapper_s0_y", -2, 10);
  auto hw_input_hist_count_global_wrapper_s0_x = hw_input_hist_count_global_wrapper_s0_y->add_loop("hw_input_hist_count_global_wrapper_s0_x", -2, 10);

//store is: hw_input_hist_count_global_wrapper.stencil(hw_input_hist_count_global_wrapper_s0_x, hw_input_hist_count_global_wrapper_s0_y, hw_input_hist_count_global_wrapper_s0_z) = hw_input_hist_count.stencil(hw_input_hist_count_global_wrapper_s0_x, hw_input_hist_count_global_wrapper_s0_y, hw_input_hist_count_global_wrapper_s0_z)
  auto hcompute_hw_input_hist_count_global_wrapper_stencil = hw_input_hist_count_global_wrapper_s0_x->add_op("op_hcompute_hw_input_hist_count_global_wrapper_stencil");
  hcompute_hw_input_hist_count_global_wrapper_stencil->add_function("hcompute_hw_input_hist_count_global_wrapper_stencil");
  hcompute_hw_input_hist_count_global_wrapper_stencil->add_load("hw_input_hist_count_stencil", "hw_input_hist_count_global_wrapper_s0_z", "hw_input_hist_count_global_wrapper_s0_y", "hw_input_hist_count_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_hist_count_global_wrapper_stencil"] = 16;
  hcompute_hw_input_hist_count_global_wrapper_stencil->add_store("hw_input_hist_count_global_wrapper_stencil", "hw_input_hist_count_global_wrapper_s0_z", "hw_input_hist_count_global_wrapper_s0_y", "hw_input_hist_count_global_wrapper_s0_x");

//consuming hw_input_hist_count_global_wrapper.stencil
////producing input_copy_hist_count.stencil
  auto input_copy_hist_count_s0_z = prg.add_loop("input_copy_hist_count_s0_z", -2, 20);
  auto input_copy_hist_count_s0_y = input_copy_hist_count_s0_z->add_loop("input_copy_hist_count_s0_y", -2, 10);
  auto input_copy_hist_count_s0_x = input_copy_hist_count_s0_y->add_loop("input_copy_hist_count_s0_x", -2, 10);

//store is: input_copy_hist_count.stencil(input_copy_hist_count_s0_x, input_copy_hist_count_s0_y, input_copy_hist_count_s0_z) = hw_input_hist_count_global_wrapper.stencil(input_copy_hist_count_s0_x, input_copy_hist_count_s0_y, input_copy_hist_count_s0_z)
  auto hcompute_input_copy_hist_count_stencil = input_copy_hist_count_s0_x->add_op("op_hcompute_input_copy_hist_count_stencil");
  hcompute_input_copy_hist_count_stencil->add_function("hcompute_input_copy_hist_count_stencil");
  hcompute_input_copy_hist_count_stencil->add_load("hw_input_hist_count_global_wrapper_stencil", "input_copy_hist_count_s0_z", "input_copy_hist_count_s0_y", "input_copy_hist_count_s0_x");
  prg.buffer_port_widths["input_copy_hist_count_stencil"] = 16;
  hcompute_input_copy_hist_count_stencil->add_store("input_copy_hist_count_stencil", "input_copy_hist_count_s0_z", "input_copy_hist_count_s0_y", "input_copy_hist_count_s0_x");

//consuming input_copy_hist_count.stencil
////producing blur_count_z.stencil
  auto blur_count_z_s0_z = prg.add_loop("blur_count_z_s0_z", 0, 18);
  auto blur_count_z_s0_y = blur_count_z_s0_z->add_loop("blur_count_z_s0_y", -2, 10);
  auto blur_count_z_s0_x = blur_count_z_s0_y->add_loop("blur_count_z_s0_x", -2, 10);

//store is: blur_count_z.stencil(blur_count_z_s0_x, blur_count_z_s0_y, blur_count_z_s0_z) = ((input_copy_hist_count.stencil(blur_count_z_s0_x, blur_count_z_s0_y, (blur_count_z_s0_z + -1))*(uint16)4) + (input_copy_hist_count.stencil(blur_count_z_s0_x, blur_count_z_s0_y, (blur_count_z_s0_z + -2)) + ((input_copy_hist_count.stencil(blur_count_z_s0_x, blur_count_z_s0_y, blur_count_z_s0_z)*(uint16)6) + (input_copy_hist_count.stencil(blur_count_z_s0_x, blur_count_z_s0_y, (blur_count_z_s0_z + 2)) + (input_copy_hist_count.stencil(blur_count_z_s0_x, blur_count_z_s0_y, (blur_count_z_s0_z + 1))*(uint16)4)))))
  auto hcompute_blur_count_z_stencil = blur_count_z_s0_x->add_op("op_hcompute_blur_count_z_stencil");
  hcompute_blur_count_z_stencil->add_function("hcompute_blur_count_z_stencil");
  hcompute_blur_count_z_stencil->add_load("input_copy_hist_count_stencil", "(blur_count_z_s0_z + -1)", "blur_count_z_s0_y", "blur_count_z_s0_x");
  hcompute_blur_count_z_stencil->add_load("input_copy_hist_count_stencil", "(blur_count_z_s0_z + -2)", "blur_count_z_s0_y", "blur_count_z_s0_x");
  hcompute_blur_count_z_stencil->add_load("input_copy_hist_count_stencil", "blur_count_z_s0_z", "blur_count_z_s0_y", "blur_count_z_s0_x");
  hcompute_blur_count_z_stencil->add_load("input_copy_hist_count_stencil", "(blur_count_z_s0_z + 2)", "blur_count_z_s0_y", "blur_count_z_s0_x");
  hcompute_blur_count_z_stencil->add_load("input_copy_hist_count_stencil", "(blur_count_z_s0_z + 1)", "blur_count_z_s0_y", "blur_count_z_s0_x");
  prg.buffer_port_widths["blur_count_z_stencil"] = 16;
  hcompute_blur_count_z_stencil->add_store("blur_count_z_stencil", "blur_count_z_s0_z", "blur_count_z_s0_y", "blur_count_z_s0_x");

//consuming blur_count_z.stencil
////producing blur_count_x.stencil
  auto blur_count_x_s0_z = prg.add_loop("blur_count_x_s0_z", 0, 18);
  auto blur_count_x_s0_y = blur_count_x_s0_z->add_loop("blur_count_x_s0_y", -2, 10);
  auto blur_count_x_s0_x = blur_count_x_s0_y->add_loop("blur_count_x_s0_x", 0, 8);

//store is: blur_count_x.stencil(blur_count_x_s0_x, blur_count_x_s0_y, blur_count_x_s0_z) = ((blur_count_z.stencil((blur_count_x_s0_x + -1), blur_count_x_s0_y, blur_count_x_s0_z)*(uint16)4) + (blur_count_z.stencil((blur_count_x_s0_x + -2), blur_count_x_s0_y, blur_count_x_s0_z) + ((blur_count_z.stencil(blur_count_x_s0_x, blur_count_x_s0_y, blur_count_x_s0_z)*(uint16)6) + (blur_count_z.stencil((blur_count_x_s0_x + 2), blur_count_x_s0_y, blur_count_x_s0_z) + (blur_count_z.stencil((blur_count_x_s0_x + 1), blur_count_x_s0_y, blur_count_x_s0_z)*(uint16)4)))))
  auto hcompute_blur_count_x_stencil = blur_count_x_s0_x->add_op("op_hcompute_blur_count_x_stencil");
  hcompute_blur_count_x_stencil->add_function("hcompute_blur_count_x_stencil");
  hcompute_blur_count_x_stencil->add_load("blur_count_z_stencil", "blur_count_x_s0_z", "blur_count_x_s0_y", "(blur_count_x_s0_x + -1)");
  hcompute_blur_count_x_stencil->add_load("blur_count_z_stencil", "blur_count_x_s0_z", "blur_count_x_s0_y", "(blur_count_x_s0_x + -2)");
  hcompute_blur_count_x_stencil->add_load("blur_count_z_stencil", "blur_count_x_s0_z", "blur_count_x_s0_y", "blur_count_x_s0_x");
  hcompute_blur_count_x_stencil->add_load("blur_count_z_stencil", "blur_count_x_s0_z", "blur_count_x_s0_y", "(blur_count_x_s0_x + 2)");
  hcompute_blur_count_x_stencil->add_load("blur_count_z_stencil", "blur_count_x_s0_z", "blur_count_x_s0_y", "(blur_count_x_s0_x + 1)");
  prg.buffer_port_widths["blur_count_x_stencil"] = 16;
  hcompute_blur_count_x_stencil->add_store("blur_count_x_stencil", "blur_count_x_s0_z", "blur_count_x_s0_y", "blur_count_x_s0_x");

//consuming blur_count_x.stencil
////producing blur_count_y.stencil
  auto blur_count_y_s0_z = prg.add_loop("blur_count_y_s0_z", 0, 18);
  auto blur_count_y_s0_y = blur_count_y_s0_z->add_loop("blur_count_y_s0_y", 0, 8);
  auto blur_count_y_s0_x = blur_count_y_s0_y->add_loop("blur_count_y_s0_x", 0, 8);

//store is: blur_count_y.stencil(blur_count_y_s0_x, blur_count_y_s0_y, blur_count_y_s0_z) = ((blur_count_x.stencil(blur_count_y_s0_x, (blur_count_y_s0_y + -1), blur_count_y_s0_z)*(uint16)4) + (blur_count_x.stencil(blur_count_y_s0_x, (blur_count_y_s0_y + -2), blur_count_y_s0_z) + ((blur_count_x.stencil(blur_count_y_s0_x, blur_count_y_s0_y, blur_count_y_s0_z)*(uint16)6) + (blur_count_x.stencil(blur_count_y_s0_x, (blur_count_y_s0_y + 2), blur_count_y_s0_z) + (blur_count_x.stencil(blur_count_y_s0_x, (blur_count_y_s0_y + 1), blur_count_y_s0_z)*(uint16)4)))))
  auto hcompute_blur_count_y_stencil = blur_count_y_s0_x->add_op("op_hcompute_blur_count_y_stencil");
  hcompute_blur_count_y_stencil->add_function("hcompute_blur_count_y_stencil");
  hcompute_blur_count_y_stencil->add_load("blur_count_x_stencil", "blur_count_y_s0_z", "(blur_count_y_s0_y + -1)", "blur_count_y_s0_x");
  hcompute_blur_count_y_stencil->add_load("blur_count_x_stencil", "blur_count_y_s0_z", "(blur_count_y_s0_y + -2)", "blur_count_y_s0_x");
  hcompute_blur_count_y_stencil->add_load("blur_count_x_stencil", "blur_count_y_s0_z", "blur_count_y_s0_y", "blur_count_y_s0_x");
  hcompute_blur_count_y_stencil->add_load("blur_count_x_stencil", "blur_count_y_s0_z", "(blur_count_y_s0_y + 2)", "blur_count_y_s0_x");
  hcompute_blur_count_y_stencil->add_load("blur_count_x_stencil", "blur_count_y_s0_z", "(blur_count_y_s0_y + 1)", "blur_count_y_s0_x");
  prg.buffer_port_widths["blur_count_y_stencil"] = 16;
  hcompute_blur_count_y_stencil->add_store("blur_count_y_stencil", "blur_count_y_s0_z", "blur_count_y_s0_y", "blur_count_y_s0_x");

//consuming blur_count_y.stencil
////producing interpolated_count.stencil
  auto interpolated_count_s0_y = prg.add_loop("interpolated_count_s0_y", 0, 128);
  auto interpolated_count_s0_x = interpolated_count_s0_y->add_loop("interpolated_count_s0_x", 0, 128);

//store is: interpolated_count.stencil(interpolated_count_s0_x, interpolated_count_s0_y) = ((((zf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(((((yf$9.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*((blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)))))/(uint16)24)) - (blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)))))/(uint16)24))))/(uint16)24) + (blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)))))/(uint16)24))) - ((yf$9.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*((blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y)))))/(uint16)24)) - (blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y)))))/(uint16)24))))/(uint16)24)) - (blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y)))))/(uint16)24))))/(uint16)16) + ((yf$9.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*((blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32((yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y)))))/(uint16)24)) - (blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y)))))/(uint16)24))))/(uint16)24)) + (blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) + ((xf.stencil(interpolated_count_s0_x, interpolated_count_s0_y)*(blur_count_y.stencil(int32((xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y))) - blur_count_y.stencil(int32(xii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(yii.stencil(interpolated_count_s0_x, interpolated_count_s0_y)), int32(zi2.stencil(interpolated_count_s0_x, interpolated_count_s0_y)))))/(uint16)24)))
  auto hcompute_interpolated_count_stencil = interpolated_count_s0_x->add_op("op_hcompute_interpolated_count_stencil");
  hcompute_interpolated_count_stencil->add_function("hcompute_interpolated_count_stencil");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32((zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32((yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32(xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32((zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32((yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32((xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32((zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32(yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32(xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32((zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32(yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32((xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32(zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32((yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32(xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32(zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32((yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))", "int32((xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32(zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32(yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32(xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))");
  hcompute_interpolated_count_stencil->add_load("blur_count_y_stencil", "int32(zi2_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32(yii_stencil(interpolated_count_s0_x, interpolated_count_s0_y))", "int32((xii_stencil(interpolated_count_s0_x, interpolated_count_s0_y) + (uint16)1))");
  hcompute_interpolated_count_stencil->add_load("xf_stencil", "interpolated_count_s0_y", "interpolated_count_s0_x");
  hcompute_interpolated_count_stencil->add_load("yf_9_stencil", "interpolated_count_s0_y", "interpolated_count_s0_x");
  hcompute_interpolated_count_stencil->add_load("zf_stencil", "interpolated_count_s0_y", "interpolated_count_s0_x");
  prg.buffer_port_widths["interpolated_count_stencil"] = 16;
  hcompute_interpolated_count_stencil->add_store("interpolated_count_stencil", "interpolated_count_s0_y", "interpolated_count_s0_x");

//consuming interpolated_count.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 128);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 128);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = uint8((interpolated.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/interpolated_count.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("interpolated_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_load("interpolated_count_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


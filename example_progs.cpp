#include "example_progs.h"

prog counter() {
  prog prg;
  prg.compute_unit_file = "counter_compute.h";
  prg.name = "counter";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint8_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = uint8((((hw_output_s0_x_xi + hw_output_s0_y_yi) + int32(hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))) + int32(hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_x_xi");
  hcompute_hw_output_stencil->compute_unit_needs_index_variable("hw_output_s0_y_yi");

  return prg;
}

prog stereo() {
  prog prg;
  prg.compute_unit_file = "stereo_compute.h";
  prg.name = "stereo";

// Stencil<uint16_t, 152, 143> &hw_left_input_stencil = arg_0;
  prg.add_input("hw_left_input_stencil");
  prg.buffer_port_widths["hw_left_input_stencil"] = 16;
// Stencil<uint16_t, 143, 143> &hw_right_input_stencil = arg_1;
  prg.add_input("hw_right_input_stencil");
  prg.buffer_port_widths["hw_right_input_stencil"] = 16;
// Stencil<uint8_t, 128, 128> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 8;

////producing hw_left_input_global_wrapper.stencil
  auto hw_left_input_global_wrapper_s0_y = prg.add_loop("hw_left_input_global_wrapper_s0_y", -8, 135);
  auto hw_left_input_global_wrapper_s0_x = hw_left_input_global_wrapper_s0_y->add_loop("hw_left_input_global_wrapper_s0_x", -3, 149);

//store is: hw_left_input_global_wrapper.stencil(hw_left_input_global_wrapper_s0_x, hw_left_input_global_wrapper_s0_y) = hw_left_input.stencil(hw_left_input_global_wrapper_s0_x, hw_left_input_global_wrapper_s0_y)
  auto hcompute_hw_left_input_global_wrapper_stencil = hw_left_input_global_wrapper_s0_x->add_op("op_hcompute_hw_left_input_global_wrapper_stencil");
  hcompute_hw_left_input_global_wrapper_stencil->add_function("hcompute_hw_left_input_global_wrapper_stencil");
  hcompute_hw_left_input_global_wrapper_stencil->add_load("hw_left_input_stencil", "hw_left_input_global_wrapper_s0_y", "hw_left_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_left_input_global_wrapper_stencil"] = 16;
  hcompute_hw_left_input_global_wrapper_stencil->add_store("hw_left_input_global_wrapper_stencil", "hw_left_input_global_wrapper_s0_y", "hw_left_input_global_wrapper_s0_x");

//consuming hw_left_input_global_wrapper.stencil
////producing hw_left_input_copy.stencil
  auto hw_left_input_copy_s0_y = prg.add_loop("hw_left_input_copy_s0_y", -8, 135);
  auto hw_left_input_copy_s0_x = hw_left_input_copy_s0_y->add_loop("hw_left_input_copy_s0_x", -3, 149);

//store is: hw_left_input_copy.stencil(hw_left_input_copy_s0_x, hw_left_input_copy_s0_y) = hw_left_input_global_wrapper.stencil(hw_left_input_copy_s0_x, hw_left_input_copy_s0_y)
  auto hcompute_hw_left_input_copy_stencil = hw_left_input_copy_s0_x->add_op("op_hcompute_hw_left_input_copy_stencil");
  hcompute_hw_left_input_copy_stencil->add_function("hcompute_hw_left_input_copy_stencil");
  hcompute_hw_left_input_copy_stencil->add_load("hw_left_input_global_wrapper_stencil", "hw_left_input_copy_s0_y", "hw_left_input_copy_s0_x");
  prg.buffer_port_widths["hw_left_input_copy_stencil"] = 16;
  hcompute_hw_left_input_copy_stencil->add_store("hw_left_input_copy_stencil", "hw_left_input_copy_s0_y", "hw_left_input_copy_s0_x");

//consuming hw_left_input_copy.stencil
////producing hw_right_input_global_wrapper.stencil
  auto hw_right_input_global_wrapper_s0_y = prg.add_loop("hw_right_input_global_wrapper_s0_y", -8, 135);
  auto hw_right_input_global_wrapper_s0_x = hw_right_input_global_wrapper_s0_y->add_loop("hw_right_input_global_wrapper_s0_x", -8, 135);

//store is: hw_right_input_global_wrapper.stencil(hw_right_input_global_wrapper_s0_x, hw_right_input_global_wrapper_s0_y) = hw_right_input.stencil(hw_right_input_global_wrapper_s0_x, hw_right_input_global_wrapper_s0_y)
  auto hcompute_hw_right_input_global_wrapper_stencil = hw_right_input_global_wrapper_s0_x->add_op("op_hcompute_hw_right_input_global_wrapper_stencil");
  hcompute_hw_right_input_global_wrapper_stencil->add_function("hcompute_hw_right_input_global_wrapper_stencil");
  hcompute_hw_right_input_global_wrapper_stencil->add_load("hw_right_input_stencil", "hw_right_input_global_wrapper_s0_y", "hw_right_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_right_input_global_wrapper_stencil"] = 16;
  hcompute_hw_right_input_global_wrapper_stencil->add_store("hw_right_input_global_wrapper_stencil", "hw_right_input_global_wrapper_s0_y", "hw_right_input_global_wrapper_s0_x");

//consuming hw_right_input_global_wrapper.stencil
////producing hw_right_input_copy.stencil
  auto hw_right_input_copy_s0_y = prg.add_loop("hw_right_input_copy_s0_y", -8, 135);
  auto hw_right_input_copy_s0_x = hw_right_input_copy_s0_y->add_loop("hw_right_input_copy_s0_x", -8, 135);

//store is: hw_right_input_copy.stencil(hw_right_input_copy_s0_x, hw_right_input_copy_s0_y) = hw_right_input_global_wrapper.stencil(hw_right_input_copy_s0_x, hw_right_input_copy_s0_y)
  auto hcompute_hw_right_input_copy_stencil = hw_right_input_copy_s0_x->add_op("op_hcompute_hw_right_input_copy_stencil");
  hcompute_hw_right_input_copy_stencil->add_function("hcompute_hw_right_input_copy_stencil");
  hcompute_hw_right_input_copy_stencil->add_load("hw_right_input_global_wrapper_stencil", "hw_right_input_copy_s0_y", "hw_right_input_copy_s0_x");
  prg.buffer_port_widths["hw_right_input_copy_stencil"] = 16;
  hcompute_hw_right_input_copy_stencil->add_store("hw_right_input_copy_stencil", "hw_right_input_copy_s0_y", "hw_right_input_copy_s0_x");

//consuming hw_right_input_copy.stencil
////producing SAD.stencil
  auto SAD_s0_c = prg.add_loop("SAD_s0_c", 0, 10);
  auto SAD_s0_y = SAD_s0_c->add_loop("SAD_s0_y", 0, 128);
  auto SAD_s0_x = SAD_s0_y->add_loop("SAD_s0_x", 0, 128);

//store is: SAD.stencil(SAD_s0_x, SAD_s0_y, SAD_s0_c) = (uint16)0
  auto hcompute_SAD_stencil = SAD_s0_x->add_op("op_hcompute_SAD_stencil");
  hcompute_SAD_stencil->add_function("hcompute_SAD_stencil");
  prg.buffer_port_widths["SAD_stencil"] = 16;
  hcompute_SAD_stencil->add_store("SAD_stencil", "SAD_s0_c", "SAD_s0_y", "SAD_s0_x");
  auto SAD_s1_c = prg.add_loop("SAD_s1_c", 0, 10);
  auto SAD_s1_y = SAD_s1_c->add_loop("SAD_s1_y", 0, 128);
  auto SAD_s1_x = SAD_s1_y->add_loop("SAD_s1_x", 0, 128);
  auto SAD_s1_win_y = SAD_s1_x->add_loop("SAD_s1_win_y", -8, 8);
  auto SAD_s1_win_x = SAD_s1_win_y->add_loop("SAD_s1_win_x", -8, 8);

//store is: SAD.stencil(SAD_s1_x, SAD_s1_y, SAD_s1_c) = (SAD.stencil(SAD_s1_x, SAD_s1_y, SAD_s1_c) + absd(hw_right_input_copy.stencil((SAD_s1_win_x + SAD_s1_x), (SAD_s1_win_y + SAD_s1_y)), hw_left_input_copy.stencil((SAD_s1_win_x + ((SAD_s1_c + SAD_s1_x) + 5)), (SAD_s1_win_y + SAD_s1_y))))
  auto hcompute_SAD_stencil_1 = SAD_s1_win_x->add_op("op_hcompute_SAD_stencil_1");
  hcompute_SAD_stencil_1->add_function("hcompute_SAD_stencil_1");
  hcompute_SAD_stencil_1->add_load("SAD_stencil", "SAD_s1_c", "SAD_s1_y", "SAD_s1_x");
  hcompute_SAD_stencil_1->add_load("hw_left_input_copy_stencil", "(SAD_s1_win_y + SAD_s1_y)", "(SAD_s1_win_x + ((SAD_s1_c + SAD_s1_x) + 5))");
  hcompute_SAD_stencil_1->add_load("hw_right_input_copy_stencil", "(SAD_s1_win_y + SAD_s1_y)", "(SAD_s1_win_x + SAD_s1_x)");
  hcompute_SAD_stencil_1->add_store("SAD_stencil", "SAD_s1_c", "SAD_s1_y", "SAD_s1_x");

//consuming SAD.stencil
////producing offset1.stencil
  auto offset1_s0_y = prg.add_loop("offset1_s0_y", 0, 128);
  auto offset1_s0_x = offset1_s0_y->add_loop("offset1_s0_x", 0, 128);

//store is: offset1.stencil(offset1_s0_x, offset1_s0_y) = (uint16)65535
  auto hcompute_offset1_stencil = offset1_s0_x->add_op("op_hcompute_offset1_stencil");
  hcompute_offset1_stencil->add_function("hcompute_offset1_stencil");
  prg.buffer_port_widths["offset1_stencil"] = 16;
  hcompute_offset1_stencil->add_store("offset1_stencil", "offset1_s0_y", "offset1_s0_x");
  auto offset1_s1_y = prg.add_loop("offset1_s1_y", 0, 128);
  auto offset1_s1_x = offset1_s1_y->add_loop("offset1_s1_x", 0, 128);
  auto offset1_s1_search_x = offset1_s1_x->add_loop("offset1_s1_search_x", 0, 10);

//store is: offset1.stencil(offset1_s1_x, offset1_s1_y) = min(SAD.stencil(offset1_s1_x, offset1_s1_y, offset1_s1_search_x), offset1.stencil(offset1_s1_x, offset1_s1_y))
  auto hcompute_offset1_stencil_1 = offset1_s1_search_x->add_op("op_hcompute_offset1_stencil_1");
  hcompute_offset1_stencil_1->add_function("hcompute_offset1_stencil_1");
  hcompute_offset1_stencil_1->add_load("SAD_stencil", "offset1_s1_search_x", "offset1_s1_y", "offset1_s1_x");
  hcompute_offset1_stencil_1->add_load("offset1_stencil", "offset1_s1_y", "offset1_s1_x");
  hcompute_offset1_stencil_1->add_store("offset1_stencil", "offset1_s1_y", "offset1_s1_x");

//consuming offset1.stencil
////producing offset0.stencil
  auto offset0_s0_y = prg.add_loop("offset0_s0_y", 0, 128);
  auto offset0_s0_x = offset0_s0_y->add_loop("offset0_s0_x", 0, 128);

//store is: offset0.stencil(offset0_s0_x, offset0_s0_y) = (int8)0
  auto hcompute_offset0_stencil = offset0_s0_x->add_op("op_hcompute_offset0_stencil");
  hcompute_offset0_stencil->add_function("hcompute_offset0_stencil");
  prg.buffer_port_widths["offset0_stencil"] = 8;
  hcompute_offset0_stencil->add_store("offset0_stencil", "offset0_s0_y", "offset0_s0_x");
  auto offset0_s1_y = prg.add_loop("offset0_s1_y", 0, 128);
  auto offset0_s1_x = offset0_s1_y->add_loop("offset0_s1_x", 0, 128);
  auto offset0_s1_search_x = offset0_s1_x->add_loop("offset0_s1_search_x", 0, 10);

//store is: offset0.stencil(offset0_s1_x, offset0_s1_y) = select((SAD.stencil(offset0_s1_x, offset0_s1_y, offset0_s1_search_x) == offset1.stencil(offset0_s1_x, offset0_s1_y)), int8(offset0_s1_search_x), offset0.stencil(offset0_s1_x, offset0_s1_y))
  auto hcompute_offset0_stencil_1 = offset0_s1_search_x->add_op("op_hcompute_offset0_stencil_1");
  hcompute_offset0_stencil_1->add_function("hcompute_offset0_stencil_1");
  hcompute_offset0_stencil_1->add_load("SAD_stencil", "offset0_s1_search_x", "offset0_s1_y", "offset0_s1_x");
  hcompute_offset0_stencil_1->add_load("offset0_stencil", "offset0_s1_y", "offset0_s1_x");
  hcompute_offset0_stencil_1->add_load("offset1_stencil", "offset0_s1_y", "offset0_s1_x");
  hcompute_offset0_stencil_1->add_store("offset0_stencil", "offset0_s1_y", "offset0_s1_x");
  hcompute_offset0_stencil_1->compute_unit_needs_index_variable("offset0_s1_search_x");

//consuming offset0.stencil
////producing offset_out.stencil
  auto offset_out_s0_y = prg.add_loop("offset_out_s0_y", 0, 128);
  auto offset_out_s0_x = offset_out_s0_y->add_loop("offset_out_s0_x", 0, 128);

//store is: offset_out.stencil(offset_out_s0_x, offset_out_s0_y) = offset0.stencil(offset_out_s0_x, offset_out_s0_y)
  auto hcompute_offset_out_stencil = offset_out_s0_x->add_op("op_hcompute_offset_out_stencil");
  hcompute_offset_out_stencil->add_function("hcompute_offset_out_stencil");
  hcompute_offset_out_stencil->add_load("offset0_stencil", "offset_out_s0_y", "offset_out_s0_x");
  prg.buffer_port_widths["offset_out_stencil"] = 8;
  hcompute_offset_out_stencil->add_store("offset_out_stencil", "offset_out_s0_y", "offset_out_s0_x");

//consuming offset_out.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 128);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 128);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = uint8(((uint16(offset_out.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))*(uint16)255)/(uint16)10))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("offset_out_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


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

prog conv_multi() {
  prog prg;
  prg.compute_unit_file = "conv_multi_compute.h";
  prg.name = "conv_multi";

// Stencil<uint16_t, 64, 64, 2> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint8_t, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_copy.stencil
  auto hw_input_copy_s0_z = prg.add_loop("hw_input_copy_s0_z", 0, 2);
  auto hw_input_copy_s0_y = hw_input_copy_s0_z->add_loop("hw_input_copy_s0_y", 0, 64);
  auto hw_input_copy_s0_x = hw_input_copy_s0_y->add_loop("hw_input_copy_s0_x", 0, 64);

//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z)
  auto hcompute_hw_input_copy_stencil = hw_input_copy_s0_x->add_op("op_hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y", "hw_input_copy_s0_z");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y", "hw_input_copy_s0_z");

//consuming hw_input_copy.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);
////producing conv.stencil

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = (uint16)0
  auto hcompute_conv_stencil = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  auto conv_s1_r_y = hw_output_s0_x_xi->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = (hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), (conv.s1.r$y + hw_output.s0.y.yi), 0) + (conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) + hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), (conv.s1.r$y + hw_output.s0.y.yi), 1)))
  auto hcompute_conv_stencil_1 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_r_x + hw_output_s0_x_xi)", "(conv_s1_r_y + hw_output_s0_y_yi)", "0");
  hcompute_conv_stencil_1->add_load("hw_input_copy_stencil", "(conv_s1_r_x + hw_output_s0_x_xi)", "(conv_s1_r_y + hw_output_s0_y_yi)", "1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

prog strided_conv() {
  prog prg;
  prg.compute_unit_file = "strided_conv_compute.h";
  prg.name = "strided_conv";

// Stencil<uint16_t, 63, 63> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 31, 31> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 63);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 63);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 31);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 31);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 31);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 31);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = ((hw_input_global_wrapper.stencil((conv_s1_x*2), (conv_s1_y*2))*(uint16)11) + (conv.stencil(conv_s1_x, conv_s1_y) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 1), (conv_s1_y*2))*(uint16)14) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 2), (conv_s1_y*2))*(uint16)17) + ((hw_input_global_wrapper.stencil((conv_s1_x*2), ((conv_s1_y*2) + 1))*(uint16)12) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 2), ((conv_s1_y*2) + 1))*(uint16)18) + ((hw_input_global_wrapper.stencil((conv_s1_x*2), ((conv_s1_y*2) + 2))*(uint16)13) + ((hw_input_global_wrapper.stencil(((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2))*(uint16)19) + (hw_input_global_wrapper.stencil(((conv_s1_x*2) + 1), ((conv_s1_y*2) + 2))*(uint16)16)))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y*2)", "(conv_s1_x*2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y*2)", "((conv_s1_x*2) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y*2)", "((conv_s1_x*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 1)", "(conv_s1_x*2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 1)", "((conv_s1_x*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 2)", "(conv_s1_x*2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 2)", "((conv_s1_x*2) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "((conv_s1_y*2) + 2)", "((conv_s1_x*2) + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 31);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 31);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog accumulation() {
  prog prg;
  prg.compute_unit_file = "accumulation_compute.h";
  prg.name = "accumulation";

// Stencil<uint16_t, 64, 64> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 62);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 62);

//store is: conv.stencil(conv.s0.x, conv.s0.y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_x", "conv_s0_y");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 62);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 62);
////producing kernel.stencil

//consuming kernel.stencil
  auto conv_s1_r_y = conv_s1_x->add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);

//store is: conv.stencil(conv.s1.x, conv.s1.y) = (conv.stencil(conv.s1.x, conv.s1.y) + (hw_input.stencil((conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))*uint16(kernel.stencil((conv.s1.r$x + (conv.s1.r$y*3))))))
  auto hcompute_conv_stencil_1 = conv_s1_r_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_x", "conv_s1_y");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_r_x + conv_s1_x)", "(conv_s1_r_y + conv_s1_y)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_x", "conv_s1_y");
  hcompute_conv_stencil_1->compute_unit_needs_index_variable("conv_s1_r_x");
  hcompute_conv_stencil_1->compute_unit_needs_index_variable("conv_s1_r_y");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi");

  return prg;
}

prog unsharp() {
  prog prg;
  prg.compute_unit_file = "unsharp_compute.h";
  prg.name = "unsharp";

// Stencil<uint16_t, 3, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 3, 60, 60> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -2, 62);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -2, 62);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//consuming hw_input_global_wrapper.stencil
////producing gray.stencil
  auto gray_s0_y = prg.add_loop("gray_s0_y", -2, 62);
  auto gray_s0_x = gray_s0_y->add_loop("gray_s0_x", -2, 62);

//store is: gray.stencil(gray_s0_x, gray_s0_y) = (((hw_input_global_wrapper.stencil(1, gray_s0_x, gray_s0_y)*(uint16)150) + ((hw_input_global_wrapper.stencil(2, gray_s0_x, gray_s0_y)*(uint16)29) + (hw_input_global_wrapper.stencil(0, gray_s0_x, gray_s0_y)*(uint16)77)))/(uint16)256)
  auto hcompute_gray_stencil = gray_s0_x->add_op("op_hcompute_gray_stencil");
  hcompute_gray_stencil->add_function("hcompute_gray_stencil");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "gray_s0_y", "gray_s0_x", "1");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "gray_s0_y", "gray_s0_x", "2");
  hcompute_gray_stencil->add_load("hw_input_global_wrapper_stencil", "gray_s0_y", "gray_s0_x", "0");
  prg.buffer_port_widths["gray_stencil"] = 16;
  hcompute_gray_stencil->add_store("gray_stencil", "gray_s0_y", "gray_s0_x");

//consuming gray.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 60);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (int16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 60);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 60);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = (((((((((((((((((((((((((blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + -2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + -2))*(uint16)7))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -2))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + -1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + -1))*(uint16)14))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), blur_unnormalized_s1_y)*(uint16)17))) + int16((gray.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)21))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + 2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 2))*(uint16)7))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)3)))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + -2)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + -1)");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("gray_stencil", "(blur_unnormalized_s1_y + -1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");

//consuming blur_unnormalized.stencil
////producing ratio.stencil
  auto ratio_s0_y = prg.add_loop("ratio_s0_y", 0, 60);
  auto ratio_s0_x = ratio_s0_y->add_loop("ratio_s0_x", 0, 60);

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = min(((uint16(max(min(((int16(gray.stencil(ratio_s0_x, ratio_s0_y))*(int16)2) - int16(uint8((blur_unnormalized.stencil(ratio_s0_x, ratio_s0_y)/(int16)256)))), (int16)255), (int16)0))*(uint16)32)/max(gray.stencil(ratio_s0_x, ratio_s0_y), (uint16)1)), (uint16)255)
  auto hcompute_ratio_stencil = ratio_s0_x->add_op("op_hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_function("hcompute_ratio_stencil");
  hcompute_ratio_stencil->add_load("blur_unnormalized_stencil", "ratio_s0_y", "ratio_s0_x");
  hcompute_ratio_stencil->add_load("gray_stencil", "ratio_s0_y", "ratio_s0_x");
  prg.buffer_port_widths["ratio_stencil"] = 16;
  hcompute_ratio_stencil->add_store("ratio_stencil", "ratio_s0_y", "ratio_s0_x");

//consuming ratio.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");
  hcompute_hw_output_stencil->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");
  hcompute_hw_output_stencil_1->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");
  hcompute_hw_output_stencil_2->add_load("ratio_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

  return prg;
}

prog conv_3_3_wide() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_halide_compute.h";
  prg.name = "conv_3_3_wide";

// Stencil<uint16_t, 2048, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 2046, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 16);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 2048);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 14);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 2046);
////producing conv.stencil

//store is: conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = (uint16)0
  auto hcompute_conv_stencil = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

//store is: conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*(uint16)11) + (conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)*(uint16)14) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), hw_output_s0_y_yi)*(uint16)17) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))*(uint16)12) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))*(uint16)255) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 1))*(uint16)18) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 2))*(uint16)13) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 2))*(uint16)19) + (hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 2))*(uint16)16))))))))))
  auto hcompute_conv_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog gaussian() {
  prog prg;
  prg.compute_unit_file = "gaussian_compute.h";
  prg.name = "gaussian";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing blur_unnormalized.stencil
  auto blur_unnormalized_s0_y = prg.add_loop("blur_unnormalized_s0_y", 0, 62);
  auto blur_unnormalized_s0_x = blur_unnormalized_s0_y->add_loop("blur_unnormalized_s0_x", 0, 62);

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
  auto hcompute_blur_unnormalized_stencil = blur_unnormalized_s0_x->add_op("op_hcompute_blur_unnormalized_stencil");
  hcompute_blur_unnormalized_stencil->add_function("hcompute_blur_unnormalized_stencil");
  prg.buffer_port_widths["blur_unnormalized_stencil"] = 16;
  hcompute_blur_unnormalized_stencil->add_store("blur_unnormalized_stencil", "blur_unnormalized_s0_y", "blur_unnormalized_s0_x");
  auto blur_unnormalized_s1_y = prg.add_loop("blur_unnormalized_s1_y", 0, 62);
  auto blur_unnormalized_s1_x = blur_unnormalized_s1_y->add_loop("blur_unnormalized_s1_x", 0, 62);

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
  auto hcompute_blur_unnormalized_stencil_1 = blur_unnormalized_s1_x->add_op("op_hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_function("hcompute_blur_unnormalized_stencil_1");
  hcompute_blur_unnormalized_stencil_1->add_load("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "blur_unnormalized_s1_y", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 1)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "blur_unnormalized_s1_x");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 2)");
  hcompute_blur_unnormalized_stencil_1->add_load("hw_input_global_wrapper_stencil", "(blur_unnormalized_s1_y + 2)", "(blur_unnormalized_s1_x + 1)");
  hcompute_blur_unnormalized_stencil_1->add_store("blur_unnormalized_stencil", "blur_unnormalized_s1_y", "blur_unnormalized_s1_x");

//consuming blur_unnormalized.stencil
////producing blur.stencil
  auto blur_s0_y = prg.add_loop("blur_s0_y", 0, 62);
  auto blur_s0_x = blur_s0_y->add_loop("blur_s0_x", 0, 62);

//store is: blur.stencil(blur_s0_x, blur_s0_y) = (blur_unnormalized.stencil(blur_s0_x, blur_s0_y)/(uint16)256)
  auto hcompute_blur_stencil = blur_s0_x->add_op("op_hcompute_blur_stencil");
  hcompute_blur_stencil->add_function("hcompute_blur_stencil");
  hcompute_blur_stencil->add_load("blur_unnormalized_stencil", "blur_s0_y", "blur_s0_x");
  prg.buffer_port_widths["blur_stencil"] = 16;
  hcompute_blur_stencil->add_store("blur_stencil", "blur_s0_y", "blur_s0_x");

//consuming blur.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("blur_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


prog cascade() {
  prog prg;
  prg.compute_unit_file = "cascade_compute.h";
  prg.name = "cascade";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 60, 60> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing conv1.stencil
  auto conv1_s0_y = prg.add_loop("conv1_s0_y", 0, 62);
  auto conv1_s0_x = conv1_s0_y->add_loop("conv1_s0_x", 0, 62);

//store is: conv1.stencil(conv1_s0_x, conv1_s0_y) = (uint16)0
  auto hcompute_conv1_stencil = conv1_s0_x->add_op("op_hcompute_conv1_stencil");
  hcompute_conv1_stencil->add_function("hcompute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 16;
  hcompute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_y", "conv1_s0_x");
  auto conv1_s1_y = prg.add_loop("conv1_s1_y", 0, 62);
  auto conv1_s1_x = conv1_s1_y->add_loop("conv1_s1_x", 0, 62);

//store is: conv1.stencil(conv1_s1_x, conv1_s1_y) = (hw_input_global_wrapper.stencil(conv1_s1_x, conv1_s1_y) + (conv1.stencil(conv1_s1_x, conv1_s1_y) + ((hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 1))*(uint16)2) + (hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 2)) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), conv1_s1_y)*(uint16)2) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 1))*(uint16)4) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 2))*(uint16)2) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), conv1_s1_y) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 2)) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 1))*(uint16)2))))))))))
  auto hcompute_conv1_stencil_1 = conv1_s1_x->add_op("op_hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_function("hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_load("conv1_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_store("conv1_stencil", "conv1_s1_y", "conv1_s1_x");

//consuming conv1.stencil
////producing conv2.stencil
  auto conv2_s0_y = prg.add_loop("conv2_s0_y", 0, 60);
  auto conv2_s0_x = conv2_s0_y->add_loop("conv2_s0_x", 0, 60);

//store is: conv2.stencil(conv2_s0_x, conv2_s0_y) = (uint16)0
  auto hcompute_conv2_stencil = conv2_s0_x->add_op("op_hcompute_conv2_stencil");
  hcompute_conv2_stencil->add_function("hcompute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 16;
  hcompute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_y", "conv2_s0_x");
  auto conv2_s1_y = prg.add_loop("conv2_s1_y", 0, 60);
  auto conv2_s1_x = conv2_s1_y->add_loop("conv2_s1_x", 0, 60);

//store is: conv2.stencil(conv2_s1_x, conv2_s1_y) = ((conv1.stencil(conv2_s1_x, conv2_s1_y)*(uint16)33) + (conv2.stencil(conv2_s1_x, conv2_s1_y) + (((conv1.stencil((conv2_s1_x + 1), conv2_s1_y)*(uint16)2) + (conv1.stencil((conv2_s1_x + 2), conv2_s1_y) + ((conv1.stencil(conv2_s1_x, (conv2_s1_y + 1))*(uint16)2) + ((conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 1))*(uint16)4) + ((conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 1))*(uint16)2) + (conv1.stencil(conv2_s1_x, (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 2))*(uint16)2))))))))*(uint16)33)))
  auto hcompute_conv2_stencil_1 = conv2_s1_x->add_op("op_hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_function("hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv2_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_store("conv2_stencil", "conv2_s1_y", "conv2_s1_x");

//consuming conv2.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv2.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

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

prog pointwise() {
  prog prg;
  prg.compute_unit_file = "pointwise_compute.h";
  prg.name = "pointwise";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing mult.stencil
  auto mult_s0_y = prg.add_loop("mult_s0_y", 0, 64);
  auto mult_s0_x = mult_s0_y->add_loop("mult_s0_x", 0, 64);

//store is: mult.stencil(mult_s0_x, mult_s0_y) = (hw_input_global_wrapper.stencil(mult_s0_x, mult_s0_y)*(uint16)2)
  auto hcompute_mult_stencil = mult_s0_x->add_op("op_hcompute_mult_stencil");
  hcompute_mult_stencil->add_function("hcompute_mult_stencil");
  hcompute_mult_stencil->add_load("hw_input_global_wrapper_stencil", "mult_s0_y", "mult_s0_x");
  prg.buffer_port_widths["mult_stencil"] = 16;
  hcompute_mult_stencil->add_store("mult_stencil", "mult_s0_y", "mult_s0_x");

//consuming mult.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = mult.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("mult_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

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
// testing
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

prog conv_1_2() {
  prog prg;
  prg.compute_unit_file = "conv_1_2_compute.h";
  prg.name = "conv_1_2";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 63, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 64);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 63);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, 64);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 63);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (hw_input_global_wrapper.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input_global_wrapper.stencil((conv_s1_x + 1), conv_s1_y)*(uint16)3)))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 63);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog conv_3_3() {
  prog prg;
  prg.compute_unit_file = "conv_3_3_halide_compute.h";
  prg.name = "conv_3_3";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);
////producing conv.stencil

//store is: conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = (uint16)0
  auto hcompute_conv_stencil = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

//store is: conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*(uint16)11) + (conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)*(uint16)14) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), hw_output_s0_y_yi)*(uint16)17) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))*(uint16)12) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))*(uint16)255) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 1))*(uint16)18) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 2))*(uint16)13) + ((hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 2), (hw_output_s0_y_yi + 2))*(uint16)19) + (hw_input_global_wrapper.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 2))*(uint16)16))))))))))
  auto hcompute_conv_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 1)", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "hw_output_s0_x_xi");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(hw_output_s0_y_yi + 2)", "(hw_output_s0_x_xi + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

//consuming conv.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog unet_conv_3_3() {
  prog prg;
  prg.compute_unit_file = "unet_conv_3_3_compute.h";
  prg.name = "unet_conv_3_3";
  cout << "Name: " << prg.name << endl;

// Stencil<uint16_t, 2, 16, 16> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint16_t, 2, 4, 3, 3> &kernel_copy_stencil = arg_1;
  prg.add_input("kernel_copy_stencil");
  prg.buffer_port_widths["kernel_copy_stencil"] = 16;
// Stencil<uint16_t, 14, 14, 4> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 16);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 16);
  auto hw_input_s0_z = hw_input_s0_x->add_loop("hw_input_s0_z", 0, 2);

//store is: hw_input.stencil(hw_input_s0_z, hw_input_s0_x, hw_input_s0_y) = input_copy.stencil(hw_input_s0_z, hw_input_s0_x, hw_input_s0_y)
  auto hcompute_hw_input_stencil = hw_input_s0_z->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x", "hw_input_s0_z");

//consuming hw_input.stencil
////producing hw_kernel.stencil
  auto hw_kernel_s0_y = prg.add_loop("hw_kernel_s0_y", 0, 3);
  auto hw_kernel_s0_x = hw_kernel_s0_y->add_loop("hw_kernel_s0_x", 0, 3);
  auto hw_kernel_s0_w = hw_kernel_s0_x->add_loop("hw_kernel_s0_w", 0, 4);
  auto hw_kernel_s0_z = hw_kernel_s0_w->add_loop("hw_kernel_s0_z", 0, 2);

//store is: hw_kernel.stencil(hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y) = kernel_copy.stencil(hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y)
  auto hcompute_hw_kernel_stencil = hw_kernel_s0_z->add_op("op_hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_function("hcompute_hw_kernel_stencil");
  hcompute_hw_kernel_stencil->add_load("kernel_copy_stencil", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
  hcompute_hw_kernel_stencil->add_store("hw_kernel_stencil", "hw_kernel_s0_y", "hw_kernel_s0_x", "hw_kernel_s0_w", "hw_kernel_s0_z");

//consuming hw_kernel.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 14);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 14);
  auto conv_s0_w = conv_s0_x->add_loop("conv_s0_w", 0, 4);

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_w->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_w", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_r_z = conv_s1_r_x->add_loop("conv_s1_r_z", 0, 2);
  auto conv_s1_w = conv_s1_r_z->add_loop("conv_s1_w", 0, 4);
  auto conv_s1_y_y = conv_s1_w->add_loop("conv_s1_y_y", 0, 5);
  auto conv_s1_x_x = conv_s1_y_y->add_loop("conv_s1_x_x", 0, 5);

//store is: conv.stencil((conv_s1_x_x*3), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil((conv_s1_x_x*3), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x*3) + conv_s1_r_x), (conv_s1_r_y + (conv_s1_y_y*3)))))
  auto hcompute_conv_stencil_1 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "(conv_s1_x_x*3)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_r_y + (conv_s1_y_y*3))", "((conv_s1_x_x*3) + conv_s1_r_x)", "conv_s1_r_z");
  hcompute_conv_stencil_1->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "(conv_s1_x_x*3)");

//store is: conv.stencil(((conv_s1_x_x*3) + 1), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil(((conv_s1_x_x*3) + 1), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x*3) + conv_s1_r_x) + 1), (conv_s1_r_y + (conv_s1_y_y*3)))))
  auto hcompute_conv_stencil_2 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_load("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 1)");
  hcompute_conv_stencil_2->add_load("hw_input_stencil", "(conv_s1_r_y + (conv_s1_y_y*3))", "(((conv_s1_x_x*3) + conv_s1_r_x) + 1)", "conv_s1_r_z");
  hcompute_conv_stencil_2->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_2->add_store("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 1)");

//store is: conv.stencil(((conv_s1_x_x*3) + 2), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil(((conv_s1_x_x*3) + 2), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x*3) + conv_s1_r_x) + 2), (conv_s1_r_y + (conv_s1_y_y*3)))))
  auto hcompute_conv_stencil_3 = conv_s1_x_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 2)");
  hcompute_conv_stencil_3->add_load("hw_input_stencil", "(conv_s1_r_y + (conv_s1_y_y*3))", "(((conv_s1_x_x*3) + conv_s1_r_x) + 2)", "conv_s1_r_z");
  hcompute_conv_stencil_3->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_3->add_store("conv_stencil", "conv_s1_w", "(conv_s1_y_y*3)", "((conv_s1_x_x*3) + 2)");
  auto conv_s1_x_x_1 = conv_s1_y_y->add_loop("conv_s1_x_x_1", 0, 5);

//store is: conv.stencil((conv_s1_x_x_1*3), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil((conv_s1_x_x_1*3), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x_1*3) + conv_s1_r_x), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
  auto hcompute_conv_stencil_4 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "(conv_s1_x_x_1*3)");
  hcompute_conv_stencil_4->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)", "((conv_s1_x_x_1*3) + conv_s1_r_x)", "conv_s1_r_z");
  hcompute_conv_stencil_4->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_4->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "(conv_s1_x_x_1*3)");

//store is: conv.stencil(((conv_s1_x_x_1*3) + 1), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil(((conv_s1_x_x_1*3) + 1), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_1*3) + conv_s1_r_x) + 1), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
  auto hcompute_conv_stencil_5 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 1)");
  hcompute_conv_stencil_5->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)", "(((conv_s1_x_x_1*3) + conv_s1_r_x) + 1)", "conv_s1_r_z");
  hcompute_conv_stencil_5->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_5->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 1)");

//store is: conv.stencil(((conv_s1_x_x_1*3) + 2), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil(((conv_s1_x_x_1*3) + 2), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_1*3) + conv_s1_r_x) + 2), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
  auto hcompute_conv_stencil_6 = conv_s1_x_x_1->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 2)");
  hcompute_conv_stencil_6->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 1)", "(((conv_s1_x_x_1*3) + conv_s1_r_x) + 2)", "conv_s1_r_z");
  hcompute_conv_stencil_6->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_6->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 1)", "((conv_s1_x_x_1*3) + 2)");
  auto conv_s1_x_x_2 = conv_s1_y_y->add_loop("conv_s1_x_x_2", 0, 5);

//store is: conv.stencil((conv_s1_x_x_2*3), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil((conv_s1_x_x_2*3), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x_2*3) + conv_s1_r_x), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
  auto hcompute_conv_stencil_7 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "(conv_s1_x_x_2*3)");
  hcompute_conv_stencil_7->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)", "((conv_s1_x_x_2*3) + conv_s1_r_x)", "conv_s1_r_z");
  hcompute_conv_stencil_7->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_7->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "(conv_s1_x_x_2*3)");

//store is: conv.stencil(((conv_s1_x_x_2*3) + 1), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil(((conv_s1_x_x_2*3) + 1), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_2*3) + conv_s1_r_x) + 1), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
  auto hcompute_conv_stencil_8 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 1)");
  hcompute_conv_stencil_8->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)", "(((conv_s1_x_x_2*3) + conv_s1_r_x) + 1)", "conv_s1_r_z");
  hcompute_conv_stencil_8->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_8->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 1)");

//store is: conv.stencil(((conv_s1_x_x_2*3) + 2), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil(((conv_s1_x_x_2*3) + 2), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_2*3) + conv_s1_r_x) + 2), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
  auto hcompute_conv_stencil_9 = conv_s1_x_x_2->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 2)");
  hcompute_conv_stencil_9->add_load("hw_input_stencil", "((conv_s1_r_y + (conv_s1_y_y*3)) + 2)", "(((conv_s1_x_x_2*3) + conv_s1_r_x) + 2)", "conv_s1_r_z");
  hcompute_conv_stencil_9->add_load("hw_kernel_stencil", "conv_s1_r_y", "conv_s1_r_x", "conv_s1_w", "conv_s1_r_z");
  hcompute_conv_stencil_9->add_store("conv_stencil", "conv_s1_w", "((conv_s1_y_y*3) + 2)", "((conv_s1_x_x_2*3) + 2)");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 4);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 14);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 14);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog resnet() {
  prog prg;
  prg.compute_unit_file = "resnet_compute.h";
  prg.name = "resnet";

// Stencil<uint16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 8, 3, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 3> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);
  auto hw_input_global_wrapper_s0_z = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_z", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_z->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_z");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 3);
  auto hw_kernel_global_wrapper_s0_z = hw_kernel_global_wrapper_s0_w->add_loop("hw_kernel_global_wrapper_s0_z", 0, 8);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_z->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_3 = conv_s1_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_3->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_4 = conv_s1_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_4->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_5 = conv_s1_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_5->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog camera_pipeline_trunc() {
  prog prg;
  prg.compute_unit_file = "camera_pipeline_compute.h";
  prg.name = "camera_pipeline_trunc";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 58, 58, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -3, 61);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -3, 61);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

////producing denoised$1.stencil
  auto denoised_1_s0_y = prg.add_loop("denoised_1_s0_y", -1, 59);
  auto denoised_1_s0_x = denoised_1_s0_y->add_loop("denoised_1_s0_x", -1, 59);

//store is: denoised$1.stencil(denoised_1_s0_x, denoised_1_s0_y) = max(min(hw_input_global_wrapper.stencil(denoised_1_s0_x, denoised_1_s0_y), max(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + 2)), max(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + -2)), max(hw_input_global_wrapper.stencil((denoised_1_s0_x + -2), denoised_1_s0_y), hw_input_global_wrapper.stencil((denoised_1_s0_x + 2), denoised_1_s0_y))))), min(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + 2)), min(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + -2)), min(hw_input_global_wrapper.stencil((denoised_1_s0_x + -2), denoised_1_s0_y), hw_input_global_wrapper.stencil((denoised_1_s0_x + 2), denoised_1_s0_y)))))
  auto hcompute_denoised_1_stencil = denoised_1_s0_x->add_op("op_hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_function("hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "denoised_1_s0_y", "denoised_1_s0_x");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "(denoised_1_s0_y + 2)", "denoised_1_s0_x");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "(denoised_1_s0_y + -2)", "denoised_1_s0_x");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "denoised_1_s0_y", "(denoised_1_s0_x + -2)");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "denoised_1_s0_y", "(denoised_1_s0_x + 2)");
  prg.buffer_port_widths["denoised_1_stencil"] = 16;
  hcompute_denoised_1_stencil->add_store("denoised_1_stencil", "denoised_1_s0_y", "denoised_1_s0_x");

  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 60);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 60);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = curved.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("denoised_1_stencil", "hw_output_s0_y_yi-1", "hw_output_s0_x_xi-1");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog cascade(int arg_1, int arg_2, string suffix) {
  prog prg;
  prg.compute_unit_file = "cascade_compute.h";
  prg.name = "cascade" + suffix;

// Stencil<uint16_t, (outImgSizeX + 4), (outImgSizeY + 4)> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
int32_t outImgSizeX = arg_1;
int32_t outImgSizeY = arg_2;
// Stencil<uint16_t, outImgSizeX, outImgSizeY> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, (outImgSizeY + 4));
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, (outImgSizeX + 4));

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

////producing conv1.stencil
  auto conv1_s0_y = prg.add_loop("conv1_s0_y", 0, (outImgSizeY + 2));
  auto conv1_s0_x = conv1_s0_y->add_loop("conv1_s0_x", 0, (outImgSizeX + 2));

//store is: conv1.stencil(conv1_s0_x, conv1_s0_y) = (uint16)0
  auto hcompute_conv1_stencil = conv1_s0_x->add_op("op_hcompute_conv1_stencil");
  hcompute_conv1_stencil->add_function("hcompute_conv1_stencil");
  prg.buffer_port_widths["conv1_stencil"] = 16;
  hcompute_conv1_stencil->add_store("conv1_stencil", "conv1_s0_y", "conv1_s0_x");
  auto conv1_s1_y = prg.add_loop("conv1_s1_y", 0, (outImgSizeY + 2));
  auto conv1_s1_x = conv1_s1_y->add_loop("conv1_s1_x", 0, (outImgSizeX + 2));

//store is: conv1.stencil(conv1_s1_x, conv1_s1_y) = (hw_input_global_wrapper.stencil(conv1_s1_x, conv1_s1_y) + (conv1.stencil(conv1_s1_x, conv1_s1_y) + ((hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 1))*(uint16)2) + (hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 2)) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), conv1_s1_y)*(uint16)2) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 1))*(uint16)4) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 2))*(uint16)2) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), conv1_s1_y) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 2)) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 1))*(uint16)2))))))))))
  auto hcompute_conv1_stencil_1 = conv1_s1_x->add_op("op_hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_function("hcompute_conv1_stencil_1");
  hcompute_conv1_stencil_1->add_load("conv1_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "conv1_s1_x");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 1)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv1_s1_y", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 2)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv1_s1_y + 1)", "(conv1_s1_x + 2)");
  hcompute_conv1_stencil_1->add_store("conv1_stencil", "conv1_s1_y", "conv1_s1_x");

//consuming conv1.stencil
////producing conv2.stencil
  auto conv2_s0_y = prg.add_loop("conv2_s0_y", 0, outImgSizeY);
  auto conv2_s0_x = conv2_s0_y->add_loop("conv2_s0_x", 0, outImgSizeX);

//store is: conv2.stencil(conv2_s0_x, conv2_s0_y) = (uint16)0
  auto hcompute_conv2_stencil = conv2_s0_x->add_op("op_hcompute_conv2_stencil");
  hcompute_conv2_stencil->add_function("hcompute_conv2_stencil");
  prg.buffer_port_widths["conv2_stencil"] = 16;
  hcompute_conv2_stencil->add_store("conv2_stencil", "conv2_s0_y", "conv2_s0_x");
  auto conv2_s1_y = prg.add_loop("conv2_s1_y", 0, outImgSizeY);
  auto conv2_s1_x = conv2_s1_y->add_loop("conv2_s1_x", 0, outImgSizeX);

//store is: conv2.stencil(conv2_s1_x, conv2_s1_y) = (conv1.stencil(conv2_s1_x, conv2_s1_y) + (conv2.stencil(conv2_s1_x, conv2_s1_y) + ((conv1.stencil((conv2_s1_x + 1), conv2_s1_y)*(uint16)2) + (conv1.stencil((conv2_s1_x + 2), conv2_s1_y) + ((conv1.stencil(conv2_s1_x, (conv2_s1_y + 1))*(uint16)2) + ((conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 1))*(uint16)4) + ((conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 1))*(uint16)2) + (conv1.stencil(conv2_s1_x, (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 2))*(uint16)2))))))))))
  auto hcompute_conv2_stencil_1 = conv2_s1_x->add_op("op_hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_function("hcompute_conv2_stencil_1");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "conv2_s1_y", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 1)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 1)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_load("conv1_stencil", "(conv2_s1_y + 2)", "(conv2_s1_x + 2)");
  hcompute_conv2_stencil_1->add_load("conv2_stencil", "conv2_s1_y", "conv2_s1_x");
  hcompute_conv2_stencil_1->add_store("conv2_stencil", "conv2_s1_y", "conv2_s1_x");

//consuming conv2.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, outImgSizeY);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, outImgSizeX);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv2.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv2_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

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

prog conv_3_3(int32_t arg_1, int32_t arg_2, string suffix="") {
  prog prg;
  prg.compute_unit_file = "conv_3_3_compute.h";
  prg.name = "conv_3_3" + suffix;

// Stencil<uint16_t, (tilesize_x + 2), (tilesize_y + 2)> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  int32_t tilesize_x = arg_1 - 2;
  int32_t tilesize_y = arg_2 - 2;
// Stencil<uint16_t, tilesize_x, tilesize_y> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, (tilesize_y + 2));
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, (tilesize_x + 2));

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, tilesize_y);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, tilesize_x);

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = prg.add_loop("conv_s1_y", 0, tilesize_y);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, tilesize_x);

//store is: conv.stencil(conv_s1_x, conv_s1_y) = ((hw_input_global_wrapper.stencil(conv_s1_x, conv_s1_y)*(uint16)11) + (conv.stencil(conv_s1_x, conv_s1_y) + ((hw_input_global_wrapper.stencil((conv_s1_x + 1), conv_s1_y)*(uint16)14) + ((hw_input_global_wrapper.stencil((conv_s1_x + 2), conv_s1_y)*(uint16)17) + ((hw_input_global_wrapper.stencil(conv_s1_x, (conv_s1_y + 1))*(uint16)12) + ((hw_input_global_wrapper.stencil((conv_s1_x + 1), (conv_s1_y + 1))*(uint16)255) + ((hw_input_global_wrapper.stencil((conv_s1_x + 2), (conv_s1_y + 1))*(uint16)18) + ((hw_input_global_wrapper.stencil(conv_s1_x, (conv_s1_y + 2))*(uint16)13) + ((hw_input_global_wrapper.stencil((conv_s1_x + 2), (conv_s1_y + 2))*(uint16)19) + (hw_input_global_wrapper.stencil((conv_s1_x + 1), (conv_s1_y + 2))*(uint16)16))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, tilesize_y);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, tilesize_x);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog camera_pipeline() {
  prog prg;
  prg.compute_unit_file = "camera_pipeline_compute.h";
  prg.name = "camera_pipeline";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 58, 58, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -3, 61);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -3, 61);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing denoised$1.stencil
  auto denoised_1_s0_y = prg.add_loop("denoised_1_s0_y", -1, 59);
  auto denoised_1_s0_x = denoised_1_s0_y->add_loop("denoised_1_s0_x", -1, 59);

//store is: denoised$1.stencil(denoised_1_s0_x, denoised_1_s0_y) = max(min(hw_input_global_wrapper.stencil(denoised_1_s0_x, denoised_1_s0_y), max(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + 2)), max(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + -2)), max(hw_input_global_wrapper.stencil((denoised_1_s0_x + -2), denoised_1_s0_y), hw_input_global_wrapper.stencil((denoised_1_s0_x + 2), denoised_1_s0_y))))), min(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + 2)), min(hw_input_global_wrapper.stencil(denoised_1_s0_x, (denoised_1_s0_y + -2)), min(hw_input_global_wrapper.stencil((denoised_1_s0_x + -2), denoised_1_s0_y), hw_input_global_wrapper.stencil((denoised_1_s0_x + 2), denoised_1_s0_y)))))
  auto hcompute_denoised_1_stencil = denoised_1_s0_x->add_op("op_hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_function("hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "denoised_1_s0_y", "denoised_1_s0_x");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "(denoised_1_s0_y + 2)", "denoised_1_s0_x");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "(denoised_1_s0_y + -2)", "denoised_1_s0_x");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "denoised_1_s0_y", "(denoised_1_s0_x + -2)");
  hcompute_denoised_1_stencil->add_load("hw_input_global_wrapper_stencil", "denoised_1_s0_y", "(denoised_1_s0_x + 2)");
  prg.buffer_port_widths["denoised_1_stencil"] = 16;
  hcompute_denoised_1_stencil->add_store("denoised_1_stencil", "denoised_1_s0_y", "denoised_1_s0_x");

//consuming denoised$1.stencil
////producing demosaicked$1.stencil
  auto demosaicked_1_s0_y = prg.add_loop("demosaicked_1_s0_y", 0, 58);
  auto demosaicked_1_s0_x = demosaicked_1_s0_y->add_loop("demosaicked_1_s0_x", 0, 58);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y, 0) = select(((demosaicked_1_s0_y % 2) == 0), select(((demosaicked_1_s0_x % 2) == 0), ((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)), select(((demosaicked_1_s0_x % 2) == 0), select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) < absd(denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))), ((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2)) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil = demosaicked_1_s0_x->add_op("op_hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_function("hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "demosaicked_1_s0_y", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_y + 1)", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "demosaicked_1_s0_y", "(demosaicked_1_s0_x + -1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_y + 1)", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_y + -1)", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_y + -1)", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_y + -1)", "(demosaicked_1_s0_x + -1)");
  prg.buffer_port_widths["demosaicked_1_stencil"] = 16;
  hcompute_demosaicked_1_stencil->add_store("demosaicked_1_stencil", "0", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_y");
  auto demosaicked_1_s0_y_1 = prg.add_loop("demosaicked_1_s0_y_1", 0, 58);
  auto demosaicked_1_s0_x_1 = demosaicked_1_s0_y_1->add_loop("demosaicked_1_s0_x_1", 0, 58);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1, 1) = select(((demosaicked_1_s0_y_1 % 2) == 0), select(((demosaicked_1_s0_x_1 % 2) == 0), denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), select((absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1)) < absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2))), select(((demosaicked_1_s0_x_1 % 2) == 0), select((absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1)) < absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2)), denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)))
  auto hcompute_demosaicked_1_stencil_1 = demosaicked_1_s0_x_1->add_op("op_hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_function("hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "demosaicked_1_s0_y_1", "(demosaicked_1_s0_x_1 + -1)");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_1 + 1)", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "demosaicked_1_s0_y_1", "(demosaicked_1_s0_x_1 + 1)");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_1 + -1)", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_store("demosaicked_1_stencil", "1", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_y_1");
  auto demosaicked_1_s0_y_2 = prg.add_loop("demosaicked_1_s0_y_2", 0, 58);
  auto demosaicked_1_s0_x_2 = demosaicked_1_s0_y_2->add_loop("demosaicked_1_s0_x_2", 0, 58);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2, 2) = select(((demosaicked_1_s0_y_2 % 2) == 0), select(((demosaicked_1_s0_x_2 % 2) == 0), ((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) < absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)))), select(((demosaicked_1_s0_x_2 % 2) == 0), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), ((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil_2 = demosaicked_1_s0_x_2->add_op("op_hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_function("hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_2 + 1)", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_2 + 1)", "(demosaicked_1_s0_x_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "demosaicked_1_s0_y_2", "(demosaicked_1_s0_x_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_2 + -1)", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_2 + 1)", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "demosaicked_1_s0_y_2", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_y_2 + -1)", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_store("demosaicked_1_stencil", "2", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_y_2");

//consuming demosaicked$1.stencil
////producing corrected.stencil
  auto corrected_s0_y = prg.add_loop("corrected_s0_y", 0, 58);
  auto corrected_s0_x = corrected_s0_y->add_loop("corrected_s0_x", 0, 58);

//store is: corrected.stencil(corrected_s0_x, corrected_s0_y, 0) = uint16((((((int16(demosaicked$1.stencil(corrected_s0_x, corrected_s0_y, 0))*(int16)200) + (int16(demosaicked$1.stencil(corrected_s0_x, corrected_s0_y, 2))*(int16)17)) - (int16(demosaicked$1.stencil(corrected_s0_x, corrected_s0_y, 1))*(int16)44)) + (int16)-3900)/(int16)256))
  auto hcompute_corrected_stencil = corrected_s0_x->add_op("op_hcompute_corrected_stencil");
  hcompute_corrected_stencil->add_function("hcompute_corrected_stencil");
  hcompute_corrected_stencil->add_load("demosaicked_1_stencil", "0", "corrected_s0_y", "corrected_s0_x");
  hcompute_corrected_stencil->add_load("demosaicked_1_stencil", "2", "corrected_s0_y", "corrected_s0_x");
  hcompute_corrected_stencil->add_load("demosaicked_1_stencil", "1", "corrected_s0_y", "corrected_s0_x");
  prg.buffer_port_widths["corrected_stencil"] = 16;
  hcompute_corrected_stencil->add_store("corrected_stencil", "0", "corrected_s0_y", "corrected_s0_x");
  auto corrected_s0_y_1 = prg.add_loop("corrected_s0_y_1", 0, 58);
  auto corrected_s0_x_1 = corrected_s0_y_1->add_loop("corrected_s0_x_1", 0, 58);

//store is: corrected.stencil(corrected_s0_x_1, corrected_s0_y_1, 1) = uint16((((((int16(demosaicked$1.stencil(corrected_s0_x_1, corrected_s0_y_1, 1))*(int16)159) - (int16(demosaicked$1.stencil(corrected_s0_x_1, corrected_s0_y_1, 0))*(int16)38)) - (int16(demosaicked$1.stencil(corrected_s0_x_1, corrected_s0_y_1, 2))*(int16)21)) + (int16)-2541)/(int16)256))
  auto hcompute_corrected_stencil_1 = corrected_s0_x_1->add_op("op_hcompute_corrected_stencil_1");
  hcompute_corrected_stencil_1->add_function("hcompute_corrected_stencil_1");
  hcompute_corrected_stencil_1->add_load("demosaicked_1_stencil", "1", "corrected_s0_y_1", "corrected_s0_x_1");
  hcompute_corrected_stencil_1->add_load("demosaicked_1_stencil", "0", "corrected_s0_y_1", "corrected_s0_x_1");
  hcompute_corrected_stencil_1->add_load("demosaicked_1_stencil", "2", "corrected_s0_y_1", "corrected_s0_x_1");
  hcompute_corrected_stencil_1->add_store("corrected_stencil", "1", "corrected_s0_y_1", "corrected_s0_x_1");
  auto corrected_s0_y_2 = prg.add_loop("corrected_s0_y_2", 0, 58);
  auto corrected_s0_x_2 = corrected_s0_y_2->add_loop("corrected_s0_x_2", 0, 58);

//store is: corrected.stencil(corrected_s0_x_2, corrected_s0_y_2, 2) = uint16((((((int16(demosaicked$1.stencil(corrected_s0_x_2, corrected_s0_y_2, 2))*(int16)228) - (int16(demosaicked$1.stencil(corrected_s0_x_2, corrected_s0_y_2, 1))*(int16)73)) - (int16(demosaicked$1.stencil(corrected_s0_x_2, corrected_s0_y_2, 0))*(int16)8)) + (int16)-2008)/(int16)256))
  auto hcompute_corrected_stencil_2 = corrected_s0_x_2->add_op("op_hcompute_corrected_stencil_2");
  hcompute_corrected_stencil_2->add_function("hcompute_corrected_stencil_2");
  hcompute_corrected_stencil_2->add_load("demosaicked_1_stencil", "2", "corrected_s0_y_2", "corrected_s0_x_2");
  hcompute_corrected_stencil_2->add_load("demosaicked_1_stencil", "1", "corrected_s0_y_2", "corrected_s0_x_2");
  hcompute_corrected_stencil_2->add_load("demosaicked_1_stencil", "0", "corrected_s0_y_2", "corrected_s0_x_2");
  hcompute_corrected_stencil_2->add_store("corrected_stencil", "2", "corrected_s0_y_2", "corrected_s0_x_2");

//consuming corrected.stencil
////producing curvea0

//consuming curvea0
////producing curved.stencil
  auto curved_s0_y = prg.add_loop("curved_s0_y", 0, 58);
  auto curved_s0_x = curved_s0_y->add_loop("curved_s0_x", 0, 58);

//store is: curved.stencil(curved_s0_x, curved_s0_y, 0) = curvea0[int32(min(corrected.stencil(curved_s0_x, curved_s0_y, 0), (uint16)255))]
  auto hcompute_curved_stencil = curved_s0_x->add_op("op_hcompute_curved_stencil");
  hcompute_curved_stencil->add_function("hcompute_curved_stencil");
  hcompute_curved_stencil->add_load("corrected_stencil", "0", "curved_s0_y", "curved_s0_x");
  prg.buffer_port_widths["curved_stencil"] = 16;
  hcompute_curved_stencil->add_store("curved_stencil", "0", "curved_s0_y", "curved_s0_x");
  auto curved_s0_y_1 = prg.add_loop("curved_s0_y_1", 0, 58);
  auto curved_s0_x_1 = curved_s0_y_1->add_loop("curved_s0_x_1", 0, 58);

//store is: curved.stencil(curved_s0_x_1, curved_s0_y_1, 1) = curvea0[int32(min(corrected.stencil(curved_s0_x_1, curved_s0_y_1, 1), (uint16)255))]
  auto hcompute_curved_stencil_1 = curved_s0_x_1->add_op("op_hcompute_curved_stencil_1");
  hcompute_curved_stencil_1->add_function("hcompute_curved_stencil_1");
  hcompute_curved_stencil_1->add_load("corrected_stencil", "1", "curved_s0_y_1", "curved_s0_x_1");
  hcompute_curved_stencil_1->add_store("curved_stencil", "1", "curved_s0_y_1", "curved_s0_x_1");
  auto curved_s0_y_2 = prg.add_loop("curved_s0_y_2", 0, 58);
  auto curved_s0_x_2 = curved_s0_y_2->add_loop("curved_s0_x_2", 0, 58);

//store is: curved.stencil(curved_s0_x_2, curved_s0_y_2, 2) = curvea0[int32(min(corrected.stencil(curved_s0_x_2, curved_s0_y_2, 2), (uint16)255))]
  auto hcompute_curved_stencil_2 = curved_s0_x_2->add_op("op_hcompute_curved_stencil_2");
  hcompute_curved_stencil_2->add_function("hcompute_curved_stencil_2");
  hcompute_curved_stencil_2->add_load("corrected_stencil", "2", "curved_s0_y_2", "curved_s0_x_2");
  hcompute_curved_stencil_2->add_store("curved_stencil", "2", "curved_s0_y_2", "curved_s0_x_2");

//consuming curved.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = curved.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("curved_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 58);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 58);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = curved.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("curved_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 58);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 58);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = curved.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("curved_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");

  return prg;
}

prog down_sample() {
  prog prg;
  prg.compute_unit_file = "down_sample_compute.h";
  prg.name = "down_sample";

// Stencil<uint16_t, 64, 64, 4> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 32, 32, 4> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_z = prg.add_loop("hw_input_s0_z", 0, 4);
  auto hw_input_s0_y = hw_input_s0_z->add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_z) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_z)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_z");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_z");

//consuming hw_input.stencil
////producing avg_pool.stencil
  auto avg_pool_s0_z = prg.add_loop("avg_pool_s0_z", 0, 4);
  auto avg_pool_s0_y = avg_pool_s0_z->add_loop("avg_pool_s0_y", 0, 32);
  auto avg_pool_s0_x = avg_pool_s0_y->add_loop("avg_pool_s0_x", 0, 32);

//store is: avg_pool.stencil(avg_pool_s0_x, avg_pool_s0_y, avg_pool_s0_z) = (uint16)0
  auto hcompute_avg_pool_stencil = avg_pool_s0_x->add_op("op_hcompute_avg_pool_stencil");
  hcompute_avg_pool_stencil->add_function("hcompute_avg_pool_stencil");
  prg.buffer_port_widths["avg_pool_stencil"] = 16;
  hcompute_avg_pool_stencil->add_store("avg_pool_stencil", "avg_pool_s0_x", "avg_pool_s0_y", "avg_pool_s0_z");
  auto avg_pool_s1_z = prg.add_loop("avg_pool_s1_z", 0, 4);
  auto avg_pool_s1_y = avg_pool_s1_z->add_loop("avg_pool_s1_y", 0, 32);
  auto avg_pool_s1_x = avg_pool_s1_y->add_loop("avg_pool_s1_x", 0, 32);

//store is: avg_pool.stencil(avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z) = (hw_input.stencil((avg_pool_s1_x*2), (avg_pool_s1_y*2), avg_pool_s1_z) + (avg_pool.stencil(avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z) + (hw_input.stencil(((avg_pool_s1_x*2) + 1), (avg_pool_s1_y*2), avg_pool_s1_z) + (hw_input.stencil(((avg_pool_s1_x*2) + 1), ((avg_pool_s1_y*2) + 1), avg_pool_s1_z) + hw_input.stencil((avg_pool_s1_x*2), ((avg_pool_s1_y*2) + 1), avg_pool_s1_z)))))
  auto hcompute_avg_pool_stencil_1 = avg_pool_s1_x->add_op("op_hcompute_avg_pool_stencil_1");
  hcompute_avg_pool_stencil_1->add_function("hcompute_avg_pool_stencil_1");
  hcompute_avg_pool_stencil_1->add_load("avg_pool_stencil", "avg_pool_s1_x", "avg_pool_s1_y", "avg_pool_s1_z");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "(avg_pool_s1_x*2)", "(avg_pool_s1_y*2)", "avg_pool_s1_z");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "((avg_pool_s1_x*2) + 1)", "(avg_pool_s1_y*2)", "avg_pool_s1_z");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "((avg_pool_s1_x*2) + 1)", "((avg_pool_s1_y*2) + 1)", "avg_pool_s1_z");
  hcompute_avg_pool_stencil_1->add_load("hw_input_stencil", "(avg_pool_s1_x*2)", "((avg_pool_s1_y*2) + 1)", "avg_pool_s1_z");
  hcompute_avg_pool_stencil_1->add_store("avg_pool_stencil", "avg_pool_s1_x", "avg_pool_s1_y", "avg_pool_s1_z");

//consuming avg_pool.stencil
  auto hw_output_s0_z = prg.add_loop("hw_output_s0_z", 0, 4);
  auto hw_output_s0_y_xo = hw_output_s0_z->add_loop("hw_output_s0_y_xo", 0, 32);
  auto hw_output_s0_x_yi = hw_output_s0_y_xo->add_loop("hw_output_s0_x_yi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z) = uint8((avg_pool.stencil(hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z)/(uint16)4))
  auto hcompute_hw_output_stencil = hw_output_s0_x_yi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("avg_pool_stencil", "hw_output_s0_x_yi", "hw_output_s0_y_xo", "hw_output_s0_z");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_yi", "hw_output_s0_y_xo", "hw_output_s0_z");

  return prg;
}

prog up_sample() {
  prog prg;
  prg.compute_unit_file = "up_sample_compute.h";
  prg.name = "up_sample";

// Stencil<uint16_t, 64, 64, 1> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 128, 128, 1> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, 0) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, 0)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_y", "hw_input_s0_x");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing nearest_neighbor.stencil
  auto nearest_neighbor_s0_y = prg.add_loop("nearest_neighbor_s0_y", 0, 128);
  auto nearest_neighbor_s0_x = nearest_neighbor_s0_y->add_loop("nearest_neighbor_s0_x", 0, 128);

//store is: nearest_neighbor.stencil(nearest_neighbor_s0_x, nearest_neighbor_s0_y, 0) = hw_input.stencil((nearest_neighbor_s0_x/2), (nearest_neighbor_s0_y/2), 0)
  auto hcompute_nearest_neighbor_stencil = nearest_neighbor_s0_x->add_op("op_hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_function("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_load("hw_input_stencil", "floor((nearest_neighbor_s0_y/2))", "floor((nearest_neighbor_s0_x/2))");
  prg.buffer_port_widths["nearest_neighbor_stencil"] = 16;
  hcompute_nearest_neighbor_stencil->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_y", "nearest_neighbor_s0_x" );

//consuming nearest_neighbor.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 128);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 128);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = uint8(nearest_neighbor.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("nearest_neighbor_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

/*
prog up_sample_exp() {
  prog prg;
  prg.compute_unit_file = "up_sample_compute.h";
  prg.name = "up_sample";

// Stencil<uint16_t, 64, 64, 1> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 128, 128, 1> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_y = prg.add_loop("hw_input_s0_y", 0, 64);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 64);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, 0) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, 0)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "0");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "0");

//consuming hw_input.stencil
////producing nearest_neighbor.stencil
  auto nearest_neighbor_s0_y_o = prg.add_loop("nearest_neighbor_s0_y_o", 0, 64);
  auto nearest_neighbor_s0_y_i = nearest_neighbor_s0_y_o->add_loop("nearest_neighbor_s0_y_i", 0, 2);
  auto nearest_neighbor_s0_x_o = nearest_neighbor_s0_y_i->add_loop("nearest_neighbor_s0_x_o", 0, 64);
  auto nearest_neighbor_s0_x_i = nearest_neighbor_s0_x_o->add_loop("nearest_neighbor_s0_x_i", 0, 2);

//store is: nearest_neighbor.stencil(nearest_neighbor_s0_x, nearest_neighbor_s0_y, 0) = hw_input.stencil((nearest_neighbor_s0_x/2), (nearest_neighbor_s0_y/2), 0)
  auto hcompute_nearest_neighbor_stencil = nearest_neighbor_s0_x_i->add_op("op_hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_function("hcompute_nearest_neighbor_stencil");
  hcompute_nearest_neighbor_stencil->add_load("hw_input_stencil", "(nearest_neighbor_s0_x_o)", "(nearest_neighbor_s0_y_o)", "0");
  prg.buffer_port_widths["nearest_neighbor_stencil"] = 16;
  hcompute_nearest_neighbor_stencil->add_store("nearest_neighbor_stencil", "nearest_neighbor_s0_x_i", "nearest_neighbor_s0_x_o", "nearest_neighbor_s0_y_i", "nearest_neighbor_s0_y_o", "0");

//consuming nearest_neighbor.stencil
  auto hw_output_s0_y_yo = prg.add_loop("hw_output_s0_y_yo", 0, 64);
  auto hw_output_s0_y_yi = hw_output_s0_y_yo->add_loop("hw_output_s0_y_yi", 0, 2);
  auto hw_output_s0_x_xo = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xo", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_x_xo->add_loop("hw_output_s0_x_xi", 0, 2);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = uint8(nearest_neighbor.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("nearest_neighbor_stencil", "hw_output_s0_x_xi", "hw_output_s0_x_xo", "hw_output_s0_y_yi","hw_output_s0_y_yo", "0");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi","hw_output_s0_x_xo", "hw_output_s0_y_yi","hw_output_s0_y_yo", "0");

  return prg;
}*/

prog conv_layer() {
  prog prg;
  prg.compute_unit_file = "conv_layer_compute.h";
  prg.name = "conv_layer";

// Stencil<uint16_t, 18, 18, 4> &input_copy_stencil = arg_0;
  prg.add_input("input_copy_stencil");
  prg.buffer_port_widths["input_copy_stencil"] = 16;
// Stencil<uint8_t, 16, 16, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input.stencil
  auto hw_input_s0_c = prg.add_loop("hw_input_s0_c", 0, 4);
  auto hw_input_s0_y = hw_input_s0_c->add_loop("hw_input_s0_y", 0, 18);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 18);

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_c) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_c)
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_copy_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_x", "hw_input_s0_y", "hw_input_s0_c");

//consuming hw_input.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_c = prg.add_loop("dw_conv_s0_c", 0, 4);
  auto dw_conv_s0_y = dw_conv_s0_c->add_loop("dw_conv_s0_y", 0, 16);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 16);

//store is: dw_conv.stencil(dw_conv_s0_x, dw_conv_s0_y, dw_conv_s0_c) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_x", "dw_conv_s0_y", "dw_conv_s0_c");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 16);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x, dw_conv_s1_y, 0) = (((((((((dw_conv.stencil(dw_conv_s1_x, dw_conv_s1_y, 0) + int16(hw_input.stencil(dw_conv_s1_x, dw_conv_s1_y, 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), dw_conv_s1_y, 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), dw_conv_s1_y, 0))) + int16(hw_input.stencil(dw_conv_s1_x, (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil(dw_conv_s1_x, (dw_conv_s1_y + 2), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), (dw_conv_s1_y + 2), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), (dw_conv_s1_y + 2), 0)))
  auto hcompute_dw_conv_stencil_1 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_load("dw_conv_stencil", "dw_conv_s1_x", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "dw_conv_s1_x", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 1)", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 2)", "dw_conv_s1_y", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "dw_conv_s1_x", "(dw_conv_s1_y + 1)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 1)", "(dw_conv_s1_y + 1)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 2)", "(dw_conv_s1_y + 1)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "dw_conv_s1_x", "(dw_conv_s1_y + 2)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 1)", "(dw_conv_s1_y + 2)", "0");
  hcompute_dw_conv_stencil_1->add_load("hw_input_stencil", "(dw_conv_s1_x + 2)", "(dw_conv_s1_y + 2)", "0");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s1_x", "dw_conv_s1_y", "0");
  auto dw_conv_s1_y_1 = prg.add_loop("dw_conv_s1_y_1", 0, 16);
  auto dw_conv_s1_x_1 = dw_conv_s1_y_1->add_loop("dw_conv_s1_x_1", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1) = (((((((((dw_conv.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1) + int16(hw_input.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), dw_conv_s1_y_1, 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), dw_conv_s1_y_1, 1))) + int16(hw_input.stencil(dw_conv_s1_x_1, (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil(dw_conv_s1_x_1, (dw_conv_s1_y_1 + 2), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), (dw_conv_s1_y_1 + 2), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), (dw_conv_s1_y_1 + 2), 1)))
  auto hcompute_dw_conv_stencil_2 = dw_conv_s1_x_1->add_op("op_hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_function("hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_load("dw_conv_stencil", "dw_conv_s1_x_1", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "dw_conv_s1_x_1", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 1)", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 2)", "dw_conv_s1_y_1", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "dw_conv_s1_x_1", "(dw_conv_s1_y_1 + 1)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 1)", "(dw_conv_s1_y_1 + 1)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 2)", "(dw_conv_s1_y_1 + 1)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "dw_conv_s1_x_1", "(dw_conv_s1_y_1 + 2)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 1)", "(dw_conv_s1_y_1 + 2)", "1");
  hcompute_dw_conv_stencil_2->add_load("hw_input_stencil", "(dw_conv_s1_x_1 + 2)", "(dw_conv_s1_y_1 + 2)", "1");
  hcompute_dw_conv_stencil_2->add_store("dw_conv_stencil", "dw_conv_s1_x_1", "dw_conv_s1_y_1", "1");
  auto dw_conv_s1_y_2 = prg.add_loop("dw_conv_s1_y_2", 0, 16);
  auto dw_conv_s1_x_2 = dw_conv_s1_y_2->add_loop("dw_conv_s1_x_2", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2) = (((((((((dw_conv.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2) + int16(hw_input.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), dw_conv_s1_y_2, 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), dw_conv_s1_y_2, 2))) + int16(hw_input.stencil(dw_conv_s1_x_2, (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil(dw_conv_s1_x_2, (dw_conv_s1_y_2 + 2), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), (dw_conv_s1_y_2 + 2), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), (dw_conv_s1_y_2 + 2), 2)))
  auto hcompute_dw_conv_stencil_3 = dw_conv_s1_x_2->add_op("op_hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_function("hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_load("dw_conv_stencil", "dw_conv_s1_x_2", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "dw_conv_s1_x_2", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 1)", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 2)", "dw_conv_s1_y_2", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "dw_conv_s1_x_2", "(dw_conv_s1_y_2 + 1)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 1)", "(dw_conv_s1_y_2 + 1)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 2)", "(dw_conv_s1_y_2 + 1)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "dw_conv_s1_x_2", "(dw_conv_s1_y_2 + 2)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 1)", "(dw_conv_s1_y_2 + 2)", "2");
  hcompute_dw_conv_stencil_3->add_load("hw_input_stencil", "(dw_conv_s1_x_2 + 2)", "(dw_conv_s1_y_2 + 2)", "2");
  hcompute_dw_conv_stencil_3->add_store("dw_conv_stencil", "dw_conv_s1_x_2", "dw_conv_s1_y_2", "2");
  auto dw_conv_s1_y_3 = prg.add_loop("dw_conv_s1_y_3", 0, 16);
  auto dw_conv_s1_x_3 = dw_conv_s1_y_3->add_loop("dw_conv_s1_x_3", 0, 16);

//store is: dw_conv.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3) = (((((((((dw_conv.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3) + int16(hw_input.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), dw_conv_s1_y_3, 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), dw_conv_s1_y_3, 3))) + int16(hw_input.stencil(dw_conv_s1_x_3, (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil(dw_conv_s1_x_3, (dw_conv_s1_y_3 + 2), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), (dw_conv_s1_y_3 + 2), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), (dw_conv_s1_y_3 + 2), 3)))
  auto hcompute_dw_conv_stencil_4 = dw_conv_s1_x_3->add_op("op_hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_function("hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_load("dw_conv_stencil", "dw_conv_s1_x_3", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "dw_conv_s1_x_3", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 1)", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 2)", "dw_conv_s1_y_3", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "dw_conv_s1_x_3", "(dw_conv_s1_y_3 + 1)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 1)", "(dw_conv_s1_y_3 + 1)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 2)", "(dw_conv_s1_y_3 + 1)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "dw_conv_s1_x_3", "(dw_conv_s1_y_3 + 2)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 1)", "(dw_conv_s1_y_3 + 2)", "3");
  hcompute_dw_conv_stencil_4->add_load("hw_input_stencil", "(dw_conv_s1_x_3 + 2)", "(dw_conv_s1_y_3 + 2)", "3");
  hcompute_dw_conv_stencil_4->add_store("dw_conv_stencil", "dw_conv_s1_x_3", "dw_conv_s1_y_3", "3");

//consuming dw_conv.stencil
////producing pw_conv.stencil
  auto pw_conv_s0_k = prg.add_loop("pw_conv_s0_k", 0, 3);
  auto pw_conv_s0_y = pw_conv_s0_k->add_loop("pw_conv_s0_y", 0, 16);
  auto pw_conv_s0_x = pw_conv_s0_y->add_loop("pw_conv_s0_x", 0, 16);
  auto pw_conv_s0_c = pw_conv_s0_x->add_loop("pw_conv_s0_c", 0, 4);

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_x, pw_conv_s0_y, pw_conv_s0_c) = (int16)0
  auto hcompute_pw_conv_stencil = pw_conv_s0_c->add_op("op_hcompute_pw_conv_stencil");
  hcompute_pw_conv_stencil->add_function("hcompute_pw_conv_stencil");
  prg.buffer_port_widths["pw_conv_stencil"] = 16;
  hcompute_pw_conv_stencil->add_store("pw_conv_stencil", "pw_conv_s0_k", "pw_conv_s0_x", "pw_conv_s0_y", "pw_conv_s0_c");
  auto pw_conv_s1_y = prg.add_loop("pw_conv_s1_y", 0, 16);
  auto pw_conv_s1_x = pw_conv_s1_y->add_loop("pw_conv_s1_x", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(0, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
  auto hcompute_pw_conv_stencil_1 = pw_conv_s1_x->add_op("op_hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_function("hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_load("dw_conv_stencil", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_1->add_load("pw_conv_stencil", "0", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_1->add_store("pw_conv_stencil", "0", "pw_conv_s1_x", "pw_conv_s1_y", "0");

//store is: pw_conv.stencil(1, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(1, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
  auto hcompute_pw_conv_stencil_2 = pw_conv_s1_x->add_op("op_hcompute_pw_conv_stencil_2");
  hcompute_pw_conv_stencil_2->add_function("hcompute_pw_conv_stencil_2");
  hcompute_pw_conv_stencil_2->add_load("dw_conv_stencil", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_2->add_load("pw_conv_stencil", "1", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_2->add_store("pw_conv_stencil", "1", "pw_conv_s1_x", "pw_conv_s1_y", "0");

//store is: pw_conv.stencil(2, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(2, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
  auto hcompute_pw_conv_stencil_3 = pw_conv_s1_x->add_op("op_hcompute_pw_conv_stencil_3");
  hcompute_pw_conv_stencil_3->add_function("hcompute_pw_conv_stencil_3");
  hcompute_pw_conv_stencil_3->add_load("dw_conv_stencil", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_3->add_load("pw_conv_stencil", "2", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  hcompute_pw_conv_stencil_3->add_store("pw_conv_stencil", "2", "pw_conv_s1_x", "pw_conv_s1_y", "0");
  auto pw_conv_s1_y_1 = prg.add_loop("pw_conv_s1_y_1", 0, 16);
  auto pw_conv_s1_x_1 = pw_conv_s1_y_1->add_loop("pw_conv_s1_x_1", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(0, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
  auto hcompute_pw_conv_stencil_4 = pw_conv_s1_x_1->add_op("op_hcompute_pw_conv_stencil_4");
  hcompute_pw_conv_stencil_4->add_function("hcompute_pw_conv_stencil_4");
  hcompute_pw_conv_stencil_4->add_load("dw_conv_stencil", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_4->add_load("pw_conv_stencil", "0", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_4->add_store("pw_conv_stencil", "0", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");

//store is: pw_conv.stencil(1, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(1, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
  auto hcompute_pw_conv_stencil_5 = pw_conv_s1_x_1->add_op("op_hcompute_pw_conv_stencil_5");
  hcompute_pw_conv_stencil_5->add_function("hcompute_pw_conv_stencil_5");
  hcompute_pw_conv_stencil_5->add_load("dw_conv_stencil", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_5->add_load("pw_conv_stencil", "1", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_5->add_store("pw_conv_stencil", "1", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");

//store is: pw_conv.stencil(2, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(2, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
  auto hcompute_pw_conv_stencil_6 = pw_conv_s1_x_1->add_op("op_hcompute_pw_conv_stencil_6");
  hcompute_pw_conv_stencil_6->add_function("hcompute_pw_conv_stencil_6");
  hcompute_pw_conv_stencil_6->add_load("dw_conv_stencil", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_6->add_load("pw_conv_stencil", "2", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  hcompute_pw_conv_stencil_6->add_store("pw_conv_stencil", "2", "pw_conv_s1_x_1", "pw_conv_s1_y_1", "1");
  auto pw_conv_s1_y_2 = prg.add_loop("pw_conv_s1_y_2", 0, 16);
  auto pw_conv_s1_x_2 = pw_conv_s1_y_2->add_loop("pw_conv_s1_x_2", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(0, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
  auto hcompute_pw_conv_stencil_7 = pw_conv_s1_x_2->add_op("op_hcompute_pw_conv_stencil_7");
  hcompute_pw_conv_stencil_7->add_function("hcompute_pw_conv_stencil_7");
  hcompute_pw_conv_stencil_7->add_load("dw_conv_stencil", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_7->add_load("pw_conv_stencil", "0", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_7->add_store("pw_conv_stencil", "0", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");

//store is: pw_conv.stencil(1, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(1, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
  auto hcompute_pw_conv_stencil_8 = pw_conv_s1_x_2->add_op("op_hcompute_pw_conv_stencil_8");
  hcompute_pw_conv_stencil_8->add_function("hcompute_pw_conv_stencil_8");
  hcompute_pw_conv_stencil_8->add_load("dw_conv_stencil", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_8->add_load("pw_conv_stencil", "1", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_8->add_store("pw_conv_stencil", "1", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");

//store is: pw_conv.stencil(2, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(2, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
  auto hcompute_pw_conv_stencil_9 = pw_conv_s1_x_2->add_op("op_hcompute_pw_conv_stencil_9");
  hcompute_pw_conv_stencil_9->add_function("hcompute_pw_conv_stencil_9");
  hcompute_pw_conv_stencil_9->add_load("dw_conv_stencil", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_9->add_load("pw_conv_stencil", "2", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  hcompute_pw_conv_stencil_9->add_store("pw_conv_stencil", "2", "pw_conv_s1_x_2", "pw_conv_s1_y_2", "2");
  auto pw_conv_s1_y_3 = prg.add_loop("pw_conv_s1_y_3", 0, 16);
  auto pw_conv_s1_x_3 = pw_conv_s1_y_3->add_loop("pw_conv_s1_x_3", 0, 16);

//store is: pw_conv.stencil(0, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(0, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
  auto hcompute_pw_conv_stencil_10 = pw_conv_s1_x_3->add_op("op_hcompute_pw_conv_stencil_10");
  hcompute_pw_conv_stencil_10->add_function("hcompute_pw_conv_stencil_10");
  hcompute_pw_conv_stencil_10->add_load("dw_conv_stencil", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_10->add_load("pw_conv_stencil", "0", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_10->add_store("pw_conv_stencil", "0", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");

//store is: pw_conv.stencil(1, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(1, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
  auto hcompute_pw_conv_stencil_11 = pw_conv_s1_x_3->add_op("op_hcompute_pw_conv_stencil_11");
  hcompute_pw_conv_stencil_11->add_function("hcompute_pw_conv_stencil_11");
  hcompute_pw_conv_stencil_11->add_load("dw_conv_stencil", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_11->add_load("pw_conv_stencil", "1", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_11->add_store("pw_conv_stencil", "1", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");

//store is: pw_conv.stencil(2, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(2, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
  auto hcompute_pw_conv_stencil_12 = pw_conv_s1_x_3->add_op("op_hcompute_pw_conv_stencil_12");
  hcompute_pw_conv_stencil_12->add_function("hcompute_pw_conv_stencil_12");
  hcompute_pw_conv_stencil_12->add_load("dw_conv_stencil", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_12->add_load("pw_conv_stencil", "2", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");
  hcompute_pw_conv_stencil_12->add_store("pw_conv_stencil", "2", "pw_conv_s1_x_3", "pw_conv_s1_y_3", "3");

//consuming pw_conv.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 16);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 16);
  auto pw_conv_reduction_s0_k = pw_conv_reduction_s0_x->add_loop("pw_conv_reduction_s0_k", 0, 3);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_k->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_k", "pw_conv_reduction_s0_x", "pw_conv_reduction_s0_y");
  auto pw_conv_reduction_s1_r_pw_x = prg.add_loop("pw_conv_reduction_s1_r_pw_x", 0, 4);
  auto pw_conv_reduction_s1_y = pw_conv_reduction_s1_r_pw_x->add_loop("pw_conv_reduction_s1_y", 0, 16);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 16);

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_stencil", "0", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_r_pw_x");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_reduction_stencil", "0", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "0", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
  auto hcompute_pw_conv_reduction_stencil_2 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_function("hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_load("pw_conv_stencil", "1", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_r_pw_x");
  hcompute_pw_conv_reduction_stencil_2->add_load("pw_conv_reduction_stencil", "1", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");
  hcompute_pw_conv_reduction_stencil_2->add_store("pw_conv_reduction_stencil", "1", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
  auto hcompute_pw_conv_reduction_stencil_3 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_function("hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_load("pw_conv_stencil", "2", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_r_pw_x");
  hcompute_pw_conv_reduction_stencil_3->add_load("pw_conv_reduction_stencil", "2", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");
  hcompute_pw_conv_reduction_stencil_3->add_store("pw_conv_reduction_stencil", "2", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_y");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_k = prg.add_loop("hw_output_s0_k", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_k->add_loop("hw_output_s0_y_yi", 0, 16);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 16);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_k) = uint8(max(pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi), (int16)0))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_k", "hw_output_s0_x_xi", "hw_output_s0_y_yi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "hw_output_s0_k");

  return prg;
}

prog camera_pipeline_dse_1() {
  prog prg;
  prg.compute_unit_file = "camera_pipeline_compute.h";
  prg.name = "camera_pipeline_dse1";

// Stencil<uint8_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint8_t, 58, 58, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing curve.stencil

//consuming curve.stencil
////producing hw_input_copy.stencil
  auto hw_input_copy_s0_y = prg.add_loop("hw_input_copy_s0_y", -3, 61);
  auto hw_input_copy_s0_x = hw_input_copy_s0_y->add_loop("hw_input_copy_s0_x", -3, 61);

//store is: hw_input_copy.stencil(hw_input_copy_s0_x, hw_input_copy_s0_y) = hw_input.stencil(hw_input_copy_s0_x, hw_input_copy_s0_y)
  auto hcompute_hw_input_copy_stencil = hw_input_copy_s0_x->add_op("op_hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_function("hcompute_hw_input_copy_stencil");
  hcompute_hw_input_copy_stencil->add_load("hw_input_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");
  prg.buffer_port_widths["hw_input_copy_stencil"] = 16;
  hcompute_hw_input_copy_stencil->add_store("hw_input_copy_stencil", "hw_input_copy_s0_x", "hw_input_copy_s0_y");

//consuming hw_input_copy.stencil
////producing denoised$1.stencil
  auto denoised_1_s0_y = prg.add_loop("denoised_1_s0_y", -1, 59);
  auto denoised_1_s0_x = denoised_1_s0_y->add_loop("denoised_1_s0_x", -1, 59);

//store is: denoised$1.stencil(denoised_1_s0_x, denoised_1_s0_y) = max(min(hw_input_copy.stencil(denoised_1_s0_x, denoised_1_s0_y), max(hw_input_copy.stencil(denoised_1_s0_x, (denoised_1_s0_y + 2)), max(hw_input_copy.stencil(denoised_1_s0_x, (denoised_1_s0_y + -2)), max(hw_input_copy.stencil((denoised_1_s0_x + -2), denoised_1_s0_y), hw_input_copy.stencil((denoised_1_s0_x + 2), denoised_1_s0_y))))), min(hw_input_copy.stencil(denoised_1_s0_x, (denoised_1_s0_y + 2)), min(hw_input_copy.stencil(denoised_1_s0_x, (denoised_1_s0_y + -2)), min(hw_input_copy.stencil((denoised_1_s0_x + -2), denoised_1_s0_y), hw_input_copy.stencil((denoised_1_s0_x + 2), denoised_1_s0_y)))))
  auto hcompute_denoised_1_stencil = denoised_1_s0_x->add_op("op_hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_function("hcompute_denoised_1_stencil");
  hcompute_denoised_1_stencil->add_load("hw_input_copy_stencil", "denoised_1_s0_x", "denoised_1_s0_y");
  hcompute_denoised_1_stencil->add_load("hw_input_copy_stencil", "denoised_1_s0_x", "(denoised_1_s0_y + 2)");
  hcompute_denoised_1_stencil->add_load("hw_input_copy_stencil", "denoised_1_s0_x", "(denoised_1_s0_y + -2)");
  hcompute_denoised_1_stencil->add_load("hw_input_copy_stencil", "(denoised_1_s0_x + -2)", "denoised_1_s0_y");
  hcompute_denoised_1_stencil->add_load("hw_input_copy_stencil", "(denoised_1_s0_x + 2)", "denoised_1_s0_y");
  prg.buffer_port_widths["denoised_1_stencil"] = 16;
  hcompute_denoised_1_stencil->add_store("denoised_1_stencil", "denoised_1_s0_x", "denoised_1_s0_y");

//consuming denoised$1.stencil
////producing demosaicked$1.stencil
  auto demosaicked_1_s0_y = prg.add_loop("demosaicked_1_s0_y", 0, 58);
  auto demosaicked_1_s0_x = demosaicked_1_s0_y->add_loop("demosaicked_1_s0_x", 0, 58);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y, 0) = select(((demosaicked_1_s0_y % 2) == 0), select(((demosaicked_1_s0_x % 2) == 0), ((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint8)1)/(uint8)2)) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)), select(((demosaicked_1_s0_x % 2) == 0), select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2))) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) < absd(denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2), (((denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2)), (((((denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2))) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + denoised$1.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2))), ((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2)) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((denoised$1.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + denoised$1.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2))))
  auto hcompute_demosaicked_1_stencil = demosaicked_1_s0_x->add_op("op_hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_function("hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "demosaicked_1_s0_x", "demosaicked_1_s0_y");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_x + 1)", "demosaicked_1_s0_y");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_x + 1)", "(demosaicked_1_s0_y + 1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_x + -1)", "demosaicked_1_s0_y");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "demosaicked_1_s0_x", "(demosaicked_1_s0_y + 1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_x + 1)", "(demosaicked_1_s0_y + -1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "demosaicked_1_s0_x", "(demosaicked_1_s0_y + -1)");
  hcompute_demosaicked_1_stencil->add_load("denoised_1_stencil", "(demosaicked_1_s0_x + -1)", "(demosaicked_1_s0_y + -1)");
  prg.buffer_port_widths["demosaicked_1_stencil"] = 16;
  hcompute_demosaicked_1_stencil->add_store("demosaicked_1_stencil", "demosaicked_1_s0_x", "demosaicked_1_s0_y", "0");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_y");
  auto demosaicked_1_s0_y_1 = prg.add_loop("demosaicked_1_s0_y_1", 0, 58);
  auto demosaicked_1_s0_x_1 = demosaicked_1_s0_y_1->add_loop("demosaicked_1_s0_x_1", 0, 58);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1, 1) = select(((demosaicked_1_s0_y_1 % 2) == 0), select(((demosaicked_1_s0_x_1 % 2) == 0), denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), select((absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1)) < absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)))), (((denoised$1.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint8)1)/(uint8)2))), select(((demosaicked_1_s0_x_1 % 2) == 0), select((absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1)) < absd(denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint8)1)/(uint8)2)), denoised$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)))
  auto hcompute_demosaicked_1_stencil_1 = demosaicked_1_s0_x_1->add_op("op_hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_function("hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_1 + -1)", "demosaicked_1_s0_y_1");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "demosaicked_1_s0_x_1", "(demosaicked_1_s0_y_1 + 1)");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_1 + 1)", "demosaicked_1_s0_y_1");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "demosaicked_1_s0_x_1", "(demosaicked_1_s0_y_1 + -1)");
  hcompute_demosaicked_1_stencil_1->add_load("denoised_1_stencil", "demosaicked_1_s0_x_1", "demosaicked_1_s0_y_1");
  hcompute_demosaicked_1_stencil_1->add_store("demosaicked_1_stencil", "demosaicked_1_s0_x_1", "demosaicked_1_s0_y_1", "1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_y_1");
  auto demosaicked_1_s0_y_2 = prg.add_loop("demosaicked_1_s0_y_2", 0, 58);
  auto demosaicked_1_s0_x_2 = demosaicked_1_s0_y_2->add_loop("demosaicked_1_s0_x_2", 0, 58);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2, 2) = select(((demosaicked_1_s0_y_2 % 2) == 0), select(((demosaicked_1_s0_x_2 % 2) == 0), ((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2)) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2)), select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2))) - (((select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) < absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2)), (((((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2) + select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2))) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2)))), select(((demosaicked_1_s0_x_2 % 2) == 0), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), ((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2)) - (((select((absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2)) + select((absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((denoised$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2), (((denoised$1.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + denoised$1.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint8)1)/(uint8)2))) + (uint8)1)/(uint8)2))))
  auto hcompute_demosaicked_1_stencil_2 = demosaicked_1_s0_x_2->add_op("op_hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_function("hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "demosaicked_1_s0_x_2", "demosaicked_1_s0_y_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "demosaicked_1_s0_x_2", "(demosaicked_1_s0_y_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_2 + 1)", "(demosaicked_1_s0_y_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_2 + 1)", "demosaicked_1_s0_y_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "demosaicked_1_s0_x_2", "(demosaicked_1_s0_y_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_2 + -1)", "(demosaicked_1_s0_y_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_2 + -1)", "demosaicked_1_s0_y_2");
  hcompute_demosaicked_1_stencil_2->add_load("denoised_1_stencil", "(demosaicked_1_s0_x_2 + -1)", "(demosaicked_1_s0_y_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_store("demosaicked_1_stencil", "demosaicked_1_s0_x_2", "demosaicked_1_s0_y_2", "2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_y_2");

//consuming demosaicked$1.stencil
////producing f6.stencil
  auto f6_s0_c = prg.add_loop("f6_s0_c", 0, 3);
  auto f6_s0_y = f6_s0_c->add_loop("f6_s0_y", 0, 58);
  auto f6_s0_x = f6_s0_y->add_loop("f6_s0_x", 0, 58);

//store is: f6.stencil(f6_s0_x, f6_s0_y, f6_s0_c) = select((f6_s0_c == 0), int16((((((int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 0))*200) + (int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 2))*17)) - (int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 1))*44)) + -3900)/256)), select((f6_s0_c == 1), int16((((((int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 1))*159) - (int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 0))*38)) - (int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 2))*21)) + -2541)/256)), int16((((((int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 2))*228) - (int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 1))*73)) - (int32(demosaicked$1.stencil(f6_s0_x, f6_s0_y, 0))*8)) + -2008)/256))))
  auto hcompute_f6_stencil = f6_s0_x->add_op("op_hcompute_f6_stencil");
  hcompute_f6_stencil->add_function("hcompute_f6_stencil");
  hcompute_f6_stencil->add_load("demosaicked_1_stencil", "f6_s0_x", "f6_s0_y", "0");
  hcompute_f6_stencil->add_load("demosaicked_1_stencil", "f6_s0_x", "f6_s0_y", "2");
  hcompute_f6_stencil->add_load("demosaicked_1_stencil", "f6_s0_x", "f6_s0_y", "1");
  prg.buffer_port_widths["f6_stencil"] = 16;
  hcompute_f6_stencil->add_store("f6_stencil", "f6_s0_x", "f6_s0_y", "f6_s0_c");
  hcompute_f6_stencil->compute_unit_needs_index_variable("f6_s0_c");

//consuming f6.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 58);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 58);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = curve.stencil(int32(max(min(f6.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0), (int16)1023), (int16)0)))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("f6_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "0");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "0");

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1) = curve.stencil(int32(max(min(f6.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1), (int16)1023), (int16)0)))
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("f6_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "1");

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2) = curve.stencil(int32(max(min(f6.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2), (int16)1023), (int16)0)))
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("f6_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_x_xi", "hw_output_s0_y_yi", "2");

  return prg;
}

prog demosaic_complex() {
  prog prg;
  prg.compute_unit_file = "demosaic_complex_compute.h";
  prg.name = "demosaic_complex";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint8_t, 3, 62, 62> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -1, 63);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -1, 63);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing demosaicked$1.stencil
  auto demosaicked_1_s0_y = prg.add_loop("demosaicked_1_s0_y", 0, 62);
  auto demosaicked_1_s0_x = demosaicked_1_s0_y->add_loop("demosaicked_1_s0_x", 0, 62);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y, 0) = select(((demosaicked_1_s0_y % 2) == 0), select(((demosaicked_1_s0_x % 2) == 0), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)), select(((demosaicked_1_s0_x % 2) == 0), select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil = demosaicked_1_s0_x->add_op("op_hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_function("hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + 1)", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y", "(demosaicked_1_s0_x + -1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + 1)", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + -1)", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + -1)", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + -1)", "(demosaicked_1_s0_x + -1)");
  prg.buffer_port_widths["demosaicked_1_stencil"] = 16;
  hcompute_demosaicked_1_stencil->add_store("demosaicked_1_stencil", "0", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_y");
  auto demosaicked_1_s0_y_1 = prg.add_loop("demosaicked_1_s0_y_1", 0, 62);
  auto demosaicked_1_s0_x_1 = demosaicked_1_s0_y_1->add_loop("demosaicked_1_s0_x_1", 0, 62);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1, 1) = select(((demosaicked_1_s0_y_1 % 2) == 0), select(((demosaicked_1_s0_x_1 % 2) == 0), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2))), select(((demosaicked_1_s0_x_1 % 2) == 0), select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)))
  auto hcompute_demosaicked_1_stencil_1 = demosaicked_1_s0_x_1->add_op("op_hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_function("hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_1", "(demosaicked_1_s0_x_1 + -1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_1 + 1)", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_1", "(demosaicked_1_s0_x_1 + 1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_1 + -1)", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_store("demosaicked_1_stencil", "1", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_y_1");
  auto demosaicked_1_s0_y_2 = prg.add_loop("demosaicked_1_s0_y_2", 0, 62);
  auto demosaicked_1_s0_x_2 = demosaicked_1_s0_y_2->add_loop("demosaicked_1_s0_x_2", 0, 62);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2, 2) = select(((demosaicked_1_s0_y_2 % 2) == 0), select(((demosaicked_1_s0_x_2 % 2) == 0), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)))), select(((demosaicked_1_s0_x_2 % 2) == 0), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil_2 = demosaicked_1_s0_x_2->add_op("op_hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_function("hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + 1)", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + 1)", "(demosaicked_1_s0_x_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_2", "(demosaicked_1_s0_x_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + -1)", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + 1)", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_2", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + -1)", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_store("demosaicked_1_stencil", "2", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_y_2");

//consuming demosaicked$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);
  auto hw_output_s0_c = hw_output_s0_x_xi->add_loop("hw_output_s0_c", 0, 3);

//store is: hw_output.stencil(hw_output_s0_c, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint8(demosaicked$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c))
  auto hcompute_hw_output_stencil = hw_output_s0_c->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("demosaicked_1_stencil", "hw_output_s0_c", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_c");

  return prg;
}

prog demosaic_2x2() {
  prog prg;
  prg.compute_unit_file = "demosaic_2x2_compute.h";
  prg.name = "demosaic_2x2";

// Stencil<uint16_t, 60, 60> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 56, 56, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y_y = prg.add_loop("hw_input_global_wrapper_s0_y_y", 0, 30);
  auto hw_input_global_wrapper_s0_x_x = hw_input_global_wrapper_s0_y_y->add_loop("hw_input_global_wrapper_s0_x_x", 0, 30);

//store is: hw_input_global_wrapper.stencil(((hw_input_global_wrapper_s0_x_x*2) + -2), ((hw_input_global_wrapper_s0_y_y*2) + -2)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + -2), ((hw_input_global_wrapper_s0_y_y*2) + -2))
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -2)", "((hw_input_global_wrapper_s0_x_x*2) + -2)");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -2)", "((hw_input_global_wrapper_s0_x_x*2) + -2)");

//store is: hw_input_global_wrapper.stencil(((hw_input_global_wrapper_s0_x_x*2) + -1), ((hw_input_global_wrapper_s0_y_y*2) + -2)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + -1), ((hw_input_global_wrapper_s0_y_y*2) + -2))
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -2)", "((hw_input_global_wrapper_s0_x_x*2) + -1)");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -2)", "((hw_input_global_wrapper_s0_x_x*2) + -1)");
  auto hw_input_global_wrapper_s0_x_x_1 = hw_input_global_wrapper_s0_y_y->add_loop("hw_input_global_wrapper_s0_x_x_1", 0, 30);

//store is: hw_input_global_wrapper.stencil(((hw_input_global_wrapper_s0_x_x_1*2) + -2), ((hw_input_global_wrapper_s0_y_y*2) + -1)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x_1*2) + -2), ((hw_input_global_wrapper_s0_y_y*2) + -1))
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x_x_1->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -1)", "((hw_input_global_wrapper_s0_x_x_1*2) + -2)");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -1)", "((hw_input_global_wrapper_s0_x_x_1*2) + -2)");

//store is: hw_input_global_wrapper.stencil(((hw_input_global_wrapper_s0_x_x_1*2) + -1), ((hw_input_global_wrapper_s0_y_y*2) + -1)) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x_1*2) + -1), ((hw_input_global_wrapper_s0_y_y*2) + -1))
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x_x_1->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -1)", "((hw_input_global_wrapper_s0_x_x_1*2) + -1)");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "((hw_input_global_wrapper_s0_y_y*2) + -1)", "((hw_input_global_wrapper_s0_x_x_1*2) + -1)");

//consuming hw_input_global_wrapper.stencil
////producing demosaicked$1.stencil
  auto demosaicked_1_s0_y = prg.add_loop("demosaicked_1_s0_y", 0, 56);
  auto demosaicked_1_s0_x = demosaicked_1_s0_y->add_loop("demosaicked_1_s0_x", 0, 56);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y, 0) = select(((demosaicked_1_s0_y % 2) == 0), select(((demosaicked_1_s0_x % 2) == 0), ((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)) + (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), ((demosaicked_1_s0_y/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)))), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + -1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -2), ((demosaicked_1_s0_y/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -2), ((demosaicked_1_s0_y/2)*2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), ((demosaicked_1_s0_y/2)*2))), select(((demosaicked_1_s0_x % 2) == 0), select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 2)))), (((((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -2), (((demosaicked_1_s0_y/2)*2) + 2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 3)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -2), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 3)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)))), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -2), ((demosaicked_1_s0_y/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -2), ((demosaicked_1_s0_y/2)*2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + -1), (((demosaicked_1_s0_y/2)*2) + -1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), (((demosaicked_1_s0_y/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 3)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 3)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))), ((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)) + (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), ((demosaicked_1_s0_y/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)))), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), ((demosaicked_1_s0_y/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), ((demosaicked_1_s0_y/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + -1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), (((demosaicked_1_s0_y/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 3)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 2), (((demosaicked_1_s0_y/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x/2)*2), (((demosaicked_1_s0_y/2)*2) + 2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 3)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x/2)*2) + 1), (((demosaicked_1_s0_y/2)*2) + 1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil = demosaicked_1_s0_x->add_op("op_hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_function("hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y/2))*2)", "(floor((demosaicked_1_s0_x/2))*2)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 2)", "((floor((demosaicked_1_s0_x/2))*2) + -1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 2)", "((floor((demosaicked_1_s0_x/2))*2) + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 2)", "(floor((demosaicked_1_s0_x/2))*2)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 2)", "((floor((demosaicked_1_s0_x/2))*2) + -2)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 3)", "((floor((demosaicked_1_s0_x/2))*2) + -1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 2)", "((floor((demosaicked_1_s0_x/2))*2) + 2)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 3)", "((floor((demosaicked_1_s0_x/2))*2) + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y/2))*2)", "((floor((demosaicked_1_s0_x/2))*2) + -1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y/2))*2)", "((floor((demosaicked_1_s0_x/2))*2) + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y/2))*2)", "((floor((demosaicked_1_s0_x/2))*2) + 2)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + -1)", "((floor((demosaicked_1_s0_x/2))*2) + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 1)", "((floor((demosaicked_1_s0_x/2))*2) + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y/2))*2)", "((floor((demosaicked_1_s0_x/2))*2) + -2)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + -1)", "((floor((demosaicked_1_s0_x/2))*2) + -1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y/2))*2) + 1)", "((floor((demosaicked_1_s0_x/2))*2) + -1)");
  prg.buffer_port_widths["demosaicked_1_stencil"] = 16;
  hcompute_demosaicked_1_stencil->add_store("demosaicked_1_stencil", "0", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_y");
  auto demosaicked_1_s0_y_1 = prg.add_loop("demosaicked_1_s0_y_1", 0, 56);
  auto demosaicked_1_s0_x_1 = demosaicked_1_s0_y_1->add_loop("demosaicked_1_s0_x_1", 0, 56);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1, 1) = select(((demosaicked_1_s0_y_1 % 2) == 0), select(((demosaicked_1_s0_x_1 % 2) == 0), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), ((demosaicked_1_s0_y_1/2)*2)), select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 2), ((demosaicked_1_s0_y_1/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), ((demosaicked_1_s0_y_1/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + 1)))), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), ((demosaicked_1_s0_y_1/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 2), ((demosaicked_1_s0_y_1/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + -1))) + (uint16)1)/(uint16)2))), select(((demosaicked_1_s0_x_1 % 2) == 0), select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + -1), (((demosaicked_1_s0_y_1/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), (((demosaicked_1_s0_y_1/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), ((demosaicked_1_s0_y_1/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + -1), (((demosaicked_1_s0_y_1/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), (((demosaicked_1_s0_y_1/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_1/2)*2), ((demosaicked_1_s0_y_1/2)*2))) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_1/2)*2) + 1), (((demosaicked_1_s0_y_1/2)*2) + 1))))
  auto hcompute_demosaicked_1_stencil_1 = demosaicked_1_s0_x_1->add_op("op_hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_function("hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y_1/2))*2)", "(floor((demosaicked_1_s0_x_1/2))*2)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y_1/2))*2)", "((floor((demosaicked_1_s0_x_1/2))*2) + 2)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_1/2))*2) + -1)", "((floor((demosaicked_1_s0_x_1/2))*2) + 1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_1/2))*2) + 1)", "((floor((demosaicked_1_s0_x_1/2))*2) + 1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_1/2))*2) + 1)", "((floor((demosaicked_1_s0_x_1/2))*2) + -1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_1/2))*2) + 2)", "(floor((demosaicked_1_s0_x_1/2))*2)");
  hcompute_demosaicked_1_stencil_1->add_store("demosaicked_1_stencil", "1", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_y_1");
  auto demosaicked_1_s0_y_2 = prg.add_loop("demosaicked_1_s0_y_2", 0, 56);
  auto demosaicked_1_s0_x_2 = demosaicked_1_s0_y_2->add_loop("demosaicked_1_s0_x_2", 0, 56);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2, 2) = select(((demosaicked_1_s0_y_2 % 2) == 0), select(((demosaicked_1_s0_x_2 % 2) == 0), ((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)) + (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -1)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + -1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), select((absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + -1))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -1)))), (((((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + -1)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)))), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 3), (((demosaicked_1_s0_y_2/2)*2) + -1))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + -2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 3), (((demosaicked_1_s0_y_2/2)*2) + -1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + -2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)))), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + -1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + -1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + -2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 3), (((demosaicked_1_s0_y_2/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 3), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)))), select(((demosaicked_1_s0_x_2 % 2) == 0), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 1)), ((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)) + (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 2)), hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + -1), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), (((demosaicked_1_s0_y_2/2)*2) + 2)) + hw_input_global_wrapper.stencil(((demosaicked_1_s0_x_2/2)*2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 3), (((demosaicked_1_s0_y_2/2)*2) + 1))) < absd(hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 2)), hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2)))), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 3), (((demosaicked_1_s0_y_2/2)*2) + 1)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 1), (((demosaicked_1_s0_y_2/2)*2) + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), (((demosaicked_1_s0_y_2/2)*2) + 2)) + hw_input_global_wrapper.stencil((((demosaicked_1_s0_x_2/2)*2) + 2), ((demosaicked_1_s0_y_2/2)*2))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil_2 = demosaicked_1_s0_x_2->add_op("op_hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_function("hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y_2/2))*2)", "(floor((demosaicked_1_s0_x_2/2))*2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -1)", "(floor((demosaicked_1_s0_x_2/2))*2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 1)", "(floor((demosaicked_1_s0_x_2/2))*2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 1)", "((floor((demosaicked_1_s0_x_2/2))*2) + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 1)", "((floor((demosaicked_1_s0_x_2/2))*2) + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 2)", "(floor((demosaicked_1_s0_x_2/2))*2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -1)", "((floor((demosaicked_1_s0_x_2/2))*2) + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -1)", "((floor((demosaicked_1_s0_x_2/2))*2) + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -2)", "(floor((demosaicked_1_s0_x_2/2))*2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -1)", "((floor((demosaicked_1_s0_x_2/2))*2) + 2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 1)", "((floor((demosaicked_1_s0_x_2/2))*2) + 2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(floor((demosaicked_1_s0_y_2/2))*2)", "((floor((demosaicked_1_s0_x_2/2))*2) + 2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -1)", "((floor((demosaicked_1_s0_x_2/2))*2) + 3)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + -2)", "((floor((demosaicked_1_s0_x_2/2))*2) + 2)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 1)", "((floor((demosaicked_1_s0_x_2/2))*2) + 3)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "((floor((demosaicked_1_s0_y_2/2))*2) + 2)", "((floor((demosaicked_1_s0_x_2/2))*2) + 2)");
  hcompute_demosaicked_1_stencil_2->add_store("demosaicked_1_stencil", "2", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_y_2");

//consuming demosaicked$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 56);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 56);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = demosaicked$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("demosaicked_1_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 56);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 56);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = demosaicked$1.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("demosaicked_1_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 56);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 56);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = demosaicked$1.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("demosaicked_1_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");

  return prg;
}

prog demosaic_unrolled() {
  prog prg;
  prg.compute_unit_file = "demosaic_unrolled_compute.h";
  prg.name = "demosaic_unrolled";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 62, 62, 3> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", -1, 63);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", -1, 63);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing demosaicked$1.stencil
  auto demosaicked_1_s0_y = prg.add_loop("demosaicked_1_s0_y", 0, 62);
  auto demosaicked_1_s0_x = demosaicked_1_s0_y->add_loop("demosaicked_1_s0_x", 0, 62);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y, 0) = select(((demosaicked_1_s0_y % 2) == 0), select(((demosaicked_1_s0_x % 2) == 0), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)), select(((demosaicked_1_s0_x % 2) == 0), select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil = demosaicked_1_s0_x->add_op("op_hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_function("hcompute_demosaicked_1_stencil");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + 1)", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y", "(demosaicked_1_s0_x + -1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + 1)", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + -1)", "(demosaicked_1_s0_x + 1)");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + -1)", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y + -1)", "(demosaicked_1_s0_x + -1)");
  prg.buffer_port_widths["demosaicked_1_stencil"] = 16;
  hcompute_demosaicked_1_stencil->add_store("demosaicked_1_stencil", "0", "demosaicked_1_s0_y", "demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_x");
  hcompute_demosaicked_1_stencil->compute_unit_needs_index_variable("demosaicked_1_s0_y");
  auto demosaicked_1_s0_y_1 = prg.add_loop("demosaicked_1_s0_y_1", 0, 62);
  auto demosaicked_1_s0_x_1 = demosaicked_1_s0_y_1->add_loop("demosaicked_1_s0_x_1", 0, 62);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1, 1) = select(((demosaicked_1_s0_y_1 % 2) == 0), select(((demosaicked_1_s0_x_1 % 2) == 0), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2))), select(((demosaicked_1_s0_x_1 % 2) == 0), select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)))
  auto hcompute_demosaicked_1_stencil_1 = demosaicked_1_s0_x_1->add_op("op_hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_function("hcompute_demosaicked_1_stencil_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_1", "(demosaicked_1_s0_x_1 + -1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_1 + 1)", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_1", "(demosaicked_1_s0_x_1 + 1)");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_1 + -1)", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->add_store("demosaicked_1_stencil", "1", "demosaicked_1_s0_y_1", "demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_x_1");
  hcompute_demosaicked_1_stencil_1->compute_unit_needs_index_variable("demosaicked_1_s0_y_1");
  auto demosaicked_1_s0_y_2 = prg.add_loop("demosaicked_1_s0_y_2", 0, 62);
  auto demosaicked_1_s0_x_2 = demosaicked_1_s0_y_2->add_loop("demosaicked_1_s0_x_2", 0, 62);

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2, 2) = select(((demosaicked_1_s0_y_2 % 2) == 0), select(((demosaicked_1_s0_x_2 % 2) == 0), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)))), select(((demosaicked_1_s0_x_2 % 2) == 0), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
  auto hcompute_demosaicked_1_stencil_2 = demosaicked_1_s0_x_2->add_op("op_hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_function("hcompute_demosaicked_1_stencil_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + 1)", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + 1)", "(demosaicked_1_s0_x_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_2", "(demosaicked_1_s0_x_2 + 1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + -1)", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + 1)", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "demosaicked_1_s0_y_2", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_load("hw_input_global_wrapper_stencil", "(demosaicked_1_s0_y_2 + -1)", "(demosaicked_1_s0_x_2 + -1)");
  hcompute_demosaicked_1_stencil_2->add_store("demosaicked_1_stencil", "2", "demosaicked_1_s0_y_2", "demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_x_2");
  hcompute_demosaicked_1_stencil_2->compute_unit_needs_index_variable("demosaicked_1_s0_y_2");

//consuming demosaicked$1.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 62);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 62);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = demosaicked$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("demosaicked_1_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 62);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 62);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = demosaicked$1.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("demosaicked_1_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 62);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 62);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = demosaicked$1.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("demosaicked_1_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");

  return prg;
}

prog rom() {
  prog prg;
  prg.compute_unit_file = "rom_compute.h";
  prg.name = "rom";

// Stencil<int16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
////producing curvea0

//consuming curvea0
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = curvea0[int32(max(min(hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi), (int16)1023), (int16)0))]
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("hw_input_global_wrapper_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog histogram() {
  prog prg;
  prg.compute_unit_file = "histogram_compute.h";
  prg.name = "histogram";

// Stencil<uint16_t, 64, 64> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 64);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing bin.stencil
  auto bin_s0_y = prg.add_loop("bin_s0_y", 0, 64);
  auto bin_s0_x = bin_s0_y->add_loop("bin_s0_x", 0, 64);

//store is: bin.stencil(bin_s0_x, bin_s0_y) = int32(hw_input_global_wrapper.stencil(bin_s0_x, bin_s0_y))
  auto hcompute_bin_stencil = bin_s0_x->add_op("op_hcompute_bin_stencil");
  hcompute_bin_stencil->add_function("hcompute_bin_stencil");
  hcompute_bin_stencil->add_load("hw_input_global_wrapper_stencil", "bin_s0_y", "bin_s0_x");
  prg.buffer_port_widths["bin_stencil"] = 32;
  hcompute_bin_stencil->add_store("bin_stencil", "bin_s0_y", "bin_s0_x");

//consuming bin.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);
////producing histogram.stencil
  auto histogram_s0_b = hw_output_s0_x_xi->add_loop("histogram_s0_b", 0, 256);

//store is: histogram.stencil(histogram_s0_b) = (uint16)0
  auto hcompute_histogram_stencil = histogram_s0_b->add_op("op_hcompute_histogram_stencil");
  hcompute_histogram_stencil->add_function("hcompute_histogram_stencil");
  prg.buffer_port_widths["histogram_stencil"] = 16;
  hcompute_histogram_stencil->add_store("histogram_stencil", "histogram_s0_b");
  auto histogram_s1_r_y = hw_output_s0_x_xi->add_loop("histogram_s1_r_y", 0, 64);
  auto histogram_s1_r_x = histogram_s1_r_y->add_loop("histogram_s1_r_x", 0, 64);

//store is: histogram.stencil(bin.stencil(histogram_s1_r_x, histogram_s1_r_y)) = (histogram.stencil(bin.stencil(histogram_s1_r_x, histogram_s1_r_y)) + (uint16)1)
  auto hcompute_histogram_stencil_1 = histogram_s1_r_x->add_op("op_hcompute_histogram_stencil_1");
  hcompute_histogram_stencil_1->add_function("hcompute_histogram_stencil_1");
  //hcompute_histogram_stencil_1->add_dynamic_load("histogram_stencil", "bin_stencil", "histogram_s1_r_y", "histogram_s1_r_x");
  //hcompute_histogram_stencil_1->add_dynamic_store("histogram_stencil", "bin_stencil", "histogram_s1_r_y", "histogram_s1_r_x");

//consuming histogram.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = histogram.stencil(hw_output_s0_x_xi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("histogram_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog mobilenet() {
  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "mobilenet";

// Stencil<uint16_t, 8, 3, 3> &hw_filter_dw_stencil = arg_0;
  prg.add_input("hw_filter_dw_stencil");
  prg.buffer_port_widths["hw_filter_dw_stencil"] = 16;
// Stencil<uint16_t, 8, 8> &hw_filter_pw_stencil = arg_1;
  prg.add_input("hw_filter_pw_stencil");
  prg.buffer_port_widths["hw_filter_pw_stencil"] = 16;
// Stencil<uint16_t, 8, 30, 30> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 28, 28> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_filter_dw_global_wrapper.stencil
  auto hw_filter_dw_global_wrapper_s0_y = prg.add_loop("hw_filter_dw_global_wrapper_s0_y", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_x = hw_filter_dw_global_wrapper_s0_y->add_loop("hw_filter_dw_global_wrapper_s0_x", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_c = hw_filter_dw_global_wrapper_s0_x->add_loop("hw_filter_dw_global_wrapper_s0_c", 0, 8);

//store is: hw_filter_dw_global_wrapper.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil = hw_filter_dw_global_wrapper_s0_c->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_function("hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_filter_dw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_dw_global_wrapper_stencil->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");

//consuming hw_filter_dw_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);
  auto hw_input_global_wrapper_s0_c = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_c", 0, 8);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_c->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");

//consuming hw_input_global_wrapper.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_y = prg.add_loop("dw_conv_s0_y", 0, 28);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 28);
  auto dw_conv_s0_c = dw_conv_s0_x->add_loop("dw_conv_s0_c", 0, 8);

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_c->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "dw_conv_s0_c");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 28);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 28);
  auto dw_conv_s1_c = dw_conv_s1_x->add_loop("dw_conv_s1_c", 0, 8);
  auto dw_conv_s1_r_dw_y = dw_conv_s1_c->add_loop("dw_conv_s1_r_dw_y", 0, 3);
  auto dw_conv_s1_r_dw_x = dw_conv_s1_r_dw_y->add_loop("dw_conv_s1_r_dw_x", 0, 3);

//store is: dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) = (dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) + int16((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_r_dw_x, dw_conv_s1_r_dw_y)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_r_dw_x + dw_conv_s1_x), (dw_conv_s1_r_dw_y + dw_conv_s1_y)))))
  auto hcompute_dw_conv_stencil_1 = dw_conv_s1_r_dw_x->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "dw_conv_s1_r_dw_y", "dw_conv_s1_r_dw_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_r_dw_y + dw_conv_s1_y)", "(dw_conv_s1_r_dw_x + dw_conv_s1_x)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");

//consuming dw_conv.stencil
////producing hw_filter_pw_global_wrapper.stencil
  auto hw_filter_pw_global_wrapper_s0_c = prg.add_loop("hw_filter_pw_global_wrapper_s0_c", 0, 8);
  auto hw_filter_pw_global_wrapper_s0_k = hw_filter_pw_global_wrapper_s0_c->add_loop("hw_filter_pw_global_wrapper_s0_k", 0, 8);

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
  auto hcompute_hw_filter_pw_global_wrapper_stencil = hw_filter_pw_global_wrapper_s0_k->add_op("op_hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_function("hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_load("hw_filter_pw_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");
  prg.buffer_port_widths["hw_filter_pw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_pw_global_wrapper_stencil->add_store("hw_filter_pw_global_wrapper_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");

//consuming hw_filter_pw_global_wrapper.stencil
////producing pw_conv.stencil
  auto pw_conv_s0_y = prg.add_loop("pw_conv_s0_y", 0, 28);
  auto pw_conv_s0_x = pw_conv_s0_y->add_loop("pw_conv_s0_x", 0, 28);
  auto pw_conv_s0_c = pw_conv_s0_x->add_loop("pw_conv_s0_c", 0, 8);
  auto pw_conv_s0_k = pw_conv_s0_c->add_loop("pw_conv_s0_k", 0, 8);

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_c, pw_conv_s0_x, pw_conv_s0_y) = (int16)0
  auto hcompute_pw_conv_stencil = pw_conv_s0_k->add_op("op_hcompute_pw_conv_stencil");
  hcompute_pw_conv_stencil->add_function("hcompute_pw_conv_stencil");
  prg.buffer_port_widths["pw_conv_stencil"] = 16;
  hcompute_pw_conv_stencil->add_store("pw_conv_stencil", "pw_conv_s0_y", "pw_conv_s0_x", "pw_conv_s0_c", "pw_conv_s0_k");
  auto pw_conv_s1_y = prg.add_loop("pw_conv_s1_y", 0, 28);
  auto pw_conv_s1_x = pw_conv_s1_y->add_loop("pw_conv_s1_x", 0, 28);
  auto pw_conv_s1_c = pw_conv_s1_x->add_loop("pw_conv_s1_c", 0, 8);
  auto pw_conv_s1_k = pw_conv_s1_c->add_loop("pw_conv_s1_k", 0, 8);

//store is: pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) = (pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) + (dw_conv.stencil(pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y)*int16(hw_filter_pw_global_wrapper.stencil(pw_conv_s1_k, pw_conv_s1_c))))
  auto hcompute_pw_conv_stencil_1 = pw_conv_s1_k->add_op("op_hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_function("hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_load("dw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c");
  hcompute_pw_conv_stencil_1->add_load("hw_filter_pw_global_wrapper_stencil", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_load("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_store("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");

//consuming pw_conv.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 28);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 28);
  auto pw_conv_reduction_s0_k = pw_conv_reduction_s0_x->add_loop("pw_conv_reduction_s0_k", 0, 8);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_k->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "pw_conv_reduction_s0_k");
  auto pw_conv_reduction_s1_y = prg.add_loop("pw_conv_reduction_s1_y", 0, 28);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 28);
  auto pw_conv_reduction_s1_k = pw_conv_reduction_s1_x->add_loop("pw_conv_reduction_s1_k", 0, 8);
  auto pw_conv_reduction_s1_r_pw_x = pw_conv_reduction_s1_k->add_loop("pw_conv_reduction_s1_r_pw_x", 0, 8);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_r_pw_x, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s1_r_pw_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_r_pw_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);
  auto hw_output_s0_k = hw_output_s0_x_xi->add_loop("hw_output_s0_k", 0, 8);

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_k->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");

  return prg;
}

prog mobilenet_small() {
  prog prg;
  prg.compute_unit_file = "mobilenet_small_compute.h";
  prg.name = "mobilenet_small";

// Stencil<int16_t, 2, 3, 3> &hw_filter_dw_stencil = arg_0;
  prg.add_input("hw_filter_dw_stencil");
  prg.buffer_port_widths["hw_filter_dw_stencil"] = 16;
// Stencil<int16_t, 2, 2> &hw_filter_pw_stencil = arg_1;
  prg.add_input("hw_filter_pw_stencil");
  prg.buffer_port_widths["hw_filter_pw_stencil"] = 16;
// Stencil<int16_t, 2, 11, 11> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 2, 9, 9> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_filter_dw_global_wrapper.stencil
  auto hw_filter_dw_global_wrapper_s0_y = prg.add_loop("hw_filter_dw_global_wrapper_s0_y", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_x = hw_filter_dw_global_wrapper_s0_y->add_loop("hw_filter_dw_global_wrapper_s0_x", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_c = hw_filter_dw_global_wrapper_s0_x->add_loop("hw_filter_dw_global_wrapper_s0_c", 0, 2);

//store is: hw_filter_dw_global_wrapper.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil = hw_filter_dw_global_wrapper_s0_c->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_function("hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_filter_dw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_dw_global_wrapper_stencil->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "hw_filter_dw_global_wrapper_s0_c");

//consuming hw_filter_dw_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 11);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 11);
  auto hw_input_global_wrapper_s0_c = hw_input_global_wrapper_s0_x->add_loop("hw_input_global_wrapper_s0_c", 0, 2);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_c->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "hw_input_global_wrapper_s0_c");

//consuming hw_input_global_wrapper.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_y = prg.add_loop("dw_conv_s0_y", 0, 9);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 9);
  auto dw_conv_s0_c = dw_conv_s0_x->add_loop("dw_conv_s0_c", 0, 2);

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_c->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "dw_conv_s0_c");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 9);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 9);
  auto dw_conv_s1_c = dw_conv_s1_x->add_loop("dw_conv_s1_c", 0, 2);

//store is: dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_1 = dw_conv_s1_c->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "dw_conv_s1_c");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "dw_conv_s1_c");

//consuming dw_conv.stencil
////producing hw_filter_pw_global_wrapper.stencil
  auto hw_filter_pw_global_wrapper_s0_c = prg.add_loop("hw_filter_pw_global_wrapper_s0_c", 0, 2);
  auto hw_filter_pw_global_wrapper_s0_k = hw_filter_pw_global_wrapper_s0_c->add_loop("hw_filter_pw_global_wrapper_s0_k", 0, 2);

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
  auto hcompute_hw_filter_pw_global_wrapper_stencil = hw_filter_pw_global_wrapper_s0_k->add_op("op_hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_function("hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_load("hw_filter_pw_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");
  prg.buffer_port_widths["hw_filter_pw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_pw_global_wrapper_stencil->add_store("hw_filter_pw_global_wrapper_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");

//consuming hw_filter_pw_global_wrapper.stencil
////producing pw_conv.stencil
  auto pw_conv_s0_y = prg.add_loop("pw_conv_s0_y", 0, 9);
  auto pw_conv_s0_x = pw_conv_s0_y->add_loop("pw_conv_s0_x", 0, 9);
  auto pw_conv_s0_c = pw_conv_s0_x->add_loop("pw_conv_s0_c", 0, 2);
  auto pw_conv_s0_k = pw_conv_s0_c->add_loop("pw_conv_s0_k", 0, 2);

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_c, pw_conv_s0_x, pw_conv_s0_y) = (int16)0
  auto hcompute_pw_conv_stencil = pw_conv_s0_k->add_op("op_hcompute_pw_conv_stencil");
  hcompute_pw_conv_stencil->add_function("hcompute_pw_conv_stencil");
  prg.buffer_port_widths["pw_conv_stencil"] = 16;
  hcompute_pw_conv_stencil->add_store("pw_conv_stencil", "pw_conv_s0_y", "pw_conv_s0_x", "pw_conv_s0_c", "pw_conv_s0_k");
  auto pw_conv_s1_y = prg.add_loop("pw_conv_s1_y", 0, 9);
  auto pw_conv_s1_x = pw_conv_s1_y->add_loop("pw_conv_s1_x", 0, 9);
  auto pw_conv_s1_c = pw_conv_s1_x->add_loop("pw_conv_s1_c", 0, 2);
  auto pw_conv_s1_k = pw_conv_s1_c->add_loop("pw_conv_s1_k", 0, 2);

//store is: pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) = (pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) + (hw_filter_pw_global_wrapper.stencil(pw_conv_s1_k, pw_conv_s1_c)*dw_conv.stencil(pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y)))
  auto hcompute_pw_conv_stencil_1 = pw_conv_s1_k->add_op("op_hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_function("hcompute_pw_conv_stencil_1");
  hcompute_pw_conv_stencil_1->add_load("dw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c");
  hcompute_pw_conv_stencil_1->add_load("hw_filter_pw_global_wrapper_stencil", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_load("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");
  hcompute_pw_conv_stencil_1->add_store("pw_conv_stencil", "pw_conv_s1_y", "pw_conv_s1_x", "pw_conv_s1_c", "pw_conv_s1_k");

//consuming pw_conv.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 9);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 9);
  auto pw_conv_reduction_s0_k = pw_conv_reduction_s0_x->add_loop("pw_conv_reduction_s0_k", 0, 2);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_k->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "pw_conv_reduction_s0_k");
  auto pw_conv_reduction_s1_y = prg.add_loop("pw_conv_reduction_s1_y", 0, 9);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 9);
  auto pw_conv_reduction_s1_k = pw_conv_reduction_s1_x->add_loop("pw_conv_reduction_s1_k", 0, 2);
  auto pw_conv_reduction_s1_r_pw_x = pw_conv_reduction_s1_k->add_loop("pw_conv_reduction_s1_r_pw_x", 0, 2);

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_r_pw_x, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s1_r_pw_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_r_pw_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "pw_conv_reduction_s1_k");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 9);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 9);
  auto hw_output_s0_k = hw_output_s0_x_xi->add_loop("hw_output_s0_k", 0, 2);

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_k->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "hw_output_s0_k");

  return prg;
}

prog three_level_memory() {
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

//store is: conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) = ((hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y))*(uint16)11) + (conv.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), ((output_gb_s0_y_y_gb*64) + conv_s1_y)) + ((hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), ((output_gb_s0_y_y_gb*64) + conv_s1_y))*(uint16)14) + ((hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), ((output_gb_s0_y_y_gb*64) + conv_s1_y))*(uint16)17) + ((hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1))*(uint16)12) + ((hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1))*(uint16)18) + ((hw_input.stencil(((output_gb_s0_x_x_gb*64) + conv_s1_x), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2))*(uint16)13) + ((hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2))*(uint16)19) + (hw_input.stencil((((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1), (((output_gb_s0_y_y_gb*64) + conv_s1_y) + 2))*(uint16)16)))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "((output_gb_s0_y_y_gb*64) + conv_s1_y)", "(((output_gb_s0_x_x_gb*64) + conv_s1_x) + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(((output_gb_s0_y_y_gb*64) + conv_s1_y) + 1)", "((output_gb_s0_x_x_gb*64) + conv_s1_x)");
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
  auto hw_output_s0_y_yi_y_gb = prg.add_loop("hw_output_s0_y_yi_y_gb", 0, 4);
  auto hw_output_s0_x_xi_x_gb = hw_output_s0_y_yi_y_gb->add_loop("hw_output_s0_x_xi_x_gb", 0, 4);
  auto hw_output_s0_y_yi_y_cgra = hw_output_s0_x_xi_x_gb->add_loop("hw_output_s0_y_yi_y_cgra", 0, 64);
  auto hw_output_s0_x_xi_x_cgra = hw_output_s0_y_yi_y_cgra->add_loop("hw_output_s0_x_xi_x_cgra", 0, 64);

//store is: hw_output.stencil((hw_output_s0_x_xi_x_cgra + (hw_output_s0_x_xi_x_gb*64)), (hw_output_s0_y_yi_y_cgra + (hw_output_s0_y_yi_y_gb*64))) = uint8(output_gb.stencil((hw_output_s0_x_xi_x_cgra + (hw_output_s0_x_xi_x_gb*64)), (hw_output_s0_y_yi_y_cgra + (hw_output_s0_y_yi_y_gb*64))))
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi_x_cgra->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "(hw_output_s0_y_yi_y_cgra + (hw_output_s0_y_yi_y_gb*64))", "(hw_output_s0_x_xi_x_cgra + (hw_output_s0_x_xi_x_gb*64))");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "(hw_output_s0_y_yi_y_cgra + (hw_output_s0_y_yi_y_gb*64))", "(hw_output_s0_x_xi_x_cgra + (hw_output_s0_x_xi_x_gb*64))");

  return prg;
}

prog resnet_unrolled() {
  prog prg;
  prg.compute_unit_file = "resnet_unrolled_compute.h";
  prg.name = "resnet_unrolled";

// Stencil<uint16_t, 4, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 4, 3, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 3> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 3);
  auto hw_kernel_global_wrapper_s0_z = hw_kernel_global_wrapper_s0_w->add_loop("hw_kernel_global_wrapper_s0_z", 0, 4);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_z->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))
  auto hcompute_conv_stencil_3 = conv_s1_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_3->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_3->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_3->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))
  auto hcompute_conv_stencil_4 = conv_s1_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_4->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_4->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))
  auto hcompute_conv_stencil_5 = conv_s1_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_5->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_5->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 28);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("conv_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 28);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("conv_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");

  return prg;
}

prog resnet88() {
  prog prg;
  prg.compute_unit_file = "resnet88_compute.h";
  prg.name = "resnet88";
  
// Stencil<int16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 8, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 8> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//store is: hw_input_global_wrapper.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");
  hcompute_hw_input_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");

//store is: hw_input_global_wrapper.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_5 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");
  hcompute_hw_input_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");

//store is: hw_input_global_wrapper.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");
  hcompute_hw_input_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");

//store is: hw_input_global_wrapper.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_7 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");
  hcompute_hw_input_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 8);
  auto hw_kernel_global_wrapper_s0_z = hw_kernel_global_wrapper_s0_w->add_loop("hw_kernel_global_wrapper_s0_z", 0, 8);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_z->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (int16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (int16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (int16)0
  auto hcompute_conv_stencil_3 = conv_s0_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_store("conv_stencil", "3", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 4) = (int16)0
  auto hcompute_conv_stencil_4 = conv_s0_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_store("conv_stencil", "4", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 5) = (int16)0
  auto hcompute_conv_stencil_5 = conv_s0_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_store("conv_stencil", "5", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 6) = (int16)0
  auto hcompute_conv_stencil_6 = conv_s0_x->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_store("conv_stencil", "6", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 7) = (int16)0
  auto hcompute_conv_stencil_7 = conv_s0_x->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_store("conv_stencil", "7", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_x->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_8->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_x->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_9->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_x->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_10->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + ((hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_x->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "3", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "0");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "1");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "2");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "3");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "4");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "5");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "7");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "6");
  hcompute_conv_stencil_11->add_store("conv_stencil", "3", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 4) = ((hw_kernel_global_wrapper.stencil(0, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 4) + ((hw_kernel_global_wrapper.stencil(1, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_x->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "4", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "0");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "1");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "2");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "3");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "4");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "5");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "7");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "6");
  hcompute_conv_stencil_12->add_store("conv_stencil", "4", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 5) = ((hw_kernel_global_wrapper.stencil(0, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 5) + ((hw_kernel_global_wrapper.stencil(1, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_x->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "5", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "0");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "1");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "2");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "3");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "4");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "5");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "7");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "6");
  hcompute_conv_stencil_13->add_store("conv_stencil", "5", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 6) = ((hw_kernel_global_wrapper.stencil(0, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 6) + ((hw_kernel_global_wrapper.stencil(1, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_x->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "6", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "0");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "1");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "2");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "3");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "4");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "5");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "7");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "6");
  hcompute_conv_stencil_14->add_store("conv_stencil", "6", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 7) = ((hw_kernel_global_wrapper.stencil(0, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 7) + ((hw_kernel_global_wrapper.stencil(1, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_x->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "7", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "0");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "1");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "2");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "3");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "4");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "5");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "7");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "6");
  hcompute_conv_stencil_15->add_store("conv_stencil", "7", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "0", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  auto hw_output_s0_y_yi_1 = prg.add_loop("hw_output_s0_y_yi_1", 0, 28);
  auto hw_output_s0_x_xi_1 = hw_output_s0_y_yi_1->add_loop("hw_output_s0_x_xi_1", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi_1->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("conv_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "1", "hw_output_s0_y_yi_1", "hw_output_s0_x_xi_1");
  auto hw_output_s0_y_yi_2 = prg.add_loop("hw_output_s0_y_yi_2", 0, 28);
  auto hw_output_s0_x_xi_2 = hw_output_s0_y_yi_2->add_loop("hw_output_s0_x_xi_2", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi_2->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("conv_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "2", "hw_output_s0_y_yi_2", "hw_output_s0_x_xi_2");
  auto hw_output_s0_y_yi_3 = prg.add_loop("hw_output_s0_y_yi_3", 0, 28);
  auto hw_output_s0_x_xi_3 = hw_output_s0_y_yi_3->add_loop("hw_output_s0_x_xi_3", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3) = conv.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3)
  auto hcompute_hw_output_stencil_3 = hw_output_s0_x_xi_3->add_op("op_hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_function("hcompute_hw_output_stencil_3");
  hcompute_hw_output_stencil_3->add_load("conv_stencil", "3", "hw_output_s0_y_yi_3", "hw_output_s0_x_xi_3");
  hcompute_hw_output_stencil_3->add_store("hw_output_stencil", "3", "hw_output_s0_y_yi_3", "hw_output_s0_x_xi_3");
  auto hw_output_s0_y_yi_4 = prg.add_loop("hw_output_s0_y_yi_4", 0, 28);
  auto hw_output_s0_x_xi_4 = hw_output_s0_y_yi_4->add_loop("hw_output_s0_x_xi_4", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4) = conv.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4)
  auto hcompute_hw_output_stencil_4 = hw_output_s0_x_xi_4->add_op("op_hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_function("hcompute_hw_output_stencil_4");
  hcompute_hw_output_stencil_4->add_load("conv_stencil", "4", "hw_output_s0_y_yi_4", "hw_output_s0_x_xi_4");
  hcompute_hw_output_stencil_4->add_store("hw_output_stencil", "4", "hw_output_s0_y_yi_4", "hw_output_s0_x_xi_4");
  auto hw_output_s0_y_yi_5 = prg.add_loop("hw_output_s0_y_yi_5", 0, 28);
  auto hw_output_s0_x_xi_5 = hw_output_s0_y_yi_5->add_loop("hw_output_s0_x_xi_5", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5) = conv.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5)
  auto hcompute_hw_output_stencil_5 = hw_output_s0_x_xi_5->add_op("op_hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_function("hcompute_hw_output_stencil_5");
  hcompute_hw_output_stencil_5->add_load("conv_stencil", "5", "hw_output_s0_y_yi_5", "hw_output_s0_x_xi_5");
  hcompute_hw_output_stencil_5->add_store("hw_output_stencil", "5", "hw_output_s0_y_yi_5", "hw_output_s0_x_xi_5");
  auto hw_output_s0_y_yi_6 = prg.add_loop("hw_output_s0_y_yi_6", 0, 28);
  auto hw_output_s0_x_xi_6 = hw_output_s0_y_yi_6->add_loop("hw_output_s0_x_xi_6", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6) = conv.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6)
  auto hcompute_hw_output_stencil_6 = hw_output_s0_x_xi_6->add_op("op_hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_function("hcompute_hw_output_stencil_6");
  hcompute_hw_output_stencil_6->add_load("conv_stencil", "6", "hw_output_s0_y_yi_6", "hw_output_s0_x_xi_6");
  hcompute_hw_output_stencil_6->add_store("hw_output_stencil", "6", "hw_output_s0_y_yi_6", "hw_output_s0_x_xi_6");
  auto hw_output_s0_y_yi_7 = prg.add_loop("hw_output_s0_y_yi_7", 0, 28);
  auto hw_output_s0_x_xi_7 = hw_output_s0_y_yi_7->add_loop("hw_output_s0_x_xi_7", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7) = conv.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7)
  auto hcompute_hw_output_stencil_7 = hw_output_s0_x_xi_7->add_op("op_hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_function("hcompute_hw_output_stencil_7");
  hcompute_hw_output_stencil_7->add_load("conv_stencil", "7", "hw_output_s0_y_yi_7", "hw_output_s0_x_xi_7");
  hcompute_hw_output_stencil_7->add_store("hw_output_stencil", "7", "hw_output_s0_y_yi_7", "hw_output_s0_x_xi_7");

  return prg;
}

prog resnet88_chain() {
  prog prg;
  prg.compute_unit_file = "resnet88_chain_compute.h";
  prg.name = "resnet88_chain";

// Stencil<int16_t, 8, 30, 30> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 8, 8, 3, 3> &hw_kernel_stencil = arg_1;
  prg.add_input("hw_kernel_stencil");
  prg.buffer_port_widths["hw_kernel_stencil"] = 16;
// Stencil<int16_t, 28, 28, 8> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 30);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 30);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//store is: hw_input_global_wrapper.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_function("hcompute_hw_input_global_wrapper_stencil_4");
  hcompute_hw_input_global_wrapper_stencil_4->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");
  hcompute_hw_input_global_wrapper_stencil_4->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "4");

//store is: hw_input_global_wrapper.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_5 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_function("hcompute_hw_input_global_wrapper_stencil_5");
  hcompute_hw_input_global_wrapper_stencil_5->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");
  hcompute_hw_input_global_wrapper_stencil_5->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "5");

//store is: hw_input_global_wrapper.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_function("hcompute_hw_input_global_wrapper_stencil_6");
  hcompute_hw_input_global_wrapper_stencil_6->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");
  hcompute_hw_input_global_wrapper_stencil_6->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "6");

//store is: hw_input_global_wrapper.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_7 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_function("hcompute_hw_input_global_wrapper_stencil_7");
  hcompute_hw_input_global_wrapper_stencil_7->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");
  hcompute_hw_input_global_wrapper_stencil_7->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "7");

//consuming hw_input_global_wrapper.stencil
////producing hw_kernel_global_wrapper.stencil
  auto hw_kernel_global_wrapper_s0_y = prg.add_loop("hw_kernel_global_wrapper_s0_y", 0, 3);
  auto hw_kernel_global_wrapper_s0_x = hw_kernel_global_wrapper_s0_y->add_loop("hw_kernel_global_wrapper_s0_x", 0, 3);
  auto hw_kernel_global_wrapper_s0_w = hw_kernel_global_wrapper_s0_x->add_loop("hw_kernel_global_wrapper_s0_w", 0, 8);
  auto hw_kernel_global_wrapper_s0_z = hw_kernel_global_wrapper_s0_w->add_loop("hw_kernel_global_wrapper_s0_z", 0, 8);

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
  auto hcompute_hw_kernel_global_wrapper_stencil = hw_kernel_global_wrapper_s0_z->add_op("op_hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_function("hcompute_hw_kernel_global_wrapper_stencil");
  hcompute_hw_kernel_global_wrapper_stencil->add_load("hw_kernel_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");
  prg.buffer_port_widths["hw_kernel_global_wrapper_stencil"] = 16;
  hcompute_hw_kernel_global_wrapper_stencil->add_store("hw_kernel_global_wrapper_stencil", "hw_kernel_global_wrapper_s0_y", "hw_kernel_global_wrapper_s0_x", "hw_kernel_global_wrapper_s0_w", "hw_kernel_global_wrapper_s0_z");

//consuming hw_kernel_global_wrapper.stencil
////producing conv.stencil
  auto conv_s0_y = prg.add_loop("conv_s0_y", 0, 28);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 28);

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "0", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (int16)0
  auto hcompute_conv_stencil_1 = conv_s0_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_store("conv_stencil", "1", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (int16)0
  auto hcompute_conv_stencil_2 = conv_s0_x->add_op("op_hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_function("hcompute_conv_stencil_2");
  hcompute_conv_stencil_2->add_store("conv_stencil", "2", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (int16)0
  auto hcompute_conv_stencil_3 = conv_s0_x->add_op("op_hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_function("hcompute_conv_stencil_3");
  hcompute_conv_stencil_3->add_store("conv_stencil", "3", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 4) = (int16)0
  auto hcompute_conv_stencil_4 = conv_s0_x->add_op("op_hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_function("hcompute_conv_stencil_4");
  hcompute_conv_stencil_4->add_store("conv_stencil", "4", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 5) = (int16)0
  auto hcompute_conv_stencil_5 = conv_s0_x->add_op("op_hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_function("hcompute_conv_stencil_5");
  hcompute_conv_stencil_5->add_store("conv_stencil", "5", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 6) = (int16)0
  auto hcompute_conv_stencil_6 = conv_s0_x->add_op("op_hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_function("hcompute_conv_stencil_6");
  hcompute_conv_stencil_6->add_store("conv_stencil", "6", "conv_s0_y", "conv_s0_x");

//store is: conv.stencil(conv_s0_x, conv_s0_y, 7) = (int16)0
  auto hcompute_conv_stencil_7 = conv_s0_x->add_op("op_hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_function("hcompute_conv_stencil_7");
  hcompute_conv_stencil_7->add_store("conv_stencil", "7", "conv_s0_y", "conv_s0_x");
  auto conv_s1_r_y = prg.add_loop("conv_s1_r_y", 0, 3);
  auto conv_s1_r_x = conv_s1_r_y->add_loop("conv_s1_r_x", 0, 3);
  auto conv_s1_y = conv_s1_r_x->add_loop("conv_s1_y", 0, 28);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 28);

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_8 = conv_s1_x->add_op("op_hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_function("hcompute_conv_stencil_8");
  hcompute_conv_stencil_8->add_load("conv_stencil", "0", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_8->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "0");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "1");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "2");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "3");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "4");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "5");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "7");
  hcompute_conv_stencil_8->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "0", "6");
  hcompute_conv_stencil_8->add_store("conv_stencil", "0", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_9 = conv_s1_x->add_op("op_hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_function("hcompute_conv_stencil_9");
  hcompute_conv_stencil_9->add_load("conv_stencil", "1", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_9->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "1");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "2");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "3");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "4");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "5");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "7");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "6");
  hcompute_conv_stencil_9->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "1", "0");
  hcompute_conv_stencil_9->add_store("conv_stencil", "1", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_10 = conv_s1_x->add_op("op_hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_function("hcompute_conv_stencil_10");
  hcompute_conv_stencil_10->add_load("conv_stencil", "2", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_10->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "0");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "1");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "2");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "3");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "4");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "5");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "7");
  hcompute_conv_stencil_10->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "2", "6");
  hcompute_conv_stencil_10->add_store("conv_stencil", "2", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + ((hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_11 = conv_s1_x->add_op("op_hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_function("hcompute_conv_stencil_11");
  hcompute_conv_stencil_11->add_load("conv_stencil", "3", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_11->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "0");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "1");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "2");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "3");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "4");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "5");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "7");
  hcompute_conv_stencil_11->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "3", "6");
  hcompute_conv_stencil_11->add_store("conv_stencil", "3", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 4) = ((hw_kernel_global_wrapper.stencil(0, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 4) + ((hw_kernel_global_wrapper.stencil(1, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_12 = conv_s1_x->add_op("op_hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_function("hcompute_conv_stencil_12");
  hcompute_conv_stencil_12->add_load("conv_stencil", "4", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_12->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "0");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "1");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "2");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "3");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "4");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "5");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "7");
  hcompute_conv_stencil_12->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "4", "6");
  hcompute_conv_stencil_12->add_store("conv_stencil", "4", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 5) = ((hw_kernel_global_wrapper.stencil(0, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 5) + ((hw_kernel_global_wrapper.stencil(1, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_13 = conv_s1_x->add_op("op_hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_function("hcompute_conv_stencil_13");
  hcompute_conv_stencil_13->add_load("conv_stencil", "5", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_13->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "0");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "1");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "2");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "3");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "4");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "5");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "7");
  hcompute_conv_stencil_13->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "5", "6");
  hcompute_conv_stencil_13->add_store("conv_stencil", "5", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 6) = ((hw_kernel_global_wrapper.stencil(0, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 6) + ((hw_kernel_global_wrapper.stencil(1, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_14 = conv_s1_x->add_op("op_hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_function("hcompute_conv_stencil_14");
  hcompute_conv_stencil_14->add_load("conv_stencil", "6", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_14->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "0");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "1");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "2");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "3");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "4");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "5");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "7");
  hcompute_conv_stencil_14->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "6", "6");
  hcompute_conv_stencil_14->add_store("conv_stencil", "6", "conv_s1_y", "conv_s1_x");

//store is: conv.stencil(conv_s1_x, conv_s1_y, 7) = ((hw_kernel_global_wrapper.stencil(0, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 7) + ((hw_kernel_global_wrapper.stencil(1, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
  auto hcompute_conv_stencil_15 = conv_s1_x->add_op("op_hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_function("hcompute_conv_stencil_15");
  hcompute_conv_stencil_15->add_load("conv_stencil", "7", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "0");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "1");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "2");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "3");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "4");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "5");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "7");
  hcompute_conv_stencil_15->add_load("hw_input_global_wrapper_stencil", "(conv_s1_r_y + conv_s1_y)", "(conv_s1_r_x + conv_s1_x)", "6");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "0");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "1");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "2");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "3");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "4");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "5");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "7");
  hcompute_conv_stencil_15->add_load("hw_kernel_global_wrapper_stencil", "conv_s1_r_y", "conv_s1_r_x", "7", "6");
  hcompute_conv_stencil_15->add_store("conv_stencil", "7", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 8);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("conv_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog resnet_coarse_pipeline_loop() {
  prog prg = resnet();
  vector<op*> old_children = prg.root->children;
  prg.root->children ={};
  auto gp_lp = prg.root->add_loop("gb_tile", 0, 4);
  gp_lp->children = old_children;
  for (auto op : prg.all_ops()) {
    for (auto& addr : op->produce_locs) {
      auto& pwa = addr.second;
      for (auto& piece : pwa) {
        piece.second += ", gb_tile";
      }
    }
    for (auto& addr : op->consume_locs_pair) {
      auto& pwa = addr.second;
      for (auto& piece : pwa) {
        piece.second += ", gb_tile";
      }
    }
  }
  return prg;
}

prog mobilenet_unrolled() {
  prog prg;
  prg.compute_unit_file = "mobilenet_unrolled_compute.h";
  prg.name = "mobilenet_unrolled";

// Stencil<int16_t, 4, 3, 3> &hw_filter_dw_stencil = arg_0;
  prg.add_input("hw_filter_dw_stencil");
  prg.buffer_port_widths["hw_filter_dw_stencil"] = 16;
// Stencil<int16_t, 3, 4> &hw_filter_pw_stencil = arg_1;
  prg.add_input("hw_filter_pw_stencil");
  prg.buffer_port_widths["hw_filter_pw_stencil"] = 16;
// Stencil<int16_t, 4, 30, 30> &hw_input_stencil = arg_2;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<int16_t, 3, 28, 28> &hw_output_stencil = arg_3;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_filter_dw_global_wrapper.stencil
  auto hw_filter_dw_global_wrapper_s0_y = prg.add_loop("hw_filter_dw_global_wrapper_s0_y", 0, 3);
  auto hw_filter_dw_global_wrapper_s0_x = hw_filter_dw_global_wrapper_s0_y->add_loop("hw_filter_dw_global_wrapper_s0_x", 0, 3);

//store is: hw_filter_dw_global_wrapper.stencil(0, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(0, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_function("hcompute_hw_filter_dw_global_wrapper_stencil");
  hcompute_hw_filter_dw_global_wrapper_stencil->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_filter_dw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_dw_global_wrapper_stencil->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "0");

//store is: hw_filter_dw_global_wrapper.stencil(1, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(1, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil_1 = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil_1");
  hcompute_hw_filter_dw_global_wrapper_stencil_1->add_function("hcompute_hw_filter_dw_global_wrapper_stencil_1");
  hcompute_hw_filter_dw_global_wrapper_stencil_1->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "1");
  hcompute_hw_filter_dw_global_wrapper_stencil_1->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "1");

//store is: hw_filter_dw_global_wrapper.stencil(2, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(2, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil_2 = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil_2");
  hcompute_hw_filter_dw_global_wrapper_stencil_2->add_function("hcompute_hw_filter_dw_global_wrapper_stencil_2");
  hcompute_hw_filter_dw_global_wrapper_stencil_2->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "2");
  hcompute_hw_filter_dw_global_wrapper_stencil_2->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "2");

//store is: hw_filter_dw_global_wrapper.stencil(3, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(3, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
  auto hcompute_hw_filter_dw_global_wrapper_stencil_3 = hw_filter_dw_global_wrapper_s0_x->add_op("op_hcompute_hw_filter_dw_global_wrapper_stencil_3");
  hcompute_hw_filter_dw_global_wrapper_stencil_3->add_function("hcompute_hw_filter_dw_global_wrapper_stencil_3");
  hcompute_hw_filter_dw_global_wrapper_stencil_3->add_load("hw_filter_dw_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "3");
  hcompute_hw_filter_dw_global_wrapper_stencil_3->add_store("hw_filter_dw_global_wrapper_stencil", "hw_filter_dw_global_wrapper_s0_y", "hw_filter_dw_global_wrapper_s0_x", "3");

//consuming hw_filter_dw_global_wrapper.stencil
////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_y = prg.add_loop("hw_input_global_wrapper_s0_y", 0, 32);
  auto hw_input_global_wrapper_s0_x = hw_input_global_wrapper_s0_y->add_loop("hw_input_global_wrapper_s0_x", 0, 32);

//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "0");

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_1 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_function("hcompute_hw_input_global_wrapper_stencil_1");
  hcompute_hw_input_global_wrapper_stencil_1->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");
  hcompute_hw_input_global_wrapper_stencil_1->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "1");

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_function("hcompute_hw_input_global_wrapper_stencil_2");
  hcompute_hw_input_global_wrapper_stencil_2->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");
  hcompute_hw_input_global_wrapper_stencil_2->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "2");

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
  auto hcompute_hw_input_global_wrapper_stencil_3 = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_function("hcompute_hw_input_global_wrapper_stencil_3");
  hcompute_hw_input_global_wrapper_stencil_3->add_load("hw_input_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");
  hcompute_hw_input_global_wrapper_stencil_3->add_store("hw_input_global_wrapper_stencil", "hw_input_global_wrapper_s0_y", "hw_input_global_wrapper_s0_x", "3");

//consuming hw_input_global_wrapper.stencil
////producing dw_conv.stencil
  auto dw_conv_s0_y = prg.add_loop("dw_conv_s0_y", 0, 30);
  auto dw_conv_s0_x = dw_conv_s0_y->add_loop("dw_conv_s0_x", 0, 30);

//store is: dw_conv.stencil(0, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil");
  hcompute_dw_conv_stencil->add_function("hcompute_dw_conv_stencil");
  prg.buffer_port_widths["dw_conv_stencil"] = 16;
  hcompute_dw_conv_stencil->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "0");

//store is: dw_conv.stencil(1, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil_1 = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_function("hcompute_dw_conv_stencil_1");
  hcompute_dw_conv_stencil_1->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "1");

//store is: dw_conv.stencil(2, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil_2 = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_function("hcompute_dw_conv_stencil_2");
  hcompute_dw_conv_stencil_2->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "2");

//store is: dw_conv.stencil(3, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
  auto hcompute_dw_conv_stencil_3 = dw_conv_s0_x->add_op("op_hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_function("hcompute_dw_conv_stencil_3");
  hcompute_dw_conv_stencil_3->add_store("dw_conv_stencil", "dw_conv_s0_y", "dw_conv_s0_x", "3");
  auto dw_conv_s1_y = prg.add_loop("dw_conv_s1_y", 0, 30);
  auto dw_conv_s1_x = dw_conv_s1_y->add_loop("dw_conv_s1_x", 0, 30);

//store is: dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(0, 0, 0)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 1)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 2)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(0, 1, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_4 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_function("hcompute_dw_conv_stencil_4");
  hcompute_dw_conv_stencil_4->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "0");
  hcompute_dw_conv_stencil_4->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "0");
  hcompute_dw_conv_stencil_4->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "0");

//store is: dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(1, 0, 0)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 1)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 2)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(1, 1, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_5 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_5");
  hcompute_dw_conv_stencil_5->add_function("hcompute_dw_conv_stencil_5");
  hcompute_dw_conv_stencil_5->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "1");
  hcompute_dw_conv_stencil_5->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "1");
  hcompute_dw_conv_stencil_5->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "1");

//store is: dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(2, 0, 0)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 1)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 2)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(2, 1, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_6 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_6");
  hcompute_dw_conv_stencil_6->add_function("hcompute_dw_conv_stencil_6");
  hcompute_dw_conv_stencil_6->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "2");
  hcompute_dw_conv_stencil_6->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "2");
  hcompute_dw_conv_stencil_6->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "2");

//store is: dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(3, 0, 0)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 1)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 2)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(3, 1, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
  auto hcompute_dw_conv_stencil_7 = dw_conv_s1_x->add_op("op_hcompute_dw_conv_stencil_7");
  hcompute_dw_conv_stencil_7->add_function("hcompute_dw_conv_stencil_7");
  hcompute_dw_conv_stencil_7->add_load("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "0", "0", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "0", "1", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "0", "2", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "1", "0", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "1", "1", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "1", "2", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "2", "0", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "2", "2", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_filter_dw_global_wrapper_stencil", "2", "1", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 1)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "dw_conv_s1_y", "(dw_conv_s1_x + 2)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 1)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 1)", "(dw_conv_s1_x + 2)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "dw_conv_s1_x", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 2)", "3");
  hcompute_dw_conv_stencil_7->add_load("hw_input_global_wrapper_stencil", "(dw_conv_s1_y + 2)", "(dw_conv_s1_x + 1)", "3");
  hcompute_dw_conv_stencil_7->add_store("dw_conv_stencil", "dw_conv_s1_y", "dw_conv_s1_x", "3");

//consuming dw_conv.stencil
////producing hw_filter_pw_global_wrapper.stencil
  auto hw_filter_pw_global_wrapper_s0_c = prg.add_loop("hw_filter_pw_global_wrapper_s0_c", 0, 4);
  auto hw_filter_pw_global_wrapper_s0_k = hw_filter_pw_global_wrapper_s0_c->add_loop("hw_filter_pw_global_wrapper_s0_k", 0, 3);

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
  auto hcompute_hw_filter_pw_global_wrapper_stencil = hw_filter_pw_global_wrapper_s0_k->add_op("op_hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_function("hcompute_hw_filter_pw_global_wrapper_stencil");
  hcompute_hw_filter_pw_global_wrapper_stencil->add_load("hw_filter_pw_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");
  prg.buffer_port_widths["hw_filter_pw_global_wrapper_stencil"] = 16;
  hcompute_hw_filter_pw_global_wrapper_stencil->add_store("hw_filter_pw_global_wrapper_stencil", "hw_filter_pw_global_wrapper_s0_c", "hw_filter_pw_global_wrapper_s0_k");

//consuming hw_filter_pw_global_wrapper.stencil
////producing pw_conv_reduction.stencil
  auto pw_conv_reduction_s0_y = prg.add_loop("pw_conv_reduction_s0_y", 0, 30);
  auto pw_conv_reduction_s0_x = pw_conv_reduction_s0_y->add_loop("pw_conv_reduction_s0_x", 0, 30);

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil = pw_conv_reduction_s0_x->add_op("op_hcompute_pw_conv_reduction_stencil");
  hcompute_pw_conv_reduction_stencil->add_function("hcompute_pw_conv_reduction_stencil");
  prg.buffer_port_widths["pw_conv_reduction_stencil"] = 16;
  hcompute_pw_conv_reduction_stencil->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "0");

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil_1 = pw_conv_reduction_s0_x->add_op("op_hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_function("hcompute_pw_conv_reduction_stencil_1");
  hcompute_pw_conv_reduction_stencil_1->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "1");

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
  auto hcompute_pw_conv_reduction_stencil_2 = pw_conv_reduction_s0_x->add_op("op_hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_function("hcompute_pw_conv_reduction_stencil_2");
  hcompute_pw_conv_reduction_stencil_2->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s0_y", "pw_conv_reduction_s0_x", "2");
  auto pw_conv_reduction_s1_y = prg.add_loop("pw_conv_reduction_s1_y", 0, 30);
  auto pw_conv_reduction_s1_x = pw_conv_reduction_s1_y->add_loop("pw_conv_reduction_s1_x", 0, 30);

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(0, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(0, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(0, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(0, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
  auto hcompute_pw_conv_reduction_stencil_3 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_function("hcompute_pw_conv_reduction_stencil_3");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "3");
  hcompute_pw_conv_reduction_stencil_3->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "0", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "1", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "3", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("hw_filter_pw_global_wrapper_stencil", "2", "0");
  hcompute_pw_conv_reduction_stencil_3->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_3->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(1, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(1, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(1, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(1, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
  auto hcompute_pw_conv_reduction_stencil_4 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_4");
  hcompute_pw_conv_reduction_stencil_4->add_function("hcompute_pw_conv_reduction_stencil_4");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "3");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_4->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "0", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "1", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "3", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("hw_filter_pw_global_wrapper_stencil", "2", "1");
  hcompute_pw_conv_reduction_stencil_4->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_4->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(2, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(2, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(2, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(2, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
  auto hcompute_pw_conv_reduction_stencil_5 = pw_conv_reduction_s1_x->add_op("op_hcompute_pw_conv_reduction_stencil_5");
  hcompute_pw_conv_reduction_stencil_5->add_function("hcompute_pw_conv_reduction_stencil_5");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "0");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "1");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "3");
  hcompute_pw_conv_reduction_stencil_5->add_load("dw_conv_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "1", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "3", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "2", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("hw_filter_pw_global_wrapper_stencil", "0", "2");
  hcompute_pw_conv_reduction_stencil_5->add_load("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");
  hcompute_pw_conv_reduction_stencil_5->add_store("pw_conv_reduction_stencil", "pw_conv_reduction_s1_y", "pw_conv_reduction_s1_x", "2");

//consuming pw_conv_reduction.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 30);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 30);

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "0");

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_1 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_function("hcompute_hw_output_stencil_1");
  hcompute_hw_output_stencil_1->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");
  hcompute_hw_output_stencil_1->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "1");

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil_2 = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_function("hcompute_hw_output_stencil_2");
  hcompute_hw_output_stencil_2->add_load("pw_conv_reduction_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");
  hcompute_hw_output_stencil_2->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi", "2");

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

prog three_level_pond() {
  prog prg;
  prg.compute_unit_file = "three_level_pond_compute.h";
  prg.name = "three_level_pond";

// Stencil<uint16_t, 34, 34> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 32, 32> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_cgra.stencil
  auto input_cgra_s0_y = prg.add_loop("input_cgra_s0_y", 0, 34);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 34);

//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_x->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_host_stencil", "input_cgra_s0_y", "input_cgra_s0_x");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x");

//consuming input_cgra.stencil
////producing output_cgra.stencil
  auto output_cgra_s0_y_y_cgra = prg.add_loop("output_cgra_s0_y_y_cgra", 0, 4);
  auto output_cgra_s0_x_x_cgra = output_cgra_s0_y_y_cgra->add_loop("output_cgra_s0_x_x_cgra", 0, 4);
////producing hw_input.stencil
  auto hw_input_s0_y = output_cgra_s0_x_x_cgra->add_loop("hw_input_s0_y", 0, 10);
  auto hw_input_s0_x = hw_input_s0_y->add_loop("hw_input_s0_x", 0, 10);

//store is: hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y) - (output_cgra_s0_y_y_cgra*8))) = input_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x), ((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y))
  auto hcompute_hw_input_stencil = hw_input_s0_x->add_op("op_hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_function("hcompute_hw_input_stencil");
  hcompute_hw_input_stencil->add_load("input_cgra_stencil", "((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y)", "((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x)");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
  hcompute_hw_input_stencil->add_store("hw_input_stencil", "hw_input_s0_y", "hw_input_s0_x");

//consuming hw_input.stencil
////producing conv.stencil
  auto conv_s0_y = output_cgra_s0_x_x_cgra->add_loop("conv_s0_y", 0, 8);
  auto conv_s0_x = conv_s0_y->add_loop("conv_s0_x", 0, 8);

//store is: conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s0_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s0_y) - (output_cgra_s0_y_y_cgra*8))) = (uint16)0
  auto hcompute_conv_stencil = conv_s0_x->add_op("op_hcompute_conv_stencil");
  hcompute_conv_stencil->add_function("hcompute_conv_stencil");
  prg.buffer_port_widths["conv_stencil"] = 16;
  hcompute_conv_stencil->add_store("conv_stencil", "conv_s0_y", "conv_s0_x");
  auto conv_s1_y = output_cgra_s0_x_x_cgra->add_loop("conv_s1_y", 0, 8);
  auto conv_s1_x = conv_s1_y->add_loop("conv_s1_x", 0, 8);

//store is: conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) = (hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (conv.stencil(((output_cgra_s0_x_x_cgra*8) + conv_s1_x), ((output_cgra_s0_y_y_cgra*8) + conv_s1_y)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 1), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 2), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + (hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 1)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 1), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 1)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 2), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 1)) + (hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 2)) + (hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 2), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 2)) + hw_input.stencil(((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)) + 1), ((((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8)) + 2)))))))))))
  auto hcompute_conv_stencil_1 = conv_s1_x->add_op("op_hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_function("hcompute_conv_stencil_1");
  hcompute_conv_stencil_1->add_load("conv_stencil", "((output_cgra_s0_y_y_cgra*8) + conv_s1_y)", "((output_cgra_s0_x_x_cgra*8) + conv_s1_x)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "conv_s1_y", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 1)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 1)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 2)", "conv_s1_x");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 2)");
  hcompute_conv_stencil_1->add_load("hw_input_stencil", "(conv_s1_y + 2)", "(conv_s1_x + 1)");
  hcompute_conv_stencil_1->add_store("conv_stencil", "conv_s1_y", "conv_s1_x");

//consuming conv.stencil
  auto output_cgra_s0_y_y_pond = output_cgra_s0_x_x_cgra->add_loop("output_cgra_s0_y_y_pond", 0, 8);
  auto output_cgra_s0_x_x_pond = output_cgra_s0_y_y_pond->add_loop("output_cgra_s0_x_x_pond", 0, 8);

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond), ((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)) = conv.stencil(output_cgra_s0_x_x_pond, output_cgra_s0_y_y_pond)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x_x_pond->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("conv_stencil", "output_cgra_s0_y_y_pond", "output_cgra_s0_x_x_pond");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)", "((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond)");

//consuming output_cgra.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 32);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 32);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_cgra_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog resnet_full_layer() {
  prog prg;
  prg.compute_unit_file = "resnet_full_layer_compute.h";
  prg.name = "resnet_full_layer";

// Stencil<uint16_t, 64, 30, 30> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 64, 48, 3, 3> &kernel_host_stencil = arg_1;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 48> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing input_gb.stencil
  auto input_gb_s0_y = prg.add_loop("input_gb_s0_y", 0, 30);
  auto input_gb_s0_x = input_gb_s0_y->add_loop("input_gb_s0_x", 0, 30);
  auto input_gb_s0_z = input_gb_s0_x->add_loop("input_gb_s0_z", 0, 64);

//store is: input_gb.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y)
  auto hcompute_input_gb_stencil = input_gb_s0_z->add_op("op_hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_function("hcompute_input_gb_stencil");
  hcompute_input_gb_stencil->add_load("input_host_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_z");
  prg.buffer_port_widths["input_gb_stencil"] = 16;
  hcompute_input_gb_stencil->add_store("input_gb_stencil", "input_gb_s0_y", "input_gb_s0_x", "input_gb_s0_z");

//consuming input_gb.stencil
////producing kernel_gb.stencil
  auto kernel_gb_s0_y = prg.add_loop("kernel_gb_s0_y", 0, 3);
  auto kernel_gb_s0_x = kernel_gb_s0_y->add_loop("kernel_gb_s0_x", 0, 3);
  auto kernel_gb_s0_w = kernel_gb_s0_x->add_loop("kernel_gb_s0_w", 0, 48);
  auto kernel_gb_s0_z = kernel_gb_s0_w->add_loop("kernel_gb_s0_z", 0, 64);

//store is: kernel_gb.stencil(kernel_gb_s0_z, kernel_gb_s0_w, kernel_gb_s0_x, kernel_gb_s0_y) = kernel_host.stencil(kernel_gb_s0_z, kernel_gb_s0_w, kernel_gb_s0_x, kernel_gb_s0_y)
  auto hcompute_kernel_gb_stencil = kernel_gb_s0_z->add_op("op_hcompute_kernel_gb_stencil");
  hcompute_kernel_gb_stencil->add_function("hcompute_kernel_gb_stencil");
  hcompute_kernel_gb_stencil->add_load("kernel_host_stencil", "kernel_gb_s0_y", "kernel_gb_s0_x", "kernel_gb_s0_w", "kernel_gb_s0_z");
  prg.buffer_port_widths["kernel_gb_stencil"] = 16;
  hcompute_kernel_gb_stencil->add_store("kernel_gb_stencil", "kernel_gb_s0_y", "kernel_gb_s0_x", "kernel_gb_s0_w", "kernel_gb_s0_z");

//consuming kernel_gb.stencil
////producing output_gb.stencil
  auto output_gb_s0_w_w_gb = prg.add_loop("output_gb_s0_w_w_gb", 0, 16);
////producing output_cgra.stencil
  auto output_cgra_s0_y = output_gb_s0_w_w_gb->add_loop("output_cgra_s0_y", 0, 28);
  auto output_cgra_s0_x = output_cgra_s0_y->add_loop("output_cgra_s0_x", 0, 28);
  auto output_cgra_s0_w_w_cgra = output_cgra_s0_x->add_loop("output_cgra_s0_w_w_cgra", 0, 3);

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, (output_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))) = (uint16)0
  auto hcompute_output_cgra_stencil = output_cgra_s0_w_w_cgra->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "(output_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "output_cgra_s0_y", "output_cgra_s0_x");
  auto output_cgra_s1_r_w = output_gb_s0_w_w_gb->add_loop("output_cgra_s1_r_w", 0, 16);
////producing input_cgra.stencil
  auto input_cgra_s0_z_z_gb = output_cgra_s1_r_w->add_loop("input_cgra_s0_z_z_gb", 0, 4);
  auto input_cgra_s0_y = input_cgra_s0_z_z_gb->add_loop("input_cgra_s0_y", 0, 30);
  auto input_cgra_s0_zz = input_cgra_s0_y->add_loop("input_cgra_s0_zz", 0, 4);
  auto input_cgra_s0_x = input_cgra_s0_zz->add_loop("input_cgra_s0_x", 0, 30);
  auto input_cgra_s0_z_z_cgra = input_cgra_s0_x->add_loop("input_cgra_s0_z_z_cgra", 0, 4);

//store is: input_cgra.stencil((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4)), input_cgra_s0_zz, input_cgra_s0_x, input_cgra_s0_y) = input_gb.stencil((((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))*4) + input_cgra_s0_zz), input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_z_z_cgra->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_gb_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "(((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))*4) + input_cgra_s0_zz)");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "input_cgra_s0_zz", "(input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))");

//consuming input_cgra.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_z_z_gb = output_cgra_s1_r_w->add_loop("kernel_cgra_s0_z_z_gb", 0, 4);
  auto kernel_cgra_s0_y = kernel_cgra_s0_z_z_gb->add_loop("kernel_cgra_s0_y", 0, 3);
  auto kernel_cgra_s0_x = kernel_cgra_s0_y->add_loop("kernel_cgra_s0_x", 0, 3);
  auto kernel_cgra_s0_zz = kernel_cgra_s0_x->add_loop("kernel_cgra_s0_zz", 0, 4);
  auto kernel_cgra_s0_w_w_cgra = kernel_cgra_s0_zz->add_loop("kernel_cgra_s0_w_w_cgra", 0, 3);
  auto kernel_cgra_s0_z_z_cgra = kernel_cgra_s0_w_w_cgra->add_loop("kernel_cgra_s0_z_z_cgra", 0, 4);

//store is: kernel_cgra.stencil((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4)), kernel_cgra_s0_zz, (kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)), kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_gb.stencil((((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))*4) + kernel_cgra_s0_zz), (kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)), kernel_cgra_s0_x, kernel_cgra_s0_y)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_z_z_cgra->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_load("kernel_gb_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "(kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "(((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))*4) + kernel_cgra_s0_zz)");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "(kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "kernel_cgra_s0_zz", "(kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))");

//consuming kernel_cgra.stencil
  auto output_cgra_s1_r_y = output_cgra_s1_r_w->add_loop("output_cgra_s1_r_y", 0, 3);
  auto output_cgra_s1_r_x = output_cgra_s1_r_y->add_loop("output_cgra_s1_r_x", 0, 3);
  auto output_cgra_s1_y = output_cgra_s1_r_x->add_loop("output_cgra_s1_y", 0, 28);
  auto output_cgra_s1_x = output_cgra_s1_y->add_loop("output_cgra_s1_x", 0, 28);

//store is: output_cgra.stencil(output_cgra_s1_x, output_cgra_s1_y, (output_gb_s0_w_w_gb*3)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(output_cgra_s1_x, output_cgra_s1_y, (output_gb_s0_w_w_gb*3)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))
  auto hcompute_output_cgra_stencil_1 = output_cgra_s1_x->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("input_cgra_stencil", "(output_cgra_s1_r_y + output_cgra_s1_y)", "(output_cgra_s1_r_x + output_cgra_s1_x)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y", "output_cgra_s1_r_x", "(output_gb_s0_w_w_gb*3)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_1->add_load("output_cgra_stencil", "(output_gb_s0_w_w_gb*3)", "output_cgra_s1_y", "output_cgra_s1_x");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "(output_gb_s0_w_w_gb*3)", "output_cgra_s1_y", "output_cgra_s1_x");
  auto output_cgra_s1_r_y_1 = output_cgra_s1_r_w->add_loop("output_cgra_s1_r_y_1", 0, 3);
  auto output_cgra_s1_r_x_1 = output_cgra_s1_r_y_1->add_loop("output_cgra_s1_r_x_1", 0, 3);
  auto output_cgra_s1_y_1 = output_cgra_s1_r_x_1->add_loop("output_cgra_s1_y_1", 0, 28);
  auto output_cgra_s1_x_1 = output_cgra_s1_y_1->add_loop("output_cgra_s1_x_1", 0, 28);

//store is: output_cgra.stencil(output_cgra_s1_x_1, output_cgra_s1_y_1, ((output_gb_s0_w_w_gb*3) + 1)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + (output_cgra.stencil(output_cgra_s1_x_1, output_cgra_s1_y_1, ((output_gb_s0_w_w_gb*3) + 1)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1)))))))
  auto hcompute_output_cgra_stencil_2 = output_cgra_s1_x_1->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_1 + output_cgra_s1_y_1)", "(output_cgra_s1_r_x_1 + output_cgra_s1_x_1)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_1", "output_cgra_s1_r_x_1", "((output_gb_s0_w_w_gb*3) + 1)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_2->add_load("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 1)", "output_cgra_s1_y_1", "output_cgra_s1_x_1");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 1)", "output_cgra_s1_y_1", "output_cgra_s1_x_1");
  auto output_cgra_s1_r_y_2 = output_cgra_s1_r_w->add_loop("output_cgra_s1_r_y_2", 0, 3);
  auto output_cgra_s1_r_x_2 = output_cgra_s1_r_y_2->add_loop("output_cgra_s1_r_x_2", 0, 3);
  auto output_cgra_s1_y_2 = output_cgra_s1_r_x_2->add_loop("output_cgra_s1_y_2", 0, 28);
  auto output_cgra_s1_x_2 = output_cgra_s1_y_2->add_loop("output_cgra_s1_x_2", 0, 28);

//store is: output_cgra.stencil(output_cgra_s1_x_2, output_cgra_s1_y_2, ((output_gb_s0_w_w_gb*3) + 2)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + (output_cgra.stencil(output_cgra_s1_x_2, output_cgra_s1_y_2, ((output_gb_s0_w_w_gb*3) + 2)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2)))))))
  auto hcompute_output_cgra_stencil_3 = output_cgra_s1_x_2->add_op("op_hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_function("hcompute_output_cgra_stencil_3");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("input_cgra_stencil", "(output_cgra_s1_r_y_2 + output_cgra_s1_y_2)", "(output_cgra_s1_r_x_2 + output_cgra_s1_x_2)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "1", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "3", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "2", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("kernel_cgra_stencil", "output_cgra_s1_r_y_2", "output_cgra_s1_r_x_2", "((output_gb_s0_w_w_gb*3) + 2)", "0", "output_cgra_s1_r_w");
  hcompute_output_cgra_stencil_3->add_load("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 2)", "output_cgra_s1_y_2", "output_cgra_s1_x_2");
  hcompute_output_cgra_stencil_3->add_store("output_cgra_stencil", "((output_gb_s0_w_w_gb*3) + 2)", "output_cgra_s1_y_2", "output_cgra_s1_x_2");

//consuming output_cgra.stencil
  auto output_gb_s0_y_y_cgra = output_gb_s0_w_w_gb->add_loop("output_gb_s0_y_y_cgra", 0, 28);
  auto output_gb_s0_x_x_cgra = output_gb_s0_y_y_cgra->add_loop("output_gb_s0_x_x_cgra", 0, 28);
  auto output_gb_s0_w_w_cgra = output_gb_s0_x_x_cgra->add_loop("output_gb_s0_w_w_cgra", 0, 3);

//store is: output_gb.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, (output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))) = output_cgra.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, (output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)))
  auto hcompute_output_gb_stencil = output_gb_s0_w_w_cgra->add_op("op_hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_function("hcompute_output_gb_stencil");
  hcompute_output_gb_stencil->add_load("output_cgra_stencil", "(output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");
  prg.buffer_port_widths["output_gb_stencil"] = 16;
  hcompute_output_gb_stencil->add_store("output_gb_stencil", "(output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))", "output_gb_s0_y_y_cgra", "output_gb_s0_x_x_cgra");

//consuming output_gb.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 48);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 28);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 28);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_gb_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

prog histogram1d() {
  prog prg;
  prg.compute_unit_file = "histogram1d_compute.h";
  prg.name = "histogram1d";

// Stencil<uint16_t, 64, 1> &hw_input_stencil = arg_0;
  prg.add_input("hw_input_stencil");
  prg.buffer_port_widths["hw_input_stencil"] = 16;
// Stencil<uint16_t, 64, 64> &hw_output_stencil = arg_1;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing hw_input_global_wrapper.stencil
  auto hw_input_global_wrapper_s0_x = prg.add_loop("hw_input_global_wrapper_s0_x", 0, 64);

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, 0) = hw_input.stencil(hw_input_global_wrapper_s0_x, 0)
  auto hcompute_hw_input_global_wrapper_stencil = hw_input_global_wrapper_s0_x->add_op("op_hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_function("hcompute_hw_input_global_wrapper_stencil");
  hcompute_hw_input_global_wrapper_stencil->add_load("hw_input_stencil", "0", "hw_input_global_wrapper_s0_x");
  prg.buffer_port_widths["hw_input_global_wrapper_stencil"] = 16;
  hcompute_hw_input_global_wrapper_stencil->add_store("hw_input_global_wrapper_stencil", "0", "hw_input_global_wrapper_s0_x");

//consuming hw_input_global_wrapper.stencil
////producing bin.stencil
  auto bin_s0_x = prg.add_loop("bin_s0_x", 0, 64);

//store is: bin.stencil(bin_s0_x) = int32(hw_input_global_wrapper.stencil(bin_s0_x, 0))
  auto hcompute_bin_stencil = bin_s0_x->add_op("op_hcompute_bin_stencil");
  hcompute_bin_stencil->add_function("hcompute_bin_stencil");
  hcompute_bin_stencil->add_load("hw_input_global_wrapper_stencil", "0", "bin_s0_x");
  prg.buffer_port_widths["bin_stencil"] = 32;
  hcompute_bin_stencil->add_store("bin_stencil", "bin_s0_x");

//consuming bin.stencil
  auto hw_output_s0_y_yi = prg.add_loop("hw_output_s0_y_yi", 0, 64);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 64);
////producing histogram.stencil
  auto histogram_s0_b = hw_output_s0_x_xi->add_loop("histogram_s0_b", 0, 256);

//store is: histogram.stencil(histogram_s0_b) = (uint16)0
  auto hcompute_histogram_stencil = histogram_s0_b->add_op("op_hcompute_histogram_stencil");
  hcompute_histogram_stencil->add_function("hcompute_histogram_stencil");
  prg.buffer_port_widths["histogram_stencil"] = 16;
  hcompute_histogram_stencil->add_store("histogram_stencil", "histogram_s0_b");
  auto histogram_s1_r_x = hw_output_s0_x_xi->add_loop("histogram_s1_r_x", 0, 64);

//store is: histogram.stencil(bin.stencil(histogram_s1_r_x)) = (histogram.stencil(bin.stencil(histogram_s1_r_x)) + (uint16)1)
  auto hcompute_histogram_stencil_1 = histogram_s1_r_x->add_op("op_hcompute_histogram_stencil_1");
  hcompute_histogram_stencil_1->add_function("hcompute_histogram_stencil_1");
  hcompute_histogram_stencil_1->add_dynamic_load("histogram_stencil", "bin_stencil", "histogram_s1_r_x");
  hcompute_histogram_stencil_1->add_dynamic_store("histogram_stencil", "bin_stencil", "histogram_s1_r_x");

//consuming histogram.stencil

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = histogram.stencil(hw_output_s0_x_xi)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("histogram_stencil", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}

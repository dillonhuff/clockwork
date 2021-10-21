#include "example_progs.h"

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

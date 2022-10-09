#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_left_input_global_wrapper.stencil((hw_left_input_global_wrapper_s0_x + -1), (hw_left_input_global_wrapper_s0_y + 4)) = hw_left_input.stencil(hw_left_input_global_wrapper_s0_x, hw_left_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_left_input_global_wrapper_stencil(hw_uint<16>& hw_left_input_stencil) {
  uint16_t _hw_left_input_stencil_1 = (uint16_t) (hw_left_input_stencil.extract<0, 15>());

  return _hw_left_input_stencil_1;
}

//store is: hw_left_input_copy.stencil((hw_left_input_copy_s0_x + -1), (hw_left_input_copy_s0_y + 4)) = hw_left_input_global_wrapper.stencil((hw_left_input_copy_s0_x + -1), (hw_left_input_copy_s0_y + 4))
hw_uint<16> hcompute_hw_left_input_copy_stencil(hw_uint<16>& hw_left_input_global_wrapper_stencil) {
  uint16_t _hw_left_input_global_wrapper_stencil_1 = (uint16_t) (hw_left_input_global_wrapper_stencil.extract<0, 15>());

  return _hw_left_input_global_wrapper_stencil_1;
}

//store is: hw_right_input_global_wrapper.stencil((hw_right_input_global_wrapper_s0_x + 4), (hw_right_input_global_wrapper_s0_y + 4)) = hw_right_input.stencil(hw_right_input_global_wrapper_s0_x, hw_right_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_right_input_global_wrapper_stencil(hw_uint<16>& hw_right_input_stencil) {
  uint16_t _hw_right_input_stencil_1 = (uint16_t) (hw_right_input_stencil.extract<0, 15>());

  return _hw_right_input_stencil_1;
}

//store is: hw_right_input_copy.stencil((hw_right_input_copy_s0_x + 4), (hw_right_input_copy_s0_y + 4)) = hw_right_input_global_wrapper.stencil((hw_right_input_copy_s0_x + 4), (hw_right_input_copy_s0_y + 4))
hw_uint<16> hcompute_hw_right_input_copy_stencil(hw_uint<16>& hw_right_input_global_wrapper_stencil) {
  uint16_t _hw_right_input_global_wrapper_stencil_1 = (uint16_t) (hw_right_input_global_wrapper_stencil.extract<0, 15>());

  return _hw_right_input_global_wrapper_stencil_1;
}

//store is: SAD.stencil(SAD_s0_x, SAD_s0_y, SAD_s0_c) = (uint16)0
hw_uint<16> hcompute_SAD_stencil() {
  uint16_t _698 = (uint16_t)(0);
  return _698;
}

//store is: SAD.stencil(SAD_s1_x, SAD_s1_y, SAD_s1_c) = (absd(hw_right_input_copy.stencil(SAD_s1_x, SAD_s1_y), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), SAD_s1_y)) + (SAD.stencil(SAD_s1_x, SAD_s1_y, SAD_s1_c) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), SAD_s1_y)) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), SAD_s1_y)) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), SAD_s1_y)) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), SAD_s1_y)) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), SAD_s1_y)) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), SAD_s1_y)) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), SAD_s1_y), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), SAD_s1_y)) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 1)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 1)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 1))) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 2)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 2)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 2))) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 3)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 3)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 3))) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 4)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 4)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 4))) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 5)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 5)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 5))) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 6)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 6)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 6))) + (absd(hw_right_input_copy.stencil(SAD_s1_x, (SAD_s1_y + 7)), hw_left_input_copy.stencil((SAD_s1_c + SAD_s1_x), (SAD_s1_y + 7))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 1), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 1), (SAD_s1_y + 7))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 2), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 2), (SAD_s1_y + 7))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 3), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 3), (SAD_s1_y + 7))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 4), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 4), (SAD_s1_y + 7))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 5), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 5), (SAD_s1_y + 7))) + (absd(hw_right_input_copy.stencil((SAD_s1_x + 7), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 7), (SAD_s1_y + 7))) + absd(hw_right_input_copy.stencil((SAD_s1_x + 6), (SAD_s1_y + 7)), hw_left_input_copy.stencil(((SAD_s1_c + SAD_s1_x) + 6), (SAD_s1_y + 7)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_SAD_stencil_1(hw_uint<16>& SAD_stencil, hw_uint<1024>& hw_left_input_copy_stencil, hw_uint<1024>& hw_right_input_copy_stencil) {
  uint16_t _SAD_stencil_1 = (uint16_t) (SAD_stencil.extract<0, 15>());

  uint16_t _hw_left_input_copy_stencil_1 = (uint16_t) (hw_left_input_copy_stencil.extract<0, 15>());
  uint16_t _hw_left_input_copy_stencil_10 = (uint16_t) (hw_left_input_copy_stencil.extract<16, 31>());
  uint16_t _hw_left_input_copy_stencil_11 = (uint16_t) (hw_left_input_copy_stencil.extract<32, 47>());
  uint16_t _hw_left_input_copy_stencil_12 = (uint16_t) (hw_left_input_copy_stencil.extract<48, 63>());
  uint16_t _hw_left_input_copy_stencil_13 = (uint16_t) (hw_left_input_copy_stencil.extract<64, 79>());
  uint16_t _hw_left_input_copy_stencil_14 = (uint16_t) (hw_left_input_copy_stencil.extract<80, 95>());
  uint16_t _hw_left_input_copy_stencil_15 = (uint16_t) (hw_left_input_copy_stencil.extract<96, 111>());
  uint16_t _hw_left_input_copy_stencil_16 = (uint16_t) (hw_left_input_copy_stencil.extract<112, 127>());
  uint16_t _hw_left_input_copy_stencil_17 = (uint16_t) (hw_left_input_copy_stencil.extract<128, 143>());
  uint16_t _hw_left_input_copy_stencil_18 = (uint16_t) (hw_left_input_copy_stencil.extract<144, 159>());
  uint16_t _hw_left_input_copy_stencil_19 = (uint16_t) (hw_left_input_copy_stencil.extract<160, 175>());
  uint16_t _hw_left_input_copy_stencil_2 = (uint16_t) (hw_left_input_copy_stencil.extract<176, 191>());
  uint16_t _hw_left_input_copy_stencil_20 = (uint16_t) (hw_left_input_copy_stencil.extract<192, 207>());
  uint16_t _hw_left_input_copy_stencil_21 = (uint16_t) (hw_left_input_copy_stencil.extract<208, 223>());
  uint16_t _hw_left_input_copy_stencil_22 = (uint16_t) (hw_left_input_copy_stencil.extract<224, 239>());
  uint16_t _hw_left_input_copy_stencil_23 = (uint16_t) (hw_left_input_copy_stencil.extract<240, 255>());
  uint16_t _hw_left_input_copy_stencil_24 = (uint16_t) (hw_left_input_copy_stencil.extract<256, 271>());
  uint16_t _hw_left_input_copy_stencil_25 = (uint16_t) (hw_left_input_copy_stencil.extract<272, 287>());
  uint16_t _hw_left_input_copy_stencil_26 = (uint16_t) (hw_left_input_copy_stencil.extract<288, 303>());
  uint16_t _hw_left_input_copy_stencil_27 = (uint16_t) (hw_left_input_copy_stencil.extract<304, 319>());
  uint16_t _hw_left_input_copy_stencil_28 = (uint16_t) (hw_left_input_copy_stencil.extract<320, 335>());
  uint16_t _hw_left_input_copy_stencil_29 = (uint16_t) (hw_left_input_copy_stencil.extract<336, 351>());
  uint16_t _hw_left_input_copy_stencil_3 = (uint16_t) (hw_left_input_copy_stencil.extract<352, 367>());
  uint16_t _hw_left_input_copy_stencil_30 = (uint16_t) (hw_left_input_copy_stencil.extract<368, 383>());
  uint16_t _hw_left_input_copy_stencil_31 = (uint16_t) (hw_left_input_copy_stencil.extract<384, 399>());
  uint16_t _hw_left_input_copy_stencil_32 = (uint16_t) (hw_left_input_copy_stencil.extract<400, 415>());
  uint16_t _hw_left_input_copy_stencil_33 = (uint16_t) (hw_left_input_copy_stencil.extract<416, 431>());
  uint16_t _hw_left_input_copy_stencil_34 = (uint16_t) (hw_left_input_copy_stencil.extract<432, 447>());
  uint16_t _hw_left_input_copy_stencil_35 = (uint16_t) (hw_left_input_copy_stencil.extract<448, 463>());
  uint16_t _hw_left_input_copy_stencil_36 = (uint16_t) (hw_left_input_copy_stencil.extract<464, 479>());
  uint16_t _hw_left_input_copy_stencil_37 = (uint16_t) (hw_left_input_copy_stencil.extract<480, 495>());
  uint16_t _hw_left_input_copy_stencil_38 = (uint16_t) (hw_left_input_copy_stencil.extract<496, 511>());
  uint16_t _hw_left_input_copy_stencil_39 = (uint16_t) (hw_left_input_copy_stencil.extract<512, 527>());
  uint16_t _hw_left_input_copy_stencil_4 = (uint16_t) (hw_left_input_copy_stencil.extract<528, 543>());
  uint16_t _hw_left_input_copy_stencil_40 = (uint16_t) (hw_left_input_copy_stencil.extract<544, 559>());
  uint16_t _hw_left_input_copy_stencil_41 = (uint16_t) (hw_left_input_copy_stencil.extract<560, 575>());
  uint16_t _hw_left_input_copy_stencil_42 = (uint16_t) (hw_left_input_copy_stencil.extract<576, 591>());
  uint16_t _hw_left_input_copy_stencil_43 = (uint16_t) (hw_left_input_copy_stencil.extract<592, 607>());
  uint16_t _hw_left_input_copy_stencil_44 = (uint16_t) (hw_left_input_copy_stencil.extract<608, 623>());
  uint16_t _hw_left_input_copy_stencil_45 = (uint16_t) (hw_left_input_copy_stencil.extract<624, 639>());
  uint16_t _hw_left_input_copy_stencil_46 = (uint16_t) (hw_left_input_copy_stencil.extract<640, 655>());
  uint16_t _hw_left_input_copy_stencil_47 = (uint16_t) (hw_left_input_copy_stencil.extract<656, 671>());
  uint16_t _hw_left_input_copy_stencil_48 = (uint16_t) (hw_left_input_copy_stencil.extract<672, 687>());
  uint16_t _hw_left_input_copy_stencil_49 = (uint16_t) (hw_left_input_copy_stencil.extract<688, 703>());
  uint16_t _hw_left_input_copy_stencil_5 = (uint16_t) (hw_left_input_copy_stencil.extract<704, 719>());
  uint16_t _hw_left_input_copy_stencil_50 = (uint16_t) (hw_left_input_copy_stencil.extract<720, 735>());
  uint16_t _hw_left_input_copy_stencil_51 = (uint16_t) (hw_left_input_copy_stencil.extract<736, 751>());
  uint16_t _hw_left_input_copy_stencil_52 = (uint16_t) (hw_left_input_copy_stencil.extract<752, 767>());
  uint16_t _hw_left_input_copy_stencil_53 = (uint16_t) (hw_left_input_copy_stencil.extract<768, 783>());
  uint16_t _hw_left_input_copy_stencil_54 = (uint16_t) (hw_left_input_copy_stencil.extract<784, 799>());
  uint16_t _hw_left_input_copy_stencil_55 = (uint16_t) (hw_left_input_copy_stencil.extract<800, 815>());
  uint16_t _hw_left_input_copy_stencil_56 = (uint16_t) (hw_left_input_copy_stencil.extract<816, 831>());
  uint16_t _hw_left_input_copy_stencil_57 = (uint16_t) (hw_left_input_copy_stencil.extract<832, 847>());
  uint16_t _hw_left_input_copy_stencil_58 = (uint16_t) (hw_left_input_copy_stencil.extract<848, 863>());
  uint16_t _hw_left_input_copy_stencil_59 = (uint16_t) (hw_left_input_copy_stencil.extract<864, 879>());
  uint16_t _hw_left_input_copy_stencil_6 = (uint16_t) (hw_left_input_copy_stencil.extract<880, 895>());
  uint16_t _hw_left_input_copy_stencil_60 = (uint16_t) (hw_left_input_copy_stencil.extract<896, 911>());
  uint16_t _hw_left_input_copy_stencil_61 = (uint16_t) (hw_left_input_copy_stencil.extract<912, 927>());
  uint16_t _hw_left_input_copy_stencil_62 = (uint16_t) (hw_left_input_copy_stencil.extract<928, 943>());
  uint16_t _hw_left_input_copy_stencil_63 = (uint16_t) (hw_left_input_copy_stencil.extract<944, 959>());
  uint16_t _hw_left_input_copy_stencil_64 = (uint16_t) (hw_left_input_copy_stencil.extract<960, 975>());
  uint16_t _hw_left_input_copy_stencil_7 = (uint16_t) (hw_left_input_copy_stencil.extract<976, 991>());
  uint16_t _hw_left_input_copy_stencil_8 = (uint16_t) (hw_left_input_copy_stencil.extract<992, 1007>());
  uint16_t _hw_left_input_copy_stencil_9 = (uint16_t) (hw_left_input_copy_stencil.extract<1008, 1023>());

  uint16_t _hw_right_input_copy_stencil_1 = (uint16_t) (hw_right_input_copy_stencil.extract<0, 15>());
  uint16_t _hw_right_input_copy_stencil_10 = (uint16_t) (hw_right_input_copy_stencil.extract<16, 31>());
  uint16_t _hw_right_input_copy_stencil_11 = (uint16_t) (hw_right_input_copy_stencil.extract<32, 47>());
  uint16_t _hw_right_input_copy_stencil_12 = (uint16_t) (hw_right_input_copy_stencil.extract<48, 63>());
  uint16_t _hw_right_input_copy_stencil_13 = (uint16_t) (hw_right_input_copy_stencil.extract<64, 79>());
  uint16_t _hw_right_input_copy_stencil_14 = (uint16_t) (hw_right_input_copy_stencil.extract<80, 95>());
  uint16_t _hw_right_input_copy_stencil_15 = (uint16_t) (hw_right_input_copy_stencil.extract<96, 111>());
  uint16_t _hw_right_input_copy_stencil_16 = (uint16_t) (hw_right_input_copy_stencil.extract<112, 127>());
  uint16_t _hw_right_input_copy_stencil_17 = (uint16_t) (hw_right_input_copy_stencil.extract<128, 143>());
  uint16_t _hw_right_input_copy_stencil_18 = (uint16_t) (hw_right_input_copy_stencil.extract<144, 159>());
  uint16_t _hw_right_input_copy_stencil_19 = (uint16_t) (hw_right_input_copy_stencil.extract<160, 175>());
  uint16_t _hw_right_input_copy_stencil_2 = (uint16_t) (hw_right_input_copy_stencil.extract<176, 191>());
  uint16_t _hw_right_input_copy_stencil_20 = (uint16_t) (hw_right_input_copy_stencil.extract<192, 207>());
  uint16_t _hw_right_input_copy_stencil_21 = (uint16_t) (hw_right_input_copy_stencil.extract<208, 223>());
  uint16_t _hw_right_input_copy_stencil_22 = (uint16_t) (hw_right_input_copy_stencil.extract<224, 239>());
  uint16_t _hw_right_input_copy_stencil_23 = (uint16_t) (hw_right_input_copy_stencil.extract<240, 255>());
  uint16_t _hw_right_input_copy_stencil_24 = (uint16_t) (hw_right_input_copy_stencil.extract<256, 271>());
  uint16_t _hw_right_input_copy_stencil_25 = (uint16_t) (hw_right_input_copy_stencil.extract<272, 287>());
  uint16_t _hw_right_input_copy_stencil_26 = (uint16_t) (hw_right_input_copy_stencil.extract<288, 303>());
  uint16_t _hw_right_input_copy_stencil_27 = (uint16_t) (hw_right_input_copy_stencil.extract<304, 319>());
  uint16_t _hw_right_input_copy_stencil_28 = (uint16_t) (hw_right_input_copy_stencil.extract<320, 335>());
  uint16_t _hw_right_input_copy_stencil_29 = (uint16_t) (hw_right_input_copy_stencil.extract<336, 351>());
  uint16_t _hw_right_input_copy_stencil_3 = (uint16_t) (hw_right_input_copy_stencil.extract<352, 367>());
  uint16_t _hw_right_input_copy_stencil_30 = (uint16_t) (hw_right_input_copy_stencil.extract<368, 383>());
  uint16_t _hw_right_input_copy_stencil_31 = (uint16_t) (hw_right_input_copy_stencil.extract<384, 399>());
  uint16_t _hw_right_input_copy_stencil_32 = (uint16_t) (hw_right_input_copy_stencil.extract<400, 415>());
  uint16_t _hw_right_input_copy_stencil_33 = (uint16_t) (hw_right_input_copy_stencil.extract<416, 431>());
  uint16_t _hw_right_input_copy_stencil_34 = (uint16_t) (hw_right_input_copy_stencil.extract<432, 447>());
  uint16_t _hw_right_input_copy_stencil_35 = (uint16_t) (hw_right_input_copy_stencil.extract<448, 463>());
  uint16_t _hw_right_input_copy_stencil_36 = (uint16_t) (hw_right_input_copy_stencil.extract<464, 479>());
  uint16_t _hw_right_input_copy_stencil_37 = (uint16_t) (hw_right_input_copy_stencil.extract<480, 495>());
  uint16_t _hw_right_input_copy_stencil_38 = (uint16_t) (hw_right_input_copy_stencil.extract<496, 511>());
  uint16_t _hw_right_input_copy_stencil_39 = (uint16_t) (hw_right_input_copy_stencil.extract<512, 527>());
  uint16_t _hw_right_input_copy_stencil_4 = (uint16_t) (hw_right_input_copy_stencil.extract<528, 543>());
  uint16_t _hw_right_input_copy_stencil_40 = (uint16_t) (hw_right_input_copy_stencil.extract<544, 559>());
  uint16_t _hw_right_input_copy_stencil_41 = (uint16_t) (hw_right_input_copy_stencil.extract<560, 575>());
  uint16_t _hw_right_input_copy_stencil_42 = (uint16_t) (hw_right_input_copy_stencil.extract<576, 591>());
  uint16_t _hw_right_input_copy_stencil_43 = (uint16_t) (hw_right_input_copy_stencil.extract<592, 607>());
  uint16_t _hw_right_input_copy_stencil_44 = (uint16_t) (hw_right_input_copy_stencil.extract<608, 623>());
  uint16_t _hw_right_input_copy_stencil_45 = (uint16_t) (hw_right_input_copy_stencil.extract<624, 639>());
  uint16_t _hw_right_input_copy_stencil_46 = (uint16_t) (hw_right_input_copy_stencil.extract<640, 655>());
  uint16_t _hw_right_input_copy_stencil_47 = (uint16_t) (hw_right_input_copy_stencil.extract<656, 671>());
  uint16_t _hw_right_input_copy_stencil_48 = (uint16_t) (hw_right_input_copy_stencil.extract<672, 687>());
  uint16_t _hw_right_input_copy_stencil_49 = (uint16_t) (hw_right_input_copy_stencil.extract<688, 703>());
  uint16_t _hw_right_input_copy_stencil_5 = (uint16_t) (hw_right_input_copy_stencil.extract<704, 719>());
  uint16_t _hw_right_input_copy_stencil_50 = (uint16_t) (hw_right_input_copy_stencil.extract<720, 735>());
  uint16_t _hw_right_input_copy_stencil_51 = (uint16_t) (hw_right_input_copy_stencil.extract<736, 751>());
  uint16_t _hw_right_input_copy_stencil_52 = (uint16_t) (hw_right_input_copy_stencil.extract<752, 767>());
  uint16_t _hw_right_input_copy_stencil_53 = (uint16_t) (hw_right_input_copy_stencil.extract<768, 783>());
  uint16_t _hw_right_input_copy_stencil_54 = (uint16_t) (hw_right_input_copy_stencil.extract<784, 799>());
  uint16_t _hw_right_input_copy_stencil_55 = (uint16_t) (hw_right_input_copy_stencil.extract<800, 815>());
  uint16_t _hw_right_input_copy_stencil_56 = (uint16_t) (hw_right_input_copy_stencil.extract<816, 831>());
  uint16_t _hw_right_input_copy_stencil_57 = (uint16_t) (hw_right_input_copy_stencil.extract<832, 847>());
  uint16_t _hw_right_input_copy_stencil_58 = (uint16_t) (hw_right_input_copy_stencil.extract<848, 863>());
  uint16_t _hw_right_input_copy_stencil_59 = (uint16_t) (hw_right_input_copy_stencil.extract<864, 879>());
  uint16_t _hw_right_input_copy_stencil_6 = (uint16_t) (hw_right_input_copy_stencil.extract<880, 895>());
  uint16_t _hw_right_input_copy_stencil_60 = (uint16_t) (hw_right_input_copy_stencil.extract<896, 911>());
  uint16_t _hw_right_input_copy_stencil_61 = (uint16_t) (hw_right_input_copy_stencil.extract<912, 927>());
  uint16_t _hw_right_input_copy_stencil_62 = (uint16_t) (hw_right_input_copy_stencil.extract<928, 943>());
  uint16_t _hw_right_input_copy_stencil_63 = (uint16_t) (hw_right_input_copy_stencil.extract<944, 959>());
  uint16_t _hw_right_input_copy_stencil_64 = (uint16_t) (hw_right_input_copy_stencil.extract<960, 975>());
  uint16_t _hw_right_input_copy_stencil_7 = (uint16_t) (hw_right_input_copy_stencil.extract<976, 991>());
  uint16_t _hw_right_input_copy_stencil_8 = (uint16_t) (hw_right_input_copy_stencil.extract<992, 1007>());
  uint16_t _hw_right_input_copy_stencil_9 = (uint16_t) (hw_right_input_copy_stencil.extract<1008, 1023>());

  uint16_t _701 = _hw_left_input_copy_stencil_1 - _hw_right_input_copy_stencil_1;
  uint16_t _702 = _hw_right_input_copy_stencil_1 - _hw_left_input_copy_stencil_1;
  bool _703 = _hw_right_input_copy_stencil_1 < _hw_left_input_copy_stencil_1;
  uint16_t _704 = (uint16_t)(_703 ? _701 : _702);
  uint16_t _705 = _704;
  uint16_t _706 = _hw_left_input_copy_stencil_2 - _hw_right_input_copy_stencil_2;
  uint16_t _707 = _hw_right_input_copy_stencil_2 - _hw_left_input_copy_stencil_2;
  bool _708 = _hw_right_input_copy_stencil_2 < _hw_left_input_copy_stencil_2;
  uint16_t _709 = (uint16_t)(_708 ? _706 : _707);
  uint16_t _710 = _709;
  uint16_t _711 = _hw_left_input_copy_stencil_3 - _hw_right_input_copy_stencil_3;
  uint16_t _712 = _hw_right_input_copy_stencil_3 - _hw_left_input_copy_stencil_3;
  bool _713 = _hw_right_input_copy_stencil_3 < _hw_left_input_copy_stencil_3;
  uint16_t _714 = (uint16_t)(_713 ? _711 : _712);
  uint16_t _715 = _714;
  uint16_t _716 = _hw_left_input_copy_stencil_4 - _hw_right_input_copy_stencil_4;
  uint16_t _717 = _hw_right_input_copy_stencil_4 - _hw_left_input_copy_stencil_4;
  bool _718 = _hw_right_input_copy_stencil_4 < _hw_left_input_copy_stencil_4;
  uint16_t _719 = (uint16_t)(_718 ? _716 : _717);
  uint16_t _720 = _719;
  uint16_t _721 = _hw_left_input_copy_stencil_5 - _hw_right_input_copy_stencil_5;
  uint16_t _722 = _hw_right_input_copy_stencil_5 - _hw_left_input_copy_stencil_5;
  bool _723 = _hw_right_input_copy_stencil_5 < _hw_left_input_copy_stencil_5;
  uint16_t _724 = (uint16_t)(_723 ? _721 : _722);
  uint16_t _725 = _724;
  uint16_t _726 = _hw_left_input_copy_stencil_6 - _hw_right_input_copy_stencil_6;
  uint16_t _727 = _hw_right_input_copy_stencil_6 - _hw_left_input_copy_stencil_6;
  bool _728 = _hw_right_input_copy_stencil_6 < _hw_left_input_copy_stencil_6;
  uint16_t _729 = (uint16_t)(_728 ? _726 : _727);
  uint16_t _730 = _729;
  uint16_t _731 = _hw_left_input_copy_stencil_7 - _hw_right_input_copy_stencil_7;
  uint16_t _732 = _hw_right_input_copy_stencil_7 - _hw_left_input_copy_stencil_7;
  bool _733 = _hw_right_input_copy_stencil_7 < _hw_left_input_copy_stencil_7;
  uint16_t _734 = (uint16_t)(_733 ? _731 : _732);
  uint16_t _735 = _734;
  uint16_t _736 = _hw_left_input_copy_stencil_8 - _hw_right_input_copy_stencil_8;
  uint16_t _737 = _hw_right_input_copy_stencil_8 - _hw_left_input_copy_stencil_8;
  bool _738 = _hw_right_input_copy_stencil_8 < _hw_left_input_copy_stencil_8;
  uint16_t _739 = (uint16_t)(_738 ? _736 : _737);
  uint16_t _740 = _739;
  uint16_t _741 = _hw_left_input_copy_stencil_9 - _hw_right_input_copy_stencil_9;
  uint16_t _742 = _hw_right_input_copy_stencil_9 - _hw_left_input_copy_stencil_9;
  bool _743 = _hw_right_input_copy_stencil_9 < _hw_left_input_copy_stencil_9;
  uint16_t _744 = (uint16_t)(_743 ? _741 : _742);
  uint16_t _745 = _744;
  uint16_t _746 = _hw_left_input_copy_stencil_10 - _hw_right_input_copy_stencil_10;
  uint16_t _747 = _hw_right_input_copy_stencil_10 - _hw_left_input_copy_stencil_10;
  bool _748 = _hw_right_input_copy_stencil_10 < _hw_left_input_copy_stencil_10;
  uint16_t _749 = (uint16_t)(_748 ? _746 : _747);
  uint16_t _750 = _749;
  uint16_t _751 = _hw_left_input_copy_stencil_11 - _hw_right_input_copy_stencil_11;
  uint16_t _752 = _hw_right_input_copy_stencil_11 - _hw_left_input_copy_stencil_11;
  bool _753 = _hw_right_input_copy_stencil_11 < _hw_left_input_copy_stencil_11;
  uint16_t _754 = (uint16_t)(_753 ? _751 : _752);
  uint16_t _755 = _754;
  uint16_t _756 = _hw_left_input_copy_stencil_12 - _hw_right_input_copy_stencil_12;
  uint16_t _757 = _hw_right_input_copy_stencil_12 - _hw_left_input_copy_stencil_12;
  bool _758 = _hw_right_input_copy_stencil_12 < _hw_left_input_copy_stencil_12;
  uint16_t _759 = (uint16_t)(_758 ? _756 : _757);
  uint16_t _760 = _759;
  uint16_t _761 = _hw_left_input_copy_stencil_13 - _hw_right_input_copy_stencil_13;
  uint16_t _762 = _hw_right_input_copy_stencil_13 - _hw_left_input_copy_stencil_13;
  bool _763 = _hw_right_input_copy_stencil_13 < _hw_left_input_copy_stencil_13;
  uint16_t _764 = (uint16_t)(_763 ? _761 : _762);
  uint16_t _765 = _764;
  uint16_t _766 = _hw_left_input_copy_stencil_14 - _hw_right_input_copy_stencil_14;
  uint16_t _767 = _hw_right_input_copy_stencil_14 - _hw_left_input_copy_stencil_14;
  bool _768 = _hw_right_input_copy_stencil_14 < _hw_left_input_copy_stencil_14;
  uint16_t _769 = (uint16_t)(_768 ? _766 : _767);
  uint16_t _770 = _769;
  uint16_t _771 = _hw_left_input_copy_stencil_15 - _hw_right_input_copy_stencil_15;
  uint16_t _772 = _hw_right_input_copy_stencil_15 - _hw_left_input_copy_stencil_15;
  bool _773 = _hw_right_input_copy_stencil_15 < _hw_left_input_copy_stencil_15;
  uint16_t _774 = (uint16_t)(_773 ? _771 : _772);
  uint16_t _775 = _774;
  uint16_t _776 = _hw_left_input_copy_stencil_16 - _hw_right_input_copy_stencil_16;
  uint16_t _777 = _hw_right_input_copy_stencil_16 - _hw_left_input_copy_stencil_16;
  bool _778 = _hw_right_input_copy_stencil_16 < _hw_left_input_copy_stencil_16;
  uint16_t _779 = (uint16_t)(_778 ? _776 : _777);
  uint16_t _780 = _779;
  uint16_t _781 = _hw_left_input_copy_stencil_17 - _hw_right_input_copy_stencil_17;
  uint16_t _782 = _hw_right_input_copy_stencil_17 - _hw_left_input_copy_stencil_17;
  bool _783 = _hw_right_input_copy_stencil_17 < _hw_left_input_copy_stencil_17;
  uint16_t _784 = (uint16_t)(_783 ? _781 : _782);
  uint16_t _785 = _784;
  uint16_t _786 = _hw_left_input_copy_stencil_18 - _hw_right_input_copy_stencil_18;
  uint16_t _787 = _hw_right_input_copy_stencil_18 - _hw_left_input_copy_stencil_18;
  bool _788 = _hw_right_input_copy_stencil_18 < _hw_left_input_copy_stencil_18;
  uint16_t _789 = (uint16_t)(_788 ? _786 : _787);
  uint16_t _790 = _789;
  uint16_t _791 = _hw_left_input_copy_stencil_19 - _hw_right_input_copy_stencil_19;
  uint16_t _792 = _hw_right_input_copy_stencil_19 - _hw_left_input_copy_stencil_19;
  bool _793 = _hw_right_input_copy_stencil_19 < _hw_left_input_copy_stencil_19;
  uint16_t _794 = (uint16_t)(_793 ? _791 : _792);
  uint16_t _795 = _794;
  uint16_t _796 = _hw_left_input_copy_stencil_20 - _hw_right_input_copy_stencil_20;
  uint16_t _797 = _hw_right_input_copy_stencil_20 - _hw_left_input_copy_stencil_20;
  bool _798 = _hw_right_input_copy_stencil_20 < _hw_left_input_copy_stencil_20;
  uint16_t _799 = (uint16_t)(_798 ? _796 : _797);
  uint16_t _800 = _799;
  uint16_t _801 = _hw_left_input_copy_stencil_21 - _hw_right_input_copy_stencil_21;
  uint16_t _802 = _hw_right_input_copy_stencil_21 - _hw_left_input_copy_stencil_21;
  bool _803 = _hw_right_input_copy_stencil_21 < _hw_left_input_copy_stencil_21;
  uint16_t _804 = (uint16_t)(_803 ? _801 : _802);
  uint16_t _805 = _804;
  uint16_t _806 = _hw_left_input_copy_stencil_22 - _hw_right_input_copy_stencil_22;
  uint16_t _807 = _hw_right_input_copy_stencil_22 - _hw_left_input_copy_stencil_22;
  bool _808 = _hw_right_input_copy_stencil_22 < _hw_left_input_copy_stencil_22;
  uint16_t _809 = (uint16_t)(_808 ? _806 : _807);
  uint16_t _810 = _809;
  uint16_t _811 = _hw_left_input_copy_stencil_23 - _hw_right_input_copy_stencil_23;
  uint16_t _812 = _hw_right_input_copy_stencil_23 - _hw_left_input_copy_stencil_23;
  bool _813 = _hw_right_input_copy_stencil_23 < _hw_left_input_copy_stencil_23;
  uint16_t _814 = (uint16_t)(_813 ? _811 : _812);
  uint16_t _815 = _814;
  uint16_t _816 = _hw_left_input_copy_stencil_24 - _hw_right_input_copy_stencil_24;
  uint16_t _817 = _hw_right_input_copy_stencil_24 - _hw_left_input_copy_stencil_24;
  bool _818 = _hw_right_input_copy_stencil_24 < _hw_left_input_copy_stencil_24;
  uint16_t _819 = (uint16_t)(_818 ? _816 : _817);
  uint16_t _820 = _819;
  uint16_t _821 = _hw_left_input_copy_stencil_25 - _hw_right_input_copy_stencil_25;
  uint16_t _822 = _hw_right_input_copy_stencil_25 - _hw_left_input_copy_stencil_25;
  bool _823 = _hw_right_input_copy_stencil_25 < _hw_left_input_copy_stencil_25;
  uint16_t _824 = (uint16_t)(_823 ? _821 : _822);
  uint16_t _825 = _824;
  uint16_t _826 = _hw_left_input_copy_stencil_26 - _hw_right_input_copy_stencil_26;
  uint16_t _827 = _hw_right_input_copy_stencil_26 - _hw_left_input_copy_stencil_26;
  bool _828 = _hw_right_input_copy_stencil_26 < _hw_left_input_copy_stencil_26;
  uint16_t _829 = (uint16_t)(_828 ? _826 : _827);
  uint16_t _830 = _829;
  uint16_t _831 = _hw_left_input_copy_stencil_27 - _hw_right_input_copy_stencil_27;
  uint16_t _832 = _hw_right_input_copy_stencil_27 - _hw_left_input_copy_stencil_27;
  bool _833 = _hw_right_input_copy_stencil_27 < _hw_left_input_copy_stencil_27;
  uint16_t _834 = (uint16_t)(_833 ? _831 : _832);
  uint16_t _835 = _834;
  uint16_t _836 = _hw_left_input_copy_stencil_28 - _hw_right_input_copy_stencil_28;
  uint16_t _837 = _hw_right_input_copy_stencil_28 - _hw_left_input_copy_stencil_28;
  bool _838 = _hw_right_input_copy_stencil_28 < _hw_left_input_copy_stencil_28;
  uint16_t _839 = (uint16_t)(_838 ? _836 : _837);
  uint16_t _840 = _839;
  uint16_t _841 = _hw_left_input_copy_stencil_29 - _hw_right_input_copy_stencil_29;
  uint16_t _842 = _hw_right_input_copy_stencil_29 - _hw_left_input_copy_stencil_29;
  bool _843 = _hw_right_input_copy_stencil_29 < _hw_left_input_copy_stencil_29;
  uint16_t _844 = (uint16_t)(_843 ? _841 : _842);
  uint16_t _845 = _844;
  uint16_t _846 = _hw_left_input_copy_stencil_30 - _hw_right_input_copy_stencil_30;
  uint16_t _847 = _hw_right_input_copy_stencil_30 - _hw_left_input_copy_stencil_30;
  bool _848 = _hw_right_input_copy_stencil_30 < _hw_left_input_copy_stencil_30;
  uint16_t _849 = (uint16_t)(_848 ? _846 : _847);
  uint16_t _850 = _849;
  uint16_t _851 = _hw_left_input_copy_stencil_31 - _hw_right_input_copy_stencil_31;
  uint16_t _852 = _hw_right_input_copy_stencil_31 - _hw_left_input_copy_stencil_31;
  bool _853 = _hw_right_input_copy_stencil_31 < _hw_left_input_copy_stencil_31;
  uint16_t _854 = (uint16_t)(_853 ? _851 : _852);
  uint16_t _855 = _854;
  uint16_t _856 = _hw_left_input_copy_stencil_32 - _hw_right_input_copy_stencil_32;
  uint16_t _857 = _hw_right_input_copy_stencil_32 - _hw_left_input_copy_stencil_32;
  bool _858 = _hw_right_input_copy_stencil_32 < _hw_left_input_copy_stencil_32;
  uint16_t _859 = (uint16_t)(_858 ? _856 : _857);
  uint16_t _860 = _859;
  uint16_t _861 = _hw_left_input_copy_stencil_33 - _hw_right_input_copy_stencil_33;
  uint16_t _862 = _hw_right_input_copy_stencil_33 - _hw_left_input_copy_stencil_33;
  bool _863 = _hw_right_input_copy_stencil_33 < _hw_left_input_copy_stencil_33;
  uint16_t _864 = (uint16_t)(_863 ? _861 : _862);
  uint16_t _865 = _864;
  uint16_t _866 = _hw_left_input_copy_stencil_34 - _hw_right_input_copy_stencil_34;
  uint16_t _867 = _hw_right_input_copy_stencil_34 - _hw_left_input_copy_stencil_34;
  bool _868 = _hw_right_input_copy_stencil_34 < _hw_left_input_copy_stencil_34;
  uint16_t _869 = (uint16_t)(_868 ? _866 : _867);
  uint16_t _870 = _869;
  uint16_t _871 = _hw_left_input_copy_stencil_35 - _hw_right_input_copy_stencil_35;
  uint16_t _872 = _hw_right_input_copy_stencil_35 - _hw_left_input_copy_stencil_35;
  bool _873 = _hw_right_input_copy_stencil_35 < _hw_left_input_copy_stencil_35;
  uint16_t _874 = (uint16_t)(_873 ? _871 : _872);
  uint16_t _875 = _874;
  uint16_t _876 = _hw_left_input_copy_stencil_36 - _hw_right_input_copy_stencil_36;
  uint16_t _877 = _hw_right_input_copy_stencil_36 - _hw_left_input_copy_stencil_36;
  bool _878 = _hw_right_input_copy_stencil_36 < _hw_left_input_copy_stencil_36;
  uint16_t _879 = (uint16_t)(_878 ? _876 : _877);
  uint16_t _880 = _879;
  uint16_t _881 = _hw_left_input_copy_stencil_37 - _hw_right_input_copy_stencil_37;
  uint16_t _882 = _hw_right_input_copy_stencil_37 - _hw_left_input_copy_stencil_37;
  bool _883 = _hw_right_input_copy_stencil_37 < _hw_left_input_copy_stencil_37;
  uint16_t _884 = (uint16_t)(_883 ? _881 : _882);
  uint16_t _885 = _884;
  uint16_t _886 = _hw_left_input_copy_stencil_38 - _hw_right_input_copy_stencil_38;
  uint16_t _887 = _hw_right_input_copy_stencil_38 - _hw_left_input_copy_stencil_38;
  bool _888 = _hw_right_input_copy_stencil_38 < _hw_left_input_copy_stencil_38;
  uint16_t _889 = (uint16_t)(_888 ? _886 : _887);
  uint16_t _890 = _889;
  uint16_t _891 = _hw_left_input_copy_stencil_39 - _hw_right_input_copy_stencil_39;
  uint16_t _892 = _hw_right_input_copy_stencil_39 - _hw_left_input_copy_stencil_39;
  bool _893 = _hw_right_input_copy_stencil_39 < _hw_left_input_copy_stencil_39;
  uint16_t _894 = (uint16_t)(_893 ? _891 : _892);
  uint16_t _895 = _894;
  uint16_t _896 = _hw_left_input_copy_stencil_40 - _hw_right_input_copy_stencil_40;
  uint16_t _897 = _hw_right_input_copy_stencil_40 - _hw_left_input_copy_stencil_40;
  bool _898 = _hw_right_input_copy_stencil_40 < _hw_left_input_copy_stencil_40;
  uint16_t _899 = (uint16_t)(_898 ? _896 : _897);
  uint16_t _900 = _899;
  uint16_t _901 = _hw_left_input_copy_stencil_41 - _hw_right_input_copy_stencil_41;
  uint16_t _902 = _hw_right_input_copy_stencil_41 - _hw_left_input_copy_stencil_41;
  bool _903 = _hw_right_input_copy_stencil_41 < _hw_left_input_copy_stencil_41;
  uint16_t _904 = (uint16_t)(_903 ? _901 : _902);
  uint16_t _905 = _904;
  uint16_t _906 = _hw_left_input_copy_stencil_42 - _hw_right_input_copy_stencil_42;
  uint16_t _907 = _hw_right_input_copy_stencil_42 - _hw_left_input_copy_stencil_42;
  bool _908 = _hw_right_input_copy_stencil_42 < _hw_left_input_copy_stencil_42;
  uint16_t _909 = (uint16_t)(_908 ? _906 : _907);
  uint16_t _910 = _909;
  uint16_t _911 = _hw_left_input_copy_stencil_43 - _hw_right_input_copy_stencil_43;
  uint16_t _912 = _hw_right_input_copy_stencil_43 - _hw_left_input_copy_stencil_43;
  bool _913 = _hw_right_input_copy_stencil_43 < _hw_left_input_copy_stencil_43;
  uint16_t _914 = (uint16_t)(_913 ? _911 : _912);
  uint16_t _915 = _914;
  uint16_t _916 = _hw_left_input_copy_stencil_44 - _hw_right_input_copy_stencil_44;
  uint16_t _917 = _hw_right_input_copy_stencil_44 - _hw_left_input_copy_stencil_44;
  bool _918 = _hw_right_input_copy_stencil_44 < _hw_left_input_copy_stencil_44;
  uint16_t _919 = (uint16_t)(_918 ? _916 : _917);
  uint16_t _920 = _919;
  uint16_t _921 = _hw_left_input_copy_stencil_45 - _hw_right_input_copy_stencil_45;
  uint16_t _922 = _hw_right_input_copy_stencil_45 - _hw_left_input_copy_stencil_45;
  bool _923 = _hw_right_input_copy_stencil_45 < _hw_left_input_copy_stencil_45;
  uint16_t _924 = (uint16_t)(_923 ? _921 : _922);
  uint16_t _925 = _924;
  uint16_t _926 = _hw_left_input_copy_stencil_46 - _hw_right_input_copy_stencil_46;
  uint16_t _927 = _hw_right_input_copy_stencil_46 - _hw_left_input_copy_stencil_46;
  bool _928 = _hw_right_input_copy_stencil_46 < _hw_left_input_copy_stencil_46;
  uint16_t _929 = (uint16_t)(_928 ? _926 : _927);
  uint16_t _930 = _929;
  uint16_t _931 = _hw_left_input_copy_stencil_47 - _hw_right_input_copy_stencil_47;
  uint16_t _932 = _hw_right_input_copy_stencil_47 - _hw_left_input_copy_stencil_47;
  bool _933 = _hw_right_input_copy_stencil_47 < _hw_left_input_copy_stencil_47;
  uint16_t _934 = (uint16_t)(_933 ? _931 : _932);
  uint16_t _935 = _934;
  uint16_t _936 = _hw_left_input_copy_stencil_48 - _hw_right_input_copy_stencil_48;
  uint16_t _937 = _hw_right_input_copy_stencil_48 - _hw_left_input_copy_stencil_48;
  bool _938 = _hw_right_input_copy_stencil_48 < _hw_left_input_copy_stencil_48;
  uint16_t _939 = (uint16_t)(_938 ? _936 : _937);
  uint16_t _940 = _939;
  uint16_t _941 = _hw_left_input_copy_stencil_49 - _hw_right_input_copy_stencil_49;
  uint16_t _942 = _hw_right_input_copy_stencil_49 - _hw_left_input_copy_stencil_49;
  bool _943 = _hw_right_input_copy_stencil_49 < _hw_left_input_copy_stencil_49;
  uint16_t _944 = (uint16_t)(_943 ? _941 : _942);
  uint16_t _945 = _944;
  uint16_t _946 = _hw_left_input_copy_stencil_50 - _hw_right_input_copy_stencil_50;
  uint16_t _947 = _hw_right_input_copy_stencil_50 - _hw_left_input_copy_stencil_50;
  bool _948 = _hw_right_input_copy_stencil_50 < _hw_left_input_copy_stencil_50;
  uint16_t _949 = (uint16_t)(_948 ? _946 : _947);
  uint16_t _950 = _949;
  uint16_t _951 = _hw_left_input_copy_stencil_51 - _hw_right_input_copy_stencil_51;
  uint16_t _952 = _hw_right_input_copy_stencil_51 - _hw_left_input_copy_stencil_51;
  bool _953 = _hw_right_input_copy_stencil_51 < _hw_left_input_copy_stencil_51;
  uint16_t _954 = (uint16_t)(_953 ? _951 : _952);
  uint16_t _955 = _954;
  uint16_t _956 = _hw_left_input_copy_stencil_52 - _hw_right_input_copy_stencil_52;
  uint16_t _957 = _hw_right_input_copy_stencil_52 - _hw_left_input_copy_stencil_52;
  bool _958 = _hw_right_input_copy_stencil_52 < _hw_left_input_copy_stencil_52;
  uint16_t _959 = (uint16_t)(_958 ? _956 : _957);
  uint16_t _960 = _959;
  uint16_t _961 = _hw_left_input_copy_stencil_53 - _hw_right_input_copy_stencil_53;
  uint16_t _962 = _hw_right_input_copy_stencil_53 - _hw_left_input_copy_stencil_53;
  bool _963 = _hw_right_input_copy_stencil_53 < _hw_left_input_copy_stencil_53;
  uint16_t _964 = (uint16_t)(_963 ? _961 : _962);
  uint16_t _965 = _964;
  uint16_t _966 = _hw_left_input_copy_stencil_54 - _hw_right_input_copy_stencil_54;
  uint16_t _967 = _hw_right_input_copy_stencil_54 - _hw_left_input_copy_stencil_54;
  bool _968 = _hw_right_input_copy_stencil_54 < _hw_left_input_copy_stencil_54;
  uint16_t _969 = (uint16_t)(_968 ? _966 : _967);
  uint16_t _970 = _969;
  uint16_t _971 = _hw_left_input_copy_stencil_55 - _hw_right_input_copy_stencil_55;
  uint16_t _972 = _hw_right_input_copy_stencil_55 - _hw_left_input_copy_stencil_55;
  bool _973 = _hw_right_input_copy_stencil_55 < _hw_left_input_copy_stencil_55;
  uint16_t _974 = (uint16_t)(_973 ? _971 : _972);
  uint16_t _975 = _974;
  uint16_t _976 = _hw_left_input_copy_stencil_56 - _hw_right_input_copy_stencil_56;
  uint16_t _977 = _hw_right_input_copy_stencil_56 - _hw_left_input_copy_stencil_56;
  bool _978 = _hw_right_input_copy_stencil_56 < _hw_left_input_copy_stencil_56;
  uint16_t _979 = (uint16_t)(_978 ? _976 : _977);
  uint16_t _980 = _979;
  uint16_t _981 = _hw_left_input_copy_stencil_57 - _hw_right_input_copy_stencil_57;
  uint16_t _982 = _hw_right_input_copy_stencil_57 - _hw_left_input_copy_stencil_57;
  bool _983 = _hw_right_input_copy_stencil_57 < _hw_left_input_copy_stencil_57;
  uint16_t _984 = (uint16_t)(_983 ? _981 : _982);
  uint16_t _985 = _984;
  uint16_t _986 = _hw_left_input_copy_stencil_58 - _hw_right_input_copy_stencil_58;
  uint16_t _987 = _hw_right_input_copy_stencil_58 - _hw_left_input_copy_stencil_58;
  bool _988 = _hw_right_input_copy_stencil_58 < _hw_left_input_copy_stencil_58;
  uint16_t _989 = (uint16_t)(_988 ? _986 : _987);
  uint16_t _990 = _989;
  uint16_t _991 = _hw_left_input_copy_stencil_59 - _hw_right_input_copy_stencil_59;
  uint16_t _992 = _hw_right_input_copy_stencil_59 - _hw_left_input_copy_stencil_59;
  bool _993 = _hw_right_input_copy_stencil_59 < _hw_left_input_copy_stencil_59;
  uint16_t _994 = (uint16_t)(_993 ? _991 : _992);
  uint16_t _995 = _994;
  uint16_t _996 = _hw_left_input_copy_stencil_60 - _hw_right_input_copy_stencil_60;
  uint16_t _997 = _hw_right_input_copy_stencil_60 - _hw_left_input_copy_stencil_60;
  bool _998 = _hw_right_input_copy_stencil_60 < _hw_left_input_copy_stencil_60;
  uint16_t _999 = (uint16_t)(_998 ? _996 : _997);
  uint16_t _1000 = _999;
  uint16_t _1001 = _hw_left_input_copy_stencil_61 - _hw_right_input_copy_stencil_61;
  uint16_t _1002 = _hw_right_input_copy_stencil_61 - _hw_left_input_copy_stencil_61;
  bool _1003 = _hw_right_input_copy_stencil_61 < _hw_left_input_copy_stencil_61;
  uint16_t _1004 = (uint16_t)(_1003 ? _1001 : _1002);
  uint16_t _1005 = _1004;
  uint16_t _1006 = _hw_left_input_copy_stencil_62 - _hw_right_input_copy_stencil_62;
  uint16_t _1007 = _hw_right_input_copy_stencil_62 - _hw_left_input_copy_stencil_62;
  bool _1008 = _hw_right_input_copy_stencil_62 < _hw_left_input_copy_stencil_62;
  uint16_t _1009 = (uint16_t)(_1008 ? _1006 : _1007);
  uint16_t _1010 = _1009;
  uint16_t _1011 = _hw_left_input_copy_stencil_63 - _hw_right_input_copy_stencil_63;
  uint16_t _1012 = _hw_right_input_copy_stencil_63 - _hw_left_input_copy_stencil_63;
  bool _1013 = _hw_right_input_copy_stencil_63 < _hw_left_input_copy_stencil_63;
  uint16_t _1014 = (uint16_t)(_1013 ? _1011 : _1012);
  uint16_t _1015 = _1014;
  uint16_t _1016 = _hw_left_input_copy_stencil_64 - _hw_right_input_copy_stencil_64;
  uint16_t _1017 = _hw_right_input_copy_stencil_64 - _hw_left_input_copy_stencil_64;
  bool _1018 = _hw_right_input_copy_stencil_64 < _hw_left_input_copy_stencil_64;
  uint16_t _1019 = (uint16_t)(_1018 ? _1016 : _1017);
  uint16_t _1020 = _1019;
  uint16_t _1021 = _1015 + _1020;
  uint16_t _1022 = _1010 + _1021;
  uint16_t _1023 = _1005 + _1022;
  uint16_t _1024 = _1000 + _1023;
  uint16_t _1025 = _995 + _1024;
  uint16_t _1026 = _990 + _1025;
  uint16_t _1027 = _985 + _1026;
  uint16_t _1028 = _980 + _1027;
  uint16_t _1029 = _975 + _1028;
  uint16_t _1030 = _970 + _1029;
  uint16_t _1031 = _965 + _1030;
  uint16_t _1032 = _960 + _1031;
  uint16_t _1033 = _955 + _1032;
  uint16_t _1034 = _950 + _1033;
  uint16_t _1035 = _945 + _1034;
  uint16_t _1036 = _940 + _1035;
  uint16_t _1037 = _935 + _1036;
  uint16_t _1038 = _930 + _1037;
  uint16_t _1039 = _925 + _1038;
  uint16_t _1040 = _920 + _1039;
  uint16_t _1041 = _915 + _1040;
  uint16_t _1042 = _910 + _1041;
  uint16_t _1043 = _905 + _1042;
  uint16_t _1044 = _900 + _1043;
  uint16_t _1045 = _895 + _1044;
  uint16_t _1046 = _890 + _1045;
  uint16_t _1047 = _885 + _1046;
  uint16_t _1048 = _880 + _1047;
  uint16_t _1049 = _875 + _1048;
  uint16_t _1050 = _870 + _1049;
  uint16_t _1051 = _865 + _1050;
  uint16_t _1052 = _860 + _1051;
  uint16_t _1053 = _855 + _1052;
  uint16_t _1054 = _850 + _1053;
  uint16_t _1055 = _845 + _1054;
  uint16_t _1056 = _840 + _1055;
  uint16_t _1057 = _835 + _1056;
  uint16_t _1058 = _830 + _1057;
  uint16_t _1059 = _825 + _1058;
  uint16_t _1060 = _820 + _1059;
  uint16_t _1061 = _815 + _1060;
  uint16_t _1062 = _810 + _1061;
  uint16_t _1063 = _805 + _1062;
  uint16_t _1064 = _800 + _1063;
  uint16_t _1065 = _795 + _1064;
  uint16_t _1066 = _790 + _1065;
  uint16_t _1067 = _785 + _1066;
  uint16_t _1068 = _780 + _1067;
  uint16_t _1069 = _775 + _1068;
  uint16_t _1070 = _770 + _1069;
  uint16_t _1071 = _765 + _1070;
  uint16_t _1072 = _760 + _1071;
  uint16_t _1073 = _755 + _1072;
  uint16_t _1074 = _750 + _1073;
  uint16_t _1075 = _745 + _1074;
  uint16_t _1076 = _740 + _1075;
  uint16_t _1077 = _735 + _1076;
  uint16_t _1078 = _730 + _1077;
  uint16_t _1079 = _725 + _1078;
  uint16_t _1080 = _720 + _1079;
  uint16_t _1081 = _715 + _1080;
  uint16_t _1082 = _710 + _1081;
  uint16_t _1083 = _SAD_stencil_1 + _1082;
  uint16_t _1084 = _705 + _1083;
  return _1084;
}

//store is: offset1.stencil(offset1_s0_x, offset1_s0_y) = (uint16)65535
hw_uint<16> hcompute_offset1_stencil() {
  uint16_t _1748 = (uint16_t)(65535);
  return _1748;
}

//store is: offset1.stencil(offset1_s1_x, offset1_s1_y) = min(SAD.stencil(offset1_s1_x, offset1_s1_y, offset1_s1_search_x), offset1.stencil(offset1_s1_x, offset1_s1_y))
hw_uint<16> hcompute_offset1_stencil_1(hw_uint<16>& SAD_stencil, hw_uint<16>& offset1_stencil) {
  uint16_t _SAD_stencil_2 = (uint16_t) (SAD_stencil.extract<0, 15>());

  uint16_t _offset1_stencil_1 = (uint16_t) (offset1_stencil.extract<0, 15>());

  uint16_t _1751 = min(_SAD_stencil_2, _offset1_stencil_1);
  return _1751;
}

//store is: offset0.stencil(offset0_s0_x, offset0_s0_y) = (int16)0
hw_uint<16> hcompute_offset0_stencil() {
  int16_t _1756 = (int16_t)(0);
  return _1756;
}

//store is: offset0.stencil(offset0_s1_x, offset0_s1_y) = select((SAD.stencil(offset0_s1_x, offset0_s1_y, offset0_s1_search_x) == offset1.stencil(offset0_s1_x, offset0_s1_y)), int16(offset0_s1_search_x), offset0.stencil(offset0_s1_x, offset0_s1_y))
hw_uint<16> hcompute_offset0_stencil_1(hw_uint<16>& SAD_stencil, hw_uint<16>& offset0_stencil, hw_uint<16>& offset1_stencil, const int _offset0_s1_search_x) {
  uint16_t _SAD_stencil_3 = (uint16_t) (SAD_stencil.extract<0, 15>());

  int16_t _offset0_stencil_1 = (int16_t) (offset0_stencil.extract<0, 15>());

  uint16_t _offset1_stencil_2 = (uint16_t) (offset1_stencil.extract<0, 15>());

  int16_t _1759 = (int16_t)(_offset0_s1_search_x);
  bool _1760 = _SAD_stencil_3 == _offset1_stencil_2;
  int16_t _1761 = (int16_t)(_1760 ? _1759 : _offset0_stencil_1);
  return _1761;
}

//store is: offset_out.stencil(offset_out_s0_x, offset_out_s0_y) = offset0.stencil(offset_out_s0_x, offset_out_s0_y)
hw_uint<16> hcompute_offset_out_stencil(hw_uint<16>& offset0_stencil) {
  int16_t _offset0_stencil_2 = (int16_t) (offset0_stencil.extract<0, 15>());

  return _offset0_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = ((uint16(offset_out.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))*(uint16)255)/(uint16)10)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& offset_out_stencil) {
  int16_t _offset_out_stencil_1 = (int16_t) (offset_out_stencil.extract<0, 15>());

  uint16_t _1772 = (uint16_t)(_offset_out_stencil_1);
  uint16_t _1773 = (uint16_t)(255);
  uint16_t _1774 = _1772 * _1773;
  uint16_t _1775 = (uint16_t)(10);
  uint16_t _1776 = _1774 / _1775;
  return _1776;
}


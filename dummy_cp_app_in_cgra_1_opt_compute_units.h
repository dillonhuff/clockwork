#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> raw_generated_compute(hw_uint<16*1> raw_oc) {
  return uint16_t(uint16_t(raw_oc.get<16, 0>()));
}

hw_uint<16> denoiseb_generated_compute(hw_uint<16*25> raw) {
  return uint16_t(((((uint16_t(raw.get<16, 0>()) + (uint16_t(raw.get<16, 1>()) + uint16_t(raw.get<16, 2>()))) + (uint16_t(raw.get<16, 3>()) + (uint16_t(raw.get<16, 4>()) + uint16_t(raw.get<16, 5>())))) + ((uint16_t(raw.get<16, 6>()) + (uint16_t(raw.get<16, 7>()) + uint16_t(raw.get<16, 8>()))) + (uint16_t(raw.get<16, 9>()) + (uint16_t(raw.get<16, 10>()) + uint16_t(raw.get<16, 11>()))))) + (((uint16_t(raw.get<16, 12>()) + (uint16_t(raw.get<16, 13>()) + uint16_t(raw.get<16, 14>()))) + (uint16_t(raw.get<16, 15>()) + (uint16_t(raw.get<16, 16>()) + uint16_t(raw.get<16, 17>())))) + ((uint16_t(raw.get<16, 18>()) + (uint16_t(raw.get<16, 19>()) + uint16_t(raw.get<16, 20>()))) + ((uint16_t(raw.get<16, 21>()) + uint16_t(raw.get<16, 22>())) + (uint16_t(raw.get<16, 23>()) + uint16_t(raw.get<16, 24>())))))));
}

hw_uint<16> denoise_generated_compute(hw_uint<16*1> denoiseb) {
  return uint16_t((uint16_t(denoiseb.get<16, 0>()) / 25));
}

hw_uint<16> demosaicb_generated_compute(hw_uint<16*9> denoise) {
  return uint16_t((((uint16_t(denoise.get<16, 0>()) + uint16_t(denoise.get<16, 1>())) + (uint16_t(denoise.get<16, 2>()) + uint16_t(denoise.get<16, 3>()))) + ((uint16_t(denoise.get<16, 4>()) + uint16_t(denoise.get<16, 5>())) + (uint16_t(denoise.get<16, 6>()) + (uint16_t(denoise.get<16, 7>()) + uint16_t(denoise.get<16, 8>()))))));
}

hw_uint<16> demosaic_generated_compute(hw_uint<16*1> demosaicb) {
  return uint16_t((uint16_t(demosaicb.get<16, 0>()) / 9));
}

hw_uint<16> demosaic_bxb_generated_compute(hw_uint<16*3> demosaic) {
  return uint16_t((uint16_t(demosaic.get<16, 0>()) + (uint16_t(demosaic.get<16, 1>()) + uint16_t(demosaic.get<16, 2>()))));
}

hw_uint<16> demosaic_bx_generated_compute(hw_uint<16*1> demosaic_bxb) {
  return uint16_t((uint16_t(demosaic_bxb.get<16, 0>()) / 3));
}

hw_uint<16> demosaic_byb_generated_compute(hw_uint<16*3> demosaic_bx) {
  return uint16_t((uint16_t(demosaic_bx.get<16, 0>()) + (uint16_t(demosaic_bx.get<16, 1>()) + uint16_t(demosaic_bx.get<16, 2>()))));
}

hw_uint<16> demosaic_by_generated_compute(hw_uint<16*1> demosaic_byb) {
  return uint16_t((uint16_t(demosaic_byb.get<16, 0>()) / 3));
}

hw_uint<16> demosaic_diff_generated_compute(hw_uint<16*1> demosaic, hw_uint<16*1> demosaic_by) {
  return uint16_t((uint16_t(demosaic_by.get<16, 0>()) - uint16_t(demosaic.get<16, 0>())));
}

hw_uint<16> dummy_cp_app_in_cgra_1_generated_compute(hw_uint<16*1> demosaic_diff) {
  return uint16_t((uint16_t(demosaic_diff.get<16, 0>()) + 20));
}



// Compute unit banks...

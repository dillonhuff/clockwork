#pragma once

#include "ap_int.h"

extern "C" {
void pointwise_kernel(
  ap_uint<16>* bank_1_pointwise,
  ap_uint<16>* bank_1_input,
  uint64_t coalesced_data_num);
}

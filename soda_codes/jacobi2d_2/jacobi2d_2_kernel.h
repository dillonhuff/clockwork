#pragma once

extern "C" {
  void jacobi2d_2_kernel(
      ap_uint<64>* bank_0_t0,
      ap_uint<64>* bank_0_in,
      uint64_t coalesced_data_num);

}



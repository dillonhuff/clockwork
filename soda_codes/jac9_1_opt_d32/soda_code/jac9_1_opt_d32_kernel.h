#include "ap_int.h"

extern "C" {

void jac9_1_opt_d32_kernel(ap_uint<16>* jac9_1, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}

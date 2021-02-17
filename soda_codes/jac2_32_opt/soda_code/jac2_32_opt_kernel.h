#include "ap_int.h"

extern "C" {

void jac2_32_opt_kernel(ap_uint<16>* jac2_32, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void jac2_32_opt_d_kernel(ap_uint<512>* jac2_32, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

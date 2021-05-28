#include "ap_int.h"

extern "C" {

void jac9_16_opt_d32_kernel(ap_uint<256>* jac9_16, ap_uint<256>* in_off_chip, uint64_t coalesced_data_num);
}

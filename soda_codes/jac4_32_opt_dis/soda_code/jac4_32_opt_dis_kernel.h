#include "ap_int.h"

extern "C" {

void jac4_32_opt_dis_kernel(ap_uint<512>* jac4_32, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void jac4_16_opt_dis_kernel(ap_uint<256>* jac4_16, ap_uint<256>* in_off_chip, uint64_t coalesced_data_num);
}

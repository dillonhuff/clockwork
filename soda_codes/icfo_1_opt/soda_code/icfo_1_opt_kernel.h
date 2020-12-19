#include "ap_int.h"

extern "C" {

void icfo_1_opt_kernel(ap_uint<16>* icfo_1, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}

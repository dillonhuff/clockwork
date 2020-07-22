#include "ap_int.h"

extern "C" {

void ef_tc_32_opt_kernel(ap_uint<512>* ef_tc_32, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

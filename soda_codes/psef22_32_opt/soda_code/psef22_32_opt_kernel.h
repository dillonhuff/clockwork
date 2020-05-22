#include "ap_int.h"

extern "C" {

void psef22_32_opt_kernel(ap_uint<512>* psef22_32, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

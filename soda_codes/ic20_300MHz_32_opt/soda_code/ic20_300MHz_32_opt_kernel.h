#include "ap_int.h"

extern "C" {

void ic20_300MHz_32_opt_kernel(ap_uint<512>* ic20_300MHz_32, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

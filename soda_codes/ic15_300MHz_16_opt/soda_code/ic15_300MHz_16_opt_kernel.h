#include "ap_int.h"

extern "C" {

void ic15_300MHz_16_opt_kernel(ap_uint<256>* ic15_300MHz_16, ap_uint<256>* in_off_chip, uint64_t coalesced_data_num);
}

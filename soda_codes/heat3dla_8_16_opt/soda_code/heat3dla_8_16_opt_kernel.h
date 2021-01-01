#include "ap_int.h"

extern "C" {

void heat3dla_8_16_opt_kernel(ap_uint<512>* heat3dla_8_16, ap_uint<512>* in, uint64_t coalesced_data_num);
}

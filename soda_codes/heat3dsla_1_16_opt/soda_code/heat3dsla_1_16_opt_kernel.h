#include "ap_int.h"

extern "C" {

void heat3dsla_1_16_opt_kernel(ap_uint<512>* heat3dsla_1_16, ap_uint<512>* in, uint64_t coalesced_data_num);
}

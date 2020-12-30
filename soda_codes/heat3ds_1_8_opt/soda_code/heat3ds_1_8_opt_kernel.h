#include "ap_int.h"

extern "C" {

void heat3ds_1_8_opt_kernel(ap_uint<256>* heat3ds_1_8, ap_uint<256>* in, uint64_t coalesced_data_num);
}

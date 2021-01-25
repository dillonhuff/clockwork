#include "ap_int.h"

extern "C" {

void art_dead_kernel(ap_uint<32>* out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

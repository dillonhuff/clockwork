#include "ap_int.h"

extern "C" {

void mp25_2_opt_kernel(ap_uint<32>* mp25_2, ap_uint<64>* in_oc, uint64_t coalesced_data_num);
}

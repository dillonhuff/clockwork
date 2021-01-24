#include "ap_int.h"

extern "C" {

void pyr_blndd1024_ii1_kernel(ap_uint<32>* out, ap_uint<32>* in, uint64_t coalesced_data_num);
}

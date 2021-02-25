#include "ap_int.h"

extern "C" {

void blur4_16_opt_kernel(ap_uint<256>* blur4_16, ap_uint<256>* input_arg, uint64_t coalesced_data_num);
}

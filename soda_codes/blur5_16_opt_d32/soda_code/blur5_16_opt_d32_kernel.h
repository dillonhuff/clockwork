#include "ap_int.h"

extern "C" {

void blur5_16_opt_d32_kernel(ap_uint<256>* blur5_16, ap_uint<256>* input_arg, uint64_t coalesced_data_num);
}

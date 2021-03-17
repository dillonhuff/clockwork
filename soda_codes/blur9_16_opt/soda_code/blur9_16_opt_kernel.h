#include "ap_int.h"

extern "C" {

void blur9_16_opt_kernel(ap_uint<256>* blur9_16, ap_uint<256>* input_arg, uint64_t coalesced_data_num);
}

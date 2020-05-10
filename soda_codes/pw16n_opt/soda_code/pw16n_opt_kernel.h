#include "ap_int.h"

extern "C" {

void pw16n_opt_kernel(ap_uint<16>* pw16n, ap_uint<16>* input_arg, uint64_t coalesced_data_num);
}

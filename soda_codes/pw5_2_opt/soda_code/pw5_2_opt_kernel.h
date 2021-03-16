#include "ap_int.h"

extern "C" {

void pw5_2_opt_kernel(ap_uint<64>* pw5_2, ap_uint<64>* t1_arg, uint64_t coalesced_data_num);
}

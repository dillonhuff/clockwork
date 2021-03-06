#include "ap_int.h"

extern "C" {

void blur_example_opt_kernel(ap_uint<32>* blur_example, ap_uint<32>* input_arg, uint64_t coalesced_data_num);
}

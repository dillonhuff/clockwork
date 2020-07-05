#include "ap_int.h"

extern "C" {

void blur_example_opt_kernel(ap_uint<2048>* blur_example, ap_uint<2048>* in0_oc, ap_uint<2048>* in1_oc, uint64_t coalesced_data_num);
}

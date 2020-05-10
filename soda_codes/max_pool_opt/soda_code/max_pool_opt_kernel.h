#include "ap_int.h"

extern "C" {

void max_pool_opt_kernel(ap_uint<512>* max_pool, ap_uint<1024>* in_oc, uint64_t coalesced_data_num);
}

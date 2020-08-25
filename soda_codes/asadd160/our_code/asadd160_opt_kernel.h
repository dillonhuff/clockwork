#include "ap_int.h"

extern "C" {

void asadd160_opt_kernel(ap_uint<256>* asadd160, ap_uint<256>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

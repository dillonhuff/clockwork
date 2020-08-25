#include "ap_int.h"

extern "C" {

void asadd_op320_opt_kernel(ap_uint<512>* asadd_op320, ap_uint<512>* in_off_chip0_oc, uint64_t coalesced_data_num);
}

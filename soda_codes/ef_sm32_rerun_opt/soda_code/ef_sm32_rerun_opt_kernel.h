#include "ap_int.h"

extern "C" {

void ef_sm32_rerun_opt_kernel(ap_uint<512>* ef_sm32_rerun, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

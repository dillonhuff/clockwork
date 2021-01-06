#include "ap_int.h"

extern "C" {

void ef_32_500_opt_kernel(ap_uint<512>* ef_32_500, ap_uint<512>* in_off_chip, uint64_t coalesced_data_num);
}

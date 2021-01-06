#include "ap_int.h"

extern "C" {

void ef_sm1_opt_kernel(ap_uint<16>* ef_sm1, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}

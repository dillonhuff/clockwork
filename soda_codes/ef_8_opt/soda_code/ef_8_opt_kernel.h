#include "ap_int.h"

extern "C" {

void ef_8_opt_kernel(ap_uint<128>* ef_8, ap_uint<128>* in_off_chip, uint64_t coalesced_data_num);
}

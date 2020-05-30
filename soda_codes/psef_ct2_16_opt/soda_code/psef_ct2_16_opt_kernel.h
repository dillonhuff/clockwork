#include "ap_int.h"

extern "C" {

void psef_ct2_16_opt_kernel(ap_uint<256>* psef_ct2_16, ap_uint<256>* in_off_chip, uint64_t coalesced_data_num);
}

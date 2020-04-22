#include "ap_int.h"

extern "C" {

void dummy_app_opt_kernel(ap_uint<32>* dummy_app, ap_uint<32>* u_off_chip, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void two_input_mag_opt_kernel(ap_uint<32>* two_input_mag, ap_uint<32>* f_off_chip, ap_uint<32>* u_off_chip, uint64_t coalesced_data_num);
}

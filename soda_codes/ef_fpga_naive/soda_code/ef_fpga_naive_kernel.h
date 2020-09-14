#include "ap_int.h"

extern "C" {

void ef_fpga_naive_kernel(ap_uint<16>* ef_fpga, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}

#include "ap_int.h"

extern "C" {

void pyramid_synthetic_exposure_fusion_opt_kernel(ap_uint<32>* pyramid_synthetic_exposure_fusion, ap_uint<32>* in_off_chip, uint64_t coalesced_data_num);
}

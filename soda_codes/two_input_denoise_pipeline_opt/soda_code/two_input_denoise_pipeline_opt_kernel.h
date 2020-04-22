#include "ap_int.h"

extern "C" {

void two_input_denoise_pipeline_opt_kernel(ap_uint<32>* two_input_denoise_pipeline, ap_uint<32>* f_off_chip, ap_uint<32>* u_off_chip);
}

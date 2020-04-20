
extern "C"
{

void denoise2d_kernel(
  ap_uint<32>* bank_0_output,
  ap_uint<32>* bank_0_f,
  ap_uint<32>* bank_0_u,
  uint64_t coalesced_data_num);

}

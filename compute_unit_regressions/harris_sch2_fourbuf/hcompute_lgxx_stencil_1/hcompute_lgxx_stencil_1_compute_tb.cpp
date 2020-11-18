#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vhcompute_lgxx_stencil_1.h"

#include "harris_sch2_fourbuf_compute.h"

int main() {
  cout << "\tStarting compute unit test" << endl;
  Vhcompute_lgxx_stencil_1 dut;
  srand(1);
  for (int i = 0; i < 1000; i++) {
    int in0_lgxx_stencil_0 = rand() % 256;
    hw_uint<16> in0_lgxx_stencil_0_hwint = hw_uint<16>(in0_lgxx_stencil_0);
    (dut.in0_lgxx_stencil)[0] = in0_lgxx_stencil_0;
    hw_uint<16 > in0_lgxx_stencil_packed;
    set_at<0, 16, 16>(in0_lgxx_stencil_packed, in0_lgxx_stencil_0_hwint);
    dut.eval();
    int in1_padded16_global_wrapper_stencil_0 = rand() % 256;
    hw_uint<16> in1_padded16_global_wrapper_stencil_0_hwint = hw_uint<16>(in1_padded16_global_wrapper_stencil_0);
    (dut.in1_padded16_global_wrapper_stencil)[0] = in1_padded16_global_wrapper_stencil_0;
    int in1_padded16_global_wrapper_stencil_1 = rand() % 256;
    hw_uint<16> in1_padded16_global_wrapper_stencil_1_hwint = hw_uint<16>(in1_padded16_global_wrapper_stencil_1);
    (dut.in1_padded16_global_wrapper_stencil)[1] = in1_padded16_global_wrapper_stencil_1;
    int in1_padded16_global_wrapper_stencil_2 = rand() % 256;
    hw_uint<16> in1_padded16_global_wrapper_stencil_2_hwint = hw_uint<16>(in1_padded16_global_wrapper_stencil_2);
    (dut.in1_padded16_global_wrapper_stencil)[2] = in1_padded16_global_wrapper_stencil_2;
    int in1_padded16_global_wrapper_stencil_3 = rand() % 256;
    hw_uint<16> in1_padded16_global_wrapper_stencil_3_hwint = hw_uint<16>(in1_padded16_global_wrapper_stencil_3);
    (dut.in1_padded16_global_wrapper_stencil)[3] = in1_padded16_global_wrapper_stencil_3;
    int in1_padded16_global_wrapper_stencil_4 = rand() % 256;
    hw_uint<16> in1_padded16_global_wrapper_stencil_4_hwint = hw_uint<16>(in1_padded16_global_wrapper_stencil_4);
    (dut.in1_padded16_global_wrapper_stencil)[4] = in1_padded16_global_wrapper_stencil_4;
    int in1_padded16_global_wrapper_stencil_5 = rand() % 256;
    hw_uint<16> in1_padded16_global_wrapper_stencil_5_hwint = hw_uint<16>(in1_padded16_global_wrapper_stencil_5);
    (dut.in1_padded16_global_wrapper_stencil)[5] = in1_padded16_global_wrapper_stencil_5;
    hw_uint<96 > in1_padded16_global_wrapper_stencil_packed;
    set_at<0, 96, 16>(in1_padded16_global_wrapper_stencil_packed, in1_padded16_global_wrapper_stencil_0_hwint);
    set_at<16, 96, 16>(in1_padded16_global_wrapper_stencil_packed, in1_padded16_global_wrapper_stencil_1_hwint);
    set_at<32, 96, 16>(in1_padded16_global_wrapper_stencil_packed, in1_padded16_global_wrapper_stencil_2_hwint);
    set_at<48, 96, 16>(in1_padded16_global_wrapper_stencil_packed, in1_padded16_global_wrapper_stencil_3_hwint);
    set_at<64, 96, 16>(in1_padded16_global_wrapper_stencil_packed, in1_padded16_global_wrapper_stencil_4_hwint);
    set_at<80, 96, 16>(in1_padded16_global_wrapper_stencil_packed, in1_padded16_global_wrapper_stencil_5_hwint);
    dut.eval();
    dut.eval();
    int coreir_result = dut.out_lgxx_stencil;
    int cpp_result = hcompute_lgxx_stencil_1(in0_lgxx_stencil_packed, in1_padded16_global_wrapper_stencil_packed).to_int();
    if (coreir_result != cpp_result) {
      cout << "ERROR in compute unit: hcompute_lgxx_stencil_1" << endl;
    cout << "in0_lgxx_stencil[0] -> " << in0_lgxx_stencil_0 << endl;
    cout << "in0_lgxx_stencil[0] -> " << in0_lgxx_stencil_0_hwint << endl;
    cout << "in1_padded16_global_wrapper_stencil[0] -> " << in1_padded16_global_wrapper_stencil_0 << endl;
    cout << "in1_padded16_global_wrapper_stencil[0] -> " << in1_padded16_global_wrapper_stencil_0_hwint << endl;
    cout << "in1_padded16_global_wrapper_stencil[1] -> " << in1_padded16_global_wrapper_stencil_1 << endl;
    cout << "in1_padded16_global_wrapper_stencil[1] -> " << in1_padded16_global_wrapper_stencil_1_hwint << endl;
    cout << "in1_padded16_global_wrapper_stencil[2] -> " << in1_padded16_global_wrapper_stencil_2 << endl;
    cout << "in1_padded16_global_wrapper_stencil[2] -> " << in1_padded16_global_wrapper_stencil_2_hwint << endl;
    cout << "in1_padded16_global_wrapper_stencil[3] -> " << in1_padded16_global_wrapper_stencil_3 << endl;
    cout << "in1_padded16_global_wrapper_stencil[3] -> " << in1_padded16_global_wrapper_stencil_3_hwint << endl;
    cout << "in1_padded16_global_wrapper_stencil[4] -> " << in1_padded16_global_wrapper_stencil_4 << endl;
    cout << "in1_padded16_global_wrapper_stencil[4] -> " << in1_padded16_global_wrapper_stencil_4_hwint << endl;
    cout << "in1_padded16_global_wrapper_stencil[5] -> " << in1_padded16_global_wrapper_stencil_5 << endl;
    cout << "in1_padded16_global_wrapper_stencil[5] -> " << in1_padded16_global_wrapper_stencil_5_hwint << endl;
      cout << "\tcoreir_result: " << coreir_result << endl;
      cout << "\tcpp_result   : " << cpp_result << endl;
      return -1;
    }
    assert(coreir_result == cpp_result);
  }

  return 0;
}

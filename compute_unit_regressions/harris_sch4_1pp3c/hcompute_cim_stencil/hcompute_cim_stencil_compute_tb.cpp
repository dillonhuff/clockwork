#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vhcompute_cim_stencil.h"

#include "harris_sch4_1pp3c_compute.h"

int main() {
  cout << "\tStarting compute unit test" << endl;
  Vhcompute_cim_stencil dut;
  srand(1);
  for (int i = 0; i < 10000; i++) {
    int in0_lgxx_stencil_0 = rand() % 65536;
    hw_uint<16> in0_lgxx_stencil_0_hwint = hw_uint<16>(in0_lgxx_stencil_0);
    (dut.in0_lgxx_stencil)[0] = in0_lgxx_stencil_0;
    hw_uint<16 > in0_lgxx_stencil_packed;
    set_at<0, 16, 16>(in0_lgxx_stencil_packed, in0_lgxx_stencil_0_hwint);
    dut.eval();
    int in1_lgxy_stencil_0 = rand() % 65536;
    hw_uint<16> in1_lgxy_stencil_0_hwint = hw_uint<16>(in1_lgxy_stencil_0);
    (dut.in1_lgxy_stencil)[0] = in1_lgxy_stencil_0;
    hw_uint<16 > in1_lgxy_stencil_packed;
    set_at<0, 16, 16>(in1_lgxy_stencil_packed, in1_lgxy_stencil_0_hwint);
    dut.eval();
    int in2_lgyy_stencil_0 = rand() % 65536;
    hw_uint<16> in2_lgyy_stencil_0_hwint = hw_uint<16>(in2_lgyy_stencil_0);
    (dut.in2_lgyy_stencil)[0] = in2_lgyy_stencil_0;
    hw_uint<16 > in2_lgyy_stencil_packed;
    set_at<0, 16, 16>(in2_lgyy_stencil_packed, in2_lgyy_stencil_0_hwint);
    dut.eval();
    dut.eval();
    int coreir_result = dut.out_cim_stencil;
    int cpp_result = hcompute_cim_stencil(in0_lgxx_stencil_packed, in1_lgxy_stencil_packed, in2_lgyy_stencil_packed).to_int();
    if (coreir_result != cpp_result) {
      cout << "ERROR in compute unit: hcompute_cim_stencil" << endl;
    cout << "in0_lgxx_stencil[0] -> " << in0_lgxx_stencil_0 << endl;
    cout << "in0_lgxx_stencil[0] -> " << in0_lgxx_stencil_0_hwint << endl;
    cout << "in1_lgxy_stencil[0] -> " << in1_lgxy_stencil_0 << endl;
    cout << "in1_lgxy_stencil[0] -> " << in1_lgxy_stencil_0_hwint << endl;
    cout << "in2_lgyy_stencil[0] -> " << in2_lgyy_stencil_0 << endl;
    cout << "in2_lgyy_stencil[0] -> " << in2_lgyy_stencil_0_hwint << endl;
      cout << "\tcoreir_result: " << coreir_result << endl;
      cout << "\tcpp_result   : " << cpp_result << endl;
      return -1;
    }
    assert(coreir_result == cpp_result);
  }

  return 0;
}

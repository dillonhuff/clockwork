//#include "codegen.h"

void generate_catapult_tcl(std::string& name) {
  ofstream of(name + "_hls.tcl");

  of << "open_project -reset " << name << "_proj" << endl;

  of << "set_top " << name << endl;
  of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  //of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  //of << "add_files -cflags \"-I ../.. -std=c++11 -D__VIVADO_SYNTH__\" -tb tb_soda_" + name + ".cpp" << endl;
  of << "open_solution -reset \"solution1\"" << endl;
  of << "set_part {xcvu9p-flgb2104-2-i}" << endl;
  //of << "set_part {xc7k160tfbg484-2}" << endl;
  of << "list_core" << endl;
  of << "create_clock -period 5" << endl;
  of << "csynth_design" << endl;
  //of << "export_design -rtl verilog" << endl;
  //of << "cosim_design -rtl verilog" << endl;
  of << "exit" << endl;
  of.close();i


olution file add ./our_code/regression_tb_resnet88.cpp -exclude true
solution file add ./our_code/resnet88.cpp -exclude true
solution file set /home/rsharma3/Desktop/resnet88_file_catapult/our_code/resnet88.cpp -exclude false
go analyze
options set Flows/NCSim/NC_ROOT /cad/cadence/XCELIUMMAIN_20.09.007_lnx86
options set Input/CppStandard c++14
options set Flows/SCVerify/USE_NCSIM true
go analyze
solution design set resnet88 -top
solution design set hcompute_conv_stencil_15 -block
solution design set hcompute_conv_stencil_15 -ccore
solution design set hcompute_conv_stencil_14 -block
solution design set hcompute_conv_stencil_14 -ccore
solution design set hcompute_conv_stencil_13 -block
solution design set hcompute_conv_stencil_13 -ccore
solution design set hcompute_conv_stencil_12 -block
solution design set hcompute_conv_stencil_12 -ccore
solution design set hcompute_conv_stencil_11 -block
solution design set hcompute_conv_stencil_11 -ccore
solution design set hcompute_conv_stencil_10 -block
solution design set hcompute_conv_stencil_10 -ccore
solution design set hcompute_conv_stencil_9 -block
solution design set hcompute_conv_stencil_9 -ccore
solution design set hcompute_conv_stencil_8 -block
solution design set hcompute_conv_stencil_8 -ccore
go compile
solution library add nangate-45nm_beh -- -rtlsyntool DesignCompiler -vendor Nangate -technology 045nm
solution library add ccs_sample_mem
solution library add amba
go libraries
directive set -CLOCKS {clk {-CLOCK_PERIOD 2 -CLOCK_EDGE rising -CLOCK_HIGH_TIME 1 -CLOCK_OFFSET 0.000000 -CLOCK_UNCERTAINTY 0.0 -RESET_KIND sync -RESET_SYNC_NAME rst -RESET_SYNC_ACTIVE high -RESET_ASYNC_NAME arst_n -RESET_ASYNC_ACTIVE low -ENABLE_NAME {} -ENABLE_ACTIVE high}}
go extract
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
go new
solution file set {$PROJECT_HOME/our_code/resnet88.cpp} -updated
go analyze
go libraries
go extract
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim clean
flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simguii

}


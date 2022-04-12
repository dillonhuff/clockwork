//#include "codegen.h"
#include "codegen_catapult.h"

void generate_catapult_tcl(std::string& name, bool is_halide_app, buffer_list& buffer_list) {
  ofstream of(name + "_catapult_hls.tcl");
//if(buff_list != nullptr)
  //{
	  //of << "Dummy " << endl;
	 //map<string, int> list = buffer_list;//->return_all_buffers();
	 map<string, int> list = buffer_list.return_all_buffers();
	// for(auto i : list)
	 //{
	//	 of << i.first << " " << i.second << endl;
	// }
	// of << "End dummy " << endl << endl;

 // }
  of << "project new"<< endl;
  of << "solution file add ./regression_tb_"<< name << ".cpp -exclude true" << endl;
  of << "solution file add ./"<< name <<".cpp -exclude false" << endl;
  of << "options set Flows/NCSim/NC_ROOT /cad/cadence/XCELIUMMAIN_20.09.007_lnx86" << endl;
  of << "options set Input/CppStandard c++14" << endl;
  of << "options set Flows/SCVerify/USE_NCSIM true" << endl;
  of << "go analyze" << endl;
  of << "solution design set "<< name << " -top" << endl;
  of << "go compile" << endl;
  of << "solution library add nangate-45nm_beh -- -rtlsyntool DesignCompiler -vendor Nangate -technology 045nm" << endl;
  of << "solution library add ccs_sample_mem"<< endl;
  of << "solution library add amba" << endl;
  of << "go libraries" << endl;
  of << "directive set -CLOCKS {clk {-CLOCK_PERIOD 2 -CLOCK_EDGE rising -CLOCK_HIGH_TIME 1 -CLOCK_OFFSET 0.000000 -CLOCK_UNCERTAINTY 0.0 -RESET_KIND sync -RESET_SYNC_NAME rst -RESET_SYNC_ACTIVE high -RESET_ASYNC_NAME arst_n -RESET_ASYNC_ACTIVE low -ENABLE_NAME {} -ENABLE_ACTIVE high}}" << endl;
  of << "go assembly"<< endl;
  //of << "directive set /" << name << "for:for -PIPELINE_INIT_INTERVAL 1" << endl;
  of << "go architect" << endl;
//  if(is_halide_app ==true)
//	of << "ignore_memory_precedences -from *return.hw_uint*read_mem(hw_input_global_wrapper_global_wrapper_stencil.merged_banks_9.f*.vals.val:rsc.@) -to *push:write_mem(hw_input_global_wrapper_global_wrapper_stencil.*merged_banks_9.f*.vals.val:rsc.@)" << endl;

//  if(is_halide_app ==false)
//	of << "ignore_memory_precedences -from *read_mem(input.input*.vals.val:rsc.@) -to *write_mem(input.input*.vals.val:rsc.@)" << endl;
  if(name.find("resnet___") == std::string::npos && name.find("mobilenet") == std::string::npos && name.find("Resnet___") == std::string::npos && name.find("Mobilenet") == std::string::npos )
  	for(auto i: list)
		if(i.second > 4)
	  		of << "ignore_memory_precedences -from *read_mem(*" << i.first << ".vals.val:rsc.@) -to "<< "*write_mem(*" << i.first << ".vals.val:rsc.@)" << endl;
 
  of << "go allocate" << endl;

  of << "go extract" << endl;
  of << "flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim" << endl;
  of << "flow run /SCVerify/launch_make ./scverify/Verify_concat_sim_rtl_v_ncsim.mk {} SIMTOOL=ncsim simgui" << endl;
  of << "project save" << endl;
  of.close();
}


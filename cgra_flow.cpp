#include "cgra_flow.h"
#include "coreir_backend.h"

#ifdef CGRAFLOW
vector<string> cgra_flow_result(prog& prg, string dir) {

    string name = prg.name;
    //auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
    //verilog_files.push_back(name + ".v");
    //verilog_files.push_back("LakeWrapper.v");
    vector<string> verilog_files;
    verilog_files.push_back(name + ".v");
    verilog_files.push_back("laketop_new.sv");
    //verilog_files.push_back("laketop.sv");
    verilog_files.push_back("LakeTop_flat.v");
    verilog_files.push_back("lake_module_wrappers.v");
    add_default_initial_block("laketop", "endmodule   // sram_sp__0");
    bool extra_flag_for_lake = true;
    int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
    assert(res == 0);
    cmd("rm lake_module_wrappers.v");
    cmd("rm laketop_new.sv");
    cmd("rm LakeTop_flat.v");

    auto verilator_res = verilator_results(prg.name);
    return verilator_res;

}

vector<string> aha_flow_result(prog& prg, string dir) {

    string name = prg.name;
    //auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
    //verilog_files.push_back(name + ".v");
    //verilog_files.push_back("LakeWrapper.v");
    vector<string> verilog_files;
    verilog_files.push_back(name + ".v");
    verilog_files.push_back("PE.v");
    verilog_files.push_back("laketop_new.sv");
    //verilog_files.push_back("laketop.sv");
    verilog_files.push_back("LakeTop_flat.v");
    verilog_files.push_back("lake_module_wrappers.v");
    add_default_initial_block("laketop", "endmodule   // sram_sp__0");
    bool extra_flag_for_lake = true;
    int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
    assert(res == 0);
    cmd("rm lake_module_wrappers.v");
    cmd("rm laketop_new.sv");
    cmd("rm LakeTop_flat.v");

    auto verilator_res = verilator_results(prg.name);
    return verilator_res;

}

#endif

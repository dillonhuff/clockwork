#include "build_set_test.h"
#include "coreir_backend.h"
#ifdef COREIR
#include "cwlib.h"
#include "cgralib.h"
#endif
#include "app.h"
#include "prog_splitting_test.h"
#include "codegen.h"
#include "lake_target.h"
#include "simple_example_progs.h"
// #include "../prog.h"
#include "ubuffer.h"
#include <chrono>
#include <iostream>
using std::cout;
using std::endl;


void preprocess_prog(prog& prg) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);
}

vector<string> cgra_flow_result(prog& prg, string dir) {

    string name = prg.name;
    auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
    verilog_files.push_back(name + ".v");
    verilog_files.push_back("LakeWrapper.v");
    bool extra_flag_for_lake = true;
    int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
    assert(res == 0);
    cmd("rm LakeWrapper.v");

    auto verilator_res = verilator_results(prg.name);
    return verilator_res;
}

void sanity_check(prog& prg, vector<string>& cpu, vector<string> & verilator_res) {
    compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
    string app_type = "single_port_buffer";
    cout << "*********************************************************" << endl;
    cout << "*** Interconnect Agnostic Test on < " << prg.name << " > PASS ***"<< endl;
    cout << "*********************************************************" << endl;
    //cpy_app_to_folder(app_type, prg.name);
    cmd("mkdir -p ./coreir_apps/" + app_type + "/" + prg.name);
    cmd("mv " + prg.name + ".v ./coreir_apps/" + app_type + "/" + prg.name + "/");
    cmd("mv " + prg.name + "_verilog_tb.cpp ./coreir_apps/" + app_type + "/" + prg.name + "/");
}

void compile_app_for_garnet_single_port_mem(prog& prg, string dir, bool gen_config_only=true) {
    cout << "Running CGRA flow on " << prg.name << endl;

    //TODO: make this argument explicit to user
    bool multi_level_memory = false;
    bool gen_smt = false;
    bool use_dse_compute = false;



    compile_for_garnet_single_port_mem(prg, dir,
            gen_smt, gen_config_only, multi_level_memory, use_dse_compute);

}

#include "../build_set_test.h"
#include "../coreir_backend.h"
#ifdef COREIR
#include "../cwlib.h"
#include "../cgralib.h"
#endif
#include "../app.h"
#include "../prog_splitting_test.h"
#include "../codegen.h"
#include "../example_progs.h"
#include "../lake_target.h"
#include "../simple_example_progs.h"
// #include "../prog.h"
#include "../ubuffer.h"
#include <chrono>
#include<iostream>
using namespace std;


int main(int argc, char** argv) {
    cout << "Running DSE flow" << endl;

    if (argc != 3) {
        cout << "Usage: ./dse_flow app_name mapped_compute.json" << endl;
        return 1;
    }

    string app_name = argv[1];
    string dse_compute_filename = argv[2];
    bool use_dse_compute = true;
    string dir = "dse_flow/output";


    std::map<string,prog (*)()> func_map;

    func_map["camera_pipeline"] = camera_pipeline;
    func_map["unsharp"] = unsharp;
    func_map["gaussian"] = gaussian;
    func_map["pointwise"] = pointwise;
    func_map["harris"] = harris;
    func_map["down_sample"] = down_sample;
    func_map["cascade"] = cascade;
    func_map["stereo"] = stereo;
    func_map["resnet"] = resnet;
    func_map["conv_3_3"] = conv_3_3;
    func_map["conv_1_2"] = conv_1_2;

    auto prg_ptr = func_map[app_name];
    auto prg = prg_ptr();

    bool gen_config_only = false; 
    bool multi_accessor = false;
    

    cout << "====== Running CGRA Single Port test for " << prg.name << endl;

    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);

    auto cpu = unoptimized_result(prg);

    compile_for_garnet_single_port_mem(prg, dir, false, gen_config_only, multi_accessor, use_dse_compute, true, dse_compute_filename);
    generate_regression_testbench(prg);

    //run verilator on all the generated verilog
    if (!gen_config_only) {
        string name = prg.name;
        auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
        verilog_files.push_back(name + ".v");
        verilog_files.push_back("LakeWrapper.v");
        bool extra_flag_for_lake = true;
        int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
        assert(res == 0);
        // cmd("rm LakeWrapper.v");

        auto verilator_res = verilator_results(prg.name);
        compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
        // //string app_type = "dualwithaddr";
        // string app_type = "single_port_buffer";
        // cpy_app_to_folder(app_type, prg.name);
    }
    
    cout << "Passed!" << endl;
    cout << "Output name: " << dir << "/" << prg.name << endl;
    return 0;
}

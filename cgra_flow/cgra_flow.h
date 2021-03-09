#include "../build_set_test.h"
#include "../coreir_backend.h"
#ifdef COREIR
#include "../cwlib.h"
#include "../cgralib.h"
#endif
#include "../app.h"
#include "../prog_splitting_test.h"
#include "../codegen.h"
#include "../lake_target.h"
#include "../simple_example_progs.h"
// #include "../prog.h"
#include "../ubuffer.h"
#include <chrono>
#include<iostream>
using std::cout;
using std::endl;


void compile_app_for_garnet_single_port_mem(prog& prg, string dir) {
    cout << "Running CGRA flow on " << prg.name << endl;

    bool multi_level_memory = false;
    bool gen_config_only = false;
    bool gen_smt = false;
    bool use_dse_compute = false;

    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers(prg);

    auto cpu = unoptimized_result(prg);

    compile_for_garnet_single_port_mem(prg, dir,
            gen_smt, gen_config_only, multi_level_memory, use_dse_compute);

    generate_regression_testbench(prg);

    cout << "Output name: " << dir << "/" << prg.name << endl;

    //run verilator on all the generated verilog
    if (!gen_config_only) {
        string name = prg.name;
        auto verilog_files = get_files("./" + dir + "/"+name+"/verilog/");
        verilog_files.push_back(name + ".v");
        verilog_files.push_back("LakeWrapper.v");
        bool extra_flag_for_lake = true;
        int res = run_verilator_on(name, name + "_verilog_tb.cpp", verilog_files, extra_flag_for_lake);
        assert(res == 0);
        cmd("rm LakeWrapper.v");

        auto verilator_res = verilator_results(prg.name);
        compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
        //string app_type = "dualwithaddr";
        string app_type = "single_port_buffer";
        cpy_app_to_folder(app_type, prg.name);
    }

}

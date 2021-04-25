#include "prog.h"

void break_up_multi_channel_outputs(prog& prg);
void break_up_multi_channel_inputs(prog& prg);
void asap_inner_loops_schedule(schedule_info& hwinfo, op* op, prog& prg);
void garnet_single_port_ram_schedule(schedule_info& sched, op* root, prog& prg);
<<<<<<< HEAD
void compile_for_garnet_single_port_mem(prog& prg, string dir, bool gen_smt_stream, bool config_gen_only, bool multi_sram, bool use_dse_compute, bool for_metamapper, string dse_compute_filename);
=======
void compile_for_garnet_single_port_mem(prog& prg, string dir, bool gen_smt_stream, bool config_gen_only, bool multi_sram, bool use_dse_compute, bool energy_model=false);
>>>>>>> origin/aha
int run_verilator_on(const std::string& top_module,
    const std::string& tb_file,
    const std::vector<string>& verilog_files,
    bool extra_flag = false);
void cpy_app_to_folder(const std::string& app_type, const std::string& prg_name);
std::vector<string> verilator_results(const std::string& name);
<<<<<<< HEAD
void generate_fpga_clockwork_code(prog& prg);
void pad_to_single_depth(prog& prg);
void test_platonic_codegen(vector<prog>& test_programs);
template<typename CodegenFunction>
void test_codegen(vector<prog>& test_programs, CodegenFunction& codegen);
void compile_for_FPGA_BRAM_mem(prog& prg);
void compile_for_CGRA_M3_mem(prog& prg);
void compile_for_CGRA_M1_mem(prog& prg);
=======
>>>>>>> origin/aha

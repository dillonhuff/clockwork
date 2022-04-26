#pragma once

#ifdef COREIR

#include "verilog_backend.h"

#define COREMK(ctx, v) CoreIR::Const::make((ctx), (v))

static inline
std::string controller_name(const std::string& n) {
  return n + "_port_controller";
}

vector<CoreIR::Wireable*> getConnectWires(CoreIR::Wireable* wire);

struct affine_controller_ctrl {
  isl_aff* access_function;
  isl_aff* sched;
  isl_set* dom;
};

CoreIR::Wireable* op_control_wires(CoreIR::Instance* ctrl);

CoreIR::Wireable* mkConst(CoreIR::ModuleDef* def, const int width, const int val);
CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals, int width);
CoreIR::Wireable* orList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* andList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);

CoreIR::Module* coreir_for_aff(CoreIR::Context* context, isl_aff* aff);

CoreIR::Module* coreir_for_multi_aff(CoreIR::Context* context, isl_multi_aff* aff);

CoreIR::Module* coreir_for_basic_set(CoreIR::Context* context, isl_basic_set* dom);

CoreIR::Module* coreir_for_set(CoreIR::Context* context, isl_set* dom);

CoreIR::Module* affine_controller(CodegenOptions& options, CoreIR::Context* context, isl_set* dom, isl_aff* aff);
CoreIR::Module* affine_controller(CodegenOptions& options, CoreIR::Context* context, isl_set* dom, isl_aff* aff, int width);
CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff);
CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff, int width);

CoreIR::Instance* affine_controller(CoreIR::ModuleDef* def, isl_set* dom, isl_aff* aff, int width);

affine_controller_ctrl pack_controller(affine_controller_ctrl& unpacked);

void generate_banks_garnet(CodegenOptions& options, prog& prg, UBuffer& buf, UBufferImpl& impl, schedule_info& hw_info);

void generate_coreir_addrgen_in_tile(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

CoreIR::Module* generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context);

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    schedule_info& hwinfo);

void generate_coreir_without_ctrl(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    schedule_info& hwinfo,
    string dse_compute_filename);

  CoreIR::Wireable* delaybit(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w);

  CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w,
      const int width);
  CoreIR::Wireable* delaybit(CoreIR::ModuleDef* bdef,
      const std::string& name,
      CoreIR::Wireable* w);
  CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
      const std::string name,
      CoreIR::Wireable* w,
      const int width);
CoreIR::Wireable* delay_array(CoreIR::ModuleDef* def,
    const std::string& name,
    CoreIR::Wireable* input,
    int elem_width,
    int num_elems);


dgraph build_shift_register_graph(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);

//CoreIR::Namespace* CoreIRLoadLibrary_cgralib(CoreIR::Context* c);

void add_raw_dual_port_sram_generator(CoreIR::Context* c);

CoreIR::Module* lake_rf(CoreIR::Context* c, const int width, const int depth);

void ram_module(CoreIR::Context* c, const int width, const int depth);

void emit_lake_config_collateral(CodegenOptions options, string tile_name, json config_file);

void mini_sram_garnet_test();

CoreIR::Module* delay_module(CodegenOptions& options, CoreIR::Context* c, const int width, const vector<int>& read_delays);

void add_delay_tile_generator(CoreIR::Context* c);

CoreIR::Module* reg_delay_module(CoreIR::Context* c, const int width, const vector<int>& read_delays);

void add_raw_quad_port_memtile_generator(CoreIR::Context* c);
CoreIR::Instance* cmux(CoreIR::ModuleDef* def,
    const int width,
    CoreIR::Wireable* out,
    CoreIR::Wireable* sel,
    CoreIR::Wireable* in0,
    CoreIR::Wireable* in1);

CoreIR::Instance* cmux(CoreIR::ModuleDef* def,
    CoreIR::Wireable* out,
    CoreIR::Wireable* sel,
    CoreIR::Wireable* in0,
    CoreIR::Wireable* in1);

void add_tahoe_memory_generator(CoreIR::Context* c);

void generate_platonic_ubuffer(CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

void generate_lake_tile_verilog(CodegenOptions& options, CoreIR::Instance* buf);

void add_default_initial_block(string, string);

CoreIR::Wireable* delay_by(CoreIR::ModuleDef* bdef,
    CoreIR::Wireable* w,
    const int cycles);

CoreIR::Wireable* delay_array(CoreIR::ModuleDef* def,
    CoreIR::Wireable* input,
    int elem_width,
    int num_elems);

CoreIR::Wireable* delay_by(CoreIR::ModuleDef* bdef,
    const std::string& out_name,
    CoreIR::Wireable* w,
    const int cycles);

void generate_platonic_ubuffer(
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

void pipeline_compute_units(prog& prg, schedule_info& hwinfo);

int generate_compute_unit_regression_tb(op* op, prog& prg);

CoreIR::Instance* build_addrgen(const std::string& reader, UBuffer& buf, CoreIR::ModuleDef* def);
CoreIR::Instance* build_addrgen(const std::string& reader, UBuffer& buf, CoreIR::ModuleDef* def, int width);

CoreIR::Wireable* control_vars(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf);

CoreIR::Wireable* control_en(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf);

CoreIR::Instance* build_bank_selector(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl, CoreIR::ModuleDef* def);

CoreIR::Instance* build_inner_bank_offset(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl, CoreIR::ModuleDef* def);

std::set<string> generate_M1_shift_registers(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& buf, schedule_info& hwinfo);

void instantiate_M1_verilog(const std::string& long_name, const int b, const UBufferImpl& impl, UBuffer& buf);

void M1_sanity_check_port_counts(const UBufferImpl& impl);

CoreIR::Module* affine_controller_def(CoreIR::Context* context, isl_set* dom, isl_aff* aff);

isl_aff* inner_bank_offset_aff(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl);

isl_aff* bank_offset_aff(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl);

void garnet_map_module(CoreIR::Module* top, bool garnet_syntax_trans);
void garnet_map_module(CoreIR::Module* top, map<string, UBuffer> & buffers, bool garnet_syntax_trans);

double PE_energy_cost(power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg);

map<string, int> get_PE_optype_count(prog& prg);
map<string, int> get_PE_optype_count_garnet(prog& prg);

double PE_energy_cost_instance_model(power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg);

double MEM_energy_cost(CodegenOptions& options, power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg);

#endif


#pragma once

#ifdef COREIR

#include "verilog_backend.h"

#define COREMK(ctx, v) CoreIR::Const::make((ctx), (v))

static inline
std::string controller_name(const std::string& n) {
  return n + "_port_controller";
}

struct ubuffer_impl {
  map<int, int> partitioned_dimension_extents;
  std::set<int> partition_dims;

  map<int, std::set<string> > bank_readers;
  map<int, std::set<string> > bank_writers;
  map<string, std::set<int>> outpt_to_bank;
  map<string, std::set<int>> inpt_to_bank;

  map<string,pair<string,int>> shift_registered_outputs;
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs;
};

CoreIR::Wireable* mkConst(CoreIR::ModuleDef* def, const int width, const int val);
CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* orList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* andList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);

CoreIR::Module* coreir_for_aff(CoreIR::Context* context, isl_aff* aff);

CoreIR::Module* coreir_for_multi_aff(CoreIR::Context* context, isl_multi_aff* aff);

CoreIR::Module* coreir_for_basic_set(CoreIR::Context* context, isl_basic_set* dom);

CoreIR::Module* coreir_for_set(CoreIR::Context* context, isl_set* dom);

CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff);

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
    schedule_info& hwinfo);

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

map<string, pair<string, int> > determine_shift_reg_map(
        prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

vector<pair<string, pair<string, int> >> determine_output_shift_reg_map(
        prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

//CoreIR::Namespace* CoreIRLoadLibrary_cgralib(CoreIR::Context* c);

void add_raw_dual_port_sram_generator(CoreIR::Context* c);

CoreIR::Module* lake_rf(CoreIR::Context* c, const int width, const int depth);

void ram_module(CoreIR::Context* c, const int width, const int depth);


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

CoreIR::Wireable* control_vars(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf);

CoreIR::Wireable* control_en(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf);

CoreIR::Instance* build_bank_selector(const std::string& reader, UBuffer& buf, ubuffer_impl& impl, CoreIR::ModuleDef* def);

#endif


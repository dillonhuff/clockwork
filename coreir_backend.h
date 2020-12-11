#pragma once

#ifdef COREIR

#include "verilog_backend.h"

#define COREMK(ctx, v) CoreIR::Const::make((ctx), (v))

static inline
std::string controller_name(const std::string& n) {
  return n + "_port_controller";
}

struct affine_controller_ctrl {
  isl_aff* access_function;
  isl_aff* sched;
  isl_set* dom;
};

struct ubuffer_impl {
  map<int, int> partitioned_dimension_extents;
  std::set<int> partition_dims;

  map<int, std::set<string> > bank_readers;
  map<int, std::set<string> > bank_writers;
  map<string, std::set<int>> outpt_to_bank;
  map<string, std::set<int>> inpt_to_bank;

  map<string,pair<string,int>> shift_registered_outputs;
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs;

  void add_o2o_info(const string& inpt, const string& outpt, const int& delay) {
      shift_registered_outputs_to_outputs.push_back(
              {outpt, {inpt, delay}}
              );
  }

  void add_i2o_info(const string& inpt, const string& outpt, const int& delay) {
      shift_registered_outputs[outpt] = make_pair(inpt, delay);
  }

  std::set<string> get_sr_outpts() const {
    std::set<string> outpts;
    for (auto it: shift_registered_outputs_to_outputs) {
      outpts.insert(it.first);
    }

    for (auto it: shift_registered_outputs) {
      outpts.insert(it.first);
    }

    return outpts;
  }

  bool is_pure_shift_register(vector<string> outpts) {
    auto sr_outpts = get_sr_outpts();
    cout <<"SR outputs: " << sr_outpts << endl;
    cout <<"BUF outputs: " << outpts << endl;
    for (string pt: outpts) {
        if (sr_outpts.find(pt) == sr_outpts.end()) {
            return false;
        }
    }
    return true;
  }

  int get_bank_num() const {
    int bank_num = 1;
    for (auto it: partitioned_dimension_extents) {
      bank_num *= it.second;
    }
    return bank_num;
  }
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

affine_controller_ctrl pack_controller(affine_controller_ctrl& unpacked);

void generate_banks_garnet(CodegenOptions& options, prog& prg, UBuffer& buf, ubuffer_impl& impl, schedule_info& hw_info);

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

struct dgraph {
  std::set<string> nodes;
  map<string, std::set<string> > out_edges;
  map<pair<string, string>, int> weights;

  void add_edge(const std::string& src, const std::string& dst, const int weight) {
    nodes.insert(dst);
    nodes.insert(src);
    out_edges[src].insert(dst);
    weights[{src, dst}] = weight;
  }

  int weight(const std::string& src, const std::string& dst) {
    if(weights.find({src,dst}) == weights.end()){
    	 return -1;
    } else{
	 return  weights[{src, dst}];
    }
  }

  vector<string> get_out_edges(const std::string& src) {
    vector<string> ret;
    if (out_edges.count(src)) {
        auto dsts = out_edges.at(src);
        return vector<string>(dsts.begin(), dsts.end());
    } else {
        return ret;
    }
  }

  vector<pair<string, int> > in_edges(const std::string& dst) {
    vector<pair<string, int> > ed;
    for (auto w : out_edges) {
      if (elem(dst, w.second)) {
        ed.push_back({w.first, weight(w.first, dst)});
      }
    }
    return ed;
  }

  //process the zero delay node, make sure they come out from the same port
  string find_origin(const std::string& dst) {
    auto in_eds = in_edges(dst);
    for (auto it: in_eds) {
      if (it.second == 0)
        return find_origin(it.first);
    }
    return dst;
  }

  vector<pair<string, string>> get_sub_branch(const std::string& out_pt) {
    vector<pair<string, string> > ret;
    for (auto dst: get_out_edges(out_pt)) {
      ret.push_back({out_pt, dst});
      concat(ret, get_sub_branch(dst));
    }
    return ret;
  }

  int max_delay_to_leaf(string outpt) {
    //this is leaf
    if (out_edges.count(outpt) == 0) {
      return 0;
    }

    int max_child_delay = -1;
    for (string dst: out_edges.at(outpt)) {
      int w = weight(outpt, dst);
      max_child_delay = max(w + max_delay_to_leaf(dst), max_child_delay);
    }
    assert(max_child_delay >= 0);
    cout << "\tdelay of " << outpt << " = " << max_child_delay << endl;
    return max_child_delay;
  }


  bool has_nodes() const {
    return nodes.size();
  }
};

std::ostream& operator<<(std::ostream& out, dgraph& dg);
std::ostream& operator<<(std::ostream& out, ubuffer_impl& impl);

dgraph build_shift_register_graph(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);
dgraph build_shift_registers(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);
pair<ubuffer_impl,isl_map*> build_buffer_impl(prog& prg, UBuffer& buf, schedule_info& hwinfo);
isl_map* build_buffer_impl(prog& prg, UBuffer& buf, schedule_info& hwinfo, ubuffer_impl& impl);

ubuffer_impl port_group2bank(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);

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

CoreIR::Instance* build_inner_bank_offset(const std::string& reader, UBuffer& buf, ubuffer_impl& impl, CoreIR::ModuleDef* def);

std::set<string> generate_M1_shift_registers(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& buf, schedule_info& hwinfo);

void instantiate_M1_verilog(const std::string& long_name, const int b, ubuffer_impl& impl, UBuffer& buf);

void M1_sanity_check_port_counts(ubuffer_impl& impl);

CoreIR::Module* affine_controller_def(CoreIR::Context* context, isl_set* dom, isl_aff* aff);

isl_aff* inner_bank_offset_aff(const std::string& reader, UBuffer& buf, ubuffer_impl& impl);

isl_aff* bank_offset_aff(const std::string& reader, UBuffer& buf, ubuffer_impl& impl);

void garnet_map_module(CoreIR::Module* top);

double PE_energy_cost(power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg);

map<string, int> get_PE_optype_count(prog& prg);
map<string, int> get_PE_optype_count_garnet(prog& prg);

double PE_energy_cost_instance_model(power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg);

double MEM_energy_cost(CodegenOptions& options, power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg);

#endif


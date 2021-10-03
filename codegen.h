#pragma once

#include "ubuffer.h"

#define US + "_" +

static inline
void ignore_inter_deps(std::ostream& out, const string& var) {
  out << "#ifdef __VIVADO_SYNTH__" << endl;
  //out << "#pragma HLS dependence variable=" << var << " inter false" << endl;
  out << "#endif //__VIVADO_SYNTH__" << endl;
}

static inline
void ignore_inter_deps_array(std::ostream& out) {
  out << "#ifdef __VIVADO_SYNTH__" << endl;
  //out << "#pragma HLS dependence array inter false" << endl;
  out << "#endif //__VIVADO_SYNTH__" << endl;
}

static inline
void open_synth_scope(std::ostream& out) {
  out << "#ifdef __VIVADO_SYNTH__" << endl;
}

static inline
void close_synth_scope(std::ostream& out) {
  out << "#endif //__VIVADO_SYNTH__" << endl;
}

static inline
void open_debug_scope(std::ostream& out) {
  out << "#ifndef __VIVADO_SYNTH__" << endl;
}

static inline
void close_debug_scope(std::ostream& out) {
  out << "#endif //__VIVADO_SYNTH__" << endl;
}

static inline
string read_partition(const string& p, const int cap) {
  if (cap > 1) {
    return p + ".back()";
  } else {
    return p;
  }
}

static inline
string write_partition(const string& p, const int cap, const string& val) {
  if (cap > 1) {
    return p + ".push(" + val + ")";
  } else {
    return p + " = " + val;
  }
}

static inline
void sw_test_headers(ostream& out, prog& prg) {
  out << "#include <algorithm>" << endl;
  out << "#include <fstream>" << endl;
  out << "#include <vector>" << endl;
  out << "#include \"" << prg.name << ".h\"" << endl;
  out << "#include \"bitmap_image.hpp\"" << endl;
  out << "#include <cstdlib>" << endl << endl;
}

static inline
void ocl_headers(ostream& out) {
  out << "#include \"xcl2.hpp\"" << endl;
  out << "#include <algorithm>" << endl;
  out << "#include <fstream>" << endl;
  out << "#include <vector>" << endl;
  out << "#include <cstdlib>" << endl << endl;
  out << "#include \"clockwork_standard_compute_units.h\"" << endl << endl;
}


void generate_vivado_tcl(std::string& name);


//Helper function to find buffer on AST
std::set<pair<string, string> > edge_buffers(map<string, UBuffer>& buffers, prog& prg);

std::set<pair<string, string> > outputs(map<string, UBuffer>& buffers, prog& prg);
std::set<pair<string, string> > inputs(map<string, UBuffer>& buffers, prog& prg);

vector<pair<string, string> > incoming_bundles(op* op, map<string, UBuffer>& buffers, prog& prg);
vector<pair<string, string> > outgoing_bundles(op* op, map<string, UBuffer>& buffers, prog& prg);
vector<string> incoming_buffers(const map<string, UBuffer>& buffers, op* op, prog& prg);
vector<string> outgoing_buffers(const map<string, UBuffer>& buffers, op* op, prog& prg);

// Variants on code generation functions
void generate_app_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map);

void generate_app_code(map<string, UBuffer>& buffers, prog& prg, umap* sched);

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap);

void generate_app_code(map<string, UBuffer>& buffers, prog& prg);

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched);

map<string, UBuffer> build_buffers(prog& prg);

void tag_coarse_grained_loop_to_ubuf(map<string, UBuffer>& buffers, prog& prg);

// Schedules all loops in sequential order
// and emits HLS C++ code for the program
void generate_vanilla_hls_code(prog& prg);
void generate_unoptimized_code(prog& prg);
void generate_unoptimized_code(CodegenOptions& options, prog& prg);

// Re-schedules all loops using ISL
// and then emits HLS C++ code for the program
void generate_optimized_code(prog& prg);
void generate_optimized_code(CodegenOptions& options, prog& prg);

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap);

//TODO: move to verilog backend
//Verilog codegen
void generate_verilog(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

void generate_vectorization_unit_testbench(UBuffer & buf);
void generate_regression_testbench(prog& prg, map<string, UBuffer>& buffers);

//testbench
void generate_vivado_rtl_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers);

void generate_deepak_power_flow_rtl_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers);

void generate_verilator_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers);

void generate_garnet_verilator_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers);


void generate_app_prefix(CodegenOptions& options, ofstream& conv_out, prog& prg);
void generate_app_collateral(CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);


void generate_driver_function_prefix(CodegenOptions& options, ostream& conv_out, map<string, UBuffer>& buffers, prog& prg);


void generate_driver_function_suffix(CodegenOptions& options, ostream& conv_out, map<string, UBuffer>& buffers, prog& prg);

void generate_app_code_body(CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map);

vector<string> get_args(const map<string, UBuffer>& buffers, prog& prg);
vector<string> get_arg_names(const map<string, UBuffer>& buffers, prog& prg);


//TODO maybe this will be add to ubuffer.h
UBuffer write_latency_adjusted_buffer(
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);


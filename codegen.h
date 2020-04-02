#pragma once

#include "minihls.h"
#include "ubuffer.h"

#define US + "_" + 

using minihls::outpt;
using minihls::inpt;
using minihls::block;
using minihls::instr;
using minihls::instruction_binding;
using minihls::instruction_type;
using minihls::module_type;
using minihls::module_instance;
using minihls::port;

static inline
module_type* in_wire_type(block& blk, const string& name, const int width) {
  string name = "in_wire_" + name;
  if (blk.has_module_type(name)) {
    return blk.get_module_type(name);
  }

  vector<port> pts{outpt(name, width)};
  return blk.add_module_type(name, pts, body);
}

static inline
module_type* wire_type(block& blk, const int width) {
  string name = "wire_" + to_string(width);
  if (blk.has_module_type(name)) {
    return blk.get_module_type(name);
  }

  vector<port> pts{inpt("in", width), outpt("out", width)};
  string body = tab(1) + "assign out = in;";
  return blk.add_module_type(name, pts, body);
}

static inline
instruction_type* wr_wire_instr(block& blk, int width) {
  string name = "wr_wire_instr_" + to_string(width);
  if (blk.has_instruction_type(name)) {
    return blk.get_instruction_type(name);
  }

  return blk.add_instruction_type(name);
}

static inline
instruction_binding* wr_wire_binding(block& blk, int width) {
  string name = "wr_wire_binding_" + to_string(width);
  if (blk.has_instruction_binding(name)) {
    return blk.get_instruction_binding(name);
  }

  return blk.add_instruction_binding(name, wr_wire_instr(blk, width), wire_type(blk, width), "", {{0, "in"}});
}

static inline
instruction_type* rd_wire_instr(block& blk, int width) {
  string name = "rd_wire_instr_" + to_string(width);
  if (blk.has_instruction_type(name)) {
    return blk.get_instruction_type(name);
  }

  return blk.add_instruction_type(name);
}

static inline
instruction_binding* rd_wire_binding(block& blk, int width) {
  string name = "rd_wire_binding_" + to_string(width);
  if (blk.has_instruction_binding(name)) {
    return blk.get_instruction_binding(name);
  }

  return blk.add_instruction_binding(name, rd_wire_instr(blk, width), wire_type(blk, width), "out", {});
}

static inline
module_instance* get_wire(block& blk, const string& name, int width) {
  if (blk.has_inst(name)) {
    return blk.get_inst(name);
  }

  module_type* wtp = wire_type(blk, width);

  return blk.add_external_module_instance(name, wtp);
}

static inline
instr* wire_write(block& blk, const string& arg_name, int width, instr* arg) {
  module_instance* arg_wire =
    get_wire(blk, arg_name, width);

  instruction_binding* rd_wire = 
    wr_wire_binding(blk, width);

  instruction_type* instr_tp =
    wr_wire_instr(blk, width);

  auto instr = blk.add_instr(blk.unique_name("wr"), instr_tp, {arg});
  instr->bind_procedure(rd_wire);
  instr->bind_unit(arg_wire);

  return instr;
}

static inline
instr* wire_read(block& blk, const string& arg_name, int width) {
  module_instance* arg_wire =
    get_wire(blk, arg_name, width);

  instruction_binding* rd_wire = 
    rd_wire_binding(blk, width);

  instruction_type* instr_tp =
    rd_wire_instr(blk, width);

  auto instr = blk.add_instr(blk.unique_name("rd"), instr_tp);
  instr->bind_procedure(rd_wire);
  instr->bind_unit(arg_wire);

  return instr;
}
struct compute_kernel {
  string name;
  vector<pair<string, string> > input_buffers;
  vector<string> iteration_variables;
  string functional_unit;
  pair<string, string> output_buffer;
};

minihls::instruction_type* reduce(minihls::context& c, map<string, minihls::module_type*>& buffers, vector<string>& index_variables);

minihls::module_type* sr_buffer(minihls::block& blk, const int width, const int depth);

minihls::module_type* gen_bank(minihls::block& blk, const bank& bnk);

static inline
void ignore_inter_deps(std::ostream& out, const string& var) {
  out << "#ifdef __VIVADO_SYNTH__" << endl;
  out << "#pragma HLS dependence variable=" << var << " inter false" << endl;
  out << "#endif //__VIVADO_SYNTH__" << endl;
}

static inline
void ignore_inter_deps_array(std::ostream& out) {
  out << "#ifdef __VIVADO_SYNTH__" << endl;
  out << "#pragma HLS dependence array inter false" << endl;
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

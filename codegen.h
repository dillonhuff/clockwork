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

// New Additons
static inline
void ignore_inter_deps_catapult(std::ostream& out, const string& var) {
  out << "#ifdef __SYTHESIS__" << endl;
  //out << "#pragma HLS dependence variable=" << var << " inter false" << endl;
  out << "#endif //__SYNTHESIS__" << endl;
}

static inline
void ignore_inter_deps_array_catapult(std::ostream& out) {
  out << "#ifdef __SYNTHESIS__" << endl;
  //out << "#pragma HLS dependence array inter false" << endl;
  out << "#endif //__SYNTHESIS__" << endl;
}

static inline
void open_synth_scope_catapult(std::ostream& out) {
  out << "#ifdef __SYNTHESIS__" << endl;
}

static inline
void close_synth_scope_catapult(std::ostream& out) {
  out << "#endif //__SYNTHESIS__" << endl;
}

static inline
void open_debug_scope_catapult(std::ostream& out) {
  out << "#ifndef __SYNTHESIS__" << endl;
}

static inline
void close_debug_scope_catapult(std::ostream& out) {
  out << "#endif //__SYNTHESIS__" << endl;
}


//

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


void generate_vivado_tcl(std::string& name);

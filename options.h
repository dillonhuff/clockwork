#pragma once

struct DebugOptions {
  bool expect_all_linebuffers;

  DebugOptions() : expect_all_linebuffers(false) {}
};

enum InnerBankOffsetMode {
  INNER_BANK_OFFSET_STACK,
  INNER_BANK_OFFSET_LINEAR
};

struct CodegenOptions {
  bool internal;
  bool all_rams;
  bool add_dependence_pragmas;
  bool use_custom_code_string;
  string code_string;
  bool simplify_address_expressions;
  bool unroll_factors_as_pad;

  //TODO:for merge banks, we should separate codegen from rewrite
  bool conditional_merge;
  size_t merge_threshold;

  int num_input_epochs;
  InnerBankOffsetMode inner_bank_offset_mode;


  DebugOptions debug_options;

  CodegenOptions() : internal(true), all_rams(false), add_dependence_pragmas(true),
  use_custom_code_string(false), code_string(""), simplify_address_expressions(false),
  unroll_factors_as_pad(false), conditional_merge(false), merge_threshold(0),
  num_input_epochs(-1),
  inner_bank_offset_mode(INNER_BANK_OFFSET_STACK) {}

};


#pragma once

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

struct DebugOptions {
  bool expect_all_linebuffers;

  DebugOptions() : expect_all_linebuffers(false) {}
};

enum ScheduleAlgorithm {
  SCHEDULE_ALGORITHM_NAIVE,
  SCHEDULE_ALGORITHM_ISL,
  SCHEDULE_ALGORITHM_CW
};

enum InnerBankOffsetMode {
  INNER_BANK_OFFSET_STACK,
  INNER_BANK_OFFSET_LINEAR,
  INNER_BANK_OFFSET_MULTILINEAR,
  INNER_BANK_OFFSET_CYCLE_DELAY
};

struct banking_strategy {
  string partition;
  vector<int> cycle_factors;
};

enum TargetTile {
  TARGET_TILE_REGISTERS,
  TARGET_TILE_DUAL_SRAM_RAW,
  TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN,
  TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN,
  TARGET_TILE_PLATONIC,
  TARGET_TILE_GENERIC_SRAM,
  TARGET_TILE_BRAM
};

struct global_signals_policy {
  bool synchronous_reset;

  global_signals_policy() : synchronous_reset(false) {}
};

struct RTLOptions {
  bool use_external_controllers;
  bool pack_controllers_in_memtiles;
  bool use_prebuilt_memory;
  bool use_pipelined_compute_units;
  int max_inpt, max_outpt;
  TargetTile target_tile;
  global_signals_policy global_signals;

  RTLOptions() : use_external_controllers(true), pack_controllers_in_memtiles(false),
  use_pipelined_compute_units(false),
    max_inpt(1), max_outpt(1),
    target_tile(TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN), use_prebuilt_memory(false) {}
  //RTLOptions() : use_external_controllers(true), pack_controllers_in_memtiles(false), use_prebuilt_memory(false), target_tile(TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN) {}
};

struct LakeCollateral {
    std::unordered_map<string, int> word_width;
    std::unordered_map<string, int> bank_num;
    std::unordered_map<string, int> capacity;
    std::unordered_map<string, int> in_port_width;
    std::unordered_map<string, int> out_port_width;

    LakeCollateral():
        word_width({{"agg", 1}, {"sram", 4}, {"tb", 1}}),
        in_port_width({{"agg", 1}, {"sram", 4}, {"tb", 4}}),
        out_port_width({{"agg", 4}, {"sram", 4}, {"tb", 1}}),
        bank_num({{"agg", 2}, {"sram", 1}, {"tb", 2}}),
        capacity({{"agg", 4}, {"sram", 512}, {"tb", 16}}) {}
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

  //Use for create hardware schedule
  bool inline_vectorization;
  vector<int> iis;

  //Use for garnet
  bool pass_through_valid;
  bool emit_smt_stream;
  string dir;

  bool use_epochs;
  int num_input_epochs;
  bool push_garbage_outputs;
  bool use_soda_casting;
  InnerBankOffsetMode inner_bank_offset_mode;
  ScheduleAlgorithm scheduling_algorithm;
  bool ignore_top_level_inter_deps;

  banking_strategy default_banking_strategy;
  std::map<string, banking_strategy> banking_strategies;

  int num_pipelines;

  RTLOptions rtl_options;

  DebugOptions debug_options;
  LakeCollateral mem_tile;

  CodegenOptions() : internal(true), all_rams(false), add_dependence_pragmas(true),
  use_custom_code_string(false), code_string(""), simplify_address_expressions(false),
  unroll_factors_as_pad(false), conditional_merge(false), merge_threshold(0),
  inline_vectorization(false), iis({}),
  pass_through_valid(false), emit_smt_stream(false), dir(""),
  use_epochs(true),
  num_input_epochs(-1),
  push_garbage_outputs(false),
  use_soda_casting(false),
  inner_bank_offset_mode(INNER_BANK_OFFSET_STACK),
  scheduling_algorithm(SCHEDULE_ALGORITHM_NAIVE),
  default_banking_strategy({"exhaustive"}),
  ignore_top_level_inter_deps(false),
  num_pipelines(1)
  {}

  banking_strategy get_banking_strategy(const std::string& buffer);

};


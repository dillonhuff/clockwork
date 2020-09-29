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
  TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN
};

struct RTLOptions {
  bool use_external_controllers;
  bool pack_controllers_in_memtiles;
  bool use_prebuilt_memory;
  TargetTile target_tile;

  RTLOptions() : use_external_controllers(true), pack_controllers_in_memtiles(false), use_prebuilt_memory(false), target_tile(TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN) {}
};

struct LakeCollateral {
    std::unordered_map<string, int> word_width;
    std::unordered_map<string, int> bank_num;

    LakeCollateral():
        word_width({{"agg", 1}, {"sram", 4}, {"tb", 1}}),
        bank_num({{"agg", 2}, {"sram", 1}, {"tb", 2}}) {}
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


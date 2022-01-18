#pragma once
#include "utils.h"
#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

enum slack_matching_type {
  SLACK_MATCHING_TYPE_FIXED,
  SLACK_MATCHING_TYPE_PIPELINE_DEPTH_AWARE,
};

struct slack_matching_policy {
  slack_matching_type tp;
  int depth;
};

enum test_data_input_stream_type {
  TEST_DATA_INPUT_STREAM_TYPE_CONSTANT,
  TEST_DATA_INPUT_STREAM_TYPE_RANDOM,
  TEST_DATA_INPUT_STREAM_TYPE_INCREMENTING,
};

struct test_data_input_stream {
  test_data_input_stream_type tp;
  int seed;
  int value;

  test_data_input_stream() : tp(TEST_DATA_INPUT_STREAM_TYPE_RANDOM), seed(1), value(0) {}
};

struct DebugOptions {
  bool expect_all_linebuffers;
  bool traceWave;
  test_data_input_stream test_inputs;

  DebugOptions() : traceWave(false), expect_all_linebuffers(false) {}
};

enum ScheduleAlgorithm {
  SCHEDULE_ALGORITHM_NAIVE,
  SCHEDULE_ALGORITHM_ISL,
  SCHEDULE_ALGORITHM_CW
};

enum DNNScheduleAlgorithm {
    ASPLOS_SCHEDULE, //An over optimized schedule which will be refactored
    VANILLA_DB_SCHEDULE,
    ISCA_SCHEDULE, //new schedule with refactor
    SEQUENTIAL_SCHEDULE
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
  TARGET_TILE_BRAM,
  TARGET_TILE_M3,
  TARGET_TILE_M1
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
  bool double_buffer_optimization;
  int max_inpt, max_outpt;
  TargetTile target_tile;
  global_signals_policy global_signals;
  int hls_clock_target_Hz;

  RTLOptions() : use_external_controllers(true), pack_controllers_in_memtiles(false),
  use_pipelined_compute_units(false), double_buffer_optimization(false),
    max_inpt(1), max_outpt(1),
    target_tile(TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN),
    use_prebuilt_memory(false),
    hls_clock_target_Hz(250000000) {}
};


struct LakeCollateral {
    std::unordered_map<string, int> word_width;
    std::unordered_map<string, int> bank_num;
    std::unordered_map<string, int> capacity;
    std::unordered_map<string, int> in_port_width;
    std::unordered_map<string, int> out_port_width;
    std::unordered_map<string, string> read_port;
    std::unordered_map<string, string> write_port;

    //Single port means read write share the same physical port
    std::unordered_map<string, bool> single_port;
    std::set<string> controller_name; //use for identify the controller name in configuration
    int fetch_width;
    int max_chaining;
    int iteration_level;
    int counter_ub;
    bool multi_sram_accessor;
    bool dual_port_sram;
    bool wire_chain_en;

    LakeCollateral() {}

    //TODO: use the collateral kavya generated
    LakeCollateral(string level):
        max_chaining(4),
        iteration_level(6),
        counter_ub(65535),
        multi_sram_accessor(true),
        dual_port_sram(false),
        wire_chain_en(false) {
            if (level == "mem") {
                fetch_width = 4;
                max_chaining = 4;
                iteration_level = 6;
                capacity = {{"agg", 16}, {"sram", 512}, {"tb", 16}};
                in_port_width = {{"agg", 1}, {"sram", 4}, {"tb", 4}};
                out_port_width = {{"agg", 4}, {"sram", 4}, {"tb", 1}};
                word_width = {{"agg", 1}, {"sram", 4}, {"tb", 1}};
                controller_name = {"agg", "sram", "tb"};
                bank_num = {{"agg", 2}, {"sram", 1}, {"tb", 2}};
            } else if (level == "regfile") {
                fetch_width = 1;
                max_chaining = 1;
                word_width = {{"regfile", 1}};
                in_port_width= {{"regfile", 1}};
                out_port_width = {{"regfile", 1}};
                bank_num = {{"regfile", 1}};
                capacity = {{"regfile", 32}};
                controller_name = {"regfile"};
                iteration_level = 3;

            } else if (level == "glb") {
                fetch_width = 1;
                max_chaining = 1;
                word_width = {{"glb", 1}};
                in_port_width= {{"glb", 1}};
                out_port_width = {{"glb", 1}};
                bank_num = {{"glb", 1}};
                capacity = {{"glb", 131072}};
                controller_name = {"glb"};
            } else if (level != "mem") {
                cout << "\t\tERROR: Memory component not identified" << endl;
                assert(false);
            }
    }

    void add_memory_component(string name, bool is_single_port) {
      controller_name.insert(name);
      single_port.insert({name, is_single_port});
      bank_num.insert({name, 1});
    };

    void add_read_port(string name, int port_width) {
      assert(controller_name.count(name));
      assert(out_port_width.count(name) == 0);
      out_port_width.insert({name, port_width});
    }

    void add_write_port(string name, int port_width) {
      assert(controller_name.count(name));
      assert(in_port_width.count(name) == 0);
      in_port_width.insert({name, port_width});
    }

    void make_duplication(string name, int num) {
      assert(controller_name.count(name));
      assert(bank_num.at(name) == 1);
      bank_num.insert({name, num});
    }

    void set_capacity(string name, int size) {
      assert(controller_name.count(name));
      assert(bank_num.at(name) == 1);
      capacity.insert({name, size});
    }

    void infer_word_width() {
        for (auto mem: controller_name) {
            int width =
                std::gcd(in_port_width.at(mem), out_port_width.at(mem));
            word_width.insert({mem, width});
        }
    }

    void wire_together(string prod, string cons) {
        read_port[prod] = cons;
        write_port[cons] = prod;
    }


    void set_fetch_width(int a){
	fetch_width = a;
    }
    void set_max_chaining(int a){
	max_chaining= a;
    }
    void set_iteration_level(int a){
	iteration_level = a;
    }
    void set_counter_ub(int a){
	counter_ub = a;
    }

    void set_multi_sram_accessor(bool a){
	multi_sram_accessor = a;
    }
    void set_dual_port_sram(bool a){
	dual_port_sram = a;
    }
    void set_wire_chain_en(bool a){
	wire_chain_en = a;
    }

    void set_word_width(std::unordered_map<string, int> a){
	word_width = a;
    }

    void set_capacity(std::unordered_map<string, int> a){
	capacity = a;
    }
    void set_in_port_width(std::unordered_map<string, int> a){
	in_port_width = a;
    }
    void set_out_port_width(std::unordered_map<string, int> a){
	out_port_width = a;
    }
    void set_controller_name(std::set<string> a){
	controller_name = a;
    }


    void print_points(){
        cout << " # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  # # # # # # ## 3  ## # # 3 3 #  3 # # 3 3  # #  # # # #  # # # # # #  # # # # # # # # # # # # # # # # # # # # # # " << endl;
//	  cout << " # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  # # # # # # ## 3  ## # # 3 3 #  3 # # 3 3  # #  # # # #  # # # # # #  # # # # # # # # # # # # # # # # # # # # # # " << endl;
//	  cout << " # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  # # # # # # ## 3  ## # # 3 3 #  3 # # 3 3  # #  # # # #  # # # # # #  # # # # # # # # # # # # # # # # # # # # # # " << endl;
	cout << tab(2) << "fetch-width " << fetch_width << endl;
	cout << tab(2) << "max-chaining " << max_chaining << endl;
	cout << tab(2) << "iteration-level " << iteration_level << endl;
	cout << tab(2) << "counter-ub " << counter_ub << endl;
	cout << tab(2) << "multi-sram-accessor " << multi_sram_accessor << endl;
	cout << tab(2) << "dual-port-sram " << dual_port_sram << endl;
	cout << tab(2) << "wire-chain-en " << wire_chain_en << endl;
    cout << "=======================================" << endl;
	cout << tab(2) << "word-width " << endl;
	for(auto i: word_width)
		cout << tab(4) << i.first << " " << i.second << endl;
	cout << tab(2) << "capacity " << endl;
	for(auto i: capacity)
		cout << tab(4) << i.first << " " << i.second << endl;
	cout << tab(2) <<  "in-port-width " << endl;
	for(auto i: in_port_width)
		cout << tab(4) << i.first << " " << i.second << endl;
	cout << tab(2) << "out-port-width " << endl;
	for(auto i: out_port_width)
		cout << tab(4) << i.first << " " << i.second << endl;
	cout << tab(2) << "controller-name " << endl;
  	for(auto i: controller_name)
		cout << tab(4) << i  << " " << endl;
    }

    void print_points(string a){
	ofstream fout(a);
 	fout << "fetch-width " << fetch_width << endl;
	fout << "max-chaining " << max_chaining << endl;
	fout << "iteration-level " << iteration_level << endl;
	fout << "counter-ub " << counter_ub << endl;
	fout << "multi-sram-accessor " << multi_sram_accessor << endl;
	fout << "dual-port-sram " << dual_port_sram << endl;
	fout << "wire-chain-en " << wire_chain_en << endl;
	fout << "word-width " << endl;
	for(auto i: word_width)
		fout << i.first << " " << i.second << endl;
	fout << "capacity " << endl;
	for(auto i: capacity)
		fout << i.first << " " << i.second << endl;
	fout << "in-port-width " << endl;
	for(auto i: in_port_width)
		fout << i.first << " " << i.second << endl;
	fout << "out-port-width " << endl;
	for(auto i: out_port_width)
		fout << i.first << " " << i.second << endl;
	fout << "controller-name "  << endl;
  	for(auto i: controller_name)
		fout << i <<  endl;
        fout.close();
    }


    void set_config_fetch2() {
       fetch_width = 2;
       max_chaining = 4;
       dual_port_sram = true;
       wire_chain_en = false;
       word_width = {{"agg", 1}, {"sram", 2}, {"tb", 2}};
       in_port_width = {{"agg", 1}, {"sram", 2}, {"tb", 2}};
       out_port_width = {{"agg", 2}, {"sram", 2}, {"tb", 1}};
       bank_num = {{"agg", 2}, {"sram", 1}, {"tb", 2}};
       capacity = {{"agg", 8}, {"sram", 512}, {"tb", 8}};
    }

    void set_config_dp() {
      fetch_width = 1;
      dual_port_sram = true;
      wire_chain_en = false;
      word_width = {{"mem", 1}};
      in_port_width = {{"mem", 1}};
      out_port_width = {{"mem", 1}};
      bank_num = {{"mem", 1}};
      capacity = {{"mem", 512}};
      controller_name = {"regfile"};
    }

    int get_max_capacity() const {
        int c = 0;
        for (auto it: capacity) {
            c = std::max(c, it.second);
        }
        return c * max_chaining;
    }

    int get_single_tile_capacity() const {
        int c = 0;
        for (auto it: capacity) {
            c = std::max(c, it.second)
                * word_width.at(it.first);
        }
        return c;
    }

    int get_inpt_num() {
        if (bank_num.size() == 1)
            return pick(bank_num).second;
        else {
            return bank_num.at("agg");
        }
    }

    int get_outpt_num() {
        if (bank_num.size() == 1)
            return pick(bank_num).second;
        else {
            return bank_num.at("tb");
        }
    }

};

enum HLSLoopCodegen {
  HLS_LOOP_CODEGEN_ISL,
  HLS_LOOP_CODEGEN_PERFECT,
  HLS_LOOP_CODEGEN_CYLINDRICAL,
  HLS_LOOP_CODEGEN_NON_BLOCKING,
  HLS_LOOP_CODEGEN_CUSTOM
};

struct CodegenOptions {
  bool internal;
  bool all_rams;
  bool add_dependence_pragmas;
  HLSLoopCodegen hls_loop_codegen;
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
  bool config_gen_only;
  int host2glb_latency;
  string dir;

  bool use_epochs;
  int num_input_epochs;
  bool use_soda_casting;
  InnerBankOffsetMode inner_bank_offset_mode;
  ScheduleAlgorithm scheduling_algorithm;
  DNNScheduleAlgorithm fallback_schedule;
  bool ignore_top_level_inter_deps;

  banking_strategy default_banking_strategy;
  std::map<string, banking_strategy> banking_strategies;

  int num_pipelines;

  RTLOptions rtl_options;

  DebugOptions debug_options;
  map<string, LakeCollateral> mem_hierarchy;

  slack_matching_policy slack_matching;

  CodegenOptions() : internal(true), all_rams(false), add_dependence_pragmas(true),
  hls_loop_codegen(HLS_LOOP_CODEGEN_ISL), code_string(""), simplify_address_expressions(false),
  unroll_factors_as_pad(false), conditional_merge(false), merge_threshold(0),
  inline_vectorization(false), iis({}), host2glb_latency(0),
  pass_through_valid(false), emit_smt_stream(false), config_gen_only(false), dir(""),
  use_epochs(true),
  num_input_epochs(-1),
  use_soda_casting(false),
  inner_bank_offset_mode(INNER_BANK_OFFSET_STACK),
  scheduling_algorithm(SCHEDULE_ALGORITHM_NAIVE),
  fallback_schedule(SEQUENTIAL_SCHEDULE),
  default_banking_strategy({"exhaustive"}),
  ignore_top_level_inter_deps(false),
  num_pipelines(1),
  slack_matching({SLACK_MATCHING_TYPE_FIXED, 500})
  {}

  void add_memory_hierarchy(const std::string& level);

  banking_strategy get_banking_strategy(const std::string& buffer);
  string get_hierarchy_level(int capacity);

};

struct power_analysis_params {
  double routing_hop_cost;
  double memtile_op_cost;
  map<string, double> alu_op_energy_costs;
  map<string, double> instance_energy_costs;
};

struct power_analysis_info {

  map<string, map<string, int> > PE_optype_counts;
  map<string, int> op_counts;

};

struct mem_access_cnt {
  map<string, map<string, int> > read_cnt;
  map<string, map<string, int> > write_cnt;
};

LakeCollateral create_single_port_wide_fetch_memory(int fetch_width, int capacity, int SIPO_num);
LakeCollateral create_dual_port_memory(int capacity);

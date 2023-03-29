#include "options.h"
#include "isl_utils.h"
#include "algorithm.h"

using namespace dbhc;

banking_strategy CodegenOptions::get_banking_strategy(const std::string& buffer) {
  if (!contains_key(buffer, banking_strategies)) {
    return default_banking_strategy;
  }
  return map_find(buffer, banking_strategies);
}

void CodegenOptions::add_memory_hierarchy(const std::string& level) {
    LakeCollateral mem(level);
    mem_hierarchy.insert({level, mem});
}

string CodegenOptions::get_hierarchy_level(int capacity) {
    map<int, string> capacity2level;
    for (auto it: mem_hierarchy) {
        string level = it.first;
        capacity2level[it.second.get_single_tile_capacity()] = level;
    }
    return capacity2level.lower_bound(capacity)->second;

}


bool ConstantOffset::is_satisfied(isl_map* m, isl_map* s) {
    auto range2range = dot(inv(m), s);
    auto diff = isl_map_deltas(range2range);
    isl_val* max_val= lexmaxval(diff);
    isl_val* min_val  = lexminval(diff);
    int max = to_int(max_val);
    int min = to_int(min_val);
    if (max != min) {
        cout << "master controller sched: " << str(m) << endl;
        cout << "slave controller sched: " << str(s) << endl;
        cout << "shared controller does not have constant offset" << endl;
        return false;
    } else if (max > ub || min < lb) {
        cout << "master controller sched: " << str(m) << endl;
        cout << "slave controller sched: " << str(s) << endl;
        cout << "constant offset out of bound" << endl;
        return false;
    } else {
        return true;
    }
}

int LakeCollateral::get_ctrl_iter_level(string ctrl_name) {
        if (iter_level_map.count(ctrl_name)) {
            return iter_level_map.at(ctrl_name);
        } else {
            return iteration_level;
        }
    }

LakeCollateral create_single_port_wide_fetch_memory(int fetch_width, int capacity, int SIPO_num) {
    LakeCollateral mem;

    //Misc information
    mem.set_fetch_width(fetch_width);
    mem.set_max_chaining(4);
    mem.set_iteration_level(6);
    mem.set_counter_ub(65535);
    mem.set_multi_sram_accessor(true);
    mem.set_dual_port_sram(false);
    mem.set_wire_chain_en(true);

    mem.add_memory_component("agg", false);
    mem.add_read_port("agg", fetch_width);
    mem.add_write_port("agg", 1);
    mem.set_capacity("agg", 16);
    mem.make_duplication("agg", SIPO_num);

    mem.add_memory_component("tb", false);
    mem.add_read_port("tb", 1);
    mem.add_write_port("tb", fetch_width);
    mem.set_capacity("tb", 16);
    mem.make_duplication("tb", fetch_width - SIPO_num);

    mem.add_memory_component("sram", true);
    mem.add_read_port("sram", fetch_width);
    mem.add_write_port("sram", fetch_width);
    mem.set_capacity("sram", capacity);

    mem.wire_together("agg", "sram");
    mem.wire_together("sram", "tb");

    mem.infer_word_width();

    return mem;
}

LakeCollateral create_dual_port_memory(int capacity) {
    LakeCollateral mem;

    //Misc information
    mem.set_fetch_width(1);
    mem.set_max_chaining(4);
    mem.set_iteration_level(6);
    mem.set_counter_ub(65535);
    mem.set_multi_sram_accessor(true);
    mem.set_dual_port_sram(false);
    mem.set_wire_chain_en(true);

    mem.add_memory_component("mem", false);
    mem.add_read_port("mem", 1);
    mem.add_write_port("mem", 1);
    mem.set_capacity("mem", capacity);

    mem.infer_word_width();

    return mem;
}

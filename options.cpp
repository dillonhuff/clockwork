#include "options.h"
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

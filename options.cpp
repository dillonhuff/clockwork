#include "options.h"
#include "algorithm.h"

using namespace dbhc;

banking_strategy CodegenOptions::get_banking_strategy(const std::string& buffer) {
  if(set_banking_strategy_value != "")
  {
	
      banking_strategy a;// = new banking_strategy();
      a.partition = set_banking_strategy_value;
      a.cycle_factors = {};
      return a;
  }


  if (!contains_key(buffer, banking_strategies)) {
    return default_banking_strategy;
  }
  return map_find(buffer, banking_strategies);
}
/*
banking_strategy CodegenOptions::set_banking_strategy(const std::string& buffer, const std::string& banking_strat) {
  banking_strategies.insert(std::make_pair(buffer, banking_strat));  
}
*/


void CodegenOptions::add_memory_hierarchy(const std::string& level) {
    LakeCollateral mem(level);
    mem_hierarchy.insert({level, mem});
}

#include "options.h"
#include "algorithm.h"

using namespace dbhc;

banking_strategy CodegenOptions::get_banking_strategy(const std::string& buffer) {
  if (!contains_key(buffer, banking_strategies)) {
    return {"exhaustive"};
  }
  return map_find(buffer, banking_strategies);
}

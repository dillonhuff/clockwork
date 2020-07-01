#include "options.h"
#include "algorithm.h"

using namespace dbhc;

std::string CodegenOptions::banking_strategy(const std::string& buffer) {
  if (!contains_key(buffer, banking_strategies)) {
    return "exhaustive";
  }
  return map_find(buffer, banking_strategies).bank_partition;
}

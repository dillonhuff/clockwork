#pragma once

#include <vector>
#include <map>
#include <string>

struct lake_accessor {
  std::string instance_name;
  int num_levels;
};

struct lake_memory {
  std::string instance_name;
  std::string type_name;
  int width;
  int depth;
};

struct lake_target {
  std::string tile_name;
  std::map<std::string, lake_accessor> accessors;
  std::map<std::string, lake_memory> memories;
  std::vector<std::pair<std::string, std::string> > connections;
};

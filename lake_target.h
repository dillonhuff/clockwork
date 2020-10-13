#pragma once

#include "isl_utils.h"

struct component_controller {
  std::string component_name;

  isl_aff* sched;
  isl_aff* addrs;
  isl_set* dom;

  int addr_width;
};

struct lake_accessor {
  std::string instance_name;
  int num_levels;
};

struct lake_accessor_instance {
  isl_set* domain;
  isl_aff* schedule;
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

void generate_lake_collateral(
    const std::string& mod_name,
    std::ostream& out,
    const std::vector<component_controller>& controllers);


void generate_lake_collateral_delay_fabric_addrgen(const std::string& name, std::ostream& out, const int depth);
void generate_lake_collateral_delay(const std::string& name, std::ostream& out, const int depth);
void generate_lake_collateral_delay_wdata_wrapped(const std::string& name, std::ostream& out, const int depth);
void generate_lake_collateral_delay_wide_fetch_tile_wrapped(const std::string& name, std::ostream& out, const int depth);

void generate_lake_collateral_affine_controller(const std::string& name, std::ostream& out, isl_set* dom, isl_aff* aff);
void generate_lake_collateral_dual_sram_raw(const std::string& mod_name, std::ostream& out);

void generate_lake_collateral_dual_sram_cyclic_banks(const std::string& mod_name, std::ostream& out, const std::vector<int>& factors, const int in_ports, const int out_ports);

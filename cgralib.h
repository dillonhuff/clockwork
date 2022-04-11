#pragma once

#include "coreir/common-macros.h"
#include "coreir-c/ctypes.h"

#ifdef __cplusplus
#include "coreir.h"
COREIR_GEN_CPP_API_DECLARATION_FOR_LIBRARY(cgralib);
#endif

COREIR_GEN_C_API_DECLARATION_FOR_LIBRARY(cgralib);


static std::map<std::string, std::string> lake_port_map =
  {
    {"chain_data_in_0", "input_width_16_num_0"},
    {"chain_data_in_1", "input_width_16_num_1"},
    {"data_in_0", "input_width_16_num_2"},
    {"data_in_1", "input_width_16_num_3"},
    {"data_out_0", "output_width_16_num_0"},
    {"data_out_1", "output_width_16_num_1"},
    {"valid_out_0", "output_width_1_num_0"},
    {"valid_out_1", "output_width_1_num_1"},
    {"stencil_valid", "output_width_1_num_3"},
    {"addr_in_0", "input_width_16_num_2"},
    {"ren_in_0", "input_width_1_num_0"},
    {"wen_in_0", "input_width_1_num_1"}
  };


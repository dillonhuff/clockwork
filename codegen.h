#pragma once


#include "minihls.h"
#include "ubuffer.h"

struct compute_unit {
  vector<string> input_buffers;
  vector<string> index_variables;
  string operation;
  string output;
};

minihls::instruction_type* reduce(minihls::context& c, map<string, minihls::module_type*>& buffers, vector<string>& index_variables);

minihls::module_type* sr_buffer(minihls::block& blk, const int width, const int depth);

minihls::module_type* gen_bank(minihls::block& blk, const bank& bnk);



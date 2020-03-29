#pragma once


#include "minihls.h"
#include "ubuffer.h"

minihls::module_type* sr_buffer(minihls::block& blk, const int width, const int depth);
minihls::module_type* gen_bank(minihls::block& blk, const bank& bnk);



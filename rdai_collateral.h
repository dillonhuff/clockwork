#pragma once

#include "prog.h"

void generate_xilinx_accel_rdai_wrapper(CodegenOptions& options, std::ostream& out, map<string, UBuffer>& buffers, prog& prg);

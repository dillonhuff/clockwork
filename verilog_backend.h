#pragma once

#include "prog.h"

static int DATAPATH_WIDTH = 16;
static int CONTROLPATH_WIDTH = 16;

void generate_platonic_ubuffer(
    std::ostream& out,
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

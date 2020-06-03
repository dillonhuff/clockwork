#pragma once

#ifdef COREIR

//#include "coreirgen.h"
#include "prog.h"

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

#endif

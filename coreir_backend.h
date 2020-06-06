#pragma once

#ifdef COREIR

#include "prog.h"
#define COREMK(ctx, v) CoreIR::Const::make((ctx), (v))

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

#endif

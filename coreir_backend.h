#pragma once

#ifdef COREIR

#include "prog.h"
#define COREMK(ctx, v) CoreIR::Const::make((ctx), (v))

CoreIR::Wireable* mkConst(CoreIR::ModuleDef* def, const int width, const int val);
CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* orList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* andList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

#endif

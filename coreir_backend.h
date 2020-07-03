#pragma once

#ifdef COREIR

#include "prog.h"
#define COREMK(ctx, v) CoreIR::Const::make((ctx), (v))

static inline
std::string controller_name(const std::string& n) {
  return n + "_port_controller";
}

CoreIR::Wireable* mkConst(CoreIR::ModuleDef* def, const int width, const int val);
CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* orList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);
CoreIR::Wireable* andList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals);

CoreIR::Module* coreir_for_aff(CoreIR::Context* context, isl_aff* aff);

CoreIR::Module* coreir_for_multi_aff(CoreIR::Context* context, isl_multi_aff* aff);

CoreIR::Module* coreir_for_basic_set(CoreIR::Context* context, isl_basic_set* dom);

CoreIR::Module* coreir_for_set(CoreIR::Context* context, isl_set* dom);

CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff);

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

  CoreIR::Wireable* delaybit(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w);

  CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w,
      const int width);
  CoreIR::Wireable* delaybit(CoreIR::ModuleDef* bdef,
      const std::string& name,
      CoreIR::Wireable* w);
  CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
      const std::string name,
      CoreIR::Wireable* w,
      const int width);
#endif

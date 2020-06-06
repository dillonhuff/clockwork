#include "coreir_lib.h"

#ifdef COREIR

using CoreIR::Context, CoreIR::Namespace, CoreIR::RecordParams, CoreIR::Const, CoreIR::Values, CoreIR::Params;
using namespace std;

Namespace* CoreIRLoadLibrary_cwlib(Context* c) {
  Namespace* cwlib = c->newNamespace("cwlib");
  c->getNamespace("commonlib");

  Params ubparams = Params({
        {"width", c->Int()},
        {"input_num", c->Int()},
        {"output_num", c->Int()},
        {"config", c->Json()}
    });

  cwlib->newTypeGen(
          "ub_type",
          ubparams,
          [](Context* c, Values genargs){
            uint width = genargs.at("width")->get<int>();
            uint input_num = genargs.at("input_num")->get<int>();
            uint output_num = genargs.at("output_num")->get<int>();
            Json config = genargs.at("config")->get<Json>();

            RecordParams recordparams = {
                {"flush", c->BitIn()},
                {"reset", c->BitIn()}
            };

            for (size_t i = 0; i < input_num; i ++) {
                recordparams.push_back({"datain_" + std::to_string(i),
                        c->BitIn()->Arr(width)});
                recordparams.push_back({"wen_" + std::to_string(i),
                        c->BitIn()});
            }
            for (size_t i = 0; i < output_num; i ++) {
                recordparams.push_back({"dataout_" + std::to_string(i),
                        c->Bit()->Arr(width)});
                recordparams.push_back({"valid_" + std::to_string(i),
                        c->Bit()});
                recordparams.push_back({"ren_" + std::to_string(i),
                        c->BitIn()});
            }
        return c->Record(recordparams);
    }

  );

  auto ub_gen = cwlib->newGeneratorDecl("ub", cwlib->getTypeGen("ub_type"), ubparams);
  ub_gen->addDefaultGenArgs({{"input_num", Const::make(c, 1)}});
  ub_gen->addDefaultGenArgs({{"output_num", Const::make(c, 1)}});

  return cwlib;
}

COREIR_GEN_EXTERNAL_API_FOR_LIBRARY(cwlib)

#endif

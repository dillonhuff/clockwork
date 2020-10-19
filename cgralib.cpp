#ifdef COREIR
#include "cgralib.h"
#include "coreir/libs/commonlib.h"
//#include "isl_utils.h"

COREIR_GEN_C_API_DEFINITION_FOR_LIBRARY(cgralib);

using CoreIR::Context, CoreIR::Namespace, CoreIR::RecordParams, CoreIR::Const, CoreIR::Values, CoreIR::Params, CoreIR::Generator, CoreIR::JsonType;
using namespace std;

CoreIR::Namespace* CoreIRLoadLibrary_cgralib(Context* c) {

  CoreIR::Namespace* cgralib = c->newNamespace("cgralib");


  //PE declaration
  CoreIR::Params PEGenParams = {{"op_kind",c->String()},{"width",c->Int()},{"numbitports",c->Int()},{"numdataports",c->Int()}};

  cgralib->newTypeGen("PEType",PEGenParams,[](Context* c, Values args) {
    uint width = args.at("width")->get<int>();
    uint numdataports = args.at("numdataports")->get<int>();
    uint numbitports = args.at("numbitports")->get<int>();
    return c->Record({
      {"data",c->Record({
        {"in",c->BitIn()->Arr(width)->Arr(numdataports)},
        {"out",c->Bit()->Arr(width)}
      })},
      {"bit",c->Record({
        {"in",c->BitIn()->Arr(numbitports)},
        {"out",c->Bit()}
      })}
    });
  });

  //Generates the mod params and the default mod args
  auto PEModParamFun = [](Context* c,Values genargs) -> std::pair<Params,Values> {
    Params p; //params
    Values d; //defaults
    string op_kind = genargs.at("op_kind")->get<string>();
    int numbitports = genargs.at("numbitports")->get<int>();
    int numdataports = genargs.at("numdataports")->get<int>();
    int width = genargs.at("width")->get<int>();
    if (op_kind == "alu" || op_kind == "combined") {
      p["alu_op"] = c->String();
      p["signed"] = c->Bool();
     for (int i=0; i<numdataports; ++i) {
        string mode = "data"+to_string(i)+"_mode";
        p[mode] = c->String();
        d[mode] = Const::make(c,"BYPASS");
        string value = "data"+to_string(i)+"_value";
        p[value] = c->BitVector(width);
        d[value] = Const::make(c,BitVector(width,0));
      }
    }
    if (op_kind == "bit" || op_kind == "combined") {
      p["flag_sel"] = c->String();
      p["lut_value"] = c->BitVector(1<<numbitports);
      d["lut_value"] = Const::make(c,BitVector(1<<numbitports,0));
      for (int i=0; i<numbitports; ++i) {
        string mode = "bit"+to_string(i)+"_mode";
        p[mode] = c->String();
        d[mode] = Const::make(c,"BYPASS");
        string value = "bit"+to_string(i)+"_value";
        p[value] = c->Bool();
        d[value] = Const::make(c,false);
      }
    }
    if (op_kind == "bit") {
      d["flag_sel"] = Const::make(c,"lut");
    }
    return {p,d};
  };

  Generator* PE = cgralib->newGeneratorDecl("PE",cgralib->getTypeGen("PEType"),PEGenParams);
  PE->addDefaultGenArgs({{"width",Const::make(c,16)},{"numdataports",Const::make(c,2)},{"numbitports",Const::make(c,3)}});
  PE->setModParamsGen(PEModParamFun);

  //Unary op declaration
  Params widthParams = {{"width",c->Int()}};
  cgralib->newTypeGen("unary",widthParams,[](Context* c, Values args) {
    uint width = args.at("width")->get<int>();
    return c->Record({
      {"in",c->BitIn()->Arr(width)},
      {"out",c->Bit()->Arr(width)},
    });
  });

  //IO Declaration
  Params modeParams = {{"mode",c->String()}};
  Generator* IO = cgralib->newGeneratorDecl("IO",cgralib->getTypeGen("unary"),widthParams);
  IO->setModParamsGen(modeParams);
  cgralib->newModuleDecl("BitIO",c->Record({{"in",c->BitIn()},{"out",c->Bit()}}),modeParams);

  //Mem declaration
  Params MemGenParams = {{"width",c->Int()},{"total_depth",c->Int()}};
  cgralib->newTypeGen("MemType",MemGenParams,[](Context* c, Values args) {
    uint width = args.at("width")->get<int>();
    return c->Record({
      {"addr", c->BitIn()->Arr(width)}, //both read and write addr
      {"wdata", c->BitIn()->Arr(width)},
      {"wen", c->BitIn()}, //upstream valid
      {"rdata", c->Bit()->Arr(width)},
      {"ren", c->BitIn()}, //Downstream ready
      {"almost_full", c->Bit()}, //Upstream ready
      {"almost_empty", c->Bit()}, //"downstream validish" Try not to use
      {"valid", c->Bit()}, //Downstream valid
      {"cg_en", c->BitIn()}, //Global stall
    });
  });
  auto MemModParamFun = [](Context* c,Values genargs) -> std::pair<Params,Values> {
    Params p; //params
    Values d; //defaults
    p["mode"] = c->String();

    p["depth"] = c->Int();
    d["depth"] = Const::make(c,1024);

    p["almost_count"] = c->Int(); //Will do almost full and empty
    d["almost_count"] = Const::make(c,0);

    p["tile_en"] = c->Bool(); //Always put 1
    d["tile_en"] = Const::make(c,true); //Always put 1

    p["chain_enable"] = c->Bool(); //tie to 0 inially.
    d["chain_enable"] = Const::make(c,false);

    p["init"] = JsonType::make(c);
    Json jdata;
    jdata["init"][0] = 0;
    d["init"] = Const::make(c,jdata);

    p["rate_matched"] = c->Bool();
    d["rate_matched"] = Const::make(c, false);
    p["stencil_width"] = c->Int();
    d["stencil_width"] = Const::make(c, 0);
    p["iter_cnt"] = c->Int();
    d["iter_cnt"] = Const::make(c, 0);
    p["dimensionality"] = c->Int();
    d["dimensionality"] = Const::make(c, 0);
    p["stride_0"] = c->Int();
    d["stride_0"] = Const::make(c, 0);
    p["range_0"] = c->Int();
    d["range_0"] = Const::make(c, 0);
    p["stride_1"] = c->Int();
    d["stride_1"] = Const::make(c, 0);
    p["range_1"] = c->Int();
    d["range_1"] = Const::make(c, 0);
    p["stride_2"] = c->Int();
    d["stride_2"] = Const::make(c, 0);
    p["range_2"] = c->Int();
    d["range_2"] = Const::make(c, 0);
    p["stride_3"] = c->Int();
    d["stride_3"] = Const::make(c, 0);
    p["range_3"] = c->Int();
    d["range_3"] = Const::make(c, 0);
    p["stride_4"] = c->Int();
    d["stride_4"] = Const::make(c, 0);
    p["range_4"] = c->Int();
    d["range_4"] = Const::make(c, 0);
    p["stride_5"] = c->Int();
    d["stride_5"] = Const::make(c, 0);
    p["range_5"] = c->Int();
    d["range_5"] = Const::make(c, 0);
    p["chain_en"] = c->Bool();
    d["chain_en"] = Const::make(c, false);
    p["chain_idx"] = c->Int();
    d["chain_idx"] = Const::make(c, 0);
    p["starting_addr"] = c->Int();
    d["starting_addr"] = Const::make(c, 0);

    return {p,d};
  };

  Generator* Mem = cgralib->newGeneratorDecl("Mem_jade",cgralib->getTypeGen("MemType"),MemGenParams);
  Mem->addDefaultGenArgs({{"width",Const::make(c,16)},{"total_depth",Const::make(c,1024)}});
  Mem->setModParamsGen(MemModParamFun);

  // cgralib.Mem
  Params cgralibmemparams = Params({
        {"width", c->Int()},
        {"num_inputs", c->Int()},
        {"num_outputs", c->Int()},
        //{"config", c->Json()},
        {"has_valid", c->Bool()},
        {"has_stencil_valid", c->Bool()},
        {"has_flush", c->Bool()},
        {"has_reset", c->Bool()}
    });

  cgralib->newTypeGen(
          "cgralib_mem_type",
          cgralibmemparams,
          [](Context* c, Values genargs){
            uint width = genargs.at("width")->get<int>();
            uint num_input = genargs.at("num_inputs")->get<int>();
            uint num_output = genargs.at("num_outputs")->get<int>();
            //Json config = genargs.at("config")->get<Json>();

            RecordParams recordparams = {
                {"rst_n", c->BitIn()},
                {"clk_en", c->BitIn()},
                {"clk", c->Named("coreir.clkIn")}
            };

            for (size_t i = 0; i < num_input; i ++) {
                recordparams.push_back({"data_in_" + std::to_string(i),
                        c->BitIn()->Arr(width)});
                //recordparams.push_back({"wen_" + std::to_string(i),
                //        c->BitIn()});
            }
            for (size_t i = 0; i < num_output; i ++) {
                recordparams.push_back({"data_out_" + std::to_string(i),
                        c->Bit()->Arr(width)});
                //recordparams.push_back({"valid_" + std::to_string(i),
                //        c->Bit()});
                //recordparams.push_back({"ren_" + std::to_string(i),
                //        c->BitIn()});
            }

            bool has_valid = genargs.at("has_valid")->get<bool>();
            bool has_stencil_valid = genargs.at("has_stencil_valid")->get<bool>();
            bool has_flush = genargs.at("has_flush")->get<bool>();
            bool has_reset = genargs.at("has_reset")->get<bool>();

            if (has_valid) {
              recordparams.push_back({"valid", c->Bit()});
            }
            if (has_stencil_valid) {
              recordparams.push_back({"stencil_valid", c->Bit()});
            }
            if (has_flush) {
              recordparams.push_back({"flush", c->BitIn()});
            }
            if (has_reset) {
              recordparams.push_back({"reset", c->BitIn()});
            }

        return c->Record(recordparams);
    }

  );

  auto cgralib_mem_gen = cgralib->newGeneratorDecl("Mem", cgralib->getTypeGen("cgralib_mem_type"), cgralibmemparams);
  cgralib_mem_gen->addDefaultGenArgs({{"num_inputs", Const::make(c, 1)}});
  cgralib_mem_gen->addDefaultGenArgs({{"num_outputs", Const::make(c, 1)}});
  cgralib_mem_gen->addDefaultGenArgs({{"has_valid", Const::make(c, false)}});
  cgralib_mem_gen->addDefaultGenArgs({{"has_stencil_valid", Const::make(c, false)}});
  cgralib_mem_gen->addDefaultGenArgs({{"has_flush", Const::make(c, false)}});
  cgralib_mem_gen->addDefaultGenArgs({{"has_reset", Const::make(c, false)}});


  auto CGRALibMemModParamFun = [](Context* c,Values genargs) -> std::pair<Params,Values> {
    Params p; //params
    Values d; //defaults
    p["mode"] = c->String();

    p["config"] = CoreIR::JsonType::make(c);

    //p["depth"] = c->Int();
    //d["depth"] = Const::make(c,1024);

    return {p,d};
  };
  cgralib_mem_gen->setModParamsGen(CGRALibMemModParamFun);

  return cgralib;
}


COREIR_GEN_EXTERNAL_API_FOR_LIBRARY(cgralib)

#endif

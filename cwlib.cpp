#ifdef COREIR
#include "cwlib.h"
#include "coreir/libs/commonlib.h"
#include "isl_utils.h"

COREIR_GEN_C_API_DEFINITION_FOR_LIBRARY(cwlib);

using CoreIR::Context, CoreIR::Namespace, CoreIR::RecordParams, CoreIR::Const, CoreIR::Values, CoreIR::Params;
using namespace std;

Namespace* CoreIRLoadLibrary_cwlib(Context* c) {
  Namespace* cwlib = c->newNamespace("cwlib");

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
                {"rst_n", c->BitIn()},
                {"clk_en", c->BitIn()},
                {"clk", c->Named("coreir.clkIn")}
            };

            for (size_t i = 0; i < input_num; i ++) {
                recordparams.push_back({"data_in_" + std::to_string(i),
                        c->BitIn()->Arr(width)});
                recordparams.push_back({"chain_data_in_" + std::to_string(i),
                        c->BitIn()->Arr(width)});
                //recordparams.push_back({"wen_" + std::to_string(i),
                //        c->BitIn()});
            }
            for (size_t i = 0; i < output_num; i ++) {
                recordparams.push_back({"data_out_" + std::to_string(i),
                        c->Bit()->Arr(width)});
                //recordparams.push_back({"valid_" + std::to_string(i),
                //        c->Bit()});
                //recordparams.push_back({"ren_" + std::to_string(i),
                //        c->BitIn()});
            }
        return c->Record(recordparams);
    }

  );

  auto ub_gen = cwlib->newGeneratorDecl("ub", cwlib->getTypeGen("ub_type"), ubparams);
  ub_gen->addDefaultGenArgs({{"input_num", Const::make(c, 1)}});
  ub_gen->addDefaultGenArgs({{"output_num", Const::make(c, 1)}});


  // cwlib.Mem
  Params cwlibmemparams = Params({
        {"width", c->Int()},
        {"num_input", c->Int()},
        {"num_output", c->Int()},
        {"config", c->Json()},
        {"has_valid", c->Bool()},
        {"has_stencil_valid", c->Bool()},
        {"has_flush", c->Bool()},
        {"has_reset", c->Bool()}
    });

  cwlib->newTypeGen(
          "cwlib_mem_type",
          cwlibmemparams,
          [](Context* c, Values genargs){
            uint width = genargs.at("width")->get<int>();
            uint num_input = genargs.at("num_input")->get<int>();
            uint num_output = genargs.at("num_output")->get<int>();
            Json config = genargs.at("config")->get<Json>();

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

  auto cwlib_mem_gen = cwlib->newGeneratorDecl("Mem", cwlib->getTypeGen("cwlib_mem_type"), cwlibmemparams);
  cwlib_mem_gen->addDefaultGenArgs({{"num_input", Const::make(c, 1)}});
  cwlib_mem_gen->addDefaultGenArgs({{"num_output", Const::make(c, 1)}});
  cwlib_mem_gen->addDefaultGenArgs({{"has_valid", Const::make(c, false)}});
  cwlib_mem_gen->addDefaultGenArgs({{"has_stencil_valid", Const::make(c, false)}});
  cwlib_mem_gen->addDefaultGenArgs({{"has_flush", Const::make(c, false)}});
  cwlib_mem_gen->addDefaultGenArgs({{"has_reset", Const::make(c, false)}});


  auto CWLibMemModParamFun = [](Context* c,Values genargs) -> std::pair<Params,Values> {
    Params p; //params
    Values d; //defaults
    p["mode"] = c->String();

    //p["config"] = CoreIR::JsonType::make(c);

    //p["depth"] = c->Int();
    //d["depth"] = Const::make(c,1024);

    return {p,d};
  };
  cwlib_mem_gen->setModParamsGen(CWLibMemModParamFun);

  return cwlib;
}


/*
MemConnSch create_stencil_valid(int dimensionality, vector<int> cycle_starting_addr,
                                vector<int> extent, vector<int> cycle_stride) {
  unordered_map<string, vector<int>> vals;
  vals["cycle_starting_addr"] = cycle_starting_addr;
  vals["extent"] = extent;
  vals["cycle_stride"] = cycle_stride;
  return MemConnSch({dimensionality, vals, "", "", ""});
}

MemConnSch create_in2agg(int dimensionality, vector<int> cycle_starting_addr,
                         vector<int> extent, vector<int> cycle_stride,
                         string write, vector<int> write_data_starting_addr, vector<int> write_data_stride) {
  unordered_map<string, vector<int>> vals;
  vals["cycle_starting_addr"] = cycle_starting_addr;
  vals["extent"] = extent;
  vals["cycle_stride"] = cycle_stride;
  vals["write_data_starting_addr"] = write_data_starting_addr;
  vals["write_data_stride"] = write_data_stride;
  return MemConnSch({dimensionality, vals, "", "", write});
}

MemConnSch create_agg2sram(int dimensionality, vector<int> cycle_starting_addr,
                           vector<int> extent, vector<int> cycle_stride,
                           string read, vector<int> read_data_starting_addr, vector<int> read_data_stride,
                           string write, vector<int> write_data_starting_addr, vector<int> write_data_stride) {
  unordered_map<string, vector<int>> vals;
  vals["cycle_starting_addr"] = cycle_starting_addr;
  vals["extent"] = extent;
  vals["cycle_stride"] = cycle_stride;
  vals["read_data_starting_addr"] = read_data_starting_addr;
  vals["read_data_stride"] = read_data_stride;
  vals["write_data_starting_addr"] = write_data_starting_addr;
  vals["write_data_stride"] = write_data_stride;
  return MemConnSch({dimensionality, vals, read, "", write});
}

MemConnSch create_sram2tb(int dimensionality, vector<int> cycle_starting_addr,
                          vector<int> extent, vector<int> cycle_stride,
                          string read, vector<int> read_data_starting_addr, vector<int> read_data_stride,
                          string mux_write, vector<int> mux_write_data_starting_addr, vector<int> mux_write_data_stride,
                          string write, vector<int> write_data_starting_addr, vector<int> write_data_stride) {
  unordered_map<string, vector<int>> vals;
  vals["cycle_starting_addr"] = cycle_starting_addr;
  vals["extent"] = extent;
  vals["cycle_stride"] = cycle_stride;
  vals["read_data_starting_addr"] = read_data_starting_addr;
  vals["read_data_stride"] = read_data_stride;
  vals["mux_write_data_starting_addr"] = mux_write_data_starting_addr;
  vals["mux_write_data_stride"] = mux_write_data_stride;
  vals["write_data_starting_addr"] = write_data_starting_addr;
  vals["write_data_stride"] = write_data_stride;
  return MemConnSch({dimensionality, vals, read, mux_write, write});
}

MemConnSch create_tb2out(int dimensionality, vector<int> cycle_starting_addr,
                         vector<int> extent, vector<int> cycle_stride,
                         string read, vector<int> read_data_starting_addr, vector<int> read_data_stride) {
  unordered_map<string, vector<int>> vals;
  vals["cycle_starting_addr"] = cycle_starting_addr;
  vals["extent"] = extent;
  vals["cycle_stride"] = cycle_stride;
  vals["read_data_starting_addr"] = read_data_starting_addr;
  vals["read_data_stride"] = read_data_stride;
  return MemConnSch({dimensionality, vals, read, "", ""});
}
*/


COREIR_GEN_EXTERNAL_API_FOR_LIBRARY(cwlib)

#endif

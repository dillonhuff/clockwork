#include "coreir_backend.h"

#ifdef COREIR

#include "coreir/passes/analysis/coreirjson.h"

using CoreIR::Wireable;
using CoreIR::CoreIRType;
using CoreIR::ArrayType;
using CoreIR::Context;
using CoreIR::Const;
using CoreIR::Params;
using CoreIR::ModuleDef;
using CoreIR::Generator;
using CoreIR::TypeGen;
using CoreIR::Type;
using CoreIR::Values;

using CoreIR::SelectPath;
using CoreIR::join;
using CoreIR::BitType;
using CoreIR::BitInType;
using CoreIR::isa;
using CoreIR::dyn_cast;
using CoreIR::ArrayType;
using CoreIR::Type;
using CoreIR::Params;
using CoreIR::Wireable;
using CoreIR::JsonType;
using CoreIR::Namespace;
using CoreIR::Instance;
using CoreIR::InstanceGraphPass;
using CoreIR::Const;
using CoreIR::Context;
using CoreIR::Values;
using CoreIR::Generator;
using CoreIR::ModuleDef;
using CoreIR::Module;

//Assumes common has been loaded
void load_mem_ext(Context* c) {
  //Specialized extensions
  Generator* lbmem = c->getGenerator("memory.rowbuffer");
  lbmem->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    uint depth = args.at("depth")->get<int>();
    ASSERT(width==16,"NYI Non 16 bit width");
    Values rbGenargs({{"width",Const::make(c,width)},{"total_depth",Const::make(c,1024)}});
    nlohmann::json jdata;
    def->addInstance("cgramem","cgralib.Mem",
      rbGenargs,
      {{"mode",Const::make(c,"linebuffer")},{"depth",Const::make(c,depth)}, {"init", CoreIR::Const::make(c, jdata)}});
    def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.wdata","cgramem.wdata");
    def->connect("self.wen","cgramem.wen");
    def->connect("self.rdata","cgramem.rdata");
    def->connect("self.valid","cgramem.valid");
    def->connect("c0.out","cgramem.cg_en");
    def->connect("c1.out","cgramem.ren");

  });

  Generator* ubmem = c->getGenerator("lakelib.unified_buffer");
  ubmem->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    uint depth = args.at("depth")->get<int>();
    bool rate_matched = args.at("rate_matched")->get<bool>();
    uint stencil_width = args.at("stencil_width")->get<int>();
    uint iter_cnt = args.at("iter_cnt")->get<int>();
    uint dimensionality = args.at("dimensionality")->get<int>();
    uint stride_0 = args.at("stride_0")->get<int>();
    uint range_0 = args.at("range_0")->get<int>();
    uint stride_1 = args.at("stride_1")->get<int>();
    uint range_1 = args.at("range_1")->get<int>();
    uint stride_2 = args.at("stride_2")->get<int>();
    uint range_2 = args.at("range_2")->get<int>();
    uint stride_3 = args.at("stride_3")->get<int>();
    uint range_3 = args.at("range_3")->get<int>();
    uint stride_4 = args.at("stride_4")->get<int>();
    uint range_4 = args.at("range_4")->get<int>();
    uint stride_5 = args.at("stride_5")->get<int>();
    uint range_5 = args.at("range_5")->get<int>();
    bool chain_en = args.at("chain_en")->get<bool>();
    uint chain_idx = args.at("chain_idx")->get<int>();
    uint starting_addr = (args.at("output_starting_addrs")->get<Json>())["output_start"][0];
    ASSERT(width==16,"NYI Non 16 bit width");
    Values rbGenargs({{"width",Const::make(c,width)},{"total_depth",Const::make(c,1024)}});
    def->addInstance("cgramem","cgralib.Mem",
      rbGenargs,
      {{"mode",Const::make(c,"unified_buffer")},{"depth",Const::make(c,depth)},
       {"init", CoreIR::Const::make(c, args.at("init")->get<Json>())},
       {"rate_matched", Const::make(c, rate_matched)}, {"stencil_width", Const::make(c, stencil_width)},
       {"iter_cnt", Const::make(c, iter_cnt)}, {"dimensionality", Const::make(c, dimensionality)},
       {"stride_0", Const::make(c, stride_0)}, {"range_0", Const::make(c, range_0)},
       {"stride_1", Const::make(c, stride_1)}, {"range_1", Const::make(c, range_1)},
       {"stride_2", Const::make(c, stride_2)}, {"range_2", Const::make(c, range_2)},
       {"stride_3", Const::make(c, stride_3)}, {"range_3", Const::make(c, range_3)},
       {"stride_4", Const::make(c, stride_4)}, {"range_4", Const::make(c, range_4)},
       {"stride_5", Const::make(c, stride_5)}, {"range_5", Const::make(c, range_5)},
       {"chain_en", Const::make(c, chain_en)}, {"chain_idx", Const::make(c, chain_idx)},
       {"starting_addr", Const::make(c, starting_addr)}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.datain0","cgramem.wdata");
    def->connect("self.wen","cgramem.wen");
    def->connect("self.dataout0","cgramem.rdata");
    def->connect("self.valid","cgramem.valid");
    def->connect("c0.out","cgramem.cg_en");
    def->connect("self.ren","cgramem.ren");

  });

  Generator* ram = c->getGenerator("memory.ram2");
  ram->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    Values rbGenargs({{"width",Const::make(c,width)},{"total_depth",Const::make(c,1024)}});
    def->addInstance("cgramem","cgralib.Mem",
      rbGenargs,
      {{"mode",Const::make(c,"sram")}});
    def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.rdata","cgramem.rdata");
    def->connect("self.ren","cgramem.ren");
    def->connect("self.raddr","cgramem.addr");
    def->connect("self.wdata","cgramem.wdata");
    def->connect("self.wen","cgramem.wen");
  });

  Generator* rom = c->getGenerator("memory.rom2");
  rom->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    Values rbGenargs({{"width",Const::make(c,width)},{"total_depth",Const::make(c,1024)}});
    def->addInstance("cgramem","cgralib.Mem",
      rbGenargs,
      {{"mode",Const::make(c,"sram")}, {"init", def->getModule()->getArg("init")}});
    def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.rdata","cgramem.rdata");
    def->connect("self.ren","cgramem.ren");
    def->connect("self.raddr", "cgramem.addr");
  });
}

void load_commonlib_ext(Context* c) {
  Generator* smax = c->getGenerator("commonlib.smax");
  smax->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    ASSERT(width==16,"NYI non 16");
    Values PEArgs({
      {"alu_op",Const::make(c,"max")},
      {"flag_sel",Const::make(c,"pe")},
      {"signed",Const::make(c,true)}
    });
    def->addInstance("cgramax","cgralib.PE",{{"op_kind",Const::make(c,"combined")}},PEArgs);
    def->connect("self.in0","cgramax.data.in.0");
    def->connect("self.in1","cgramax.data.in.1");
    def->connect("self.out","cgramax.data.out");

  });
  
  Generator* umax = c->getGenerator("commonlib.umax");
  umax->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    ASSERT(width==16,"NYI non 16");
    Values PEArgs({
      {"alu_op",Const::make(c,"umax")},
      {"flag_sel",Const::make(c,"pe")},
      {"signed",Const::make(c,false)}
    });
    def->addInstance("cgramax","cgralib.PE",{{"op_kind",Const::make(c,"combined")}},PEArgs);
    def->connect("self.in0","cgramax.data.in.0");
    def->connect("self.in1","cgramax.data.in.1");
    def->connect("self.out","cgramax.data.out");

  });

  Generator* abs = c->getGenerator("commonlib.abs");
  abs->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    ASSERT(width==16,"NYI non 16");
    Values PEArgs({
      {"alu_op",Const::make(c,"abs")},
      {"signed",Const::make(c,false)}
    });
    def->addInstance("abs","cgralib.PE",{{"op_kind",Const::make(c,"alu")}},PEArgs);
    def->connect("self.in","abs.data.in.0");
    def->connect("self.out","abs.data.out");

  });

}


void load_float(Context* c) {
  Generator* fadd = c->getGenerator("float.add");
  fadd->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    Values PEArgs({
      {"alu_op",Const::make(c,"fadd")},
      {"signed",Const::make(c,false)}
    });
    def->addInstance("binop","cgralib.PE",{{"op_kind",Const::make(c,"alu")}}, PEArgs);
    def->connect("self.in0","binop.data.in.0");
    def->connect("self.in1","binop.data.in.1");
    def->connect("self.out","binop.data.out");

  });

  Generator* fmul = c->getGenerator("float.mul");
  fmul->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    Values PEArgs({
      {"alu_op",Const::make(c,"fmul")},
      {"signed",Const::make(c,false)}
    });
    def->addInstance("binop","cgralib.PE",{{"op_kind",Const::make(c,"alu")}},PEArgs);
    def->connect("self.in0","binop.data.in.0");
    def->connect("self.in1","binop.data.in.1");
    def->connect("self.out","binop.data.out");

  });

}

void load_opsubstitution(Context* c) {
  //coreir.neg should be  0 - in
  c->getGenerator("coreir.neg")->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    def->addInstance("sub","coreir.sub");
    def->addInstance("c0","coreir.const",Values(),{{"value",Const::make(c,16,0)}});
    def->connect("self.in","sub.in1");
    def->connect("c0.out","sub.in0");
    def->connect("sub.out","self.out");
  });

  c->getGenerator("coreir.not")->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    def->addInstance("xor","coreir.xor");
    def->addInstance("cffff","coreir.const",Values(),{{"value",Const::make(c,16,0xffff)}});
    def->connect("self.in","xor.in1");
    def->connect("cffff.out","xor.in0");
    def->connect("xor.out","self.out");
  });

  //coreir operators that have 1 bit width should be swapped with their corebit counterparts
  for (string op : {"and", "or", "xor"}) {

    Module* m = c->getGenerator("coreir." + op)->getModule({{"width",Const::make(c,1)}});
    ModuleDef* def = m->newModuleDef();
    def->addInstance("inst", "corebit." + op);
    def->connect("self.in0.0","inst.in0");
    def->connect("self.in1.0","inst.in1");
    def->connect("self.out.0","inst.out");
    m->setDef(def);
  }

}

void load_corebit2lut(Context* c) {
#define B0 170
#define B1 (12*17)
#define B2 (15*16)
 
  {
    //wire
    Module* mod = c->getModule("corebit.wire");
    ModuleDef* def = mod->newModuleDef();
    def->connect("self.in","self.out");
    mod->setDef(def);
  }

  //{
    //// bitconst -> lut
    //Module* mod = c->getModule("corebit.const");
    //ModuleDef* def = mod->newModuleDef();

    //bool val = mod->getModArgs().at("value")->get<bool>();
    //assert(val == 0 || val == 1);

    //int lutval = 0;
    //if (val) {
      //lutval = ~lutval;
    //}
    //def->addInstance("lut","commonlib.lutN",{{"N", Const::make(c, 3)}},{{"init",Const::make(c,8,lutval)}});
    //def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    //def->connect("self.in","lut.in.0");
    //def->connect("c0.out","lut.in.1");
    //def->connect("c0.out","lut.in.2");
    //def->connect("lut.out","self.out");
    //mod->setDef(def);
  //}
  {
    //unary
    Module* mod = c->getModule("corebit.not");
    ModuleDef* def = mod->newModuleDef();
    //Add the Lut
    //def->addInstance("lut","commonlib.lutN",Values(),{{"init",Const::make(c,8,~B0)}});
    def->addInstance("lut","commonlib.lutN",{{"N", Const::make(c, 3)}},{{"init",Const::make(c,8,~B0)}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.in","lut.in.0");
    def->connect("c0.out","lut.in.1");
    def->connect("c0.out","lut.in.2");
    def->connect("lut.out","self.out");
    mod->setDef(def);
  }
  vector<std::pair<string,uint>> binops({{"and",B0&B1},{"or",B0|B1},{"xor",B0^B1}});
  for (auto op : binops) {
    CoreIR::Value* lutval = Const::make(c,8,op.second);
    Module* mod = c->getModule("corebit."+op.first);
    ModuleDef* def = mod->newModuleDef();
    //Add the Lut
    //def->addInstance("lut","commonlib.lutN",Values(),{{"init",lutval}});
    def->addInstance("lut","commonlib.lutN",{{"N", Const::make(c, 3)}},{{"init",lutval}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.in0","lut.in.0");
    def->connect("self.in1","lut.in.1");
    def->connect("c0.out","lut.in.2");
    def->connect("lut.out","self.out");
    mod->setDef(def);
  }
  {
    //mux
    Module* mod = c->getModule("corebit.mux");
    ModuleDef* def = mod->newModuleDef();
    //Add the Lut
    //def->addInstance("lut","commonlib.lutN",Values(),{{"init",Const::make(c,8,(B2&B1)|((~B2)&B0))}});
    def->addInstance("lut","commonlib.lutN",{{"N", Const::make(c, 3)}},{{"init",Const::make(c,8,(B2&B1)|((~B2)&B0))}});
    def->connect("self.in0","lut.in.0");
    def->connect("self.in1","lut.in.1");
    def->connect("self.sel","lut.in.2");
    def->connect("lut.out","self.out");
    mod->setDef(def);
  }

#undef B0
#undef B1
#undef B2
}

void load_cgramapping(Context* c) {
  //commonlib.lut def
  {
    Module* mod = c->getGenerator("commonlib.lutN")->getModule({{"N",Const::make(c,3)}});
    ModuleDef* def = mod->newModuleDef();
    Values bitPEArgs({{"lut_value",mod->getArg("init")}});
    def->addInstance(+"lut","cgralib.PE",{{"op_kind",Const::make(c,"bit")}},bitPEArgs);
    
    def->connect("self.in","lut.bit.in");
    def->connect("lut.bit.out","self.out");
    mod->setDef(def);
  }
  /*{
    //TODO not specified in the PE spec
    //unary op (width)->width
    std::vector<std::tuple<string,string,uint>> unops = {
      //std::make_tuple("not","inv",0),
    };
    for (auto op : unops) {
      string opstr = std::get<0>(op);
      string alu_op = std::get<1>(op);
      uint is_signed = std::get<2>(op);
      Module* mod = c->getGenerator("coreir."+opstr)->getModule({{"width",Const::make(c,16)}});
      ModuleDef* def = mod->newModuleDef();
      Values dataPEArgs({
        {"alu_op",Const::make(c,alu_op)},
        {"signed",Const::make(c,(bool) is_signed)}});
      def->addInstance("binop","cgralib.PE",{{"op_kind",Const::make(c,"alu")}},dataPEArgs);
    
      def->connect("self.in","binop.data.in.0");
      def->connect("self.out","binop.data.out");
      mod->setDef(def);
    }
    }*/
  {
    //binary op (width,width)->width
    std::vector<std::tuple<string,string,uint>> binops({
      std::make_tuple("add","add",0),
      std::make_tuple("sub","sub",0),
      std::make_tuple("mul","mult_0",0),
      std::make_tuple("or","or",0),
      std::make_tuple("and","and",0),
      std::make_tuple("xor","xor",0),
      std::make_tuple("ashr","rshft",1),
      std::make_tuple("lshr","rshft",0),
      std::make_tuple("shl","lshft",0),
    });
    for (auto op : binops) {
      string opstr = std::get<0>(op);
      string alu_op = std::get<1>(op);
      uint is_signed = std::get<2>(op);
      Module* mod = c->getGenerator("coreir."+opstr)->getModule({{"width",Const::make(c,16)}});
      ModuleDef* def = mod->newModuleDef();
      Values dataPEArgs({
        {"alu_op",Const::make(c,alu_op)},
        {"signed",Const::make(c,(bool) is_signed)}});
      def->addInstance("binop","cgralib.PE",{{"op_kind",Const::make(c,"alu")}},dataPEArgs);
    
      def->connect("self.in0","binop.data.in.0");
      def->connect("self.in1","binop.data.in.1");
      def->connect("self.out","binop.data.out");
      mod->setDef(def);
    }
  }
  //Mux
  {
    Module* mod = c->getGenerator("coreir.mux")->getModule({{"width",Const::make(c,16)}});
    ModuleDef* def = mod->newModuleDef();
    Values PEArgs({
      {"alu_op",Const::make(c,"sel")},
      {"flag_sel",Const::make(c,"pe")},
      {"signed",Const::make(c,false)}
    });
    def->addInstance("mux","cgralib.PE",{{"op_kind",Const::make(c,"combined")}},PEArgs);
    def->connect("self.in0","mux.data.in.1");
    def->connect("self.in1","mux.data.in.0");
    def->connect("self.sel","mux.bit.in.0");
    def->connect("mux.data.out","self.out");
    mod->setDef(def);
  }
  {
    //comp op (width,width)->bit
    std::vector<std::tuple<string,string,string,uint>> compops({
      std::make_tuple("eq","eq","eq",0),
      std::make_tuple("neq","neq","ne",0),
      std::make_tuple("sge","ge","pe",1),
      std::make_tuple("uge","uge","pe",0),
      std::make_tuple("sle","le","pe",1),
      std::make_tuple("ule","ule","pe",0),
      std::make_tuple("sgt","gt","pe",1),
      std::make_tuple("ugt","ugt","pe",0),
      std::make_tuple("slt","lt","pe",1),
      std::make_tuple("ult","ult","pe",0),
    });
    for (auto op : compops) {
      string opstr = std::get<0>(op);
      string alu_op = std::get<1>(op);
      string flag_sel = std::get<2>(op);
      uint is_signed = std::get<3>(op);
      Module* mod = c->getGenerator("coreir."+opstr)->getModule({{"width",Const::make(c,16)}});
      ModuleDef* def = mod->newModuleDef();
      Values PEArgs({
        {"alu_op",Const::make(c,alu_op)},
        {"flag_sel",Const::make(c,flag_sel)},
        {"signed",Const::make(c,(bool) is_signed)}
      });
      def->addInstance("compop","cgralib.PE",{{"op_kind",Const::make(c,"combined")}},PEArgs);
    
      def->connect("self.in0","compop.data.in.0");
      def->connect("self.in1","compop.data.in.1");
      def->connect("self.out","compop.bit.out");
      mod->setDef(def);
    }
  }
  
  //term
  {
    Module* mod = c->getGenerator("coreir.term")->getModule({{"width",Const::make(c,16)}});
    ModuleDef* def = mod->newModuleDef();
    mod->setDef(def); 
  }

  //bitterm
  {
    Module* mod = c->getModule("corebit.term");
    ModuleDef* def = mod->newModuleDef();
    mod->setDef(def);
  }


}

void LoadDefinition_cgralib(Context* c) {

  //load_mem_ext(c);
  load_commonlib_ext(c);
  load_opsubstitution(c);
  load_corebit2lut(c);
  load_cgramapping(c);
  //lad_float(c);
}

std::string exe_start_name(const std::string& n) {
  return n + "_exe_start";
}

std::string exe_start_control_vars_name(const std::string& n) {
  return n + "_exe_start_control_vars";
}

std::string read_start_control_vars_name(const std::string& n) {
  return n + "_read_start_control_vars";
}

std::string write_start_control_vars_name(const std::string& n) {
  return n + "_write_start_control_vars";
}

std::string read_start_name(const std::string& n) {
  return n + "_read_start";
}

std::string write_start_name(const std::string& n) {
  return n + "_write_start";
}
std::string cu_name(const std::string& n) {
  return "cu_" + n;
}

std::string pg(const std::string& buf, const std::string& bundle) {
  return buf + "_" + bundle;
}

std::string pg(const pair<string, string>& b) {
  return pg(b.first, b.second);
}

  CoreIR::Wireable* wire(CoreIR::ModuleDef* bdef,
      const int width,
      const std::string& name,
      CoreIR::Wireable* w) {
    auto c = bdef->getContext();
    auto r = bdef->addInstance(
        name,
        "coreir.wire", {{"width", COREMK(c, width)}});

    bdef->connect(r->sel("in"), w);
    return r->sel("out");
  }
  CoreIR::Wireable* wirebit(CoreIR::ModuleDef* bdef,
      const std::string& name,
      CoreIR::Wireable* w) {
    auto c = bdef->getContext();
    auto r = bdef->addInstance(
        name,
        "corebit.wire");
    bdef->connect(r->sel("in"), w);
    return r->sel("out");
  }
CoreIR::Wireable* andVals(CoreIR::ModuleDef* def, CoreIR::Wireable* a, CoreIR::Wireable* b) {
  auto ad = def->addInstance("and_all_" + def->getContext()->getUnique(), "corebit.and");
  def->connect(ad->sel("in0"), a);
  def->connect(ad->sel("in1"), b);

  return ad->sel("out");
}

CoreIR::Wireable* orVals(CoreIR::ModuleDef* def, CoreIR::Wireable* a, CoreIR::Wireable* b) {
  auto context = def->getContext();
  auto ad = def->addInstance("or_all_" + def->getContext()->getUnique(), "corebit.or");
  def->connect(ad->sel("in0"), a);
  def->connect(ad->sel("in1"), b);

  return ad->sel("out");
}

CoreIR::Wireable* addVals(CoreIR::ModuleDef* def, CoreIR::Wireable* a, CoreIR::Wireable* b) {
  auto context = def->getContext();
  auto ad = def->addInstance("add_all_" + def->getContext()->getUnique(), "coreir.add", {{"width", COREMK(context, 16)}});
  def->connect(ad->sel("in0"), a);
  def->connect(ad->sel("in1"), b);

  return ad->sel("out");
}

CoreIR::Wireable* orList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals) {
  assert(vals.size() > 0);
  auto context = def->getContext();
  CoreIR::Wireable* val = nullptr;

  if (vals.size() == 1) {
    return vals[0];
  }

  val = vals[0];
  for (int i = 1; i < ((int) vals.size()); i++) {
    val = orVals(def, val, vals[i]);
  }
  return val;
}

CoreIR::Wireable* mkConst(CoreIR::ModuleDef* def, const int width, const int val) {
  auto context = def->getContext();
  auto c = def->getContext();
  auto one = def->addInstance(context->getUnique(),
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, val))}});
  return one->sel("out");
}


CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals) {
  if (vals.size() == 0) {
    return mkConst(def, 16, 0);
  }
  assert(vals.size() > 0);
  auto context = def->getContext();
  CoreIR::Wireable* val = nullptr;

  if (vals.size() == 1) {
    return vals[0];
  }

  val = vals[0];
  for (int i = 1; i < ((int) vals.size()); i++) {
    val = addVals(def, val, vals[i]);
  }
  return val;
}

CoreIR::Wireable* andList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals) {
  CoreIR::Wireable* val = nullptr;
  if (vals.size() == 0) {
    return def->addInstance("and_all_" + def->getContext()->getUnique(), "corebit.const", {{"value", COREMK(def->getContext(), true)}})->sel("out");
  }

  if (vals.size() == 1) {
    return vals[0];
  }

  val = vals[0];
  for (int i = 1; i < ((int) vals.size()); i++) {
    val = andVals(def, val, vals[i]);
  }
  return val;
}

bool connected(CoreIR::Wireable* w) {
  return w->getConnectedWireables().size() > 0;
}

void connect_signal(const std::string& signal, CoreIR::Module* m) {
  auto def = m->getDef();
  for (auto inst : def->getInstances()) {
    for (auto f : m->getType()->getFields()) {
      if (f == signal && !connected(inst.second->sel(f))) {
        cout << inst.first << " has reset " << endl;
        def->connect(def->sel("self")->sel(f), inst.second->sel(f));
      }
    }
  }
}

void generate_coreir_compute_unit(bool found_compute, CoreIR::ModuleDef* def, op* op, prog& prg, map<string, UBuffer>& buffers) {
  auto context = def->getContext();
  auto ns = context->getNamespace("global");

  cout << "Generating compute unit for " << op->name << endl;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};
  for (auto var : op->index_variables_needed_by_compute) {
    ub_field.push_back({var, context->BitIn()->Arr(16)});
  }
  for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
    string buf_name = bundle.first;
    string bundle_name = bundle.second;
    auto buf = map_find(buf_name, buffers);
    int pixel_width = buf.port_widths;
    int pix_per_burst =
      buf.lanes_in_bundle(bundle_name);

    assert(buf.is_output_bundle(bundle.second));
    ub_field.push_back(make_pair(buf_name + "_" + bundle_name, context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
  }

  for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
    string buf_name = bundle.first;
    string bundle_name = bundle.second;
    auto buf = map_find(buf_name, buffers);
    int pixel_width = buf.port_widths;
    int pix_per_burst =
      buf.lanes_in_bundle(bundle_name);

    assert(buf.is_input_bundle(bundle.second));
    ub_field.push_back(make_pair(buf_name + "_" + bundle_name, context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto compute_unit =
    ns->newModuleDecl(cu_name(op->name), utp);

  {
    auto def = compute_unit->newModuleDef();
    if (found_compute) {
      cout << "Found compute file for " << prg.name << endl;
      auto halide_cu = def->addInstance("inner_compute", ns->getModule(op->func));
      for (auto var : op->index_variables_needed_by_compute) {
        def->connect(halide_cu->sel(var), def->sel("self")->sel(var));
      }

      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        auto buf = map_find(bundle.first, buffers);

        bool found = false;
        cout << "# of selects = " << halide_cu->getSelects().size() << endl;
        cout << CoreIR::toString(halide_cu) << endl;
        for (auto s : halide_cu->getModuleRef()->getType()->getFields()) {
          string name = s;
          cout << "name = " << name << endl;
          string sname = split_at(bundle.first, "_clkwrk_").at(0);
          if (is_prefix("in", name) &&
              contains(name, sname)) {
            
            int lanes = buf.lanes_in_bundle(bundle.second);
            for (int l = 0; l < lanes; l++) {
              def->connect(halide_cu->sel(name)->sel(l), def->sel("self")->sel(pg(bundle.first, bundle.second))->sel(l));
            }
            found = true;
            break;
          }
        }
        assert(found);
      }

      cout << "More than oune outgoing bundle" << endl;
      for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
        auto buf = map_find(bundle.first, buffers);
        bool found = false;
        cout << "# of selects = " << halide_cu->getSelects().size() << endl;
        cout << CoreIR::toString(halide_cu) << endl;
        for (auto s : halide_cu->getModuleRef()->getType()->getFields()) {
          string name = s;
          cout << tab(1) << "name = " << name << endl;
          cout << tab(1) << "bundle.first = " << bundle.first << endl;
          string sname = split_at(bundle.first, "_clkwrk_").at(0);
          cout << tab(1) << "after split  = " << sname << endl;
          if (is_prefix("out", name) &&
              //contains(name, bundle.first)) {
              contains(name, sname)) {
            int lanes = buf.lanes_in_bundle(bundle.second);
            assert(lanes == 1);

            def->connect(halide_cu->sel(name), def->sel("self")->sel(pg(bundle.first, bundle.second))->sel(0));
            found = true;
            break;
          }
        }
        if (!found) {
          cout << "Error: Could not find compute unit connection for " << pg(bundle.first, bundle.second) << " in compute unit " << halide_cu->getInstname() << endl;
        }
        assert(found);
      }

    } else {
      // Generate dummy compute logic
      cout << "generating dummy compute" << endl;
      vector<CoreIR::Wireable*> inputs;
      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        string buf_name = bundle.first;
        string bundle_name = bundle.second;

        cout << tab(1) << "buf = " << buf_name << ", bundle = " << bundle_name << endl;

        auto buf = map_find(buf_name, buffers);
        int pix_width = buf.port_widths;
        int nlanes = buf.lanes_in_bundle(bundle_name);
        int bundle_width = buf.port_bundle_width(bundle_name);
        int offset = 0;
        CoreIR::Wireable* bsel =
          def->sel("self." + pg(buf_name, bundle_name));
        for (int l = 0; l < nlanes; l++) {
          inputs.push_back(bsel->sel(l));
        }
      }
      auto result = addList(def, inputs);

      for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
        def->connect(result, def->sel("self")->sel(pg(bundle))->sel(0));
      }

      cout << "done with dummy compute" << endl;
    }

    compute_unit->setDef(def);
  }

  def->addInstance(op->name, compute_unit);
}

Wireable* exe_start_control_vars(ModuleDef* def, const std::string& opname) {
  return def->sel(exe_start_control_vars_name(opname))->sel("out");
}

Wireable* read_start_control_vars(ModuleDef* def, const std::string& opname) {
  return def->sel(controller_name(opname))->sel("d");
  //return def->sel(read_start_control_vars_name(opname))->sel("out");
}

Wireable* write_start_control_vars(ModuleDef* def, const std::string& opname) {
  //return def->sel(controller_name(opname))->sel("d");
  return def->sel(write_start_control_vars_name(opname))->sel("out");
}

Wireable* read_start_wire(ModuleDef* def, const std::string& opname) {
  return def->sel(read_start_name(opname))->sel("out");
}

Wireable* write_start_wire(ModuleDef* def, const std::string& opname) {
  return def->sel(write_start_name(opname))->sel("out");
}

Instance* generate_coreir_op_controller(ModuleDef* def, op* op, vector<isl_map*>& sched_maps, schedule_info& hwinfo) {
  auto c = def->getContext();

  isl_map* sched = nullptr;
  for (auto s : sched_maps) {
    if (domain_name(s) == op->name) {
      sched = s;
      break;
    }
  }
  assert(sched != nullptr);

  auto svec = isl_pw_multi_aff_from_map(sched);

  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(svec);
  assert(pieces.size() == 1);

  auto saff = pieces.at(0).second;
  auto dom = pieces.at(0).first;

  cout << "sched = " << str(saff) << endl;
  cout << tab(1) << "dom = " << str(dom) << endl;

  // TODO: Assert multi size == 1
  auto aff = isl_multi_aff_get_aff(saff, 0);
  auto aff_c = affine_controller(c, dom, aff);
  aff_c->print();
  auto controller = def->addInstance(controller_name(op->name), aff_c);

  wirebit(def, read_start_name(op->name), controller->sel("valid"));
  auto exe_start = delaybit(def, exe_start_name(op->name), controller->sel("valid"));
  // Assume exe is combinational

  int op_latency = map_find(op->name, hwinfo.op_compute_unit_latencies);
  //assert(op_latency == 0);

  Wireable* write_start_w = exe_start;
  for (int d = 0; d < op_latency; d++) {
    write_start_w = delaybit(def, op->name + c->getUnique(), write_start_w);
  }

  auto write_start = wirebit(def, write_start_name(op->name), write_start_w);

  //auto write_start = delaybit(def, write_start_name(op->name), exe_start);

  //wire(def, 16*num_dims(dom), read_start_control_vars_name(op->name), controller->sel("d"));
  //auto exe_start_ctrl = delay(def, exe_start_control_vars_name(op->name),
      //controller->sel("d"),
      //16*num_dims(dom));
  delay_array(def, write_start_control_vars_name(op->name),
      controller->sel("d"),
      16,
      num_dims(dom));
  delay_array(def, exe_start_control_vars_name(op->name),
      controller->sel("d"),
      16,
      num_dims(dom));

  return controller;
}

CoreIR::Module* create_prog_declaration(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context) { 
  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_valid", context->Bit()));
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
    } else {
      ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_en", context->Bit()));
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
    }
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(prg.name, utp);
  return ub;
}

CoreIR::Module* generate_dual_port_addrgen_buf(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf) {

  CoreIRLoadLibrary_commonlib(context);

  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};

  for (auto b : buf.port_bundles) {
    int pt_width = buf.port_widths;
    int bd_width = buf.lanes_in_bundle(b.first);
    string name = b.first;
    string pt_rep = pick(b.second);
    auto acc_maps = get_maps(buf.access_map.at(pt_rep));
    assert(acc_maps.size() > 0);
    int control_dimension = num_in_dims(pick(acc_maps));
    if (buf.is_input_bundle(b.first)) {
      ub_field.push_back(make_pair(name + "_wen", context->BitIn()));
      //ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));

      //ub_field.push_back(make_pair(name + "_en", context->BitIn()));
      ub_field.push_back(make_pair(name, context->BitIn()->Arr(pt_width)->Arr(bd_width)));
    } else {
      ub_field.push_back(make_pair(name + "_ren", context->BitIn()));
      //ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));

      //ub_field.push_back(make_pair(name + "_valid", context->Bit()));
      ub_field.push_back(make_pair(name, context->Bit()->Arr(pt_width)->Arr(bd_width)));
    }
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(buf.name + "_ub", utp);
  auto def = ub->newModuleDef();

  if (true) {
    //generate_synthesizable_functional_model(options, buf, def);
  } else {
    //buf.generate_coreir(options, def);
  }

  ub->setDef(def);
  return ub;
}

CoreIR::Module* generate_coreir_addrgen_in_tile(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context) {
  assert(false);
  //bool found_compute = true;
  //if (!loadFromFile(context, "./coreir_compute/" + prg.name + "_compute.json")) {
    //found_compute = false;
  //}

  //auto ub = create_prog_declaration(options, buffers, prg, schedmap, context);
  //auto def = ub->newModuleDef();

  //auto sched_maps = get_maps(schedmap);
  //for (auto op : prg.all_ops()) {
    //generate_coreir_op_controller(def, op, sched_maps, hwinfo);
    //generate_coreir_compute_unit(found_compute, def, op, prg, buffers);
  //}

  //for (auto& buf : buffers) {
    //if (!prg.is_boundary(buf.first)) {
      //auto ub_mod = generate_dual_port_addrgen_buf(options, context, buf.second);
      //def->addInstance(buf.second.name, ub_mod);
    //}
  //}

  //auto levels = get_variable_levels(prg);
  //// Connect compute units to buffers
  //for (auto op : prg.all_ops()) {
    //vector<string> surrounding = surrounding_vars(op, prg);
    //for (auto var : op->index_variables_needed_by_compute) {
      //int level = map_find(var, levels);
      //auto var_wire = exe_start_control_vars(def, op->name)->sel(level);
      //def->connect(def->sel(op->name)->sel(var), var_wire);
    //}

    //for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      //string buf_name = bundle.first;
      //string bundle_name = bundle.second;
      //auto buf = map_find(buf_name, buffers);
      //int pixel_width = buf.port_widths;

      //assert(buf.is_input_bundle(bundle.second));

      //if (prg.is_output(buf_name)) {
        //auto output_en = "self." + pg(buf_name, bundle_name) + "_en";
        //def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        //def->connect(def->sel(output_en),
            //write_start_wire(def, op->name));
      //} else {
        //def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        //def->connect(def->sel(buf_name + "." + bundle_name + "_wen"),
            //write_start_wire(def, op->name));
        ////def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
            ////write_start_control_vars(def, op->name));
      //}
    //}

    //for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      //string buf_name = bundle.first;
      //string bundle_name = bundle.second;
      //auto buf = map_find(buf_name, buffers);

      //assert(buf.is_output_bundle(bundle.second));

      //if (prg.is_input(buf_name)) {
        //auto output_valid = "self." + pg(buf_name, bundle_name) + "_valid";
        //auto input_bus = "self." + pg(buf_name, bundle_name);
        //auto delayed_input = delay(def, def->sel(input_bus)->sel(0), 16);
        ////def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        //// TODO: This delayed input is a hack that I insert to
        //// ensure that I can assume all buffer reads take 1 cycle
        //def->connect(delayed_input,
            //def->sel(op->name + "." + pg(buf_name, bundle_name))->sel(0));
        //def->connect(def->sel(output_valid),
            //read_start_wire(def, op->name));
      //} else {
        //def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        //def->connect(def->sel(buf_name + "." + bundle_name + "_ren"),
            //read_start_wire(def, op->name));
        ////def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
            ////read_start_control_vars(def, op->name));
      //}
    //}
  //}

  //ub->setDef(def);

  //ub->print();

  //connect_signal("reset", ub);
  ////context->runPasses({"wireclocks-coreir"});
  ////context->runPasses({"rungenerators", "wireclocks-coreir"});
  //context->runPasses({"rungenerators", "wireclocks-clk"});

  //return ub;
}

void generate_coreir_addrgen_in_tile(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_cgralib(context);
  auto c = context;

  auto prg_mod = generate_coreir_addrgen_in_tile(options, buffers, prg, schedmap, context);

  auto ns = context->getNamespace("global");
  if(!saveToFile(ns, prg.name + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);

}

CoreIR::Module* generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context,
    schedule_info& hwinfo) {

  bool found_compute = true;
  //bool found_compute = false;
  string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
  ifstream cfile(compute_file);
  if (!cfile.good()) {
    cout << "No compute unit file: " << compute_file << endl;
    //assert(false);
  }
  if (!loadFromFile(context, compute_file)) {
    found_compute = false;
    cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
    //assert(false);
  }

  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_valid", context->Bit()));
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
    } else {
      ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_en", context->Bit()));
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
    }
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(prg.name, utp);
  auto def = ub->newModuleDef();

  auto sched_maps = get_maps(schedmap);
  for (auto op : prg.all_ops()) {
    generate_coreir_op_controller(def, op, sched_maps, hwinfo);
    generate_coreir_compute_unit(found_compute, def, op, prg, buffers);
  }

  for (auto& buf : buffers) {
    if (!prg.is_boundary(buf.first)) {
      auto ub_mod = generate_coreir(options, context, buf.second, hwinfo);
      def->addInstance(buf.second.name, ub_mod);
    }
  }

  auto levels = get_variable_levels(prg);
  // Connect compute units to buffers
  for (auto op : prg.all_ops()) {
    vector<string> surrounding = surrounding_vars(op, prg);
    for (auto var : op->index_variables_needed_by_compute) {
      int level = map_find(var, levels);
      auto var_wire = exe_start_control_vars(def, op->name)->sel(level);
      def->connect(def->sel(op->name)->sel(var), var_wire);
    }

    for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);
      int pixel_width = buf.port_widths;

      assert(buf.is_input_bundle(bundle.second));

      if (prg.is_output(buf_name)) {
        auto output_en = "self." + pg(buf_name, bundle_name) + "_en";
        def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        def->connect(def->sel(output_en),
            write_start_wire(def, op->name));
      } else {
        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        def->connect(def->sel(buf_name + "." + bundle_name + "_wen"),
            write_start_wire(def, op->name));
        def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
            write_start_control_vars(def, op->name));
      }
    }

    for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);

      assert(buf.is_output_bundle(bundle.second));

      if (prg.is_input(buf_name)) {
        auto output_valid = "self." + pg(buf_name, bundle_name) + "_valid";
        auto input_bus = "self." + pg(buf_name, bundle_name);
        auto delayed_input = delay(def, def->sel(input_bus)->sel(0), 16);
        //def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        // TODO: This delayed input is a hack that I insert to
        // ensure that I can assume all buffer reads take 1 cycle
        def->connect(delayed_input,
            def->sel(op->name + "." + pg(buf_name, bundle_name))->sel(0));
        def->connect(def->sel(output_valid),
            read_start_wire(def, op->name));
      } else {
        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        def->connect(def->sel(buf_name + "." + bundle_name + "_ren"),
            read_start_wire(def, op->name));
        def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
            read_start_control_vars(def, op->name));
      }
    }
  }

  ub->setDef(def);

  ub->print();

  connect_signal("reset", ub);
  //context->runPasses({"wireclocks-coreir"});
  //context->runPasses({"rungenerators", "wireclocks-coreir"});
  context->runPasses({"rungenerators", "wireclocks-clk"});

  return ub;
  //assert(false);
}

void add_cgralib(CoreIR::Context* context) {

}

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

  Generator* Mem = cgralib->newGeneratorDecl("Mem",cgralib->getTypeGen("MemType"),MemGenParams);
  Mem->addDefaultGenArgs({{"width",Const::make(c,16)},{"total_depth",Const::make(c,1024)}});
  Mem->setModParamsGen(MemModParamFun);

  return cgralib;
}

typedef struct {
  vector<SelectPath> IO16;
  vector<SelectPath> IO16in;
  vector<SelectPath> IO1;
  vector<SelectPath> IO1in;
} IOpaths;

void getAllIOPaths(Wireable* w, IOpaths& paths) {
  Type* t = w->getType();
  if (auto at = dyn_cast<ArrayType>(t)) {
    if (at->getLen()==16 && isa<BitType>(at->getElemType())) {
      paths.IO16.push_back(w->getSelectPath());
    }
    else if (at->getLen() == 16 && isa<BitInType>(at->getElemType())) {
      paths.IO16in.push_back(w->getSelectPath());
    }
    else {
      for (auto selstr : t->getSelects()) {
        getAllIOPaths(w->sel(selstr),paths);
      }
    }
  }
  else if (isa<BitType>(t)) {
    paths.IO1.push_back(w->getSelectPath());
  }
  else if (isa<BitInType>(t)) {
    paths.IO1in.push_back(w->getSelectPath());
  }
  else {
    for (auto sw : w->getSelects()) {
      getAllIOPaths(sw.second,paths);
    }
  }
  
}

void addIOs(Context* c, Module* top) {
  ModuleDef* mdef = top->getDef();

  Values aWidth({{"width",Const::make(c,16)}});
  IOpaths iopaths;
  getAllIOPaths(mdef->getInterface(), iopaths);
  Instance* pt = addPassthrough(mdef->getInterface(),"_self");
  for (auto path : iopaths.IO16) {
    string ioname = "io16in_" + join(++path.begin(),path.end(),string("_"));
    mdef->addInstance(ioname,"cgralib.IO",aWidth,{{"mode",Const::make(c,"in")}});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"out"},path);
  }
  for (auto path : iopaths.IO16in) {
    string ioname = "io16_" + join(++path.begin(),path.end(),string("_"));
    mdef->addInstance(ioname,"cgralib.IO",aWidth,{{"mode",Const::make(c,"out")}});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"in"},path);
  }
  for (auto path : iopaths.IO1) {
    string ioname = "io1in_" + join(++path.begin(),path.end(),string("_"));
    mdef->addInstance(ioname,"cgralib.BitIO",{{"mode",Const::make(c,"in")}});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"out"},path);
  }
  for (auto path : iopaths.IO1in) {
    string ioname = "io1_" + join(++path.begin(),path.end(),string("_"));
    mdef->addInstance(ioname,"cgralib.BitIO",{{"mode",Const::make(c,"out")}});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"in"},path);
  }
  mdef->disconnect(mdef->getInterface());
  inlineInstance(pt);
}


class CustomFlatten : public CoreIR::InstanceGraphPass {
 public:
  static std::string ID;
  CustomFlatten() : InstanceGraphPass("customflatten", "Flattens everything except the new time!") {}
  bool runOnInstanceGraphNode(CoreIR::InstanceGraphNode& node) {
    bool changed = false;
    // int i = 0;
    for (auto inst : node.getInstanceList()) {
       //cout << "inlining " << inst->getName() << endl;
       Module* m = inst->getModuleRef();
       if (m->isGenerated()) {
         auto g = m->getGenerator();
         if (g->getName() == "raw_dual_port_sram_tile") {
           continue;
         }
       }
      changed |= inlineInstance(inst);
    }
    return changed;
  }
};

namespace MapperPasses {
class MemConst : public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    MemConst() : InstanceVisitorPass(ID,"replace mem wen const with lut") {}
    void setVisitorInfo() override;
};

}

bool ConstReplace(Instance* cnst) {
  //cout << "cnstreplace" << endl;
  //cout << toString(cnst) << endl;
  Context* c = cnst->getContext();
  auto conns = cnst->sel("out")->getConnectedWireables();
  //cout << "Connections=" << conns.size() << endl;
  if (conns.size()==0) {
    return false;
  }
  ASSERT(conns.size()==1,"size: " + to_string(conns.size()));
  for (auto conn : conns) {
    if (auto conInst = dyn_cast<Instance>(conn->getTopParent())) {
      cout << "  coninst= " << toString(conInst) << endl;
      //cout << "  conn= " << toString(conn->getSelectPath()) << endl;
      //if (conInst->getModuleRef()->getRefName() != "cgralib.Mem" || conn->getSelectPath().back()!="wen") {
      if (conInst->getModuleRef()->getRefName() != "cgralib.Mem") {
        return false;
      }
    }
  }
  cout << "REPLACING!" << endl;
  ModuleDef* def = cnst->getContainer();
  uint val = cnst->getModArgs().at("value")->get<bool>() ? 63 : 0;
  Values bitPEArgs({{"lut_value",Const::make(c,8,val)}});
  Instance* lut = def->addInstance(cnst->getInstname()+"_lutcnst","cgralib.PE",{{"op_kind",Const::make(c,"bit")}},bitPEArgs);
  for (auto conn : conns) {
    def->connect(lut->sel("bit")->sel("out"),conn);
  }
  def->removeInstance(cnst);
  return true;
}

std::string MapperPasses::MemConst::ID = "memconst";
void MapperPasses::MemConst::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasModule("corebit.const")) {
    addVisitorFunction(c->getModule("corebit.const"),ConstReplace);
  }

}
namespace MapperPasses {
class ConstDuplication : public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    ConstDuplication() : InstanceVisitorPass(ID,"duplicate all constants") {}
    void setVisitorInfo() override;
};

}

bool ConstDup(Instance* cnst) {
  Module* modRef = cnst->getModuleRef();

  auto connSet = cnst->sel("out")->getConnectedWireables();
  if (connSet.size() < 1) {
    return false;
  }
  vector<Wireable*> conns(connSet.begin(),connSet.end());

  ModuleDef* def = cnst->getContainer();
  for (uint i=1; i< conns.size(); ++i) {
    Wireable* conn = conns[i];
    cout << "replacing connection to : " << conn->toString() << endl;
    Instance* newconst = def->addInstance(cnst->getInstname() + to_string(i),modRef,cnst->getModArgs());
    def->connect(newconst->sel("out"),conn);
    def->disconnect(cnst->sel("out"),conn);
  }
  return true;
}

std::string MapperPasses::ConstDuplication::ID = "constduplication";
void MapperPasses::ConstDuplication::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasModule("corebit.const")) {
    addVisitorFunction(c->getModule("corebit.const"),ConstDup);
  }
  if (c->hasGenerator("coreir.const")) {
    addVisitorFunction(c->getGenerator("coreir.const"),ConstDup);
  }

}

void garnet_map_module(Module* top) {
  auto c = top->getContext();

  //load_cgramapping(c);
  LoadDefinition_cgralib(c);
  c->runPasses({"deletedeadinstances"});
  c->runPasses({"removewires"});
  addIOs(c,top);
  c->runPasses({"cullgraph"}); 
  c->addPass(new CustomFlatten);
  c->runPasses({"customflatten"});
  c->addPass(new MapperPasses::ConstDuplication);
  c->runPasses({"constduplication"});
  c->addPass(new MapperPasses::MemConst);
  c->runPasses({"memconst"});

  //c->runPasses({"flatten"});
  c->runPasses({"cullgraph"});
  c->getPassManager()->printLog();
  cout << "Trying to save" << endl;
  c->runPasses({"coreirjson"},{"global","commonlib","mantle"});

  auto jpass = static_cast<CoreIR::Passes::CoreIRJson*>(c->getPassManager()->getAnalysisPass("coreirjson"));
  string postmap = "after_mapping_" + top->getName() + ".json";
  ////Create file here.
  std::ofstream file(postmap);
  jpass->writeToStream(file,top->getRefName());
}


void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {

  schedule_info info;
  generate_coreir(options, buffers, prg, schedmap, info);
}

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    schedule_info& hwinfo) {
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cgralib(context);
  auto c = context;

  //CoreIRLoadLibrary_cwlib(context);
  //
  auto prg_mod = generate_coreir(options, buffers, prg, schedmap, context, hwinfo);

  //garnet_map_module(prg_mod);

  //prg_mod->print();
  //assert(false);
  auto ns = context->getNamespace("global");
  if(!saveToFile(ns, prg.name + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);
}

  CoreIR::Context* context = CoreIR::newContext();

  CoreIR::Wireable* delaybit(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w) {
    return delaybit(bdef, "delay_reg_" + bdef->getContext()->getUnique(), w);
  }

  CoreIR::Wireable* delaybit(CoreIR::ModuleDef* bdef,
      const std::string& name,
      CoreIR::Wireable* w) {
    auto c = bdef->getContext();
    auto r = bdef->addInstance(
        name,
        "corebit.reg");
    bdef->connect(r->sel("in"), w);
    return r->sel("out");
  }

  CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w,
      const int width) {
    return delay(bdef, bdef->getContext()->getUnique(), w, width);
  }

CoreIR::Wireable* delay_array(ModuleDef* def,
    const std::string& name,
    CoreIR::Wireable* input,
    int elem_width,
    int num_elems) {
  auto context = def->getContext();
  auto c = context;
  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> > ub_field{{"in", input->getType()->getFlipped()},
    {"out", input->getType()}};
  CoreIR::RecordType* utp = context->Record(ub_field); 
  auto ub = ns->newModuleDecl("array_delay" + c->getUnique(), utp);
  {
    auto def = ub->newModuleDef();
    for (int r = 0; r < num_elems; r++) {
      auto e = delay(def, def->sel("self")->sel("in")->sel(r), elem_width);
      def->connect(e, def->sel("self")->sel("out")->sel(r));
    }
    ub->setDef(def);
  }
  auto delay = def->addInstance(name, ub);
  def->connect(delay->sel("in"), input);
  return delay->sel("out");
}

CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
    const std::string name,
    CoreIR::Wireable* w,
    const int width) {
  auto c = bdef->getContext();
  auto r = bdef->addInstance(
      name,
      "mantle.reg",
      {{"width", CoreIR::Const::make(c, width)}, {"has_en", CoreIR::Const::make(c, false)}});
  bdef->connect(r->sel("in"), w);
  return r->sel("out");
}

CoreIR::Module* coreir_for_aff(CoreIR::Context* context, isl_aff* aff) {
  auto ns = context->getNamespace("global");

  int width = 16;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"out", context->Bit()->Arr(width)}};
  cout << "aff = " << str(aff) << endl;
  int dims = num_in_dims(aff);
  cout << "dims = " << dims << endl;
  ub_field.push_back({"d", context->BitIn()->Arr(16)->Arr(dims)});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("aff_" + context->getUnique(), utp);
  auto def = m->newModuleDef();

  auto c = context;

  vector<CoreIR::Wireable*> terms;
  for (int d = 0; d < dims; d++) {
    int v = to_int(get_coeff(aff, d));
    cout << "coeff: " << v << endl;
    auto constant = def->addInstance(
        "coeff_" + str(d),
        //context->getUnique(),
        "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, v))}});
    auto m = def->addInstance(
        "mul_d" + str(d) + "_" + context->getUnique(),
        "coreir.mul",
        {{"width", CoreIR::Const::make(c, width)}});
    def->connect(m->sel("in0"), constant->sel("out"));
    def->connect(m->sel("in1"), def->sel("self")->sel("d")->sel(d));
    terms.push_back(m->sel("out"));
  }
  int v = to_int(const_coeff(aff));
  cout << "coeff: " << v << endl;
  auto constant = def->addInstance(
      "const_term",
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, v))}});
  terms.push_back(constant->sel("out"));
  auto out = addList(def, terms);
  def->connect(def->sel("self.out"), out);
  m->setDef(def);

  return m;
}

CoreIR::Module* coreir_for_multi_aff(CoreIR::Context* context, isl_multi_aff* aff) {
  auto ns = context->getNamespace("global");

  int width = 16;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"out", context->Bit()->Arr(width)}};
  cout << "aff = " << str(aff) << endl;
  int dims = num_in_dims(aff);
  int out_dims = isl_multi_aff_dim(aff, isl_dim_set);
  cout << "dims = " << dims << endl;
  ub_field.push_back({"d", context->BitIn()->Arr(16)->Arr(dims)});
  ub_field.push_back({"out", context->BitIn()->Arr(16)->Arr(out_dims)});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("aff_" + context->getUnique(), utp);
  auto def = m->newModuleDef();
  for (int i = 0; i < isl_multi_aff_dim(aff, isl_dim_set); i++) {
    auto iaff = isl_multi_aff_get_aff(aff, i);
    cout << tab(3) << i << ": " << str(iaff) << endl;

  }

  auto c = context;

  //vector<CoreIR::Wireable*> terms;
  //for (int d = 0; d < dims; d++) {
    //int v = to_int(get_coeff(aff, d));
    //cout << "coeff: " << v << endl;
    //auto constant = def->addInstance(context->getUnique(),
        //"coreir.const",
      //{{"width", CoreIR::Const::make(c, width)}},
      //{{"value", CoreIR::Const::make(c, BitVector(width, v))}});
    //auto m = def->addInstance(context->getUnique(),
        //"coreir.mul",
        //{{"width", CoreIR::Const::make(c, width)}});
    //def->connect(m->sel("in0"), constant->sel("out"));
    //def->connect(m->sel("in1"), def->sel("self")->sel("d")->sel(d));
    //terms.push_back(m->sel("out"));
  //}
  //int v = to_int(const_coeff(aff));
  //cout << "coeff: " << v << endl;
  //auto constant = def->addInstance(context->getUnique(),
      //"coreir.const",
      //{{"width", CoreIR::Const::make(c, width)}},
      //{{"value", CoreIR::Const::make(c, BitVector(width, v))}});
  //terms.push_back(constant->sel("out"));
  //auto out = addList(def, terms);
  //def->connect(def->sel("self.out"), out);
  m->setDef(def);

  return m;
}

CoreIR::Module* coreir_for_basic_set(CoreIR::Context* context, isl_basic_set* dom) {
  cout << tab(1) << "dom = " << str(dom) << endl;
  assert(num_div_dims(dom) == 0);
  assert(num_param_dims(dom) == 0);

  auto ns = context->getNamespace("global");
  auto c = context;

  int width = 16;
  int dims = num_dims(dom);
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"d", c->BitIn()->Arr(16)->Arr(dims)},
      {"valid", c->Bit()}};

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("basic_set_checker_" + context->getUnique(), utp);
  auto def = m->newModuleDef();

  vector<CoreIR::Wireable*> bset_outs;
  for (auto c : constraints(dom)) {
    auto caff = isl_constraint_get_aff(cpy(c));
    auto cs = coreir_for_aff(context, caff);
    auto csm = def->addInstance("bs" + context->getUnique(), cs);
    def->connect(csm->sel("d"), def->sel("self.d"));

    CoreIR::Instance* cmp = nullptr;
    auto zero = mkConst(def, 16, 0);
    if (isl_constraint_is_equality(c)) {
      cmp = def->addInstance("eq_" + context->getUnique(), "coreir.eq", {{"width", COREMK(context, width)}});
    } else {
      cmp = def->addInstance("geq_" + context->getUnique(), "coreir.sge", {{"width", COREMK(context, width)}});
    }
    assert(cmp != nullptr);
    def->connect(cmp->sel("in0"), csm->sel("out"));
    def->connect(cmp->sel("in1"), zero);
    bset_outs.push_back(cmp->sel("out"));
  }

  auto in_set = andList(def, bset_outs);
  def->connect(in_set, def->sel("self.valid"));
  m->setDef(def);
  return m;
}

CoreIR::Module* coreir_for_set(CoreIR::Context* context, isl_set* dom) {
  cout << tab(1) << "dom = " << str(dom) << endl;
  //assert(num_div_dims(dom) == 0);
  //assert(num_param_dims(dom) == 0);

  auto ns = context->getNamespace("global");
  auto c = context;

  int width = 16;
  int dims = num_dims(dom);
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"d", c->BitIn()->Arr(16)->Arr(dims)},
      {"valid", c->Bit()}};

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("set_checker_" + context->getUnique(), utp);
  auto def = m->newModuleDef();

  auto bs = get_basic_sets(dom);

  vector<CoreIR::Wireable*> bset_outs;
  for (auto basic_set : bs) {
    auto cs = coreir_for_basic_set(context, basic_set);
    auto csm = def->addInstance("bs" + context->getUnique(), cs);
    def->connect(csm->sel("d"), def->sel("self")->sel("d"));
    bset_outs.push_back(csm->sel("valid"));
  }

  auto in_set = orList(def, bset_outs);
  def->connect(in_set, def->sel("self.valid"));
  m->setDef(def);
  return m;
}

CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff) {
  cout << tab(1) << "dom = " << str(dom) << endl;

  auto ns = context->getNamespace("global");
  auto c = context;

  int width = 16;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", c->Named("coreir.clkIn")},
      {"valid", c->Bit()}};
  int dims = num_in_dims(aff);
  ub_field.push_back({"d", context->Bit()->Arr(16)->Arr(dims)});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("affine_controller_" + context->getUnique(), utp);
  auto def = m->newModuleDef();
  auto aff_mod = coreir_for_aff(c, aff);
  auto aff_func = def->addInstance("affine_func", aff_mod);


  auto cycle_time_reg = def->addInstance("cycle_time", "mantle.reg",
      {{"width", CoreIR::Const::make(context, width)},
      {"has_en", CoreIR::Const::make(context, false)}});

  auto one = def->addInstance(context->getUnique(),
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, 1))}});

  auto inc_time = def->addInstance("inc_time", "coreir.add", {{"width", CoreIR::Const::make(c, width)}});
  def->connect(inc_time->sel("in0"), cycle_time_reg->sel("out"));
  def->connect(inc_time->sel("in1"), one->sel("out"));
  def->connect(inc_time->sel("out"), cycle_time_reg->sel("in"));

  auto diff = def->addInstance("time_diff", "coreir.sub", {{"width", CoreIR::Const::make(c, width)}});
  def->connect(cycle_time_reg->sel("out"), diff->sel("in1"));
  def->connect(aff_func->sel("out"), diff->sel("in0"));

  auto zero = def->addInstance(context->getUnique(),
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, 0))}});

  auto cmp = def->addInstance("cmp_time", "coreir.eq", {{"width", CoreIR::Const::make(c, width)}});
  def->connect(cmp->sel("in0"), diff->sel("out"));
  def->connect(cmp->sel("in1"), zero->sel("out"));
  def->connect(cmp->sel("out"), def->sel("self")->sel("valid"));

  vector<CoreIR::Instance*> domain_regs;
  vector<CoreIR::Wireable*> domain_at_max;
  for (int d = 0; d < num_dims(dom); d++) {
    auto dom_reg = def->addInstance("d_" + str(d) + "_reg",
        "mantle.reg",
      {{"width", CoreIR::Const::make(context, width)},
      {"has_en", CoreIR::Const::make(context, true)}});
    domain_regs.push_back(dom_reg);
    def->connect(def->sel("self")->sel("d")->sel(d), domain_regs.back()->sel("out"));
    def->connect(aff_func->sel("d")->sel(d), domain_regs.back()->sel("out"));
    def->connect(cmp->sel("out"), domain_regs.back()->sel("en"));

    int max_pt = to_int(lexmaxval(project_all_but(dom, d)));
    cout << "controller max point for dimension " << d << " = " << max_pt << endl;
    auto max_const = def->addInstance("d_" + str(d) + "_max",
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, max_pt))}});

    auto atmax =
      def->addInstance("d_" + str(d) + "_at_max", "coreir.eq", {{"width", CoreIR::Const::make(c, width)}});
    def->connect(atmax->sel("in0"), dom_reg->sel("out"));
    def->connect(atmax->sel("in1"), max_const->sel("out"));
    domain_at_max.push_back(atmax->sel("out"));
  }

  auto tinc = def->addInstance("true",
      "corebit.const",
      {{"value", CoreIR::Const::make(c, true)}});
  for (int d = 0; d < num_dims(dom); d++) {
    string df = "d_" + str(d);
    auto inc = def->addInstance(df + "_inc", "coreir.add", {{"width", CoreIR::Const::make(c, width)}});
    def->connect(inc->sel("in0"), domain_regs.at(d)->sel("out"));
    def->connect(inc->sel("in1"), one->sel("out"));
    int min_pt = to_int(lexminval(project_all_but(dom, d)));
    auto min_const = def->addInstance("d_" + str(d) + "_min",
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, min_pt))}});

    CoreIR::Wireable* smaller_dims_at_max = tinc->sel("out");
    for (int de = d + 1; de < num_dims(dom); de++) {
      auto de_atmax = def->addInstance(df + "_am_" + context->getUnique(), "corebit.and");
      def->connect(de_atmax->sel("in0"), smaller_dims_at_max);
      def->connect(de_atmax->sel("in1"), domain_at_max.at(de));
      smaller_dims_at_max = de_atmax->sel("out");
    }

    auto next_val_atmax =
      def->addInstance(df + "_next_value_at_max", "coreir.mux", {{"width", CoreIR::Const::make(c, width)}});
    def->connect(next_val_atmax->sel("sel"), domain_at_max.at(d));
    def->connect(next_val_atmax->sel("in0"), inc->sel("out"));
    def->connect(next_val_atmax->sel("in1"), min_const->sel("out"));

    auto next_val = def->addInstance(df + "_next_value", "coreir.mux", {{"width", CoreIR::Const::make(c, width)}});
    def->connect(next_val->sel("sel"), smaller_dims_at_max);
    def->connect(next_val->sel("in0"), domain_regs.at(d)->sel("out"));
    //def->connect(next_val->sel("in1"), inc->sel("out"));
    def->connect(next_val->sel("in1"), next_val_atmax->sel("out"));
    def->connect(next_val->sel("out"), domain_regs.at(d)->sel("in"));

    //auto next_val = def->addInstance(df + "_next_value", "coreir.mux", {{"width", CoreIR::Const::make(c, width)}});
    //def->connect(next_val->sel("sel"), smaller_dims_at_max);
    //def->connect(next_val->sel("in0"), inc->sel("out"));
    //def->connect(next_val->sel("in1"), min_const->sel("out"));
    //def->connect(next_val->sel("out"), domain_regs.at(d)->sel("in"));
  }

  aff_mod->print();

  m->setDef(def);
  return m;
}

void add_raw_dual_port_sram_generator(CoreIR::Context* c) {
  auto cgralib = c->getNamespace("global");
  CoreIR::Params params = {{"depth",c->Int()}};
  //CoreIR::Params params;

  Params reg_array_args = {{"type", CoreIRType::make(c)},
                           {"has_en", c->Bool()},
                           {"has_clr", c->Bool()},
                           {"has_rst", c->Bool()},
                           {"init", c->Int()}};
  TypeGen* ramTG = cgralib->newTypeGen(
    "raw_dual_port_sram_TG",
    params,
    [](Context* c, Values args) {
    int width = 16;
    //int depth = args.at("depth")->get<int>();
    //int depth = args.at("depth")->get<int>();

  auto tp = c->Record({
      {"clk", c->Named("coreir.clkIn")},
      {"wdata", c->BitIn()->Arr(width)},
      {"waddr", c->BitIn()->Arr(width)},
      {"wen", c->BitIn()},
      {"rdata", c->Bit()->Arr(width)},
      {"raddr", c->BitIn()->Arr(width)},
      {"ren", c->BitIn()}});
  return tp;
    });
  Generator* ram = cgralib->newGeneratorDecl("raw_dual_port_sram_tile", ramTG, params);


  ram->setGeneratorDefFromFun(
    [](Context* c, Values args, ModuleDef* def) {

    int width = 16;
    int depth = args.at("depth")->get<int>();
  uint awidth = (uint)ceil(log2(depth));
  CoreIR::Values sliceArgs = {{"width", CoreIR::Const::make(c, width)},
    {"lo", CoreIR::Const::make(c, 0)},
    {"hi", CoreIR::Const::make(c, awidth)}};
  def->addInstance("raddr_slice", "coreir.slice", sliceArgs);
  def->addInstance("waddr_slice", "coreir.slice", sliceArgs);

  def->addInstance("mem", "coreir.mem", {{"width", CoreIR::Const::make(c, width)}, {"depth", CoreIR::Const::make(c, depth)}});
  def->addInstance(
      "readreg",
      "mantle.reg",
      {{"width", CoreIR::Const::make(c, width)}, {"has_en", CoreIR::Const::make(c, true)}});
  def->connect("self.clk", "readreg.clk");
  def->connect("self.clk", "mem.clk");
  def->connect("self.wdata", "mem.wdata");
  def->connect("self.waddr", "waddr_slice.in");
  def->connect("waddr_slice.out", "mem.waddr");
  def->connect("self.wen", "mem.wen");
  def->connect("mem.rdata", "readreg.in");
  def->connect("self.rdata", "readreg.out");
  def->connect("self.raddr", "raddr_slice.in");
  def->connect("raddr_slice.out", "mem.raddr");
  def->connect("self.ren", "readreg.en");
    });
}

CoreIR::Module* lake_rf(CoreIR::Context* c, const int width, const int depth) {
  auto ns = c->getNamespace("global");
  if (ns->hasModule("register_file")) {
    return ns->getModule("register_file");
  }

  vector<pair<string, CoreIR::Type*> > rf_fields;
  auto m = ns->newModuleDecl("register_file", c->Record(rf_fields));

  return m;
}

CoreIR::Module* delay_module(CoreIR::Context* c, const int width, const vector<int>& read_delays) {
  assert(read_delays.size() == 1);
  int D = read_delays.at(0);
  auto ns = c->getNamespace("global");
  vector<pair<string, Type*> > fields = {{"clk", c->Named("coreir.clkIn")},
      {"wdata", c->BitIn()->Arr(width)},
      //{"waddr", c->BitIn()->Arr(width)},
      //{"wen", c->BitIn()},
      {"rdata", c->Bit()->Arr(width)}};
      //{"raddr", c->BitIn()->Arr(width)},
      //{"ren", c->BitIn()}};

auto mod = ns->newModuleDecl("delay_" + c->getUnique(), c->Record(fields));
auto def = mod->newModuleDef();

auto next = def->sel("self.wdata");
for (int d = 0; d < D; d++) {
  next = delay(def, next, width);
}
//auto d = delay(def, def->sel("self.wdata"), width);
def->connect(next, def->sel("self.rdata"));
mod->setDef(def);

  return mod;
}

void ram_module(CoreIR::Context* c, const int width, const int depth) {
  auto ns = c->getNamespace("global");

  if (!ns->hasGenerator("raw_dual_port_sram_tile")) {
    add_raw_dual_port_sram_generator(c);
    assert(ns->hasGenerator("raw_dual_port_sram_tile"));
  }
}


void mini_sram_garnet_test() {

  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cgralib(context);
  auto c = context;

  auto ns = context->getNamespace("global");

  vector<pair<string, Type*> > fields = {{"clk", c->Named("coreir.clkIn")},
    {"in", c->BitIn()->Arr(16)},
    {"out", c->Bit()->Arr(16)}};

  auto prg_mod = ns->newModuleDecl("one_raw_sram_tile_probe", c->Record(fields));
  auto def = prg_mod->newModuleDef();
  prg_mod->setDef(def);

  ram_module(c, 16, 256);

  auto bnk = def->addInstance(
      "test_ram",
      "global.raw_dual_port_sram_tile",
      {{"depth", COREMK(c, 256)}}
      );

  auto self = def->sel("self");

  auto addr_zero = mkConst(def, 16, 0);
  auto one = 
    def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}})->sel("out");
  //auto zero = 
    //def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}});

  def->connect(bnk->sel("clk"), self->sel("clk"));
  def->connect(bnk->sel("wen"), one);
  def->connect(bnk->sel("waddr"), addr_zero);
  def->connect(bnk->sel("raddr"), addr_zero);
  def->connect(bnk->sel("ren"), one);
  def->connect(bnk->sel("wdata"), self->sel("in"));
  def->connect(bnk->sel("rdata"), self->sel("out"));

  if(!saveToFile(ns, "pre_mapped_" + prg_mod->getName() + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }


  garnet_map_module(prg_mod);

  context->runPasses({"rungenerators", "wireclocks-coreir"});
  if(!saveToFile(ns, prg_mod->getName() + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);

  assert(false);
}

#endif

#include "coreir_backend.h"

#ifdef COREIR

using CoreIR::Params;
using CoreIR::JsonType;
using CoreIR::Namespace;
using CoreIR::Const;
using CoreIR::Context;
using CoreIR::Values;
using CoreIR::Generator;
using CoreIR::ModuleDef;

std::string cu_name(const std::string& n) {
  return "cu_" + n;
}

std::string pg(const std::string& buf, const std::string& bundle) {
  return buf + "_" + bundle;
}

std::string pg(const pair<string, string>& b) {
  return pg(b.first, b.second);
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
CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals) {
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

CoreIR::Module* generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context) {

  bool found_compute = true;
  if (!loadFromFile(context, "./coreir_compute/" + prg.name + "_compute.json")) {
    found_compute = false;
  }

  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};
      //{"reset", context->BitIn()}};
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_valid", context->BitIn()));
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
    } else {
      ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_en", context->Bit()));
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
    }
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(prg.name, utp);
  auto def = ub->newModuleDef();

  for (auto op : prg.all_ops()) {
    vector<pair<string, CoreIR::Type*> >
      ub_field{{"clk", context->Named("coreir.clkIn")}};
        //{"reset", context->BitIn()}};
    for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);
      //int bundle_width = buf.port_bundle_width(bundle_name);
      int pixel_width = buf.port_widths;
      int pix_per_burst =
          buf.lanes_in_bundle(bundle_name);

      cout << "Bundle = " << bundle.second << endl;
      cout << "Possible bundles..." << endl;
      for (auto bndl : buf.port_bundles) {
        cout << tab(1) << bndl.first << endl;
      }
      assert(buf.is_output_bundle(bundle.second));
      ub_field.push_back(make_pair(buf_name + "_" + bundle_name + "_en", context->BitIn()));
      ub_field.push_back(make_pair(buf_name + "_" + bundle_name, context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
    }

    for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);
      //int bundle_width = buf.port_bundle_width(bundle_name);
      int pixel_width = buf.port_widths;
      int pix_per_burst =
          buf.lanes_in_bundle(bundle_name);

      assert(buf.is_input_bundle(bundle.second));
      ub_field.push_back(make_pair(buf_name + "_" + bundle_name + "_valid", context->Bit()));
      ub_field.push_back(make_pair(buf_name + "_" + bundle_name, context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
    }

    CoreIR::RecordType* utp = context->Record(ub_field);
    auto compute_unit =
      ns->newModuleDecl(cu_name(op->name), utp);
    {
      auto def = compute_unit->newModuleDef();
      if (found_compute) {
        auto halide_cu = def->addInstance("inner_compute", ns->getModule(op->func));

        for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
          bool found = false;
          cout << "# of selects = " << halide_cu->getSelects().size() << endl;
          cout << CoreIR::toString(halide_cu) << endl;
          for (auto s : halide_cu->getModuleRef()->getType()->getFields()) {
            string name = s;
            cout << "name = " << name << endl;
            if (is_prefix("in", name) &&
                contains(name, bundle.first)) {
              def->connect(halide_cu->sel(name)->sel(0), def->sel("self")->sel(pg(bundle.first, bundle.second))->sel(0));
              found = true;
              break;
            }
          }
          assert(found);
        }

        for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
          bool found = false;
          cout << "# of selects = " << halide_cu->getSelects().size() << endl;
          cout << CoreIR::toString(halide_cu) << endl;
          for (auto s : halide_cu->getModuleRef()->getType()->getFields()) {
            string name = s;
            cout << "name = " << name << endl;
            if (is_prefix("out", name) &&
                contains(name, bundle.first)) {
              def->connect(halide_cu->sel(name), def->sel("self")->sel(pg(bundle.first, bundle.second))->sel(0));
              found = true;
              break;
            }
          }
          if (!found) {
            cout << "Error: Could not find compute unit for " << pg(bundle.first, bundle.second) << endl;
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

          cout << "buf = " << buf_name << ", bundle = " << bundle_name << endl;

          auto buf = map_find(buf_name, buffers);
          int pix_width = buf.port_widths;
          int nlanes = buf.lanes_in_bundle(bundle_name);
          int bundle_width = buf.port_bundle_width(bundle_name);
          int offset = 0;
          CoreIR::Wireable* bsel =
            def->sel("self." + pg(buf_name, bundle_name));
          for (int l = 0; l < nlanes; l++) {
            int lo = l*pix_width;
            int hi = lo + pix_width;
            assert(hi - lo == pix_width);
            auto w =
              def->addInstance("slice_" + def->getContext()->getUnique(), "coreir.slice", {{"lo", COREMK(context, lo)}, {"hi", COREMK(context, hi)}, {"width", COREMK(context, bundle_width)}});
            def->connect(w->sel("in"), bsel->sel(0));
            inputs.push_back(w->sel("out"));
          }
        }
        auto result = addList(def, inputs);

        for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
          def->connect(result, def->sel("self")->sel(pg(bundle))->sel(0));
        }

        cout << "done with dummy compute" << endl;
      }
      vector<CoreIR::Wireable*> vals;
      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        vals.push_back(def->sel("self." + pg(bundle.first, bundle.second) + "_en"));
      }
      auto valid = andList(def, vals);

      for (auto bundle : outgoing_bundles(op, buffers, prg)) {
        def->connect(valid, def->sel("self." + pg(bundle.first, bundle.second) + "_valid"));
      }
      compute_unit->setDef(def);
    }

    def->addInstance(op->name, compute_unit);

  }

  for (auto& buf : buffers) {
    if (!prg.is_boundary(buf.first)) {
      auto ub_mod = generate_coreir(options, context, buf.second);
      def->addInstance(buf.second.name, ub_mod);
    }
  }

  // Connect compute units to buffers
  for (auto op : prg.all_ops()) {
    for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);
      int pixel_width = buf.port_widths;

      assert(buf.is_input_bundle(bundle.second));

      if (prg.is_output(buf_name)) {
        auto load_delay_reg = def->addInstance("cycle_time", "mantle.reg",
            {{"width", CoreIR::Const::make(context, 1)},
            {"has_en", CoreIR::Const::make(context, false)}});
        auto output_en = "self." + pg(buf_name, bundle_name) + "_en";
        auto src = op->name + "." + pg(buf_name, bundle_name) + "_valid";
        def->connect(load_delay_reg->sel("in")->sel(0), def->sel(src));
        def->connect(load_delay_reg->sel("out")->sel(0), def->sel(output_en));

        def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        //def->connect("self." + pg(buf_name, bundle_name) + "_en", op->name + "." + pg(buf_name, bundle_name) + "_valid");
      } else {
        //assert(false);
        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        def->connect(buf_name + "." + bundle_name + "_en", op->name + "." + pg(buf_name, bundle_name) + "_valid");
      }
    }

    for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);

      assert(buf.is_output_bundle(bundle.second));

      if (prg.is_input(buf_name)) {
        def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        def->connect("self." + pg(buf_name, bundle_name) + "_valid", op->name + "." + pg(buf_name, bundle_name) + "_en");
      } else {
        //assert(false);
        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        def->connect(buf_name + "." + bundle_name + "_valid", op->name + "." + pg(buf_name, bundle_name) + "_en");
      }
    }
  }

  ub->setDef(def);

  ub->print();

  connect_signal("reset", ub);
  context->runPasses({"wireclocks-coreir"});

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

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_cgralib(context);
  auto c = context;

  //CoreIRLoadLibrary_cwlib(context);
  //
  auto prg_mod = generate_coreir(options, buffers, prg, schedmap, context);

  auto ns = context->getNamespace("global");
  if(!saveToFile(ns, prg.name + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);
}

  CoreIR::Context* context = CoreIR::newContext();
#endif

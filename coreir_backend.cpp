#include "coreir_backend.h"

#ifdef COREIR

using CoreIR::Params;
using CoreIR::Wireable;
using CoreIR::JsonType;
using CoreIR::Namespace;
using CoreIR::Instance;
using CoreIR::Const;
using CoreIR::Context;
using CoreIR::Values;
using CoreIR::Generator;
using CoreIR::ModuleDef;

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
  for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
    string buf_name = bundle.first;
    string bundle_name = bundle.second;
    auto buf = map_find(buf_name, buffers);
    int pixel_width = buf.port_widths;
    int pix_per_burst =
      buf.lanes_in_bundle(bundle_name);

    //cout << tab(1) << "Adding bundle: " << bundle_name << ", pix width = " << pixel_width << ", burst width = " << pix_per_burst << endl;

    //for (auto bndl : buf.port_bundles) {
      //cout << tab(1) << bndl.first << endl;
    //}
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
      auto halide_cu = def->addInstance("inner_compute", ns->getModule(op->func));

      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        auto buf = map_find(bundle.first, buffers);

        bool found = false;
        cout << "# of selects = " << halide_cu->getSelects().size() << endl;
        cout << CoreIR::toString(halide_cu) << endl;
        for (auto s : halide_cu->getModuleRef()->getType()->getFields()) {
          string name = s;
          cout << "name = " << name << endl;
          if (is_prefix("in", name) &&
              contains(name, bundle.first)) {
              //def->connect(halide_cu->sel(name)->sel(0), def->sel("self")->sel(pg(bundle.first, bundle.second))->sel(0));
            
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

      for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
        auto buf = map_find(bundle.first, buffers);
        bool found = false;
        cout << "# of selects = " << halide_cu->getSelects().size() << endl;
        cout << CoreIR::toString(halide_cu) << endl;
        for (auto s : halide_cu->getModuleRef()->getType()->getFields()) {
          string name = s;
          cout << "name = " << name << endl;
          if (is_prefix("out", name) &&
              contains(name, bundle.first)) {
            int lanes = buf.lanes_in_bundle(bundle.second);
            assert(lanes == 1);

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
          //int lo = l*pix_width;
          //int hi = lo + pix_width;
          //assert(hi - lo == pix_width);
          //auto w =
            //def->addInstance("slice_" + def->getContext()->getUnique(), "coreir.slice", {{"lo", COREMK(context, lo)}, {"hi", COREMK(context, hi)}, {"width", COREMK(context, bundle_width)}});
          //def->connect(w->sel("in"), bsel->sel(0));
          //inputs.push_back(w->sel("out"));
        }
      }
      auto result = addList(def, inputs);

      for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
        def->connect(result, def->sel("self")->sel(pg(bundle))->sel(0));
      }

      cout << "done with dummy compute" << endl;
    }
    //vector<CoreIR::Wireable*> vals;
    //for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      //vals.push_back(def->sel("self." + pg(bundle.first, bundle.second) + "_en"));
    //}
    //auto valid = andList(def, vals);

    //for (auto bundle : outgoing_bundles(op, buffers, prg)) {
      //def->connect(valid, def->sel("self." + pg(bundle.first, bundle.second) + "_valid"));
    //}
    compute_unit->setDef(def);
  }

  def->addInstance(op->name, compute_unit);
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

Instance* generate_coreir_op_controller(ModuleDef* def, op* op, vector<isl_map*>& sched_maps) {
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
  auto write_start = wirebit(def, write_start_name(op->name), exe_start);
  //auto write_start = delaybit(def, write_start_name(op->name), exe_start);

  //wire(def, 16*num_dims(dom), read_start_control_vars_name(op->name), controller->sel("d"));
  //auto exe_start_ctrl = delay(def, exe_start_control_vars_name(op->name),
      //controller->sel("d"),
      //16*num_dims(dom));
  delay_array(def, write_start_control_vars_name(op->name),
      controller->sel("d"),
      16,
      num_dims(dom));
  return controller;
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
    generate_coreir_op_controller(def, op, sched_maps);
    generate_coreir_compute_unit(found_compute, def, op, prg, buffers);
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

#endif

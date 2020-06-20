#include "coreir_backend.h"

#ifdef COREIR

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

CoreIR::Wireable* andVals(CoreIR::ModuleDef* def, CoreIR::Wireable* a, CoreIR::Wireable* b) {
  auto ad = def->addInstance("and_all_" + def->getContext()->getUnique(), "corebit.and");
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
    ub_field{{"clk", context->Named("coreir.clkIn")},
      {"reset", context->BitIn()}};
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
      ub_field{{"clk", context->Named("coreir.clkIn")},
        {"reset", context->BitIn()}};
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
        auto halide_cu = def->addInstance("inner_compute", ns->getModule(op->name));

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
          assert(found);
        }
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

      assert(buf.is_input_bundle(bundle.second));

      if (prg.is_output(buf_name)) {
        def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        def->connect("self." + pg(buf_name, bundle_name) + "_en", op->name + "." + pg(buf_name, bundle_name) + "_valid");
      } else {
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

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {
  CoreIR::Context* context = CoreIR::newContext();
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

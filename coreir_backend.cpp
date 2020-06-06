#include "coreir_backend.h"

#ifdef COREIR


CoreIR::Wireable* andVals(CoreIR::ModuleDef* def, CoreIR::Wireable* a, CoreIR::Wireable* b) {
  //auto c = def->getContext();
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
  if (vals.size() == 0) {
    return def->addInstance("add_all_" + def->getContext()->getUnique(), "coreir.const", {{"value", COREMK(def->getContext(), BitVec(16, 0))}}, {{"width", COREMK(context, 16)}})->sel("out");
  }

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

void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {

  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  //CoreIRLoadLibrary_cwlib(context);

  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")},
      {"reset", context->BitIn()}};
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);
    //string out_bundle_tp = out_buf.bundle_type_string(out_bundle);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      ub_field.push_back(make_pair(out_bundle + "_valid", context->BitIn()));
      ub_field.push_back(make_pair(out_bundle, context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
    } else {
      ub_field.push_back(make_pair(out_bundle + "_en", context->Bit()));
      ub_field.push_back(make_pair(out_bundle, context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
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
      ub_field.push_back(make_pair(bundle_name + "_en", context->BitIn()));
      ub_field.push_back(make_pair(bundle_name, context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
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
      ub_field.push_back(make_pair(bundle_name + "_valid", context->Bit()));
      ub_field.push_back(make_pair(bundle_name, context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
    }

    CoreIR::RecordType* utp = context->Record(ub_field);
    auto compute_unit =
      ns->newModuleDecl(op->name, utp);
    {
      auto def = compute_unit->newModuleDef();
      // Generate dummy compute logic
      vector<CoreIR::Wireable*> inputs;
      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        string buf_name = bundle.first;
        string bundle_name = bundle.second;
        auto buf = map_find(buf_name, buffers);
        //int pix_width = buf.port_widths;
        int nlanes = buf.lanes_in_bundle(bundle_name);
        //int bundle_width = buf.port_bundle_width(bundle_name);
        CoreIR::Wireable* bsel =
          def->sel("self." + bundle_name);
        for (int l = 0; l < nlanes; l++) {
          //int lo = l*pix_width;
          //int hi = lo + pix_width;
          //assert(hi - lo == pix_width);
          //auto w =
          //  def->addInstance("slice_" + def->getContext()->getUnique(), "coreir.slice", {{"lo", COREMK(context, lo)}, {"hi", COREMK(context, hi)}, {"width", COREMK(context, bundle_width)}});
          inputs.push_back(bsel->sel(l));
        }
      }
      auto result = addList(def, inputs);

      for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
        def->connect(result, def->sel("self")->sel(bundle.second)->sel(0));
      }

      vector<CoreIR::Wireable*> vals;
      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        vals.push_back(def->sel("self." + bundle.second + "_en"));
      }
      auto valid = andList(def, vals);

      for (auto bundle : outgoing_bundles(op, buffers, prg)) {
        def->connect(valid, def->sel("self." + bundle.second + "_valid"));
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
        def->connect("self." + bundle_name, op->name + "." + bundle_name);
        def->connect("self." + bundle_name + "_en", op->name + "." + bundle_name + "_valid");
      } else {
        def->connect(buf_name + "." + bundle_name, op->name + "." + bundle_name);
        def->connect(buf_name + "." + bundle_name + "_en", op->name + "." + bundle_name + "_valid");
      }
    }

    for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);

      assert(buf.is_output_bundle(bundle.second));

      if (prg.is_input(buf_name)) {
        def->connect("self." + bundle_name, op->name + "." + bundle_name);
        def->connect("self." + bundle_name + "_valid", op->name + "." + bundle_name + "_en");
      } else {
        def->connect(buf_name + "." + bundle_name, op->name + "." + bundle_name);
        def->connect(buf_name + "." + bundle_name + "_valid", op->name + "." + bundle_name + "_en");
      }
    }
  }

  ub->setDef(def);

  ub->print();
  //assert(false);
  if(!saveToFile(ns, prg.name + ".json")) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);
}

#endif

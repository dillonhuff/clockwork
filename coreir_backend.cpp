#include "coreir_backend.h"

#ifdef COREIR

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
      ub_field.push_back(make_pair(out_bundle + "_en", context->BitIn()));
      ub_field.push_back(make_pair(out_bundle, context->BitIn()->Arr(pixel_width*pix_per_burst)));
    } else {
      ub_field.push_back(make_pair(out_bundle + "_valid", context->Bit()));
      ub_field.push_back(make_pair(out_bundle, context->Bit()->Arr(pixel_width*pix_per_burst)));
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
      int bundle_width = buf.port_bundle_width(bundle_name);

      cout << "Bundle = " << bundle.second << endl;
      cout << "Possible bundles..." << endl;
      for (auto bndl : buf.port_bundles) {
        cout << tab(1) << bndl.first << endl;
      }
      assert(buf.is_output_bundle(bundle.second));
      ub_field.push_back(make_pair(bundle_name + "_en", context->BitIn()));
      ub_field.push_back(make_pair(bundle_name, context->BitIn()->Arr(bundle_width)));
    }

    for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = map_find(buf_name, buffers);
      int bundle_width = buf.port_bundle_width(bundle_name);

      assert(buf.is_input_bundle(bundle.second));
      ub_field.push_back(make_pair(bundle_name + "_valid", context->Bit()));
      ub_field.push_back(make_pair(bundle_name, context->Bit()->Arr(bundle_width)));
    }

    CoreIR::RecordType* utp = context->Record(ub_field);
    auto compute_unit =
      ns->newModuleDecl(op->name, utp);
    def->addInstance(op->name, compute_unit);

  }

  for (auto& buf : buffers) {
    if (!prg.is_boundary(buf.first)) {
      auto ub_mod = generate_coreir(options, context, buf.second);
      def->addInstance(buf.second.name, ub_mod);
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

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

  //for (auto inpt: buf.get_in_ports()) {
    //ub_field.push_back(make_pair(inpt + "_en", context->BitIn()));
    //ub_field.push_back(make_pair(inpt, context->BitIn()->Arr(buf.port_widths)));
  //}
  //for (auto outpt: buf.get_out_ports()) {
    //ub_field.push_back(make_pair(outpt + "_valid", context->Bit()));
    //ub_field.push_back(make_pair(outpt, context->Bit()->Arr(buf.port_widths)));
  //}

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(prg.name, utp);
  auto def = ub->newModuleDef();

  //buf.generate_coreir(options, def);

  ub->setDef(def);
  if(!saveToFile(ns, prg.name + ".json")) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);
}

#endif

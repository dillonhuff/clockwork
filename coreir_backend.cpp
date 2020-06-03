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

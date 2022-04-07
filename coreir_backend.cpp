#include "coreir_backend.h"
#include "lake_target.h"

#include <set>

#ifdef COREIR
#include "cwlib.h"
#include "cgralib.h"
#include "coreir/libs/float.h"
#include "coreir/libs/float_DW.h"

#include "coreir/passes/analysis/coreirjson.h"

std::ostream* verilog_collateral_file;

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

using CoreIR::Interface;
using CoreIR::Select;
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
using CoreIR::RecordParams;
using CoreIR::RecordType;

static int fully_optimizable = 0;
static int not_fully_optimizable = 0;


template<typename T, typename Q>
void sort_lt_snd_2(std::vector<std::pair<T, Q> >& outputs) {
    dbhc::sort_lt(outputs, [](const std::pair<T,Q> &x){return x.second;});
}

int min_address(affine_controller_ctrl& ctrl) {
  isl_map* acc =
    set_range_name(set_domain_name(to_map(ctrl.access_function), "dom"), "addr");
  isl_set* dom = set_name(cpy(ctrl.dom), "dom");
  return to_int(lexminval(range(its(acc, dom))));
}

int max_address(affine_controller_ctrl& ctrl) {
  isl_map* acc =
    set_range_name(set_domain_name(to_map(ctrl.access_function), "dom"), "addr");
  isl_set* dom = set_name(cpy(ctrl.dom), "dom");
  cout << "acc = " << str(acc) << endl;
  cout << "dom = " << str(dom) << endl;
  isl_set* addrs = range(its(acc, dom));
  cout << "add = " << str(addrs) << endl;
  return to_int(lexmaxval(addrs));
}

struct block_sreg
{
	int init_delay;
	int difference;
	string inpt;
	vector<string> chain_starts;
};

struct M3_config {
  map<int, affine_controller_ctrl> in_port_controllers;
  map<int, affine_controller_ctrl> out_port_controllers;
};

void instantiate_M3_verilog(
    CodegenOptions& options,
    const std::string& long_name,
    map<int, affine_controller_ctrl> in_port_controllers,
    map<int, affine_controller_ctrl> out_port_controllers) {

  std::ostream& out = *verilog_collateral_file;

  for (int count = 0; count < (int) in_port_controllers.size(); count++) {
    string bundle_name = long_name + "_wr_" + str(count);
    generate_fsm(*verilog_collateral_file,
        options,
        bundle_name + "_ctrl",
        "d",
        "valid",
        in_port_controllers[count].sched,
        in_port_controllers[count].dom);
  }

  for (int count = 0; count < out_port_controllers.size(); count++) {
    string bundle_name = long_name + "_rd_" + str(count);
    generate_fsm(*verilog_collateral_file,
        options,
        bundle_name + "_ctrl",
        "d",
        "valid",
        out_port_controllers[count].sched,
        out_port_controllers[count].dom);
  }


  vector<string> port_decls = {};
  port_decls.push_back("input clk");
  port_decls.push_back("input rst_n");
  port_decls.push_back("input clk_en");
  port_decls.push_back("input chain_chain_en");
  for(int i = 0; i < (int) in_port_controllers.size(); i++)
  {
    port_decls.push_back("input [15:0] data_in_" + str(i));
  }
  for(int i = 0; i < (int) out_port_controllers.size(); i++)
  {
    port_decls.push_back("output logic [15:0] data_out_" + str(i));
    port_decls.push_back("output data_out_" + str(i) + "_valid");
  }
  port_decls.push_back("input [15:0] chain_data_in");
  port_decls.push_back("output [15:0] chain_data_out");

  *verilog_collateral_file << "module " << long_name <<" ("<< sep_list(port_decls,"","",",") <<"); "<< endl;
  for (int count = 0; count < (int) out_port_controllers.size(); count++) {
    string bundle_name = long_name + "_rd_" + str(count);

    isl_aff* sched_aff = out_port_controllers[count].sched;

    out << tab(1) << bundle_name + "_ctrl " << bundle_name << "(.clk(clk), .rst_n(rst_n));" << endl;

    isl_aff* ibo = out_port_controllers[count].access_function;

    out << tab(1) << "logic [15:0] " << bundle_name << "_ibo;" << endl;
    //out << tab(1) << "logic " << bundle_name << "_enable_this_port;" << endl;

    std::string ibo_str = codegen_verilog(bundle_name + ".d", ibo);

    out << tab(1) << "assign " << bundle_name << "_ibo = " << ibo_str << ";" << endl;
    //out << tab(1) << "assign " << bundle_name << "_enable_this_port = 1;" << endl;
  }

  for (int count = 0; count < (int) in_port_controllers.size(); count++) {
    string bundle_name = long_name + "_wr_" + str(count);

    isl_aff* sched_aff = in_port_controllers[count].sched;

    out << tab(1) << bundle_name + "_ctrl " << bundle_name << "(.clk(clk), .rst_n(rst_n));" << endl;

    isl_aff* ibo = in_port_controllers[count].access_function;

    out << tab(1) << "logic [15:0] " << bundle_name << "_ibo;" << endl;

    std::string ibo_str = codegen_verilog(bundle_name + ".d", ibo);

    out << tab(1) << "assign " << bundle_name << "_ibo = " << ibo_str << ";" << endl;
  }

  *verilog_collateral_file << endl;

  const int CAPACITY = 1024;

  assert(CAPACITY % 2 == 0);

  const int BANK_CAPACITY = CAPACITY / 2;

  *verilog_collateral_file << tab(1) << "logic [15:0] SRAM_BANK_0 [" << BANK_CAPACITY << ":0];" << endl;
  *verilog_collateral_file << tab(1) << "logic [15:0] SRAM_BANK_1 [" << BANK_CAPACITY << ":0];" << endl;

  for (int i = 0; i < (int) out_port_controllers.size(); i++) {
    *verilog_collateral_file << tab(1) << "logic [15:0] data_out_" << i << "_tmp;" << endl;
  }

  *verilog_collateral_file << tab(1) << "always @(posedge clk) begin" << endl;
  for (int i = 0; i < (int) out_port_controllers.size(); i++) {
    string bn = long_name + "_rd_" + str(i);
    string bundle_name = bn + ".valid";
    out << tab(2) << "if (" << bn << "_ibo[9]) begin" << endl;
    out << tab(2) << "data_out_" << str(i) << "_tmp <= SRAM_BANK_0[" << bn << "_ibo[8:0]" << "];" << endl;
    out << tab(2) << "end else begin" << endl;
    out << tab(2) << "data_out_" << str(i) << "_tmp <= SRAM_BANK_1[" << bn << "_ibo[8:0]" << "];" << endl;
    out << tab(2) << "end" << endl;
    out << tab(2) << "data_out_" + str(i) + "_valid <= " << bundle_name << ";" << endl;



  }

  for (int i = 0; i < (int) in_port_controllers.size(); i++) {
    string bn = long_name + "_wr_" + str(i);
    string bundle_name = bn + ".valid";
    *verilog_collateral_file << tab(2) << "if (" << bundle_name << ") begin" << endl;


    out << tab(3) << "if (" << bn << "_ibo[9]) begin" << endl;
    out << tab(4) << "SRAM_BANK_0[" << bn + "_ibo[8:0]" << "] <= " << "data_in_" << str(i) << ";" << endl;
    out << tab(3) << "end else begin" << endl;
    out << tab(4) << "SRAM_BANK_1[" << bn + "_ibo[8:0]" << "] <= " << "data_in_" << str(i) << ";" << endl;
    out << tab(3) << "end" << endl;


    *verilog_collateral_file << tab(2) << "end" << endl;
  }
  *verilog_collateral_file << tab(1) << "end" << endl;


  *verilog_collateral_file << tab(1) << "assign chain_data_out = 512;" << endl;
  for (int i = 0; i < (int) out_port_controllers.size(); i++) {
    *verilog_collateral_file << tab(1) << "assign data_out_" << i << " = data_out_" << i << "_tmp;" << endl;
  }
  *verilog_collateral_file << "endmodule" << endl << endl;

}

M3_config instantiate_M3_verilog_sreg_block(CodegenOptions& options, const std::string& long_name, int delay, prog& prg,schedule_info& hwinfo,  block_sreg & b_sreg, UBuffer & buf)
{
  assert(verilog_collateral_file != nullptr);
  std::ostream& out = *verilog_collateral_file;

  isl_aff * write_sched = rdaff(prg.ctx,"{[root,t] -> [( root + t + 1 )]}");
  isl_aff * write_addr = rdaff(prg.ctx,"{[root,t] -> [( t )]}");

  isl_aff * rd1_sched = rdaff(prg.ctx, "{[root,t] -> [(root+t + " + str(delay *2  ) + ")]}");
  isl_aff * rd1_addr = rdaff(prg.ctx,"{[root,t] -> [( t )]}");

  isl_aff * rd0_sched = rdaff(prg.ctx, "{[root,t] -> [(root+t + " + str(delay  ) + ")]}");
  isl_aff * rd0_addr = rdaff(prg.ctx,"{[root,t] -> [( t )]}");

  isl_set * dom = rdset(prg.ctx,"{[root,t] : root = 0 and 0 <= t <= 65355 }");

  map<int, affine_controller_ctrl> in_pts{{0, {write_addr, write_sched, dom}}};
  map<int, affine_controller_ctrl> out_pts{
    {1, {rd1_addr, rd1_sched, dom}},
    {0, {rd0_addr, rd0_sched, dom}}};

  instantiate_M3_verilog(
      options,
      long_name,
      in_pts,
      out_pts);

  return {in_pts, out_pts};
}

M3_config instantiate_M3_verilog_sreg(CodegenOptions& options, const std::string& long_name, int delay, prog& prg,schedule_info& hwinfo) {

  assert(verilog_collateral_file != nullptr);

  std::ostream& out = *verilog_collateral_file;

  isl_aff * identity = rdaff(prg.ctx,"{[root,t] -> [( root + t + 1 )]}");
  isl_aff * identity_addr = rdaff(prg.ctx,"{[root,t] -> [( t )]}");

  isl_aff * shifted_identity = rdaff(prg.ctx, "{[root,t] -> [(root+t + " + str(delay  ) + ")]}");
  isl_aff * shifted_identity_addr = rdaff(prg.ctx, "{[root,t] -> [( t )]}");


  isl_set * dom = rdset(prg.ctx,"{[root,t] : root = 0 and 0 <= t <= 65355 }");

  map<int, affine_controller_ctrl> in_pts{{0, {identity_addr, identity, dom}}};
  map<int, affine_controller_ctrl> out_pts{{0, {shifted_identity_addr, shifted_identity, dom}}};
  instantiate_M3_verilog(
      options,
      long_name,
      in_pts,
      out_pts);

  return {in_pts, out_pts};

}


affine_controller_ctrl pack_controller(affine_controller_ctrl& unpacked) {

  if (num_div_dims(unpacked.access_function) == 0) {
    affine_controller_ctrl packed;
    packed.access_function = unpacked.access_function;
    packed.sched = unpacked.sched;
    packed.dom = unpacked.dom;
    return packed;
  } else {
    cout << "Div dims in: " << str(unpacked.access_function) << endl;
    std::map<int, int> split_dims;
    for (int d = 0; d < num_div_dims(unpacked.access_function); d++) {
      auto a = isl_aff_get_div(unpacked.access_function, d);
      cout << tab(2) << "=== div: " << str(a) << endl;
      int denom = to_int(isl_aff_get_denominator_val(a));
      assert(denom == 2);
      cout << tab(3) << "denom = " << denom << endl;
      for (int di = 0; di < num_in_dims(a); di++) {
        if (!is_zero(get_coeff(a, di))) {
          split_dims[di] = denom;
        }
      }
    }


    cout << "Need to split dimensions..." << endl;
    for (auto d : split_dims) {
      cout << tab(1) << d.first << " -> " << d.second << endl;
    }

    vector<int> dom_extents = extents(unpacked.dom);

    vector<string> dvars;
    vector<int> iis;
    vector<int> ranges;
    vector<string> sched_terms;
    vector<string> extent_strs;
    map<int, int> outer_replacements;
    int n = 0;
    for (int d = 0; d < num_in_dims(unpacked.access_function); d++) {
      if (!CoreIR::contains_key(d, split_dims)) {
        dvars.push_back("d" + str(n));
        iis.push_back(to_int(get_coeff(unpacked.sched, d)));
        ranges.push_back(dom_extents.at(d));
        sched_terms.push_back(str(iis.back()) + "*" + dvars.back());
        extent_strs.push_back("0 <= " + dvars.back() + " < " + str(ranges.back()));

        n++;
      } else {
        dvars.push_back("d" + str(n));
        int orig_ii = to_int(get_coeff(unpacked.sched, d));
        iis.push_back(orig_ii * 2);
        ranges.push_back(dom_extents.at(d) / 2);
        sched_terms.push_back(str(iis.back()) + "*" + dvars.back());
        extent_strs.push_back("0 <= " + dvars.back() + " < " + str(ranges.back()));
        outer_replacements[d] = n;
        n++;

        dvars.push_back("d" + str(n));
        iis.push_back(orig_ii);
        ranges.push_back(2);
        sched_terms.push_back(str(iis.back()) + "*" + dvars.back());
        extent_strs.push_back("0 <= " + dvars.back() + " < " + str(ranges.back()));
        n++;
      }
    }

    sched_terms.push_back(str(const_coeff(unpacked.sched)));
    isl_aff* packed_sched =
      rdaff(ctx(unpacked.access_function), curlies(name(unpacked.dom) + bracket_list(dvars) + " -> " + sep_list(sched_terms, "[(", ")]", " + ")));

    isl_set* packed_dom =
      rdset(ctx(unpacked.dom),
          curlies(name(unpacked.dom) + bracket_list(dvars) + " : " + sep_list(extent_strs, "", "", " and ")));
    cout << "Orig sched  : " << str(unpacked.sched) << endl;
    cout << "Packed sched: " << str(packed_sched) << endl;
    cout << "Orig dom    : " << str(unpacked.dom) << endl;
    cout << "Packed dom  : " << str(packed_dom) << endl;

    int rconst = to_int(const_coeff(unpacked.access_function));
    vector<string> terms;
    terms.push_back(str(rconst));

    for (int d = 0; d < num_div_dims(unpacked.access_function); d++) {
      auto a = isl_aff_get_div(unpacked.access_function, d);
      cout << tab(2) << "=== div: " << str(a) << endl;
      int denom = to_int(isl_aff_get_denominator_val(a));
      assert(denom == 2);
      cout << tab(3) << "denom = " << denom << endl;
      for (int di = 0; di < num_in_dims(a); di++) {
        if (!is_zero(get_coeff(a, di))) {
          auto rcoeff = get_coeff(a, di);
          int v;
          if (isl_val_is_int(rcoeff)) {
            v = to_int(rcoeff);
          } else {
            v = isl_val_get_num_si(rcoeff);
          }

          terms.push_back(str(const_coeff(a)));
          terms.push_back(str(v) + "*d" + str(outer_replacements[di]));
          //split_dims[di] = denom;
        }
      }
    }
    //isl_aff* aff = rdaff(ctx(packed_dom),
        //curlies(name(unpacked.dom) + bracket_list(dvars) + " -> " + sep_list(terms, "[(", ")]", " + "))
        //);
    //cout << "New acc: " << str(aff) << endl;
    isl_aff* aff = rdaff(ctx(packed_dom),
        "{ " + name(packed_dom) + "[root, y, yi, x, xi] -> [(64y + x)] }");
    //assert(false);

    // acc, sched, dom
    return {aff, packed_sched, packed_dom};
  }

}

M3_config instantiate_M3_verilog(CodegenOptions& options, const std::string& long_name, const int b, EmbarrassingBankingImpl& impl, UBuffer& buf, prog& prg,
    map<pair<string, int>, int> ubuffer_port_and_bank_to_bank_port,
    schedule_info& hwinfo) {

  assert(verilog_collateral_file != nullptr);

  std::ostream& out = *verilog_collateral_file;

  map<int, affine_controller_ctrl> in_port_controllers;
  map<int, affine_controller_ctrl> out_port_controllers;

  for(auto pt : impl.bank_writers[b]) {
    int count = dbhc::map_find({pt, b}, ubuffer_port_and_bank_to_bank_port);
    string port_rep = pt;
    string op_rep_name = domain_name(to_map(buf.access_map.at(port_rep)));
    op* rep = prg.find_op(op_rep_name);
    isl_set* dom = to_set(domain(buf.access_map.at(port_rep)));

    auto adjusted_buf = write_latency_adjusted_buffer(options, prg, buf, hwinfo);
    isl_aff* sched_aff =
      get_aff(adjusted_buf.schedule.at(pt));


    isl_aff* ibo = inner_bank_offset_aff(pt, adjusted_buf, impl);
    isl_aff* bank_selector = bank_offset_aff(pt, adjusted_buf, impl);

    isl_map* sel_map = its(to_map(bank_selector), dom);
    isl_map* ms = isl_map_fix_si(sel_map, isl_dim_out, 0, b);
    isl_set* restricted_dom = domain(ms);

    vector<int> lens = extents(restricted_dom);
    vector<int> min_vals = mins(restricted_dom);
    isl_point* lmin = lexminpt(restricted_dom);
    int offset = 0;
    for (int d = 0; d < num_dims(restricted_dom); d++) {
      int min = min_vals.at(d);
      offset += min*to_int(get_coeff(sched_aff, d));
    }
    isl_aff* normed_sched = add(sched_aff, offset);
    vector<string> dvs;
    vector<string> range_constraints;
    for (int d = 0; d < num_dims(restricted_dom); d++) {
      dvs.push_back("d" + str(d));
      range_constraints.push_back("0 <= " + dvs.back() + " < " + str(lens.at(d)));
    }
    string dom_str = curlies(name(restricted_dom) + bracket_list(dvs) + " : " + sep_list(range_constraints, "", "", " and "));
    isl_set* normed_dom = rdset(prg.ctx, dom_str);
    affine_controller_ctrl ctrl{ibo, normed_sched, normed_dom};
    in_port_controllers[count] = pack_controller(ctrl);
  }

  for(auto pt : impl.bank_readers[b]) {
    int count = dbhc::map_find({pt, b}, ubuffer_port_and_bank_to_bank_port);
    string port_rep = pt;
    string op_rep_name = domain_name(to_map(buf.access_map.at(port_rep)));
    op* rep = prg.find_op(op_rep_name);
    isl_set* dom = to_set(domain(buf.access_map.at(port_rep)));

    isl_aff* sched_aff =
      get_aff(buf.schedule.at(pt));

    isl_aff* ibo = inner_bank_offset_aff(pt, buf, impl);
    isl_aff* bank_selector = bank_offset_aff(pt, buf, impl);

    isl_map* sel_map = its(to_map(bank_selector), dom);
    isl_map* ms = isl_map_fix_si(sel_map, isl_dim_out, 0, b);
    isl_set* restricted_dom = domain(ms);
    vector<int> lens = extents(restricted_dom);
    vector<int> min_vals = mins(restricted_dom);
    isl_point* lmin = lexminpt(restricted_dom);
    int offset = 0;
    for (int d = 0; d < num_dims(restricted_dom); d++) {
      int min = min_vals.at(d);
      offset += min*to_int(get_coeff(sched_aff, d));
    }
    isl_aff* normed_sched = add(sched_aff, offset);
    vector<string> dvs;
    vector<string> range_constraints;
    for (int d = 0; d < num_dims(restricted_dom); d++) {
      dvs.push_back("d" + str(d));
      range_constraints.push_back("0 <= " + dvs.back() + " < " + str(lens.at(d)));
    }
    string dom_str = curlies(name(restricted_dom) + bracket_list(dvs) + " : " + sep_list(range_constraints, "", "", " and "));
    isl_set* normed_dom = rdset(prg.ctx, dom_str);

    affine_controller_ctrl ctrl{ibo, normed_sched, normed_dom};
    out_port_controllers[count] = pack_controller(ctrl);
  }


  instantiate_M3_verilog(
      options,
      long_name,
      in_port_controllers,
      out_port_controllers);

  return {in_port_controllers, out_port_controllers};
}

Instance* generate_controller_verilog(CodegenOptions& options, ModuleDef* def, const std::string& name, isl_aff* aff, isl_set* dom) {
  auto c = def->getContext();
  Instance* controller;
  auto aff_c = affine_controller_def(c, dom, aff);
  aff_c->print();
  controller = def->addInstance(name, aff_c);

  assert(verilog_collateral_file != nullptr);
  generate_fsm(*verilog_collateral_file, options, controller->getModuleRef()->getName(), "d", "valid", aff, dom);

  def->connect(controller->sel("rst_n"), def->sel("self.rst_n"));
  def->connect(controller->sel("flush"), def->sel("self.flush"));

  json tile_config;
  for (int d = 0; d < num_in_dims(aff); d++) {
    tile_config["coeff_" + str(d)] = to_int(get_coeff(aff, d));
  }
  tile_config["const"] = to_int(const_coeff(aff));
  int d = 0;
  for (auto e : extents(dom)) {
    tile_config["extent_" + str(d)] = e;
    d++;
  }
  controller->getMetaData()["config"] =
    tile_config;
  return controller;
}

CoreIR::Wireable* inner_control_vars(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
  string bundle = buf.container_bundle(reader);
  //return def->sel("self." + bundle + "_ctrl_vars");
  return def->sel(bundle + "_ctrl.d");
}

CoreIR::Wireable* inner_control_en(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
  string bundle = buf.container_bundle(reader);
  if (buf.is_in_pt(reader)) {
    //return def->sel("self." + bundle + "_wen");
    return def->sel(bundle + "_ctrl.valid");
  } else {
    //return def->sel("self." + bundle + "_ren");
    return def->sel(bundle + "_ctrl.valid");
  }
}

Wireable* eqConst(ModuleDef* def, Wireable* val, const int b) {
  auto c = def->getContext();
  auto eq = def->addInstance("eq_const" + c->getUnique(), "coreir.eq", {{"width", COREMK(c, 16)}});
  def->connect(eq->sel("in0"), val);
  def->connect(eq->sel("in1"), mkConst(def, 16, b));
  return eq->sel("out");
}

bool is_register_file(UBuffer& buf, const EmbarrassingBankingImpl& impl) {
  if (impl.partition_dims.size() < buf.logical_dimension()) {
    return false;
  }
  assert(impl.partition_dims.size() == buf.logical_dimension());
  return true;
}

bool all_constant_accesses(UBuffer& buf) {
  for (auto pt : buf.get_all_ports()) {
    cout << "Port: " << pt << endl;
    isl_multi_aff* acc = get_multi_aff(buf.access_map.at(pt));
    if (!is_cst(acc)) {
      return false;
    }
  }
  return true;
}

EmbarrassingBankingImpl build_buffer_impl(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  UBufferImpl impl;
  dbhc::maybe<std::set<int> > embarassing_banking =
    embarassing_partition(buf);
  bool has_embarassing_partition = embarassing_banking.has_value();
  if (has_embarassing_partition) {
    if (embarassing_banking.get_value().size() == buf.logical_dimension()) {
      cout << buf.name << " is really a register file" << endl;
    }
    auto emb_impl = static_cast<EmbarrassingBankingImpl>(impl);

    emb_impl.partition_dims = embarassing_banking.get_value();
    auto bank_map = build_buffer_impl_embarrassing_banking(buf, hwinfo, emb_impl);
    return emb_impl;
  } else {
    cout << "Use exhaustive banking! " << endl;
    buf.generate_banks_and_merge(options);
    buf.parse_exhaustive_banking_into_impl(impl);
    cout << "After exhaustive banking:\n " << impl << endl;
    return static_cast<EmbarrassingBankingImpl>(impl);
    //cout << "CANNOT support by current banking strategies!" << endl;
  }
}


int wire_width(CoreIR::Wireable* w) {
  auto tp = w->getType();
  if (isBit(tp)) {
    return 1;
  } else if (isa<ArrayType>(tp)) {
    cout << "Casting to array..." << endl;

    auto atp = static_cast<ArrayType*>(tp);
    int len = atp->getLen();
    return len;
  }
  assert(false);
}

void generate_M1_coreir(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& orig_buf, schedule_info& hwinfo);

Wireable* mkOneHot(ModuleDef* def, vector<Wireable*>& conds, vector<Wireable*>& vals) {
  assert(vals.size() == conds.size());

  auto c = def->getContext();

  if (conds.size() == 1) {
    //def->connect(def->sel(conn.first + "_net.in"), pick(conn.second));
    return vals.at(0);
  } else {
    cout << "Conds size = " << conds.size() << endl;
    assert(conds.size() == 3);
    //Wireable* out = def->sel(conn.first + "_net.in");

    auto snd_mux =
      def->addInstance("chain_mux" + c->getUnique(), "coreir.mux", {{"width", CoreIR::Const::make(c, 16)}});
    def->connect(snd_mux->sel("in0"), vals[1]);
    def->connect(snd_mux->sel("in1"), vals[2]);
    def->connect(snd_mux->sel("sel"), conds[2]);

    auto last_mux =
      def->addInstance("chain_mux" + c->getUnique(), "coreir.mux", {{"width", CoreIR::Const::make(c, 16)}});
    def->connect(last_mux->sel("in0"), snd_mux->sel("out"));
    def->connect(last_mux->sel("in1"), vals[0]);
    def->connect(last_mux->sel("sel"), conds[0]);

    return last_mux->sel("out");
    //def->connect(last_mux->sel("out"), out);
  }
}

map<pair<string, int>, int>
build_ubuffer_to_bank_binding(const UBufferImpl& impl) {
  int num_banks = impl.get_bank_num();
  map<pair<string, int>, int> ubuffer_port_and_bank_to_bank_port;
  map<int, int> bank_to_next_available_out_port;
  map<int, int> bank_to_next_available_in_port;
  for (int b = 0; b < num_banks; b++) {
    bank_to_next_available_out_port[b] = 0;
    bank_to_next_available_in_port[b] = 0;
  }
  for (auto pt_srcs : impl.inpt_to_bank) {
    string pt = pt_srcs.first;
    for (int b : pt_srcs.second) {
      ubuffer_port_and_bank_to_bank_port[{pt, b}] =
        dbhc::map_find(b, bank_to_next_available_in_port);
      bank_to_next_available_in_port[b]++;
    }
  }
  for (auto bp : bank_to_next_available_in_port) {
    cout << tab(1) << bp.first << " -> " << bp.second << endl;
    assert(bp.second <= 2);
  }
  for (auto pt_srcs : impl.outpt_to_bank) {
    string pt = pt_srcs.first;
    for (int b : pt_srcs.second) {
      ubuffer_port_and_bank_to_bank_port[{pt, b}] =
        dbhc::map_find(b, bank_to_next_available_out_port);
      bank_to_next_available_out_port[b]++;
    }
  }
  for (auto bp : bank_to_next_available_out_port) {
    cout << tab(1) << bp.first << " -> " << bp.second << endl;
    assert(bp.second <= 2);
  }
  return ubuffer_port_and_bank_to_bank_port;
}

json controller_metadata(affine_controller_ctrl& ctrl) {
    json port_config;
    vector<int> dom_lens = extents(ctrl.dom);
    for (int d = 0; d < (int) dom_lens.size(); d++) {
      port_config["extent_" + str(d)] = dom_lens.at(d);
      int ii = to_int(get_coeff(ctrl.sched, d));
      port_config["ii_" + str(d)] = ii;

      int stride = to_int(get_coeff(ctrl.access_function, d));
      port_config["stride_" + str(d)] = ii;
    }
    port_config["sched_offset"] = to_int(const_coeff(ctrl.sched));
    port_config["stride_offset"] = to_int(const_coeff(ctrl.access_function));
    return port_config;

}

void attach_M3_bank_config_metadata(Instance* currbank, M3_config& bank_config) {
  json tile_config;
  int min_addr = INT_MAX;
  int max_addr = INT_MIN;
  int num_accesses = 0;
  for (auto pt : bank_config.in_port_controllers) {
    json port_config = controller_metadata(pt.second);
    tile_config["in_port_" + str(pt.first)] = port_config;
    min_addr = min(min_addr, min_address(pt.second));
    max_addr = max(min_addr, max_address(pt.second));
    num_accesses += card(extents(pt.second.dom));
  }
  for (auto pt : bank_config.out_port_controllers) {
    json port_config = controller_metadata(pt.second);
    tile_config["out_port_" + str(pt.first)] = port_config;
    min_addr = min(min_addr, min_address(pt.second));
    max_addr = max(min_addr, max_address(pt.second));
    num_accesses += card(extents(pt.second.dom));
  }
  cout << "Min address of ctrl: " << min_addr << endl;
  cout << "Max address of ctrl: " << max_addr << endl;
  tile_config["min_addr"] = min_addr;
  tile_config["max_addr"] = max_addr;
  tile_config["num_accesses"] = num_accesses;
  currbank->getMetaData()["config"] = tile_config;
  //assert(false);
}

void generate_M3_coreir(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& orig_buf, schedule_info& hwinfo) {
  CoreIR::Context* c = def->getContext();
  for (auto out : orig_buf.get_out_ports()) {
    auto w = def->addInstance(out + "_net", "coreir.wire", {{"width", COREMK(c, 16)}});
    def->connect(
        w->sel("out"),
        def->sel("self." + orig_buf.container_bundle(out) + "." + str(orig_buf.bundle_offset(out))));
  }

  std::set<string> done_outpt = generate_M1_shift_registers(options, def, prg, orig_buf, hwinfo);
  if (orig_buf.name == "padded16_global_wrapper_stencil") {
    cout << "# of out ports: " << orig_buf.get_out_ports().size() << endl;
    cout << "# of shift registered ports: " << done_outpt.size() << endl;
    //assert(false);
  }

  UBuffer buf = delete_ports(done_outpt, orig_buf);

  if (buf.num_out_ports() > 0) {
    auto impl = build_buffer_impl(options, prg, buf, hwinfo);
    //auto impl = implm.first;

    map<pair<string, int>, int> ubuffer_port_and_bank_to_bank_port =
      build_ubuffer_to_bank_binding(impl);

    //int num_banks = 1;
    //for (auto ent : impl.partitioned_dimension_extents) {
    //  num_banks *= ent.second;
    //}
    int num_banks = impl.get_bank_num();

    M1_sanity_check_port_counts(impl);

    map<int, std::set<string> > bank_readers = impl.bank_readers;
    map<int, std::set<string> > bank_writers = impl.bank_writers;
    map<string, std::set<int>> outpt_to_bank = impl.outpt_to_bank;
    map<string, std::set<int>> inpt_to_bank = impl.inpt_to_bank;

    map<pair<int, int>, Instance*> bank_and_port_output_addrgen;
    map<pair<int, int>, Instance*> bank_and_port_input_addrgen;

    map<pair<int, int>, Wireable*> bank_and_port_output_data_valid;
    map<pair<int, int>, Wireable*> bank_and_port_input_data_valid;

    map<pair<int, int>, Wireable*> bank_and_port_to_agen;

    map<pair<int, int>, Wireable*> bank_and_port_to_read_enable;
    map<pair<int, int>, Wireable*> bank_and_port_to_read_agen;

    Select* one = def->addInstance("one_cst", "corebit.const", {{"value", COREMK(c, true)}})->sel("out");
    Select* zero = def->addInstance("zero_cst", "corebit.const", {{"value", COREMK(c, false)}})->sel("out");

    map<int, Instance*> bank_map;
    for (int b = 0; b < num_banks; b++) {
      Values tile_params{{"width", COREMK(c, 16)},
        {"ID", COREMK(c, buf.name + "_" + str(b))},
        {"has_external_addrgen", COREMK(c, false)},
        {"num_inputs",COREMK(c,bank_writers[b].size())},
        {"num_outputs",COREMK(c,bank_readers[b].size())},
        {"has_read_valid", COREMK(c, true)}};

      CoreIR::Instance * currbank = def->addInstance("bank_" + str(b), "cgralib.Mem_amber", tile_params);
      def->connect(currbank->sel("chain_chain_en"),zero);

      auto bank_config = instantiate_M3_verilog(options, currbank->getModuleRef()->getLongName(), b, impl, buf, prg, ubuffer_port_and_bank_to_bank_port, hwinfo);
      attach_M3_bank_config_metadata(currbank, bank_config);

      bank_map[b] = currbank;
      def->connect(currbank->sel("clk_en"),one);
      def->connect(currbank->sel("rst_n"),def->sel("self.rst_n"));
      def->connect(def->sel("bank_" + str(b) + ".chain_data_in"), mkConst(def,16,0));
    }

    for (int b = 0; b < num_banks; b++) {
      auto currbank = bank_map[b];
      for(auto pt : bank_writers[b]) {
        int count = dbhc::map_find({pt, b}, ubuffer_port_and_bank_to_bank_port);
        def->connect(
            currbank->sel("data_in_" + str(count)),
            def->sel("self." + buf.container_bundle(pt) + "." + str(buf.bundle_offset(pt))));
      }
    }

    for (auto pt : buf.get_out_ports()) {
      auto src_banks = impl.outpt_to_bank[pt];
      vector<Wireable*> conds;
      vector<Wireable*> values;
      for (auto b : src_banks) {
        int count = dbhc::map_find({pt, b}, ubuffer_port_and_bank_to_bank_port);
        conds.push_back(bank_map[b]->sel("data_out_" + str(count) + "_valid"));
        values.push_back(def->sel("bank_" + str(b) + ".data_out_" + str(count)));
      }

      assert(conds.size() == values.size());
      if (conds.size() == 0) {
        continue;
      }
      Wireable* out = def->sel(pt + "_net.in");

      cout << "Making onehot for " << pt << " on " << buf.name << endl;
      def->connect(out, mkOneHot(def, conds, values));
    }
  }
}

CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  auto ns = context->getNamespace("global");

  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")},
      {"flush", context->BitIn()},
      {"rst_n", context->BitIn()}};

  for (auto b : buf.port_bundles) {
    int pt_width = buf.port_widths;
    int bd_width = buf.lanes_in_bundle(b.first);
    string name = b.first;
    string pt_rep = pick(b.second);
    auto acc_maps = get_maps(buf.access_map.at(pt_rep));
    assert(acc_maps.size() > 0);
    int control_dimension = num_in_dims(pick(acc_maps));
    if (buf.is_input_bundle(b.first)) {
      if (options.rtl_options.target_tile == TARGET_TILE_M3) {
      } else if (options.rtl_options.use_external_controllers) {
        ub_field.push_back(make_pair(name + "_wen", context->BitIn()));
        ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(CONTROLPATH_WIDTH)->Arr(control_dimension)));
      }
      ub_field.push_back(make_pair(name, context->BitIn()->Arr(pt_width)->Arr(bd_width)));
    } else {
      if (options.rtl_options.target_tile == TARGET_TILE_M3) {
      } else if (options.rtl_options.use_external_controllers) {
        ub_field.push_back(make_pair(name + "_ren", context->BitIn()));
        ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(CONTROLPATH_WIDTH)->Arr(control_dimension)));
      }
      ub_field.push_back(make_pair(name, context->Bit()->Arr(pt_width)->Arr(bd_width)));
    }
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(buf.name + "_ub", utp);
  auto def = ub->newModuleDef();

  if (options.rtl_options.target_tile == TARGET_TILE_PLATONIC ||
      options.rtl_options.target_tile == TARGET_TILE_BRAM ||
      options.rtl_options.target_tile == TARGET_TILE_GENERIC_SRAM) {
    assert(verilog_collateral_file != nullptr);
    cout << "Verilog collateral file = " << verilog_collateral_file << endl;
    generate_platonic_ubuffer(*verilog_collateral_file, options, prg, buf, hwinfo);
  } else if (options.rtl_options.target_tile == TARGET_TILE_M3) {
    generate_M3_coreir(options, def, prg, buf, hwinfo);
  } else if (options.rtl_options.target_tile == TARGET_TILE_M1) {
    generate_M1_coreir(options, def, prg, buf, hwinfo);
  } else {
    generate_synthesizable_functional_model(options, buf, def, hwinfo);
  }

  ub->setDef(def);
  return ub;
}

//Assumes common has been loaded
void load_mem_ext(Context* c) {
  //Specialized extensions
  /*Generator* lbmem = c->getGenerator("memory.rowbuffer");
  lbmem->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    uint depth = args.at("depth")->get<int>();
    ASSERT(width==DATAPATH_WIDTH,"NYI Non 16 bit width");
    Values rbGenargs({{"width",Const::make(c,width)},{"total_depth",Const::make(c,1024)}});
    nlohmann::json jdata;
    def->addInstance("cgramem","cgralib.Mem_jade",
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
    ASSERT(width==DATAPATH_WIDTH,"NYI Non 16 bit width");
    Values rbGenargs({{"width",Const::make(c,width)},{"total_depth",Const::make(c,1024)}});
    def->addInstance("cgramem","cgralib.Mem_jade",
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
    def->addInstance("cgramem","cgralib.Mem_jade",
      rbGenargs,
      {{"mode",Const::make(c,"sram")}});
    def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}});
    def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.rdata","cgramem.rdata");
    def->connect("self.ren","cgramem.ren");
    def->connect("self.raddr","cgramem.addr");
    def->connect("self.wdata","cgramem.wdata");
    def->connect("self.wen","cgramem.wen");
  });*/

  Generator* rom = c->getGenerator("memory.rom2");
  rom->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    Values rbGenargs({{"width",Const::make(c,width)}, {"is_rom", Const::make(c,true)}});
    Json config;
    config["mode"] = "sram";
    def->addInstance("cgramem","cgralib.Mem", rbGenargs,
      {{"mode", Const::make(c,"lake")},
      {"init", def->getModule()->getArg("init")},
      {"config", Const::make(c, config)}});
    //def->addInstance("c1","corebit.const",{{"value",Const::make(c,true)}});
    //def->addInstance("c0","corebit.const",{{"value",Const::make(c,false)}});
    def->connect("self.rdata","cgramem." + lake_port_map.at("data_out_0"));
    def->connect("self.ren","cgramem." + lake_port_map.at("ren_in_0"));
    def->connect("self.raddr", "cgramem." + lake_port_map.at("addr_in_0"));
  });
}

void load_commonlib_ext(Context* c) {
  Generator* smax = c->getGenerator("commonlib.smax");
  smax->setGeneratorDefFromFun([](Context* c, Values args, ModuleDef* def) {
    uint width = args.at("width")->get<int>();
    ASSERT(width==DATAPATH_WIDTH,"NYI non 16");
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
    ASSERT(width==DATAPATH_WIDTH,"NYI non 16");
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
    ASSERT(width==DATAPATH_WIDTH,"NYI non 16");
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

  load_mem_ext(c);
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

CoreIR::Wireable* addVals(CoreIR::ModuleDef* def, CoreIR::Wireable* a, CoreIR::Wireable* b, int width) {
  auto context = def->getContext();
  auto ad = def->addInstance("add_all_" + def->getContext()->getUnique(), "coreir.add", {{"width", COREMK(context, width)}});
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


CoreIR::Wireable* addList(CoreIR::ModuleDef* def, const std::vector<CoreIR::Wireable*>& vals, int width) {
  if (vals.size() == 0) {
    return mkConst(def, width, 0);
  }
  assert(vals.size() > 0);
  auto context = def->getContext();
  CoreIR::Wireable* val = nullptr;

  if (vals.size() == 1) {
    return vals[0];
  }

  val = vals[0];
  for (int i = 1; i < ((int) vals.size()); i++) {
    val = addVals(def, val, vals[i], width);
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

void generate_coreir_compute_unit(CodegenOptions& options, bool found_compute,
        CoreIR::ModuleDef* def, op* op, prog& prg, map<string, UBuffer>& buffers, schedule_info& hwinfo) {
  auto context = def->getContext();
  auto ns = context->getNamespace("global");

  cout << "Generating compute unit for " << op->name << endl;

  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};

  // add pass through valid
  if (options.pass_through_valid) {
      ub_field.push_back({"valid_pass_in", context->BitIn()});
      ub_field.push_back({"valid_pass_out", context->Bit()});
  }
  for (auto var : op->index_variables_needed_by_compute) {
    ub_field.push_back({var, context->BitIn()->Arr(16)});
  }
  for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
    string buf_name = bundle.first;
    string bundle_name = bundle.second;
    auto buf = dbhc::map_find(buf_name, buffers);
    int pixel_width = buf.port_widths;
    int pix_per_burst =
      buf.lanes_in_bundle(bundle_name);

    assert(buf.is_output_bundle(bundle.second));
    ub_field.push_back(make_pair(buf_name + "_" + bundle_name, context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
  }

  for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
    string buf_name = bundle.first;
    string bundle_name = bundle.second;
    auto buf = dbhc::map_find(buf_name, buffers);
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
    if (options.pass_through_valid) {
      //TODO: check the computation kernel delay
      def->connect(def->sel("self.valid_pass_in"), def->sel("self.valid_pass_out"));
    }
    if (found_compute) {
      cout << "Found compute file for " << prg.name << endl;
      Instance* halide_cu = nullptr;
      if (hwinfo.use_metamapper) {
        halide_cu = def->addInstance("inner_compute", ns->getModule(op->func));
      } else {
        if (options.rtl_options.use_pipelined_compute_units) {
          halide_cu = def->addInstance("inner_compute", ns->getModule(op->func + "_pipelined"));
        } else {
          halide_cu = def->addInstance("inner_compute", ns->getModule(op->func));
        }
      }
      assert(halide_cu != nullptr);

      for (auto var : op->index_variables_needed_by_compute) {
        def->connect(halide_cu->sel(var), def->sel("self")->sel(var));
      }

      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        auto buf = dbhc::map_find(bundle.first, buffers);
        cout << "Looking for connection for " << buf.name << "." << bundle.second << endl;

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
        if (!found) {
          cout << tab(1) << "No connection found for: " << pg(bundle) << endl;
        }
        assert(found);
      }

      cout << "More than oune outgoing bundle" << endl;
      for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
        auto buf = dbhc::map_find(bundle.first, buffers);
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
      inlineInstance(halide_cu);
    } else {
      // Generate dummy compute logic
      cout << "generating dummy compute" << endl;
      vector<CoreIR::Wireable*> inputs;
      for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
        string buf_name = bundle.first;
        string bundle_name = bundle.second;

        cout << tab(1) << "buf = " << buf_name << ", bundle = " << bundle_name << endl;

        auto buf = dbhc::map_find(buf_name, buffers);
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
      auto result = addList(def, inputs, CONTROLPATH_WIDTH);

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

CoreIR::Wireable* op_control_wires(Instance* ctrl) {
    string mode = ctrl->getMetaData()["mode"];
    if (mode == "lake") {
        return ctrl->sel("stencil_valid");
    } else if (mode == "lake_dp") {
        return ctrl->sel("valid_out_pond");
    } else {
        cout << "Config mode: " << mode << "Not implemented" << endl;
        assert(false);
    }
}

void connect_op_control_wires(CodegenOptions& options, ModuleDef* def, op* op, schedule_info& hwinfo, Instance* controller) {
  cout << "Find compute" << endl;
  //int op_latency = dbhc::map_find(op->name, hwinfo.op_compute_unit_latencies);
  int op_latency = hwinfo.compute_latency(op);
  //dbhc::map_find(op->name, hwinfo.op_compute_unit_latencies);
  int read_latency =
    op->buffers_read().size() == 0 ? 0 :
    hwinfo.load_latency(pick(op->buffers_read()));
    //dbhc::map_find(pick(op->buffers_read()), hwinfo.buffer_load_latencies);
    cout << "Done Finding compute , op Latency : " << op_latency
        << ", read Latency: " << read_latency << endl;

  if (!controller->getModuleRef()->isGenerated()) {
    Wireable* op_start_wire = controller->sel("valid");
    Wireable* op_start_loop_vars = controller->sel("d");
    if (!options.rtl_options.use_external_controllers) {
        def->connect(controller->sel("rst_n"), def->sel("self.reset"));
    }

    cout << "Delaying read" << endl;
    Wireable* read_start_wire =
      delay_by(def, read_start_name(op->name), op_start_wire, 0);
    Wireable* read_start_loop_vars =
      delay_by(def, read_start_control_vars_name(op->name), op_start_loop_vars, 0);

    cout << "Delaying exe" << endl;
    Wireable* exe_start_wire =
      delay_by(def, exe_start_name(op->name), op_start_wire, read_latency);
    Wireable* exe_start_loop_vars =
      delay_by(def, exe_start_control_vars_name(op->name), op_start_loop_vars, read_latency);

    cout << "Delaying writes" << endl;
    Wireable* write_start_wire =
      delay_by(def, write_start_name(op->name), op_start_wire, read_latency + op_latency);
    Wireable* write_start_loop_vars =
      delay_by(def, write_start_control_vars_name(op->name), op_start_loop_vars, read_latency + op_latency);
  } else {
    //Wireable* op_start_wire = controller->sel("stencil_valid");
    Wireable* op_start_wire = op_control_wires(controller);
    cout << "Delaying read" << endl;
    Wireable* read_start_wire =
      delay_by(def, read_start_name(op->name), op_start_wire, 0);
    cout << "Delaying exe" << endl;
    Wireable* exe_start_wire =
      delay_by(def, exe_start_name(op->name), op_start_wire, read_latency);
    cout << "Delaying writes" << endl;
    //op latency has been taken into the stencil valid signal
    Wireable* write_start_wire =
      //delay_by(def, write_start_name(op->name), op_start_wire, read_latency + op_latency);
      delay_by(def, write_start_name(op->name), op_start_wire, read_latency);
  }

  //auto c = def->getContext();
  //wirebit(def, read_start_name(op->name), op_start_wire);
  //auto exe_start = delaybit(def, exe_start_name(op->name), op_start_wire);

  //auto write_start = delay_by(def, write_start_name(op->name), exe_start, op_latency);

  //delay_by(def,
      //write_start_control_vars_name(op->name),
      //op_start_loop_vars,
      //1);
  //delay_by(def,
      //exe_start_control_vars_name(op->name),
      //op_start_loop_vars,
      //1);
}

//TODO: Remove this hack naming method after ross update coreIR
string get_coreir_genenerator_name(const string & name) {
  string v_name = take_from(name, ": ");
  v_name = take_until_str(v_name, "Type");
  v_name = trim(v_name);
  v_name = trim(v_name, "\n");
  v_name = ReplaceString(v_name, ".", "_");
  v_name = ReplaceString(v_name, "(","__");
  v_name = ReplaceString(v_name, ":", "");
  v_name = ReplaceString(v_name, ", ", "__");
  v_name = ReplaceString(v_name, ")", "");
  cout << "Verilog module type: " << v_name << endl;
  return v_name;
}

/* Helper function for generating csv
 * */
void emit_lake_config2csv(json data, ofstream& out) {
    cout << "\t\tEnter the specific controller" << endl;
    for (auto it = data.begin(); it != data.end(); ++it) {
        cout << "\t\t\tFeature: " << it.key() << ", val: " << it.value() << endl;
        //cout << "\t\t\tis array" << it.value().is_array() << endl;
        auto data_domain = it.value();
        string key = it.key();
        if (data_domain.is_array()) {
          int cnt = 0;
          for (auto data_it : data_domain) {
            //cout << tab(2) << "\""+key+"_"+to_string(cnt)+"\"," << data_it << ",0"<< endl;
            if (data_domain.size() == 1 && contains(key, "starting_addr" ))
              out << "\""+key+"\"," << data_it << ",0"<< endl;
            else
              out << "\""+key+"_"+to_string(cnt)+"\"," << data_it << ",0"<< endl;
            cnt ++;
          }
        } else {
            //cout << tab(2) << "\""+key+"\"," << data_domain << ",0"<< endl;
            out << "\""+key+"\"," << data_domain << ",0"<< endl;
        }
    }
}


void emit_lake_config_collateral(CodegenOptions options, string tile_name, json config_file) {
    cout << "\tGenerate collateral for buffer: " << tile_name << endl;
    string file_dir = options.dir + "lake_collateral/" + tile_name;
    cmd("rm -rf " + file_dir);
    cmd("mkdir -p " + file_dir);
    ofstream out_config(file_dir + "/" + "config.json");
    out_config << config_file << endl;
    out_config.close();
    for (auto it = config_file.begin(); it != config_file.end(); ++it) {
        if (it.key() == "init" || it.key() == "mode" || it.key() == "chain_en")
            continue;
        cout << "\t\tconfig key: " << it.key() << ", " << it.value() << endl;
        ofstream out(file_dir + "/" + it.key() + ".csv");
        emit_lake_config2csv(it.value(), out);
        out.close();
    }
}
void add_init_code(ofstream& lake_new, string keyword) {
    if (contains(keyword, "sp")) {
      lake_new << "//Add initial block here" << endl;
      lake_new << "initial begin" << endl;
      lake_new << tab(1) << "integer i = 0;" << endl;
      lake_new << tab(1) << "for(i = 0; i < 512; i ++) begin" << endl;
      lake_new << tab(2) << "integer big_addr = i >> 2;" << endl;
      lake_new << tab(2) << "integer small_addr = (i & 3) << 4;" << endl;
      //lake_new << tab(2) << "data_array[big_addr][small_addr] = i;" << endl;
      lake_new << tab(2) << "data_array[big_addr][small_addr +: 8] = i;" << endl;
      lake_new << tab(1) << "end" << endl << "end" << endl;
    } else {
      lake_new << "//Add initial block here" << endl;
      lake_new << "initial begin" << endl;
      lake_new << tab(1) << "integer i = 0;" << endl;
      lake_new << tab(1) << "for(i = 0; i < 512; i ++) begin" << endl;
      //lake_new << tab(2) << "data_array[big_addr][small_addr] = i;" << endl;
      lake_new << tab(2) << "data_array[i] = i;" << endl;
      lake_new << tab(1) << "end" << endl << "end" << endl;
    }
}

void add_default_initial_block(string filename, string keyword) {
    //ifstream lake_top("LakeTop_W.v");
    //ofstream lake_new("LakeTop_W_new.v");
    ifstream lake_top(filename + ".sv");
    ofstream lake_new(filename + "_new.sv");
    string loc;
    bool find_macro = false;
    if (lake_top.is_open() && lake_new.is_open()) {
        while(getline(lake_top, loc) ) {
            //if (loc == "endmodule   // sram_stub") {
            //TODO: this is a little hacky, we need to find a better way to init
            //if (loc == "endmodule   // sram_sp__0") {
            if (loc == keyword) {
                find_macro = true;
                add_init_code(lake_new, keyword);
            }
            lake_new << loc << endl;
        }
        if (!find_macro) {
          cout << "Cannot find sram macro in the generated laketop.sv" << endl;
          assert(false);
        }

        lake_top.close();
        lake_new.close();
    } else {
        cout << "Cannot open file!" << endl;
        assert(false);
    }
}

void run_lake_verilog_codegen(CodegenOptions& options, string v_name, string ub_ins_name) {
  //cmd("export LAKE_CONTROLLERS=$PWD");
  //cout << "Runing cmd$ python /nobackup/joeyliu/aha/lake/tests/wrapper_lake.py -c " + options.dir + "lake_collateral/" + ub_ins_name + " -s True -n " + v_name  <<  endl;
  ASSERT(getenv("LAKE_PATH"), "Define env var $LAKE_PATH which is the /PathTo/lake");
  cmd("echo $LAKE_PATH");
  //if (options.mem_hierarchy.at("mem").fetch_width == 4) {
  //  int res_lake = cmd("python $LAKE_PATH/lake/utils/wrapper_lake.py -c " + options.dir + "lake_collateral/" + ub_ins_name + " -s True -n " + v_name);
  //  assert(res_lake == 0);
  //} else {
  //  int res_lake = cmd("python $LAKE_PATH/tests/test_pohan_wrapper.py -f " + options.dir + "lake_collateral/" + ub_ins_name + "/config.json -b LakeWrapper -w " + v_name);
  //  assert(res_lake == 0);
  //}
  //cmd("mkdir -p "+options.dir+"verilog");
  //cmd("mv LakeWrapper_"+v_name+".v " + options.dir + "verilog");

  int res_lake = cmd("python $LAKE_PATH/lake/utils/wrapper.py -c " + options.dir + "lake_collateral/" + ub_ins_name +
          "/config.json -s -wmn "+ v_name + " -wfn lake_module_wrappers.v -a -v -d 512");
  assert(res_lake == 0);


}

void run_lake_dp_verilog_codegen(CodegenOptions& options, string v_name, string ub_ins_name) {
  //cmd("export LAKE_CONTROLLERS=$PWD");
  ASSERT(getenv("LAKE_PATH"), "Define env var $LAKE_PATH which is the /PathTo/lake");
  //int res_lake = cmd("python $LAKE_PATH/lake/utils/wrapper_lake.py -c " + options.dir + "lake_collateral/" + ub_ins_name + " -n " + v_name + " -p True -pl 4 -pd 128");
  int res_lake = cmd("python $LAKE_PATH/lake/utils/wrapper.py -c " + options.dir + "lake_collateral/" + ub_ins_name +
          "/config.json -s -wmn "+ v_name + " -wfn pond_module_wrappers.v -vmn PondTop -vfn pondtop.sv  -a -v -dp -ii 6 -oi 6 -rd 0 -d 2048 -mw 16");
  assert(res_lake == 0);
  //cmd("mkdir -p "+options.dir+"verilog");
  //cmd("mv LakeWrapper_"+v_name+".v " + options.dir + "verilog");
}

void run_pond_verilog_codegen(CodegenOptions& options, string v_name, string ub_ins_name) {
  //cmd("export LAKE_CONTROLLERS=$PWD");
  ASSERT(getenv("LAKE_PATH"), "Define env var $LAKE_PATH which is the /PathTo/lake");
  //int res_lake = cmd("python $LAKE_PATH/lake/utils/wrapper_lake.py -c " + options.dir + "lake_collateral/" + ub_ins_name + " -n " + v_name + " -p True -pl 4 -pd 128");
  int res_lake = cmd("python $LAKE_PATH/lake/utils/wrapper.py -c " + options.dir + "lake_collateral/" + ub_ins_name +
          "/config.json -s -wmn "+ v_name + " -wfn pond_module_wrappers.v -vmn PondTop -vfn pondtop.sv -a -v -dp -ii 4 -oi 4 -rd 0 -d 128 -mw 16");
  assert(res_lake == 0);
  //cmd("mkdir -p "+options.dir+"verilog");
  //cmd("mv LakeWrapper_"+v_name+".v " + options.dir + "verilog");
}

void run_glb_verilog_codegen(CodegenOptions& options, const std::string& long_name, int num_inpt, int num_outpt, int width) {
  std::ofstream verilog_collateral_file;
  //verilog_collateral_file.open(long_name + ".v");
  verilog_collateral_file.open("lake_module_wrappers.v", std::ios_base::app);

  vector<string> port_decls = {};
  port_decls.push_back("input clk");
  port_decls.push_back("input rst_n");
  port_decls.push_back("input clk_en");
  port_decls.push_back("input chain_chain_en");
  for(int i = 0; i < num_inpt; i++)
  {
    port_decls.push_back("input [15:0] data_in_" + str(i));
    port_decls.push_back("input ["+ str(width)+":0] write_addr_" + str(i));
    port_decls.push_back("input wen_" + str(i));
  }
  for(int i = 0; i < num_outpt; i++)
  {
    port_decls.push_back("output logic [15:0] data_out_" + str(i));
    port_decls.push_back("input ["+ str(width)+":0] read_addr_" + str(i));
    port_decls.push_back("input ren_" + str(i));
  }
  port_decls.push_back("input [15:0] chain_data_in");
  port_decls.push_back("output [15:0] chain_data_out");

  verilog_collateral_file << "module " << long_name <<" ("<< sep_list(port_decls,"","",",") <<"); "<< endl;
  //128 KB per GLB bank
  //verilog_collateral_file << tab(1) << "logic [15:0] SRAM [131071:0];" << endl;
  //double the size for tile
  verilog_collateral_file << tab(1) << "logic [15:0] SRAM [262143:0];" << endl;
  verilog_collateral_file << tab(1) << "logic chain_ren;" << endl << endl;
  for (int i = 0; i < num_outpt; i++) {
    verilog_collateral_file << tab(1) << "logic [15:0] data_out_" << i << "_tmp;" << endl;
  }

  verilog_collateral_file << tab(1) << "always @(posedge clk) begin" << endl;
  verilog_collateral_file << tab(2) << "chain_ren <= " << "ren_" << num_outpt - 1 << ";" << endl;
  for (int i = 0; i < num_outpt; i++) {
    verilog_collateral_file << tab(2) << "data_out_" << str(i) << "_tmp <= SRAM[read_addr_" << i << "];" << endl;
    //verilog_collateral_file << tab(2) << "$display(\"output data %d, raddr %d\", data_out_" << str(i) << "_tmp, read_addr_"<< str(i) <<");" << endl;
  }
  for (int i = 0; i < num_inpt; i++) {
    verilog_collateral_file << tab(2) << "if (wen_" << i << " & (rst_n==0)) begin" << endl;
    verilog_collateral_file << tab(3) << "SRAM[write_addr_" << i << "] <= " << "data_in_" << str(i) << ";" << endl;
    //verilog_collateral_file << tab(3) << "$display(\"input data %d, waddr %d\", data_in_" << str(i)  << ", write_addr_" << str(i) << ");"<< endl;
    verilog_collateral_file << tab(2) << "end" << endl;
  }
  verilog_collateral_file << tab(1) << "end" << endl;
  //verilog_collateral_file << tab(1) << "assign chain_ren = ren_0; " << endl;
  //verilog_collateral_file << tab(1) << "assign chain_data_out = chain_ren ? " << "data_out_" << bank_readers[b].size() - 1 << "_tmp : chain_data_in;" << endl;
  verilog_collateral_file << tab(1) << "assign chain_data_out = chain_ren ? " << "data_out_" << num_outpt - 1 << "_tmp : 0;" << endl;
  for (int i = 0; i < num_outpt; i++) {
    if (i == num_outpt - 1) {
      verilog_collateral_file << tab(1) << "assign data_out_" << i << " = chain_data_out;" << endl;
    } else {
      verilog_collateral_file << tab(1) << "assign data_out_" << i << " = data_out_" << i << "_tmp;" << endl;
    }
  }
  verilog_collateral_file << "endmodule" << endl << endl;
  verilog_collateral_file.close();
  //cmd("mkdir -p "+options.dir+"verilog_glb");
  //cmd("mv " + long_name+".v " + options.dir + "verilog");
}

void generate_lake_tile_verilog(CodegenOptions& options, Instance* buf) {
  cout << "Generating Verilog Testing Collateral for: " << buf->toString() << endl
      << buf->getModuleRef()->toString() << endl;
  string ub_ins_name = buf->toString();
  string config_mode = buf->getMetaData()["mode"];
  //FIXME: a hack to get correct module name, fix this after coreIR update
  string v_name =  get_coreir_genenerator_name(buf->getModuleRef()->toString());
  //string v_name =  buf->getModuleRef()->getMetaData()["verilog_name"];
  //string v_name =  buf->getMetaData()["verilog_name"];
  if (options.config_gen_only)
    return;
  //TODO: apply the verilog codegen here
  if (config_mode == "glb") {
    auto genargs = buf->getModuleRef()->getGenArgs();
    run_glb_verilog_codegen(options, v_name, genargs.at("num_inputs")->get<int>(), genargs.at("num_outputs")->get<int>(), 32);
    return;
  }
  //dump the collateral file
  json config = buf->getMetaData()["config"];
  config["mode"] = "UB";
  emit_lake_config_collateral(options, ub_ins_name, config);

  //run the lake generation cmd
  if (config_mode == "lake")
      run_lake_verilog_codegen(options, v_name, ub_ins_name);
  else if (config_mode == "lake_dp")
      run_lake_dp_verilog_codegen(options, v_name, ub_ins_name);
  else if (config_mode == "pond")
      run_pond_verilog_codegen(options, v_name, ub_ins_name);
  else {
      cout << "Config mode: " << config_mode << endl;
      cout << "Not implemented yet. " << endl;
      assert(false);
  }
}

Instance* generate_coreir_op_controller_verilog(CodegenOptions& options, ModuleDef* def, op* op, vector<isl_map*>& sched_maps, schedule_info& hwinfo) {
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
  Instance* controller;
  if (options.rtl_options.use_external_controllers) {
    auto aff_c = affine_controller_def(c, dom, aff);
    aff_c->print();
    controller = def->addInstance(controller_name(op->name), aff_c);
  } else {
    assert(false);
    //controller = affine_controller_use_lake_tile(
    //        def, c, dom, aff,
    //        controller_name(op->name));
    ////generate verilog collateral
    //generate_lake_tile_verilog(options, controller);
  }

  assert(verilog_collateral_file != nullptr);
  generate_fsm(*verilog_collateral_file, options, controller->getModuleRef()->getName(), "d", "valid", aff, dom);

  def->connect(controller->sel("rst_n"), def->sel("self.rst_n"));
  def->connect(controller->sel("flush"), def->sel("self.flush"));

  json tile_config;
  for (int d = 0; d < num_in_dims(aff); d++) {
    tile_config["coeff_" + str(d)] = to_int(get_coeff(aff, d));
  }
  tile_config["const"] = to_int(const_coeff(aff));
  int d = 0;
  for (auto e : extents(dom)) {
    tile_config["extent_" + str(d)] = e;
    d++;
  }
  controller->getMetaData()["config"] =
    tile_config;

  connect_op_control_wires(options, def, op, hwinfo, controller);
  return controller;
}

Instance* generate_controller_coreir(CodegenOptions& options, ModuleDef* def, const std::string& name, isl_aff* aff, isl_set* dom) {
  auto c = def->getContext();


  //cout << "sched = " << str(saff) << endl;
  cout << tab(1) << "dom = " << str(dom) << endl;

  // TODO: Assert multi size == 1
  //auto aff = isl_multi_aff_get_aff(aff, 0);
  Instance* controller;
  if (options.rtl_options.use_external_controllers) {
    auto aff_c = affine_controller(options, c, dom, aff);
    aff_c->print();
    controller = def->addInstance(name, aff_c);
  } else {
    controller = affine_controller_use_lake_tile(
            options, def, c, dom, aff, name);
    //generate verilog collateral
    generate_lake_tile_verilog(options, controller);
  }

  return controller;
}

//Add CodegenOptions, if we do not use extra control,
//we will use lake tile to generate affine controller
Instance* generate_coreir_op_controller(CodegenOptions& options, ModuleDef* def, op* op, vector<isl_map*>& sched_maps, schedule_info& hwinfo) {
  auto c = def->getContext();

  isl_map* sched = nullptr;
  for (auto s : sched_maps) {
    if (domain_name(s) == op->name) {
      sched = s;
      break;
    }
  }
  assert(sched != nullptr);

  cout << "Schedule to generate affine controller: " << str(sched) << endl;

  auto svec = isl_pw_multi_aff_from_map(sched);
  cout << "pma: " << str(svec) << endl;

  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(svec);
  assert(pieces.size() == 1);

  auto saff = pieces.at(0).second;
  auto dom = pieces.at(0).first;

  cout << "sched = " << str(saff) << endl;
  cout << tab(1) << "dom = " << str(dom) << endl;

  // TODO: Assert multi size == 1
  auto aff = isl_multi_aff_get_aff(saff, 0);
  if(op->index_variables_prefetch_cycle){
    aff = sub(aff, op->index_variables_prefetch_cycle);
  }
  Instance* controller;

  //For those op need loop index we need this controller
  bool need_index = op->index_variables_needed_by_compute.size() > 0;
  //TODO: remove the first statement after kavya add init to lakewrapper
  //if (options.rtl_options.use_external_controllers || need_index ) {
  if (options.rtl_options.use_external_controllers) {
    auto aff_c = affine_controller(options, c, dom, aff);
    aff_c->print();
    controller = def->addInstance(controller_name(op->name), aff_c);

  } else if (to_int(const_coeff(aff)) >= options.mem_hierarchy.at("mem").counter_ub) {

    //add a 32 bit controller for multi-tile application ctrl generation
    auto aff_c = affine_controller(options, c, dom, aff, 32);
    aff_c->print();
    controller = def->addInstance(controller_name(op->name), aff_c);

    //This controller will be substitute with lake stencil valid in garnet mapping
    //Dump the metadata and rewrite it to lake tile in garnet mapping:
    add_lake_config_to_aff_ctrl_for_garnet_mapping(dom, aff, controller);
  } else if (need_index) {
    auto aff_c = affine_controller_use_lake_tile_counter(
            options, c, dom, aff,
            controller_name(op->name));
    cout << aff_c->toString() <<endl;
    controller = def->addInstance(controller_name(op->name), aff_c);
  } else {
    //update the latency into the stencil valid signal, to fix rom
    int op_latency = hwinfo.compute_latency(op);
    aff = add(aff, op_latency);

    controller = affine_controller_use_lake_tile(
            options, def, c, dom, aff,
            controller_name(op->name));
    //generate verilog collateral
    generate_lake_tile_verilog(options, controller);
  }

  connect_op_control_wires(options, def, op, hwinfo, controller);
  return controller;
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

      //ub_field.push_back(make_pair(name + "_en", context->BitIn()));
      ub_field.push_back(make_pair(name, context->BitIn()->Arr(pt_width)->Arr(bd_width)));
    } else {
      ub_field.push_back(make_pair(name + "_ren", context->BitIn()));

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
  return nullptr;

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

CoreIR::Module*
coreir_moduledef(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context,
    schedule_info& hwinfo) {
  auto ns = context->getNamespace("global");
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")}};
  if (options.rtl_options.use_prebuilt_memory) {
    ub_field.push_back({"reset", context->BitIn()});
    //ub_field.push_back({"rst_n", context->BitIn()});
    //ub_field.push_back({"flush", context->BitIn()});
  } else {
    ub_field.push_back({"rst_n", context->BitIn()});
    ub_field.push_back({"flush", context->BitIn()});
  }
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = dbhc::map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      //if (options.rtl_options.use_external_controllers ||
      //        (options.rtl_options.use_prebuilt_memory == false)) {
        ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_en", context->Bit()));
      //}
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->BitIn()->Arr(pixel_width)->Arr(pix_per_burst)));
    } else {
      //if (options.rtl_options.use_external_controllers ||
      //        (options.rtl_options.use_prebuilt_memory == false)) {
        ub_field.push_back(make_pair(pg(out_rep, out_bundle) + "_valid", context->Bit()));
      //}
      ub_field.push_back(make_pair(pg(out_rep, out_bundle), context->Bit()->Arr(pixel_width)->Arr(pix_per_burst)));
    }
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto ub = ns->newModuleDecl(prg.name, utp);

  return ub;
}

bool app_contains_memory_tiles(map<string, UBuffer> &buffers) {
  for (auto it: buffers) {
    if (it.second.contain_memory_tile) {
      return true;
    }
  }
  return false;
}

bool load_compute_file(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context,
    schedule_info& hwinfo) {
  bool found_compute = true;
  string compute_file = "";
  if (options.rtl_options.use_pipelined_compute_units) {
    compute_file = "./coreir_compute/" + prg.name + "_compute_pipelined.json";
  } else {
    compute_file = "./coreir_compute/" + prg.name + "_compute.json";
  }
  if (hwinfo.use_metamapper) {
    compute_file = "./dse_compute/" + prg.name + "_mapped.json";
  }
  assert(compute_file != "");
  ifstream cfile(compute_file);
  if (!cfile.good()) {
    cout << "No compute unit file: " << compute_file << endl;
  }
  if (!loadFromFile(context, compute_file)) {
    found_compute = false;
    cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
    if (hwinfo.use_metamapper) {
      assert(false);
    }
  }

  return found_compute;
}

CoreIR::Module*  generate_coreir_without_ctrl(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context,
    schedule_info& hwinfo,
    string dse_compute_filename) {

  Module* ub = coreir_moduledef(options, buffers, prg, schedmap, context, hwinfo);

  bool found_compute = true;
#ifndef CGRAFLOW
  string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
#else
  string compute_file = "./" + prg.name + "_compute.json";
#endif
  if (hwinfo.use_metamapper) {
    compute_file = dse_compute_filename;
  }
  ifstream cfile(compute_file);
  if (!cfile.good()) {
    cout << "No compute unit file: " << compute_file << endl;
    assert(false);
  }
  if (!loadFromFile(context, compute_file)) {
    found_compute = false;
    cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
    if (hwinfo.use_metamapper) {
      assert(false);
    }
  }

  auto def = ub->newModuleDef();

  auto sched_maps = get_maps(schedmap);
  for (auto op : prg.all_ops()) {
    generate_coreir_compute_unit(options, found_compute, def, op, prg, buffers, hwinfo);
  }

  //Add a pass to see if there is a glb
  for (auto& it: buffers) {
    if (contains(it.first, "glb_stencil")){
        cout << "Contains glb" << endl;
        auto buf = it.second;
        int starting_cycle = buf.starting_cycle();
        cout << starting_cycle << endl;
        if(starting_cycle == 0) {
            //Take the output starting cycle instead of input latency
            //auto out_sched = buf.global_outpt_sched();
            //auto host2glb_latency = to_int(lexminval(to_set(range(out_sched))));
            //cout << "Host to glb latency: " << host2glb_latency << endl;
            //options.host2glb_latency =
            //    min(options.host2glb_latency, host2glb_latency);

            auto in_sched = buf.global_inpt_sched();
            //change to +1 make sure glb start with 0
            auto host2glb_latency = to_int(lexmaxval(to_set(range(in_sched)))) + 1;
            cout << "Host to glb latency: " << host2glb_latency << endl;
            options.host2glb_latency =
                max(options.host2glb_latency, host2glb_latency);
        }
    }
  }

  for (auto& buf : buffers) {
    //Help for DEBUG
    //if (!contains(buf.first, "output_cgra")) {
    //    continue;
    //}
    //if (!contains(buf.first, "kernel_cgra")) {
    //    continue;
    //}
    //if (!contains(buf.first, "input_glb")) {
    //    continue;
    //}
    if (!prg.is_boundary(buf.first)) {
      //all the memory optimization pass goes here
      auto impl = generate_optimized_memory_implementation(options, buf.second, prg, hwinfo);

      lower_to_garnet_implementation(options, buf.second, impl, hwinfo);

      impl.bank_merging_and_rewrite(options);

      //Generate the memory module
      auto ub_mod = generate_coreir_without_ctrl(options, context, buf.second, impl, hwinfo);
      def->addInstance(buf.second.name, ub_mod);
      //TODO: add reset connection for garnet mapping
      //cout << "connected reset for " << buf.first << buf.second.name <<  endl;
      def->connect(def->sel(buf.first + ".reset"), def->sel("self.reset"));
      //def->connect(def->sel(buf.first + ".rst_n"), def->sel("self.rst_n"));
      //def->connect(def->sel(buf.first + ".flush"), def->sel("self.flush"));
    } else {
      //is boundary buffer
      //generate the global buffer configuration and save in edge buffers' config file
      auto& eb = buf.second;
      eb.tighten_address_space();
      auto eb_config = eb.generate_ubuf_args(options, eb, "glb");
      eb.config_file = eb_config;
      //if(prg.is_input(buf.first)) {
      //    assert(false);
      //}
    }
  }

  auto levels = get_variable_levels(prg);
  // Connect compute units to buffers

  //dft get the ops from input to output
  auto ops_dft= get_dft_ops(prg);
  std::reverse(ops_dft.begin(), ops_dft.end());

  //this is the flag to wire stencil valid signal
  bool need_pass_valid = false;
  dbhc::maybe<string> last_producer_buf_with_tile;

  //TODO Clean the logic here
  for (auto op : ops_dft) {
    cout << "Visit op: " << op->name << endl;
    vector<string> surrounding = surrounding_vars(op, prg);
    //Genertea op controller for the op need index varibale
    if (op->index_variables_needed_by_compute.size() > 0) {
      generate_coreir_op_controller(options, def, op, sched_maps, hwinfo);
    }
    for (auto var : op->index_variables_needed_by_compute) {
      int level = dbhc::map_find(var, levels);
      auto var_wire = exe_start_control_vars(def, op->name)->sel(level);
      def->connect(def->sel(op->name)->sel(var), var_wire);
    }


    for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = dbhc::map_find(buf_name, buffers);
      int pixel_width = buf.port_widths;

      assert(buf.is_input_bundle(bundle.second));

      if (prg.is_output(buf_name)) {
        def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
        if (options.pass_through_valid) {
            //def->connect("self." + pg(buf_name, bundle_name) + "_valid", op->name + ".valid_pass_out");
            //need_pass_valid = true;
          //} else {
            //cout << "This app does not have memory tile!" << endl;
            //This is the situation does not have memory tile, we need to use affine generator

            //Always use the output controller, without index involve
            if (op->index_variables_needed_by_compute.size() == 0)
              generate_coreir_op_controller(options, def, op, sched_maps, hwinfo);
            auto output_en = "self." + pg(buf_name, bundle_name) + "_valid";
            def->connect(def->sel(output_en),
                write_start_wire(def, op->name));
        }
      } else {
        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
        /*def->connect(def->sel(buf_name + "." + bundle_name + "_wen"),
            write_start_wire(def, op->name));
        def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
            write_start_control_vars(def, op->name));*/
        if (options.pass_through_valid) {
          if (need_pass_valid) {
            def->connect(buf_name + "." + bundle_name + "_extra_ctrl", op->name + ".valid_pass_out");
          }
        }
      }
    }

    for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = dbhc::map_find(buf_name, buffers);

      assert(buf.is_output_bundle(bundle.second));

      if (last_producer_buf_with_tile.has_value()) {
        if (buf_name != last_producer_buf_with_tile.get_value()) {
          need_pass_valid = false;
        }
      }

      if (prg.is_input(buf_name)) {

        //create the op controller for input will remove for garnet test
        generate_coreir_op_controller(options, def, op, sched_maps, hwinfo);

        auto output_valid = "self." + pg(buf_name, bundle_name) + "_en";
        auto input_bus = "self." + pg(buf_name, bundle_name);


        def->connect(def->sel(input_bus),
            def->sel(op->name + "." + pg(buf_name, bundle_name)));

        def->connect(def->sel(output_valid),
            read_start_wire(def, op->name));
        //auto const_1 = def->addInstance("true",
        //    "corebit.const",
        //    {{"value", CoreIR::Const::make(context, true)}});
        //def->connect(def->sel(output_valid), const_1->sel("out"));

        auto delayed_input = delay(def, def->sel(input_bus)->sel(0), DATAPATH_WIDTH);
        // TODO: This delayed input is a hack that I insert to
        // ensure that I can assume all buffer reads take 1 cycle
        //def->connect(def->sel(input_bus)->sel(0),
        //    def->sel(op->name + "." + pg(buf_name, bundle_name))->sel(0));
      } else {
        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));

        //wire the stencil valid from last buffer to the next one
        if (options.pass_through_valid) {
          //we disable wiring if we found first memory tile
          if (need_pass_valid) {
            //skip the self loop I/O, or the node with init
            //FIXME this may not work with multiple input
            if ( (!dbhc::elem(buf_name, outgoing_buffers(buffers, op, prg))) &&
                    (!contains(buf_name, "clkwrk_dsa"))){
               def->connect(buf_name + "." + bundle_name +"_extra_ctrl", op->name + ".valid_pass_in" );
            }
            //Stop at the ubuffer with memory tile inside
            if (buffers.at(buf_name).contain_memory_tile && !last_producer_buf_with_tile.has_value()) {
              cout << "Stop wiring stencil valid up from buf: " << buf_name << endl;
              last_producer_buf_with_tile = buf_name;
            }
          }
        }
        //def->connect(def->sel(buf_name + "." + bundle_name + "_ren"),
        //    read_start_wire(def, op->name));
        //def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
        //    read_start_control_vars(def, op->name));
      }
    }
  }

  ub->setDef(def);

  ub->print();

  //connect_signal("reset", ub);
  //context->runPasses({"wireclocks-coreir"});
  //context->runPasses({"rungenerators", "wireclocks-coreir"});
  context->runPasses({ "wireclocks-clk"});

  return ub;
  //assert(false);

}

void instantiate_controllers(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::ModuleDef* def,
    schedule_info& hwinfo) {
  auto sched_maps = get_maps(schedmap);
  if (options.rtl_options.target_tile == TARGET_TILE_M3) {
    for (auto op : prg.all_ops()) {
      bool needs_controller = false;
      for (auto b : op->buffers_referenced()) {
        if (prg.is_boundary(b) || op->index_variables_needed_by_compute.size() > 0) {
          needs_controller = true;
          break;
        }
      }
      if (needs_controller) {
        generate_coreir_op_controller_verilog(options, def, op, sched_maps, hwinfo);
      }
    }
  } else if (options.rtl_options.use_external_controllers) {
    for (auto op : prg.all_ops()) {
      //generate_coreir_op_controller_verilog(options, def, op, sched_maps, hwinfo);
      generate_coreir_op_controller(options, def, op, sched_maps, hwinfo);
    }
  }

}

CoreIR::Module* generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    CoreIR::Context* context,
    schedule_info& hwinfo) {

  ofstream verilog_collateral(prg.name + "_verilog_collateral.sv");
  verilog_collateral_file = &verilog_collateral;
  vector<isl_set*> ss;
  for (auto m : get_maps(schedmap)) {
    verilog_collateral << tab(1) << "// min: " << str(lexmin(range(m))) << endl;
    verilog_collateral << tab(1) << "// max: " << str(lexmax(range(m))) << endl;
    verilog_collateral << endl;
    ss.push_back(range(m));
  }

  isl_set* res = unn(ss);
  verilog_collateral << tab(1) << "// sched min: " << str(lexmin(res)) << endl;
  verilog_collateral << tab(1) << "// sched max: " << str(lexmax(res)) << endl;


  assert(verilog_collateral_file != nullptr);

  bool found_compute = load_compute_file(options, buffers, prg, schedmap, context, hwinfo);

  Module* ub = coreir_moduledef(options, buffers, prg, schedmap, context, hwinfo);
  auto def = ub->newModuleDef();

  for (auto op : prg.all_ops()) {
    generate_coreir_compute_unit(options, found_compute, def, op, prg, buffers, hwinfo);
  }

  instantiate_controllers(options,
      buffers,
      prg,
      schedmap,
      def,
      hwinfo);

  for (auto& buf : buffers) {
    if (!prg.is_boundary(buf.first)) {
      auto ub_mod = generate_coreir(options, context, prg, buf.second, hwinfo);
      auto b = def->addInstance(buf.second.name, ub_mod);

      auto self = def->sel("self");
      def->connect(self->sel("rst_n"), b->sel("rst_n"));
      def->connect(self->sel("flush"), b->sel("flush"));
    }
  }

  auto levels = get_variable_levels(prg);

  // Connect compute units to buffers
  for (auto op : prg.all_ops()) {

    // Demosaic (and other?) applications need control
    // variable values. Wire them up here
    vector<string> surrounding = surrounding_vars(op, prg);
    for (auto var : op->index_variables_needed_by_compute) {
      assert(options.rtl_options.use_external_controllers);
      int level = dbhc::map_find(var, levels);
      auto var_wire = exe_start_control_vars(def, op->name)->sel(level);
      def->connect(def->sel(op->name)->sel(var), var_wire);
    }
  }

  for (auto op : prg.all_ops()) {
    for (pair<string, string> bundle : outgoing_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = dbhc::map_find(buf_name, buffers);
      int pixel_width = buf.port_widths;

      assert(buf.is_input_bundle(bundle.second));

      if (prg.is_output(buf_name)) {
        if (options.rtl_options.use_external_controllers) {
          auto output_en = "self." + pg(buf_name, bundle_name) + "_valid";
          def->connect(def->sel(output_en),
              write_start_wire(def, op->name));
        }

        def->connect("self." + pg(buf_name, bundle_name), op->name + "." + pg(buf_name, bundle_name));
      } else {
        if (options.rtl_options.target_tile == TARGET_TILE_M3) {
        //if (false) {
        } else if (options.rtl_options.use_external_controllers) {
          def->connect(def->sel(buf_name + "." + bundle_name + "_wen"),
              write_start_wire(def, op->name));
          def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
              write_start_control_vars(def, op->name));
        }

        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
      }
    }

    for (pair<string, string> bundle : incoming_bundles(op, buffers, prg)) {
      string buf_name = bundle.first;
      string bundle_name = bundle.second;
      auto buf = dbhc::map_find(buf_name, buffers);

      assert(buf.is_output_bundle(bundle.second));

      if (prg.is_input(buf_name)) {
        auto output_valid = "self." + pg(buf_name, bundle_name) + "_en";
        auto input_bus = "self." + pg(buf_name, bundle_name);

        if (options.rtl_options.use_external_controllers) {
          def->connect(def->sel(output_valid),
              read_start_wire(def, op->name));
        }

        def->connect(def->sel(input_bus),
            def->sel(op->name + "." + pg(buf_name, bundle_name)));

      } else {
        if (options.rtl_options.target_tile == TARGET_TILE_M3) {
        //if (false) {
        } else if (options.rtl_options.use_external_controllers) {
          def->connect(def->sel(buf_name + "." + bundle_name + "_ren"),
              read_start_wire(def, op->name));
          def->connect(def->sel(buf_name + "." + bundle_name + "_ctrl_vars"),
              read_start_control_vars(def, op->name));
        }

        def->connect(buf_name + "." + bundle_name, op->name + "." + pg(buf_name, bundle_name));
      }
    }
  }

  ub->setDef(def);

  ub->print();

  connect_signal("reset", ub);
  context->runPasses({"rungenerators", "wireclocks-clk"});

  verilog_collateral.close();
  verilog_collateral_file = nullptr;

  return ub;
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
    if (w->getConnectedWireables().size() == 0)
        return;
    paths.IO1.push_back(w->getSelectPath());
  }
  else if (isa<BitInType>(t)) {
    if (w->getConnectedWireables().size() == 0)
        return;
    paths.IO1in.push_back(w->getSelectPath());
  }
  else {
    for (auto sw : w->getSelects()) {
      getAllIOPaths(sw.second,paths);
    }
  }

}

class GetGLBConfig: public CoreIR::InstanceGraphPass {
 public:
  static std::string ID;
  int latency;

  //There are more than one input GLB
  map<string, json> glb2cgra;
  map<string, json> cgra2glb;
  GetGLBConfig() : latency(0),
    InstanceGraphPass("getglbconfig", "Find the glb load latency!") {}
  bool runOnInstanceGraphNode(CoreIR::InstanceGraphNode& node) {
    bool changed = false;
    for (auto inst : node.getInstanceList()) {
       Module* m = inst->getModuleRef();
       if (m->isGenerated()) {
         auto g = m->getGenerator();
         if (g->getName() == "Mem_amber") {
           auto genargs = inst->getModuleRef()->getGenArgs();
           if(!genargs.at("has_external_addrgen")->get<bool>())
             continue;
           string buf_name = genargs.at("ID")->get<string>();
           cout << "ID buf name: " << buf_name << endl;
           buf_name = pick(split_at(buf_name, "_"));
           auto config_file = inst->getMetaData()["config"];
           cout << "Buf_name: " << buf_name << endl;
           cout << "Config file: " << config_file << endl;
           int write_to_glb = config_file.at("in2glb_0").at("cycle_starting_addr")[0];
           int read_from_glb = config_file.at("glb2out_0").at("cycle_starting_addr")[0];
           if(write_to_glb == 0) {
             latency = std::max(latency, (int)config_file.at("glb2out_0").at("cycle_starting_addr")[0]);
             glb2cgra.insert({buf_name, config_file.at("glb2out_0")});
           } else {
             cgra2glb.insert({buf_name, config_file.at("in2glb_0")});
             //cgra2glb.insert({buf_name, config_file.at("in2glb_0")});
           }
        }
      }
    }
    return changed;
  }
};

void addIOsWithGLBConfig(Context* c, Module* top, map<string, UBuffer>& buffers, GetGLBConfig* glb_metadata) {
  ModuleDef* mdef = top->getDef();

  Values aWidth({{"width",Const::make(c,16)}});
  IOpaths iopaths;
  getAllIOPaths(mdef->getInterface(), iopaths);
  Instance* pt = addPassthrough(mdef->getInterface(),"_self");
  for (auto path : iopaths.IO16) {
    string path_name = *(path.begin()+1);
    //TODO: this is a hacky way to parse the buf name
    string buf_name = take_until_str(path_name, "_op");
    auto in_buf =  buffers.at(buf_name);
    string ioname = "io16in_" + join(++path.begin(),path.end(),string("_"));
    auto inst = mdef->addInstance(ioname,"cgralib.IO",aWidth,{{"mode",Const::make(c,"in")}});
    inst->getMetaData() = in_buf.config_file;

    //Add the multi-tile glb informations
    if(glb_metadata->latency != 0) {
      cout << "INPUT GLB buf name: " << buf_name << endl;
      string key = pick(split_at(buf_name, "_"));
      inst->getMetaData()["glb2out_0"] = glb_metadata->glb2cgra.at(key);
      int old_offset = inst->getMetaData()["glb2out_0"]["cycle_starting_addr"][0] ;
      inst->getMetaData()["glb2out_0"]["cycle_starting_addr"][0] = old_offset - glb_metadata->latency;
    }

    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"out"},path);
  }
  for (auto path : iopaths.IO16in) {
    string path_name = *(path.begin()+1);
    //TODO: this is a hacky way to parse the buf name
    string buf_name = take_until_str(path_name, "_op");
    auto out_buf =  buffers.at(buf_name);
    string ioname = "io16_" + join(++path.begin(),path.end(),string("_"));
    auto inst = mdef->addInstance(ioname,"cgralib.IO",aWidth,{{"mode",Const::make(c,"out")}});
    inst->getMetaData() = out_buf.config_file;

    //Add the multi-tile glb informations
    if(glb_metadata->latency != 0) {
      cout << "OUTPUT GLB buf_name: " << buf_name << endl;
      string key = (split_at(buf_name, "_")).at(1);
      inst->getMetaData()["in2glb_0"] = glb_metadata->cgra2glb.at(key);
      //inst->getMetaData()["in2glb_0"] = glb_metadata->cgra2glb;
      int old_offset = inst->getMetaData()["in2glb_0"]["cycle_starting_addr"][0] ;
      inst->getMetaData()["in2glb_0"]["cycle_starting_addr"][0] = old_offset - glb_metadata->latency;
    }
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

void addIOsWithGLBConfigMetaMapper(Context* c, Module* top, map<string, UBuffer>& buffers, GetGLBConfig* glb_metadata) {
  ModuleDef* mdef = top->getDef();
  vector<Module*> loaded;
  if (!loadHeader(c, "io_header.json", loaded)) {c->die();}
  vector<Module*> loaded_bit;
  if (!loadHeader(c, "bit_io_header.json", loaded_bit)) {c->die();}
  Values aWidth({{"width",Const::make(c,16)}});
  IOpaths iopaths;
  getAllIOPaths(mdef->getInterface(), iopaths);
  Instance* pt = addPassthrough(mdef->getInterface(),"_self");
  mdef->disconnect(mdef->getInterface());
  for (auto path : iopaths.IO16) {
    string path_name = *(path.begin()+1);
    //TODO: this is a hacky way to parse the buf name
    string buf_name = take_until_str(path_name, "_op");
    auto in_buf =  buffers.at(buf_name);
    string ioname = "io16in_" + join(++path.begin(),path.end(),string("_"));

    auto inst = mdef->addInstance(ioname,(Module*)loaded[0],{{"mode",Const::make(c,"in")}});


    inst->getMetaData() = in_buf.config_file;

    //Add the multi-tile glb informations
    if(glb_metadata->latency != 0) {
      cout << "INPUT GLB buf name: " << buf_name << endl;
      string key = pick(split_at(buf_name, "_"));
      inst->getMetaData()["glb2out_0"] = glb_metadata->glb2cgra.at(key);
      int old_offset = inst->getMetaData()["glb2out_0"]["cycle_starting_addr"][0] ;
      inst->getMetaData()["glb2out_0"]["cycle_starting_addr"][0] = old_offset - glb_metadata->latency;
    }

    mdef->connect(path, {ioname,"in"});

    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"out"},path);
  }
  for (auto path : iopaths.IO16in) {
    string path_name = *(path.begin()+1);
    //TODO: this is a hacky way to parse the buf name
    string buf_name = take_until_str(path_name, "_op");
    auto out_buf =  buffers.at(buf_name);
    string ioname = "io16_" + join(++path.begin(),path.end(),string("_"));

    auto inst = mdef->addInstance(ioname,(Module*)loaded[0],{{"mode",Const::make(c,"out")}});

    inst->getMetaData() = out_buf.config_file;

    //Add the multi-tile glb informations
    if(glb_metadata->latency != 0) {
      cout << "OUTPUT GLB buf_name: " << buf_name << endl;
      string key = (split_at(buf_name, "_")).at(1);
      inst->getMetaData()["in2glb_0"] = glb_metadata->cgra2glb.at(key);
      //inst->getMetaData()["in2glb_0"] = glb_metadata->cgra2glb;
      int old_offset = inst->getMetaData()["in2glb_0"]["cycle_starting_addr"][0] ;
      inst->getMetaData()["in2glb_0"]["cycle_starting_addr"][0] = old_offset - glb_metadata->latency;
    }

    mdef->connect(path, {ioname,"out"});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"in"},path);
  }
  for (auto path : iopaths.IO1) {
    string ioname = "io1in_" + join(++path.begin(),path.end(),string("_"));

    mdef->addInstance(ioname,(Module*)loaded_bit[0],{{"mode",Const::make(c,"in")}});
    mdef->connect(path, {ioname,"in"});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"out"},path);
  }
  for (auto path : iopaths.IO1in) {
    string ioname = "io1_" + join(++path.begin(),path.end(),string("_"));

    mdef->addInstance(ioname,(Module*)loaded_bit[0],{{"mode",Const::make(c,"out")}});
    mdef->connect(path, {ioname,"out"});
    path[0] = "in";
    path.insert(path.begin(),"_self");
    mdef->connect({ioname,"in"},path);
  }
  inlineInstance(pt);
}

void addIOs(Context* c, Module* top) {
  ModuleDef* mdef = top->getDef();

  Values aWidth({{"width",Const::make(c,16)}});
  IOpaths iopaths;
  getAllIOPaths(mdef->getInterface(), iopaths);
  Instance* pt = addPassthrough(mdef->getInterface(),"_self");
  for (auto path : iopaths.IO16) {
    string ioname = "io16in_" + join(++path.begin(),path.end(),string("_"));
    for (auto p: path)
        cout << "path: " << p << endl;
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
    //TODO: A hack to keep single valid should check with other apps
    //break;
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
       Module* m = inst->getModuleRef();
       if (m->isGenerated()) {
         auto g = m->getGenerator();
         if (g->getName() == "rom2") {
	cout << "not inlining " << inst->toString() << " " << inst->toString() << endl;
           continue;
         }
       }
cout << "inlining " << inst->toString() << endl;
      changed |= inlineInstance(inst);
    }
    return changed;
  }
};

void substract_glb_latency(json& config_file, int latency) {
    for (auto & ctrl: config_file.items()) {
        auto & val = ctrl.value();
        if ((val.count("cycle_starting_addr")))
          val.at("cycle_starting_addr")[0] =
            (int)val.at("cycle_starting_addr")[0] - latency;
    }
}

class SubstructGLBLatency: public CoreIR::InstanceGraphPass {
 public:
  static std::string ID;
  int glb_load_latency;
  SubstructGLBLatency(int latency) : glb_load_latency(latency),
    InstanceGraphPass("substractglblatency", "Move the affine controller timing forward!") {}
  bool runOnInstanceGraphNode(CoreIR::InstanceGraphNode& node) {
    bool changed = false;
    // int i = 0;
    for (auto & inst : node.getInstanceList()) {
       //cout << "inlining " << inst->getName() << endl;
       Module* m = inst->getModuleRef();
       if (m->isGenerated()) {
         auto g = m->getGenerator();
         if (g->getName() == "Mem_amber" ||
           g->getName() == "Pond_amber") {
           auto config_file = inst->getMetaData()["config"];
           if (!inst->getMetaData().count("drive_by_cgpl_ctrl")) {
             substract_glb_latency(config_file, glb_load_latency);
             inst->getMetaData()["config"] = config_file;
             changed = true;
           }
         }
       }
    }
    return changed;
  }
};

class RemoveFlush: public CoreIR::InstancePass {
    public:
RemoveFlush(): InstancePass(
            "removeflush",
            "Remove flush wiring for garnet mapping"
            ) {}
bool runOnInstance(Instance* inst) {
    //define the pass here
    if (inst->getModuleRef()->isGenerated()) {
      if (inst->getModuleRef()->getGenerator()->getName() == "Mem_amber" &&
              inst->canSel("flush")) {
         auto def= inst->getContainer();
         def->disconnect(inst->sel("flush"));
         return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
}

};

class ReplaceGLBValid: public CoreIR::InstancePass {
    public:
    json valid_config;
    int latency;
ReplaceGLBValid(GetGLBConfig* glb_pass):
    InstancePass(
            "replaceglbvalid",
            "Replace output affine port controller using cgra to glb config"
            ), valid_config(glb_pass->cgra2glb), latency(glb_pass->latency) {}
bool runOnInstance(Instance* inst) {
    //define the pass here
    if(latency == 0)
        return false;
    //string sv_name = lake_port_map.at("stencil_valid");
    string sv_name = "stencil_valid";
    if (inst->getModuleRef()->isGenerated())
    if (inst->getModuleRef()->getGenerator()->getName() == "Mem_amber" &&
            inst->canSel(sv_name)) {
      auto conns = inst->sel(sv_name)->getConnectedWireables();
      bool connect2IO = false;
      for (auto conn: conns) {
          auto inst_conn = dyn_cast<Instance>(conn->getTopParent());
          if (inst_conn->getModuleRef()->getRefName() == "global.BitIO") {
              cout << "found cgpl in subtract" << endl;
              cout << inst_conn->getModuleRef()->toString() << endl;
              connect2IO = true;
              break;
          }
      }
      if (connect2IO) {
          //valid_config.at("cycle_starting_addr")[0] = (int)valid_config.at("cycle_starting_addr")[0] - latency;
          //TODO: This is a hack, need to make sure the output always called hw_output
          inst->getMetaData()["config"][sv_name] = valid_config.at("output");
          return true;
      }
    }
    return false;
}

};

class ReplaceCoarseGrainedAffCtrl: public CoreIR::InstancePass {
    public:
ReplaceCoarseGrainedAffCtrl():
    InstancePass(
            "replacecoarsegrainedaffctrl",
            "Replace Coarsegrainedaffctrl with lake tile stencil valid"
            ) {}
bool runOnInstance(Instance* inst) {
    //define the pass here
    if (inst->getMetaData().count("lake_config") ){
       cout << "Substitute " << inst->toString() << endl;
       auto def= inst->getContainer();
       auto context = inst->getContext();
       auto config_file = inst->getMetaData().at("lake_config");
       Instance* flush_pth = addPassthrough(inst->sel("valid"),
               "flush_pth_"+inst->toString());
       def->disconnect(inst->sel("clk"));
       def->disconnect(inst->sel("valid"));

       //TODO put this into a function
       auto* g = context->getGenerator("cgralib.Mem_amber");
       CoreIR::Values genargs = {
         {"width", CoreIR::Const::make(context, 16)},
         {"num_inputs", CoreIR::Const::make(context, 0)},
         {"num_outputs", CoreIR::Const::make(context, 0)},
         {"has_stencil_valid", CoreIR::Const::make(context, true)},
         {"has_chain_en", CoreIR::Const::make(context, true)},
         {"ID", CoreIR::Const::make(context, context->getUnique())},
         {"has_flush",  CoreIR::Const::make(context, true)},
         {"use_prebuilt_mem",  CoreIR::Const::make(context, true)}
       };
       auto ctrl = def->addInstance(inst->toString() + "_lake", "cgralib.Mem_amber", genargs);
       ctrl->getMetaData()["config"] = config_file;
       ctrl->getMetaData()["mode"] = "lake";
       ctrl->getMetaData()["verilog"] = "aff_ctrl_counter_"+genargs.at("ID")->get<string>();

       auto clk_en_const = def->addInstance(inst->toString()+"_clk_en_const", "corebit.const",
               {{"value", CoreIR::Const::make(context, true)}});

       //garnet wire reset to flush of memory
       def->connect(ctrl->sel("flush"), def->sel("self.reset"));
       def->connect(ctrl->sel("clk"), def->sel("self.clk"));
       def->connect(ctrl->sel("clk_en"), clk_en_const->sel("out"));
       def->connect(ctrl->sel("rst_n"), clk_en_const->sel("out"));
       def->connect(flush_pth->sel("in"), ctrl->sel("stencil_valid"));
       inlineInstance(flush_pth);
       def->removeInstance(inst);
       //def->disconnect(def->getInterface());
       return true;
    } else if (inst->getMetaData().count("garnet_remove")){
      auto def= inst->getContainer();
      def->removeInstance(inst);
      //def->disconnect(def->getInterface());
      return true;
    } else if (inst->getMetaData().count("garnet_rewire_flush")){
      //replace the emulated fabric flush into the real flush
      auto def= inst->getContainer();
      auto conns = inst->sel("valid")->getConnectedWireables();
      assert(conns.size() == 1);
      def->disconnect(def->getInterface());
      def->connect(pick(conns), def->sel("self.reset"));
      def->removeInstance(inst);
      return true;
    }
    return false;
}

};

/*class ReplaceCoarseGrainedAffCtrl: public CoreIR::InstanceGraphPass {
 public:
  static std::string ID;
  ReplaceCoarseGrainedAffCtrl() :
    InstanceGraphPass("replacecoarsegrainedaffctrl", "change prebuild aff control with lake tile!") {}
  bool runOnInstanceGraphNode(CoreIR::InstanceGraphNode& node) {
    bool changed = false;
    // int i = 0;
    for (auto & inst : node.getInstanceList()) {
        if (inst->getMetaData().count("lake_config") ){
           cout << "Substitute " << inst->toString() << endl;
           auto def= inst->getContainer();
           auto context = inst->getContext();
           auto config_file = inst->getMetaData().at("lake_config");
           Instance* flush_pth = addPassthrough(inst->sel("valid"),
                   "flush_pth_"+inst->toString());
           def->disconnect(inst->sel("clk"));
           def->disconnect(inst->sel("valid"));

           //TODO put this into a function
           auto* g = context->getGenerator("cgralib.Mem_amber");
           CoreIR::Values genargs = {
             {"width", CoreIR::Const::make(context, 16)},
             {"num_inputs", CoreIR::Const::make(context, 0)},
             {"num_outputs", CoreIR::Const::make(context, 0)},
             {"has_stencil_valid", CoreIR::Const::make(context, true)},
             {"has_chain_en", CoreIR::Const::make(context, true)},
             {"ID", CoreIR::Const::make(context, context->getUnique())},
             {"has_flush",  CoreIR::Const::make(context, true)},
             {"use_prebuilt_mem",  CoreIR::Const::make(context, true)}
           };
           auto ctrl = def->addInstance(inst->toString() + "_lake", "cgralib.Mem_amber", genargs);
           ctrl->getMetaData()["config"] = config_file;
           ctrl->getMetaData()["mode"] = "lake";
           ctrl->getMetaData()["verilog"] = "aff_ctrl_counter_"+genargs.at("ID")->get<string>();

           auto clk_en_const = def->addInstance(inst->toString()+"_clk_en_const", "corebit.const",
                   {{"value", CoreIR::Const::make(context, true)}});

           //garnet wire reset to flush of memory
           def->connect(ctrl->sel("flush"), def->sel("self.reset"));
           def->connect(ctrl->sel("clk"), def->sel("self.clk"));
           def->connect(ctrl->sel("clk_en"), clk_en_const->sel("out"));
           def->connect(ctrl->sel("rst_n"), clk_en_const->sel("out"));
           def->connect(flush_pth->sel("in"), ctrl->sel("stencil_valid"));
           inlineInstance(flush_pth);
           def->removeInstance(inst);
           //def->disconnect(def->getInterface());
           changed = true;
        } else if (inst->getMetaData().count("garnet_remove")){
          auto def= inst->getContainer();
          def->removeInstance(inst);
          //def->disconnect(def->getInterface());
          changed = true;
        }
    }
    return changed;
  }
};*/

/*
namespace MapperPasses {
class InitConst : public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    InitConst() : InstanceVisitorPass(ID,"replace mem init const with PE of dummy add.") {}
    void setVisitorInfo() override;
};

}*/

class ReplaceMemInitWithPE: public CoreIR::InstancePass {
    public:
ReplaceMemInitWithPE():
    InstancePass(
            "replacememinitwithpe",
            "Replace Mem const init with PE"
            ) {}

bool runOnInstance(Instance* cnst) {
    //define the pass here
    if (cnst->getModuleRef()->getRefName() == "coreir.const") {
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
      auto bv = cnst->getModArgs().at("value")->get<BitVector>();
      int width = cnst->getModuleRef()->getGenArgs().at("width")->get<int>();
      auto init_const= def->addInstance(c->getUnique(),
          "coreir.const",
          {{"width", CoreIR::Const::make(c, width)}},
          {{"value", CoreIR::Const::make(c, bv)}});
      auto init_zero = def->addInstance(c->getUnique(),
          "coreir.const",
          {{"width", CoreIR::Const::make(c, width)}},
          {{"value", CoreIR::Const::make(c, BitVector(width, 0))}});

      //Add PE
      Values dataPEArgs({
        {"alu_op",Const::make(c,"add")},
        {"signed",Const::make(c,false)}});
      auto pe = def->addInstance("PE_init"+c->getUnique(), "cgralib.PE",{{"op_kind",Const::make(c,"alu")}},dataPEArgs);

      def->connect(init_const->sel("out"), pe->sel("data")->sel("in")->sel("0"));
      def->connect(init_zero->sel("out"), pe->sel("data")->sel("in")->sel("1"));
      for (auto conn : conns) {
        def->connect(conn, pe->sel("data")->sel("out"));
      }
      def->removeInstance(cnst);
      return true;

    } else {
      return false;
    }
  }
};
/*
std::string MapperPasses::InitConst::ID = "initconst";
void MapperPasses::InitConst::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasModule("coreir.const")) {
      assert(false);
    addVisitorFunction(c->getModule("coreir.const"),InitConstReplace);
  }

}
}*/

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
  //for (auto conn : conns) {
  //  if (auto conInst = dyn_cast<Instance>(conn->getTopParent())) {
  //    cout << "  coninst= " << toString(conInst) << endl;
  //    //cout << "  conn= " << toString(conn->getSelectPath()) << endl;
  //    //if (conInst->getModuleRef()->getRefName() != "cgralib.Mem" || conn->getSelectPath().back()!="wen") {
  //    if (conInst->getModuleRef()->getRefName() != "cgralib.Mem") {
  //      return false;
  //    }
  //  }
  //}
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
class MemInitCopy: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    MemInitCopy() : InstanceVisitorPass(ID, "move init into config") {}
    void setVisitorInfo() override;
};

}

vector<CoreIR::Wireable*> getConnectWires(CoreIR::Wireable* wire) {
  auto conSet = wire->getConnectedWireables();
  vector<Wireable*> conns(conSet.begin(), conSet.end());
  return conns;
}

void reconnectInWire(ModuleDef* def, CoreIR::Wireable* rem_w, CoreIR::Wireable* new_w) {
  vector<Wireable*> conns = getConnectWires(rem_w);
  assert(conns.size() == 1);
  def->disconnect(pick(conns), rem_w);
  def->connect(pick(conns), new_w);
}

void reconnectOutWire(ModuleDef* def, CoreIR::Wireable* rem_w, CoreIR::Wireable* new_w) {
  vector<Wireable*> conns = getConnectWires(rem_w);
  for (auto conn: conns) {
    def->disconnect((conn), rem_w);
    def->connect((conn), new_w);
  }
}

bool InitMove(Instance* cnst) {
  cout << tab(2) << "memory syntax transformation init copy!" << endl;
  cout << tab(2) << toString(cnst) << endl;
  Context* c = cnst->getContext();

  //Move the init into config
  auto init_data = cnst->getModArgs().at("init")->get<Json>();
  Json config_json;
  config_json["init"] = init_data;
  config_json["mode"] = "sram";
  ModuleDef* def = cnst->getContainer();
  CoreIR::Values modargs = {
      {"config", CoreIR::Const::make(c, config_json)},
      {"mode", CoreIR::Const::make(c, "lake")}
  };
  CoreIR::Values genargs = {
    {"width", CoreIR::Const::make(c, 16)},
    {"is_rom", CoreIR::Const::make(c, true)},
    {"num_inputs", CoreIR::Const::make(c, 1)},
    {"num_outputs", CoreIR::Const::make(c, 1)},
  };

  //auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");
  Instance* buf = def->addInstance(cnst->getInstname()+"_rom",
          "cgralib.Mem", genargs, modargs);
  reconnectInWire(def, cnst->sel("raddr"),
          buf->sel(lake_port_map.at("addr_in_0")));
  reconnectInWire(def, cnst->sel("ren"),
          buf->sel(lake_port_map.at("ren_in_0")));
  reconnectOutWire(def, cnst->sel("rdata"),
          buf->sel(lake_port_map.at("data_out_0")));
  def->removeInstance(cnst);
  //def->connect(pt->sel("in"), buf);
  //inlineInstance(pt);
  //inlineInstance(buf);

  return true;
}

std::string MapperPasses::MemInitCopy::ID = "meminitcopy";
void MapperPasses::MemInitCopy::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("memory.rom2")) {
    addVisitorFunction(c->getGenerator("memory.rom2"), InitMove);
  }
}


namespace MapperPasses {
class StripGLB: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    StripGLB() : InstanceVisitorPass(ID,"Remove glb ubuffer in garnet mapping") {}
    void setVisitorInfo() override;
};

}

bool BypassGLB(Instance* cnst) {
  cout << tab(2) << "Connect the read directly to write port of GLB!" << endl;
  cout << tab(2) << toString(cnst) << endl;
  Context* c = cnst->getContext();
  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }
  ModuleDef* def = cnst->getContainer();
  auto genargs = cnst->getModuleRef()->getGenArgs();
  if(!genargs.at("has_external_addrgen")->get<bool>())
    return false;
  auto write_wire = pick(cnst->sel("data_in_0")->getConnectedWireables());
  for (auto read_wire: cnst->sel("data_out_0")->getConnectedWireables()) {
    def->connect(write_wire, read_wire);
  }
  def->removeInstance(cnst);
  return true;
}

std::string MapperPasses::StripGLB::ID = "stripglb";
void MapperPasses::StripGLB::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("cgralib.Mem_amber")) {
    addVisitorFunction(c->getGenerator("cgralib.Mem_amber"), BypassGLB);
  }
}

namespace MapperPasses {
class MemSubstitute: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    MemSubstitute() : InstanceVisitorPass(ID,"replace cgralib.Mem_amber to cgralib.Mem") {}
    void setVisitorInfo() override;
};

}

bool MemtileReplace(Instance* cnst) {
  cout << tab(2) << "memory syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;
  Context* c = cnst->getContext();
  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }
  ModuleDef* def = cnst->getContainer();
  auto genargs = cnst->getModuleRef()->getGenArgs();
  if(genargs.at("has_external_addrgen")->get<bool>())
    return false;
  cout << "enter here\n";
  auto config_file = cnst->getMetaData()["config"];
  auto init = cnst->getMetaData()["init"];
  CoreIR::Values modargs = {
      {"config", CoreIR::Const::make(c, config_file)},
      {"init", CoreIR::Const::make(c, init)},
      {"mode", CoreIR::Const::make(c, "lake")}
  };
  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");
  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet",
          "cgralib.Mem", genargs, modargs);
  def->removeInstance(cnst);
  //def->connect(pt->sel("in"), buf);
  auto buf_sel = buf->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "garnet buf sel: " << itr.first << endl;
    string premap_pt_name = itr.first;
    if (lake_port_map.count(premap_pt_name))
      def->connect(pt->sel("in")->sel(premap_pt_name),
              buf->sel(lake_port_map.at(premap_pt_name)));
    else
      def->connect(pt->sel("in")->sel(premap_pt_name),
              buf->sel(premap_pt_name));
  }

  inlineInstance(pt);
  inlineInstance(buf);

  //remove rst_n
  auto rst_n_conSet = buf->sel("rst_n")->getConnectedWireables();
  vector<Wireable*> conns(rst_n_conSet.begin(), rst_n_conSet.end());
  assert(conns.size() == 1);
  auto conn = conns[0];
  def->disconnect(buf->sel("rst_n"),conn);

  //TODO:remove chain_en
  if (genargs.at("has_chain_en")->get<bool>()) {
    auto chain_en_conSet = buf->sel("chain_chain_en")->getConnectedWireables();
    vector<Wireable*> conns_ce(chain_en_conSet.begin(), chain_en_conSet.end());
    for (auto conn: conns_ce) {
      def->disconnect(buf->sel("chain_chain_en"),conn);
    }
  }
  return true;
}

std::string MapperPasses::MemSubstitute::ID = "memsubstitute";
void MapperPasses::MemSubstitute::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("cgralib.Mem_amber")) {
    addVisitorFunction(c->getGenerator("cgralib.Mem_amber"), MemtileReplace);
  }

}

namespace MapperPasses {
class RegfileSubstitute: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    RegfileSubstitute() : InstanceVisitorPass(ID,"replace cgralib.Mem_amber to cgralib.Mem") {}
    void setVisitorInfo() override;
};

}


bool RegfileReplace(Instance* cnst) {
  cout << tab(2) << "memory syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;
  Context* c = cnst->getContext();
  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }
  ModuleDef* def = cnst->getContainer();
  auto genargs = cnst->getModuleRef()->getGenArgs();
  auto config_file = cnst->getMetaData()["config"];
  CoreIR::Values modargs = {
      {"config", CoreIR::Const::make(c, config_file)},
      {"mode", CoreIR::Const::make(c, "pond")}
  };
  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");
  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet",
          "cgralib.Pond", genargs, modargs);
  def->removeInstance(cnst);
  def->connect(pt->sel("in"), buf);
  inlineInstance(pt);
  inlineInstance(buf);

  //TODO: possible bug master comment this out
  //remove rst_n
  auto rst_n_conSet = buf->sel("rst_n")->getConnectedWireables();
  vector<Wireable*> conns(rst_n_conSet.begin(), rst_n_conSet.end());
  assert(conns.size() == 1);
  auto conn = conns[0];
  def->disconnect(buf->sel("rst_n"),conn);

  return true;
}

std::string MapperPasses::RegfileSubstitute::ID = "regfilesubstitute";
void MapperPasses::RegfileSubstitute::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("cgralib.Pond_amber")) {
    addVisitorFunction(c->getGenerator("cgralib.Pond_amber"), RegfileReplace);
  }

}



namespace MapperPasses {
class MemSubstituteMetaMapper: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    MemSubstituteMetaMapper() : InstanceVisitorPass(ID,"replace cgralib.Mem_amber to new coreir header mem") {}
    void setVisitorInfo() override;
};

}


bool MemtileReplaceMetaMapper(Instance* cnst) {
  cout << tab(2) << "new memory syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;

  Context* c = cnst->getContext();
  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }
  ModuleDef* def = cnst->getContainer();
  auto genargs = cnst->getModuleRef()->getGenArgs();

  string ID = genargs.at("ID")->get<string>();
  bool has_external_addrgen = genargs.at("has_external_addrgen")->get<bool>();
  bool has_flush = genargs.at("has_flush")->get<bool>();
  bool has_read_valid = genargs.at("has_read_valid")->get<bool>();
  bool has_reset = genargs.at("has_reset")->get<bool>();
  bool has_stencil_valid = genargs.at("has_stencil_valid")->get<bool>();
  bool has_valid = genargs.at("has_valid")->get<bool>();
  bool is_rom = genargs.at("is_rom")->get<bool>();
  bool use_prebuilt_mem = genargs.at("use_prebuilt_mem")->get<bool>();
  int num_inputs = genargs.at("num_inputs")->get<int>();
  int num_outputs = genargs.at("num_outputs")->get<int>();
  int width = genargs.at("width")->get<int>();

  auto config_file = cnst->getMetaData();

  config_file["ID"] = ID;
  config_file["has_external_addrgen"] = has_external_addrgen;
  config_file["has_flush"] = has_flush;
  config_file["has_read_valid"] = has_read_valid;
  config_file["has_reset"] = has_reset;
  config_file["has_stencil_valid"] = has_stencil_valid;
  config_file["has_valid"] = has_valid;
  config_file["is_rom"] = is_rom;
  config_file["use_prebuilt_mem"] = use_prebuilt_mem;
  config_file["num_inputs"] = num_inputs;
  config_file["num_outputs"] = num_outputs;
  config_file["width"] = width;



  std::set<string> routable_ports = {"chain_data_in_0","chain_data_in_1", "flush", "ren_in", "wen_in", "addr_in_0", "addr_in_1", "data_in_0", "data_in_1"};

  std::vector<string> routable_outputs = {"data_out_1", "empty", "stencil_valid", "full", "data_out_0", "sram_ready_out", "valid_out", "config_data_out_1", "config_data_out_0"};

  std::vector<string> routable_renamed_outputs = {"output_width_16_num_0", "output_width_16_num_1", "output_width_1_num_1", "output_width_1_num_2", "output_width_1_num_3", "config_data_out_0", "config_data_out_1", "output_width_1_num_0"};

  vector<Module*> loaded;
  if (!loadHeader(c, "mem_header.json", loaded)) {c->die();}

  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet", (Module*)loaded[0]);

  buf->setMetaData(config_file);

  Module* cnst_mod_ref = cnst->getModuleRef();
  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");
  
  vector<string> cnst_ports = cnst_mod_ref->getType()->getFields();

  string map_name = "";

  for (auto cnst_port : cnst_ports) {
    if (lake_port_map.count(cnst_port)) {
      if (routable_ports.count(cnst_port) > 0) {
        cout << "Connecting cnst_port: " << cnst_port << endl;
        def->connect(pt->sel("in")->sel(cnst_port), buf->sel(lake_port_map.at(cnst_port)));
      } else {
      	map_name = lake_port_map.at(cnst_port);
      	auto index = find(routable_renamed_outputs.begin(), routable_renamed_outputs.end(), map_name);
      	if (index != routable_renamed_outputs.end()){
          int port_index = index - routable_renamed_outputs.begin();
          cout << "Connecting output cnst_port: " << cnst_port << " to " << "O" << std::to_string(port_index) << endl;
          def->connect(buf->sel("O" + std::to_string(port_index)), pt->sel("in")->sel(cnst_port));
      	} else {
          cout << "Not Connecting cnst_port: " << cnst_port << endl;
      	}
      }
    } else {
      if (routable_ports.count(cnst_port) > 0) {
        cout << "Connecting cnst_port: " << cnst_port << endl;
        def->connect(pt->sel("in")->sel(cnst_port), buf->sel(cnst_port));
      }
    }
  }

  def->removeInstance(cnst);
  inlineInstance(pt);
  inlineInstance(buf);
  return true;
}


std::string MapperPasses::MemSubstituteMetaMapper::ID = "memsubstitutemetamapper";
void MapperPasses::MemSubstituteMetaMapper::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("cgralib.Mem_amber")) {
    addVisitorFunction(c->getGenerator("cgralib.Mem_amber"), MemtileReplaceMetaMapper);
  }

}


namespace MapperPasses {
class PondSubstituteMetaMapper: public CoreIR::InstancePass {
  public :
    Module* topm;
    //static std::string ID;

    PondSubstituteMetaMapper(Module* top) : InstancePass("pondsubstitutemetamapper", "add global.pond schedules") {topm = top;}
    //void setVisitorInfo() override;


bool runOnInstance(Instance* cnst) {

if (cnst->getModuleRef()->getName() == "Pond") {

  cout << tab(2) << "pond syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;
  Context* c = cnst->getContext();


  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }


  ModuleDef* def = cnst->getContainer();
  //auto genargs = cnst->getModuleRef()->getGenArgs();

  //string ID = genargs.at("ID")->get<string>();
  //int num_inputs = genargs.at("num_inputs")->get<int>();
  //int num_outputs = genargs.at("num_outputs")->get<int>();
  //int width = genargs.at("width")->get<int>();
  int num_inputs = 1;
  int num_outputs = 1;
  int width = 16;
  string mode = "pond";

  json config_file;

  //config_file["ID"] = ID;
  config_file["num_inputs"] = num_inputs;
  config_file["num_outputs"] = num_outputs;
  config_file["width"] = width;
  config_file["mode"] = mode;

  json config;
  json in2regfile_0;
  json regfile2out_0;

  in2regfile_0["cycle_starting_addr"] = {0};
  in2regfile_0["cycle_stride"] = {1};
  in2regfile_0["dimensionality"] = 1;
  in2regfile_0["extent"] = {4096};
  in2regfile_0["write_data_starting_addr"] = {0};
  in2regfile_0["write_data_stride"] = {1};


  regfile2out_0["cycle_starting_addr"] = {1};
  regfile2out_0["cycle_stride"] = {1};
  regfile2out_0["dimensionality"] = 1;
  regfile2out_0["extent"] = {4096};
  regfile2out_0["read_data_starting_addr"] = {0};
  regfile2out_0["read_data_stride"] = {1};

  config["in2regfile"] = in2regfile_0;
  config["regfile2out"] = regfile2out_0;

  config_file["config"] = config;

  std::set<string> routable_ports = {"data_in_pond_0"};

  std::vector<string> routable_outputs = {"O0", "O1"};


  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");

  vector<Module*> loaded;
  if (!loadHeader(c, "pond_header.json", loaded)) {c->die();}

  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet", (Module*)loaded[0]);

  buf->setMetaData(config_file);

  Module* cnst_mod_ref = cnst->getModuleRef();

  vector<string> cnst_ports = cnst_mod_ref->getType()->getFields();

  for (auto cnst_port : cnst_ports) {
    if (routable_ports.count(cnst_port) > 0) {
      cout << "Connecting cnst_port: " << cnst_port << endl;
      def->connect(pt->sel("in")->sel(cnst_port), buf->sel(cnst_port));
    } else {
      auto index = find(routable_outputs.begin(), routable_outputs.end(), cnst_port);
      if (index != routable_outputs.end()){
        int port_index = index - routable_outputs.begin();
        cout << "Connecting output cnst_port: " << cnst_port << endl;
        def->connect(buf->sel("O" + std::to_string(port_index)), pt->sel("in")->sel(cnst_port));
      } else {
        cout << "Not Connecting cnst_port: " << cnst_port << endl;
      }
    }
  }



  ModuleDef* mdef = topm->getDef();

  if (def == mdef) {
    def->connect(buf->sel("flush"), mdef->sel("io1in_reset.out"));
  }

  def->removeInstance(cnst);
  inlineInstance(pt);
  inlineInstance(buf);


  return true;
}
return false;
}

//void setVisitorInfo() {
//  Context* c = this->getContext();
//  if (c->hasModule("global.Pond")) {
//    addVisitorFunction(c->getModule("global.Pond"), PondReplaceMetaMapper);
//  }

//}

};
}


namespace MapperPasses {
class RegfileSubstituteMetaMapper: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    RegfileSubstituteMetaMapper() : InstanceVisitorPass(ID,"replace cgralib.pond_amber to global.pond") {}
    void setVisitorInfo() override;
};

}


bool RegfileReplaceMetaMapper(Instance* cnst) {
  cout << tab(2) << "memory syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;
  Context* c = cnst->getContext();


  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }


  ModuleDef* def = cnst->getContainer();
  auto genargs = cnst->getModuleRef()->getGenArgs();

  string ID = genargs.at("ID")->get<string>();
  int num_inputs = genargs.at("num_inputs")->get<int>();
  int num_outputs = genargs.at("num_outputs")->get<int>();
  int width = genargs.at("width")->get<int>();


  auto config_file = cnst->getMetaData();

  config_file["ID"] = ID;
  config_file["num_inputs"] = num_inputs;
  config_file["num_outputs"] = num_outputs;
  config_file["width"] = width;

  std::set<string> routable_ports = {"flush", "data_in_pond_0"};

  std::vector<string> routable_outputs = {"data_out_pond_0", "valid_out_pond"};


  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");

  vector<Module*> loaded;
  if (!loadHeader(c, "pond_header.json", loaded)) {c->die();}

  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet", (Module*)loaded[0]);

  buf->setMetaData(config_file);

  Module* cnst_mod_ref = cnst->getModuleRef();

  vector<string> cnst_ports = cnst_mod_ref->getType()->getFields();

  for (auto cnst_port : cnst_ports) {
    if (routable_ports.count(cnst_port) > 0) {
      cout << "Connecting cnst_port: " << cnst_port << endl;
      def->connect(pt->sel("in")->sel(cnst_port), buf->sel(cnst_port));
    } else {
      auto index = find(routable_outputs.begin(), routable_outputs.end(), cnst_port);
      if (index != routable_outputs.end()){
        int port_index = index - routable_outputs.begin();
        cout << "Connecting output cnst_port: " << cnst_port << endl;
        def->connect(buf->sel("O" + std::to_string(port_index)), pt->sel("in")->sel(cnst_port));
      } else {
        cout << "Not Connecting cnst_port: " << cnst_port << endl;
      }
    }
  }


  def->removeInstance(cnst);
  inlineInstance(pt);
  inlineInstance(buf);

  //TODO: possible bug master comment this out
  //remove rst_n
/*
  auto rst_n_conSet = buf->sel("rst_n")->getConnectedWireables();
  vector<Wireable*> conns(rst_n_conSet.begin(), rst_n_conSet.end());
  assert(conns.size() == 1);
  auto conn = conns[0];
  def->disconnect(buf->sel("rst_n"),conn);
*/
  return true;
}

std::string MapperPasses::RegfileSubstituteMetaMapper::ID = "regfilesubstitutemetamapper";
void MapperPasses::RegfileSubstituteMetaMapper::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("cgralib.Pond_amber")) {
    addVisitorFunction(c->getGenerator("cgralib.Pond_amber"), RegfileReplaceMetaMapper);
  }

}

namespace MapperPasses {
class RomSubstituteMetaMapper: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    RomSubstituteMetaMapper() : InstanceVisitorPass(ID,"replace memory.rom2 to new coreir header mem") {}
    void setVisitorInfo() override;
};

}


bool RomReplaceMetaMapper(Instance* cnst) {
  cout << tab(2) << "new rom syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;

  Context* c = cnst->getContext();
  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }
  ModuleDef* def = cnst->getContainer();
  auto genargs = cnst->getModuleRef()->getGenArgs();

  int depth = genargs.at("depth")->get<int>();
  int width = genargs.at("width")->get<int>();

  json config_file;

  config_file["mode"] = "sram";
  config_file["is_rom"] = true;
  config_file["width"] = width;
  config_file["depth"] = depth;
  config_file["init"] = cnst->getModArgs().at("init")->get<Json>();

  vector<Module*> loaded;
  if (!loadHeader(c, "mem_header.json", loaded)) {c->die();}

  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet", (Module*)loaded[0]);

  buf->setMetaData(config_file);

  Module* cnst_mod_ref = cnst->getModuleRef();
  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");

  // vector<string> cnst_ports = cnst_mod_ref->getType()->getFields();

  cout << "Wiring raddr" << endl;
  def->connect(pt->sel("in")->sel("raddr"), buf->sel(lake_port_map.at("addr_in_0")));

  cout << "Wiring ren" << endl;
  def->connect(pt->sel("in")->sel("ren"), buf->sel(lake_port_map.at("ren_in_0")));

  cout << "Wiring rdata" << endl;
  def->connect(buf->sel("O0"), pt->sel("in")->sel("rdata"));

  def->removeInstance(cnst);
  inlineInstance(pt);
  inlineInstance(buf);
  return true;
}


std::string MapperPasses::RomSubstituteMetaMapper::ID = "romsubstitutemetamapper";
void MapperPasses::RomSubstituteMetaMapper::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasGenerator("memory.rom2")) {
    addVisitorFunction(c->getGenerator("memory.rom2"), RomReplaceMetaMapper);
  }

}


namespace MapperPasses {
class PeSubstituteMetaMapper: public CoreIR::InstanceVisitorPass {
  public :
    static std::string ID;
    PeSubstituteMetaMapper() : InstanceVisitorPass(ID,"replace PE to new coreir header pe") {}
    void setVisitorInfo() override;
};

}


bool PeReplaceMetaMapper(Instance* cnst) {
  cout << tab(2) << "new pe syntax transformation!" << endl;
  cout << tab(2) << toString(cnst) << endl;

  Context* c = cnst->getContext();
  auto allSels = cnst->getSelects();
  for (auto itr: allSels) {
    cout << tab(2) << "Sel: " << itr.first << endl;
  }
  ModuleDef* def = cnst->getContainer();

  // c->getNamespace("global")->eraseModule("PE");
  // c->getNamespace("global")->eraseModule("PE_wrapped");

  vector<Module*> loaded;
  if (!loadHeader(c, "petile_header.json", loaded)) {c->die();}

  cout << "Loaded header" << endl;

  Instance* buf = def->addInstance(cnst->getInstname()+"_garnet", (Module*)loaded[0]);


  Module* cnst_mod_ref = cnst->getModuleRef();
  auto pt = addPassthrough(cnst, cnst->getInstname()+"_tmp");
  def->connect(pt->sel("in"), buf);

  def->removeInstance(cnst);
  inlineInstance(pt);
  inlineInstance(buf);
  return true;
}


std::string MapperPasses::PeSubstituteMetaMapper::ID = "pesubstitutemetamapper";
void MapperPasses::PeSubstituteMetaMapper::setVisitorInfo() {
  Context* c = this->getContext();
  if (c->hasModule("global.WrappedPE")) {
    addVisitorFunction(c->getModule("global.WrappedPE"), PeReplaceMetaMapper);
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

void disconnect_input_enable(Context* c, Module* top) {
  ModuleDef* def = top->getDef();
  for (auto it: def->sel("self")->getSelects()) {
      string port = it.first;
      cout << "Find top interface: " << port << endl;
    if (contains(port, "read_en")) {
      auto conns = def->sel("self")->sel(port)->getConnectedWireables();
      for (auto conn: conns) {
        def->disconnect(def->sel("self")->sel(port), conn);
      }
    }
  }
}


// Pass to map Tahoe memory tile intended for metamapper
void map_memory(CodegenOptions& options, Module* top, map<string, UBuffer> & buffers, bool garnet_syntax_trans = false) {
  auto c = top->getContext();
  //LoadDefinition_cgralib(c);
  disconnect_input_enable(c, top);

   //GLB passes
  c->addPass(new ReplaceCoarseGrainedAffCtrl);
  c->runPasses({"replacecoarsegrainedaffctrl"});

  auto glb_pass = new GetGLBConfig();
  c->addPass(glb_pass);
  c->runPasses({"getglbconfig"});
  //override latency using the input,
  //FIXME: this hack will break stencil apps
  if ((options.host2glb_latency != 0) && (glb_pass->latency != 0))
     glb_pass->latency = options.host2glb_latency;

  c->addPass(new MapperPasses::StripGLB);
  c->runPasses({"stripglb"});
  addIOsWithGLBConfigMetaMapper(c, top, buffers, glb_pass);

  c->addPass(new CustomFlatten);
  c->runPasses({"customflatten"});

  //Change the stencil valid signal to cgra to glb
  c->addPass(new ReplaceGLBValid(glb_pass));
  c->runPasses({"replaceglbvalid"});
  c->addPass(new RemoveFlush());
  c->runPasses({"removeflush"});
  if (garnet_syntax_trans) {
    c->addPass(new SubstructGLBLatency(glb_pass->latency));
    c->runPasses({"substractglblatency"});
  }

  c->addPass(new MapperPasses::RomSubstituteMetaMapper);
  c->runPasses({"romsubstitutemetamapper"});
  c->addPass(new MapperPasses::MemSubstituteMetaMapper);
  c->runPasses({"memsubstitutemetamapper"});
  c->addPass(new MapperPasses::PondSubstituteMetaMapper(top));
  c->runPasses({"pondsubstitutemetamapper"});
  c->addPass(new MapperPasses::RegfileSubstituteMetaMapper);
  c->runPasses({"regfilesubstitutemetamapper"});

}


void garnet_map_module(Module* top, bool garnet_syntax_trans = false) {
  auto c = top->getContext();

  top->print();

  //load_cgramapping(c);
  LoadDefinition_cgralib(c);

  c->runPasses({"rungenerators"});
  //A new pass to remove input enable signal affine controller
  disconnect_input_enable(c, top);
  c->runPasses({"deletedeadinstances"});

  c->runPasses({"cullgraph"});
  c->runPasses({"removewires"});
  addIOs(c,top);
  c->runPasses({"cullgraph"});
  c->addPass(new CustomFlatten);
  c->runPasses({"customflatten"});
  if (garnet_syntax_trans) {
    c->addPass(new MapperPasses::MemInitCopy);
    c->runPasses({"meminitcopy"});
    c->addPass(new MapperPasses::MemSubstitute);
    c->runPasses({"memsubstitute"});
    c->addPass(new MapperPasses::RegfileSubstitute);
    c->runPasses({"regfilesubstitute"});
  }
  c->addPass(new MapperPasses::ConstDuplication);
  c->runPasses({"constduplication"});
  c->addPass(new MapperPasses::MemConst);
  c->runPasses({"memconst"});

  c->runPasses({"cullgraph"});
  c->getPassManager()->printLog();
  cout << "Trying to save" << endl;
  c->runPasses({"coreirjson"},{"global","commonlib","mantle"});
  c->runPasses({"removewires"});

  auto jpass = static_cast<CoreIR::Passes::CoreIRJson*>(c->getPassManager()->getAnalysisPass("coreirjson"));
  string postmap = "after_mapping_" + top->getName() + ".json";
  ////Create file here.
  std::ofstream file(postmap);
  jpass->writeToStream(file,top->getRefName());
}

void garnet_map_module(CodegenOptions& options, Module* top, map<string, UBuffer> & buffers, bool garnet_syntax_trans = false) {
  auto c = top->getContext();

  top->print();

  //load_cgramapping(c);
  LoadDefinition_cgralib(c);

  c->runPasses({"rungenerators"});

  //A new pass to remove input enable signal affine controller
  disconnect_input_enable(c, top);
  c->runPasses({"deletedeadinstances"});
  c->runPasses({"cullgraph"});

  //GLB passes
  c->addPass(new ReplaceCoarseGrainedAffCtrl);
  c->runPasses({"replacecoarsegrainedaffctrl"});

  auto glb_pass = new GetGLBConfig();
  c->addPass(glb_pass);
  c->runPasses({"getglbconfig"});
  //override latency using the input,
  //FIXME: this hack will break stencil apps
  if ((options.host2glb_latency != 0) && (glb_pass->latency != 0))
     glb_pass->latency = options.host2glb_latency;
  cout << "Latency: " << glb_pass->latency << endl;
  for (auto it: glb_pass->glb2cgra)
    cout << "buf: "<< it.first << "\n\tglb2fabric: " << it.second  << endl;
  //for (auto it: glb_pass->cgra2glb)
  //  cout << "buf:" << it.first << "\n\tfabric2glb: " << it.second  << endl;
  c->addPass(new MapperPasses::StripGLB);
  c->runPasses({"stripglb"});

  c->runPasses({"removeunconnected"});
  c->runPasses({"cullgraph"});
  c->runPasses({"removewires"});
  addIOsWithGLBConfig(c, top, buffers, glb_pass);
  c->runPasses({"cullgraph"});
  c->addPass(new CustomFlatten);
  c->runPasses({"customflatten"});

  //Change the stencil valid signal to cgra to glb
  c->addPass(new ReplaceGLBValid(glb_pass));
  c->runPasses({"replaceglbvalid"});
  c->addPass(new RemoveFlush());
  c->runPasses({"removeflush"});
  if (garnet_syntax_trans) {

    c->addPass(new MapperPasses::MemInitCopy);
    c->runPasses({"meminitcopy"});
    c->addPass(new SubstructGLBLatency(glb_pass->latency));
    c->runPasses({"substractglblatency"});
    c->addPass(new MapperPasses::MemSubstitute());
    c->runPasses({"memsubstitute"});
    c->addPass(new MapperPasses::RegfileSubstitute());
    c->runPasses({"regfilesubstitute"});
  }
  c->addPass(new MapperPasses::ConstDuplication);
  c->runPasses({"constduplication"});
  c->addPass(new MapperPasses::MemConst);
  c->runPasses({"memconst"});
  c->addPass(new ReplaceMemInitWithPE);
  c->runPasses({"replacememinitwithpe"});

  c->runPasses({"cullgraph"});
  c->getPassManager()->printLog();
  cout << "Trying to save" << endl;
  c->runPasses({"coreirjson"},{"global","commonlib","mantle"});
  c->runPasses({"removewires"});

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

void count_memory_tiles(Module* top) {
  auto c = top->getContext();

  top->print();

  LoadDefinition_cgralib(c);

  //A new pass to remove input enable signal affine controller
  disconnect_input_enable(c, top);
  c->runPasses({"deletedeadinstances"});

  c->runPasses({"cullgraph"});
  c->runPasses({"removewires"});
  addIOs(c,top);
  c->runPasses({"cullgraph"});
  c->addPass(new CustomFlatten);
  c->runPasses({"customflatten"});
  //c->addPass(new MapperPasses::ConstDuplication);
  //c->runPasses({"constduplication"});
  //c->addPass(new MapperPasses::MemConst);
  //c->runPasses({"memconst"});
  //c->addPass(new MapperPasses::MemSubstitute);
  //c->runPasses({"memsubstitute"});

  c->runPasses({"cullgraph"});
  c->getPassManager()->printLog();
  cout << "Trying to save" << endl;
  c->runPasses({"coreirjson"},{"global","commonlib","mantle"});
  map<string, int> counts;
  for (auto inst : top->getDef()->getInstances()) {
    cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
    counts[inst.second->getModuleRef()->getName()]++;
  }
  cout << top->getName() << " Post Mapping Resource Counts..." << endl;
  for (auto c : counts) {
    cout << tab(1) << c.first << " -> " << c.second << endl;
  }
  assert(false);

  //auto jpass = static_cast<CoreIR::Passes::CoreIRJson*>(c->getPassManager()->getAnalysisPass("coreirjson"));
  //string postmap = "after_mapping_" + top->getName() + ".json";
  //////Create file here.
  //std::ofstream file(postmap);
  //jpass->writeToStream(file,top->getRefName());
}

void count_post_mapped_memory_use(Module* gmod) {
  int total_words_used = 0;
  for (auto inst : gmod->getDef()->getInstances()) {
    if (inst.second->getModuleRef()->getName() == "Mem_amber") {
      auto config = inst.second->getMetaData()["config"];

      cout << "Metadata..." << config << endl;
      if (config.find("BLOCK_SREG_DELAY") != config.end()) {
        cout << tab(1) << "Block sreg of length: " << config["BLOCK_SREG_DELAY"].get<int>() << endl;
        total_words_used +=
          2*config["BLOCK_SREG_DELAY"].get<int>();
      } else if (config.find("LINEAR_SREG_DELAY") != config.end()) {
        cout << tab(1) << "Linear sreg of length: " << config["LINEAR_SREG_DELAY"].get<int>() << endl;
        total_words_used +=
          config["LINEAR_SREG_DELAY"].get<int>();
        //assert(false);
      } else {
        int acc_range = config["max_addr"].get<int>() - config["min_addr"].get<int>() + 1;
        total_words_used += acc_range;
      }
    }
  }

  cout << "Total words used by " << gmod->getName() << ": " << total_words_used << endl;
  //assert(false);
}

void count_post_mapped_memory_accesses(Module* gmod) {
  int accesses = 0;
  int non_config_reg_tiles = 0;
  int total_tiles = 0;
  for (auto inst : gmod->getDef()->getInstances()) {
    if (inst.second->getModuleRef()->getName() == "Mem_amber") {
      cout << "Metadata..." << inst.second->getMetaData()["config"] << endl;
      cout << "# accesses in = " << inst.second->getMetaData()["config"]["num_accesses"] << endl;
      auto config = inst.second->getMetaData()["config"];
      accesses += inst.second->getMetaData()["config"]["num_accesses"].get<int>();
      int acc_range = config["max_addr"].get<int>() - config["min_addr"].get<int>() + 1;
      total_tiles++;
      if (acc_range > 1) {
        non_config_reg_tiles++;
      }
    }
  }

  const double ENERGY_PER_ACCESS_PJ = 1.0;
  cout << "Total # accesses    : " << accesses << endl;
  cout << "Non config reg tiles: " << non_config_reg_tiles << endl;
  cout << "Total # tiles       : " << total_tiles << endl;
  //assert(false);
}


//You should consider
//Max extend bitwidth
//Max cycle stride
//Max starting cycle address
struct MemCtrl{
    map<string, int> val_map;
    map<string, int> bw_map;

    void init_key(const string & key) {
        val_map[key] = 0;
        bw_map[key] = 0;
    }

    void register_max_val(const string & ctrl_key, json & config) {
      for (auto & ctrl: config.items()) {
          auto & val = ctrl.value();
          if(val.count(ctrl_key)) {
              vector<int> ext = val[ctrl_key].get<vector<int>>();
              cout << ctrl_key  << ctrl.key() << "->" << ext << endl;
              int this_ctrl_max_ext = *std::max_element(ext.begin(), ext.end());
              val_map.at(ctrl_key) = std::max(val_map.at(ctrl_key), this_ctrl_max_ext);
              bw_map.at(ctrl_key) = std::max(bw_map.at(ctrl_key), (int)round(log2(this_ctrl_max_ext)));
          }
      }

    }

    void dumpToFile(ofstream& out) {
        out << tab(1) << "controller value MAX: " << endl;
        for (auto it: val_map) {
          string key = it.first;
          out << tab(2) << key << ": " << val_map.at(key) << ", bitwidth: " << bw_map.at(key) << endl;
        }
    }
};

MemCtrl post_mapped_memory_controller_bitwidth(Module* gmod) {
  int min_ext = 0, min_ext_bw = 0;
  MemCtrl lakeController;
  vector<string> ctrl_names = {"extent", "cycle_starting_addr", "cycle_stride"};
  for (auto inst : gmod->getDef()->getInstances()) {
    if (inst.second->getModuleRef()->getName() == "Mem") {
      auto config = inst.second->getModArgs().at("config")->get<Json>();
      cout << "Metadata...\n\t" << config << endl;
      for (string& ctrl_key: ctrl_names) {
          lakeController.init_key(ctrl_key);
          lakeController.register_max_val(ctrl_key, config);
      }
      //for (auto & ctrl: config.items()) {
      //    auto & val = ctrl.value();
      //    if(val.count("extent")) {
      //        vector<int> ext = val["extent"].get<vector<int>>();
      //        cout << "ctrl: " << ctrl.key() << "->" << ext << endl;
      //        int this_ctrl_min_ext = *std::max_element(ext.begin(), ext.end());
      //        min_ext = std::max(min_ext, this_ctrl_min_ext);
      //        min_ext_bw = std::max(min_ext_bw, (int)round(log2(this_ctrl_min_ext)));
      //    }
      //}
    }
  }
  return lakeController;
}

void analyze_latency(CodegenOptions& options, umap* sched_map) {
  auto sched_max = lexmaxval(to_set(range(sched_map)));
  ofstream out(options.dir + "/cgra_resource_estimation.csv", std::ios_base::app);
  out << "latency, " << str(sched_max) << endl;
  cout << "latency, " << str(sched_max) << endl;
  out.close();
}

void analyze_post_mapped_app(CodegenOptions& options, prog& prg, map<string, UBuffer>& buffers, Module* gmod) {
  //count_post_mapped_memory_use(gmod);
  //count_post_mapped_memory_accesses(gmod);
  auto context = gmod->getContext();
  auto ns = context->getNamespace("global");
  //cout << "=== Post mapping instances for " << prg.name << endl;
  map<string, int> counts;
  for (auto inst : gmod->getDef()->getInstances()) {
    //cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
    counts[inst.second->getModuleRef()->getName()]++;
  }
  cout << prg.name << " Post Mapping Resource Counts..." << endl;
  for (auto c : counts) {
    cout << tab(1) << c.first << " -> " << c.second << endl;
  }
  //assert(false);
  if(!saveToFile(ns, prg.name + "_post_mapping.json", gmod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }
  //assert(false);
}

void analyze_post_mapped_app_M1(CodegenOptions& options, prog& prg, map<string, UBuffer>& buffers, Module* gmod) {
  ofstream out("cgra_resource_estimation.csv");
  auto context = gmod->getContext();
  auto ns = context->getNamespace("global");
  //cout << "=== Post mapping instances for " << prg.name << endl;
  map<int, int> affine_controller;
  map<int, int> affine_func;
  int mem = 0;
  for (auto inst : gmod->getDef()->getInstances()) {
    //cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
    string module_name = inst.second->getModuleRef()->getName();
    if (contains(module_name, "affine_controller")) {
       auto tp = inst.second->sel("d")->getType();
       assert(isa<ArrayType>(tp));
       auto atp = dyn_cast<ArrayType>(tp);
       affine_controller[atp->getLen()] ++;
    }
    else if (contains(module_name, "_ub")) {
      for(auto sub_inst : inst.second->getModuleRef()->getDef()->getInstances()) {
        string module_name = sub_inst.second->getModuleRef()->getName();
        if (contains(module_name, "Mem_amber")) {
          mem ++;
        } else if (contains(module_name, "affine_controller")) {
          auto tp = sub_inst.second->sel("d")->getType();
          assert(isa<ArrayType>(tp));
          auto atp = dyn_cast<ArrayType>(tp);
          affine_controller[atp->getLen()] ++;
        } else if (contains(module_name, "aff__U")) {
          auto tp = sub_inst.second->sel("d")->getType();
          assert(isa<ArrayType>(tp));
          auto atp = dyn_cast<ArrayType>(tp);
          affine_func[atp->getLen()] ++;
        }
      }
    }
  }
  int aff_ctrl_pe = 0, aff_ctrl_full = 0;
  for (auto it: affine_controller) {
    aff_ctrl_pe += it.second * (it.first * 2 - 3);
    aff_ctrl_full += it.second * (it.first * 8 - 1);
  }
  int aff_func_pe = 0, aff_func_full = 0;
  for (auto it: affine_func) {
    aff_func_pe += it.second * (it.first);
    aff_func_full += it.second * (2*it.first);
  }
  //cout << prg.name << " Post Mapping Resource Counts..." << endl;
  out << tab(2) << " affine_controller: " << affine_controller << endl;
  out << tab(2) << " affine_func: " << affine_func<< endl;
  out << tab(2) << " aff_ctrl pe: " << aff_ctrl_pe << endl;
  out << tab(2) << " aff_func pe: " << aff_func_pe << endl;
  out << tab(2) << " aff_ctrl pe full: " << aff_ctrl_full << endl;
  out << tab(2) << " aff_func pe full: " << aff_func_full << endl;
  out << tab(2) << " mem:  " << mem << endl;
}

void analyze_post_mapped_app_emit_to_file(CodegenOptions& options, prog& prg, map<string, UBuffer>& buffers, Module* gmod) {
  //count_post_mapped_memory_use(gmod);
  //count_post_mapped_memory_accesses(gmod);
  ofstream out(options.dir + "/cgra_resource_estimation.csv");
  auto context = gmod->getContext();
  auto ns = context->getNamespace("global");
  //cout << "=== Post mapping instances for " << prg.name << endl;
  map<string, int> counts;
  for (auto inst : gmod->getDef()->getInstances()) {
    //cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
    counts[inst.second->getModuleRef()->getName()]++;
  }
  cout << prg.name << " Post Mapping Resource Counts..." << endl;
  for (auto c : counts) {
    cout << tab(1) << c.first << " -> " << c.second << endl;
    out << tab(1) << c.first << ", " << c.second << endl;
  }
  auto ctrl_bw_info = post_mapped_memory_controller_bitwidth(gmod);
  out << endl;
  ctrl_bw_info.dumpToFile(out);
  out.close();
}

//This is the top_level coreIR generation function
void generate_coreir(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    schedule_info& hwinfo) {

  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cgralib(context);
  CoreIRLoadLibrary_cwlib(context);
  CoreIRLoadLibrary_float(context);
  CoreIRLoadLibrary_float_DW(context);
  //load_float(context);
  add_delay_tile_generator(context);
  add_raw_quad_port_memtile_generator(context);
  add_tahoe_memory_generator(context);
  ram_module(context, DATAPATH_WIDTH, 2048);


  CoreIR::Module* prg_mod;
  if (options.rtl_options.use_prebuilt_memory) {
    prg_mod = generate_coreir_without_ctrl(options, buffers, prg, schedmap, context, hwinfo, "");
  } else {
    prg_mod = generate_coreir(options, buffers, prg, schedmap, context, hwinfo);
  }

  auto ns = context->getNamespace("global");

  //Change into serializetofile
  //context->setTop(prg_mod);
  //if(!serializeToFile(context, options.dir + prg.name + ".json")) {
  //  cout << "Could not save ubuffer coreir" << endl;
  //  context->die();
  //}
  if(!saveToFile(ns, options.dir + prg.name + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  context->removeTop();
  auto ns_new = context->getNamespace("global");
  //Garnet pass
  if (options.rtl_options.use_prebuilt_memory) {
    garnet_map_module(options, prg_mod, buffers, true);
    context->runPasses({"rungenerators", "flatten", "removewires", "cullgraph"});

    Module* gmod = ns_new->getModule(prg.name);
    analyze_post_mapped_app_emit_to_file(options, prg, buffers, gmod);
    analyze_latency(options, schedmap);
    if(!saveToFile(ns_new,  options.dir + prg.name+ "_garnet.json", prg_mod)) {
      cout << "Could not save ubuffer coreir" << endl;
      context->die();
    }
  }

  if (options.rtl_options.target_tile == TARGET_TILE_M1 ||
      options.rtl_options.target_tile == TARGET_TILE_M3) {
    //count_memory_tiles(prg_mod);
    //garnet_map_module(prg_mod);
    Module* gmod = ns_new->getModule(prg.name);
    analyze_post_mapped_app_M1(options, prg, buffers, gmod);
  }
  prg_mod->print();
  //assert(false);

  deleteContext(context);
}

void generate_coreir_without_ctrl(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    schedule_info& hwinfo,
    string dse_compute_filename) {


  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cgralib(context);
  CoreIRLoadLibrary_cwlib(context);
  add_delay_tile_generator(context);
  add_raw_quad_port_memtile_generator(context);
  add_tahoe_memory_generator(context);
  ram_module(context, DATAPATH_WIDTH, 2048);

  auto c = context;

  CoreIR::Module* prg_mod;

  prg_mod = generate_coreir_without_ctrl(options, buffers, prg, schedmap, context, hwinfo, dse_compute_filename);


  auto ns = context->getNamespace("global");
  if(!saveToFile(ns, options.dir + prg.name + ".json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  map_memory(options, prg_mod, buffers, true);


//  for (auto op : prg.all_ops()) {
//    cout << "Inlining " << op->name << endl;
//    prg_mod->print();
//    for (auto inst: prg_mod->getDef()->getInstances()){
//        inlineInstance(inst.second);
//    }
    //CoreIR::Instance* kernel = prg_mod->getDef()->getInstances().at(op->name);
    //inlineInstance(kernel);
//  }

  c->runPasses({"deletedeadinstances"});
  c->runPasses({"removewires"});
  c->runPasses({"coreirjson"},{"global"});

  context->runPasses({"rungenerators", "removewires", "cullgraph"});
  c->runPasses({"flatten"});
  c->runPasses({"flattentypes"});
  c->runPasses({"deletedeadinstances"});


  auto global = context->getNamespace("global");
  if(!saveToFile(global,  options.dir + prg.name+ "_to_metamapper.json", prg_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }

  deleteContext(context);
}

//CoreIR::Context* context = CoreIR::newContext();

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

  CoreIR::Wireable* delay_one(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w) {
    assert(w != nullptr);

    auto tp = w->getType();
    if (isBit(tp)) {
      return delaybit(bdef, w);
    } else if (isa<ArrayType>(tp)) {
      cout << "Casting to array..." << endl;

      auto atp = static_cast<ArrayType*>(tp);
      auto elem_type = atp->getElemType();
      cout << "Type of " << w->toString() << ": " << elem_type->toString() << endl;
      if (isa<ArrayType>(elem_type)) {
        assert(isa<ArrayType>(elem_type));

        cout << "Getting array..." << endl;

        auto elem_arr =
          static_cast<ArrayType*>(elem_type);
        int elem_width = elem_arr->getLen();
        int len = atp->getLen();
        cout << "Width = " << elem_width << endl;
        cout << "Len   = " << len << endl;
        return delay_array(bdef, w, elem_width, len);
      } else {
        return delay(bdef, bdef->getContext()->getUnique(), w, atp->getLen());
        //assert(false);
      }
    } else {
      cout << "Unsupported type: " << tp->toString() << endl;
      assert(false);
    }
    assert(false);
  }

  CoreIR::Wireable* delay_by(CoreIR::ModuleDef* bdef,
      const std::string& out_name,
      CoreIR::Wireable* w,
      const int cycles) {
    auto context = bdef->getContext();
    auto ns = context->getNamespace("global");

    vector<pair<string, CoreIR::Type*> >
      ub_field{{"in", w->getType()->getFlipped()},
        {"out", w->getType()}};
    CoreIR::RecordType* utp = context->Record(ub_field);
    auto ub = ns->newModuleDecl(out_name + "_pt_" + context->getUnique(), utp);
    auto df = ub->newModuleDef();
    df->connect(df->sel("self.in"), df->sel("self.out"));
    ub->setDef(df);

    auto pt = bdef->addInstance(out_name, ub);

    auto delayed = delay_by(bdef, w, cycles);
    bdef->connect(pt->sel("in"), delayed);
    return pt->sel("out");
  }

  CoreIR::Wireable* delay_by(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w,
      const int cycles) {
    assert(w != nullptr);

    Wireable* delayed = w;
    for (int i = 0; i < cycles; i++) {
      cout << "delaying " << i << ", " << delayed->toString() << endl;
      delayed = delay_one(bdef, delayed);
      assert(delayed != nullptr);
      cout << "done with delay" << endl;
    }
    cout << "Returning delayed..." << endl;
    return delayed;
  }

  CoreIR::Wireable* delay(CoreIR::ModuleDef* bdef,
      CoreIR::Wireable* w,
      const int width) {
    return delay(bdef, bdef->getContext()->getUnique(), w, width);
  }

CoreIR::Wireable* delay_array(ModuleDef* def,
    CoreIR::Wireable* input,
    int elem_width,
    int num_elems) {
  cout << "Delaying array " << endl;
  return delay_array(def, "arr_" + def->getContext()->getUnique(), input, elem_width, num_elems);
}

CoreIR::Wireable* delay_array(ModuleDef* def,
    const std::string& name,
    CoreIR::Wireable* input,
    int elem_width,
    int num_elems) {

  assert(input != nullptr);

  cout << "Starting delay with: " << input->toString() << endl;
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

  cout << "Done delaying" << endl;
  auto out = delay->sel("out");
  cout << "out = " << out->toString() << endl;
  return out;
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

CoreIR::Wireable* sum_term_numerators(ModuleDef* def, isl_aff* aff, int width) {
  vector<CoreIR::Wireable*> terms;

  //int width = CONTROLPATH_WIDTH;
  auto context = def->getContext();
  auto c = context;
  auto ns = c->getNamespace("global");

  int dims = num_in_dims(aff);
  for (int d = 0; d < dims; d++) {
    auto rcoeff = get_coeff(aff, d);
    int v;
    if (isl_val_is_int(rcoeff)) {
      v = to_int(rcoeff);
    } else {
      v = isl_val_get_num_si(rcoeff);
    }
    cout << "raw coeff: " << str(rcoeff) << endl;
    //int v = to_int(get_coeff(aff, d));
    //cout << "coeff: " << v << endl;
    auto constant = def->addInstance(
        "coeff_" + str(d) + context->getUnique(),
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
  int v;
  auto const_c = const_coeff(aff);
  if (isl_val_is_int(const_c)) {
    v = to_int(const_c);
  } else {
    v = isl_val_get_num_si(const_c);
  }
  cout << "coeff: " << v << endl;
  auto constant = def->addInstance(
      "const_term" + c->getUnique(),
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, v))}});
  terms.push_back(constant->sel("out"));
  auto out = addList(def, terms, width);
  return out;
}

CoreIR::Wireable* mul(ModuleDef* def, CoreIR::Wireable* a, const int val) {
  auto c = def->getContext();
  int width = wire_width(a);
  auto m = def->addInstance(
      "mul_" + c->getUnique(),
      "coreir.mul",
      {{"width", CoreIR::Const::make(c, width)}});
  def->connect(m->sel("in0"), a);
  def->connect(m->sel("in1"), mkConst(def, width, val));
  return m->sel("out");
}

CoreIR::Wireable* shiftr(ModuleDef* def, CoreIR::Wireable* a, const int val) {
  auto c = def->getContext();
  int width = wire_width(a);
  auto m = def->addInstance(
      "shift_" + c->getUnique(),
      "coreir.lshr",
      {{"width", CoreIR::Const::make(c, width)}});
  def->connect(m->sel("in0"), a);
  def->connect(m->sel("in1"), mkConst(def, width, val));
  return m->sel("out");
}

CoreIR::Module* coreir_for_aff(CoreIR::Context* context, isl_aff* aff, int width) {

  auto ns = context->getNamespace("global");

  vector<pair<string, CoreIR::Type*> >
    ub_field{{"out", context->Bit()->Arr(width)}};
  cout << "aff = " << str(aff) << endl;
  int dims = num_in_dims(aff);
  cout << "dims = " << dims << endl;
  ub_field.push_back({"d", context->BitIn()->Arr(width)->Arr(dims)});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("aff_" + context->getUnique(), utp);
  auto def = m->newModuleDef();

  auto c = context;
  auto self = def->sel("self");


  vector<Wireable*> terms;
  for (int d = 0; d < num_div_dims(aff); d++) {
    auto a = isl_aff_get_div(aff, d);
    cout << tab(2) << "=== div: " << str(a) << endl;
    int denom = to_int(isl_aff_get_denominator_val(a));
    assert(denom == 2);
    cout << tab(3) << "denom = " << denom << endl;
    int coeff = to_int(isl_aff_get_coefficient_val(aff, isl_dim_div, d));
    auto res = sum_term_numerators(def, a, width);
    auto val = mul(def, shiftr(def, res, 1), coeff);
    terms.push_back(val);
  }

  auto outr = sum_term_numerators(def, aff, width);
  terms.push_back(outr);
  auto out = addList(def, terms, width);
  def->connect(def->sel("self.out"), out);
  m->setDef(def);

  return m;
}


CoreIR::Module* coreir_for_aff(CoreIR::Context* context, isl_aff* aff) {
  int width = CONTROLPATH_WIDTH;
  return coreir_for_aff(context, aff, width);
}

CoreIR::Module* coreir_for_multi_aff(CoreIR::Context* context, isl_multi_aff* aff) {
  auto ns = context->getNamespace("global");

  int width = CONTROLPATH_WIDTH;
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

  m->setDef(def);

  return m;
}

CoreIR::Module* coreir_for_basic_set(CoreIR::Context* context, isl_basic_set* dom) {
  cout << tab(1) << "dom = " << str(dom) << endl;
  assert(num_div_dims(dom) == 0);
  assert(num_param_dims(dom) == 0);

  auto ns = context->getNamespace("global");
  auto c = context;

  int width = CONTROLPATH_WIDTH;
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

  int width = CONTROLPATH_WIDTH;
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

CoreIR::Module* affine_controller_def(CoreIR::Context* context, isl_set* dom, isl_aff* aff) {
  cout << tab(1) << "dom = " << str(dom) << endl;

  auto ns = context->getNamespace("global");
  auto c = context;

  int width = CONTROLPATH_WIDTH;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", c->Named("coreir.clkIn")},
      {"rst_n", c->BitIn()},
      {"flush", c->BitIn()},
      {"valid", c->Bit()}};
  int dims = num_in_dims(aff);
  ub_field.push_back({"d", context->Bit()->Arr(16)->Arr(dims)});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("affine_controller_" + context->getUnique(), utp);
  return m;
}

CoreIR::Instance* build_counter(CoreIR::ModuleDef* def,
        string name,
        const int width,
        const int min_val,
        const int max_val,
        const int inc_val) {
    auto c = def->getContext();
    CoreIR::Values args = {
        {"width", CoreIR::Const::make(c, width)},
        {"min", CoreIR::Const::make(c, min_val)},
        {"max", CoreIR::Const::make(c, max_val)},
        {"inc", CoreIR::Const::make(c, inc_val)},
    };
    auto ins = def->addInstance(name, "commonlib.counter", args);
    return ins;
}

CoreIR::Module* affine_controller_primitive(CodegenOptions& options, CoreIR::Context* context, isl_set* dom, isl_aff* aff, int width) {
  cout << tab(1) << "dom = " << str(dom) << endl;

  auto ns = context->getNamespace("global");
  auto c = context;

  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", c->Named("coreir.clkIn")},
      {"valid", c->Bit()}};
  int dims = num_in_dims(aff);
  ub_field.push_back({"d", context->Bit()->Arr(width)->Arr(dims)});
  if (options.rtl_options.use_prebuilt_memory) {
    ub_field.push_back({"rst_n", c->BitIn()});
  }

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("affine_controller_" + context->getUnique(), utp);
  auto def = m->newModuleDef();
  auto aff_mod = coreir_for_aff(c, aff, width);
  auto aff_func = def->addInstance("affine_func", aff_mod);

  auto one = def->addInstance(context->getUnique(),
      "coreir.const",
      {{"width", CoreIR::Const::make(c, width)}},
      {{"value", CoreIR::Const::make(c, BitVector(width, 1))}});

  auto tinc = def->addInstance("true",
    "corebit.const",
    {{"value", CoreIR::Const::make(c, true)}});

  CoreIR::Wireable* cycle_time_reg;
  if (options.rtl_options.use_prebuilt_memory) {
    cycle_time_reg = build_counter(def, "cycle_time", width, 0, (unsigned int)(pow(2, width-1)-1), 1);
    def->connect(cycle_time_reg->sel("reset"), def->sel("self.rst_n"));
    def->connect(cycle_time_reg->sel("en"), tinc->sel("out"));
  } else {
    cycle_time_reg = def->addInstance("cycle_time", "coreir.reg",
        {{"width", CoreIR::Const::make(context, width)}});

    auto inc_time = def->addInstance("inc_time", "coreir.add", {{"width", CoreIR::Const::make(c, width)}});
    def->connect(inc_time->sel("in0"), cycle_time_reg->sel("out"));
    def->connect(inc_time->sel("in1"), one->sel("out"));
    def->connect(inc_time->sel("out"), cycle_time_reg->sel("in"));
  }

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
    Values reg_genargs({{"width", CoreIR::Const::make(context, width)},
      {"has_en", CoreIR::Const::make(context, true)}});
    if (options.rtl_options.use_prebuilt_memory)
      reg_genargs.insert({"has_clr", CoreIR::Const::make(context, true)});
    auto dom_reg = def->addInstance("d_" + str(d) + "_reg",
        "mantle.reg", reg_genargs);
    domain_regs.push_back(dom_reg);
    def->connect(def->sel("self")->sel("d")->sel(d), domain_regs.back()->sel("out"));
    if (options.rtl_options.use_prebuilt_memory)
      def->connect(def->sel("self")->sel("rst_n"), domain_regs.back()->sel("clr"));
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
  }

  aff_mod->print();

  m->setDef(def);
  return m;
}

CoreIR::Module* affine_controller_lake(CoreIR::Context* context, isl_set* dom, isl_aff* aff) {
  auto ns = context->getNamespace("global");
  auto c = context;

  int width = CONTROLPATH_WIDTH;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", c->Named("coreir.clkIn")},
      {"valid", c->Bit()}};
  ub_field.push_back({"rst_n", c->BitIn()});
  ub_field.push_back({"flush", c->BitIn()});
  int dims = num_in_dims(aff);
  ub_field.push_back({"d", context->Bit()->Arr(16)->Arr(dims)});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("affine_controller_" + context->getUnique(), utp);
  generate_lake_collateral_affine_controller(m->getName(), *verilog_collateral_file, dom, aff);
  return m;
}


CoreIR::Instance*
addrgen(ModuleDef* def, isl_aff* acc_aff) {
  auto c = def->getContext();
  auto aff_gen_mod = coreir_for_aff(c, acc_aff);
  auto agen = def->addInstance("addrgen_" + c->getUnique(), aff_gen_mod);
  return agen;
}

CoreIR::Instance*
addrgen(ModuleDef* def, isl_set* rddom, isl_aff* acc_aff) {
  assert(acc_aff != nullptr);
  assert(rddom != nullptr);

  auto c = def->getContext();

  cout << "rddom : " << str(rddom) << endl;
  cout << "acc aff: " << str(acc_aff) << endl;
  auto reduce_map = linear_address_map((rddom));
  cout << "reduce map: " << str(reduce_map) << endl;
  auto addr_expr = dot(to_map(acc_aff), reduce_map);
  auto addr_expr_aff = get_aff(addr_expr);
  cout << tab(3) << "==== addr expr aff: " << str(addr_expr_aff) << endl;

  auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
  auto agen = def->addInstance("addrgen_" + c->getUnique(), aff_gen_mod);
  return agen;
}

CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff) {
  CodegenOptions options;
  options.rtl_options.use_prebuilt_memory = false;
  int width = CONTROLPATH_WIDTH;
  return affine_controller_primitive(options, context, dom, aff, width);
}

CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff, int width) {
  CodegenOptions options;
  options.rtl_options.use_prebuilt_memory = true;
  return affine_controller_primitive(options, context, dom, aff, width);
}

CoreIR::Module* affine_controller(CodegenOptions& options, CoreIR::Context* context, isl_set* dom, isl_aff* aff) {
  int width = CONTROLPATH_WIDTH;
  return affine_controller_primitive(options, context, dom, aff, width);
}

CoreIR::Module* affine_controller(CodegenOptions& options, CoreIR::Context* context, isl_set* dom, isl_aff* aff, int width) {
  return affine_controller_primitive(options, context, dom, aff, width);
}

CoreIR::Instance* affine_controller(CodegenOptions options, CoreIR::ModuleDef* def, isl_set* dom, isl_aff* aff) {
  auto c = def->getContext();
  auto ctrl = def->addInstance("ctrl_" + c->getUnique(), affine_controller(options, c, dom, aff));
  return ctrl;
}

CoreIR::Instance* affine_controller(CoreIR::ModuleDef* def, isl_set* dom, isl_aff* aff, int width) {
  auto c = def->getContext();
  auto ctrl = def->addInstance("ctrl_" + c->getUnique(), affine_controller(c, dom, aff, width));
  return ctrl;
}

void add_delay_tile_generator(CoreIR::Context* c) {
  auto cgralib = c->getNamespace("global");
  CoreIR::Params params = {{"delay",c->Int()}};

  Params reg_array_args = {{"type", CoreIRType::make(c)},
                           {"has_en", c->Bool()},
                           {"has_clr", c->Bool()},
                           {"has_rst", c->Bool()},
                           {"init", c->Int()}};
  TypeGen* ramTG = cgralib->newTypeGen(
    "delay_tile_TG",
    params,
    [](Context* c, Values args) {
    int width = 16;

  auto tp = c->Record({
      {"clk", c->Named("coreir.clkIn")},
      {"rst_n", c->BitIn()},
      {"flush", c->BitIn()},
      {"wdata", c->BitIn()->Arr(width)},
      {"rdata", c->Bit()->Arr(width)}});
  return tp;
    });
  Generator* ram = cgralib->newGeneratorDecl("delay_tile", ramTG, params);


  ram->setGeneratorDefFromFun(
    [](Context* c, Values args, ModuleDef* def) {

    int width = 16;
    int depth = args.at("delay")->get<int>();
    auto srinst = def->addInstance("delay_mod", reg_delay_module(c, width, {depth}));
    auto self = def->sel("self");
    def->connect(srinst->sel("wdata"), self->sel("wdata"));
    def->connect(srinst->sel("rdata"), self->sel("rdata"));

    def->connect(srinst->sel("rst_n"), self->sel("rst_n"));
    def->connect(srinst->sel("flush"), self->sel("flush"));
    });
}

void add_tahoe_memory_generator(CoreIR::Context* c) {
  auto cgralib = c->getNamespace("global");
  CoreIR::Params params = {{"depth",c->Int()}};

  Params reg_array_args = {{"type", CoreIRType::make(c)},
                           {"has_en", c->Bool()},
                           {"has_clr", c->Bool()},
                           {"has_rst", c->Bool()},
                           {"init", c->Int()}};
  TypeGen* ramTG = cgralib->newTypeGen(
    "tahoe_TG",
    params,
    [](Context* c, Values args) {
    int width = 16;

  auto tp = c->Record({
      {"clk", c->Named("coreir.clkIn")},
      {"wdata", c->BitIn()->Arr(width)->Arr(2)},
      {"waddr", c->BitIn()->Arr(width)->Arr(2)},
      {"wen", c->BitIn()->Arr(2)},
      {"rdata", c->Bit()->Arr(width)->Arr(2)},
      {"raddr", c->BitIn()->Arr(width)->Arr(2)},
      {"ren", c->BitIn()->Arr(2)}});
  return tp;
    });
  Generator* ram = cgralib->newGeneratorDecl("tahoe", ramTG, params);


  ram->setGeneratorDefFromFun(
    [](Context* c, Values args, ModuleDef* def) {

    int width = 16;
    int depth = args.at("depth")->get<int>();
    uint awidth = (uint)ceil(log2(depth));


    auto core_ram = def->addInstance("mem", "global.raw_dual_port_sram_tile", {{"depth", args.at("depth")}});

    auto self = def->sel("self");
    auto wen1 = self->sel("wen")->sel(1);
    auto ren1 = self->sel("ren")->sel(1);

    cmux(def, 16, core_ram->sel("wdata"), wen1, self->sel("wdata")->sel(0), self->sel("wdata")->sel(1));
    cmux(def, 16, core_ram->sel("waddr"), wen1, self->sel("waddr")->sel(0), self->sel("waddr")->sel(1));
    cmux(def, core_ram->sel("wen"), wen1, self->sel("wen")->sel(0), self->sel("wen")->sel(1));

    cmux(def, core_ram->sel("ren"), ren1, self->sel("ren")->sel(0), self->sel("ren")->sel(1));
    cmux(def, 16, core_ram->sel("raddr"), ren1, self->sel("raddr")->sel(0), self->sel("raddr")->sel(1));

    def->connect(self->sel("rdata")->sel(0), core_ram->sel("rdata"));
    def->connect(self->sel("rdata")->sel(1), core_ram->sel("rdata"));
    });
}

void add_raw_quad_port_memtile_generator(CoreIR::Context* c) {
  auto cgralib = c->getNamespace("global");
  CoreIR::Params params = {{"depth",c->Int()}};

  Params reg_array_args = {{"type", CoreIRType::make(c)},
                           {"has_en", c->Bool()},
                           {"has_clr", c->Bool()},
                           {"has_rst", c->Bool()},
                           {"init", c->Int()}};
  TypeGen* ramTG = cgralib->newTypeGen(
    "raw_quad_port_memtile_TG",
    params,
    [](Context* c, Values args) {
    int width = 16;

  auto tp = c->Record({
      {"clk", c->Named("coreir.clkIn")},
      {"wdata", c->BitIn()->Arr(width)->Arr(2)},
      {"waddr", c->BitIn()->Arr(width)->Arr(2)},
      {"wen", c->BitIn()->Arr(2)},
      {"rdata", c->Bit()->Arr(width)->Arr(2)},
      {"raddr", c->BitIn()->Arr(width)->Arr(2)},
      {"ren", c->BitIn()->Arr(2)}});
  return tp;
    });
  Generator* ram = cgralib->newGeneratorDecl("raw_quad_port_memtile", ramTG, params);


  ram->setGeneratorDefFromFun(
    [](Context* c, Values args, ModuleDef* def) {

    int width = 16;
    int depth = args.at("depth")->get<int>();
    uint awidth = (uint)ceil(log2(depth));


    auto core_ram = def->addInstance("mem", "global.raw_dual_port_sram_tile", {{"depth", args.at("depth")}});

    auto self = def->sel("self");
    auto wen1 = self->sel("wen")->sel(1);
    auto ren1 = self->sel("ren")->sel(1);

    cmux(def, 16, core_ram->sel("wdata"), wen1, self->sel("wdata")->sel(0), self->sel("wdata")->sel(1));
    cmux(def, 16, core_ram->sel("waddr"), wen1, self->sel("waddr")->sel(0), self->sel("waddr")->sel(1));
    cmux(def, core_ram->sel("wen"), wen1, self->sel("wen")->sel(0), self->sel("wen")->sel(1));

    cmux(def, core_ram->sel("ren"), ren1, self->sel("ren")->sel(0), self->sel("ren")->sel(1));
    cmux(def, 16, core_ram->sel("raddr"), ren1, self->sel("raddr")->sel(0), self->sel("raddr")->sel(1));

    def->connect(self->sel("rdata")->sel(0), core_ram->sel("rdata"));
    def->connect(self->sel("rdata")->sel(1), core_ram->sel("rdata"));
    });
}

void add_raw_dual_port_sram_generator(CoreIR::Context* c) {
  auto cgralib = c->getNamespace("global");
  CoreIR::Params params = {{"depth",c->Int()}};

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

  def->addInstance("mem",
      "coreir.mem",
      {{"width", CoreIR::Const::make(c, width)}, {"depth", CoreIR::Const::make(c, depth)}});

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

CoreIR::Module* lake_raw_sram_wrapper(CoreIR::Context* c, const std::string& name) {
  auto ns = c->getNamespace("global");
  //if (ns->hasModule("lake_raw_sram_wrapper")) {
    //return ns->getModule("lake_raw_sram_wrapper");
  //}

  vector<pair<string, CoreIR::Type*> > rf_fields;
  rf_fields.push_back({"clk", c->Named("coreir.clkIn")});
  rf_fields.push_back({"rst_n", c->BitIn()});
  rf_fields.push_back({"flush", c->BitIn()});
  rf_fields.push_back({"ren_in", c->BitIn()});
  rf_fields.push_back({"wen_in", c->BitIn()});
  rf_fields.push_back({"waddr", c->BitIn()->Arr(16)});
  rf_fields.push_back({"raddr", c->BitIn()->Arr(16)});
  rf_fields.push_back({"rdata", c->Bit()->Arr(16)});
  rf_fields.push_back({"wdata", c->BitIn()->Arr(16)});
  //auto m = ns->newModuleDecl("lake_raw_sram_wrapper", c->Record(rf_fields));
  auto m = ns->newModuleDecl(name, c->Record(rf_fields));

  return m;
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

CoreIR::Module* reg_delay_module(CoreIR::Context* c, const int width, const vector<int>& read_delays) {
  assert(read_delays.size() == 1);
  int D = read_delays.at(0);
  auto ns = c->getNamespace("global");
  vector<pair<string, Type*> > fields = {{"clk", c->Named("coreir.clkIn")},
    {"rst_n", c->BitIn()},
    {"flush", c->BitIn()},
    {"wdata", c->BitIn()->Arr(width)},
    {"rdata", c->Bit()->Arr(width)}};

  Module* mod = nullptr;

  mod = ns->newModuleDecl("delay_" + c->getUnique(), c->Record(fields));
  auto def = mod->newModuleDef();

  auto next = def->sel("self.wdata");
  for (int d = 0; d < D; d++) {
    next = delay(def, next, width);
  }
  def->connect(next, def->sel("self.rdata"));
  mod->setDef(def);

  assert(mod != nullptr);
  return mod;
}

CoreIR::Module* delay_module(CodegenOptions& options,
    CoreIR::Context* c, const int width, const vector<int>& read_delays) {
  assert(read_delays.size() == 1);
  int D = read_delays.at(0);
  auto ns = c->getNamespace("global");
  vector<pair<string, Type*> > fields = {{"clk", c->Named("coreir.clkIn")},
    {"wdata", c->BitIn()->Arr(width)},
    {"rdata", c->Bit()->Arr(width)}};

  fields.push_back({"rst_n", c->BitIn()});
  fields.push_back({"flush", c->BitIn()});

  Module* mod = nullptr;
  const int TILE_USE_THRESHOLD = 10;

  if (D <= TILE_USE_THRESHOLD) {
    mod = ns->newModuleDecl("delay_" + c->getUnique(), c->Record(fields));
    auto def = mod->newModuleDef();

    auto next = def->sel("self.wdata");
    for (int d = 0; d < D; d++) {
      next = delay(def, next, width);
    }
    def->connect(next, def->sel("self.rdata"));
    mod->setDef(def);
  } else {

    mod = ns->newModuleDecl("memtile_long_delay_" + c->getUnique(), c->Record(fields));
    assert(verilog_collateral_file != nullptr);

    if (options.rtl_options.target_tile == TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN) {
      generate_lake_collateral_delay_wdata_wrapped(mod->getName(), *verilog_collateral_file, D);
    } else if (options.rtl_options.target_tile == TARGET_TILE_DUAL_SRAM_RAW) {
      auto def = mod->newModuleDef();

      int depth = D;
      const int TILE_READ_LATENCY = 1;

      assert(depth >= TILE_READ_LATENCY);
      isl_ctx* ctx = isl_ctx_alloc();
      int max_depth = (1 << 16) - 1;
      cout << "max depth = " << max_depth << endl;
      assert(max_depth >= 0);

      isl_aff* write_sched = rdaff(ctx, "{ wr[a] -> [(a)] }");
      isl_aff* write_addr = rdaff(ctx, "{ wr[a] -> [(a + " + str(depth - TILE_READ_LATENCY) + ")] }");
      assert(write_addr != nullptr);
      cout << "--- Write addr after construction: " << str(write_addr) << endl;
      isl_set* write_dom = isl_set_read_from_str(ctx, ("{ wr[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

      auto write_ctrl = affine_controller(options, def, write_dom, write_sched);
      cout << "write addr before call: " << str(write_addr) << endl;
      auto write_addrgen = addrgen(def, write_addr);
      def->connect(write_addrgen->sel("d"), write_ctrl->sel("d"));

      isl_aff* read_sched = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
      isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
      isl_set* read_dom = isl_set_read_from_str(ctx, ("{ rd[a] : 0 <= a <= " + str(max_depth) + " }").c_str());
      auto read_ctrl = affine_controller(options, def, read_dom, read_sched);
      auto read_addrgen = addrgen(def, read_addr);
      def->connect(read_addrgen->sel("d"), read_ctrl->sel("d"));

      int capacity = 2048;
      int addr_width = 16;
      ram_module(c, width, capacity);
      string inner_sram_name = "inner_sram_" + c->getUnique();
      auto bnk = def->addInstance(
          inner_sram_name + "_bank",
          lake_raw_sram_wrapper(c, inner_sram_name));
          //"global.lake_raw_sram_wrapper");
      //auto bnk = def->addInstance(
          //inner_sram_name,
          //"global.raw_dual_port_sram_tile",
          //{{"depth", COREMK(c, capacity)}}
          //);
      generate_lake_collateral_dual_sram_raw(inner_sram_name, *verilog_collateral_file);

      def->connect(bnk->sel("rdata"), def->sel("self.rdata"));
      def->connect(bnk->sel("wdata"), def->sel("self.wdata"));
      def->connect(bnk->sel("wen_in"), write_ctrl->sel("valid"));
      def->connect(bnk->sel("waddr"), write_addrgen->sel("out"));
      def->connect(bnk->sel("raddr"), read_addrgen->sel("out"));
      def->connect(bnk->sel("ren_in"), read_ctrl->sel("valid"));
      def->connect(bnk->sel("rst_n"), def->sel("self.rst_n"));
      def->connect(bnk->sel("flush"), def->sel("self.flush"));
      mod->setDef(def);
    } else if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN) {
      generate_lake_collateral_delay_wide_fetch_tile_wrapped(mod->getName(), *verilog_collateral_file, D);
    } else {
      assert(options.rtl_options.target_tile == TARGET_TILE_REGISTERS);
      auto def = mod->newModuleDef();

      auto g = ns->getGenerator("delay_tile");
      auto t = def->addInstance("delay_tile_m", g, {{"delay", COREMK(c, D)}});
      def->connect(t->sel("rdata"), def->sel("self.rdata"));
      def->connect(t->sel("wdata"), def->sel("self.wdata"));
      def->connect(t->sel("rst_n"), def->sel("self.rst_n"));
      def->connect(t->sel("flush"), def->sel("self.flush"));

      mod->setDef(def);
    }

    //auto def = mod->newModuleDef();

    //assert(false);

    //auto t = def->addInstance("delay_tile_m", g, {{"delay", COREMK(c, D)}});
    //def->connect(t->sel("rdata"), def->sel("self.rdata"));
    //def->connect(t->sel("wdata"), def->sel("self.wdata"));

    //auto next = def->sel("self.wdata");
    //for (int d = 0; d < D; d++) {
    //next = delay(def, next, width);
    //}
    //def->connect(next, def->sel("self.rdata"));
    //mod->setDef(def);
  }

  assert(mod != nullptr);
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
  auto zero =
    def->addInstance("c1","corebit.const",{{"value",Const::make(c,false)}})->sel("out");
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

CoreIR::Instance* cmux(ModuleDef* def,
    CoreIR::Wireable* out,
    CoreIR::Wireable* sel,
    CoreIR::Wireable* in0,
    CoreIR::Wireable* in1) {

  auto c = def->getContext();
  auto next_val = def->addInstance(def->getContext()->getUnique() + "_mux", "corebit.mux");
  def->connect(out, next_val->sel("out"));
  def->connect(in0, next_val->sel("in0"));
  def->connect(in1, next_val->sel("in1"));
  def->connect(sel, next_val->sel("sel"));
  return next_val;
}

CoreIR::Instance* cmux(CoreIR::ModuleDef* def,
    const int width,
    CoreIR::Wireable* out,
    CoreIR::Wireable* sel,
    CoreIR::Wireable* in0,
    CoreIR::Wireable* in1) {

  auto c = def->getContext();
  auto next_val = def->addInstance(def->getContext()->getUnique() + "_mux", "coreir.mux", {{"width", CoreIR::Const::make(c, width)}});
  def->connect(out, next_val->sel("out"));
  def->connect(in0, next_val->sel("in0"));
  def->connect(in1, next_val->sel("in1"));
  def->connect(sel, next_val->sel("sel"));
  return next_val;
}

Wireable* base(Wireable* w) {
  if (isa<Select>(w)) {
    //return static_cast<Select*>(w)->getParent();
    return static_cast<Select*>(w)->getTopParent();
  }
  return w;
}

Wireable* copy_wireable(map<Instance*, Instance*>& instance_map, Wireable* w0, ModuleDef* copy_def) {
  if (isa<Interface>(w0)) {
    return copy_def->sel("self");
  }

  if (isa<Instance>(w0)) {
    return instance_map[static_cast<Instance*>(w0)];
  }
  if (isa<Select>(w0)) {
    auto wc = static_cast<Select*>(w0);
    return copy_wireable(instance_map, wc->getParent(), copy_def)->sel(wc->getSelStr());
  }
  cout << "Error: Cannot copy: " << w0->toString() << endl;
  assert(false);
}

int stage_num(vector<std::set<Instance*> >& stages,
    Wireable* w0) {
  if (stages.size() == 0) {
    return 0;
  }

  if (!isa<Instance>(base(w0))) {
    assert(isa<Interface>(base(w0)));
    int d = w0->getType()->isOutput() ? 0 : stages.size() - 1;
    cout << "Stage for " << w0->toString() << " = " << d << endl;
    return d;
  }
  int i = 0;
  for (auto& s : stages) {
    if (dbhc::elem(static_cast<Instance*>(base(w0)), s)) {
      return i;
    }
    i++;
  }
  assert(false);
}

void copy_and_pipeline_connection(vector<std::set<Instance*> >& stages, map<Instance*, Instance*>& instance_map, Wireable* w0, Wireable* w1, ModuleDef* copy_def) {

  cout << "w0 = " << w0->toString() << ": " << w0->getType()->toString() << endl;
  cout << "w1 = " << w1->toString() << ": " << w1->getType()->toString() << endl;

  Wireable* src = nullptr;
  Wireable* dst = nullptr;
  if (w0->getType()->isOutput()) {
    //assert(w0->getType()->isInput());

    src = w0;
    dst = w1;
  } else {
    //assert(w0->getType()->isInput());

    src = w1;
    dst = w0;
  }
  assert(src != nullptr);
  assert(dst != nullptr);

  int src_stage = stage_num(stages, src);
  int dst_stage = stage_num(stages, dst);

  cout << "Src : " << src->toString() << " at " << src_stage << endl;
  cout << "Dst stage: " << dst->toString() << " at " << dst_stage << endl;

  assert(src_stage >= 0);
  assert(dst_stage >= 0);
  assert(dst_stage >= src_stage);

  int delay = dst_stage - src_stage;

  Wireable* wc0 = copy_wireable(instance_map, w0, copy_def);
  Wireable* wc1 = copy_wireable(instance_map, w1, copy_def);

  auto context = wc0->getContext();

  if (wc0->getType()->isOutput()) {
    wc0 = delay_by(copy_def, context->getUnique(), wc0, delay);
  }
  if (wc1->getType()->isOutput()) {
    wc1 = delay_by(copy_def, context->getUnique(), wc1, delay);
  }
  copy_def->connect(wc0, wc1);
}

void pipeline_compute_units(prog& prg, schedule_info& hwinfo) {
  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cgralib(context);
  CoreIRLoadLibrary_cwlib(context);
  add_delay_tile_generator(context);
  add_raw_quad_port_memtile_generator(context);
  add_tahoe_memory_generator(context);
  auto c = context;


  bool found_compute = true;
  string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
  if (hwinfo.use_metamapper) {
    compute_file = hwinfo.dse_compute_filename;
    cout << "Compute file dse found" << endl;
  }
  ifstream cfile(compute_file);
  if (!cfile.good()) {
    cout << "No compute unit file: " << compute_file << endl;
    return;
    //assert(false);
  }
  if (!loadFromFile(context, compute_file)) {
    found_compute = false;
    cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
    return;
    //assert(false);
  }

  auto ns = c->getNamespace("global");
  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      string compute_name = op->func;
      auto mod = ns->getModule(compute_name);
      vector<Instance*> instances;
      map<Instance*, std::set<Instance*> > instance_connections_dst_to_src;
      for (auto inst : mod->getDef()->getInstances()) {
        instances.push_back(inst.second);
      }
      cout << "# of instances: " << instances.size() << endl;
      for (auto c : mod->getDef()->getConnections()) {
        Wireable* base0 = base(c.first);
        Wireable* base1 = base(c.second);
        if (isa<Instance>(base0) && isa<Instance>(base1)) {
          Instance* src = nullptr;
          Instance* dst = nullptr;
          cout << tab(1) << "Instance connection between " << base0->toString() << " and " << base1->toString() << endl;
          cout << tab(2) << c.first->getType()->isInput() << endl;

          if (c.first->getType()->isInput()) {
            dst = static_cast<Instance*>(base0);
            src = static_cast<Instance*>(base1);
          } else {
            dst = static_cast<Instance*>(base1);
            src = static_cast<Instance*>(base0);
          }

          assert(src != nullptr);
          assert(dst != nullptr);

          instance_connections_dst_to_src[dst].insert(src);
        }
      }
      cout << "Instance connections..." << endl;
      for (auto i : instance_connections_dst_to_src) {
        cout << tab(1) << i.first->toString() << endl;
        for (auto c : i.second) {
          cout << tab(2) << c->toString() << endl;
        }
      }

      vector<std::set<Instance*> > schedule;
      int num_scheduled = 0;
      std::set<Instance*> unscheduled;
      for (auto i : instances) {
        unscheduled.insert(i);
      }
      while (unscheduled.size() > 0) {
        std::set<Instance*> next_sched_lvl;
        for (Instance* i : unscheduled) {
          bool all_deps_scheduled = true;
          for (auto d : instance_connections_dst_to_src[i]) {
            if (dbhc::elem(d, unscheduled)) {
              all_deps_scheduled = false;
              break;
            }
          }

          if (all_deps_scheduled) {
            next_sched_lvl.insert(i);
          }
        }
        assert(next_sched_lvl.size() > 0);
        for (auto next_sched : next_sched_lvl) {
          unscheduled.erase(next_sched);
          schedule.push_back({next_sched});
          num_scheduled++;
        }

        //Instance* next_sched = nullptr;
        //for (Instance* i : unscheduled) {
          //bool all_deps_scheduled = true;
          //for (auto d : instance_connections_dst_to_src[i]) {
            //if (dbhc::elem(d, unscheduled)) {
              //all_deps_scheduled = false;
              //break;
            //}
          //}

          //if (all_deps_scheduled) {
            //next_sched = i;
            //break;
          //}
        //}
        //assert(next_sched != nullptr);
        //unscheduled.erase(next_sched);
        //schedule.push_back({next_sched});
        //num_scheduled++;

      }
      assert(num_scheduled == instances.size());

      cout << "Final schedule size: " << schedule.size() << endl;
      for (auto f : schedule) {
        cout << "Level..." << endl;
        for (auto l : f) {
          cout << tab(1) << l->toString() << endl;
        }
      }

      auto mod_tp = mod->getType();
      auto copy = ns->newModuleDecl(mod->getName() + "_pipelined", mod_tp);
      auto copy_def = copy->newModuleDef();
      map<Instance*, Instance*> instance_map;
      for (auto inst : instances) {
        instance_map[inst] = copy_def->addInstance(inst, inst->getInstname());
      }

      for (auto c : mod->getDef()->getConnections()) {
        Wireable* base0 = base(c.first);
        Wireable* base1 = base(c.second);
        copy_and_pipeline_connection(schedule, instance_map, c.first, c.second, copy_def);
      }
      copy->setDef(copy_def);

      //hwinfo.op_compute_unit_latencies[op->func + "_pipelined"] =
        //std::max(0, ((int)schedule.size()) - 1);
      hwinfo.compute_unit_latencies[op->func + "_pipelined"] =
        std::max(0, ((int)schedule.size()) - 1);
    }
  }

  if(!saveToFile(ns, "./coreir_compute/" + prg.name + "_compute_pipelined.json")) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
  }
  deleteContext(context);
  //assert(false);
}

void generate_script(const std::string& script_name, const std::vector<string>& cmds) {
  ofstream out(script_name);
  for (auto c : cmds) {
    out << c << endl;
  }
  out.close();
  cmd("chmod +x " + script_name);
}

void move_to_compute_regression_folder(const std::string& app_name, const std::string& compute_name) {

  cmd("mkdir -p ./compute_unit_regressions/");
  string app_folder = "./compute_unit_regressions/" + app_name;
  cmd("mkdir -p " + app_folder + "/");
  string dst_folder = app_folder + "/" + compute_name;
  cmd("mkdir -p " + dst_folder + "/");

  cmd("cp static_quad_value_bit_vector.h " + dst_folder);
  cmd("cp hw_classes.h " + dst_folder);
  cmd("cp clockwork_standard_compute_units.h " + dst_folder);
  cmd("cp " + app_name + "_compute.h " + dst_folder);

  //cmd("mv " + compute_name + "_compute.json " + dst_folder);
  cmd("mv " + app_name + "_compute.json " + dst_folder);
  cmd("mv " + compute_name + ".v " + dst_folder);
  cmd("mv " + compute_name + "_compute_tb.cpp " + dst_folder);
  cmd("mv run_" + compute_name + "_regression.sh " + dst_folder);
}

int generate_compute_unit_regression_tb(op* op, prog& prg) {
  assert(op->func != "");

  CoreIR::Context* context = CoreIR::newContext();
  CoreIRLoadLibrary_commonlib(context);
  CoreIRLoadLibrary_cgralib(context);
  CoreIRLoadLibrary_cwlib(context);
  add_delay_tile_generator(context);

  string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
  auto ns = context->getNamespace("global");
  if (!loadFromFile(context, compute_file)) {
    cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
    context->die();
  }

  Module* compute_mod = ns->getModule(op->func);

  string name = prg.name;
  string compute_name = op->func;

  if(!saveToFile(ns, prg.name + "_compute.json", compute_mod)) {
    cout << "Could not save ubuffer coreir" << endl;
    context->die();
    assert(false);
  }


  int compute_to_verilog_res = cmd("${COREIR_PATH}/bin/coreir --inline --load_libs commonlib,cgralib --input ./" + name + "_compute.json --output " + compute_name + ".v -p \"rungenerators; wireclocks-arst; wireclocks-clk\"");
  assert(compute_to_verilog_res == 0);

  ofstream rgtb(op->func + "_compute_tb.cpp");
  rgtb << "#include \"hw_classes.h\"" << endl;
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"verilated.h\"" << endl;
  rgtb << "#include \"V" << compute_name << ".h\"" << endl << endl;
  rgtb << "#include \"" << prg.name << "_compute" << ".h\"" << endl << endl;


  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "cout << \"\\tStarting compute unit test\" << endl;" << endl;
  rgtb << tab(1) << "V" << compute_name << " dut;" << endl;

  rgtb << tab(1) << "srand(1);" << endl;

  int num_trials = 10000;
  int upper_bound = 256*256;
  rgtb << tab(1) << "for (int i = 0; i < " << num_trials << "; i++) {" << endl;
  RecordType* tp = compute_mod->getType();
  vector<string> in_args;
  vector<string> input_value_printouts;
  for (auto fd : tp->getRecord()) {
    assert(isa<ArrayType>(fd.second));
    auto atp = static_cast<ArrayType*>(fd.second);
    int len = atp->getLen();
    auto inner_tp = atp->getElemType();

    if (fd.second->isInput()) {
      assert(isa<ArrayType>(inner_tp));
      auto inner_atp = static_cast<ArrayType*>(inner_tp);
      int num_lanes = len;
      vector<string> lanes;
      for (int l = 0; l < num_lanes; l++) {
        string name = fd.first + "_" + str(l);
        rgtb << tab(2) << "int " << name << " = rand() % " << upper_bound << ";" << endl;
        rgtb << tab(2) << "hw_uint<16> " << name << "_hwint = hw_uint<16>(" + name + ");" << endl;
        lanes.push_back(name + "_hwint");
        rgtb << tab(2) << "(dut." << fd.first << ")[" << l << "] = " << name << ";" << endl;
        input_value_printouts.push_back(tab(2) + "cout << \"" + fd.first + "[" + str(l) + "] -> \" << " + name + " << endl;");
        input_value_printouts.push_back(tab(2) + "cout << \"" + fd.first + "[" + str(l) + "] -> \" << " + name + "_hwint << endl;");
      }

      string packed_arg = fd.first + "_packed";
      pack_bv(2, rgtb, packed_arg, lanes, 16);
      in_args.push_back(packed_arg);
    }

    rgtb << tab(2) << "dut.eval();" << endl;

    if (fd.second->isOutput()) {
      rgtb << tab(2) << "int coreir_result = " << "dut." << fd.first << ";" << endl;
      rgtb << tab(2) << "int cpp_result = " << compute_name << sep_list(in_args, "(", ")", ", ") << ".to_int();" << endl;
      rgtb << tab(2) << "if (coreir_result != cpp_result) {" << endl;
      rgtb << tab(3) << "cout << \"ERROR in compute unit: " << compute_name << "\" << endl;" << endl;
      for (auto inp : input_value_printouts) {
        rgtb << inp << endl;
      }
      rgtb << tab(3) << "cout << \"\\tcoreir_result: \" << coreir_result << endl;" << endl;
      rgtb << tab(3) << "cout << \"\\tcpp_result   : \" << cpp_result << endl;" << endl;
      rgtb << tab(3) << "return -1;" << endl;
      rgtb << tab(2) << "}" << endl;
      rgtb << tab(2) << "assert(coreir_result == cpp_result);" << endl;
    }
  }
  rgtb << tab(1) << "}" << endl << endl;


  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();

  string top_module = compute_name;
  string tb_file = compute_name + "_compute_tb.cpp";
  vector<string> verilog_files{compute_name + ".v"};
  int verilator_build = cmd("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " --exe --build " + tb_file + " --top-module " + top_module + " -Wno-UNUSED -Wno-WIDTH -Wno-PINMISSING -Wno-DECLFILENAME");
  assert(verilator_build == 0);

  int verilator_run = cmd("./obj_dir/V" + top_module);
  deleteContext(context);

  vector<string> commands;
  commands.push_back("verilator -Wall --cc " + sep_list(verilog_files, "", "", " ") + " --exe --build " + tb_file + " --top-module " + top_module + " -Wno-UNUSED -Wno-WIDTH -Wno-PINMISSING -Wno-DECLFILENAME");
  commands.push_back("./obj_dir/V" + top_module);

  generate_script("run_" + compute_name + "_regression.sh", commands);

  move_to_compute_regression_folder(prg.name, compute_name);

  return verilator_run;
}

dgraph build_shift_register_graph(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  map<string,pair<string,int>> shift_registered_outputs = determine_shift_reg_map(prg, buf, hwinfo);
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs = determine_output_shift_reg_map(prg, buf, hwinfo);

  cout << "out -> out srs: " << shift_registered_outputs_to_outputs.size() << endl;

  dgraph dg;
  for (auto pt : shift_registered_outputs) {
    dg.add_edge(pt.second.first, pt.first, pt.second.second);
  }
  for (auto pt : shift_registered_outputs_to_outputs) {
    dg.add_edge(pt.second.first, pt.first, pt.second.second);
  }

  // Compute the transitive closer of ins -> outs
  for (auto pt0 : shift_registered_outputs) {
    for (auto pt1 : shift_registered_outputs) {
      string dst0 = pt0.first;
      string dst1 = pt1.first;

      string src0 = pt0.second.first;
      string src1 = pt1.second.first;

      int dst0_delay = pt0.second.second;
      int dst1_delay = pt1.second.second;

      if (src0 == src1) {
        if (dst0 != dst1 && dst0_delay < dst1_delay) {
          dg.add_edge(dst0, dst1, dst1_delay - dst0_delay);
        }

      }
    }
  }

  cout << "DG: ..." << endl;
  cout << dg << endl;
  return dg;
}


dgraph build_shift_registers_io(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  dgraph dg = build_shift_register_graph(options, prg, buf, hwinfo);

  dgraph shift_registers;

  bool got_one_input = true;
  for (auto e : dg.out_edges) {
    string src = e.first;
    if (buf.is_in_pt(src)) {
      vector<pair<string, int> > pairs;
      for (auto dst : e.second) {
        pairs.push_back({dst, dg.weight(src, dst)});
      }
      dbhc::sort_lt(pairs, [](const pair<string, int>& pt) {
          return pt.second;
          });
      if (pairs.size() > 0) {
        string dst = pairs.at(0).first;
        if (shift_registers.in_edges(dst).size() == 0) {
          shift_registers.add_edge(src, dst, dg.weight(src, dst));
        }
      }
    }
  }

  for (auto e : dg.out_edges) {
    string src = e.first;
    if (buf.is_out_pt(src)) {
      vector<pair<string, int> > pairs;
      for (auto dst : e.second) {
        pairs.push_back({dst, dg.weight(src, dst)});
      }
      dbhc::sort_lt(pairs, [](const pair<string, int>& pt) {
          return pt.second;
          });
      if (pairs.size() > 0) {
        string dst = pairs.at(0).first;
        if (shift_registers.in_edges(dst).size() == 0) {
          shift_registers.add_edge(src, dst, dg.weight(src, dst));
        }
      }
    }
  }

  //cout << shift_registers << endl;
  //if (buf.name == "padded16_global_wrapper_stencil") {
    //assert(false);
  //}
  return shift_registers;
}


dgraph build_shift_registers(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  if (buf.name == "padded16_global_wrapper_stencil") {
    dgraph shift_registers = build_in_to_out_shift_register_graph(options, prg, buf, hwinfo);

    cout << "Shift registers..." << endl;
    cout << shift_registers << endl;

    dgraph dg;
    for (auto inpt : buf.get_in_ports()) {
      vector<pair<string, int> > vals;
      for (auto v : shift_registers.out_edges.at(inpt)) {
        vals.push_back({v, shift_registers.weight(inpt, v)});
      }
      dbhc::sort_lt(vals, [](const pair<string, int> & v) {return v.second;});
      for (auto v : vals) {
        cout << tab(1) << v.first << " -(" << v.second << ")-> " << v.second << endl;
      }

      vector<vector<pair<string, int> > > reg_chains;
      dbhc::split_by(vals, reg_chains, [](const pair<string, int>& a, const pair<string, int>& b) {
          return abs(a.second - b.second) < 20;
          });

      cout << "Groups..." << endl;
      for (auto g : reg_chains) {
        cout << tab(1) << "Group..." << endl;
        dg.add_edge(inpt, g.at(0).first, shift_registers.weight(inpt, g.at(0).first));
        for (int i = 1; i < g.size(); i++) {
          dg.add_edge(g.at(i - 1).first, g.at(i).first, g.at(i).second - g.at(i - 1).second);
        }
        //for (auto e : g) {
        //cout << tab(2) << e.first << " -> " << e.second << endl;
        //}
        //cout << endl;
      }
    }
    cout << dg << endl;
    //assert(false);

    return dg;
  }


  dgraph dg = build_shift_register_graph(options, prg, buf, hwinfo);

  dgraph shift_registers;

  for (auto dst: buf.get_out_ports()) {
    int min_d = 5;
    string mysrc = "";
    for(auto src: buf.get_out_ports()) {
      if(dg.weight(src,dst) > 0 &&
          dg.weight(src,dst) < min_d &&
          shift_registers.in_edges(dst).size() == 0) {
        min_d = dg.weight(src,dst);
        mysrc = src;
      }
    }

    if(mysrc != ""){
      shift_registers.add_edge(mysrc, dst, dg.weight(mysrc, dst));
      cout << "Adding out -> out sr: " << mysrc << " -> " << dst << " " << dg.weight(mysrc,dst) << endl;
    }
  }

  cout << endl << endl;

  // Make sure all in -> out srs are included
  for (auto e : dg.out_edges) {
    string src = e.first;
    for (auto dst : e.second) {
      if (buf.is_in_pt(src) &&
          shift_registers.in_edges(dst).size() == 0) {
        shift_registers.add_edge(src, dst, dg.weight(src, dst));
        cout << "Adding in -> out sr: " << src << " -> " << dst << " " << dg.weight(src,dst) << endl;
      }
    }
  }

  for (auto e : dg.out_edges) {
    string src = e.first;
    for (auto dst : e.second) {
      if (!dbhc::elem(dst, shift_registers.nodes)) {
        shift_registers.add_edge(src, dst, dg.weight(src, dst));
      }
    }
  }

  return shift_registers;
}



bool allow_packed_sr(dgraph& shift_registers, UBuffer & buf, block_sreg * b)
{
	string inpt;
	if(buf.get_in_ports().size()!=1)
	{
		return false;
	}
	else
	{
		inpt = buf.get_in_ports()[0];
		b->inpt = inpt;
	}
  if (buf.get_out_ports().size() == 27) {
    cout << buf.name << " has " << buf.get_in_ports().size() <<  " in ports" << endl;
    cout << buf.name << " has " << buf.get_out_ports().size() << " out ports" << endl;
    return false;
  }
	cout << inpt << endl;
	vector<pair<string,int>> outpts;
	for(auto outpt: shift_registers.out_edges[inpt]){
		outpts.push_back({outpt,shift_registers.weight(inpt,outpt)});
	}
	if(outpts.size() < 3) {
		return false;
	}

    dbhc::sort_lt(outpts,[](const pair<string,int> &x){return x.second;});
	int diff = outpts[1].second - outpts[0].second;
	b->chain_starts = {outpts[0].first,outpts[1].first};
	b->init_delay = outpts[0].second;
	for(int i = 2; i < outpts.size(); i ++)
	{
		if (outpts[i].second - outpts[i-1].second != diff)
		{
			return false;
		}
		b->chain_starts.push_back(outpts[i].first);
	}
	cout << "diff = " << diff << endl;
	b->difference = diff;
  const int TILE_BANK_CAPACITY = 512;
  if (b->difference > TILE_BANK_CAPACITY - 10) {
    return false;
  }

  if (b->chain_starts.size() % 2 != 1) {
    return false;
  }

	return true;
}

Select* get_zero(ModuleDef* def) {
  auto c = def->getContext();
  return def->addInstance("one_cst" + def->getContext()->getUnique(), "corebit.const", {{"value", COREMK(c, false)}})->sel("out");
}

Select* get_one(ModuleDef* def) {
  auto c = def->getContext();
  return def->addInstance("zero_cst" + def->getContext()->getUnique(), "corebit.const", {{"value", COREMK(c, true)}})->sel("out");
}

Instance* instantiate_coreir_M1(ModuleDef* def, const std::string& name, const int num_writers, const int num_readers) {
  auto c = def->getContext();
  Select* one = get_one(def);
  Select* zero = get_zero(def);
  Values tile_params{{"width", COREMK(c, 16)},
    {"ID", COREMK(c, "sreg_" + c->getUnique())},
    {"has_external_addrgen", COREMK(c, true)},
    {"num_inputs",COREMK(c,num_writers)},
    {"num_outputs",COREMK(c,num_readers)}};
  CoreIR::Instance * sreg = def->addInstance(name, "cgralib.Mem_amber", tile_params);
  def->connect(sreg->sel("clk"),def->sel("self.clk"));
  def->connect(sreg->sel("clk_en"),one);
  def->connect(sreg->sel("chain_chain_en"),zero);
  def->connect(sreg->sel("chain_data_in"),mkConst(def,16,0));
  def->connect(sreg->sel("rst_n"),def->sel("self.rst_n"));

  return sreg;
}

Instance* instantiate_coreir_M3(ModuleDef* def, const std::string& name, const int num_writers, const int num_readers) {
  auto c = def->getContext();
  Select* one = get_one(def);
  //def->addInstance("one_cst", "corebit.const", {{"value", COREMK(c, true)}})->sel("out");
  Select* zero = get_zero(def);
  //def->addInstance("zero_cst", "corebit.const", {{"value", COREMK(c, false)}})->sel("out");
  Values tile_params{{"width", COREMK(c, 16)},
    {"ID", COREMK(c, "sreg_" + c->getUnique())},
    {"has_external_addrgen", COREMK(c, false)},
    {"num_inputs",COREMK(c,num_writers)},
    {"num_outputs",COREMK(c,num_readers)}};
  //CoreIR::Instance * sreg = def->addInstance("sreg_" + c->getUnique(), "cgralib.Mem_amber", tile_params);
  CoreIR::Instance * sreg = def->addInstance(name, "cgralib.Mem_amber", tile_params);
  def->connect(sreg->sel("clk"),def->sel("self.clk"));
  def->connect(sreg->sel("clk_en"),one);
  def->connect(sreg->sel("chain_chain_en"),zero);
  def->connect(sreg->sel("chain_data_in"),mkConst(def,16,0));
  def->connect(sreg->sel("rst_n"),def->sel("self.rst_n"));

  return sreg;
}

std::set<string> generate_block_shift_register(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  dgraph shift_registers = build_shift_registers(options, def, prg, buf, hwinfo);

  block_sreg b_sreg;
  auto packed_sr = allow_packed_sr(shift_registers, buf,& b_sreg);

  auto c = def->getContext();

  assert(packed_sr);
  string src = b_sreg.inpt;
  Wireable * src_wire = def->sel("self." + buf.container_bundle(src) + "." + str(buf.bundle_offset(src)));
  Wireable * delayed_src = delay_by(def, "sr_ito_all_" + c->getUnique(), src_wire, b_sreg.init_delay);
  def->connect(def->sel(b_sreg.chain_starts.at(0) + "_net.in"), delayed_src);

  cout << tab(1) << "block SR difference: " << b_sreg.difference << endl;
  for (auto b : b_sreg.chain_starts) {
    cout << tab(2) << "b SR chain start: " << b << endl;
  }
  assert(b_sreg.chain_starts.size() % 2 == 1);

  for (int i = 0; i < (int) b_sreg.chain_starts.size() / 2; i++) {
    Instance* sreg = instantiate_coreir_M3(def, "sreg_" + c->getUnique(), 1, 2);
    def->connect(sreg->sel("data_in_0"),delayed_src);

    Wireable * chain_start_1 = def->sel(b_sreg.chain_starts.at(2*i + 1) + "_net.in");
    Wireable * chain_start_2 = def->sel(b_sreg.chain_starts.at(2*i + 2) + "_net.in");
    def->connect(chain_start_1, sreg->sel("data_out_0"));
    def->connect(chain_start_2, sreg->sel("data_out_1"));

    M3_config config = instantiate_M3_verilog_sreg_block(options, sreg->getModuleRef()->getLongName(), b_sreg.difference, prg,hwinfo, b_sreg, buf);
    attach_M3_bank_config_metadata(sreg, config);
    sreg->getMetaData()["config"]["BLOCK_SREG_DELAY"] = b_sreg.difference;

    int num_writes = card(extents(to_set(domain(buf.access_map.at(b_sreg.inpt)))));
    sreg->getMetaData()["config"]["BLOCK_SREG_WRITES"] = num_writes;

    int num_reads = card(extents(to_set(domain(buf.access_map.at(b_sreg.chain_starts.at(2*i + 1))))));
    num_reads +=
      card(extents(to_set(domain(buf.access_map.at(b_sreg.chain_starts.at(2*i + 2))))));
    sreg->getMetaData()["config"]["BLOCK_SREG_READS"] = num_reads;
  }

  for (auto w : shift_registers.weights) {
    string src = w.first.first;
    string dst = w.first.second;
    int delay = w.second;
    if (buf.is_out_pt(src) && buf.is_out_pt(dst)) {
      Wireable* src_wire = def->sel(src + "_net.out");
      Wireable* dst_wire = def->sel(dst + "_net.in");
      Wireable* delayed_src =
        delay_by(def, "sr_oto_" + c->getUnique(), src_wire, delay);
      cout << "wiring " << src << " to " << dst << endl;
      def->connect(dst_wire, delayed_src);
    }

  }
  return shift_registers.nodes;
}

void instantiate_one_to_one_sreg(CodegenOptions& options, ModuleDef* def, UBuffer& buf, prog& prg, schedule_info& hwinfo, const std::string& src, const std::string& dst, const int delay_d) {
  auto c = def->getContext();
  int delay = delay_d;

    Wireable* src_wire = nullptr;
    if (buf.is_out_pt(src)) {
      src_wire = def->sel(src + "_net.out");
    } else {
      assert(buf.is_in_pt(src));
      src_wire = def->sel("self." + buf.container_bundle(src) + "." + str(buf.bundle_offset(src)));
    }
    assert(src_wire != nullptr);

    Wireable* delayed_src = nullptr;

    //const int SREG_SRAM_THRES = 10;
    const int SREG_SRAM_THRES = 20;

    const int maxd = 1000;

    Select* one = get_one(def);
    Select* zero = get_zero(def);
    if(delay > SREG_SRAM_THRES) {
      if(options.rtl_options.target_tile == TARGET_TILE_M1) {
        while(delay > 0)
        {
          Instance* sreg = instantiate_coreir_M1(def, "sreg_" + c->getUnique(), 1, 1);
          def->connect(sreg->sel("data_in_0"),src_wire);
          delayed_src = sreg->sel("data_out_0");
          isl_aff * identity = rdaff(buf.ctx,"{[root,t] -> [( root + t + 1 )]}");
          isl_aff * shifted_identity = rdaff(buf.ctx, "{[root,t] -> [(root+t + " + str(min(delay,maxd)  ) + ")]}");
          isl_set * domain = rdset(buf.ctx,"{[root,t] : root = 0 and 0 <= t <= 65355 }");
          Instance* write_fsm = generate_controller_coreir(options, def, "sr_write_fsm" + c->getUnique(), identity , domain);
          Instance* read_fsm = generate_controller_coreir(options, def, "sr_read_fsm" + c->getUnique(), shifted_identity , domain);
          def->connect(write_fsm->sel("d")->sel(1),sreg->sel("write_addr_0"));
          def->connect(read_fsm->sel("d")->sel(1),sreg->sel("read_addr_0"));
          def->connect(one,sreg->sel("wen_0"));
          def->connect(one,sreg->sel("ren_0"));
          UBufferImpl impl;
          impl.bank_readers[0] = {"test"};
          impl.bank_writers[0] = {"test_writer"};
          instantiate_M1_verilog(sreg->getModuleRef()->getLongName(), 0, impl, buf);
          sreg->getMetaData()["config"]["LINEAR_SREG_DELAY"] = min(delay, maxd);

          int num_reads = card(extents(to_set(::domain(buf.access_map.at(dst)))));
          sreg->getMetaData()["config"]["LINEAR_SREG_READS"] = num_reads;

          int num_writes = card(extents(to_set(::domain(buf.access_map.at(src)))));
          sreg->getMetaData()["config"]["LINEAR_SREG_WRITES"] = num_writes;

          src_wire = delayed_src;

          delay -= maxd;

        }
      } else {
        while(delay > 0)
        {
          //num_ram_tiles++;
          Instance* sreg = instantiate_coreir_M3(def, "sreg_" + c->getUnique(), 1, 1);
          def->connect(sreg->sel("data_in_0"),src_wire);
          delayed_src = sreg->sel("data_out_0");

          auto config = instantiate_M3_verilog_sreg(options, sreg->getModuleRef()->getLongName(), min(delay,maxd), prg, hwinfo);
          attach_M3_bank_config_metadata(sreg, config);
          sreg->getMetaData()["config"]["LINEAR_SREG_DELAY"] = min(delay, maxd);

          int num_reads = card(extents(to_set(domain(buf.access_map.at(dst)))));
          sreg->getMetaData()["config"]["LINEAR_SREG_READS"] = num_reads;

          int num_writes = card(extents(to_set(domain(buf.access_map.at(src)))));
          sreg->getMetaData()["config"]["LINEAR_SREG_WRITES"] = num_writes;

          src_wire = delayed_src;

          delay -= maxd;

        }
      }
    }
    else{
      delayed_src = delay_by(def, "sr_end" + c->getUnique(), src_wire, delay);
    }

    assert(delayed_src != nullptr);
    def->connect(
        def->sel(dst + "_net.in"),
        delayed_src);

}

std::set<string> generate_M1_shift_registers(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& buf, schedule_info& hwinfo) {

  dgraph shift_registers = build_shift_registers(options, def, prg, buf, hwinfo);

  block_sreg b_sreg;

  //FIXME: permanently disable packed shift register do not packed for m1 / m3
  //auto packed_sr = allow_packed_sr(shift_registers, buf,& b_sreg);
  auto packed_sr = false;

  auto c = def->getContext();

  if(packed_sr) {
    return generate_block_shift_register(options, def, prg, buf, hwinfo);
  }

  cout << "Not using packed SR for " << buf.name << ", instead... SRC shift registers" << endl;
  cout << shift_registers << endl;

  std::set<string> done_outpt;
  //int num_ram_tiles = 0;
  for (auto w : shift_registers.weights) {

    string src = w.first.first;
    string dst = w.first.second;
    int delay = w.second;

    instantiate_one_to_one_sreg(options, def, buf, prg, hwinfo, src, dst, delay);

    done_outpt.insert(dst);
  }

  //cout << "### finished shift registers Used " << num_ram_tiles << " in SR for " << buf.name << endl;
  return done_outpt;
}

void M1_sanity_check_port_counts(const UBufferImpl& impl) {

  map<int, std::set<string> > bank_readers = impl.bank_readers;
  map<int, std::set<string> > bank_writers = impl.bank_writers;
  map<string, std::set<int>> outpt_to_bank = impl.outpt_to_bank;
  map<string, std::set<int>> inpt_to_bank = impl.inpt_to_bank;


  const int NUM_IN_PORTS_PER_BANK = 2;
  const int NUM_OUT_PORTS_PER_BANK = 2;

  //cout << "Buffer = " << buf.name << endl;
  cout << "Bank readers..." << endl;
  for (auto b : bank_readers) {
    cout << tab(1) << b.first << " -> ";
    for (auto rd : b.second) {
      cout << rd << ", ";
    }
    cout << endl;

    assert(b.second.size() <= NUM_IN_PORTS_PER_BANK);
  }

  cout << "Bank writers..." << endl;
  for (auto b : bank_writers) {
    cout << tab(1) << b.first << " -> ";
    for (auto rd : b.second) {
      cout << rd << ", ";
    }
      cout << endl;

      assert(b.second.size() <= NUM_OUT_PORTS_PER_BANK);
    }

    string chain_pt = "";
    for (auto pt: outpt_to_bank)
    {
      if(pt.second.size() > 1) {
        assert(chain_pt == "");
        chain_pt = pt.first;
        cout << pt.first << " needs chaining" << endl;
      }
    }
    for (auto pt: inpt_to_bank)
    {
      if(pt.second.size() > 1) {
        cout << pt.first << " needs broadcast" << endl;
      }
    }
}

void instantiate_M1_verilog(const std::string& long_name, const int b, const UBufferImpl& impl, UBuffer& buf) {
    assert(verilog_collateral_file != nullptr);

    vector<string> port_decls = {};
    port_decls.push_back("input clk");
    port_decls.push_back("input rst_n");
    port_decls.push_back("input clk_en");
    port_decls.push_back("input chain_chain_en");
    for(int i = 0; i < impl.bank_writers.at(b).size(); i++)
    {
      port_decls.push_back("input [15:0] data_in_" + str(i));
      port_decls.push_back("input [15:0] write_addr_" + str(i));
      port_decls.push_back("input wen_" + str(i));
    }
    for(int i = 0; i < impl.bank_readers.at(b).size(); i++)
    {
      port_decls.push_back("output logic [15:0] data_out_" + str(i));
      port_decls.push_back("input [15:0] read_addr_" + str(i));
      port_decls.push_back("input ren_" + str(i));
    }
    port_decls.push_back("input [15:0] chain_data_in");
    port_decls.push_back("output [15:0] chain_data_out");

    *verilog_collateral_file << "module " << long_name <<" ("<< sep_list(port_decls,"","",",") <<"); "<< endl;
    *verilog_collateral_file << tab(1) << "logic [15:0] SRAM [1023:0];" << endl;
    *verilog_collateral_file << tab(1) << "logic chain_ren;" << endl << endl;
    for (int i = 0; i < impl.bank_readers.at(b).size(); i++) {
      *verilog_collateral_file << tab(1) << "logic [15:0] data_out_" << i << "_tmp;" << endl;
    }

    *verilog_collateral_file << tab(1) << "always @(posedge clk) begin" << endl;
    *verilog_collateral_file << tab(2) << "chain_ren <= " << "ren_" << impl.bank_readers.at(b).size() - 1 << ";" << endl;
    for (int i = 0; i < impl.bank_readers.at(b).size(); i++) {
      *verilog_collateral_file << tab(2) << "data_out_" << str(i) << "_tmp <= SRAM[read_addr_" << i << "];" << endl;
    }
    for (int i = 0; i < impl.bank_writers.at(b).size(); i++) {
      *verilog_collateral_file << tab(2) << "if (wen_" << i << ") begin" << endl;
      *verilog_collateral_file << tab(3) << "SRAM[write_addr_" << i << "] <= " << "data_in_" << str(i) << ";" << endl;
      *verilog_collateral_file << tab(2) << "end" << endl;
    }
    *verilog_collateral_file << tab(1) << "end" << endl;
    //*verilog_collateral_file << tab(1) << "assign chain_data_out = chain_ren ? " << "data_out_" << bank_readers[b].size() - 1 << "_tmp : chain_data_in;" << endl;
    *verilog_collateral_file << tab(1) << "assign chain_data_out = chain_ren ? " << "data_out_" << impl.bank_readers.at(b).size() - 1 << "_tmp : 512;" << endl;
    for (int i = 0; i < impl.bank_readers.at(b).size(); i++) {
      if (i == impl.bank_readers.at(b).size() - 1) {
        *verilog_collateral_file << tab(1) << "assign data_out_" << i << " = chain_data_out;" << endl;
      } else {
        *verilog_collateral_file << tab(1) << "assign data_out_" << i << " = data_out_" << i << "_tmp;" << endl;
      }
    }
    *verilog_collateral_file << "endmodule" << endl << endl;
}

void generate_M1_coreir(CodegenOptions& options, CoreIR::ModuleDef* def, prog& prg, UBuffer& orig_buf, schedule_info& hwinfo) {

  CoreIR::Context* c = def->getContext();
  for (auto out : orig_buf.get_out_ports()) {
    auto w = def->addInstance(out + "_net", "coreir.wire", {{"width", COREMK(c, 16)}});
    def->connect(
        w->sel("out"),
        def->sel("self." + orig_buf.container_bundle(out) + "." + str(orig_buf.bundle_offset(out))));
  }

  std::set<string> done_outpt = generate_M1_shift_registers(options, def, prg, orig_buf, hwinfo);

  UBuffer buf = delete_ports(done_outpt, orig_buf);

  if (buf.num_out_ports() > 0) {
    auto impl = build_buffer_impl(options, prg, buf, hwinfo);
    //auto impl = implm.first;

    //int num_banks = 1;
    //for (auto ent : impl.partitioned_dimension_extents) {
    //  num_banks *= ent.second;
    //}
    int num_banks = impl.get_bank_num();
    cout << impl << "\tnum banks: "  << num_banks<< endl;

    M1_sanity_check_port_counts(impl);

    map<int, std::set<string> > bank_readers = impl.bank_readers;
    map<int, std::set<string> > bank_writers = impl.bank_writers;
    map<string, std::set<int>> outpt_to_bank = impl.outpt_to_bank;
    map<string, std::set<int>> inpt_to_bank = impl.inpt_to_bank;

    string chain_pt = "";
    for (auto pt: outpt_to_bank)
    {
      if(pt.second.size() > 1) {
        assert(chain_pt == "");
        chain_pt = pt.first;
        cout << pt.first << " needs chaining" << endl;
      }
    }

    Select* one = def->addInstance("one_cst", "corebit.const", {{"value", COREMK(c, true)}})->sel("out");
    Select* zero = def->addInstance("zero_cst", "corebit.const", {{"value", COREMK(c, false)}})->sel("out");

    map<int, Instance*> bank_map;
    for (int b = 0; b < num_banks; b++) {
      Values tile_params{{"width", COREMK(c, 16)},
        {"ID", COREMK(c, buf.name + "_" + str(b))},
        {"has_external_addrgen", COREMK(c, true)},
        {"num_inputs",COREMK(c,bank_writers[b].size())},
        {"num_outputs",COREMK(c,bank_readers[b].size())}};

      CoreIR::Instance * currbank = def->addInstance("bank_" + str(b), "cgralib.Mem_amber", tile_params);

      if (chain_pt != "") {
        def->connect(currbank->sel("chain_chain_en"),one);
      } else {
        def->connect(currbank->sel("chain_chain_en"),zero);
      }

      instantiate_M1_verilog(currbank->getModuleRef()->getLongName(), b, impl, buf);
      bank_map[b] = currbank;
      def->connect(currbank->sel("clk_en"),one);
      def->connect(currbank->sel("rst_n"),def->sel("self.rst_n"));
      def->connect(def->sel("bank_" + str(b) + ".chain_data_in"), mkConst(def,16,0));
    }

    map<string, Instance*> ubuffer_port_agens;
    map<string, Wireable*> ubuffer_port_bank_selectors;
    for (auto pt : buf.get_all_ports()) {
      if (buf.is_in_pt(pt)) {
        auto adjusted_buf = write_latency_adjusted_buffer(options, prg, buf, hwinfo);
        auto agen = build_inner_bank_offset(pt, adjusted_buf, impl, def);
        def->connect(agen->sel("d"),
            control_vars(def, pt, adjusted_buf));
        ubuffer_port_agens[pt] = agen;

        if ((impl.inpt_to_bank[pt].size() > 1) && (impl.partition_dims.size())) {
          auto bank_sel = build_bank_selector(pt, adjusted_buf, impl, def);
          def->connect(bank_sel->sel("d"),
              control_vars(def, pt, adjusted_buf));
          ubuffer_port_bank_selectors[pt] = delay_by(def, bank_sel->sel("out"), 0);
        }
      } else {
        auto agen = build_inner_bank_offset(pt, buf, impl, def);
        def->connect(agen->sel("d"),
            control_vars(def, pt, buf));
        ubuffer_port_agens[pt] = agen;

        if (impl.outpt_to_bank[pt].size() > 1) {
          auto bank_sel = build_bank_selector(pt, buf, impl, def);
          def->connect(bank_sel->sel("d"),
              control_vars(def, pt, buf));
          const int READ_LATENCY = 1;
          ubuffer_port_bank_selectors[pt] = delay_by(def, bank_sel->sel("out"), READ_LATENCY);
        }
      }
    }

    map<pair<string, int>, int> ubuffer_port_and_bank_to_bank_port;
    map<int, int> bank_to_next_available_out_port;
    map<int, int> bank_to_next_available_in_port;
    for (int b = 0; b < num_banks; b++) {
      bank_to_next_available_out_port[b] = 0;
      bank_to_next_available_in_port[b] = 0;
    }
    for (auto pt_srcs : impl.inpt_to_bank) {
      string pt = pt_srcs.first;
      for (int b : pt_srcs.second) {
        ubuffer_port_and_bank_to_bank_port[{pt, b}] =
          dbhc::map_find(b, bank_to_next_available_in_port);
        bank_to_next_available_in_port[b]++;
      }
    }
    for (auto bp : bank_to_next_available_in_port) {
      cout << tab(1) << bp.first << " -> " << bp.second << endl;
      assert(bp.second <= 2);
    }
    for (auto pt_srcs : impl.outpt_to_bank) {
      string pt = pt_srcs.first;
      for (int b : pt_srcs.second) {
        ubuffer_port_and_bank_to_bank_port[{pt, b}] =
          dbhc::map_find(b, bank_to_next_available_out_port);
        bank_to_next_available_out_port[b]++;
      }
    }
    for (auto bp : bank_to_next_available_out_port) {
      cout << tab(1) << bp.first << " -> " << bp.second << endl;
      assert(bp.second <= 2);
    }

    for (int b = 0; b < num_banks; b++) {
      auto currbank = bank_map[b];

      for(auto pt : bank_readers[b])
      {
        int count = dbhc::map_find({pt, b}, ubuffer_port_and_bank_to_bank_port);
        auto agen = ubuffer_port_agens[pt];
        def->connect(agen->sel("out"), currbank->sel("read_addr_" + str(count)));
        def->connect(currbank->sel("ren_" + str(count)),
            control_en(def, pt, buf));
      }
    }

    map<string, std::vector<Wireable*> > ubuffer_ports_to_bank_wires;
    map<string, std::vector<Wireable*> > ubuffer_ports_to_bank_condition_wires;
    for (int b = 0; b < num_banks; b++) {
      auto currbank = bank_map[b];

      for(auto pt : bank_readers[b])
      {
        int count = dbhc::map_find({pt, b}, ubuffer_port_and_bank_to_bank_port);
        ubuffer_ports_to_bank_wires[pt].push_back(currbank->sel("data_out_" + str(count)));
        if (impl.outpt_to_bank[pt].size() > 1) {
          ubuffer_ports_to_bank_condition_wires[pt].push_back(eqConst(def, ubuffer_port_bank_selectors[pt], b));
        } else {
          ubuffer_ports_to_bank_condition_wires[pt].push_back(one);
        }
      }
    }

    for (auto conn : ubuffer_ports_to_bank_wires) {
      vector<Wireable*> conds = ubuffer_ports_to_bank_condition_wires[conn.first];
      vector<Wireable*> vals = conn.second;
      assert(conds.size() == vals.size());

      if (conds.size() == 1) {
        def->connect(def->sel(conn.first + "_net.in"), pick(conn.second));
      } else {
      //  assert(conds.size() == 3);
      //  Wireable* out = def->sel(conn.first + "_net.in");

      //  auto snd_mux =
      //    def->addInstance("chain_mux" + c->getUnique(), "coreir.mux", {{"width", CoreIR::Const::make(c, 16)}});
      //  def->connect(snd_mux->sel("in0"), vals[1]);
      //  def->connect(snd_mux->sel("in1"), vals[2]);
      //  def->connect(snd_mux->sel("sel"), conds[2]);

      //  auto last_mux =
      //    def->addInstance("chain_mux" + c->getUnique(), "coreir.mux", {{"width", CoreIR::Const::make(c, 16)}});
      //  def->connect(last_mux->sel("in0"), snd_mux->sel("out"));
      //  def->connect(last_mux->sel("in1"), vals[0]);
      //  def->connect(last_mux->sel("sel"), conds[0]);

      //  def->connect(last_mux->sel("out"), out);
      //} else {
        Wireable* out = def->sel(conn.first + "_net.in");
        CoreIR::Wireable* out_wire = vals.at(0);
        for (auto i = 1; i < conds.size(); i ++ ) {
          auto mux = def->addInstance("chain_mux" + c->getUnique(),
                  "coreir.mux", {{"width", CoreIR::Const::make(c, 16)}});
          def->connect(out_wire, mux->sel("in0"));
          def->connect(vals[i], mux->sel("in1"));
          def->connect(conds[i], mux->sel("sel"));
          out_wire = mux->sel("out");
        }
        def->connect(out_wire, out);
      }
    }

    for (int b = 0; b < num_banks; b++) {
      auto currbank = bank_map[b];
      int count = 0;
      for(auto pt : bank_writers[b])
      {

        auto adjusted_buf = write_latency_adjusted_buffer(options, prg, buf, hwinfo);
        auto agen = ubuffer_port_agens[pt];

        Wireable* enable = nullptr;
        if ((inpt_to_bank[pt].size() > 1) && (impl.partition_dims.size() != 0)) {
          enable =
            andList(def, {control_en(def, pt, adjusted_buf), eqConst(def, ubuffer_port_bank_selectors[pt], b)});
        } else {
          enable =
            control_en(def, pt, adjusted_buf);
        }
        assert(enable != nullptr);

        def->connect(agen->sel("out"), currbank->sel("write_addr_" + str(count)));
        def->connect(currbank->sel("wen_" + str(count)),
            enable);

        def->connect(
            currbank->sel("data_in_" + str(count)),
            def->sel("self." + buf.container_bundle(pt) + "." + str(buf.bundle_offset(pt))));
        count++;
      }
    }

  }


}

isl_aff* bank_offset_aff(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl) {
  int bank_stride = 1;
  vector<string> dvs;
  vector<string> coeffs;
  for (int d = 0; d < buf.logical_dimension(); d++) {
    dvs.push_back("d" + str(d));
    if (dbhc::elem(d, impl.partition_dims)) {
      coeffs.push_back(str(bank_stride) + "*" + dvs.at(d));
      bank_stride *= dbhc::map_find(d, impl.partitioned_dimension_extents);
    }
  }

  coeffs.push_back("0");
  string bank_func = curlies(buf.name + bracket_list(dvs) + " -> Bank[" + sep_list(coeffs, "", "", " + ") + "]");
  auto bank_map = isl_map_read_from_str(buf.ctx, bank_func.c_str());

  auto acc_map = to_map(buf.access_map.at(reader));

  auto addr_expr_aff = get_aff(dot(acc_map, bank_map));
  return addr_expr_aff;
}

CoreIR::Instance* build_bank_selector(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl, CoreIR::ModuleDef* def) {
  int bank_stride = 1;
  vector<string> dvs;
  vector<string> coeffs;
  for (int d = 0; d < buf.logical_dimension(); d++) {
    dvs.push_back("d" + str(d));
    if (dbhc::elem(d, impl.partition_dims)) {
      coeffs.push_back(str(bank_stride) + "*" + dvs.at(d));
      bank_stride *= dbhc::map_find(d, impl.partitioned_dimension_extents);
    }
  }

  coeffs.push_back("0");
  string bank_func = curlies(buf.name + bracket_list(dvs) + " -> Bank[" + sep_list(coeffs, "", "", " + ") + "]");
  auto bank_map = isl_map_read_from_str(buf.ctx, bank_func.c_str());

  auto c = def->getContext();

  auto acc_map = to_map(buf.access_map.at(reader));

  auto addr_expr_aff = get_aff(dot(acc_map, bank_map));
  auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
  auto agen = def->addInstance("bank_selector_" + reader + c->getUnique(), aff_gen_mod);
  return agen;
}

isl_aff* inner_bank_offset_aff(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl) {
  vector<int> extents = extents_by_dimension(buf);
  int bank_stride = 1;
  vector<string> dvs;
  vector<string> coeffs;
  for (int d = 0; d < buf.logical_dimension(); d++) {
    dvs.push_back("d" + str(d));
    if (!dbhc::elem(d, impl.partition_dims)) {
      coeffs.push_back(str(bank_stride) + "*" + dvs.at(d));
      bank_stride *= extents.at(d);
    }
  }

  coeffs.push_back("0");
  string bank_func = curlies(buf.name + bracket_list(dvs) + " -> InnerBank[" + sep_list(coeffs, "", "", " + ") + "]");
  auto bank_map = isl_map_read_from_str(buf.ctx, bank_func.c_str());
  cout << "bank map for " << reader << ": " << str(bank_map) << endl;
  auto acc_map = to_map(buf.access_map.at(reader));

  auto addr_expr_aff = get_aff(dot(acc_map, bank_map));
  return addr_expr_aff;
}

CoreIR::Instance* build_inner_bank_offset(const std::string& reader, UBuffer& buf, const EmbarrassingBankingImpl& impl, CoreIR::ModuleDef* def) {
  vector<int> extents = extents_by_dimension(buf);
  int bank_stride = 1;
  vector<string> dvs;
  vector<string> coeffs;
  //for (int d = 0; d < buf.logical_dimension(); d++) {
  //  dvs.push_back("d" + str(d));
  //  if (!dbhc::elem(d, impl.partition_dims)) {
  //    coeffs.push_back(str(bank_stride) + "*" + dvs.at(d));
  //    bank_stride *= extents.at(d);
  //  }
  //}

  //new linear algorithm accumulate stride from inner most dimension
  for (int d = 0; d < buf.logical_dimension(); d++) {
    dvs.insert(dvs.begin(), "d" + str(d));
    if (!dbhc::elem(buf.logical_dimension()-1-d, impl.partition_dims)) {
      coeffs.push_back(str(bank_stride) + "*" + dvs.front());
      bank_stride *= extents.at(buf.logical_dimension() - 1- d);
    }
  }

  coeffs.push_back("0");
  string bank_func = curlies(buf.name + bracket_list(dvs) + " -> InnerBank[" + sep_list(coeffs, "", "", " + ") + "]");
  auto bank_map = isl_map_read_from_str(buf.ctx, bank_func.c_str());
  cout << "bank map for " << reader << ": " << str(bank_map) << endl;

  auto c = def->getContext();

  auto acc_map = to_map(buf.access_map.at(reader));

  auto addr_expr_aff = get_aff(dot(acc_map, bank_map));

  cout << "addrgen for " << reader << ": " << str(addr_expr_aff) << endl;

  auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);

  auto agen = def->addInstance("inner_bank_offset" + reader + c->getUnique(), aff_gen_mod);
  return agen;
}

CoreIR::Instance* build_addrgen(const std::string& reader, UBuffer& buf, CoreIR::ModuleDef* def, int width) {
  auto c = def->getContext();

  cout << "Building addrgen for " << reader << endl;
  isl_union_set* rddom = isl_union_set_read_from_str(buf.ctx, "{}");
  for (auto inpt : buf.get_in_ports()) {
    rddom = unn(rddom, range(buf.access_map.at(inpt)));
  }
  for (auto inpt : buf.get_out_ports()) {
    rddom = unn(rddom, range(buf.access_map.at(inpt)));
  }
  auto acc_map = to_map(buf.access_map.at(reader));
  cout << tab(1) << "=== acc_map = " << str(acc_map) << endl;
  auto acc_aff = get_aff(acc_map);
  cout << tab(2) << "=== acc aff = " << str(acc_aff) << endl;
  auto reduce_map = linear_address_map(to_set(rddom));
  auto addr_expr = dot(acc_map, reduce_map);
  auto addr_expr_aff = get_aff(addr_expr);
  cout << tab(3) << "==== addr expr aff: " << str(addr_expr_aff) << endl;

  auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff, width);
  auto agen = def->addInstance("addrgen_" + reader + c->getUnique(), aff_gen_mod);
  return agen;
}

CoreIR::Instance* build_addrgen(const std::string& reader, UBuffer& buf, CoreIR::ModuleDef* def) {
  return build_addrgen(reader, buf, def, CONTROLPATH_WIDTH);
}

CoreIR::Wireable* control_vars(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
  string bundle = buf.container_bundle(reader);
  return def->sel("self." + bundle + "_ctrl_vars");
}

CoreIR::Wireable* control_en(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
  string bundle = buf.container_bundle(reader);
  if (buf.is_in_pt(reader)) {
    return def->sel("self." + bundle + "_wen");
  } else {
    return def->sel("self." + bundle + "_ren");
  }
}

double PE_energy_cost_instance_model(power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg) {
  cout << "Computing Instance level PE energy cost for " << prg.name << endl;

  double energy_cost = 0.0;
  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      vector<string> surrounding = surrounding_vars(op, prg);
      vector<int> bounds;
      for (auto l : surrounding) {
        bounds.push_back(prg.find_loop(l)->trip_count());
      }
      int bnds = card(bounds);
      power_stats.op_counts[op->name] = bnds;

      CoreIR::Context* context = CoreIR::newContext();
      CoreIRLoadLibrary_commonlib(context);
      CoreIRLoadLibrary_cgralib(context);

      string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
      if (!loadFromFile(context, compute_file)) {
        cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
        //assert(false);
      }
      auto ns = context->getNamespace("global");
      CoreIR::Module* cu = ns->getModule(op->func);
      garnet_map_module(cu);
      map<string, int> counts;
      for (auto inst : cu->getDef()->getInstances()) {
        cout << tab(1) << inst.first << endl;
        //cout << tab(1) << "Possible power costs..." << endl;
        cout << tab(2) << inst.second->getModuleRef()->getName() << endl;
        if (inst.second->getModuleRef()->getName() == "PE") {
          bool found_power = false;
          for (auto pp : power_params.instance_energy_costs) {
            //cout << tab(2) << pp.first << endl;
            vector<string> pps = split_at(pp.first, "$");
            assert(pps.size() > 2);

            if (pps.at(0) == op->name && pps.at(2) + "$" + pps.at(3) == inst.first) {
              //cout << tab(3) << "Power cost: " << pp.second << endl;
              energy_cost +=
                power_stats.op_counts[op->name] *
                pp.second;
              found_power = true;
              break;
              //assert(false);
            }
          }
          assert(found_power);
        }
      }
      deleteContext(context);
    }
  }

  cout << "Total PE energy cost for " << prg.name << ": " << energy_cost * 1e12 << " (pJ)" << endl;

  //assert(false);
  return energy_cost * 1e12;
}

double PE_energy_cost(power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg) {

  cout << "Computing PE energy cost for " << prg.name << endl;

  int PEs_used = 0;
  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      vector<string> surrounding = surrounding_vars(op, prg);
      vector<int> bounds;
      for (auto l : surrounding) {
        bounds.push_back(prg.find_loop(l)->trip_count());
      }
      int bnds = card(bounds);
      power_stats.op_counts[op->name] = bnds;

      CoreIR::Context* context = CoreIR::newContext();
      CoreIRLoadLibrary_commonlib(context);
      CoreIRLoadLibrary_cgralib(context);

      string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
      if (!loadFromFile(context, compute_file)) {
        cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
        //assert(false);
      }
      auto ns = context->getNamespace("global");
      CoreIR::Module* cu = ns->getModule(op->func);
      garnet_map_module(cu);
      map<string, int> counts;
      for (auto inst : cu->getDef()->getInstances()) {
        cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
        counts[inst.second->getModuleRef()->getName()]++;
        if (inst.second->getModuleRef()->getName() == "PE") {
          auto modargs = inst.second->getModArgs();
          if (modargs.find("alu_op") != end(modargs)) {
            power_stats.PE_optype_counts[op->name][inst.second->getModArgs().at("alu_op")->get<string>()]++;
          }
        }
      }
      cu->print();
      PEs_used += counts["PE"];
      deleteContext(context);
    }
  }
  cout << "# of PEs in " << prg.name << " = " << PEs_used << endl;
  cout << "PE op counts..." << endl;

  double energy_cost = 0.0;
  for (auto p : prg.all_ops()) {
    for (auto op : power_stats.PE_optype_counts[p->name]) {
      cout << tab(1) << op.first << " -> " << op.second << endl;
      cout << tab(1) << "op_energy_cost : " << dbhc::map_find(op.first, power_params.alu_op_energy_costs) << endl;
      energy_cost += dbhc::map_find(p->name, power_stats.op_counts) *
        ((double) dbhc::map_find(op.first, power_params.alu_op_energy_costs)) *
        ((double)op.second);
      cout << "Total PE energy cost: " << energy_cost << endl;
    }
  }
  cout << "Total PE energy cost for " << prg.name << ": " << energy_cost << endl;

  return energy_cost;
}

map<string, int> get_PE_optype_count_garnet(prog& prg) {

  cout << "Computing PE energy cost for " << prg.name << endl;
  map<string, int> PE_op_count;

      CoreIR::Context* context = CoreIR::newContext();
      CoreIRLoadLibrary_commonlib(context);
      CoreIRLoadLibrary_cgralib(context);

      string garnet_file = "./aha_garnet_design_new/" + prg.name + "/" + prg.name +  "_garnet.json";
      if (!loadFromFile(context, garnet_file)) {
        cout << "Could not load compute file for: " << prg.name << ", file name = " << garnet_file << endl;
        assert(false);
      }
      auto ns = context->getNamespace("global");
      CoreIR::Module* cu = ns->getModule(prg.name);
      map<string, int> counts;
      for (auto inst : cu->getDef()->getInstances()) {
        cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
        counts[inst.second->getModuleRef()->getName()]++;
        if (inst.second->getModuleRef()->getName() == "PE") {
          auto modargs = inst.second->getModArgs();
          if (modargs.find("alu_op") != end(modargs)) {
            //power_stats.PE_optype_counts[op->name][inst.second->getModArgs().at("alu_op")->get<string>()]++;

            PE_op_count[inst.second->getModArgs().at("alu_op")->get<string>()]++;
          } else {
            PE_op_count["lut"]++;
          }
        }
      }
      cu->print();
      deleteContext(context);
  //cout << "# of PEs in " << prg.name << " = " << PEs_used << endl;

  return PE_op_count;
}

map<string, int> get_PE_optype_count(prog& prg) {

  cout << "Computing PE energy cost for " << prg.name << endl;
  map<string, int> PE_op_count;

  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      vector<string> surrounding = surrounding_vars(op, prg);
      vector<int> bounds;
      for (auto l : surrounding) {
        bounds.push_back(prg.find_loop(l)->trip_count());
      }

      CoreIR::Context* context = CoreIR::newContext();
      CoreIRLoadLibrary_commonlib(context);
      CoreIRLoadLibrary_cgralib(context);

      string compute_file = "./coreir_compute/" + prg.name + "_compute.json";
      if (!loadFromFile(context, compute_file)) {
        cout << "Could not load compute file for: " << prg.name << ", file name = " << compute_file << endl;
        //assert(false);
      }
      auto ns = context->getNamespace("global");
      CoreIR::Module* cu = ns->getModule(op->func);
      garnet_map_module(cu);
      map<string, int> counts;
      for (auto inst : cu->getDef()->getInstances()) {
        cout << tab(1) << inst.second->getModuleRef()->getName() << endl;
        counts[inst.second->getModuleRef()->getName()]++;
        if (inst.second->getModuleRef()->getName() == "PE") {
          auto modargs = inst.second->getModArgs();
          if (modargs.find("alu_op") != end(modargs)) {
            //power_stats.PE_optype_counts[op->name][inst.second->getModArgs().at("alu_op")->get<string>()]++;

            PE_op_count[inst.second->getModArgs().at("alu_op")->get<string>()]++;
          }
        }
      }
      cu->print();
      deleteContext(context);
    }
  }
  //cout << "# of PEs in " << prg.name << " = " << PEs_used << endl;

  return PE_op_count;
}

double MEM_energy_cost(CodegenOptions& options, power_analysis_params& power_params, power_analysis_info& power_stats, prog& prg) {

  cout << "Computing MEM energy cost for " << prg.name << endl;

  const int SRAM_SIZE_BITS = 2048*16;
  double daly_access_cost_pj = (50 + 0.022 * sqrt(SRAM_SIZE_BITS)) / 1000;
  double energy_cost = 0.0;
  for (auto op : prg.all_ops()) {
    if (op->func != "") {
      vector<string> surrounding = surrounding_vars(op, prg);
      vector<int> bounds;
      for (auto l : surrounding) {
        bounds.push_back(prg.find_loop(l)->trip_count());
      }
      int bnds = card(bounds);
      power_stats.op_counts[op->name] = bnds;

      double num_accesses_per_op = op->consumes_pair().size() + op->produces_pair().size();
      energy_cost += num_accesses_per_op * daly_access_cost_pj * bnds;
    }
  }

  cout << "Total MEM energy cost for " << prg.name << ": " << energy_cost << endl;

  return energy_cost;
}

#endif



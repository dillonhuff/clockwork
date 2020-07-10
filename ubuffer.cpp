#include "ubuffer.h"
#include "codegen.h"
#ifdef COREIR
#include "cwlib.h"
#include "coreir_backend.h"

using CoreIR::ModuleDef;
#endif
#include "coreir_backend.h"

isl_map* bank_map(isl_ctx* ctx, const std::string& src_name, banking_strategy& banking) {
  vector<string> dvs;
  vector<string> addrs;
  int num_banks = 1;
  for (int i = 0; i < (int) banking.cycle_factors.size(); i++) {
    assert(banking.cycle_factors.at(i) > 0);
    dvs.push_back("a_" + str(i));
    addrs.push_back("a_" + str(i) + " % " + str(banking.cycle_factors.at(i)));
    num_banks *= banking.cycle_factors.at(i);
  }

  string bank_func =
    curlies(bracket_list(dvs) + " -> " + bracket_list(addrs));

  cout << "bank func = " << bank_func << endl;
  auto bank_map = isl_map_read_from_str(ctx, bank_func.c_str());
  set_domain_name(bank_map, src_name);
  return bank_map;
}

std::string read_addrgen_name(const std::string& n) {
  return n + "_read_addrgen";
}

std::string write_addrgen_name(const std::string& n) {
  return n + "_write_addrgen";
}

map<string, isl_set*> input_ports_to_conditions(const std::string& outpt, UBuffer& buf) {
  map<string, isl_set*> in_ports_to_conditions;
  umap* reads_to_sources = buf.get_lexmax_events(outpt);
  cout << "reads to source for " << outpt << ": " << str(reads_to_sources) << endl;
  uset* producers_for_outpt = range(reads_to_sources);

  vector<string> possible_ports;
  for (auto pt : buf.get_in_ports()) {
    if (buf.has_bank_between(pt, outpt)) {
      possible_ports.push_back(pt);
    }
  }

  auto read_map = buf.access_map.at(outpt);
  auto read_space = get_space(read_map);
  for (auto inpt : possible_ports) {
    auto write_map = buf.access_map.at(inpt);
    auto data_written = range(write_map);

    auto common_write_ops =
      domain(its_range(read_map, data_written));

    auto write_ops =
      domain(buf.access_map.at(inpt));
    auto op_overlap = domain(its_range(reads_to_sources, write_ops));

    auto overlap = its(op_overlap, common_write_ops);

    auto read_ops =
      domain(buf.access_map.at(outpt));

    auto readers_that_use_this_port =
      gist(overlap, read_ops);
    cout << "Readers that use " << inpt << " -> outpt: " << str(readers_that_use_this_port) << endl;
    if (!empty(readers_that_use_this_port)) {
      in_ports_to_conditions[inpt] =
        to_set(simplify(readers_that_use_this_port));
    }
  }
  return in_ports_to_conditions;
}

isl_map* linear_address_map(isl_set* s) {
  string domain = name(s);
  int dim = num_dims(s);
  vector<string> var_names;
  vector<string> exprs;
  isl_val* stride = one(ctx(s));
  for (int i = 0; i < dim; i++) {
    string var = "d" + str(i);
    var_names.push_back(var);
    string stridestr = str(stride);
    exprs.push_back(stridestr + "*" + var);
    auto interval = project_all_but(s, i);
    isl_val* extend = add(sub(lexmaxval(interval), lexminval(interval)), one(ctx(s)));
    stride = mul(stride, extend);
  }
  string map_str = "{" + domain + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(exprs, "[", "]", " + ") + " }";
  return isl_map_read_from_str(ctx(s), map_str.c_str());
}

umap* get_lexmax_events(const std::string& outpt, UBuffer& buf) {
  umap* src_map = nullptr;
  for (auto inpt : buf.get_in_ports()) {
    auto beforeAcc = lex_gt(buf.schedule.at(outpt), buf.schedule.at(inpt));
    if (src_map == nullptr) {
      auto outmap = buf.access_map.at(outpt);
      auto inmap = buf.access_map.at(inpt);
      src_map =
        its(dot(outmap,
              inv(inmap)), beforeAcc);
    } else {
      src_map =
        unn(src_map, ((its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc))));
    }
  }
  assert(src_map != nullptr);

  auto sched = buf.global_schedule();
  auto after = lex_gt(sched, sched);

  src_map = its(src_map, after);
  src_map = lexmax(src_map);

  auto time_to_event = inv(sched);

  auto lex_max_events =
    dot(lexmax(dot(src_map, sched)), time_to_event);

  assert(lex_max_events != nullptr);
  return lex_max_events;
}

umap* last_reads(const string& inpt, UBuffer& buf) {
  auto sched = buf.global_schedule();
  //cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  //cout << "Access map: " << str(writes) << endl;
  auto writers = inv(writes);
  //cout << "Writer map: " << str(writers) << endl;
  uset* written_values = (range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, (buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  //cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  //cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  //cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  //cout << "vals to reads: " << str(reads_from_fifo) << endl;
  // TODO: Should be lexmax in the schedule
  auto last_read = lexmax(vals_to_reads);
  return last_read;

}

isl_union_pw_qpolynomial* compute_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {

  isl_union_map* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);

  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  umap* rdsched = buf.schedule.at(read_port);
  umap* wrsched = buf.schedule.at(write_port);
  auto WritesBeforeRead =
    lex_gt(rdsched, wrsched);

  auto WriteThatProducesReadData =
    get_lexmax_events(read_port, buf);

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  auto WritesBtwn = its_range((its(WritesAfterProduction, WritesBeforeRead)),
      to_uset(buf.domain.at(write_port)));


  auto c = card(WritesBtwn);
  return c;
}

int compute_dd_lower_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
  return bnd_int(bound);
}

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
  return bnd_int(bound);
}

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  c = coalesce(c);
  auto out_domain = buf.domain.at(read_port);
  c = isl_union_pw_qpolynomial_gist(c, to_uset(out_domain));

  auto folds  = get_polynomials(c);
  if (folds.size() == 1) {
    return codegen_c(folds[0]);
  }

  assert(folds.size() == 0);
  return "0";
}

int compute_max_dd(UBuffer& buf, const string& inpt) {
  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  return maxdelay;
}

string generate_multilinear_ram_addr(const std::string& pt, bank& bnk, UBuffer& buf) {
  vector<int> lengths;
  vector<int> mins;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto min = to_int(lexminval(s));
    mins.push_back(min);
    auto max = to_int(lexmaxval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }

  isl_map* m = to_map(buf.access_map.at(pt));
  auto svec = isl_pw_multi_aff_from_map(m);
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(svec);
  vector<string> domains;
  vector<string> offsets;
  for (auto piece : pieces) {
    vector<string> addr_vec;
    isl_multi_aff* ma = piece.second;
    for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
      isl_aff* aff = isl_multi_aff_get_aff(ma, d);
      addr_vec.push_back(codegen_c(aff));
    }

    vector<string> addr_vec_out;
    for (int i = 0; i < buf.logical_dimension(); i++) {
      //int length = 1;
      //for (int d = 0; d < i; d++) {
        //length *= lengths.at(d);
      //}
      //string item = "(" + addr_vec.at(i) + " - " + str(mins.at(i)) + ") * " + to_string(length);
      //string item = "[" + addr_vec.at(i) + " - " + str(mins.at(i)) + "]";
      string item = addr_vec.at(i) + " - " + str(mins.at(i));
      addr_vec_out.push_back(item);
    }

    //string addr = sep_list(addr_vec_out, "", "", " + ");
    string addr = sep_list(addr_vec_out, "", "", ", ");
    offsets.push_back(addr);
    domains.push_back(codegen_c(piece.first));
  }

  assert(offsets.size() == 1);
  return offsets.at(0);

  assert(offsets.size() > 0);
  assert(domains.size() == offsets.size());

  string base = offsets.at(0);
  for (int d = 1; d < offsets.size(); d++) {
    base = parens(parens(domains.at(d)) + " ? " + offsets.at(d) + " : " + base);
  }

  return base;
}

void generate_multilinear_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto pt_type_string = bank.pt_type_string;
  auto partitions =
    bank.get_partitions();
  int partition_size = partitions.size();
  isl_set* rddom = to_set(bank.rddom);
  vector<int> ranges;
  vector<int> mins;
  vector<int> maxs;
  for (int d = 0; d < num_dims(rddom); d++) {
    auto ps = project_all_but(rddom, d);
    int minv = to_int(lexminval(ps));
    int maxv = to_int(lexmaxval(ps));

    mins.push_back(minv);
    maxs.push_back(maxv);
    ranges.push_back(maxv - minv + 1);
  }

  vector<string> decls =
    space_var_decls(get_space(rddom));
  vector<string> vars =
    space_var_args(get_space(rddom));
  vector<string> args;
  for (auto v : vars) {
    args.push_back("[" + v + "]");
  }

  vector<string> range_strs;
  for (auto r : ranges) {
    range_strs.push_back("[" + str(r) + "]");
  }

  //out << "\t// Capacity: " << capacity << endl;
  //out << tab(1) << pt_type_string << " RAM[" << capacity << "];" << endl;
  out << tab(1) << pt_type_string << " RAM" << sep_list(range_strs, "", "", "") << ";" << endl;

  out << tab(1) << "inline " + pt_type_string + " read(" << comma_list(decls) << ") {" << endl;

  //open_debug_scope(out);
  //out << tab(2) << "if (addr < 0 || !(addr < " << capacity << ")) {" << endl;
  //out << tab(2) << "cout << \"Read error: Address \" << addr << \" is out of bounds\" << endl;" << endl;
  //out << tab(2) << "}" << endl;
  //out << tab(2) << "assert(addr < " << capacity << ");" << endl;
  //out << tab(2) << "assert(addr >= " << (int) 0 << ");" << endl;
  //close_debug_scope(out);

  //ignore_inter_deps(out, "RAM");
  out << tab(2) << "return RAM" << sep_list(args, "", "", "") << ";" << endl;
  out << tab(1) << "}" << endl << endl;

  out << endl << endl;

  out << "\tinline void write(const " + pt_type_string + " value, " << comma_list(decls) << ") {" << endl;
  //open_debug_scope(out);
  //out << tab(2) << "if (addr < 0 || !(addr < " << capacity << ")) {" << endl;
  //out << tab(2) << "cout << \"Write error: Address \" << addr << \" is out of bounds\" << endl;" << endl;
  //out << tab(2) << "}" << endl;
  //out << tab(2) << "assert(addr < " << capacity << ");" << endl;
  //out << tab(2) << "assert(addr >= " << (int) 0 << ");" << endl;
  //close_debug_scope(out);

  //if (options.add_dependence_pragmas) {
    //ignore_inter_deps(out, "RAM");
  //}
  //out << tab(2) << "RAM[addr] = value;" << endl;
  out << tab(2) << "RAM" << sep_list(args, "", "", "") << " = value;" << endl;
  out << tab(1) << "}" << endl << endl;

  out << "};" << endl << endl;

}

void generate_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto name = bank.name;
  auto pt_type_string = bank.pt_type_string;
  auto read_delays = bank.read_delays;
  auto num_readers = bank.num_readers;
  auto maxdelay = bank.maxdelay;

  out << "struct " << name << "_cache" <<  " {" << endl;
  out << "\t// RAM Box: " << bank.extract_layout() << endl;

  //C array with read and write method
  if (bank.tp == INNER_BANK_OFFSET_LINEAR) {
    auto partitions =
      bank.get_partitions();
    int partition_size = partitions.size();
    //add a ram capacity compute pass is different from stack bank
    int capacity = int_upper_bound(card(bank.rddom));
    out << "\t// Capacity: " << capacity << endl;
    out << tab(1) << pt_type_string << " RAM[" << capacity << "];" << endl;
    out << tab(1) << "inline " + pt_type_string + " read(const int addr) {" << endl;

    open_debug_scope(out);
    out << tab(2) << "if (addr < 0 || !(addr < " << capacity << ")) {" << endl;
    out << tab(2) << "cout << \"Read error: Address \" << addr << \" is out of bounds\" << endl;" << endl;
    out << tab(2) << "}" << endl;
    out << tab(2) << "assert(addr < " << capacity << ");" << endl;
    out << tab(2) << "assert(addr >= " << (int) 0 << ");" << endl;
    close_debug_scope(out);

    ignore_inter_deps(out, "RAM");
    out << tab(2) << "return RAM[addr];" << endl;
    out << tab(1) << "}" << endl << endl;

    out << endl << endl;

    out << "\tinline void write(const " + pt_type_string + " value, const int addr) {" << endl;
    open_debug_scope(out);
    out << tab(2) << "if (addr < 0 || !(addr < " << capacity << ")) {" << endl;
    out << tab(2) << "cout << \"Write error: Address \" << addr << \" is out of bounds\" << endl;" << endl;
    out << tab(2) << "}" << endl;
    out << tab(2) << "assert(addr < " << capacity << ");" << endl;
    out << tab(2) << "assert(addr >= " << (int) 0 << ");" << endl;
    close_debug_scope(out);

    if (options.add_dependence_pragmas) {
      ignore_inter_deps(out, "RAM");
    }
    out << tab(2) << "RAM[addr] = value;" << endl;
    out << tab(1) << "}" << endl << endl;

    out << "};" << endl << endl;

  } else if (bank.tp == INNER_BANK_OFFSET_MULTILINEAR) {
    generate_multilinear_bank(options, out, bank);
  } else {
    assert(bank.tp == INNER_BANK_OFFSET_STACK);

    out << "\t// Capacity: " << maxdelay + 1 << endl;
    out << "\t// # of read delays: " << read_delays.size() << endl;

    read_delays = sort_unique(read_delays);

    if (num_readers == 1 || options.all_rams) {
      int partition_capacity = 1 + maxdelay;
      out << "\tfifo<" << pt_type_string << ", " << partition_capacity << "> f" << ";" << endl;
      out << "\tinline " + pt_type_string + " peek(const int offset) {" << endl;
      ignore_inter_deps(out, "f");
      out << tab(2) << "return f.peek(" << partition_capacity - 1 << " - offset);" << endl;
      out << tab(1) << "}" << endl << endl;

      out << endl << endl;
      out << "\tinline void push(const " + pt_type_string + " value) {" << endl;
      if (options.add_dependence_pragmas) {
        ignore_inter_deps(out, "f");
      }
      out << tab(2) << "return f.push(value);" << endl;
      out << tab(1) << "}" << endl << endl;
    } else {
      auto break_points = bank.get_break_points();
      read_delays = break_points;

      auto partitions =
        bank.get_partitions();
      vector<int> end_inds =
        bank.get_end_inds();

      for (auto p : partitions) {

        auto partition_capacity = p.second;
        //out << "\t// Parition [" << current.first << ", " << next.first << ") capacity = " << partition_capacity << endl;
        if (partition_capacity > 1) {
          out << "\tfifo<" << pt_type_string << ", " << partition_capacity << "> " << p.first << ";" << endl;
        } else {
          out << "\t" << pt_type_string << " " << p.first << ";" << endl;
        }
      }

      out << endl << endl;
      int nind = 0;
      for (auto p : partitions) {
        int dv = end_inds[nind];
        //int capacity = capacities.at(nind);
        int capacity = p.second;
        assert(dv >= 0);
        out << "\tinline " << pt_type_string << " peek_" << to_string(dv) << "() {" << endl;
        if (capacity > 1) {
          ignore_inter_deps(out, p.first);
          out << "\t\treturn " << p.first << ".back();" << endl;
        } else {
          out << "\t\treturn " << p.first << ";" << endl;
        }
        out << "\t}" << endl << endl;
        nind++;
      }
      out << endl << endl;

      out << "\tinline void push(const " + pt_type_string + " value) {" << endl;
      for (size_t i = partitions.size() - 1; i >= 1; i--) {
        auto current = partitions[i];
        auto prior = partitions[i - 1];
        auto last_capacity = prior.second;
        auto capacity = current.second;

        if (options.add_dependence_pragmas) {
          ignore_inter_deps(out, current.first);
        }

        out << tab(2) << "// cap: " << capacity << " reading from capacity: " << last_capacity << endl;
        out << tab(2) << write_partition(current.first, capacity, read_partition(prior.first, last_capacity)) << ";" << endl;
      }
      out << tab(2) << "// cap: " << partitions.at(0).second << endl;
      out << tab(2) << write_partition(partitions.at(0).first, partitions.at(0).second, "value") << ";" << endl;
      out << "\t}" << endl << endl;
    }
    out << "};" << endl << endl;
  }
}


vector<string> dimension_var_args(const std::string& pt, UBuffer& buf) {
  isl_space* s = get_space(buf.domain.at(pt));
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(buf.ctx, dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

vector<string> dimension_var_decls(const std::string& pt, UBuffer& buf) {
  isl_space* s = get_space(buf.domain.at(pt));
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(buf.ctx, dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

void generate_vivado_tcl(UBuffer& buf) {
  generate_vivado_tcl(buf.name);
}

//Post processing get the ubuffer for each bank
map<string, UBuffer> UBuffer::generate_ubuffer(CodegenOptions& options) {
  print_bank_info();
  map<string, UBuffer> buffers;
  for (auto b : get_banks()) {
    if (get_bank_outputs(b.name).size() == 0 ||
        get_bank_inputs(b.name).size() == 0) {
      continue;
    }
    //fiter out those node will implemented as a shift register
    if (options.conditional_merge) {
      if (b.maxdelay <= options.merge_threshold) {
        continue;
      }
    }
    UBuffer buf;
    string bname = b.name + "_ubuf";
    buf.name = bname;
    buf.ctx = ctx;
    buf.port_widths = port_widths;
    auto inpts = get_bank_inputs(b.name);
    auto outpts = get_bank_outputs(b.name);
    int usuffix = 0;
    for (auto inpt: inpts) {
      auto acc_map = to_map(access_map.at(inpt));
      acc_map = set_range_name(acc_map, bname);
      auto dom = domain.at(inpt);
      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      buf.port_bundles[::name(dom) + "_write"].push_back(pt_name);
      buf.add_in_pt(pt_name, dom, acc_map, schedule.at(inpt));
      usuffix ++;
    }

    for (auto outpt: outpts) {
      auto acc_map = to_map(access_map.at(outpt));
      acc_map = set_range_name(acc_map, bname);
      auto dom = domain.at(outpt);
      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      buf.port_bundles[::name(dom) + "_read"].push_back(pt_name);
      buf.add_out_pt(pt_name, dom, acc_map, schedule.at(outpt));
      usuffix ++;
    }
    buffers[bname] = buf;
    cout << "\t\tNeed for vectorization: \n" << buf << endl;
  }
  return buffers;
}

#ifdef COREIR

CoreIR::Module* ram_module(CoreIR::Context* c, const int width, const int depth) {
  auto tp = c->Record({
      {"clk", c->Named("coreir.clkIn")},
      {"wdata", c->BitIn()->Arr(width)},
      {"waddr", c->BitIn()->Arr(width)},
      {"wen", c->BitIn()},
      {"rdata", c->Bit()->Arr(width)},
      {"raddr", c->BitIn()->Arr(width)},
      {"ren", c->BitIn()}});

  auto m = c->getNamespace("global")->newModuleDecl("ram_" + c->getUnique(), tp);
  auto def = m->newModuleDef();
  //auto bnk = def->addInstance(
      //"bank",
      //"coreir.mem",
      //{{"width", CoreIR::Const::make(c, width)}, {"depth", CoreIR::Const::make(c, depth)}});
      ////{{"mode", CoreIR::Const::make(c, "SRAM")}});
  ////auto bnk = def->addInstance(
      ////"bank",
      ////"cgralib.Mem",
      ////{{"width", CoreIR::Const::make(c, width)}, {"total_depth", CoreIR::Const::make(c, depth)}},
      ////{{"mode", CoreIR::Const::make(c, "SRAM")}});

  //auto constant = def->addInstance(c->getUnique(),
      //"corebit.const",
      //{{"value", CoreIR::Const::make(c, true)}});

  ////def->connect(constant->sel("out"), bnk->sel("cg_en"));

  //auto next_val = def->addInstance("addr_select", "coreir.mux", {{"width", CoreIR::Const::make(c, width)}});
  //def->connect(next_val->sel("sel"), def->sel("self.wen"));
  //def->connect(next_val->sel("in0"), def->sel("self.waddr"));
  //def->connect(next_val->sel("in1"), def->sel("self.raddr"));
  //def->connect(next_val->sel("out"), bnk->sel("addr"));

  ////def->connect(def->sel("self.clk"), bnk->sel("clk"));
  //def->connect(def->sel("self.wdata"), bnk->sel("wdata"));
  //def->connect(def->sel("self.rdata"), bnk->sel("rdata"));
  //def->connect(def->sel("self.wen"), bnk->sel("wen"));
  //def->connect(def->sel("self.ren"), bnk->sel("ren"));

  //def->connect("self.clk", "mem.clk");
  //def->connect("self.wdata", "mem.wdata");
  //def->connect("self.waddr", "waddr_slice.in");
  //def->connect("waddr_slice.out", "mem.waddr");
  //def->connect("self.wen", "mem.wen");
  //def->connect("mem.rdata", "readreg.in");
  //def->connect("self.rdata", "readreg.out");
  //def->connect("self.raddr", "raddr_slice.in");
  //def->connect("raddr_slice.out", "mem.raddr");
  //def->connect("self.ren", "readreg.en");

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
  m->setDef(def);
  return m;
}

//generate/realize the rewrite structure inside ubuffer node
void UBuffer::generate_coreir(CodegenOptions& options, CoreIR::ModuleDef* def) {
  auto context = def->getContext();
  //for (auto it : get_banks()) {
    //auto connection = it.first;
    //auto bk = it.second;
    ////cout << "[inpt: " << connection.first << "] -> [bk: " << bk.name << ", delay = " << bk.maxdelay <<  "] -> [outpt:" << connection.second <<  "]\n";
  //}

  //map save the register
  map<string, CoreIR::Wireable*> wire2out;
  map<string, CoreIR::Wireable*> pt2wire;
  map<string, CoreIR::Wireable*> reg_in;

  //TODO: possible bug, the sequence may not be correct
  for (auto b : get_in_bundles()) {
    int pix_width = port_widths;
    int pt_cnt = 0;
    auto inpt_bd_wire = def->sel("self." + b);
    for (auto inpt : port_bundles.at(b)) {
      pt2wire[inpt] = inpt_bd_wire->sel(pt_cnt);
      pt_cnt ++;
    }
  }
  for (auto b : get_out_bundles()) {
    int pix_width = port_widths;
    int pt_cnt = 0;
    auto outpt_bd_wire = def->sel("self." + b);
    for (auto outpt : port_bundles.at(b)) {
      pt2wire[outpt] = outpt_bd_wire->sel(pt_cnt);
      pt_cnt ++;
    }
  }

  for (auto bk : get_banks()) {
    //assert(false);
    std::set<string> inpts = get_bank_inputs(bk.name);
    std::set<string> outpts = get_bank_outputs(bk.name);
    auto buf_inpts = get_in_ports();
    //if (count(buf_inpts.begin(), buf_inpts.end(), pick(inpts)) == 0){
    if (bk.maxdelay == 0) {
      //this is a wire
      assert(inpts.size() == 1);
      assert(outpts.size() == 1);
      def->connect(pt2wire.at(pick(inpts)), pt2wire.at(pick(outpts)));
      wire2out[pick(outpts)] = pt2wire.at(pick(inpts));
    } else if (bk.maxdelay <= options.merge_threshold) {
      //TODO: support dilation conv, register information is in maxdelay
      //add register, wire valid from ubuffer
      CoreIR::Wireable* last_out;
      for (size_t i = 0; i < bk.maxdelay; i ++) {
        auto reg = def->addInstance("d_reg_"+context->getUnique(), "mantle.reg",
            {{"width", CoreIR::Const::make(context, port_widths)},
            {"has_en", CoreIR::Const::make(context, false)}});
        assert(inpts.size() == 1);
        assert(outpts.size() == 1);
        //do not wire input for the first pass
        //Wire the shift register chain
        if (i == 0) {
          if (isIn.at(pick(inpts))) {
            def->connect(reg->sel("in"), pt2wire.at(pick(inpts)));
          } else {
            reg_in[pick(inpts)] = reg->sel("in");
            wire2out[pick(outpts)] = reg->sel("out");
          }
        } else {
          def->connect(reg->sel("in"), last_out);
        }
        if (i == bk.maxdelay - 1) {
          def->connect(reg->sel("out"), pt2wire.at(pick(outpts)));
        } else {
          last_out = reg->sel("out");
        }
      }
    } else {
      string ub_ins_name = "ub_"+bk.name;
      CoreIR::Values args = {
        {"width", CoreIR::Const::make(context, port_widths)},
        {"input_num", CoreIR::Const::make(context, 1)},
        {"output_num", CoreIR::Const::make(context, bk.num_readers)},
        {"config", CoreIR::Const::make(context, config_file)}
      };
      CoreIR::Instance* buf;
      buf = def->addInstance(ub_ins_name, "cwlib.ub", args);

      int inpt_cnt = 0, outpt_cnt = 0;
      for (auto inpt: inpts) {
        //TODO: datain may be an output port
        if (isIn.at(inpt)){
          def->connect(buf->sel("datain_" + to_string(inpt_cnt)), pt2wire.at(inpt));
          def->connect(buf->sel("wen_" + to_string(inpt_cnt)), def->sel("self."+get_bundle(inpt)+"_en"));
        } else {
          def->connect(buf->sel("datain_" + to_string(inpt_cnt)), wire2out.at(inpt));
          def->connect(buf->sel("wen_" + to_string(inpt_cnt)), wire2out.at(inpt + "_valid"));
        }
        inpt_cnt++;
      }
      for (auto outpt: outpts) {
        def->connect(buf->sel("dataout_"+to_string(outpt_cnt)), pt2wire.at(outpt));
        wire2out[outpt] = buf->sel("dataout_" + to_string(outpt_cnt));
        wire2out[outpt + "_valid"] = buf->sel("valid_" + to_string(outpt_cnt));
        //TODO: figure out valid wiring strategy
        //Wire the bank with the largest delay
        outpt_cnt++;
      }
    }
  }

  //second pass wire all the register input port
  for (auto it: reg_in) {
    string outpt = it.first;
    auto in = it.second;
    auto out = wire2out.at(outpt);
    def->connect(in, out);
  }

  }

  CoreIR::Instance* cmux(ModuleDef* def,
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

  CoreIR::Module* generate_coreir_select(CodegenOptions& options, CoreIR::Context* c, const string& outpt, UBuffer& buf) {
    int width = buf.port_widths;

    cout << "creating select for " << outpt << endl;

    map<string, isl_set*> in_ports_to_conditions =
      input_ports_to_conditions(outpt, buf);
    cout << "====== Conditions for ports..." << endl;
    for (auto pt : in_ports_to_conditions) {
      cout << tab(1) << pt.first << " -> " << str(pt.second) << endl;
    }

    assert(in_ports_to_conditions.size() > 0);
    int num_select_vars = num_dims(pick(in_ports_to_conditions).second);

    auto ns = c->getNamespace("global");
      vector<pair<string, CoreIR::Type*> >
        ub_field{{"clk", c->Named("coreir.clkIn")},
          {"out", c->Bit()->Arr(width)}};
      vector<string> possible_source_banks;
      for (auto b : buf.get_banks()) {
        if (elem(outpt, buf.get_bank_outputs(b.name))) {
          ub_field.push_back({b.name, c->BitIn()->Arr(width)});
          possible_source_banks.push_back(b.name);
          cout << "adding field for source bank: " << b.name << endl;
        }
      }

      ub_field.push_back({"d", c->BitIn()->Arr(16)->Arr(num_select_vars)});

      string distrib = outpt + "_select";
      CoreIR::RecordType* utp = c->Record(ub_field);
      auto bcm = ns->newModuleDecl(distrib, utp);
      auto bdef = bcm->newModuleDef();

      vector<string> possible_ports;
      for (auto pt : buf.get_in_ports()) {
        if (buf.has_bank_between(pt, outpt)) {
          possible_ports.push_back(pt);
        }
      }

      cout << "possible ports = " << possible_ports.size() << endl;
      assert(possible_ports.size() == 1 || possible_ports.size() == 2);

      //for (auto inpt : possible_ports) {
        //auto b = buf.get_bank_between(inpt, outpt);
        //// TODO: Add real selection logic
        //bdef->connect(bdef->sel("self")->sel(b.name), bdef->sel("self.out"));
        //break;
      //}

      if (possible_ports.size() == 1) {
      //if (true) {
        //possible_ports.size() == 1) {
        cout << "only one possible port: " << possible_ports.at(0);
        for (auto inpt : possible_ports) {
          auto b = buf.get_bank_between(inpt, outpt);
          bdef->connect(bdef->sel("self")->sel(b.name), bdef->sel("self.out"));
          break;
        }
      } else {
        assert(possible_ports.size() == 2);
        string pt0 = possible_ports.at(0);
        string b0_name = buf.bank_between(pt0, outpt);
        string pt1 = possible_ports.at(1);
        string b1_name = buf.bank_between(pt1, outpt);
        cout << "creating coreir for set: " << str(map_find(pt1, in_ports_to_conditions)) << endl;
        CoreIR::Module* in_set_mod = coreir_for_set(c, map_find(pt1, in_ports_to_conditions));
        auto in_set = bdef->addInstance("set_select", in_set_mod);
        bdef->connect(in_set->sel("d"), bdef->sel("self.d"));
        auto mux = cmux(bdef, width,
            bdef->sel("self.out"),
            delaybit(bdef,
              in_set->sel("valid")),
            //in_set->sel("valid"),
            //bdef->sel("self")->sel(b1_name),
            //bdef->sel("self")->sel(b0_name));
            bdef->sel("self")->sel(b0_name),
            bdef->sel("self")->sel(b1_name));
      }

      bcm->setDef(bdef);
      return bcm;
  }

  CoreIR::Instance* add_port_controller(CoreIR::ModuleDef* def, const std::string& inpt, UBuffer& buf) {
    cout << "Buffer..." << endl;
    cout << buf << endl;

    auto c = def->getContext();

    auto sched = buf.schedule.at(inpt);
    cout << "sched = " << str(sched) << endl;
    auto sms = get_maps(sched);
    assert(sms.size() == 1);

    auto svec = isl_pw_multi_aff_from_map(sms.at(0));

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
    return def->addInstance(controller_name(inpt), aff_c);
  }

  CoreIR::Wireable* control_vars(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
    //return def->sel(controller_name(reader))->sel("d");
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
    //return def->sel(controller_name(reader))->sel("valid");
  }

  CoreIR::Module* coreir_broadcast(CoreIR::Context* c, const std::string& inpt, UBuffer& buf) {
    int width = buf.port_widths;
    CoreIR::Namespace* ns = c->getNamespace("global");

    vector<pair<string, CoreIR::Type*> >
      ub_field{
        {"in", c->BitIn()->Arr(width)},
          {"en", c->BitIn()},
          {"valid", c->Bit()}};
    for (auto b : buf.get_banks()) {
      if (elem(inpt, buf.get_bank_inputs(b.name))) {
        ub_field.push_back({b.name, c->Bit()->Arr(width)});
      }
    }

    string distrib = inpt + "_broadcast";
    CoreIR::RecordType* utp = c->Record(ub_field);
    auto bcm = ns->newModuleDecl(distrib, utp);
    auto bdef = bcm->newModuleDef();
    //auto in_sel = delay(bdef, bdef->sel("self.in"), width);
    //auto in_en = delaybit(bdef, bdef->sel("self.en"));

    auto in_sel = bdef->sel("self.in");
    auto in_en = bdef->sel("self.en");
    for (auto b : buf.get_banks()) {
      if (elem(inpt, buf.get_bank_inputs(b.name))) {
        //bdef->connect(bdef->sel("self")->sel(b.name), bdef->sel("self.in"));
        bdef->connect(bdef->sel("self")->sel(b.name), in_sel);
      }
    }

    //bdef->connect("self.en", "self.valid");
    bdef->connect(bdef->sel("self.valid"), in_en);

    bcm->setDef(bdef);
    return bcm;
  }

  void generate_synthesizable_functional_model(CodegenOptions& options, UBuffer& buf, CoreIR::ModuleDef* def) {
    int width = buf.port_widths;

    auto c = def->getContext();

    auto ns = c->getNamespace("global");

    for (auto bank : buf.get_banks()) {
      int capacity = int_upper_bound(card(bank.rddom));
      int addr_width = minihls::clog2(capacity);
      auto bnk = def->addInstance(
          bank.name,
          ram_module(c, width, capacity));

      {
        auto bank_readers = buf.get_bank_outputs(bank.name);
        assert(bank_readers.size() == 1);
        auto reader = pick(bank_readers);
        auto acc_map = to_map(buf.access_map.at(reader));
        cout << "acc map = " << str(acc_map) << endl;
        auto reduce_map = linear_address_map(to_set(bank.rddom));
        cout << "reduce map = " << str(reduce_map) << endl;
        auto addr_expr = dot(acc_map, reduce_map);
        cout << "composition = " << str(addr_expr) << endl;
        auto addr_expr_aff = get_aff(addr_expr);

        auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
        auto agen = def->addInstance(read_addrgen_name(bank.name), aff_gen_mod);
        
        def->connect(agen->sel("out"), bnk->sel("raddr"));
        def->connect(agen->sel("d"),
            control_vars(def, reader, buf));
            //def->sel(controller_name(reader))->sel("d"));
        def->connect(bnk->sel("ren"),
            control_en(def, reader, buf));
            //def->sel(controller_name(reader))->sel("valid"));
      }

      {
        auto bank_writers = buf.get_bank_inputs(bank.name);
        assert(bank_writers.size() == 1);
        auto writer = pick(bank_writers);
        auto acc_map = to_map(buf.access_map.at(writer));
        cout << "acc map = " << str(acc_map) << endl;
        auto reduce_map = linear_address_map(to_set(bank.rddom));
        cout << "reduce map = " << str(reduce_map) << endl;
        auto addr_expr = dot(acc_map, reduce_map);
        cout << "composition = " << str(addr_expr) << endl;
        auto addr_expr_aff = get_aff(addr_expr);

        auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
        auto agen = def->addInstance(write_addrgen_name(bank.name), aff_gen_mod);
        
        def->connect(agen->sel("out"), bnk->sel("waddr"));
        def->connect(agen->sel("d"),
            control_vars(def, writer, buf));
            //def->sel(controller_name(writer))->sel("d"));
      }
    }


    //for (auto inpt : buf.get_out_ports()) {
      ////auto out_ctrl = def->sel(controller_name(inpt))->sel("valid");
      //auto out_ctrl = control_en(def, inpt, buf);
      ////def->sel(controller_name(inpt))->sel("valid");
      //def->connect(def->sel("self")->sel(buf.container_bundle(inpt) + "_valid"),
          //out_ctrl);
          ////out_ctrl->sel("valid"));
    //}

    for (auto inpt : buf.get_in_ports()) {
      auto bcm = coreir_broadcast(c, inpt, buf);
      auto bc = def->addInstance(inpt + "_broadcast", bcm);
      for (auto b : buf.get_banks()) {
        if (elem(inpt, buf.get_bank_inputs(b.name))) {
          def->connect(bc->sel(b.name), def->sel(b.name)->sel("wdata"));
          def->connect(bc->sel("valid"), def->sel(b.name)->sel("wen"));
        }
      }
      def->connect(bc->sel("in"), def->sel("self")->sel(buf.container_bundle(inpt))->sel(buf.bundle_offset(inpt)));
      def->connect(bc->sel("en"),
          control_en(def, inpt, buf));
          //def->sel(controller_name(inpt))->sel("valid"));
    }

    for (auto outpt : buf.get_out_ports()) {
      auto bcm = generate_coreir_select(options, c, outpt, buf);
      auto bc = def->addInstance(outpt + "_select", bcm);
      for (auto b : buf.get_banks()) {
        if (elem(outpt, buf.get_bank_outputs(b.name))) {
          def->connect(bc->sel(b.name), def->sel(b.name)->sel("rdata"));
        }
      }
      def->connect(
          control_vars(def, outpt, buf),
          //def->sel(controller_name(outpt))->sel("d"),
          bc->sel("d"));
      def->connect(bc->sel("out"), def->sel("self")->sel(buf.container_bundle(outpt))->sel(buf.bundle_offset(outpt)));
    }
  }

  //generate coreir instance for single ubuffer
  //return the coreir module with port bundle and enable/valid interface
  CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf) {
    CoreIRLoadLibrary_commonlib(context);
    CoreIRLoadLibrary_cwlib(context);
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
        ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));

        //ub_field.push_back(make_pair(name + "_en", context->BitIn()));
        ub_field.push_back(make_pair(name, context->BitIn()->Arr(pt_width)->Arr(bd_width)));
      } else {
        ub_field.push_back(make_pair(name + "_ren", context->BitIn()));
        ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));

        //ub_field.push_back(make_pair(name + "_valid", context->Bit()));
        ub_field.push_back(make_pair(name, context->Bit()->Arr(pt_width)->Arr(bd_width)));
      }
    }

    CoreIR::RecordType* utp = context->Record(ub_field);
    auto ub = ns->newModuleDecl(buf.name + "_ub", utp);
    auto def = ub->newModuleDef();

    if (true) {
      generate_synthesizable_functional_model(options, buf, def);
    } else {
      buf.generate_coreir(options, def);
    }

    ub->setDef(def);
    return ub;
  }

#endif

  void generate_code_prefix(CodegenOptions& options,
      std::ostream& out,
      UBuffer& buf) {

    //banking and merge pass
    buf.generate_banks_and_merge(options);

    out << "#include \"hw_classes.h\"" << endl << endl;
    for (auto b : buf.get_banks()) {
      generate_bank(options, out, b);
    }

    out << "struct " << buf.name << "_cache {" << endl;
    out << tab(1) << "// # of banks: " << buf.get_banks().size() << endl;
    for (auto b : buf.get_banks()) {
      out << tab(1)
        << b.name << "_cache "
        << b.name
        << ";" << endl;
    }

    out << "};" << endl << endl;

    out << endl << endl;

  }

  bool is_optimizable_constant_dd(const string& inpt, const string& outpt, UBuffer& buf) {
    auto out_domain = buf.domain.at(outpt);
    auto qpd = compute_dd(buf, outpt, inpt);
    auto pieces = get_pieces(qpd);
    uset* pieces_dom = isl_union_set_read_from_str(ctx(qpd), "{}");
    for (auto p : pieces) {
      auto pp = isl_pw_qpolynomial_intersect_domain(isl_pw_qpolynomial_from_qpolynomial(cpy(p.second)), cpy(p.first));
      pieces_dom = unn(pieces_dom, to_uset(p.first));
    }

    bool pieces_are_complete =
      subset(to_uset(out_domain), (pieces_dom));
    int ub = int_upper_bound(qpd);
    int lb = int_lower_bound(qpd);

    if (pieces_are_complete) {
      return ub == lb;
    }

    return false;
  }

  void generate_select_decl(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
    isl_space* s = get_space(buf.domain.at(outpt));
    auto dim_decls = space_var_decls(s);
    dim_decls.push_back("int dynamic_address");

    out << "inline " + buf.port_type_string() + " " + outpt + "_select(";
    size_t nargs = 0;
    out << buf.name << "_cache& " << buf.name << ", ";
    nargs++;
    out << sep_list(dim_decls, "", "", ", ");

    out << ") {" << endl;
    ignore_inter_deps(out, buf.name);
  }

  void select_debug_assertions(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
    out << tab(1) << "return 0;" << endl;
    return;
    // ------------ Error printouts only
    vector<string> offset_printouts;
    isl_space* s = get_space(buf.domain.at(outpt));
    auto vars = space_var_args(s);

    assert(isl_space_is_set(s));
    for (int i = 0; i < num_dims(s); i++) {
      offset_printouts.push_back("\" " + vars.at(i) + " = \" << " + vars.at(i) + " ");
    }

    open_debug_scope(out);
    out << "\tcout << \"Error: Unsupported offsets: \" << " << sep_list(offset_printouts, "", "", " << ") << " << endl;" << endl;
    out << "\tassert(false);\n\treturn 0;\n";
    close_debug_scope(out);
  }

  string delay_string(CodegenOptions& options,
      ostream& out,
      const string& inpt,
      const string& outpt,
      UBuffer& buf) {

    string bank = buf.bank_between(inpt, outpt);

    if (elem(outpt, buf.dynamic_ports)) {
      return buf.name + "." + bank + ".read(dynamic_address)";
    }

    auto sb = buf.get_bank(bank);
    string value_str = "";

    if (sb.tp == INNER_BANK_OFFSET_LINEAR) {
      string linear_addr = buf.generate_linearize_ram_addr(outpt, sb);
      value_str = bank + ".read(/*ram type address*/ "+ linear_addr + ")";
    } else if (sb.tp == INNER_BANK_OFFSET_STACK) {
      auto out_domain = buf.domain.at(outpt);

      auto qpd = compute_dd(buf, outpt, inpt);
      auto pieces = get_pieces(qpd);

      string dx = to_string(int_upper_bound(qpd));

      out << tab(1) << "// Read schedule : " << str(buf.schedule.at(outpt)) << endl;
      out << tab(1) << "// Write schedule: " << str(buf.schedule.at(inpt)) << endl;

      string delay_expr = evaluate_dd(buf, outpt, inpt);
      bool opt_const = is_optimizable_constant_dd(inpt, outpt, buf);
      if (options.all_rams || buf.get_bank(bank).num_readers == 1) {
        value_str = bank + ".peek(/* one reader or all rams */ " + delay_expr + ")";
      } else if (opt_const) {
        if (!options.all_rams && is_number(dx)) {
          assert(safe_stoi(dx) >= 0);
          value_str = bank + ".peek_" + dx + "()";
        } else {
          value_str = bank + ".peek" + "( /* is opt const */ " + delay_expr + ")";
        }
      } else if (pieces.size() == 0 && !options.all_rams) {
        value_str = bank + ".peek_0()";
      } else if (pieces.size() == 1 &&
          isl_set_is_subset(cpy(out_domain), cpy(pieces[0].first))) {
        string dx = codegen_c(pieces[0].second);
        if (!options.all_rams && is_number(dx)) {
          assert(safe_stoi(dx) >= 0);
          value_str = bank + ".peek_" + dx + "()";
        } else {
          value_str = bank + ".peek" + "(/* is one piece but not a number */" + dx + ")";
        }
      } else {
        value_str = bank + ".peek" + "(/* Needs general delay string */ " + delay_expr + ")";
      }
    } else {
      assert(sb.tp == INNER_BANK_OFFSET_MULTILINEAR);
      string linear_addr = generate_multilinear_ram_addr(outpt, sb, buf);
      value_str = bank + ".read(" + linear_addr + ")";
    }

    return buf.name + "." + value_str;
  }

  void generate_broadcast(CodegenOptions& options, std::ostream& out, const string& inpt, UBuffer& buf) {
    vector<string> args;
    args.push_back(buf.port_type_string(inpt) + "& " + inpt);
    args.push_back(buf.name + "_cache& " + buf.name);
    concat(args, dimension_var_decls(inpt, buf));
    args.push_back("int dynamic_address");
    string var_args = comma_list(dimension_var_args(inpt, buf));

    out << "inline void " << inpt << "_write(";
    out << comma_list(args) << ") {" << endl;

    if (buf.banking.partition != "cyclic") {
      //Different ram type, different address
      for (auto sb : buf.receiver_banks(inpt)) {
        if (sb.tp == INNER_BANK_OFFSET_STACK) {
          out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
        } else if (sb.tp == INNER_BANK_OFFSET_LINEAR) {
          string linear_addr = buf.generate_linearize_ram_addr(inpt, sb);
          cout <<"Input port:" << inpt << ", Get ram string: " << linear_addr << endl;
          if (!elem(inpt, buf.dynamic_ports)) {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << linear_addr << ");" << endl;
          } else {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << "dynamic_address" << ");" << endl;
          }
        } else {
          assert(sb.tp == INNER_BANK_OFFSET_MULTILINEAR);
          string linear_addr = generate_multilinear_ram_addr(inpt, sb, buf);
          out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt << ", " << linear_addr << ");" << endl;

        }
      }
    } else {
      auto bank_function = bank_map(buf.ctx, buf.name, buf.banking);
      auto acc_umap = map_find(inpt, buf.access_map);
      auto acc_map = to_map(acc_umap);
      auto writes = range(acc_map);
      cout << "writes = " << str(writes) << endl;
      auto lt = its(its_range(isl_map_lex_lt(get_space(writes)), writes), writes);
      cout << "lt     = " << str(lt) << endl;
      auto next_write = simplify(lexmin(lt));
      cout << "next w = " << str(next_write) << endl;
      cout << "diff   = " << str(isl_map_deltas_map(cpy(next_write))) << endl;
      auto banks_to_next_reads = dot(inv(bank_function), next_write);
      cout << "banks to next reads = " << str(banks_to_next_reads) << endl;
      auto next_bank = dot(dot(inv(bank_function), next_write), bank_function);
      cout << "next bank = " << str(next_bank) << endl;
      cout << "next bcar = " << str(card(next_bank)) << endl;
      auto bank_delta = isl_map_deltas_map(cpy(next_bank));
      cout << "nb delta  = " << str(bank_delta) << endl;
      //assert(false);

      //auto next = lexmin(its(isl_map_lex_lt(get_space(writes)), writes));

      //out << tab(1) << "// Next         : " << str(next) << endl;
      //out << tab(1) << "// Next bank    : " << str(next_bank) << endl;
      //out << tab(1) << "// Bank function: " << str(bank_function) << endl;
      //out << tab(1) << "// Bank func aff: " << str(get_aff(bank_function)) << endl;
      //out << tab(1) << "// Access func  : " << str(acc_map) << endl;
      //isl_union_map* target = dot(acc_map, to_umap(bank_function));
      //out << tab(1) << "// Bank mapping : " << str(target) << endl;
      //out << tab(1) << "// Bank aff     : " << str(get_aff(get_maps(acc_map).at(0))) << endl;

      // TODO: Replace with actual bank computation
      for (auto sb : buf.get_banks()) {
        if (sb.tp == INNER_BANK_OFFSET_STACK) {
          out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
        } else if (sb.tp == INNER_BANK_OFFSET_LINEAR) {
          //string linear_addr = buf.generate_linearize_ram_addr(inpt);
          string linear_addr = buf.generate_linearize_ram_addr(inpt, sb);
          cout <<"Input port:" << inpt << ", Get ram string: " << linear_addr << endl;
          if (!elem(inpt, buf.dynamic_ports)) {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << linear_addr << ");" << endl;
          } else {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << "dynamic_address" << ");" << endl;
          }
        } else {
          assert(false);
        }
      }
    }

    out << "}" << endl << endl;

  }

  void generate_select(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
    generate_select_decl(options, out, outpt, buf);

    out << tab(1) << "// " << outpt << " read pattern: " << str(buf.access_map.at(outpt)) << endl;

    if (buf.banking.partition == "register_file") {
      assert(buf.bank_list.size() == 1);
      // Port is irrelevant here
      // TODO: Extract inner bank offset
      string inpt = pick(buf.get_in_ports());
      string peeked_val = delay_string(options, out, inpt, outpt, buf);
      out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
      out << tab(1) << "return value_" << inpt << ";" << endl;
    } else if (buf.banking.partition != "cyclic") {
      cout << "partition = " << buf.banking.partition << endl;
      vector<string> possible_ports;
      for (auto pt : buf.get_in_ports()) {
        if (buf.has_bank_between(pt, outpt)) {
          possible_ports.push_back(pt);
        }
      }

      map<string, string> in_ports_to_conditions;
      map<string, isl_set*> input_ports_to_condition_sets = input_ports_to_conditions(outpt, buf);
      for (auto s : input_ports_to_condition_sets) {
        in_ports_to_conditions[s.first] = codegen_c(s.second);
      }

      if (in_ports_to_conditions.size() == 1) {
        string inpt = pick(in_ports_to_conditions).first;
        string peeked_val = delay_string(options, out, inpt, outpt, buf);

        out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
        out << tab(1) << "return value_" << inpt << ";" << endl;
      } else {
        for (auto pc : in_ports_to_conditions) {
          string port = pc.first;
          out << tab(1) << "if (" << map_find(port, in_ports_to_conditions) << ") {" << endl;
          string peeked_val = delay_string(options, out, port, outpt, buf);

          out << tab(2) << "auto value_" << port << " = " << peeked_val << ";" << endl;
          out << tab(2) << "return value_" << port << ";" << endl;
          out << tab(1) << "}" << endl << endl;
          out << tab(1) << endl;
        }
      }

    } else {
      // TODO: Fix this dummy implementation
      string bank = pick(buf.get_banks()).name;
      out << tab(1) << "auto value " << " = " << buf.name << "." << bank << ".RAM[0];" << endl;
      out << tab(1) << "return value;" << endl;
    }
    select_debug_assertions(options, out, outpt, buf);
    out << "}" << endl << endl;
  }

  void generate_bundles(CodegenOptions& options, std::ostream& out, UBuffer& buf) {

    out << "// # of bundles = " << buf.port_bundles.size() << endl;

    for (auto b : buf.port_bundles) {
      //cout << "\t generate for bundle: " << b.first << endl;
      out << "// " << b.first << endl;
      for (auto pt : b.second) {
        out << "//\t" << pt << endl;
      }

      string rep = pick(b.second);
      isl_space* s = get_space(buf.domain.at(rep));
      assert(isl_space_is_set(s));
      vector<string> dim_decls;
      vector<string> dim_args;
      for (int i = 0; i < num_dims(s); i++) {
        if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
          string dn = "d" + to_string(i);
          auto new_id = id(buf.ctx, dn);
          assert(new_id != nullptr);
          s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
        }
        dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
        dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
      dim_decls.push_back("int dynamic_address");
      dim_args.push_back("dynamic_address");

      if (buf.is_out_pt(rep)) {
        out << "inline " << buf.bundle_type_string(b.first) << " " <<  buf.name << "_" << b.first << "_bundle_read(";
        vector<string> all_decls;
        vector<string> all_args;

        all_decls.push_back(buf.name + "_cache& " + buf.name);
        concat(all_decls, dim_decls);

        all_args.push_back(buf.name);
        concat(all_args, dim_args);

        //auto outpt = *begin(b.second);

        out << sep_list(all_decls, "", "", ", ") << ") {" << endl;
        out << tab(1) << "// # of ports in bundle: " << map_find(b.first, buf.port_bundles).size() << endl;
        for (auto pt : map_find(b.first, buf.port_bundles)) {
          out << tab(2) << "// " << pt << endl;
        }
        out << endl;

        string arg_string = sep_list(all_args, "", "", ", ");
        out << "\t" << buf.bundle_type_string(b.first) + " result;" << endl;
        int offset = 0;
        for (auto p : b.second) {
          out << "\t" + buf.port_type_string() + " " << p << "_res = " << p << "_select(" << arg_string << ");" << endl;
          out << "\tset_at<" << offset << ", " << buf.port_bundle_width(b.first) << ">(result, " << p << "_res" << ");" << endl;
          offset += buf.port_width(p);
        }
        out << "\treturn result;" << endl;
      } else {
        out << "inline void " + buf.name + "_" + b.first + "_bundle_write(";

        vector<string> all_args;

        if (options.internal) {
          all_args.push_back(buf.bundle_type_string(b.first) + "& " + b.first);
        } else {
          all_args.push_back("InputStream<" + buf.bundle_type_string(b.first)  + " >& " + b.first);
        }

        all_args.push_back(buf.name + "_cache& " + buf.name);
        concat(all_args, dim_decls);
        out << sep_list(all_args, "", "", ", ") << ") {" << endl;

        int offset = 0;
        string src = b.first;
        if (!options.internal) {
          out << "\t" << buf.bundle_type_string(b.first) <<
            " data_" << b.first << " = " << b.first << ".read();" << endl;
          src = "data_" + b.first;
        }
        for (auto p : b.second) {
          out << "\t" + buf.port_type_string() + " " << p << "_res = "
            << src << ".extract<" << offset << ", " << (offset + buf.port_width(p) - 1)
            << ">();" << endl;
          vector<string> args{p + "_res", buf.name};
          concat(args, dim_args);
          out << "\t" << p << "_write(" << comma_list(args) << ");" << endl;

          offset += buf.port_width(p);
        }


      }
      out << "}" << endl << endl;
    }
  }

  void generate_hls_code(CodegenOptions& options, std::ostream& out, UBuffer& buf) {
    generate_code_prefix(options, out, buf);

    for (auto inpt : buf.get_in_ports()) {
      generate_broadcast(options, out, inpt, buf);
    }

    for (auto outpt : buf.get_out_ports()) {
      generate_select(options, out, outpt, buf);
    }

    generate_bundles(options, out, buf);
  }

  void generate_hls_code_internal(std::ostream& out, UBuffer& buf) {
    CodegenOptions options;
    options.internal = true;

    generate_hls_code(options, out, buf);
  }

  void generate_hls_code(std::ostream& out, UBuffer& buf) {
    CodegenOptions options;
    options.internal = false;

    generate_hls_code(options, out, buf);
  }

  void generate_header(const UBuffer& buf) {
    //cout << "Header file generation..." << endl;
    ofstream of(buf.name + ".h");
    of << "#pragma once\n\n" << endl;
    of << "#include \"hw_classes.h\"" << endl << endl;
    of << "void " << buf.name << "(";
    int nargs = 0;
    for (auto pt : buf.port_bundles) {
      of << buf.bundle_stream(pt.first);
      if (nargs < buf.port_bundles.size() - 1) {
        of << ", ";
      }
      nargs++;
    }
    of << ");" << endl;

  }

  void generate_hls_code(UBuffer& buf) {

    if (buf.port_bundles.size() == 0) {
      for (auto pt : buf.get_out_ports()) {
        buf.port_bundles[pt] = {pt};
      }
      for (auto pt : buf.get_in_ports()) {
        buf.port_bundles[pt] = {pt};
      }
    }

    //cout << "Code generation..." << endl;
    ofstream os(buf.name + ".cpp");
    std::ostream& out = os;

    generate_hls_code(os, buf);

    // Generate driver function for this buffer.
    isl_union_map* res = its(buf.global_schedule(), buf.global_domain());

    string code_string = codegen_c(res);

    code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
    string delay_list =
      buf.port_bundles.at(pick(buf.get_in_bundles())).at(0) + "_delay";
    //buf.name;

    for (auto b : buf.port_bundles) {
      if (buf.is_out_pt(*(begin(b.second)))) {
      } else {
        regex re(b.first + "(.*);");
        string inpt = pick(b.second);
        code_string = regex_replace(code_string, re, buf.name + "_" + b.first + "_bundle_write(" + b.first + ", " + delay_list + ");");
      }
    }
    for (auto b : buf.port_bundles) {
      if (buf.is_out_pt(*(begin(b.second)))) {
        regex re0(b.first + "\\((.*)\\);");
        code_string = regex_replace(code_string, re0, b.first + ".write(" + buf.name + "_" + b.first + "_bundle_read(" + delay_list + ", $1" + "));");
      } else {
      }
    }

    out << "void " << buf.name << "(";
    size_t nargs = 0;
    for (auto pt : buf.port_bundles) {
      out << buf.bundle_stream(pt.first);
      if (nargs < buf.port_bundles.size() - 1) {
        out << ", ";
      }
      nargs++;
    }
    out << ") {" << endl;
    for (auto inpt : buf.get_in_ports()) {
      out << "\t" + inpt + "_cache " + inpt + "_delay;\n\n";
    }
    out << code_string << endl;
    out << "}" << endl;


    generate_header(buf);
    generate_vivado_tcl(buf);
  }

  umap* UBuffer::get_lexmax_events(const std::string& outpt) const {
    umap* src_map = nullptr;
    cout << "Buffer = " << name << endl;
    assert(get_in_ports().size() > 0);
    for (auto inpt : get_in_ports()) {
      auto beforeAcc = lex_gt(schedule.at(outpt), schedule.at(inpt));
      if (src_map == nullptr) {
        auto outmap = access_map.at(outpt);
        auto inmap = access_map.at(inpt);
        src_map =
          its(dot(outmap,
                inv(inmap)), beforeAcc);
      } else {
        src_map =
          unn(src_map, ((its(dot(access_map.at(outpt), inv(access_map.at(inpt))), beforeAcc))));
      }
    }
    assert(src_map != nullptr);

    //cout << "src map done: " << str(src_map) << endl;
    auto sched = global_schedule();
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    auto time_to_event = inv(sched);

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);

    //cout << "Done" << outpt << endl;
    assert(lex_max_events != nullptr);
    return lex_max_events;

    //umap* writes = isl_union_map_read_from_str(ctx, "{}");

    //cout << "Buffer = " << name << endl;
    //assert(get_in_ports().size() > 0);
    //for (auto inpt : get_in_ports()) {
      //writes = unn(writes, access_map.at(inpt));

      ////auto beforeAcc = lex_gt(schedule.at(outpt), schedule.at(inpt));
      ////if (src_map == nullptr) {
        ////auto outmap = access_map.at(outpt);
        ////auto inmap = access_map.at(inpt);
        ////src_map =
          ////its(dot(outmap,
                ////inv(inmap)), beforeAcc);
      ////} else {
        ////src_map =
          ////unn(src_map, ((its(dot(access_map.at(outpt), inv(access_map.at(inpt))), beforeAcc))));
      ////}
    //}

    ////auto reads = access_map.at(outpt);
    ////auto sched = global_schedule();
    ////auto before = lex_lt(sched, sched);

    ////auto raw = its(before, dot(writes, inv(reads)));

    ////return lexmax(inv(raw));

    ////assert(src_map != nullptr);

    //////cout << "src map done: " << str(src_map) << endl;

    ////src_map = its(src_map, after);
    ////src_map = lexmax(src_map);

    ////auto time_to_event = inv(sched);

    ////auto lex_max_events =
      ////dot(lexmax(dot(src_map, sched)), time_to_event);

    //////cout << "Done" << outpt << endl;
    ////assert(lex_max_events != nullptr);
    ////return lex_max_events;

    ////umap* src_map = nullptr;
    ////cout << "Buffer = " << name << endl;
    ////assert(get_in_ports().size() > 0);
    ////for (auto inpt : get_in_ports()) {
      ////auto beforeAcc = lex_gt(schedule.at(outpt), schedule.at(inpt));
      ////if (src_map == nullptr) {
        ////auto outmap = access_map.at(outpt);
        ////auto inmap = access_map.at(inpt);
        ////src_map =
          ////its(dot(outmap,
                ////inv(inmap)), beforeAcc);
      ////} else {
        ////src_map =
          ////unn(src_map, ((its(dot(access_map.at(outpt), inv(access_map.at(inpt))), beforeAcc))));
      ////}
    ////}
    ////assert(src_map != nullptr);

    //////cout << "src map done: " << str(src_map) << endl;
    ////auto sched = global_schedule();
    ////auto after = lex_gt(sched, sched);

    ////src_map = its(src_map, after);
    ////src_map = lexmax(src_map);

    ////auto time_to_event = inv(sched);

    ////auto lex_max_events =
      ////dot(lexmax(dot(src_map, sched)), time_to_event);

    //////cout << "Done" << outpt << endl;
    ////assert(lex_max_events != nullptr);
    ////return lex_max_events;
  }

  umap* UBuffer::get_lexmax_events(const std::string& inpt, const std::string& outpt) {
    umap* src_map = nullptr;
    auto beforeAcc = lex_gt(schedule.at(outpt), schedule.at(inpt));
    auto outmap = access_map.at(outpt);
    auto inmap = access_map.at(inpt);
    inmap = coalesce(unn(inmap, outmap));
    //cout << "before access: " << str(beforeAcc) << endl;
    //cout << "Coalesce map: " << str(inmap) << endl;
    src_map = its(dot(outmap, inv(inmap)), beforeAcc);
    assert(src_map != nullptr);

    //cout << "src map done: " << str(src_map) << endl;
    auto sched = unn(schedule.at(inpt), schedule.at(outpt));
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    //cout << "final src map: " << str(src_map) << endl;

    auto time_to_event = inv(sched);

    //cout << "time 2 event: " << str(time_to_event) << endl;
    //cout << "lexmax :" << str(lexmax(dot(src_map, sched))) << endl;

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);

    //cout << "Done" << outpt << endl;
    assert(lex_max_events != nullptr);
    return lex_max_events;
  }

  umap* UBuffer::get_lexmax_events(
      umap* in_sched, umap* out_sched,
      const string& inpt, const string& outpt) {

    umap* src_map = nullptr;
    //auto in_sched = schedule.at(inpt);
    //auto out_sched = schedule.at(outpt);
    auto beforeAcc = lex_gt(out_sched, in_sched);
    auto outmap = access_map.at(outpt);
    auto inmap = access_map.at(inpt);
    inmap = coalesce(unn(inmap, outmap));
    //cout << "before access: " << str(beforeAcc) << endl;
    //cout << "Coalesce map: " << str(inmap) << endl;
    src_map = its(dot(outmap, inv(inmap)), beforeAcc);
    assert(src_map != nullptr);

    //cout << "src map done: " << str(src_map) << endl;
    auto sched = unn(in_sched, out_sched);
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    //cout << "final src map: " << str(src_map) << endl;

    auto time_to_event = inv(sched);

    //cout << "time 2 event: " << str(time_to_event) << endl;
    //cout << "lexmax :" << str(lexmax(dot(src_map, sched))) << endl;

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);

    //cout << "Done" << outpt << endl;
    assert(lex_max_events != nullptr);
    return lex_max_events;
  }

  isl_union_pw_qpolynomial* UBuffer::compute_dd(const std::string& read_port, const std::string& write_port) {

    isl_union_map* sched = schedule.at(write_port);
    assert(sched != nullptr);

    auto WritesAfterWrite = lex_lt(sched, sched);

    assert(WritesAfterWrite != nullptr);

    umap* rdsched = schedule.at(read_port);
    umap* wrsched = schedule.at(write_port);
    bool out2out = !isIn.at(write_port);
    if (out2out) {
      rdsched = pad_one_more_dim_to_sched_map_innermost(rdsched, 1);
      wrsched = pad_one_more_dim_to_sched_map_innermost(wrsched, 0);
    }
    cout << "rewrite rd sched:" << str(rdsched) << endl;
    cout << "rewrite wr sched:" << str(wrsched) << endl;
    auto WritesBeforeRead =
      lex_gt(rdsched, wrsched);
    //cout << "\trdsched: " << str(rdsched) << "\n wrsched: " << str(wrsched) << "\n wbr: " << str(WritesBeforeRead) << endl;

    //TODO: test these new method
    auto WriteThatProducesReadData = get_lexmax_events(wrsched, rdsched, write_port, read_port);
    //cout << "\twpr: " << str(WriteThatProducesReadData) << "\nwaw:" << str(WritesAfterWrite) << endl;

    auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

    //cout << "\twap: " << str(WritesAfterProduction) << endl;
    auto WritesBtwn = its_range((its(WritesAfterProduction, WritesBeforeRead)),
        to_uset(domain.at(write_port)));
    //cout << "\tits:" << str(its(WritesAfterProduction, WritesBeforeRead)) << endl;
    //cout << "\tWritesBtwn: " << str(WritesBtwn) << endl;

    auto c = card(WritesBtwn);
    //cout << "got card" << endl;
    return c;
  }

  int UBuffer::compute_dd_bound(const std::string& read_port, const std::string& write_port, bool is_max) {
    auto c = compute_dd(read_port, write_port);
    //cout << "DD: " << str(c) << endl;
    int tight;
    int* b = &tight;
    if (is_max){
      auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
      return bnd_int(bound);
    }
    else {
      auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
      return bnd_int(bound);
    }
  }

  bank UBuffer::compute_bank_info(
      std::set<string> inpt_set,
      std::set<string> outpt_set) {

    //we just need connection information
    int maxdelay = 0;
    vector<int> read_delays{0};
    for (auto inpt : inpt_set) {
      for (auto outpt: outpt_set) {
        int delay = 0;
        if (isIn.at(inpt)) {
          delay = compute_dd_bound(outpt, inpt, true);
        } else {
          //TODO: possible bug
          string original_inpt = pick(get_in_ports());
          delay = compute_dd_bound(outpt, original_inpt, true) -
            compute_dd_bound(inpt, original_inpt, true);
        }
        read_delays.push_back(delay);
        maxdelay = std::max(maxdelay, delay);
      }
    }
    //cout << "compute max delay for super bank =  " << maxdelay << endl;

    int num_readers = outpt_set.size();

    string pt_type_string = port_type_string();
    string name = pick(inpt_set) + "_to_" + pick(outpt_set);

    string inpt_name = pick(inpt_set);
    auto rddom = isl_union_set_universe(range(access_map.at(inpt_name)));

    //initial the delay map
    map<string, int> delay_map = {};

    stack_bank bank{name, INNER_BANK_OFFSET_STACK, pt_type_string, read_delays, num_readers, maxdelay, rddom, delay_map};

    return bank;
  }

  bank UBuffer::compute_bank_info() {
    int maxdelay = -1;

    vector<int> read_delays;
    // NOTE: Just to ensure we dont force everything to be a RAM
    int num_readers = 0;

    string pt_type_string = port_type_string();
    string bank_name = name + "_all_inputs_to_all_outputs";

    cout << "getting rddom" << endl;
    isl_union_set* rddom = isl_union_set_read_from_str(ctx, "{}");
    for (auto inpt : get_in_ports()) {
      rddom = unn(rddom, range(access_map.at(inpt)));
    }
    for (auto inpt : get_out_ports()) {
      rddom = unn(rddom, range(access_map.at(inpt)));
    }
    cout << "rddom = " << str(rddom) << endl;

    map<string, int> delay_map;

    stack_bank bank{bank_name, INNER_BANK_OFFSET_LINEAR, pt_type_string, read_delays, num_readers, maxdelay, rddom, delay_map};

    return bank;
  }

  bank UBuffer::compute_bank_info(
      CodegenOptions& options,
      const std::string& inpt,
      const std::string& outpt) {

    if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_STACK) {

      int maxdelay = compute_dd_bound(outpt, inpt, true);
      vector<int> read_delays{0};

      // NOTE: Just to ensure we dont force everything to be a RAM
      int num_readers = 0;

      auto in_actions = domain.at(inpt);
      auto lex_max_events = get_lexmax_events(outpt);
      auto act_dom =
        ::domain(its_range(lex_max_events, to_uset(in_actions)));

      if (!isl_union_set_is_empty(act_dom)) {
        num_readers++;
        int qpd = compute_dd_bound(outpt, inpt, true);
        int lb = compute_dd_bound(outpt, inpt, false);

        for (int i = lb; i < qpd + 1; i++) {
          read_delays.push_back(i);
        }
      }

      auto rddom =
        unn(range(access_map.at(inpt)),
            range(access_map.at(outpt)));

      //initial the delay map
      map<string, int> delay_map = {{outpt, read_delays.back()}};

      string pt_type_string = port_type_string();
      string name = inpt + "_to_" + outpt;

      stack_bank bank{name,
        options.inner_bank_offset_mode,
        pt_type_string,
        read_delays,
        num_readers,
        maxdelay,
        rddom,
        delay_map};

      return bank;
    } else {
      cout << "linear offset" << endl;
      int maxdelay = -1;
      vector<int> read_delays;
      int num_readers = 0;

      auto rddom =
        unn(range(access_map.at(inpt)),
            range(access_map.at(outpt)));

      cout << "got rddom" << endl;
      //initial the delay map
      map<string, int> delay_map = {};

      string pt_type_string = port_type_string();
      string name = inpt + "_to_" + outpt;

      stack_bank bank{name,
        options.inner_bank_offset_mode,
        pt_type_string,
        read_delays,
        num_readers,
        maxdelay,
        rddom,
        delay_map};

      return bank;

    }
  }

  void UBuffer::merge_bank(CodegenOptions& options, string inpt, vector<stack_bank> mergeable) {
    if (!options.conditional_merge){
      stack_bank merged;
      merged.tp = INNER_BANK_OFFSET_STACK;
      //merged.layout = Box(mergeable.at(0).layout.dimension());
      merged.rddom = isl_union_set_read_from_str(ctx, "{}");
      merged.name =
        inpt + "_merged_banks_" + str(mergeable.size());
      merged.pt_type_string =
        mergeable.at(0).pt_type_string;
      merged.num_readers = mergeable.size();
      merged.maxdelay = -1;
      for (auto m : mergeable) {
        //cout << "merge: " << m.name << endl;
        //merged.layout = unn(merged.layout, m.layout);
        merged.rddom = unn(merged.rddom, m.rddom);
        if (m.maxdelay > merged.maxdelay) {
          merged.maxdelay = m.maxdelay;
        }
        for (auto mrd : m.read_delays) {
          merged.read_delays.push_back(mrd);
        }
      }
      merged.read_delays = sort_unique(merged.read_delays);

      cout << "# of banks = " << get_banks().size() << endl;
      for (auto to_replace : mergeable) {
        replace_bank(to_replace, merged);
      }
      cout << "# of banks after merge = " << get_banks().size() << endl;
      for (auto to_replace : mergeable) {
        assert(!has_bank(to_replace.name));
      }
      //assert(false);
    }
    else {
      //Add a condition to the merged offset
      //First sort the delay
      sort(mergeable.begin(), mergeable.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto merge_bank : mergeable) {
        //cout << merge_bank.name << " with delay : " << merge_bank.maxdelay << endl;
      }

      while(mergeable.size()) {
        //keep pop port to merged bank and replace origin bank
        stack_bank merged;
        merged.tp = INNER_BANK_OFFSET_STACK;
        //merged.layout = Box(mergeable.at(0).layout.dimension());
        merged.rddom = isl_union_set_read_from_str(ctx, "{}");
        merged.name =
          inpt + "_merged_banks_" + str(mergeable.size());
        merged.pt_type_string =
          mergeable.at(0).pt_type_string;
        merged.read_delays.push_back(0);

        vector<bank> replace_candidates;
        bank m = mergeable.back();
        merged.maxdelay = m.maxdelay;
        while (m.maxdelay - merged.maxdelay <= options.merge_threshold) {
          auto in2out = split_at(m.name, "_to_");
          //cout << "output port name: " <<  in2out.at(1) << endl;
          merged.delay_map[in2out.at(1)] = m.maxdelay;
          replace_candidates.push_back(m);
          //merged.layout = unn(merged.layout, m.layout);
          merged.rddom = unn(merged.rddom, m.rddom);
          merged.maxdelay = m.maxdelay;
          merged.read_delays.push_back(m.maxdelay);
          cout << m.maxdelay <<", " << merged.maxdelay << endl;

          //get the next data
          mergeable.pop_back();
          if (mergeable.size())
            m = mergeable.back();
          else
            break;
        }
        merged.num_readers = replace_candidates.size();
        merged.read_delays = sort_unique(merged.read_delays);

        for (auto to_replace : replace_candidates) {
          cout << to_replace.name << endl;
          replace_bank(to_replace, merged);
        }
        cout << "Create a new bank !"<< endl;
      }
    }
  }

  int UBuffer::logical_dimension() {
    assert(access_map.size() > 0);
    umap* m = pick(access_map).second;
    auto ms = get_maps(m);
    assert(ms.size() > 0);
    return num_out_dims(pick(ms));
  }

  void UBuffer::print_bank_info() {
    //find the lexmin of all out port
    for (auto itr: get_banks()) {
      cout << itr.name << endl;
      //string inpt = itr.first.first;
      //string outpt = itr.first.second;
      //cout << "\tpt: [" << outpt << "] -> pt:[" << inpt
        //<< "] has delay = " << itr.second.maxdelay << endl ;
    }
  }

  void UBuffer::generate_banks(CodegenOptions& options) {
    cout << "generating banks for " << name << endl;
    if (options.debug_options.expect_all_linebuffers) {
      assert(dynamic_ports.size() == 0);
    }

    banking_strategy strat = options.get_banking_strategy(name);
    banking = strat;
    if (dynamic_ports.size() > 0 ||
        banking.partition == "register_file") {

      bank bnk = compute_bank_info();
      for (auto inpt : get_in_ports()) {
        for (auto outpt : get_out_ports()) {
          add_bank_between(inpt, outpt, bnk);
        }
      }

    } else if (banking.partition == "cyclic") {
      int dim = logical_dimension();

      assert(dim == banking.cycle_factors.size());

      vector<string> dvs;
      vector<string> addrs;
      int num_banks = 1;
      for (int i = 0; i < dim; i++) {
        assert(banking.cycle_factors.at(i) > 0);
        dvs.push_back("a_" + str(i));
        addrs.push_back("a_" + str(i) + " % " + str(banking.cycle_factors.at(i)));
        num_banks *= banking.cycle_factors.at(i);
      }

      string bank_func =
        curlies(bracket_list(dvs) + " -> " + bracket_list(addrs));

      cout << "bank func = " << bank_func << endl;
      auto bank_map = isl_map_read_from_str(ctx, bank_func.c_str());
      assert(banking_scheme_is_legal(bank_map, *this));

      bank bnk = compute_bank_info();
      for (int i = 0; i < num_banks; i++) {
        bank cpy = bnk;
        cpy.name = "cyclic_bank_" + str(i);
        bank_list.push_back(cpy);
      }

    } else {


      // Use naive banking that reaches target throughput
      for (auto outpt : get_out_ports()) {
        cout << "Generating banks for " << outpt << endl;
        umap* reads_to_sources = get_lexmax_events(outpt);
        cout << tab(1) << "lexmax events: " << str(reads_to_sources) << endl;
        uset* producers_for_outpt = range(reads_to_sources);
        for (auto inpt : get_in_ports()) {
          auto write_ops =
            ::domain(access_map.at(inpt));
          auto read_ops =
            ::domain(access_map.at(outpt));
          auto ops_overlap = its(write_ops, producers_for_outpt);
          auto overlap =
            its(range(access_map.at(inpt)), range(access_map.at(outpt)));

          if (!empty(ops_overlap) && !empty(overlap)) {
            stack_bank bank = compute_bank_info(options, inpt, outpt);
            add_bank_between(inpt, outpt, bank);
          }
        }
      }
    }

    if (options.inner_bank_offset_mode !=
        INNER_BANK_OFFSET_STACK) {
      for (auto& b : bank_list) {
        b.tp = options.inner_bank_offset_mode;
      }
    }

    //if (options.inner_bank_offset_mode ==
        //INNER_BANK_OFFSET_LINEAR) {
      //for (auto& b : bank_list) {
        //b.tp = INNER_BANK_OFFSET_LINEAR;
      //}
    //}
    cout << tab(1) << "after banking there are " << bank_list.size() << " banks" << endl;
  }

  void UBuffer::generate_banks_and_merge(CodegenOptions& options) {
    generate_banks(options);

    if (banking.partition == "exhaustive") {
      for (auto inpt : get_in_ports()) {
        // try to turn the banks for this inpt into one big linebuffer
        vector<stack_bank> receivers = receiver_banks(inpt);
        vector<stack_bank> mergeable;
        for (auto bnk : receivers) {

          if (options.debug_options.expect_all_linebuffers) {
            assert(bnk.read_delays.size() == 2);
          }
          if (bnk.tp == INNER_BANK_OFFSET_STACK &&
              bnk.read_delays.size() == 2) {
            mergeable.push_back(bnk);
          }

        }

        if (mergeable.size() > 1) {
          merge_bank(options, inpt, mergeable);
        }
      }
    }
  }

  isl_map* UBuffer::merge_output_pt(vector<string> merge_pt) {
    //cout << "merge port vec: " << merge_pt << endl;
    string pt_name = pick(merge_pt);
    auto first_pt_amap = access_map.at(pt_name);
    auto s = to_map(first_pt_amap);
    auto shift_map = cpy(s);
    int depth = 0;
    for (size_t i = 1; i < merge_pt.size(); i ++) {
      shift_map = get_shift_map(shift_map);
      string name = merge_pt.at(i);
      //cout << "shift map: " << str(shift_map) << ", original map: " << str(access_map.at(name)) << endl;
      if (equal(range(to_umap(shift_map)), range(access_map.at(name)))) {
        //assign the largest depth
        depth  = i;
      }
    }
    //cout << depth << endl;
    auto ret = pad_to_domain_map(s, depth);
    string dom_name = domain_name(ret);
    ret = set_domain_name(ret, dom_name + "_" + to_string(depth));
    cout << "Rewrited output port map: " << str(ret) << endl;
    return ret;
  }

  pair<isl_map*, isl_map*> UBuffer::merge_output_pt_with_sched(vector<string> merge_pt) {
    //cout << "merge port vec: " << merge_pt << endl;
    string pt_name = pick(merge_pt);
    auto first_pt_amap = access_map.at(pt_name);
    auto s = to_map(first_pt_amap);
    auto sched = to_map(schedule.at(pt_name));
    auto shift_map = cpy(s);
    int depth = 0;
    for (size_t i = 1; i < merge_pt.size(); i ++) {
      shift_map = get_shift_map(shift_map);
      string name = merge_pt.at(i);
      //cout << "shift map: " << str(shift_map) << ", original map: " << str(access_map.at(name)) << endl;
      if (equal(range(to_umap(shift_map)), range(access_map.at(name)))) {
        //assign the largest depth
        depth  = i;
      }
    }
    //cout << depth << endl;
    auto ret = pad_to_domain_map(s, depth);
    auto ret_sched = pad_to_domain_map(sched, depth);
    string dom_name = domain_name(ret);
    ret = set_domain_name(ret, dom_name + "_" + to_string(depth));
    ret_sched = set_domain_name(ret_sched, dom_name + "_" + to_string(depth));
    cout << "Rewrited output port map: " << str(ret) << endl;
    return make_pair(ret, ret_sched);
  }

  void UBuffer::port_group2bank(int in_port_width, int out_port_width) {
    /*Refactor the port grouping algorithm, we should put it into bank,
     * instead of ubuffer. Think about ubuffer is the original
     * */
    stack<bank> bank_pool;
    for (auto inpt: get_in_ports()) {
      vector<bank> rec = receiver_banks(inpt);
      sort(rec.begin(), rec.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto bk : rec) {
        bank_pool.push(bk);
        //cout << tab(1) << bk.name << ", " << bk.maxdelay << ", SR only: " << bk.onlySR() << endl;
      }
    }
    int group_in_port_width = 0;
    int group_out_port_width = 0;

    //heruistic solution for chain the port output
    pair<string, string> last_bank_IO;

    //Using set for reoccuring port, single input multi output available
    std::set<string> inpt_set, outpt_set;
    //Save the new access pattern and schedule
    map<string, pair<isl_map*, isl_map*>> outpt_merge;

    //the buffer connection information, out-port point to in-port
    vector<pair<string, string> > back_edge;
    vector<string> pt_vec;
    while(!bank_pool.empty()) {
      auto bk = bank_pool.top();
      auto input = get_bank_input(bk.name);

      group_in_port_width = inpt_set.size();
      group_out_port_width ++;

      if ((group_in_port_width <= in_port_width) && (group_out_port_width <= out_port_width)) {
        //pop stack and add port width
        bank_pool.pop();

        //add it to the set
        //If they share the input port we should insert the latest output port
        string bank_input = input;
        if (last_bank_IO.first == "") {
          inpt_set.insert(input);
          bank_input = input;
        }
        else if (last_bank_IO.first != input) {
          inpt_set.insert(input);
          bank_input = input;
        }
        else {
          cout << "Substitute the output port: " << last_bank_IO.second << "to the input : " << input << endl;
          bank_input = last_bank_IO.second;
          inpt_set.insert(bank_input);
        }
        pt_vec = bk.get_out_ports();

        //sort the output port vec with the largest access in beginning
        sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
            auto l_start = lexminpt(range(access_map.at(l)));
            auto r_start = lexminpt(range(access_map.at(r)));
            return lex_gt_pt(l_start, r_start);
            });

        for (size_t i = 0; i < pt_vec.size(); i ++) {
          auto out_map_merge =
            merge_output_pt_with_sched(vector<string>(pt_vec.begin() + i, pt_vec.end()));
          outpt_merge.insert(make_pair(pt_vec.at(i), out_map_merge));
          if (i == 0) {
            back_edge.push_back(make_pair(pt_vec.at(i), bank_input));
          }
          else {
            back_edge.push_back(make_pair(pt_vec.at(i), pt_vec.at(i-1)));
          }
        }

        //check if this should be a separate bank
        if (bk.onlySR()) {
          create_subbank_branch(inpt_set, outpt_set, outpt_merge, back_edge);
          cout << "Reset Counter for shift reg" << endl;
          group_in_port_width = 0;
          group_out_port_width = 0;
        }

        //auto out_map_merge = merge_output_pt(pt_vec);
        //replace output port access map, adding two shift reg
        //outpt_merge.insert(make_pair(pt_vec.front(), out_map_merge));
      }
      else {
        //update the input port
        last_bank_IO.first = input;
        last_bank_IO.second = pt_vec.front();

        create_subbank_branch(inpt_set, outpt_set, outpt_merge, back_edge);

        //reset the grouping counter
        cout << "Reset Counter" << endl;
        group_in_port_width = 0;
        group_out_port_width = 0;
      }
    }
    //chances are that we have some leftover
    if (!inpt_set.empty()) {
      create_subbank_branch(inpt_set, outpt_set, outpt_merge, back_edge);
    }
  }

  /* This is the function to transform the chain buffer structure into a tree
   * Where it create a sub-bank with all the backedge information
   *
   * -[]-[]-[_______]-[]-[]-[_______]-[]-[]
   *
   * =>
   *
   * -[]-[]
   * |
   * | _______
   * -[ 1-in  ]-[]-[]
   *  [_2-out_]-[]-[]
   * */

  void UBuffer::create_subbank_branch(
      std::set<string> & inpt_set,
      std::set<string> & outpt_set,
      map<string, pair<isl_map*, isl_map*> > & outpt_merge,
      vector<pair<string, string> > & back_edge) {
    for (auto it : outpt_merge) {
      replace_pt(it.first, it.second.first, it.second.second);
    }
    for (auto it: back_edge) {
      auto read = it.first;
      auto write = it.second;
      if (inpt_set.count(write) == 0) {
        //shift register

        //delay the read schedule after write
        //auto new_sched = to_map(schedule.at(read));
        //auto wr_sched = to_map(schedule.at(write));
        //new_sched = delay_sched_map(new_sched, wr_sched);
        //schedule.at(read) = to_umap(new_sched);

        remove_bank(read);
        CodegenOptions options;
        options.inner_bank_offset_mode = INNER_BANK_OFFSET_STACK;
        stack_bank bk = compute_bank_info(options, write, read);
        add_bank_between(write, read, bk);
      }
      else {
        remove_bank(read);
        outpt_set.insert(read);
      }
    }
    //create a supper bank between inpt_set and outpt_set
    stack_bank super_bk = compute_bank_info(inpt_set, outpt_set);
    for (auto inpt: inpt_set) {
      for (auto outpt: outpt_set) {
        cout << "Merge port: " << outpt << endl;
        add_bank_between(inpt, outpt, super_bk);
      }
    }

    //clear the temporary storage
    inpt_set.clear();
    outpt_set.clear();
    outpt_merge.clear();
    back_edge.clear();
  }

  vector<UBuffer> UBuffer::port_grouping(int port_width) {
    /* This is the port constrained buffer lowering algorithm,
     * Based on the banking information, we are regrouping the banks
     * into a set of ubuffer
     */
    //TODO: we need more app to test this heuristic based algorithm
    vector<UBuffer> regroup_ub;
    stack<bank> bank_pool;
    for (auto inpt: get_in_ports()) {
      vector<bank> rec = receiver_banks(inpt);
      sort(rec.begin(), rec.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto bk : rec) {
        bank_pool.push(bk);
        //cout << tab(1) << bk.name << ", " << bk.maxdelay << ", SR only: " << bk.onlySR() << endl;
      }
    }
    int group_port_width = 0;

    //Using set for reoccuring port, single input multi output available
    std::set<string> inpt_set;
    map<string, isl_map*> outpt_merge;

    int cnt = 0;
    while(!bank_pool.empty()) {
      auto bk = bank_pool.top();
      auto input = get_bank_input(bk.name);
      if (bk.onlySR()) {
        //create a ub with mark of shift register
        string tmp[] = {input};
        auto pt_vec = bk.get_out_ports();
        sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
            auto l_start = lexminpt(range(access_map.at(l)));
            auto r_start = lexminpt(range(access_map.at(r)));
            return lex_lt_pt(l_start, r_start);
            });
        auto out_map_merge = merge_output_pt(pt_vec);
        regroup_ub.emplace_back(*this, std::set<string>(tmp, tmp+1), std::set<string>({}), cnt);
        auto dom = ::domain(out_map_merge);
        auto sched = schedule.at(pt_vec.front());
        auto & new_ub = regroup_ub.back();
        string pt_name = pt_vec.front() + "_merge";
        out_map_merge = set_range_name(out_map_merge, new_ub.name);
        new_ub.add_out_pt(pt_name, dom, out_map_merge, sched);
        new_ub.port_bundles[::name(dom)+ "_write"].push_back(pt_name);
        //delay_map.insert(make_pair(pt_name, bk.delay_map));
        bank_pool.pop();
        cnt ++;
      }
      else{
        group_port_width += inpt_set.count(input) + 1;
        if (group_port_width < port_width) {
          //pop stack and add port width
          bank_pool.pop();

          //add it to the group
          inpt_set.insert(input);
          auto pt_vec = bk.get_out_ports();
          //outpt_set.insert(outpts.begin(), outpts.end());
          sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
              auto l_start = lexminpt(range(access_map.at(l)));
              auto r_start = lexminpt(range(access_map.at(r)));
              return lex_lt_pt(l_start, r_start);
              });
          auto out_map_merge = merge_output_pt(pt_vec);
          outpt_merge.insert(make_pair(pt_vec.front(), out_map_merge));
        }
        else {
          //create a new merged ubuffer for this backend port constraint
          //UBuffer ub_grp(*this, inpt_set, outpt_set, cnt);
          regroup_ub.emplace_back(*this, inpt_set, std::set<string>({}), cnt);
          auto & new_ub = regroup_ub.back();
          for (auto it: outpt_merge) {
            auto dom = ::domain(it.second);
            auto acc_map = it.second;
            acc_map = set_range_name(acc_map, new_ub.name);
            auto sched = schedule.at(it.first);
            string pt_name = it.first + "_merge";
            new_ub.add_out_pt(pt_name, dom, acc_map, sched);
            new_ub.port_bundles[::name(dom) + "_write"].push_back(pt_name);
          }
          group_port_width = 0;
          inpt_set.clear();
          cnt ++;
        }
      }
    }
    //chances are that we have some leftover
    if (!inpt_set.empty()) {
      regroup_ub.emplace_back(*this, inpt_set, std::set<string>({}), cnt);
      auto & new_ub = regroup_ub.back();
      for (auto it: outpt_merge) {
        auto dom = ::domain(it.second);
        auto acc_map = it.second;
        acc_map = set_range_name(acc_map, new_ub.name);
        auto sched = schedule.at(it.first);
        string pt_name = it.first + "_merge";
        new_ub.add_out_pt(pt_name, dom, acc_map, sched);
        new_ub.port_bundles[::name(dom) + "_write"].push_back(pt_name);
      }
    }
    return regroup_ub;
  }

  Box UBuffer::get_bundle_box(const std::string & pt) {
    string pt_name;
    for (auto it: port_bundles) {
      if (std::find(it.second.begin(), it.second.end(), pt)
          != it.second.end()){
        pt_name = pick(it.second);
        break;
      }
    }
    cout << pt_name << endl;
    auto pt_map = to_map(access_map.at(pt_name));
    auto pt_range = range(pt_map);
    Box ret;
    vector<int> offset;
    for (int i = 0; i < get_out_dim(pt_map); i ++) {
      int stride = stride_in_dim(pt_range, i);
      ret.intervals.push_back({0, stride - 1});
    }

    //TODO: we may need a dilation box if we have holes in bundle
    //auto min_pt = parse_pt(sample(lexmin(pt_range)));
    //auto max_pt = parse_pt(sample(lexmax(pt_range)));
    return ret;
  }

  Box UBuffer::extract_addr_box(uset* rddom, vector<size_t> sequence) {
    //sequence save the transpose matrix
    //cout << "extracting address box from " << str(rddom) << endl;
    auto min_pt =
      parse_pt(sample(lexmin(rddom)));
    auto max_pt =
      parse_pt(sample(lexmax(rddom)));

    assert(min_pt.size() == max_pt.size());

    Box b(min_pt.size());
    for (size_t i = 0; i < min_pt.size(); i++) {
      size_t loc = sequence.at(i);
      b.intervals[loc] = {min_pt.at(i), max_pt.at(i)};
    }
    return b;
  }

  umap* UBuffer::separate_offset_dim(const std::string & pt) {
    auto pt_access_map = to_map(access_map.at(pt));
    Box pt_block = get_bundle_box(pt);

    vector<string> var_list, map_var_list, bank_id_list;
    bank_id_list.push_back("0");
    for (size_t  dim = 0; dim < pt_block.dimension(); dim ++) {
      string var = "p"+to_string(dim);
      var_list.push_back(var);
      if (pt_block.length(dim) != 1) {
        int div = pt_block.length(dim);
        string floor_expr = "floor(" + var + "/" + to_string(div) +")";
        string offset_expr = var + "-" + to_string(div) + "*" + floor_expr;
        bank_id_list.push_back(offset_expr);
        map_var_list.push_back(floor_expr);
      }
      else {
        map_var_list.push_back(var);
      }
    }

    string buf_name = range_name(pt_access_map);
    string new_name = buf_name + "_internal";
    string id_name = buf_name + "_id";
    auto domain_vars = sep_list(var_list, "[", "]", ",");
    auto range_vars = sep_list(map_var_list, "[", "]", ",");
    auto id_vars = sep_list(bank_id_list, "[", "]", ",");

    //string map_str = "{ifbuf[a, b, c] -> ifbuf_sep[a-4*floor(a/4), floor(a/4), b, c]}";
    string map_str = "{" + buf_name+domain_vars+" -> " + new_name + range_vars + "}";
    auto addr_trans = rdmap(ctx, map_str);
    string id_str = "{" + buf_name+domain_vars+" -> " + id_name + id_vars + "}";
    auto id_trans = rdmap(ctx, id_str);
    //cout <<"Transform: " << str(addr_trans) << "access_map: " << str(pt_access_map) << endl;
    auto new_access_map = dot(pt_access_map, addr_trans);
    //cout << "Transform separate access map: " << str(new_access_map) << endl;
    //TODO: save this bankID some where
    auto bank_id_map = simplify(dot(pt_access_map, id_trans));
    //cout << "Bank ID separate access map: " << str(bank_id_map) << endl;
    return new_access_map;
  }

  vector<string> UBuffer::map2address(isl_map* pt_access_map) {
    vector<string> ret;
    size_t var_dim = get_in_dim(pt_access_map);
    size_t addr_dim = get_out_dim(pt_access_map);
    vector<vector<int>> acc_matrix = get_access_matrix_from_map(pt_access_map);
    vector<string> id2name;
    for (size_t i = 0; i < var_dim; i ++) {
      id2name.push_back("p" + to_string(i));
      if (isl_map_has_dim_id(pt_access_map, isl_dim_in, i)) {
        //rename with its name, position 0 (root) will save const
        string name = str(isl_map_get_dim_id(pt_access_map, isl_dim_in, i));
        id2name.back() = name;
      }
    }

    for (auto row: acc_matrix) {
      vector<string> sum_list;
      for (auto itr = row.begin()+1; itr != row.end(); itr ++ ){
        int item = *itr;
        int cnt = itr - row.begin() ;
        if (item == 0 ) {
          continue;
        }
        else if (item == 1) {
          sum_list.push_back(id2name[cnt]);
        }
        else {
          string entry = to_string(item) + "*" + id2name[cnt];
          sum_list.push_back(entry);
        }
      }

      //const
      if (sum_list.size() == 0 || (row.front() != 0)) {
        sum_list.push_back(std::to_string(row.front()));
      }
      ret.push_back(sep_list(sum_list, "", "", "+"));
      //cout << "\t Addr: " << ret.back() << endl;
    }
    return ret;
  }

  vector<string> UBuffer::get_ram_address(const std::string& pt) {
    auto pt_access_map = to_map(access_map.at(pt));
    return map2address(pt_access_map);
  }

  string UBuffer::generate_linearize_ram_addr(const std::string& pt, bank& bnk) {
    vector<int> lengths;
    vector<int> mins;
    for (int i = 0; i < logical_dimension(); i++) {
      auto s = project_all_but(to_set(bnk.rddom), i);
      auto min = to_int(lexminval(s));
      mins.push_back(min);
      auto max = to_int(lexmaxval(s));
      int length = max - min + 1;
      lengths.push_back(length);
    }

    isl_map* m = to_map(access_map.at(pt));
    auto svec = isl_pw_multi_aff_from_map(m);
    vector<pair<isl_set*, isl_multi_aff*> > pieces =
      get_pieces(svec);
    vector<string> domains;
    vector<string> offsets;
    for (auto piece : pieces) {
      vector<string> addr_vec;
      isl_multi_aff* ma = piece.second;
      for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
        isl_aff* aff = isl_multi_aff_get_aff(ma, d);
        addr_vec.push_back(codegen_c(aff));
      }

      vector<string> addr_vec_out;
      for (int i = 0; i < logical_dimension(); i++) {
        int length = 1;
        for (int d = 0; d < i; d++) {
          length *= lengths.at(d);
        }
        string item = "(" + addr_vec.at(i) + " - " + str(mins.at(i)) + ") * " + to_string(length);
        addr_vec_out.push_back(item);
      }

      string addr = sep_list(addr_vec_out, "", "", " + ");
      offsets.push_back(addr);
      domains.push_back(codegen_c(piece.first));
    }

    assert(offsets.size() > 0);
    assert(domains.size() == offsets.size());

    string base = offsets.at(0);
    for (int d = 1; d < offsets.size(); d++) {
      base = parens(parens(domains.at(d)) + " ? " + offsets.at(d) + " : " + base);
    }

    return base;

    ////assert(pieces.size() == 1);
    //isl_multi_aff* ma = pieces.at(0).second;
    //for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
      //isl_aff* aff = isl_multi_aff_get_aff(ma, d);
      //addr_vec.push_back(codegen_c(aff));
    //}

    //vector<string> addr_vec_out;
    //for (int i = 0; i < logical_dimension(); i++) {
      //int length = 1;
      //for (int d = 0; d < i; d++) {
        //length *= lengths.at(d);
      //}
      //string item = "(" + addr_vec.at(i) + ") * " + to_string(length);
      //addr_vec_out.push_back(item);
    //}

    //return sep_list(addr_vec_out, "", "", " + ");
  }

  map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string in_op = domain_name(to_map(access_map.at(in_pt_name)));
    string out_op = domain_name(to_map(access_map.at(out_pt_name)));
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);
    auto in_sched_vec = collect_sched_vec(in_sched);
    auto out_sched_vec = collect_sched_vec(out_sched);
    assert(in_sched_vec.size() == out_sched_vec.size());

    //the new generated schedule vectors
    vector<string> in_vectorized_sched_vec, out_vectorized_sched_vec, in_new_sched_vec, out_new_sched_vec;
    bool find_sched_dim = false;
    size_t sched_dim = 0;
    for (size_t dim = 0; dim < in_sched_vec.size(); dim ++) {
      if (!(is_number(in_sched_vec[dim]) || find_sched_dim)) {
        if (dim == 0){
          find_sched_dim = true;
          in_vectorized_sched_vec.push_back("1");
          in_new_sched_vec.push_back("0");
          out_vectorized_sched_vec.push_back("2");
          out_new_sched_vec.push_back("3");
        }
        else {
          //this is the situation we did not run any schedule optimization
          //First try
          find_sched_dim = true;
          int in_sched_stamp = safe_stoi(in_sched_vec[dim-1]);
          int out_sched_stamp = safe_stoi(out_sched_vec[dim-1]);
          if (in_sched_stamp == out_sched_stamp - 1) {
            in_new_sched_vec.push_back("0");
            in_vectorized_sched_vec.push_back( "1" );
            out_vectorized_sched_vec[dim-1] = to_string(in_sched_stamp);
            out_vectorized_sched_vec.push_back( "2");
            out_new_sched_vec.push_back("0");
          }
          else {
            cout << "ERROR: The schedule is not considered\n\tin vec: " << in_sched_vec << "\n\tout vec: " << out_sched_vec << endl;
            assert(false);
          }
        }
      }
      in_vectorized_sched_vec.push_back(in_sched_vec[dim]);
      in_new_sched_vec.push_back(in_sched_vec[dim]);
      out_vectorized_sched_vec.push_back(out_sched_vec[dim]);
      out_new_sched_vec.push_back(out_sched_vec[dim]);
    }

    //cout << "\tin: " << in_new_sched_vec << "\n\tout: " << out_new_sched_vec << endl;
    //cout << "\tin vec: " << in_vectorized_sched_vec << "\n\tout vec: " << out_vectorized_sched_vec << endl;
    map<string, isl_map*> new_sched;
    auto in_sched_new = gen_map_from_sched_vec(ctx, in_new_sched_vec, in_op);
    new_sched.insert(make_pair(in_op, in_sched_new));
    auto out_sched_new = gen_map_from_sched_vec(ctx, out_new_sched_vec, out_op);
    new_sched.insert(make_pair(out_op, out_sched_new));
    auto in_vec_sched = gen_map_from_sched_vec(ctx, in_vectorized_sched_vec, in_op + "_vec");
    new_sched.insert(make_pair(in_op + "_vec", in_vec_sched));
    auto out_vec_sched = gen_map_from_sched_vec(ctx, out_vectorized_sched_vec, out_op + "_vec");
    new_sched.insert(make_pair(out_op + "_vec", out_vec_sched));

    //cout << "\tnew in map: " << str(in_sched_new)
    //<< "\n\tvec in map: " << str(in_vec_sched)
    //<< "\n\tnew out map: " << str(out_sched_new)
    //<< "\n\tvec out map: " << str(out_vec_sched) << endl;

    return new_sched;
  }


  void UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, isl_map* sched, string origin_pt_name, string bd_name, int dim_id, int fetch_width, bool is_out) {

    AccessPattern acc_pattern = AccessPattern(
        to_map(access_map.at(origin_pt_name)), ctx);
    auto constraint_slices = acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
    size_t new_pt_cnt = 0;

    isl_set* dom = range(to_map(rewrite_buf2op));

    for (auto slice : constraint_slices) {
      //cout << "Constraint: " << str(slice) << endl;
      //cout << "origin: " << str(rewrite_buf2op) << endl;
      //cout << "Rewrited Access Map" << str(dot(inv(rewrite_buf2op), slice)) << endl;
      auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
      if (is_out) {
        string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_out_pt(pt_name, dom, to_map(rewrite_access_map), sched);
      }
      else {
        string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_in_pt(pt_name, dom, to_map(rewrite_access_map), sched);

        //LOOK at the name to judge if we need to remap the buffer
        size_t found = target_buf.name.find("tb");
        if(found != string::npos) {
          //auto acc_pt = target_buf.access_pattern.at(pt_name);
          auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
          auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id);
          cout << "out pt decouple: " << str(decouple_acc_map) << endl;
          target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
        }
      }
      new_pt_cnt ++;
    }
  }


  void UBuffer::vectorization(int dim_id, int fetch_width, UBuffer& agg_buf, UBuffer& sram, UBuffer& tb) {

    agg_buf.name = name + "_agg";
    agg_buf.ctx = ctx;
    agg_buf.port_widths = port_widths;

    tb.name = name + "_tb";
    tb.ctx = ctx;
    tb.port_widths = port_widths;

    sram.name = name + "_sram";
    sram.ctx = ctx;
    sram.port_widths = port_widths;

    vector<string> in_bundle = get_in_bundles();
    vector<string> out_bundle = get_out_bundles();

    cout << "in bundle  = " << in_bundle.size() << endl;
    cout << "out bundle = " << out_bundle.size() << endl;
    //Only test bundle size = 1
    assert(in_bundle.size() == 1 && out_bundle.size() == 1);

    //produce naive schedule for the rewritten buffer
    map<string, isl_map*> new_sched =  produce_vectorized_schedule(pick(in_bundle), pick(out_bundle));
    //assert(false);

    for (auto bd_name : in_bundle) {
      cout << "Vectorize input port bundle: " << bd_name << endl;
      for (auto in_pt_name : port_bundles.at(bd_name) ) {
        cout << "\tvectorize input port: " << in_pt_name << endl;
        auto acc_pattern = AccessPattern(
            to_map(access_map.at(in_pt_name)), ctx);
        std::cout << "before rewrite: " << acc_pattern << endl;

        //produce the operation transfomation
        isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width);
        std::cout << "transform rewrite: " << str(op_trans) << endl;

        auto rewrite_buf2op = dot(inv(access_map.at(in_pt_name)), op_trans);
        auto new_op_domain = pick(get_sets(range(rewrite_buf2op)));
        cout << "rewrite buffer to op map: " << str(access_map.at(in_pt_name)) << endl;

        //add in port to agg_buf
        auto inpt_acc_map = remap_access_to_new_buffer(in_pt_name, "_agg");
        cout << "Access map add to agg_in: " << str(inpt_acc_map) << endl;
        agg_buf.add_in_pt(in_pt_name+"_in", domain.at(in_pt_name), inpt_acc_map, its(new_sched.at(acc_pattern.op_name), domain.at(in_pt_name)));
        agg_buf.port_bundles[bd_name+"_agg_in"].push_back(in_pt_name + "_in");

        auto sched = new_sched.at(::name(new_op_domain));

        //add out port to agg_buf
        add_vectorized_pt_to_ubuf(agg_buf, rewrite_buf2op, sched, in_pt_name, bd_name+"_agg_out", dim_id, fetch_width, true);
        //add in port to sram
        add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, sched, in_pt_name, bd_name, dim_id, fetch_width, false);
      }
    }

    for (auto bd_name: out_bundle) {
      cout << "Vectorize output port bundle: " << bd_name << endl;

      for (auto out_pt_name : port_bundles.at(bd_name) ) {
        cout << "\tVectorize output port: " << out_pt_name << endl;
        auto acc_pattern = AccessPattern(
            to_map(access_map.at(out_pt_name)), ctx);

        std::cout << "before rewrite: " << acc_pattern << endl;

        //produce the operation transfomation
        isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width);
        std::cout << "transform rewrite: " << str(op_trans) << endl;

        auto rewrite_buf2op = dot(inv(access_map.at(out_pt_name)), op_trans);
        auto new_op_domain = pick(get_sets(range(rewrite_buf2op)));
        auto op_sched = new_sched.at(::name(new_op_domain));

        auto outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id);
        outpt_acc_map = add_range_suffix(outpt_acc_map, "_tb");
        cout << "Access map decouple reuse: " << str(outpt_acc_map) << endl;
        tb.add_out_pt(out_pt_name+"_out", domain.at(out_pt_name), outpt_acc_map, its(new_sched.at(acc_pattern.op_name), domain.at(out_pt_name)));
        tb.port_bundles[bd_name+"_tb_out"].push_back(out_pt_name + "_out");

        //add out port to tb
        add_vectorized_pt_to_ubuf(tb, rewrite_buf2op, op_sched, out_pt_name, bd_name+"_tb_in", dim_id, fetch_width, false);

        //add in port to sram
        add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, op_sched, out_pt_name, bd_name, dim_id, fetch_width, true);
      }
    }

    cout << "AGG : " << agg_buf << endl;
    cout << "SRAM: " << sram << endl;
    cout << "TB  : " << tb << endl;
    cout << "AGG Schedule: " << str(agg_buf.global_schedule()) << endl;
    cout << "SRAM Schedule: " << str(sram.global_schedule()) << endl;
    cout << "TB Schedule: " << str(tb.global_schedule())  << endl;
  }

bool banking_scheme_is_legal(isl_map* bank_func, UBuffer& buf) {
  auto sched = buf.global_schedule();
  auto op_writes = buf.producer_map();
  auto op_reads = buf.consumer_map();

  auto written = range(op_writes);
  auto read = range(op_reads);
  auto all_data = unn(written, read);

  auto read_times = dot(inv(op_reads), sched);
  auto simul_reads = dot(read_times, inv(read_times));

  auto data_to_bank = its(to_umap(bank_func), read);
  auto same_bank = dot(data_to_bank, inv(data_to_bank));
  
  auto read_id = isl_union_set_identity(cpy(read));
  auto bank_read_conflicts = diff(its(same_bank, simul_reads), read_id);

  cout << "bank conflicts = " << str(bank_read_conflicts) << endl;
  return empty(bank_read_conflicts);
}

bool inner_bank_offset_is_legal(isl_map* slot_func,
    umap* op_writes,
    umap* op_reads,
    umap* sched) {

  cout << "write map: " << str(op_writes) << endl;
  cout << "read  map: " << str(op_reads) << endl;

  auto written = range(op_writes);
  auto read = range(op_reads);
  auto all_data = unn(written, read);

  cout << "slot func = " << str(slot_func) << endl;

  // build (v0, v1) slot(v0) = slot(v1)
  auto dloc = its(to_umap(slot_func), all_data);
  cout << "store slots = " << str(dloc) << endl;

  auto stored_to_same_slot = dot(dloc, inv(dloc));
  cout << "stored to same slot = " << str(stored_to_same_slot) << endl;

  auto in_id = isl_union_set_identity(cpy(all_data));
  cout << "in id = " << str(in_id) << endl;

  // build (v0, v1) live_range(v0) and live_range(v1) overlap
  auto read_times = dot(inv(op_reads), sched);
  auto write_times = dot(inv(op_writes), sched);
  cout << "read times  = " << str(read_times) << endl;
  cout << "write times = " << str(write_times) << endl;

  isl_set* sched_range = to_set(range(sched));
  //auto time_le = isl_map_lex_le(get_space(sched_range));
  auto time_le = isl_map_lex_lt(get_space(sched_range));

  //cout << "le times    = " << str(time_le) << endl;
  auto after_first_write = dot(write_times, time_le);
  //cout << "after first write: " << str(after_first_write) << endl;

  //auto time_ge = isl_map_lex_ge(get_space(sched_range));
  auto time_ge = isl_map_lex_gt(get_space(sched_range));
  auto before_last_read = dot(read_times, time_ge);

  //cout << "before last read: " << str(before_last_read) << endl;

  auto live_range = (coalesce(its(after_first_write, before_last_read)));
  //cout << "live range = " << str(live_range) << endl;

  auto overlapping_ranges = dot(live_range, inv(live_range));
  //cout << "overlapping = " << str(overlapping_ranges) << endl;

  auto violated = coalesce(diff(its(overlapping_ranges, stored_to_same_slot), in_id));
  cout << "violated    = " << str(violated) << endl;
  return empty(violated);

}

bool inner_bank_offset_is_legal(isl_map* slot_func, UBuffer& buf) {
  auto sched = buf.global_schedule();
  auto op_writes = buf.producer_map();
  auto op_reads = buf.consumer_map();

  return inner_bank_offset_is_legal(slot_func, op_writes, op_reads, sched);
}

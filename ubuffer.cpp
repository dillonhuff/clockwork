#include "ubuffer.h"
#include "codegen.h"

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

  //cout << "src map done: " << str(src_map) << endl;
  auto sched = buf.global_schedule();
  auto after = lex_gt(sched, sched);

  src_map = its(src_map, after);
  src_map = lexmax(src_map);

  auto time_to_event = inv(sched);

  auto lex_max_events =
    dot(lexmax(dot(src_map, sched)), time_to_event);

  //cout << "Done" << outpt << endl;
  return lex_max_events;
}

umap* last_reads(const string& inpt, UBuffer& buf) {
  auto sched = buf.global_schedule();
  cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  cout << "Access map: " << str(writes) << endl;
  auto writers = inv(writes);
  cout << "Writer map: " << str(writers) << endl;
  uset* written_values = (range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, (buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  cout << "vals to reads: " << str(reads_from_fifo) << endl;
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

  //cout << "WritesBtwn: " << str(WritesBtwn) << endl;

  auto c = card(WritesBtwn);
  //cout << "got card" << endl;
  return c;
}

int compute_dd_lower_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  //cout << "Computing dd from " << read_port << " to " << write_port << endl;
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
  return bnd_int(bound);
}

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  //cout << "DD: " << str(c) << endl;
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
    //cout << "computing dd bound for " << inpt << " -> " << outpt << " on " << buf.name << endl;
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  return maxdelay;
}

void generate_ram_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  string ram = bank.name + "_store";

  out << "#ifdef __VIVADO_SYNTH__" << endl;
  out << tab(1) << bank.pt_type_string << " " << ram
    << "[" << bank.layout.cardinality() << "];" << endl << endl;
  out << "#else" << endl;
  out << tab(1) << bank.pt_type_string << "* " << ram << ";" << endl;
  out << "#endif // __VIVADO_SYNTH__" << endl;

  vector<string> vars;
  vector<string> decls;
  for (int i = 0; i < bank.layout.dimension(); i++) {
    vars.push_back("d" + str(i));
    decls.push_back("int d" + str(i));
  }
  string arg_list = comma_list(decls);

  vector<string> addr;
  for (int i = 0; i < vars.size(); i++) {
    vector<string> offset{vars.at(i)};
    for (int j = 0; j < i; j++) {
      offset.push_back(str(bank.layout.length(j)));
    }
    addr.push_back(sep_list(offset, "", "", "*"));
  }

  string addr_str = sep_list(addr, "(", ")", " + ");

  out << tab(1) << bank.pt_type_string << " read(" << arg_list << ") {";
  out << tab(2) << "return " << ram << "[" << addr_str << "];";
  out << tab(1) << "}" << endl << endl;
  out << tab(1) << "void write(" << bank.pt_type_string << "& value, " << arg_list << ") {" << endl;
  out << tab(2) << ram << "[" << addr_str << "] = value;" << endl;
  out << tab(1) << "}" << endl << endl;

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
  out << "\t// RAM Box: " << bank.layout << endl;
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

    //vector<int> capacities;
    //for (size_t i = 0; i < read_delays.size(); i++) {
      //int current = read_delays[i];
      //int partition_capacity = -1;
      //int next = -1;
      //if (i < (int) read_delays.size() - 1 &&
          //read_delays[i] != read_delays[i + 1]) {
        //next = read_delays[i + 1];
        //partition_capacity = next - current;
      //} else {
        //partition_capacity = 1;
      //}
      //capacities.push_back(partition_capacity);

      //out << "\t// Parition [" << current << ", " << next << ") capacity = " << partition_capacity << endl;
      //if (partition_capacity > 1) {
        //out << "\tfifo<" << pt_type_string << ", " << partition_capacity << "> f" << i << ";" << endl;
      //} else {
        //out << "\t" << pt_type_string << " f" << i << ";" << endl;
      //}
    //}

    //assert(capacities.size() == partitions.size());

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

Box extract_box(uset* rddom) {
  cout << "extracting box from " << str(rddom) << endl;
  auto min_pt =
    parse_pt(sample(lexmin(rddom)));
  auto max_pt =
    parse_pt(sample(lexmax(rddom)));

  assert(min_pt.size() == max_pt.size());

  Box b;
  for (size_t i = 0; i < min_pt.size(); i++) {
    b.intervals.push_back({min_pt.at(i), max_pt.at(i)});
  }
  cout << tab(1) << "result = " << b << endl;
  return b;
}

bank compute_bank_info(
    const std::string& inpt, 
    const std::string& outpt,
    UBuffer& buf) {

  int maxdelay = compute_dd_bound(buf, outpt, inpt);
  //int maxdelay = compute_max_dd(buf, inpt);
  vector<int> read_delays{0};

  // NOTE: Just to ensure we dont force everything to be a RAM
  //int num_readers = 10;
  int num_readers = 0;

  auto in_actions = buf.domain.at(inpt);
  auto lex_max_events =
    get_lexmax_events(outpt, buf);
  auto act_dom =
    domain(its_range(lex_max_events, to_uset(in_actions)));

  if (!isl_union_set_is_empty(act_dom)) {
    num_readers++;
    auto c = compute_dd(buf, outpt, inpt);
    auto qpd = compute_dd_bound(buf, outpt, inpt);
    int lb = compute_dd_lower_bound(buf, outpt, inpt);

    for (int i = lb; i < qpd + 1; i++) {
      read_delays.push_back(i);
    }
  }

 
  string pt_type_string = buf.port_type_string();
  string name = inpt + "_to_" + outpt;
  cout << "inpt  = " << inpt << endl;
  cout << "outpt = " << outpt << endl;
  cout << "name of bank = " << name << endl;

  auto rddom =
    unn(range(buf.access_map.at(inpt)),
        range(buf.access_map.at(outpt)));
  Box mem_box = extract_box(rddom);

  stack_bank bank{name, BANK_TYPE_STACK, pt_type_string, read_delays, num_readers, maxdelay, mem_box};
  //stack_bank bank{name, BANK_TYPE_RAM, pt_type_string, read_delays, num_readers, maxdelay, mem_box};

  return bank;
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

void generate_code_prefix(CodegenOptions& options,
    std::ostream& out, UBuffer& buf) {

  for (auto inpt : buf.get_in_ports()) {
    for (auto outpt : buf.get_out_ports()) {
      auto overlap =
        its(range(buf.access_map.at(inpt)), range(buf.access_map.at(outpt)));

      if (!empty(overlap)) {
        stack_bank bank = compute_bank_info(inpt, outpt, buf);
        buf.add_bank_between(inpt, outpt, bank);
      }
    }
  }

  for (auto inpt : buf.get_in_ports()) {
    vector<stack_bank> receivers = buf.receiver_banks(inpt);
    cout << "Receiver banks for " << inpt << endl;
    vector<stack_bank> mergeable;
    for (auto bnk : receivers) {
      cout << tab(1) << bnk.name << ", # read offsets: " << bnk.read_delays.size() << endl;
      if (bnk.read_delays.size() == 2) {
        assert(bnk.read_delays[0] == 0);
        mergeable.push_back(bnk);
      }

    }

    if (mergeable.size() > 0) {
      stack_bank merged;
      merged.tp = BANK_TYPE_STACK;
      merged.layout = Box(mergeable.at(0).layout.dimension());
      merged.name =
        inpt + "_merged_banks_" + str(mergeable.size());
      merged.pt_type_string =
        mergeable.at(0).pt_type_string;
      merged.num_readers = mergeable.size();
      merged.maxdelay = -1;
      for (auto m : mergeable) {
        merged.layout = unn(merged.layout, m.layout);
        if (m.maxdelay > merged.maxdelay) {
          merged.maxdelay = m.maxdelay;
        }
        for (auto mrd : m.read_delays) {
          merged.read_delays.push_back(mrd);
        }
      }
      merged.read_delays = sort_unique(merged.read_delays);

      for (auto to_replace : mergeable) {
        buf.replace_bank(to_replace, merged);
      }
    }
  }

  string inpt = buf.get_in_port();
  out << "#include \"hw_classes.h\"" << endl << endl;
  for (auto b : buf.get_banks()) {
    generate_bank(options, out, b);
  }

  out << "struct " << buf.name << "_cache {" << endl;

  for (auto b : buf.get_banks()) {
    out << tab(1)
      << b.name << "_cache "
      << b.name
      << ";" << endl;
  }

  out << "};" << endl << endl;

  out << endl << endl;

  for (auto inpt : buf.get_in_ports()) {
    vector<string> args;
    args.push_back(buf.port_type_string(inpt) + "& " + inpt);
    args.push_back(buf.name + "_cache& " + buf.name);
    concat(args, dimension_var_decls(inpt, buf));
    string var_args = comma_list(dimension_var_args(inpt, buf));

    out << "inline void " << inpt << "_write(";
    out << comma_list(args) << ") {" << endl;

    for (auto sb : buf.receiver_banks(inpt)) {
      if (sb.tp == BANK_TYPE_STACK) {
        out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
      } else {
        assert(false);
        out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt << ", " << var_args << ");" << endl;
      }
    }

    out << "}" << endl << endl;
  }

}

bool is_optimizable_constant_dd(const string& inpt, const string& outpt, UBuffer& buf) {
  auto out_domain = buf.domain.at(outpt);
  auto qpd = compute_dd(buf, outpt, inpt);
  auto pieces = get_pieces(qpd);
  uset* pieces_dom = isl_union_set_read_from_str(ctx(qpd), "{}");
  for (auto p : pieces) {
    //cout << "// " << str(p.first) << " -> " << str(p.second) << endl;
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

selector generate_select_decl(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
  isl_space* s = get_space(buf.domain.at(outpt));
  auto dim_decls = space_var_decls(s);

  selector sel;
  sel.name = outpt + "_select";
  sel.buf_name = buf.name;
  sel.pt_type = buf.port_type_string();
  sel.out_port = outpt;
  sel.vars = space_var_args(s);

  out << "inline " + buf.port_type_string() + " " + outpt + "_select(";
  size_t nargs = 0;
  out << buf.name << "_cache& " << buf.name << ", ";
  nargs++;
  out << sep_list(dim_decls, "", "", ", ");

  out << ") {" << endl;
  cout << "Created dim decls" << endl;
  ignore_inter_deps(out, buf.name);

  return sel;
}

void select_debug_assertions(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
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

  auto out_domain = buf.domain.at(outpt);
  cout << "Out domain: " << str(out_domain) << endl;
  auto qpd = compute_dd(buf, outpt, inpt);
  cout << "Pieces of " << str(qpd) << endl;
  auto pieces = get_pieces(qpd);
  //assert(false);

  string dx = to_string(int_upper_bound(qpd));
  auto dd_fold = compute_dd(buf, outpt, inpt);

  out << tab(1) << "// Read schedule : " << str(buf.schedule.at(outpt)) << endl;
  out << tab(1) << "// Write schedule: " << str(buf.schedule.at(inpt)) << endl;

  out << tab(1) << "// DD fold: " << str(dd_fold) << endl;
  string delay_expr = evaluate_dd(buf, outpt, inpt);
  string value_str = "";
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
  return buf.name + "." + value_str;
}

selector generate_select(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
  selector sel = generate_select_decl(options, out, outpt, buf);

  auto lex_max_events = get_lexmax_events(outpt, buf);

  //cout << "Lexmax events: " << str(lex_max_events) << endl;
  //map<string, string> ms = umap_codegen_c(lex_max_events);
  //out << "\t// lexmax events: " << str(lex_max_events) << endl;
  out << tab(1) << "// " << outpt << " read pattern: " << str(buf.access_map.at(outpt)) << endl;
  vector<string> possible_ports;
  for (auto pt : buf.get_in_ports()) {
    if (buf.has_bank_between(pt, outpt)) {
      possible_ports.push_back(pt);
    }
  }

  map<string, string> in_ports_to_conditions;

  //cout << possible_ports.size() << " possible ports for " << outpt << " on buffer: " << endl << buf << endl;
  //cout << "lexmax = " << str(lex_max_events) << endl;
  for (auto inpt : possible_ports) {
    //cout << tab(1) << inpt << endl;
    auto write_ops =
      domain(buf.access_map.at(outpt));
    auto written =
      range(buf.access_map.at(inpt));
    auto read =
      range(buf.access_map.at(outpt));
    auto overlap = its(written, read);
    auto overlapped_reads = its_range(buf.access_map.at(outpt), overlap);
    auto overlapped_read_set = domain(overlapped_reads);
    auto overlapped_read_condition =
      gist(overlapped_read_set, (write_ops));

    //cout << tab(2) << "values written: " << str(range(buf.access_map.at(inpt))) << endl;
    //cout << tab(2) << "values read   : " << str(range(buf.access_map.at(outpt))) << endl;
    //cout << tab(2) << "port overlap  : " << str(its(written, read)) << endl;
    //cout << tab(2) << "read overlap  : " << str(overlapped_reads) << endl;
    //cout << tab(2) << "overlap set   : " << str(overlapped_read_set) << endl;
    //cout << tab(2) << "overlap test  : " << str(overlapped_read_condition) << endl;
    //cout << tab(2) << "overlap C     : " << codegen_c(overlapped_read_condition) << endl;
    in_ports_to_conditions[inpt] =
      codegen_c(overlapped_read_condition);
    //auto deps = dot(buf.access_map.at(inpt), inv(buf.access_map.at(outpt)));
    //cout << tab(2) << "deps: " << str(deps) << endl;
  }

  if (possible_ports.size() == 1) {
    string inpt = possible_ports.at(0);
    string peeked_val = delay_string(options, out, inpt, outpt, buf);
    sel.bank_conditions.push_back("1");
    sel.inner_bank_offsets.push_back(evaluate_dd(buf, outpt, inpt));

    out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
    out << tab(1) << "return value_" << inpt << ";" << endl;
  } else {
    for (auto port : possible_ports) {
      out << tab(1) << "if (" << map_find(port, in_ports_to_conditions) << ") {" << endl;
      string inpt = possible_ports.at(0);
      string peeked_val = delay_string(options, out, inpt, outpt, buf);
      sel.bank_conditions.push_back("1");
      sel.inner_bank_offsets.push_back(evaluate_dd(buf, outpt, inpt));

      out << tab(2) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
      out << tab(2) << "return value_" << inpt << ";" << endl;
      out << tab(1) << "}" << endl << endl;
      out << tab(1) << endl;
    }
  }

  select_debug_assertions(options, out, outpt, buf);
  out << "}" << endl << endl;

  return sel;
}

void generate_bundles(CodegenOptions& options, std::ostream& out, UBuffer& buf) {

  out << "// # of bundles = " << buf.port_bundles.size() << endl;

  for (auto b : buf.port_bundles) {
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
        cout << "setting id: " << str(new_id) << endl;
        s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
      }
      dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }

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

  for (auto outpt : buf.get_out_ports()) {
    buf.selectors[outpt] = generate_select(options, out, outpt, buf);
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


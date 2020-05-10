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
  assert(src_map != nullptr);

  //cout << "src map done: " << str(src_map) << endl;
  auto sched = buf.global_schedule();
  auto after = lex_gt(sched, sched);

  src_map = its(src_map, after);
  src_map = lexmax(src_map);

  auto time_to_event = inv(sched);

  auto lex_max_events =
    dot(lexmax(dot(src_map, sched)), time_to_event);

  //cout << "Done" << outpt << endl;
  assert(lex_max_events != nullptr);
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
    << "[" << bank.extract_layout().cardinality() << "];" << endl << endl;
  out << "#else" << endl;
  out << tab(1) << bank.pt_type_string << "* " << ram << ";" << endl;
  out << "#endif // __VIVADO_SYNTH__" << endl;

  vector<string> vars;
  vector<string> decls;
  for (int i = 0; i < bank.extract_layout().dimension(); i++) {
    vars.push_back("d" + str(i));
    decls.push_back("int d" + str(i));
  }
  string arg_list = comma_list(decls);

  vector<string> addr;
  for (int i = 0; i < vars.size(); i++) {
    vector<string> offset{vars.at(i)};
    for (int j = 0; j < i; j++) {
      offset.push_back(str(bank.extract_layout().length(j)));
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
  out << "\t// RAM Box: " << bank.extract_layout() << endl;

  //C array with read and write method
  if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_LINEAR){
      //num reader > 1 partiions = 1;
      auto partitions =
        bank.get_partitions();
      int partition_size = partitions.size();
      if (num_readers == 1 || partition_size == 1 || options.all_rams) {
        //add a ram capacity compute pass is different from stack bank
        int capacity = int_upper_bound(card(bank.rddom));
        out << "\t// Capacity: " << capacity << endl;
        out << tab(1) << pt_type_string << " RAM[" << capacity << "];" << endl;
        out << tab(1) << "inline " + pt_type_string + " read(const int addr) {" << endl;

        ignore_inter_deps(out, "RAM");
        out << tab(2) << "return RAM[addr];" << endl;
        out << tab(1) << "}" << endl << endl;
        out << endl << endl;

        out << "\tinline void write(const " + pt_type_string + " value, const int addr) {" << endl;
        if (options.add_dependence_pragmas) {
          ignore_inter_deps(out, "RAM");
        }
        out << tab(2) << "RAM[addr] = value;" << endl;
        out << tab(1) << "}" << endl << endl;

      }
      else {
          cout << "Not support more than one reader in RAM mode" << endl;
          assert(false);
      }
      out << "};" << endl << endl;

  }
  else {

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
    std::ostream& out,
    UBuffer& buf) {

  //banking and merge pass
  buf.generate_bank_and_merge(options);

  //string inpt = buf.get_in_port();
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

    //Different ram type, different address
    for (auto sb : buf.receiver_banks(inpt)) {
      //if (sb.tp == BANK_TYPE_STACK) {
      if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_STACK) {
        out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
      }
      else if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_LINEAR) {
        string linear_addr = buf.generate_linearize_ram_addr(inpt);
        cout <<"Input port:" << inpt << ", Get ram string: " << linear_addr << endl;
        out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
            ", " << linear_addr << ");" << endl;
      }
      else {
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
  if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_LINEAR) {
    string linear_addr = buf.generate_linearize_ram_addr(outpt);
    value_str = bank + ".read(/*ram type address*/ "+ linear_addr + ")";
  }
  else if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_STACK) {
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
  }

  return buf.name + "." + value_str;
}

selector generate_select(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
  cout << "creating select for port: <" << outpt <<"> in buffer: " << buf.name << endl;
  selector sel = generate_select_decl(options, out, outpt, buf);

  out << tab(1) << "// " << outpt << " read pattern: " << str(buf.access_map.at(outpt)) << endl;


  vector<string> possible_ports;
  for (auto pt : buf.get_in_ports()) {
    if (buf.has_bank_between(pt, outpt)) {
      possible_ports.push_back(pt);
    }
  }

  map<string, string> in_ports_to_conditions;

  //cout << possible_ports.size() << " possible ports for " << outpt << " on buffer: " << endl << buf << endl;
  for (auto inpt : possible_ports) {
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

    in_ports_to_conditions[inpt] =
      codegen_c(overlapped_read_condition);
  }

  if (possible_ports.size() == 1) {
    string inpt = possible_ports.at(0);
    string peeked_val = delay_string(options, out, inpt, outpt, buf);
    //extract_box(range(buf.access_map.at(outpt)));
    string access_val = buf.generate_linearize_ram_addr(outpt);
    cout << "Get ram string: " << access_val << endl;
    buf.get_ram_address(outpt);
    cout << "Get delay string: " << peeked_val << endl;
    cout << "Corresponding access map: " << str(buf.access_map.at(outpt)) << endl;
    sel.bank_conditions.push_back("1");
    sel.inner_bank_offsets.push_back(evaluate_dd(buf, outpt, inpt));

    out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
    out << tab(1) << "return value_" << inpt << ";" << endl;
  } else {
    for (auto port : possible_ports) {
      out << tab(1) << "if (" << map_find(port, in_ports_to_conditions) << ") {" << endl;
      string peeked_val = delay_string(options, out, port, outpt, buf);
      sel.bank_conditions.push_back("1");
      sel.inner_bank_offsets.push_back(evaluate_dd(buf, outpt, port));

      out << tab(2) << "auto value_" << port << " = " << peeked_val << ";" << endl;
      out << tab(2) << "return value_" << port << ";" << endl;
      out << tab(1) << "}" << endl << endl;
      out << tab(1) << endl;
    }
  }

  cout << "Generating debug assertion" << endl;
  select_debug_assertions(options, out, outpt, buf);
  out << "}" << endl << endl;
  cout << "Finished debug assertion" << endl;

  return sel;
}

void generate_bundles(CodegenOptions& options, std::ostream& out, UBuffer& buf) {

  out << "// # of bundles = " << buf.port_bundles.size() << endl;

  for (auto b : buf.port_bundles) {
      cout << "\t generate for bundle: " << b.first << endl;
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
  cout << "Finished bundle..." << endl;
}

void generate_hls_code(CodegenOptions& options, std::ostream& out, UBuffer& buf) {
  generate_code_prefix(options, out, buf);

  for (auto outpt : buf.get_out_ports()) {
    buf.selectors[outpt] = generate_select(options, out, outpt, buf);
  }
  cout << "\tFinished generate slection" << endl;

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

umap* UBuffer::get_lexmax_events(const std::string& outpt) {
  umap* src_map = nullptr;
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
}

isl_union_pw_qpolynomial* UBuffer::compute_dd(const std::string& read_port, const std::string& write_port) {

  isl_union_map* sched = schedule.at(write_port);
  assert(sched != nullptr);

  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  umap* rdsched = schedule.at(read_port);
  umap* wrsched = schedule.at(write_port);
  auto WritesBeforeRead =
    lex_gt(rdsched, wrsched);

  auto WriteThatProducesReadData = get_lexmax_events(read_port);

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  auto WritesBtwn = its_range((its(WritesAfterProduction, WritesBeforeRead)),
      to_uset(domain.at(write_port)));

  //cout << "WritesBtwn: " << str(WritesBtwn) << endl;

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
    CodegenOptions options,
    const std::string& inpt,
    const std::string& outpt) {
  int maxdelay = compute_dd_bound(outpt, inpt, true);
  vector<int> read_delays{0};

  // NOTE: Just to ensure we dont force everything to be a RAM
  //int num_readers = 10;
  int num_readers = 0;

  auto in_actions = domain.at(inpt);
  //cout << "\t in action : " << str(in_actions) << endl;
  auto lex_max_events = get_lexmax_events(outpt);
  //cout << "\t lexmax result: " << str(lex_max_events) << endl;
  auto act_dom =
    ::domain(its_range(lex_max_events, to_uset(in_actions)));

  //cout <<"\t act dom: " << str(act_dom) << endl;

  if (!isl_union_set_is_empty(act_dom)) {
    num_readers++;
    //auto c = compute_dd(buf, outpt, inpt);
    int qpd = compute_dd_bound(outpt, inpt, true);
    int lb = compute_dd_bound(outpt, inpt, false);

    cout << "ub: " << qpd << ", lb: " << lb << endl;

    for (int i = lb; i < qpd + 1; i++) {
      read_delays.push_back(i);
    }
  }


  string pt_type_string = port_type_string();
  string name = inpt + "_to_" + outpt;
  cout << "inpt  = " << inpt << endl;
  cout << "outpt = " << outpt << endl;
  cout << "name of bank = " << name << endl;

  auto rddom =
    unn(range(access_map.at(inpt)),
        range(access_map.at(outpt)));
  cout << "Read domain for bank: " << str(rddom) << endl;
  //Box mem_box = extract_box(rddom);

  //initial the delay map
  map<string, int> delay_map = {{outpt, read_delays.back()}};

  stack_bank bank{name, BANK_TYPE_STACK, pt_type_string, read_delays, num_readers, maxdelay, rddom, delay_map};
  //stack_bank bank{name, BANK_TYPE_RAM, pt_type_string, read_delays, num_readers, maxdelay, mem_box};

  return bank;
}


void UBuffer::generate_bank_and_merge(CodegenOptions& options) {
  // Naive always reaches target throughput
  for (auto inpt : get_in_ports()) {
    for (auto outpt : get_out_ports()) {
      auto overlap =
        its(range(access_map.at(inpt)), range(access_map.at(outpt)));

      if (!empty(overlap)) {
        stack_bank bank = compute_bank_info(options, inpt, outpt);
        add_bank_between(inpt, outpt, bank);
      }
    }
  }

  for (auto inpt : get_in_ports()) {
    // try to turn the banks for this inpt into one big linebuffer
    vector<stack_bank> receivers = receiver_banks(inpt);
    cout << "Receiver banks for " << inpt << endl;
    vector<stack_bank> mergeable;
    for (auto bnk : receivers) {
      cout << tab(1) << bnk.name << ", # read offsets: " << bnk.read_delays.size() << endl;
      cout << tab(2) << "# receivers: " << receivers.size() << endl;

      if (options.debug_options.expect_all_linebuffers) {
        //assert(receivers.size() == 1 || bnk.read_delays.size() == 2);
        assert(bnk.read_delays.size() == 2);
      }
      if (bnk.read_delays.size() == 2) {
        assert(bnk.read_delays[0] == 0);
        mergeable.push_back(bnk);
      }

    }

    if (mergeable.size() > 0) {
      if (!options.conditional_merge){
        stack_bank merged;
        merged.tp = BANK_TYPE_STACK;
        //merged.layout = Box(mergeable.at(0).layout.dimension());
        merged.rddom = isl_union_set_read_from_str(ctx, "{}");
        merged.name =
          inpt + "_merged_banks_" + str(mergeable.size());
        merged.pt_type_string =
          mergeable.at(0).pt_type_string;
        merged.num_readers = mergeable.size();
        merged.maxdelay = -1;
        for (auto m : mergeable) {
          cout << "merge: " << m.name << endl;
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

        for (auto to_replace : mergeable) {
          replace_bank(to_replace, merged);
        }
      }
      else {
        //Add a condition to the merged offset
        //First sort the delay
        sort(mergeable.begin(), mergeable.end(), [](const bank& l, const bank& r) {
                return l.maxdelay > r.maxdelay;
                });
        for (auto merge_bank : mergeable) {
            cout << merge_bank.name << " with delay : " << merge_bank.maxdelay << endl;
        }

        while(mergeable.size()) {
          //keep pop port to merged bank and replace origin bank
          stack_bank merged;
          merged.tp = BANK_TYPE_STACK;
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
              cout << "output port name: " <<  in2out.at(1) << endl;
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
        auto banks = get_banks();
        cout << "finished create bank!" << endl;
        for (bank bk : banks) {
            cout << bk.name << " has delays: ";//<< bk.read_delays << endl;
            cout << tab(1);
            for (int dl: bk.read_delays) {
                cout << dl << "," ;
            }
            cout << endl;
            for (auto dl: bk.delay_map) {
                cout <<tab(1)<< dl.first << ":" << dl.second <<endl; ;
            }

        }
      }
    }
  }
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

    //Using set for reoccuring port
    set<string> inpt_set, outpt_set;
    int cnt = 0;
    while(!bank_pool.empty()) {
        auto bk = bank_pool.top();
        auto input = get_bank_input(bk.name);
        if (bk.onlySR()) {
            //create a ub with mark of shift register
            string tmp[] = {input};
            regroup_ub.emplace_back(*this, set<string>(tmp, tmp+1), bk.get_out_ports(), cnt);
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
                auto outpts = bk.get_out_ports();
                outpt_set.insert(outpts.begin(), outpts.end());
            }
            else {
                //create a new merged ubuffer for this backend port constraint
                //UBuffer ub_grp(*this, inpt_set, outpt_set, cnt);
                regroup_ub.emplace_back(*this, inpt_set, outpt_set, cnt);
                group_port_width = 0;
                inpt_set.clear();
                outpt_set.clear();
                cnt ++;
            }
        }
    }
    //chances are that we have some leftover
    if (!inpt_set.empty()) {
        regroup_ub.emplace_back(*this, inpt_set, outpt_set, cnt);
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
  cout << "extracting address box from " << str(rddom) << endl;
  auto min_pt =
    parse_pt(sample(lexmin(rddom)));
  auto max_pt =
    parse_pt(sample(lexmax(rddom)));

  assert(min_pt.size() == max_pt.size());

  Box b(min_pt.size());
  for (size_t i = 0; i < min_pt.size(); i++) {
    size_t loc = sequence.at(i);
    b.intervals[loc] = {min_pt.at(i), max_pt.at(i)};
    cout << "min: " << min_pt.at(i) << ", max: " << max_pt.at(i) << endl;
  }
  cout << tab(1) << "result = " << b << endl;
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
    cout <<"Transform: " << str(addr_trans) << "access_map: " << str(pt_access_map) << endl;
    auto new_access_map = dot(pt_access_map, addr_trans);
    cout << "Transform separate access map: " << str(new_access_map) << endl;
    //TODO: save this bankID some where
    auto bank_id_map = simplify(dot(pt_access_map, id_trans));
    cout << "Bank ID separate access map: " << str(bank_id_map) << endl;
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
        cout << "\t Addr: " << ret.back() << endl;
    }
    return ret;
}

vector<string> UBuffer::get_ram_address(const std::string& pt) {
    auto pt_access_map = to_map(access_map.at(pt));
    return map2address(pt_access_map);
}

string UBuffer::generate_linearize_ram_addr(const std::string& pt) {

    auto address_map = separate_offset_dim(pt);
    vector<string> addr_vec = map2address(to_map(address_map));

    vector<size_t> sequence;
    for (size_t i = 0; i < get_out_dim(to_map(address_map)); i ++) {
        sequence.push_back(i);
    }

    auto address_box = extract_addr_box(range(address_map), sequence);
    vector<string> addr_vec_out;
    for (size_t i = 0; i < get_out_dim(to_map(address_map)); i ++) {
        string item = "(" + addr_vec.at(i) + ") * " + to_string(address_box.cardinality(i));
        addr_vec_out.push_back(item);
    }
    return sep_list(addr_vec_out, "", "", " + ");
}

map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string in_op = access_pattern.at(in_pt_name).op_name;
    string out_op = access_pattern.at(out_pt_name).op_name;
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

    cout << "\tin: " << in_new_sched_vec << "\n\tout: " << out_new_sched_vec << endl;
    cout << "\tin vec: " << in_vectorized_sched_vec << "\n\tout vec: " << out_vectorized_sched_vec << endl;
    map<string, isl_map*> new_sched;
    auto in_sched_new = gen_map_from_sched_vec(ctx, in_new_sched_vec, in_op);
    new_sched.insert(make_pair(in_op, in_sched_new));
    auto out_sched_new = gen_map_from_sched_vec(ctx, out_new_sched_vec, out_op);
    new_sched.insert(make_pair(out_op, out_sched_new));
    auto in_vec_sched = gen_map_from_sched_vec(ctx, in_vectorized_sched_vec, in_op + "_vec");
    new_sched.insert(make_pair(in_op + "_vec", in_vec_sched));
    auto out_vec_sched = gen_map_from_sched_vec(ctx, out_vectorized_sched_vec, out_op + "_vec");
    new_sched.insert(make_pair(out_op + "_vec", out_vec_sched));

    cout << "\tnew in map: " << str(in_sched_new)
    << "\n\tvec in map: " << str(in_vec_sched)
    << "\n\tnew out map: " << str(out_sched_new)
    << "\n\tvec out map: " << str(out_vec_sched) << endl;

    return new_sched;
}


void UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, map<string, isl_map*> sched_map, string origin_pt_name, string bd_name, int dim_id, int fetch_width, bool is_out) {

    AccessPattern acc_pattern = access_pattern.at(origin_pt_name);
    auto constraint_slices = acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
    size_t new_pt_cnt = 0;

    isl_set* dom = range(to_map(rewrite_buf2op));
    auto sched_new = its(sched_map.at(acc_pattern.op_name+"_vec"), dom);

    for (auto slice : constraint_slices) {
        cout << "Constraint: " << str(slice) << endl;
        cout << "origin: " << str(rewrite_buf2op) << endl;
        cout << "Rewrited Access Map" << str(simplify(dot(inv(rewrite_buf2op), slice))) << endl;
        auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
        if (is_out) {
            string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
            target_buf.port_bundles[bd_name].push_back(pt_name);
            target_buf.add_out_pt(pt_name, dom, to_map(rewrite_access_map), sched_new);
            target_buf.add_access_pattern(pt_name, acc_pattern.op_name+"_vec", target_buf.name);
        }
        else {
            string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
            target_buf.port_bundles[bd_name].push_back(pt_name);
            target_buf.add_in_pt(pt_name, dom, to_map(rewrite_access_map), sched_new);
            target_buf.add_access_pattern(pt_name, acc_pattern.op_name+"_vec", target_buf.name);

            //LOOK at the name to judge if we need to remap the buffer
            size_t found = target_buf.name.find("tb");
            if(found != string::npos) {
                auto acc_pt = target_buf.access_pattern.at(pt_name);
                auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id);
                //cout << "\tdecoupled map:" << str(decouple_acc_map) << endl;
                target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
                target_buf.add_access_pattern(pt_name, acc_pattern.op_name+"_vec", target_buf.name);
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

    //Only test bundle size = 1
    assert(in_bundle.size() == 1 && out_bundle.size() == 1);

    //produce naive schedule for the rewrited buffer
    map<string, isl_map*> new_sched =  produce_vectorized_schedule(pick(in_bundle), pick(out_bundle));
    //assert(false);

    for (auto bd_name : in_bundle) {
        cout << "Vectorize input port bundle: " << bd_name << endl;
        for (auto in_pt_name : port_bundles.at(bd_name) ) {
            cout << "\tvectorize input port: " << in_pt_name << endl;
            auto acc_pattern = access_pattern.at(in_pt_name);
            auto acc_pattern_vec = acc_pattern.vectorization(dim_id, fetch_width);
            std::cout << "before rewrite: " << acc_pattern << endl;

            //produce the operation transfomation
            isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width);
            std::cout << "transform rewrite: " << str(op_trans) << endl;

            auto rewrite_buf2op = dot(inv(access_map.at(in_pt_name)), op_trans);
            cout << "rewrite buffer to op map: " << str(access_map.at(in_pt_name)) << endl;

            //add in port to agg_buf
            auto inpt_acc_map = remap_access_to_new_buffer(in_pt_name, "_agg");
            cout << "Access map add to agg_in: " << str(inpt_acc_map) << endl;
            agg_buf.add_in_pt(in_pt_name+"_in", domain.at(in_pt_name), inpt_acc_map, its(new_sched.at(acc_pattern.op_name), domain.at(in_pt_name)));
            agg_buf.port_bundles[bd_name+"_agg_in"].push_back(in_pt_name + "_in");

            //add out port to agg_buf
            add_vectorized_pt_to_ubuf(agg_buf, rewrite_buf2op, new_sched, in_pt_name, bd_name+"_agg_out", dim_id, fetch_width, true);
            //add in port to sram
            add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, new_sched, in_pt_name, bd_name, dim_id, fetch_width, false);
       }
    }

    for (auto bd_name: out_bundle) {
        cout << "Vectorize output port bundle: " << bd_name << endl;
        for (auto out_pt_name : port_bundles.at(bd_name) ) {
            cout << "\tVectorize output port: " << out_pt_name << endl;
            auto acc_pattern = access_pattern.at(out_pt_name);

            auto acc_pattern_vec = acc_pattern.vectorization(dim_id, fetch_width);
            std::cout << "before rewrite: " << acc_pattern << endl;

            //produce the operation transfomation
            isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width);
            std::cout << "transform rewrite: " << str(op_trans) << endl;

            auto rewrite_buf2op = dot(inv(access_map.at(out_pt_name)), op_trans);
            cout << "rewrite buffer to op map: " << str(access_map.at(out_pt_name)) << endl;

            auto outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id);
            outpt_acc_map = add_range_suffix(outpt_acc_map, "_tb");
            cout << "Access map decouple reuse: " << str(outpt_acc_map) << endl;
            tb.add_out_pt(out_pt_name+"_out", domain.at(out_pt_name), outpt_acc_map, its(new_sched.at(acc_pattern.op_name), domain.at(out_pt_name)));
            tb.port_bundles[bd_name+"_tb_out"].push_back(out_pt_name + "_out");

            //add out port to tb
            add_vectorized_pt_to_ubuf(tb, rewrite_buf2op, new_sched, out_pt_name, bd_name+"_tb_in", dim_id, fetch_width, false);

            //add in port to sram
            add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, new_sched, out_pt_name, bd_name, dim_id, fetch_width, true);
        }
    }

    cout << "AGG : " << agg_buf << endl;
    cout << "SRAM: " << sram << endl;
    cout << "TB  : " << tb << endl;
    cout << "AGG Schedule: " << str(agg_buf.global_schedule()) << endl;
    cout << "SRAM Schedule: " << str(sram.global_schedule()) << endl;
    cout << "TB Schedule: " << str(tb.global_schedule())  << endl;
}

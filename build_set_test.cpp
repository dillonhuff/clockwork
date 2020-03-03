#include "isl_utils.h"

#include <stack>
#include <regex>
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

#include "utils.h"

vector<int> parse_pt(isl_point* p) {
  return parse_pt(str(p));
}

struct CodegenOptions {
  bool internal;
  bool all_rams;
  bool add_dependence_pragmas;

  CodegenOptions() : internal(true), all_rams(false), add_dependence_pragmas(true) {}
};

class UBuffer {

  public:
    int port_widths;
    struct isl_ctx* ctx;
    string name;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;
    std::map<string, isl_map*> access_map;
    std::map<string, isl_union_map*> schedule;
    std::map<string, vector<string> > port_bundles;


    UBuffer() : port_widths(32) {}

    isl_union_map* bundle_access(const std::string& bn) {
      auto d = isl_union_map_read_from_str(ctx, "{}");
      for (auto pt : port_bundles.at(bn)) {
        d = unn(d, cpy(to_umap(access_map.at(pt))));
      }
      return d;
    }

    isl_union_set* bundle_domain(const std::string& bn) {
      auto d = isl_union_set_read_from_str(ctx, "{}");
      for (auto pt : port_bundles.at(bn)) {
        d = unn(d, cpy(to_uset(domain.at(pt))));
      }
      return d;
    }

    int port_width(const std::string& port_name) const {
      return port_widths;
    }

    std::string port_type_string() const {
      if (port_widths == 32) {
        return "hw_uint<32> ";
      }
      return "hw_uint<" + to_string(port_widths) + ">";
    }
    std::string port_type_string(const std::string& name) const {
      if (port_width(name) == 32) {
        return "hw_uint<32> ";
      }
      return "hw_uint<" + to_string(port_width(name)) + ">";
    }

    int port_bundle_width(const std::string& bundle_name) {
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return len;
    }

    std::string bundle_type_string(const std::string& bundle_name) const {
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return "hw_uint<" + to_string(len) + ">";
    }

    std::string bundle_stream(const std::string& bundle_name) const {
      bool input_bundle = isIn.at(pick(port_bundles.at(bundle_name)));
      string bundle_type_str = bundle_type_string(bundle_name);
      return string(input_bundle ? "Input" : "Output") + "Stream<" + bundle_type_str + " >& " + bundle_name;
    }

    isl_union_map* global_schedule() {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto other : schedule) {
        s = unn(s, (cpy(other.second)));
      }

      return s;
    }

    bool is_out_pt(const std::string& name) const {
      return !isIn.at(name);
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = (sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = (sched);
      isIn[name] = true;
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = to_umap(sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = to_umap(sched);
      isIn[name] = true;
    }

    void add_out_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = true;
    }

    void add_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      domain[name] =
        isl_set_read_from_str(ctx, dm.c_str());
      access_map[name] =
        isl_map_read_from_str(ctx, access.c_str());
      schedule[name] =
        isl_union_map_read_from_str(ctx, sched.c_str());
    }

    vector<string> get_out_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    void set_default_bundles() {
      for (auto pt : get_out_ports()) {
        port_bundles[pt] = {pt};
      }

      for (auto pt : get_in_ports()) {
        port_bundles[pt] = {pt};
      }

      assert(get_in_bundles().size() >= get_in_ports().size());
    }

    string get_bundle(const std::string& port) const {
      for (auto b : port_bundles) {
        for (auto bp : b.second) {
          cout << "Trying bundle: " << bp << endl;
          if (bp == port) {
            return b.first;
          }
        }
      }

      cout << "Error: No bundle for: " << port << endl;
      assert(false);
      return "";
    }

    vector<string> get_in_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (!is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_in_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_out_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (!m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    string get_in_port() const {
      for (auto m : isIn) {
        if (m.second) {
          return m.first;
        }
      }
      assert(false);
    }

};

int compute_max_dd(UBuffer& buf, const string& inpt);

std::ostream& operator<<(std::ostream& out, UBuffer& buf) {
  out << "--- " << buf.name << endl;
  out << "\t---- In ports" << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "\t\t" << inpt << endl;
    out << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
    out << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
    out << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    out << "\t\t\tbuffer capacity: " << compute_max_dd(buf, inpt) << endl;
    out << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
    out << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
  }

  out << "\t---- Out ports" << endl;
  for (auto inpt : buf.get_out_ports()) {
    out << "\t\t" << inpt << endl;
    out << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
    out << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
    out << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    out << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
    out << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
  }

  out << "\t---- Output Bundles" << endl;
  for (auto out_bundle : buf.get_out_bundles()) {
    out << "\t\t" << out_bundle << endl;
    auto ports = buf.port_bundles.at(out_bundle);
    out << "\t\t---- Ports..." << endl;
    for (auto p : ports) {
      out << "\t\t\t" << p << endl;
    }

    if (buf.get_in_ports().size() == 0) {
      continue;
    }

    auto inpt = pick(buf.get_in_ports());

  }
  return out;
}

isl_stat get_const(isl_set* s, isl_qpolynomial* qp, void* user) {
  vector<int>* vals = (vector<int>*) user;

  isl_val* v = isl_qpolynomial_get_constant_val(qp);
  long vs = isl_val_get_num_si(v);
  if (vals->size() == 0 ||
      vals->back() != vs) {
    vals->push_back(vs);
  }
  return isl_stat_ok;
}

string codegen_c_constraint(isl_constraint* c) {

  vector<string> non_zero_coeffs;
  string resstr;
  stringstream ss(resstr);
  isl_space* s = get_space(c);
  if (isl_space_is_map(s)) {
    assert(false);
  } else {
    assert(isl_space_is_set(s));
    for (int i = 0; i < num_dims(s); i++) {
      auto v = isl_constraint_get_coefficient_val(c, isl_dim_set, i);
      if (!isl_val_is_zero(v)) {
        if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
          string dn = "d" + to_string(i);
          auto new_id = id(ctx(c), dn);
          assert(new_id != nullptr);
          cout << "setting id: " << str(new_id) << endl;
          s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
        }
        non_zero_coeffs.push_back(
            str(isl_constraint_get_coefficient_val(c, isl_dim_set, i)) + "*" + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
    }
  }

  ss << "/* constraint: " << str(c) << " */" << endl;
  ss << sep_list(non_zero_coeffs, "", "", " + ");

  auto cv = isl_constraint_get_constant_val(c);
  if (!isl_val_is_zero(cv)) {
    ss << " + " << str(isl_constraint_get_constant_val(c));
  }
  if (isl_constraint_is_equality(c)) {
    ss << " == " << "0";
  } else {
    ss << " >= " << "0";
  }

  return ss.str();
}

isl_stat uset_collect_set(isl_set* c, void* user) {
  vector<isl_set*>& code_holder = *((vector<isl_set*>*) user);
  code_holder.push_back(cpy(c));
  return isl_stat_ok;
}

isl_stat collect_constraint(isl_constraint* c, void* user) {
  vector<isl_constraint*>& code_holder = *((vector<isl_constraint*>*) user);
  string cc = codegen_c_constraint(c);
  code_holder.push_back(cpy(c));
  return isl_stat_ok;
}

isl_stat codegen_constraint(isl_constraint* c, void* user) {
  // TODO: Update to get DIV!!!
  vector<string>& code_holder = *((vector<string>*) user);
  string cc = codegen_c_constraint(c);
  code_holder.push_back(cc);
  return isl_stat_ok;
}

isl_stat bset_collect_constraints(isl_basic_set* m, void* user) {
  isl_basic_set_foreach_constraint(m, collect_constraint, user);
  return isl_stat_ok;
}

isl_stat bmap_codegen_c(isl_basic_map* m, void* user) {
  isl_basic_map_foreach_constraint(m, codegen_constraint, user);

  return isl_stat_ok;
}

std::string codegen_c(isl_set* s) {
  vector<isl_constraint*> code_holder;
  isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  vector<string> set_strings;
  for (auto hc : code_holder) {
    set_strings.push_back(codegen_c_constraint(hc));
  }
  return sep_list(set_strings, "(", ")", " && ");
}

std::string codegen_c(isl_union_set* s) {
  vector<isl_set*> code_holder;
  isl_union_set_foreach_set(s, uset_collect_set, &code_holder);
  vector<string> set_strings;
  for (auto hc : code_holder) {
    set_strings.push_back(codegen_c(hc));
  }
  return sep_list(set_strings, "(", ")", " || ");
}

isl_stat return_piece(isl_set* domain, isl_qpolynomial* val, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  v->push_back({domain, val});
  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_pw_qpolynomial_foreach_piece(p, return_piece, &terms);
  return terms;
}

isl_stat get_pw_qpolynomial_fold(isl_pw_qpolynomial_fold* qp, void* user) {
  vector<isl_pw_qpolynomial_fold*>* v = (vector<isl_pw_qpolynomial_fold*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat get_pw_qpolynomial(isl_pw_qpolynomial* qp, void* user) {
  vector<isl_pw_qpolynomial*>* v = (vector<isl_pw_qpolynomial*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat return_pieces(isl_pw_qpolynomial* qp, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  auto pieces = get_pieces(qp);
  for (auto p : pieces) {
    v->push_back(p);
  }

  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_union_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, return_pieces, &terms);
  return terms;
}

vector<isl_pw_qpolynomial_fold*>
get_polynomial_folds(isl_union_pw_qpolynomial_fold* p) {
  vector<isl_pw_qpolynomial_fold*> terms;
  isl_union_pw_qpolynomial_fold_foreach_pw_qpolynomial_fold(p, get_pw_qpolynomial_fold, &terms);
  return terms;
}

vector<isl_pw_qpolynomial*>
get_polynomials(isl_union_pw_qpolynomial* p) {
  vector<isl_pw_qpolynomial*> terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, get_pw_qpolynomial, &terms);
  return terms;
}

isl_stat return_term(isl_term* t, void* user) {
  vector<isl_term*>* v = (vector<isl_term*>*) user;
  v->push_back(t);
  return isl_stat_ok;
}

vector<isl_term*> get_terms(isl_qpolynomial* qp) {
  vector<isl_term*> terms;
  isl_qpolynomial_foreach_term(qp, return_term, &terms);
  return terms;
}

std::string codegen_c(isl_term* t) {
  vector<string> exps;
  for (int i = 0; i < isl_term_dim(t, isl_dim_set); i++) {
    int exp = isl_term_get_exp(t, isl_dim_set, i);
    exps.push_back("pow(i_" + to_string(i) + ", " + to_string(exp) + ")");
  }

  return "(" + str(isl_term_get_coefficient_val(t)) + "*" + sep_list(exps, "", "", "*") + ")";
}

isl_stat codegen_domain(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(domain));
  return isl_stat_ok;
}

isl_stat codegen_value(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(qp));
  return isl_stat_ok;
}

isl_stat map_codegen_c(isl_map* m, void* user) {
  auto cardm = card(m);

  vector<string>& code_holder = *((vector<string>*) user);
  isl_pw_qpolynomial_foreach_lifted_piece(cardm, codegen_domain, (void*)(&code_holder));

  return isl_stat_ok;
}

isl_stat umap_codegen_c_comp(isl_map* m, void* user) {
  map<string, string>& mc = *((map<string, string>*) user);
  mc[range_name(get_space(m))] = str(m);

  vector<string> holder;
  map_codegen_c(m, &holder);
  mc[range_name(get_space(m))] = sep_list(holder, "(", ")", " || ");

  return isl_stat_ok;
}

map<string, string> umap_codegen_c(umap* const um) {
  map<string, string> cm;
  isl_union_map_foreach_map(um, umap_codegen_c_comp, (void*) (&cm));
  return cm;
}

int bnd_int(isl_union_pw_qpolynomial_fold* bound) {
  auto folds  = get_polynomial_folds(bound);
  int bint;
  if (folds.size() == 0) {
    bint = 0;
  } else {
    assert(folds.size() == 1);
    string str_bnd = codegen_c(folds[0]);
    cout << "\tbound: " << str_bnd << endl;

    if (is_number(str_bnd)) {
      bint = safe_stoi(str_bnd);
      return bint;
    } else {
      regex cm("\\((.*)\\)/(.*)");
      smatch match;
      auto res = regex_search(str_bnd, match, cm);
      assert(res);
      return safe_stoi(match[1]) / safe_stoi(match[2]);
    }
  }
  return bint;
}

int int_lower_bound(isl_union_pw_qpolynomial* range_card) {
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(cpy(range_card), isl_fold_min, b);
  return bnd_int(bound);
}

int int_upper_bound(isl_union_pw_qpolynomial* range_card) {
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(cpy(range_card), isl_fold_max, b);
  return bnd_int(bound);
}

umap* get_lexmax_events(const std::string& outpt, UBuffer& buf) {
  //cout << "Getting lexmax events for " << outpt << endl;
  umap* src_map = nullptr;
  for (auto inpt : buf.get_in_ports()) {
    //cout << "outpt sched: " << str(buf.schedule.at(outpt)) << endl;
    //cout << "inpt sched : " << str(buf.schedule.at(inpt)) << endl;
    auto beforeAcc = lex_gt(buf.schedule.at(outpt), buf.schedule.at(inpt));
    //cout << "Got beforeacc" << endl;
    //cout << "\t" << str(beforeAcc) << endl;
    if (src_map == nullptr) {
      auto outmap = buf.access_map.at(outpt);
      auto inmap = buf.access_map.at(inpt);
      //cout << "outmap: " << str(outmap) << endl;
      //cout << "inmap : " << str(inmap) << endl;
      src_map =
        its(dot(outmap,
              inv(inmap)), beforeAcc);
      //cout << "Got first srcmap" << endl;
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
  uset* written_values = to_uset(range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, to_umap(buf.access_map.at(outpt)));
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

umap* death_schedule(const string& inpt, UBuffer& buf) {

  auto sched = buf.global_schedule();
  //cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  assert(writes!= nullptr);

  //cout << "Access map: " << str(writes) << endl;

  auto writers = inv(writes);
  assert(writers != nullptr);
  //cout << "Writer map: " << str(writers) << endl;
  uset* written_values = to_uset(range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, to_umap(buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  //cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  //cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  assert(reads_from_fifo != nullptr);

  //cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  // Should be lexmax in the schedule
  auto last_read = lexmax(vals_to_reads);
  //cout << "Last read: " << str(last_read) << endl;

  //auto read_op_sched = dot(vals_to_reads, sched);
  //cout << "read schedule : " << str(read_sched) << endl;
  auto death_sched = dot(last_read, sched);
  return death_sched;
}

umap* forced_eviction_times(const string& inpt, UBuffer& buf) {
  auto sched = buf.global_schedule();
  cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  assert(writes!= nullptr);

  cout << "Access map: " << str(writes) << endl;

  auto writers = inv(writes);
  assert(writers != nullptr);
  cout << "Writer map: " << str(writers) << endl;
  uset* written_values = to_uset(range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, to_umap(buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  //cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  //cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  assert(reads_from_fifo != nullptr);

  cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  // Should be lexmax in the schedule
  auto last_read = lexmax(vals_to_reads);
  cout << "Last read: " << str(last_read) << endl;

  //auto read_op_sched = dot(vals_to_reads, sched);
  //cout << "read schedule : " << str(read_sched) << endl;
  auto death_sched = dot(last_read, sched);
  //cout << "death schedule: " << str(death_sched) << endl;

  auto earlier_events =
    unn(lex_gt(read_sched, write_sched), lex_gt(read_sched, death_sched));
  auto esched = unn(death_sched, write_sched);

  assert(esched != nullptr);

  auto earlier_event_times = dot(earlier_events, esched);
  auto earliest_event_time = lexmax(earlier_event_times);
  auto earliest_event = dot(earliest_event_time, inv(esched));

  auto forced_eviction_times =
    its(death_sched, range(earliest_event));
  //cout << "forced eviction times: " << str(forced_eviction_times) << endl;
  return forced_eviction_times;
}

void print_death_times(UBuffer& buf) {

  auto sched = buf.global_schedule();
  for (auto inpt : buf.get_in_ports()) {
    cout << "Port: " << inpt << endl;
    auto writes = buf.access_map.at(inpt);
    cout << "Access map: " << str(writes) << endl;
    auto writers = inv(writes);
    cout << "Writer map: " << str(writers) << endl;
    uset* written_values = to_uset(range(writes));
    isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
    for (auto outpt : buf.get_out_ports()) {
      reads_from_fifo =
        unn(reads_from_fifo, to_umap(buf.access_map.at(outpt)));
    }
    reads_from_fifo = its_range(reads_from_fifo, written_values);
    cout << "Reads: " << str(reads_from_fifo) << endl;

    auto write_sched = its(sched, domain(writes));
    cout << "Write schedule: " << str(write_sched) << endl;

    auto read_sched = its(sched, domain(reads_from_fifo));
    cout << "Read schedule: " << str(read_sched) << endl;
    auto vals_to_reads = inv(reads_from_fifo);

    // Should be lexmax in the schedule
    auto last_read = lexmax(vals_to_reads);
    //cout << "Last read: " << str(last_read) << endl;

    //auto read_op_sched = dot(vals_to_reads, sched);
    //cout << "read schedule : " << str(read_sched) << endl;
    auto death_sched = dot(last_read, sched);
    cout << "death schedule: " << str(death_sched) << endl;

    auto earlier_events =
      unn(lex_gt(read_sched, write_sched), lex_gt(read_sched, death_sched));
    auto esched = unn(death_sched, write_sched);

    auto earlier_event_times = dot(earlier_events, esched);
    auto earliest_event_time = lexmax(earlier_event_times);
    auto earliest_event = dot(earliest_event_time, inv(esched));

    auto forced_eviction_times =
      its(death_sched, range(earliest_event));
    cout << "forced eviction times: " << str(forced_eviction_times) << endl;

    cout << "earliest event: " << str(earliest_event) << endl;
    bool event_isnt_death = isl_union_set_is_empty(its(domain(death_sched), range(earliest_event)));
    bool event_is_death = !event_isnt_death;

    cout << "Earliest event is death ?" << event_is_death << endl;

    //assert(!event_is_death);

    //cout << "reads to earlier events: " << str(earlier_events) << endl;
    //cout << "reads to earliest event: " << str(lexmin(earlier_events)) << endl;


    // Reads -> times
    // Writes -> times
    // Deaths -> times
    // Get umap from death time to read time

    // (read, earlier deaths) | (read, earlier writes)
    // get last in schedule?
  }
}

// Compute a map from data read on read port to the fifo
// offset of the data in the FIFO cache for write_port
isl_union_pw_qpolynomial* compute_fifo_addr(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  cout << "Getting fifo addrs for: " << read_port << " to " << write_port << " in: " << buf.name << endl;

  isl_union_map* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);

  //print_death_times(buf);

  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  umap* rdsched = buf.schedule.at(read_port);
  umap* wrsched = buf.schedule.at(write_port);
  auto WritesBeforeRead =
    lex_gt(rdsched, wrsched);

  auto WriteThatProducesReadData =
    get_lexmax_events(read_port, buf);

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  auto WritesBtwn = (its(WritesAfterProduction, WritesBeforeRead));

  cout << "WritesBtwn: " << str(WritesBtwn) << endl;

  // Also need: evictsbetween?
  // img_comp -> imgs evicted?
  umap* evict_sched = forced_eviction_times(write_port, buf);
  cout << "Evict sched: " << str(evict_sched) << endl;
  cout << "rdsched    : " << str(rdsched) << endl;
  auto EvictsBeforeRead =
    lex_gt(rdsched, evict_sched);

  cout << "EvictsBeforeRead: " << str(EvictsBeforeRead) << endl;

  auto EvictsAfterAction =
    lex_lt(sched, evict_sched);
  auto EvictsAfterProduction =
    dot(WriteThatProducesReadData, EvictsAfterAction);

  auto EvictsBtwn = its(EvictsAfterProduction, EvictsBeforeRead);
  cout << "EvictsBtwn: " << str(EvictsBtwn) << endl;
  //assert(false);

  return card(unn(EvictsBtwn, WritesBtwn));

  //umap* last_readers =
    //last_reads(write_port, buf);
  //cout << "Last reads: " << str(last_readers) << endl;

  //// I should really compute addresses at a given time
  //cout << "eviction sched: " << str(evict_sched) << endl;
  //auto writes = buf.access_map.at(write_port);
  //cout << "Access map: " << str(writes) << endl;
  //auto writers = inv(writes);

  //auto EvictsAfterProduction =
    //lex_lt(dot(writers, wrsched), evict_sched);
  ////auto EvictsBeforeRead =
    ////lex_lt

  //cout << "Evictions after production: " << str(EvictsAfterProduction) << endl;
  ////assert(empty(domain(evict_sched)));

  //auto death_sched = death_schedule(write_port, buf);
  //auto EvictsBeforeDeath =
    //lex_gt(death_sched, evict_sched);
  //cout << "Evictions before death    : " << str(EvictsBeforeDeath) << endl;

  //// TODO: Intersect with evicts after production
  //auto EvictsInLifetime =
    ////EvictsBeforeDeath;
    //its(EvictsBeforeDeath, EvictsAfterProduction);

  //cout << "Evictions in lifetime     : " << str(EvictsInLifetime) << endl;
  //auto writeTimes = dot(WritesBtwn, sched);
  //cout << "writeTimes: " << str(writeTimes) << endl;
  //assert(writers != nullptr);
  //cout << "writers   : " << str(writers) << endl;
  //auto evictTimes = dot(EvictsInLifetime, evict_sched);
  //cout << "EvictTimes: " << str(evictTimes) << endl;
  //auto shift_times = coalesce(unn(writeTimes, evictTimes));
  //cout << "shift times: " << str(shift_times) << endl;
  //auto c = card(shift_times);
  ////unn(dot(WritesBtwn, sched), EvictsAfterProduction));
  //cout << "got card" << endl;
  //return c;
}

isl_union_pw_qpolynomial* compute_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  //return compute_fifo_addr(buf, read_port, write_port);

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

  auto WritesBtwn = (its(WritesAfterProduction, WritesBeforeRead));

  cout << "WritesBtwn: " << str(WritesBtwn) << endl;

  auto c = card(WritesBtwn);
  cout << "got card" << endl;
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
  cout << "DD: " << str(c) << endl;
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
  return bnd_int(bound);
}

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);

  auto folds  = get_polynomials(c);
  if (folds.size() == 1) {
    return codegen_c(folds[0]);
  }

  assert(folds.size() == 0);
  return "0";
}

void generate_vivado_tcl(std::string& name) {
  ofstream of(name + "_hls.tcl");

  of << "open_project -reset " << name << "_proj" << endl;
  of << "set_top " << name << endl;
  of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  of << "add_files -cflags \"-I ../.. -std=c++11 -D__VIVADO_SYNTH__\" -tb tb_soda_" + name + ".cpp" << endl;
  of << "open_solution -reset \"solution1\"" << endl;
  of << "set_part {xc7k160tfbg484-2}" << endl;
  of << "list_core" << endl;
  of << "create_clock -period 5" << endl;
  of << "csynth_design" << endl;
  of << "export_design -rtl verilog" << endl;
  of << "cosim_design -rtl verilog" << endl;
  of << "exit" << endl;
  of.close();
}

void generate_vivado_tcl(UBuffer& buf) {
  generate_vivado_tcl(buf.name);
}

int compute_max_dd(UBuffer& buf, const string& inpt) {
  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    cout << "computing dd bound for " << inpt << " -> " << outpt << " on " << buf.name << endl;
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  return maxdelay;
}

void generate_fifo_cache(CodegenOptions& options, std::ostream& out, const std::string& inpt, UBuffer& buf,
    vector<int> read_delays, const int num_readers, const int maxdelay) {
  if (num_readers == 1 || options.all_rams) {
    int partition_capacity = 1 + maxdelay;
    out << "\tfifo<" << buf.port_type_string() << ", " << partition_capacity << "> f" << ";" << endl;
    out << "\tinline " + buf.port_type_string() + " peek(const int offset) {" << endl;
    out << tab(2) << "return f.peek(" << partition_capacity - 1 << " - offset);" << endl;
    out << tab(1) << "}" << endl << endl;

    if (!options.all_rams) {
      for (int i = 0; i < partition_capacity; i++) {
        int dv = i;
        out << "\tinline " << buf.port_type_string() << " peek_" << to_string(dv) << "() {" << endl;
        out << "\t\treturn f.peek(" << dv <<");" << endl;
        out << "\t}" << endl << endl;
      }
    }
    out << endl << endl;
    out << "\tinline void push(const " + buf.port_type_string() + " value) {" << endl;
    if (options.add_dependence_pragmas) {
      out << "#ifdef __VIVADO_SYNTH__" << endl;
      out << "#pragma HLS dependence array inter false" << endl;
      out << "#endif //__VIVADO_SYNTH__" << endl;
    }
    out << tab(2) << "return f.push(value);" << endl;
    out << tab(1) << "}" << endl << endl;
  } else {
    read_delays = sort_unique(read_delays);

    vector<int> break_points;
    if (read_delays.size() == 1) {
      break_points = {read_delays[0], read_delays[0]};
    } else {
      for (size_t i = 0; i < read_delays.size(); i++) {
        break_points.push_back(read_delays[i]);
        if (i < read_delays.size() - 1 && read_delays[i] != read_delays[i + 1] + 1) {
          break_points.push_back(read_delays[i] + 1);
        }
      }
    }
    read_delays = break_points;

    vector<string> partitions;
    vector<int> end_inds;
    if (read_delays.size() > 0) {
      for (size_t i = 0; i < read_delays.size(); i++) {
        int current = read_delays[i];
        int partition_capacity = -1;
        if (i < read_delays.size() - 1) {
          if (read_delays[i] != read_delays[i + 1]) {
            int next = read_delays[i + 1];
            partition_capacity = next - current;
            out << "\t// Parition [" << current << ", " << next << ") capacity = " << partition_capacity << endl;
            out << "\tfifo<" << buf.port_type_string() << ", " << partition_capacity << "> f" << i << ";" << endl;
            partitions.push_back("f" + to_string(i));
            end_inds.push_back(current + partition_capacity - 1);
          }
        } else {
          partition_capacity = 1;
          out << "\t// Parition [" << current << ", " << current << "] capacity = " << partition_capacity << endl;
          out << "\tfifo<" << buf.port_type_string() << ", " << partition_capacity << "> f" << i << ";" << endl;
          partitions.push_back("f" + to_string(i));
          end_inds.push_back(current + partition_capacity - 1);
        }
      }

      out << endl << endl;
      int nind = 0;
      for (auto p : partitions) {
        int dv = end_inds[nind];
        out << "\tinline " << buf.port_type_string() << " peek_" << to_string(dv) << "() {" << endl;
        out << "\t\treturn " << p << ".back();" << endl;
        out << "\t}" << endl << endl;
        nind++;
      }
      out << endl << endl;

      out << "\tinline " + buf.port_type_string() + " peek(const int offset) {" << endl;
      nind = 0;
      for (auto p : partitions) {
        int dv = end_inds[nind];
        out << "\t\tif (offset == " << dv << ") {" << endl;
        out << "\t\t\treturn " << p << ".back();" << endl;
        out << "\t\t}" << endl;
        nind++;
      }
      out << "#ifndef __VIVADO_SYNTH__" << endl;
      out << "\t\tcout << \"Error: Unsupported offset in " << buf.name << ": \" << offset << endl;" << endl;
      out << "#endif // __VIVADO_SYNTH__" << endl;
      out << "\t\tassert(false);" << endl;
      out << "\t\treturn 0;\n" << endl;
      out << "\t}" << endl << endl;

      out << "\tinline void push(const " + buf.port_type_string() + " value) {" << endl;
      if (options.add_dependence_pragmas) {
        out << "#ifdef __VIVADO_SYNTH__" << endl;
        out << "#pragma HLS dependence array inter false" << endl;
        out << "#endif //__VIVADO_SYNTH__" << endl;
      }
      if (partitions.size() > 0) {
        for (size_t i = partitions.size() - 1; i >= 1; i--) {
          auto current = partitions[i];
          auto prior = partitions[i - 1];
          out << "\t\t" << current << ".push(" << prior << ".back());" << endl;
        }
        out << "\t\t" << partitions[0] << ".push(value);" << endl;
      }
      out << "\t}" << endl << endl;
    }
  }
  out << "};" << endl << endl;
}

void generate_memory_struct(CodegenOptions& options, std::ostream& out, const std::string& inpt, UBuffer& buf) {

  cout << "Creating struct for: " << inpt << " on " << buf.name << endl;
  //cout << buf << endl;

  cout << "Computing max delay..." << endl;
  int maxdelay = compute_max_dd(buf, inpt);
  cout << "maxdelay: " << maxdelay << endl;
  out << "struct " + inpt + "_cache {" << endl;
  out << "\t// Capacity: " << maxdelay + 1 << endl;
  vector<int> read_delays{0};
  int num_readers = 0;
  for (auto outpt : buf.get_out_ports()) {

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
  }

  generate_fifo_cache(options, out, inpt, buf, read_delays, num_readers, maxdelay);

}

void generate_code_prefix(CodegenOptions& options,
    std::ostream& out, UBuffer& buf) {

  string inpt = buf.get_in_port();
  out << "#include \"hw_classes.h\"" << endl << endl;
  vector<string> caches;
  for (auto inpt : buf.get_in_ports()) {
    generate_memory_struct(options, out, inpt, buf);
    caches.push_back(inpt);
  }

  out << "struct " << buf.name << "_cache {" << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << tab(1) << inpt << "_cache " << inpt << ";" << endl;
  }
  out << "};" << endl << endl;

  out << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "inline void " << inpt << "_write(";
    out << buf.port_type_string(inpt) + "& ";
    out << inpt << ", " << buf.name + "_cache& " << buf.name << ") {" << endl;
    out << "\t" + buf.name + "." + inpt + ".push(" + inpt + ");" << endl;
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

void generate_select_decl(CodegenOptions& options, std::ostream& out, const string& inpt, const string& outpt, UBuffer& buf) {
  out << "inline " + buf.port_type_string() + " " + outpt + "_select(";
  size_t nargs = 0;
  out << buf.name << "_cache& " << buf.name << ", ";
  nargs++;
  cout << "Getting space..." << endl;
  isl_space* s = get_space(buf.domain.at(outpt));
  assert(isl_space_is_set(s));
  cout << "Got set space: " << str(s) << endl;
  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(buf.ctx, dn);
      assert(new_id != nullptr);
      cout << "setting id: " << str(new_id) << endl;
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  out << sep_list(dim_decls, "", "", ", ");

  out << ") {" << endl;
  cout << "Created dim decls" << endl;
}

void select_debug_assertions(CodegenOptions& options, std::ostream& out, const string& inpt, const string& outpt, UBuffer& buf) {
  // ------------ Error printouts only
  vector<string> offset_printouts;
  isl_space* s = get_space(buf.domain.at(outpt));
  assert(isl_space_is_set(s));
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(buf.ctx, dn);
      assert(new_id != nullptr);
      cout << "setting id: " << str(new_id) << endl;
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }
    string name =
      str(isl_space_get_dim_id(s, isl_dim_set, i));
    offset_printouts.push_back("\" " + name + " = \" << " + name + " ");
  }

  out << "\tcout << \"Error: Unsupported offsets: \" << " << sep_list(offset_printouts, "", "", " << ") << " << endl;" << endl;
  out << "\tassert(false);\n\treturn 0;\n";
}

string delay_string(CodegenOptions& options, const string& inpt, const string& outpt, UBuffer& buf) {

  auto out_domain = buf.domain.at(outpt);
  auto qpd = compute_dd(buf, outpt, inpt);
  auto pieces = get_pieces(qpd);

  string dx = to_string(int_upper_bound(qpd));
  string delay_expr = evaluate_dd(buf, outpt, inpt);
  string value_str = "";
  bool opt_const = is_optimizable_constant_dd(inpt, outpt, buf);
  if (opt_const) {
    if (!options.all_rams && is_number(dx)) {
      value_str = inpt + ".peek_" + dx + "()";
    } else {
      value_str = inpt + ".peek" + "( /* is opt const */ " + delay_expr + ")";
    }
  } else if (pieces.size() == 0 && !options.all_rams) {
    value_str = inpt + ".peek_0()";
  } else if (pieces.size() == 1 &&
      isl_set_is_subset(cpy(out_domain), cpy(pieces[0].first))) {
    string dx = codegen_c(pieces[0].second);
    if (!options.all_rams && is_number(dx)) {
      value_str = inpt + ".peek_" + dx + "()";
    } else {
      value_str = inpt + ".peek" + "(/* is one piece but not a number */" + dx + ")";
    }
  } else {
    value_str = inpt + ".peek" + "(/* Needs general delay string */ " + delay_expr + ")";
  }
  return buf.name + "." + value_str;
}

void generate_selects(CodegenOptions& options, std::ostream& out, const string& inpt, const string& outpt, UBuffer& buf) {
  generate_select_decl(options, out, inpt, outpt, buf);

  auto lex_max_events = get_lexmax_events(outpt, buf);

  auto qpd = compute_dd(buf, outpt, inpt);
  out << tab(1) << "// qpd = " << str(qpd) << endl;
  if (buf.get_in_ports().size() == 1) {
    string inpt = *(buf.get_in_ports().begin());
    string value_str = delay_string(options, inpt, outpt, buf);
    out << "\t" << buf.port_type_string() << " value_" << inpt << " = " << value_str << ";" << endl;
    out << "\treturn value_" + inpt + ";" << endl;
  } else {
    cout << "Lexmax events: " << str(lex_max_events) << endl;
    map<string, string> ms = umap_codegen_c(lex_max_events);
    out << "\t// lexmax events: " << str(lex_max_events) << endl;
    out << tab(1) << "// " << outpt << " read pattern: " << str(buf.access_map.at(outpt)) << endl;
    vector<string> possible_ports;
    for (auto pt : buf.get_in_ports()) {
      out << tab(1) << "// " << pt << " stores range: " << str(range(buf.access_map.at(pt))) << endl;
      out << tab(2) << "// overlap with reads : " << str(its(range(buf.access_map.at(pt)), range(buf.access_map.at(outpt)))) << endl;
      auto overlap =
        its(range(buf.access_map.at(pt)), range(buf.access_map.at(outpt)));

      if (!isl_set_is_empty(overlap)) {
        possible_ports.push_back(pt);
      }
    }

    if (possible_ports.size() == 1) {
      string inpt = possible_ports.at(0);
      //string delay_expr = evaluate_dd(buf, outpt, inpt);
      string peeked_val = delay_string(options, inpt, outpt, buf);

      out << "\tauto value_" << inpt << " = " << peeked_val << ";\n";
      out << "\treturn value_" << inpt << ";" << endl;
      out << "}" << endl << endl;
      return;
    }
    cout << "Done" << endl;
    for (auto e : ms) {
      out << "\tbool select_" << e.first << " = " << e.second << ";" << endl;
    }

    for (auto inpt : buf.get_in_ports()) {
      //string delay_expr = evaluate_dd(buf, outpt, inpt);
      string peeked_val = delay_string(options, inpt, outpt, buf);

      if (options.internal) {
        out << "\t// inpt: " << inpt << endl;
        bool found_key = false;
        string k_var = "";
        for (auto k : ms) {
          out << "\t// k = " << k.first << endl;
          string prefix = buf.name + "_" + k.first;
          if (is_prefix(prefix, inpt)) {
            found_key = true;
            k_var = k.first;
          }
        }
        if (found_key) {
          assert(k_var != "");
          out << "\tint value_" << inpt << " = " << peeked_val << ";\n";
          out << "\tif (select_" + k_var + ") { return value_"+ inpt + "; }\n";
        } else {
          out << "//\tNo key for: " << inpt << endl;
        }
      } else {
        if (contains_key(inpt, ms)) {
          out << "\tint value_" << inpt << " = " << peeked_val << ";\n";
          out << "\tif (select_" + inpt + ") { return value_"+ inpt + "; }\n";
        }

      }
    }
    select_debug_assertions(options, out, inpt, outpt, buf);
  }

  out << "}" << endl << endl;
}

void generate_bundles(CodegenOptions& options, std::ostream& out, UBuffer& buf) {
  // Here I want to add an analysis to check whether a dead value will
  // ever be at the head of a port. After a bundle is read there should
  // be a check to see if the read needs to evict data from the input
  // FIFOs

  //print_death_times(buf);

  out << "// # of bundles = " << buf.port_bundles.size() << endl;
  for (auto b : buf.port_bundles) {
    out << "// " << b.first << endl;
    for (auto pt : b.second) {
      out << "//\t" << pt << endl;
    }
    string rep = pick(b.second);
    if (buf.is_out_pt(rep)) {
      out << "inline " << buf.bundle_type_string(b.first) << " " <<  buf.name << "_" << b.first << "_bundle_read(";
      vector<string> dim_decls;
      vector<string> dim_args;
      dim_decls.push_back(buf.name + "_cache& " + buf.name);
      dim_args.push_back(buf.name);
      auto outpt = *begin(b.second);
      isl_space* s = get_space(buf.domain.at(outpt));
      assert(isl_space_is_set(s));
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
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
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
      vector<string> dim_decls;
      if (options.internal) {
        dim_decls.push_back(buf.bundle_type_string(b.first) + "& " + b.first);
      } else {
        dim_decls.push_back("InputStream<" + buf.bundle_type_string(b.first)  + " >& " + b.first);
      }
      vector<string> dim_args;
      dim_decls.push_back(buf.name + "_cache& " + buf.name);
      dim_args.push_back(buf.name);
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
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
        out << "\t" << p << "_write(" << p << "_res" << ", " << buf.name << ");" << endl;
        offset += buf.port_width(p);
      }


    }
    out << "}" << endl << endl;
  }
}

void generate_hls_code(CodegenOptions& options, std::ostream& out, UBuffer& buf) {
  string inpt = buf.get_in_port();
  //cout << "Generating prefix for: " << buf.name << endl;
  generate_code_prefix(options, out, buf);

  //cout << "Generating ports" << endl;

  for (auto outpt : buf.get_out_ports()) {
    //cout << "Generating select for outpt: " << outpt << endl;
    generate_selects(options, out, inpt, outpt, buf);
  }

  generate_bundles(options, out, buf);
  out << endl << endl;
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
  isl_union_map* res = buf.global_schedule();

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

void synth_reduce_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  // for i in 0, 4:
  //    m[i] = 0
  //    for j in 0 3:
  //      r = m[i]
  //      m[i] = r + 1
  //    out = m[i]
	isl_union_set *domain =
    isl_union_set_read_from_str(ctx, "{ init[i] : 0 <= i <= 4;  read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3; update[i, j] : 0 <= i <= 4 and 0 <= j <= 3; out[i] : 0 <= i <= 4 }");
  auto naive_sched =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> [0, i, 0, 0, 0]; read0[i, j] -> [0, i, 1, j, 0]; update[i, j] -> [0, i, 1, j, 1]; out[i] -> [0, i, 2, 0, 0] }"), domain);
  //cout << "Code for naive schedule..." << endl;
  //cout << codegen_c(naive_sched) << endl;

  auto before = lex_lt(naive_sched, naive_sched);
  auto writes =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> M[i]; update[i, j] -> M[i] }"), domain);
  auto reads =
    its(isl_union_map_read_from_str(ctx, "{ read0[i, j] -> M[i]; out[i] -> M[i] }"), domain);
	isl_union_map *validity =
    its(dot(writes, inv(reads)), before);
  //cout << "Validity" << endl;
	isl_union_map *proximity =
    cpy(validity);

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
  auto schedmap = its(isl_schedule_get_map(sched), domain);
  //cout << "Reduce schedule..." << endl;

  //cout << "Code for reduce..." << endl;
  //cout << codegen_c(schedmap) << endl;

  UBuffer buf;
  buf.name = "reduce";
  buf.ctx = ctx;

  buf.add_in_pt("init",
    "{ init[i] : 0 <= i <= 4}",
    "{ init[i] -> M[i] : 0 <= i <= 4 }",
    "{ init[i] -> [0, i, 0, 0, 0] : 0 <= i <= 4 }");

  buf.add_in_pt("update",
    "{ update[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> [0, i, 1, j, 1] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("read0",
    "{ read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> [0, i, 1, j, 0] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("out",
    "{ out[i] : 0 <= i <= 4 }",
    "{ out[i] -> M[i] : 0 <= i <= 4 }",
    "{ out[i] -> [0, i, 2, 0, 0] : 0 <= i <= 4 }");

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_reduce.cpp reduce.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_upsample_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "upsample";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i, j] : 0 <= i < 10 and 0 <= j < 2}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i, j] -> M[i] : 0 <= i < 10 and 0 <= j < 2}");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i, j] -> [i, 1, j] : 0 <= i < 10 and 0 <= j < 2 }");
  buf.isIn["read0"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_upsample.cpp upsample.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
  cout << "Upsample passed" << endl;
}

void synth_sr_boundary_condition_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "shift_reg_bc";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 10}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 10}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 9; read1[i] -> M[9] : 9 <= i < 10 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 10 }");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8; read2[i] -> M[9] : 8 <= i < 10}");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read2"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_shift_reg_bc.cpp shift_reg_bc.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);

}

void synth_wire_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "shift_reg";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i] -> M[i] : 0 <= i < 8 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 8 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 8}");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8 }");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read2"] = false;

  generate_hls_code(buf);

  int res = system("clang++ -std=c++11 tb_shift_reg.cpp shift_reg.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_lb_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "linebuffer_3x3";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i, j] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> M[j, i] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> [i, j, 0] : 0 <= i < 64 and 0 <= j < 64 }"
      );

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      string rn = "read_" + to_string(r) + "_" + to_string(c);
      buf.add_out_pt(rn,
          "{ " + rn + "[i, j] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> M[j + " + to_string(c) + ", i + " + to_string(r)  + "] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> [i + 2, j + 2, 1] : 0 <= i < 62 and 0 <= j < 62 }"
          );

      //int r0 = check_value_dd(buf, rn, "write0");
      int r0 = compute_dd_bound(buf, rn, "write0");
      cout << "Delay (" << c << ", " << r << "): " << r0 << endl;
    }
  }

  generate_hls_code(buf);

  int res = system("clang++ -std=c++11 tb_linebuffer_3x3.cpp linebuffer_3x3.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void permute_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "permute";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i] : 0 <= i < 10 }",
      "{ write0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ write0[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_in_pt("write1",
      "{ write1[i] : 0 <= i < 10 }",
      "{ write1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ write1[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read0",
      "{ read0[i] : 0 <= i < 10 }",
      "{ read0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ read0[i] -> [1, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read1",
      "{ read1[i] : 0 <= i < 10 }",
      "{ read1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ read1[i] -> [1, i] : 0 <= i < 10 }"
      );

  generate_hls_code(buf);
}

string c_sanitize(const std::string& str) {
  string res = "";
  for (auto c : str) {
    if (c == '+') {
      res += "_p_";
    } else if (c == ')') {
      res += "_rp_";
    } else if (c == '(') {
      res += "_lp_";
    } else if (c == '*') {
      res += "_m_";
    } else if (c == ' ') {
      res += "_";
    } else if (c == ',') {
      res += "_c_";
    } else if (c == '-') {
      res += "_m_";
    } else {
      res += c;
    }
  }
  return res;
}

struct op {

  op* parent;
  bool is_loop;
  int start;
  int end_exclusive;
  std::string name;
  std::vector<op*> children;
  std::set<std::string> produces;
  std::vector<pair<std::string, std::string> > produce_locs;

  std::set<std::string> consumes;
  std::vector<pair<std::string, std::string> > consume_locs;
  map<pair<string, string>, string> consumed_value_names;
  std::string func;
  vector<string> func_args;

  isl_ctx* ctx;

  op() : parent(nullptr), is_loop(false) {}

  string consumed_value_name(pair<string, string>& val_loc) {
    if (contains_key(val_loc, consumed_value_names)) {
      return map_find(val_loc, consumed_value_names);
    }
    return val_loc.first + "_value";
  }

  void add_function(const std::string& n) {
    func = n;
  }

  void add_function(const std::string& n, const vector<string>& args) {
    func = n;
    func_args = args;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    return xl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    return yl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    auto cl = yl->add_loop(c, c_min, c_max);
    return cl;
  }

  op* add_loop(const std::string& name, const int l, const int u) {
    assert(is_loop);

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this ;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    children.push_back(lp);

    return lp;
  }

  op* store(const pair<string, string>& dst, const pair<string, string>& src) {
    auto op = add_op("store_" + dst.first + "_from_" + src.first);
    op->add_load(src.first, src.second);
    op->add_store(dst.first, dst.second);
    return op;
  }

  op* stencil(const pair<string, string>& src,
      const std::string& func_name,
      const std::vector<string>& vars,
      const std::vector<vector<int> >& offsets) {
    assert(false);
    return nullptr;
  }

  op* stencil_op(const string& out_name, const string& cu, const string& in_buf, vector<string> vars, const vector<vector<int> >& offsets) {
    string var_str = comma_list(vars);
    vector<string> loads = {};
    for (auto offset : offsets) {
      assert(offset.size() == vars.size());

      loads.push_back(in_buf);
      vector<string> ofstrs;
      int i = 0;
      for (auto val : offset) {
        ofstrs.push_back(vars.at(i) + " + " + to_string(val));
        i++;
      }
      loads.push_back(comma_list(ofstrs));
    }
    cout << "Loads in stencil op: " << endl;
    for (auto ld : loads) {
      cout << "\t" << ld << endl;
    }
    return add_op({out_name, var_str}, cu, loads);
  }

  op* add_op(const pair<string, string>& src, const std::string& func_name, const std::vector<string>& loads) {
    int n_ops = children.size();
    auto res = add_op(src.first + "_" + func_name + to_string(n_ops));
    assert(loads.size() % 2 == 0);
    vector<string> ops;
    for (int i = 0; i < loads.size(); i += 2) {
      auto r = res->add_load(loads[i], loads[i + 1]);
      ops.push_back(r);
    }
    assert(ops.size() == loads.size() / 2);
    res->add_function(func_name, ops);
    res->add_store(src.first, src.second);
    return res;
  }

  op* add_op(const std::string& name) {
    auto fo = new op();
    fo->name = name;
    fo->ctx = ctx;
    children.push_back(fo);
    return fo;
  }

  string add_load(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    consumes.insert(b + "[" + loc + "]");
    consume_locs.push_back({b, loc});
    string val_name = c_sanitize(b + "_" + loc + "_value");
    consumed_value_names[{b, loc}] = val_name;
    return val_name;
  }

  void add_store(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    produces.insert(b + "[" + loc + "]");
    produce_locs.push_back({b, loc});
  }

  void add_args(const std::vector<op*>& args) {
    for (auto a : args) {
      consumes.insert(a->name);
    }
  }

  void populate_iteration_domains(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop) {
      auto nds = active_vecs;
      nds.push_back(to_string(start) + " <= " + name + " < " + to_string(end_exclusive));
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, nds);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, active_vecs);
      }
    }
  }

  void populate_schedule_vectors(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop) {
      auto nds = active_vecs;
      assert(nds.size() > 0);

      nds.push_back(name);
      nds.push_back("0");
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, nds);
        nds[nds.size() - 1] = to_string(safe_stoi(nds[nds.size() - 1]) + 1);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    }

    size_t max_len = 1;
    for (auto& v : sched_vecs) {
      auto& vecs = v.second;
      if (vecs.size() > max_len) {
        max_len = vecs.size();
      }
    }

    for (auto& v : sched_vecs) {
      size_t diff = max_len - v.second.size();
      for (size_t d = 0; d < diff; d++) {
        v.second.push_back("0");
      }
    }
  }

  void populate_iter_vars(map<op*, vector<string> >& varmap, vector<string>& active_vars) {
    if (is_loop) {
      auto nv = active_vars;
      nv.push_back(name);
      for (auto c : children) {
        c->populate_iter_vars(varmap, nv);
      }
    } else {
      varmap[this] = active_vars;
      for (auto c : children) {
        c->populate_iter_vars(varmap, active_vars);
      }
    }
  }

  set<op*> all_ops() {
    set<op*> ops{this};
    if (is_loop) {
      ops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_ops()) {
        ops.insert(op);
      }
    }
    return ops;
  }


};

typedef op loop;

struct prog {

  std::string name;
  struct isl_ctx* ctx;
  op* root;
  set<string> ins;
  set<string> outs;
  map<string, int> buffer_port_widths;
  string compute_unit_file;
  map<string, vector<int> > buffer_bounds;

  string buffer_element_type_string(const string& name) const {
    if (!contains_key(name, buffer_port_widths)) {
      return "hw_uint<32> ";
    }
    assert(contains_key(name, buffer_port_widths));

    auto width = buffer_port_widths.at(name);
    return "hw_uint<" + to_string(width) + ">";
  }

  int dim(const string& buf, const int dim) {
    if (!(contains_key(buf, buffer_bounds))) {
      cout << "No key for: " << buf << " in buffer_bounds" << endl;
    }
    assert(contains_key(buf, buffer_bounds));
    return map_find(buf, buffer_bounds).at(dim);
  }

  void stencil2(const std::string& operation) {
    regex opRe("(.*)\\((.*)\\) = (.*)\\((.*)\\((.*)\\)\\)");
    smatch match;
    auto res = regex_search(operation, match, opRe);
    assert(res);
    cout << "ResultBuffer : " << match[1] << endl;
    cout << "Index        : " << match[2] << endl;
    cout << "Operation    : " << match[3] << endl;
    cout << "Input buffer : " << match[4] << endl;
    cout << "Input inds   : " << match[5] << endl;
    assert(false);
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      conv_loads.push_back(img);
      conv_loads.push_back(rbase + " + " + to_string(r));
    }
    return conv_loads;
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re,
      const std::string& cbase, const int co, const int ce) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      for (int c = co; c < ce; c++) {
        conv_loads.push_back(img);
        conv_loads.push_back(rbase + " + " + to_string(r) + ", " + cbase + " + " + to_string(c));
      }
    }
    return conv_loads;
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re,
      const std::string& cbase, const int co, const int ce,
      const std::string& bbase, const int bo, const int be) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      for (int c = co; c < ce; c++) {
        for (int b = bo; b < be; b++) {
          conv_loads.push_back(img);
          conv_loads.push_back(rbase + " + " + to_string(r) + ", " + cbase + " + " + to_string(c) + ", " + bbase + " + " + to_string(b));
        }
      }
    }
    return conv_loads;
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max) {
    return root->add_nest(x, x_min, x_max);
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max);
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max, c, c_min, c_max);
  }

  bool is_boundary(const std::string& name) {
    return elem(name, ins) || elem(name, outs);
  }

  void add_output(const std::string& name) {
    outs.insert(name);
  }

  void add_input(const std::string& name) {
    ins.insert(name);
  }

  prog() {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
  }

  ~prog() {
    isl_ctx_free(ctx);
  }

  vector<string> cache_args(op* op) {
    vector<string> args;
    for (auto cs : op->consume_locs) {
      args.push_back(cs.first);
    }
    for (auto cs : op->produce_locs) {
      args.push_back(cs.first);
    }
    return args;
  }

  set<op*> all_ops() { return root->all_ops(); }

  op* add_op(const std::string& name) {
    return root->add_op(name);
  }

  loop* add_loop(const std::string& name, const int l, const int u) {
    return root->add_loop(name, l, u);
  }

  string op_iter(op* const o) {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    auto iters = map_find(o, ivars);
    auto vars = sep_list(iters, "[", "]", ", ");

    return o->name + vars;
  }

  isl_union_set* whole_iteration_domain() {
    map<op*, isl_set*> doms = domains();
    isl_union_set* whole_d = isl_union_set_read_from_str(ctx, "{ }");
    for (auto d : doms) {
      whole_d = unn(whole_d, to_uset(d.second));
    }
    return whole_d;
  }

  map<op*, vector<string> > iter_vars() {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);
    return ivars;
  }

  map<op*, isl_set*> domains() {
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;

    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    map<op*, isl_set*> doms;
    for (auto op : ivars) {
      //cout << "Getting op production:" << op.first->name << endl;
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto ds = sep_list(dom, "", "", " and ");

      doms[op.first] =
        isl_set_read_from_str(ctx, string("{ " + op.first->name + vars + " : " + ds + " }").c_str());

      //cout << "Got op..." << endl;
    }
    return doms;
  }

  map<op*, isl_map*> schedules() {
    map<op*, isl_map*> scheds;
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;

    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);

    map<op*, vector<string> > vecs;
    vector<string> base{"0"};
    //cout << "Calling populate sched vectors" << endl;
    root->populate_schedule_vectors(vecs, base);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    for (auto op : vecs) {
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto doms = sep_list(dom, "", "", " and ");

      scheds[op.first] =
        isl_map_read_from_str(ctx, string("{ " + op.first->name + vars + " -> " + sep_list(op.second, "[", "]", ", ") + " : " + doms + " }").c_str());

    }
    return scheds;
  }

  umap* unoptimized_schedule() {
    map<op*, isl_map*> prog_ops = schedules();
    umap* m = isl_union_map_read_from_str(ctx, "{ }");
    for (auto o : prog_ops) {
      m = unn(m, to_umap(o.second));
    }
    return m;
  }

  std::string optimized_loop_nest() {
    umap* opt_sched = optimized_codegen();
    auto domain = whole_iteration_domain();
    auto schedmap = its(opt_sched, domain);
    return codegen_c(schedmap);
  }

  umap* producer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* producer_map(const std::string& buf_name) {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces) {
        string buf = take_until(p, "[");
        if (buf == buf_name) {
          umap* vmap =
            its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
        }
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map(const std::string& buf_name) {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->consumes) {
        string buf = take_until(p, "[");
        if (buf == buf_name) {
          umap* vmap =
            its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
        }
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->consumes) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* relative_orders() {
    // Relative order of accesses for each op must be the same
    umap* rel_order = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : schedules()) {
      auto op_sched = to_umap(op.second);
      auto op_order = lex_lt(op_sched, op_sched);
      //validity = unn(validity, op_order);
      rel_order = unn(rel_order, op_order);
    }

    cout << "Rel order = " << str(rel_order) << endl;
    return rel_order;
  }

  umap* validity_deps() {
    umap* naive_sched = unoptimized_schedule();
    auto before = lex_lt(naive_sched, naive_sched);

    auto domain = whole_iteration_domain();
    auto writes =
      its(producer_map(), domain);
    auto reads =
      its(consumer_map(), domain);

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);

    //assert(false);
    return validity;
  }

  isl_schedule* optimized_schedule() {
    auto domain = whole_iteration_domain();


    auto order_deps = relative_orders();
    isl_union_map *raw_deps = validity_deps();
    auto validity =
      unn(order_deps, raw_deps);
    isl_union_map *proximity =
      cpy(raw_deps);

    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);

    cout << endl;
    cout << "Result: " << str(sched) << endl;

    // New scheduling algorithm: Build schedule tree

    //isl_schedule_constraints *sc;
    //sc = isl_schedule_constraints_on_domain(cpy(domain));
    //sc = isl_schedule_constraints_set_validity(sc, cpy(validity));
    //sc = isl_schedule_constraints_set_proximity(sc, cpy(proximity));


    //isl_schedule *mysched;
    //isl_schedule_node *node =
      //isl_schedule_node_from_domain(cpy(domain));
    //node = isl_schedule_node_child(node, 0);
    //mysched = isl_schedule_node_get_schedule(node);



    //cout << "My schedule..." << str(mysched) << endl;
    //assert(false);

    return sched;
  }

  isl_union_map* optimized_codegen() {
    auto domain = whole_iteration_domain();

    isl_schedule* sched = optimized_schedule();
    cout << "Sched: " << str(sched) << endl;
    //assert(false);
    auto schedmap = its(isl_schedule_get_map(sched), domain);
    //cout << "Schedule map: " << str(schedmap) << endl;
    //assert(false);
    return schedmap;
  }

  void unoptimized_codegen() {
    umap* sched = unoptimized_schedule();
    cout << codegen_c(sched);
  }
};

void generate_op_code(map<string, UBuffer>& buffers, op* op) {
  assert(op->func != "");
  string name = op->func;

  ofstream out(name + "_wrapper.cpp");
  vector<string> decls;
  for (auto consumed : op->consume_locs) {
    decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
  }

  for (auto consumed : op->produce_locs) {
    if (contains_key(consumed.first, buffers)) {
      decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
    }
  }
  out << "void " << name << sep_list(decls, "(", ")", ", ") << "{}";
  out.close();
}

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched);

map<string, UBuffer> build_buffers(prog& prg) {
  umap* opt_sched = prg.optimized_codegen();
  return build_buffers(prg, opt_sched);
}

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched) {
  int usuffix = 0;

  map<string, UBuffer> buffers;
  auto domains = prg.domains();
  for (auto op : prg.all_ops()) {

    for (auto produced : op->produce_locs) {
      string name = produced.first;

      if (!contains_key(name, buffers)) {
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        if (contains_key(name, prg.buffer_port_widths)) {
          buf.port_widths = map_find(name, prg.buffer_port_widths);
        }
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);

      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name + "_write"].push_back(pt_name);

      assert(contains_key(op, domains));

      // Map from??
      isl_map* produced_here =
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + produced.second + "]" + " }").c_str()), cpy(domains.at(op)));

      buf.add_in_pt(pt_name, domains.at(op), produced_here, its(opt_sched, domains.at(op)));

      usuffix++;
    }


    cout << "# of consumed locations: " << op->consume_locs.size() << endl;
    for (auto consumed : op->consume_locs) {
      string name = consumed.first;

      if (!contains_key(name, buffers)) {
        cout << "Creating ports for op: " << name << endl;
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        if (contains_key(name, prg.buffer_port_widths)) {
          buf.port_widths = map_find(name, prg.buffer_port_widths);
        }
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);

      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name + "_read"].push_back(pt_name);

      isl_map* consumed_here =
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + consumed.second + "]" + " }").c_str()), cpy(domains.at(op)));

      assert(contains_key(op, domains));

      cout << "\tAdding output port: " << pt_name << endl;
      cout << "\t\tConsumed: " << str(consumed_here) << endl;
      buf.add_out_pt(pt_name, domains.at(op), consumed_here, its(opt_sched, domains.at(op)));

      usuffix++;
    }

  }

  return buffers;
}

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap);

void generate_app_code(map<string, UBuffer>& buffers, prog& prg, umap* sched) {
  CodegenOptions options;
  options.internal = true;

  generate_app_code(options, buffers, prg, sched);
}

void generate_app_code(map<string, UBuffer>& buffers, prog& prg) {
  auto schedmap = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
  generate_app_code(buffers, prg, schedmap);
}

vector<string> get_args(const map<string, UBuffer>& buffers, prog& prg) {
  vector<string> args;
  for (auto& b : prg.ins) {
    assert(contains_key(b, buffers));
    auto& buf = buffers.at(b);

    bool found_bundle = false;
    for (auto bndl : buf.port_bundles) {
      cout << "Trying bundle: " << bndl.first << endl;
      if (is_prefix(b, bndl.first)) {
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
        found_bundle = true;
        break;
      }
    }
    if (!found_bundle) {
      cout << "No bundle for input: " << b << endl;
      cout << "No bundle for input: " << b << endl;
      auto bndl = pick(buf.port_bundles);
      string bname = bndl.first;
      vector<string> ports =
        map_find(bname, buf.port_bundles);
      args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* no bundle get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
    }
  }
  for (auto& b : prg.outs) {

    if (!contains_key(b, buffers)) {
      cout << "No buffer for: " << b << endl;
    }

    assert(contains_key(b, buffers));
    auto& buf = buffers.at(b);

    bool found_bundle = false;
    for (auto bndl : buf.port_bundles) {
      cout << "Trying bundle: " << bndl.first << endl;
      if (is_prefix(b, bndl.first)) {
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
        found_bundle = true;
        break;
      }
    }
    if (!found_bundle) {
      // TODO: Should really be an error
      cout << "No bundle for input: " << b << endl;
      auto bndl = pick(buf.port_bundles);
      string bname = bndl.first;
      vector<string> ports =
        map_find(bname, buf.port_bundles);
      args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* no bundle get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
    }

  }
  return args;
}

void generate_app_code_header(const map<string, UBuffer>& buffers, prog& prg) {
  string arg_buffers = sep_list(get_args(buffers, prg), "(", ")", ", ");
  ofstream of(prg.name + ".h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << "void " << prg.name << arg_buffers << ";" << endl;
  of.close();
}


vector<string> buffer_arg_names(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  set<string> done;
  vector<string> buf_srcs;

  for (auto p : op->consume_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  for (auto p : op->produce_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  return buf_srcs;
}

vector<string> buffer_args(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  set<string> done;
  vector<string> buf_srcs;
  for (auto p : op->consume_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      if (prg.is_boundary(buf_name)) {
        auto& buf = buffers.at(buf_name);
        pair<string, vector<string> > bundle =
          pick(buf.port_bundles);
        buf_srcs.push_back("HWStream<" + buf.bundle_type_string(bundle.first) + " >& /* buffer_args num ports = " + to_string(bundle.second.size()) + " */" + buf.name);

      } else {
        const UBuffer& b = buffers.at(buf_name);
        buf_srcs.push_back(b.name + "_cache& " + b.name);
      }
      done.insert(buf_name);
    }
  }
  for (auto p : op->produce_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      if (prg.is_boundary(buf_name)) {
        auto& buf = buffers.at(buf_name);
        pair<string, vector<string> > bundle =
          pick(buf.port_bundles);
        buf_srcs.push_back("HWStream<" + buf.bundle_type_string(bundle.first) + " >& /* buffer_args num ports = " + to_string(bundle.second.size()) + " */" + buf.name);
      } else {
        const UBuffer& b = buffers.at(buf_name);
        buf_srcs.push_back(b.name + "_cache& " + b.name);
      }
      done.insert(buf_name);
    }
  }
  return buf_srcs;
}

void generate_app_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map) {

  ofstream conv_out(prg.name + ".cpp");

  conv_out << "#include \"" << prg.compute_unit_file << "\"" << endl << endl;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      generate_hls_code(options, conv_out, b.second);
    }
  }

  //assert(false);

  conv_out << endl << endl;
  conv_out << "// Operation logic" << endl;
  for (auto op : prg.all_ops()) {
    vector<string> buf_srcs;
    concat(buf_srcs, buffer_args(buffers, op, prg));

    auto s = get_space(domain_map.at(op->name));
    assert(isl_space_is_set(s));
    vector<string> dim_args;
    for (int i = 0; i < num_dims(s); i++) {
      if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
        string dn = "d" + to_string(i);
        auto new_id = id(ctx(s), dn);
        assert(new_id != nullptr);
        cout << "setting id: " << str(new_id) << endl;
        s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
      }
      buf_srcs.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }
    conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
    vector<pair<string, string> > in_buffers;
    set<string> distinct;
    for (auto con : op->consume_locs) {
      if (!elem(con.first, distinct)) {
        in_buffers.push_back(con);
        distinct.insert(con.first);
      }
    }

    string res;
    vector<string> buf_args;

    for (auto ib : in_buffers) {
      auto in_buffer = ib.first;
      conv_out << "\t// Consume: " << in_buffer << endl;
      string value_name = op->consumed_value_name(ib);
      conv_out << "\tauto " << value_name << " = ";

      if (prg.is_boundary(in_buffer)) {
        conv_out << in_buffer << ".read();" << endl;
      } else {
        vector<string> source_delays{in_buffer};
        cout << "op = " << op->name << endl;
        conv_out << in_buffer << "_" << op->name << "_read_bundle_read(" << comma_list(source_delays) << "/* source_delay */, " << comma_list(dim_args) << ");" << endl;
      }
      buf_args.push_back(value_name);
      res = value_name;
    }

    if (op->func != "") {
      conv_out << "\tauto compute_result = " << op->func << "(" << comma_list(buf_args) << ");" << endl;
      res = "compute_result";
    }

    set<string> out_buffers;
    for (auto con : op->produce_locs) {
      out_buffers.insert(con.first);
    }
    assert(out_buffers.size() == 1);
    string out_buffer = pick(out_buffers);
    conv_out << "\t// Produce: " << out_buffer << endl;

    if (prg.is_boundary(out_buffer)) {
      conv_out << "\t" << out_buffer << ".write(" << res << ");" << endl;
    } else {
      assert(contains_key(out_buffer, buffers));

      auto& buf = buffers.at(out_buffer);
      conv_out << "\t" << out_buffer << "_" << op->name << "_write_bundle_write(" <<
        sep_list({res, buf.name}, "", "", ", ") << ");" << endl;
    }

    conv_out << "}" << endl << endl;
  }

  conv_out << "// Driver function" << endl;
  string arg_buffers = sep_list(get_args(buffers, prg), "(", ")", ", ");
  conv_out << "void " << prg.name << arg_buffers << " {" << endl;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      conv_out << tab(1) << b.first << "_cache " << b.second.name << ";" << endl;
    }
  }

  string code_string = codegen_c(schedmap);
  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
  for (auto op : prg.all_ops()) {
    regex re(op->name + "\\((.*)\\);");
    string args_list = sep_list(buffer_arg_names(buffers, op, prg), "", "", ", ");
    code_string = regex_replace(code_string, re, op->name + "(" + args_list + ", $1);");
  }

  conv_out << code_string << endl;

  conv_out << "}" << endl;

  generate_app_code_header(buffers, prg);
}

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap) {
  auto domains = prg.domains();
  map<string, isl_set*> domain_map;
  for (auto d : domains) {
    domain_map[d.first->name] = d.second;
  }

  generate_app_code(options, buffers, prg, schedmap, domain_map);
}

void generate_optimized_code(prog& prg) {
  auto sched = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());

  cout << "Optimized schedule..." << endl;
  cout << tab(1) << ": " << str(sched) << endl << endl;
  cout << codegen_c(sched) << endl;
  //assert(false);

  auto buffers = build_buffers(prg, sched);

  generate_app_code(buffers, prg, sched);
  generate_vivado_tcl(prg.name);
}

void generate_unoptimized_code(prog& prg) {
  string old_name = prg.name;

  prg.name = "unoptimized_" + prg.name;

  cout << "Unoptimized schedule..." << endl;
  auto sched = prg.unoptimized_schedule();
  cout << tab(1) << ": " << str(sched) << endl;

  cout << codegen_c(prg.unoptimized_schedule());

  //assert(false);
  auto buffers = build_buffers(prg, prg.unoptimized_schedule());

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;

  generate_app_code(options, buffers, prg, sched);

  prg.name = old_name;
}


void conv_1d_bc_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_bounds["out"] = {32 - 2, 32 - 2};

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "min(c, 9)");
  read0->add_load("M", "min(c + 1, 9)");
  read0->add_load("M", "min(c + 2, 9)");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("out", "c");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  umap* opt_sched = prg.optimized_codegen();

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_1d_bc() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  compute->add_load("M", "min(c, 9)");
  compute->add_load("M", "min(c + 1, 9)");
  compute->add_load("M", "min(c + 2, 9)");
  compute->add_store("out", "c");
  return prg;
}

prog conv_1d() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);

  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("M", "c");
  compute->add_load("M", "c + 1");
  compute->add_load("M", "c + 2");
  compute->add_store("out", "c");
  return prg;
}

void aha_talk_print_info(prog& prg);

struct tb_config {
    vector<int> indices;
    int range_inner;
    int range_outer;
    int stride;

    string csv_config_str(int tb_cnt) {
        ostringstream out;
        int pos = 0;
        for (int index : indices) {
            out << "tba_" << tb_cnt << "_tb_0_indices_"  << pos << "," << index<< endl;
            pos ++;
        }
        out << "tba_" << tb_cnt << "_tb_0_range_inner," << range_inner << endl;
        out << "tba_" << tb_cnt << "_tb_0_range_outer," << range_outer<< endl;
        out << "tba_" << tb_cnt << "_tb_0_stride," << stride<< endl;
        return out.str();
    }
};

struct memtile_config {
    int agg_align_0_line_length;

   int agg_in_0_in_period;
   int agg_in_0_in_sched_0;
   int agg_in_0_out_period;
   int agg_in_0_out_sched_0;

   int input_addr_ctrl_address_gen_0_dimensionality;
   int input_addr_ctrl_address_gen_0_ranges_0;
   int input_addr_ctrl_address_gen_0_starting_addr;
   int input_addr_ctrl_address_gen_0_strides_0;


  int output_addr_ctrl_address_gen_0_dimensionality;
  int output_addr_ctrl_address_gen_0_ranges_0;

  map<string, int> config_map;


   vector<tb_config> tb_config_vec;
   memtile_config():
       agg_align_0_line_length(64),
       agg_in_0_in_period(0),
       agg_in_0_out_period(0),
       agg_in_0_in_sched_0(0),
       agg_in_0_out_sched_0(0){
           config_map["output_addr_ctrl_address_gen_0_starting_addr"] = 0;
           config_map["output_addr_ctrl_address_gen_0_stride_0"] = 1;
           config_map["input_addr_ctrl_offsets_cfg_0_0"] = 0;
           config_map["sync_grp_sync_group_0"] = 1;
       }

   void emit_config_file_csv(string fname) {
       ofstream out(fname + ".csv");
       out << "agg_align_0_line_length," << agg_align_0_line_length << endl;
       out << "agg_in_0_in_period," << agg_in_0_in_period << endl;
       out << "agg_in_0_in_sched_0," << agg_in_0_in_sched_0 << endl;
       out << "agg_in_0_out_period," << agg_in_0_in_period << endl;
       out << "agg_in_0_out_sched_0," << agg_in_0_out_sched_0 << endl;
       out << "input_addr_ctrl_address_gen_0_dimensionality," << input_addr_ctrl_address_gen_0_dimensionality << endl;
       out << "input_addr_ctrl_address_gen_0_ranges_0," << input_addr_ctrl_address_gen_0_ranges_0 << endl;
       out << "input_addr_ctrl_address_gen_0_starting_addr," << input_addr_ctrl_address_gen_0_starting_addr << endl;
       out << "input_addr_ctrl_address_gen_0_strides_0," << input_addr_ctrl_address_gen_0_strides_0 << endl;
       out << "output_addr_ctrl_address_gen_0_dimensionality," << output_addr_ctrl_address_gen_0_dimensionality << endl;
       out << "output_addr_ctrl_address_gen_0_ranges_0," << output_addr_ctrl_address_gen_0_ranges_0 << endl;
       int i = 0;
       for (auto tb_config : tb_config_vec) {
           out << tb_config.csv_config_str(i);
           i ++;
       }

       for (auto it : config_map) {
           out << it.first << "," << it.second << endl;
       }

       out.close();
   }
};

void agg_test() {

  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "agg";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["agg"] = 32;
  prg.buffer_port_widths["tb"] = 32;
  prg.buffer_port_widths["sram"] = 32;

  auto p = prg.add_loop("p", 0, 12);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("agg", "p");

  auto c = prg.add_loop("c", 0, 3);

  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("agg", "4*c");
  compute->add_load("agg", "4*c+1");
  compute->add_load("agg", "4*c+2");
  compute->add_load("agg", "4*c+3");
  compute->add_store("sram", "4*c");
  compute->add_store("sram", "4*c+1");
  compute->add_store("sram", "4*c+2");
  compute->add_store("sram", "4*c+3");
  {
  auto c = prg.add_loop("d", 0, 3);
  auto compute = c->add_op("sram2tb");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("sram", "4*d");
  compute->add_load("sram", "4*d+1");
  compute->add_load("sram", "4*d+2");
  compute->add_load("sram", "4*d+3");
  compute->add_store("tb", "4*d");
  compute->add_store("tb", "4*d+1");
  compute->add_store("tb", "4*d+2");
  compute->add_store("tb", "4*d+3");
  }
  {
  auto p = prg.add_loop("e", 0, 12);
  auto write = p->add_op("tb2out");
  write->add_load("tb", "e");
  write->add_store("out", "e");
  }
  auto sched = prg.unoptimized_schedule();
  cout << codegen_c(sched) << endl;

  auto sched_opt = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
 // auto sched_opt = isl_schedule_get_map(prg.optimized_schedule());
  cout << codegen_c(sched_opt) << endl;
  //aha_talk_print_info(prg);
  //hardcode some configuration registers
  memtile_config memtile;
  memtile.input_addr_ctrl_address_gen_0_dimensionality = 1;
  memtile.input_addr_ctrl_address_gen_0_starting_addr = 0;
  memtile.input_addr_ctrl_address_gen_0_strides_0 = 1;

  memtile.output_addr_ctrl_address_gen_0_dimensionality = 1;

  auto buffers = build_buffers(prg, sched_opt);
  for (auto buffer : buffers) {
      if (buffer.first == "out") {
          auto buf = buffer.second;
          assert(buf.get_in_ports().size() == 1);
          string inpt = pick(buf.get_in_ports());
          int total_data =
              int_upper_bound(card(to_uset(buf.domain.at(inpt))));
          cout << "total data: " << total_data << endl;
          memtile.input_addr_ctrl_address_gen_0_ranges_0 = total_data;
          //string min = jkstr(lexmin(range(buf.access_map.at(inpt))))
          //cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
          //cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
      }
      if (buffer.first == "sram") {
          auto buf = buffer.second;
          string inpt = pick(buf.get_out_ports());
          int num_reads =
              int_upper_bound(card(to_uset(domain(buf.access_map.at(inpt)))));
          cout <<"total read: " << num_reads << endl;
          memtile.output_addr_ctrl_address_gen_0_ranges_0 = num_reads;
      }
      cout << buffer.second.name << endl;
  }

  tb_config tb;
  for (int i = 0; i < 4; i ++) {
      tb.indices.push_back(i);
  }
  tb.stride = 4;
  tb.range_inner = 4;
  tb.range_outer = 3;
  memtile.tb_config_vec.push_back(tb);

  memtile.emit_config_file_csv("lake_memtile_config");

}

std::vector<std::string> run_regression_tb(const std::string& name) {
  int res = system(string("g++ -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  ifstream infile("regression_result_" + name + ".txt");
  vector<string> lines;
  std::string line;
  while (std::getline(infile, line))
  {
    lines.push_back(line);
  }
  return lines;
}

std::vector<std::string> run_regression_tb(prog& prg) {
  return run_regression_tb(prg.name);
}


void run_tb(prog& prg) {
  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void generate_regression_testbench(prog& prg) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  vector<string> unoptimized_streams;
  vector<string> optimized_streams;
  for (auto in : prg.ins) {
    rgtb << tab(1) << "HWStream<" << prg.buffer_element_type_string(in) << " > " << in << ";" << endl;
    optimized_streams.push_back(in);
  }
  for (auto out : prg.outs) {
    rgtb << tab(1) << "HWStream<" << prg.buffer_element_type_string(out) << " > " << out << ";" << endl;
    optimized_streams.push_back(out);
  }

  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  for (auto in : prg.ins) {
    auto cmap = prg.consumer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);

    rgtb << tab(1) << "// cmap    : " << str(cmap) << endl;
    rgtb << tab(1) << "// read map: " << str(read_map) << endl;
    rgtb << tab(1) << "// rng     : " << str(rng) << endl;
    rgtb << tab(1) << "for (int i = 0; i < " << num_pushes << "; i++) {" << endl;
    rgtb << tab(2) << in << ".write(i);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << prg.name << "(" << comma_list(optimized_streams) << ");" << endl;

  for (auto in : prg.outs) {
    // TODO: Compute this from the program
    auto cmap = prg.producer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pops = int_upper_bound(range_card);
    rgtb << tab(1) << "for (int i = 0; i < " << num_pops << "; i++) {" << endl;
    rgtb << tab(2) << "int actual = " << in << ".read();" << endl;
    rgtb << tab(2) << "fout << actual << endl;" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void regression_test(prog& prg) {
  generate_unoptimized_code(prg);

  cout << "Built unoptimized code" << endl;
  auto old_name = prg.name;
  prg.name = "unoptimized_" + old_name;
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);
  prg.name = old_name;

  cout << "Building optimized code" << endl;
  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> optimized_res = run_regression_tb(prg);

  assert(unoptimized_res.size() == optimized_res.size());
  for (size_t i = 0; i < unoptimized_res.size(); i++) {

    if (!(unoptimized_res.at(i) == optimized_res.at(i))) {
      cout << "Error: After optimization, at output " << i << " unoptimized_res != optimized_res" << endl;
      cout << "\tunoptimized = " << unoptimized_res.at(i) << endl;
      cout << "\toptimized   = " << optimized_res.at(i) << endl;
      assert(unoptimized_res.at(i) == optimized_res.at(i));
    }
  }

}

void conv_1d_test() {
  prog prg = conv_1d();

  regression_test(prg);
}

isl_schedule_node* print_sched_tp(isl_schedule_node* n, void* user) {
  cout << "\tNode..." << endl;

  isl_schedule_node_type tp = isl_schedule_node_get_type(n);
  cout << "\t\ttp = " << tp << endl;
  if (tp == isl_schedule_node_sequence) {
    cout << "\t\t\tseq" << endl;
  } else if (tp == isl_schedule_node_band) {
    cout << "\t\t\tband" << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_space(n)) << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_partial_schedule_union_map(n)) << endl;

    int* ind = (int*) user;
    if (*ind == 1 || *ind == 2) {
      isl_multi_val* tile_factor = isl_multi_val_zero(isl_schedule_node_band_get_space(n));
      isl_val* tile_val = isl_val_int_from_si(isl_schedule_node_get_ctx(n), 2);
      isl_multi_val_set_val(tile_factor, 0, tile_val);

      isl_schedule_node_band_tile(n, tile_factor);
      //*seen = true;
      *ind = *ind + 1;
    } else {
      *ind = *ind + 1;
    }
  }
  return n;
}

void mmul_test() {
  prog prg;
  auto r = prg.add_loop("r", 0, 8);
  auto c = r->add_loop("c", 0, 8);
  auto rd = c->add_op("read");
  rd->add_store("T", "0");

  auto k = c->add_loop("k", 0, 8);
  auto accum = k->add_op("accum");
  accum->add_load("T", "0");
  accum->add_store("T", "0");

  auto write = c->add_op("write");
  write->add_load("T", "0");
  write->add_store("M", "r, c");


  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  isl_schedule* opt_sched = prg.optimized_schedule();

  int ind = 0;
  opt_sched = isl_schedule_map_schedule_node_bottom_up(opt_sched, print_sched_tp, &ind);


  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(isl_schedule_get_map(opt_sched), domain);
  //cout << "Optimized schedule..." << endl;
  //cout << codegen_c(schedmap);
  //assert(false);
}

void pyramid_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["T1"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "c");
  read0->add_load("M", "c + 1");
  read0->add_load("M", "c + 2");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("M1", "c");

  auto l = prg.add_loop("l", 0, 6);
  auto read1 = l->add_op("read1");
  read1->add_load("M1", "l");
  read1->add_load("M1", "l + 1");
  read1->add_load("M1", "l + 2");
  read1->add_store("T1", "l");

  auto compute1 = l->add_op("compute_out_1");
  compute1->add_function("accumulate_3");
  compute1->add_load("T1", "l");
  compute1->add_store("out", "l");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_2d() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 64);
    auto pc = pr->add_loop("pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64 - 2);
    auto pc = pr->add_loop("lc", 0, 64 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }
  return prg;
}

void pyramid_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_3x3_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*9;
  prg.buffer_port_widths["T1"] = 32*9;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 10);
    auto pc = pr->add_loop("pc", 0, 10);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 10 - 2);
    auto pc = pr->add_loop("lc", 0, 10 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("CI", "lc, lr");
  }

  {
    auto pr = prg.add_loop("dr", 0, 8 / 2);
    auto pc = pr->add_loop("dc", 0, 8 / 2);
    auto rd = pc->add_op("read_down");
    rd->add_load("CI", "2*dc, 2*dr");
    rd->add_store("D", "dc, dr");
  }

  {
    auto pr = prg.add_loop("sr", 0, 8 / 2 - 2);
    auto pc = pr->add_loop("sc", 0, 8 / 2 - 2);
    auto rd = pc->add_op("read_conv");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "sc + " + to_string(i);
        string r = "sr + " + to_string(j);
        rd->add_load("D", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "sc, sr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  //assert(false);
}

void reduce_1d_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_1d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  {
    auto read_in = prg.add_loop("rd_in", 0, 14);
    auto rop = read_in->add_op("read_input_stream");
    rop->add_load("in", "rd_in");
    rop->add_store("I", "rd_in");
  }

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_loop("a", 0, 14);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "a");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

}

void reduce_2d_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  auto read_in = prg.add_nest("rd_r", 0, 3, "rd_c", 0, 3)->add_op({"I", "rd_r, rd_c"}, "id", {"in", "rd_r, rd_c"});

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 3);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "ar, ac");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  regression_test(prg);
}

void mobilenet_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "mobilenet";
  prg.add_input("in");
  prg.add_input("weights");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["dw_conv"] = 32;
  prg.buffer_port_widths["weights"] = 32;
  prg.buffer_port_widths["I"] = 32;

  {
    auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    auto write = read_in->add_op("read_input_stream");
    write->add_load("in", "px, py, pc");
    write->add_store("I", "px, py, pc");
  }

  {
    auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    auto write = read_in->add_op("read_weight_input_stream");
    write->add_load("weights", "px, py, pc");
    write->add_store("weight_buffer", "px, py, pc");
  }

  {
    // dw_conv
    auto set_dw = prg.add_nest("dwx", 0, 14 - 2, "dwy", 0, 14 - 2, "dwc", 0, 4);
    auto init_dw = set_dw->add_op("init_dw");
    init_dw->add_store("dw_conv", "dwx, dwy, dwz");
    init_dw->add_function("set_zero_32");
    // Set dw_conv to be
    auto update_dw = set_dw->add_nest("rx", 0, 3, "ry", 0, 3);
    auto rdw = update_dw->add_op("rdw");
    auto l1 = rdw->add_load("I", "dwx + rx, dwy + ry, dwc");
    auto w = rdw->add_load("weight_buffer", "dwx + rx, dwy + ry, dwc");
    auto l2 = rdw->add_load("dw_conv", "dwx, dwy, dwc");
    rdw->add_function("fma", {l1, w, l2});
    rdw->add_store("dw_conv", "dwx, dwy, dwc");
  }

  {
    auto read_in = prg.add_nest("ox", 0, 14 - 2, "oy", 0, 14 - 2, "ok", 0, 4);
    auto write = read_in->add_op("write_max_out");
    write->add_load("dw_conv", "ox, oy, ok");
    write->add_function("max_zero");
    write->add_store("out", "ox, oy, ok");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  //assert(false);
}


umap* input_chunk(UBuffer& buf, const std::string& out_bundle) {

  umap* sched = buf.global_schedule();

  auto bundle_ops = buf.bundle_domain(out_bundle);
  auto DataRead = buf.bundle_access(out_bundle);

  // Assume there is only 1 input port (for now)
  auto in_bundle = pick(buf.get_in_bundles());

  auto write_ops = buf.bundle_domain(in_bundle);
  auto DataWritten = buf.bundle_access(in_bundle);

  auto EventsBeforeRead = lex_gt(sched, sched);

  auto ReadsBeforeCurrentRead = its_range(its(EventsBeforeRead, bundle_ops), bundle_ops);
  // lexmax wrt schedule
  auto PreviousRead = lexmax(ReadsBeforeCurrentRead);

  auto WritesBeforePreviousRead =
    its_range(its(dot(PreviousRead, EventsBeforeRead), bundle_ops), write_ops);

  auto DataWrittenBeforePreviousRead =
    dot(WritesBeforePreviousRead, DataWritten);

  return isl_union_map_subtract(DataRead,
      DataWrittenBeforePreviousRead);
}

void aha_talk_print_program_representation(prog& prg) {
  cout << "#### Info for input program: " << prg.name << endl << endl;

  auto iter_domain = prg.whole_iteration_domain();
  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\tread    = " << str(reads) << endl << endl;
  
  cout << "---- Statements that read each value" << endl;
  cout << "\tread^-1 = " << str(inv(reads)) << endl << endl;
 
  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();
  cout << endl << endl;

}

void aha_talk_print_raw_deps(prog& prg) {

  auto iter_domain = prg.whole_iteration_domain();

  auto sched = prg.unoptimized_schedule();

  auto reads =
    its(prg.consumer_map(), iter_domain);

  auto writes =
    its(prg.producer_map(), iter_domain);

  cout << "---- Write   = " << str((writes)) << endl << endl;
  cout << "---- Read    = " << str((reads)) << endl << endl;
  cout << "---- Read^-1 = " << str(inv(reads)) << endl << endl;
  cout << "---- Write . Read^-1 = " << str(dot(writes, inv(reads))) << endl << endl;
  cout << "---- Schedule << Schedule = " << str(lex_lt(sched, sched)) << endl << endl;
  cout << "---- RaW deps = " << str(its(dot(writes, inv(reads)), lex_lt(sched, sched))) << endl << endl;
  cout << "---- RaW^-1   = " << str(coalesce(inv(its(dot(writes, inv(reads)), lex_lt(sched, sched))))) << endl << endl;
}

void aha_talk_print_info(prog& prg) {

  auto iter_domain = prg.whole_iteration_domain();

  cout << "#### Info for input program: " << prg.name << endl << endl;

  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\t" << str(reads) << endl << endl;

  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();
  cout << endl << endl;

  cout << "----- Statement RaW dependencies..." << endl;
  cout << str(isl_union_map_coalesce(inv(prg.validity_deps()))) << endl << endl;

  cout << "----- Optimized loop nests for program minimizing (write -> read) time..." << endl;
  cout << prg.optimized_loop_nest() << endl << endl;

  auto buffers = build_buffers(prg);
  cout << "###### Unified buffers..." << endl;
  cout << "Number of buffers: " << buffers.size() << endl;
  for (auto& b : buffers) {
    UBuffer& buf = b.second;

    cout << "--- " << (prg.is_boundary(b.second.name) ? "External Buffer: " : "Internal Buffer: ") << b.second.name << endl;
    cout << "\t---- In ports" << endl;
    for (auto inpt : b.second.get_in_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
      cout << "\t\t\tbuffer capacity: " << compute_max_dd(b.second, inpt) << endl;
      cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
      cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    }

    cout << "\t---- Out ports" << endl;
    for (auto inpt : b.second.get_out_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
      cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
      cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    }

    cout << "\t---- Output Bundles" << endl;
    for (auto out_bundle : b.second.get_out_bundles()) {
      cout << "\t\t" << out_bundle << endl;
      auto ports = b.second.port_bundles.at(out_bundle);
      cout << "\t\t---- Ports..." << endl;
      for (auto p : ports) {
        cout << "\t\t\t" << p << endl;
      }

      if (buf.get_in_ports().size() == 0) {
        continue;
      }

      auto inpt = pick(buf.get_in_ports());
      buf.port_bundles[inpt] = {inpt};

      auto in_chunk = isl_union_map_coalesce(input_chunk(buf, out_bundle));
      cout << "\t\t Input Chunk: " << str(in_chunk) << endl;
      cout << "\t\t Input Chunk Sizes: " << str(card(in_chunk)) << endl;
    }

    cout << endl << endl;
  }

  generate_app_code(buffers, prg);
  cout << "output code for application is in file: " << prg.name << ".cpp" << endl;
}

void conv_2d_bc_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64);
    auto pc = pr->add_loop("lc", 0, 64);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "min(lc + " + to_string(i) + ", 63)";
        string r = "min(lr + " + to_string(j) + ", 63)";
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  regression_test(prg);
}

void conv_1d_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_1d_rolled";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["R"] = 32;

  {
    auto pc = prg.add_loop("pr", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pr");
    write->add_store("I", "pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64 - 2);
    auto rd = pr->add_op("init");
    rd->add_store("R", "lr");
    rd->add_function("set_zero_32");

    auto reduce_inner_loop = pr->add_loop("rr", 0, 3);
    auto reduce_inner = reduce_inner_loop->add_op({"R", "lr"}, "inc", {"R", "lr", "I", "lr + rr"});
  }

  {
    auto outlp = prg.add_nest("xr", 0, 64 - 2);
    outlp->store({"out", "xr"}, {"R", "xr"});
  }

  regression_test(prg);
}

string add_conv_stage(prog& prg, const std::string& inbuffer) {
  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};

  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  auto ns = prg.add_nest(rb, 0, res_rows, rc, 0, res_cols);
  ns->add_op({blur, rb + "," + rc}, "conv_3_3", loads);

  return blur;
}

string add_conv_stage_out(prog& prg, const std::string& inbuffer) {
  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};

  string output = blur;
  string out_stream = output + "_out";
  prg.buffer_port_widths[out_stream] = prg.buffer_port_widths[output];
  prg.buffer_bounds[out_stream] = prg.buffer_bounds[output];
  prg.add_output(out_stream);

  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  auto ns = prg.add_nest(rb, 0, res_rows, rc, 0, res_cols);
  ns->add_op({blur, rb + "," + rc}, "conv_3_3", loads);
  ns->store({out_stream, rb + ", " + rc}, {output, rb + ", " + rc});

  return out_stream;
}

string add_gaussian_stage(prog& prg, const std::string& inbuffer) {

  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};
  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  prg.add_nest(rb, 0, res_rows, rc, 0, res_cols)->add_op({blur, rb + "," + rc}, "conv_3_3", loads);

  string ds = blur + "_ds";
  string dr = ds + "_r";
  string dc = ds + "_c";
  prg.buffer_port_widths[ds] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[ds] = {res_rows / 2, res_cols / 2};
  prg.add_nest(dr, 0, res_rows / 2, dc, 0, res_cols / 2)->
    add_op({ds, dr + ", " + dc}, "id", {blur, "2*" + dr + ", 2*" + dc});

  return ds;
}

void write_out(prog& prg, const std::string& output) {
  string out_stream = output + "_out";
  prg.buffer_port_widths[out_stream] = prg.buffer_port_widths[output];
  prg.buffer_bounds[out_stream] = prg.buffer_bounds[output];
  prg.add_output(out_stream);

  int res_rows = prg.dim(output, 0);
  int res_cols = prg.dim(output, 1);

  string r = out_stream + "_r";
  string c = out_stream + "_c";
  prg.add_nest(r, 0, res_rows, c, 0, res_cols)->store({out_stream, r + ", " + c}, {output, r + ", " + c});
}

void gaussian_pyramid_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "gaussian_pyramid";
  prg.add_input("in");

  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["in"] = 32;

  prg.buffer_bounds["in"] = {32, 32};
  prg.buffer_bounds["I"] = {32, 32};

  prg.add_nest("pr", 0, 32, "pc", 0, 32)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  string I1 = add_gaussian_stage(prg, "I");
  string I2 = add_gaussian_stage(prg, I1);

  write_out(prg, I2);

  regression_test(prg);
}

void jacobi_2d_4_test() {

  const int unroll = 4;
  string us = to_string(unroll);
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d_" + us;
  prg.buffer_port_widths["I"] = 32;

  vector<string> inputs;
  vector<string> outputs;
  for (int i = 0; i < unroll; i++) {
    string in_name_0 = "in_" + us;
    string out_name_0 = "out_" + us;

    prg.buffer_port_widths[in_name_0] = 32;
    prg.add_input(in_name_0);
    prg.buffer_port_widths[out_name_0] = 32;
    prg.add_output(out_name_0);

    inputs.push_back("in_" + us);
    outputs.push_back("out_" + us);
  }

  int rows = 32;
  int cols = 32;

  assert(cols % unroll == 0);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols / unroll);
  for (size_t i = 0; i < inputs.size(); i++) {
    string in_name_0 = inputs.at(i);
    cout << "Creating in nest: " << i << endl;
    //in_nest->add_op
      //({"I", us + "*id0 + " + to_string(i) + ", id1"}, "conv", {in_name_0, "id0, id1"});
    in_nest->add_op({"I", us + "*id0 + " + to_string(i) + ", id1"}, "id", {in_name_0, "id0, id1"});
  }

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, (cols - 1) / unroll);
  for (size_t i = 0; i < outputs.size(); i++) {
    string out_name_1 = outputs.at(i);
    blur_y_nest->
      stencil_op(out_name_1, "jacobi2d_compute", "I", {us + "*(d0) + " + to_string(i) + " - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  }

  regression_test(prg);
  //assert(false);
}

void jacobi_2d_2_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d_2";
  prg.buffer_port_widths["I"] = 32;

  int unroll_factor = 4;

  string in_name_0 = "in_0";
  string in_name_1 = "in_1";

  string out_name_0 = "out_0";
  string out_name_1 = "out_1";

  int rows = 32;
  int cols = 32;

  prg.buffer_port_widths[in_name_0] = 32;
  prg.add_input(in_name_0);
  prg.buffer_port_widths[in_name_1] = 32;
  prg.add_input(in_name_1);

  prg.buffer_port_widths[out_name_0] = 32;
  prg.add_output(out_name_0);
  prg.buffer_port_widths[out_name_1] = 32;
  prg.add_output(out_name_1);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols / 2);
  in_nest->store({"I", "2*id0, id1"}, {in_name_0, "id0, id1"});
  in_nest->store({"I", "2*id0 + 1, id1"}, {in_name_1, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, (cols - 1) / 2);
  blur_y_nest->
    stencil_op(out_name_0, "jacobi2d_compute", "I", {"2*d0 - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  blur_y_nest->
    stencil_op(out_name_1, "jacobi2d_compute", "I", {"2*(d0) + 1 - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});

  regression_test(prg);
  //assert(false);
}

void jacobi_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d";
  prg.buffer_port_widths["I"] = 32;

  string in_name = "in";
  string out_name = "out";

  int rows = 32;
  int cols = 32;

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  // This code (in SODA is described as blur_x)
  // blur_x(0, 0) = in(0, 0) + in(0, 1) + in(0, 2)
  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  blur_y_nest->
    stencil_op(out_name, "jacobi2d_compute", "I", {"d0", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});

  regression_test(prg);
}

struct Token {
  string txt;
};

struct Expr {
  vector<Token> tokens;
};

struct BaseExpr {
  string name;
  vector<Token> dims;
};

struct StencilProgram {
  string name;
  int burst_width;
  int unroll_factor;

  vector<pair<BaseExpr, Expr> > operations;
};

bool is_isolated_token(const char nextc) {
  if (nextc == '-') {
    return true;
  }
  if (nextc == '+') {
    return true;
  }
  if (nextc == '*') {
    return true;
  }
  if (nextc == '/') {
    return true;
  }
  if (nextc == '.') {
    return true;
  }
  if (nextc == ':') {
    return true;
  }
  if (nextc == ',') {
    return true;
  }
  if (nextc == '(') {
    return true;
  }
  if (nextc == ')') {
    return true;
  }

  return false;
}

bool is_token_break(const char nextc) {
  if (isspace(nextc)) {
    return true;
  }

  if (nextc == '-') {
    return true;
  }
  if (nextc == '+') {
    return true;
  }
  if (nextc == '*') {
    return true;
  }
  if (nextc == '/') {
    return true;
  }
  if (nextc == '.') {
    return true;
  }

  if (nextc == ':') {
    return true;
  }

  if (nextc == ',') {
    return true;
  }

  if (nextc == '(') {
    return true;
  }

  if (nextc == ')') {
    return true;
  }

  return false;
}

void add_token(vector<Token>& toks, const string& t) {
  if (t.size() == 0) {
    return;
  }
  toks.push_back({t});
}


vector<Token> tokenize(istream& in) {
  vector<Token> toks;
  char nextc;
  string next;
  while (in.get(nextc)) {
    cout << "Next = " << nextc << endl;
    if (is_token_break(nextc)) {
      add_token(toks, next);
      next = "";
      if (!isspace(nextc)) {
        if (is_isolated_token(nextc)) {
          string n = "";
          n += nextc;
          add_token(toks, {n});
        } else {
          next += (nextc);
        }
      }
    } else {
      next += nextc;
    }
  }
  add_token(toks, next);
  //in.close();
  return toks;
}

Token consume(vector<Token>& tokens, size_t& pos, const string& next) {
  assert(pos < tokens.size());
  pos++;
  assert(tokens.at(pos - 1).txt == next);
  return tokens.at(pos - 1);
}

Token peek(vector<Token>& tokens, size_t& pos) {
  assert(pos < tokens.size());
  return tokens.at(pos);
}

Token next(vector<Token>& tokens, size_t& pos) {
  assert(pos < tokens.size());
  pos++;
  return tokens.at(pos - 1);
}

BaseExpr parse_base(vector<Token>& tokens, size_t& pos) {
  string name = next(tokens, pos).txt;
  vector<Token> tks;
  if (peek(tokens, pos).txt == "(") {
    next(tokens, pos);
    while (peek(tokens, pos).txt != ")") {
      tks.push_back(next(tokens, pos));
      if (peek(tokens, pos).txt == ",") {
        consume(tokens, pos, ",");
      } else {
        break;
      }
    }
    consume(tokens, pos, ")");
  }
  return BaseExpr{name, tks};
}

bool expr_start(const Token& t) {
  return t.txt != "local" && t.txt != "input" && t.txt != "output";
}

bool done(vector<Token>& tokens, size_t& pos) {
  return tokens.size() <= pos;
}

Expr parse_expr(vector<Token>& tokens, size_t& pos) {
  stack<Token> op_stack;
  Expr e;
  while (!done(tokens, pos) && expr_start(peek(tokens, pos))) {
    e.tokens.push_back(next(tokens, pos));
  }
  return e;
}

StencilProgram parse_soda_program(istream& in) {
  StencilProgram program;

  vector<Token> tokens = tokenize(in);
  //cout << "Tokens = " << endl;
  for (auto t : tokens) {
    //cout << "\ttok: " << t.txt << endl;
    assert(t.txt.size() > 0);
  }

  size_t pos = 0;
  while (pos < tokens.size()) {
    string next = tokens[pos].txt;
    if (next == "kernel") {
      pos += 3;
      program.name = tokens.at(pos + 2).txt;
    } else if (next == "burst") {
      program.burst_width = safe_stoi(tokens.at(pos + 3).txt);
      pos += 4;
    } else if (next == "unroll") {
      program.unroll_factor = safe_stoi(tokens.at(pos + 3).txt);
      pos += 4;
    } else if (next == "iterate") {
      //program.unroll_factor = to_string(tokens.at(pos + 3).txt);
      pos += 3;
    } else if (next == "input") {
      //string tp = tokens.at(pos + 1);
      pos = pos + 3;
      BaseExpr b = parse_base(tokens, pos);
      cout << "Base: " << b.name << "(";
      for (auto e : b.dims) {
        cout << e.txt << ", ";
      }
      cout << " )" << endl;
    } else if (next == "local" || next == "output") {
      pos = pos + 3;
      BaseExpr b = parse_base(tokens, pos);
      cout << "Base: " << b.name << "(";
      for (auto e : b.dims) {
        cout << e.txt << ", ";
      }
      cout << " )" << endl;

      consume(tokens, pos, "=");
      Expr e = parse_expr(tokens, pos);
      cout << "After expr: " <<
        endl;
      for (size_t i = pos; i < tokens.size(); i++) {
        cout << "tok: " << tokens.at(i).txt << endl;
      }
      program.operations.push_back({b, e});
    } else {
      cout << "Unsupported next token: " << tokens.at(pos).txt << endl;
      assert(false);
    }
  }

  cout << "Program: " << program.name << endl;
  for (auto op : program.operations) {
    BaseExpr b = op.first;
    Expr e = op.second;
    cout << b.name << "(";
    for (auto e : b.dims) {
      cout << e.txt << ", ";
    }
    cout << " ) = ";
    for (auto t : e.tokens) {
      cout << t.txt << " ";
    }
    cout << endl;
  }
  cout << "Done" << endl;
  return program;
}

void parse_denoise3d_test() {
  ifstream in("denoise3d.soda");
  auto prg = parse_soda_program(in);

  //assert(false);
}

void seidel2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "seidel2d";
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  int rows = 32;
  int cols = 32;

  prg.buffer_bounds["I"] = {rows, cols};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, rows, "d0", 1, cols - 1);
  blur_y_nest->
    stencil_op("tmp", "blur_3_32", "I", {"d0", "d1"},
        {{-1, 0}, {0, 0}, {1, 0}});

  auto blur_out_nest=
    prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  blur_out_nest->
    stencil_op(out_name, "blur_3_32", "tmp", {"d0", "d1"},
        {{0, -1}, {0, 0}, {0, 1}});

  regression_test(prg);
}

struct Range {
  int min;
  int max;

  string constraint_str(const string& v) {
    return to_string(min) + " <= " + v + " <= " + to_string(max);
  }
};

struct Box {
  vector<Range> intervals;

  Box() {}

  Box(const int dims) {
    for (int i = 0; i < dims; i++) {
      intervals.push_back({0, -1});
    }
  }

  isl_set* to_set(isl_ctx* ctx, const string& name) {
    string s = "{ ";
    vector<string> names;
    vector<string> ranges;
    int i = 0;
    for (auto r : intervals) {
      string v = "d" + to_string(i);
      names.push_back("d" + to_string(i));
      ranges.push_back(r.constraint_str(v));
      i++;
    }
    s += name + sep_list(names, "[", "]", ", ");
    s += " : ";
    s += sep_list(ranges, "", "", " and ");
    s += " }";
    return rdset(ctx, s);
  }

  int length(const int dim) const {
    return intervals.at(dim).max - intervals.at(dim).min + 1;
  }

  Box pad_range_to_nearest_multiple(const int unroll_factor) const {
    assert(unroll_factor > 0);

    Box padded;
    int r = 0;
    for (auto i : intervals) {
      if (r != 0) {
        padded.intervals.push_back({i.min, i.max});
      } else {
        int range = length(0);
        cout << "Length: " << range << endl;
        if (range % unroll_factor != 0) {
          int new_range = range + (unroll_factor - (range % unroll_factor));
          cout << "new_range = " << new_range << endl;
          int new_max = i.min + new_range - 1;

          cout << "new_max = " << new_max << endl;

          padded.intervals.push_back({i.min, new_max});
        } else {
          padded.intervals.push_back({i.min, i.max});
        }
      }
      r++;
    }
    cout << "New length: " << padded.length(0) << endl;
    assert(padded.length(0) % unroll_factor == 0);
    return padded;
  }

  Box pad(const int dim, const int padding) const {
    assert(padding > 0);

    Box padded;
    int k = 0;
    for (auto i : intervals) {
      if (k == dim) {
        padded.intervals.push_back({i.min, i.max + padding});
      } else {
        padded.intervals.push_back({i.min, i.max});
      }
      k++;
    }
    return padded;
  }

  Box pad(const int padding) const {
    assert(padding > 0);

    Box padded;
    for (auto i : intervals) {
      padded.intervals.push_back({i.min - padding, i.max + padding});
    }
    return padded;
  }
};

std::ostream& operator<<(std::ostream& out, const Box& b) {
  vector<string> ranges;
  for (auto range : b.intervals) {
    ranges.push_back("[" + to_string(range.min) + ", " + to_string(range.max) + "]");
  }
  out << sep_list(ranges, "{", "}", ", ");
  return out;
}

Box unn(const Box& l, const Box& r) {
  cout << "l intervals = " << l.intervals.size() << endl;
  cout << "r intervals = " << r.intervals.size() << endl;

  assert(l.intervals.size() == r.intervals.size());
  Box un;
  for (size_t dim = 0; dim < l.intervals.size(); dim++) {
    un.intervals.push_back({min(l.intervals.at(dim).min, r.intervals.at(dim).min), max(l.intervals.at(dim).max, r.intervals.at(dim).max)});
  }

  cout << "Got union" << endl;
  return un;
}

struct QAV {
  bool is_num;
  string name;
  int num;
  int denom;

  int to_int() const {
    assert(is_num);
    assert(denom == 1);
    return num;
  }

  bool is_whole() {
    return is_num && denom == 1;
  }

  bool is_zero() const {
    if (!is_num) {
      return false;
    }

    assert(denom != 0);
    return is_num && (num == 0);
  }

  bool is_one() const {
    return is_num && (num == 1 && denom == 1);
  }
};

bool operator==(const QAV& l, const QAV& r) {
  if (l.is_num != r.is_num) {
    return false;
  }

  if (l.is_num) {
    return l.num == r.num && l.denom == r.denom;
  }

  return l.name == r.name;
}

std::ostream& operator<<(std::ostream& out, const QAV& c) {
  if (c.is_num) {
    assert(c.denom != 0);
    if (c.denom == 1) {
      out << c.num;
    } else {
      out << "(" << c.num << " / " << c.denom << ")";
    }
  } else {
    out << c.name;
  }
  return out;
}

std::string to_string(const QAV& q) {
  ostringstream ss;
  ss << q;
  return ss.str();
}

QAV qconst(const int& v, const int& d) {
  assert(v == 1 || d == 1);
  return {true, "", v, d};
}

QAV times(const int s, const QAV& v) {
  assert(v.is_num);
  return qconst(s * v.num, v.denom);
}

QAV qconst(const int& v) {
  return {true, "", v, 1};
}

QAV qvar(const std::string& v) {
  return {false, v};
}

struct QTerm {
  vector<QAV> vals;

  int to_int() const {

    assert(is_constant());
    assert(vals.size() == 1);
    return vals.at(0).to_int();
  }

  QAV get_coefficient() const {
    vector<QAV> const_vals;
    for (auto v : vals) {
      if (v.is_num) {
        const_vals.push_back(v);
      }
    }

    assert(const_vals.size() == 1);
    return const_vals.at(0);
  }

  bool is_constant() const {
    for (auto v : vals) {
      if (!v.is_num) {
        return false;
      }
    }
    return true;
  }

  bool is_zero() const {
    for (auto v : vals) {
      if (!v.is_zero()) {
        return false;
      }
    }
    return true;
  }

  bool contains(const QAV& v) {
    for (auto ov : vals) {
      if (ov == v) {
        return true;
      }
    }
    return false;
  }

  void simplify() {
    // Collect constant terms
    vector<QAV> constants;
    vector<QAV> vars;
    for (auto v : vals) {
      if (v.is_num) {
        constants.push_back(v);
      } else {
        vars.push_back(v);
      }
    }

    int n = 1;
    int d = 1;
    for (auto c : constants) {
      assert(c.is_num);
      n *= c.num;
      d *= c.denom;
    }

    if (n != 1) {
      assert(n % d == 0);
      n = n / d;
      d = 1;
    }
    vals = {qconst(n, d)};
    concat(vals, vars);

    vector<QAV> newvals;
    for (auto v : vals) {
      if (!v.is_one()) {
        newvals.push_back(v);
      }
    }
    vals = newvals;
    if (vals.size() == 0) {
      vals = {qconst(1)};
    }

    for (auto v : vals) {
      if (v.is_zero()) {
        vals = {qconst(0)};
      }
    }

  }

  void replace(const QAV& target, const QAV& replacement) {
    for (auto& v : vals) {
      if (v == target) {
        v = replacement;
      }
    }
  }

};

std::ostream& operator<<(std::ostream& out, const QTerm& c) {
  assert(c.vals.size() > 0);

  vector<string> strs;
  for (auto t : c.vals) {
    ostringstream ss;
    ss << t;
    strs.push_back(ss.str());
  }
  if (strs.size() == 0) {
    assert(c.is_zero());
    out << "0";
  } else {
    out << sep_list(strs, "", "", "*");
  }
  return out;
}

QTerm qterm(const QAV& r) {
  return QTerm{{qconst(1), r}};
}

QTerm qterm(const string& r) {
  return qterm(qvar(r));
}

QTerm qterm(const int& r) {
  return qterm(qconst(r));
}

QTerm qterm(const QAV& l, const QAV& r) {
  return {{l, r}};
}

QTerm qterm(const int& l, const QAV& r) {
  return {{qconst(l), r}};
}

QTerm qterm(const int& l, const string& r) {
  return {{qconst(l), qvar(r)}};
}

QTerm qterm(const QAV& a, const QAV& l, const QAV& r) {
  return {{a, l, r}};
}

QTerm times(const int s, const QTerm& v) {
  QTerm t = v;
  t.vals.push_back(qconst(s));
  t.simplify();
  return t;
}

struct QExpr {
  vector<QTerm> terms;

  QTerm const_term() const {
    for (auto t : terms) {
      if (t.is_constant()) {
        return t;
      }
    }

    return qterm(qconst(0));
    //cout << "Error: No constant terms in qexpr " << endl;
    //assert(false);
    //return qterm(0);
  }

  void scale(const int v) {
    for (auto& t : terms) {
      t.vals.push_back(qconst(v));
    }
  }

  void delete_terms_without(const QAV& v) {
    vector<QTerm> new_terms;
    for (auto t : terms) {
      if (t.contains(v)) {
        new_terms.push_back(t);
      }
    }
    terms = new_terms;
    if (terms.size() == 0) {
      terms.push_back(qterm(qconst(0)));
    }
  }

  void simplify() {
    for (auto& t : terms) {
      t.simplify();
    }
  }

  void replace(const QAV& target, const QAV& replacement) {
    for (auto& t : terms) {
      t.replace(target, replacement);
    }
  }
};

std::ostream& operator<<(std::ostream& out, const QExpr& c) {
  vector<string> termstrings;
  for (auto t : c.terms) {
    ostringstream ss;
    ss << t;
    termstrings.push_back(ss.str());
  }
  out << sep_list(termstrings, "", "", " + ");
  return out;
}

QExpr qexpr(const int v) {
  return QExpr{{qterm(qconst(v))}};
}

QExpr qexpr(const QAV& v) {
  return QExpr{{qterm(v)}};
}

QExpr qexpr(const QTerm& l) {
  return QExpr{{l}};
}

QExpr qexpr(const QTerm& l, const QAV& r) {
  return QExpr{{l, qterm(r)}};
}

QExpr qexpr(const QAV& l, const QAV& r) {
  return QExpr{{qterm(l), qterm(r)}};
}

QExpr qexpr(const QAV& l, const QTerm& r) {
  return QExpr{{qterm(l), r}};
}

QExpr qexpr(const QTerm& l, const int r) {
  return QExpr{{l, qterm(r)}};
}

QExpr qexpr(const QTerm& l, const QTerm& r) {
  return QExpr{{l, r}};
}

QExpr qexpr(const QTerm& a, const QTerm& l, const QTerm& r) {
  return QExpr{{a, l, r}};
}

string isl_str(QTerm& v) {

  vector<string> tstrings;
  vector<string> divs;
  for (auto v : v.vals) {
    if (!v.is_num || v.is_whole()) {
      ostringstream ss;
      ss << v;
      tstrings.push_back(ss.str());
    } else {
      divs.push_back(to_string(v.denom));
    }
  }
  string s = sep_list(tstrings, "", "", "*");

  if (divs.size() == 0) {
    return s;
  }
  vector<string> cfs{"(" + s + ")"};
  concat(cfs, divs);
  return sep_list(cfs, "", "", " / ");
}

string isl_str(QExpr& v) {
  vector<string> tstrings;
  for (auto t : v.terms) {
    t.simplify();
    tstrings.push_back(isl_str(t));
  }
  return sep_list(tstrings, "", "", " + ");
}

struct Window {
  string name;
  vector<QAV> strides;
  vector<vector<int> > offsets;
  umap* needed;

  Window() {}

  Window(const string& name_,
      const vector<QAV>& strides_,
      const vector<vector<int > >& offsets_) :
    name(name_),
    strides(strides_),
    offsets(offsets_) {}

  Window(const string& name_,
      const vector<int>& strides_,
      const vector<vector<int > >& offsets_) :
    name(name_),
    strides({}),
    offsets(offsets_) {
      for (auto s : strides_) {
        strides.push_back(qconst(s));
      }
    }

  Window increment(const int diff) const {
    Window c;
    c.name = name;
    c.strides = strides;

    set<vector<int> > unrolled_offsets;
    for (auto offset : offsets) {
      vector<int> uoff = offset;
      uoff[0] = uoff.at(0) + diff;
      unrolled_offsets.insert(uoff);
    }

    for (auto u : unrolled_offsets) {
      c.offsets.push_back(u);
    }

    return c;
  }

  Window unroll_cpy(const int factor) const {
    Window c;
    c.name = name + "_unrolled";
    int i = 0;
    for (auto s : strides) {
      if (i == 0) {
        c.strides.push_back(times(factor, s));
      } else {
        c.strides.push_back(s);
      }
      i++;
    }

    set<vector<int> > unrolled_offsets;
    for (int i = 0; i < factor; i++) {
      for (auto offset : offsets) {
        vector<int> uoff = offset;
        uoff[0] = uoff.at(0) + i;
        unrolled_offsets.insert(uoff);
      }
    }

    for (auto u : unrolled_offsets) {
      c.offsets.push_back(u);
    }

    return c;
  }

  vector<vector<QExpr> > pts() const {
    vector<vector<QExpr> > ps;
    for (auto s : offsets) {
      assert(s.size() > 0);
      vector<QExpr> comps;
      for (size_t i = 0; i < strides.size(); i++) {
        QAV dv = qvar("d" + to_string(i));
        QTerm t = qterm(stride(i), dv);
        QAV offset = qconst(s.at(i));
        comps.push_back(qexpr(t, offset));
      }

      ps.push_back(comps);
    }
    return ps;
  }

  string interval_set_string(const int dim) {
    assert(dim < strides.size());
    ostringstream ss;
    ss << stride(dim);
    string base = "x*" + ss.str();
    int min_off = min_offset(dim);
    int max_off = max_offset(dim);

    return "{ k | " + base + " + " + to_string(min_off) + " <= k <= " + base + " + " + to_string(max_off) + " }";
  }

  int max_addr(const int dim, const int max_result_addr) {
    if (stride(dim).is_whole()) {
      assert(stride(dim).denom == 1);
      return stride(dim).num*max_result_addr + max_offset(dim);
    }
    assert(stride(dim).num == 1);
    return max_result_addr / stride(dim).denom + max_offset(dim);
  }

  int min_addr(const int dim, const int max_result_addr) {
    if (stride(dim).is_whole()) {
      assert(stride(dim).denom == 1);
      return stride(dim).num*max_result_addr + min_offset(dim);
    }
    assert(stride(dim).num == 1);
    return max_result_addr / stride(dim).denom + min_offset(dim);
  }

  QAV stride(const int dim) const {
    //cout << "Getting stride for dim = " << dim << endl;
    assert(dim < (int) strides.size());
    return strides.at(dim);
  }

  int min_offset(const int dim) {
    assert((int) strides.size() > dim);
    int min = 10000;
    for (auto off : offsets) {
      if (off.at(dim) < min) {
        min = off.at(dim);
      }
    }
    return min;
  }

  int max_offset(const int dim) const {
    assert((int) strides.size() > dim);
    int max = -100000;
    for (auto off : offsets) {
      if (off.at(dim) > max) {
        max = off.at(dim);
      }
    }
    return max;
  }
};

struct QConstraint {
  QExpr lhs;
  QExpr rhs;

  void scale(const int v) {
    lhs.scale(v);
    rhs.scale(v);
  }

  void simplify() {
    lhs.simplify();
    rhs.simplify();
  }

  void replace(const QAV& target, const QAV& replacement) {
    lhs.replace(target, replacement);
    rhs.replace(target, replacement);
  }
};

string isl_str(QConstraint& v) {
  return isl_str(v.lhs) + " >= " + isl_str(v.rhs);
}


std::ostream& operator<<(std::ostream& out, const QConstraint& c) {
  out << c.lhs << " >= " << c.rhs;
  return out;
}

struct Result {
  string compute_name;
  vector<Window> srcs;
  Window provided;
  vector<Window> unrolled_srcs;
};

QExpr upper_bound(const Window& arg, const int dim) {
  string dvar = "d" + to_string(dim);
  QAV dv = qvar(dvar);
  //QAV stride = qconst(arg.strides.at(dim));
  QAV stride = arg.strides.at(dim);
  QAV max_off = qconst(arg.max_offset(dim));
  QAV rate = qvar("q_" + arg.name);
  cout << "Max ffset = " << arg.max_offset(dim) << endl;
  cout << "Max off = " << max_off << endl;
  QTerm dvs = qterm(stride, rate, dv);
  QTerm qm = qterm(rate, max_off);
  QTerm delay = qterm("d_" + arg.name);
  QExpr k = qexpr(dvs, qm, delay);
  return k;
}

QTerm parse_qterm(const std::string& str) {
  cout << "Parsing qterm: " << str << endl;

  regex floor_reg("floor\\(\\((.*)\\)/(.*)\\)");
  smatch tt_match;
  auto tt_res = regex_match(str, tt_match, floor_reg);
  if (tt_res) {
    cout << "Group 1: " << tt_match[1] << endl;
    cout << "Group 2: " << tt_match[2] << endl;
    return qterm(qvar(tt_match[1]), qconst(1, safe_stoi(tt_match[2])));
  }

  regex mul_reg("(\\d+)12234");
  smatch mul_match;
  auto mul_res = regex_match(str, mul_match, mul_reg);
  if (mul_res) {
    cout << "Matched mul coeff: " << mul_match[1] << endl;
    string var_name = tt_match[2];
    cout << "var name = " << var_name << endl;
    assert(var_name.size() > 0);
    QAV qv = qvar(var_name);
    cout << "\tqv = " << qv << endl;
    return qterm(qconst(safe_stoi(mul_match[1])), qv);
  }

  {
    regex mul_reg("(\\d+)");
    smatch mul_match;
    auto mul_res = regex_match(str, mul_match, mul_reg);
    if (mul_res) {
      return qterm(qconst(safe_stoi(mul_match[1])));
    }
  }

  {
    regex var_reg("(.+)");
    smatch var_match;
    auto var_res = regex_match(str, var_match, var_reg);
    assert(var_res);

    return qterm(qvar(var_match[1]));
  }
}

QExpr parse_qexpr(const std::string& str) {
  regex cm("\\{ (.*)\\[(.*)\\] -> \\[\\((.*)\\)\\] \\}");
  smatch match;
  auto res = regex_search(str, match, cm);

  assert(res);

  string gp = match[3];
  regex two_terms("(.*) \\+ (.*)");
  smatch tt_match;
  auto tt_res = regex_match(gp, tt_match, two_terms);

  QExpr ub;
  if (tt_res) {
    cout << "\tt0 = " << tt_match[1] << endl;
    cout << "\tt1 = " << tt_match[2] << endl;
    ub = qexpr(parse_qterm(tt_match[1]), parse_qterm(tt_match[2]));
    cout << "two term ub = " << ub << endl;
  } else {
    cout << "\tg  = " << gp << endl;
    ub = qexpr(parse_qterm(gp), 0);
  }
  cout << "ub = " << ub << endl;
  return ub;
}

QTerm parse_term(const std::string& f, const int dim, const std::string& str) {
  regex floor_reg("floor\\(\\((.*)\\)/(.*)\\)");
  smatch tt_match;
  auto tt_res = regex_match(str, tt_match, floor_reg);
  if (tt_res) {
    cout << "Group 1: " << tt_match[1] << endl;
    cout << "Group 2: " << tt_match[2] << endl;
    return qterm(qvar("q_" + f), qvar("d" + to_string(dim)), qconst(1, safe_stoi(tt_match[2])));
  }

  regex mul_reg("(\\d+)(.+)");
  smatch mul_match;
  auto mul_res = regex_match(str, mul_match, mul_reg);
  if (mul_res) {
    return qterm(qconst(safe_stoi(mul_match[1])), qvar("q_" + f), qvar("d" + to_string(dim)));
  }

  {
    regex mul_reg("(\\d+)");
    smatch mul_match;
    auto mul_res = regex_match(str, mul_match, mul_reg);
    if (mul_res) {
      return qterm(qconst(safe_stoi(mul_match[1])), qvar("q_" + f));
    }
  }

  return qterm(qconst(safe_stoi("1")), qvar("q_" + f), qvar("d" + to_string(dim)));
  //cout << "No match for term: " << str << endl;
  //assert(false);
  //return qterm(qconst(0));
}

QTerm offset(QExpr& e) {
  assert(e.terms.size() == 2);

  e.simplify();
  QTerm offset = e.const_term();
  cout << "Offset = " << offset << endl;
  offset.simplify();
  cout << "Offset after simplification: " << offset << endl;
  return offset;
}

QAV stride(const QExpr& e) {
  assert(e.terms.size() == 2);
  for (auto t : e.terms) {
    if (!t.is_constant()) {
      QAV c = t.get_coefficient();
      return c;
    }
  }

  cout << "Error: No stride in: " << e << endl;
  assert(false);
  return qconst(0);
}

vector<QAV> strides(vector<QExpr>& mins, vector<QExpr>& maxs) {
  assert(mins.size() == maxs.size());

  vector<QAV> strides;
  for (auto m : mins) {
    QAV s = stride(m);
    strides.push_back(s);
  }
  return strides;
}

vector<vector<int> > build_points(vector<vector<int> >& vals_by_dim, vector<vector<int> >& current, const int i) {
  cout << "Building points: " << i << endl;
  if (i >= vals_by_dim.size()) {
    return current;
  }

  if (current.size() == 0) {
    assert(i == 0);
    assert(vals_by_dim.size() > i);
    vector<vector<int> > vs;
    for (auto v : vals_by_dim.at(i)) {
      vs.push_back({v});
    }

    return build_points(vals_by_dim, vs, i + 1);
  }

  vector<vector<int> > vs;
  for (auto c : current) {
    for (auto v : vals_by_dim.at(i)) {
      vector<int> cpy = c;
      cpy.push_back(v);
      vs.push_back(cpy);
    }
  }

  return build_points(vals_by_dim, vs, i + 1);

}

vector<vector<int> > offsets(vector<QExpr>& mins, vector<QExpr>& maxs) {
  assert(mins.size() == maxs.size());

  vector<vector<int> > vals_by_dim;
  for (int i = 0; i < mins.size(); i++) {
    vals_by_dim.push_back({});
  }

  for (size_t i = 0; i < mins.size(); i++) {
    cout << "Min: " << mins.at(i) << endl;
    cout << "Max: " << maxs.at(i) << endl;
    int min_offset = offset(mins.at(i)).to_int();
    int max_offset = offset(maxs.at(i)).to_int();
    cout << "setting offset values" << endl;
    for (int t = min_offset; t <= max_offset; t++) {
      vals_by_dim.at(i).push_back(t);
    }
    cout << "Done with offset value addition" << endl;
  }

  vector<vector<int> > ps;
  return build_points(vals_by_dim, ps, 0);
}

struct BundleBinding {

  Window win;
  map<vector<int>, string> offset_ports;

};

struct BufferInfo {

  UBuffer buf;
  map<string, BundleBinding> bundles;

};

struct Memory {

  map<string, BufferInfo> buffers;
};

struct App {

  isl_ctx* ctx;
  set<string> functions;
  map<string, Result> app_dag;
  map<string, Box> domain_boxes;
  // Map from functions to compute invocations of
  // other functions that they need
  map<string, isl_set*> compute_sets;
  map<string, isl_map*> compute_maps;

  App() {
    ctx = isl_ctx_alloc();
  }

  ~App() {
    isl_ctx_free(ctx);
  }

  string func2d(const std::string& name) {
    functions.insert(name);
    app_dag[name] = {};
    app_dag[name].provided = Window(name, {1, 1}, {{0, 0}});
    return name;
  }

  string func2d(const std::string& name,
      const string& compute,
      const Window& window) {
    vector<Window> windows{window};
    return func2d(name, compute, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const vector<Window>& windows) {
    functions.insert(name);
    Result res{compute};
    for (auto w : windows) {
      w.needed = build_needed(name, w);
      res.srcs.push_back(w);
    }

    assert(res.srcs.size() == windows.size());
    res.provided =
      Window(name, {1, 1}, {{0, 0}});

    app_dag[name] = res;
    return name;
  }

  umap* build_needed(const string& name, const Window& w) {
    cout << "Building: " << w.name << " needed map" << endl;

    assert(w.strides.size() > 0);
    int ndims = w.strides.size();

    vector<int> mins;
    vector<int> maxs;
    for (int i = 0; i < ndims; i++) {
      mins.push_back(10000);
      maxs.push_back(-1);
    }

    for (auto s : w.offsets) {
      for (size_t d = 0; d < s.size(); d++) {
        if (s[d] < mins[d]) {
          mins[d] = s[d];
        }
        if (s[d] > maxs[d]) {
          maxs[d] = s[d];
        }
      }
    }

    vector<string> box_strs;
    vector<string> base_vars;
    vector<string> arg_vars;
    for (size_t i = 0; i < mins.size(); i++) {
      QAV stride = w.stride(i);
      string base_var = "d" + to_string(i);
      base_vars.push_back(base_var);
      string kv = "k" + to_string(i);
      arg_vars.push_back(kv);
      int min = mins[i];
      int max = maxs[i];
      string base_expr = to_string(stride) + "*" + base_var;
      if (!stride.is_whole()) {
        base_expr = "floor(" + base_var + " / " + to_string(stride.denom) + ")";
      }
      box_strs.push_back(base_expr + " + " + to_string(min) + " <= " + kv + " <= " + base_expr + " + " + to_string(max));
    }
    string box_cond = "{ " + name + sep_list(base_vars, "[", "]", ", ") + " -> " + w.name + sep_list(arg_vars, "[", "]", ", ") + " : " + sep_list(box_strs, "", "", " and ") + " }";
    cout << "Box needed: " << box_cond << endl;
    umap* m = isl_union_map_read_from_str(ctx, box_cond.c_str());
    cout << "Map       : " << str(m) << endl;

    return m;
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<vector<int> >& offsets) {
    assert(offsets.size() > 0);
    size_t ndims = offsets.at(0).size();
    vector<int> strides;
    for (size_t i = 0; i < ndims; i++) {
      strides.push_back(1);
    }
    return func2d(name, compute, arg, strides, offsets);
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<int>& strides,
      const vector<vector<int> >& offsets) {

    Window w{arg, strides, offsets};

    functions.insert(name);
    w.needed = build_needed(name, w);
    Result res{compute, {w}};
    res.provided =
      Window(name, {1, 1}, {{0, 0}});
    app_dag[name] = res;
    return name;
  }

  vector<Window> producers(const string& f) {
    cout << "Getting producers for: " << f << endl;
    if (contains_key(f, app_dag)) {
      cout << "In app dag: " << f << endl;
      for (auto s : app_dag) {
        cout << "\t" << s.first << endl;
      }
      auto res = map_find(f, app_dag).srcs;
      cout << "Got res from map" << endl;
      return res;
    }
    return {};
  }

  set<string> consumers(const string& f) {
    set<string> cons;
    for (auto other_func : app_dag) {
      for (auto d : other_func.second.srcs) {
        if (d.name == f) {
          cons.insert(other_func.first);
          break;
        }
      }
    }
    cout << "# of consumers of " << f << " = " << cons.size() << endl;
    return cons;
  }

  umap* ws_map(const std::string& producer, const std::string& consumer) {
    for (auto w : app_dag.at(consumer).srcs) {
      if (w.name == producer) {
        return w.needed;
      }
    }
    cout << "No map from: " << producer << " to " << consumer << endl;
    assert(false);
    return nullptr;
  }


  vector<string> sort_functions() {
    vector<string> sorted;

    while (sorted.size() != app_dag.size()) {
      for (auto fs : app_dag) {
        if (elem(fs.first, sorted)) {
          continue;
        }
        string f = fs.first;
        bool consumers_done = true;
        for (auto c : consumers(f)) {
          if (!elem(c, sorted)) {
            consumers_done = false;
            break;
          }
        }

        if (consumers_done) {
          sorted.push_back(f);
        }
      }
    }
    assert(sorted.size() == app_dag.size());

    reverse(sorted);

    return sorted;
  }

  Box data_domain(const std::string& f) {
    if (!contains_key(f, domain_boxes)) {
      cout << "Error: No key for: " << f << " in domain_boxes" << endl;
    }
    assert(contains_key(f, domain_boxes));
    return map_find(f, domain_boxes);
  }

  void fill_compute_domain(const int unroll_factor) {
    for (auto s : app_dag) {
      string name = s.first;
      for (auto w : s.second.srcs) {
        app_dag[name].unrolled_srcs.
          push_back(w.unroll_cpy(unroll_factor));
      }
    }

    for (auto s : app_dag) {
      compute_maps[s.first] =
        to_map(rdmap(ctx, "{ " + s.first + "[d0, d1] -> " + s.first + "_comp[floor(d0 / " + to_string(unroll_factor) + "), d1] }"));
      cout << "Compute map for " << s.first << ": " << str(compute_maps[s.first]) << endl;
      cout << "Data domain: " <<
        str(data_domain(s.first).to_set(ctx, s.first)) << endl;
      compute_sets[s.first] =
        range(its(
            compute_maps[s.first],
            data_domain(s.first).to_set(ctx, s.first)));
      cout << "Compute domain for " << s.first << " is " << str(compute_sets[s.first]) << endl;
    }
    cout << "Got compute domain" << endl;
  }

  void fill_data_domain(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    Box sbox;
    sbox.intervals.push_back({0, d0 - 1});
    sbox.intervals.push_back({0, d1 - 1});
    sbox = sbox.pad_range_to_nearest_multiple(unroll_factor);

    string n = name;
    domain_boxes = {};
    domain_boxes[n] = sbox;

    set<string> search{n};
    set<string> considered;
    while (search.size() > 0) {
      string next = pick(search);
      search.erase(next);
      considered.insert(next);

      cout << "Next = " << next << endl;
      assert(contains_key(next, app_dag));
      assert(contains_key(next, domain_boxes));

      Box consumer_domain =
        map_find(next, domain_boxes);

      cout << "Adding " << next << " to domain boxes" << endl;
      for (auto inputs : producers(next)) {
        cout << "Getting producers..." << endl;
        Window win = inputs;

        if (!contains_key(inputs.name, domain_boxes)) {
          domain_boxes[inputs.name] = Box(2);
        }
        Box in_box;
        int dim = 0;
        for (auto range : consumer_domain.intervals) {
          int min_result_addr = range.min;
          int max_result_addr = range.max;

          int min_input_addr = win.min_addr(dim, min_result_addr);
          int max_input_addr = win.max_addr(dim, max_result_addr);
          dim++;
          in_box.intervals.push_back({min_input_addr, max_input_addr});
        }
        cout << "Data: " << inputs.name << " to " << next << endl;
        domain_boxes[inputs.name] = unn(domain_boxes[inputs.name], in_box);
        domain_boxes[inputs.name] = domain_boxes[inputs.name].pad_range_to_nearest_multiple(unroll_factor);

        cout << "Added " << next << " domain to boxes" << endl;
        assert(contains_key(next, domain_boxes));

        if (!elem(inputs.name, considered)) {
          search.insert(inputs.name);
        }
      }
      cout << "Done with " << next << endl;
    }

    for (auto d : domain_boxes) {
      if (producers(d.first).size() == 0) {
        domain_boxes[d.first] = d.second.pad(0, 10);
      }
    }

    cout << "Data domains.." << endl;
    for (auto d : domain_boxes) {
      cout << d.first << " = " << d.second << endl;
    }

    //assert(false);
  }

  void schedule_dim(const int i, map<string, vector<QExpr> >& schedules) {
    vector<string> sorted_functions = sort_functions();
      string dv = "d" + to_string(i);
      cout << "Scheduling dim: " << i << endl;
      // Collect all rate variables and
      // collect all constraints
      vector<QConstraint> all_constraints;
      vector<QConstraint> rate_constraints;
      map<string, int> rates;
      for (auto f : sorted_functions) {
        rates["q_" + f] = 1;
        cout << f << " schedule constraints: " << endl;
        Box b = map_find(f, domain_boxes);
        Range r = b.intervals.at(i);
        int min = r.min;
        QAV f_rate = qvar("q_" + f);
        QAV minr = qconst(min);
        QTerm f_delay = qterm(qvar("d_" + f));
        QTerm prod = qterm(minr, f_rate);
        QExpr offset = qexpr(prod, f_delay);
        QExpr zero = qexpr(0);
        QConstraint start_time{offset, zero};
        all_constraints.push_back(start_time);
        cout << "\t" << start_time << endl;
        for (auto arg : app_dag.at(f).srcs) {
          QTerm ft = qterm(f_rate, qvar(dv));
          QExpr ftime = qexpr(ft, f_delay);
          // TODO: Convert this to use compute domains
          // and compute mappings for upper bounds
          isl_map* f_cm = inv(compute_map(f));
          cout << "f_cm: " << str(f_cm) << endl;

          auto data_needed =
            to_map(arg.needed);

          cout << "data needed: " << str(data_needed) << endl;

          isl_map* pixels_needed =
            dot(f_cm, data_needed);

          cout << "pixels needed: " << str(pixels_needed) << endl;

          isl_map* a_cm = compute_map(arg.name);
          cout << "a_cm: " << str(a_cm) << endl;

          isl_map* comps_needed =
            dot(pixels_needed, a_cm);
          cout << "comps needed: " << str(comps_needed) << endl;
          isl_map* last_pix =
            lexmax(comps_needed);
          cout << "last comp needed: " << str(last_pix) << endl;
          auto max = dim_max(comps_needed, i);
          //auto max = isl_map_dim_max(cpy(comps_needed), i);
          cout << "max needed in dim " << i << " = " << str(max) << endl;

          //regex cm("\\{ (.*)\\[(.*)\\](.*) \\}");
          regex cm("\\{ (.*)\\[(.*)\\] -> \\[\\((.*)\\)\\] \\}");
          //-> \\[\\((.*)\\)\\]\\}");
          smatch match;
          auto res = regex_search(str(max), match, cm);

          assert(res);

          string gp = match[3];
          cout << "\tmax bound: " << gp << endl;
          regex two_terms("(.*) \\+ (.*)");
          smatch tt_match;
          auto tt_res = regex_match(gp, tt_match, two_terms);

          QExpr ub;
          if (tt_res) {
            cout << "\tt0 = " << tt_match[1] << endl;
            cout << "\tt1 = " << tt_match[2] << endl;
            ub = qexpr(parse_term(arg.name, i, tt_match[1]), parse_term(arg.name, i, tt_match[2]));
          } else {
            cout << "\tg  = " << gp << endl;
            ub = qexpr(parse_term(arg.name, i, gp), 0);
          }

          cout << "ub = " << ub << endl;

          ub.terms.push_back(qterm(qvar("d_" + arg.name)));

          //assert(false);
          //ub = upper_bound(arg, i);


          QConstraint start_after_deps{ftime, ub};
          all_constraints.push_back(start_after_deps);
          rate_constraints.push_back(start_after_deps);

          cout << "\t" << start_after_deps << endl;
        }
      }

      vector<string> qs;
      for (auto f : sorted_functions) {
        qs.push_back("q_" + f);
      }
      isl_set* rate_space =
        rdset(ctx, "{ " + sep_list(qs, "[", "]", ", ") + " }");
      assert(rate_space != nullptr);

      for (auto f : sorted_functions) {
        string gtzs = set_string(qs, "q_" + f + " > 0");
        rate_space = its(rate_space, rdset(ctx, gtzs));
      }

      cout << "Rate constraints..." << endl;
      vector<QConstraint> rates_only;
      set<int> denoms;
      for (auto r : rate_constraints) {
        r.lhs.delete_terms_without(qvar(dv));
        r.rhs.delete_terms_without(qvar(dv));
        r.replace(qvar(dv), qconst(1));
        cout << "\tbefore simplify: " << r << endl;
        r.simplify();
        cout << "\tafter simplify: " << r << endl;
        rates_only.push_back(r);
        for (auto t : r.rhs.terms) {
          for (auto v : t.vals) {
            if (v.is_num) {
              denoms.insert(v.denom);
            }
          }
        }
        for (auto t : r.lhs.terms) {
          for (auto v : t.vals) {
            if (v.is_num) {
              denoms.insert(v.denom);
            }
          }
        }
      }
      cout << "Denoms..." << endl;
      int lcm = 1;
      for (auto d : denoms) {
        cout << "\t" << d << endl;
        lcm *= d;
      }

      cout << "LCM: " << lcm << endl;
      for (auto& c : rates_only) {
        cout << "Pre scaling: " << c << endl;
        c.scale(lcm);
        cout << "C: " << c << endl;
      }

      cout << "After simplification" << endl;
      for (auto r : rates_only) {
        string mset = set_string(qs, isl_str(r.lhs) + " = " + isl_str(r.rhs));
        cout << "\t" << mset << endl;
        rate_space = its(rate_space, rdset(ctx, mset));
      }

      cout << "Rate space: " << str(rate_space) << endl;

      {
        string aff_c = sep_list(qs, "", "", " + ");
        string aff_str =
          "{ " +
          sep_list(qs, "[", "]", ", ") + " -> " +
          sep_list(qs, "[", "]", " + ") + " }";

        cout << "Aff str: " << aff_str << endl;

        auto obj_func =
          isl_aff_read_from_str(ctx, aff_str.c_str());

        auto legal_delays = rate_space;
        auto ds = qs;
        cout << "Objective: " << str(obj_func) << endl;
        cout << "Legal delays: " << str(rate_space) << endl;
        cout << "Legal delay point: " << str(isl_set_sample_point(legal_delays)) << endl;

        auto min_point =
          isl_set_min_val(cpy(legal_delays), obj_func);
        string mstring =
          str(min_point);
        cout << "Min delays: " << mstring << endl;
        string os = aff_c;
        string mset = set_string(ds, os + " = " + mstring);
        cout << "Min set: " << mset << endl;
        auto min_set = rdset(ctx, mset.c_str());

        auto mvs = its(min_set, legal_delays);
        string dp = str(isl_set_sample_point(mvs));
        cout << "Min pt: " << dp << endl;

        vector<int> delay_coeffs =
          parse_pt(dp);
        assert(delay_coeffs.size() == ds.size());
        for (size_t i = 0; i < ds.size(); i++) {
          rates[ds[i]] = delay_coeffs[i];
        }
        //assert(false);
      }

      cout << "Rates..." << endl;
      for (auto r : rates) {
        cout << "\t" << r.first << " -> " << r.second << endl;
      }
      vector<QConstraint> delay_constraints =
        all_constraints;
      cout << "Constraints before delay substitution" << endl;
      for (auto c : delay_constraints) {
        cout << "\t" << c << endl;
      }

      for (auto& c : delay_constraints) {
        for (auto r : rates) {
          c.replace(qvar(r.first),
              qconst(map_find(r.first, rates)));
          c.replace(qvar(dv), qconst(0));
          c.lhs.simplify();
          c.rhs.simplify();
        }
      }

      cout << "All delay constraints..." << endl;
      vector<string> ds;
      for (auto f : sorted_functions) {
        ds.push_back("d_" + f);
      }
      string varspx = sep_list(ds, "[", "]", ", ");
      auto* legal_delays = rdset(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
      for (auto c : delay_constraints) {
        cout << "\t" << c << endl;
        cout << "\tisl str: " << isl_str(c) << endl;
        legal_delays = its(legal_delays, rdset(ctx, "{ " + varspx + " : " + isl_str(c) + " }"));
      }

      string aff_c = sep_list(ds, "", "", " + ");
      string aff_str =
        "{ " +
        sep_list(ds, "[", "]", ", ") + " -> " +
        sep_list(ds, "[", "]", " + ") + " }";

      cout << "Aff str: " << aff_str << endl;

      auto obj_func =
        isl_aff_read_from_str(ctx, aff_str.c_str());

      cout << "Objective: " << str(obj_func) << endl;
      cout << "Legal delays: " << str(legal_delays) << endl;
      cout << "Legal delay point: " << str(isl_set_sample_point(legal_delays)) << endl;

      auto min_point =
        isl_set_min_val(cpy(legal_delays), obj_func);
      string mstring =
        str(min_point);
      cout << "Min delays: " << mstring << endl;
      string os = aff_c;
      string mset = set_string(ds, os + " = " + mstring);
      cout << "Min set: " << mset << endl;
      auto min_set = rdset(ctx, mset.c_str());

      auto mvs = its(min_set, legal_delays);
      string dp = str(isl_set_sample_point(mvs));
      cout << "Min pt: " << dp << endl;

      vector<int> delay_coeffs =
        parse_pt(dp);
      assert(delay_coeffs.size() == ds.size());
      //assert(false);

      map<string, int> delays;
      int p = 0;
      for (auto f : sorted_functions) {
        string fd = "d_" + f;
        for (auto d : ds) {
          if (fd == d) {
            delays[fd] = delay_coeffs.at(p);
          }
        }
        p++;
      }

      cout << "Final schedules: " << endl;
      for (auto f : sorted_functions) {
        assert(contains_key("d_" + f, delays));
        assert(contains_key("q_" + f, rates));

        int delay =
          map_find("d_" + f, delays);
        int rate =
          map_find("q_" + f, rates);

        QTerm rd = qterm(rate, dv);
        QTerm d = qterm(delay);
        auto si = qexpr(rd, d);
        schedules[f].push_back(si);
      }

  }

  Box compute_box(const std::string& name) {
    cout << "Getting box: " << name << ": for " << str(compute_domain(name)) << endl;
    cout << tab(1) << "lexmin: " << str(lexmin(compute_domain(name))) << endl;
    cout << tab(1) << "lexmax: " << str(lexmax(compute_domain(name))) << endl;

    auto min_pt =
      parse_pt(sample(lexmin(compute_domain(name))));
    auto max_pt =
      parse_pt(sample(lexmax(compute_domain(name))));

    assert(min_pt.size() == max_pt.size());

    Box b;
    for (size_t i = 0; i < min_pt.size(); i++) {
      b.intervals.push_back({min_pt.at(i), max_pt.at(i)});
    }
    return b;
    //return map_find(name, compute_boxes);
  }

  isl_map* compute_map(const std::string& f) {
    return map_find(f, compute_maps);
  }

  isl_set* compute_domain(const std::string& name) {
    return map_find(name, compute_sets);
  }

  Window box_touched(const std::string& consumer, const std::string& producer) {
    for (auto s : app_dag.at(consumer).srcs) {
      if (s.name == producer) {
        return s;
      }
    }
    assert(false);
    return {};
  }

  umap* schedule_naive() {
    vector<string> sorted_functions = sort_functions();
    map<string, vector<QExpr> > schedules;
    int pos = 0;
    cout << "Sorted pipeline..." << endl;
    for (auto f : sorted_functions) {
      cout << "\t" << f << endl;
      schedules[f].push_back(qexpr(pos));
      pos++;
    }

    int ndims = 2;
    for (int i = ndims - 1; i >= 0; i--) {
      schedule_dim(i, schedules);
    }

    umap* m = rdmap(ctx, "{}");
    for (auto f : sorted_functions) {
      vector<string> sched_exprs;
      vector<string> var_names;
      for (int i = 0; i < ndims; i++) {
        string dv = "d" + to_string(i);
        var_names.push_back(dv);
      }

      for (auto v : schedules[f]) {
        sched_exprs.push_back(isl_str(v));
      }
      cout << "naive vars: " << var_names << endl;

      string map_str = "{ " + f + "_comp" + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";
      cout << "Map str: " << map_str << endl;
      auto rm = rdmap(ctx, map_str);
      m = unn(m, rm);
      isl_union_map_free(rm);
      cout << "Unioned" << endl;
      cout << "m = " << str(m) << endl;
    }

    cout << "done getting m..." << endl;

    //assert(false);
    return m;
  }

  Window data_window_provided_by_compute(const std::string& f, const int unroll_factor) {
    return map_find(f, app_dag).provided.unroll_cpy(unroll_factor);
  }

  Window data_window_needed_by_compute(const std::string& consumer, const std::string& producer, const int unroll_factor) {
    return box_touched(consumer, producer).unroll_cpy(unroll_factor);
  }

  map<string, UBuffer> build_buffers(umap* m, const int unroll_factor) {
    auto sorted_functions = sort_functions();
    // Generate re-use buffers
    map<string, UBuffer> buffers;
    for (auto f : sorted_functions) {
      cout << "Adding buffer: " << f << endl;
      UBuffer b;
      b.ctx = ctx;
      b.name = f;
      isl_set* domain =
        compute_domain(f);
      isl_union_map* sched =
        its(m, domain);

      Window write_box = data_window_provided_by_compute(f, unroll_factor);
      int i = 0;
      cout << "Write box for: " << f << " has " << write_box.pts().size() << " points in it" << endl;
      for (auto p : write_box.pts()) {
        vector<string> coeffs;
        for (auto e : p) {
          coeffs.push_back(isl_str(e));
        }
        cout << "Coeffs: " << sep_list(coeffs, "[", "]", ", ") << endl;
        auto access_map =
          rdmap(ctx, "{ " + f + "_comp[d0, d1] -> " +
              f + sep_list(coeffs, "[", "]", ", ") + " }");
        string pt_name = f + "_" + f + "_comp_write" + to_string(i);
        b.add_in_pt(pt_name, domain, its(to_map(access_map), domain), sched);
        i++;
        b.port_bundles[f + "_comp_write"].push_back(pt_name);
      }
      cout << "Port bundle has " << b.port_bundles[f + "_comp_write"].size() << " ports in it" << endl;

      for (auto consumer : consumers(f)) {
        isl_set* domain =
          compute_domain(consumer);
        isl_union_map* sched =
          its(m, domain);

        cout << "Getting map from " << f << " to " << consumer << endl;

        Window f_win = data_window_needed_by_compute(consumer, f, unroll_factor);

        int i = 0;
        for (auto p : f_win.pts()) {
          vector<string> coeffs;
          for (auto e : p) {
            coeffs.push_back(isl_str(e));
          }
          cout << "Coeffs: " << sep_list(coeffs, "[", "]", ", ") << endl;
          auto access_map =
            rdmap(ctx, "{ " + consumer + "_comp[d0, d1] -> " +
                f + sep_list(coeffs, "[", "]", ", ") + " }");
          cout << "Access map: " << str(access_map) << endl;
          string pt_name = consumer + "_rd" + to_string(i);
          b.add_out_pt(pt_name, domain, its(to_map(access_map), domain), sched);
          i++;
          b.port_bundles[consumer + "_comp_read"].push_back(pt_name);
        }
      }

      buffers[f] = b;
    }

    for (auto b : buffers) {
        cout << b.second.name << endl;
        cout << "input_ports..." << endl;
        for (auto in_port: b.second.get_in_ports()) {
            cout << "\t" << in_port << " access map: " << str(b.second.access_map.at(in_port)) << endl;
            cout << "\t" << in_port << " schedule  : " << str(b.second.schedule.at(in_port)) << endl;
            cout << endl;
        }

        cout << "output_ports..." << endl;
        for (auto in_port: b.second.get_out_ports()) {
            cout << "\t" << in_port << " access map: " << str(b.second.access_map.at(in_port)) << endl;
            cout << "\t" << in_port << " schedule  : " << str(b.second.schedule.at(in_port)) << endl;
            cout << endl;
        }
    }
    //assert(false);

    return buffers;
  }

  map<string, UBuffer> build_buffers(umap* m) {
    return build_buffers(m, 1);
  }

  void realize_naive(const std::string& name, const int d0, const int d1) {
    const int unroll_factor = 1;
    cout << "Realizing: " << name << " on " << d0 << ", " << d1 << " with unroll factor: " << unroll_factor << endl;
    fill_data_domain(name, d0, d1, unroll_factor);
    fill_compute_domain(unroll_factor);

    umap* m = schedule_naive();

    map<string, UBuffer> buffers = build_buffers(m);

    auto sorted_functions = sort_functions();
    uset* whole_dom =
      isl_union_set_read_from_str(ctx, "{}");
    assert(whole_dom != nullptr);
    for (auto f : sorted_functions) {
      cout << "Whole dom: " << str(whole_dom) << endl;
      whole_dom =
        unn(whole_dom, to_uset(compute_domain(f)));
    }

    CodegenOptions options;
    options.internal = true;
    prog prg;
    prg.name = name + "_naive";
    prg.compute_unit_file = "conv_3x3.h";
    prg.outs = {name};
    auto action_domain = cpy(whole_dom);
    map<string, isl_set*> domain_map;

    for (auto f : sorted_functions) {
      if (app_dag.at(f).srcs.size() == 0) {
        prg.ins.insert(f);
        action_domain =
          isl_union_set_subtract(action_domain,
              to_uset(compute_domain(f)));
      } else {
        Box compute_b =
          compute_box(f);
        op* nest = prg.root;
        int i = 0;
        for (auto r : compute_b.intervals) {
          nest = nest->add_nest(f + "_" + to_string(i), r.min, r.max + 1);
          i++;
        }
        auto op = nest->add_op(f + "_comp");
        op->add_store(f, "f_0, f_1");

        vector<string> fargs;
        for (auto p : app_dag.at(f).srcs) {
          op->add_load(p.name, "0, 0");
          if (!elem(p.name, fargs)) {
            fargs.push_back(p.name);
          }
        }
        op->add_function(app_dag.at(f).compute_name);
        domain_map[f + "_comp"] =
          compute_domain(f);
      }
    }


    generate_app_code(options, buffers, prg, its(m, action_domain), domain_map);
    generate_regression_testbench(prg);

    return;
  }

  map<string, vector<QExpr> > schedule_opt() {
    vector<string> sorted_functions = sort_functions();
    int ndims = 2;
    map<string, vector<QExpr> > schedules;
    for (int i = ndims - 1; i >= 0; i--) {
      schedule_dim(i, schedules);
    }

    int pos = 0;
    cout << "Sorted pipeline..." << endl;
    for (auto f : sorted_functions) {
      cout << "\t" << f << endl;
      schedules[f].push_back(qexpr(pos));
      pos++;
    }
    return schedules;
  }

  QExpr flatten(const std::string& f,
      const vector<QExpr>& s) {
    cout << "Flattening: " << f << endl;
    cout << tab(1) << "compute box: " << compute_box(f) << endl;
    QExpr flat;
    int sched_dim = s.size() - 1;
    int ndims = s.size() - 1;
    for (auto t : s) {
      if (sched_dim == 0) {
        for (auto v : t.terms) {
          int range = 1;
          flat.terms.push_back(times(range, v));
        }
      } else {
        int dim = ndims - sched_dim;
        for (auto v : t.terms) {
          int range =
            compute_box(f).length(dim);
          flat.terms.push_back(times(range, v));
        }
      }
      sched_dim--;
    }
    cout << "Flattened: " << flat << endl;
    return flat;
  }

  map<string, vector<QExpr> > flatten(const map<string, vector<QExpr> >& s) {
    map<string, vector<QExpr> > flattened;
    for (auto t : s) {
      flattened[t.first] =
      {flatten(t.first, t.second)};
    }
    cout << "Flattened schedules size: " << flattened.size() << endl;
    for (auto f : flattened) {
      assert(f.second.size() > 0);
      cout << tab(1) << f.first << endl;
      for (auto k : f.second) {
        cout << tab(2) << k << endl;
      }
    }
    assert(false);
    return flattened;
  }

  umap* schedule_flat() {
    auto schedules = schedule_opt();
    schedules = flatten(schedules);
    vector<string> sorted_functions = sort_functions();

    int ndims = 2;
    umap* m = rdmap(ctx, "{}");
    for (auto f : sorted_functions) {

      vector<string> var_names;
      for (int i = 0; i < ndims; i++) {
        string dv = "d" + to_string(i);
        var_names.push_back(dv);
      }

      vector<string> sched_exprs;
      for (auto v : schedules[f]) {
        sched_exprs.push_back(isl_str(v));
      }
      cout << "var names: " << var_names << endl;
      string map_str = "{ " + f + "_comp" + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";
      cout << "Map str: " << map_str << endl;
      auto rm = rdmap(ctx, map_str);
      m = unn(m, rm);
      isl_union_map_free(rm);
      cout << "Unioned" << endl;
      cout << "m = " << str(m) << endl;
    }

    cout << "done getting m..." << endl;


    return m;
  }

  umap* schedule() {
    auto schedules = schedule_opt();
    vector<string> sorted_functions = sort_functions();
    
    umap* m = rdmap(ctx, "{}");
    for (auto f : sorted_functions) {
      vector<string> sched_exprs;
      vector<string> var_names;
      int i = 0;
      for (auto v : schedules[f]) {
        string dv = "d" + to_string(i);
        sched_exprs.push_back(isl_str(v));
        var_names.push_back(dv);
        i++;
      }
      var_names.pop_back();
      string map_str = "{ " + f + "_comp" + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";
      cout << "Map str: " << map_str << endl;
      auto rm = rdmap(ctx, map_str);
      m = unn(m, rm);
      isl_union_map_free(rm);
      cout << "Unioned" << endl;
      cout << "m = " << str(m) << endl;
    }

    cout << "done getting m..." << endl;


    return m;
  }

  string compute_name(const string& f) {
    return map_find(f, app_dag).compute_name;
  }

  void generate_compute_unit_file(const std::string& filename, const int unroll_factor) {
    ofstream cfile(filename);
    cfile << "#pragma once" << endl << endl;
    cfile << "#include \"conv_3x3.h\"" << endl << endl;

    set<string> already_seen;
    for (auto f : sort_functions()) {
      if (producers(f).size() == 0) {
        continue;
      }

      if (elem(compute_name(f), already_seen)) {
        continue;
      }

      int fwidth = 32;
      int out_width = unroll_factor*fwidth;
      vector<pair<int, string> > args_and_widths;
      for (auto p : producers(f)) {
        int arg_width = 32;
        args_and_widths.push_back({arg_width*data_window_needed_by_compute(f, p.name, unroll_factor).pts().size(), p.name});
      }

      vector<string> arg_decls;
      for (auto a : args_and_widths) {
        arg_decls.push_back("hw_uint<" + to_string(a.first) + ">& " + a.second);
      }

      string out_type_string = "hw_uint<" + to_string(out_width) + "> ";
      cfile << out_type_string << " " << compute_name(f) << "_unrolled_" << unroll_factor << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;
      cfile << tab(1) << "hw_uint<" << out_width << "> whole_result;" << endl;
      for (int lane = 0; lane < unroll_factor; lane++) {
        vector<string> arg_names;
        for (auto arg : args_and_widths) {

          int arg_width = 32;

          string p = arg.second;
          Window arg_input_window = data_window_needed_by_compute(f, p, unroll_factor);
          string arg_name = "lane_" + to_string(lane) + "_" + p;

          arg_names.push_back(arg_name);
          Window win_needed =
            data_window_needed_by_compute(f, p, 1).increment(lane);

          cfile << tab(1) << "hw_uint<" << win_needed.pts().size()*arg_width << "> " << arg_name << ";" << endl;
          int win_pos = 0;
          for (auto off : win_needed.offsets) {
            cfile << tab(1) << "// Need offset: " << str(off) << endl;
            int npts = win_needed.pts().size()*arg_width;
            for (int i = 0; i < arg_input_window.offsets.size(); i++) {
              if (arg_input_window.offsets.at(i) == off) {
                int base = i*arg_width;
                int end = (i + 1)*arg_width - 1;
                cfile << tab(1) << "set_at<" << win_pos*arg_width << ", " << npts << ">(" << arg_name << ", " << p << ".extract<" << base << ", " << end << ">());" << endl;
              }
            }
            win_pos++;
          }
        }
        cfile << tab(1) << "auto result_" << lane << " = " << compute_name(f) << "(" << comma_list(arg_names) << ");" << endl;
        cfile << tab(1) << "set_at<" << fwidth*lane << ", " << out_width << ">(whole_result, result_" << lane << ");" << endl;
      }
      cfile << tab(1) << " return whole_result;" << endl;
      cfile << "}" << endl << endl;

      already_seen.insert(compute_name(f));
    }

    cfile.close();
  }

  void schedule_and_codegen(const std::string& name, const int unroll_factor) {
    umap* m = schedule_flat();

    map<string, UBuffer> buffers = build_buffers(m, unroll_factor);

    uset* whole_dom =
      isl_union_set_read_from_str(ctx, "{}");
    //cout << "Whole domain at top of realize " << name << ": " << whole_dom << endl;
    assert(whole_dom != nullptr);
    auto sorted_functions = sort_functions();
    for (auto f : sorted_functions) {
      //cout << "Whole dom: " << str(whole_dom) << endl;
      whole_dom =
        unn(whole_dom, to_uset(compute_domain(f)));
    }

    CodegenOptions options;
    options.internal = true;
    prog prg;
    prg.name = name + "_opt";
    prg.compute_unit_file = prg.name + "_compute_units.h";
    generate_compute_unit_file(prg.compute_unit_file, unroll_factor);

    auto action_domain = cpy(whole_dom);
    map<string, isl_set*> domain_map;
    for (auto f : sorted_functions) {
      if (app_dag.at(f).srcs.size() == 0) {
        prg.ins.insert(f);
        action_domain =
          isl_union_set_subtract(action_domain,
              to_uset(compute_domain(f)));
      } else {
        Box compute_b =
          compute_box(f);
        op* nest = prg.root;
        int i = 0;
        for (auto r : compute_b.intervals) {
          nest = nest->add_nest(f + "_" + to_string(i), r.min, r.max + 1);
          i++;
        }
        auto op = nest->add_op(f + "_comp");
        op->add_store(f, "0, 0");

        vector<string> fargs;
        for (auto p : app_dag.at(f).srcs) {
          op->add_load(p.name, "0, 0");
          if (!elem(p.name, fargs)) {
            fargs.push_back(p.name);
          }
        }
        if (unroll_factor == 1) {
          op->add_function(app_dag.at(f).compute_name);
        } else {
          op->add_function(app_dag.at(f).compute_name + "_unrolled_" + to_string(unroll_factor));
        }
        domain_map[f + "_comp"] =
          compute_domain(f);
      }
    }
    prg.outs = {name};

    generate_app_code(options, buffers, prg, its(m, action_domain), domain_map);
    generate_regression_testbench(prg);

    return;
  }

  void realize(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    cout << "Realizing: " << name << " on " << d0 << ", " << d1 << " with unroll factor: " << unroll_factor << endl;
    fill_data_domain(name, d0, d1, unroll_factor);
    fill_compute_domain(unroll_factor);
    schedule_and_codegen(name, unroll_factor);
  }

};

Window win(const std::string& name, const std::vector<vector<int > >& offsets) {
  assert(offsets.size() > 0);
  size_t ndims = offsets.at(0).size();
  vector<int> strides;
  for (size_t i = 0; i < ndims; i++) {
    strides.push_back(1);
  }
  return Window{name, strides, offsets};
}

Window pt(const std::string& name) {
  return Window{name, {1, 1}, {{0, 0}}};
}

void updown_merge_test() {
  App ds;
  ds.func2d("A_off");
  ds.func2d("B_off");

  ds.func2d("A", "id", "A_off", {1, 1}, {{0, 0}});
  ds.func2d("B", "id", "B_off", {1, 1}, {{0, 0}});

  Window awin("A", {qconst(1, 2), qconst(1, 5)}, {{0, 0}});
  Window bwin("B", {qconst(4), qconst(3)}, {{0, 0}});
  ds.func2d("C", "diff", {awin, bwin});

  ds.realize("C", 10, 10, 1);

  int res = system("g++ -std=c++11 -c C_opt.cpp");
  assert(res == 0);
}

void upsample2d_test() {
  App ds;
  ds.func2d("A");
  Window awin("A", {qconst(1, 2), qconst(1, 5)}, {{0, 0}});
  ds.func2d("B", "id", awin);
  ds.realize("B", 10, 10, 1);

  int res = system("g++ -std=c++11 -c B_opt.cpp");
  assert(res == 0);
}

void downsample2d_test() {
  App ds;
  ds.func2d("A");
  Window awin{"A", {2, 2}, {{0, 0}}};
  ds.func2d("B", "id", awin);
  ds.realize("B", 10, 10, 1);

  int res = system("g++ -std=c++11 -c B_opt.cpp");
  assert(res == 0);
}

void mismatched_stencil_test() {
  App sobel;

  sobel.func2d("off_chip_img0");
  sobel.func2d("img0", "id", "off_chip_img0", {1, 1}, {{0, 0}});

  sobel.func2d("off_chip_img1");
  sobel.func2d("img1", "id", "off_chip_img1", {1, 1}, {{0, 0}});

  Window xwindow{"img0", {1, 1}, {{0, 0}, {1, 0}, {2, 0}}};
  Window ywindow{"img1", {1, 1}, {{0, 0}, {1, 0}}};
  sobel.func2d("mismatched_stencils", "contrived", {xwindow, ywindow});

  sobel.realize("mismatched_stencils", 10, 1, 1);
  sobel.realize_naive("mismatched_stencils", 10, 1);

  std::vector<std::string> naive =
    run_regression_tb("mismatched_stencils_naive");
  cout << "Naive    : " << naive << endl;
  std::vector<std::string> optimized =
    run_regression_tb("mismatched_stencils_opt");
  cout << "Optimized: " << optimized << endl;
  assert(naive == optimized);
  //int res = system("g++ -std=c++11 -c mismatched_stencils_opt.cpp");
  //assert(res == 0);
  //assert(false);
}

void denoise2d_test() {
  App dn;

  dn.func2d("f_off_chip");
  dn.func2d("u_off_chip");
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("diff_qwe", "diff_b", "u", {{0, 0}, {1, 0}});
  dn.func2d("diff_d", "diff_b", "u", {{0, 0}, {1, 0}});
  dn.func2d("diff_l", "diff_b", "u", {{0, 0}, {1, 0}});
  dn.func2d("diff_r", "diff_b", "u", {{0, 0}, {1, 0}});

  ////dn.func2d("denoise2d", "diff", {pt("diff_qwe"), pt("diff_d")});

  //dn.func2d("denoise2d", "mag_dn2", {pt("diff_qwe"), pt("diff_d"), pt("diff_l"), pt("diff_r")});

  dn.func2d("g", "mag_dn2", {pt("diff_qwe"), pt("diff_d"), pt("diff_l"), pt("diff_r")});
  dn.func2d("r0", "comp_r0", {pt("u"), pt("f")});
  dn.func2d("r1", "r1_comp", pt("r0"));
  dn.func2d("denoise2d", "out_comp_dn2d", {pt("r1"), pt("f"), win("u", {{0, 0}, {0, -1}, {-1, 0}, {1, 0}}), win("g", {{0, 1}, {0, -1}, {-1, 0}, {1, 0}})});

  dn.realize("denoise2d", 30, 30, 1);

  dn.realize_naive("denoise2d", 30, 30);

  std::vector<std::string> naive =
    run_regression_tb("denoise2d_naive");
  std::vector<std::string> optimized =
    run_regression_tb("denoise2d_opt");

  assert(naive == optimized);
}

App unroll(const App& app, const int unroll_factor) {
  App unrolled;

  for (auto f : app.app_dag) {
    vector<Window> args;
    for (auto w : f.second.srcs) {
      args.push_back(w.unroll_cpy(unroll_factor));
    }

    string cn = f.second.compute_name + "_unroll";

    unrolled.func2d(f.first + "_unrolled", cn, args);

    unrolled.app_dag[f.first + "_unrolled"].provided =
      unrolled.app_dag[f.first + "_unrolled"].provided.unroll_cpy(unroll_factor);
  }

  return unrolled;
}

void conv3x3_app_unrolled_uneven_test() {

  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app_unrolled_uneven", "conv_3_3", "img", {1, 1}, offsets);

  sobel.realize("conv3x3_app_unrolled_uneven", 30, 30, 7);

  int res = system("g++ -std=c++11 conv3x3_app_unrolled_uneven_opt.cpp -c ");
  assert(res == 0);

}

void conv3x3_app_unrolled_test() {

  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app_unrolled", "conv_3_3", "img", {1, 1}, offsets);

  sobel.realize("conv3x3_app_unrolled", 30, 30, 2);
  //sobel.realize("conv3x3_app_unrolled", 32, 32, 8);

  //App ur = unroll(sobel, 2);
  //ur.realize("conv3x3_app_unrolled", 30, ceil(30 / 2.0), 1);

  int res = system("g++ -std=c++11 tb_app_unrolled_conv3x3.cpp conv3x3_app_unrolled_opt.cpp");
  assert(res == 0);

  int tb_res = system("./a.out");
  assert(tb_res == 0);
}


void conv3x3_app_test() {
  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app", "conv_3_3", "img", {1, 1}, offsets);

  sobel.realize("conv3x3_app", 30, 30, 1);

  int res = system("g++ -std=c++11 tb_app_conv3x3.cpp conv3x3_app_opt.cpp");
  assert(res == 0);

  int tb_res = system("./a.out");
  assert(tb_res == 0);
}

void sobel_test() {
  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  sobel.func2d("mag_x", "sobel_mx", "img", {1, 1},
      {{1, -1}, {-1, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}});
  sobel.func2d("mag_y", "sobel_my", "img", {1, 1},
      {{-1, 1}, {-1, -1}, {0, 1}, {0, -1}, {1, 1}, {1, -1}});

  Window xwindow{"mag_x", {1, 1}, {{0, 0}}};
  Window ywindow{"mag_y", {1, 1}, {{0, 0}}};
  sobel.func2d("mag", "mag_cu", {xwindow, ywindow});

  sobel.realize("mag", 30, 30, 1);

  int res = system("g++ -std=c++11 -c mag_opt.cpp");
  assert(res == 0);
}

void heat_3d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "heat3d";
  prg.buffer_port_widths["I"] = 32;

  int rows = 32;
  int cols = 32;
  int channels = 32;

  prg.buffer_bounds["I"] = {rows, cols, channels};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id2", 0, rows, "id1", 0, cols, "id0", 0, channels);
  in_nest->add_op({"I", "id0, id1, id2"}, "id", {in_name, "id0, id1, id2"});

  auto blur_y_nest =
    prg.add_nest("d2", 1, rows - 1, "d1", 1, cols - 1, "d0", 1, channels - 1);
  blur_y_nest->
    stencil_op(out_name, "heat3d_compute", "I", {"d0", "d1", "d2"},
        {{1, 0, 0}, {0, 0, 0}, {-1, 0, 0},
        {0, 1, 0}, {0, 0, 0}, {0, -1, 0},
        {0, 0, 1}, {0, 0, 0}, {0, 0, -1}});

  // Need to fix repeated reads from the same location
  regression_test(prg);
}

void blur_x_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "blur_x";
  prg.buffer_port_widths["I"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  // This code (in SODA is described as blur_x)
  // blur_x(0, 0) = in(0, 0) + in(0, 1) + in(0, 2)
  auto in_nest = prg.add_nest("id1", 0, 8, "id0", 0, 32);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, 8 - 2, "d0", 0, 32);
  auto lds = prg.vector_load("I", "d0", 0, 1, "d1", 0, 3);
  blur_y_nest->
    add_op({out_name, "d0, d1"}, "blur_3", lds);

  regression_test(prg);
  //assert(false);
}

void pointwise_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "pointwise";
  prg.buffer_port_widths["I"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, 32, "id0", 0, 8);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, 32, "d0", 0, 8);
  blur_y_nest->
    add_op({out_name, "d0, d1"}, "plus_one", {"I", "d0, d1"});


  regression_test(prg);
}

void stencil_3d_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "stencil_3d";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_port_widths["blur_x"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("ir", 0, 32, "ic", 0, 32, "ib", 0, 32);
  in_nest->add_op({"I", "ir, ic, ib"}, "id", {in_name, "ir, ic, ib"});

  auto blur_y_nest =
    prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32 - 2), "xb", 0, (32 - 2));
  auto lds0 = prg.vector_load("I", "xr", 0, 3, "xc", 0, 3, "xb", 0, 3);
  blur_y_nest->
    add_op({out_name, "xr, xc, xb"}, "blur_27", lds0);


  // How do I want to schedule things?
  //  - Using a single loop nest over input pixels giving each pixel
  //    a time?
  regression_test(prg);
}

void soda_blur_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "soda_blur";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_port_widths["blur_x"] = 16;

  int unroll_factor = 2;
  for (int i = 0; i < unroll_factor; i++) {
    string in_name = "in_" + to_string(i);
    string out_name = "out_" + to_string(i);

    prg.buffer_port_widths[in_name] = 16;
    prg.add_input(in_name);

    prg.buffer_port_widths[out_name] = 16;
    prg.add_output(out_name);
  }

  auto in_nest = prg.add_nest("ir", 0, 32, "ic", 0, 32 / unroll_factor);
  for (int i = 0; i < unroll_factor; i++) {
    string in_name = "in_" + to_string(i);
    in_nest->add_op({"I", "ir, " + to_string(unroll_factor) + "*ic + " + to_string(i)}, "id", {in_name, "ir, ic"});
  }

  auto blur_y_nest =
    prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32) / unroll_factor);
  for (int i = 0; i < unroll_factor; i++) {
    string is = to_string(i);
    string uf = to_string(unroll_factor);

    string out_name = "out_" + to_string(i);
    auto lds0 = prg.vector_load("I", "xr", 0, 3, to_string(unroll_factor) + "*xc + " + to_string(i), 0, 1);
    blur_y_nest->
      add_op({out_name, "xr, " + uf + "*xc + " + is}, "blur_3", lds0);
  }

  //auto blur_x_nest =
    //prg.add_nest("yr", 0, 32, "yc", 0, (32 - 2) / unroll_factor);
  //for (int i = 0; i < unroll_factor; i++) {
    //auto lds = prg.vector_load("I", "yr", 0, 1, to_string(unroll_factor) + "*yc + " + to_string(i), 0, 3);

    //string is = to_string(i);
    //string uf = to_string(unroll_factor);
    //blur_x_nest->add_op({"blur_x", "yr, " + uf + "*yc + " + is}, "blur_3", lds);
  //}

  //auto blur_y_nest =
    //prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32 - 2) / unroll_factor);
  //for (int i = 0; i < unroll_factor; i++) {
    //string is = to_string(i);
    //string uf = to_string(unroll_factor);

    //string out_name = "out_" + to_string(i);
    //auto lds0 = prg.vector_load("blur_x", "xr", 0, 3, to_string(unroll_factor) + "*xc + " + to_string(i), 0, 1);
    //blur_y_nest->
      //add_op({out_name, "xr, " + uf + "*xc + " + is}, "blur_3", lds0);
  //}

  regression_test(prg);
  //assert(false);
}

void conv_2d_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_rolled";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["R"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pr, pc");
    write->add_store("I", "pr, pc");
  }

  {
    auto pr = prg.add_loop("lr", 1, 64 - 1);
    auto pc = pr->add_loop("lc", 1, 64 - 1);

    auto rd = pc->add_op("init");
    rd->add_store("R", "lr, lc");
    rd->add_function("set_zero_32");

    auto reduce_inner_loop = pc->add_nest("rr", -1, 2, "rc", -1, 2);
    auto reduce_inner = reduce_inner_loop->add_op({"R", "lr - 1, lc - 1"}, "inc", {"R", "lr, lc", "I", "lr + rr, lc + rc"});
  }

  {
    auto outlp = prg.add_nest("xr", 0, 64 - 2, "xc", 0, 64 - 2);
    outlp->store({"out", "xr, xc"}, {"R", "xr, xc"});
  }

  regression_test(prg);
}

void unsharp_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "unsharp";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["Blur"] = 32;
  prg.buffer_port_widths["Diff"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  vector<string> conv_loads;
  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      conv_loads.push_back("I");
      conv_loads.push_back("br + " + to_string(r) + ", bc + " + to_string(c));
    }
  }

  prg.add_nest("br", 0, 64 - 2, "bc", 0, 64 - 2)->add_op({"Blur", "br,bc"}, "conv_3_3", conv_loads);
  prg.add_nest("dr", 0, 64 - 2, "dc", 0, 64 - 2)->add_op({"Diff", "dr, dc"}, "diff", {"I", "dr, dc", "Blur", "dr, dc"});
  prg.add_nest("xr", 0, 64 - 2, "xc", 0, 64 - 2)->store({"out", "xr, xc"}, {"Diff", "xr, xc"});

  regression_test(prg);
}

void warp_and_upsample_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "warp_and_upsample";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["warped_0"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});

  auto loads = prg.vector_load("I", "br", 0, 3, "bc", 0, 3);
  cout << "# of loads: " << loads.size() << endl;
  prg.add_nest("br", 0, 64 - 2, "bc", 0, 64 - 2)->add_op({"warped_0", "br,bc"}, "conv_3_3", loads);
  prg.add_nest("ur", 0, 64 - 2, "kr", 0, 2)->add_nest("uc", 0, 64 - 2, "kc", 0, 2)->
    add_op({"out", "ur, uc"}, "id", {"warped_0", "ur, uc"});

  regression_test(prg);
}

void downsample_and_blur_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "downsample_and_blur";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["downsampled"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});

  prg.add_nest("dr", 0, (64) / 2, "dc", 0, (64) / 2)->
    add_op({"downsampled", "dr, dc"}, "id", {"I", "2*dr, 2*dc"});

  auto loads = prg.vector_load("downsampled", "br", 0, 3, "bc", 0, 3);
  prg.add_nest("br", 0, 32 - 2, "bc", 0, 32 - 2)->add_op({"out", "br,bc"}, "conv_3_3", loads);

  regression_test(prg);
}

void two_in_conv2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_two_in_window";
  prg.add_input("in0");
  prg.add_input("in1");
  prg.add_output("out");

  prg.buffer_port_widths["I"] = 32;
  int img_size = 20;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto ldi = prg.add_nest("pr", 0, img_size, "pc", 0, img_size / 2);
  ldi->store({"I", "pr, 2*pc"}, {"in0", "pr, 2*pc"});
  ldi->store({"I", "pr, 2*pc + 1"}, {"in1", "pr, 2*pc + 1"});

  auto cpi = prg.add_nest("r", 0, (img_size / 2) - 2, "c", 0, (img_size / 2) - 2);
  auto ld = prg.vector_load("I", "2*r", 0, 3, "2*c", 0, 3);
  cpi->add_op({"out", "r, c"}, "conv_3_3", ld);

  regression_test(prg);
}

void two_in_window_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "two_in_window";
  prg.add_input("in0");
  prg.add_input("in1");
  prg.add_output("out");

  prg.buffer_port_widths["I"] = 32;
  int img_size = 10;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto ldi = prg.add_nest("pr", 0, img_size);
  ldi->store({"I", "2*pr"}, {"in0", "pr"});
  ldi->store({"I", "2*pr + 1"}, {"in1", "pr"});

  auto cpi = prg.add_nest("c", 0, (img_size / 2) - 2);
  auto ld = prg.vector_load("I", "2*c", 0, 3);
  cout << "Loads..." << endl;
  for (auto d : ld) {
    cout << "\t" << d << endl;
  }
  cpi->add_op({"out", "c"}, "conv_1_3", ld);

  regression_test(prg);
}

void blur_and_downsample_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "blur_and_downsample";
  prg.add_input("in");
  //prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  int img_size = 15;
  prg.buffer_bounds["I"] = {img_size, img_size};

  prg.add_nest("pr", 0, img_size, "pc", 0, img_size)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  string bds = add_gaussian_stage(prg, "I");
  string cv = add_conv_stage(prg, bds);
  write_out(prg, cv);

  regression_test(prg);
}

int main(int argc, char** argv) {

  if (argc > 1) {
    assert(argc == 2);
    string cmd = argv[1];

    if (cmd == "program_representation") {
      prog prg = conv_1d();
      aha_talk_print_program_representation(prg);
      return 0;
    }

    if (cmd == "raw_deps") {
      prog prg = conv_1d();
      aha_talk_print_raw_deps(prg);
      return 0;
    }

    if (cmd == "conv_1d") {
      prog prg = conv_1d();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_1d_bc") {
      prog prg = conv_1d_bc();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_2d") {
      prog prg = conv_2d();
      aha_talk_print_info(prg);
      return 0;
    }

    cout << "Error: Unrecognized command: " << cmd << endl;
    assert(false);

  } else if (argc == 1) {
    //jacobi_2d_4_test();
    //assert(false);

    //synth_lb_test();

    mismatched_stencil_test();
    assert(false);

    conv3x3_app_unrolled_test();
    conv3x3_app_test();
    denoise2d_test();
    upsample2d_test();
    conv3x3_app_unrolled_uneven_test();
    reduce_1d_test();
    downsample2d_test();
    updown_merge_test();
    sobel_test();

    agg_test();

    heat_3d_test();

    blur_and_downsample_test();
    downsample_and_blur_test();

    //synth_reduce_test();
    jacobi_2d_2_test();
    //assert(false);
    jacobi_2d_test();
    parse_denoise3d_test();
    seidel2d_test();

    blur_x_test();
    pointwise_test();

    stencil_3d_test();
    soda_blur_test();
    two_in_window_test();
    two_in_conv2d_test();
    gaussian_pyramid_test();
    warp_and_upsample_test();

    conv_1d_rolled_test();
    //synth_upsample_test();
    unsharp_test();
    conv_2d_rolled_test();
    reduce_2d_test();
    conv_1d_test();
    conv_2d_bc_test();
    mobilenet_test();
    pyramid_2d_test();
    pyramid_test();
    conv_1d_bc_test();
    //synth_wire_test();
    //synth_sr_boundary_condition_test();
  } else {
    assert(false);
  }

  return 0;

}





#pragma once

#include "algorithm.h"
#include "utils.h"
#include "qexpr.h"
#include "expr.h"

typedef pair<string, int> op_level;

static inline
std::string neg_ii_var(const string& n, const int d) {
  return "neg_ii_" + n + "_pdim" + str(d);
}

static inline
std::string hw_delay_var(const string& n) {
  return "hw_delay_" + n;
}

static inline
std::string ii_var(const string& n, const int d) {
  return "ii_" + n + "_pdim" + str(d);
}

static inline
string sched_var_name(const string& n) {
  return "s_" + n;
}

static inline
string delay_var_name(const string& n) {
  return "delay_" + n;
}

static inline
string startvar(const string& n) {
  return "start_" + n;
}

static inline
string endvar(const string& n) {
  return "end_" + n;
}

map<string, int> maximize(const std::vector<QConstraint>& constraints, QExpr& objective);

map<string, int> minimize(const std::vector<QConstraint>& constraints, QExpr& objective);

struct FiniteRegion {
  string name;

  protected:

  vector<QAV> strides;
  vector<QAV> reduce_var_strides;

  public:

  vector<vector<int> > offsets;
  umap* needed;
  Box reduce_var_ranges;

  FiniteRegion() {}

  void add_reduce_dimension(const int s, const int e_inclusive, const QAV& stride) {
    reduce_var_ranges.intervals.push_back({s, e_inclusive});
    reduce_var_strides.push_back(stride);
  }

  int reduce_dimension() const {
    return reduce_var_strides.size();
  }

  int total_dimension() const {
    return strides.size() + reduce_var_strides.size();
  }

  int dimension() const {
    return strides.size();
  }

  FiniteRegion(const string& name_,
      const vector<QAV>& strides_,
      const vector<vector<int > >& offsets_) :
    name(name_),
    strides(strides_),
    offsets(offsets_) {}

  FiniteRegion(const string& name_,
      const vector<QAV>& strides_,
      const vector<QAV>& reduce_var_strides_,
      const vector<vector<int > >& offsets_) :
    name(name_),
    strides(strides_),
    reduce_var_strides(reduce_var_strides_),
    offsets(offsets_) {}

  FiniteRegion(const string& name_,
      const vector<int>& strides_,
      const vector<vector<int > >& offsets_) :
    name(name_),
    strides({}),
    offsets(offsets_) {
      for (auto s : strides_) {
        strides.push_back(qconst(s));
      }
    }

  FiniteRegion increment(const QAV& stride, const int diff) const {
    FiniteRegion c;
    c.name = name;
    c.strides = strides;

    std::set<vector<int> > unrolled_offsets;
    for (auto offset : offsets) {
      vector<int> uoff = offset;
      uoff[0] = uoff.at(0) + times_int(stride, diff);
      unrolled_offsets.insert(uoff);
    }

    for (auto u : unrolled_offsets) {
      c.offsets.push_back(u);
    }

    return c;
  }

  FiniteRegion increment(const int diff) const {
    FiniteRegion c;
    c.name = name;
    c.strides = strides;

    std::set<vector<int> > unrolled_offsets;
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

  FiniteRegion scale_stride(const int factor) const {
    QAV s = stride(0);

    assert(s.is_num);
    cout << "denom = " << s.denom << ", factor = " << factor << endl;
    assert(factor == 1 || s.denom == 1 || ((factor % s.denom) == 0));

    FiniteRegion cpy = *this;
    cpy.strides[0] = scale(factor, s);
    return cpy;
  }


  FiniteRegion unroll_cpy(const int factor) const {
    cout << "Unrolling by factor: " << factor << endl;
    FiniteRegion c;
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

    std::set<vector<int> > unrolled_offsets;
    for (int i = 0; i < factor; i++) {
      for (auto offset : offsets) {
        vector<int> uoff = offset;
        uoff[0] = uoff.at(0) + times_int(stride(0), i);
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
      for (size_t i = 0; i < dimension(); i++) {
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
    assert(dim < dimension());
    ostringstream ss;
    ss << stride(dim);
    string base = "x*" + ss.str();
    int min_off = min_offset(dim);
    int max_off = max_offset(dim);

    return "{ k | " + base + " + " + to_string(min_off) + " <= k <= " + base + " + " + to_string(max_off) + " }";
  }

  int reduce_max(const int dim) const {
    if (dim >= reduce_var_ranges.dimension()) {
      return 0;
    }
    assert(dim < reduce_var_ranges.dimension());

    int max = reduce_var_ranges.intervals.at(dim).max;
    cout << "###### REDUCE MAX = " << max << endl;
    return max;
  }

  int reduce_min(const int dim) const {
     if (dim >= reduce_var_ranges.dimension()) {
      return 0;
    }
    assert(dim < reduce_var_ranges.dimension());
    return reduce_var_ranges.intervals.at(dim).min;
  }

  int max_addr(const int dim, const int max_result_addr) {
    return times_int(stride(dim), max_result_addr)
      + times_int(reduce_var_stride(dim), reduce_max(dim))
      + max_offset(dim);
  }

  int min_addr(const int dim, const int max_result_addr) {
    return times_int(stride(dim), max_result_addr)
      + times_int(reduce_var_stride(dim), reduce_min(dim))
      + min_offset(dim);
  }

  int times_int(const QAV& v, const int max_result_addr) const {
    if ((v).is_whole()) {
      assert(v.denom == 1);
      return v.num*max_result_addr;
    }
    assert(v.num == 1);
    return floor(max_result_addr / (float) v.denom);
  }

  QAV reduce_var_stride(const int dim) const {
    if (dim >= reduce_var_ranges.dimension()) {
      return qconst(0);
    }
    cout << "Name = " << name << endl;
    cout << "Reduce var ranges = " << reduce_var_ranges.dimension() << endl;
    cout << "dim = " << dim << endl;
    cout << "###### has reduce stride: " << reduce_var_strides.at(dim) << endl;
    assert(dim < (int) reduce_var_ranges.dimension());
    return reduce_var_strides.at(dim);
  }

  QAV stride(const int dim) const {
    assert(dim < (int) dimension());
    return strides.at(dim);
  }

  int min_offset(const int dim) const {
    assert((int) dimension() > dim);
    int min = 10000;
    for (auto off : offsets) {
      if (off.at(dim) < min) {
        min = off.at(dim);
      }
    }
    return min;
  }

  int max_offset(const int dim) const {
    assert((int) dimension() > dim);
    int max = -100000;
    for (auto off : offsets) {
      if (off.at(dim) > max) {
        max = off.at(dim);
      }
    }
    return max;
  }
};

static inline
std::ostream& operator<<(std::ostream& out, const FiniteRegion& r) {
  vector<QAV> strides;
  for (int i = 0; i < r.dimension(); i++) {
    strides.push_back(r.stride(i));
  }
  vector<string> offstrs;
  for (auto off : r.offsets) {
    ostringstream ss;
    ss << "(";
    for (auto ff : off) {
      ss << ff << ", ";
    }
    ss << ")";
    offstrs.push_back(ss.str());
  }
  out << r.name << "{ " << comma_list(strides) << " + <" + comma_list(offstrs) + "> }";
  return out;
}

typedef FiniteRegion Window;

struct Update {

  bool is_reduction;

  string operation_name;

  Window provided;

  string update_function_name;
  string compute_function_name;

  Box reduce_var_domain;
  vector<Window> srcs;
  int unroll_factor;

  string compute_unit_impl;
  Expr* def;

  vector<string> index_variables_needed;

  vector<string> index_variables_needed_by_compute() {
    return index_variables_needed;
  }

  void pad_reduce_dimension(const int max_reduce_dimension) {
    for (auto& win : srcs) {
      if (win.reduce_dimension() < max_reduce_dimension) {
        for (int i = win.reduce_dimension(); i < max_reduce_dimension; i++) {
          //cout << "Adding reduce dimensio nto " << win.name << endl;
          win.add_reduce_dimension(0, -1, qconst(0));
        }
      }
    }
  }

  std::string name() const { return operation_name; }
  std::string compute_name() const { return compute_function_name; }
  std::string unrolled_compute_name() const { return compute_name() + "_unrolled_" + str(unroll_factor); }

  vector<Window> get_srcs() const {
    return srcs;
  }

  Window get_provided() const {
    return provided;
  }
  bool is_reduce() const {
    return is_reduction;
  }

};

struct Result {
  int pixel_width;
  num_type tp;
  vector<Window> srcs;
  Window provided;

  Result() : pixel_width(32) {}

  vector<Update> updates;

  vector<Window> get_srcs() const {
    assert(updates.size() > 0);
    vector<Window> all_srcs;
    for (auto u : updates) {
      concat(all_srcs, u.get_srcs());
    }
    return all_srcs;
  }

  Window get_provided() const {
    assert(updates.size() > 0);
    return updates.at(0).get_provided();
  }

  string unrolled_compute_name() const {
    assert(updates.size() > 0);
    return updates.at(0).unrolled_compute_name();
  }

  string compute_name() const {
    assert(updates.size() > 0);
    return updates.at(0).compute_name();
  }

  void add_reduce_update(const string& accum,
      const string& compute,
      const vector<Window>& args,
      const Box& reduce_ranges) {
    for (auto a : args) {
      assert(a.reduce_var_ranges == reduce_ranges);
    }

    for (auto a : args) {
      cout << "reduce range of " << a.name << " = " << a.reduce_var_ranges << endl;
    }
    string update_name = provided.name + "_update_" + str(updates.size());
    updates.push_back({false, update_name, provided, accum, compute, reduce_ranges, args, 1});
  }

  void add_init_update(const string& name, const string& compute, const vector<Window>& args) {
    string update_name = provided.name + "_update_" + str(updates.size());
    updates.push_back({false, update_name, provided, "", compute, {}, args, 1, "", nullptr});
  }

};

static inline
QExpr lower_bound(const Window& arg, const int dim) {
  string dvar = "d" + to_string(dim);

  QAV dv = qvar(dvar);
  QAV stride = arg.stride(dim);
  //strides.at(dim);
  QAV max_off = qconst(arg.min_offset(dim));
  QAV rate = qvar("q_" + arg.name);
  QTerm dvs = qterm(stride, rate, dv);
  QTerm qm = qterm(rate, max_off);
  QTerm delay = qterm("d_" + arg.name);
  QExpr k = qexpr(dvs, qm, delay);
  return k;
}

static inline
QExpr upper_bound(const Window& arg, const int dim) {
  string dvar = "d" + to_string(dim);

  QAV dv = qvar(dvar);
  QAV stride = arg.stride(dim);
    //arg.strides.at(dim);
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
static inline
QExpr max_bound(const string& consumer, const Window& arg, const int dim) {
  string dvar = consumer;

  QAV dv = qvar(dvar);
  QAV stride = arg.stride(dim);
    //arg.strides.at(dim);
  QAV max_off = qconst(arg.max_offset(dim));
  QTerm dvs = qterm(stride, dv);

  QExpr qm = qexpr(dvs, qterm(max_off));
  return qm;

  //auto bnd = upper_bound(arg, dim);
  //auto dv = qvar("d" + str(dim));
  //auto qv = qvar("q_" + arg.name);
  //bnd.replace(dv, qvar(endvar(consumer, dim)));
  //bnd.replace(qv, qconst(1));
  //bnd.simplify();
  //return bnd;
}

static inline
QExpr min_bound(const string& consumer, const Window& arg, const int dim) {
  string dvar = consumer;

  QAV dv = qvar(dvar);
  QAV stride = arg.stride(dim);
    //arg.strides.at(dim);
  QAV max_off = qconst(arg.min_offset(dim));
  QTerm dvs = qterm(stride, dv);

  QExpr qm = qexpr(dvs, qterm(max_off));
  return qm;
}

static inline
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

static inline
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

static inline
map<string, int>
compute_delays(isl_ctx* ctx,
    vector<string>& sorted_functions,
    vector<QConstraint> delay_constraints) {

  cout << "Delay constraints..." << endl;
  for (auto d : delay_constraints) {
    cout << tab(1) << d << endl;
  }

  //assert(false);

  vector<string> ds;
  for (auto f : sorted_functions) {
    ds.push_back("d_" + f);
  }
  QExpr objective_expr;
  for (auto d : ds) {
    objective_expr.terms.push_back(qterm(d));
  }

  string target_func = sorted_functions.back();
  QConstraint cc = eq(qexpr("d_" + target_func), 0);
  delay_constraints.push_back(cc);
  map<string, int> delays =
    maximize(delay_constraints, objective_expr);
  assert(delays.size() == sorted_functions.size());

  int min_delay = 9999999;
  for (auto d : delays) {
    if (d.second < min_delay) {
      min_delay = d.second;
    }
  }

  cout << "Delays..." << endl;
  for (auto& d : delays) {
    d.second = d.second - min_delay;
    cout << tab(1) << d.first << " = " << d.second << endl;
  }
  return delays;
}

static inline
map<string, QExpr>
compute_schedule_for_dim(isl_ctx* ctx,
    const int i,
    vector<string>& sorted_functions,
    const vector<QConstraint>& all_constraints,
    const vector<QConstraint>& rate_constraints,
    const map<string, map<string, QExpr> >& last_compute_needed) {

  cout << "### All constraints..." << endl;
  for (auto c : all_constraints) {
    cout << tab(1) << c << endl;
  }

  vector<QConstraint> offset_constraints =
    rate_constraints;

  string dv = "d" + to_string(i);
  map<string, int> rates;
  for (auto f : sorted_functions) {
    rates["q_" + f] = 1;
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
  std::set<int> denoms;
  for (auto r : rate_constraints) {
    cout << "R = " << r << endl;

    if (r.lhs.contains_val(qvar(dv)) &&
        r.rhs.contains_val(qvar(dv))) {

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

    } else {
      //assert(false);
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

  for (auto& c : offset_constraints) {
    for (auto r : rates) {
      c.replace(qvar(r.first),
          qconst(map_find(r.first, rates)));
      c.replace(qvar(dv), qconst(0));
      c.lhs.simplify();
      c.rhs.simplify();
    }
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

  map<string, int> delays =
    compute_delays(ctx, sorted_functions, delay_constraints);
    //compute_delays(ctx, sorted_functions, delay_constraints, offset_constraints);
  //assert(i == 1);

  cout << "Final schedules: " << endl;
  map<string, QExpr> schedules;
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

    cout << tab(1) << "s_" << f << " = " << si << endl;

    schedules[f] = si;
  }

  cout << "done with schedules..." << endl;

  //if (i == 0) {
    //assert(false);
  //}
  return schedules;
}

static inline
QExpr extract_bound(const int i, const std::string& name, const string& max) {
  QExpr ub;
  regex cm("\\{ (.*)\\[(.*)\\] -> \\[\\((.*)\\)\\] \\}");
  //regex cm("\\{ (.*)\\[(.*)\\] -> \\[\\((.*)\\)\\] : (.*) \\}");
  smatch match;
  auto res = regex_search(max, match, cm);

  assert(res);

  string gp = match[3];
  cout << "\tmax bound: " << gp << endl;
  regex two_terms("(.*) \\+ (.*)");
  smatch tt_match;
  auto tt_res = regex_match(gp, tt_match, two_terms);

  if (tt_res) {
    cout << "\tt0 = " << tt_match[1] << endl;
    cout << "\tt1 = " << tt_match[2] << endl;
    ub = qexpr(parse_term(name, i, tt_match[1]), parse_term(name, i, tt_match[2]));
  } else {
    cout << "\tg  = " << gp << endl;
    ub = qexpr(parse_term(name, i, gp), 0);
  }

  cout << "ub = " << ub << endl;

  ub.terms.push_back(qterm(qvar("d_" + name)));

  return ub;
}

static inline
isl_map* last_comp_needed(
    isl_map* pixel_to_producer,
    isl_map* pixels_needed_to_producer,
    umap* pixel_to_pixels_needed) {

  isl_map* f_cm = inv(pixel_to_producer);
  cout << "f_cm: " << str(f_cm) << endl;

  auto data_needed =
    to_map(pixel_to_pixels_needed);

  cout << "data needed: " << str(data_needed) << endl;

  cout << "f_cm: " << str(f_cm) << endl;

  isl_map* pixels_needed =
    dot(f_cm, data_needed);

  cout << "pixels needed: " << str(pixels_needed) << endl;

  isl_map* a_cm = pixels_needed_to_producer;
  cout << "a_cm: " << str(a_cm) << endl;

  isl_map* comps_needed =
    dot(pixels_needed, a_cm);
  cout << "comps needed: " << str(comps_needed) << endl;
  // TODO: Change this to be last in the schedule to support non-raster order designs
  isl_map* last_pix =
    lexmax(comps_needed);
  cout << "got last pix" << endl;
  //cout << "last comp needed: " << str(last_pix) << endl;

  return last_pix;
}

static inline
map<string, map<string, vector<QExpr> > >
build_compute_deps(
    int schedule_dim,
    vector<string> sorted_functions,
    map<string, map<string, umap*> > pixels_needed,
    map<string, isl_map*> & compute_maps) {

  map<string, map<string, vector<QExpr> > > last_compute_needed;

  for (auto f : sorted_functions) {
    cout << "f = " << f << endl;
    assert(contains_key(f, pixels_needed));
    last_compute_needed[f] = {};

    cout << "Getting last compute for " << f << endl;
    for (auto arg : pixels_needed.at(f)) {
      assert(contains_key(f, compute_maps));
      isl_map* comps_needed =
        last_comp_needed(compute_maps.at(f),
            compute_maps.at(arg.first),
            arg.second);

      cout << tab(1) << "comps_needed by " << f << " from " << arg.first << " " << str(comps_needed) << endl;
      last_compute_needed[f][arg.first] = {};
      for (int i = 0; i < schedule_dim; i++) {
        cout << "Comps needed: " << str(comps_needed) << endl;
        auto max = dim_max(comps_needed, i);
        cout << "dim max = " << str(max) << endl;
        QExpr ub = extract_bound(i, arg.first, str(max));
        last_compute_needed[f][arg.first].push_back(ub);
      }
    }
  }

  return last_compute_needed;
}

static inline
map<string, QExpr>
schedule_dim(isl_ctx* ctx,
    const int i,
    map<string, Box>& domain_boxes,
    vector<string>& sorted_functions,
    map<string, map<string, vector<QExpr> > >& last_compute_needed_in_each_dim) {

  map<string, map<string, QExpr> > last_compute_needed;
  for (auto s : last_compute_needed_in_each_dim) {
    string fname = s.first;

    map<string, QExpr> last_needs;
    for (auto v : s.second) {
      last_needs[v.first] = v.second.at(i);
    }

    last_compute_needed[fname] = last_needs;
  }

  cout << "## last compute needed in dim " << i << endl;
  for (auto c : last_compute_needed) {
    cout << tab(1) << c.first << endl;
    for (auto qc : c.second) {
      cout << tab(2) << qc.first << " -> " << qc.second << endl;
    }
  }
  //assert(false);

  cout << "Scheduling dim: " << i << endl;
  // Collect all rate variables and
  // collect all constraints
  vector<QConstraint> all_constraints;
  vector<QConstraint> rate_constraints;
  for (auto f : sorted_functions) {
    cout << f << " schedule constraints: " << endl;
    Box b = map_find(f, domain_boxes);
    Range r = b.intervals.at(i);
    int min = r.min;
    QAV f_rate = qvar("q_" + f);
    QAV minr = qconst(min);
    QTerm f_delay = qterm(qvar("d_" + f));
    QTerm prod = qterm(minr, f_rate);
    QExpr offset = qexpr(prod, f_delay);

    string dv = "d" + to_string(i);
    assert(contains_key(f, last_compute_needed));
    for (auto arg_ub : last_compute_needed.at(f)) {
      auto arg = arg_ub.first;
      QExpr ub = arg_ub.second;

      QTerm ft = qterm(f_rate, qvar(dv));
      QExpr ftime = qexpr(ft, f_delay);

      QConstraint start_after_deps{false, ftime, ub};
      all_constraints.push_back(start_after_deps);
      rate_constraints.push_back(start_after_deps);

      cout << "\t" << start_after_deps << endl;
    }
  }

  cout << "Rate constraints before scheduling: " << endl;
  for (auto r : rate_constraints) {
    cout << tab(1) << r << endl;
  }

  map<string, QExpr> dim_schedules =
    compute_schedule_for_dim(ctx, i, sorted_functions, all_constraints, rate_constraints, last_compute_needed);

  return dim_schedules;
}

static inline
umap* to_umap(isl_ctx* ctx,
    map<string, vector<QExpr> > & schedules,
    vector<string> sorted_functions,
    const string & suffix) {

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
      string map_str = "{ " + f + suffix + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";
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

map<string, vector<isl_aff*> >
clockwork_schedule(uset* domain, umap* validity, umap* proximity, map<string, vector<string> >& high_bandwidth_deps);

map<string, vector<isl_aff*> >
clockwork_schedule(uset* domain, umap* validity, umap* proximity);

map<string, isl_aff*>
hardware_schedule(uset* domain, umap* validity, umap* proximity);

umap*
hardware_schedule_umap(uset* domain, umap* validity, umap* proximity);

umap*
hardware_schedule_umap(uset* domain, umap* validity, umap* proximity,
    map<string, int>& latencies, map<string, int>& iis, vector<pair<string, isl_val*> >& obj);

struct linear_constraint {
  vector<pair<string, int> > terms;
  int offset;
  bool is_equality;
};

map<string, isl_aff*>
hardware_schedule(
    uset* domain,
    umap* validity,
    umap* proximity,
    map<string, int>& latencies,
    map<string, int>& iis,
    vector<pair<string, isl_val*> >& obj,
    const vector<linear_constraint>& extra_equality_constraints);

umap* experimental_opt(uset* domain, umap* validity, umap* proximity);

static inline
string compute_unit_string(const num_type tp,
    const int pixel_width,
    const string& name,
    vector<Window>& windows,
    Expr* def,
    map<string, vector<vector<int> > >& offset_map) {
  vector<string> args;
  string wstr = str(pixel_width);
  for (auto w : windows) {
    args.push_back("hw_uint<" + wstr + "*" + str(w.offsets.size()) + "> " + w.name);
  }
  string res =
    compute_string(tp, pixel_width, def, offset_map);

  if (tp == NUM_TYPE_FLOAT) {
    res = "to_bits(" + res + ")";
  }
  return "hw_uint<" + wstr + "> " + name + sep_list(args, "(", ")", ", ") + " {\n" + tab(1) +
    "return " + "uint" + str(pixel_width) + "_t" + parens(res) + ";\n}";
}

map<string, isl_val*>
compute_qfactors(const vector<isl_map*>& deps);

map<string, vector<int> >
pad_insertion_indexes(uset* domain, umap* validity);

umap*
clockwork_schedule_umap_reversed(uset* domain,
    umap* validity,
    umap* proximity);

umap*
clockwork_schedule_umap(uset* domain,
    umap* validity,
    umap* proximity);

umap* qschedule_to_map(isl_ctx* ctx, map<string, vector<QExpr> >& schedules);


isl_basic_set*
form_farkas_constraints(isl_basic_set* constraints,
    const vector<pair<string, string> >& cmap,
    const std::string& dname);


vector<std::string> topological_sort(const vector<isl_set*>& sets,
    const vector<isl_map*>& maps);

struct ilp_builder;

void mathlog_problem(ilp_builder& builder, const map<string, isl_val*>& obj);

struct ilp_builder {

  isl_ctx* ctx;
  isl_basic_set* s;
  map<string, int> variable_positions;
  bool solved;
  isl_point* solution_point;

  ilp_builder(isl_basic_set* bset) :
    ctx(isl_basic_set_get_ctx(bset)) {
    auto init_space = get_space(bset);
    s = cpy(bset);
    for (int next_pos = 0; next_pos < num_dims(s); next_pos++) {
      const char* n =
        isl_basic_set_get_dim_name(s, isl_dim_set, next_pos);
      if (n != nullptr) {
        variable_positions[string(n)] = next_pos;
      }
    }
    solved = false;
    solution_point = nullptr;
  }

  ilp_builder(isl_ctx* ctx_) : ctx(ctx_) {
    auto init_space = isl_space_set_alloc(ctx, 0, 0);
    s = isl_basic_set_universe(init_space);
    solved = false;
    solution_point = nullptr;
  }

  int position(const std::string& var) {
    if (!contains_key(var, variable_positions)) {
      cout << "Error: No variable named " << var << " in positions" << endl;
      assert(false);
    }

    return map_find(var, variable_positions);
  }

  isl_val* value(const std::string& var) {
    assert(solved);
    assert(solution_point != nullptr);
    assert(contains_key(var, variable_positions));

    return isl_point_get_coordinate_val(solution_point,
        isl_dim_set,
        position(var));
    //return isl_point_get_coordinate_val(solution_point,
        //isl_dim_set,
        //map_find(var, variable_positions));
  }

  void add_variable(const std::string& name) {
    int next_pos = num_dims(isl_basic_set_get_space(s));
    variable_positions[name] = next_pos;
    s = isl_basic_set_add_dims(s, isl_dim_set, 1);
    s = isl_basic_set_set_dim_name(s, isl_dim_set, next_pos, name.c_str());
  }

  void add_geq(const int v, const std::string& a) {
    add_geq({{a, negone(ctx)}}, isl_val_int_from_si(ctx, v));
  }

  void add_eq(const std::string& a, const std::string& b) {
    //add_eq({{a, one(ctx)}, {b, negone(ctx)}}, zero(ctx));
    add_geq(a, b);
    add_geq(b, a);
    //{{a, one(ctx)}, {b, one(ctx)}}, zero(ctx));
  }

  void add_geq(const std::string& a, const std::string& b) {
    add_geq({{a, one(ctx)}, {b, negone(ctx)}}, zero(ctx));
  }

  void add_geq(const std::string& a, const int b) {
    add_geq({{a, one(ctx)}}, isl_val_int_from_si(ctx, -(b)));
  }

  void add_gt(const std::string& a, const int b) {
    add_geq({{a, one(ctx)}}, isl_val_int_from_si(ctx, -(b + 1)));
  }

  void add_gt(const std::string& a, isl_val* b_coeff, const std::string& b) {
    add_geq({{a, one(ctx)}, {b, mul(b_coeff, negone(ctx))}}, negone(ctx));
  }

  void add_gt(const std::string& a, const std::string& b) {
    add_geq({{a, one(ctx)}, {b, negone(ctx)}}, negone(ctx));
  }

  void add_geq(const std::map<string, isl_val*>& coeffs, isl_val* constant);

  vector<isl_val*> lex_minimize(const vector<std::map<string, isl_val*> >& objectives) {
    vector<isl_val*> values;

    isl_basic_set* max_loc = cpy(s);
    for (auto obj : objectives) {
      isl_aff* objective = isl_aff_zero_on_domain(get_local_space(s));
      for (auto coeff : obj) {
        int index = position(coeff.first);
        //map_find(coeff.first, variable_positions);
        isl_val* cn = mul(isl_val_negone(ctx), coeff.second);
        objective = isl_aff_set_coefficient_val(objective, isl_dim_in, index, cn);
      }
      isl_val* max = isl_basic_set_max_val(cpy(max_loc), objective);
      values.push_back(max);

      auto max_loc_s =
        isl_aff_eq_basic_set(objective,
            aff_on_domain(get_local_space(s), max));
      max_loc = its(max_loc, max_loc_s);

      assert(!empty(max_loc));
    }

    solution_point = sample(max_loc);

    assert(solution_point != nullptr);
    assert(values.size() == objectives.size());

    solved = true;

    //assert(false);
    return values;
  }

  isl_val* minimize(const std::map<string, isl_val*>& obj) {

    mathlog_problem(*this, obj);
    isl_aff* objective = isl_aff_zero_on_domain(get_local_space(s));
    for (auto coeff : obj) {
      //int index = map_find(coeff.first, variable_positions);
      int index = position(coeff.first);
      isl_val* cn = mul(isl_val_negone(ctx), coeff.second);
      objective = isl_aff_set_coefficient_val(objective, isl_dim_in, index, cn);
    }
    isl_val* max = isl_basic_set_max_val(cpy(s), objective);
    isl_basic_set* max_loc =
      isl_aff_eq_basic_set(objective,
          aff_on_domain(get_local_space(s), max));
    solved = true;
    auto max_loc_pts = its(max_loc, s);

    assert(!empty(max_loc_pts));

    solution_point = sample(its(max_loc, s));
    assert(solution_point != nullptr);
    return max;
  }

  void add_eq(const std::map<string, isl_val*>& coeffs, isl_val* constant) {
    add_geq(coeffs, constant);
    map<string, isl_val*> neg_coeffs;
    for (auto c : coeffs) {
      neg_coeffs[c.first] = mul(negone(ctx), c.second);
    }
    add_geq(neg_coeffs, mul(negone(ctx), constant));
    //vector<isl_val*> denoms;
    //if (isl_val_is_rat(constant)) {
      //denoms.push_back(isl_val_get_den_val(constant));
    //}
    //for (auto v : coeffs) {
      //if (isl_val_is_rat(v.second)) {
        //auto dv = isl_val_get_den_val(v.second);
        //assert(isl_val_is_pos(dv));
        //denoms.push_back(dv);
      //} else {
        ////cout << tab(1) << "non-rational: " << str(v.second) << endl;
      //}
    //}

    ////cout << "Denoms..." << endl;
    //isl_val* dn = isl_val_one(ctx);
    //for (auto v : denoms) {
      ////cout << tab(1) << str(v) << endl;
      //dn = mul(dn, v);
    //}
    ////assert(isl_val_is_int(constant));

    ////cout << "Denom: " << str(dn) << endl;
    //for (auto v : coeffs) {
      ////assert(isl_val_is_int(v.second));
      //if (!contains_key(v.first, variable_positions)) {
        //int next_pos = num_dims(isl_basic_set_get_space(s));
        //variable_positions[v.first] = next_pos;
        //s = isl_basic_set_add_dims(s, isl_dim_set, 1);
      //}
    //}

    //isl_constraint* c = isl_constraint_alloc_equality(get_local_space(s));
    //auto cv = mul(dn, constant);
    ////cout << "cv = " << str(cv) << endl;
    ////cout << "dn = " << str(dn) << endl;
    //assert(isl_val_is_int(cv));

    //isl_constraint_set_constant_val(c, cv);

    //for (auto v : coeffs) {
      ////cout << "index = " << map_find(v.first, variable_positions) << endl;
      //auto m = mul(dn, v.second);
      ////cout << "dn = " << str(dn) << endl;
      ////cout << "m = " << str(m) << endl;
      //assert(isl_val_is_int(m));
      //isl_constraint_set_coefficient_val(c,
          //isl_dim_set,
          //map_find(v.first, variable_positions),
          //m);
    //}

    //s = isl_basic_set_add_constraint(s, c);
  }

  std::string get_variable_name(const int ind) {
    for (auto m : variable_positions) {
      if (m.second == ind) {
        return m.first;
      }
    }
    std::cout << "Error: No variable for index: " << ind << std::endl;
    assert(false);
  }

};


isl_mat* equalities_to_inequalities(isl_basic_set* bset);
ilp_builder modulo_constraints(uset* padded_domain, umap* padded_validity, map<string, int>& latencies);


void print_hw_schedule(uset* dom,
    umap* valid);

void print_hw_schedule(const std::string& latency_to_minimize,
    uset* dom,
    umap* valid,
    map<string, int>& latencies);

void append_basic_set(ilp_builder& b, isl_basic_set* s);

static inline
string next_name(const std::string& prefix, ilp_builder& b) {
  return prefix + "_" + str(b.variable_positions.size());
}

umap* to_umap(uset* domain, const map<string, isl_aff*>& hs);

umap* to_umap(const map<string, isl_aff*>& hs);
umap* qschedule_to_map_final_sort(isl_ctx* ctx, map<string, vector<QExpr> >& schedules);
umap* qschedule_to_map_final_sort(isl_ctx* ctx, map<string, vector<QExpr> >& schedules, map<string, int>& order);


map<string, isl_aff*> clockwork_schedule_dimension(
    vector<isl_set*> domains,
    vector<isl_map*> deps,
    map<string, vector<string> >& high_bandwidth_deps);

map<string, isl_val*> simplify(const vector<pair<string, isl_val*> >& terms);

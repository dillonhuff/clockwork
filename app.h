#pragma once

#include "algorithm.h"
#include "utils.h"
#include "qexpr.h"

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

  FiniteRegion() {}

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

  FiniteRegion increment(const int diff) const {
    FiniteRegion c;
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

  FiniteRegion unroll_cpy(const int factor) const {
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

typedef FiniteRegion Window;

struct Update {

  bool is_reduction;

  string operation_name;

  Window provided;

  string update_function_name;
  string compute_function_name;

  Box reduce_var_domain;
  vector<Window> srcs;

  bool is_reduce() const {
    return is_reduction;
  }

};

struct Result {
  string comp_name;
  vector<Window> srcs;
  Window provided;

  vector<Update> updates;


  string compute_name() const { return comp_name; }

  void add_init_update(const string& name, const string& compute, const vector<Window>& args) {
    string update_name = provided.name + "_update_" + str(updates.size());
    updates.push_back({false, update_name, provided, "", compute, {}, args});
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
compute_delays(isl_ctx* ctx, vector<string>& sorted_functions, vector<QConstraint> delay_constraints,
    vector<QConstraint>& offset_constraints) {

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

  for (auto& d : delays) {
    d.second = d.second - min_delay;
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
  set<int> denoms;
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
    compute_delays(ctx, sorted_functions, delay_constraints, offset_constraints);
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
    schedules[f] = si;
  }

  cout << "done with schedules..." << endl;

  return schedules;
}

static inline
QExpr extract_bound(const int i, const std::string& name, const string& max) {
  QExpr ub;
  regex cm("\\{ (.*)\\[(.*)\\] -> \\[\\((.*)\\)\\] \\}");
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
isl_map* last_comp_needed(isl_map* pixel_to_producer,
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
  cout << "last comp needed: " << str(last_pix) << endl;

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

      last_compute_needed[f][arg.first] = {};
      for (int i = 0; i < schedule_dim; i++) {
        auto max = dim_max(comps_needed, i);
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
umap* to_umap(isl_ctx* ctx, map<string, vector<QExpr> > & schedules, vector<string> sorted_functions, const string & suffix) {
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


#include "app.h"


map<string, int> maximize(const std::vector<QConstraint>& constraints, QExpr& objective) {

  cout << "All delay constraints..." << endl;
  vector<string> ds;
  for (auto c : constraints) {
    for (auto v : c.vars()) {
      string name = v.get_name();
      if (!elem(name, ds)) {
        ds.push_back(name);
      }
    }
  }

  for (auto v : objective.vars()) {
    string name = v.get_name();
    if (!elem(name, ds)) {
      ds.push_back(name);
    }
  }

  isl_ctx* ctx = isl_ctx_alloc();

  string varspx = sep_list(ds, "[", "]", ", ");
  auto* legal_delays = rdset(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
  for (auto c : constraints) {
    cout << "\t" << c << endl;
    legal_delays = its(legal_delays, rdset(ctx, "{ " + varspx + " : " + isl_str(c) + " }"));
  }

  string aff_c = sep_list(ds, "", "", " + ");

  string aff_str =
    "{ " +
    sep_list(ds, "[", "]", ", ") + " -> " + 
    "[" + isl_str(objective) + "] }";

  cout << "Aff str: " << aff_str << endl;

  auto obj_func =
    isl_aff_read_from_str(ctx, aff_str.c_str());

  cout << "Objective: " << str(obj_func) << endl;
  cout << "Legal values: " << str(legal_delays) << endl;
  cout << "Legal value example point: " << str(isl_set_sample_point(cpy(legal_delays))) << endl;

  auto min_point =
    isl_set_max_val(cpy(legal_delays), obj_func);
  string mstring =
    str(min_point);
  cout << "Max delays: " << mstring << endl;
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

  //// Extract variable values
  map<string, int> delays;
  int pos = 0;
  for (auto vi : ds) {
    delays[vi] = delay_coeffs.at(pos);
    pos++;
  }

  isl_ctx_free(ctx);

  return delays;
}

map<string, int> minimize(const std::vector<QConstraint>& constraints, QExpr& objective) {

  cout << "All delay constraints..." << endl;
  vector<string> ds;
  for (auto c : constraints) {
    for (auto v : c.vars()) {
      string name = v.get_name();
      if (!elem(name, ds)) {
        ds.push_back(name);
      }
    }
  }

  for (auto v : objective.vars()) {
    string name = v.get_name();
    if (!elem(name, ds)) {
      ds.push_back(name);
    }
  }

  isl_ctx* ctx = isl_ctx_alloc();

  string varspx = sep_list(ds, "[", "]", ", ");
  auto* legal_delays = rdset(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
  for (auto c : constraints) {
    cout << "\t" << c << endl;
    legal_delays = its(legal_delays, rdset(ctx, "{ " + varspx + " : " + isl_str(c) + " }"));
  }

  string aff_c = sep_list(ds, "", "", " + ");

  string aff_str =
    "{ " +
    sep_list(ds, "[", "]", ", ") + " -> " + 
    "[" + isl_str(objective) + "] }";

  cout << "Aff str: " << aff_str << endl;

  auto obj_func =
    isl_aff_read_from_str(ctx, aff_str.c_str());

  cout << "Objective: " << str(obj_func) << endl;
  cout << "Legal values: " << str(legal_delays) << endl;
  cout << "Legal value example point: " << str(isl_set_sample_point(legal_delays)) << endl;

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

  //// Extract variable values
  map<string, int> delays;
  int pos = 0;
  for (auto vi : ds) {
    delays[vi] = delay_coeffs.at(pos);
    pos++;
  }

  isl_ctx_free(ctx);

  return delays;
}

vector<int> soda_offsets(const int app) {
  // What is the right way to figure out the offsets
  // for this pipeline?
  // Need realization bounds
  // Need to know the sequence of stencils
  // Q: Do we need to know the schedule as well?
  return {};
}

umap* experimental_opt(uset* domain,
    umap* validity,
    umap* proximity) {

  cout << "Domain: " << str(domain) << endl;
  vector<isl_map*> deps;
  for (auto m : get_maps(validity)) {
    //cout << tab(1) << str(m) << endl;
    // Schedule respects intra-dependencies by construction
    if (domain_name(m) != range_name(m)) {
      deps.push_back(m);
    }
  }

  int next_column = 0;
  map<string, int> space_var_offsets;
  map<isl_map*, int> div_offsets;
  int total_constraints = 0;
  int space_offset = 0;
  int total_divs = 0;

  cout << "Iter stage dependencies..." << endl;
  for (auto m : deps) {
    cout << tab(1) << str(m) << endl;
    vector<isl_basic_map*> basics = get_basic_maps(m);
    assert(basics.size() == 1);

    auto bm = basics.at(0);
    auto ls = isl_basic_map_get_local_space(bm);
    div_offsets[m] = total_divs;
    total_divs += isl_local_space_dim(ls, isl_dim_div);

    if (!contains_key(domain_name(m), space_var_offsets)) {
      space_var_offsets[domain_name(m)] = space_offset;
      space_offset += isl_local_space_dim(ls, isl_dim_in);
    }

    if (!contains_key(range_name(m), space_var_offsets)) {
      space_var_offsets[range_name(m)] = space_offset;
      space_offset += isl_local_space_dim(ls, isl_dim_out);
    }

    auto eqmat = isl_basic_map_equalities_matrix(bm,
        isl_dim_cst,
        isl_dim_in,
        isl_dim_out,
        isl_dim_div,
        isl_dim_param);
    cout << "Eq Rows: " << isl_mat_rows(eqmat) << endl;
    cout << "Eq Cols: " << isl_mat_cols(eqmat) << endl;

    total_constraints += 2*isl_mat_rows(eqmat);

    auto ineqmat = isl_basic_map_inequalities_matrix(bm,
        isl_dim_cst,
        isl_dim_in,
        isl_dim_out,
        isl_dim_div,
        isl_dim_param);
    cout << "Ineq Rows: " << isl_mat_rows(ineqmat) << endl;
    cout << "Ineq Cols: " << isl_mat_cols(ineqmat) << endl;

    assert(isl_mat_cols(ineqmat) == isl_mat_cols(eqmat));

    total_constraints += isl_mat_rows(ineqmat);

    for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
      for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
        cout << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
      }
      cout << endl;
    }

    cout << endl << endl;
  }
  cout << "Total constraints: " << total_constraints << endl;
  cout << "Total divs       : " << total_divs << endl;
  cout << "Total sched vars : " << space_offset << endl;
  cout << "Total Farkas vars: " << total_constraints*space_var_offsets.size() << endl;

  assert(total_divs == 0);

  // # of variables in scheduling ILP:
  //  # farkas + # divs + space offset
  int total_rate_vars = total_constraints*space_var_offsets.size() +
    total_divs +
    space_offset;


  cout << "Total rate vars: " << endl;
  auto ct = ctx(domain);
  isl_space* ilp_space = isl_space_set_alloc(ct, 0, total_rate_vars);
  cout << "ILP Space: " << str(ilp_space) << endl;
  isl_basic_set* ilp = isl_basic_set_universe(ilp_space);
  cout << "ILP Set  : " << str(ilp) << endl;
  assert(false);
  // For each dep we are going to add one group of farkas constraints
  cout << "Space var offsets..." << endl;
  for (auto off : space_var_offsets) {
    cout << tab(1) << off.first << " -> " << off.second << endl;
  }

  cout << "Div offsets..." << endl;
  for (auto d : div_offsets) {
    cout << tab(1) << d.second << endl;
  }

  // Build explicit farkas constraints
  cout << "Schedule function constraints..." << endl;
  vector<QExpr> schedule_diffs;
  for (auto d : deps) {
    string producer = domain_name(d);
    string consumer = range_name(d);
    
    QExpr producer_schedule = qexpr(producer + "_sched");
    QExpr consumer_schedule = qexpr(consumer + "_sched");
    QExpr diff_eq = consumer_schedule - producer_schedule;
    schedule_diffs.push_back(diff_eq);
  }

  for (auto sd : schedule_diffs) {
    cout << tab(1) << sd << endl;
  }

  assert(false);
  return nullptr;
}

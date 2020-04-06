#include "app.h"

template<typename T>
struct sym_matrix {
  vector<vector<T> > rows;

  sym_matrix(const int r, const int c) {
    rows.resize(r);
    for (int ri = 0; ri < r; ri++) {
      rows.at(ri).resize(c);
    }
  }

  int num_rows() const {
    return rows.size();
  }

  int num_cols() const {
    assert(rows.size() > 0);
    return rows.at(0).size();
  }

  T& operator()(const int r, const int c) {
    return rows.at(r).at(c);
  }

  const T& operator()(const int r, const int c) const {
    return rows.at(r).at(c);
  }

};

template<typename T>
ostream& operator<<(ostream& out, const sym_matrix<T>& m) {

  cout << "Printing..." << "nrows = " << m.num_rows() << ", num cols = " << m.num_cols() << endl;
  for (int r = 0; r < m.num_rows(); r++) {
    for (int c = 0; c < m.num_cols(); c++) {
      out << m(r, c) << " ";
    }
    out << endl;
  }
  cout << "Done printing" << endl;
  return out;
}

template<typename T>
sym_matrix<T> operator*(const sym_matrix<T>& a, const sym_matrix<T>& b) {
  assert(a.num_cols() == b.num_rows());

  cout << "Multiplying..." << endl;

  sym_matrix<T> res(a.num_rows(), b.num_cols());

  for (int r = 0; r < a.num_rows(); r++) {
    for (int c = 0; c < b.num_cols(); c++) {
      cout << "r = " << r << ", c = " << c << endl;

      // TODO: Generalize to other types
      res(r, c) = qexpr(0);

      for (int k = 0; k < a.num_cols(); k++) {
        cout << "a(" << r << ", " << k << ") = " << a(r, k) << endl;
        res(r, c) = res(r, c) + a(r, k) * b(k, c);
      }
    }
  }

  cout << "Done: " << endl << res << endl;
  return res;
}

template<typename T>
sym_matrix<T> operator-(const sym_matrix<T>& a, const sym_matrix<T>& b) {
  assert(a.num_rows() == b.num_rows());
  assert(a.num_cols() == b.num_cols());

  sym_matrix<T> res(a.num_rows(), a.num_cols());

  for (int r = 0; r < a.num_rows(); r++) {
    for (int c = 0; c < a.num_cols(); c++) {
      res(r, c) = a(r, c) - b(r, c);
    }
  }

  return res;
}

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
  cout << "Max set: " << mset << endl;
  auto min_set = rdset(ctx, mset.c_str());
  cout << "Max set parsed: " << str(min_set) << endl;

  auto mvs = its(min_set, legal_delays);
  string dp = str(isl_set_sample_point(mvs));
  cout << "Max pt: " << dp << endl;

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
  //string os = aff_c;
  string mset = set_string(ds, isl_str(objective) + " = " + mstring);
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

string str(isl_mat* const ineqmat) {
  ostringstream out;
  for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
    for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
      out << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
    }
    out << endl;
  }
  return out.str();
}

QExpr schedvar(const string& n) {
  return qexpr("s_" + n);
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

  int num_dependence_edges = deps.size();
  int num_constraints = total_constraints;
  int num_divs = total_divs;
  int num_spaces = space_offset;

  sym_matrix<QExpr> S(num_dependence_edges, num_spaces + num_divs);
  map<isl_map*, int> edge_rows;
  int constraint_row = 0;
  for (auto d : deps) {
    edge_rows[d] = constraint_row;

    string producer = domain_name(d);
    string consumer = range_name(d);

    int producer_sched_col = map_find(producer, space_var_offsets);
    int consumer_sched_col = map_find(consumer, space_var_offsets);


    S(constraint_row, producer_sched_col) = qexpr(-1) * schedvar(producer);
    S(constraint_row, consumer_sched_col) = qexpr(1) * schedvar(consumer);

    constraint_row++;
  }

  sym_matrix<QExpr> L(num_dependence_edges, num_constraints);
  for (int r = 0; r < L.num_rows(); r++) {
    for (int c = 0; c < L.num_cols(); c++) {
      L(r, c) = qexpr("L_" + str(r) + "_" + str(c));
    }
  }
  sym_matrix<QExpr> A(num_constraints, num_spaces + num_divs);

  cout << "S..." << S.num_rows() << ", " << S.num_cols() << endl;
  cout << S << endl << endl;

  cout << "L..." << L.num_rows() << ", " << L.num_cols() << endl;
  cout << L << endl << endl;

  cout << "A..." << A.num_rows() << ", " << A.num_cols() << endl;
  int constraints_entered = 0;
  for (auto dr : edge_rows) {
    isl_map* dep_edge = dr.first;

    vector<isl_basic_map*> basics = get_basic_maps(dep_edge);
    assert(basics.size() == 1);

    auto bm = basics.at(0);

    auto eqmat = isl_basic_map_equalities_matrix(bm,
        isl_dim_cst,
        isl_dim_in,
        isl_dim_out,
        isl_dim_div,
        isl_dim_param);
    cout << "Eq Rows: " << isl_mat_rows(eqmat) << endl;
    cout << "Eq Cols: " << isl_mat_cols(eqmat) << endl;

    assert(isl_mat_cols(eqmat) == 3);

    string producer = domain_name(dep_edge);
    string consumer = range_name(dep_edge);

    for (int r = 0; r < isl_mat_rows(eqmat); r++) {
      isl_val* producer_coeff = isl_mat_get_element_val(eqmat, r, 1);
      isl_val* consumer_coeff = isl_mat_get_element_val(eqmat, r, 2);

      int pc = stoi(str(producer_coeff));
      A(constraints_entered, map_find(producer, space_var_offsets)) =
        qexpr(pc);
      int cc = stoi(str(consumer_coeff));
      A(constraints_entered, map_find(consumer, space_var_offsets)) =
        qexpr(cc);
      constraints_entered++;

      A(constraints_entered, map_find(producer, space_var_offsets)) =
        qexpr(-pc);
      A(constraints_entered, map_find(consumer, space_var_offsets)) =
        qexpr(-cc);
      constraints_entered++;
    }

    auto ineqmat = isl_basic_map_inequalities_matrix(bm,
        isl_dim_cst,
        isl_dim_in,
        isl_dim_out,
        isl_dim_div,
        isl_dim_param);
    cout << "InEq Rows: " << isl_mat_rows(ineqmat) << endl;
    cout << "InEq Cols: " << isl_mat_cols(ineqmat) << endl;

    assert(isl_mat_cols(ineqmat) == 3);

    for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
      isl_val* producer_coeff = isl_mat_get_element_val(ineqmat, r, 1);
      isl_val* consumer_coeff = isl_mat_get_element_val(ineqmat, r, 2);

      int pc = stoi(str(producer_coeff));
      A(constraints_entered, map_find(producer, space_var_offsets)) =
        qexpr(pc);
      int cc = stoi(str(consumer_coeff));
      A(constraints_entered, map_find(consumer, space_var_offsets)) =
        qexpr(cc);
      constraints_entered++;
    }
  }

  cout << "Constraints entered: " << constraints_entered << endl;
  cout << "Total constraints  : " << total_constraints << endl;
  assert(constraints_entered == total_constraints);

  cout << A << endl << endl;

  sym_matrix<QExpr> system =
    S - L*A;

  cout << "system(" << system.num_rows() << ", " << system.num_cols() << ")" << endl;
  cout << system << endl;

  cout << "Scheduling system..." << endl;
  vector<QConstraint> cs;
  for (int r = 0; r < L.num_rows(); r++) {
    for (int c = 0; c < L.num_cols(); c++) {
      cs.push_back(geq(L(r, c), qexpr(0)));
    }
  }

  for (int r = 0; r < system.num_rows(); r++) {
    for (int c = 0; c < system.num_cols(); c++) {
      cs.push_back(eq(system(r, c), qexpr(0)));
    }
  }
  QExpr objective = qexpr(0);
  for (auto s : space_var_offsets) {
    cs.push_back(geq(schedvar(s.first), qexpr(1)));
    objective = objective + schedvar(s.first);
  }

  map<string, int> result = minimize(cs, objective);
  cout << "Result: " << endl;
  for (auto r : result) {
    cout << tab(1) << r.first << " = " << r.second << endl;
  }

  assert(false);

  return nullptr;
}

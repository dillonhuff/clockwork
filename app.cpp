#include "app.h"

std::string lv(const string& n, const int d) {
  return "pad_dim_permute_" + n + "_pdim" + str(d);
}

std::string pv(const string& n, const int d) {
  return n + "_dim_permute" + str(d);
}

QExpr delayvar(const string& n) {
  return qexpr(delay_var_name(n));
}

QExpr schedvar(const string& n) {
  return qexpr(sched_var_name(n));
}


template<typename T>
struct sym_matrix {
  vector<vector<T> > rows;

  sym_matrix(const int r, const int c) {
    rows.resize(r);
    for (int ri = 0; ri < r; ri++) {
      rows.at(ri).resize(c);
    }
    for (int r = 0; r < num_rows(); r++) {
      for (int c = 0; c < num_cols(); c++) {
        (*this)(r, c) = qexpr(0);
      }
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

  for (int r = 0; r < m.num_rows(); r++) {
    for (int c = 0; c < m.num_cols(); c++) {
      out << m(r, c) << " ";
    }
    out << endl;
  }
  return out;
}

template<typename T>
sym_matrix<T> operator*(const sym_matrix<T>& a, const sym_matrix<T>& b) {
  assert(a.num_cols() == b.num_rows());

  cout << "Multiplying..." << endl;

  sym_matrix<T> res(a.num_rows(), b.num_cols());

  for (int r = 0; r < a.num_rows(); r++) {
    for (int c = 0; c < b.num_cols(); c++) {
      //cout << "r = " << r << ", c = " << c << endl;

      // TODO: Generalize to other types
      res(r, c) = qexpr(0);

      for (int k = 0; k < a.num_cols(); k++) {
        //cout << "a(" << r << ", " << k << ") = " << a(r, k) << endl;
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

  //cout << "All delay constraints..." << endl;
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
  //cout << "Creating intersection constraints" << endl;
  for (auto c : constraints) {
    //cout << "\tits with: " << c << endl;
    legal_delays = its(legal_delays, rdset(ctx, "{ " + varspx + " : " + isl_str(c) + " }"));
  }

  string aff_c = sep_list(ds, "", "", " + ");

  string aff_str =
    "{ " +
    sep_list(ds, "[", "]", ", ") + " -> " +
    "[" + isl_str(objective) + "] }";

  //cout << "Aff str: " << aff_str << endl;

  auto obj_func =
    isl_aff_read_from_str(ctx, aff_str.c_str());

  //cout << "Objective: " << str(obj_func) << endl;
  //cout << "Legal values: " << str(legal_delays) << endl;
  //cout << "Legal value example point: " << str(isl_set_sample_point(cpy(legal_delays))) << endl;

  auto min_point =
    isl_set_max_val(cpy(legal_delays), obj_func);
  string mstring =
    str(min_point);
  //cout << "Max delays: " << mstring << endl;
  string os = aff_c;
  string mset = set_string(ds, os + " = " + mstring);
  //cout << "Max set: " << mset << endl;
  auto min_set = rdset(ctx, mset.c_str());
  //cout << "Max set parsed: " << str(min_set) << endl;

  auto mvs = its(min_set, legal_delays);
  string dp = str(isl_set_sample_point(mvs));
  //cout << "Max pt: " << dp << endl;

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

  //cout << "All delay constraints..." << endl;
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

  //cout << "# of variables: " << ds.size() << endl;
  string varspx = sep_list(ds, "[", "]", ", ");
  //auto* legal_delay_basic =
    //rd_basic_set(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
  isl_set* legal_delays =
    isl_set_read_from_str(ctx, ("{ " + sep_list(ds, "[", "]", ", ") + " }").c_str());
    //rdset(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
  for (auto c : constraints) {
    //cout << "\tits with: " << c << endl;
    QConstraint normed = c;
    normed.lhs = normed.lhs - normed.rhs;

    string lhs_str = isl_str(normed.lhs);
    //cout << tab(1) << lhs_str << endl;
    auto affc = rdaff(ctx,
        "{ " + varspx + " -> [" + lhs_str + "] }");
    isl_constraint* cc = nullptr;
    if (normed.is_eq) {
      cc =
        isl_equality_from_aff(affc);
    } else {
      cc =
        isl_inequality_from_aff(affc);
    }
    assert(cc != nullptr);

    legal_delays =
      isl_set_add_constraint(legal_delays, cc);
      //its(legal_delays, rdset(ctx, "{ " + varspx + " : " + isl_str(c) + " }"));
  }

  string aff_c = sep_list(ds, "", "", " + ");

  string aff_str =
    "{ " +
    sep_list(ds, "[", "]", ", ") + " -> " +
    "[" + isl_str(objective) + "] }";

  //cout << "Aff str: " << aff_str << endl;

  auto obj_func =
    isl_aff_read_from_str(ctx, aff_str.c_str());

  //cout << "Objective: " << str(obj_func) << endl;
  //cout << "Legal values: " << str(legal_delays) << endl;
  //cout << "Legal value example point: " << str(isl_set_sample_point(legal_delays)) << endl;

  auto min_point =
    isl_set_min_val(cpy(legal_delays), obj_func);
  string mstring =
    str(min_point);
  //cout << "Min delays: " << mstring << endl;
  //string os = aff_c;
  string mset = set_string(ds, isl_str(objective) + " = " + mstring);
  //cout << "Min set: " << mset << endl;
  auto min_set = rdset(ctx, mset.c_str());

  auto mvs = its(min_set, legal_delays);
  string dp = str(isl_set_sample_point(mvs));
  //cout << "Min pt: " << dp << endl;

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

isl_basic_set* non_negative(isl_basic_set* fs, int var) {
  auto non_neg = isl_constraint_alloc_inequality(get_local_space(fs));
  non_neg = isl_constraint_set_coefficient_si(non_neg, isl_dim_set, var, 1);
  //cout << "non neg: " << str(non_neg) << endl;
  fs = isl_basic_set_add_constraint(fs, non_neg);

  return fs;
}

isl_mat* equalities_to_inequalities(isl_basic_set* bset) {
  auto orig_ineqs = isl_basic_set_inequalities_matrix(bset,
      isl_dim_set,
      isl_dim_cst,
      isl_dim_div,
      isl_dim_param);
  auto orig_eqs = isl_basic_set_equalities_matrix(bset,
      isl_dim_set,
      isl_dim_cst,
      isl_dim_div,
      isl_dim_param);

  int new_num_ineqs = isl_mat_rows(orig_ineqs) + 2*isl_mat_rows(orig_eqs);
  //cout << "new num ineqs: " << new_num_ineqs << endl;

  //cout << "original eqs" << endl;
  //cout << str(orig_eqs) << endl;

  auto ineqs = isl_mat_alloc(ctx(bset), new_num_ineqs, isl_mat_cols(orig_ineqs));
  for (int r = 0; r < new_num_ineqs; r++) {
    for (int c = 0; c < isl_mat_cols(orig_ineqs); c++) {
      if (r < isl_mat_rows(orig_ineqs)) {
        ineqs = isl_mat_set_element_val(ineqs, r, c, isl_mat_get_element_val(orig_ineqs, r, c));
      } else {
        //cout << "r = " << r << endl;
        int orig_r = (r - isl_mat_rows(orig_ineqs)) / 2;
        isl_val* v = isl_mat_get_element_val(orig_eqs, orig_r, c);
        //cout << "orig r = " << orig_r << endl;
        if (r % 2 == 0) {
          v = mul(negone(ctx(bset)), v);
        }
        ineqs = isl_mat_set_element_val(ineqs, r, c, v);
      }
    }
  }
  auto eqs = isl_mat_alloc(ctx(bset),
      0,
      isl_mat_cols(orig_eqs));

  int set_dim =
    num_dims(bset);
  int div_dims = num_div_dims(bset);
  int param_dims = num_param_dims(bset);

  assert(div_dims == 0);
  assert(param_dims == 0);

  auto s = isl_space_set_alloc(ctx(bset),
      param_dims, set_dim);

  //cout << "new ineqs..." << endl;
  //cout << str(ineqs) << endl;
  return ineqs;
  //assert(false);

  //return isl_basic_set_from_constraint_matrices(s, eqs, ineqs, isl_dim_set, isl_dim_cst, isl_dim_div, isl_dim_param);
}

isl_basic_set*
form_farkas_constraints(isl_basic_set* orig_constraints,
    const vector<pair<string, string> >& cvals,
    const std::string& dname) {

  auto ineqs = equalities_to_inequalities(orig_constraints);

  int cdim = cvals.size();

  //cout << "# of columns = " << isl_mat_cols(eqs) << endl;
  //cout << "cdim         = " << cdim << endl;
  assert(isl_mat_cols(ineqs) == cdim + 1);

  //cout << "Ineqs..." << endl;
  //cout << str(ineqs) << endl;

  int num_farkas = isl_mat_rows(ineqs);

  int farkas_dim = num_farkas + cdim + 2;

  auto ct = ctx(orig_constraints);
  auto fspace =
    isl_space_set_alloc(ct, 0, farkas_dim);
  auto fs =
    isl_basic_set_universe(fspace);

  for (int c = 0; c < isl_mat_cols(ineqs) - 1; c++) {
    fs = isl_basic_set_set_dim_name(fs, isl_dim_set, c, cvals.at(c).second.c_str());
  }

  fs = isl_basic_set_set_dim_name(fs, isl_dim_set, isl_mat_cols(ineqs) - 1, dname.c_str());
  // Layout [c1, ..., cN, d, l1, ..., lM, l0]
  int farkas_var_offset = cdim + 1;
  for (int c = 0; c < isl_mat_cols(ineqs) - 1; c++) {
    auto constraint = isl_constraint_alloc_equality(get_local_space(fs));
    //cout << "c " << c << " = " << cvals.at(c).second << endl;
    constraint = isl_constraint_set_coefficient_si(constraint, isl_dim_set, c, 1);
    for (int i = 0; i < num_farkas; i++) {
      auto fc = mul(negone(ct), isl_mat_get_element_val(ineqs, i, c));
      constraint = isl_constraint_set_coefficient_val(constraint, isl_dim_set, farkas_var_offset + i, fc);
    }
    //cout << "adding farkas constraint: " << str(constraint) << endl;
    fs = isl_basic_set_add_constraint(fs, constraint);
  }

  auto constraint = isl_constraint_alloc_equality(get_local_space(fs));
  constraint = isl_constraint_set_coefficient_si(constraint, isl_dim_set, cdim, 1);
  constraint = isl_constraint_set_coefficient_si(constraint, isl_dim_set, farkas_var_offset + num_farkas, -1);
  for (int i = 0; i < num_farkas; i++) {
    isl_val* b = isl_mat_get_element_val(ineqs, i, isl_mat_cols(ineqs) - 1);
    b = mul(negone(ct), b);
    //cout << "b " << i << " = " << str(b) << endl;
    constraint = isl_constraint_set_coefficient_val(constraint, isl_dim_set, farkas_var_offset + i, b);
  }

  for (int i = 0; i < num_farkas; i++) {
    //cout << "adding non-negativity constraint on " << i << endl;
    fs = non_negative(fs, farkas_var_offset + i);
  }
  fs = non_negative(fs, farkas_var_offset + num_farkas);

  //cout << "adding constant constraint: " << str(constraint) << endl;
  fs = isl_basic_set_add_constraint(fs, constraint);

  return fs;
}

umap* opt_schedule_dimension(vector<isl_map*> deps) {

  //cout << "Deps..." << endl;
  //for (auto d : deps) {
    //cout << tab(1) << str(d) << endl;
  //}

  int next_column = 0;
  map<string, int> space_var_offsets;
  map<isl_map*, int> div_offsets;
  int total_constraints = 0;
  int space_offset = 0;
  int total_divs = 0;

  //cout << "Iter stage dependencies..." << endl;
  for (auto m : deps) {
    //cout << tab(1) << str(m) << endl;
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
    //cout << "Eq Rows: " << isl_mat_rows(eqmat) << endl;
    //cout << "Eq Cols: " << isl_mat_cols(eqmat) << endl;

    total_constraints += 2*isl_mat_rows(eqmat);

    auto ineqmat = isl_basic_map_inequalities_matrix(bm,
        isl_dim_cst,
        isl_dim_in,
        isl_dim_out,
        isl_dim_div,
        isl_dim_param);
    //cout << "Ineq Rows: " << isl_mat_rows(ineqmat) << endl;
    //cout << "Ineq Cols: " << isl_mat_cols(ineqmat) << endl;

    assert(isl_mat_cols(ineqmat) == isl_mat_cols(eqmat));

    total_constraints += isl_mat_rows(ineqmat);

    //for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
      //for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
        //cout << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
      //}
      //cout << endl;
    //}

    //cout << endl << endl;
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
  sym_matrix<QExpr> b(num_constraints, 1);

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
      isl_val* cv = isl_mat_get_element_val(eqmat, r, 0);
      b(constraints_entered, 0) = qexpr(stoi(str(cv)));

      A(constraints_entered, map_find(producer, space_var_offsets)) =
        qexpr(pc);
      int cc = stoi(str(consumer_coeff));
      A(constraints_entered, map_find(consumer, space_var_offsets)) =
        qexpr(cc);
      constraints_entered++;

      b(constraints_entered, 0) = qexpr(-1*stoi(str(cv)));

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
      isl_val* cv = isl_mat_get_element_val(ineqmat, r, 0);
      b(constraints_entered, 0) = qexpr(stoi(str(cv)));

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

  for (int r = 0; r < system.num_rows(); r++) {
    for (int c = 0; c < system.num_cols(); c++) {
      system(r, c).simplify();
    }
  }

  std::set<string> vars;
  for (int r = 0; r < system.num_rows(); r++) {
    for (int c = 0; c < system.num_cols(); c++) {
      for (auto v : system(r, c).vars()) {
        vars.insert(v.get_name());
      }
    }
  }
  cout << "# of vars: " << vars.size() << endl;
  cout << "system(" << system.num_rows() << ", " << system.num_cols() << ")" << endl;
  cout << system << endl;
  assert(false);

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
  // Compute delays
  sym_matrix<QExpr> l(num_dependence_edges, 1);
  sym_matrix<QExpr> d(num_dependence_edges, 1);
  sym_matrix<QExpr> const_L(num_dependence_edges, num_constraints);

  cout << "Result: " << endl;
  for (auto r : result) {
    cout << tab(1) << r.first << " = " << r.second << endl;
    vector<string> strs = split_at(r.first, "_");
    if (strs.at(0) == "L") {
      assert(strs.size() == 3);
      int row = stoi(strs.at(1));
      int col = stoi(strs.at(2));
      const_L(row, col) = qexpr(r.second);
    }

  }
  auto rate_result = result;


  for (auto dep : deps) {
    string producer = domain_name(dep);
    string consumer = range_name(dep);
    d(map_find(dep, edge_rows), 0) = delayvar(consumer) - delayvar(producer);
    l(map_find(dep, edge_rows), 0) = qexpr("Lc_" + str(map_find(dep, edge_rows)));
  }


  cout << "Delays..." << endl;
  cout << d << endl;

  cout << "B values..." << endl;
  cout << b << endl;

  cout << "l values..." << endl;
  cout << l << endl;

  cout << "L values..." << endl;
  cout << const_L << endl;

  sym_matrix<QExpr> delay_system =
    d - const_L*b - l;

  cout << "Delay system..." << endl;
  cout << delay_system << endl;


  {
    cout << "Scheduling system..." << endl;

    vector<QConstraint> cs;
    for (int r = 0; r < delay_system.num_rows(); r++) {
      for (int c = 0; c < delay_system.num_cols(); c++) {
        cs.push_back(eq(delay_system(r, c), qexpr(0)));
      }
    }

    for (int r = 0; r < l.num_rows(); r++) {
      for (int c = 0; c < l.num_cols(); c++) {
        cout << "Getting l " << r << ", " << c << endl;
        cs.push_back(geq(l(r, c), qexpr(0)));
      }
    }

    cout << "Setting delay var limits" << endl;
    for (auto d : deps) {
      //cout << "D = " << str(d) << endl;
      auto r = range_name(d);
      //cout << "r = " << r << endl;
      auto c = domain_name(d);
      //cout << "c = " << c << endl;

      cs.push_back(geq(delayvar(r), qexpr(0)));
      cs.push_back(geq(delayvar(c), qexpr(0)));
    }

    cout << "creating objective" << endl;

    QExpr objective = qexpr(0);
    for (int r = 0; r < d.num_rows(); r++) {
      objective = objective + d(r, 0);
    }

    map<string, int> result = minimize(cs, objective);
    cout << "####### Delay result" << endl;
    for (auto r : result) {
      cout << tab(1) << r.first << " = " << r.second << endl;
    }
    cout << endl;
    cout << "Rate result" << endl;
    for (auto r : rate_result) {
      cout << tab(1) << r.first << " = " << r.second << endl;
    }
  }

  //assert(false);

  return nullptr;
}

map<string, isl_val*> simplify(const vector<pair<string, isl_val*> >& terms) {
  map<string, vector<isl_val*> > simplified;
  for (auto t : terms) {
    simplified[t.first].push_back(t.second);
  }

  map<string, isl_val*> done;
  for (auto term: simplified) {
    isl_val* v = zero(ctx(term.second.at(0)));
    for (auto c : term.second) {
      v = add(v, c);
    }
    done[term.first] = v;
  }
  return done;
}

map<isl_map*, vector<pair<isl_val*, isl_val*> > >
extract_schedule_params(const vector<isl_map*>& deps) {

  vector<isl_map*> consumed_data;
  for (auto d : deps) {
    cout << tab(1) << str(d) << endl;
    consumed_data.push_back(inv(d));
  }

  cout << "Consumed data..." << endl;
  map<isl_map*, vector<pair<isl_val*, isl_val*> > > schedule_params;
  for (auto c : consumed_data) {
    cout << tab(1) << str(c) << endl;
    auto lm = isl_map_lexmax_pw_multi_aff(cpy(c));
    //cout << tab(2) << "lexmax: " << str(lm) << endl;
    vector<pair<isl_set*, isl_multi_aff*> > pieces =
      get_pieces(lm);
    //assert(pieces.size() <= 1);
    for (auto piece : pieces) {
      isl_multi_aff* bound = piece.second;
      cout << "bound: " << str(bound) << endl;
      assert(get_size(bound) == 1);
      isl_aff* aff_bound =
        isl_multi_aff_get_aff(bound, 0);
      cout << tab(2) << "affine upper bound on data needed: " << str(aff_bound) << endl;
      cout << tab(3) << "domain of bound: " << str(pieces.at(0).first) << endl;
      pair<isl_val*, isl_val*> kb =
        extract_linear_rational_approximation(aff_bound);
      schedule_params[c].push_back(kb);
    }
  }

  cout << "Extracted sched params" << endl;
  return schedule_params;
}

map<string, isl_val*> compute_qfactors(map<isl_map*, vector<pair<isl_val*, isl_val*> > >& schedule_params) {

  assert(schedule_params.size() > 0);
  isl_ctx* ct = ctx(pick(schedule_params).first);

  ilp_builder ilp(ct);
  vector<QConstraint> rate_constraints;

  map<string, isl_val*> obj;
  for (auto s : schedule_params) {
    string consumer = domain_name(s.first);
    string producer = range_name(s.first);

    auto qp = schedvar(producer);
    auto qc = schedvar(consumer);

    for (auto sv : s.second) {
      ilp.add_geq({{sched_var_name(consumer), isl_val_one(ct)}}, isl_val_negone(ct));
      ilp.add_geq({{sched_var_name(producer), isl_val_one(ct)}}, isl_val_negone(ct));

      if (isl_val_is_zero(sv.first)) {
        continue;
      }

      ilp.add_eq({{sched_var_name(consumer), isl_val_one(ct)},
          {sched_var_name(producer), isl_val_neg(sv.first)}},
          isl_val_zero(ct));

      obj.insert({sched_var_name(consumer), isl_val_one(ct)});
      obj.insert({sched_var_name(producer), isl_val_one(ct)});
    }
  }

  cout << "ILP Problem: " << str(ilp.s) << endl;

  auto pt = sample(ilp.s);
  auto opt_pt = ilp.minimize(obj);
  cout << tab(1) << "legal point  : " << str(pt) << endl;
  cout << tab(1) << "minimal point: " << str(opt_pt) << endl;

  // Compute delays
  assert(ilp.solved);
  map<string, isl_val*> qfs;
  for (auto s : schedule_params) {
    string consumer = domain_name(s.first);
    string producer = range_name(s.first);

    string qp = sched_var_name(producer);
    string qc = sched_var_name(consumer);

    //qfs[qp] = mul(isl_val_int_from_si(ct, 5), ilp.value(qp));
    qfs[qp] = ilp.value(qp);
    qfs[qc] = ilp.value(qc);
  }
  return qfs;
}

map<string, isl_val*>
compute_qfactors(const vector<isl_map*>& deps) {
  cout << "=== STARTING TO EXTRACT SCHEDULE PARAMS" << endl;
  auto schedule_params =
    extract_schedule_params(deps);

  cout << "=== STARTING TO COMPUTE QFACTORS FROM SCHEDULE PARAMS" << endl;
  map<string, isl_val*> qfactors =
    compute_qfactors(schedule_params);

  cout << "=== DONE COMPUTING QFACTORS" << endl;
  return qfactors;
}

isl_set* find_set(std::string& f, const vector<isl_set*>& domains) {
  for (auto s : domains) {
    if (name(s) == f) {
      return s;
    }
  }
  assert(false);
  return nullptr;
}

map<string, isl_aff*> clockwork_schedule_dimension(
    vector<isl_set*> domains,
    vector<isl_map*> deps,
    map<string, vector<string> >& high_bandwidth_deps) {

  std::set<string> dep_names;
  for (auto d : deps) {
    dep_names.insert(domain_name(d));
    dep_names.insert(range_name(d));
  }
  std::set<string> dom_names;
  for (auto d : domains) {
    if (!elem(name(d), dep_names)) {
      cout << tab(1) << name(d) << " is not a producer or consumer of any dependency" << endl;
      assert(false);
    }
  }
  //cout << "Deps..." << endl;
  assert(deps.size() > 0);
  isl_ctx* ct = ctx(deps.at(0));

  auto schedule_params =
    extract_schedule_params(deps);

  map<string, isl_val*> qfactors =
    compute_qfactors(schedule_params);

  ilp_builder delay_problem(ct);

  std::set<string> consumed;
  std::set<string> outputs;
  std::set<string> all_names;
  for (auto d : deps) {
    consumed.insert(domain_name(d));

    all_names.insert(domain_name(d));
    all_names.insert(range_name(d));
  }

  for (auto n : all_names) {
    if (!elem(n, consumed)) {
      outputs.insert(n);
    }
  }

  //cout << "Outputs..." << endl;
  map<string, isl_val*> pipeline_delay;
  for (auto out : outputs) {
    //cout << tab(1) << out << endl;
    pipeline_delay[delay_var_name(out)] = one(ct);
  }
  std::set<string> operation_names;

  vector<pair<string, isl_val*> > linebuffer_obj_terms;

  vector<map<string, isl_val*> > lb_objs;

  // Add delay legality constraints
  cout << "Schedule params..." << endl;
  for (auto s : schedule_params) {
    cout << tab(1) << str(s.first) << endl;
    string consumer = domain_name(s.first);
    string producer = range_name(s.first);

    operation_names.insert(consumer);
    operation_names.insert(producer);

    isl_val* qp = map_find(sched_var_name(producer), qfactors);

    string dc = delay_var_name(consumer);
    string dp = delay_var_name(producer);

    for (auto sv : s.second) {

      delay_problem.add_geq({{dc, one(ct)}}, isl_val_zero(ct));
      delay_problem.add_geq({{dp, one(ct)}}, isl_val_zero(ct));

      auto b = sv.second;
      auto neg_qpb = neg(mul(qp, b));
      delay_problem.add_geq({{dc, one(ct)}, {dp, negone(ct)}}, neg_qpb);

    }
  }

  assert(operation_names.size() == domains.size());

  vector<pair<string, isl_val*> > diffs;
  map<string, isl_val*> delay_obj;
  for (auto s : schedule_params) {
    string consumer = domain_name(s.first);
    string producer = range_name(s.first);

    isl_set* pset = find_set(producer, domains);
    //isl_val* min = lexminval(cset);
    isl_val* lp = lexmaxval(pset);

    isl_set* cset = find_set(consumer, domains);
    //isl_val* min = lexminval(cset);
    isl_val* lc = lexmaxval(cset);

    isl_val* qc = map_find(sched_var_name(producer), qfactors);
    isl_val* qp = map_find(sched_var_name(producer), qfactors);

    string dc = delay_var_name(consumer);
    string dp = delay_var_name(producer);


    //if (contains_key(consumer, high_bandwidth_deps) &&
        //elem(producer, map_find(consumer, high_bandwidth_deps))) {
      //auto qcoeff = sub(mul(qp, lp), mul(qc, lc));
      //delay_problem.add_geq({{dp, one(ct)}, {dc, negone(ct)}}, qcoeff);
    //}

    //delay_obj[dc] = negone(ct);
    //delay_obj[dp] = negone(ct);

    //delay_obj[dc] = one(ct);
    //delay_obj[dp] = one(ct);

    diffs.push_back({dc, one(ct)});
    diffs.push_back({dp, negone(ct)});

    //delay_obj[dc] = one(ct);
    //delay_obj[dp] = negone(ct);
  }
  //assert(false);

  delay_obj = simplify(diffs);
  //cout << "Delay constraints" << endl;
  //auto opt_delay = delay_problem.lex_minimize({delay_obj});
  //auto opt_delay = delay_problem.lex_minimize({pipeline_delay});
  //auto opt_delay = delay_problem.lex_minimize({pipeline_delay, delay_obj});
  //auto opt_delay = delay_problem.lex_minimize({pipeline_delay, linebuffer_obj, delay_obj});

  vector<map<string, isl_val*> > objectives;
  objectives.push_back(pipeline_delay);
  objectives.push_back(delay_obj);
  auto opt_delay = delay_problem.lex_minimize(objectives);

  map<string, isl_aff*> schedule_functions;
  for (auto f : operation_names) {
    isl_val* rate = map_find(sched_var_name(f), qfactors);
    isl_val* delay = delay_problem.value(delay_var_name(f));
    //cout << "f rate: " << str(rate) << ", delay: " << str(delay) << endl;
    string aff_str =
      "{ [i] -> [(" + str(rate) + "*i + " + str(delay) + ")]}";
    //cout << tab(1) << "aff str: " << aff_str << endl;
    schedule_functions[f] = rdaff(ct, aff_str);
    isl_set* dom = find_set(f, domains);
    auto sf = map_find(f, schedule_functions);
    auto minpt = lexmin(dom);
    auto maxpt = lexmax(dom);
  }

  for (auto s : domains) {
    assert(contains_key(name(s), schedule_functions));
  }
  cout << "Done with schedule" << endl;
  return schedule_functions;
}

vector<std::string> topological_sort(const vector<isl_set*>& sets,
    const vector<isl_map*>& maps) {
  vector<string> finished;
  while (finished.size() < sets.size()) {
    for (auto s : sets) {
      if (!elem(name(s), finished)) {
        bool all_deps_finished = true;
        for (auto m : maps) {
          if (domain_name(m) != name(s) &&
              range_name(m) == name(s) &&
              !elem(domain_name(m), finished)) {
            all_deps_finished = false;
            break;
          }
        }
        if (all_deps_finished) {
          finished.push_back(name(s));
        }
      }
    }
  }

  assert(finished.size() == sets.size());
  return finished;
}

ilp_builder modulo_constraints(uset* padded_domain, umap* padded_validity, map<string, int>& latencies) {
  auto ct = ctx(padded_domain);
  ilp_builder modulo_schedule(ct);
  //return modulo_schedule;

  vector<pair<string, isl_val*> > obj;
  for (auto f : get_sets(padded_domain)) {
    string n = name(f);
    int dim = num_dims(f);

    //isl_aff* s = aff_on_domain(get_local_space(f), zero(ct));
    //isl_aff* cycle_delay = aff_on_domain(get_local_space(f), one(ct));

    modulo_schedule.add_geq(hw_delay_var(n), (int) 0);

    for (int i = 0; i < dim; i++) {

      //cout << "adding var " << ii_var(n, i) << endl;

      modulo_schedule.add_gt(ii_var(n, i), (int) 0);

      if (i < dim - 1) {
        // TODO: Add product of domain at dimension i - 1
        auto dp = project_all_but(f, i + 1);
        //auto tc =
          //mul(isl_val_int_from_si(ct, 3), sub(lexmaxval(dp), lexminval(dp)));

        if (i > 0) {
          auto tc =
            add(sub(lexmaxval(dp), lexminval(dp)), one(ct));
          modulo_schedule.add_gt(ii_var(n, i), tc, ii_var(n, i + 1));
        } else {

          auto tc =
            sub(lexmaxval(dp), lexminval(dp));
          modulo_schedule.add_gt(ii_var(n, i), tc, ii_var(n, i + 1));
        }
      }

      obj.push_back({ii_var(n, i), one(ct)});
    }

  }

  //for (auto dep : get_maps(padded_validity)) {
    //auto max_deps = isl_map_lexmax_pw_multi_aff(inv(dep));
    //cout << "lm = " << str(max_deps) << endl << endl;
  //}

  // All root IIs must be equal
  for (auto s : get_sets(padded_domain)) {
    for (auto other : get_sets(padded_domain)) {
      string iis = ii_var(name(s), 0);
      string iio = ii_var(name(other), 0);
      cout << iis << " == " << iio << endl;
      modulo_schedule.add_eq(iis, iio);
    }
  }

  return modulo_schedule;
}

map<string, isl_aff*>
hardware_schedule(
    uset* domain,
    umap* validity,
    umap* proximity,
    map<string, int>& latencies,
    map<string, int>& iis,
    vector<pair<string, isl_val*> >& obj,
    const vector<linear_constraint>& extra_constraints) {

  cout << "Creating hw schedule..." << endl;
  auto padded_domain = cpy(domain);
  auto padded_validity = cpy(validity);
  auto padded_proximity = cpy(proximity);

  cout << "validity : " << str(padded_validity) << endl;

  auto ct = ctx(padded_domain);

  vector<std::string> sorted_sets =
    topological_sort(get_sets(padded_domain), get_maps(padded_validity));
  cout << "Sorted..." << endl;
  for (auto s : sorted_sets) {
    cout << tab(1) << s << endl;
  }

  ilp_builder modulo_schedule =
    modulo_constraints(domain, validity, latencies);
  for (auto c : extra_constraints) {
    vector<pair<string, isl_val*> > cs;
    for (auto term : c.terms) {
      cs.push_back({term.first, isl_val_int_from_si(ct, term.second)});
    }
    if (c.is_equality) {
      modulo_schedule.add_eq(simplify(cs), isl_val_int_from_si(ct, c.offset));
    } else {
      modulo_schedule.add_geq(simplify(cs), isl_val_int_from_si(ct, c.offset));
    }
  }

  for (auto s : get_sets(padded_domain)) {
    modulo_schedule.add_geq(ii_var(name(s), num_dims(s) - 1), map_find(name(s), iis));
  }

  {
    for (auto m : get_maps(padded_validity)) {
      cout << tab(1) << str(m) << endl;
      auto maps = get_basic_maps(m);
      cout << tab(1) << maps.size() << " basic maps" << endl;
      for (auto bm : maps) {
        string producer_delay = hw_delay_var(domain_name(bm));
        string consumer_delay = hw_delay_var(range_name(bm));
        string ddiff = domain_name(bm) + "_to_" + range_name(bm) + "_ddiff";

        cout << str(bm) << endl;
        vector<pair<string, string> > diffs;
        // This order of pushes to diffs is expected for
        // matrix formatting
        for (int d = 0; d < num_in_dims(bm); d++) {
          diffs.push_back({"d_" + str(d), neg_ii_var(domain_name(bm), d)});
        }

        for (int d = 0; d < num_out_dims(bm); d++) {
          diffs.push_back({"d_" + str(d), ii_var(range_name(bm), d)});
        }

        isl_basic_set* basic_set_for_map = flatten_bmap_to_bset(bm);
        cout << "constraint set: " << str(basic_set_for_map) << endl;
        auto fs = form_farkas_constraints(basic_set_for_map, diffs, ddiff);
        //cout << "fs = " << str(fs) << endl;

        //cout << "dims in farkas: " << num_dims(fs) << endl;
        int base_dims = num_in_dims(bm) + num_out_dims(bm) + 1;
        int num_farkas_mults = num_dims(fs) - base_dims;
        cout << "dims in res   : " << base_dims << endl;
        cout << "farkas mults  : " << num_farkas_mults << endl;
        //fs = isl_basic_set_project_out(fs, isl_dim_set, base_dims, num_farkas_mults);
        cout << "projecting out: " << str(fs) << endl;
        //fs = lift_divs(fs);
        //cout << "after lifting: " << str(fs) << endl;

        append_basic_set(modulo_schedule, fs);

        //cout << "Example solution with farkas: " << str(sample(builder.s)) << endl;
        //assert(false);

        for (int d = 0; d < num_in_dims(bm); d++) {
          string neg_consumer = neg_ii_var(domain_name(bm), d);
          modulo_schedule.add_eq({{neg_consumer, one(ct)}, {ii_var(domain_name(bm), d), one(ct)}},
              zero(ct));
        }

        isl_val* lat = isl_val_int_from_si(ct, map_find(domain_name(bm), latencies));
        cout << "latency = " << str(lat) << endl;
        vector<pair<string, isl_val*> > tms{{ddiff, one(ct)}, {producer_delay, one(ct)}, {consumer_delay, negone(ct)}};
            //{{ddiff, one(ct)}, {producer_delay, one(ct)}, {consumer_delay, negone(ct)}},
        modulo_schedule.add_eq(simplify(tms),
            mul(one(ct), isl_val_int_from_si(ct, map_find(domain_name(bm), latencies))));
            //zero(ct));

        //if (producer_delay == consumer_delay) {
          //cout << "Builder set..." << endl;
          //cout << tab(1) << str(modulo_schedule.s) << endl;
          //modulo_schedule.add_eq({{ddiff, one(ct)}}, isl_val_int_from_si(ct, 4));
          //cout << tab(1) << "pt = " << str(sample(modulo_schedule.s)) << endl;
          //assert(false);
        //}

        //cout << "sample point in builder set = " << str(sample(builder.s)) << endl;

      }

    }
  }

  //// TODO: Replace with more sophisticated
  //// dependence analysis that allows fusion
  //for (auto m : get_maps(validity)) {
    //cout << str(m) << endl;
    //int diff = int_upper_bound(card(to_uset(::domain(m)))) *
      //latencies.at(domain_name(m));
    //cout << "diff = " << diff << endl;

    //map<string, isl_val*> vals;
    //vals.insert({hw_delay_var(range_name(m)), one(ct)});
    //vals.insert({hw_delay_var(domain_name(m)), negone(ct)});
    //modulo_schedule.add_geq(vals, isl_val_int_from_si(ct, -4*diff));
  //}

  //// TODO: Replace with more precise self-constraint
  //// for reductions
  //for (auto dep : get_maps(validity)) {
    //if (domain_name(dep) == "reduce") {
      //string iis = ii_var(domain_name(dep), num_in_dims(dep) - 1);
      //modulo_schedule.add_geq(iis, (int) map_find(domain_name(dep), latencies));
    //}
  //}

  //modulo_schedule.add_eq({{ii_var("reduce", 2), one(ct)}}, isl_val_int_from_si(ct, 2));

  modulo_schedule.minimize(simplify(obj));

  cout << "Solution: " << endl;
  for (auto v : modulo_schedule.variable_positions) {
    cout << v.first << " = " << str(modulo_schedule.value(v.first)) << endl;
  }

  map<string, isl_aff*> hw_schedules;
  for (auto f : get_sets(padded_domain)) {
    int dim = num_dims(f);
    string n = name(f);

    isl_aff* s = aff_on_domain(get_local_space(f), zero(ct));

    for (int i = 0; i < dim; i++) {
      cout << ii_var(n, i) << " = " << str(modulo_schedule.value(ii_var(n, i))) << endl;
      s = set_coeff(s, i, modulo_schedule.value(ii_var(n, i)));
    }

    s = set_const_coeff(s, modulo_schedule.value(hw_delay_var(n)));

    hw_schedules[name(f)] = s;
  }
  return hw_schedules;
}

map<string, isl_aff*>
hardware_schedule(
    uset* domain,
    umap* validity,
    umap* proximity,
    map<string, int>& latencies,
    map<string, int>& iis,
    vector<pair<string, isl_val*> >& obj) {
  return hardware_schedule(domain, validity, proximity, latencies, iis, obj, {});
}

map<string, isl_aff*>
hardware_schedule(
    uset* domain,
    umap* validity,
    umap* proximity) {
  // Dummy latencies
  map<string, int> latencies;
  map<string, int> iis;
  for (auto f : get_sets(domain)) {
    latencies[name(f)] = 2;
    iis[name(f)] = 1;
  }

  auto ct = ctx(domain);
  vector<pair<string, isl_val*> > obj;
  for (auto f : get_sets(domain)) {
    string n = name(f);
    int dim = num_dims(f);

    for (int i = 0; i < dim; i++) {
      obj.push_back({ii_var(n, i), one(ct)});
    }

  }

  return hardware_schedule(domain, validity, proximity, latencies, iis, obj);
}

umap* to_umap(const map<string, isl_aff*>& hs) {
  assert(hs.size() > 0);

  auto ct = ctx(pick(hs).second);
  umap* schedmap = rdmap(ct, "{}");
  for (auto sp : hs) {
    string n = sp.first;
    isl_aff* sched = sp.second;

    isl_map* sm = isl_map_from_aff(sched);
    sm = set_domain_name(sm, n);

    cout << "schedule for n: " << str(sm) << endl;
    schedmap = unn(schedmap, to_umap(sm));
    cout << "schedmap = " << str(schedmap) << endl;
  }

  return schedmap;
}

umap* to_umap(uset* domain, const map<string, isl_aff*>& hs) {
  auto ct = ctx(domain);
  umap* schedmap = rdmap(ct, "{}");
  for (auto s : get_sets(domain)) {
    string n = name(s);
    isl_aff* sched = map_find(n, hs);

    isl_map* sm = isl_map_from_aff(sched);

    cout << "schedule for n: " << str(sm) << endl;
    schedmap = unn(schedmap, to_umap(sm));
    cout << "schedmap = " << str(schedmap) << endl;
  }

  return schedmap;

}

umap*
hardware_schedule_umap(uset* domain, umap* validity, umap* proximity,
    map<string, int>& latencies, map<string, int>& iis, vector<pair<string, isl_val*> >& obj) {
  auto hs = hardware_schedule(domain, validity, proximity, latencies, iis, obj);
  return to_umap(domain, hs);
}

umap*
hardware_schedule_umap(uset* domain, umap* validity, umap* proximity) {
  auto hs = hardware_schedule(domain, validity, proximity);

  auto ct = ctx(domain);
  umap* schedmap = rdmap(ct, "{}");
  for (auto s : get_sets(domain)) {
    string n = name(s);
    isl_aff* sched = map_find(n, hs);

    isl_map* sm = isl_map_from_aff(sched);

    cout << "schedule for n: " << str(sm) << endl;
    schedmap = unn(schedmap, to_umap(sm));
    cout << "schedmap = " << str(schedmap) << endl;
  }

  //assert(false);
  return schedmap;
}

//vector<isl_set*>
//pad_and_permute(const vector<isl_set*>& domains) {
  //int max_dims = -1;
  //for (auto d : domains) {
    //if (num_dims(d) > max_dims) {
      //max_dims = num_dims(d);
    //}
  //}

  //vector<isl_set*> padded;
  //map<isl_set*, int>
  //for (auto d : domains) {
    //padded = pad_set(d, max_dims);
  //}
  //return padded;
//}

umap* qschedule_to_map_final_sort(isl_ctx* ctx, map<string, vector<QExpr> >& schedules, map<string, int>& order) {
  umap* m = rdmap(ctx, "{}");
  for (auto fn : schedules) {
    string f = fn.first;
    vector<string> sched_exprs;
    vector<string> var_names;
    int i = 0;
    for (auto v : map_find(f, schedules)) {
      string dv = "d" + to_string(i);
      sched_exprs.push_back(isl_str(v));
      cout << "Sched expr: " << sched_exprs.back() << endl;
      var_names.push_back(dv);
      i++;
    }
    sched_exprs.push_back(str(map_find(fn.first, order)));
    //var_names.pop_back();
    string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

    cout << "Map str: " << map_str << endl;
    auto rm = rdmap(ctx, map_str);
    cout << "map got str" << endl;
    m = unn(m, rm);
    isl_union_map_free(rm);
  }

  return m;

}

umap* qschedule_to_map_final_sort(isl_ctx* ctx, map<string, vector<QExpr> >& schedules) {
  umap* m = rdmap(ctx, "{}");
  for (auto fn : schedules) {
    string f = fn.first;
    vector<string> sched_exprs;
    vector<string> var_names;
    int i = 0;
    for (auto v : map_find(f, schedules)) {
      string dv = "d" + to_string(i);
      sched_exprs.push_back(isl_str(v));
      cout << "Sched expr: " << sched_exprs.back() << endl;
      var_names.push_back(dv);
      i++;
    }
    //var_names.pop_back();
    string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

    cout << "Map str: " << map_str << endl;
    auto rm = rdmap(ctx, map_str);
    cout << "map got str" << endl;
    m = unn(m, rm);
    isl_union_map_free(rm);
  }

  return m;
}

umap* qschedule_to_map(isl_ctx* ctx, map<string, vector<QExpr> >& schedules) {
  umap* m = rdmap(ctx, "{}");
  for (auto fn : schedules) {
    string f = fn.first;
    vector<string> sched_exprs;
    vector<string> var_names;
    int i = 0;
    for (auto v : map_find(f, schedules)) {
      string dv = "d" + to_string(i);
      sched_exprs.push_back(isl_str(v));
      cout << "Sched expr: " << sched_exprs.back() << endl;
      var_names.push_back(dv);
      i++;
    }
    var_names.pop_back();
    string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

    cout << "Map str: " << map_str << endl;
    auto rm = rdmap(ctx, map_str);
    cout << "map got str" << endl;
    m = unn(m, rm);
    isl_union_map_free(rm);
  }

  return m;
}

umap*
clockwork_schedule_umap_reversed(uset* domain,
    umap* validity,
    umap* proximity) {
  int num_stmts_in_domain = get_sets(domain).size();

  auto sched = clockwork_schedule(domain, validity, proximity);

  int num_stmts_in_sched_map = sched.size();

  assert(num_stmts_in_domain == num_stmts_in_sched_map);

  map<string, vector<QExpr> > scheds;
  for (auto s : sched) {
    string name = s.first;
    vector<isl_aff*> vals = s.second;

    scheds[name] = {};
    int i = 0;
    for (auto v : vals) {
      QExpr rate = qexpr("d" + str(i));
      auto rate_coeff =
        qexpr(int_coeff(v, 0));
      auto delay =
        qexpr(int_const_coeff(v));

      QExpr expr =
        rate_coeff*rate + delay;
      scheds[name].push_back(expr);
      i++;
    }
  }

  vector<std::string> order = topological_sort(get_sets(domain), get_maps(validity));
  int i = 0;
  for (auto s : order) {
    scheds[s].push_back(qexpr(i));
    i++;
  }
  // schedule is dN, ..., d1, d0
  //for (auto& s : scheds) {
    //reverse(s.second);
  //}

  cout << "Final schedule..." << endl;
  for (auto s : scheds) {
    cout << tab(1) << s.first << endl;
    for (auto v : s.second) {
      cout << tab(2) << v << endl;
    }
    cout << endl;
  }

  //assert(false);

  umap* m = rdmap(ctx(domain), "{}");
  for (auto fn : scheds) {
    string f = fn.first;
    vector<QExpr> schedule = fn.second;
    vector<string> sched_exprs;
    vector<string> var_names;

    assert(schedule.size() > 0);

    for (int i = 0; i < (int) schedule.size() - 1; i++) {
      string dv = "d" + to_string(i);
      var_names.push_back(dv);
    }
    int i = 0;
    for (auto v : map_find(f, scheds)) {
      string dv = "d" + to_string(i);
      sched_exprs.push_back(isl_str(v));
      i++;
    }
    string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

    cout << "Map str: " << map_str << endl;
    auto rm = isl_map_read_from_str(ctx(domain), map_str.c_str());
    cout << "map got str" << endl;
    m = unn(m, to_umap(rm));
    release(rm);
  }

  umap* s = m; //qschedule_to_map_final_sort(ctx(domain), scheds);

  cout << "M Final sched: " << str(s) << endl;
  int num_stmts_in_final_schedule = get_maps(s).size();

  assert(num_stmts_in_domain == num_stmts_in_final_schedule);

  return s;
}

umap*
clockwork_schedule_umap(uset* domain,
    umap* validity,
    umap* proximity) {
  auto sched = clockwork_schedule(domain, validity, proximity);


  map<string, vector<QExpr> > scheds;
  for (auto s : sched) {
    string name = s.first;
    vector<isl_aff*> vals = s.second;

    scheds[name] = {};
    int i = 0;
    for (auto v : vals) {
      QExpr rate = qexpr("d" + str(i));
      auto rate_coeff =
        qexpr(int_coeff(v, 0));
      auto delay =
        qexpr(int_const_coeff(v));

      QExpr expr =
        rate_coeff*rate + delay;
      scheds[name].push_back(expr);
      i++;
    }
  }

  // schedule is dN, ..., d1, d0
  for (auto& s : scheds) {
    reverse(s.second);
  }

  cout << "Final schedule..." << endl;
  for (auto s : scheds) {
    cout << tab(1) << s.first << endl;
    for (auto v : s.second) {
      cout << tab(2) << v << endl;
    }
    cout << endl;
  }

  return qschedule_to_map_final_sort(ctx(domain), scheds);
}

map<string, vector<isl_aff*> >
clockwork_schedule(uset* domain,
    umap* validity,
    umap* proximity) {
  map<string, vector<string> > deps;
  return clockwork_schedule(domain, validity, proximity, deps);
}

std::set<pair<op_level , op_level> > get_dims_to_match(umap* validity) {
  std::set<pair<pair<string, int> , pair<string, int> > > matched_dims;
  for (auto v : get_maps(validity)) {
    if (domain_name(v) != range_name(v)) {
      matched_dims.insert({{domain_name(v), 0}, {range_name(v), 0}});
    }

    cout << tab(1) << "M = " << str(v) << endl;
    for (auto c : constraints(v)) {
      auto ls = get_local_space(c);
      assert(!isl_local_space_is_set(ls));

      int num_non_zero = 0;
      vector<int> in_positions;
      //int in_pos = -1;
      for (int d = 0; d < num_in_dims(ls); d++) {
        if (!is_zero(get_coeff(c, isl_dim_in, d))) {
          num_non_zero++;
          in_positions.push_back(d);
          //in_pos = d;
        }
      }

      vector<int> out_positions;
      //int out_pos = -1;
      for (int d = 0; d < num_out_dims(ls); d++) {
        if (!is_zero(get_coeff(c, isl_dim_out, d))) {
          num_non_zero++;
          out_positions.push_back(d);
          //out_pos = d;
        }
      }

      if (num_non_zero > 1) {
        assert(in_positions.size() >= 0);
        assert(out_positions.size() >= 0);
        //assert(in_pos >= 0);
        //assert(out_pos >= 0);
        if (domain_name(v) != range_name(v)) {
          for (auto in_pos : in_positions) {
            for (auto out_pos : out_positions) {
              matched_dims.insert({{domain_name(v), in_pos}, {range_name(v), out_pos}});
            }
          }
          //cout << tab(3) << "Relevant constraint: " << str(c) << endl;
        }

      }
    }
  }

  return matched_dims;
}

map<string, vector<int> >
pad_insertion_indexes(uset* domain, umap* validity) {
  auto matched_dims_init = get_dims_to_match(validity);
  map<op_level, vector<op_level> > matches;
  for (auto m : matched_dims_init) {
    matches[m.first].push_back(m.second);
  }

  cout << "Dims to match: " << endl;
  for (auto d : matched_dims_init) {
    cout << tab(1)
      << d.first.first << "[" << d.first.second << "]" << ", "
      << d.second.first << "[" << d.second.second << "]" << endl;
  }

  auto matched_dims = matched_dims_init;

  //std::set<pair<op_level, op_level> > matched_dims;
  //for (auto m : matches) {
    //cout << m.first.first << ", " << m.first.second << endl;
    //assert(m.second.size() > 0);
    ////matched_dims.insert({m.first, m.second.at(0)});
    //for (auto s : m.second) {
      //cout << tab(1) << s.first << ", " << s.second << endl;
    //}
    ////assert(m.second.size() == 1);
  //}

  //assert(false);

  int max_dim = -1;
  for (auto m : get_sets(domain)) {
    if (num_dims(m) > max_dim) {
      max_dim = num_dims(m);
    }
  }

  cout << "max dim = " << max_dim << endl;
  cout << "Dims to match: " << endl;
  for (auto d : matched_dims) {
    cout << tab(1)
      << d.first.first << "[" << d.first.second << "]" << ", "
      << d.second.first << "[" << d.second.second << "]" << endl;
  }

  map<string, vector<int> > dense_pad_sites;
  map<string, int> total_dims;
  map<string, int> next_dim_to_place;
  for (auto s : get_sets(domain)) {
    string n = name(s);
    total_dims[n] = num_dims(s);
    next_dim_to_place[n] = 0;
    for (int d = 0; d < max_dim; d++) {
      dense_pad_sites[n].push_back(-1);
    }
  }

  for (int current_level = 0; current_level < max_dim; current_level++) {
    for (auto d : next_dim_to_place) {
      string opname = d.first;
      int level = d.second;
      int total_dim = map_find(opname, total_dims);
      if (current_level < total_dim) {
        dense_pad_sites[opname][current_level] = current_level;
      }
    }
  }

  return dense_pad_sites;

  auto ct = ctx(domain);
  ilp_builder pad_positions(ct);
  string some_domain = "";
  for (auto m : get_sets(domain)) {
    string dom = name(m);
    some_domain = dom;
    for (int d = 0; d < num_dims(m); d++) {
      pad_positions.add_geq({{lv(dom, d), one(ct)}}, zero(ct));
      pad_positions.add_geq(max_dim - 1, lv(dom, d));
    }

    for (int d = 0; d < num_dims(m) - 1; d++) {
      pad_positions.add_gt(lv(dom, d + 1), lv(dom, d));
    }
  }

  vector<pair<string, isl_val*> > obj;
  for (auto m : matched_dims) {
    auto lv1 =
      lv(m.first.first, m.first.second);
    auto lv2 =
      lv(m.second.first, m.second.second);
    cout << "lv1 = " << lv1 << endl;
    cout << "lv2 = " << lv2 << endl;
    obj.push_back({lv1, one(ct)});
    obj.push_back({lv2, negone(ct)});
    pad_positions.add_eq(lv1, lv2);
  }

  auto min = pad_positions.minimize(simplify(obj));
  //auto min = pad_positions.minimize({{lv(some_domain, 0), one(ct)}});
  cout << "Solution point: " << str(pad_positions.solution_point) << endl;


  map<string, vector<int> > sites;
  for (auto s : get_sets(domain)) {
    string n = name(s);
    for (int d = 0; d < num_dims(s); d++) {
      sites[n].push_back(
          to_int(pad_positions.value(lv(n, d))));
    }
  }
  map<string, vector<int> > dense_sites;
  for (auto m : sites) {
    string name = m.first;
    vector<int> dense;
    for (int i = 0; i < max_dim; i++) {
      dense.push_back(-1);
    }
    int i = 0;
    for (auto d : m.second) {
      dense[d] = i;
      i++;
    }
    dense_sites[name] = dense;
  }

  return dense_sites;
}

map<string, vector<isl_aff*> >
clockwork_schedule(uset* domain, umap* validity, umap* proximity, map<string, vector<string> >& high_bandwidth_deps) {

  //map<string, vector<int> > sites =
    //pad_insertion_indexes(domain, validity);

  //cout << "Domain" << endl;
  //for (auto s : sites) {
    //cout << s.first << " -> " << sep_list(s.second, "[", "]", ", ") << endl;
  //}
  //assert(false);

  uset* padded_domain = pad_uset(domain);
  auto padded_validity = pad_map(validity);
  auto padded_proximity = pad_map(proximity);

  vector<isl_map*> deps;
  auto finite_validity = its_range(its(padded_validity, padded_domain), padded_domain);
  cout << "Finite validity: " << str(finite_validity) << endl;
  for (auto m : get_maps(finite_validity)) {
    assert(m != nullptr);

    // Schedule respects intra-dependencies by construction
    if (domain_name(m) != range_name(m)) {
      cout << tab(1) << "Dep = " << str(m) << endl;
      deps.push_back(m);
    }
  }
  cout << "Got deps" << endl;

  assert(deps.size() > 0);

  int schedule_dim =
    num_in_dims(get_space(deps.at(0)));

  map<string, vector<isl_aff*> > scheds;
  cout << "Schedule dim = " << schedule_dim << endl;
  for (int d = 0; d < schedule_dim; d++) {
    cout << tab(1) << "scheduling dimension " << d << endl;
    vector<isl_map*> projected_deps;
    for (auto dmap : deps) {
      isl_map* projected = project_all_but(dmap, d);
      projected_deps.push_back(projected);
    }

    vector<isl_set*> projected_domains;
    for (auto dset : get_sets(padded_domain)) {
      isl_set* projected = project_all_but(dset, d);
      projected_domains.push_back(projected);
    }

    auto schedules = clockwork_schedule_dimension(projected_domains, projected_deps, high_bandwidth_deps);
    for (auto s : get_sets(domain)) {
      assert(contains_key(name(s), schedules));
      release(s);
    }
    cout << "Clockwork schedules..." << endl;
    for (auto s : schedules) {
      cout << tab(1) << s.first << ": " << str(s.second) << endl;
      scheds[s.first].push_back(s.second);
    }
  }

  for (auto s : get_sets(domain)) {
    assert(contains_key(name(s), scheds));
    release(s);
  }

  return scheds;
}

umap* experimental_opt(uset* domain,
    umap* validity,
    umap* proximity) {

  cout << "Domain  : " << str(domain) << endl;
  cout << "Validity: " << str(validity) << endl;
  vector<isl_map*> deps;
  auto finite_validity = its_range(its(validity, domain), domain);
  for (auto m : get_maps(finite_validity)) {
    assert(m != nullptr);

    if (domain_name(m) != range_name(m)) {
      deps.push_back(m);
    }
  }
  cout << "Got deps" << endl;

  assert(deps.size() > 0);

  int schedule_dim =
    num_in_dims(get_space(deps.at(0)));

  cout << "Schedule dim = " << schedule_dim << endl;
  for (int d = schedule_dim - 1; d >= 0; d--) {
    vector<isl_map*> projected_deps;
    for (auto dmap : deps) {
      isl_map* projected = project_all_but(dmap, d);
      projected_deps.push_back(projected);
    }
    opt_schedule_dimension(projected_deps);
  }

  //assert(false);
  return nullptr;
}

void ilp_builder::add_geq(const std::map<string, isl_val*>& coeffs, isl_val* constant) {
    vector<isl_val*> denoms;
    if (isl_val_is_rat(constant)) {
      denoms.push_back(isl_val_get_den_val(constant));
    }
    for (auto v : coeffs) {
      //cout << tab(1) << "checking if v = " << str(v.second) << " is rational" << endl;
      if (isl_val_is_rat(v.second)) {
        //cout << tab(2) << "rational!" << endl;
        auto dv = isl_val_get_den_val(v.second);
        //cout << tab(3) << "dv = " << str(dv) << endl;
        assert(isl_val_is_pos(dv));
        denoms.push_back(dv);
      } else {
        //cout << tab(2) << "not rational" << endl;
        assert(isl_val_is_int(v.second));
      }
    }

    //cout << "# denoms = " << denoms.size() << endl;
    isl_val* dn = isl_val_one(ctx);
    for (auto v : denoms) {
      //cout << tab(1) << "denom = " << str(v) << endl;
      dn = mul(dn, v);
    }
    assert(isl_val_is_int(dn));

    for (auto v : coeffs) {
      if (!contains_key(v.first, variable_positions)) {
        add_variable(v.first);
      }
    }

    isl_constraint* c = isl_constraint_alloc_inequality(get_local_space(s));
    isl_constraint_set_constant_val(c, mul(dn, constant));

    //cout << "dn = " << str(dn) << endl;
    for (auto v : coeffs) {
      //cout << "v = " << str(v.second) << endl;
      auto m = mul(dn, v.second);
      //cout << "m = " << str(m) << endl;
      assert(isl_val_is_int(m));

      isl_constraint_set_coefficient_val(c,
          isl_dim_set,
          map_find(v.first, variable_positions),
          m);
    }

    s = isl_basic_set_add_constraint(s, c);
    assert(isl_val_is_int(constant));

  }

void print_hw_schedule(const std::string& latency_to_minimize,
    uset* dom,
    umap* valid,
    map<string, int>& op_latencies) {

  cout << "dom   = " << str(dom) << endl;
  cout << "valid = " << str(valid) << endl;
  ilp_builder builder = modulo_constraints(dom, valid, op_latencies);
  //for (auto s : get_sets(dom)) {
    //builder.add_geq(hw_delay_var(name(s)), (int) 1);
  //}
  auto ct = ctx(dom);

  //assert(false);

  int domain_dim = -1;
  for (auto m : get_maps(valid)) {
    domain_dim = num_in_dims(m);
    cout << tab(1) << str(m) << endl;
    auto maps = get_basic_maps(m);
    cout << tab(1) << maps.size() << " basic maps" << endl;
    for (auto bm : maps) {
      string producer_delay = hw_delay_var(domain_name(bm));
      string consumer_delay = hw_delay_var(range_name(bm));
      string ddiff = domain_name(bm) + "_to_" + range_name(bm) + "_ddiff";

      cout << str(bm) << endl;
      vector<pair<string, string> > diffs;
      // This order of pushes to diffs is expected for
      // matrix formatting
      for (int d = 0; d < num_in_dims(bm); d++) {
        diffs.push_back({"d_" + str(d), neg_ii_var(domain_name(bm), d)});
      }

      for (int d = 0; d < num_out_dims(bm); d++) {
        diffs.push_back({"d_" + str(d), ii_var(range_name(bm), d)});
      }

      isl_basic_set* basic_set_for_map = flatten_bmap_to_bset(bm);
      auto fs = form_farkas_constraints(basic_set_for_map, diffs, ddiff);
      cout << "fs = " << str(fs) << endl;

      //fs = negative(fs, 0);
      //fs = positive(fs, 1);
      //fs = zero(fs, 2);
      //auto pt = sample(fs);
      //cout << "Example solution to farkas: " << str(pt) << endl;
      //assert(false);

      //cout << "Example solution without farkas: " << str(sample(builder.s)) << endl;

      cout << "dims in farkas: " << num_dims(fs) << endl;
      int base_dims = num_in_dims(bm) + num_out_dims(bm) + 1;
      int num_farkas_mults = num_dims(fs) - base_dims;
      cout << "dims in res   : " << base_dims << endl;
      cout << "farkas mults  : " << num_farkas_mults << endl;
      fs = isl_basic_set_project_out(fs, isl_dim_set, base_dims, num_farkas_mults);
      cout << "projecting out: " << str(fs) << endl;
      fs = lift_divs(fs);
      cout << "after lifting: " << str(fs) << endl;

      append_basic_set(builder, fs);

      //cout << "Example solution with farkas: " << str(sample(builder.s)) << endl;
      //assert(false);

      //ilp_builder builder(fs);
      for (int d = 0; d < num_in_dims(bm); d++) {
        string neg_consumer = neg_ii_var(domain_name(bm), d);
        builder.add_eq({{neg_consumer, one(ct)}, {ii_var(domain_name(bm), d), one(ct)}},
            zero(ct));
      }

      builder.add_eq({{ddiff, one(ct)}, {producer_delay, one(ct)}, {consumer_delay, negone(ct)}},
          zero(ct));

      cout << "Builder set..." << endl;
      cout << tab(1) << str(builder.s) << endl;

      //cout << "sample point in builder set = " << str(sample(builder.s)) << endl;

    }

  }

  assert(domain_dim > 0);
  map<string, isl_val*> sum_of_iis;

  for (int d = 0; d < domain_dim; d++) {
    isl_val* v = isl_val_2exp(sub(isl_val_int_from_si(ct, domain_dim),
          isl_val_int_from_si(ct, d)));
    sum_of_iis[ii_var(latency_to_minimize, d)] = mul(v, one(ct));
  }
  sum_of_iis[hw_delay_var(latency_to_minimize)] = one(ct);
  //builder.add_eq({{"p_to_c_ddiff", one(ct)}}, isl_val_int_from_si(ct, 10));
  builder.minimize(sum_of_iis);

  cout << "Final HW schedule" << endl;
  for (auto v : builder.variable_positions) {
    cout << tab(1) << v.first << " = " << str(builder.value(v.first)) << endl;
  }

}

void print_hw_schedule(
    uset* dom,
    umap* valid) {
  map<string, int> latencies;
  for (auto s : get_sets(dom)) {
    latencies[name(s)] = 1;
  }
  string lm = topological_sort(get_sets(dom), get_maps(valid)).back();
  assert(lm != "");

  print_hw_schedule(lm, dom, its(valid, dom), latencies);
}

void append_basic_set(ilp_builder& b, isl_basic_set* s) {
  //cout << "appending: " << str(s) << endl;
  auto ineqs =
    equalities_to_inequalities(s);
  //cout << "Ineqs..." << endl;
  //cout << str(ineqs) << endl;
  assert(num_div_dims(s) == 0);
  assert(num_param_dims(s) == 0);

  for (int d = 0; d < num_dims(s); d++) {
    auto id = isl_basic_set_get_dim_name(s, isl_dim_set, d);
    if (id != nullptr) {
    } else {
      string name_str = next_name("fm", b);
      assert(!contains_key(name_str, b.variable_positions));
      //cout << tab(1) << " name = " << name_str << endl;
      b.add_variable(name_str);
      s = isl_basic_set_set_dim_name(s, isl_dim_set, d, name_str.c_str());
    }
  }

  //cout << "set after naming: " << str(s) << endl;
  for (auto c : constraints(s)) {
    map<string, isl_val*> values;
    for (int d = 0; d < num_dims(s); d++) {
      auto id = isl_basic_set_get_dim_name(s, isl_dim_set, d);
      assert(id != nullptr);
      string name_str(id);
      //cout << tab(1) << " name = " << name_str << endl;
      values[name_str] = isl_constraint_get_coefficient_val(c, isl_dim_set, d);
    }

    isl_val* constant = isl_constraint_get_constant_val(c);
    //for (auto c : values) {
      //cout << tab(1) << c.first << " " << str(c.second) << endl;
    //}
    if (isl_constraint_is_equality(c)) {
      b.add_eq(values, constant);
    } else {
      b.add_geq(values, constant);
    }
    //cout << "after adding constraint: " << str(sample(b.s)) << endl;
  }
}

void mathlog_problem(ilp_builder& builder, const map<string, isl_val*>& obj) {
  cout << "Writing problem to mod file..." << endl;
  ofstream out("schedule_problem.mod");
  for (auto ps : builder.variable_positions) {
    out << "var " << ps.first << ", integer;" << endl;
  }

  vector<string> obj_terms;
  for (auto t : obj) {
    obj_terms.push_back(str(t.second) + "*" + t.first);
  }


  isl_mat* im = equalities_to_inequalities(cpy(builder.s));
  cout << tab(1) << "# of constraints: " << isl_mat_rows(im) << endl;
  map<int, string> index_names;
  for (auto m : builder.variable_positions) {
    index_names[m.second] = m.first;
  }

  for (int cn = 0; cn < isl_mat_rows(im); cn++) {
    vector<string> terms;
    for (int c = 0; c < isl_mat_cols(im) - 1; c++) {
      isl_val* cv = isl_mat_get_element_val(im, cn, c);
      string var = map_find(c, index_names);
      terms.push_back(str(cv) + "*" + var);
    }

    string cstr = sep_list(terms, "", "", " + ");
    isl_val* b = isl_mat_get_element_val(im, cn, isl_mat_cols(im) - 1);
    cstr += " + " + str(b);
    out << "s.t. c" << cn << " : " << cstr << ">= 0;" << endl;
  }

  out << "minimize obj: " << sep_list(obj_terms, "", "", " + ") << ";" << endl;
  out << "solve;";
  for (auto ps : builder.variable_positions) {
    out << "printf \"" << ps.first << " = %d\\n\", " << ps.first << ";" << endl;
  }
  out << "end;" << endl;
  out.close();
  //cout << "Done writing out problem to mod file" << endl;
}

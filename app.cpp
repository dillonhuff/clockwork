#include "app.h"

string sched_var_name(const string& n) {
  return "s_" + n;
}

string delay_var_name(const string& n) {
  return "delay_" + n;
}
QExpr delayvar(const string& n) {
  return qexpr(delay_var_name(n));
}

QExpr schedvar(const string& n) {
  return qexpr(sched_var_name(n));
}

struct ilp_builder {

  isl_ctx* ctx;
  isl_basic_set* s;
  map<string, int> variable_positions;
  bool solved;
  isl_point* solution_point;

  ilp_builder(isl_ctx* ctx_) : ctx(ctx_) {
    auto init_space = isl_space_set_alloc(ctx, 0, 0);
    s = isl_basic_set_universe(init_space);
    solved = false;
    solution_point = nullptr;
  }

  isl_val* value(const std::string& var) {
    //cout << "Getting value for: " << var << endl;
    assert(solved);
    assert(solution_point != nullptr);
    assert(contains_key(var, variable_positions));

    return isl_point_get_coordinate_val(solution_point,
        isl_dim_set,
        map_find(var, variable_positions));
  }

  void add_variable(const std::string& name) {
    int next_pos = num_dims(isl_basic_set_get_space(s));
    variable_positions[name] = next_pos;
    s = isl_basic_set_add_dims(s, isl_dim_set, 1);
  }

  void add_geq(const std::map<string, isl_val*>& coeffs, isl_val* constant) {
    vector<isl_val*> denoms;
    if (isl_val_is_rat(constant)) {
      denoms.push_back(isl_val_get_den_val(constant));
    }
    for (auto v : coeffs) {
      if (isl_val_is_rat(v.second)) {
        auto dv = isl_val_get_den_val(v.second);
        assert(isl_val_is_pos(dv));
        denoms.push_back(isl_val_get_den_val(dv));
      }
    }

    //cout << "Denoms..." << endl;
    isl_val* dn = isl_val_one(ctx);
    for (auto v : denoms) {
      //cout << tab(1) << str(v) << endl;
      dn = mul(dn, v);
    }
    assert(isl_val_is_int(dn));

    //cout << "Denom: " << str(dn) << endl;
    for (auto v : coeffs) {
      if (!contains_key(v.first, variable_positions)) {
        add_variable(v.first);
      }
    }

    isl_constraint* c = isl_constraint_alloc_inequality(get_local_space(s));
    isl_constraint_set_constant_val(c, mul(dn, constant));

    for (auto v : coeffs) {
      //cout << "index = " << map_find(v.first, variable_positions) << endl;
      auto m = mul(dn, v.second);
      //cout << "dn = " << str(dn) << endl;
      //cout << "m  = " << str(m) << endl;
      assert(isl_val_is_int(m));

      isl_constraint_set_coefficient_val(c,
          isl_dim_set,
          map_find(v.first, variable_positions),
          m);
    }

    s = isl_basic_set_add_constraint(s, c);
    assert(isl_val_is_int(constant));

  }

  vector<isl_val*> lex_minimize(const vector<std::map<string, isl_val*> >& objectives) {
    vector<isl_val*> values;

    isl_basic_set* max_loc = cpy(s);
    for (auto obj : objectives) {
      isl_aff* objective = isl_aff_zero_on_domain(get_local_space(s));
      for (auto coeff : obj) {
        int index = map_find(coeff.first, variable_positions);
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

    return values;
  }

  isl_val* minimize(const std::map<string, isl_val*>& obj) {
    isl_aff* objective = isl_aff_zero_on_domain(get_local_space(s));
    cout << "Objective: " << str(objective) << endl;
    for (auto coeff : obj) {
      cout << "Coeff: " << coeff.first << endl;
      int index = map_find(coeff.first, variable_positions);
      isl_val* cn = mul(isl_val_negone(ctx), coeff.second);
      cout << "cn = " << str(cn) << endl;
      objective = isl_aff_set_coefficient_val(objective, isl_dim_in, index, cn);
      cout << "objective: " << str(objective) << endl;
    }
    cout << "objective: " << str(objective) << endl;
    isl_val* max = isl_basic_set_max_val(cpy(s), objective);
    isl_basic_set* max_loc =
      isl_aff_eq_basic_set(objective,
          aff_on_domain(get_local_space(s), max));
    solved = true;
    cout << "max loc = " << str(max_loc) << endl;
    cout << "s       = " << str(s) << endl;
    auto max_loc_pts = its(max_loc, s);
    cout << "max pts = " << str(max_loc_pts) << endl;

    assert(!empty(max_loc_pts));

    solution_point = sample(its(max_loc, s));
    assert(solution_point != nullptr);
    return max;
  }

  void add_eq(const std::map<string, isl_val*>& coeffs, isl_val* constant) {
    vector<isl_val*> denoms;
    if (isl_val_is_rat(constant)) {
      denoms.push_back(isl_val_get_den_val(constant));
    }
    for (auto v : coeffs) {
      if (isl_val_is_rat(v.second)) {
        auto dv = isl_val_get_den_val(v.second);
        assert(isl_val_is_pos(dv));
        denoms.push_back(dv);
        cout << tab(1) << "rational    : " << str(v.second) << endl;
      } else {
        cout << tab(1) << "non-rational: " << str(v.second) << endl;
      }
    }

    cout << "Denoms..." << endl;
    isl_val* dn = isl_val_one(ctx);
    for (auto v : denoms) {
      cout << tab(1) << str(v) << endl;
      dn = mul(dn, v);
    }
    //assert(isl_val_is_int(constant));

    cout << "Denom: " << str(dn) << endl;
    for (auto v : coeffs) {
      //assert(isl_val_is_int(v.second));
      if (!contains_key(v.first, variable_positions)) {
        int next_pos = num_dims(isl_basic_set_get_space(s));
        variable_positions[v.first] = next_pos;
        s = isl_basic_set_add_dims(s, isl_dim_set, 1);
      }
    }

    isl_constraint* c = isl_constraint_alloc_equality(get_local_space(s));
    auto cv = mul(dn, constant);
    cout << "cv = " << str(cv) << endl;
    cout << "dn = " << str(dn) << endl;
    assert(isl_val_is_int(cv));

    isl_constraint_set_constant_val(c, cv);

    for (auto v : coeffs) {
      cout << "index = " << map_find(v.first, variable_positions) << endl;
      auto m = mul(dn, v.second);
      cout << "dn = " << str(dn) << endl;
      cout << "m = " << str(m) << endl;
      assert(isl_val_is_int(m));
      isl_constraint_set_coefficient_val(c,
          isl_dim_set,
          map_find(v.first, variable_positions),
          m);
    }

    s = isl_basic_set_add_constraint(s, c);
  }

};

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
  cout << "Creating intersection constraints" << endl;
  for (auto c : constraints) {
    cout << "\tits with: " << c << endl;
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

  cout << "# of variables: " << ds.size() << endl;
  string varspx = sep_list(ds, "[", "]", ", ");
  //auto* legal_delay_basic =
    //rd_basic_set(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
  isl_set* legal_delays =
    isl_set_read_from_str(ctx, ("{ " + sep_list(ds, "[", "]", ", ") + " }").c_str());
    //rdset(ctx, "{ " + sep_list(ds, "[", "]", ", ") + " }");
  for (auto c : constraints) {
    cout << "\tits with: " << c << endl;
    QConstraint normed = c;
    normed.lhs = normed.lhs - normed.rhs;

    string lhs_str = isl_str(normed.lhs);
    cout << tab(1) << lhs_str << endl;
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

umap* opt_schedule_dimension(vector<isl_map*> deps) {

  cout << "Deps..." << endl;
  for (auto d : deps) {
    cout << tab(1) << str(d) << endl;
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

  set<string> vars;
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
      cout << "D = " << str(d) << endl;
      auto r = range_name(d);
      cout << "r = " << r << endl;
      auto c = domain_name(d);
      cout << "c = " << c << endl;

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

pair<isl_val*, isl_val*>
extract_div_free_linear_rational_approximation(isl_aff* aff_bound) {
  int in_dims = num_in_dims(aff_bound);
  int out_dims = num_out_dims(aff_bound);
  int div_dims = num_div_dims(aff_bound);

  //cout << "in_dims  = " << in_dims << endl;
  //cout << "out_dims = " << out_dims << endl;
  //cout << "div_dims = " << div_dims << endl;

  assert(in_dims == 1);
  assert(out_dims == 1);
  //assert(div_dims == 0);

  for (int i = 0; i < div_dims; i++) {
    auto dc = isl_aff_get_coefficient_val(aff_bound, isl_dim_div, i);
    assert(isl_val_is_zero(dc));
  }

  isl_val* b = isl_aff_get_constant_val(aff_bound);
  isl_val* k = isl_aff_get_coefficient_val(aff_bound, isl_dim_in, 0);
  //cout << "b = " << str(b) << endl;
  //cout << "k = " << str(k) << endl;

  return {k, b};
}

pair<isl_val*, isl_val*>
extract_linear_rational_approximation(isl_aff* aff_bound) {
  int in_dims = num_in_dims(aff_bound);
  int out_dims = num_out_dims(aff_bound);
  int div_dims = num_div_dims(aff_bound);

  //cout << "in_dims  = " << in_dims << endl;
  //cout << "out_dims = " << out_dims << endl;
  //cout << "div_dims = " << div_dims << endl;

  assert(in_dims == 1);
  assert(out_dims == 1);

  if (div_dims == 0) {
    auto dkb = extract_div_free_linear_rational_approximation(aff_bound);
    auto k = dkb.first;
    auto b = dkb.second;
    //cout << "b = " << str(b) << endl;
    //cout << "k = " << str(k) << endl;

    return {k, b};
  } else {
    assert(div_dims == 1);
    //cout << "Getting div bound for: " << str(aff_bound) << endl;

    isl_val* k = isl_aff_get_coefficient_val(aff_bound, isl_dim_in, 0);
    isl_val* b = isl_aff_get_constant_val(aff_bound);

    isl_aff* div_expr = isl_aff_get_div(aff_bound, 0);
    //cout << "Div: " << str(div_expr) << endl;
    auto dkb = extract_div_free_linear_rational_approximation(div_expr);
    //cout << "div k = " << str(dkb.first) << endl;
    //cout << "div b = " << str(dkb.second) << endl;

    //assert(isl_val_is_zero(dkb.second));
    assert(isl_val_is_zero(k));

    isl_val* final_b = add(dkb.second, b);
    //cout << "final k = " << str(dkb.first) << endl;
    //cout << "final b = " << str(final_b) << endl;

    //assert(false);

    return {dkb.first, final_b};
  }
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

map<string, isl_aff*> clockwork_schedule_dimension(vector<isl_map*> deps,
    map<string, vector<string> >& high_bandwidth_deps) {
  cout << "Deps..." << endl;
  assert(deps.size() > 0);
  isl_ctx* ct = ctx(deps.at(0));
  vector<isl_map*> consumed_data;
  for (auto d : deps) {
    cout << tab(1) << str(d) << endl;
    //cout << tab(2) << str(card((d))) << endl;
    consumed_data.push_back(inv(d));
  }

  //assert(false);

  cout << "Consumed data..." << endl;
  map<isl_map*, vector<pair<isl_val*, isl_val*> > > schedule_params;
  for (auto c : consumed_data) {
    auto lm = isl_map_lexmax_pw_multi_aff(cpy(c));
    cout << tab(1) << str(c) << endl;
    cout << tab(2) << "lexmax: " << str(lm) << endl;
    vector<pair<isl_set*, isl_multi_aff*> > pieces =
      get_pieces(lm);
    for (auto piece : pieces) {
      isl_multi_aff* bound = piece.second;
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

  ilp_builder ilp(ct);
  vector<QConstraint> rate_constraints;
  QExpr objective = qexpr(0);

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

      objective = objective + qp + qc;
    }
  }

  cout << "ILP Problem: " << str(ilp.s) << endl;

  auto pt = sample(ilp.s);
  auto opt_pt = ilp.minimize(obj);
  cout << tab(1) << "legal point  : " << str(pt) << endl;
  cout << tab(1) << "minimal point: " << str(opt_pt) << endl;

  // Compute delays
  assert(ilp.solved);

  cout << "Building delay constraints" << endl;
  ilp_builder delay_problem(ct);
  set<string> operation_names;

  set<string> consumers;
  for (auto dep : deps) {
    string consumer = range_name(dep);
    consumers.insert(consumer);
  }
  for (auto dep : deps) {
    consumers.erase(domain_name(dep));
  }

  assert(consumers.size() > 0);

  map<string, isl_val*> pipeline_delay;
  for (auto c : consumers) {
    pipeline_delay[delay_var_name(c)] = one(ct);
  }

  vector<pair<string, isl_val*> > linebuffer_obj_terms;

  for (auto b : high_bandwidth_deps) {
    string consumer_delay = delay_var_name(b.first);
    for (auto producer_name : b.second) {
      string producer_delay = delay_var_name(producer_name);
      linebuffer_obj_terms.push_back({consumer_delay, one(ct)});
      linebuffer_obj_terms.push_back({producer_delay, negone(ct)});
    }
  }

  auto linebuffer_obj = simplify(linebuffer_obj_terms);

  map<string, isl_val*> delay_obj;
  for (auto s : schedule_params) {
    string consumer = domain_name(s.first);
    string producer = range_name(s.first);

    operation_names.insert(consumer);
    operation_names.insert(producer);

    isl_val* qp = ilp.value(sched_var_name(producer));

    string dc = delay_var_name(consumer);
    string dp = delay_var_name(producer);

    delay_obj[dc] = negone(ct);
    delay_obj[dp] = negone(ct);
    
    //delay_obj[dc] = one(ct);
    //delay_obj[dp] = one(ct);

    for (auto sv : s.second) {

      delay_problem.add_geq({{dc, one(ct)}}, isl_val_zero(ct));
      delay_problem.add_geq({{dp, one(ct)}}, isl_val_zero(ct));

      auto b = sv.second;
      auto neg_qpb = neg(mul(qp, b));
      delay_problem.add_geq({{dc, one(ct)}, {dp, negone(ct)}}, neg_qpb);

    }
  }

  cout << "Delay constraints" << endl;
  //auto opt_delay = delay_problem.lex_minimize({delay_obj});
  //auto opt_delay = delay_problem.lex_minimize({pipeline_delay});
  auto opt_delay = delay_problem.lex_minimize({pipeline_delay, delay_obj});
  //auto opt_delay = delay_problem.lex_minimize({linebuffer_obj, delay_obj});

  map<string, isl_aff*> schedule_functions;
  for (auto f : operation_names) {
    isl_val* rate = ilp.value(sched_var_name(f));
    isl_val* delay = delay_problem.value(delay_var_name(f));
    cout << "f rate: " << str(rate) << ", delay: " << str(delay) << endl;
    string aff_str = 
      "{ [i] -> [(" + str(rate) + "*i + " + str(delay) + ")]}";
    cout << tab(1) << "aff str: " << aff_str << endl;
    schedule_functions[f] = rdaff(ct, aff_str);
  }

  cout << "Done with schedule" << endl;
  return schedule_functions;
}

isl_map* pad_map(isl_map* s, const int max_dim) {
  auto ct = ctx(s);

  cout << "padding map, s: " << str(s) << endl;

  int in_pad_factor = max_dim - num_in_dims(s);
  int out_pad_factor = max_dim - num_out_dims(s);

  int original_in_dim = num_in_dims(s);
  int original_out_dim = num_out_dims(s);

  isl_map* padded = isl_map_empty(get_space(s));

  padded = isl_map_add_dims(padded, isl_dim_in, in_pad_factor);
  padded = isl_map_add_dims(padded, isl_dim_out, out_pad_factor);
  
  padded = isl_map_set_tuple_id(padded, isl_dim_in, id(ct, domain_name(s)));
  padded = isl_map_set_tuple_id(padded, isl_dim_out, id(ct, range_name(s)));

  cout << "Getting basic maps..." << endl;

  for (auto bmap : get_basic_maps(s)) {

    auto pad = isl_basic_map_add_dims(cpy(bmap), isl_dim_in, in_pad_factor);
    pad = isl_basic_map_add_dims(pad, isl_dim_out, out_pad_factor);

    pad = isl_basic_map_set_tuple_id(pad, isl_dim_in, id(ct, domain_name(s)));
    pad = isl_basic_map_set_tuple_id(pad, isl_dim_out, id(ct, range_name(s)));

    cout << "Pad map before zero constraints: " << str(pad) << endl;

    for (int i = original_in_dim; i < num_in_dims(padded); i++) {
      auto ls = isl_local_space_from_space(cpy(get_space(padded)));
      auto is_zero = isl_constraint_alloc_equality(ls);
      is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
      is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_in, i, one(ct));
      pad = isl_basic_map_add_constraint(pad, is_zero);
    }

    for (int i = original_out_dim; i < num_out_dims(padded); i++) {
      auto ls = isl_local_space_from_space(cpy(get_space(padded)));
      auto is_zero = isl_constraint_alloc_equality(ls);
      is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
      is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_out, i, one(ct));
      pad = isl_basic_map_add_constraint(pad, is_zero);
    }

    cout << "Pad amp after zero constraints: " << str(pad) << endl;
    isl_map* pbset = to_map(pad);
    padded = unn(padded, pbset);
  }

  //assert(false);
  
  return padded;
}

umap* pad_map(umap* unpadded) {
  auto ct = ctx(unpadded);

  cout << "Padding union map: " << str(unpadded) << endl;

  int max_dim = -1;
  for (auto s : get_maps(unpadded)) {

    cout << tab(1) << str(s) << endl;
    int new_dim = num_in_dims(s);
    if (new_dim > max_dim) {
      max_dim = new_dim;
    }

    new_dim = num_out_dims(s);
    if (new_dim > max_dim) {
      max_dim = new_dim;
    }
  }

  cout << "Max dimension: " << max_dim << endl;

  vector<isl_map*> padded_maps;
  for (auto s : get_maps(unpadded)) {
    cout << "Padding: " << str(s) << endl;
    isl_map* m = pad_map(s, max_dim);
    padded_maps.push_back(m);
  }

  cout << "After padding..." << endl;
  umap* final_map = rdmap(ct, "{}");
  for (auto p : padded_maps) {
    cout << tab(1) << str(p) << endl;
    final_map = unn(final_map, to_umap(p));
  }

  return final_map;
}

map<string, vector<isl_aff*> >
clockwork_schedule(uset* domain,
    umap* validity,
    umap* proximity) {
  map<string, vector<string> > deps;
  return clockwork_schedule(domain, validity, proximity, deps);
}

map<string, vector<isl_aff*> >
clockwork_schedule(uset* domain, umap* validity, umap* proximity, map<string, vector<string> >& high_bandwidth_deps) {
  auto ct = ctx(domain);
  cout << "Domain: " << str(domain) << endl;
  int max_dim = -1;
  set<int> different_dims;
  cout << "sets..." << endl;
  for (auto s : get_sets(domain)) {
    cout << tab(1) << str(s) << endl;
    int new_dim = num_dims(s);
    if (new_dim > max_dim) {
      max_dim = new_dim;
    }
    different_dims.insert(new_dim);
  }

  cout << "Max dimension: " << max_dim << endl;
  cout << "# of different dimensions..." << different_dims.size() << endl;
  map<string, int> pad_factor;
  map<string, isl_set*> padded_sets;
  for (auto s : get_sets(domain)) {
    cout << "padding set: " << str(s) << endl;
    int pad_factor = max_dim - num_dims(s);
    int original_dim = num_dims(s);

    isl_set* padded = isl_set_empty(get_space(s));
    padded = isl_set_add_dims(padded, isl_dim_set, pad_factor);

    for (auto bset : get_basic_sets(s)) {

      auto pad = isl_basic_set_add_dims(cpy(bset), isl_dim_set, pad_factor);
      cout << "Pad set before zero constraints: " << str(pad) << endl;

      for (int i = original_dim; i < num_dims(pad); i++) {
        auto ls = isl_local_space_from_space(cpy(get_space(padded)));

        auto is_zero = isl_constraint_alloc_equality(ls);
        is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
        is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_set, i, one(ct));
        pad = isl_basic_set_add_constraint(pad, is_zero);
      }

      cout << "Padded bset: " << str(pad) << endl;
      isl_set* pbset = to_set(pad);
      cout << "Padded  set: " << str(pbset) << endl;
      padded = unn(padded, pbset);
      cout << "Padded: " << str(padded) << endl;
    }

    cout << "Final Padded set" << str(padded) << endl;
    padded = isl_set_set_tuple_id(padded, id(ct, name(s)));
    padded_sets[name(s)] = padded;
  }

  cout << "After padding..." << endl;
  uset* padded_domain =
    isl_union_set_read_from_str(ct, "{}");
  for (auto p : padded_sets) {
    cout << tab(1) << str(p.second) << endl;
    padded_domain = unn(padded_domain, to_uset(p.second));
  }

  cout << "Padded domain: " << str(padded_domain) << endl;

  //assert(different_dims.size() == 1);

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
    vector<isl_map*> projected_deps;
    for (auto dmap : deps) {
      isl_map* projected = project_all_but(dmap, d);
      projected_deps.push_back(projected);
    }

    auto schedules = clockwork_schedule_dimension(projected_deps, high_bandwidth_deps);
    cout << "Clockwork schedules..." << endl;
    for (auto s : schedules) {
      cout << tab(1) << s.first << ": " << str(s.second) << endl;
      scheds[s.first].push_back(s.second);
    }
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

    //cout << tab(1) << str(m) << endl;
    // Schedule respects intra-dependencies by construction
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

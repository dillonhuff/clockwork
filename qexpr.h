#pragma once

#include <stack>
#include <regex>
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <queue>

#include "options.h"
#include "utils.h"
#include "isl_utils.h"

struct QAV {
  bool is_num;
  string name;
  int num;
  int denom;

  string get_name() const {
    return name;
  }

  int to_int() const {
    assert(is_num);
    assert(denom == 1);
    return num;
  }

  bool is_whole() const {
    return is_num && denom == 1;
  }

  bool is_zero() const {
    if (!is_num) {
      return false;
    }

    assert(denom != 0);
    return is_num && (num == 0);
  }

  bool is_var() const {
    return !is_num;
  }

  bool is_one() const {
    return is_num && (num == 1 && denom == 1);
  }
};

static inline
bool operator==(const QAV& l, const QAV& r) {
  if (l.is_num != r.is_num) {
    return false;
  }

  if (l.is_num) {
    return l.num == r.num && l.denom == r.denom;
  }

  return l.name == r.name;
}

static inline
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

static inline
std::string to_string(const QAV& q) {
  ostringstream ss;
  ss << q;
  return ss.str();
}

static inline
QAV scale(const int f, const QAV& v) {
  assert(v.is_num);
  QAV cpy = v;
  cpy.num = f*cpy.num;
  return cpy;
}

static inline
QAV qconst(const int& v, const int& d) {
  assert(v == 1 || v % d == 0);
  //if (!(v == 1 || d == 1)) {
    //cout << "v == " << v << ", d == " << d << endl;
  //}
  //assert(v == 1 || d == 1);
  if (v == 1) {
    return {true, "", v, d};
  } else {
    return {true, "", v / d, 1};
  }

}

static inline
QAV times(const int s, const QAV& v) {
  assert(v.is_num);
  return qconst(s * v.num, v.denom);
}
static inline
QAV qconst(const int& v) {
  return {true, "", v, 1};
}
static inline
QAV qvar(const std::string& v) {
  return {false, v};
}

struct QTerm;
static inline
std::ostream& operator<<(std::ostream& out, const QTerm& c);

struct QTerm {
  vector<QAV> vals;

  void move_constants_to_front() {
    sort(begin(vals), end(vals), [](const QAV& a, const QAV& b) {
        return a.is_num && !b.is_num;
        });
  }

  void fold_ints() {
    vector<QAV> non_ints;
    int i = 1;
    for (auto v : vals) {
      if (v.is_num && v.is_whole()) {
        i *= v.num;
      } else {
        non_ints.push_back(v);
      }
    }

    vals = non_ints;
    vals.push_back(qconst(i));
  }


  vector<QAV> vars() const {
    vector<QAV> vs;
    for (auto t : vals) {
      if (t.is_var()) {
        vs.push_back(t);
      }
    }
    return vs;
  }

  QTerm scale(const int val) {
    QTerm cpy = *this;
    cpy.vals.push_back(qconst(val));
    return cpy;
  }

  bool contains_val(const QAV& target) {
    for (auto v : vals) {
      if (v == target) {
        return true;
      }
    }
    return false;
  }

  int to_int() const {
    assert(is_constant());
    if (vals.size() != 1) {
      cout << *this << endl;
    }
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
    //cout << "Simplifying: " << *this << endl;

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

    if (abs(n) == 1 && abs(d) == 1) {
      n = n / d;
      d = 1;
    } else if (n == -1) {
      n = -n;
      d = -d;
    }

    if (n != 1) {
      //cout << "n = " << n << endl;
      //cout << "d = " << d << endl;
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
      //cout << "No values after simplifying" << endl;
      vals = {qconst(1)};
    }

    //cout << "After folding constants: " << *this << endl;

    for (auto v : vals) {
      if (v.is_zero()) {
        vals = {qconst(0)};
      }
    }

    fold_ints();
  }

  void replace(const QAV& target, const QAV& replacement) {
    for (auto& v : vals) {
      if (v == target) {
        v = replacement;
      }
    }
  }

};

static inline
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

static inline
QTerm qterm(const QAV& r) {
  return QTerm{{qconst(1), r}};
}

static inline
QTerm qterm(const string& r) {
  return qterm(qvar(r));
}

static inline
QTerm qterm(const int& r) {
  return qterm(qconst(r));
}

static inline
QTerm qterm(const QAV& l, const QAV& r) {
  return {{l, r}};
}

static inline
QTerm qterm(const int& l, const QAV& r) {
  return {{qconst(l), r}};
}

static inline
QTerm qterm(const int& l, const string& r) {
  return {{qconst(l), qvar(r)}};
}

static inline
QTerm qterm(const QAV& a, const QAV& l, const QAV& r) {
  return {{a, l, r}};
}

static inline
QTerm times(const int s, const QTerm& v) {
  QTerm t = v;
  t.vals.push_back(qconst(s));
  t.simplify();
  return t;
}

struct QExpr;

static inline
std::ostream& operator<<(std::ostream& out, const QExpr& c);

struct QExpr {
  vector<QTerm> terms;

  int linear_coeff_int() const {
    auto ct = const_term();
    ct.simplify();
    int c = ct.to_int();

    return const_eval_at(1) - c;
  }

  int const_eval_at(const int val) const {
    vector<QAV> vs = vars();
    assert(vs.size() < 2);

    if (vs.size() == 0) {
      auto ct = const_term();
      ct.simplify();
      return ct.to_int();
    }

    QExpr cpy = *this;

    cpy.replace(pick(vs), qconst(val));
    cpy.simplify();
    cpy.simplify();

    //cout << "After simplification: " << cpy << endl;
    //cout << "# of terms: " << cpy.terms.size() << endl;

    assert(cpy.terms.size() < 2);

    return cpy.const_term().to_int();
  }

  vector<QAV> vars() const {
    vector<QAV> vs;
    for (auto t : terms) {
      concat(vs, t.vars());
    }
    return vs;
  }

  void fold_constant_terms() {
    int constant = 0;
    vector<QTerm> non_const;

    for (auto t : terms) {
      if (t.is_constant()) {
        constant += t.to_int();
      } else {
        non_const.push_back(t);
      }
    }

    terms = {qterm(constant)};
    concat(terms, non_const);
  }

  void remove_zero_terms() {
    vector<QTerm> non_zero;
    for (auto t : terms) {
      if (!t.is_zero()) {
        non_zero.push_back(t);
      }
    }

    if (non_zero.size() == 0) {
      terms = {qterm(0)};
    } else {
      terms = non_zero;
    }
  }

  bool contains_val(const QAV& target) {
    for (auto t : terms) {
      if (t.contains_val(target)) {
        return true;
      }
    }
    return false;
  }

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

    //cout << "After simplifying individual terms: " << *this << endl;

    fold_constant_terms();

    //cout << "After folding constant terms: " << *this << endl;

    remove_zero_terms();

    //cout << "After remvoing zero terms: " << *this << endl;

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

static inline
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

static inline
QExpr qexpr(const int v) {
  return QExpr{{qterm(qconst(v))}};
}

static inline
QExpr qexpr(const string& r) {
  return QExpr{{qterm(qvar(r))}};
}

static inline
QExpr qexpr(const QAV& v) {
  return QExpr{{qterm(v)}};
}

static inline
QExpr qexpr(const QTerm& l) {
  return QExpr{{l}};
}

static inline
QExpr qexpr(const QTerm& l, const QAV& r) {
  return QExpr{{l, qterm(r)}};
}

static inline
QExpr qexpr(const QAV& l, const QAV& r) {
  return QExpr{{qterm(l), qterm(r)}};
}

static inline
QExpr qexpr(const QAV& l, const QTerm& r) {
  return QExpr{{qterm(l), r}};
}

static inline
QExpr qexpr(const QTerm& l, const int r) {
  return QExpr{{l, qterm(r)}};
}

static inline
QExpr qexpr(const QTerm& l, const QTerm& r) {
  return QExpr{{l, r}};
}

static inline
QExpr qexpr(const QTerm& a, const QTerm& l, const QTerm& r) {
  return QExpr{{a, l, r}};
}

static inline
string isl_str(QTerm& v) {
  v.simplify();
  v.move_constants_to_front();

  vector<string> tstrings;
  vector<string> divs;
  for (QAV val : v.vals) {
    if (!val.is_num || val.is_whole()) {
      ostringstream ss;
      ss << val;
      tstrings.push_back(ss.str());
    } else {
      divs.push_back(to_string(val.denom));
    }
  }
  string s = sep_list(tstrings, "", "", "*");

  if (divs.size() == 0) {
    return s;
  }

  assert(divs.size() == 1);
  return "floor(" + s + " / " + divs.at(0) + ")";
  //vector<string> cfs{"(" + s + ")"};
  //concat(cfs, divs);
  //return sep_list(cfs, "", "", " / ");
}

static inline
string isl_str(QExpr& v) {
  vector<string> tstrings;
  for (auto t : v.terms) {
    t.simplify();
    tstrings.push_back(isl_str(t));
  }
  return sep_list(tstrings, "", "", " + ");
}


struct QConstraint {
  bool is_eq;
  QExpr lhs;
  QExpr rhs;

  vector<QAV> vars() const {
    vector<QAV> vs;
    concat(vs, lhs.vars());
    concat(vs, rhs.vars());
    return vs;
  }

  void scale(const int v) {
    lhs.scale(v);
    rhs.scale(v);
  }

  void simplify() {
    lhs.simplify();
    rhs.simplify();
  }

  bool contains_val(const QAV& target) {
    return lhs.contains_val(target) ||
      rhs.contains_val(target);
  }

  void replace(const QAV& target, const QAV& replacement) {
    lhs.replace(target, replacement);
    rhs.replace(target, replacement);
  }
};
static inline
QConstraint eq(const QExpr& a, const QExpr& b) {
  return QConstraint{true, a, b};
}

static inline
QConstraint eq(const QExpr& a, const int b) {
  return QConstraint{true, (a), qexpr(b)};
}

static inline
QConstraint eq(const string& a, const int b) {
  return QConstraint{true, qexpr(a), qexpr(b)};
}

static inline
QConstraint eq(const string& a, const string& b) {
  return QConstraint{true, qexpr(a), qexpr(b)};
}

static inline
QConstraint geq(const QExpr& a, const QExpr& b) {
  return QConstraint{false, a, b};
}

static inline
QConstraint geq(const string& a, const QExpr& b) {
  return QConstraint{false, qexpr(a), b};
}

static inline
QConstraint geq(const QExpr& a, const string& b) {
  return QConstraint{false, a, qexpr(b)};
}

static inline
QConstraint geq(const string& a, const int b) {
  return QConstraint{false, qexpr(a), qexpr(b)};
}

static inline
QConstraint geq(const string& a, const string& b) {
  return QConstraint{false, qexpr(a), qexpr(b)};
}

static inline
string isl_str(QConstraint& v) {
  return isl_str(v.lhs) + (v.is_eq ? " = " : " >= ") + isl_str(v.rhs);
}

static inline
string isl_str_eq(QConstraint& v) {
  return isl_str(v.lhs) + " = " + isl_str(v.rhs);
}

static inline
std::ostream& operator<<(std::ostream& out, const QConstraint& c) {
  out << c.lhs << (c.is_eq ? " = " : " >= ") << c.rhs;
  return out;
}


static inline
QTerm parse_qterm(const std::string& str);

static inline
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

static inline
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

static inline
QTerm offset(QExpr& e) {
  assert(e.terms.size() == 2);

  e.simplify();
  QTerm offset = e.const_term();
  cout << "Offset = " << offset << endl;
  offset.simplify();
  cout << "Offset after simplification: " << offset << endl;
  return offset;
}

static inline
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

static inline
vector<QAV> strides(vector<QExpr>& mins, vector<QExpr>& maxs) {
  assert(mins.size() == maxs.size());

  vector<QAV> strides;
  for (auto m : mins) {
    QAV s = stride(m);
    strides.push_back(s);
  }
  return strides;
}

static inline
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

static inline
QExpr concat_terms(const QExpr& a, const QExpr& b) {
  QExpr expr;
  for (auto t : a.terms) {
    expr.terms.push_back(t);
  }
  for (auto t : b.terms) {
    expr.terms.push_back(t);
  }
  return expr;
}

static inline
QExpr sub(const string& a, const string& b) {
  return qexpr(qterm(a), qterm(b).scale(-1));
}

static inline
QExpr operator*(const QExpr& a, const QExpr& b) {
  QExpr prod;
  for (auto t : a.terms) {
    vector<QTerm> bterms = b.terms;
    for (QTerm& ot : bterms) {
      concat(ot.vals, t.vals);
      prod.terms.push_back(ot);
    }
  }
  return prod;
}

static inline
QExpr operator+(const QExpr& a, const QExpr& b) {
  QExpr bc = b;
  return concat_terms(a, bc);
}

static inline
QExpr operator-(const QExpr& a, const QExpr& b) {
  QExpr bc = b;
  bc.scale(-1);
  return concat_terms(a, bc);
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

  Box(umap* opt_sched) {
  //cout << tab(1) << "lexmin: " << str(lexmin(compute_domain(name))) << endl;
  //cout << tab(1) << "lexmax: " << str(lexmax(compute_domain(name))) << endl;

    auto rng = range(opt_sched);
    int dim = parse_pt(pick(get_points(lexmin(rng)))).size();
    vector<int> max(dim, 0), min(dim, 0);
    for (auto s : get_sets(rng)) {
      for (auto i = 0; i < get_dim(s); i ++) {
        max.at(i) = std::max(max.at(i), get_dim_max(s, i));
        min.at(i) = std::min(min.at(i), get_dim_min(s, i));
      }
    }

    assert(min.size() == max.size());

    for (size_t i = 0; i < min.size(); i++) {
      intervals.push_back({min.at(i), max.at(i)});
    }
  }

  int cardinality() const {
    int c = 1;
    for (int i = 0; i < dimension(); i++) {
      c *= length(i);
    }

    return c;
  }

  int cardinality(int dims) const {
    int c = 1;
    assert(dims <= dimension());
    for (int i = 0; i < dims; i++) {
      c *= length(i);
    }

    return c;
  }

  int r_cardinality(int dims) const {
    int c = 1;
    assert(dims <= dimension());
    for (int i = 0; i < dims; i ++) {
      c *= length(dimension() - 1 - i);
    }
    return c;
  }

  int min(const int dim) const { return intervals.at(dim).min; }
  int max(const int dim) const { return intervals.at(dim).max; }

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
    if (unroll_factor == 1) {
      return *this;
    }

    Box padded;
    int r = 0;
    int old_min = min(0);
    int old_max = max(0);

    for (auto i : intervals) {
      if (r != 0) {
        padded.intervals.push_back({i.min, i.max});
      } else {
        padded.intervals.push_back({i.min, i.max});
        while (padded.min(0) % unroll_factor != 0) {
          padded.intervals[0].min = padded.min(0) - 1;
        }

        while ((padded.max(0) % unroll_factor) != (unroll_factor - 1)) {
          padded.intervals[0].max = padded.max(0) + 1;
          cout << "max = " << padded.intervals[0].max << endl;
        }

        //int range = length(0);
        //cout << "Length: " << range << endl;
        //if (range % unroll_factor != 0) {
          //int new_range = range + (unroll_factor - (range % unroll_factor));
          //cout << "new_range = " << new_range << endl;
          //int new_max = i.min + new_range - 1;

          //cout << "new_max = " << new_max << endl;

          //padded.intervals.push_back({i.min, new_max});
        //} else {
          //padded.intervals.push_back({i.min, i.max});
        //}
      }
      r++;
    }
    cout << "New length: " << padded.length(0) << ", " << padded.min(0) << ", " << padded.max(0) << endl;

    assert(padded.min(0) % unroll_factor == 0);
    assert((padded.max(0) + 1) % unroll_factor == 0);
    assert(padded.length(0) % unroll_factor == 0);

    assert(padded.min(0) <= old_min);
    assert(padded.max(0) >= old_max);
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

  int dimension() const {
    return intervals.size();
  }

};

static inline
bool operator==(const Box& a, const Box& b) {
  if (a.dimension() != b.dimension()) {
    return false;
  }
  for (int i = 0; i < a.dimension(); i++) {
    if (a.intervals.at(i).min !=
        b.intervals.at(i).min) {
      return false;
    }
    if (a.intervals.at(i).max !=
        b.intervals.at(i).max) {
      return false;
    }
  }
  return true;
}

static inline
std::ostream& operator<<(std::ostream& out, const Box& b) {
  vector<string> ranges;
  for (auto range : b.intervals) {
    ranges.push_back("[" + to_string(range.min) + ", " + to_string(range.max) + "]");
  }
  out << sep_list(ranges, "{", "}", ", ");
  return out;
}

static inline
Box unn(const Box& l, const Box& r) {
  //cout << "l intervals = " << l.intervals.size() << endl;
  //cout << "r intervals = " << r.intervals.size() << endl;

  assert(l.intervals.size() == r.intervals.size());
  Box un;
  for (size_t dim = 0; dim < l.intervals.size(); dim++) {
    un.intervals.push_back({min(l.intervals.at(dim).min, r.intervals.at(dim).min), max(l.intervals.at(dim).max, r.intervals.at(dim).max)});
  }

  //cout << "Got union" << endl;
  return un;
}


std::ostream& operator<<(std::ostream& out, const Box& b);

static inline
vector<string> ifconds(vector<string>& vars, Box& range, vector<int>& rates, vector<int>& delays) {
  vector<string> conds;
  int d = 0;
  for (auto v : vars) {
    auto iv = range.intervals.at(d);
    conds.push_back("(" + str(iv.min) + " <= " + v + " && " + v + " <= " + str(iv.max) + ")");

    assert(rates.at(d) != 0);

    auto delay = delays.at(d);
    conds.push_back("((" + v + " - " + str(delay) + ")" + " % " + str(rates.at(d)) + " == 0)");
    d++;
  }

  return conds;
}

void print_while_loop(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds);

void print_body(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds);

static inline
void print_loops(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds) {

  int ndims = pick(index_bounds).second.intervals.size();

  int min = whole_dom.intervals.at(level).min;
  int max = whole_dom.intervals.at(level).max;

  string ivar = "c" + str(level);
  out << tab(level) << "for (int " << ivar << " = " << min << "; " << ivar << " <= " << max << "; " << ivar << "++) {" << endl;
  int next_level = level + 1;
  if (next_level == ndims) {
    print_body(level, out, op_order, whole_dom, index_bounds, scheds);

  } else {
    print_loops(level + 1, out, op_order, whole_dom, index_bounds, scheds);
  }
  out << tab(level) << "}" << endl;
}

static inline
std::string box_codegen(CodegenOptions& options,
    const vector<string>& op_order,
    map<string, vector<QExpr> >& scheds,
    map<string, Box>& compute_domains) {

  assert(compute_domains.size() > 0);

  ostringstream ss;
  ss << tab(1) << "// Schedules..." << endl;
  for (auto s : scheds) {
    vector<string> qstrings;
    for (auto q : s.second) {
      ostringstream qs;
      qs << q;
      qstrings.push_back(qs.str());
    }
    string schedstr = sep_list(qstrings, "[", "]", ",");

    ss << tab(2) <<  "// " << s.first << " -> " << schedstr << endl;
  }

  int ndims = pick(compute_domains).second.intervals.size();

  map<string, Box> index_bounds;
  Box whole_dom(ndims);
  for (auto f : compute_domains) {

    auto dom = f.second;
    cout << "Processing " << f.first << endl;

    cout << "Scheds..." << endl;
    for (auto f : scheds) {
      cout << tab(1) << f.first << endl;
    }

    assert(contains_key(f.first, scheds));

    Box bounds;
    for (int d = 0; d < ndims; d++) {

      int domain_min = dom.intervals.at(d).min;
      int domain_max = dom.intervals.at(d).max;

      cout << "Domain min: " << domain_min << endl;
      cout << "Domain max: " << domain_max << endl;

      // Note: The schedule is from innermost to outermost
      int sched_min = scheds.at(f.first).at(ndims - d - 1).const_eval_at(domain_min);
      int sched_max = scheds.at(f.first).at(ndims - d - 1).const_eval_at(domain_max);

      bounds.intervals.push_back({sched_min, sched_max});
    }
    index_bounds[f.first] = bounds;
    whole_dom = unn(whole_dom, bounds);
  }

  auto& bnds = whole_dom.intervals;
  reverse(bnds);
  cout << "Whole domain: " << whole_dom << endl;
  //assert(false);
  //ss << "#ifdef __VIVADO_SYNTH__" << endl;
  //ss << "#pragma HLS inline recursive" << endl;
  //ss << "#endif // __VIVADO_SYNTH__" << endl << endl;
  print_loops(0, ss, op_order, whole_dom, index_bounds, scheds);
  //print_while_loop(0, ss, op_order, whole_dom, index_bounds, scheds);

  return ss.str();
}

static inline
QExpr qe(isl_val* v) {
  if (isl_val_is_int(v)) {
    return qexpr(safe_stoi(str(v)));
  }

  assert(isl_val_is_rat(v));

  return qexpr(qconst(isl_val_get_num_si(v), isl_val_get_den_si(v)));
}

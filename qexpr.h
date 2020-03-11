#pragma once
#include <stack>
#include <regex>
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

#include "utils.h"

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
    remove_zero_terms();
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

QExpr qexpr(const string& r) {
  return QExpr{{qterm(qvar(r))}};
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


struct QConstraint {
  bool is_eq;
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

  bool contains_val(const QAV& target) {
    return lhs.contains_val(target) ||
      rhs.contains_val(target);
  }

  void replace(const QAV& target, const QAV& replacement) {
    lhs.replace(target, replacement);
    rhs.replace(target, replacement);
  }
};

QConstraint eq(const QExpr& a, const QExpr& b) {
  return QConstraint{true, a, b};
}

QConstraint eq(const string& a, const int b) {
  return QConstraint{true, qexpr(a), qexpr(b)};
}

QConstraint eq(const string& a, const string& b) {
  return QConstraint{true, qexpr(a), qexpr(b)};
}

QConstraint geq(const QExpr& a, const QExpr& b) {
  return QConstraint{false, a, b};
}

QConstraint geq(const string& a, const int b) {
  return QConstraint{false, qexpr(a), qexpr(b)};
}

string isl_str(QConstraint& v) {
  return isl_str(v.lhs) + (v.is_eq ? " = " : " >= ") + isl_str(v.rhs);
}


string isl_str_eq(QConstraint& v) {
  return isl_str(v.lhs) + " = " + isl_str(v.rhs);
}
std::ostream& operator<<(std::ostream& out, const QConstraint& c) {
  out << c.lhs << (c.is_eq ? " = " : " >= ") << c.rhs;
  return out;
}


QTerm parse_qterm(const std::string& str);

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

QExpr sub(const string& a, const string& b) {
  return qexpr(qterm(a), qterm(b).scale(-1));
}


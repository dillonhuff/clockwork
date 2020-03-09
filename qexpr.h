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

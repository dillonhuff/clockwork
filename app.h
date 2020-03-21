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
  string compute_name;
  vector<Window> srcs;
  Window provided;

  vector<Update> updates;

  void add_init_update(const string& name, const string& compute, const vector<Window>& args) {
    string update_name = provided.name + "_update_" + str(updates.size());
    updates.push_back({false, update_name, provided, "", compute, {}, args});
  }

};


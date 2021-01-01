#pragma once

#include <string>
#include <set>
#include <vector>

#include "utils.h"

using namespace std;

struct Token {
  string txt;

  Token() : txt("") {}
  Token(const std::string& txt_) : txt(txt_) {}
};

static inline
ostream& operator<<(ostream& out, const Token& e) {
  out << e.txt;
  return out;
}

enum num_type {
  NUM_TYPE_FLOAT,
  NUM_TYPE_UNSIGNED,
  NUM_TYPE_SIGNED
};

struct Expr {
  int width;
  num_type num_tp;

  virtual bool is_function_call() const { return false; }
  virtual bool is_binop() const { return false; }
  virtual bool is_int_const() const { return false; }
  virtual bool is_float_const() const { return false; }
  virtual std::set<Expr*> children() const { return {}; }
};

struct FloatConst : public Expr {
  string val;

  FloatConst(const std::string& val_) : val(val_) {}
  FloatConst() : val("") {}

  virtual bool is_float_const() const { return true; }
};

struct IntConst : public Expr {
  string val;

  IntConst(const std::string& val_) : val(val_) {}
  IntConst() : val("") {}

  virtual bool is_int_const() const { return true; }

  int int_value() const { return safe_stoi(val); }

};

struct FunctionCall : public Expr {
  string name;
  vector<Expr*> args;

  FunctionCall(const string& n_, const vector<Expr*> args_) :
    name(n_), args(args_) {}

  virtual bool is_function_call() const { return true; }
  virtual std::set<Expr*> children() const { return std::set<Expr*>(begin(args), end(args)); }
};

struct Binop : public Expr {
  string op;
  Expr* l;
  Expr* r;

  Binop(const string& op_, Expr* l_, Expr* r_) :
    op(op_), l(l_), r(r_) {}

  virtual bool is_binop() const { return true; }

  virtual std::set<Expr*> children() const { return {l, r}; }
}; 

struct Unop : public Expr {
  string op;
  Expr* arg;
  virtual std::set<Expr*> children() const { return {arg}; }
};

static inline
ostream& operator<<(ostream& out, const Expr& e) {
  out << "<NO EXPR PRINT>";
  return out;
}

template<typename F>
void visit_function_calls(Expr* e, F f) {
  if (e->is_function_call()) {
    f((FunctionCall*)e);
  }

  for (auto v : e->children()) {
    visit_function_calls(v, f);
  }
}

static inline
vector<int> get_offset(FunctionCall* off) {
  vector<int> offset;
  for (auto arg : off->args) {
    assert(arg->is_int_const());
    offset.push_back(((IntConst*) arg)->int_value());
  }
  return offset;
}

static inline
string soda_compute_string(const int pixel_width, Expr* def) {
  if (def == nullptr) {
    return "<NULLPTR FOR SODA COMPUTE STRING>";
  }

  if (def->is_int_const()) {
    return ((IntConst*)def)->val;
  } else if (def->is_binop()) {
    auto op = (Binop*) def;
    return parens(soda_compute_string(pixel_width, op->l) + " " + op->op + " " + soda_compute_string(pixel_width, op->r));
  } else if (def->is_float_const()) {
    auto fv = static_cast<FloatConst*>(def);
    return fv->val + "f";
  } else {
    assert(def->is_function_call());
    auto call = (FunctionCall*) def;

    vector<string> args;
    for (auto a : call->args) {
      args.push_back(soda_compute_string(pixel_width, a));
    }
    return call->name + sep_list(args, "(", ")", ", ");
  }

  assert(false);
  return "ERROR NO COMPUTE FOR EXPRESSION";
}


static inline
string compute_string(const num_type tp,
    const int pixel_width,
    Expr* def,
    map<string, vector<vector<int> > >& offset_map) {
  if (def->is_int_const()) {
    string val = (((IntConst*) def)->val);
    string res = "hw_uint<" + str(pixel_width) + ">(" + val + ")";
    if (tp == NUM_TYPE_FLOAT) {
      return "int_to_float(" + res + ")";
    } else {
      //return res;
      return val;
    }
  } else if (def->is_binop()) {
    auto op = (Binop*) def;
    return parens(compute_string(tp, pixel_width, op->l, offset_map) + " " + op->op + " " + compute_string(tp, pixel_width, op->r, offset_map));
  } else if (def->is_float_const()) {
    auto fv = static_cast<FloatConst*>(def);
    return "((float)" + fv->val +")";
  } else {
    assert(def->is_function_call());
    auto call = (FunctionCall*) def;

    if (contains_key(call->name, offset_map)) {

      auto offsets = get_offset(call);
      int offset = 0;
      bool found_offset = false;
      for (auto off : offset_map[call->name]) {
        if (off == offsets) {
          found_offset = true;
          break;
        }
        offset++;
      }
      assert(found_offset);
      string res = call->name + ".get<" + str(pixel_width) + ", " + str(offset) + ">()";
      if (tp == NUM_TYPE_FLOAT) {
        return "to_float(" + res + ")";
      } else {
        return "uint" + str(pixel_width) + "_t" + parens(res);
      }
    } else {
    
      vector<string> argstrings;
      for (auto a : call->args) {
        argstrings.push_back(compute_string(
              tp,
              pixel_width,
              a,
              offset_map));
      }
      return call->name + sep_list(argstrings, "(", ")", ", ");
    }
  }

  assert(false);
  return "ERROR NO COMPUTE FOR EXPRESSION";
}

static inline
Expr* func(const std::string& name, const vector<Expr*>& args) {
  return new FunctionCall(name, args);
}

static inline
Expr* func(const std::string& name, Expr* arg) {
  return func(name, vector<Expr*>{arg});
}

static inline
Expr* v3(const std::string& name,
    const int a,
    const int b,
    const int c) {

  auto astr = str(a);
  auto bstr = str(b);
  auto cstr = str(c);
  return new FunctionCall(name, {new IntConst(astr),
      new IntConst(bstr),
      new IntConst(cstr)});
}

static inline
Expr* v3(const std::string& name) {
  return v3(name, 0, 0, 0);
}

static inline
Expr* v(const std::string& name,
    const int a,
    const int b,
    const int c) {
  return v3(name, a, b, c);
}

static inline
Expr* v(const std::string& name,
    const int a,
    const int b) {

  auto astr = str(a);
  auto bstr = str(b);
  return new FunctionCall(name, {new IntConst(astr),
      new IntConst(bstr)});
}

static inline
Expr* fc(const std::string& value) {
  return new FloatConst(value);
}

static inline
Expr* v(const std::string& name) {
  return v(name, 0, 0);
}

static inline
Expr* mul(Expr* const a, Expr* const b) {
  return new Binop("*", a, b);
}

static inline
Expr* mul(const std::string& a, const std::string& b) {
  return mul(v(a), v(b));
}

static inline
Expr* mul(Expr* const a, const int v) {
  return new Binop("*", a, new IntConst(str(v)));
}

static inline
Expr* add(const int a, Expr* const b) {
  return new Binop("+", new IntConst(str(a)), b);
}

static inline
Expr* add(Expr* const a, Expr* const b) {
  return new Binop("+", a, b);
}

static inline
Expr* add(const std::string& a, const std::string& b) {
  return add(v(a), v(b));
}

static inline
Expr* add(Expr* const a, const int b) {
  return new Binop("+", a, new IntConst(str(b)));
}

static inline
Expr* sub(Expr* const a, Expr* const b) {
  return new Binop("-", a, b);
}

static inline
Expr* div(Expr* const a, Expr* const b) {
  return new Binop("/", a, b);
}

static inline
Expr* div(Expr* const a, const int v) {
  return div(a, new IntConst(str(v)));
}

Expr* add(vector<Expr*> args);

static inline
Expr* add(Expr* const a, Expr* const b, const int c) {
  return add({a, b, new IntConst(str(c))});
}

static inline
Expr* add(Expr* const a, Expr* const b, Expr* c) {
  return add({a, b, c});
}

static inline
Expr* square(Expr* a) {
  return mul(a, a);
}

static inline
Expr* square(const string& a) {
  return square(v(a));
}

static inline
Expr* dbl(Expr* const a) {
  return add(a, a);
}

static inline
Expr* dbl(const string& a) {
  return add(v(a), v(a));
}

static inline
Expr* sq(Expr* a) {
  return square(a);
}

static inline
Expr* sq(const std::string& a) {
  return sq(v(a));
}

static inline
Expr* sq3(const std::string& a) {
  return sq(v(a, 0, 0, 0));
}

static inline
Expr* sub(const int v, Expr* a) {
  return sub(new IntConst(str(v)), a);
}

static inline
Expr* sub(Expr* a, const int v) {
  return sub(a, new IntConst(str(v)));
}

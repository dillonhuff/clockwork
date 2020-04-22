#pragma once


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


struct Expr {
  vector<Token> tokens;

  virtual bool is_function_call() const { return false; }
  virtual bool is_binop() const { return false; }
  virtual bool is_int_const() const { return false; }
  virtual set<Expr*> children() const { return {}; }
};

struct FloatConst : public Expr {
  bool neg;
  string l;
  string r;
};

struct IntConst : public Expr {
  string val;

  IntConst(std::string& val_) : val(val_) {}
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
  virtual set<Expr*> children() const { return set<Expr*>(begin(args), end(args)); }
};

struct Binop : public Expr {
  string op;
  Expr* l;
  Expr* r;

  Binop(const string& op_, Expr* l_, Expr* r_) :
    op(op_), l(l_), r(r_) {}

  virtual bool is_binop() const { return true; }

  virtual set<Expr*> children() const { return {l, r}; }
}; 

struct Unop : public Expr {
  string op;
  Expr* arg;
  virtual set<Expr*> children() const { return {arg}; }
};

static inline
ostream& operator<<(ostream& out, const Expr& e) {
  out << comma_list(e.tokens);
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
string compute_string(Expr* def, map<string, vector<vector<int> > >& offset_map) {
  if (def->is_int_const()) {
    return ((IntConst*)def)->val;
  } else if (def->is_binop()) {
    auto op = (Binop*) def;
    return parens(compute_string(op->l, offset_map) + " " + op->op + " " + compute_string(op->r, offset_map));
  } else {
    assert(def->is_function_call());
    auto call = (FunctionCall*) def;
    assert(contains_key(call->name, offset_map));

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
    return call->name + ".get<32, " + str(offset) + ">()";
  }

  assert(false);
  return "ERROR NO COMPUTE FOR EXPRESSION";
}

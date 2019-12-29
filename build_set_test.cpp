extern "C" {
#include <isl/id.h>
#include <isl/set.h>
#include <isl/flow.h>
#include <isl/polynomial.h>
#include <isl/union_set.h>
#include <isl/union_map.h>
#include <isl/space.h>
#include <isl/schedule.h>
#include <isl/schedule_node.h>
#include <isl/ast_build.h>
#include <isl/val.h>
#include <isl/ilp.h>
#include <isl_ast_build_expr.h>
#include <isl/options.h>
#include <isl/map.h>
}

#include "barvinok/barvinok.h"

#include <cassert>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

isl_pw_qpolynomial* cpy(isl_pw_qpolynomial* const s) {
  return isl_pw_qpolynomial_copy(s);
}

isl_point* cpy(isl_point* const s) {
  return isl_point_copy(s);
}

isl_space* cpy(isl_space* const s) {
  return isl_space_copy(s);
}

isl_local_space* cpy(isl_local_space* const s) {
  return isl_local_space_copy(s);
}

isl_basic_set* cpy(isl_basic_set* const b) {
  return isl_basic_set_copy(b);
}

isl_set* cpy(isl_set* const b) {
  return isl_set_copy(b);
}

isl_map* cpy(isl_map* const b) {
  return isl_map_copy(b);
}

void print(struct isl_ctx* const ctx, isl_point* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_point(p, cpy(bset));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);

}

void print(struct isl_ctx* const ctx, isl_set* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_set(p, cpy(bset));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);

}
void print(struct isl_ctx* const ctx, isl_basic_set* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_basic_set(p, cpy(bset));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);

}

void print(struct isl_ctx* const ctx, isl_pw_qpolynomial* const m) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_pw_qpolynomial(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);

}

void print(struct isl_ctx* const ctx, isl_map* const m) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_map(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);

}

class UBuffer {
  public:
    struct isl_ctx* ctx;
    isl_space* space;
    isl_space* map_space;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;
    std::map<string, isl_map*> schedule;

    isl_basic_set* build_domain(const std::vector<int>& ranges) {
      assert(ranges.size() % 2 == 0);

      isl_basic_set* bset = isl_basic_set_universe(cpy(space));
      isl_constraint* c;
      isl_local_space* ls = isl_local_space_from_space(space);

      for (size_t i = 0; i < ranges.size(); i += 2) {
        int start = ranges.at(i);
        int end = ranges.at(i + 1);
        int varNum = i / 2;

        c = isl_constraint_alloc_inequality(cpy(ls));
        c = isl_constraint_set_constant_si(c, -start);
        c = isl_constraint_set_coefficient_si(c, isl_dim_set, varNum, 1);
        bset = isl_basic_set_add_constraint(bset, c);

        c = isl_constraint_alloc_inequality(cpy(ls));
        c = isl_constraint_set_constant_si(c, end);
        c = isl_constraint_set_coefficient_si(c, isl_dim_set, varNum, -1);
        bset = isl_basic_set_add_constraint(bset, c);
      }

      return bset;
    }

    isl_map* build_map(const int offset) {
      isl_basic_map* m = isl_basic_map_universe(cpy(map_space));
      isl_local_space* ls = isl_local_space_from_space(map_space);

      int varNum = 0;
      isl_constraint* c = isl_constraint_alloc_equality(cpy(ls));
      c = isl_constraint_set_constant_si(c, offset);
      c = isl_constraint_set_coefficient_si(c, isl_dim_out, varNum, 1);
      c = isl_constraint_set_coefficient_si(c, isl_dim_in, varNum, -1);
      m = isl_basic_map_add_constraint(m, c);

      return isl_map_from_basic_map(m);
    }

    void add_out_port(const std::string& name, const std::vector<int>& ranges) {
      isIn[name] = false;
      domain[name] = isl_set_from_basic_set(build_domain(ranges));
    }

};

int main() {
  struct isl_ctx *ctx;

  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.ctx = ctx;
  buf.space = isl_space_set_alloc(ctx, 0, 1);
  buf.map_space = isl_space_alloc(ctx, 0, 1, 1);

  buf.isIn["in"] = true;
  buf.domain["in"] = isl_set_from_basic_set(buf.build_domain({0, 7}));
  buf.schedule["in"] = buf.build_map(0);
  
  buf.add_out_port("out0", {0, 5});
  buf.schedule["out0"] = buf.build_map(0);
  buf.add_out_port("out1", {1, 6});
  buf.schedule["out1"] = buf.build_map(1);
  buf.add_out_port("out2", {2, 7});
  buf.schedule["out2"] = buf.build_map(2);

  cout << "--- Domains" << endl;
  for (auto d : buf.domain) {
    cout << "Set for: " << d.first << endl;
    print(buf.ctx, d.second);
  }

  cout << "--- Schedules" << endl;
  for (auto d : buf.schedule) {
    cout << "Schedule for: " << d.first << endl;
    print(buf.ctx, d.second);
  }

  cout << "Adding domains to schedules..." << endl;
  for (auto d : buf.schedule) {
    isl_set* s = buf.domain.at(d.first);
    isl_map* m = isl_map_intersect_domain(d.second, s);
    cout << "Schedule with domain for " << d.first << endl;
    print(buf.ctx, m);
    cout << "Cardinality of domain..." << endl;
    print(buf.ctx, isl_set_card(cpy(s)));
  }

  return 0;

  // (x -> x + 0)
  // (x -> x + 1)
  // (x -> x + 2)

  isl_space* space;
  isl_local_space* ls;
  isl_constraint* c;
  isl_basic_set* bset;

  isl_id* space_name = isl_id_alloc(ctx, "Dillon", nullptr);
  space = isl_space_set_alloc(ctx, 0, 2);
  //space = isl_space_add_param_id(cpy(space), space_name);

  bset = isl_basic_set_universe(cpy(space));
  cout << "Universe set: " << endl;
  print(ctx, bset);

  ls = isl_local_space_from_space(space);

  c = isl_constraint_alloc_equality(cpy(ls));
  c = isl_constraint_set_coefficient_si(c, isl_dim_set, 0, -1);
  c = isl_constraint_set_coefficient_si(c, isl_dim_set, 1, 2);
  bset = isl_basic_set_add_constraint(bset, c);

  cout << "After adding constraint: " << endl;
  print(ctx, bset);

  c = isl_constraint_alloc_inequality(cpy(ls));
  c = isl_constraint_set_constant_si(c, -10);
  c = isl_constraint_set_coefficient_si(c, isl_dim_set, 0, 1);
  bset = isl_basic_set_add_constraint(bset, c);

  cout << "After adding > 10: " << endl;
  print(ctx, bset);

  bset = isl_basic_set_project_out(bset, isl_dim_set, 1, 1);

  cout << "After projecting out i1: " << endl;
  print(ctx, bset);

  isl_map* lex_lt = isl_map_lex_lt(cpy(space));
  cout << "Lex lt map for space..." << endl;
  print(ctx, lex_lt);

  auto zr = isl_point_zero(cpy(space));
  auto zero_set = isl_set_from_basic_set(isl_basic_set_from_point(zr));

  isl_set* ltz =
    isl_set_apply(cpy(zero_set), cpy(lex_lt));
  cout << "Points less than zero..." << endl;
  print(ctx, ltz);

  cout << "One point from ltz..." << endl;
  print(ctx, isl_set_sample_point(ltz));

  isl_basic_set_free(bset);
  isl_space_free(space);
  //isl_constraint_free(c);
  isl_local_space_free(ls);

  isl_ctx_free(ctx);

  cout << "Done." << endl;
}

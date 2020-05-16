#pragma once

extern "C" {
#include <isl/id.h>
#include <isl/aff.h>
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

typedef isl_union_map umap;
typedef isl_union_set uset;

#include <vector>
#include <map>
#include <string>

using std::vector;
using std::pair;
using std::map;
using std::string;

std::string name(isl_space* const s);
isl_pw_aff* cpy(isl_pw_aff* const s);
isl_multi_aff* cpy(isl_multi_aff* const s);

isl_constraint* cpy(isl_constraint* const s);

isl_basic_map* cpy(isl_basic_map* const s);
isl_schedule* cpy(isl_schedule* const s);

isl_pw_multi_aff* cpy(isl_pw_multi_aff* const s);

isl_qpolynomial* cpy(isl_qpolynomial* const s);

isl_union_pw_qpolynomial* cpy(isl_union_pw_qpolynomial* const s);

isl_pw_qpolynomial* cpy(isl_pw_qpolynomial* const s);

isl_union_pw_qpolynomial_fold* cpy(isl_union_pw_qpolynomial_fold* const s);

isl_pw_qpolynomial_fold* cpy(isl_pw_qpolynomial_fold* const s);

isl_point* cpy(isl_point* const s);

isl_space* cpy(isl_space* const s);

isl_local_space* cpy(isl_local_space* const s);

isl_basic_set* cpy(isl_basic_set* const b);

isl_set* cpy(isl_set* const b);

isl_union_set* cpy(isl_union_set* const b);

isl_union_map* cpy(isl_union_map* const b);

isl_map* cpy(isl_map* const b);

isl_val* cpy(isl_val* const b);

isl_val* one(isl_ctx* c);
isl_val* negone(isl_ctx* c);
isl_val* zero(isl_ctx* c);
isl_aff* cpy(isl_aff* const b);

isl_local_space* get_local_space(isl_set* const m);
isl_local_space* get_local_space(isl_basic_set* const m);
isl_local_space* get_local_space(isl_aff* const m);
isl_space* get_space(isl_constraint* const m);

isl_space* get_space(isl_union_map* const m);

isl_space* get_space(isl_map* const m);

isl_space* get_space(isl_set* const m);
isl_space* get_space(isl_basic_set* const m);
isl_space* get_space(isl_union_set* const m);
isl_space* get_space(isl_aff* const m);

int get_size(isl_multi_aff* const m);

isl_local_space* local_set_space(isl_ctx* ctx, const int dims);
isl_space* map_space(isl_ctx* ctx, const int in_dims, const int out_dims);
isl_space* set_space(isl_ctx* ctx, const int dims);

int dim(isl_space* const s);

bool empty(isl_basic_set* const s);
bool empty(uset* const s);
bool empty(isl_set* const s);

int num_dims(isl_space* const s);
int num_dims(isl_set* const s);
int num_dims(isl_basic_set* const s);

isl_id* id(isl_ctx* c, const std::string& s);

std::string str(isl_basic_set* const id);
std::string str(isl_basic_map* const id);
std::string str(isl_id* const id);
std::string str(isl_local_space* const id);

std::string domain_name(isl_map* const s);
std::string range_name(isl_map* const s);

std::string domain_name(isl_space* const s);
std::string range_name(isl_space* const s);

std::string domain_name(isl_map* const m);

std::string range_name(isl_map* const m);

isl_map* set_range_name(isl_map* const m, string new_name);

isl_map* add_range_suffix(isl_map* const m, string suffix);


isl_union_set* to_uset(isl_set* const m);
isl_set* to_set(isl_basic_set* const m);

vector<isl_point*> get_points(isl_set* m);

isl_stat get_maps(isl_map* m, void* user);
vector<isl_map*> get_maps(isl_union_map* m);
vector<isl_set*> get_sets(isl_union_set* m);
vector<isl_basic_map*> get_basic_maps(isl_map* m);
vector<isl_basic_set*> get_basic_sets(isl_set* m);

std::string str(umap* const m);

std::string str(isl_pw_multi_aff* const pma);
std::string str(isl_multi_aff* const pma);

std::string str(isl_multi_union_pw_aff* const pma);

vector<vector<int> > get_access_matrix_from_map(isl_map* acc_map);

//TODO: not consider pw affine, should add a condition on the set
isl_stat isl_pw_aff_get_coefficient( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_get_coefficient_matrix( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_get_const( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_get_var_id( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_set_var_name( isl_set *set,  isl_aff *aff, void *user);

isl_map* set_map_dim_name(isl_ctx* ctx, isl_map* m, unsigned pos, const string& name);

isl_map* gen_map_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, string op_name);

unsigned get_in_dim(isl_map* const m);

unsigned get_out_dim(isl_map* const m);

int get_dim_min(isl_set* const m, int pos);


int get_dim_max(isl_set* const m, int pos);

int get_dim_min(isl_map* const m, int pos);

int get_dim_max(isl_map* const m, int pos);


std::string str(isl_map* const m);

isl_map* to_map(isl_union_map* const m);
isl_map* to_map(isl_basic_map* const m);

isl_union_map* to_umap(isl_map* const m);

isl_ctx* ctx(isl_pw_aff* const m);

isl_ctx* ctx(isl_union_set* const m);

isl_ctx* ctx(isl_point* const m);

isl_ctx* ctx(isl_constraint* const m);

isl_ctx* ctx(isl_basic_set* const m);
isl_ctx* ctx(isl_set* const m);

isl_ctx* ctx(isl_space* const m);

isl_ctx* ctx(isl_qpolynomial* const m);


isl_ctx* ctx(isl_union_pw_qpolynomial* const m);

isl_ctx* ctx(isl_aff* const m);

isl_ctx* ctx(isl_val* const m);

isl_ctx* ctx(isl_map* const m);

isl_ctx* ctx(umap* const m);

isl_ctx* ctx(isl_schedule* const m);

isl_ctx* ctx(isl_union_pw_qpolynomial_fold* const m);

isl_ctx* ctx(isl_pw_qpolynomial_fold* const m);

isl_ctx* ctx(isl_pw_qpolynomial* const m);

vector<std::string> collect_sched_vec(isl_set* const bset);
vector<std::string> collect_sched_vec(isl_union_set* const bset);
vector<string> collect_sched_vec(isl_union_map* const um);

umap* pad_one_more_dim_to_sched_map(isl_ctx* ctx, umap* const um, string pad_val);

std::string codegen_c(isl_set* const bset);
std::string codegen_c(isl_union_set* bset);
std::string codegen_c(isl_constraint* const bset);

std::string codegen_c(isl_schedule* const bset);

void print(struct isl_ctx* const ctx, isl_schedule* const bset);

void print(struct isl_ctx* const ctx, isl_qpolynomial* const bset);

std::string str(isl_pw_aff* const bset);


std::string str(isl_point* const bset);

std::string str(isl_schedule* const bset);

std::string str(isl_constraint* const bset);

std::string str(isl_space* const bset);

std::string str(isl_union_pw_qpolynomial* const bset);

std::string str(isl_qpolynomial* const bset);

std::string str(isl_aff* const bset);

std::string codegen_c(isl_union_pw_qpolynomial_fold* const bset);

std::string codegen_c(isl_pw_qpolynomial_fold* const bset);

std::string str(isl_union_pw_qpolynomial_fold* const bset);

std::string str(isl_pw_qpolynomial_fold* const bset);

std::string str(isl_pw_qpolynomial* const bset);
std::string str(isl_val* const bset);
void print(struct isl_ctx* const ctx, isl_val* const bset);

void print(struct isl_ctx* const ctx, isl_space* const bset);
void print(struct isl_ctx* const ctx, isl_pw_multi_aff* const bset);

void print(struct isl_ctx* const ctx, isl_point* const bset);

void print(struct isl_ctx* const ctx, isl_set* const bset);
void print(struct isl_ctx* const ctx, isl_basic_set* const bset);

void print(struct isl_ctx* const ctx, isl_union_pw_qpolynomial* const m);
void print(struct isl_ctx* const ctx, isl_pw_qpolynomial* const m);

void print(struct isl_ctx* const ctx, isl_union_map* const m);

std::string str(isl_union_set* const m);

std::string str(isl_set* const m);
std::string name(isl_set* const m);

void print(struct isl_ctx* const ctx, isl_map* const m);

isl_union_map* inv(isl_union_map* const m0);

isl_set* lexmin(isl_set* const m0);

isl_union_set* lexmin(uset* const m0);
umap* lexmin(umap* const m0);

isl_map* lexmin(isl_map* const m0);

isl_union_set* lexmax(isl_union_set* const m0);

isl_set* lexmax(isl_set* const m0);

isl_point* lexminpt(isl_set* const m0);
isl_point* lexmaxpt(isl_set* const m0);

isl_val* lexminval(isl_set* const m0);
isl_val* lexmaxval(isl_set* const m0);

umap* lexmax(umap* const m0);

isl_map* lexmax(isl_map* const m0);

isl_map* inv(isl_map* const m0);

isl_set* unn(isl_set* const m0, isl_set* const m1);

isl_union_set* unn(isl_union_set* const m0, isl_union_set* const m1);

isl_union_map* unn(isl_union_map* const m0, isl_union_map* const m1);

isl_union_map* get_rel_order(isl_ctx* ctx, isl_union_map* const m0);
isl_stat umap_lex_lt(isl_map* s,  void* user);

isl_map* unn(isl_map* const m0, isl_map* const m1);

isl_basic_set* its(isl_basic_set* const m0, isl_basic_set* const m1);
isl_set* its(isl_set* const m0, isl_set* const m1);

isl_map* its(isl_map* const m0, isl_set* const m1);

isl_union_map* its(isl_map* const m0, isl_union_map* const m1);

isl_map* its(isl_map* const m0, isl_map* const m1);

isl_union_map* its_range(isl_union_map* const m0, isl_union_set* const m1);
isl_map* its_range(isl_map* const m0, isl_set* const m1);

isl_union_set* its(isl_union_set* const m0, isl_union_set* const m1);

isl_union_map* its(isl_union_map* const m0, isl_union_map* const m1);

isl_union_map* its(isl_union_map* const m0, isl_set* const m1);

isl_union_map* its(isl_union_map* const m0, isl_union_set* const m1);

isl_map* lex_gt(isl_map* const m0, isl_map* const m1);

isl_union_map* lex_gt(isl_union_map* const m0, isl_union_map* const m1);

isl_union_map* lex_lt(isl_union_map* const m0, isl_union_map* const m1);

isl_map* lex_lt(isl_map* const m0, isl_map* const m1);

isl_union_map* dot(isl_map* const m0, isl_union_map* const m1);

isl_union_map* dot(isl_union_map* const m0, isl_map* const m1);

isl_map* dot(isl_map* const m0, isl_map* const m1);

isl_union_set* simplify(uset* const m);
isl_union_pw_qpolynomial* coalesce(isl_union_pw_qpolynomial* const m);

isl_map* simplify(isl_map* const m);

umap* simplify(umap* const m);

isl_union_pw_qpolynomial* coalesce(isl_union_pw_qpolynomial* const m);

isl_union_set* coalesce(isl_union_set* const m0);

isl_union_map* coalesce(isl_union_map* const m0);

isl_union_map* dot_domain(isl_union_map* const m0, isl_union_map* const m1);

isl_union_map* dot(isl_union_map* const m0, isl_union_map* const m1);

isl_union_pw_qpolynomial* card(isl_union_set* const m);

isl_union_pw_qpolynomial* card(isl_union_map* const m);

isl_pw_qpolynomial* card(isl_map* const m);

isl_pw_qpolynomial* card(isl_set* const m);

isl_union_set* range(isl_union_map* const m);
isl_union_set* domain(isl_union_map* const m);

int stride_in_dim(isl_set* const s, size_t dim);

isl_set* range(isl_map* const m);

isl_set* domain(isl_map* const m);

isl_bool subset(isl_union_set* const s0, uset* s1);
isl_bool subset(isl_set* const s0, isl_set* s1);

isl_basic_set* domain(isl_basic_map* const m);

std::string codegen_c(isl_union_map* res);

std::string codegen_c(isl_qpolynomial* qp);

std::string codegen_c(isl_union_pw_qpolynomial* pqp);

std::string codegen_c(isl_pw_qpolynomial* pqp);


//add this to the header file
int bnd_int(isl_union_pw_qpolynomial_fold* bound);
int int_lower_bound(isl_union_pw_qpolynomial* range_card);
int int_upper_bound(isl_union_pw_qpolynomial* range_card);

isl_union_pw_qpolynomial* get_out_range(isl_map* m, int dim);

isl_union_pw_qpolynomial_fold* lower_bound(isl_union_pw_qpolynomial* range_card);

isl_union_pw_qpolynomial_fold* upper_bound(isl_union_pw_qpolynomial* range_card);

isl_set* rdset(isl_ctx* ctx, const std::string& str);

umap* rdmap(isl_ctx* ctx, const std::string& str);
isl_aff* rdaff(isl_ctx* ctx, const std::string& str);

isl_point* sample(isl_basic_set* s);
isl_point* sample(isl_set* s);
isl_point* sample(isl_union_set* s);

isl_pw_aff* dim_min(isl_map* const m, const int d);

isl_pw_aff* dim_max(isl_map* const m, const int d);

vector<pair<isl_set*, isl_multi_aff*> > get_pieces(isl_pw_multi_aff* lm);

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_union_pw_qpolynomial* p);

vector<isl_pw_qpolynomial_fold*>
get_polynomial_folds(isl_union_pw_qpolynomial_fold* p);

vector<isl_pw_qpolynomial*>
get_polynomials(isl_union_pw_qpolynomial* p);

vector<isl_constraint*> constraints(isl_set* s);

map<string, string> umap_codegen_c(umap* const um);

isl_set* universe(isl_space* s);
isl_set* add_constraint(isl_set* s, isl_constraint* c);


int num_out_dims(isl_space* const s);
int num_in_dims(isl_space* const s);

int num_in_dims(isl_aff* const s);
int num_div_dims(isl_aff* const s);
int num_out_dims(isl_aff* const s);

int num_out_dims(isl_map* const s);
int num_in_dims(isl_map* const s);

vector<int> parse_pt(isl_point* p);

uset* gist(uset* base, uset* context);
isl_map* project_all_but(isl_map* const dmap, const int d);
isl_set* project_all_but(isl_set* const dmap, const int d);


vector<string> space_var_args(isl_space* s);
vector<string> space_var_decls(isl_space* s);

isl_aff* add(isl_aff* a, isl_aff* b);

isl_val* add(isl_val* a, isl_val* b);
isl_val* sub(isl_val* a, isl_val* b);
isl_val* mul(isl_val* a, isl_val* b);
isl_val* neg(isl_val* a);

int to_int(isl_val* a);

isl_aff* set_coeff(isl_aff* const a, const int pos, isl_val* v);
isl_aff* set_const_coeff(isl_aff* const a, isl_val* v);
isl_val* coeff(isl_aff* const a, const int pos);
isl_val* const_coeff(isl_aff* const a);

int bnd_int(isl_union_pw_qpolynomial_fold* bound);
int int_lower_bound(isl_union_pw_qpolynomial* range_card);
int int_upper_bound(isl_union_pw_qpolynomial* range_card);

int int_coeff(isl_aff* const a, const int pos);
int int_const_coeff(isl_aff* const a);

isl_aff* aff_on_domain(isl_local_space* ls, isl_val* max);

uset* pad_uset(uset* domain);
umap* pad_map(umap* unpadded);

isl_val* coord(isl_point* const p, const int pos);

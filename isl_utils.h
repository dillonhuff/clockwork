#pragma once

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
#include <isl/aff.h>
}

#include "barvinok/barvinok.h"

typedef isl_union_map umap;
typedef isl_union_set uset;

#include <vector>
#include <map>
#include <string>
#include <unordered_set>

using std::vector;
using std::pair;
using std::map;
using std::string;
using std::unordered_set;

std::string dim_name(isl_set* const a, const int d);
std::string dim_name(isl_aff* const a, const int d);

std::string name(isl_space* const s);
std::string name(isl_set* const s);
std::string name(isl_union_set* const s);

isl_pw_aff* cpy(isl_pw_aff* const s);
isl_multi_aff* cpy(isl_multi_aff* const s);

isl_constraint* cpy(isl_constraint* const s);

isl_basic_map* cpy(isl_basic_map* const s);
isl_schedule* cpy(isl_schedule* const s);

isl_pw_multi_aff* cpy(isl_pw_multi_aff* const s);
//isl_union_pw_multi_aff* cpy(isl_union_pw_multi_aff* const s);

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

bool is_zero(isl_val* c);

isl_local_space* get_local_space(isl_set* const m);
isl_local_space* get_local_space(isl_constraint* const m);
isl_local_space* get_local_space(isl_basic_set* const m);
isl_local_space* get_local_space(isl_basic_map* const m);
isl_local_space* get_local_space(isl_aff* const m);
isl_space* get_space(isl_constraint* const m);

isl_space* get_space(isl_union_map* const m);

isl_space* get_space(isl_map* const m);

isl_space* get_space(isl_set* const m);
isl_space* get_space(isl_basic_set* const m);
isl_space* get_space(isl_basic_map* const m);
isl_space* get_space(isl_union_set* const m);
isl_space* get_space(isl_aff* const m);

int get_size(isl_multi_aff* const m);

isl_local_space* local_set_space(isl_ctx* ctx, const int dims);
isl_space* map_space(isl_ctx* ctx, const int in_dims, const int out_dims);
isl_space* set_space(isl_ctx* ctx, const int dims);

int dim(isl_space* const s);

bool equal(isl_space* const l, isl_space* const r);
bool equal(isl_set* const l, isl_set* const r);
bool equal(isl_point* const l, isl_point* const r);
bool equal(isl_map* const l, isl_map* const r);
bool equal(isl_aff* const l, isl_aff* const r);
bool equal(uset* const l, uset* const r);
bool equal(umap* const l, umap* const r);
bool equal_regardless_of_domain(isl_map* const l, isl_map* const r);

bool empty(umap* const s);
bool empty(isl_map* const s);
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

std::string domain_name(isl_basic_map* const s);
std::string range_name(isl_basic_map* const s);

std::string domain_name(isl_space* const s);
std::string range_name(isl_space* const s);

std::string domain_name(umap* const m);

std::string range_name(isl_map* const m);

isl_map* set_range_name(isl_map* const m, string new_name);

isl_map* set_domain_name(isl_map* const m, string new_name);
umap* set_domain_name(umap* const m, string new_name);

isl_map* add_range_suffix(isl_map* const m, string suffix);
isl_map* add_domain_suffix(isl_map* const m, string suffix);
isl_set* add_suffix(isl_set* const m, string suffix);


isl_union_set* to_uset(isl_set* const m);
isl_set* to_set(isl_basic_set* const m);
isl_set* to_set(isl_union_set* const m);
isl_set* to_set(isl_point* const m);

bool all_const(isl_set* s);
vector<isl_point*> get_points(isl_set* m);

isl_stat get_points(isl_set* m, void* user);
vector<isl_point*> get_points(isl_union_set* s);

isl_stat get_maps(isl_map* m, void* user);
vector<isl_map*> get_maps(isl_union_map* m);
map<string, isl_map*> get_maps_in_map(isl_union_map* m);
vector<isl_set*> get_sets(isl_union_set* m);
map<string, isl_set*> get_sets_in_map(isl_union_set* m);
vector<isl_basic_map*> get_basic_maps(isl_map* m);
isl_basic_map* get_basic_map(isl_map* m);
vector<isl_basic_set*> get_basic_sets(isl_set* m);
isl_basic_set* to_bset(isl_set* m);

std::string str(umap* const m);

std::string str(isl_pw_multi_aff* const pma);
std::string str(isl_multi_aff* const pma);

std::string str(isl_union_pw_multi_aff* const pma);
std::string str(isl_multi_union_pw_aff* const pma);

isl_map* linear_address_map(isl_set* s);
isl_map* linear_address_map_lake(isl_set* s, int fetch_width);
isl_map* linear_address_map_lake_SR(isl_set* s, int fetch_width);
isl_map* linear_address_map_lake(isl_set* s);
isl_map* linear_address_map_with_index(isl_set* s, vector<int> index);
isl_map* linear_domain_map_with_index(isl_set* s, unordered_set<int> index);
isl_map* linear_address_map_with_index(isl_set* s, vector<int> index, int fetch_width);

vector<vector<int> > get_access_matrix_from_map(isl_map* acc_map);

//TODO: not consider pw affine, should add a condition on the set
isl_stat isl_pw_aff_get_coefficient( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_get_coefficient_matrix( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_get_const( isl_set *set,  isl_aff *aff, void *user);

isl_stat isl_pw_aff_get_var_id( isl_set *set,  isl_aff *aff, void *user);

void isl_pw_aff_get_var_name( isl_pw_aff *pa, map<string, int> name2idx_related);

isl_stat isl_pw_aff_set_var_name( isl_set *set,  isl_aff *aff, void *user);

isl_map* set_map_dim_name(isl_ctx* ctx, isl_map* m, unsigned pos, const string& name);

isl_map* gen_map_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, string op_name);
isl_map* gen_map_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, string op_name, int vec_dim, int fetch_width);
isl_map* gen_hw_sched_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, string op_name);
isl_map* gen_hw_sched_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, vector<string> var_list, string op_name);
vector<string> get_map_in_dim_id(isl_map* m);
isl_map* check_dim_id(isl_map* m);
string get_in_dim_name(isl_map* m, int i);

unsigned get_dim(isl_set* const s);

unsigned get_dim(isl_union_set* const s);

unsigned get_in_dim(isl_map* const m);

unsigned get_out_dim(isl_map* const m);

int get_dim_min(isl_set* const m, int pos);


int get_dim_max(isl_set* const m, int pos);
int get_dim_extent(isl_set* const m, int pos);

int get_dim_min(isl_map* const m, int pos);

int get_dim_max(isl_map* const m, int pos);


std::string str(isl_map* const m);

isl_map* to_map(isl_union_map* const m);
isl_map* to_map(isl_basic_map* const m);

isl_union_map* to_umap(isl_map* const m);
isl_union_map* to_umap(isl_union_set* const m);

isl_ctx* ctx(isl_pw_aff* const m);

isl_ctx* ctx(isl_union_set* const m);

isl_ctx* ctx(isl_point* const m);

isl_ctx* ctx(isl_constraint* const m);

isl_ctx* ctx(isl_basic_set* const m);
isl_ctx* ctx(isl_basic_map* const m);
isl_ctx* ctx(isl_set* const m);

isl_ctx* ctx(isl_space* const m);

isl_ctx* ctx(isl_qpolynomial* const m);


isl_ctx* ctx(isl_union_pw_qpolynomial* const m);

isl_ctx* ctx(isl_aff* const m);
isl_ctx* ctx(isl_multi_aff* const m);

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
umap* pad_one_more_dim_to_sched_map_innermost(umap* const um, int pad_val);
isl_map* pad_one_more_dim_to_sched_map_innermost(isl_map* const um, int pad_val);
isl_map* add_more_dim_to_map_with_stride(isl_map* const um, int in_dim, int out_dim, int stride, int bd);
isl_map* add_more_dim_to_map_domain_and_range(isl_map* const um, int in_dim, int out_dim, int stride, int bd);
umap* pad_one_more_dim_to_sched_map_with_id(umap* const um, int dim_id, int pad_val);
//umap* pad_one_more_dim_relation_to_map(umap* const um, int in_dim, int out_dim, int stride);
umap* pad_one_more_dim_relation_to_map(umap* const um, vector<int> in_dims, int out_dim, int stride);

std::string codegen_c(isl_set* const bset);
std::string codegen_c(isl_union_set* bset);
std::string codegen_c(isl_constraint* const bset);
std::string codegen_c(isl_multi_aff* const bset);

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

isl_point* lexminpt(uset* const m0);
isl_point* lexminpt(isl_set* const m0);
isl_point* lexmaxpt(uset* const m0);
isl_point* lexmaxpt(isl_set* const m0);

isl_val* lexminval(isl_set* const m0);
isl_val* lexmaxval(isl_set* const m0);

int get_domain_range(isl_set* const dom, int dim);
int get_domain_span_range(isl_map* const m, int dim);
int get_domain_span_range(isl_map* const m, int dim, int out_dim);
pair<int, int> get_domain_merge_dims(isl_map* m );
vector<pair<int, int>> get_all_domain_merge_dims(isl_map* m );
isl_map* merge_domain_dim(isl_map* m);

map<int, int> get_all_domain_pad_dims(isl_map* sched, isl_map* acc)
;
//vectorization transformation
isl_map* get_domain_mask(isl_map* m, int vec_dim);
//For checking loop bound
vector<isl_set*> get_domain_unmask_set(isl_map* m, int vec_dim, vector<int> unmask_dims);

isl_map* get_domain_trans(isl_set* dom, int pos, int fetch_width);
isl_map* get_domain_trans(isl_set* dom, vector<int> stride_vec);
isl_map* get_domain_trans_with_reaccess_mask(isl_set* dom, int pos, int fetch_width);
isl_set* get_domain_trans_sched_domain(isl_set* dom, int pos, int fetch_width);
isl_set* get_domain_trans_sched_domain(isl_map* dom, int pos, int fetch_width);



isl_map* get_div_trans(isl_map* am, map<int, int> split_dims);

isl_map* remove_div(isl_map* m, int out_dim);


isl_aff* remove_div(isl_aff*);
pair<isl_val*, isl_val*> extract_linear_rational_approximation(isl_aff*);
pair<isl_val*, isl_val*> extract_div_free_linear_rational_approximation(isl_aff*);

isl_map* get_set_slice(isl_set* dom, int pos, int fetch_width);
isl_map* get_set_slice(isl_set* dom, int pos, int offset, int fetch_width);
vector<isl_map*> get_vectorize_interpolate(isl_set* dom, int pos, int fetch_width);
int get_inner_most_related_dom_dim(isl_map* m, int dim_id, int fetch_width);
int get_inner_most_related_dom_dim_debug(isl_map* m, int dim_id, int fetch_width);
int get_inner_most_related_dom_dim(isl_map* m);


umap* lexmax(umap* const m0);

isl_map* lexmax(isl_map* const m0);

isl_map* inv(isl_map* const m0);

isl_set* unn(isl_set* const m0, isl_set* const m1);
isl_set* unn(const std::vector<isl_set*>& sets);
uset* unn(const std::vector<uset*>& sets);
umap* unn(const std::vector<umap*>& sets);

isl_union_set* unn(isl_union_set* const m0, isl_union_set* const m1);

isl_union_map* unn(isl_union_map* const m0, isl_union_map* const m1);

isl_union_map* get_rel_order(isl_ctx* ctx, isl_union_map* const m0);
isl_union_map* flatten_umap_domain(isl_ctx* ctx, isl_union_map* const um);
isl_union_map* flatten_umap_domain(isl_ctx* ctx, isl_union_map* const um, map<string, int> ii_map);
isl_union_map* remove_dep_domain_name(umap* um, string name);


umap* flatten_set_trans_with_dim(isl_set* dom, int dim_from_inner);
umap* flatten_set_trans_with_dim_set(isl_set* dom, std::set<int> dim_id);
umap* flatten_umap_domain_with_dim_from_outer(umap* um, int dim_from_outer);
isl_stat flatten_map_domain(isl_map* s, void* user);
umap* flatten_map_domain_with_ii(isl_map* s, int ii);
umap* flatten_map_domain_with_dim(umap* s, int dim_id);
umap* flatten_map_domain_trans(isl_map* s, int ii);
umap* flatten_map_domain_trans_with_dim(isl_map* s, int dim_from_inner);
isl_stat umap_lex_lt(isl_map* s,  void* user);
isl_bool with_domain_name(isl_map* m, void* user);
isl_map* retrive_map_domain_dim(isl_map*, isl_set*);
isl_map* retrive_map_domain_with_dim(isl_map*, isl_set*);

isl_map* get_domain_ii_transform(isl_ctx* ctx, isl_set* const s, int ii);
isl_map* get_shift_map(isl_map* s);
isl_map* double_schedule_rate(isl_map* m, int in_dim, int fetch_width);
isl_map* delay_schedule_inner_most(isl_map* s, int delay);
isl_map* set_schedule_delay(isl_map* m, int delay);
isl_map* delay_schedule_domain_dim(isl_map* s, int dom_dim, int delay);

isl_map* remove_irrelevant_in_dim(isl_map* m);
isl_map* set_in_dim_to_val(isl_map* m, int in_dim, int val);
isl_map* remove_in_dims(isl_map* m, vector<int> remove_dims);

vector<bool> relation_map(isl_map* m);
int get_involve_dim(isl_map* m, int out_dim);
vector<int> out_involve_dim(isl_map* m, int in_dim);
vector<int> in_involve_dim(isl_map* m, int in_dim);
int get_out_padding_dimension(isl_map* m, int in_dim);

isl_map* peel_schedule_domain_dim(isl_map* m, int dom_dim, int delay);
int get_peel_schedule_domain_dim(isl_map* m, int dom_dim);

//some map transformation from reconstruct constraints
int get_pad_remainder(isl_map*, int, int);
isl_map* reset_domain_coeff(isl_map* m, int dom_dim_id, int val);
isl_map* pad_to_domain_map(isl_map* s, int depth);
isl_map* pad_to_domain_ubuf_map(isl_map* s, int dom_dim_id, int depth);
isl_map* add_relation_ubuf_map(isl_map* m, int dom_dim_id, int range_dim_id);
isl_map* pad_to_domain_left_ubuf_map(isl_map* m, int dom_dim_id, int shift_depth);
isl_map* pad_to_domain_begin_ubuf_map(isl_map* m, int dom_dim_id, int shift_depth);
isl_map* shift_domain_map(isl_map* s, vector<int> shift_depth);
isl_map* shift_range_map(isl_map* s, vector<int> shift_depth);
isl_map* assign_domain_to_map(isl_map* s, isl_set* new_domain);
isl_map* delay_sched_map(isl_map* s, isl_map* write_sched);

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

isl_set* simplify(isl_set* const m);
isl_union_set* simplify(uset* const m);

bool single_valued(isl_map* const m0);

isl_map* coalesce_if_single_valued(isl_map* const m0);

isl_union_pw_qpolynomial* coalesce(isl_union_pw_qpolynomial* const m);

isl_map* simplify(isl_map* const m);
isl_map* simplify_expr(isl_map* const m);

umap* simplify(umap* const m);

isl_union_pw_qpolynomial* coalesce(isl_union_pw_qpolynomial* const m);

isl_union_set* coalesce(isl_union_set* const m0);

isl_union_map* coalesce(isl_union_map* const m0);
isl_map* coalesce(isl_map* const m0);

isl_union_map* dot_domain(isl_union_map* const m0, isl_union_map* const m1);

isl_union_map* dot(isl_union_map* const m0, isl_union_map* const m1);

isl_union_pw_qpolynomial* card(isl_union_set* const m);

isl_union_pw_qpolynomial* card(isl_union_map* const m);

isl_pw_qpolynomial* card(isl_map* const m);

isl_pw_qpolynomial* card(isl_set* const m);

isl_union_set* range(isl_union_map* const m);
isl_union_set* domain(isl_union_map* const m);

int stride_in_dim(isl_set* const s, size_t dim);

int stride_in_dim(isl_map* const m, size_t dim);
int stride_in_dim(isl_map* const m, size_t dim, size_t dim_out);
int common_max_stride(isl_map* const m, int out_dim);

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

//TODO: rename it to get in/out card
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

vector<isl_constraint*> constraints(isl_basic_set* s);
vector<isl_constraint*> constraints(isl_set* s);
vector<isl_constraint*> constraints(isl_map* s);

map<string, string> umap_codegen_c(umap* const um);

isl_set* universe(isl_space* s);
isl_set* add_constraint(isl_set* s, isl_constraint* c);


int num_div_dims(isl_local_space* const ls);
int num_out_dims(isl_space* const s);
int num_in_dims(isl_space* const s);
int num_param_dims(isl_space* const s);
int num_in_dims(isl_local_space* const s);
int num_out_dims(isl_local_space* const s);

int num_in_dims(isl_multi_aff* const s);

int num_dims(isl_aff* const s);
int num_in_dims(isl_aff* const s);
int num_div_dims(isl_aff* const s);
int num_out_dims(isl_aff* const s);

int num_out_dims(isl_map* const s);
int num_in_dims(isl_map* const s);

int num_out_dims(isl_basic_map* const s);
int num_in_dims(isl_basic_map* const s);
int num_div_dims(isl_basic_map* const s);
int num_param_dims(isl_basic_map* const s);

int num_div_dims(isl_basic_set* const s);
int num_param_dims(isl_basic_set* const s);

vector<int> parse_pt(isl_point* p);
isl_point* form_pt(vector<int> const_vec);

uset* gist(uset* base, uset* context);
isl_set* gist(isl_set* base, isl_set* context);

isl_map* project_all_but(isl_map* const dmap, const int d);
isl_map* project_all_out_but(isl_map* const dmap, const int d);
isl_map* project_all_in_but(isl_map* const dmap, const int d);
isl_set* project_all_but(isl_set* const dmap, const int d);
isl_set* project_out(isl_set* const dmap, const int d);
isl_map* project_out(isl_map* const dmap, const int d);
isl_map* project_out_domain(isl_map* const dmap, const int d);


vector<string> space_var_args(isl_space* s);
vector<string> space_var_decls(isl_space* s);

isl_aff* add(isl_aff* a, isl_aff* b);
isl_aff* div(isl_aff* a, isl_aff* b);
isl_val* add(isl_val* a, isl_val* b);
isl_val* sub(isl_val* a, isl_val* b);
isl_val* mul(isl_val* a, isl_val* b);
isl_val* neg(isl_val* a);

isl_aff* sub(isl_aff* a, isl_aff* b);
int to_int(isl_val* a);

isl_multi_aff* sub(isl_multi_aff* a, isl_multi_aff* b);

isl_aff* set_coeff(isl_aff* const a, const int pos, isl_val* v);
isl_aff* set_const_coeff(isl_aff* const a, isl_val* v);
isl_val* coeff(isl_aff* const a, const int pos);
isl_val* const_coeff(isl_aff* const a);

int bnd_int(isl_union_pw_qpolynomial_fold* bound);
int int_lower_bound(isl_union_pw_qpolynomial* range_card);
int int_upper_bound(isl_union_pw_qpolynomial* range_card);

isl_val* get_coeff(isl_aff* const a, const int pos);
int int_coeff(isl_aff* const a, const int pos);
int int_const_coeff(isl_aff* const a);

isl_aff* aff_on_domain(isl_local_space* ls, isl_val* max);

isl_set* pad_set(isl_set* s, const int max_dim);
uset* pad_uset(uset* domain);
umap* pad_map(umap* unpadded);
isl_map* pad_map(isl_map* unpadded, const int max_dim);

isl_map* pad_identity_relation_to_map(isl_map* m,
        int in_dim, int out_dim, int lbd, int ubd);
umap* pad_identity_relation_to_umap(umap* m,
        int in_dim, int out_dim, int ldb, int ubd);

isl_val* coord(isl_point* const p, const int pos);

bool lex_lt_pt(isl_point* const l, isl_point* const r);
bool lex_gt_pt(isl_point* const l, isl_point* const r);

isl_val* get_coeff(isl_constraint* c, enum isl_dim_type type, int pos);
isl_val* eval(isl_aff* a, isl_point* p);


isl_union_set* diff(isl_union_set* const m0, isl_union_set* const m1);
isl_set* diff(isl_set* const m0, isl_set* const m1);


isl_union_map* diff(isl_union_map* const m0, isl_union_map* const m1);
isl_map* diff(isl_map* const m0, isl_map* const m1);

isl_aff* get_aff(isl_map* m);
isl_aff* get_aff(isl_union_map* m);
std::vector<isl_aff*> get_aff_vec(isl_map* m);


string str(isl_mat* const ineqmat);

map<int, int> get_dim2denom(isl_map* am);
isl_basic_set* lift_divs(isl_basic_set* bm);
isl_basic_set* flatten_bmap_to_bset(isl_basic_map* bm);
isl_basic_set* negative(isl_basic_set* fs, const int var);
isl_basic_set* positive(isl_basic_set* fs, const int var);
isl_basic_set* zero(isl_basic_set* fs, const int var);


std::string codegen_c(isl_aff* const bset);
isl_set* set_name(isl_set* const m, string new_name);
isl_aff* set_name(isl_aff* const m, string new_name);
isl_multi_aff* set_name(isl_multi_aff* const m, string new_name);
isl_multi_aff* set_in_name(isl_multi_aff* const m, string new_name);

void release(isl_set* s);
void release(isl_map* m);
void release(isl_union_set* s);
void release(isl_union_map* m);
void release(isl_union_pw_qpolynomial* m);
void release(isl_aff* s);

isl_multi_aff* get_multi_aff(isl_union_map* m);
isl_multi_aff* get_multi_aff(isl_map* m);


isl_map* linear_address_map(isl_set* s);
isl_map* linear_schedule(isl_map* sched, vector<int> iis, int offset, bool ignore);
isl_map* to_map(isl_aff* s);
isl_map* to_map(isl_multi_aff* s);
bool no_divs(isl_aff* a);
isl_aff* constant_aff(isl_aff* src, const int val);

isl_aff* add(isl_aff* start_time_aff, const int compute_latency);
isl_aff* sub(isl_aff* start_time_aff, const int compute_latency);
isl_aff* mul(isl_aff* start_time_aff, const int compute_latency);
isl_aff* div(isl_aff* start_time_aff, const int compute_latency);

std::vector<isl_aff*> get_affs(isl_multi_aff* saff);
std::map<int, isl_val*> constant_components(isl_multi_aff* access);
isl_multi_aff* rdmultiaff(isl_ctx* ctx, const std::string& str);
isl_val* constant(isl_aff* a);

umap* to_umap(const vector<isl_aff*>& hs);

isl_aff* flatten(isl_multi_aff* ma, isl_set* dom);

isl_aff* flatten(const std::vector<int>& bank_factors, isl_multi_aff* ma, isl_set* dom);

isl_map* cyclic_function(isl_ctx* ctx, const std::string& name, const std::vector<int>& bank_factors);

vector<int> mins(isl_set* s);
vector<int> maxs(isl_set* s);
vector<int> extents(isl_set* s);
isl_set* project_out_zero_dim(isl_set* s);

bool is_cst(isl_multi_aff* ma);
bool is_cst(isl_aff* aff);

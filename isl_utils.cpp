#include "isl_utils.h"

isl_pw_aff* cpy(isl_pw_aff* const s) {
  return isl_pw_aff_copy(s);
}

isl_constraint* cpy(isl_constraint* const s) {
  return isl_constraint_copy(s);
}

isl_basic_map* cpy(isl_basic_map* const s) {
  return isl_basic_map_copy(s);
}
isl_schedule* cpy(isl_schedule* const s) {
  return isl_schedule_copy(s);
}

isl_pw_multi_aff* cpy(isl_pw_multi_aff* const s) {
  return isl_pw_multi_aff_copy(s);
}

isl_qpolynomial* cpy(isl_qpolynomial* const s) {
  return isl_qpolynomial_copy(s);
}

isl_union_pw_qpolynomial* cpy(isl_union_pw_qpolynomial* const s) {
  return isl_union_pw_qpolynomial_copy(s);
}

isl_pw_qpolynomial* cpy(isl_pw_qpolynomial* const s) {
  return isl_pw_qpolynomial_copy(s);
}

isl_union_pw_qpolynomial_fold* cpy(isl_union_pw_qpolynomial_fold* const s) {
  return isl_union_pw_qpolynomial_fold_copy(s);
}

isl_pw_qpolynomial_fold* cpy(isl_pw_qpolynomial_fold* const s) {
  return isl_pw_qpolynomial_fold_copy(s);
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

isl_union_set* cpy(isl_union_set* const b) {
  return isl_union_set_copy(b);
}

isl_union_map* cpy(isl_union_map* const b) {
  return isl_union_map_copy(b);
}

isl_map* cpy(isl_map* const b) {
  return isl_map_copy(b);
}

isl_val* cpy(isl_val* const b) {
  return isl_val_copy(b);
}

isl_aff* cpy(isl_aff* const b) {
  return isl_aff_copy(b);
}


isl_space* get_space(isl_constraint* const m) {
  return isl_constraint_get_space(m);
}

isl_space* get_space(isl_union_map* const m) {
  return isl_union_map_get_space(m);
}

isl_space* get_space(isl_map* const m) {
  return isl_map_get_space(m);
}

isl_space* get_space(isl_set* const m) {
  return isl_set_get_space(m);
}

int dim(isl_space* const s) {
  assert(false);
  return 0;
}

bool empty(uset* const s) {
  return isl_union_set_is_empty(s);
}

int num_dims(isl_space* const s) {
  assert(isl_space_is_set(s));
  int ndims = isl_space_dim(s, isl_dim_set);
  return ndims;
}

isl_id* id(isl_ctx* c, const std::string& s) {
  return isl_id_alloc(c, s.c_str(), nullptr);
}

std::string str(isl_id* const id) {
  return std::string(isl_id_to_str(id));
}

std::string domain_name(isl_space* const s) {
  return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_in)));
}

std::string range_name(isl_space* const s) {
  return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_out)));
}

isl_union_set* to_uset(isl_set* const m) {
  return isl_union_set_from_set(m);
}

isl_stat get_maps(isl_map* m, void* user) {
  auto* vm = (vector<isl_map*>*) user;
  vm->push_back(m);
  return isl_stat_ok;
}

std::string str(umap* const m) {
  auto ctx = isl_union_map_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_union_map(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
}

std::string str(isl_pw_multi_aff* const pma) {
  auto ctx = isl_pw_multi_aff_get_ctx(pma);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_pw_multi_aff(p, cpy(pma));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
}

//TODO: not consider pw affine, should add a condition on the set
isl_stat isl_pw_aff_get_coefficient( isl_set *set,  isl_aff *aff, void *user) {
    auto* coef_list = (map<string, int>*) user;

    int const_ = isl_val_get_num_si(isl_aff_get_constant_val(aff));
    //add the constant item to the coefficient matrix
    coef_list->insert(std::make_pair("const", const_));

	int n_div = isl_aff_dim(aff, isl_dim_in);
	for (int i = 0; i < n_div; ++i) {

		if (!isl_aff_involves_dims(aff, isl_dim_in, i, 1))
        {
			continue;
        }
		auto dim_name = isl_aff_get_dim_name(aff, isl_dim_in, i);
		isl_val *v = isl_aff_get_coefficient_val(aff, isl_dim_in, i);
        int int_v =  isl_val_get_num_si(v);
        coef_list->insert(std::make_pair(string(dim_name), int_v));
	}
    return isl_stat_ok;
}


isl_stat isl_pw_aff_get_const( isl_set *set,  isl_aff *aff, void *user) {
    auto* const_ = (int*) user;

    *const_ = isl_val_get_num_si(isl_aff_get_constant_val(aff));
    return isl_stat_ok;
}

isl_stat isl_pw_aff_get_var_id( isl_set *set,  isl_aff *aff, void *user) {
    auto* name2idx_related = (map<string, int>*) user;

	int n_div = isl_aff_dim(aff, isl_dim_in);
	for (int i = 0; i < n_div; ++i) {

		if (!isl_aff_involves_dims(aff, isl_dim_in, i, 1))
        {
			continue;
        }
		auto dim_name = isl_aff_get_dim_name(aff, isl_dim_in, i);
        //0 is reserved for constant
        name2idx_related->insert(std::make_pair(string(dim_name), i));
	}
    return isl_stat_ok;
}

int get_dim_min(isl_set* const m, int pos) {
    int min;
    isl_pw_aff_foreach_piece(isl_set_dim_min(cpy(m), pos), isl_pw_aff_get_const, &min);
    return min;
}


int get_dim_max(isl_set* const m, int pos) {
    int max;
    isl_pw_aff_foreach_piece(isl_set_dim_max(cpy(m), pos), isl_pw_aff_get_const, &max);
    return max;
}

int get_dim_min(isl_map* const m, int pos) {
    int min;
    isl_pw_aff_foreach_piece(isl_map_dim_min(cpy(m), pos), isl_pw_aff_get_const, &min);
    return min;
}


int get_dim_max(isl_map* const m, int pos) {
    int max;
    isl_pw_aff_foreach_piece(isl_map_dim_max(cpy(m), pos), isl_pw_aff_get_const, &max);
    return max;
}


std::string str(isl_map* const m) {
  auto ctx = isl_map_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_map(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
}

isl_map* to_map(isl_union_map* const m) {
  vector<isl_map*> map_vec;
  isl_union_map_foreach_map(m, get_maps, &map_vec);
  if (map_vec.size() != 1) {
    std::cout << "Error: Several maps in: " << str(m) << std::endl;
  }
  assert(map_vec.size() == 1);
  return map_vec.at(0);
  //auto map_list = isl_union_map_get_map_list(m);
  //assert(isl_map_list_size(map_list) == 1);
  //return isl_map_list_get_map(map_list, 0);
}

isl_union_map* to_umap(isl_map* const m) {
  return isl_union_map_from_map(cpy(m));
}

isl_ctx* ctx(isl_pw_aff* const m) {
  return isl_pw_aff_get_ctx(m);
}

isl_ctx* ctx(isl_union_set* const m) {
  return isl_union_set_get_ctx(m);
}

isl_ctx* ctx(isl_point* const m) {
  return isl_point_get_ctx(m);
}

isl_ctx* ctx(isl_constraint* const m) {
  return isl_constraint_get_ctx(m);
}

isl_ctx* ctx(isl_basic_set* const m) {
  return isl_basic_set_get_ctx(m);
}

isl_ctx* ctx(isl_space* const m) {
  return isl_space_get_ctx(m);
}

isl_ctx* ctx(isl_qpolynomial* const m) {
  return isl_qpolynomial_get_ctx(m);
}


isl_ctx* ctx(isl_union_pw_qpolynomial* const m) {
  return isl_union_pw_qpolynomial_get_ctx(m);
}

isl_ctx* ctx(isl_aff* const m) {
  return isl_aff_get_ctx(m);
}

isl_ctx* ctx(isl_val* const m) {
  return isl_val_get_ctx(m);
}

isl_ctx* ctx(isl_map* const m) {
  return isl_map_get_ctx(m);
}

isl_ctx* ctx(umap* const m) {
  return isl_union_map_get_ctx(m);
}

isl_ctx* ctx(isl_schedule* const m) {
  return isl_schedule_get_ctx(m);
}

isl_ctx* ctx(isl_union_pw_qpolynomial_fold* const m) {
  return isl_union_pw_qpolynomial_fold_get_ctx(m);
}

isl_ctx* ctx(isl_pw_qpolynomial_fold* const m) {
  return isl_pw_qpolynomial_fold_get_ctx(m);
}

isl_ctx* ctx(isl_pw_qpolynomial* const m) {
  return isl_pw_qpolynomial_get_ctx(m);
}

std::string codegen_c(isl_constraint* const bset) {
  auto ct = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(ct);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_constraint(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);
  return r;
}

std::string codegen_c(isl_schedule* const bset) {
  auto ct = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(ct);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_schedule(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);
  return r;
}

void print(struct isl_ctx* const ctx, isl_schedule* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_schedule(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);
}

void print(struct isl_ctx* const ctx, isl_qpolynomial* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_qpolynomial(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);
}

std::string str(isl_pw_aff* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_pw_aff(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}


std::string str(isl_point* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_point(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_schedule* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_schedule(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_constraint* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_constraint(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_space* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_space(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_union_pw_qpolynomial* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_union_pw_qpolynomial(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_qpolynomial* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_qpolynomial(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_aff* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_aff(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string codegen_c(isl_union_pw_qpolynomial_fold* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_union_pw_qpolynomial_fold(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string codegen_c(isl_pw_qpolynomial_fold* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_pw_qpolynomial_fold(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_union_pw_qpolynomial_fold* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_union_pw_qpolynomial_fold(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}
std::string str(isl_pw_qpolynomial_fold* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_pw_qpolynomial_fold(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}

std::string str(isl_pw_qpolynomial* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_pw_qpolynomial(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}
std::string str(isl_val* const bset) {
  auto context = ctx(bset);
  isl_printer *p;
  p = isl_printer_to_str(context);
  p = isl_printer_print_val(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  std::string r(rs);
  isl_printer_free(p);
  free(rs);
  return r;
}
void print(struct isl_ctx* const ctx, isl_val* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_val(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);
}

void print(struct isl_ctx* const ctx, isl_space* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_space(p, cpy(bset));

  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);
}
void print(struct isl_ctx* const ctx, isl_pw_multi_aff* const bset) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_pw_multi_aff(p, cpy(bset));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);
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

void print(struct isl_ctx* const ctx, isl_union_pw_qpolynomial* const m) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_union_pw_qpolynomial(p, cpy(m));
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

void print(struct isl_ctx* const ctx, isl_union_map* const m) {
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_union_map(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  printf("%s\n", rs);
  isl_printer_free(p);
  free(rs);

}

std::string str(isl_union_set* const m) {
  auto ctx = isl_union_set_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_union_set(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
}

std::string str(isl_set* const m) {
  auto ctx = isl_set_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_set(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
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

isl_union_map* inv(isl_union_map* const m0) {
  return isl_union_map_reverse(cpy(m0));
}

isl_set* lexmin(isl_set* const m0) {
  return isl_set_lexmin(cpy(m0));
}

isl_union_set* lexmin(uset* const m0) {
  return isl_union_set_lexmin(cpy(m0));
}
umap* lexmin(umap* const m0) {
  return isl_union_map_lexmin(cpy(m0));
}

isl_map* lexmin(isl_map* const m0) {
  return isl_map_lexmin(cpy(m0));
}


isl_union_set* lexmax(isl_union_set* const m0) {
  return isl_union_set_lexmax(cpy(m0));
}

isl_set* lexmax(isl_set* const m0) {
  return isl_set_lexmax(cpy(m0));
}

umap* lexmax(umap* const m0) {
  return isl_union_map_lexmax(cpy(m0));
}

isl_map* lexmax(isl_map* const m0) {
  return isl_map_lexmax(cpy(m0));
}

isl_map* inv(isl_map* const m0) {
  return isl_map_reverse(cpy(m0));
}

isl_set* unn(isl_set* const m0, isl_set* const m1) {
  return isl_set_union(cpy(m0), cpy(m1));
}

isl_union_set* unn(isl_union_set* const m0, isl_union_set* const m1) {
  return isl_union_set_union(cpy(m0), cpy(m1));
}

isl_union_map* unn(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_union(cpy(m0), cpy(m1));
}

isl_map* unn(isl_map* const m0, isl_map* const m1) {
  return isl_map_union(cpy(m0), cpy(m1));
}

isl_set* its(isl_set* const m0, isl_set* const m1) {
  return isl_set_intersect(cpy(m0), cpy(m1));
}

isl_map* its(isl_map* const m0, isl_set* const m1) {
  return isl_map_intersect_domain(cpy(m0), cpy(m1));
}

isl_union_map* its(isl_map* const m0, isl_union_map* const m1) {
  return isl_union_map_intersect(to_umap(m0), cpy(m1));
}

isl_map* its(isl_map* const m0, isl_map* const m1) {
  return isl_map_intersect(cpy(m0), cpy(m1));
}

isl_union_map* its_range(isl_union_map* const m0, isl_union_set* const m1) {
  return isl_union_map_intersect_range(cpy(m0), cpy(m1));
}

isl_union_set* its(isl_union_set* const m0, isl_union_set* const m1) {
  return isl_union_set_intersect(cpy(m0), cpy(m1));
}

isl_union_map* its(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_intersect(cpy(m0), cpy(m1));
}

isl_union_map* its(isl_union_map* const m0, isl_set* const m1) {
  return isl_union_map_intersect_domain(cpy(m0), cpy(to_uset(m1)));
}

isl_union_map* its(isl_union_map* const m0, isl_union_set* const m1) {
  return isl_union_map_intersect_domain(cpy(m0), cpy(m1));
}

isl_map* lex_gt(isl_map* const m0, isl_map* const m1) {
  return isl_map_lex_gt_map(cpy(m0), cpy(m1));
}

isl_union_map* lex_gt(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_lex_gt_union_map(cpy(m0), cpy(m1));
}

isl_union_map* lex_lt(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_lex_lt_union_map(cpy(m0), cpy(m1));
}

isl_map* lex_lt(isl_map* const m0, isl_map* const m1) {
  return isl_map_lex_lt_map(cpy(m0), cpy(m1));
}

isl_union_map* dot(isl_map* const m0, isl_union_map* const m1) {
  return isl_union_map_apply_range(to_umap(m0), cpy(m1));
}

isl_union_map* dot(isl_union_map* const m0, isl_map* const m1) {
  return isl_union_map_apply_range(cpy(m0), to_umap(m1));
}

isl_map* dot(isl_map* const m0, isl_map* const m1) {
  return isl_map_apply_range(cpy(m0), cpy(m1));
}

isl_union_set* simplify(uset* const m) {
  return isl_union_set_remove_redundancies(cpy(m));
}

isl_union_set* coalesce(isl_union_set* const m0) {
  return isl_union_set_coalesce(cpy(m0));
}

isl_union_map* coalesce(isl_union_map* const m0) {
  return isl_union_map_coalesce(cpy(m0));
}

isl_union_map* dot_domain(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_apply_domain(cpy(m0), cpy(m1));
}

isl_union_map* dot(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_apply_range(cpy(m0), cpy(m1));
}

isl_union_pw_qpolynomial* card(isl_union_set* const m) {
  return isl_union_set_card(cpy(m));
}

isl_union_pw_qpolynomial* card(isl_union_map* const m) {
  return isl_union_map_card(cpy(m));
}

isl_pw_qpolynomial* card(isl_map* const m) {
  return isl_map_card(cpy(m));
}

isl_pw_qpolynomial* card(isl_set* const m) {
  return isl_set_card(cpy(m));
}

isl_union_set* domain(isl_union_map* const m) {
  return isl_union_map_domain(cpy(m));
}

isl_union_set* range(isl_union_map* const m) {
  return isl_union_map_range(cpy(m));
}

isl_set* range(isl_map* const m) {
  return isl_map_range(cpy(m));
}

isl_set* domain(isl_map* const m) {
  return isl_map_domain(cpy(m));
}

isl_bool subset(isl_union_set* const s0, uset* s1) {
  return isl_union_set_is_subset(cpy(s0), cpy(s1));
}

isl_basic_set* domain(isl_basic_map* const m) {
  return isl_basic_map_domain(cpy(m));
}

std::string codegen_c(isl_union_map* res) {
  //isl_options_set_ast_build_allow_else(ctx(res), 0);
  isl_ast_build* build = isl_ast_build_alloc(isl_union_map_get_ctx(res));
  isl_ast_node* code =
    isl_ast_build_node_from_schedule_map(build, cpy(res));

  char* code_str = isl_ast_node_to_C_str(code);
  std::string code_string(code_str);
  free(code_str);

  return code_string;
}

std::string codegen_c(isl_qpolynomial* qp) {
  auto ctx = isl_qpolynomial_get_ctx(qp);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_qpolynomial(p, cpy(qp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);
  return r;
}

std::string codegen_c(isl_union_pw_qpolynomial* pqp) {

  auto ct = ctx(pqp);
  isl_printer *p;
  p = isl_printer_to_str(ct);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_union_pw_qpolynomial(p, cpy(pqp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);
  return r;
}

std::string codegen_c(isl_pw_qpolynomial* pqp) {

  auto ctx = isl_pw_qpolynomial_get_ctx(pqp);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_pw_qpolynomial(p, cpy(pqp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);
  return r;

}

//add this to the header file
int bnd_int(isl_union_pw_qpolynomial_fold* bound);
int int_lower_bound(isl_union_pw_qpolynomial* range_card);
int int_upper_bound(isl_union_pw_qpolynomial* range_card);

isl_union_pw_qpolynomial* get_out_range(isl_map* m, int dim) {
    auto* pw_aff_on_dim_i = isl_map_dim_max(cpy(m), dim);
    return card(to_uset(isl_map_range(isl_map_from_pw_aff(pw_aff_on_dim_i))));
}

isl_union_pw_qpolynomial_fold* lower_bound(isl_union_pw_qpolynomial* range_card) {
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(cpy(range_card), isl_fold_min, b);
  return bound;
}

isl_union_pw_qpolynomial_fold* upper_bound(isl_union_pw_qpolynomial* range_card) {
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(cpy(range_card), isl_fold_max, b);
  return bound;
}

isl_set* rdset(isl_ctx* ctx, const std::string& str) {
  return isl_set_read_from_str(ctx, str.c_str());
}

umap* rdmap(isl_ctx* ctx, const std::string& str) {
  return isl_union_map_read_from_str(ctx, str.c_str());
}

isl_point* sample(isl_set* s) {
  return isl_set_sample_point(cpy(s));
}

isl_pw_aff* dim_min(isl_map* const m, const int d) {
  return isl_map_dim_min(cpy(m), d);
}

isl_pw_aff* dim_max(isl_map* const m, const int d) {
  return isl_map_dim_max(cpy(m), d);
}

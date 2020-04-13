#include "isl_utils.h"
#include "utils.h"

isl_multi_union_pw_aff* cpy(isl_multi_union_pw_aff* const s) {
  return isl_multi_union_pw_aff_copy(s);
}

int get_size(isl_multi_aff* const m) {
  return isl_multi_aff_dim(m, isl_dim_out);
}

isl_local_space* cpy(isl_local_space* const s) {
  return isl_local_space_copy(s);
}

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

isl_local_space* get_local_space(isl_aff* const m) {
  return isl_aff_get_local_space(m);
}

isl_local_space* get_local_space(isl_basic_set* const m) {
  return isl_basic_set_get_local_space(m);
}

isl_space* get_space(isl_aff* const m) {
  return isl_aff_get_space(m);
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

isl_space* get_space(isl_union_set* const m) {
  assert(m != nullptr);
  return isl_union_set_get_space(m);
}

isl_space* get_space(isl_set* const m) {
  assert(m != nullptr);
  return isl_set_get_space(m);
}

int dim(isl_space* const s) {
  assert(false);
  return 0;
}

bool empty(isl_basic_set* const s) {
  return isl_basic_set_is_empty(s);
}

bool empty(isl_set* const s) {
  return isl_set_is_empty(s);
}

bool empty(uset* const s) {
  return isl_union_set_is_empty(s);
}

int num_out_dims(isl_space* const s) {
  assert(isl_space_is_map(s));
  int ndims = isl_space_dim(s, isl_dim_out);
  return ndims;
}

int num_in_dims(isl_space* const s) {
  assert(isl_space_is_map(s));
  int ndims = isl_space_dim(s, isl_dim_in);
  return ndims;
}

int num_out_dims(isl_map* const m) {
  return num_out_dims(get_space(m));
}

int num_in_dims(isl_map* const s) {
  return num_in_dims(get_space((s)));
}

int num_div_dims(isl_aff* const s) {
  auto ls = isl_aff_get_local_space(s);
  return isl_local_space_dim(ls, isl_dim_div);
}

int num_in_dims(isl_aff* const s) {
  return num_in_dims(get_space((s)));
}

int num_out_dims(isl_aff* const s) {
  return num_out_dims(get_space((s)));
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
  assert(id != nullptr);
  return std::string(isl_id_to_str(id));
}

std::string domain_name(isl_map* const s) {
  return domain_name(get_space(s));
}

std::string range_name(isl_map* const s) {
  return range_name(get_space(s));
}

std::string domain_name(isl_space* const s) {
  return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_in)));
}

std::string range_name(isl_space* const s) {
  return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_out)));
}


isl_map* set_range_name(isl_map* const m, string new_name) {
    return isl_map_set_tuple_name(m, isl_dim_out, new_name.c_str());
}

isl_map* add_range_suffix(isl_map* const m, string suffix) {
    string origin_name = range_name(m);
    string new_name = origin_name + suffix;
    return isl_map_set_tuple_name(m, isl_dim_out, new_name.c_str());
}

isl_union_set* to_uset(isl_set* const m) {
  return isl_union_set_from_set(cpy(m));
}

isl_stat get_basic_map(isl_basic_map* m, void* user) {
  //cout << "Getting map" << endl;
  auto* vm = (vector<isl_basic_map*>*) user;
  vm->push_back(m);
  return isl_stat_ok;
}

vector<isl_basic_map*> get_basic_maps(isl_map* m) {
  assert(m != nullptr);

  vector<isl_basic_map*> map_vec;
  isl_map_foreach_basic_map(m, get_basic_map, &map_vec);

  return map_vec;
}

isl_stat get_point(isl_point* m, void* user) {
  auto* vm = (vector<isl_point*>*) user;
  vm->push_back((m));
  return isl_stat_ok;
}

vector<isl_point*> get_points(isl_set* m) {
  assert(m != nullptr);

  vector<isl_point*> map_vec;
  isl_set_foreach_point(m, get_point, &map_vec);

  return map_vec;
}
vector<isl_map*> get_maps(isl_union_map* m) {
  assert(m != nullptr);

  vector<isl_map*> map_vec;
  isl_union_map_foreach_map(m, get_maps, &map_vec);

  return map_vec;
}

isl_stat get_maps(isl_map* m, void* user) {
  //cout << "Getting map" << endl;
  auto* vm = (vector<isl_map*>*) user;
  vm->push_back((m));
  return isl_stat_ok;
}

std::string str(isl_local_space* const m) {
  auto ctx = isl_local_space_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_local_space(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
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

std::string str(isl_multi_union_pw_aff* const mupa) {
  auto ctx = isl_multi_union_pw_aff_get_ctx(mupa);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_multi_union_pw_aff(p, cpy(mupa));
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
        //std::cout << i << "out of" << n_div <<  endl;

		if (!isl_aff_involves_dims(aff, isl_dim_in, i, 1))
        {
			continue;
        }
        //std::cout << "reach here" << endl;
		auto dim_name = isl_aff_get_dim_name(aff, isl_dim_in, i);
        //std::cout << dim_name << endl;
        //0 is reserved for constant
        name2idx_related->insert(std::make_pair(string(dim_name), i));
	}
    return isl_stat_ok;
}

isl_stat isl_pw_aff_set_var_name( isl_set *set, isl_aff *aff, void *user) {
    auto* name_vec = (vector<string>*) user;
	int n_div = isl_aff_dim(aff, isl_dim_in);
	for (int i = 0; i < n_div; ++i) {
		isl_aff_set_dim_name(aff, isl_dim_in, i, (*name_vec)[i].c_str());
	}
    return isl_stat_ok;
}

isl_map* set_map_dim_name(isl_ctx* ctx, isl_map* m, unsigned pos, const string& name) {
    isl_id* name_id = id(ctx, name);
    return isl_map_set_dim_id(m, isl_dim_in, pos, name_id);
}

isl_map* gen_map_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, string op_name) {
    vector<string> var_list;
    var_list.push_back("root");
    for (string it : sched_vec) {
        if (!is_number(it) ){
            var_list.push_back(it);
        }
    }
    string vars = sep_list(var_list, "[", "]", ",");
    string sched = sep_list(sched_vec, "[", "]", ",");
    return isl_map_read_from_str(ctx, string("{" + op_name + vars + " -> " + sched + "}").c_str());
}

unsigned get_in_dim(isl_map* const m) {
    return isl_map_dim(cpy(m), isl_dim_in);
}

unsigned get_out_dim(isl_map* const m) {
    return isl_map_dim(cpy(m), isl_dim_out);
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
  assert(m != nullptr);

  //cout << "Converting to map" << endl;
  vector<isl_map*> map_vec;
  //cout << "Initialized map vec" << endl;
  isl_union_map_foreach_map(m, get_maps, &map_vec);

  //cout << "map vec size = " << map_vec.size() << endl;

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

isl_ctx* ctx(isl_set* const m) {
  return isl_set_get_ctx(m);
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

//std::string codegen_c(isl_set* const bset) {
  //auto ct = ctx(bset);
  //isl_printer *p;
  //p = isl_printer_to_str(ct);
  //p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  //p = isl_printer_print_set(p, cpy(bset));

  //char* rs = isl_printer_get_str(p);
  //isl_printer_free(p);
  //std::string r(rs);
  //free(rs);
  //return r;
//}

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

  regex cm("\\{ (.*)\\[(.*)\\] : (.*) \\}");
  smatch match;
  auto res = regex_search(r, match, cm);

  assert(res);

  string gp = match[3];
  regex eqsign(" = ");
  gp = regex_replace(gp, eqsign, " == ");
  //assert(false);
  return "(" + gp + ")";
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
  assert(bset != nullptr);

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
  assert(bset != nullptr);

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

std::string str(isl_basic_set* const m) {
  assert(m != nullptr);
  auto ctx = isl_basic_set_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_basic_set(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
}

std::string str(isl_set* const m) {
  assert(m != nullptr);
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

isl_basic_set* its(isl_basic_set* const m0, isl_basic_set* const m1) {
  return isl_basic_set_intersect(cpy(m0), cpy(m1));
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

isl_map* its_range(isl_map* const m0, isl_set* const m1) {
  return isl_map_intersect_range(cpy(m0), cpy(m1));
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

isl_map* simplify_expr(isl_map* const m) {
  return isl_map_from_pw_multi_aff(isl_pw_multi_aff_from_map(cpy(m)));
}

umap* simplify(umap* const m) {
  return to_umap(isl_map_from_pw_multi_aff(isl_pw_multi_aff_from_map(to_map(cpy(m)))));
}

isl_union_pw_qpolynomial* coalesce(isl_union_pw_qpolynomial* const m) {
  return isl_union_pw_qpolynomial_coalesce(cpy(m));
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

isl_bool subset(isl_set* const s0, isl_set* s1) {
  return isl_set_is_subset(cpy(s0), cpy(s1));
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

isl_union_map* get_rel_order(isl_ctx* ctx, isl_union_map* const um) {
  vector<umap*> cm;
  isl_union_map_foreach_map(um, umap_lex_lt, (void*) (&cm));
  umap* ret = isl_union_map_read_from_str(ctx, "{}");
  for (auto it : cm) {
      ret = unn(ret, it);
  }
  return ret;
}

isl_stat umap_lex_lt(isl_map* s,  void* user) {
  vector<umap*>* vals = (vector<umap*>*) user;
  vals->push_back(to_umap(lex_lt(s, s)));
  return isl_stat_ok;
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

isl_aff* rdaff(isl_ctx* ctx, const std::string& str) {
  return isl_aff_read_from_str(ctx, str.c_str());
}

umap* rdmap(isl_ctx* ctx, const std::string& str) {
  return isl_union_map_read_from_str(ctx, str.c_str());
}

isl_point* sample(isl_basic_set* s) {
  return isl_basic_set_sample_point(cpy(s));
}

isl_point* sample(isl_union_set* s) {
  return isl_union_set_sample_point(cpy(s));
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

isl_stat get_const(isl_set* s, isl_qpolynomial* qp, void* user) {
  vector<int>* vals = (vector<int>*) user;

  isl_val* v = isl_qpolynomial_get_constant_val(qp);
  long vs = isl_val_get_num_si(v);
  if (vals->size() == 0 ||
      vals->back() != vs) {
    vals->push_back(vs);
  }
  return isl_stat_ok;
}

string codegen_c_constraint(isl_constraint* c) {
  auto ct = ctx(c);
  isl_printer *p;
  p = isl_printer_to_str(ct);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_constraint(p, cpy(c));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);
  return r;

  vector<string> non_zero_coeffs;
  string resstr;
  stringstream ss(resstr);
  isl_space* s = get_space(c);
  if (isl_space_is_map(s)) {
    assert(false);
  } else {
    assert(isl_space_is_set(s));
    for (int i = 0; i < num_dims(s); i++) {
      auto v = isl_constraint_get_coefficient_val(c, isl_dim_set, i);
      if (!isl_val_is_zero(v)) {
        if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
          string dn = "d" + to_string(i);
          auto new_id = id(ctx(c), dn);
          assert(new_id != nullptr);
          cout << "setting id: " << str(new_id) << endl;
          s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
        }
        non_zero_coeffs.push_back(
            str(isl_constraint_get_coefficient_val(c, isl_dim_set, i)) + "*" + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
    }
  }

  ss << "/* constraint: " << str(c) << " */" << endl;
  ss << sep_list(non_zero_coeffs, "", "", " + ");

  auto cv = isl_constraint_get_constant_val(c);
  if (!isl_val_is_zero(cv)) {
    ss << " + " << str(isl_constraint_get_constant_val(c));
  }
  if (isl_constraint_is_equality(c)) {
    ss << " == " << "0";
  } else {
    ss << " >= " << "0";
  }

  return ss.str();
}

isl_stat uset_collect_set(isl_set* c, void* user) {
  vector<isl_set*>& code_holder = *((vector<isl_set*>*) user);
  code_holder.push_back(cpy(c));
  return isl_stat_ok;
}

isl_stat collect_constraint(isl_constraint* c, void* user) {
  vector<isl_constraint*>& code_holder = *((vector<isl_constraint*>*) user);
  string cc = codegen_c_constraint(c);
  code_holder.push_back(cpy(c));
  return isl_stat_ok;
}

isl_stat codegen_constraint(isl_constraint* c, void* user) {
  // TODO: Update to get DIV!!!
  vector<string>& code_holder = *((vector<string>*) user);
  string cc = codegen_c_constraint(c);
  code_holder.push_back(cc);
  return isl_stat_ok;
}

isl_stat bset_collect_constraints(isl_basic_set* m, void* user) {
  isl_basic_set_foreach_constraint(m, collect_constraint, user);
  return isl_stat_ok;
}

isl_stat bmap_codegen_c(isl_basic_map* m, void* user) {
  isl_basic_map_foreach_constraint(m, codegen_constraint, user);

  return isl_stat_ok;
}

vector<isl_constraint*> constraints(isl_set* s) {
  vector<isl_constraint*> code_holder;
  isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  return code_holder;

}

std::string codegen_c(isl_set* const s) {
  if (empty(s)) {
    return "false";
  }

  vector<isl_constraint*> code_holder;
  isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  vector<string> set_strings;
  for (auto hc : code_holder) {
    set_strings.push_back(codegen_c(hc));
  }
  if (set_strings.size() == 0) {
    return "true";
  }
  return sep_list(set_strings, "(", ")", " || ");
}

vector<string> collect_sched_vec(isl_set* const s) {
  if (empty(s)) {
    return {};
  }

  vector<isl_constraint*> code_holder;
  isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  //all sched vec has the same dimesnion
  size_t vec_dim = isl_constraint_dim(pick(code_holder), isl_dim_set);
  vector<string> sched_vec(vec_dim);

  for (auto hc : code_holder) {
      cout << str(hc) <<  endl;
      for (size_t i = 0; i < vec_dim; i ++) {
          bool involve =  isl_constraint_involves_dims(hc, isl_dim_set, i, 1);
          if (involve) {
              if (isl_constraint_is_equality(hc))
                  sched_vec[i] = to_string(-isl_val_get_num_si(isl_constraint_get_constant_val(hc)));
              else {
                  sched_vec[i] = "i" + to_string(i);
              }
              cout << isl_constraint_is_equality(hc) << isl_constraint_is_lower_bound(hc, isl_dim_set, i) << isl_constraint_is_upper_bound(hc, isl_dim_set, i) << endl;
          }
      }
  }
  return sched_vec;
}

std::string codegen_c(isl_union_set* s) {
  vector<isl_set*> code_holder;
  isl_union_set_foreach_set(s, uset_collect_set, &code_holder);
  vector<string> set_strings;
  for (auto hc : code_holder) {
    set_strings.push_back(codegen_c(hc));
  }
  return sep_list(set_strings, "(", ")", " || ");
}

vector<string> collect_sched_vec(isl_union_set* s) {
  vector<isl_set*> code_holder;
  isl_union_set_foreach_set(s, uset_collect_set, &code_holder);
  vector<string> sched_vec;
  assert(code_holder.size() == 1);
  sched_vec = collect_sched_vec(pick(code_holder));
  return sched_vec;
}

vector<string> collect_sched_vec(isl_union_map* um) {
    return collect_sched_vec(range(um));
}

umap* pad_one_more_dim_to_sched_map(isl_ctx* ctx, umap* const um, string pad_val) {
    vector<string> sched_vec;
    sched_vec = collect_sched_vec(cpy(um));
    string op = range_name(to_map(um));
    for (size_t dim = 0; dim < sched_vec.size(); dim ++) {
        if (!is_number(sched_vec[dim])) {
            auto it = sched_vec.begin() + dim;
            sched_vec.insert(it, pad_val);
            break;
        }
    }
    return to_umap(gen_map_from_sched_vec(ctx, sched_vec, op));
}

isl_stat get_pw_multi_aff_piece(isl_set* dom, isl_multi_aff* domain, void* user) {
  vector<pair<isl_set*, isl_multi_aff*> >* v =
    (vector<pair<isl_set*, isl_multi_aff*> >*) user;
  v->push_back({dom, domain});
  return isl_stat_ok;
}

isl_stat return_piece(isl_set* domain, isl_qpolynomial* val, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  v->push_back({domain, val});
  return isl_stat_ok;
}

vector<pair<isl_set*, isl_multi_aff*> >
get_pieces(isl_pw_multi_aff* lm) {
  assert(lm != nullptr);
  vector<pair<isl_set*, isl_multi_aff*> > pieces;
  isl_pw_multi_aff_foreach_piece(lm, get_pw_multi_aff_piece, &pieces);
  return pieces;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_pw_qpolynomial_foreach_piece(p, return_piece, &terms);
  return terms;
}

isl_stat get_pw_qpolynomial_fold(isl_pw_qpolynomial_fold* qp, void* user) {
  vector<isl_pw_qpolynomial_fold*>* v = (vector<isl_pw_qpolynomial_fold*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat get_pw_qpolynomial(isl_pw_qpolynomial* qp, void* user) {
  vector<isl_pw_qpolynomial*>* v = (vector<isl_pw_qpolynomial*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat return_pieces(isl_pw_qpolynomial* qp, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  auto pieces = get_pieces(qp);
  for (auto p : pieces) {
    v->push_back(p);
  }

  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_union_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, return_pieces, &terms);
  return terms;
}

vector<isl_pw_qpolynomial_fold*>
get_polynomial_folds(isl_union_pw_qpolynomial_fold* p) {
  vector<isl_pw_qpolynomial_fold*> terms;
  isl_union_pw_qpolynomial_fold_foreach_pw_qpolynomial_fold(p, get_pw_qpolynomial_fold, &terms);
  return terms;
}

vector<isl_pw_qpolynomial*>
get_polynomials(isl_union_pw_qpolynomial* p) {
  vector<isl_pw_qpolynomial*> terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, get_pw_qpolynomial, &terms);
  return terms;
}

isl_stat return_term(isl_term* t, void* user) {
  vector<isl_term*>* v = (vector<isl_term*>*) user;
  v->push_back(t);
  return isl_stat_ok;
}

vector<isl_term*> get_terms(isl_qpolynomial* qp) {
  vector<isl_term*> terms;
  isl_qpolynomial_foreach_term(qp, return_term, &terms);
  return terms;
}

std::string codegen_c(isl_term* t) {
  vector<string> exps;
  for (int i = 0; i < isl_term_dim(t, isl_dim_set); i++) {
    int exp = isl_term_get_exp(t, isl_dim_set, i);
    exps.push_back("pow(i_" + to_string(i) + ", " + to_string(exp) + ")");
  }

  return "(" + str(isl_term_get_coefficient_val(t)) + "*" + sep_list(exps, "", "", "*") + ")";
}

isl_stat codegen_domain(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(domain));
  return isl_stat_ok;
}

isl_stat codegen_value(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(qp));
  return isl_stat_ok;
}

isl_stat map_codegen_c(isl_map* m, void* user) {
  auto cardm = card(m);

  vector<string>& code_holder = *((vector<string>*) user);
  isl_pw_qpolynomial_foreach_lifted_piece(cardm, codegen_domain, (void*)(&code_holder));

  return isl_stat_ok;
}


isl_stat umap_codegen_c_comp(isl_map* m, void* user) {
  map<string, string>& mc = *((map<string, string>*) user);
  mc[range_name(get_space(m))] = str(m);

  vector<string> holder;
  map_codegen_c(m, &holder);
  mc[range_name(get_space(m))] = sep_list(holder, "(", ")", " || ");

  return isl_stat_ok;
}

map<string, string> umap_codegen_c(umap* const um) {
  map<string, string> cm;
  isl_union_map_foreach_map(um, umap_codegen_c_comp, (void*) (&cm));
  return cm;
}

int bnd_int(isl_union_pw_qpolynomial_fold* bound) {
  auto folds  = get_polynomial_folds(bound);
  int bint;
  if (folds.size() == 0) {
    bint = 0;
  } else {
    assert(folds.size() == 1);
    string str_bnd = codegen_c(folds[0]);
    //cout << "\tbound: " << str_bnd << endl;

    if (is_number(str_bnd)) {
      bint = safe_stoi(str_bnd);
      return bint;
    } else {
      regex cm("\\((.*)\\)/(.*)");
      smatch match;
      auto res = regex_search(str_bnd, match, cm);
      assert(res);
      return safe_stoi(match[1]) / safe_stoi(match[2]);
    }
  }
  return bint;
}

int int_lower_bound(isl_union_pw_qpolynomial* range_card) {
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(cpy(range_card), isl_fold_min, b);
  return bnd_int(bound);
}

int int_upper_bound(isl_union_pw_qpolynomial* range_card) {
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(cpy(range_card), isl_fold_max, b);
  return bnd_int(bound);
}

isl_set* universe(isl_space* s) {
  return isl_set_universe(s);
}

isl_set* add_constraint(isl_set* s, isl_constraint* c) {
  return isl_set_add_constraint(cpy(s), cpy(c));
}

uset* gist(uset* base, uset* context) {
  return isl_union_set_gist(cpy(base), cpy(context));
}

isl_map* project_all_but(isl_map* const dmap,
    const int d) {

  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname = domain_name(m);
  string rname = range_name(m);

  if (d != 0) {
    m = isl_map_project_out(m, isl_dim_in, 0, d);
    m = isl_map_project_out(m, isl_dim_out, 0, d);
  }

  int in_dim = num_in_dims(get_space(m));
  int out_dim = num_out_dims(get_space(m));

  m = isl_map_project_out(m, isl_dim_in, 1, in_dim - 1);
  m = isl_map_project_out(m, isl_dim_out, 1, out_dim - 1);

  assert(num_in_dims(get_space(m)) == 1);
  assert(num_out_dims(get_space(m)) == 1);

  isl_map_set_tuple_id(m, isl_dim_in, id(ct, dname));
  isl_map_set_tuple_id(m, isl_dim_out, id(ct, rname));

  return m;
}

vector<int> parse_pt(isl_point* p) {
  assert(p != nullptr);
  return parse_pt(str(p));
}

vector<string> space_var_decls(isl_space* s) {
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(ctx(s), dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

vector<string> space_var_args(isl_space* s) {
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(ctx(s), dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

isl_val* neg(isl_val* a) {
  return isl_val_neg(cpy(a));
}

isl_val* add(isl_val* a, isl_val* b) {
  return isl_val_add(cpy(a), cpy(b));
}

isl_val* mul(isl_val* a, isl_val* b) {
  return isl_val_mul(cpy(a), cpy(b));
}

isl_val* one(isl_ctx* c) {
  return isl_val_one(c);
}

isl_val* negone(isl_ctx* c) {
  return isl_val_negone(c);
}

isl_aff* aff_on_domain(isl_local_space* ls, isl_val* max) {
  return isl_aff_val_on_domain(cpy(ls), cpy(max));
}

int to_int(isl_val* a) {
  assert(isl_val_is_int(a));
  return stoi(str(a));
}

int int_coeff(isl_aff* const a, const int pos) {
  return to_int(isl_aff_get_coefficient_val(a, isl_dim_in, pos));
}

int int_const_coeff(isl_aff* const a) {
  return to_int(isl_aff_get_constant_val(a));
}



#include "isl_utils.h"
#include "utils.h"

std::string codegen_c_v(isl_aff* const aff);

std::string dim_name(isl_set* const a, const int d) {
  string str(isl_set_get_dim_name(a, isl_dim_set, d));
  return str;
}

std::string dim_name(isl_aff* const a, const int d) {
  string str(isl_aff_get_dim_name(a, isl_dim_in, d));
  return str;
}

//isl_union_pw_multi_aff* cpy(isl_union_pw_multi_aff* const s) {
  //return isl_union_pw_multi_aff(s);
//}

isl_stat get_set(isl_set* m, void* user) {
  auto* vm = (vector<isl_set*>*) user;
  vm->push_back((m));
  return isl_stat_ok;
}

isl_multi_aff* cpy(isl_multi_aff* const s) {
  return isl_multi_aff_copy(s);
}

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

isl_local_space* get_local_space(isl_constraint* const m) {
  return isl_constraint_get_local_space(m);
}

isl_local_space* get_local_space(isl_set* const m) {

  auto bsets = get_basic_sets(m);
  assert(bsets.size() == 1);
  return get_local_space(pick(bsets));
}

isl_local_space* get_local_space(isl_aff* const m) {
  return isl_aff_get_local_space(m);
}

isl_local_space* get_local_space(isl_basic_map* const m) {
  return isl_basic_map_get_local_space(m);
}

isl_local_space* get_local_space(isl_basic_set* const m) {
  return isl_basic_set_get_local_space(m);
}

isl_space* get_space(isl_basic_map* const m) {
  return isl_basic_map_get_space(m);
}

isl_space* get_space(isl_basic_set* const m) {
  return isl_basic_set_get_space(m);
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

bool equal(isl_space* const l, isl_space* const r) {
  return isl_space_is_equal(l, r);
}

bool equal(isl_point* const l, isl_point* const r) {
  return isl_set_is_equal(to_set(l), to_set(r));
}

bool equal(isl_set* const l, isl_set* const r) {
  return isl_set_is_equal(l, r);
}

bool equal(uset* const l, uset* const r) {
  return isl_union_set_is_equal(l, r);
}

bool equal(isl_map* const l, isl_map* const r) {
  return isl_map_is_equal(l, r);
}

bool equal(isl_aff* const l, isl_aff* const r) {
  return isl_aff_plain_is_equal(l, r);
}

bool equal(umap* const l, umap* const r) {
  return isl_union_map_is_equal(l, r);
}

bool equal_regardless_of_domain(isl_map* const l, isl_map* const r) {
  auto ll = cpy(l);
  auto rr = cpy(r);
  ll = isl_map_reset_tuple_id(ll, isl_dim_in);
  rr = isl_map_reset_tuple_id(rr, isl_dim_in);
  return isl_map_is_equal(ll, rr);
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

bool empty(isl_map* const s) {
  return isl_map_is_empty(s);
}

bool empty(umap* const s) {
  return isl_union_map_is_empty(s);
}

int num_in_dims(isl_multi_aff* const s) {
  return isl_multi_aff_dim(s, isl_dim_in);
}

int num_param_dims(isl_space* const s) {
  return isl_space_dim(s, isl_dim_param);
}

int num_out_dims(isl_space* const s) {
  assert(isl_space_is_map(s));
  int ndims = isl_space_dim(s, isl_dim_out);
  return ndims;
}

int num_out_dims(isl_local_space* const s) {
  assert(!isl_local_space_is_set(s));
  int ndims = isl_local_space_dim(s, isl_dim_out);
  return ndims;
}

int num_in_dims(isl_local_space* const s) {
  assert(!isl_local_space_is_set(s));
  int ndims = isl_local_space_dim(s, isl_dim_in);
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

int num_dims(isl_aff* const s) {
  auto ls = isl_aff_get_local_space(s);
  return isl_local_space_dim(ls, isl_dim_set);
}

int num_div_dims(isl_local_space* const ls) {
  return isl_local_space_dim(ls, isl_dim_div);
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

int num_dims(isl_basic_set* const s) {
  return num_dims(get_space(s));
}

int num_dims(isl_set* const s) {
  return num_dims(get_space(s));
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

std::string name(isl_set* const s) {
  return name(get_space(s));
}

std::string name(isl_union_set* const s) {
  return name(get_space(s));
}

std::string domain_name(isl_basic_map* const s) {
  return domain_name(get_space(s));
}

std::string range_name(isl_basic_map* const s) {
  return range_name(get_space(s));
}

std::string domain_name(isl_map* const s) {
  return domain_name(get_space(s));
}

std::string domain_name(umap* const s) {
  return domain_name(get_space(to_map(s)));
}

std::string range_name(isl_map* const s) {
  return range_name(get_space(s));
}

std::string name(isl_space* const s) {
  return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_set)));
}

std::string domain_name(isl_space* const s) {
  return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_in)));
}

std::string range_name(isl_space* const s) {
  if(isl_space_has_tuple_id(s, isl_dim_out))
    return std::string(isl_id_to_str(isl_space_get_tuple_id(s, isl_dim_out)));
  else
    return "";
}


isl_map* set_range_name(isl_map* const m, string new_name) {
    return isl_map_set_tuple_name(m, isl_dim_out, new_name.c_str());
}

isl_multi_aff* set_in_name(isl_multi_aff* const m, string new_name) {
    return isl_multi_aff_set_tuple_id(m, isl_dim_in, id(ctx(m), new_name));
}

isl_multi_aff* set_name(isl_multi_aff* const m, string new_name) {
    return isl_multi_aff_set_tuple_id(m, isl_dim_out, id(ctx(m), new_name));
}

isl_aff* set_name(isl_aff* const m, string new_name) {
    return isl_aff_set_tuple_id(m, isl_dim_out, id(ctx(m), new_name));
}

isl_set* set_name(isl_set* const m, string new_name) {
    return isl_set_set_tuple_name(m, new_name.c_str());
}

isl_map* set_domain_name(isl_map* const m, string new_name) {
    return isl_map_set_tuple_name(m, isl_dim_in, new_name.c_str());
}

umap* set_domain_name(umap* const m, string new_name) {
    return to_umap(isl_map_set_tuple_name(to_map(m), isl_dim_in, new_name.c_str()));
}

isl_map* add_range_suffix(isl_map* const m, string suffix) {
    string origin_name = range_name(m);
    string new_name = origin_name + suffix;
    return isl_map_set_tuple_name(cpy(m), isl_dim_out, new_name.c_str());
}

isl_map* add_domain_suffix(isl_map* const m, string suffix) {
    string origin_name = domain_name(m);
    string new_name = origin_name + suffix;
    return isl_map_set_tuple_name(cpy(m), isl_dim_in, new_name.c_str());
}

isl_set* add_suffix(isl_set* const m, string suffix) {
    string origin_name = name(m);
    string new_name = origin_name + suffix;
    return isl_set_set_tuple_name(cpy(m), new_name.c_str());
}

isl_set* to_set(isl_union_set* const m) {
  auto ss = get_sets(m);
  assert(ss.size() == 1);
  return ss.at(0);
}

isl_set* to_set(isl_basic_set* const m) {
  return isl_set_from_basic_set(cpy(m));
}

isl_set* to_set(isl_point* const m) {
  return isl_set_from_point(cpy(m));
}

isl_union_set* to_uset(isl_set* const m) {
  return isl_union_set_from_set(cpy(m));
}

isl_stat get_basic_set(isl_basic_set* m, void* user) {
  auto* vm = (vector<isl_basic_set*>*) user;
  vm->push_back(m);
  return isl_stat_ok;
}
vector<isl_basic_set*> get_basic_sets(isl_set* m) {
  assert(m != nullptr);

  vector<isl_basic_set*> map_vec;
  isl_set_foreach_basic_set(m, get_basic_set, &map_vec);

  return map_vec;
}

isl_stat get_basic_map(isl_basic_map* m, void* user) {
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

isl_basic_map* get_basic_map(isl_map* m) {
  assert(m != nullptr);

  vector<isl_basic_map*> map_vec;
  isl_map_foreach_basic_map(m, get_basic_map, &map_vec);
  assert(map_vec.size() == 1);

  return pick(map_vec);
}

isl_stat get_point(isl_point* m, void* user) {
  auto* vm = (vector<isl_point*>*) user;
  vm->push_back((m));
  return isl_stat_ok;
}

bool all_const(isl_set* s) {
  auto sets = get_basic_sets(s);
  bool all_cst = true;
  for (auto bs: sets) {
    all_cst &= isl_set_is_singleton(to_set(bs));
  }
  return all_cst;
}

vector<isl_point*> get_points(isl_set* m) {
  assert(m != nullptr);

  vector<isl_point*> map_vec;
  isl_set_foreach_point(m, get_point, &map_vec);

  return map_vec;
}

isl_stat get_points(isl_set* m, void* user) {
  auto* vm = (vector<isl_point*>*) user;
  vector<isl_point*> pt_vec = get_points(m);
  vm->insert(vm->end(), pt_vec.begin(), pt_vec.end());
  return isl_stat_ok;
}

vector<isl_point*> get_points(isl_union_set* s) {
    assert(s != nullptr);
    vector<isl_point*> point_vec;
    isl_union_set_foreach_set(s, get_points, &point_vec);
    return point_vec;
}

vector<isl_set*> get_sets(isl_union_set* m) {
  assert(m != nullptr);

  vector<isl_set*> map_vec;
  isl_union_set_foreach_set(m, get_set, &map_vec);

  return map_vec;
}

map<string, isl_set*> get_sets_in_map(isl_union_set* m) {
  assert(m != nullptr);

  vector<isl_set*> map_vec;
  isl_union_set_foreach_set(m, get_set, &map_vec);

  map<string, isl_set*> set_map;
  for (auto s: map_vec) {
      set_map.insert(make_pair(name(s), s));
  }
  return set_map;
}

vector<isl_map*> get_maps(isl_union_map* m) {
  assert(m != nullptr);

  vector<isl_map*> map_vec;
  isl_union_map_foreach_map(m, get_maps, &map_vec);

  return map_vec;
}

map<string, isl_map*> get_maps_in_map(isl_union_map* m) {
  assert(m != nullptr);

  vector<isl_map*> map_vec;
  isl_union_map_foreach_map(m, get_maps, &map_vec);
  map<string, isl_map*> map_map;
  for (auto m: map_vec) {
      map_map.insert(make_pair(domain_name(m), m));
  }

  return map_map;
}

isl_stat get_maps(isl_map* m, void* user) {
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

std::string str(isl_multi_aff* const pma) {
  auto ctx = isl_multi_aff_get_ctx(pma);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_multi_aff(p, cpy(pma));
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

std::string str(isl_union_pw_multi_aff* const pma) {
  auto ctx = isl_union_pw_multi_aff_get_ctx(pma);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_union_pw_multi_aff(p, pma);
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

isl_map* linear_address_map_lake(isl_set* s) {
    return linear_address_map_lake(s, 1);
}

isl_map* linear_address_map_lake(isl_set* s, int fetch_width) {
  string domain = name(s);
  int dim = num_dims(s);
  vector<string> var_names;
  vector<string> exprs;
  isl_val* stride = one(ctx(s));
  for (int i = dim-1; i >= 0; i--) {
    string var = "d" + str(i);
    var_names.push_back(var);
    string stridestr = str(stride);
    exprs.push_back(stridestr + "*" + var);
    auto interval = project_all_but(s, i);
    isl_val* extend = add(sub(lexmaxval(interval), lexminval(interval)), one(ctx(s)));
    stride = mul(stride, extend);
    if (to_int(stride) % fetch_width != 0) {
        stride = isl_val_int_from_si(ctx(s),
                to_int(stride) + fetch_width - to_int(stride) % fetch_width);
    }
  }
  std::reverse(var_names.begin(), var_names.end());
  string map_str = "{" + domain + sep_list(var_names, "[", "]", ", ") + " -> " + domain + sep_list(exprs, "[", "]", " + ") + " }";
  return isl_map_read_from_str(ctx(s), map_str.c_str());
}

isl_map* linear_address_map_lake_SR(isl_set* s, int fetch_width) {
  string domain = name(s);
  int dim = num_dims(s);
  vector<string> var_names;
  vector<string> exprs;
  isl_val* stride = one(ctx(s));
  //Inner stride
  int stride_innermost = stride_in_dim(s, dim - 1);
  cout << "Stride inner most:  " << stride_innermost << endl;
  fetch_width *= stride_innermost;
  for (int i = dim-1; i >= 0; i--) {
    string var = "d" + str(i);
    var_names.push_back(var);
    string stridestr = str(stride);
    exprs.push_back(stridestr + "*" + var);
    auto interval = project_all_but(s, i);
    isl_val* extend = add(sub(lexmaxval(interval), lexminval(interval)), one(ctx(s)));
    stride = mul(stride, extend);
    if (to_int(stride) % fetch_width != 0) {
        stride = isl_val_int_from_si(ctx(s),
                to_int(stride) + fetch_width - to_int(stride) % fetch_width);
    }
  }
  std::reverse(var_names.begin(), var_names.end());

  //Add a floor divide to remove the extra dimension
  string map_str = "{" + domain + sep_list(var_names, "[", "]", ", ") + " -> " +
      domain + "[floor(" + sep_list(exprs, "(", ")", " + ") + "/" + str(stride_innermost) + ")] }";
  cout << map_str << endl;
  return isl_map_read_from_str(ctx(s), map_str.c_str());
}

isl_map* linear_address_map_with_index(isl_set* s, vector<int> index) {
    return linear_address_map_with_index(s, index, 1);
}

isl_map* linear_domain_map_with_index(isl_set* s, unordered_set<int> index) {
  string domain = name(s);
  int dim = num_dims(s);
  vector<string> var_names;
  vector<string> out_var_names;
  vector<string> exprs;
  isl_val* stride = one(ctx(s));
  int index_visited = 0;
  for (int i = 0; i < dim; i++) {
    string var = "d" + str(i);
    var_names.push_back(var);
    if (elem(i, index)) {
      index_visited ++;
      string var = "d" + str(i);
      string stridestr = str(stride);
      exprs.push_back(stridestr + "*" + var);
      auto interval = project_all_but(s, dim-1-i);
      isl_val* extend = add(sub(lexmaxval(interval), lexminval(interval)), one(ctx(s)));
      stride = mul(stride, extend);
      if (index_visited == index.size()) {
          out_var_names.push_back(sep_list(exprs, "", "", "+"));
      }
    } else {
        out_var_names.push_back("d" + str(i));
    }
  }
  //Check if we visited all dimension need to be merged
  assert(index_visited == index.size());
  std::reverse(var_names.begin(), var_names.end());
  std::reverse(out_var_names.begin(), out_var_names.end());

  string map_str = "{" + domain + sep_list(var_names, "[", "]", ", ") + " -> "
      + domain + sep_list(out_var_names, "[", "]", " ,") + " }";
  return isl_map_read_from_str(ctx(s), map_str.c_str());
}

isl_map* linear_address_map_with_index(isl_set* s, vector<int> index, int fetch_width) {
  string domain = name(s);
  int dim = num_dims(s);
  vector<string> var_names;
  vector<string> exprs;
  isl_val* stride = one(ctx(s));
  for (int i = dim-1; i >= 0; i--) {
    string var = "d" + str(i);
    var_names.push_back(var);
  }
  for (int i : index) {
    string var = "d" + str(i);
    string stridestr = str(stride);
    exprs.push_back(stridestr + "*" + var);
    auto interval = project_all_but(s, i);
    isl_val* extend = add(sub(lexmaxval(interval), lexminval(interval)), one(ctx(s)));
    stride = mul(stride, extend);
    if (to_int(stride) % fetch_width != 0) {
        stride = isl_val_int_from_si(ctx(s),
                to_int(stride) + fetch_width - to_int(stride) % fetch_width);
    }
  }
  std::reverse(var_names.begin(), var_names.end());
  string map_str = "{" + domain + sep_list(var_names, "[", "]", ", ") + " -> " + domain + sep_list(exprs, "[", "]", " + ") + " }";
  return isl_map_read_from_str(ctx(s), map_str.c_str());
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
		//auto dim_name = isl_aff_get_dim_name(aff, isl_dim_in, i);
		string dim_name = "i" + to_string(i);
        isl_val *v = isl_aff_get_coefficient_val(aff, isl_dim_in, i);
        int int_v =  isl_val_get_num_si(v);
        coef_list->insert(std::make_pair(dim_name, int_v));
	}
    return isl_stat_ok;
}

isl_stat isl_pw_aff_get_coefficient_matrix( isl_set *set,  isl_aff *aff, void *user) {
    auto* coef_list = (map<int, int>*) user;

    int const_ = isl_val_get_num_si(isl_aff_get_constant_val(aff));
    //add the constant item to the coefficient matrix
    coef_list->insert(std::make_pair(0, const_));

	int n_div = isl_aff_dim(aff, isl_dim_in);
	for (int i = 0; i < n_div; ++i) {

		if (!isl_aff_involves_dims(aff, isl_dim_in, i, 1))
        {
			continue;
        }
		isl_val *v = isl_aff_get_coefficient_val(aff, isl_dim_in, i);
        int int_v =  isl_val_get_num_si(v);
        coef_list->insert(std::make_pair(i, int_v));
	}
    return isl_stat_ok;
}

vector<vector<int> > get_access_matrix_from_map(isl_map* acc_map) {
    auto mpa = isl_pw_multi_aff_from_map(acc_map);
    size_t var_dim = get_in_dim(acc_map);
    size_t addr_dim = get_out_dim(acc_map);
    vector<vector<int> > access_matrix(addr_dim, vector<int>(var_dim, 0));
    for (size_t i = 0; i < addr_dim; i ++) {
        auto pa = isl_pw_multi_aff_get_pw_aff(mpa, i);
        map<int, int> coef;
        isl_pw_aff_foreach_piece(pa, isl_pw_aff_get_coefficient_matrix, &coef);
        for (auto cc: coef){
            access_matrix[i][cc.first] = cc.second;
        }
    }
    return access_matrix;
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

		//if (!isl_aff_involves_dims(aff, isl_dim_in, i, 1))
        //{
		//	continue;
        //}
        string dim_name = "i" + to_string(i);
        //0 is reserved for constant
        name2idx_related->insert(std::make_pair(dim_name, i));
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
    return isl_map_set_dim_id(cpy(m), isl_dim_in, pos, name_id);
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

isl_map* gen_map_from_sched_vec(isl_ctx* ctx, vector<string> sched_vec, string op_name, int vec_dim, int fetch_width) {
    vector<string> var_list;
    var_list.push_back("root");
    int cnt = 0;
    for (string &it : sched_vec) {
        if (!is_number(it) ){
            var_list.push_back(it);
            if (cnt == vec_dim-1) {
              //consider the root=1
              it = to_string(fetch_width) + "*" + it;
            }
            cnt ++;
        }
    }
    string vars = sep_list(var_list, "[", "]", ",");
    string sched = sep_list(sched_vec, "[", "]", ",");
    return isl_map_read_from_str(ctx, string("{" + op_name + vars + " -> " + sched + "}").c_str());
}

vector<string> get_map_in_dim_id(isl_map* m) {
    vector<string> var_list;
    for (int i = 0; i < get_in_dim(m); i ++) {
        if (isl_map_has_dim_name(m, isl_dim_in, i)) {
            var_list.push_back(isl_map_get_dim_name(m, isl_dim_in, i));
        } else {
            var_list.push_back("i"+to_string(i));
        }
    }
    return var_list;
}

string get_in_dim_name(isl_map* m, int i) {
    return str(isl_map_get_dim_id(m, isl_dim_in, i));
}

isl_map* gen_hw_sched_from_sched_vec(isl_ctx* ctx, std::vector<string> sched_vec, vector<string> var_list, string op_name) {
    string vars = sep_list(var_list, "[", "]", ",");
    string sched = sep_list(sched_vec, "[", "]", ",");
    return isl_map_read_from_str(ctx, string("{" + op_name + vars + " -> " + sched + "}").c_str());
}

isl_map* gen_hw_sched_from_sched_vec(isl_ctx* ctx, std::vector<string> sched_vec, string op_name) {
    return gen_hw_sched_from_sched_vec(ctx, sched_vec, {"root", "i1"}, op_name);
}


unsigned get_in_dim(isl_map* const m) {
    return isl_map_dim(cpy(m), isl_dim_in);
}

unsigned get_out_dim(isl_map* const m) {
    return isl_map_dim(cpy(m), isl_dim_out);
}

unsigned get_dim(isl_set* const s) {
    return isl_set_dim(cpy(s), isl_dim_set);
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

int get_dim_extent(isl_set* const s, int pos) {
    return get_dim_max(s, pos) - get_dim_min(s, pos) + 1;
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

std::string str(isl_basic_map* const m) {
  auto ctx = isl_basic_map_get_ctx(m);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_basic_map(p, cpy(m));
  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  std::string r(rs);
  free(rs);

  return r;
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

isl_map* to_map(isl_basic_map* const m) {
  return isl_map_from_basic_map(m);
}

isl_map* to_map(isl_union_map* const m) {
  assert(m != nullptr);

  vector<isl_map*> map_vec;
  isl_union_map_foreach_map(m, get_maps, &map_vec);

  if (map_vec.size() != 1) {
    std::cout << "Error: Several maps in: " << str(m) << std::endl;
  }
  assert(map_vec.size() == 1);
  return map_vec.at(0);
}

isl_union_map* to_umap(isl_map* const m) {
  return isl_union_map_from_map(cpy(m));
}

isl_union_map* to_umap(isl_union_set* const m) {
  return isl_union_map_from_domain_and_range(cpy(m), cpy(m));
}

isl_ctx* ctx(isl_multi_aff* const m) {
  return isl_multi_aff_get_ctx(m);
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

isl_ctx* ctx(isl_basic_map* const m) {
  return isl_basic_map_get_ctx(m);
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

std::string codegen_c(isl_aff* const bset) {
  return codegen_c_v(bset);
  //auto ct = ctx(bset);
  //isl_printer *p;
  //p = isl_printer_to_str(ct);
  //p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  //p = isl_printer_print_aff(p, cpy(bset));

  //char* rs = isl_printer_get_str(p);
  //isl_printer_free(p);
  //std::string r(rs);
  //free(rs);

  //return r;

  //string r = str(bset);

  //regex cm("\\{ (.*)\\[(.*)\\] -> (.*)\\[(.*)\\] \\}");
  //smatch match;
  //auto res = regex_match(r, match, cm);

  //assert(res);

  //string range_name = match[3];
  //string range_values = match[4];
  //return range_name + parens(range_values);
}

std::string codegen_c(isl_multi_aff* const bset) {
  string r = str(bset);

  regex cm("\\{ (.*)\\[(.*)\\] -> (.*)\\[(.*)\\] \\}");
  smatch match;
  auto res = regex_match(r, match, cm);

  assert(res);

  string range_name = match[3];
  string range_values = match[4];
  //return range_name + parens(range_values);

  vector<string> aff_vals;
  for (auto aff : get_affs(bset)) {
    aff_vals.push_back(codegen_c(aff));
  }
  return range_name + sep_list(aff_vals, "(", ")", ", ");

  //string gp = match[3];
  //regex eqsign(" = ");
  //gp = regex_replace(gp, eqsign, " == ");
  //assert(false);
  //return "(" + gp + ")";
}

std::string codegen_c_v(isl_aff* const aff) {
  vector<string> ctrl_vars;
  for (int i = 0; i < num_in_dims(aff); i++) {
    //cout << "cv i = " << i << endl;
    const char* n = isl_aff_get_dim_name(aff, isl_dim_in, i);
    if (n != nullptr) {
      ctrl_vars.push_back(string(n));
    } else {
      ctrl_vars.push_back("i" + str(i));
    }
  }

  vector<string> terms;
  if (!is_zero(const_coeff(aff))) {
    terms.push_back(str(const_coeff(aff)));
  }
  for (int i = 0; i < num_in_dims(aff); i++) {
    if (!is_zero(get_coeff(aff, i))) {
      string cf = str(get_coeff(aff, i));
      string rn = ctrl_vars.at(i); // + brackets(str(i));
      terms.push_back(cf + "*" + rn);
    }
  }

  for (int d = 0; d < num_div_dims(aff); d++) {
    auto v = isl_aff_get_coefficient_val(aff, isl_dim_div, d);
    if (!is_zero(v)) {

      isl_aff * a = isl_aff_get_div(aff, d);
      isl_val * denom = isl_aff_get_denominator_val(a);
      int denom_int = to_int( denom);
      auto denom_str = str(denom);
      auto astr = codegen_c_v(isl_aff_scale_val(a, denom));

      assert(isl_val_is_int(v));

      if(ceil(log2(denom_int)) == log2(denom_int))
      {
        terms.push_back(parens(str(v) + "*" + "(" + astr + " >> " + str(log2(denom_int)) + ")"));


      } else{
        terms.push_back(parens(str(v) + "*" + "$rtoi($floor(" + astr + " / " + denom_str + "))"));

      }
    }
  }
  if (terms.size() == 0) {
    return "0";
  }
  string res_str = sep_list(terms, "(", ")", " + ");
  return parens(res_str);
}

std::string codegen_c(isl_constraint* const bset) {
  isl_aff* aff = isl_constraint_get_aff(bset);
  //if (num_div_dims(aff) == 1) {
    cout << "Constraint aff with div: " << str(aff) << endl;
    string cg =  parens(codegen_c_v(aff) + (isl_constraint_is_equality(bset) ? " == " : " >= ") + "0");
    cout << "cg = " << cg << endl;
    return cg;
    //assert(false);
    //assert(false);
  //}

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

std::string str(isl_set* const s) {
  assert(s != nullptr);
  auto ctx = isl_set_get_ctx(s);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_print_set(p, cpy(s));
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

uset* unn(const std::vector<uset*>& sets) {
  uset* res = nullptr;
  for (auto s : sets) {
    if (res == nullptr) {
      res = cpy(s);
    } else {
      res = unn(res, s);
    }
  }
  return res;
}

umap* unn(const std::vector<umap*>& sets) {
  umap* res = nullptr;
  for (auto s : sets) {
    if (res == nullptr) {
      res = cpy(s);
    } else {
      res = unn(res, s);
    }
  }
  return res;
}


isl_set* unn(const std::vector<isl_set*>& sets) {
  isl_set* res = nullptr;
  for (auto s : sets) {
    if (res == nullptr) {
      res = cpy(s);
    } else {
      res = unn(res, s);
    }
  }
  return res;
}

isl_set* unn(isl_set* const m0, isl_set* const m1) {
  return isl_set_union(cpy(m0), cpy(m1));
}

isl_map* diff(isl_map* const m0, isl_map* const m1) {
  return isl_map_subtract(cpy(m0), cpy(m1));
}

isl_set* diff(isl_set* const m0, isl_set* const m1) {
  return isl_set_subtract(cpy(m0), cpy(m1));
}

isl_union_set* diff(isl_union_set* const m0, isl_union_set* const m1) {
  return isl_union_set_subtract(cpy(m0), cpy(m1));
}

isl_union_set* unn(isl_union_set* const m0, isl_union_set* const m1) {
  return isl_union_set_union(cpy(m0), cpy(m1));
}

isl_union_map* diff(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_subtract(cpy(m0), cpy(m1));
}

isl_union_map* unn(isl_union_map* const m0, isl_union_map* const m1) {
  return isl_union_map_union(cpy(m0), cpy(m1));
}

isl_map* unn(isl_map* const m0, isl_map* const m1) {
  if (m0 == nullptr) {
    return m1;
  }
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

isl_map* simplify(isl_map* const m) {
  auto tmp = isl_map_remove_redundancies(cpy(m));
  isl_map_detect_equalities(tmp);
  return tmp;
}

isl_set* simplify(isl_set* const m) {
  return isl_set_remove_redundancies(cpy(m));
}

isl_map* simplify_expr(isl_map* const m) {
  return isl_map_from_pw_multi_aff(isl_pw_multi_aff_from_map(cpy(m)));
}

umap* simplify(umap* const m) {
  return to_umap(isl_map_from_pw_multi_aff(isl_pw_multi_aff_from_map(to_map(cpy(m)))));
}

bool single_valued(isl_map* const m0) {
  return isl_map_plain_is_single_valued(cpy(m0));
}

isl_map* coalesce_if_single_valued(isl_map* const m0) {
  auto coa_map = coalesce(m0);
  if (single_valued(coa_map) && ! single_valued(m0)){
    return coa_map;
  } else {
    return m0;
  }
}

isl_union_pw_qpolynomial* coalesce(isl_union_pw_qpolynomial* const m) {
  return isl_union_pw_qpolynomial_coalesce(cpy(m));
}

isl_union_set* coalesce(isl_union_set* const m0) {
  return isl_union_set_coalesce(cpy(m0));
}

isl_map* coalesce(isl_map* const m0) {
  return isl_map_coalesce(cpy(m0));
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

int stride_in_dim(isl_set* const s, size_t dim) {
    return isl_val_get_num_si(isl_set_get_stride(cpy(s), dim));
}

int stride_in_dim(isl_map* const m, size_t dim, size_t out_dim) {
    auto aff = get_aff_vec(m).at(out_dim);
    return to_int(get_coeff(aff, dim));
}

int stride_in_dim(isl_map* const m, size_t dim) {
    //assert(num_out_dims(m) == 1);
    //TODO: fix this by default take 0 dimension but not always correct
    auto aff = get_aff_vec(m).at(num_out_dims(m) - 1);
    return to_int(get_coeff(aff, dim));
}

int common_max_stride(isl_map* const m, int out_dim) {
    int cms = 0;
    //Skip root start from 1
    for (int in_dim=1; in_dim < num_in_dims(m); in_dim++){
        int s = stride_in_dim(m, in_dim, out_dim);
        int domain_range = get_domain_range(::domain(m), in_dim);
        // only count the stride with domain range large than 1
        if ((s > 0) && (domain_range > 1))
          cms = std::gcd(cms, s);
    }
    return cms;
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
  auto maps = get_maps(res);
  if (maps.size() == 0) {
    return "";
  }

  auto rep = pick(maps);
  auto range_rep = range(rep);
  int dim = num_dims(range_rep);

  vector<string> vars;
  for (int d = 0; d < dim; d++) {
    vars.push_back("t" + str(d));
  }
  string atomic_str =
    "{" + sep_list(vars, "[", "]", ", ") + " -> atomic[1] }";
  //assert(false);
  auto context = ctx(res);
  isl_ast_build* build = isl_ast_build_alloc(isl_union_map_get_ctx(res));
  auto options = isl_union_map_read_from_str(context, atomic_str.c_str());
  //auto options = isl_union_map_read_from_str(context, "{ [a, b, c, d] -> atomic[t] : 0 <= t <= 3}");
  //auto options = isl_union_map_read_from_str(context, "{ [a, b] -> atomic[1] : 0 <= t <= 1 }");
  //auto options = isl_union_map_read_from_str(context, "{ [a, b] -> atomic[t] : t = 0 }");
  build = isl_ast_build_set_options(build, options);
  isl_ast_node* code =
    isl_ast_build_node_from_schedule_map(build, cpy(res));

  char* code_str = isl_ast_node_to_C_str(code);
  std::string code_string(code_str);
  free(code_str);

  //for (auto m : maps) {
    //release(m);
  //}
  //release(range_rep);
  //isl_ast_node_free(code);
  isl_ast_build_free(build);
  //release(options);

  return code_string;
}

isl_map* get_domain_ii_transform(isl_ctx* ctx, isl_set* const s, int ii) {
  if (!(ii > 1)) {
    cout << "No need to transform domain" << endl;
    assert(false);
  }
  vector<string> var_list({"0"});
  for (size_t i = 0; i < num_dims(s)-1; i ++) {
    var_list.push_back("i" + to_string(i));
  }
  string var = sep_list(var_list, "[", "]", ",");
  string ii_var = "i" + to_string(num_dims(s) - 1);
  var_list.push_back(ii_var);
  string new_var = sep_list(var_list, "[", "]", ",");
  string ii_bd = "0 <= " + ii_var + "<=" + to_string(ii - 1);
  string op_name = name(s);
  auto ii_trans = isl_map_read_from_str(ctx,
          string("{ " + op_name + var + "->" + op_name + new_var + ":" + ii_bd + "}").c_str());
  return its(ii_trans, s);
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

isl_union_map* flatten_umap_domain(isl_ctx* ctx, isl_union_map* const um) {
  vector<umap*> cm;
  isl_union_map_foreach_map(um, flatten_map_domain, (void*)(&cm));
  umap* ret = isl_union_map_read_from_str(ctx, "{}");
  for (auto it: cm) {
    ret = unn(ret, it);
  }
  return ret;
}

isl_union_map* flatten_umap_domain(isl_ctx* ctx, isl_union_map* const um, map<string, int> ii_map) {
  umap* ret = isl_union_map_read_from_str(ctx, "{}");
  auto map_list = get_maps(um);
  for (auto m : map_list) {
    string dname = domain_name(m);
    auto flatten_m = flatten_map_domain_with_ii(m, ii_map.at(dname));
    ret = unn(ret, flatten_m);
  }
  return ret;
}

isl_union_map* remove_dep_domain_name(umap* um, string name) {
    auto ret = isl_union_map_remove_map_if(um, with_domain_name, (void*)(&name));
    return ret;
}

isl_bool with_domain_name(isl_map* m, void* user) {
    string* name = (string*) user;
    if(domain_name(m) == *name)
        return isl_bool_true;
    else
        return isl_bool_false;
}

isl_stat umap_lex_lt(isl_map* s,  void* user) {
  vector<umap*>* vals = (vector<umap*>*) user;
  vals->push_back(to_umap(lex_lt(s, s)));
  return isl_stat_ok;
}

isl_stat flatten_map_domain(isl_map* s, void* user) {
    vector<umap*>* vals = (vector<umap*>*) user;
    auto new_sched = flatten_map_domain_with_ii(s, 1);
    vals->push_back(new_sched);
    return isl_stat_ok;
}

umap* flatten_map_domain_with_ii(isl_map* s, int ii) {
    auto trans = flatten_map_domain_trans(s, ii);
    auto new_sched = dot(inv(trans), to_umap(s));
    return new_sched;
}

umap* flatten_map_domain_with_dim(umap* s, int dim_from_inner) {
    auto trans = flatten_map_domain_trans_with_dim(to_map(s), dim_from_inner);
    auto new_sched = dot(inv(trans), s);
    return new_sched;
}


umap* flatten_map_domain_with_dim_from_outer(isl_map* s, int dim_from_outer) {
    int dom_dim = get_in_dim(s);
    auto trans = flatten_map_domain_trans_with_dim(s, dom_dim - dim_from_outer);
    auto new_sched = dot(inv(trans), s);
    return new_sched;
}

umap* flatten_umap_domain_with_dim_from_outer(umap* um, int dim_from_outer) {
    umap* ret = isl_union_map_read_from_str(ctx(um), "{}");
    for (auto m : get_maps(um)) {
        auto flatten_m = flatten_map_domain_with_dim_from_outer(m, dim_from_outer);
        ret = unn(ret, flatten_m);
    }
    return ret;
}



umap* flatten_set_trans(isl_set* s, int ii) {
    auto dom = s;
    vector<int> dom_range;
    for (size_t i = 0; i < get_dim(s); i ++) {
        dom_range.push_back(get_dim_max(dom, i)+1);
    }
    vector<int> rolling_dim;
    for (size_t i = 0; i < dom_range.size(); i ++) {
        int dim = std::accumulate(dom_range.rbegin(),
                dom_range.rbegin() + i,
                ii, std::multiplies<int>());
        rolling_dim.push_back(dim);
    }
    std::reverse(rolling_dim.begin(), rolling_dim.end());
    auto ctx = isl_set_get_ctx(dom);
    umap* trans = isl_union_map_read_from_str(ctx, "{}");
    for (int itr = 0; itr < ii; itr ++) {
      vector<string> var_list, origin_var_list;
      origin_var_list.push_back("0");
      for (size_t i = 0; i < rolling_dim.size() - 1; i ++) {
          auto var_name = "i" + to_string(i);
          var_list.push_back(string(var_name) + "*" + to_string(rolling_dim.at(i+1)));
          origin_var_list.push_back(string(var_name));
      }
      var_list.push_back(to_string(itr));
      string var = sep_list(var_list, "", "", "+");
      var = "[0, " + var +"]";
      string origin_var = sep_list(origin_var_list, "[", "]", ",");
      string dom_name = name(dom);
      string map_str = "{" + dom_name + origin_var + "->" + dom_name + var +"}";
      isl_map* flatten_trans = isl_map_read_from_str(ctx, map_str.c_str());
      trans = unn(to_umap(flatten_trans), trans);
    }
    return trans;
}


umap* flatten_set_trans_with_dim_set(isl_set* dom, std::set<int> dim_id) {
    vector<int> dom_range;
    for (auto id: dim_id){
        dom_range.push_back(get_dim_max(dom, id)+1);
    }
    vector<int> rolling_dim;
    for (size_t i = 0; i < dom_range.size(); i ++) {
        int dim = std::accumulate(dom_range.rbegin(),
                dom_range.rbegin() + i,
                1, std::multiplies<int>());
        rolling_dim.push_back(dim);
    }
    std::reverse(rolling_dim.begin(), rolling_dim.end());
    auto ctx = isl_set_get_ctx(dom);
    umap* trans = isl_union_map_read_from_str(ctx, "{}");

    vector<string> origin_var_list, expr_list;
    for (size_t i = 0; i < get_dim(dom); i ++) {
        auto var_name = "i" + to_string(i);
        origin_var_list.push_back(string(var_name));
    }
    int i = 0;
    for (auto id : dim_id) {
        auto var_name = "i" + to_string(id);
        expr_list.push_back(string(var_name) + "*" + to_string(rolling_dim.at(i)));
        i ++;
    }
    vector<string> var_list;
    for (size_t i = 0; i < get_dim(dom); i ++) {
        if (dim_id.count(i) == 0) {
            var_list.push_back("i" + to_string(i));
        }
    }

    var_list.insert(
            var_list.begin() + *std::min_element(begin(dim_id), end(dim_id)),
            sep_list(expr_list, "", "", "+"));
    string origin_var = sep_list(origin_var_list, "[", "]", ",");
    string var = sep_list(var_list, "[", "]", ",");
    string dom_name = name(dom);
    string map_str = "{" + dom_name + origin_var + "->" + dom_name + var +"}";
    cout << map_str << endl;
    isl_map* flatten_trans = isl_map_read_from_str(ctx, map_str.c_str());
    trans = unn(to_umap(flatten_trans), trans);

    return trans;
}

umap* flatten_set_trans_with_dim(isl_set* dom, int dim_from_inner) {
    vector<int> dom_range;
    for (size_t i = 0; i < get_dim(dom); i ++) {
        dom_range.push_back(get_dim_max(dom, i)+1);
    }
    vector<int> rolling_dim;
    for (size_t i = 0; i < dom_range.size(); i ++) {
        int dim = std::accumulate(dom_range.rbegin(),
                dom_range.rbegin() + i,
                1, std::multiplies<int>());
        rolling_dim.push_back(dim);
    }
    std::reverse(rolling_dim.begin(), rolling_dim.end());
    auto ctx = isl_set_get_ctx(dom);
    umap* trans = isl_union_map_read_from_str(ctx, "{}");

    vector<string> origin_var_list, expr_list;
    origin_var_list.push_back("0");
    for (size_t i = 0; i < get_dim(dom)-1; i ++) {
        auto var_name = "i" + to_string(i+1);
        origin_var_list.push_back(string(var_name));
    }
    for (size_t i = get_dim(dom)-dim_from_inner; i < get_dim(dom); i ++) {
        auto var_name = "i" + to_string(i);
        expr_list.push_back(string(var_name) + "*" + to_string(rolling_dim.at(i)));
    }
    vector<string> var_list(origin_var_list.begin(), origin_var_list.end() - dim_from_inner);

    var_list.push_back(sep_list(expr_list, "", "", "+"));
    string origin_var = sep_list(origin_var_list, "[", "]", ",");
    string var = sep_list(var_list, "[", "]", ",");
    string dom_name = name(dom);
    string map_str = "{" + dom_name + origin_var + "->" + dom_name + var +"}";
    cout << map_str << endl;
    isl_map* flatten_trans = isl_map_read_from_str(ctx, map_str.c_str());
    trans = unn(to_umap(flatten_trans), trans);

    return trans;
}

umap* flatten_map_domain_trans_with_dim(isl_map* s, int dim_from_inner) {
    auto dom = domain(s);
    return flatten_set_trans_with_dim(dom, dim_from_inner);
}


umap* flatten_map_domain_trans(isl_map* s, int ii) {
    auto dom = domain(s);
    vector<int> dom_range;
    for (size_t i = 0; i < get_in_dim(s); i ++) {
        dom_range.push_back(get_dim_max(dom, i)+1);
    }
    vector<int> rolling_dim;
    for (size_t i = 0; i < dom_range.size(); i ++) {
        int dim = std::accumulate(dom_range.rbegin(),
                dom_range.rbegin() + i,
                ii, std::multiplies<int>());
        rolling_dim.push_back(dim);
    }
    std::reverse(rolling_dim.begin(), rolling_dim.end());
    auto ctx = isl_set_get_ctx(dom);
    umap* trans = isl_union_map_read_from_str(ctx, "{}");
    for (int itr = 0; itr < ii; itr ++) {
      vector<string> var_list, origin_var_list;
      origin_var_list.push_back("0");
      for (size_t i = 0; i < rolling_dim.size() - 1; i ++) {
          auto var_name = "i" + to_string(i);
          var_list.push_back(string(var_name) + "*" + to_string(rolling_dim.at(i+1)));
          origin_var_list.push_back(string(var_name));
      }
      var_list.push_back(to_string(itr));
      string var = sep_list(var_list, "", "", "+");
      var = "[0, " + var +"]";
      string origin_var = sep_list(origin_var_list, "[", "]", ",");
      string dom_name = name(dom);
      string map_str = "{" + dom_name + origin_var + "->" + dom_name + var +"}";
      isl_map* flatten_trans = isl_map_read_from_str(ctx, map_str.c_str());
      trans = unn(to_umap(flatten_trans), trans);
    }
    return trans;
}

isl_map* retrive_map_domain_dim(isl_map* flat_map, isl_set* dom) {
    auto trans = flatten_set_trans(dom, 1);
    auto new_sched = its(dot(trans, to_umap(flat_map)), dom);
    return to_map(new_sched);
}

isl_map* retrive_map_domain_with_dim(isl_map* flat_map, isl_set* dom) {
    int dim_from_inner = get_dim(dom) - get_in_dim(flat_map) + 1;
    auto trans = flatten_set_trans_with_dim(dom, dim_from_inner);
    auto new_sched = its(dot(trans, to_umap(flat_map)), dom);
    return to_map(new_sched);
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
//int bnd_int(isl_union_pw_qpolynomial_fold* bound);
//int int_lower_bound(isl_union_pw_qpolynomial* range_card);
//int int_upper_bound(isl_union_pw_qpolynomial* range_card);

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
  auto res = isl_set_read_from_str(ctx, str.c_str());
  if (res == nullptr) {
    cout << "Error: Bad string for isl_set: " << str << endl;
    assert(false);
  }
  return res;
}

isl_multi_aff* rdmultiaff(isl_ctx* ctx, const std::string& str) {
  auto res = isl_multi_aff_read_from_str(ctx, str.c_str());
  if (res == nullptr) {
    cout << "Error: Bad string for isl_multi_aff: " << str << endl;
    assert(false);
  }
  return res;
}
isl_aff* rdaff(isl_ctx* ctx, const std::string& str) {
  auto res = isl_aff_read_from_str(ctx, str.c_str());
  if (res == nullptr) {
    cout << "Error: Bad string for isl_aff: " << str << endl;
    assert(false);
  }
  return res;
}

umap* rdmap(isl_ctx* ctx, const std::string& s) {
  auto res = isl_union_map_read_from_str(ctx, s.c_str());
  if (res == nullptr) {
    cout << "Error: Bad string for isl_map: " << s << endl;
    assert(false);
  }
  return res;
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

isl_map* check_dim_id(isl_map* m) {
  cout << "before dim id set :" << str(m) << endl;

  for (int i = 0; i < num_in_dims(m); i++) {
      //cout << "DIM: " << i << "has dim_id : " << isl_map_has_dim_id(m, isl_dim_in, i) << endl;
      //cout << "DIM: " << i << "has dim_name: " << isl_map_has_dim_name(m, isl_dim_in, i) << endl;
      if ((!isl_map_has_dim_id(m, isl_dim_in, i)) && isl_map_has_dim_name(m, isl_dim_in, i)) {
          cout << "Map :" << str(m) << "has name but without id" << endl;
          assert(false);
      }
    if (!isl_map_has_dim_id(m, isl_dim_in, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(ctx(m), dn);
      assert(new_id != nullptr);
      m = isl_map_set_dim_id(m, isl_dim_in, i, new_id);
    }
  }
  cout << "After dim id set: " << str(m) << endl;
  return m;
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

isl_stat bmap_collect_constraints(isl_basic_map* m, void* user) {
  isl_basic_map_foreach_constraint(m, collect_constraint, user);
  return isl_stat_ok;
}

vector<isl_constraint*> constraints(isl_map* m) {
    vector<isl_constraint*> code_holder;
    isl_map_foreach_basic_map(m, bmap_collect_constraints, &code_holder);
    return code_holder;
}

isl_stat bmap_codegen_c(isl_basic_map* m, void* user) {
  isl_basic_map_foreach_constraint(m, codegen_constraint, user);

  return isl_stat_ok;
}

isl_map* delay_schedule_inner_most(isl_map* m, int delay) {
  auto c_vec = constraints(m);
  for (auto & c: c_vec) {
    size_t dom_dim = isl_constraint_dim(c, isl_dim_out);
    bool involve = isl_constraint_involves_dims(c, isl_dim_out, dom_dim - 1, 1);
    if (involve && isl_constraint_is_equality(c)) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      //This is the schedule vector you need to increment
      c = isl_constraint_set_constant_si(c, val - delay);
      cout << "Delayed Constraints: " << str(c) << endl;
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* double_schedule_rate(isl_map* m, int in_dim, int fetch_width) {
    cout << "schedule before double the rate: " << str(m) << endl;
  auto c_vec = constraints(m);
  int new_stride = -1;
  for (auto & c: c_vec) {
    bool involve = isl_constraint_involves_dims(c, isl_dim_in, in_dim-1, 1);
    if (involve && isl_constraint_is_equality(c)) {
      int upper_stride = -to_int(isl_constraint_get_coefficient_val(c, isl_dim_in, in_dim - 1));
      new_stride = upper_stride / 2;
      if(new_stride < fetch_width/2) {
          cout << "rate after double: " << new_stride << endl;
          cout << "ERROR: rate is too high, need to relax the inner loop ii, or change halide schedule" <<endl
              <<"since there are too many refetch for this access pattern." << endl;
          assert(false);
      }
    }
  }
  for (auto & c: c_vec) {
    bool involve = isl_constraint_involves_dims(c, isl_dim_in, in_dim, 1);
    if (involve && isl_constraint_is_equality(c)) {
      c = isl_constraint_set_coefficient_si(c, isl_dim_in, in_dim, -new_stride);
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }
  string dname = domain_name(m);
  auto ct = ctx(m);
  b_ret =
      isl_basic_map_set_tuple_id(b_ret, isl_dim_in, id(ct, dname));

  return isl_map_from_basic_map(b_ret);
}

isl_map* set_schedule_delay(isl_map* m, int delay) {
  auto c_vec = constraints(m);
  for (auto & c: c_vec) {
    size_t dom_dim = isl_constraint_dim(c, isl_dim_out);
    bool involve = isl_constraint_involves_dims(c, isl_dim_out, dom_dim - 1, 1);
    if (involve && isl_constraint_is_equality(c)) {
      c = isl_constraint_set_constant_si(c, -delay);
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }
  string dname = domain_name(m);
  auto ct = ctx(m);
  b_ret =
      isl_basic_map_set_tuple_id(b_ret, isl_dim_in, id(ct, dname));

  return isl_map_from_basic_map(b_ret);
}

isl_map* delay_schedule_domain_dim(isl_map* m, int dom_dim, int delay) {
  auto c_vec = constraints(m);
  for (auto & c: c_vec) {
    bool involve = isl_constraint_involves_dims(c, isl_dim_in, dom_dim, 1);
    if (involve && isl_constraint_is_equality(c)) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      //This is the schedule vector you need to increment
      c = isl_constraint_set_constant_si(c, val - delay);
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

int get_peel_schedule_domain_dim(isl_map* m, int dom_dim) {
  auto c_vec = constraints(m);
  auto out_dim = num_out_dims(m);
  int target_dim;
  for (auto & c: c_vec) {
    bool involve = isl_constraint_involves_dims(c, isl_dim_in, dom_dim, 1);
    if (involve && isl_constraint_is_equality(c)) {
      for (int i = 0; i < out_dim; i ++) {
        if (isl_constraint_involves_dims(c, isl_dim_out, i, 1)) {
          target_dim = i;
          break;
        }
      }
      break;
    }
  }
  return target_dim;
}

isl_map* peel_schedule_domain_dim(isl_map* m, int dom_dim, int delay) {
  auto c_vec = constraints(m);
  auto out_dim = num_out_dims(m);
  int target_dim;
  for (auto & c: c_vec) {
    bool involve = isl_constraint_involves_dims(c, isl_dim_in, dom_dim, 1);
    if (involve && isl_constraint_is_equality(c)) {
      for (int i = 0; i < out_dim; i ++) {
        if (isl_constraint_involves_dims(c, isl_dim_out, i, 1)) {
          target_dim = i;
          break;
        }
      }
      break;
    }
  }
  for (auto & c: c_vec) {
    bool involve = isl_constraint_involves_dims(c, isl_dim_out, target_dim - 1, 1);
    if(involve && isl_constraint_is_equality(c)) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      //This is the schedule vector you need to increment
      c = isl_constraint_set_constant_si(c, val - delay);
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* remove_irrelevant_in_dim(isl_map* m) {
    vector<bool> rel_map = relation_map(m);
    if (rel_map.size() == 0)
        return m;
    vector<int> rem_dim;
    isl_map* ret = cpy(m);
    isl_set* dom = domain(m);
    int dim = 0;
    for (bool is_rel: rel_map) {
        if (dim == 0) {
            dim ++;
            continue;
        }
        if (!is_rel && (get_dim_extent(dom, dim) == 1))
            rem_dim.push_back(dim);
        dim ++;
    }
    if (rem_dim.size()) {
        std::reverse(rem_dim.begin(), rem_dim.end());
        cout << "remove dimension: " << rem_dim << endl;

        for (int in_dim: rem_dim) {
            ret = isl_map_project_out(ret, isl_dim_in, in_dim, 1);
        }
        auto ct = ctx(m);
        string dname;
        dname = domain_name(m);
        isl_map_set_tuple_id(ret, isl_dim_in, id(ct, dname));

    }

    return ret;
}

isl_map* set_in_dim_to_val(isl_map* m, int in_dim, int val) {
    isl_map* ret = isl_map_upper_bound_si(m, isl_dim_in, in_dim, val);
    ret = isl_map_lower_bound_si(ret, isl_dim_in, in_dim, val);
    return ret;
}

isl_map* remove_in_dims(isl_map* m, vector<int> remove_dims) {
    //cout << "map need to remove in dim: " << str(m) << endl;
    std::sort(remove_dims.begin(), remove_dims.end(), std::greater<int>());
    auto tmp = cpy(m);
    for (int dim: remove_dims) {
      if (get_dim_extent(domain(tmp), dim) > 1) {
        //if in dim span more than 1, set the dim to the left most point
        tmp = set_in_dim_to_val(tmp, dim, get_dim_min(domain(tmp), dim));
      }
      tmp = isl_map_project_out(tmp, isl_dim_in, dim, 1);
    }
    isl_map_set_tuple_id(tmp, isl_dim_in, id(ctx(m), domain_name(m)));
    return tmp;
}

vector<bool> relation_map(isl_map* m) {
  size_t dom_dim = num_in_dims(m);
  vector<bool> rel(dom_dim, false);
  //cout << str(m) << endl;
  for (auto aff: get_aff_vec(m)){
      for (int i = 0; i < dom_dim; i ++) {
        if (isl_aff_involves_dims(aff, isl_dim_in, i, 1)) {
          rel.at(i) = true;
        }
      }
  }
  return rel;
}

vector<int> out_involve_dim(isl_map* m, int in_dim){
    vector<int> ret;
    auto aff_vec = get_aff_vec(m);
    for (int i = 0; i < aff_vec.size(); i ++) {
        if(isl_aff_involves_dims(aff_vec.at(i), isl_dim_in, in_dim, 1)) {
            ret.push_back(i);
        }
    }
    return ret;
}

vector<int> in_involve_dim(isl_map* m, int out_dim){
    vector<int> ret;
    size_t dom_dim = num_in_dims(m);
    auto aff = get_aff_vec(m).at(out_dim);
    for (int i = 0; i < dom_dim; i ++) {
        if(isl_aff_involves_dims(aff, isl_dim_in, i, 1)) {
            ret.push_back(i);
        }
    }
    return ret;
}

int get_involve_dim(isl_map* m, int out_dim) {
  size_t dom_dim = num_in_dims(m);
  auto aff = get_aff_vec(m).at(out_dim);
  for (int i = 0; i < dom_dim; i ++) {
    if (isl_aff_involves_dims(aff, isl_dim_in, i, 1)) {
        return i;
    }
  }
  cout << "Error: no input dim involve with this out dim" << endl;
  assert(false);
}

int get_out_padding_dimension(isl_map* m, int in_dim) {
    vector<pair<int, int>> maxElementVec;
    for(int i = 0; i < num_out_dims(m); i ++) {
        vector<int> involve_dim = in_involve_dim(m, i);
        if (involve_dim.size() == 0) {
            continue;
        }
        cout << "dim: " << i << " involve : " << involve_dim << endl;
        maxElementVec.push_back( {i,
                *(std::max_element(involve_dim.begin(), involve_dim.end()))});
    }
    for(auto it = maxElementVec.begin(); it != maxElementVec.end()-1; it ++ ) {
        if (it == maxElementVec.begin() && (in_dim < it->second)) {
            cout << "Insert reaccess indim: " << in_dim << " to outdim : " << it->first << endl;
            return it->first;
        }
        if ((in_dim > it->second) && (in_dim <= (it+1)->second)) {
            cout << "Insert reaccess indim: " << in_dim << " to outdim : " << (it + 1)->first << endl;
            return (it + 1)->first;

        }
    }
    cout << "WARMING: fall back plan just pad in beginning" << endl;
    return 0;
}

//Get the map for shift reg
isl_map* get_shift_map(isl_map* m) {

  auto c_vec = constraints(m);
  for (auto & c: c_vec) {

    size_t dom_dim = isl_constraint_dim(c, isl_dim_in);
    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dom_dim - 1, 1);

    //shift the constraint by 1
    if (involve && !isl_constraint_is_equality(c)) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_lower_bound(c, isl_dim_in, dom_dim - 1))
        c = isl_constraint_set_constant_si(c , val+1);
      else
        c = isl_constraint_set_constant_si(c , val-1);
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

int get_pad_remainder(isl_map* am, int dim_id, int fetch_width) {
  return (get_dim_max(::domain(am), dim_id) + 1) % fetch_width;
}

isl_map* pad_to_domain_left_ubuf_map(isl_map* m, int dom_dim_id, int depth) {

  auto c_vec = constraints(m);
  for (auto & c: c_vec) {

    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dom_dim_id, 1);

    //shift the constraint by 1
    if (involve) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_equality(c)) {
          //c = isl_constraint_set_constant_si(c, val + depth);
      } else {
        if (isl_constraint_is_lower_bound(c, isl_dim_in, dom_dim_id))
          c = isl_constraint_set_constant_si(c , val+depth);
      }
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* add_relation_ubuf_map(isl_map* m, int dom_dim_id, int range_dim_id) {

  auto c_vec = constraints(m);
  auto rel_map = relation_map(m);
  assert(rel_map.at(dom_dim_id) == false);
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto & c: c_vec) {
    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_out, range_dim_id, 1);
    if (involve) {
      int stride = to_int(isl_constraint_get_coefficient_val(c, isl_dim_out, range_dim_id));
      c = isl_constraint_set_coefficient_si(c, isl_dim_in, dom_dim_id, -stride);
    }
  }
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* pad_to_domain_ubuf_map(isl_map* m, int dom_dim_id, int depth) {

  auto c_vec = constraints(m);
  vector<isl_constraint*> new_cons;
  for (auto & c: c_vec) {

    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dom_dim_id, 1);

    //shift the constraint by 1
    if (involve) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_equality(c)) {
          bool involve_range = false;
          for (int i = 0; i < get_out_dim(m); i ++) {
            involve_range = involve_range || isl_constraint_involves_dims(c, isl_dim_out, i, 1);
          }

          if (involve_range) {
              new_cons.push_back(c);
              continue;
          }
          auto c_min = isl_constraint_alloc_inequality(get_local_space(c));
          c_min = isl_constraint_set_constant_si(c_min, val);
          c_min = isl_constraint_set_coefficient_si(c_min, isl_dim_in, dom_dim_id, 1);
          auto c_max = isl_constraint_alloc_inequality(get_local_space(c));
          c_max = isl_constraint_set_constant_si(c_max, val+1);
          c_max = isl_constraint_set_coefficient_si(c_max, isl_dim_in, dom_dim_id, -1);
          new_cons.push_back(c_max);
          new_cons.push_back(c_min);
      } else {
        if (isl_constraint_is_upper_bound(c, isl_dim_in, dom_dim_id))
          c = isl_constraint_set_constant_si(c , val+depth);
        new_cons.push_back(c);
      }
    } else {
        new_cons.push_back(c);
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: new_cons)
      b_ret = isl_basic_map_add_constraint(b_ret, c);

  return isl_map_from_basic_map(b_ret);
}

isl_map* pad_to_domain_begin_ubuf_map(isl_map* m, int dom_dim_id, int depth) {

  auto c_vec = constraints(m);
  for (auto & c: c_vec) {

    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dom_dim_id, 1);

    //shift the constraint by 1
    if (involve) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_equality(c)) {
        auto stride = isl_val_get_num_si(
                isl_constraint_get_coefficient_val(c, isl_dim_in, dom_dim_id));
        cout << "stride: " << stride << endl;
        c = isl_constraint_set_constant_si(c, val - depth*stride);
      } else {
        if (isl_constraint_is_upper_bound(c, isl_dim_in, dom_dim_id))
          c = isl_constraint_set_constant_si(c , val + depth);
      }
    }
  }

  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* reset_domain_coeff(isl_map* m, int dom_dim_id, int val) {

  auto c_vec = constraints(m);
  for (auto & c: c_vec) {

    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dom_dim_id, 1);

    //shift the constraint by 1
    if (involve) {
      if (isl_constraint_is_equality(c)) {
          c = isl_constraint_set_coefficient_si(c, isl_dim_in, dom_dim_id, 0);
      }
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* pad_to_domain_map(isl_map* m, int depth) {

  auto c_vec = constraints(m);
  for (auto & c: c_vec) {

    size_t dom_dim = isl_constraint_dim(c, isl_dim_in);
    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dom_dim - 1, 1);

    //shift the constraint by 1
    if (involve) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_equality(c)) {
          c = isl_constraint_set_constant_si(c, val + depth);
      } else {
        if (isl_constraint_is_upper_bound(c, isl_dim_in, dom_dim - 1))
          c = isl_constraint_set_constant_si(c , val+depth);
      }
    }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

//method to transform the domain to positive integer
isl_map* shift_domain_map(isl_map* m, vector<int> shift_depth) {

  auto c_vec = constraints(m);
  assert(shift_depth.size() == get_in_dim(m));
  for (int dim = 0; dim < get_in_dim(m); dim ++) {
  auto depth = shift_depth.at(dim);

  //no need to pad for the dimension with positive bound
  if (depth == 0)
    continue;

  for (auto & c: c_vec) {

    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_in, dim, 1);

    //shift the constraint by 1
    if (involve) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_equality(c)) {
          c = isl_constraint_set_constant_si(c, val + depth);
      } else {
        if (isl_constraint_is_upper_bound(c, isl_dim_in, dim))
          c = isl_constraint_set_constant_si(c , val+depth);
        else
          c = isl_constraint_set_constant_si(c , val-depth);
      }
    }
  }

  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

//method to transform the range to positive integer
isl_map* shift_range_map(isl_map* m, vector<int> shift_depth) {

  auto c_vec = constraints(m);
  assert(get_out_dim(m) == shift_depth.size());
  for (int dim = 0; dim < get_out_dim(m); dim ++) {
  auto depth = shift_depth.at(dim);

  //no need to pad for the dimension with positive bound
  if (depth == 0)
    continue;

  for (auto & c: c_vec) {

    bool involve;
    involve =  isl_constraint_involves_dims(c, isl_dim_out, dim, 1);

    //shift the constraint by 1
    if (involve) {
      auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
      if (isl_constraint_is_equality(c)) {
          c = isl_constraint_set_constant_si(c, val - depth);
      }
    }

  }
  }
  auto b_ret = isl_basic_map_universe(get_space(m));
  for (auto c: c_vec) {
      b_ret = isl_basic_map_add_constraint(b_ret, c);
  }

  return isl_map_from_basic_map(b_ret);
}

isl_map* assign_domain_to_map(isl_map* m, isl_set* new_domain) {
    string origin_dom_name = domain_name(m);
    string new_dom_name = name(new_domain);
    assert(origin_dom_name == new_dom_name);

    auto c_vec = constraints(m);
    vector<isl_constraint*> new_c;

    //peel off all the domain constraints
    for (auto c : c_vec) {
        if (isl_constraint_is_equality(c)) {
            new_c.push_back(c);
            //cout << "\t sched map has constraint: " << str(c) << endl;
        }
    }
    //for (auto c : origin_c_vec) {
    //    //get relation from origin map
    //    if (isl_constraint_is_equality(c)) {
    //        new_c.push_back(c);
    //    }
    //}
    auto ret = isl_basic_map_universe(get_space(m));
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
    }

    auto ret_m = isl_map_from_basic_map(ret);
    return its(ret_m, new_domain);
}


int get_innermost_sched_index(isl_map* m) {
    auto c_vec = constraints(m);
    for (auto c : c_vec) {
        size_t range_dim = isl_constraint_dim(c, isl_dim_out);
        bool involve = isl_constraint_involves_dims(c, isl_dim_out, range_dim - 1, 1);
        if (involve && isl_constraint_is_equality(c)) {
            int val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
            return val;
        }
    }
    cout << "Should not reach here!" << endl;
    assert(false);
    return 0;
}

//delay the execution
isl_map* delay_sched_map(isl_map* m, isl_map* write_sched) {
    auto c_vec = constraints(m);
    vector<isl_constraint*> new_c;
    int idx = get_innermost_sched_index(write_sched);
    //cout << "\tinner most sched vector is " << idx << " in schedule : " << str(write_sched) << endl;
    for (auto c : c_vec) {
        size_t range_dim = isl_constraint_dim(c, isl_dim_out);
        bool involve = isl_constraint_involves_dims(c, isl_dim_out, range_dim - 1, 1);
        if (involve && isl_constraint_is_equality(c)) {
            auto val = isl_val_get_num_si(isl_constraint_get_constant_val(c));
            c = isl_constraint_set_constant_si(c, idx - 1);
        }
        new_c.push_back(c);
    }
    auto ret = isl_basic_map_universe(get_space(m));
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
    }

    auto ret_m = isl_map_from_basic_map(ret);
    return ret_m;
}


vector<isl_constraint*> constraints(isl_basic_set* s) {
  vector<isl_constraint*> code_holder;
  bset_collect_constraints(s, &code_holder);
  return code_holder;
}

vector<isl_constraint*> constraints(isl_set* s) {
  vector<isl_constraint*> code_holder;
  isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  return code_holder;

}

std::string codegen_c(isl_basic_set* const s) {
  if (empty(s)) {
    return "false";
  }

  vector<isl_constraint*> code_holder;
  bset_collect_constraints(s, &code_holder);
  //isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  vector<string> set_strings;
  for (auto hc : code_holder) {
    set_strings.push_back(codegen_c(hc));
  }

  if (set_strings.size() == 0) {
    return "true";
  }
  return sep_list(set_strings, "(", ")", " && ");
}

std::string codegen_c(isl_set* const s) {
  if (empty(s)) {
    return "false";
  }

  vector<string> set_strings;
  for (auto bset : get_basic_sets(s)) {
    set_strings.push_back(codegen_c(bset));
  }
  //vector<isl_constraint*> code_holder;
  //isl_set_foreach_basic_set(s, bset_collect_constraints, &code_holder);
  //vector<string> set_strings;
  //for (auto hc : code_holder) {
    //set_strings.push_back(codegen_c(hc));
  //}

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
      cout << "sched vector constraints: " << str(hc) << endl;
      auto sp = get_space(hc);
      sp = isl_space_add_dims(sp, isl_dim_out, 1);
      auto cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
      cons = isl_constraint_set_constant_si(cons, -1);
      cons = isl_constraint_set_coefficient_si(cons, isl_dim_out, 3, 1);
      cout << "constraints space:" << str(sp) << endl;
      cout << "constraints :" << str(cons) << endl;
      for (size_t i = 0; i < vec_dim; i ++) {
          bool involve =  isl_constraint_involves_dims(hc, isl_dim_set, i, 1);
          if (involve) {
              if (isl_constraint_is_equality(hc))
                  sched_vec[i] = to_string(-isl_val_get_num_si(isl_constraint_get_constant_val(hc)));
              else {
                  sched_vec[i] = "i" + to_string(i);
              }
          }
      }
  }
  return sched_vec;
}

std::string codegen_c(isl_union_set* s) {
  if (empty(s)) {
    return "false";
  }

  vector<isl_set*> code_holder;
  isl_union_set_foreach_set(s, uset_collect_set, &code_holder);
  vector<string> set_strings;
  for (auto hc : code_holder) {
    set_strings.push_back(codegen_c(hc));
  }

  if (set_strings.size() == 0) {
    return "true";
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
    string op = domain_name(to_map(um));
    for (size_t dim = 0; dim < sched_vec.size(); dim ++) {
        if (!is_number(sched_vec[dim])) {
            auto it = sched_vec.begin() + dim;
            sched_vec.insert(it, pad_val);
            break;
        }
    }
    return to_umap(gen_map_from_sched_vec(ctx, sched_vec, op));
}

isl_constraint* pad_dim_to_constraint(isl_constraint* c) {
  auto sp = get_space(c);
  sp = isl_space_add_dims(sp, isl_dim_out, 1);
  isl_constraint* cons;
  if (isl_constraint_is_equality(c)) {
    cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
  } else {
    cons = isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
  }
  cons = isl_constraint_set_constant_val(cons, isl_constraint_get_constant_val(c));
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_in); i ++) {
    cons = isl_constraint_set_coefficient_val(cons, isl_dim_in, i,
            isl_constraint_get_coefficient_val(c, isl_dim_in, i));
  }
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_out); i ++) {
    if (isl_constraint_involves_dims(c, isl_dim_out, i, 1)) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_out, i,
           isl_constraint_get_coefficient_val(c, isl_dim_out, i));
    }
  }
  //cout << "rewrite constraits: " << str(cons) << endl;
  return cons;
}

//Pad an empty dimension
isl_constraint* pad_dim_to_constraint_domain(isl_constraint* c, int dim_in, int dim_out, int stride) {
  auto sp = get_space(c);
  sp = isl_space_insert_dims(sp, isl_dim_in, dim_in, 1);
  isl_constraint* cons;
  if (isl_constraint_is_equality(c)) {
    cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
  } else {
    cons = isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
  }
  cons = isl_constraint_set_constant_val(cons, isl_constraint_get_constant_val(c));
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_in)+1; i ++) {
    if (i < dim_in) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_in, i,
            isl_constraint_get_coefficient_val(c, isl_dim_in, i));
    } else if (i > dim_in) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_in, i,
            isl_constraint_get_coefficient_val(c, isl_dim_in, i-1));
    }
  }
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_out); i ++) {
    if (isl_constraint_involves_dims(c, isl_dim_out, i, 1)) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_out, i,
           isl_constraint_get_coefficient_val(c, isl_dim_out, i));
      if (i == dim_out) {
        cons = isl_constraint_set_coefficient_si(cons, isl_dim_in, dim_in, -stride);
      }
    }
  }
  //cout << "rewrite constraits: " << str(cons) << endl;
  return cons;
}

isl_map* add_more_dim_to_map_with_stride(isl_map* const um, int in_dim, int out_dim, int stride, int bd) {
    auto sched_map = um;
    auto c_vec = constraints(sched_map);
    vector<isl_constraint*> new_c;

    //pad the space for the original constraints
    for (auto c : c_vec) {
        //cout << "\tconstraints before padding: " << str(c) << endl;
        auto tmp = pad_dim_to_constraint_domain(c, in_dim, out_dim, stride);
        //cout << "\tconstraints after padding: " << str(tmp) << endl;
        new_c.push_back(tmp);
    }

    auto sp = get_space(pick(new_c));
    auto lb= isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
    lb = isl_constraint_set_constant_si(lb, 0);
    lb = isl_constraint_set_coefficient_si(lb, isl_dim_in, in_dim, 1);
    new_c.push_back(lb);

    auto ub= isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
    ub = isl_constraint_set_constant_si(ub, bd-1);
    ub = isl_constraint_set_coefficient_si(ub, isl_dim_in, in_dim, -1);
    new_c.push_back(ub);

    auto ret = isl_basic_map_universe(sp);
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
        //cout << "new map in construction: " << str(ret) << endl;
    }

    auto ret_m = isl_map_from_basic_map(ret);
    ret_m = isl_map_set_tuple_id(ret_m, isl_dim_in, isl_map_get_tuple_id(um, isl_dim_in));
    //ret_m = isl_map_set_tuple_id(ret_m, isl_dim_out, isl_map_get_tuple_id(um, isl_dim_out));
    return ret_m;
}

isl_constraint* pad_dim_to_constraint_domain_and_range(isl_constraint* c, int dim_in, int dim_out) {
  auto sp = get_space(c);
  sp = isl_space_insert_dims(sp, isl_dim_in, dim_in, 1);
  sp = isl_space_add_dims(sp, isl_dim_out, 1);
  isl_constraint* cons;
  if (isl_constraint_is_equality(c)) {
    cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
  } else {
    cons = isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
  }
  cons = isl_constraint_set_constant_val(cons, isl_constraint_get_constant_val(c));
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_in)+1; i ++) {
    if (i < dim_in) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_in, i,
            isl_constraint_get_coefficient_val(c, isl_dim_in, i));
    } else if (i > dim_in) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_in, i,
            isl_constraint_get_coefficient_val(c, isl_dim_in, i-1));
    }
  }
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_out); i ++) {
    if (isl_constraint_involves_dims(c, isl_dim_out, i, 1)) {
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_out, i+1,
           isl_constraint_get_coefficient_val(c, isl_dim_out, i));
    }
  }
  //cout << "rewrite constraits: " << str(cons) << endl;
  return cons;
}

isl_map* add_more_dim_to_map_domain_and_range(isl_map* const um, int in_dim, int out_dim, int stride, int bd) {
    auto sched_map = um;
    auto c_vec = constraints(sched_map);
    vector<isl_constraint*> new_c;

    //pad the space for the original constraints
    for (auto c : c_vec) {
        auto tmp = pad_dim_to_constraint_domain_and_range(c, in_dim, out_dim);
        new_c.push_back(tmp);
    }

    auto sp = get_space(pick(new_c));
    auto lb= isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
    lb = isl_constraint_set_constant_si(lb, 0);
    lb = isl_constraint_set_coefficient_si(lb, isl_dim_in, in_dim, 1);
    new_c.push_back(lb);

    auto ub= isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
    ub = isl_constraint_set_constant_si(ub, bd-1);
    ub = isl_constraint_set_coefficient_si(ub, isl_dim_in, in_dim, -1);
    new_c.push_back(ub);

    auto cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
    cons = isl_constraint_set_coefficient_si(cons, isl_dim_out, out_dim , stride);
    cons = isl_constraint_set_coefficient_si(cons, isl_dim_in, in_dim , -1);
    new_c.push_back(cons);

    auto ret = isl_basic_map_universe(sp);
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
    }

    auto ret_m = isl_map_from_basic_map(ret);
    ret_m = isl_map_set_tuple_id(ret_m, isl_dim_in, isl_map_get_tuple_id(um, isl_dim_in));
    ret_m = isl_map_set_tuple_id(ret_m, isl_dim_out, isl_map_get_tuple_id(um, isl_dim_out));
    return ret_m;
}

isl_map* pad_one_more_dim_to_sched_map_innermost(isl_map* const um, int pad_val) {
    auto sched_map = um;
    auto c_vec = constraints(sched_map);
    vector<isl_constraint*> new_c;

    //pad the space for the original constraints
    for (auto c : c_vec) {
        auto tmp = pad_dim_to_constraint(c);
        new_c.push_back(tmp);
    }

    auto sp = get_space(pick(new_c));
    auto cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
    int out_dim = isl_constraint_dim(cons, isl_dim_out);
    cons = isl_constraint_set_constant_si(cons, -pad_val);
    cons = isl_constraint_set_coefficient_si(cons, isl_dim_out, out_dim - 1, 1);
    new_c.push_back(cons);

    auto ret = isl_basic_map_universe(sp);
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
    }

    auto ret_m = isl_map_from_basic_map(ret);
    return ret_m;
}

umap* pad_one_more_dim_to_sched_map_innermost(umap* const um, int pad_val) {
    auto sched_map = to_map(um);
    auto c_vec = constraints(sched_map);
    vector<isl_constraint*> new_c;

    //pad the space for the original constraints
    for (auto c : c_vec) {
        auto tmp = pad_dim_to_constraint(c);
        new_c.push_back(tmp);
    }

    auto sp = get_space(pick(new_c));
    auto cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
    int out_dim = isl_constraint_dim(cons, isl_dim_out);
    cons = isl_constraint_set_constant_si(cons, -pad_val);
    cons = isl_constraint_set_coefficient_si(cons, isl_dim_out, out_dim - 1, 1);
    new_c.push_back(cons);

    auto ret = isl_basic_map_universe(sp);
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
    }

    auto ret_m = isl_map_from_basic_map(ret);
    return to_umap(ret_m);
}

isl_constraint* pad_dim_to_constraint(isl_constraint* c, int dim_id) {
  auto sp = get_space(c);
  sp = isl_space_add_dims(sp, isl_dim_out, 1);
  isl_constraint* cons;
  if (isl_constraint_is_equality(c)) {
    cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
  } else {
    cons = isl_constraint_alloc_inequality(isl_local_space_from_space(cpy(sp)));
  }
  cons = isl_constraint_set_constant_val(cons, isl_constraint_get_constant_val(c));
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_in); i ++) {
    cons = isl_constraint_set_coefficient_val(cons, isl_dim_in, i,
            isl_constraint_get_coefficient_val(c, isl_dim_in, i));
  }
  for (size_t i = 0; i < isl_constraint_dim(c, isl_dim_out); i ++) {
    if (isl_constraint_involves_dims(c, isl_dim_out, i, 1)) {
      int new_dim = i;
      if (i >= dim_id)
          new_dim += 1;
      cons = isl_constraint_set_coefficient_val(cons, isl_dim_out, new_dim,
           isl_constraint_get_coefficient_val(c, isl_dim_out, i));
    }
  }
  //cout << "rewrite constraits: " << str(cons) << endl;
  return cons;
}

umap* pad_one_more_dim_to_sched_map_with_id(umap* const um, int dim_id, int pad_val) {
    auto sched_map = to_map(um);
    auto c_vec = constraints(sched_map);
    vector<isl_constraint*> new_c;

    //pad the space for the original constraints
    for (auto c : c_vec) {
        auto tmp = pad_dim_to_constraint(c, dim_id);
        new_c.push_back(tmp);
    }

    auto sp = get_space(pick(new_c));
    auto cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
    cons = isl_constraint_set_constant_si(cons, -pad_val);
    cons = isl_constraint_set_coefficient_si(cons, isl_dim_out, dim_id, 1);
    new_c.push_back(cons);

    auto ret = isl_basic_map_universe(sp);
    for (auto c : new_c) {
        ret = isl_basic_map_add_constraint(ret, c);
    }

    auto ret_m = isl_map_from_basic_map(ret);
    return to_umap(ret_m);
}
//umap* pad_one_more_dim_relation_to_map(umap* const um, int in_dim, int out_dim, int stride) {
//    return pad_one_more_dim_relation_to_map(um, {in_dim}, out_dim, stride);
//}

umap* pad_one_more_dim_relation_to_map(umap* const um, vector<int> in_dims, int out_dim, int stride) {
  auto sched_map = to_map(um);
  auto c_vec = constraints(sched_map);
  vector<isl_constraint*> new_c;

  //pad the space for the original constraints
  for (auto c : c_vec) {
      auto tmp = pad_dim_to_constraint(c, out_dim);
      new_c.push_back(tmp);
  }

  auto sp = get_space(pick(new_c));
  auto cons = isl_constraint_alloc_equality(isl_local_space_from_space(cpy(sp)));
  int st = stride;
  cons = isl_constraint_set_coefficient_si(cons, isl_dim_out, out_dim, -1);
  for (int in_dim : in_dims) {
    cons = isl_constraint_set_coefficient_si(cons, isl_dim_in, in_dim, st);
    st *= get_domain_range(::domain(sched_map), in_dim);
  }
  new_c.push_back(cons);

  auto ret = isl_basic_map_universe(sp);
  for (auto c : new_c) {
      ret = isl_basic_map_add_constraint(ret, c);
  }

  auto ct = ctx(um);
  auto ret_m = isl_map_from_basic_map(ret);
  string rname;
  if (isl_map_get_tuple_id(sched_map, isl_dim_out) != nullptr) {
    rname = range_name(sched_map);
  }


  if (isl_map_get_tuple_id(sched_map, isl_dim_out) != nullptr) {
    isl_map_set_tuple_id(ret_m, isl_dim_out, id(ct, rname));
  }

    return to_umap(ret_m);
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

isl_set* gist(isl_set* base, isl_set* context) {
  return isl_set_gist(cpy(base), cpy(context));
}

uset* gist(uset* base, uset* context) {
  return isl_union_set_gist(cpy(base), cpy(context));
}

isl_map* project_out_domain(isl_map* const dmap,
        const int d) {
  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname, rname;
    dname = domain_name(m);
  if (isl_map_get_tuple_id(dmap, isl_dim_out) != nullptr) {
    rname = range_name(m);
  }

  m = isl_map_project_out(m, isl_dim_in, d, 1);

    isl_map_set_tuple_id(m, isl_dim_in, id(ct, dname));
  if (isl_map_get_tuple_id(dmap, isl_dim_out) != nullptr) {
    isl_map_set_tuple_id(m, isl_dim_out, id(ct, rname));
  }

  return m;
}

isl_map* project_out(isl_map* const dmap,
    const int d) {

  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname, rname;
  dname = domain_name(m);
  if (isl_map_get_tuple_id(dmap, isl_dim_out) != nullptr) {
    rname = range_name(m);
  }
  m = isl_map_project_out(m, isl_dim_out, d, 1);

  isl_map_set_tuple_id(m, isl_dim_in, id(ct, dname));
  if (isl_map_get_tuple_id(dmap, isl_dim_out) != nullptr) {
    isl_map_set_tuple_id(m, isl_dim_out, id(ct, rname));
  }
  return m;
}

isl_set* project_out(isl_set* const dmap,
    const int d) {

  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname = "";
  if (isl_set_get_tuple_id(dmap) != nullptr) {
    dname = name(m);
  }

  m = isl_set_project_out(m, isl_dim_set, d, 1);

  if (isl_set_get_tuple_id(dmap) != nullptr) {
    isl_set_set_tuple_id(m, id(ct, dname));
  }

  return m;
}

isl_set* project_all_but(isl_set* const dmap,
    const int d) {

  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname = "";
  if (isl_set_get_tuple_id(dmap) != nullptr) {
    dname = name(m);
  }

  if (d != 0) {
    m = isl_set_project_out(m, isl_dim_set, 0, d);
  }

  int in_dim = num_dims(get_space(m));

  m = isl_set_project_out(m, isl_dim_set, 1, in_dim - 1);

  assert(num_dims(get_space(m)) == 1);

  if (isl_set_get_tuple_id(dmap) != nullptr) {
    isl_set_set_tuple_id(m, id(ct, dname));
  }

  return m;
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

isl_map* project_all_in_but(isl_map* const dmap,
    const int d) {

  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname = domain_name(m);
  string rname = range_name(m);

  if (d != 0) {
    m = isl_map_project_out(m, isl_dim_in, 0, d);
  }

  int in_dim = num_in_dims(get_space(m));

  m = isl_map_project_out(m, isl_dim_in, 1, in_dim - 1);

  assert(num_in_dims(get_space(m)) == 1);

  isl_map_set_tuple_id(m, isl_dim_in, id(ct, dname));
  isl_map_set_tuple_id(m, isl_dim_out, id(ct, rname));

  return m;
}


isl_map* project_all_out_but(isl_map* const dmap,
    const int d) {

  auto m = cpy(dmap);
  auto ct = ctx(dmap);

  string dname = domain_name(m);
  string rname = range_name(m);

  if (d != 0) {
    m = isl_map_project_out(m, isl_dim_out, 0, d);
  }

  int out_dim = num_out_dims(get_space(m));

  m = isl_map_project_out(m, isl_dim_out, 1, out_dim - 1);

  assert(num_out_dims(get_space(m)) == 1);

  isl_map_set_tuple_id(m, isl_dim_in, id(ct, dname));
  isl_map_set_tuple_id(m, isl_dim_out, id(ct, rname));

  return m;
}

vector<int> parse_pt(isl_point* p) {
  assert(p != nullptr);
  return parse_pt(str(p));
}

isl_point* form_pt(vector<int> const_vec) {
  string expr = sep_list(const_vec, "{ [", "] }", ",");
  isl_ctx* ctx = isl_ctx_alloc();
  isl_set* s = isl_set_read_from_str(ctx, expr.c_str());
  return sample(s);
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

isl_val* sub(isl_val* a, isl_val* b) {
  return isl_val_sub(cpy(a), cpy(b));
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

isl_val* zero(isl_ctx* c) {
  return isl_val_zero(c);
}
isl_val* negone(isl_ctx* c) {
  return isl_val_negone(c);
}

isl_aff* aff_on_domain(isl_local_space* ls, isl_val* max) {
  return isl_aff_val_on_domain(cpy(ls), cpy(max));
}

int to_int(isl_val* a) {
  assert(a != nullptr);
  assert(isl_val_is_int(a));
  return stoi(str(a));
}

isl_aff* set_const_coeff(isl_aff* const a, isl_val* v) {
  return isl_aff_set_constant_val(a, cpy(v));
}

isl_aff* set_coeff(isl_aff* const a, const int pos, isl_val* v) {
  return isl_aff_set_coefficient_val(a, isl_dim_in, pos,cpy(v));
}

isl_val* const_coeff(isl_aff* const a) {
  return isl_aff_get_constant_val(a);
}

isl_val* coeff(isl_aff* const a, const int pos) {
  auto s = get_local_space(a);
  assert(isl_local_space_is_set(s));
  return isl_aff_get_coefficient_val(a, isl_dim_in, pos);
}

isl_val* get_coeff(isl_aff* const a, const int pos) {
  return isl_aff_get_coefficient_val(a, isl_dim_in, pos);
}

int int_coeff(isl_aff* const a, const int pos) {
  return to_int(isl_aff_get_coefficient_val(a, isl_dim_in, pos));
}

int int_const_coeff(isl_aff* const a) {
  return to_int(isl_aff_get_constant_val(a));
}

isl_set* pad_set(isl_set* s, const int max_dim) {
  auto ct = ctx(s);

  map<string, isl_set*> padded_sets;
  int pad_factor = max_dim - num_dims(s);
  int original_dim = num_dims(s);

  isl_set* padded = isl_set_empty(get_space(s));
  padded = isl_set_add_dims(padded, isl_dim_set, pad_factor);

  for (auto bset : get_basic_sets(s)) {

    auto pad = isl_basic_set_add_dims(cpy(bset), isl_dim_set, pad_factor);

    for (int i = original_dim; i < num_dims(pad); i++) {
      auto ls = isl_local_space_from_space(cpy(get_space(padded)));

      auto is_zero = isl_constraint_alloc_equality(ls);
      is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
      is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_set, i, one(ct));
      pad = isl_basic_set_add_constraint(pad, is_zero);
    }

    isl_set* pbset = to_set(pad);
    padded = unn(padded, pbset);
  }

  padded = isl_set_set_tuple_id(padded, id(ct, name(s)));
  return padded;
}

uset* pad_uset(uset* domain) {
  auto ct = ctx(domain);
  int max_dim = -1;
  std::set<int> different_dims;
  for (auto s : get_sets(domain)) {
    int new_dim = num_dims(s);
    if (new_dim > max_dim) {
      max_dim = new_dim;
    }
    different_dims.insert(new_dim);
  }

  //map<string, int> pad_factor;
  map<string, isl_set*> padded_sets;
  for (auto s : get_sets(domain)) {
    isl_set* padded = pad_set(s, max_dim);

    //int pad_factor = max_dim - num_dims(s);
    //int original_dim = num_dims(s);

    //isl_set* padded = isl_set_empty(get_space(s));
    //padded = isl_set_add_dims(padded, isl_dim_set, pad_factor);

    //for (auto bset : get_basic_sets(s)) {

      //auto pad = isl_basic_set_add_dims(cpy(bset), isl_dim_set, pad_factor);

      //for (int i = original_dim; i < num_dims(pad); i++) {
        //auto ls = isl_local_space_from_space(cpy(get_space(padded)));

        //auto is_zero = isl_constraint_alloc_equality(ls);
        //is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
        //is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_set, i, one(ct));
        //pad = isl_basic_set_add_constraint(pad, is_zero);
      //}

      //isl_set* pbset = to_set(pad);
      //padded = unn(padded, pbset);
    //}

    //padded = isl_set_set_tuple_id(padded, id(ct, name(s)));
    padded_sets[name(s)] = padded;
  }

  uset* padded_domain =
    isl_union_set_read_from_str(ct, "{}");
  for (auto p : padded_sets) {
    padded_domain = unn(padded_domain, to_uset(p.second));
  }

  return padded_domain;
}

isl_aff* div(isl_aff* a, isl_aff* b) {
  return isl_aff_div(cpy(a), cpy(b));
}

isl_aff* add(isl_aff* a, isl_aff* b) {
  return isl_aff_add(cpy(a), cpy(b));
}

isl_map* pad_map(isl_map* s, const int max_dim) {
  auto ct = ctx(s);


  int in_pad_factor = max_dim - num_in_dims(s);
  int out_pad_factor = max_dim - num_out_dims(s);

  int original_in_dim = num_in_dims(s);
  int original_out_dim = num_out_dims(s);

  isl_map* padded = isl_map_empty(get_space(s));

  padded = isl_map_add_dims(padded, isl_dim_in, in_pad_factor);
  padded = isl_map_add_dims(padded, isl_dim_out, out_pad_factor);

  padded = isl_map_set_tuple_id(padded, isl_dim_in, id(ct, domain_name(s)));
  padded = isl_map_set_tuple_id(padded, isl_dim_out, id(ct, range_name(s)));


  for (auto bmap : get_basic_maps(s)) {

    auto pad = isl_basic_map_add_dims(cpy(bmap), isl_dim_in, in_pad_factor);
    pad = isl_basic_map_add_dims(pad, isl_dim_out, out_pad_factor);

    pad = isl_basic_map_set_tuple_id(pad, isl_dim_in, id(ct, domain_name(s)));
    pad = isl_basic_map_set_tuple_id(pad, isl_dim_out, id(ct, range_name(s)));


    for (int i = original_in_dim; i < num_in_dims(padded); i++) {
      auto ls = isl_local_space_from_space(cpy(get_space(padded)));
      auto is_zero = isl_constraint_alloc_equality(ls);
      is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
      is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_in, i, one(ct));
      pad = isl_basic_map_add_constraint(pad, is_zero);
    }

    for (int i = original_out_dim; i < num_out_dims(padded); i++) {
      auto ls = isl_local_space_from_space(cpy(get_space(padded)));
      auto is_zero = isl_constraint_alloc_equality(ls);
      is_zero = isl_constraint_set_constant_val(is_zero, zero(ct));
      is_zero = isl_constraint_set_coefficient_val(is_zero, isl_dim_out, i, one(ct));
      pad = isl_basic_map_add_constraint(pad, is_zero);
    }

    isl_map* pbset = to_map(pad);
    padded = unn(padded, pbset);
  }

  return padded;
}

umap* pad_map(umap* unpadded) {
  auto ct = ctx(unpadded);


  int max_dim = -1;
  for (auto s : get_maps(unpadded)) {

    int new_dim = num_in_dims(s);
    if (new_dim > max_dim) {
      max_dim = new_dim;
    }

    new_dim = num_out_dims(s);
    if (new_dim > max_dim) {
      max_dim = new_dim;
    }
  }


  vector<isl_map*> padded_maps;
  for (auto s : get_maps(unpadded)) {
    isl_map* m = pad_map(s, max_dim);
    padded_maps.push_back(m);
  }

  umap* final_map = rdmap(ct, "{}");
  for (auto p : padded_maps) {
    final_map = unn(final_map, to_umap(p));
  }

  return final_map;
}

isl_map* pad_identity_relation_to_map(isl_map* m, int in_dim, int out_dim, int lbd, int ubd) {
    auto ct = ctx(m);
    auto new_map = isl_map_insert_dims(cpy(m), isl_dim_in, in_dim, 1);
    auto tile_map = isl_map_insert_dims(new_map, isl_dim_out, out_dim, 1);
    if (isl_map_has_tuple_id(m, isl_dim_in))
      tile_map = isl_map_set_tuple_id(tile_map, isl_dim_in, id(ct, domain_name(m)));
    if (isl_map_has_tuple_id(m, isl_dim_out))
    tile_map = isl_map_set_tuple_id(tile_map, isl_dim_out, id(ct, range_name(m)));
    auto ls = isl_local_space_from_space(cpy(get_space(tile_map)));
    auto lt_cons = isl_constraint_alloc_inequality(ls);
    lt_cons = isl_constraint_set_coefficient_si(lt_cons, isl_dim_in, in_dim, -1);
    lt_cons = isl_constraint_set_constant_si(lt_cons, ubd);
    tile_map = isl_map_add_constraint(tile_map, lt_cons);
    ls = isl_local_space_from_space(cpy(get_space(tile_map)));
    auto gt_cons = isl_constraint_alloc_inequality(ls);
    gt_cons = isl_constraint_set_coefficient_si(gt_cons, isl_dim_in, in_dim, 1);
    gt_cons = isl_constraint_set_constant_si(gt_cons, -lbd);
    tile_map = isl_map_add_constraint(tile_map, gt_cons);
    ls = isl_local_space_from_space(cpy(get_space(tile_map)));
    auto rel_cons = isl_constraint_alloc_equality(ls);
    rel_cons = isl_constraint_set_coefficient_si(gt_cons, isl_dim_in, in_dim, 1);
    rel_cons = isl_constraint_set_coefficient_si(gt_cons, isl_dim_out, out_dim, -1);
     tile_map = isl_map_add_constraint(tile_map, rel_cons);

     return tile_map;
}

umap* pad_identity_relation_to_umap(umap* mp, int in_dim, int out_dim, int lbd, int ubd) {
    vector<isl_map*> padded_maps;
    for (auto m: get_maps(mp)) {
        isl_map* pad_m = pad_identity_relation_to_map(m, in_dim, out_dim, lbd, ubd);
        padded_maps.push_back(pad_m);
    }
    auto ct = ctx(mp);
    umap* final_map = rdmap(ct, "{}");
    for (auto m: padded_maps) {
        final_map = unn(final_map, to_umap(m));
    }
    return final_map;
}

bool lex_lt_pt(isl_point* const l, isl_point* const r) {
    vector<int> l_pt = parse_pt(l);
    vector<int> r_pt = parse_pt(r);
    assert(l_pt.size() == r_pt.size());
    for (size_t i = 0; i < l_pt.size(); i ++) {
        if (l_pt.at(i) < r_pt.at(i))
            return true;
        if (l_pt.at(i) > r_pt.at(i))
            return false;
    }
    ///assert(false);
    //equal return true
    return false;
}

bool lex_gt_pt(isl_point* const l, isl_point* const r) {
    vector<int> l_pt = parse_pt(l);
    vector<int> r_pt = parse_pt(r);
    assert(l_pt.size() == r_pt.size());
    for (size_t i = 0; i < l_pt.size(); i ++) {
        if (l_pt.at(i) > r_pt.at(i))
            return true;
        if (l_pt.at(i) < r_pt.at(i))
            return false;
    }
    ///assert(false);
    //equal return true
    return false;
}

isl_val* coord(isl_point* const p, const int pos) {
  return isl_point_get_coordinate_val(p, isl_dim_set, pos);
}

isl_val* lexminval(isl_set* const m0) {
  return coord(lexminpt(m0), 0);
}

isl_val* lexmaxval(isl_set* const m0) {
  return coord(lexmaxpt(m0), 0);
}

isl_point* lexminpt(isl_set* const m0) {
  return sample(lexmin(m0));
}

isl_point* lexminpt(uset* const m0) {
  return sample(lexmin(m0));
}

isl_point* lexmaxpt(isl_set* const m0) {
  return sample(lexmax(m0));
}

isl_point* lexmaxpt(uset* const m0) {
  return sample(lexmax(m0));
}

int get_domain_range(isl_set* const dom, int dim) {
  int dims = num_dims(dom);
  assert(dim >= 0);
  assert(dim < dims);
  auto min_dom_pt = lexminpt(dom);
  auto max_dom_pt = lexmaxpt(dom);
  return to_int(coord(max_dom_pt, dim)) - to_int(coord(min_dom_pt, dim)) + 1;
}

int get_domain_span_range(isl_map* const m, int dim) {
    //cout << "input: " << str(m) << ", m dim" << dim  << endl;
  auto mm = cpy(m);
  //for (int d = 0; d < num_in_dims(m); d ++) {
  //    if (d != dim)
  //        mm = reset_domain_coeff(mm, d, 0);
  //}
  //cout << "before projection: " << str(mm) << endl;
  //auto single_map = project_all_in_but(mm, dim);
  //cout << "single_map : " << str(single_map) << endl;
  return get_dim_extent(domain(mm), dim) * stride_in_dim(mm, dim);

}

int get_domain_span_range(isl_map* const m, int dim, int out_dim) {
    //cout << "input: " << str(m) << ", m dim" << dim  << endl;
  auto mm = cpy(m);
  //auto single_map = project_all_in_but(mm, dim);
  //cout << "single_map : " << str(single_map) << endl;
  return get_dim_extent(domain(mm), dim) * stride_in_dim(mm, dim, out_dim);
}

pair<int, int> get_domain_merge_dims(isl_map* m ){
    int in_dims = num_in_dims(m);

    //skip the root loop
    for (int dim = 2; dim < in_dims; dim ++) {
        int span_range = get_domain_span_range(m, dim);
        int up_level_stride = stride_in_dim(m, dim-1);
        if (span_range == up_level_stride)
            return {in_dims - dim - 1, in_dims -  dim};
    }

    return {0, 0};
}

vector<pair<int, int>> get_all_domain_merge_dims(isl_map* m) {
    int in_dims = num_in_dims(m);
    vector<pair<int, int>> ret;
    //skip the root loop
    for (int dim = 2; dim < in_dims; dim ++) {
        int span_range = get_domain_span_range(m, dim);
        int up_level_stride = stride_in_dim(m, dim-1);
        cout << "span range: " << span_range << ", up_level_stride : "<< up_level_stride << endl;
        //TODO: why span range = 0 cannot be merged?
        if ((span_range == up_level_stride))// && (span_range != 0))
            ret.push_back({in_dims - dim - 1, in_dims -  dim});
    }
    return ret;
}

map<int, int> get_all_domain_pad_dims(isl_map* sched, isl_map* acc) {
    int sched_in_dims = num_in_dims(sched);
    int acc_in_dims = num_in_dims(acc);
    assert(sched_in_dims == acc_in_dims);

    map<int, int> dim2pad;
    if (acc_in_dims < 3)
        return dim2pad;

    //skip the root loop
    for (int dim = 2; dim < acc_in_dims; dim ++) {
        int sched_dom_range = get_dim_extent(domain(sched), dim);
        int acc_dom_range = get_dim_extent(domain(acc), dim);
        int sched_stride = stride_in_dim(sched, dim);
        int acc_stride = stride_in_dim(acc, dim);
        int sched_up_level_stride = stride_in_dim(sched, dim-1);
        int acc_up_level_stride = stride_in_dim(acc, dim-1);
        cout << tab(1)<< "Dim: " << dim << endl;
        cout << tab(2)<< "Schedule dom range: " << sched_dom_range
            << ", current_level_stride : "<< sched_stride
            << ", up_level_stride : "<< sched_up_level_stride
            << endl;
        cout << tab(2)<< "Address dom range: " << acc_dom_range
            << ", current_level_stride : "<< acc_stride
            << ", up_level_stride : "<< acc_up_level_stride
            << endl;
        //TODO: why span range = 0 cannot be merged?
        if ((sched_dom_range*sched_stride != sched_up_level_stride))// && (span_range != 0))
        {
            int pad = sched_up_level_stride / sched_stride - sched_dom_range;
            cout << "Find dim: " << dim << " pad = "<<pad <<endl;
            //assert(pad != 0);
            if ((acc_dom_range + pad) * acc_stride == acc_up_level_stride){
                dim2pad[dim] = pad;
            }
        }
    }
    return dim2pad;
}


isl_map* merge_domain_dim(isl_map* m) {
    auto mm = cpy(m);
    while(true) {
        cout << " new map: " << str(mm) << endl;
        auto merge_pair = get_domain_merge_dims(mm);
        unordered_set<int> tmp({merge_pair.first, merge_pair.second});
        if (merge_pair.first != merge_pair.second) {
          auto reduce_map = linear_domain_map_with_index(domain(mm), tmp);
          auto flatten_access_map = dot_domain(to_umap(mm), to_umap(reduce_map));
          mm = to_map(flatten_access_map);
        } else {
            break;
        }
    }
    return mm;
}

int get_inner_most_related_dom_dim(isl_map* m) {
  vector<bool> rel_dim = relation_map(m);
  for (auto it = rel_dim.rbegin(); it < rel_dim.rend(); it ++) {
    if (*it == true) {
      cout << "find related dimension!" << endl;
      return rel_dim.rend() - it - 1;
    }
  }
  cout << "should find at least one dimension related in dim" << endl;
  assert(false);
}


int get_inner_most_related_dom_dim(isl_map* m, int dim_id, int fetch_width) {
  cout << "access map : " << str(m) << "need to find inner dim" << endl;
  cout << "dim id: " << dim_id << endl;
  auto aff_vec = get_aff_vec(m);
  assert(aff_vec.size() > dim_id);
  auto am = to_map(aff_vec.at(dim_id));
  vector<bool> rel_map = relation_map(am);
  cout << "Relation map" << rel_map << endl;
  int inner_most_address_related_dim_id = rel_map.size() - 1;
  for (int i = rel_map.size() - 1; i >= 0; i -- ) {
    if ((rel_map.at(i) != 0) ) {//&& (get_domain_span_range(m, i) >= fetch_width)) {
      inner_most_address_related_dim_id = i;
      //cout << "dimension: " << i << "  ext : " << get_dim_extent(domain(m), i) << endl;
      //if ((get_dim_extent(domain(m), i) == 1))
      //    inner_most_address_related_dim_id --;
      break;
    }
    if (i == 0) {
      //FIXME: ASPLOS Hack:
      //change to -2 since if we did not find any related loop, lp bd = 4
      //it means we are project out this dimension
      //inner_most_address_related_dim_id --;
      //
      //Did not find related_dom_dim
      return -1;
    }
  }
  return inner_most_address_related_dim_id;
}

int get_inner_most_related_dom_dim_debug(isl_map* m, int dim_id, int fetch_width) {
  cout << "access map : " << str(m) << "need to find inner dim" << endl;
  cout << "dim id: " << dim_id << endl;
  auto aff_vec = get_aff_vec(m);
  assert(aff_vec.size() > dim_id);
  auto am = to_map(aff_vec.at(dim_id));
  vector<bool> rel_map = relation_map(am);
  cout << "Relation map" << rel_map << endl;
  int inner_most_address_related_dim_id = rel_map.size() - 1;
  for (int i = rel_map.size() - 1; i >= 0; i -- ) {
    if ((rel_map.at(i) != 0) ) {//&& (get_domain_span_range(m, i) >= fetch_width)) {
      inner_most_address_related_dim_id = i;
      //cout << "dimension: " << i << "  ext : " << get_dim_extent(domain(m), i) << endl;
      //if ((get_dim_extent(domain(m), i) == 1))
      //    inner_most_address_related_dim_id --;
      break;
    }
    if (i == 0) {
      //FIXME: ASPLOS Hack:
      //change to -2 since if we did not find any related loop, lp bd = 4
      //it means we are project out this dimension
      inner_most_address_related_dim_id --;
    }
  }
  return inner_most_address_related_dim_id;
}

isl_map* get_set_slice(isl_set* dom, int pos, int offset, int fetch_width) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, rewrite_var;
    for (int i = 0; i < dim; i ++) {
        var.push_back("i"+str(i));
        if (pos == i) {
            //rewrite_var.push_back("i"+str(i) + "*" + str(fetch_width) + "+" + str(offset));
            rewrite_var.push_back("floor((i"+str(i) + "+" + str(offset) + ")/" + str(fetch_width) + ")" );
        } else {
            rewrite_var.push_back("i"+str(i));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var) + "->" + dom_name +bracket_list(rewrite_var)+ "}";
    auto trans = isl_map_read_from_str(ctx(dom), map_str.c_str());
    cout << "Autogen slice:" << str(trans) << endl;
    return trans;
}

isl_map* get_set_slice(isl_set* dom, int pos, int fetch_width) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, rewrite_var;
    for (int i = 0; i < dim; i ++) {
        var.push_back("i"+str(i));
        if (pos == i) {
            //rewrite_var.push_back("i"+str(i) + "*" + str(fetch_width) + "+" + str(offset));
            rewrite_var.push_back("floor(i"+str(i) + "/" + str(fetch_width) + ")" );
        } else {
            rewrite_var.push_back("i"+str(i));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var) + "->" + dom_name +bracket_list(rewrite_var)+ "}";
    auto trans = isl_map_read_from_str(ctx(dom), map_str.c_str());
    cout << "Autogen slice:" << str(trans) << endl;
    return trans;
}

isl_map* get_div_trans(isl_map* am, map<int, int> split_dims) {

    for (auto it: split_dims)
      cout << "\tDim: " << it.first << " denom: " << it.second << endl;

    //Get the stripmining expression
    vector<string> dvars;
    vector<string> origin_vars;
    for (int d = 0; d < num_in_dims(am); d ++) {
      if (contains_key(d, split_dims)) {
        int denom = split_dims.at(d);
        dvars.push_back("floor(d" + str(d) + "/" + str(denom) + ")");
        dvars.push_back("d"+str(d) + "%" + str(denom));
      } else {
        dvars.push_back("d" + str(d));
      }
      origin_vars.push_back("d" + str(d));
    }
    string trans_str =
      curlies(
          ::domain_name(am) +  bracket_list(origin_vars)
          + "->" +
          ::domain_name(am) + bracket_list(dvars)
          );
    cout << "\tTrans str" << trans_str << endl;
    auto trans_map = isl_map_read_from_str(ctx(am), trans_str.c_str());
    return trans_map;
}

isl_map* get_domain_mask(isl_map* m, int vec_dim) {
    int dim = num_in_dims(m);
    string dom_name = domain_name(m);
    vector<string> var_new, var_mask;
    for (int i = 0; i < dim; i++) {
        if (i <= vec_dim) {
            var_new.push_back("i" + str(i));
            var_mask.push_back("i" + str(i));
        } else {
            auto dom = domain(m);
            var_mask.push_back("i" + str(i) + "=" + str(get_dim_min(dom, i)));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var_new) + "->"
        + dom_name + bracket_list(var_mask)+"}";
    auto trans = isl_map_read_from_str(ctx(m), map_str.c_str());
    cout << "mask : " << str(trans) << endl;
    return trans;
}

vector<isl_set*> get_domain_unmask_set(isl_map* m, int vec_dim, vector<int> unmask_dims) {
    int dim = num_in_dims(m);
    auto dom = domain(m);
    string dom_name = domain_name(m);
    vector<string> var_mask;
    for (int i = 0; i < dim; i++) {
        if (i <= vec_dim && !elem(i, unmask_dims)) {
            var_mask.push_back("i" + str(i) + "=" + str(get_dim_min(dom, i)));
        } else {
            var_mask.push_back("i" + str(i));
        }
    }
    string base_str = "{" + dom_name + bracket_list(var_mask) + "}";
    cout << "base_str : " << base_str << endl;
    auto base_set = isl_set_read_from_str(ctx(m), base_str.c_str());
    vector<isl_set*> prev, next;
    prev.push_back(base_set);
    for (int unmask_dim: unmask_dims){
      for (int dim_val = get_dim_min(dom, unmask_dim); dim_val <= get_dim_max(dom, unmask_dim); dim_val ++) {
        vector<string> var_mask_its;
        for (int i = 0; i < dim; i++) {
          if (elem(i, unmask_dims)) {
            var_mask_its.push_back("i" + str(i) + "=" + str(dim_val));
          } else {
            var_mask_its.push_back("i" + str(i));
          }
        }
        string its_str = "{" + dom_name + bracket_list(var_mask_its) + "}";
        cout << "its_str: " << its_str << endl;
        auto its_set = isl_set_read_from_str(ctx(m), its_str.c_str());

        //add product set
        for (auto prev_set : prev) {
            next.push_back(its(prev_set, its_set));
        }
      }
      prev = next;
      next = vector<isl_set*>();
    }
    return prev;
}

isl_map* get_domain_trans(isl_set* dom, int pos, int fetch_width) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, rewrite_var;
    for (int i = 0; i < dim; i ++) {
        var.push_back("i"+str(i));
        if (pos == i) {
            //rewrite_var.push_back("i"+str(i) + "*" + str(fetch_width) + "+" + str(offset));
            rewrite_var.push_back("i"+str(i) + "*" + str(fetch_width) );
        } else {
            rewrite_var.push_back("i"+str(i));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var) + "->" + dom_name +bracket_list(rewrite_var)+ "}";
    auto trans = isl_map_read_from_str(ctx(dom), map_str.c_str());
    cout << "Autogen trans:" << str(trans) << endl;
    return trans;
}

isl_map* get_domain_trans(isl_set* dom, vector<int> stride_vec) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, rewrite_var;
    for (int i = 0; i < dim; i ++) {
        var.push_back("i"+str(i));
        rewrite_var.push_back("floor(i"+str(i) + "/" + str(stride_vec.at(i)) + ")" );
    }
    string map_str = "{"+dom_name + bracket_list(var) + "->" + dom_name +bracket_list(rewrite_var)+ "}";
    auto trans = inv(isl_map_read_from_str(ctx(dom), map_str.c_str()));
    cout << "Autogen trans:" << str(trans) << endl;
    return trans;
}

//This is the advance version of domain transformation used in vectorization
isl_map* get_domain_trans_with_reaccess_mask(isl_set* dom, int pos, int fetch_width) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, rewrite_var;
    for (int i = 0; i < dim; i ++) {
        if (pos == i) {
            //rewrite_var.push_back("i"+str(i) + "*" + str(fetch_width) + "+" + str(offset));
            var.push_back("i"+str(i));
            rewrite_var.push_back("i"+str(i) + "*" + str(fetch_width) );
        } else if (i < pos){
            var.push_back("i"+str(i));
            rewrite_var.push_back("i"+str(i));
        } else {
            rewrite_var.push_back("i"+str(i));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var) + "->" + dom_name +bracket_list(rewrite_var)+ "}";
    auto trans = isl_map_read_from_str(ctx(dom), map_str.c_str());
    cout << "Autogen trans:" << str(trans) << endl;
    return trans;
}

isl_set* get_domain_trans_sched_domain(isl_set* dom, int pos, int fetch_width) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, stmt;
    for (int i = 0; i < dim; i ++) {
        var.push_back("i" + str(i) );
        if (i > pos){
            stmt.push_back("i" + str(i) + " = " + str(get_dim_min(dom, i)));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var) + ":" + sep_list(stmt, "", "", " and ")+ "}";
    auto trans = isl_set_read_from_str(ctx(dom), map_str.c_str());
    cout << "sched domain: " << str(trans) << endl;
    return trans;
}

isl_set* get_domain_trans_sched_domain(isl_map* access_map, int pos, int fetch_width) {
    auto dom = domain(access_map);
    auto rel_map = relation_map(access_map);
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<string> var, stmt;
    for (int i = 0; i < dim; i ++) {
        var.push_back("i" + str(i) );

        //Project out the dimension if they inside vectorization dimension and reaccess
        if ((i > pos) && (rel_map.at(i) == 0)){
            stmt.push_back("i" + str(i) + " = " + str(get_dim_min(dom, i)));
        }
    }
    string map_str = "{"+dom_name + bracket_list(var) + ":" + sep_list(stmt, "", "", " and ")+ "}";
    auto trans = isl_set_read_from_str(ctx(dom), map_str.c_str());
    cout << "sched domain: " << str(trans) << endl;
    return trans;
}

vector<isl_map*> get_vectorize_interpolate(isl_set* dom, int pos, int fetch_width) {
    string dom_name = name(dom);
    int dim = num_dims(dom);
    vector<isl_map*> ret;
    for (int offset = 0; offset < fetch_width; offset ++) {
      vector<string> var, var_trans;
      for (int i = 0; i < dim; i ++) {
        var.push_back("i" + str(i));
        if (i == pos) {
          var_trans.push_back("i" + str(i) +"*"+str(fetch_width) + "+" + str(offset));
        } else {
          var_trans.push_back("i" + str(i));
        }
      }
      string map_str =
          "{" + dom_name + bracket_list(var) + "->"
          + dom_name + bracket_list(var_trans) + "}";
      ret.push_back(isl_map_read_from_str(ctx(dom), map_str.c_str()));
    }
    return ret;
}


isl_local_space* local_set_space(isl_ctx* ctx, const int dims) {
  return isl_local_space_from_space(set_space(ctx, dims));
}

isl_space* set_space(isl_ctx* ctx, const int dim) {
  auto s = isl_space_set_alloc(ctx, 0, dim);
  return s;
}

isl_space* map_space(isl_ctx* ctx, const int in_dims, const int out_dims) {
  auto s = isl_space_alloc(ctx, 0, in_dims, out_dims);
  return s;
}

bool is_zero(isl_val* c) {
  return isl_val_is_zero(c);
}


isl_val* get_coeff(isl_constraint* c, enum isl_dim_type type, int pos) {
  return isl_constraint_get_coefficient_val(c, type, pos);
}

isl_val* eval(isl_aff* a, isl_point* p) {
  //assert(false);
  //return isl_aff_eval(cpy(a), cpy(p));
  auto ct = ctx(a);
  isl_val* val = zero(ct);
  return val;
}

isl_aff* get_aff(isl_union_map* m) {
  return get_aff(to_map(m));
}

isl_multi_aff* get_multi_aff(isl_union_map* m) {
  return get_multi_aff(to_map(m));
}

isl_multi_aff* get_multi_aff(isl_map* m) {
  auto lm = isl_pw_multi_aff_from_map(cpy(m));
  //cout << tab(1) << str(m) << endl;
  //cout << tab(2) << "lexmax: " << str(lm) << endl;
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(lm);
  assert(pieces.size() == 1);

  auto saff = pieces.at(0).second;
  return saff;
}

isl_aff* get_aff(isl_map* m) {
  auto lm = isl_pw_multi_aff_from_map(cpy(m));
  //cout << tab(1) << str(m) << endl;
  //cout << tab(2) << "lexmax: " << str(lm) << endl;
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(lm);
  assert(pieces.size() == 1);

  auto saff = pieces.at(0).second;
  auto aff = isl_multi_aff_get_aff(saff, 0);
  return aff;
}

std::vector<isl_aff*> get_affs(isl_multi_aff* saff) {
  vector<isl_aff*> ret;
  for (int i = 0; i < get_size(saff); i ++) {
    auto aff = isl_multi_aff_get_aff(saff, i);
    ret.push_back(aff);
  }
  return ret;
}

std::vector<isl_aff*> get_aff_vec(isl_map* m) {
  vector<isl_aff*> ret;
  auto lm = isl_pw_multi_aff_from_map(cpy(m));
  if (!lm)
      return ret;
  //cout << tab(1) << str(m) << endl;
  //cout << tab(2) << "lexmax: " << str(lm) << endl;
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(lm);
  assert(pieces.size() == 1);
  auto saff = pieces.at(0).second;
  for (int i = 0; i < get_size(saff); i ++) {
    auto aff = isl_multi_aff_get_aff(saff, i);
    ret.push_back(aff);
  }
  return ret;
}

isl_basic_set* to_bset(isl_set* m) {
  auto sets = get_basic_sets(m);
  assert(sets.size() == 1);
  return sets.at(0);
}


int num_out_dims(isl_basic_map* const s) {
  return num_out_dims(get_space(s));
}

int num_in_dims(isl_basic_map* const s) {
  return num_in_dims(get_space(s));
}

int num_div_dims(isl_basic_set* const s) {
  return num_div_dims(get_local_space(s));
}

int num_param_dims(isl_basic_set* const s) {
  return num_param_dims(get_space(s));
}

int num_div_dims(isl_basic_map* const s) {
  return num_div_dims(get_local_space(s));
}

int num_param_dims(isl_basic_map* const s) {
  return num_param_dims(get_space(s));
}

string str(isl_mat* const ineqmat) {
  ostringstream out;
  for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
    for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
      out << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
    }
    out << endl;
  }
  return out.str();
}

isl_basic_set* lift_divs(isl_basic_set* bm) {
  auto ineqs = isl_basic_set_inequalities_matrix(bm, isl_dim_set, isl_dim_div, isl_dim_cst, isl_dim_param);
  auto eqs = isl_basic_set_equalities_matrix(bm, isl_dim_set, isl_dim_div, isl_dim_cst, isl_dim_param);

  //cout << "bm = " << str(bm) << endl;

  //cout << "ineqs..." << endl;
  //cout << str(ineqs) << endl;

  //cout << "eqs..." << endl;
  //cout << str(eqs) << endl;

  int div_dims = num_div_dims(bm);
  //assert(div_dims == 0);
  int set_dim =
    num_dims(bm) + div_dims;
  int param_dims = num_param_dims(bm);

  assert(param_dims == 0);

  auto s = isl_space_set_alloc(ctx(bm),
      param_dims, set_dim);

  auto final_s = isl_basic_set_from_constraint_matrices(s, eqs, ineqs, isl_dim_set, isl_dim_cst, isl_dim_div, isl_dim_param);
  for (int d = 0; d < num_dims(bm); d++) {
    auto name = isl_basic_set_get_dim_name(bm, isl_dim_set, d);
    if (name != nullptr) {
      final_s = isl_basic_set_set_dim_name(final_s, isl_dim_set, d, string(name).c_str());
    }

  }
  return final_s;
}

//get a map from in dimension to denom
map<int, int> get_dim2denom(isl_map* am) {
  map<int, int> split_dims;
  for (auto aff : get_aff_vec(am)) {
    cout << "\taff : " << str(aff) << endl;
    cout << "\tdiv dim: " << num_div_dims(aff) << endl;
    for (int d = 0; d < num_div_dims(aff); d++) {
      auto a = isl_aff_get_div(aff, d);
      cout << tab(2) << "=== div: " << str(a) << endl;
      int denom = to_int(isl_aff_get_denominator_val(a));
      cout << tab(3) << "denom = " << denom << endl;
      for (int di = 0; di < num_in_dims(a); di++) {
        if (!is_zero(get_coeff(a, di))) {
          auto coeff = isl_aff_get_coefficient_val(a, isl_dim_in, di);
          int num = isl_val_get_num_si(coeff);
          cout << tab(3) << "coeff  = " << str(coeff) << endl;
          cout << tab(3) << "num = " << isl_val_get_num_si(coeff) << endl;
          cout << tab(3) << "denom= " << isl_val_get_den_si(coeff) << endl;
          assert (num == 1 && "require quasi affine accessor!");
          //split_dims[di] = denom;
          split_dims[di] = isl_val_get_den_si(coeff);
        }
      }
    }
  }
  return split_dims;
}

isl_basic_set* zero(isl_basic_set* fs, const int var) {
  auto non_neg = isl_constraint_alloc_equality(get_local_space(fs));
  non_neg = isl_constraint_set_coefficient_si(non_neg, isl_dim_set, var, 1);
  non_neg = isl_constraint_set_constant_si(non_neg, 0);
  fs = isl_basic_set_add_constraint(fs, non_neg);

  return fs;
}

isl_basic_set* negative(isl_basic_set* fs, const int var) {
  auto non_neg = isl_constraint_alloc_inequality(get_local_space(fs));
  non_neg = isl_constraint_set_coefficient_si(non_neg, isl_dim_set, var, -1);
  non_neg = isl_constraint_set_constant_si(non_neg, -1);
  fs = isl_basic_set_add_constraint(fs, non_neg);

  return fs;
}

isl_basic_set* gtconst(isl_basic_set* fs, const int var, const int bound) {
  auto non_neg = isl_constraint_alloc_inequality(get_local_space(fs));
  non_neg = isl_constraint_set_coefficient_si(non_neg, isl_dim_set, var, 1);
  non_neg = isl_constraint_set_constant_si(non_neg, -bound);
  fs = isl_basic_set_add_constraint(fs, non_neg);

  return fs;
}

isl_basic_set* positive(isl_basic_set* fs, const int var) {
  auto non_neg = isl_constraint_alloc_inequality(get_local_space(fs));
  non_neg = isl_constraint_set_coefficient_si(non_neg, isl_dim_set, var, 1);
  non_neg = isl_constraint_set_constant_si(non_neg, -1);
  fs = isl_basic_set_add_constraint(fs, non_neg);

  return fs;

}

isl_basic_set* flatten_bmap_to_bset(isl_basic_map* bm) {
  auto ineqs = isl_basic_map_inequalities_matrix(bm, isl_dim_in, isl_dim_out, isl_dim_div, isl_dim_cst, isl_dim_param);
  auto eqs = isl_basic_map_equalities_matrix(bm, isl_dim_in, isl_dim_out, isl_dim_div, isl_dim_cst, isl_dim_param);

  //auto ineqs = isl_basic_map_inequalities_matrix(bm, isl_dim_in, isl_dim_out, isl_dim_cst, isl_dim_div, isl_dim_param);
  //auto eqs = isl_basic_map_equalities_matrix(bm, isl_dim_in, isl_dim_out, isl_dim_cst, isl_dim_div, isl_dim_param);

  //cout << "bm = " << str(bm) << endl;

  //cout << "ineqs..." << endl;
  //cout << str(ineqs) << endl;

  //cout << "eqs..." << endl;
  //cout << str(eqs) << endl;

  int div_dims = num_div_dims(bm);
  //assert(div_dims == 0);
  int set_dim =
    num_in_dims(bm) + num_out_dims(bm) + div_dims;
  int param_dims = num_param_dims(bm);

  assert(param_dims == 0);

  auto s = isl_space_set_alloc(ctx(bm),
      param_dims, set_dim);

  return isl_basic_set_from_constraint_matrices(s, eqs, ineqs, isl_dim_set, isl_dim_cst, isl_dim_div, isl_dim_param);
}

isl_multi_aff* sub(isl_multi_aff* a, isl_multi_aff* b) {
  return isl_multi_aff_sub(cpy(a), cpy(b));
}

isl_aff* sub(isl_aff* a, isl_aff* b) {
  return isl_aff_sub(cpy(a), cpy(b));
}

void release(isl_aff* s) {
  isl_aff_free(s);
}

void release(isl_set* s) {
  isl_set_free(s);
}

void release(isl_map* m) {
  isl_map_free(m);
}

void release(isl_union_set* s) {
  isl_union_set_free(s);
}

void release(isl_union_map* m) {
  isl_union_map_free(m);
}

void release(isl_union_pw_qpolynomial* m) {
  isl_union_pw_qpolynomial_free(m);
}

isl_map* linear_schedule(isl_map* in_sched, vector<int> iis, int offset, bool ignore_innermost) {
  auto sched_aff_vec = get_aff_vec(in_sched);
  if (ignore_innermost)
    sched_aff_vec.pop_back();
  vector<string> expr_list;
  for (size_t i = 0; i < sched_aff_vec.size(); i ++) {
    auto sched_aff = sched_aff_vec.at(i);
    string expr = take_btw(str(sched_aff), "[(", ")]");
    expr_list.push_back("(" + expr + ")*" + to_string(iis.at(i)));
  }
  string expr = sep_list(expr_list, "", "", "+");
  auto var_list = get_map_in_dim_id(in_sched);
  string op_name = domain_name(in_sched);
  expr = expr + "+" + to_string(offset);
  auto in_sched_new = gen_hw_sched_from_sched_vec(ctx(in_sched), {expr}, var_list, op_name);
  return its(in_sched_new, domain(in_sched));
}


isl_map* linear_address_map(isl_set* s) {
  assert(s != nullptr);

  string domain = name(s);
  int dim = num_dims(s);
  vector<string> var_names;
  vector<string> exprs;
  isl_val* stride = one(ctx(s));
  for (int i = 0; i < dim; i++) {
    string var = "d" + str(i);
    var_names.push_back(var);
    string stridestr = str(stride);
    exprs.push_back(stridestr + "*" + var);
    auto interval = project_all_but(s, i);
    isl_val* extend = add(sub(lexmaxval(interval), lexminval(interval)), one(ctx(s)));
    stride = mul(stride, extend);
  }
  string map_str = "{" + domain + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(exprs, "[", "]", " + ") + " }";
  return isl_map_read_from_str(ctx(s), map_str.c_str());
}

isl_map* to_map(isl_multi_aff* s) {
  return isl_map_from_multi_aff(cpy(s));
}

isl_map* to_map(isl_aff* s) {
  return isl_map_from_aff(cpy(s));
}

bool no_divs(isl_aff* a) {
  for (int d = 0; d < num_div_dims(a); d++) {
    auto v = isl_aff_get_coefficient_val(a, isl_dim_div, d);
    if (!is_zero(v)) {
      return false;
    }
  }
  return true;
}
isl_aff* constant_aff(isl_aff* src, const int val) {
  auto ls = isl_aff_get_domain_local_space(src);
  cout << "ls = " << str(ls) << endl;
  auto v = isl_val_int_from_si(ctx(src), val);
  cout << "v = " << str(v) << endl;
  return aff_on_domain(ls, v);
}

isl_aff* sub(isl_aff* start_time_aff, const int compute_latency) {
  return sub(start_time_aff, constant_aff(start_time_aff, compute_latency));
}

isl_aff* add(isl_aff* start_time_aff, const int compute_latency) {
  return add(start_time_aff, constant_aff(start_time_aff, compute_latency));
}


isl_aff* mul(isl_aff* start_time_aff, const int compute_latency) {
  return isl_aff_scale_val(start_time_aff,
      isl_val_int_from_si(ctx(start_time_aff),
        compute_latency));
}

isl_aff* div(isl_aff* start_time_aff, const int compute_latency) {
  return div(start_time_aff, constant_aff(start_time_aff, compute_latency));
}

std::map<int, isl_val*> constant_components(isl_multi_aff* access) {
  map<int, isl_val*> ret;
  int d = 0;
  for (auto aff : get_affs(access)) {
    if (isl_aff_is_cst(aff)) {
      ret[d] = const_coeff(aff);
    }
    d++;
  }
  return ret;
}

isl_val* constant(isl_aff* a) {
  return isl_aff_get_constant_val(a);
}

umap* to_umap(const vector<isl_aff*>& hs) {
  assert(hs.size() > 0);

  auto ct = ctx(pick(hs));
  umap* schedmap = rdmap(ct, "{}");
  for (auto sp : hs) {
    isl_aff* sched = sp;

    isl_map* sm = isl_map_from_aff(sched);
    schedmap = unn(schedmap, to_umap(sm));
  }

  return schedmap;
}


isl_aff* flatten(isl_multi_aff* ma, isl_set* dom) {
  vector<int> lengths;
  vector<int> mins;
  for (int i = 0; i < num_dims(dom); i++) {
    auto s = project_all_but(dom, i);
    auto min = to_int(lexminval(s));
    mins.push_back(min);
    auto max = to_int(lexmaxval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }

  assert(isl_multi_aff_dim(ma, isl_dim_set) == num_dims(dom));

  vector<isl_aff*> addr_vec;
  isl_aff* flat = constant_aff(
      isl_multi_aff_get_aff(ma, 0),
      0);

  for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
    isl_aff* aff = isl_multi_aff_get_aff(ma, d);
    cout << tab(1) << "aff: " << str(aff) << endl;
    int length = 1;
    for (int i = 0; i < d; i++) {
      length *= lengths.at(i);
    }
    isl_aff* flt = mul(sub(aff, mins.at(d)), length);
    flat = add(flat, flt);
    cout << "flat: " << str(flat) << endl;
  }

  return flat;
}

isl_aff* flatten(const std::vector<int>& bank_factors, isl_multi_aff* ma, isl_set* dom) {
  vector<int> lengths;
  vector<int> mins;
  for (int i = 0; i < num_dims(dom); i++) {
    auto s = project_all_but(dom, i);
    auto min = to_int(lexminval(s));
    mins.push_back(min);
    auto max = to_int(lexmaxval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }

  assert(isl_multi_aff_dim(ma, isl_dim_set) == num_dims(dom));

  vector<isl_aff*> addr_vec;
  isl_aff* flat = constant_aff(
      isl_multi_aff_get_aff(ma, 0),
      0);

  for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
    isl_aff* aff = isl_multi_aff_get_aff(ma, d);
    cout << tab(1) << "aff: " << str(aff) << endl;
    int length = 1;
    for (int i = 0; i < d; i++) {
      length *= lengths.at(i);
    }
    isl_aff* flt = mul(isl_aff_floor(div(sub(aff, mins.at(d)), bank_factors.at(d))), length);
    //isl_aff* flt = mul(sub(aff, mins.at(d)), length);
    flat = add(flat, flt);
    cout << "flat: " << str(flat) << endl;
  }

  return flat;
  //return isl_aff_floor(div(flat, 2));
}

pair<isl_val*, isl_val*>
extract_div_free_linear_rational_approximation(isl_aff* aff_bound) {
  int in_dims = num_in_dims(aff_bound);
  int out_dims = num_out_dims(aff_bound);
  int div_dims = num_div_dims(aff_bound);

  //cout << "in_dims  = " << in_dims << endl;
  //cout << "out_dims = " << out_dims << endl;
  //cout << "div_dims = " << div_dims << endl;

  assert(in_dims == 1);
  assert(out_dims == 1);
  //assert(div_dims == 0);

  for (int i = 0; i < div_dims; i++) {
    auto dc = isl_aff_get_coefficient_val(aff_bound, isl_dim_div, i);
    assert(isl_val_is_zero(dc));
  }

  isl_val* b = isl_aff_get_constant_val(aff_bound);
  isl_val* k = isl_aff_get_coefficient_val(aff_bound, isl_dim_in, 0);
  //cout << "b = " << str(b) << endl;
  //cout << "k = " << str(k) << endl;

  return {k, b};
}

isl_aff* remove_div(isl_aff* aff_bound) {
  cout << "Extracting linear rational approximation for multi-in-dim affine: " << str(aff_bound) << endl;

  int in_dims = num_in_dims(aff_bound);
  int out_dims = num_out_dims(aff_bound);
  int div_dims = num_div_dims(aff_bound);

  //cout << "in_dims  = " << in_dims << endl;
  //cout << "out_dims = " << out_dims << endl;
  //cout << "div_dims = " << div_dims << endl;

  //assert(in_dims == 1);
  assert(out_dims == 1);
  //cout << "div dims = " << div_dims << endl;

  if (div_dims == 0) {
    return aff_bound;
  } else {
    //cout << "Getting div bound for: " << str(aff_bound) << endl;
    //cout << "Div exprs..." << endl;
    for (int i = 0; i < div_dims; i++) {
      auto dexpr = isl_aff_get_div(aff_bound, i);
      cout << tab(1) << str(dexpr) << endl;
    }
    assert(div_dims == 1);

    //set div coefficient to 0
    isl_aff* aff_rem_div = cpy(aff_bound);
    aff_rem_div = isl_aff_set_coefficient_si(aff_rem_div, isl_dim_div, 0, 0);

    return aff_rem_div;
  }
}

isl_map* remove_div(isl_map* m, int out_dim) {
    auto aff_vec = get_aff_vec(m);
    isl_aff_list* list = isl_aff_list_alloc(ctx(m), aff_vec.size());
    for (int  i = 0; i < aff_vec.size(); i ++) {
        auto aff = aff_vec.at(i);
        if (i == out_dim) {
            auto aff_rem = remove_div(aff);
            cout << "after removal: " <<  str(aff_rem) << endl;
            list = isl_aff_list_add(list, isl_aff_copy(aff_rem));
        } else {
            list = isl_aff_list_add(list, isl_aff_copy(aff));
        }
    }
    auto map_rem = to_map(isl_basic_map_from_aff_list(get_space(domain(m)), list));
    map_rem = isl_map_set_tuple_id(map_rem, isl_dim_out, id(ctx(m), range_name(m)));

    return map_rem;
}

pair<isl_val*, isl_val*>
extract_linear_rational_approximation(isl_aff* aff_bound) {
  cout << "Extracting linear rational approximation: " << str(aff_bound) << endl;

  int in_dims = num_in_dims(aff_bound);
  int out_dims = num_out_dims(aff_bound);
  int div_dims = num_div_dims(aff_bound);

  //cout << "in_dims  = " << in_dims << endl;
  //cout << "out_dims = " << out_dims << endl;
  //cout << "div_dims = " << div_dims << endl;

  assert(in_dims == 1);
  assert(out_dims == 1);
  //cout << "div dims = " << div_dims << endl;

  if (div_dims == 0) {
    auto dkb = extract_div_free_linear_rational_approximation(aff_bound);
    auto k = dkb.first;
    auto b = dkb.second;
    //cout << "b = " << str(b) << endl;
    //cout << "k = " << str(k) << endl;

    return {k, b};
  } else {
    //cout << "Getting div bound for: " << str(aff_bound) << endl;
    //cout << "Div exprs..." << endl;
    for (int i = 0; i < div_dims; i++) {
      auto dexpr = isl_aff_get_div(aff_bound, i);
      //cout << tab(1) << str(dexpr) << endl;
    }
    assert(div_dims == 1);

    isl_val* k = isl_aff_get_coefficient_val(aff_bound, isl_dim_in, 0);
    isl_val* k_div = isl_aff_get_coefficient_val(aff_bound, isl_dim_div, 0);
    isl_val* b = isl_aff_get_constant_val(aff_bound);
    cout << "aff k = " << str(k) << endl;
    cout << "aff k_div = " << str(k_div) << endl;
    cout << "aff b = " << str(b) << endl;

    isl_aff* div_expr = isl_aff_get_div(aff_bound, 0);
    cout << "Div: " << str(div_expr) << endl;
    auto dkb = extract_div_free_linear_rational_approximation(div_expr);
    cout << "div k = " << str(dkb.first) << endl;
    cout << "div b = " << str(dkb.second) << endl;

    //assert(isl_val_is_zero(dkb.second));

    isl_val* final_b = add(mul(dkb.second, k_div), b);
    isl_val* final_k = add(mul(dkb.first, k_div), k);
    cout << "final k = " << str(final_k) << endl;
    cout << "final b = " << str(final_b) << endl;
    //assert(isl_val_is_zero(k));

    assert(k_div != 0);
    if (k_div > 0) {
        return {final_k, final_b};
    } else {
        return {final_k, add(one(ctx(final_b)), final_b)};
    }
  }
}



isl_map* cyclic_function(isl_ctx* ctx, const std::string& name, const std::vector<int>& bank_factors) {
  vector<string> dvs;
  vector<string> bank_exprs;
  for (int i = 0; i < (int) bank_factors.size(); i++) {
    dvs.push_back("d" + str(i));
    bank_exprs.push_back("d" + str(i) + " % " + str(bank_factors.at(i)));
  }

  string folded_output = "Bank" + brackets(sep_list(bank_exprs, "", "", ", "));

  string bank_str = curlies(name + brackets(sep_list(dvs, "", "", ", ")) + " -> " + folded_output);
  return isl_map_read_from_str(ctx, bank_str.c_str());
}

vector<int> maxs(isl_set* s) {
  vector<int> exts;
  for (int d = 0; d < num_dims(s); d++) {
    auto pr = project_all_but(s, d);
    exts.push_back(to_int(lexmaxval(pr)));
  }
  return exts;
}

vector<int> mins(isl_set* s) {
  vector<int> exts;
  for (int d = 0; d < num_dims(s); d++) {
    auto pr = project_all_but(s, d);
    exts.push_back(to_int(lexminval(pr)));
  }
  return exts;
}

vector<int> extents(isl_set* s) {
  vector<int> exts;
  for (int d = 0; d < num_dims(s); d++) {
    auto pr = project_all_but(s, d);
    exts.push_back(to_int(lexmaxval(pr)) - to_int(lexminval(pr)) + 1);
  }
  return exts;
}

isl_set* project_out_zero_dim(isl_set* s) {
  auto s_c = cpy(s);
  vector<int> exts = extents(s_c);
  isl_set* ret = s_c;
  for (auto itr = exts.begin(); itr != exts.end(); itr ++) {
    if (*itr == 1){
      ret = project_out(ret, itr - exts.begin());
    }
  }
  return ret;
}

bool is_cst(isl_multi_aff* ma) {
  assert(false);
  return false;
}

bool is_cst(isl_aff* aff) {
  return isl_aff_is_cst(aff);
}

#pragma once

#ifdef COREIR
#include "coreir.h"
#include "coreir/libs/commonlib.h"
#endif

#include "qexpr.h"
#include "prog.h"

using namespace std;

//This is assuming read after write if they are scheduled
//for the same hardware cycle
umap* schedule_guard(umap* sched, bool is_rd);

struct HWconstraints {
    size_t in_port_width = 1;
    size_t out_port_width = 1;
    size_t in_port_number = 1;
    size_t out_port_number = 1;
    size_t capacity = 512;
    bool raw_same_cycle = false;
    bool war_same_cycle = false;
    maybe<int> vectorization_dim;
};

struct TileConstraints{
    size_t ic_in;
    size_t ic_out;
    size_t delay_ren2read;
};

struct bank {
  std::string name;
  InnerBankOffsetMode tp;

  // Stack bank properties
  std::string pt_type_string;
  vector<int> read_delays;
  int num_readers;
  int maxdelay;

  // RAM bank properties
  //Box layout;
  //The Box is overprocessed, it contains the raw information of layout
  //Box does not work if the box is stride
  //Data saved in this bank in the group domain
  isl_union_set* rddom;

  //port delay map
  map<string, int> delay_map;

  //method to extract box from data_domain
  Box extract_layout() {
    cout << "extracting box from " << str(rddom) << endl;
    auto min_pt =
      parse_pt(sample(lexmin(rddom)));
    auto max_pt =
      parse_pt(sample(lexmax(rddom)));

    assert(min_pt.size() == max_pt.size());

    Box b;
    for (size_t i = 0; i < min_pt.size(); i++) {
      b.intervals.push_back({min_pt.at(i), max_pt.at(i)});
      //cout << "min: " << min_pt.at(i) << ", max: " << max_pt.at(i) << endl;
    }
    //cout << tab(1) << "result = " << b << endl;
    return b;
  }

  //method determine if we are going to map to memory
  bool onlySR() const {
      auto delays = sort_unique(read_delays);
      for (size_t i = 0; i < delays.size()-1; i ++) {
          if (delays[i+1] - delays[i] != 1) {
              return false;
          }
      }
      return true;
  }

  bool onlyWire() const {
      auto delays = sort_unique(read_delays);
      cout << "Bank has delay: " << delays << endl;
      if (delays.size() == 1)
        if (pick(delays) == 0)
            return true;
      return false;
  }

  //return a vector of port string
  vector<string> get_out_ports() {
    vector<string> ret;
    for (auto itr: delay_map) {
        ret.push_back(itr.first);
    }
    return ret;
  }

  vector<pair<string, int> > get_sort_delay_map() {
    vector<pair<string, int> > delay_vec(delay_map.begin(), delay_map.end());
    sort(delay_vec.begin(), delay_vec.end(),
            [](const pair<string, int> &l, const pair<string, int> &r)
            {return l.second < r.second;});
    return delay_vec;
  }

  vector<string> get_outpt_with_ascending_addr() {
      auto tmp = get_sort_delay_map();
      vector<string> ret;
      for (auto it : tmp) {
        ret.push_back(it.first);
      }
      return ret;
  }

  vector<int> get_end_inds() const {
    auto break_points = get_break_points();

    vector<string> partitions;
    vector<int> end_inds;
    if (break_points.size() > 0) {
      for (size_t i = 0; i < break_points.size(); i++) {
        int current = break_points[i];
        int partition_capacity = -1;
        if (i < break_points.size() - 1) {
          if (break_points[i] != break_points[i + 1]) {
            int next = break_points[i + 1];
            partition_capacity = next - current;
            partitions.push_back("f" + to_string(i));
            end_inds.push_back(current + partition_capacity - 1);
          }
        } else {
          partition_capacity = 1;
          partitions.push_back("f" + to_string(i));
          end_inds.push_back(current + partition_capacity - 1);
        }
      }
    }
    return end_inds;
  }

  vector<pair<string, int> > get_partitions() const {
    auto break_points = get_break_points();

    vector<pair<string, int> > partitions;
    if (break_points.size() > 0) {
      for (size_t i = 0; i < break_points.size(); i++) {
        int current = break_points[i];
        int partition_capacity = -1;
        if (i < break_points.size() - 1) {
          if (break_points[i] != break_points[i + 1]) {
            int next = break_points[i + 1];
            partition_capacity = next - current;
            partitions.push_back({"f" + to_string(i), partition_capacity});
          }
        } else {
          partition_capacity = 1;
          partitions.push_back({"f" + to_string(i), partition_capacity});
        }
      }
    }
    return partitions;
  }

  vector<int> get_break_points() const {
    auto delays = sort_unique(read_delays);
    vector<int> break_points;
    if (delays.size() == 1) {
      break_points = {delays[0], delays[0]};
    } else {
      for (size_t i = 0; i < delays.size(); i++) {
        break_points.push_back(delays[i]);
        if (i < delays.size() - 1 && delays[i] != delays[i + 1] + 1) {
          break_points.push_back(delays[i] + 1);
        }
      }
    }
    return break_points;
  }
};

typedef bank stack_bank;

class AccessPattern {
  public:
      string buf_name, op_name;

      int var_dim;
      vector<int> in_range;
      vector<int> in_start;
      vector<int> stride;
      map<string, int> name2idx;

      int addr_dim;
      vector<int> out_range;
      vector<int> start_addr;

      //relation map help us to remove reaccess
      vector<bool> rel_map;

      //This save the fetch width info,
      //SRAM address is on the unit of wider fetch width
      vector<int> vec_stride_in_addr;

      //y is output dim, x is input dim
      vector<vector<int> > access_matrix;

      AccessPattern(){}
      AccessPattern(isl_map* a_map, isl_ctx* ctx):buf_name(range_name(a_map)), op_name(domain_name(a_map)){
          initial_access_mat(a_map, ctx);
      }

      AccessPattern(const AccessPattern & a) {
          op_name = a.op_name;
          buf_name = a.buf_name;
          var_dim = a.var_dim;
          in_range = a.in_range;
          in_start = a.in_start;
          stride = a.stride;
          name2idx = a.name2idx;

          addr_dim = a.addr_dim;
          out_range = a.out_range;
          start_addr = a.start_addr;
          vec_stride_in_addr = a.vec_stride_in_addr;

          access_matrix = a.access_matrix;
      }

      isl_set* get_domain(isl_ctx* ctx) {
          vector<string> var_list(var_dim-1);
          vector<string> bd_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
              string bd = std::to_string(in_start.at(itr.second-1)) + " <= " + itr.first +
                 " <= " + std::to_string(in_start[itr.second - 1] + in_range[itr.second-1]-1);
              bd_list[itr.second-1] = bd;
          }
          //var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          auto ds = sep_list(bd_list, "", "", " and ");
          return isl_set_read_from_str(ctx, string("{ " + op_name + vars + " : " + ds + "}").c_str());
      }

      string get_expr(int item, size_t cnt, vector<string> var_list) {
          if (item == 1) {
              return var_list[cnt];
          }
          else {
              return std::to_string(item) + "*" + var_list[cnt];
          }
      }

      pair<isl_map*, isl_map*> get_access_map_mask_refetch(isl_ctx* ctx) {
          vector<string> var_list(var_dim-1);
          vector<string> var_new, var_trans;
          int inner_most = get_inner_most_related_dom_dim();
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
              if (itr.second - 1 > inner_most) {
                var_trans.push_back(itr.first + "=0");
              } else {
                var_new.push_back(itr.first);
                var_trans.push_back(itr.first);
              }
          }
          //var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (auto row: access_matrix) {
              vector<string> sum_list;
              for (auto itr = row.begin()+1; itr != row.end(); itr ++ ){
                  int item = *itr;
                  int cnt = itr - row.begin() ;
                  if (item == 0 ) {
                      continue;
                  }
                  sum_list.push_back(get_expr(item, cnt, var_list));
              }

              //const
              if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
              }
              nd_expr.push_back(sep_list(sum_list, "", "", "+"));
          }
          string nd_expr_str = sep_list(nd_expr, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name + nd_expr_str + "}").c_str());
          auto trans_map = isl_map_read_from_str(ctx, string("{ " + op_name + bracket_list(var_new)+ " -> " + op_name + bracket_list(var_trans) + "}").c_str());
          cout << "trans map: " << str(trans_map) << endl;
          auto domain = get_domain(ctx);
          return {its(access_map, domain), trans_map};
      }

      isl_map* get_access_map(isl_ctx* ctx) {
          vector<string> var_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
          }
          //var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (auto row: access_matrix) {
              vector<string> sum_list;
              for (auto itr = row.begin()+1; itr != row.end(); itr ++ ){
                  int item = *itr;
                  int cnt = itr - row.begin() -1;
                  if (item == 0 ) {
                      continue;
                  }
                  sum_list.push_back(get_expr(item, cnt, var_list));
              }

              //const
              if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
              }
              nd_expr.push_back(sep_list(sum_list, "", "", "+"));
          }
          string nd_expr_str = sep_list(nd_expr, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name + nd_expr_str + "}").c_str());
          auto domain = get_domain(ctx);
          return its(access_map, domain);
      }

      //Should change into the vectorization dimension
      vector<int> get_non_inner_most_reaccess_dim() {
        vector<int> acc_map, ret;
        int cnt = 0;
        acc_map.push_back(0);
        for (auto rel: rel_map) {
          if (rel)
            cnt ++;
          acc_map.push_back(cnt);
        }
        int total = acc_map.back();
        for (int i = 1; i < acc_map.size(); i++) {
            if (acc_map[i] - acc_map[i-1] == 0) {
                if (acc_map[i] != total){
                    ret.push_back(i-1);
                }
            }
        }
        return ret;
      }

      //A dimension that project out should be captured in the next level memory
      isl_map* get_access_map_and_decouple_reuse(isl_ctx* ctx, int dim_id, std::set<int> proj_dim) {
          vector<string> var_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
          }
          var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (size_t row_cnt = 0; row_cnt < access_matrix.size(); row_cnt ++) {
              auto row = access_matrix[row_cnt];
              vector<string> sum_list;
              for(auto itr = row.begin() + 1; itr != row.end(); itr ++) {
                  //skip const.
                  int item = *itr;
                  int cnt = itr - row.begin() - 1;
                  if (item == 0)
                      continue;
                  //all dimension above the vectorization dimension should be factor out
                  if (row_cnt < dim_id) {
                    nd_expr.push_back(get_expr(item, cnt, var_list));
                  }
                  else {
                    if(proj_dim.count(cnt)) {
                      cout << "\t push var in decouple dimension: " << cnt << get_expr(item, cnt, var_list) << endl;
                      nd_expr.push_back(get_expr(item, cnt, var_list));
                    } else {
                      sum_list.push_back(get_expr(item, cnt, var_list));
                    }
                  }
              }
              if (row_cnt >= dim_id) {
                //only add const offset when it inside the vectorize dimension const
                if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
                }
                nd_expr.push_back(sep_list(sum_list, "", "", "+"));
              }
              else {
                  if (sum_list.size() == 0 || (row.front() != 0))
                  //TODO: check the following expr may work
                  //if ( row.front() != 0)
                      nd_expr.push_back(std::to_string(row.front()));
              }
          }
          string nd_expr_str = sep_list(nd_expr, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name  + nd_expr_str + "}").c_str());
          auto domain = get_domain(ctx);
          cout << "domain: " << str(domain) << "\naccess map: " << str(access_map) << endl;
          return its(access_map, domain);
      }

      //A dimension that project out should be captured in the next level memory
      isl_map* get_access_map_and_decouple_reuse(isl_ctx* ctx, int dim_id, int vec_dim, std::set<int> proj_dim) {
          vector<string> var_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
          }
          var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (size_t row_cnt = 0; row_cnt < access_matrix.size(); row_cnt ++) {
              auto row = access_matrix[row_cnt];
              vector<string> sum_list;
              for(auto itr = row.begin() + 1; itr != row.end(); itr ++) {
                  //skip const.
                  int item = *itr;
                  int cnt = itr - row.begin() - 1;
                  if (item == 0)
                      continue;
                  //all dimension above the vectorization dimension should be factor out
                  if (row_cnt < dim_id) {
                    nd_expr.push_back(get_expr(item, cnt, var_list));
                  }
                  else {
                    if (cnt >= vec_dim) {
                      sum_list.push_back(get_expr(item, cnt, var_list));
                    } else if(proj_dim.count(cnt)) {
                      cout << "\t push var in accumulate list: " << cnt << get_expr(item, cnt, var_list) << endl;
                      sum_list.push_back(get_expr(item, cnt, var_list));
                    } else {
                      nd_expr.push_back(get_expr(item, cnt, var_list));
                    }
                  }
              }
              if (row_cnt >= dim_id) {
                //only add const offset when it inside the vectorize dimension const
                if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
                }
                nd_expr.push_back(sep_list(sum_list, "", "", "+"));
              }
              else {
                  if (sum_list.size() == 0 || (row.front() != 0))
                  //TODO: check the following expr may work
                  //if ( row.front() != 0)
                      nd_expr.push_back(std::to_string(row.front()));
              }
          }
          string nd_expr_str = sep_list(nd_expr, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name  + nd_expr_str + "}").c_str());
          auto domain = get_domain(ctx);
          cout << "domain: " << str(domain) << "\naccess map: " << str(access_map) << endl;
          return its(access_map, domain);
      }

      isl_map* get_access_map_and_decouple_reuse(isl_ctx* ctx, int dim_id, int vec_dim) {
          vector<string> var_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
          }
          var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (size_t row_cnt = 0; row_cnt < access_matrix.size(); row_cnt ++) {
              auto row = access_matrix[row_cnt];
              vector<string> sum_list;
              for(auto itr = row.begin() + 1; itr != row.end(); itr ++) {
                  //skip const.
                  int item = *itr;
                  int cnt = itr - row.begin() - 1;
                  if (item == 0)
                      continue;
                  if (row_cnt < dim_id) {
                    nd_expr.push_back(get_expr(item, cnt, var_list));
                  }
                  else {
                    if (cnt  < vec_dim) {
                        nd_expr.push_back(get_expr(item, cnt, var_list));
                    } else {
                      sum_list.push_back(get_expr(item, cnt, var_list));
                    }
                  }
              }
              if (row_cnt >= dim_id) {
                //only add const offset when it inside the vectorize dimension const
                if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
                }
                nd_expr.push_back(sep_list(sum_list, "", "", "+"));
              }
              else {
                  if (sum_list.size() == 0 || (row.front() != 0))
                  //TODO: check the following expr may work
                  //if ( row.front() != 0)
                      nd_expr.push_back(std::to_string(row.front()));
              }
          }
          ////auto tb_pad = get_reaccess_dim_non_vectorized(dim_id);
          //auto tb_pad = get_non_inner_most_reaccess_dim();
          //cout << "tb pad dim: " << tb_pad << endl;
          //for (auto cnt: tb_pad) {
          //    if (cnt == 0)
          //      continue;
          //    auto it = nd_expr.begin();
          //    //get_expr(stride, id, all the var)
          //    nd_expr.insert(it, get_expr(1, cnt, var_list));
          //}
          string nd_expr_str = sep_list(nd_expr, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name  + nd_expr_str + "}").c_str());
          auto domain = get_domain(ctx);
          cout << "domain: " << str(domain) << "\naccess map: " << str(access_map) << endl;
          return its(access_map, domain);
      }

      isl_map* get_access_map_and_decouple_reuse(isl_ctx* ctx, int dim_id, bool rm_const=false) {
          vector<string> var_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
          }
          var_list[0] = "root=0";
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (size_t row_cnt = 0; row_cnt < access_matrix.size(); row_cnt ++) {
              auto row = access_matrix[row_cnt];
              vector<string> sum_list;
              for(auto itr = row.begin() + 1; itr != row.end(); itr ++) {
                  //skip const.
                  int item = *itr;
                  int cnt = itr - row.begin() - 1;
                  if (item == 0)
                      continue;
                  if (row_cnt < dim_id) {
                      nd_expr.push_back(get_expr(item, cnt, var_list));
                  }
                  else {
                    sum_list.push_back(get_expr(item, cnt, var_list));
                  }
              }
              if (row_cnt >= dim_id) {
                //only add const offset when it inside the vectorize dimension const
                if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
                }
                nd_expr.push_back(sep_list(sum_list, "", "", "+"));
              }
              else {
                  if (sum_list.size() == 0 || (row.front() != 0))
                      nd_expr.push_back(std::to_string(row.front()));
              }
          }
          ////auto tb_pad = get_reaccess_dim_non_vectorized(dim_id);
          //auto tb_pad = get_non_inner_most_reaccess_dim();
          //cout << "tb pad dim: " << tb_pad << endl;
          //for (auto cnt: tb_pad) {
          //    if (cnt == 0)
          //      continue;
          //    auto it = nd_expr.begin();
          //    //get_expr(stride, id, all the var)
          //    nd_expr.insert(it, get_expr(1, cnt, var_list));
          //}
          vector<string> nd_expr_new ;
          if (rm_const) {
            for (auto expr: nd_expr) {
              if (!is_number(expr)) {
                nd_expr_new.push_back(expr);
              }
            }
          } else {
            nd_expr_new = nd_expr;
          }
          string nd_expr_str = sep_list(nd_expr_new, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name  + nd_expr_str + "}").c_str());
          auto domain = get_domain(ctx);
          cout << "domain: " << str(domain) << "\naccess map: " << str(access_map) << endl;
          return its(access_map, domain);
      }

      void initial_access_mat(isl_map* access_map, isl_ctx* ctx) {
          //cout << "\t\tProduced: " << str(access_map) << endl;

          rel_map = relation_map(access_map);

          auto mpa = isl_pw_multi_aff_from_map(cpy(access_map));
          addr_dim = isl_pw_multi_aff_dim(mpa, isl_dim_out);
          map<string, int> var_related;
          for (int i = 0; i < addr_dim; i ++) {
              auto pa = isl_pw_multi_aff_get_pw_aff(mpa, i);
              isl_pw_aff_foreach_piece(pa, &isl_pw_aff_get_var_id, &var_related);
          }
          var_related["const"] = -1;

          vector<pair<string, int>> pairs;
          for (auto itr : var_related)
              pairs.push_back(itr);

          sort(pairs.begin(), pairs.end(),
                  [=](std::pair<string, int>& a, std::pair<string, int>& b){
                  return a.second < b.second;
                  });

          int cnt = 0;
          for (auto itr: pairs) {
              name2idx[itr.first] = cnt++;
          }

          var_dim = name2idx.size();

          //iniital the input var range
          in_range = vector<int>(var_dim - 1, 0);
          in_start = vector<int>(var_dim - 1, 0);
          for (auto it = pairs.begin(); it != pairs.end(); it ++) {
              if (it->first == "const")
                  continue;
              int min, max;
              min = get_dim_min(::domain(access_map), it->second);
              max = get_dim_max(::domain(access_map), it->second);
              cout << "Domain space on <"<< it->first;
              cout << "> is: [" << min << ", " << max <<"]"<< endl;
              //assert(min == 0);
              int offset = it - pairs.begin()-1;
              in_range[offset] = max - min + 1;
              in_start[offset] = min;
          }

          //initial the output addr range
          out_range = vector<int>(addr_dim, 0);
          start_addr = vector<int>(addr_dim, 0);
          for(int i = 0; i < addr_dim; i ++) {
              int min, max;
              //cout << int_upper_bound(card(to_uset(isl_map_range(isl_map_from_pw_aff(isl_map_dim_max(cpy(access_map), i))))))<< endl;
              int range_val = int_upper_bound(get_out_range(access_map, i));
              out_range[i] = range_val;
              auto vec_stride = isl_set_get_stride(isl_map_range(cpy(access_map)), i);
              vec_stride_in_addr.push_back(isl_val_get_num_si(vec_stride));
              cout << "Stride : " << isl_val_get_num_si(vec_stride) << "\tOrigin: " << str(vec_stride) << endl;
              //int range_max = get_dim_max(isl_map_domain(inv(access_map)),i);
              int range_max = get_dim_max(range(access_map),i);
              if (range_val == 1) {
                  start_addr[i] = range_max;
              }
              else {
                  start_addr[i] = range_max % isl_val_get_num_si(vec_stride);
              }
              cout << "ADDR dim <" << i << "> range: " << range_val << ", offset: " << start_addr[i] << endl;
              //TODO: save stride in the upper level data struct when we bundle those port
          }

          access_matrix = vector<vector<int>>(addr_dim, vector<int>(var_dim, 0));
          for (int i = 0; i < addr_dim; i++) {
              auto pa = isl_pw_multi_aff_get_pw_aff(mpa, i);
              map<string,  int> coef;
              isl_pw_aff_foreach_piece(pa, isl_pw_aff_get_coefficient, &coef);
              cout << "output_dim: " << i << endl;
              for (auto cc: coef) {
                  cout << "\tvar_name: " << cc.first <<", idx: " << name2idx[cc.first] << ", coef: " << cc.second << ", vec_stride_in_addr:" << vec_stride_in_addr[i] << endl;
                  //access_matrix[i][name2idx[cc.first]] = cc.second / vec_stride_in_addr[i];
                  //TODO: figure out what is vec stride in addr
                  access_matrix[i][name2idx[cc.first]] = cc.second;

              }
          }
      }

      //one of the rewrite rule
      void get_flatten_stride(vector<int>& st, const vector<int>& dim_sequence) {
          st = vector<int>(var_dim-1, 0);
          vector<int> sorted_out_range(addr_dim, 1);

          for (auto it = dim_sequence.begin(); it != dim_sequence.end() - 1; it ++) {
              int tmp = sorted_out_range[*it] * out_range[*it];
              sorted_out_range[*(it+1)] = tmp;
          }

          //cout << "out_range: ";
          //for_each(out_range.begin(), out_range.end(), [](int val) {cout <<"\t" << val;});
          //cout << endl;
          //cout << "dim_stride: ";
          //for_each(sorted_out_range.begin(), sorted_out_range.end(), [](int val) {cout <<"\t" << val;});
          //cout << endl;

          //matrix multiply with the linearization vector
          for (int addr_it = 0; addr_it < addr_dim; addr_it ++) {
              for (int var_it = 0; var_it < var_dim-1; var_it ++) {
                  auto stride_in_sram = access_matrix[addr_it][var_it+1] / vec_stride_in_addr[addr_it];
                  st[var_it] += sorted_out_range[addr_it] * stride_in_sram;
              }
          }
      }

      void init_flatten_stride(const vector<int>& dim_sequence) {
          stride = vector<int>(var_dim-1, 0);
          vector<int> sorted_out_range(addr_dim, 1);

          for (auto it = dim_sequence.begin(); it != dim_sequence.end() - 1; it ++) {
              int tmp = sorted_out_range[*it] * out_range[*it];
              sorted_out_range[*(it+1)] = tmp;
          }
          /*
          cout << "out_range: ";
          for_each(out_range.begin(), out_range.end(), [](int val) {cout <<"\t" << val;});
          cout << endl;
          cout << "dim_stride_: ";
          for_each(sorted_out_range.begin(), sorted_out_range.end(), [](int val) {cout <<"\t" << val;});
          cout << endl;*/

          //matrix multiply with the linearization vector
          for (int addr_it = 0; addr_it < addr_dim; addr_it ++) {
              for (int var_it = 0; var_it < var_dim-1; var_it ++) {
                  stride[var_it] += sorted_out_range[addr_it] * access_matrix[addr_it][var_it+1];
              }
          }

          //cout << "flatten stride: " << endl;
          //for_each(stride.begin(), stride.end(), [](int val) {cout <<"\t" << val;});
          //cout << endl;
      }

      void get_flatten_offset(int& start_addr, const vector<int>& dim_sequence) {
          start_addr = 0;
          vector<int> sorted_out_range(addr_dim, 1);

          for (auto it = dim_sequence.begin(); it != dim_sequence.end() - 1; it ++) {
              int tmp = sorted_out_range[*it] * out_range[*it];
              sorted_out_range[*(it+1)] = tmp;
          }

          //matrix multiply with the linearization vector
          for (int addr_it = 0; addr_it < addr_dim; addr_dim ++) {
              start_addr += sorted_out_range[addr_it] * access_matrix[addr_it][0];
          }
      }

      bool merge_lastdim() {
          //cout << "inner most range: " << in_range.back() << ", stride above: " << *(stride.rbegin()+1)<< endl;
          if (in_range.back() == *(stride.rbegin()+1)) {
              *(in_range.rbegin()+1) *= in_range.back();
              in_range.pop_back();
              stride.pop_back();
              stride.back() = 1;
              return true;
          }
          else
              return false;
      }

      bool is_1D_contigous_access() {
          return (in_range.size() == 1) && (stride.back() == 1);
      }

      bool is_access_matrix_col_empty(int id) {
          for (size_t i = 0; i < addr_dim; i ++) {
              if (access_matrix[i][id])
                  return false;
          }
          return true;
      }

      void remove_access_matrix_column(int id) {
          for (size_t i = 0; i < addr_dim; i ++) {
              auto row = access_matrix[i];
              row.erase(row.begin() + id);
          }
      }

      int get_inner_most_related_dom_dim() {
        int inner_most_address_related_dim_id = rel_map.size() - 1;
        for (int i = rel_map.size() - 1; i >= 0; i -- ) {
          if (rel_map.at(i) != 0) {
            inner_most_address_related_dim_id = i;
            break;
          }
        }
        return inner_most_address_related_dim_id;
      }

      //This is the method create the vectorized batch loop
      pair<isl_map*, isl_set*> get_op_transform(isl_ctx* ctx, int dim_id, int fetch_width, string suffix="_vec") {
          vector<int> & stride_in_target = access_matrix[dim_id];
          int inner_most = get_inner_most_related_dom_dim();
          cout << "trans op dim: " << inner_most << endl;
          vector<string> var_list(inner_most+1);
          vector<string> origin_var_list(var_dim-1);
          vector<string> reaccess_dim_stmt;
          //var_list.front() = "root";
          //origin_var_list.front() = "root";
          //TODO: handle reuse pattern
          for (auto it: name2idx) {
              if (it.first == "const")
                  continue;
              int id = it.second-1;
              if (stride_in_target[it.second] != 0 && (stride_in_target[it.second] < 4) && (id == inner_most)) {
                  int factor = fetch_width / stride_in_target[it.second];
                  string trans = "floor("+ it.first + "/" + to_string(factor) + ")";
                  var_list[id] = trans;
                  origin_var_list[id] = it.first;
              }
              else {
                  if (id <= inner_most) {
                      var_list[id] = it.first;
                  } else {
                      reaccess_dim_stmt.push_back(it.first + "=" + to_string(in_start.at(id)));
                  }
                  origin_var_list[id] = it.first;
              }
          }
          auto vars = sep_list(var_list, "[", "]", "," );
          auto origin_vars = sep_list(origin_var_list, "[", "]", "," );
          auto stmt = sep_list(reaccess_dim_stmt, "", "", " and ");
          cout <<"OP name: " << op_name << endl;
          isl_map* multi_map = to_map(rdmap(ctx, string("{ " + op_name + origin_vars + " -> " + op_name + suffix + vars + "}").c_str()));
          isl_set* sched_set = rdset(ctx, string("{ " + op_name + origin_vars + ": " + stmt + " }").c_str());
          return {multi_map, sched_set};
      }


      bool can_stripmining(isl_ctx* ctx, int dim_id, int fetch_width) {
          vector<int> & stride_in_target = access_matrix[dim_id];
          vector<string> var_list(var_dim-1);
          vector<string> origin_var_list(var_dim-1);
          //var_list.front() = "root";
          //origin_var_list.front() = "root";
          //TODO: handle reuse pattern
          for (auto it: name2idx) {
              if (it.first == "const")
                  continue;
              int id = it.second-1;
              if (stride_in_target[it.second] != 0
                      && (stride_in_target[it.second] < fetch_width)
                      && in_range.at(id) >= fetch_width) {
                  int factor = fetch_width / stride_in_target[it.second];
                  if (in_range.at(id) % fetch_width)
                      return false;
              }
          }
          return true;
      }

      //This is the method create the vectorized sequential loop
      isl_map* get_op_stripmining(isl_ctx* ctx, int dim_id, int fetch_width, string suffix="_vec") {
          vector<int> & stride_in_target = access_matrix[dim_id];
          int inner_most = get_inner_most_related_dom_dim();
          cout << "trans op dim: " << inner_most << endl;
          vector<string> var_list;//(var_dim-1);
          vector<string> origin_var_list(var_dim-1);
          //var_list.front() = "root";
          //origin_var_list.front() = "root";
          //TODO: handle reuse pattern
          for (auto it: name2idx) {
              if (it.first == "const")
                  continue;
              int id = it.second-1;
              if (stride_in_target[it.second] != 0
                      && (stride_in_target[it.second] < fetch_width)
                      && in_range.at(id) >= fetch_width) {
                  int factor = fetch_width / stride_in_target[it.second];
                  string trans = "floor("+ it.first + "/" + to_string(factor) + ")";
                  string rems = it.first + "%" + to_string(factor);
                  var_list.push_back(trans);
                  var_list.push_back(rems);
                  origin_var_list[id] = it.first;
              }
              else {
                  //if (id <= inner_most)
                  var_list.push_back(it.first);
                  origin_var_list[id] = it.first;
              }
          }
          auto vars = sep_list(var_list, "[", "]", "," );
          auto origin_vars = sep_list(origin_var_list, "[", "]", "," );
          cout <<"OP name: " << op_name << endl;
          isl_map* multi_map = to_map(rdmap(ctx, string("{ " + op_name + origin_vars + " -> " + op_name + suffix + vars + "}").c_str()));
          return multi_map;
      }

      isl_set* get_dom_slice(isl_ctx* ctx, int dim_id, int fetch_width, string suffix="_vec") {
          vector<int> & stride_in_target = access_matrix[dim_id];
          int inner_most = get_inner_most_related_dom_dim();
          cout << "stride in target: " << stride_in_target << endl;
          cout << "trans op dim: " << inner_most << endl;
          vector<string> var_list(inner_most+1);
          vector<string> origin_var_list(var_dim-1);
          vector<string> trans_constraints;
          //var_list.front() = "root";
          //origin_var_list.front() = "root";
          //TODO: handle reuse pattern
          for (auto it: name2idx) {
              if (it.first == "const")
                  continue;
              int id = it.second-1;
              if (stride_in_target[it.second] != 0 && (stride_in_target[it.second] < 4 && (id == inner_most))) {
                  int factor = fetch_width / stride_in_target[it.second];
                  string trans = it.first + "%" + to_string(factor) + " = 0";
                  trans_constraints.push_back(trans);
                  var_list[id] = it.first;
                  origin_var_list[id] = it.first;
              }
              else {
                  if (id <= inner_most)
                      var_list[id] = it.first;
                  origin_var_list[id] = it.first;
              }
          }
          auto vars = sep_list(var_list, "[", "]", "," );
          auto origin_vars = sep_list(origin_var_list, "[", "]", "," );
          auto constraints = sep_list(trans_constraints, "", "", " and ");
          cout <<"OP name: " << op_name << endl;
          isl_set* slice = (rdset(ctx, string("{ " + op_name + origin_vars + " : " + constraints + "}").c_str()));
          return slice;
      }

      isl_map* pad_one_dim_to_dom(isl_ctx* ctx, int time_stamp) {
          vector<string> var_list(var_dim-1);
          vector<string> origin_var_list(var_dim-1);
          //var_list.front() = "root";
          //origin_var_list.front() = "root";
          for (auto it: name2idx) {
              if (it.first == "const")
                  continue;
              var_list[it.second-1] = it.first;
              origin_var_list[it.second-1] = it.first;
          }
          origin_var_list.push_back(to_string(time_stamp));

          auto vars = sep_list(var_list, "[", "]", "," );
          auto origin_vars = sep_list(origin_var_list, "[", "]", "," );
          cout <<"OP name: " << op_name << endl;
          isl_map* multi_map = to_map(rdmap(ctx, string("{ " + op_name +"_sram2tb" + origin_vars + " -> " + op_name +"_sram2tb" + vars + "}").c_str()));
          return multi_map;
      }

      /*
       * This Function create a vector of map of the constraints on output buffer,
       * and map that to each port*/
      vector<isl_map*> get_buf_slice(isl_ctx* ctx, string new_buf_name, int dim_id, int fetch_width) {
          vector<string> var_list;
          vector<isl_map*> slices;
          for (size_t dim = 0; dim < addr_dim; dim ++) {
              var_list.push_back("i" + to_string(dim));
          }

          auto vars = sep_list(var_list, "[", "]", ",");
          for(size_t i = 0; i < fetch_width; i ++) {
              string constraint = "i" + to_string(dim_id) + "%" + to_string(fetch_width) + "=" + to_string(i);
              isl_map* slice_constriant = to_map(rdmap(ctx, string("{" + buf_name + vars + " -> " + new_buf_name + vars + ":" +constraint + "}" ).c_str()));
              slices.push_back(slice_constriant);
          }
          return slices;
      }

      vector<AccessPattern> vectorization(int dim_id, int fetch_width) {
          AccessPattern origin(*this);
          vector<int> & stride_in_target = access_matrix[dim_id];
          vector<int> var_list;
          for (size_t i = 1; i < stride_in_target.size(); i ++) {
              if (stride_in_target[i] == 0)
                  continue;
              if (stride_in_target[i] < fetch_width) {
                  var_list.push_back(i);
                  cout << "var need to be vectorize: " << i << endl;
              }
          }
          assert(var_list.size()  > 0);
          for (size_t i = 0; i < var_list.size(); i ++) {
            //Currently just support divisible
            int id = var_list[i];
            if (i == 0) {
                //the first variable
                assert(fetch_width % stride_in_target[id] == 0);
                int factor =  fetch_width / stride_in_target[id];
                stride_in_target[id] = fetch_width;
                assert(in_range[id - 1] % factor== 0);
                in_range[id - 1] /= factor;

            }
            else {
                //all the other stride should be strip off
                if (is_access_matrix_col_empty(id)) {
                    remove_access_matrix_column(id);
                    in_range.erase(in_range.begin() + id - 1);
                }
            }
          }

          vector<AccessPattern> access_pattern_vec;
          for (size_t i = 0; i < fetch_width; i ++) {
            access_matrix[dim_id][0] = i;
            //update out_range after we have the new access map

            access_pattern_vec.push_back(AccessPattern(*this));
          }

          //assign the original value
          *this = origin;
          return access_pattern_vec;
      }
};

struct MemConnSch {
  int dimensionality;
  unordered_map<string, vector<int>> vals;
  string read;
  string mux_write;
  string write;

  MemConnSch(){}
  MemConnSch(int dim, const unordered_map<string, vector<int>> &vals_in):
      dimensionality(dim), vals(vals_in) {}

  void remove_redundant_dim() {
    assert(vals.count("extent"));
    int dim = 0;
    vector<int> remove_dims;
    for (auto ext: vals.at("extent")) {
        if (ext == 1) {
            remove_dims.push_back(dim);
        }
        dim ++;
    }
    dimensionality -= remove_dims.size();
    // if (dimensionality == 0)
    //     dimensionality = 1;
    std::reverse(begin(remove_dims), end(remove_dims));
    for (auto rem_dim: remove_dims) {
        for (auto& it: vals) {
            //skip the start address
            if (it.second.size() == 1)
                continue;
            auto ptr = it.second.begin() + rem_dim;
            it.second.erase(ptr);
        }
    }
  }
};

//TODO put this into separate header
struct UBufferImpl;
struct GarnetImpl;
struct EmbarrassingBankingImpl;
struct CyclicBankingImpl;
struct dgraph;

class UBuffer {

  public:
    int port_widths;
    struct isl_ctx* ctx;
    string name;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;

    int coarse_grained_pipeline_loop_level;

    //This is used to retrive the flattened iteration domain
    std::map<string, isl_set*> retrive_domain;

    std::set<string> dynamic_ports;

    //Stencil valid map for each port
    std::map<string, umap*> sv_map;
    bool contain_memory_tile = false;

    std::map<string, umap*> access_map;
    std::map<string, isl_union_map*> schedule;
    std::map<string, vector<string> > port_bundles;

    banking_strategy banking;
    std::vector<bank> bank_list;
    map<string, std::set<string> > banks_to_inputs;
    map<string, std::set<string> > banks_to_outputs;

    //lowering ubuffer to memtile
    vector<int> read_cycle, write_cycle;
    vector<vector<int> > read_addr, write_addr;
    HWconstraints hardware;

#ifdef COREIR
    json config_file;
#endif

    //This identify how many shift register are connect,
    //and what is the depth of the shift register
    //map<string, map<string, int>> delay_map;

    //SRAM specific
    //Save the pair of read port bundle name and op pos point
    queue<pair<string, isl_set*>> rd_op_queue;

#ifdef COREIR
    void set_config(json config) {
        config_file = config;
    }
#endif

    int logical_dimension();

    //TODO: only support one read/write
    bool is_rd(isl_point* pt) {
        for (auto it: port_bundles) {
            auto pt_name = pick(it.second);
            if (!isIn.at(pt_name)) {
                auto sched = schedule.at(pt_name);
                auto qp = card(its_range(sched, to_uset(isl_set_from_point(cpy(pt)))));
                return int_lower_bound(qp) == 1;
            }
        }
        assert(false);
        return false;
    }

    int bundle_offset(const std::string& port) {
      for (auto b : port_bundles) {
        if (elem(port, b.second)) {
          for (int i = 0; i < (int) b.second.size(); i++) {
            if (b.second.at(i) == port) {
              return i;
            }
          }
        }
      }

      cout << "Error: No bundle for " << port << endl;
      assert(false);
    }

    std::string container_bundle(const std::string& port) {
      for (auto b : port_bundles) {
        if (elem(port, b.second)) {
          return b.first;
        }
      }
      cout << "Error: No bundle for " << port << endl;
      assert(false);
    }

    bool is_wr(isl_point* pt) {
        for (auto it: port_bundles) {
            auto pt_name = pick(it.second);
            if (isIn.at(pt_name)) {
                auto sched = schedule.at(pt_name);
                auto qp = card(its_range(sched, to_uset(isl_set_from_point(cpy(pt)))));
                return int_lower_bound(qp) == 1;
            }
        }
        cout << "Buffer: " << name << " cannot find port at " << str(pt) << endl;
        assert(false);
        return false;
    }

    void mark_write(size_t cycle, isl_set* iter_set) {
        write_cycle.push_back(cycle);
        auto addr_queue = get_wr_data_nd_addr(iter_set);
        vector<int> tmp;
        while(!addr_queue.empty()) {
            tmp.push_back(addr_queue.front());
            addr_queue.pop();
        }
        write_addr.push_back(tmp);
    }

    void mark_read(size_t cycle, isl_set* iter_set) {
        read_cycle.push_back(cycle);
        auto addr_queue = get_rd_data_nd_addr(iter_set);
        vector<int> tmp;
        while(!addr_queue.empty()) {
            tmp.push_back(addr_queue.front());
            addr_queue.pop();
        }
        cout << "read data: " << tmp << endl;
        read_addr.push_back(tmp);
    }

    //TODO: add a bundle name
    vector<string> get_bd_in_ports() {
        auto wr_bd = get_in_bundles();
        //assert(wr_bd.size() == 1);
        string bd_name = pick(wr_bd);
        vector<string> pt_vec = port_bundles.at(bd_name);
        return pt_vec;
    }

    vector<string> get_bd_out_ports() {
        auto rd_bd = get_out_bundles();
        //assert(rd_bd.size() == 1);
        string bd_name = pick(rd_bd);
        vector<string> pt_vec = port_bundles.at(bd_name);
        return pt_vec;
    }

    void sequentially_rename_output_domain_suffix(int starting_idx) {
      int outbd_cnt = starting_idx;
      for (string outbd: get_out_bundles()) {
          for (string pt: port_bundles.at(outbd)) {
              auto dom = domain.at(pt);
              string dom_name = ::name(dom);
              vector<string> substr =
                  split_at(dom_name, "_");
              substr.pop_back();
              substr.push_back(str(outbd_cnt));
              string new_name = sep_list(substr, "", "", "_");
              domain.at(pt) = set_name(dom, new_name);
              schedule.at(pt) = set_domain_name(schedule.at(pt), new_name);
              access_map.at(pt) = set_domain_name(access_map.at(pt), new_name);
          }
          outbd_cnt ++;
      }

    }

    void sequentially_rename_input_domain_suffix(int starting_idx) {
      int inbd_cnt = starting_idx;
      for (string inbd: get_in_bundles()) {
          for (string pt: port_bundles.at(inbd)) {
              auto dom = domain.at(pt);
              string dom_name = ::name(dom);
              vector<string> substr =
                  split_at(dom_name, "_");
              substr.pop_back();
              substr.push_back(str(inbd_cnt));
              string new_name = sep_list(substr, "", "", "_");
              domain.at(pt) = set_name(dom, new_name);
              schedule.at(pt) = set_domain_name(schedule.at(pt), new_name);
              access_map.at(pt) = set_domain_name(access_map.at(pt), new_name);
          }
          inbd_cnt ++;
      }

    }

    size_t get_wr_cycle() {
        auto pt_vec = get_bd_in_ports();
        return pt_vec.size() / hardware.in_port_width;
    }

    size_t get_rd_cycle() {
        auto pt_vec = get_bd_out_ports();
        return pt_vec.size() / hardware.out_port_width;
    }

    vector<int> get_linearization_vector() {
        vector<int> ret({1});
        vector<int> lengths;
        int ld = logical_dimension();
        for (int i = 0; i < ld; i ++) {
            auto s = project_all_but(to_set(global_range()), ld - i - 1);
            auto min = to_int(lexminval(s));
            auto max= to_int(lexmaxval(s));
            int length = max - min + 1;
            lengths.push_back(length);
        }
        for (int i = 0; i < logical_dimension()-1; i ++) {
            int stride = ret.back();
            ret.push_back(stride * lengths.at(i));
        }
        return ret;
    }

    bool is_overlap_with_port(string pt, isl_map* acc) {
      return !empty(its(range(access_map.at(pt)), range(to_umap(acc))));
    }

    bool pts_are_overlapped(string pt1, string pt2) {
      return is_overlap_with_port(pt1, to_map(access_map.at(pt2)));
    }

    map<string, bool> get_connection_map_to_outpt(isl_map* acc) {
        map<string, bool> ret;
        for (string out_pt: get_out_ports()) {
            ret.insert(make_pair(out_pt, is_overlap_with_port(out_pt, acc)));
        }
        return ret;
    }

    bool is_output_bundle(const std::string& bundle_name) const {

      if (!(contains_key(bundle_name, port_bundles))) {
        cout << "No bundle named " << bundle_name << endl;
        cout << "Available bundles..." << endl;
        for (auto b : port_bundles) {
          cout << tab(1) << b.first << endl;
        }
      }
      assert(contains_key(bundle_name, port_bundles));
      return is_out_pt(pick(map_find(bundle_name, port_bundles)));
    }

    bool is_input_bundle(const std::string& bundle_name) const {

      if (!(contains_key(bundle_name, port_bundles))) {
        cout << "No bundle named " << bundle_name << endl;
        cout << "Available bundles..." << endl;
        for (auto b : port_bundles) {
          cout << tab(1) << b.first << endl;
        }
      }
      assert(contains_key(bundle_name, port_bundles));
      return is_in_pt(pick(map_find(bundle_name, port_bundles)));
    }

    queue<int> get_rd_data_nd_addr(isl_set* op) {
        queue<int> ret;
        auto rd_data_set = get_out_data_set(op);
        auto point_vec = get_points(rd_data_set);
        sort(point_vec.begin(), point_vec.end(), lex_lt_pt);
        for (auto point:  point_vec) {
            auto b = get_linearization_vector();
            auto a = parse_pt(point);
            int addr = std::inner_product(a.rbegin(), a.rend(), b.begin(), 0);
            ret.push(addr);
        }
        return ret;
    }

    queue<int> get_wr_data_nd_addr(isl_set* op) {
        queue<int> ret;
        auto wr_data_set = get_in_data_set(op);
        auto point_vec = get_points(wr_data_set);
        sort(point_vec.begin(), point_vec.end(), lex_lt_pt);
        for (auto point:  point_vec) {
            auto b = get_linearization_vector();
            auto a = parse_pt(point);
            int addr = std::inner_product(a.begin(), a.end(), b.rbegin(), 0);
            ret.push(addr);
        }
        return ret;
    }

    //TODO: create a subclass and merge into the mark read method
    void mark_write_sram(size_t cycle, isl_set* iter_set) {
        auto num_cycle = get_wr_cycle();
        auto addr_queue = get_wr_data_nd_addr(iter_set);
        //TODO: make the delay a hardware property
        for (size_t delay = 1; delay < num_cycle + 1; delay ++) {
            write_cycle.push_back(cycle + delay);
            vector<int> tmp;
            for (size_t i = 0; i < hardware.in_port_width; i ++) {
                assert(!addr_queue.empty());
                tmp.push_back(addr_queue.front());
                addr_queue.pop();
            }
            write_addr.push_back(tmp);
        }
    }

    void mark_read_sram(isl_set* iteration_pos) {
        auto rd_bd = get_out_bundles();
        assert(rd_bd.size() == 1);
        string bd_name = pick(rd_bd);
        rd_op_queue.push(make_pair(bd_name, iteration_pos));
    }

    isl_union_set* get_in_data_set(isl_set* op) {
        vector<string> pt_vec = get_bd_in_ports();
        isl_union_set* data = isl_union_set_read_from_str(ctx, "{}");
        for(auto pt: pt_vec) {
            auto map_current_op = its(access_map.at(pt), op);
            data = unn(data, range(map_current_op));
        }
        return data;
    }

    isl_union_set* get_out_data_set(isl_set* op) {
        vector<string> pt_vec = get_bd_out_ports();
        isl_union_set* data = isl_union_set_read_from_str(ctx, "{}");
        for(auto pt: pt_vec) {
            auto map_current_op = its(access_map.at(pt), op);
            data = unn(data, range(map_current_op));
        }
        return data;
    }

    void schedule_read_sram(size_t cycle, isl_set* iteration_pos, UBuffer tb) {
        //chances are that no data read from SRAM, all data is in TB
        if (rd_op_queue.empty())
            return;

        auto possible_read = rd_op_queue.front();
        auto sram2tb_op = possible_read.second;

        //get the data relation in TB
        auto sram2tb_data_in_tb = tb.get_in_data_set(sram2tb_op);
        /*vector<string> pt_vec = tb.get_bd_in_ports();
        isl_union_set* sram2tb_data_in_tb = isl_union_set_read_from_str(ctx, "{}");
        for(auto pt: pt_vec) {
            auto map_current_op = its(tb.access_map.at(pt), sram2tb_op);
            sram2tb_data_in_tb = unn(sram2tb_data_in_tb, range(map_current_op));
        }*/
        //cout << "\t sram2tb: " << str(sram2tb_data_in_tb) << endl;

        /*vector<string> rd_pt_vec = tb.get_bd_out_ports();
        isl_union_set* tb2out_data_in_tb = isl_union_set_read_from_str(ctx, "{}");
        for (auto pt: rd_pt_vec) {
            auto map_current_op = its(tb.access_map.at(pt), iteration_pos);
            tb2out_data_in_tb = unn(tb2out_data_in_tb, range(map_current_op));
        }*/
        auto tb2out_data_in_tb = tb.get_out_data_set(iteration_pos);
        //cout << "\t tb2out: " << str(tb2out_data_in_tb) << endl;


        auto overlap = its(tb2out_data_in_tb, sram2tb_data_in_tb);
        //cout << "\toverlap: " << str(overlap) << endl;
        if (int_upper_bound(card(overlap)) > 0) {
            //this is the op we want to pop
            size_t rd_op_cycle = get_rd_cycle();
            size_t target_cycle = cycle - 1;
            stack<int> scheduled;
            while (scheduled.size() < rd_op_cycle) {
                //TODO: check if we can schedule the read
                bool has_write_scheduled = false;
                for (int write : write_cycle) {
                    if (target_cycle == write) {
                        has_write_scheduled = true;
                        break;
                    }
                }
                if (!has_write_scheduled) {
                    if (read_cycle.size())
                        assert(target_cycle > read_cycle.back());
                    scheduled.push(target_cycle);
                }
                target_cycle --;
            }

            auto addr_queue = get_rd_data_nd_addr(possible_read.second);
            while (!scheduled.empty()) {
                read_cycle.push_back(scheduled.top());
                vector<int>  tmp;
                for (size_t i = 0; i < hardware.in_port_width; i ++) {
                    assert(!addr_queue.empty());
                    tmp.push_back(addr_queue.front());
                    addr_queue.pop();
                }
                read_addr.push_back(tmp);
                cout << "SRAM read op: " << str(possible_read.second) << " execute in cycle: " << scheduled.top() << endl;
                scheduled.pop();
            }
            rd_op_queue.pop();
        }

    }

    int num_dims() const {
      assert(access_map.size() > 0);
      auto maps =
        get_maps(pick(access_map).second);
      assert(maps.size() > 0);
      return num_out_dims(maps.at(0));
    }

    int dom_dims() const {
      assert(domain.size() > 0);
      auto dom =
        pick(domain).second;
      return ::num_dims(dom);
    }

    bool cmp_by_bd(const string l, const string r) {
      auto l_bd = get_bundle(l);
      auto r_bd = get_bundle(r);
      if (l_bd != r_bd) {
        return l_bd < r_bd;
      }
      return l < r;
    }

    vector<string> sort_pt_by_bundle(const std::set<string> & pts) {
      vector<string> pt_vec(pts.begin(), pts.end());
      sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
          //Sort by bundle name first
          return this->cmp_by_bd(l, r);
      });
      return pt_vec;
    }

    string get_ub_inst_name(const int bank_id) const {
      return "ub_" + name + "_BANK_" + str(bank_id);
    }

    bool is_bank_input(const string& name) const{
      for (auto bk: bank_list) {
        if (elem(name, banks_to_inputs.at(bk.name))) {
          return true;
        }
      }
      return false;
    }

    bool is_bank_output(const string& name) const{
      for (auto bk: bank_list) {
        if (elem(name, banks_to_outputs.at(bk.name))) {
          return true;
        }
      }
      return false;
    }

    vector<string> unbanking_outpts() const {
      vector<string> cand;
      for (auto outpt: get_out_ports()) {
        if (!is_bank_output(outpt)) {
          cand.push_back(outpt);
        }
      }
      return cand;
    }


    vector<stack_bank> receiver_banks(const std::string& inpt) {
      vector<stack_bank> bnks;
      for (auto b : bank_list) {
        if (elem(inpt, map_find(b.name, banks_to_inputs))) {
          bnks.push_back(b);
        }
      }
      //vector<stack_bank> bnks;
      //vector<string> done;
      //for (auto bs : stack_banks) {
        //if (bs.first.first == inpt) {
          //if (!elem(bs.second.name, done)) {
            //bnks.push_back(bs.second);
            //done.push_back(bs.second.name);
          //}

        //}
      //}
      return bnks;
    }

    vector<string> get_all_outpts(string bk_name) {
      auto outpts_set = get_bank_outputs(bk_name);
      vector<string> outpts(outpts_set.begin(), outpts_set.end());
      vector<string> all_outpt_in_tree;

      //Sort the output ports and get the latest output schedule
      //sort(outpts.begin(), outpts.end(),
      //        [this](const string& l, const string & r) {
      //          auto l_start_time_stamp = lexminpt(range(schedule.at(l)));
      //          auto r_start_time_stamp = lexminpt(range(schedule.at(r)));
      //          return lex_lt_pt(l_start_time_stamp, r_start_time_stamp);
      //        });
      //last pt is the latests access
      //auto outpt = outpts.back();
      //Check if this is the shift register input
      //DFS for the leaf port
      for (auto outpt: outpts) {
        if(!is_bank_input(outpt)) {
            all_outpt_in_tree.push_back(outpt);
        } else {
          for (auto bk: receiver_banks(outpt)){
            concat(all_outpt_in_tree, get_all_outpts(bk.name));
          }
        }
      }
      return all_outpt_in_tree;
    }

    isl_union_map* get_stencil_valid_sched(string bk_name) {
      auto outpts = get_all_outpts(bk_name);
      //Sort the output ports and get the latest output schedule
      sort(outpts.begin(), outpts.end(),
              [this](const string& l, const string & r) {
                auto l_start_time_stamp = lexminpt(range(schedule.at(l)));
                auto r_start_time_stamp = lexminpt(range(schedule.at(r)));
                return lex_lt_pt(l_start_time_stamp, r_start_time_stamp);
              });
      return schedule.at(outpts.back());

      //only consider the shift register condition now
      //string outpt = pick(outpts);
      //if (!is_bank_input(outpt)) {
      //  return schedule.at(outpt);
      //} else {
      //  auto ret = isl_union_map_read_from_str(ctx, "{}");
      //  for (auto bk: receiver_banks(outpt)) {
      //    ret = unn(ret, get_stencil_valid_sched(bk.name));
      //  }
      //  return ret;
      //}
    }

    bool check_decouple_coarse_grained_pipeline_ctrl() {
      if (coarse_grained_pipeline_loop_level == 0)
          return false;
      for (auto it: schedule) {
        auto pt_name = it.first;
        auto sched = to_map(it.second);
        auto acc_map = to_map(access_map.at(pt_name));
        auto rel_map = relation_map(acc_map) ;
        int in_dim = coarse_grained_pipeline_loop_level;
        cout << get_in_dim_name(sched, in_dim) << endl;

        //TODO: double check this after ddl;
        //UPDATE on 7.26.2022:
        //  use multiple coarse grained pipeline ctrl level for different buffer
        //  TODO: this should be derived from loop level not distribute into ubuf
        //if we found this is not the cgpl, due to reduction of DNN loop
        //we take the inner most non-related loop as new cgpl loop
        for (int i = 0; i <= in_dim; i ++) {
          if (rel_map.at(i) == true) {
            cout << "Cannot separate this loop" << endl;
            assert(false);
            cout << "New cgpl level: " << get_in_dim_name(sched, i-1) << endl;;
            coarse_grained_pipeline_loop_level = i-1;
          }
        }
      }
      return true;
    }

    isl_union_map* get_outpt_sched() const {
      auto ret = isl_union_map_read_from_str(ctx, "{}");
      for (auto pt: get_out_ports()) {
        if (!is_bank_input(pt)) {
            ret = unn(ret, schedule.at(pt));
        }
      }
      return ret;
    }

    isl_union_map* global_outpt_sched() const {
      auto ret = isl_union_map_read_from_str(ctx, "{}");
      for (auto pt: get_out_ports()) {
        ret = unn(ret, schedule.at(pt));
      }
      return ret;
    }

    isl_union_map* global_inpt_sched() const {
      auto ret = isl_union_map_read_from_str(ctx, "{}");
      for (auto pt: get_in_ports()) {
        ret = unn(ret, schedule.at(pt));
      }
      return ret;
    }

    bank get_bank(const std::string& name) const {
      for (auto bank : bank_list) {
        if (bank.name == name) {
          return bank;
        }
      }
      //for (auto b : stack_banks) {
        //if (b.second.name == name) {
          //return b.second;
        //}
      //}
      cout << "Error: No such bank as: " << name << endl;
      assert(false);
      return {};
    }

    bool is_bank_SR(const std::string& name) const {
      auto inputs = get_bank_inputs(name);
      bool ret = true;
      for (auto pt: inputs) {
        ret &= !isIn.at(pt);
      }
      cout << "BK: " << name << "is SR: " << ret << endl;

      //check if input ports are all output port in ubuf
      return ret;
    }

    string get_bank_input(const std::string& name) const {
      auto inputs = get_bank_inputs(name);
      assert(inputs.size() == 1);
      return *(std::begin(inputs));
    }

    std::set<string> get_bank_inputs(const std::string& name) const {
      assert(contains_key(name, banks_to_inputs));

      std::set<string> ret;
      for (auto in : map_find(name, banks_to_inputs)) {
        ret.insert(in);
      }
      return ret;

      //for (auto b : stack_banks) {
        //if (b.second.name == name) {
          //ret.insert(b.first.first);
        //}
      //}
      //return ret;
    }

    bool can_be_broadcast(const std::string& pt0, const std::string& pt1) const {
      auto acc_0 = to_map(access_map.at(pt0));
      auto acc_1 = to_map(access_map.at(pt1));
      auto sched_0 = range(schedule.at(pt0));
      auto sched_1 = range(schedule.at(pt1));
      bool acc_equal = equal_regardless_of_domain(acc_0, acc_1);
      bool sched_equal = equal(sched_0, sched_1);
      return acc_equal && sched_equal;
    }

    std::set<string> get_bank_outputs(const std::string& name) const {
      if (!(contains_key(name, banks_to_outputs))) {
        cout << "Error: No outputs for bank " << name << endl;
      }
      assert(contains_key(name, banks_to_outputs));
      std::set<string> ret;
      for (auto out : map_find(name, banks_to_outputs)) {
        ret.insert(out);
      }
      return ret;
      //for (auto b : stack_banks) {
        //if (b.second.name == name) {
          //ret.insert(b.first.second);
        //}
      //}
      //return ret;
    }

    map<string, std::set<string> > get_unique_ports(std::set<string> &ports);

std::set<string> get_bank_unique_outputs(const std::string& name) const {
    auto outpts_all = get_bank_outputs(name);
    std::set<string> unique_outpts;
    for (auto pt: outpts_all) {
        if (unique_outpts.empty()) {
            unique_outpts.insert(pt);
        } else {
            for (auto upt: unique_outpts) {
                if (! can_be_broadcast(pt, upt)) {
                    unique_outpts.insert(pt);
                }
            }
        }
    }
    return unique_outpts;
}

    bool has_bank(const std::string& name) {
      for (auto& bnk : bank_list) {
        if (bnk.name == name) {
          return true;
        }
      }
      return false;
    }

    void replace_bank(stack_bank& target, stack_bank& replacement) {
      if (!has_bank(replacement.name)) {
        bank_list.push_back(replacement);
      }

      for (auto in : get_bank_inputs(target.name)) {
        banks_to_inputs[replacement.name].insert(in);
      }

      for (auto out : get_bank_outputs(target.name)) {
        banks_to_outputs[replacement.name].insert(out);
      }

      remove_bank(target);
      //banks_to_inputs[target.name] = {};
      //banks_to_outputs[target.name] = {};

      //for (auto bnk : stack_banks) {
        //if (bnk.second.name == target.name) {
          //stack_banks[bnk.first] = replacement;
          //break;
        //}
      //}
    }

    void remove_bank(const bank& to_remove) {
      vector<bank> replace;
      for (auto bnk : get_banks()) {
        if (bnk.name == to_remove.name) {
          banks_to_inputs.erase(bnk.name);
          banks_to_outputs.erase(bnk.name);
        } else {
          replace.push_back(bnk);
        }
      }
      bank_list = replace;

      //map<pair<string, string>, bank> replace;
      //for (auto bnk : stack_banks) {
        //if (bnk.first.second != pt_name) {
          //replace.insert(bnk);
        //}
      //}
      //stack_banks = replace;
    }

    void remove_bank(string pt_name) {
      vector<bank> replace;
      for (auto bnk : get_banks()) {
        if (elem(pt_name, get_bank_outputs(bnk.name))) {
          banks_to_inputs.erase(bnk.name);
          banks_to_outputs.erase(bnk.name);
        } else {
          replace.push_back(bnk);
        }
      }
      bank_list = replace;

      //map<pair<string, string>, bank> replace;
      //for (auto bnk : stack_banks) {
        //if (bnk.first.second != pt_name) {
          //replace.insert(bnk);
        //}
      //}
      //stack_banks = replace;
    }

    //The method replace the original access map and add a valid domain
    void replace_pt(string pt, isl_map* target, isl_map* sched) {
        if (sv_map.count(pt) == 0) {
          sv_map[pt] = dot(to_umap(target), inv(access_map.at(pt)));
        } else {
          auto original_addr2iter = dot(inv(access_map.at(pt)), sv_map.at(pt));
          sv_map.at(pt) = dot(to_umap(target), original_addr2iter);
        }
        cout << "Add pt: " << pt << " stencil valid map: " << str(sv_map.at(pt)) << endl;
        access_map.at(pt) = to_umap(target);
        domain.at(pt) = ::domain(target);
        schedule.at(pt) = to_umap(sched);
    }

    vector<stack_bank> get_banks() {
      return bank_list;
      //vector<stack_bank> bnk;
      //std::set<string> done;
      //for (auto bs : stack_banks) {
        //if (!elem(bs.second.name, done)) {
          //bnk.push_back(bs.second);
          //done.insert(bs.second.name);
        //}
      //}
      //return bnk;
    }
    vector<stack_bank> get_banks_and_sort() {
      auto bank_list = get_banks();
      sort(bank_list.begin(), bank_list.end(), [](const bank l, const bank r) {
                return l.maxdelay > r.maxdelay;
              } );
      return bank_list;
    }

    void add_bank_between(const std::string& inpt, const std::string& outpt, const stack_bank& bank) {
      if (!has_bank(bank.name)) {
        bank_list.push_back(bank);
      }
      banks_to_inputs[bank.name].insert(inpt);
      banks_to_outputs[bank.name].insert(outpt);

      assert(get_bank_outputs(bank.name).size() >= 0);
      assert(get_bank_inputs(bank.name).size() >= 0);

      //stack_banks[{inpt, outpt}] = bank;
    }

    void add_bank_between(const std::set<string>& inpt_set, const std::set<string>& outpt_set, const stack_bank& bank) {
      if (!has_bank(bank.name)) {
        bank_list.push_back(bank);
      }
      for (auto inpt: inpt_set) {
        banks_to_inputs[bank.name].insert(inpt);
      }
      for (auto outpt: outpt_set) {
        banks_to_outputs[bank.name].insert(outpt);
      }

      assert(get_bank_outputs(bank.name).size() >= 0);
      assert(get_bank_inputs(bank.name).size() >= 0);

    }

    bool has_bank_between(const std::string& inpt, const std::string& outpt) const {
      for (auto b : bank_list) {
        if (elem(inpt, map_find(b.name, banks_to_inputs)) &&
            elem(outpt, map_find(b.name, banks_to_outputs))) {
          return true;
        }
      }
      return false;
      //for (auto bs : stack_banks) {
        //if (bs.first.first == inpt && bs.first.second == outpt) {
          //return true;
        //}
      //}

      //return false;
    }

    string bank_between(const std::string& inpt, const std::string& outpt) const {

      for (auto b : bank_list) {
        if (elem(inpt, map_find(b.name, banks_to_inputs)) &&
            elem(outpt, map_find(b.name, banks_to_outputs))) {
          return b.name;
        }
      }
      //return false;
      //for (auto bs : stack_banks) {
        //if (bs.first.first == inpt && bs.first.second == outpt) {
          //return bs.second.name;
        //}
      //}

      cout << "Error: No bank between: " << inpt << " and " << outpt << endl;
      assert(false);
      return "";
    }

    bank get_bank_between(const std::string& inpt, const std::string& outpt) const {
      string bk_name = bank_between(inpt, outpt);
      return get_bank(bk_name);
    }


    UBuffer() : port_widths(32), coarse_grained_pipeline_loop_level(0) {}

    //method to create a subgroup
    UBuffer(UBuffer buf, std::set<string> inpt_set, std::set<string> outpt_set, int idx) {
      name = buf.name + to_string(idx);
      ctx = buf.ctx;
      port_widths = buf.port_widths;

      //adding port
      for (auto itr: buf.port_bundles) {
        for (auto pt_name : itr.second) {
          if (buf.isIn.at(pt_name)){
            if (inpt_set.count(pt_name)) {
              port_bundles[itr.first].push_back(pt_name);
              auto acc_map = to_map(buf.access_map.at(pt_name));
              acc_map = set_range_name(acc_map, name);
              add_in_pt(pt_name,
                      buf.domain.at(pt_name),
                      acc_map,
                      buf.schedule.at(pt_name));
            }
          }
          else {
            if (outpt_set.count(pt_name)) {
              port_bundles[itr.first].push_back(pt_name);
              auto acc_map = to_map(buf.access_map.at(pt_name));
              acc_map = set_range_name(acc_map, name);
              add_out_pt(pt_name,
                      buf.domain.at(pt_name),
                      acc_map,
                      buf.schedule.at(pt_name));
            }
          }
        }
      }

      //reconstruct_bank
      for (auto inpt: get_in_ports()) {
          for (auto outpt: get_out_ports()) {
              if (buf.has_bank_between(inpt, outpt)) {
                add_bank_between(inpt, outpt, buf.get_bank_between(inpt, outpt));
                  //stack_banks[make_pair(inpt, outpt)] =
                      //buf.get_bank_between(inpt, outpt);
              }
          }
      }
    }

    //For lake codegen banking chaining
    maybe<vector<int>>get_consumer_bank_dim_id() {
      vector<int> id_candidate;
      auto outpt_map = access_map.at(pick(get_out_ports()));
      auto rng = to_set(range(outpt_map));
      for(int i = 0; i < ::num_dims(rng); i ++) {
          //cannot bank on the vectorization dimension
          if (hardware.vectorization_dim.has_value()){
              if (hardware.vectorization_dim.get_value() == i){
                  continue;
              }
          }
        auto s = project_all_but(rng, i);
        if (to_int(lexminval(s)) == to_int(lexmaxval(s))) {
          id_candidate.push_back(i);
        }
      }
      if (id_candidate.size() == 0)
          return {};
      //assert(id_candidate.size() == 1);
      //put into the reverse order, easier to remove the diemnsion
      std::reverse(begin(id_candidate), end(id_candidate));
      return {id_candidate};
    }

    maybe<vector<int>> get_producer_bank_dim_id() {
      vector<int> id_candidate;
      auto inpt_map = access_map.at(pick(get_in_ports()));
      auto rng = to_set(range(inpt_map));
      for(int i = 0; i < ::num_dims(rng); i ++) {
          //cannot bank on the vectorization dimension
          if (hardware.vectorization_dim.has_value()){
              if (hardware.vectorization_dim.get_value() == i){
                  continue;
              }
          }
        auto s = project_all_but(rng, i);
        if (to_int(lexminval(s)) == to_int(lexmaxval(s))) {
          id_candidate.push_back(i);
        }
      }
      if (id_candidate.size() == 0)
          return {};
      //assert(id_candidate.size() == 1);
      std::reverse(begin(id_candidate), end(id_candidate));
      return {id_candidate};
    }

    //A ubuffer rewrite pass before vectorization remove the redundant dimension
    bool simplify_address_space() {
        auto consumer_rem_dim = get_consumer_bank_dim_id();
        auto producer_rem_dim = get_producer_bank_dim_id();
        if (consumer_rem_dim.has_value() && producer_rem_dim.has_value()) {
            auto cons_rem = consumer_rem_dim.get_value();
            auto prod_rem = producer_rem_dim.get_value();
            vector<int> rem;
            //std::set_intersection(cons_rem.begin(), cons_rem.end(),
            //        prod_rem.begin(), prod_rem.end(),
            //        rem.begin());
            for (auto i : cons_rem) {
                if (std::find(prod_rem.begin(), prod_rem.end(), i) != prod_rem.end()) {
                    rem.push_back(i);
                }
            }
            cout << tab(2) << "cons rem: " << cons_rem << endl;
            cout << tab(2) << "prod rem: " << prod_rem << endl;
            cout << tab(2) << "its: " << rem << endl;
            for (auto rem_dim: rem) {
                for (auto & it : access_map) {
                    auto acc_map = to_map(it.second);
                    if (num_out_dims(acc_map) == 1)
                        continue;
                    cout <<tab(2) << "Dim:" << rem_dim << " will be project out: " << str(acc_map) << endl;
                    it.second = to_umap(project_out(acc_map, rem_dim));
                }
            }
            return rem.size();
        }
        return false;
    }

    void remove_bank_dim() {
        for (auto pt: get_all_ports()) {
            auto sched = to_map(schedule.at(pt));
            schedule.at(pt) = to_umap(remove_irrelevant_in_dim(sched));
            auto acc_m = to_map(access_map.at(pt));
            auto acc_rem = remove_irrelevant_in_dim(acc_m);
            access_map.at(pt) = to_umap(acc_rem);
            domain.at(pt) = ::domain(acc_rem);
        }
    }

    void linear_address_space(isl_set* rddom, int fetch_width) {
      auto reduce_map = linear_address_map_lake_SR(rddom, fetch_width);
      string dname = buf_range_name();
      reduce_map = set_domain_name(reduce_map, dname);
      reduce_map = set_range_name(reduce_map, dname);
      cout << "reduce map: " << str(reduce_map) << endl;
      for (auto& it: access_map) {
        auto acc_map = to_map(it.second);
        auto linear_acc_map = dot(acc_map, reduce_map);
        cout << "linear map: " << str(linear_acc_map) << endl;
        it.second = to_umap(linear_acc_map);
      }
    }

    //go through all port and tighten the iteartion domain
    void tighten_iteration_domain() {
        for (auto pt: get_all_ports()) {
            auto dom = domain.at(pt);
            vector<int> stride_vec;
            int accumulated_stride = 1;
            for (int dim = 0; dim < ::num_dims(dom); dim ++) {
                int stride = stride_in_dim(dom, dim);
                stride_vec.push_back(stride);
                accumulated_stride *= stride;
            }

            if(accumulated_stride != 1) {
                auto trans = get_domain_trans(dom, stride_vec);
                cout << "Trans for iteration domain: " << str(trans) << endl;
                access_map.at(pt) = dot(to_umap(trans), access_map.at(pt));
                cout << str(access_map.at(pt)) << endl;
                schedule.at(pt) = dot(to_umap(trans), schedule.at(pt));
                domain.at(pt) = ::domain(to_map(access_map.at(pt)));
            }
        }
    }


    //FIXME: this is a heuristic, it's overaproximation, may not be the unroll
    std::set<int> get_unroll_dimensions() {
      //Find the unrolling dimension
      std::set<int> addr_need_tight;
      for (auto it: access_map) {
          auto am = to_map(it.second);
          isl_set* addr_range = range(am);
          int addr_dim = ::num_dims(addr_range);
          for (int i = 0; i < addr_dim; i ++) {
              if (stride_in_dim(addr_range, i) != 1)
                  addr_need_tight.insert(i);
          }
      }
      cout << "addr need tight: " << addr_need_tight << endl;
      return addr_need_tight;
    }

    //dimension are fully unrolled
    std::set<int> get_fully_unroll_dimensions() {
      //Find the unrolling dimension
      std::set<int> fully_unrolled_dim;
      for (auto it: access_map) {
          auto am = to_map(it.second);
          isl_set* addr_range = range(am);
          int addr_dim = ::num_dims(addr_range);
          for (int i = 0; i < addr_dim; i ++) {
              int dom_rng = get_domain_range(addr_range, i);
              if (dom_rng == 1)
                  fully_unrolled_dim.insert(i);
          }
      }
      cout << "addr dim fully unrolled: " << fully_unrolled_dim << endl;
      return fully_unrolled_dim;
    }


    CyclicBankingImpl get_cyclic_banking_implement(UBufferImpl & impl);

    //return a vector<int> size equals to dimension
    vector<int> get_cyclic_banking_factors() {
      vector<int> cyclic_banking_factors(num_dims(), 1);

      std::set<int> addr_need_tight = get_unroll_dimensions();
      for (int addr_dim: addr_need_tight) {
        int cms_in = 0, cms_out = 0;
        for (auto inpt: get_in_ports()) {
            auto am = to_map(access_map.at(inpt));
            //cout << str(am) << endl;
            cms_in = std::gcd(cms_in, common_max_stride(am, addr_dim));
            //cout << "cms in: " << cms_out << endl;
        }
        for (auto outpt: get_out_ports()) {
            auto am = to_map(access_map.at(outpt));
            //cout << str(am) << endl;
            cms_out = std::gcd(cms_out, common_max_stride(am, addr_dim));
            //cout << "cms out: " << cms_out << endl;
        }
        cyclic_banking_factors.at(addr_dim) = std::max(cms_in, cms_out);
      }

      //TODO: Fully unrolled dimension should be caught by cyclic banking,
      //we may not need embarassing banking at all
      std::set<int> addr_fully_unrolled = get_fully_unroll_dimensions();
      auto gb_domain= to_set(global_range());
      for (int addr_dim: addr_fully_unrolled) {
        int banking_factor = get_domain_range(gb_domain, addr_dim);
        if (banking_factor != 1) {
            cyclic_banking_factors.at(addr_dim) = banking_factor;
        }
      }

      cout << "Cyclic banking factors: " << cyclic_banking_factors << endl;
      return cyclic_banking_factors;
    }

    //ubuffer rewrite pass remove common-minimum stride
void tighten_address_space() {
    std::set<int> addr_need_tight = get_unroll_dimensions();
    for(int addr_dim: addr_need_tight) {
      int cms = 0;
      for (auto it: access_map) {
          auto am = coalesce(to_map(it.second));
          auto am_cms = common_max_stride(am, addr_dim);
          //cout << "\t common max stride for am: " << str(am) << endl << "\t" << am_cms << endl;
          cms = std::gcd(cms, am_cms);
      }
      cout << "common max stride = " << cms << endl;
      if (cms > 1) {
          cout << "Could tighten address! " << endl;
          for (auto& it: access_map){
            auto am = to_map(it.second);
            auto trans= get_set_slice(range(am), addr_dim, cms);
            it.second = to_umap(dot(am, (trans)));
            cout <<"\tTighten access map to: " << str(it.second) << endl;
          }
      }

    }
}


    int lanes_in_bundle(const std::string& bn) {
      assert(contains_key(bn, port_bundles));
      return map_find(bn, port_bundles).size();
    }

    isl_union_map* bundle_access(const std::string& bn) {
      auto d = isl_union_map_read_from_str(ctx, "{}");
      for (auto pt : port_bundles.at(bn)) {
        d = unn(d, cpy((access_map.at(pt))));
      }
      return d;
    }

    isl_union_set* bundle_domain(const std::string& bn) {
      auto d = isl_union_set_read_from_str(ctx, "{}");
      for (auto pt : port_bundles.at(bn)) {
        d = unn(d, cpy(to_uset(domain.at(pt))));
      }
      return d;
    }

    int port_width(const std::string& port_name) const {
      return port_widths;
    }

    std::string port_type_string() const {
      if (port_widths == 32) {
        return "hw_uint<32> ";
      }
      return "hw_uint<" + to_string(port_widths) + ">";
    }
    std::string port_type_string(const std::string& name) const {
      if (port_width(name) == 32) {
        return "hw_uint<32> ";
      }
      return "hw_uint<" + to_string(port_width(name)) + ">";
    }

    int bundle_lane_width(const std::string& bundle_name) {
      assert(contains_key(bundle_name, port_bundles));
      return port_width(pick(map_find(bundle_name, port_bundles)));
    }

    int port_bundle_width(const std::string& bundle_name) {
      assert(contains_key(bundle_name, port_bundles));
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return len;
    }

    std::string bundle_type_string(const std::string& bundle_name) const {
      assert(contains_key(bundle_name, port_bundles));
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return "hw_uint<" + to_string(len) + ">";
    }

    std::string bundle_stream(const std::string& bundle_name) const {
      bool input_bundle = isIn.at(pick(port_bundles.at(bundle_name)));
      string bundle_type_str = bundle_type_string(bundle_name);
      //return string(input_bundle ? "Input" : "Output") + "Stream<" + bundle_type_str + " >& " + bundle_name;
      return "HWStream<" + bundle_type_str + " >& " + bundle_name;
    }

    isl_union_set* all_memory() {
      auto m =
        unn(producer_map(), consumer_map());
      return range(m);
    }

    isl_union_map* global_sv_map() {
        umap* m = isl_union_map_read_from_str(ctx, "{  }");
        for (auto it: sv_map) {
            m = unn(m, it.second);
        }
        return m;
    }

    isl_union_set* global_domain() {
      uset* s = isl_union_set_read_from_str(ctx, "{ }");
      for (auto other : domain) {
        s = unn(s, to_uset(cpy(other.second)));
      }
      return s;
    }


    isl_union_set* global_write_domain() {
      uset* s = isl_union_set_read_from_str(ctx, "{ }");
      auto wr_ops = get_write_ops();
      for (auto dm: domain) {
        string dm_name = ::name(dm.second);
        if (wr_ops.count(dm_name)) {
          s = unn(s, to_uset(cpy(dm.second)));
        }
      }
      return s;
    }

    isl_union_set* global_read_domain() {
      uset* s = isl_union_set_read_from_str(ctx, "{ }");
      auto rd_ops = get_read_ops();
      for (auto dm: domain) {
        string dm_name = ::name(dm.second);
        if (rd_ops.count(dm_name)) {
          s = unn(s, to_uset(cpy(dm.second)));
        }
      }
      return s;
    }

    int global_write_count() {
      int cnt = 0;
      uset* wr_dom = global_write_domain();
      return int_upper_bound(card(wr_dom));
    }

    int global_read_count() {
      int cnt = 0;
      uset* rd_dom = global_read_domain();
      return  int_upper_bound(card(rd_dom));

    }

    isl_union_set* global_retrive_domain() {
      uset* s = isl_union_set_read_from_str(ctx, "{ }");
      for (auto other : retrive_domain) {
        s = unn(s, to_uset(cpy(other.second)));
      }
      return s;
    }

    isl_union_set* global_range() {
      uset* s = isl_union_set_read_from_str(ctx, "{ }");
      for (auto other : access_map) {
        s = unn(s, (range(other.second)));
      }
      return s;
    }

    string buf_range_name() {
      auto am = pick(access_map);
      return range_name(to_map(am.second));
    }

    void normalize_access_range() {
      auto rng = to_set(global_range());
      vector<int> start_locs(num_dims());
      for (int dim = 0; dim < num_dims(); dim ++) {
        start_locs.at(dim) = -get_dim_min(rng, dim);
      }
      for (auto & it: access_map) {
        auto acc_map = it.second;
        it.second = to_umap(shift_range_map(to_map(acc_map), start_locs));
      }
    }


    isl_union_map* global_schedule() const {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      //umap* s = (pick(schedule).second);
      for (auto other : schedule) {
        s = unn(s, (cpy(other.second)));
      }

      return s;
    }

    int starting_cycle() const {
        isl_point* start_pt = (lexminpt(range(global_schedule())));
        vector<int> pt_vec = parse_pt(start_pt);
        assert(pt_vec.size() == 1);
        return pick(pt_vec);
    }

    isl_union_map* global_schedule_with_guard() const {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto other : schedule) {
        if (isIn.at(other.first)) {
          s = unn(s, (schedule_guard(cpy(other.second), false)));
        } else {
          s = unn(s, (schedule_guard(cpy(other.second), true)));
        }
      }
      return s;
    }

    isl_union_map* global_in_schedule_with_guard() const {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto other : schedule) {
        if (isIn.at(other.first)) {
          s = unn(s, (schedule_guard(cpy(other.second), false)));
        }
      }
      return s;
    }

    isl_union_map* producer_map() {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto pt: get_in_ports()) {
        s = unn(s, coalesce(access_map.at(pt)));
      }
      return s;
    }

    isl_union_map* consumer_map() {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto pt: get_out_ports()) {
        s = unn(s, coalesce(access_map.at(pt)));
      }
      return s;
    }

    //check the operation is read the buffer or not
    bool is_read_op(const std::string& name) const {
      for ( auto it : schedule ) {
        string op_name = domain_name(it.second);
        if (op_name == name) {
          return is_out_pt(it.first);
        }
      }
      cout << "Not found statement named: " << name << "in this buffer.\n";
      assert(false);
    }

    std::set<string> get_read_ops() const {
        std::set<string> ret;
        for (auto it: schedule) {
            string op_name = domain_name(it.second);
            if (is_out_pt(it.first)) {
                ret.insert(op_name);
            }
        }
        return ret;
    }

    std::set<string> get_write_ops() const {
        std::set<string> ret;
        for (auto it: schedule) {
            string op_name = domain_name(it.second);
            if (!is_out_pt(it.first)) {
                ret.insert(op_name);
            }
        }
        return ret;
    }

    std::set<string> get_ops() const {
        std::set<string> ret;
        for (auto it: schedule) {
            string op_name = domain_name(it.second);
            ret.insert(op_name);
        }
        return ret;
    }

    //Use for Garnet Codegen
    vector<string> get_ops_sorted_by_bundle() const {
        vector<string> ret;
        for (auto b : port_bundles) {
            for (auto bp : b.second) {
                string op = domain_name(schedule.at(bp));
                if (!elem(op, ret))
                   ret.push_back(op);
            }
        }
        return ret;
    }

    string get_bundle_op(string bd_name) const {
        //all pt in the same bundle should have same domain op name
        string pt = pick(port_bundles.at(bd_name));
        return ::name(domain.at(pt));
    }

    string get_bundle_from_op(string op_name) const {
        for (auto pt: get_all_ports()) {
            if (::name(domain.at(pt)) == op_name) {
                return get_bundle(pt);
            }
        }
        cout << "Did not find this op in this buffer" << endl;
        assert(false);
    }

    isl_map* get_access_map_from_op(const std::string op) {
        for(auto pt: get_all_ports()) {
            auto access_m = access_map.at(pt);
            if(::domain_name(access_m) == op) {
                return to_map(access_m);
            }
        }
        assert(false && "Did not find op!");
    }

    isl_map* get_schedule_from_op(const std::string op) {
        for(auto pt: get_all_ports()) {
            auto sched = schedule.at(pt);
            if(::domain_name(sched) == op) {
                return to_map(sched);
            }
        }
        assert(false && "Did not find op!");
    }

    bool is_in_pt(const std::string& name) const {
      assert(contains_key(name, isIn));
      return isIn.at(name);
    }

    bool is_out_pt(const std::string& name) const {
      assert(contains_key(name, isIn));
      return !isIn.at(name);
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      assert(!contains_key(name, domain));
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = (sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = sched;
      isIn[name] = true;
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      assert(!contains_key(name, domain));
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = to_umap(sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = to_umap(sched);
      isIn[name] = true;
    }

    void add_out_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      assert(!contains_key(name, domain));
      add_pt(name, dm, access, sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = true;
    }

    void add_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      domain[name] =
        isl_set_read_from_str(ctx, dm.c_str());
      access_map[name] =
        rdmap(ctx, access.c_str());
      schedule[name] =
        isl_union_map_read_from_str(ctx, sched.c_str());
    }

    vector<string> get_out_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    void set_default_bundles() {
      for (auto pt : get_out_ports()) {
        port_bundles[pt] = {pt};
      }

      for (auto pt : get_in_ports()) {
        port_bundles[pt] = {pt};
      }

      assert(get_in_bundles().size() >= get_in_ports().size());
    }

    string get_bundle(const std::string& port) const {
      for (auto b : port_bundles) {
        for (auto bp : b.second) {
          //cout << "Trying bundle: " << bp << endl;
          if (bp == port) {
            return b.first;
          }
        }
      }

      cout << "Error: No bundle for: " << port << endl;
      assert(false);
      return "";
    }

    std::set<string> get_bank_out_bundles(const std::string& bk_name) {
      std::set<string> ret;
      auto outpts = get_bank_outputs(bk_name);
      for (auto outpt: outpts) {
        ret.insert(get_bundle(outpt));
        //dfs for all related bundles
        if(is_bank_input(outpt)) {
          for (auto bk: receiver_banks(outpt)){
            auto sub_bundles = get_bank_out_bundles(bk.name);
            ret.insert(sub_bundles.begin(), sub_bundles.end());
          }
        }
      }
      return ret;
    }

    std::set<string> get_bank_in_bundles(const std::string& bk_name) {
      std::set<string> ret;
      auto inpts = get_bank_inputs(bk_name);
      for (auto inpt: inpts) {
        ret.insert(get_bundle(inpt));
      }
      return ret;
    }

    vector<string> get_in_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (!is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    int num_out_ports() const {
      return get_out_ports().size();
    }

    int num_in_ports() const {
      return get_in_ports().size();
    }

    vector<string> get_all_ports() const {
      auto in = get_in_ports();
      concat(in, get_out_ports());
      return in;
    }

    vector<string> get_in_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_out_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (!m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    string get_in_port() const {
      for (auto m : isIn) {
        if (m.second) {
          return m.first;
        }
      }
      cout << "ERROR: couldn't find any input port in : " << name << endl;
      assert(false);
    }

    bool has_hw_schedule() const {
      for (auto pt: get_all_ports()) {
        auto sched = schedule.at(pt);
        if (num_out_dims(to_map(sched)) > 1)
            return false;
      }
      return true;
    }

    void linear_buf_schedule(vector<int> iis) {
        for (auto pt: get_all_ports()) {
            auto sched = schedule.at(pt);
            int out_dim = num_out_dims(to_map(sched));
            if (out_dim == 1)
                continue;
            cout << str(sched) << endl << iis << endl;
            assert(out_dim == iis.size() + 1);
            auto dom = domain.at(pt);
            schedule.at(pt) = its(to_umap(linear_schedule(to_map(sched), iis, 0, true)), dom);
        }
    }

    //ppint the same access pattern to a different buffer domain
    isl_map* remap_access_to_new_buffer(string pt_name, string suffix) {
        auto origin_map = access_map.at(pt_name);
        string new_buf_name = name + suffix;
        vector<string> addr_var;
        for (size_t i = 0; i < get_out_dim(to_map(origin_map)); i ++) {
            addr_var.push_back("d" + to_string(i));
        }
        string vars = sep_list(addr_var, "[", "]", ",");
        isl_map* buf_map = isl_map_read_from_str(ctx, string("{" + name + vars + " -> " + new_buf_name + vars + "}").c_str());
        cout <<"origin: " << str(origin_map) <<", transform: " << str(buf_map) << endl;
        return to_map(dot(origin_map, buf_map));
    }

    void remap_access_to_new_buffer_name(string new_name) {
        for (auto it: access_map) {
            access_map.at(it.first) =
                to_umap(set_range_name(to_map(it.second), new_name));
        }
        name = new_name;
    }

    map<string, umap*> get_stmt2sched() const {
        map<string, umap*> ret;
        for (auto it: schedule) {
            auto sched = it.second;
            ret[domain_name(sched)] = sched;
        }
        return ret;
    }

    map<string, std::set<string> > get_stmt2bd() const {
      map<string, std::set<string> > stmt2bd;
      for (auto it: schedule) {
        string bd = get_bundle(it.first);
        auto sched = it.second;
        string stmt_name = domain_name(sched);
        stmt2bd[stmt_name].insert(bd);
      }
      return stmt2bd;
    }

    map<string, std::set<std::pair<string, int>>> get_stmt2bd_after_vec() const {
      map<string, std::set<std::pair<string, int>>> stmt2bd;
      for (auto it: schedule) {
        cout << "for each schedule: " << endl;
        string bd = get_bundle(it.first);
        cout << "bundle: " << bd << endl;
        auto sched = it.second;
        cout << "sched: " << it.first << " " << str(sched) << endl;
        string stmt_name = domain_name(sched);
        cout << "domain name of sched: " << stmt_name << endl;
        vector<string> stmt_name_decouple = split_at(stmt_name, "_");
        assert(stmt_name_decouple.size() > 2);
        vector<string> stmt_name_simplify(stmt_name_decouple.begin(),
        stmt_name_decouple.end()-2);
        string stmt_name_before_vec = sep_list(stmt_name_simplify, "", "", "_");
        cout << "stmt_name_before_vec: " << stmt_name_before_vec << " after vec " << *(stmt_name_decouple.end()-1) << endl;
        stmt2bd[stmt_name_before_vec].insert(make_pair(bd, safe_stoi(stmt_name_decouple.back())));
      }
      return stmt2bd;
    }

    bool has_update_op() const {
      map<string, std::set<string> > stmt2bd = get_stmt2bd();
      for (auto it: stmt2bd) {
        int in_bd = 0, out_bd = 0;
        for (string bd: it.second) {
            if (is_input_bundle(bd)) {
                in_bd ++;
            } else if (is_output_bundle(bd)) {
                out_bd ++;
            }

        }
        if (in_bd && out_bd)
            return true;
      }
      return false;
    }

    bool is_update_op(string op_name) const {
      //update stmt has 2 bundles
      auto stmt2bd = get_stmt2bd();

      //if it's not one of the buffer's op
      cout << "find bd for op :" << op_name << endl;
      if (stmt2bd.count(op_name) == 0)
          return false;

      //if it is, we still need to check the bundle numbers
      auto bd_vec = stmt2bd.at(op_name);
      for (auto it: bd_vec)
          cout << "\tfind candidate: " << it << endl;
      int in_bd = 0, out_bd = 0;
      for (auto bd: bd_vec) {
        if (is_input_bundle(bd))
          in_bd ++;
        if (is_output_bundle(bd))
          out_bd ++;
      }
      return in_bd && out_bd;
    }

    bool is_self_loop(string pt_name) {
      auto stmt2bd = get_stmt2bd();
      auto op_name = domain_name(access_map.at(pt_name));
      auto bd_vec = stmt2bd.at(op_name);
      int in_bd = 0, out_bd = 0;
      for (auto bd: bd_vec) {
        if (is_input_bundle(bd))
          in_bd ++;
        else
          out_bd ++;
      }
      return in_bd && out_bd;
    }

    bool is_self_loop_in(string pt_name) {
      auto stmt2bd = get_stmt2bd();
      auto op_name = domain_name(access_map.at(pt_name));
      auto bd_set = stmt2bd.at(op_name);
      if (bd_set.size() == 1) {
        return false;
      } else {
        return is_in_pt(pt_name);
      }
    }

    bool is_self_loop_out(string pt_name) {
      auto stmt2bd = get_stmt2bd();
      auto op_name = domain_name(access_map.at(pt_name));
      auto bd_set = stmt2bd.at(op_name);
      if (bd_set.size() == 1) {
        return false;
      } else {
        return is_out_pt(pt_name);
      }
    }

    int capacity(string inpt) {
        int m = 0;
        for (auto outpt: get_out_ports()){
          if (pts_are_overlapped(inpt, outpt)){
            auto dd = dependence_distance_max(inpt, outpt);
            //auto dd_space = compute_dd(outpt, inpt);
            int dd_space = compute_capacity_hw_schedule(inpt, outpt);

            assert(dd.has_value());
            int depth = dd.get_value();
            std::cout << "Got timing depth: " << depth << endl;
            std::cout << "Write btw: " << (dd_space) << endl;
            m = std::max(m, dd_space);
          }
        }
        //m is the max time dd for this buffer you need to get the capacity
        //which is the max number of data write to this buffer to get the buffer size

        return m;
    }

    int capacity() {
        int cap = 0;
        for(auto pt : get_in_ports()) {
            cap = max(cap, capacity(pt));
        }
        return cap;
    }

    void remove_redundant_dim() {
        for (auto pt: get_all_ports()) {
            auto am = to_map(access_map.at(pt));
            am = remove_irrelevant_in_dim(am);
            access_map.at(pt) = to_umap(am);
            domain.at(pt) = ::domain(am);

            auto sched = to_map(schedule.at(pt));
            sched = remove_irrelevant_in_dim(sched);
            schedule.at(pt) = to_umap(sched);
        }
    }

    umap* pad_dom_buf2op(AccessPattern , umap* , int);

    isl_map* pad_dom_sched(AccessPattern , isl_map* , int);

    //pad the read domain
    void pad_read_dom_inner_most(int fetch_width);
    void pad_write_dom_inner_most(int fetch_width);

    //solve the weight buffer
    bool merge_small_dim(int fetch_width);
    void merge_out_bundle();

    //Preprocessing pass for generate configuration
    void simplify_floor_div_expr();

    bool overlap_schedule(std::set<string> & ptset);

    //change the input and output and return the agg and tb ubuffer stucture
    pair<std::map<string, UBuffer>, vector<string> >
        vectorization(CodegenOptions& options, int dim_id);

    void add_vectorized_pt_to_ubuf(UBuffer& target_buf, vector<umap*> ap_vec, isl_map* merge_sched, string bd_name, int dim_id, int fetch_width, int cnt, bool is_out);
    void add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, isl_map* sched, string origin_pt_name, string bd_name, int dim_id, int fetch_width, int cnt, bool is_out);
    int add_vectorized_pt_to_ubuf(UBuffer & target_buf, vector<pair<string, umap*>> rewrite_buf2op_map, map<string, isl_map*> sched_map, string bd_name, int dim_id, int fetch_width, bool is_out, bool use_recipe);

    //New refactor method
    map<string, vector<umap*>> get_access_pattern_map(vector<pair<string, umap*>> rewrite_buf2op_map, map<string, isl_map*> & sched_map, int dim_id, int fetch_width);
    vector<umap*> get_access_pattern_vector(umap* rewrite_buf2op, string pt_name, int dim_id, int fetch_width);

    map<string, isl_map*> produce_vectorized_schedule(string in_pt, string out_pt);
    map<string, isl_map*> produce_vectorized_schedule(string in_pt, string out_pt, int dim_id);
    map<string, isl_map*> produce_vectorized_schedule(string in_pt, string out_pt, string acc_pt, int dim_id, int fetch_width);
    map<string, isl_map*> produce_vectorized_schedule(string in_pt, string out_pt, string acc_pt, vector<int> iis, int fetch_width);
    map<string, isl_map*> produce_vectorized_schedule(vector<string> in_pt, vector<string> out_pt, vector<int> iis, int fetch_width);

    void print_bank_info();

    umap* get_lexmax_events(const std::string& outpt) const;
    umap* get_lexmax_events(const std::string& inpt, const std::string& outpt);
    umap* get_lexmax_events(umap* insched, umap* outsched, const std::string& inpt, const std::string& outpt);

    int compute_dd_bound(const std::string & read_port, const std::string & write_port, bool is_max);
    isl_union_pw_qpolynomial* compute_dd(const std::string& read_port, const std::string& write_port);

    isl_union_set* compute_dd_hw_schedule(const string& inpt, const string& outpt);
    int compute_capacity_hw_schedule(const string& inpt, const string& outpt);
    isl_union_set* compute_dd_hw_schedule_decouple(const string& inpt, const string& outpt);

    bank compute_bank_info();
    bank compute_bank_info(uset*, isl_point*, std::set<string>, std::set<string>);
    bank compute_bank_info(CodegenOptions& options, const std::string& inpt, const std::string& outpt);
    bank compute_bank_info(std::set<string> inpt, std::set<string> outpt);
    bank compute_bank_info(const std::string& inpt, const std::string& outpt, int depth);
    bank compute_bank_info(
          std::set<string> inpt_set,
          std::set<string> outpt_set,
          map<string, int> delay_map);

    void merge_bank(CodegenOptions& options, string inpt, vector<bank> mergeable);
    void merge_bank_broadcast(string inpt);

    void generate_banks(CodegenOptions& options);
    void generate_banks_and_merge(CodegenOptions& options);

    //from bank to ubuffer
    map<string, UBuffer> generate_ubuffer(CodegenOptions& opt);

    //optimization pass to add an coarse grained controller, save iteration counter
    isl_map* get_coarse_grained_pipeline_schedule(CodegenOptions& opt, UBuffer& new_ub, string config_mode,
            bool & decouple_ctrl, bool & substract_instance_latency);

    //for chaining and create subbank
    vector<UBuffer> decouple_ubuffer_from_bank_map(isl_map* bank_map);

    //smt stream generation
    void generate_smt_stream(CodegenOptions& options);
    void collect_memory_cnt(CodegenOptions& options, mem_access_cnt& mem_access);
#ifdef COREIR
    pair<isl_map*, isl_map*> get_bank_pt_IR(string inpt, isl_set* rddom, schedule_info & info);
    UBuffer generate_ubuffer(UBufferImpl& impl, schedule_info & info, int bank);
    //CoreIR::Module* affine_controller(CoreIR::Context* context, isl_set* dom, isl_aff* aff);

    //kernel function for generate coreir
    void generate_coreir(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, schedule_info& info, bool with_ctrl=true);
    void generate_coreir_refactor(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, schedule_info& info, bool with_ctrl=true);

    //helper function for sreg generation
    void generate_sreg_and_wire(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, map<string, CoreIR::Wireable*> & pt2wire);
    void generate_fanin_connection(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, map<string, CoreIR::Wireable*> & pt2wire);
    //helper function for wire IO connection
    void wire_ubuf_IO(CodegenOptions& options, CoreIR::ModuleDef* def, map<string, CoreIR::Wireable*> & pt2wire, CoreIR::Instance* buf, UBufferImpl & impl, schedule_info& info, int bank_id, bool with_ctrl);
    //Helper function for generate cgra mem instance
    CoreIR::Instance* map_ubuffer_to_cgra(CodegenOptions& options, CoreIR::ModuleDef* def, UBuffer& target_buf, string config_mode);
    CoreIR::Instance* map_ubuffer_to_cgra(CodegenOptions& options, CoreIR::ModuleDef* def, GarnetImpl& hw_impl);
    //Helper function for generate pond instance

    //optimization pass for accumulation register insert
    CoreIR::Instance* generate_accum_reg_instance(CodegenOptions& options, CoreIR::ModuleDef* def);

    //Helper function to determine the memory level
    string determine_config_mode(CodegenOptions& options, UBuffer& target_buf);

    //Wrappers for generate coreir
    //original memory generation for memory tile with enable and valid
    void generate_coreir(CodegenOptions& options, CoreIR::ModuleDef* def, schedule_info& info);
    //ubuffer coreir generation for tahoe memory tile
    void generate_coreir_without_ctrl(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, schedule_info& info);
    Json generate_ubuf_args(CodegenOptions& options, map<string, UBuffer> &rewrite_buffer);
    Json generate_ubuf_args_old(CodegenOptions& options, map<string, UBuffer> & rewrite_buffer);
    Json generate_ubuf_args(CodegenOptions& options, UBuffer& rewrite_buffer, string mem_name);

    void generate_stencil_valid_config(CodegenOptions& options, string bk_name);
    CoreIR::Instance* generate_lake_tile_instance(
        CoreIR::ModuleDef* def,
        CodegenOptions options,
        string ub_ins_name, string bk_name,
        size_t input_num, size_t output_num,
        bool has_stencil_valid, bool has_flush);

    CoreIR::Instance* generate_pond_instance(
        CoreIR::ModuleDef* def,
        CodegenOptions options,
        string ub_ins_name,
        string config_mode,
        size_t input_num, size_t output_num);

    void emit_lake_config_collateral(CodegenOptions options, string dir);
#endif


    vector<string> map2address(isl_map* m);
    vector<string> get_ram_address(const std::string& pt);
    umap* separate_offset_dim(const std::string& pt);
    Box get_bundle_box(const std::string& pt);
    Box extract_addr_box(uset* rddom, vector<size_t> sequence);
    //string generate_linearize_ram_addr(const std::string& pt);
    string generate_linearize_ram_addr(const std::string& pt, bank& bank);

    vector<UBuffer> port_grouping(int port_width);
    vector<pair<std::set<string>, std::set<string> > >
      port_grouping(CodegenOptions &options, UBufferImpl& impl, uset* rddom, std::set<string> inpts, std::set<string> outpts);
    void parse_exhaustive_banking_into_impl(UBufferImpl & impl);

    //helper function for port group2bank
    uset* create_subbank_branch(
            std::set<string> & inpt_set,
            std::set<string> & outpt_set,
            std::map<string, int> & pt_name2delay,
            map<string, pair<isl_map*, isl_map*> > & outpt_merge,
            vector<pair<string, string> > & back_edge);
    void port_group2bank(CodegenOptions& options);
    isl_map* merge_output_pt(vector<string> merge_pt);
    pair<isl_map*, isl_map*> merge_output_pt_with_sched(vector<string> merge_pt);
    pair<isl_map*, isl_map*> get_shift_pt_access_with_sched(string, int);

    int get_vectorized_dim(int fetch_width);
    maybe<int> dependence_distance_singleton(const string& inpt, const string& outpt, bool decouple=false);
    maybe<int> dependence_distance_max(const string& inpt, const string& outpt);
    maybe<int> dependence_distance_min(const string& inpt, const string& outpt);

    //Hack for single pixel input
    std::map<string, UBuffer> vectorization_single_pixel(int fetch_width);

    //Post processing for codegen, adding dim id
    void set_dim_id();
    void pad_reaccess_dimension(int fetch_width);
};

string toBracketList(const vector<vector<int>> & data);
string get_micro_buf_name(string buf_name);
string get_ctrl_name(string op_name);

struct StreamData {
    vector<vector<int> > in_data;
    vector<vector<int> > out_data;
    vector<bool> in_valid;
    vector<bool> out_valid;
    int in_port_width, out_port_width;
    int port_num;

    StreamData(int inpt_width, int outpt_width, int pt_num):
        in_port_width(inpt_width),
        out_port_width(outpt_width),
        port_num(pt_num) {
            in_data = vector<vector<int>>(port_num, vector<int>(in_port_width, 0));
            out_data = vector<vector<int>>(port_num, vector<int>(out_port_width, 0));
            in_valid = vector<bool>(port_num, false);
            out_valid = vector<bool>(port_num, false);
        }

    void print_info() {
      cout << "in_data: " << endl;
      cout << toBracketList(in_data);
      cout << endl;

      cout << "out_data: " << endl;
      cout << toBracketList(out_data);
      cout << endl;

      cout << "In valid: " << endl;
      cout << sep_list(in_valid, "[", "]", " ");
      cout << endl;

      cout << "Out valid: " << endl;
      cout << sep_list(out_valid, "[", "]", " ");
      cout << endl;
    }

    void emit_csv(ofstream& out) {
      out << toBracketList(in_data) << ", "
          //<< sep_list(in_valid, "[", "]", " ") << ", "
          << str(to_int(in_valid)) << ", "
          << toBracketList(out_data) << ", "
          //<< sep_list(out_valid, "[", "]", " ") << endl;
          << str(to_int(out_valid)) << endl;


    }
};

//Data structure to append top level stream and generate
struct lakeStream {
    vector<string> data_in;
    vector<string> data_out;
    vector<bool> valid_in, valid_out;
    int in_width;
    int out_width;

    int get_in_size() {
        return data_in.size();
    }

    int get_out_size() {
        return data_out.size();
    }

    bool input_valid_at(int pos) {
        return valid_in.at(pos);
    }

    bool output_valid_at(int pos) {
        return valid_out.at(pos);
    }

    void append_data(const vector<int> & in, const vector<int> & out, bool v_in, bool v_out) {
        data_in.push_back(sep_list(in, "[", "]", " "));
        data_out.push_back(sep_list(out, "[", "]", " "));
        valid_in.push_back(v_in);
        valid_out.push_back(v_out);
    }

    void emit_csv(string fname) {
      ofstream out(fname+"_SMT.csv");
      cout << "fname: " << fname << endl;
      size_t stream_length = data_out.size();
      out << "data_in, valid_in, data_out, valid_out" << endl;
      for (size_t i = 0; i < stream_length; i ++) {
        cout << "Cycle No." << i << endl;
        out << data_in.at(i) << ", "
        << valid_in.at(i) << ", "
        << data_out.at(i) << ", "
        << valid_out.at(i) << endl;
      }
    }

    lakeStream(){}

    lakeStream(lakeStream aggStream, lakeStream tbStream) {
      data_in = aggStream.data_in;
      valid_in = aggStream.valid_in;
      data_out = tbStream.data_out;
      valid_out = tbStream.valid_out;
      in_width = aggStream.in_width;
      out_width = tbStream.out_width;
      int size_diff = data_out.size() - data_in.size();
      for (int i = 0; i < size_diff; i ++) {
        vector<int> tmp = vector<int>(0, in_width);
        data_in.push_back(sep_list(tmp, "[", "]", ""));
        valid_in.push_back("0");
      }
    }
};

//Generating smt stream
void lattice_schedule_buf(UBuffer& buffer, umap* opt_sched);
void generate_lake_stream(CodegenOptions & options,
        map<string, UBuffer>& buffers_opt,
        umap* hardware_schedule);
void emit_lake_address_stream2file(CodegenOptions& options, map<string, UBuffer> buffers_opt, string dir);
void emit_lake_address_stream2file_new(CodegenOptions &options, map<string, UBuffer> buffers_opt, string dir);
lakeStream emit_top_address_stream(string fname, vector<int> read_cycle, vector<int> write_cycle,
        vector<vector<int> > read_addr, vector<vector<int> > write_addr, int input_width, int output_width);

void lower_to_garnet_implementation(CodegenOptions& options,
        UBuffer& buf, UBufferImpl& impl, schedule_info& info);

int compute_max_dd(UBuffer& buf, const string& inpt);

//The current vectorization method that was using
vector<string> buffer_vectorization(CodegenOptions& options,
        vector<string> buf_name_vec,
        map<string, UBuffer> & buffers);

vector<string> buffer_vectorization(vector<int> iis,
        vector<string> buf_name_vec,
        int fetch_width,
        map<string, UBuffer> & buffers);

vector<string> buffer_vectorization(vector<int> iis,
        vector<string> buf_name_vec,
        int dim_id, int fetch_width,
        map<string, UBuffer> & buffers);

//Vectorization API function on top of ubuffer class method
vector<string> buffer_vectorization(vector<int> iis,
        string buf_name, int dim_id, int fetch_width, map<string, UBuffer> & buffers);

vector<string> buffer_vectorization(string buf_name, int dim_id, int fetch_width, map<string, UBuffer> & buffers);

vector<string> buffer_vectorization(vector<string> buf_name_vec, int dim_id, int fetch_width, map<string, UBuffer> & buffers);


//helper function for the new vectorization pass
pair<isl_map*, isl_map*> get_vectorized_write(isl_map* acc_0, isl_map* sched, map<string, isl_map*> sched_record_map, int fetch_width, int addr_dim, int agg_cnt=0);
pair<isl_map*, isl_map*> get_vectorized_read(isl_map* acc_0, isl_map* sched, map<string, isl_map*> sched_record_map, int fetch_width, int addr_dim, bool is_dual_port = false);
pair<isl_map*, isl_map*> get_vectorized_read_simplified(isl_map* acc_0, isl_map* sched, map<string, isl_map*> sched_record_map, int fetch_width, int addr_dim, int& vectorized_dim,  bool is_dual_port = false);
//Helper function to get schedule
isl_map* get_sram2tb_schedule_with_check(isl_map* out_sched, map<string, isl_map*> sched_map, int ahead_step, int vectorize_loop_dim, int offset, bool is_dual_port);



static inline
std::ostream& operator<<(std::ostream& out, const AccessPattern& acc_pattern) {
  out << "--- Variable Dimension: " << acc_pattern.var_dim << endl;
  out << "\t---nameid map: " << endl;
  for (auto it: acc_pattern.name2idx) {
      out << "\t\t name: " << it.first << "\t id: " << it.second << endl;
  }
  out << "\t---- In range: " << acc_pattern.in_range << endl;
  out << "\t---- Out range: "<< acc_pattern.out_range << endl;
  out << "\t---- Stride: "<< acc_pattern.stride << endl;
  out << "\t---- Start Addr: "<< acc_pattern.start_addr << endl;
  out << "\t---- Access Matrix: " << endl << "\t\t[";
  for (const auto & row : acc_pattern.access_matrix) {
      out<< row << "\n\t\t";
  }
  out << "]" << endl;
  return out;
}


std::ostream& operator<<(std::ostream& out, const UBuffer& buf);

umap* get_lexmax_events(const std::string& outpt, UBuffer& buf);

umap* last_reads(const string& inpt, UBuffer& buf);

isl_union_pw_qpolynomial* compute_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port);

int compute_dd_lower_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port);

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port);

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port);


isl_union_map* global_schedule_from_buffers(const map<string, UBuffer> &buffers);
isl_union_map* global_access_map_from_buffers(const map<string, UBuffer> &buffers);
isl_union_set* global_domain_from_buffers(const map<string, UBuffer> &buffers);
isl_union_set* retrive_domain_from_buffers(const map<string, UBuffer> &buffers);

int compute_max_dd(UBuffer& buf, const string& inpt);

//void generate_ram_bank(CodegenOptions& options,
    //std::ostream& out,
    //stack_bank& bank);

void generate_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank);


Box extract_box(uset* rddom);
bank compute_bank_info(
    const std::string& inpt,
    const std::string& outpt,
    UBuffer& buf);


vector<string> dimension_var_decls(const std::string& pt, UBuffer& buf);
vector<string> dimension_var_args(const std::string& pt, UBuffer& buf);

#ifdef COREIR
CoreIR::Module* generate_coreir_without_ctrl(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf, UBufferImpl& impl, schedule_info& hwinfo);

CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf, schedule_info& hwinfo);

CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf, schedule_info& hwinfo);

CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf);
void generate_synthesizable_functional_model(CodegenOptions& options, UBuffer& buf, CoreIR::ModuleDef* def, schedule_info& hwinfo);

CoreIR::Instance* affine_controller_use_lake_tile(CodegenOptions& options, CoreIR::ModuleDef*, CoreIR::Context*, isl_set*, isl_aff*, string);
CoreIR::Module* affine_controller_use_lake_tile_counter(CodegenOptions& options, CoreIR::Context*, isl_set*, isl_aff*, string);

//helper function for dump metadata for post garnet mapping
void add_lake_config_to_aff_ctrl_for_garnet_mapping(isl_set* dom, isl_aff* aff, CoreIR::Instance* &aff_ctrl);

#endif

void generate_hls_code(CodegenOptions& options, std::ostream& out, UBuffer& buf);
void generate_hls_code(std::ostream& out, UBuffer& buf);
void generate_hls_code(UBuffer& buf);
void generate_hls_code_unit_test(UBuffer& buf);
void generate_hls_code_unit_test(map<string, UBuffer> & buf, string buffer_name);

map<string, isl_set*> input_ports_to_conditions(const std::string& outpt, UBuffer& buf);

bool inner_bank_offset_is_legal(isl_map* slot_func, UBuffer& buf);
bool banking_scheme_is_legal(isl_map* bank_func, UBuffer& buf);

bool inner_bank_offset_is_legal(isl_map* slot_func,
    umap* op_writes,
    umap* op_reads,
    umap* sched);

vector<string> generate_multilinear_address_components(const std::string& pt, bank& bnk, UBuffer& buf);

maybe<int> dependence_distance_singleton(UBuffer& buf, const string& inpt, const string& outpt, umap* sched);
maybe<int> dependence_distance_singleton(umap* writes, umap* read, umap* sched);
uset* dependence_distance_set(umap* writes, umap* read, umap* sched);

//For chaining and intile banking
map<string, UBuffer> decouple_multi_tile_ubuffer(CodegenOptions& options, map<string, UBuffer> & vec_buf);

maybe<std::set<int> > embarassing_partition(UBuffer& buf);
maybe<std::set<int> > embarassing_partition(CodegenOptions& options, UBuffer& buf);
vector<vector<string> > overlapping_large_io_port_groups(UBuffer& buf, const int ports_per_direction);
vector<int> get_cyclic_partition_factor_from_embarassing_partition(UBuffer & buf, std::set<int> & partition);

int total_capacity(UBuffer& buf);
vector<int> min_offsets_by_dimension(UBuffer& buf);
vector<int> max_offsets_by_dimension(UBuffer& buf);
vector<int> extents_by_dimension(UBuffer& buf);

UBuffer delete_ports(std::set<string>& sr_ports, UBuffer& buf);

struct dgraph {
  std::set<string> nodes;
  map<string, std::set<string> > fanin_edges;
  map<string, std::set<string> > out_edges;
  map<pair<string, string>, int> weights;

  void add_edge(const std::string& src, const std::string& dst, const int weight) {
    nodes.insert(dst);
    nodes.insert(src);
    out_edges[src].insert(dst);
    weights[{src, dst}] = weight;
  }

  void add_fanin_edge(const std::string& src, const std::string& dst, const int weight) {
    nodes.insert(dst);
    nodes.insert(src);
    fanin_edges[dst].insert(src);
    weights[{src, dst}] = weight;
    cout << "Add weight from " << src << "->" << dst << ": " << weight << endl;
  }

  int weight(const std::string& src, const std::string& dst) {
    if(weights.find({src,dst}) == weights.end()){
    	 return -1;
    } else{
	 return  weights[{src, dst}];
    }
  }

  vector<string> get_out_edges(const std::string& src) {
    vector<string> ret;
    if (out_edges.count(src)) {
        auto dsts = out_edges.at(src);
        return vector<string>(dsts.begin(), dsts.end());
    } else {
        return ret;
    }
  }

  vector<pair<string, int> > in_edges(const std::string& dst) {
    vector<pair<string, int> > ed;
    for (auto w : out_edges) {
      if (elem(dst, w.second)) {
        ed.push_back({w.first, weight(w.first, dst)});
      }
    }
    return ed;
  }

  //process the zero delay node, make sure they come out from the same port
  string find_origin(const std::string& dst) {
    auto in_eds = in_edges(dst);
    for (auto it: in_eds) {
      if (it.second == 0)
        return find_origin(it.first);
    }
    return dst;
  }

  //get subtree
  vector<pair<string, string>> get_sub_branch(const std::string& out_pt) {
    vector<pair<string, string> > ret;
    for (auto dst: get_out_edges(out_pt)) {
      ret.push_back({out_pt, dst});
      concat(ret, get_sub_branch(dst));
    }
    return ret;
  }

  int max_delay_to_leaf(string outpt) {
    //this is leaf
    if (out_edges.count(outpt) == 0) {
      return 0;
    }

    int max_child_delay = -1;
    for (string dst: out_edges.at(outpt)) {
      int w = weight(outpt, dst);
      max_child_delay = max(w + max_delay_to_leaf(dst), max_child_delay);
    }
    assert(max_child_delay >= 0);
    cout << "\tdelay of " << outpt << " = " << max_child_delay << endl;
    return max_child_delay;
  }


  bool has_nodes() const {
    return nodes.size();
  }
};

struct GarnetImpl {
  string config_mode;
  UBuffer target_buf;
  map<string, UBuffer> sub_component; //if we do vectorization

  bool insert_shift_register = false;
  UBuffer accum_reg;
  string reduce_PE_inpt, reduce_PE_outpt;

  bool substract_glb_latency;
  bool decouple_ctrl;
  isl_map* cgpl_schedule;
};

struct UBufferImpl {

  map<int, isl_set*> bank_rddom;
  map<int, std::set<string> > bank_readers;
  map<int, std::set<string> > bank_writers;

  //output broadcasting
  map<int, vector<std::set<string>> > bank_outpt2readers;

  //input selection(TODO: did not support this feature)
  map<int, vector<std::set<string>> > bank_inpt2writers;

  map<int, GarnetImpl> lowering_info;

  map<string, std::set<int>> outpt_to_bank; //output chaining
  map<string, std::set<int>> inpt_to_bank; //input broadcasting

  //Shift register data
  map<string, int> shift_depth;
  map<string,pair<string,int>> shift_registered_outputs;
  map<string,vector<pair<string,int>>> fanin_outputs;
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs;

  int get_new_bank_id() {
    //Get the max bank id, nothing inside will return 0
    int max_id = -1;
    for (auto it: bank_rddom) {
      max_id = std::max(max_id, it.first);
    }
    return max_id + 1;
  }

  string get_buf_name() {
    return ::name(pick(bank_rddom).second);
  }

  void sequentially_assign_inpt(vector<string> inpts, int b) {
    vector<std::set<string>> partition;
    for (string inpt: inpts) {
        partition.push_back({inpt});
    }
    bank_inpt2writers[b] = partition;
  }

  void sequentially_assign_outpt(vector<string> outpts, int b) {
    vector<std::set<string>> partition;
    for (string outpt: outpts) {
        partition.push_back({outpt});
    }
    bank_outpt2readers[b] = partition;
  }

  vector<string> get_unique_inpts(int bank) {
    vector<string> ret;
    for (auto broadcast_set: bank_inpt2writers.at(bank)) {
      ret.push_back(pick(broadcast_set));
    }
    return ret;
  }

  vector<string> get_unique_outpts(int bank) {
    vector<string> ret;
    for (auto broadcast_set: bank_outpt2readers.at(bank)) {
      ret.push_back(pick(broadcast_set));
    }
    return ret;
  }

  int add_new_bank_between(const std::set<string> & inpts, const std::set<string>& outpts, isl_set* rddom) {
    int b = get_new_bank_id();
    for (auto outpt: outpts) {
      bank_readers[b].insert(outpt);
      outpt_to_bank[outpt].insert(b);
    }
    for (auto inpt: inpts) {
      bank_writers[b].insert(inpt);
      inpt_to_bank[inpt].insert(b);
    }
    bank_rddom[b] = rddom;
    return b;
  }

  vector<pair<string, pair<string, int>>>
      get_shift_registered_ports() {

        vector<pair<string, pair<string, int>>> ret;
        for (auto it: shift_registered_outputs) {
            //Not implemented use a bank of memory
            if (outpt_to_bank.count(it.first) == 0) {
                ret.push_back(it);
            }
        }
        concat(ret, shift_registered_outputs_to_outputs);
        return ret;
  }

  void add_o2o_info(const string& inpt, const string& outpt, const int& delay) {
      shift_registered_outputs_to_outputs.push_back(
              {outpt, {inpt, delay}}
              );
  }

  void add_fanin_info(const string& inpt, const string& outpt, const int& delay) {
      map_insert(fanin_outputs, outpt, {inpt, delay});
  }

  void add_i2o_info(const string& inpt, const string& outpt, const int& delay) {
      shift_registered_outputs[outpt] = make_pair(inpt, delay);
  }

  std::set<string> get_banks_inpts(const vector<int> & banks) {
    std::set<string> ret;
    for(int bank: banks) {
      auto inpts = bank_writers.at(bank);
      ret.insert(inpts.begin(), inpts.end());
    }
    return ret;
  }

  int get_banks_inpts_num(const vector<int> & banks) {
    return get_banks_inpts(banks).size();
  }

  std::set<string> get_banks_outpts(const vector<int> & banks) {
    std::set<string> ret;
    for(int bank: banks) {
      auto outpts = bank_readers.at(bank);
      ret.insert(outpts.begin(), outpts.end());
    }
    return ret;
  }

  int get_banks_outpts_num(const vector<int> & banks) {
    return get_banks_outpts(banks).size();
  }


  //Banking merging related function
  void remove_bank(int bank_id);
  void merge_banks(vector<int> banks_tobe_merged);
  void merge_banks_and_rewrite(vector<int> & banks_tobe_merged);
  void conditional_merging(CodegenOptions & options, const vector<int> & banks_tobe_merged);
  void bank_merging(CodegenOptions & options);
  void bank_merging_and_rewrite(CodegenOptions & options);
  void sort_bank_port();

  void sanity_check_memory_hierarchy(CodegenOptions& options, const vector<int> & banks);

  int get_bank_capacity(int bank_id) const {
    int capacity_without_circular_buf =
        int_upper_bound(card(to_uset(bank_rddom.at(bank_id))));
    auto bank_read_set = bank_readers.at(bank_id);
    int shift_register_depth = -1;
    for (string read_pt: bank_read_set) {
        if (shift_registered_outputs.count(read_pt)) {
            shift_register_depth = std::max(shift_register_depth,
                    shift_registered_outputs.at(read_pt).second);
        }
    }
    if ((shift_register_depth != -1)
        && (shift_register_depth < capacity_without_circular_buf)) {
        return shift_register_depth;
    } else  {
            return capacity_without_circular_buf;
    }
  }

  string get_memory_hierarchy(CodegenOptions& options, int bank_id) {
    //int capacity = int_upper_bound(card(to_uset(bank_rddom.at(bank_id))));
    int capacity = get_bank_capacity(bank_id);
    auto mem_hierarchy = options.mem_hierarchy;
    //cout << "mem hierarchy size: " << mem_hierarchy.size() << endl;
    if (mem_hierarchy.count("regfile") == 0)
        return "mem";
    vector<pair<string, LakeCollateral> > mem_vec(mem_hierarchy.begin(), mem_hierarchy.end());
    cout << mem_vec.size() << endl;
    sort(mem_vec.begin(), mem_vec.end(),
                [](const pair<string, LakeCollateral> & l,
                    const pair<string, LakeCollateral>& r) {
                    return l.second.get_max_capacity() < r.second.get_max_capacity();
                });
    cout << mem_vec.size() << endl;
    for (auto it : mem_vec) {
        cout << "Visit hierarchy: " << it.first << endl;
        cout << "capacity: " << capacity << endl;
        if (capacity < it.second.get_max_capacity()) {
            return it.first;
        }
    }
    cout << "Cannot fit into the largest memory" << endl;
    assert(false);
  }

  std::set<string> get_sr_outpts() const {
    std::set<string> outpts;
    for (auto it: shift_registered_outputs_to_outputs) {
      outpts.insert(it.first);
    }

    for (auto it: shift_registered_outputs) {
      outpts.insert(it.first);
    }

    for (auto it: fanin_outputs) {
      outpts.insert(it.first);
      cout << tab(2) << it.first << " has fanin: " << endl;
      for (auto p : it.second) {
          cout << tab(4) << p.first << "->" << p.second << endl;
      }
    }

    return outpts;
  }

  bool is_pure_shift_register(vector<string> outpts) const {
    auto sr_outpts = get_sr_outpts();
    cout <<"SR outputs: " << sr_outpts << endl;
    cout <<"BUF outputs: " << outpts << endl;
    for (string pt: outpts) {
        if (sr_outpts.find(pt) == sr_outpts.end()) {
            return false;
        }
    }
    return true;
  }

  bool is_shift_register_input(string input) const {
    for (auto it: shift_registered_outputs) {
      if (it.second.first == input)
        return true;
    }
    return false;
  }

  bool is_shift_register_output(string output) const {
    std::set<string> outpts = get_sr_outpts();
    return outpts.count(output);
  }

  int get_bank_num() const {
    return bank_readers.size();
  }


  void print_info(std::ostream& out) const {
    out << "Bank writers: " << endl;
    for (auto it: bank_writers) {
      out << "\t bank NO." << it.first << endl;
      out << "\t\twriters: " << it.second << endl;
    }
    out << "Bank readers: " << endl;
    for (auto it: bank_readers) {
      out << "\t bank NO." << it.first << endl;
      out << "\t\treaders: " << it.second << endl;
    }
    out << "Shift Register Output: " << endl;
    out << "\tmemtiles IO:: " << endl;
    for (auto it: shift_registered_outputs) {
      out << "\t\t " << it.second.first << "->" << it.first << ", delay = " << it.second.second << endl;
    }

    out << "\tregister IO:: " << endl;
    for (auto it: shift_registered_outputs_to_outputs) {
      out << "\t\t " << it.second.first << "->" << it.first << ", delay = " << it.second.second << endl;
    }
  }

};


struct EmbarrassingBankingImpl: public UBufferImpl {
  map<int, int> partitioned_dimension_extents;
  std::set<int> partition_dims;

  EmbarrassingBankingImpl() {}
  EmbarrassingBankingImpl(UBufferImpl const & impl) : UBufferImpl(impl) {}

  //Embarrassing banking intialize from exhaustive banking
  int get_partition_bank_num() const {
    int bank_num = 1;
    for (auto it: partitioned_dimension_extents) {
      bank_num *= it.second;
    }
    return bank_num;
  }

  void print_info(std::ostream& out) const {

    UBufferImpl::print_info(out);
    out << "==========Embarrassing Banking ============" << endl;
    out << "Partition dim : " << partition_dims << endl;
    out << "Partition dim extent: " << endl;
    for (auto it: partitioned_dimension_extents) {
      out << "\t" << it.first << ": " << it.second << endl;
    }
  }

};

struct CyclicBankingImpl:  public UBufferImpl {
    vector<int> cyclic_banking_factor;
    CyclicBankingImpl(UBufferImpl const & impl): UBufferImpl(impl) {}
    CyclicBankingImpl(UBufferImpl const & impl, vector<int> const & cb_factor):
        UBufferImpl(impl), cyclic_banking_factor(cb_factor) {}

    int get_bank_num() const {
    int bank_num = 1;
    for (auto it: cyclic_banking_factor) {
      bank_num *= it;
    }
    return bank_num;
  }


  isl_map* get_bank_map(UBuffer& buf) const {
  //iteration domain to bank id
    vector<string> dvs;
    vector<string> addrs;
    int bank_stride = 1;
    for (int i = 0; i < cyclic_banking_factor.size(); i++) {
      assert(cyclic_banking_factor.at(i) > 0);
      dvs.push_back("a_" + str(i));
      addrs.push_back("(a_" + str(i) + " % " +
              str(cyclic_banking_factor.at(i)) + ")*" + str(bank_stride) );
      bank_stride *= cyclic_banking_factor.at(i);
    }

    string bank_func =
      curlies(buf.buf_range_name() + bracket_list(dvs) + " -> Bank" + sep_list(addrs, "[", "]", "+"));

    //bank map: from address to the bank ID
    cout << "bank func = " << bank_func << endl;
    auto bank_map = isl_map_read_from_str(buf.ctx, bank_func.c_str());
    return bank_map;
  }

  void print_info(std::ostream& out) const {

    UBufferImpl::print_info(out);
    out << "==========Embarrassing Banking ============" << endl;
    out << "cyclic_banking_factor: " << cyclic_banking_factor << endl;
  }
};

std::ostream& operator<<(std::ostream& out, dgraph& dg);
std::ostream& operator<<(std::ostream& out, UBufferImpl& impl);

bool all_schedules_defined(UBuffer& buf);

bool is_register(UBuffer& buf);

//This is an optimization pass
//take both access map and schedule and merge the dimension
pair<isl_map*, isl_map*> merge_dom_dim(isl_map* schedule, isl_map* acc_map);

//Shift register optimizations
vector<pair<string, pair<string, int> >> determine_output_shift_reg_map(
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

map<string, pair<string, int> > determine_shift_reg_map(
        prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

//This method consider multiple input port feed into one output
map<string, vector<pair<string, int> > > determine_shift_reg_map_new(
        prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

int get_vector_fetch_loop_ii(umap* in_sched);
bool violate_deps(isl_map* temp_sched, map<string, isl_map*> sched_map);
dgraph build_in_to_out_shift_register_graph(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);
dgraph build_shift_registers(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);
UBufferImpl port_group2bank(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo);

isl_map* build_buffer_impl_embarrassing_banking(UBuffer& buf, schedule_info& hwinfo, EmbarrassingBankingImpl& impl);

void generate_banks_garnet(CodegenOptions& options, UBuffer& buf, UBufferImpl& impl, schedule_info& hw_info);

UBufferImpl generate_optimized_memory_implementation(
        CodegenOptions& options, UBuffer & buf, prog & prg, schedule_info& hwinfo);

vector<int> analyze_memory_demands(prog& prg, UBuffer& buf, schedule_info& hwinfo);

int buffer_capacity(UBuffer& buf);

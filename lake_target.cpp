#include "lake_target.h"

#include "utils.h"

void generate_lake_collateral_wide_fetch_tile(
    const std::string& mod_name,
    std::ostream& out,
    isl_aff* write_sched,
    isl_aff* write_addr,
    isl_set* write_dom,
    isl_aff* read_sched,
    isl_aff* read_addr,
    isl_set* read_dom) {

  int write_sched_start = to_int(const_coeff(write_sched));
  int read_sched_start = to_int(const_coeff(read_sched));

  int write_start = to_int(const_coeff(write_addr));
  int read_start = to_int(const_coeff(read_addr));

  vector<string> write_strides;
  for (int d = 0; d < num_in_dims(write_addr); d++) {
    write_strides.push_back("16'd" + str(get_coeff(write_addr, d)));
  }

  vector<string> read_strides;
  for (int d = 0; d < num_in_dims(read_addr); d++) {
    read_strides.push_back("16'd" + str(get_coeff(read_addr, d)));
  }

  vector<string> write_ranges;
  cout << "write dom: " << str(write_dom) << endl;
  for (int d = 0; d < num_dims(write_dom); d++) {
    auto pr = project_all_but(write_dom, d);
    cout << "projected: " << str(pr) << endl;
    int minp = to_int(lexminval(pr));
    assert(minp == 0);
    int maxp = to_int(lexmaxval(pr));
    cout << tab(1) << "maxp = " << maxp << endl;
    write_ranges.push_back("16'd" + str(maxp));
  }

  vector<string> read_ranges;
  for (int d = 0; d < num_dims(read_dom); d++) {
    auto pr = project_all_but(read_dom, d);
    int minp = to_int(lexminval(pr));
    assert(minp == 0);
    int maxp = to_int(lexmaxval(pr));
    read_ranges.push_back("16'd" + str(maxp));
  }

  vector<string> outer_port_decls;
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic [0:0] [15:0] data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] data_out");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  // What are the different component values?
  // - Starting addr
  // - Strides
  // - Sched starting addr
  // - Sched strides
  // - Ranges
  // - Dimensionality

  // Output ports
  pds.push_back("input logic [15:0] strg_ub_output_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_output_addr_gen_strides");
  pds.push_back("input logic [15:0] strg_ub_output_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides");

  // Input ports
  pds.push_back("input logic [15:0] strg_ub_input_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_input_addr_gen_strides");
  pds.push_back("input logic [15:0] strg_ub_input_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides");

  // Agg ports
  pds.push_back("input logic [7:0] strg_ub_agg_read_addr_gen_0_starting_addr");
  pds.push_back("input logic [3:0] [7:0] strg_ub_agg_read_addr_gen_0_strides");

  pds.push_back("input logic [3:0] strg_ub_agg_write_addr_gen_0_starting_addr");
  pds.push_back("input logic [3:0] [3:0] strg_ub_agg_write_addr_gen_0_strides");
  pds.push_back("input logic [3:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr");
  pds.push_back("input logic [3:0] [3:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides");


  pds.push_back("input logic [3:0] strg_ub_loops_buf2out_autovec_read_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_loops_buf2out_autovec_read_ranges");
  pds.push_back("input logic [1:0] strg_ub_loops_buf2out_autovec_write_0_dimensionality");
  pds.push_back("input logic [1:0] [5:0] strg_ub_loops_buf2out_autovec_write_0_ranges");
  pds.push_back("input logic [1:0] strg_ub_loops_buf2out_read_0_dimensionality");
  pds.push_back("input logic [1:0] [15:0] strg_ub_loops_buf2out_read_0_ranges");


  pds.push_back("input logic [2:0] strg_ub_loops_in2buf_0_dimensionality");
  pds.push_back("input logic [3:0] [3:0] strg_ub_loops_in2buf_0_ranges");
  pds.push_back("input logic [2:0] strg_ub_loops_in2buf_autovec_read_0_dimensionality");
  pds.push_back("input logic [3:0] [7:0] strg_ub_loops_in2buf_autovec_read_0_ranges");
  pds.push_back("input logic [3:0] strg_ub_loops_in2buf_autovec_write_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_loops_in2buf_autovec_write_ranges");

  pds.push_back("input logic [5:0] strg_ub_tb_read_addr_gen_0_starting_addr");
  pds.push_back("input logic [1:0] [5:0] strg_ub_tb_read_addr_gen_0_strides");
  pds.push_back("input logic [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr");
  pds.push_back("input logic [1:0] [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides");
  pds.push_back("input logic [5:0] strg_ub_tb_write_addr_gen_0_starting_addr");
  pds.push_back("input logic [1:0] [5:0] strg_ub_tb_write_addr_gen_0_strides");

  pds.push_back("input logic tile_en");
  pds.push_back("output logic valid_out");
  pds.push_back("input logic wen_in");

  out << "module " << mod_name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : pds) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    if (!elem(name, external)) {
      vector<string> decl = f;
      reverse(decl);
      decl.pop_back();
      decl.push_back("wire");
      reverse(decl);
      out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      string default_val = "0";
      if (name == "clk_en" || name == "tile_en") {
        default_val = "1";
      } else if (name == "strg_ub_sram_read_addr_gen_starting_addr") {
        default_val = str(read_start);
      } else if (name == "strg_ub_sram_read_addr_gen_strides") {
        default_val = sep_list(read_strides, "{", "}", ", "); //"{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      } else if (name == "strg_ub_sram_read_loops_dimensionality") {
        default_val = str(num_dims(read_dom));
      } else if (name == "strg_ub_sram_read_loops_ranges") {
        default_val = sep_list(read_ranges, "{", "}", ", "); //"{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
      } else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr") {
        default_val = str(read_sched_start);
      } else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_strides") {
        default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
      } else if (name == "strg_ub_sram_write_addr_gen_starting_addr") {
        default_val = str(write_start);
      } else if (name == "strg_ub_sram_write_addr_gen_strides") {
        default_val = sep_list(write_strides, "{", "}", ", ");
      } else if (name == "strg_ub_sram_write_loops_dimensionality") {
        default_val = str(num_dims(write_dom));
      } else if (name == "strg_ub_sram_write_loops_ranges") {
        default_val = sep_list(write_ranges, "{", "}", ", ");
      } else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr") {
        default_val = str(write_sched_start);
      } else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_strides") {
        default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
      }

      if (name == "strg_ub_input_sched_gen_sched_addr_gen_starting_addr") {
        default_val = "8";
      }
      if (name == "strg_ub_input_sched_gen_sched_addr_gen_strides") {
        default_val = "{16'd1, 16'd1, 16'd1000, 16'd100, 16'd10, 16'd4}";
      }
      if (name == "strg_ub_input_addr_gen_starting_addr") {
        default_val = "12";
      }
      if (name == "strg_ub_input_addr_gen_strides") {
        default_val = "{16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd1}";
      }

      if (name == "strg_ub_output_sched_gen_sched_addr_gen_starting_addr") {
        default_val = "9";
      }
      if (name == "strg_ub_output_sched_gen_sched_addr_gen_strides") {
        default_val = "{16'd1, 16'd1, 16'd1000, 16'd100, 16'd10, 16'd4}";
      }
      if (name == "strg_ub_output_addr_gen_starting_addr") {
        default_val = "12";
      }
      if (name == "strg_ub_output_addr_gen_strides") {
        default_val = "{16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd1}";
      }

      if (name == "strg_ub_agg_write_addr_gen_0_starting_addr") {
        default_val = "2";
      }
      if (name == "strg_ub_agg_write_addr_gen_0_strides") {
        default_val = "{4'd0, 4'd0, 4'd0, 4'd0, 4'd64, 4'd4, 4'd1}";
      }
      if (name == "strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr") {
        default_val = "0";
      }
      if (name == "strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides") {
        default_val = "{4'd0, 4'd64, 4'd4, 4'd1}";
      }


  //if (name == "strg_ub_loops_buf2out_autovec_read_dimensionality") {
    //default_val 
  //}
  //pds.push_back("input logic [5:0] [15:0] strg_ub_loops_buf2out_autovec_read_ranges");
  //pds.push_back("input logic [1:0] strg_ub_loops_buf2out_autovec_write_0_dimensionality");
  //pds.push_back("input logic [1:0] [5:0] strg_ub_loops_buf2out_autovec_write_0_ranges");
  //pds.push_back("input logic [1:0] strg_ub_loops_buf2out_read_0_dimensionality");
  //pds.push_back("input logic [1:0] [15:0] strg_ub_loops_buf2out_read_0_ranges");


  //pds.push_back("input logic [2:0] strg_ub_loops_in2buf_0_dimensionality");
  //pds.push_back("input logic [3:0] [3:0] strg_ub_loops_in2buf_0_ranges");
  //pds.push_back("input logic [2:0] strg_ub_loops_in2buf_autovec_read_0_dimensionality");
  //pds.push_back("input logic [3:0] [7:0] strg_ub_loops_in2buf_autovec_read_0_ranges");
  //pds.push_back("input logic [3:0] strg_ub_loops_in2buf_autovec_write_dimensionality");


      //pds.push_back("input logic [15:0] strg_ub_input_sched_gen_sched_addr_gen_starting_addr");
      //pds.push_back("input logic [5:0] [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides");

      //pds.push_back("input logic [3:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr");
      //pds.push_back("input logic [3:0] [3:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides");


      //pds.push_back("input logic [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr");
      //pds.push_back("input logic [1:0] [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides");

      out << tab(1) << "assign " << name << " = " << default_val << ";" << endl;
    }

    decls.push_back("." + f.back() + parens(f.back()));
  }
  out << endl;
  out << tab(1) << "LakeTop lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

vector<string> stride_strings(isl_aff* write_addr) {
  vector<string> write_strides;
  for (int d = 0; d < num_in_dims(write_addr); d++) {
    write_strides.push_back("16'd" + str(get_coeff(write_addr, d)));
  }
  return write_strides;
}

vector<string> range_strings(isl_set* write_dom) {
  vector<string> write_ranges;
  cout << "write dom: " << str(write_dom) << endl;
  for (int d = 0; d < num_dims(write_dom); d++) {
    auto pr = project_all_but(write_dom, d);
    cout << "projected: " << str(pr) << endl;
    int minp = to_int(lexminval(pr));
    assert(minp == 0);
    int maxp = to_int(lexmaxval(pr));
    cout << tab(1) << "maxp = " << maxp << endl;
    write_ranges.push_back("16'd" + str(maxp));
  }
  return write_ranges;
}

void generate_lake_collateral(
    const std::string& mod_name,
    std::ostream& out,
    const std::vector<component_controller>& controllers) {

  vector<string> outer_port_decls;
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic [0:0] [15:0] data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] data_out");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  for (auto& c : controllers) {
    string compname = c.component_name;
    pds.push_back("input logic [15:0] strg_ub_" + compname + "_addr_gen_starting_addr");
    pds.push_back("input logic [5:0] [15:0] strg_ub_" + compname + "_addr_gen_strides");
    pds.push_back("input logic [3:0] strg_ub_" + compname + "_loops_dimensionality");
    pds.push_back("input logic [5:0] [15:0] strg_ub_" + compname + "_loops_ranges");
    pds.push_back("input logic [15:0] strg_ub_" + compname + "_sched_gen_sched_addr_gen_starting_addr");
    pds.push_back("input logic [5:0] [15:0] strg_ub_" + compname + "_sched_gen_sched_addr_gen_strides");
  }
      
  //pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  //pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  //pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  //pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  //pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  //pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");

  out << "module " << mod_name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : pds) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    if (!elem(name, external)) {
      vector<string> decl = f;
      reverse(decl);
      decl.pop_back();
      decl.push_back("wire");
      reverse(decl);
      out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      string default_val = "0";
      if (name == "clk_en" || name == "tile_en") {
        default_val = "1";
      }

      for (auto& c : controllers) {
        string compname = c.component_name;
        if (name == "strg_ub_" + compname + "_addr_gen_starting_addr") {
          int read_start = to_int(const_coeff(c.addrs));
          default_val = str(read_start);
        } else if (name == "strg_ub_" + compname + "_addr_gen_strides") {
          vector<string> read_strides = stride_strings(c.addrs);
          default_val = sep_list(read_strides, "{", "}", ", ");
        } else if (name == "strg_ub_" + compname + "_loops_dimensionality") {
          default_val = str(num_dims(c.dom));
        } else if (name == "strg_ub_" + compname + "_loops_ranges") {
          vector<string> read_ranges = range_strings(c.dom);
          default_val = sep_list(read_ranges, "{", "}", ", ");
        } else if (name == "strg_ub_" + compname + "_sched_gen_sched_addr_gen_starting_addr") {
          int read_sched_start = to_int(const_coeff(c.sched));
          default_val = str(read_sched_start);
        } else if (name == "strg_ub_" + compname + "_sched_gen_sched_addr_gen_strides") {
          vector<string> read_iis = stride_strings(c.sched);
          default_val = sep_list(read_iis, "{", "}", ", ");
        }

      }
      
      out << tab(1) << "assign " << name << " = " << default_val << ";" << endl;
    }

    decls.push_back("." + f.back() + parens(f.back()));
  }
  out << endl;
  out << tab(1) << "LakeTop lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

void generate_lake_collateral_delay_wide_fetch_tile(const std::string& name, std::ostream& out, const int depth) {
  const int TILE_READ_LATENCY = 1;

  assert(depth >= TILE_READ_LATENCY);
  isl_ctx* ctx = isl_ctx_alloc();
  int max_depth = (1 << 16) - 1;
  cout << "max depth = " << max_depth << endl;
  assert(max_depth >= 0);


  isl_aff* write_sched = rdaff(ctx, "{ wr[a] -> [(a)] }");
  isl_aff* write_addr = rdaff(ctx, "{ wr[a] -> [(a + " + str(depth - TILE_READ_LATENCY) + ")] }");
  isl_set* write_dom = isl_set_read_from_str(ctx, ("{ wr[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  isl_aff* read_sched = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
  isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
  //isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a - " + str(TILE_READ_LATENCY) + ")] }").c_str());
  isl_set* read_dom = isl_set_read_from_str(ctx, ("{ rd[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  generate_lake_collateral_wide_fetch_tile(name, out, write_sched, write_addr, write_dom, read_sched, read_addr, read_dom);

  isl_ctx_free(ctx);
}

void generate_lake_collateral_delay(const std::string& name, std::ostream& out, const int depth) {
  const int TILE_READ_LATENCY = 1;

  assert(depth >= TILE_READ_LATENCY);
  isl_ctx* ctx = isl_ctx_alloc();
  int max_depth = (1 << 16) - 1;
  cout << "max depth = " << max_depth << endl;
  assert(max_depth >= 0);


  isl_aff* write_sched = rdaff(ctx, "{ wr[a] -> [(a)] }");
  isl_aff* write_addr = rdaff(ctx, "{ wr[a] -> [(a + " + str(depth - TILE_READ_LATENCY) + ")] }");
  isl_set* write_dom = isl_set_read_from_str(ctx, ("{ wr[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  isl_aff* read_sched = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
  isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a)] }"));
  //isl_aff* read_addr = rdaff(ctx, ("{ rd[a] -> [(a - " + str(TILE_READ_LATENCY) + ")] }").c_str());
  isl_set* read_dom = isl_set_read_from_str(ctx, ("{ rd[a] : 0 <= a <= " + str(max_depth) + " }").c_str());

  component_controller write_ctrl{"sram_write", write_sched, write_addr, write_dom, 16};
  component_controller read_ctrl{"sram_read", read_sched, read_addr, read_dom, 16};
  //generate_lake_collateral(name, out, {write_ctrl, read_ctrl}, write_sched, write_addr, write_dom, read_sched, read_addr, read_dom);
  generate_lake_collateral(name, out, {write_ctrl, read_ctrl});

  isl_ctx_free(ctx);
}

void generate_lake_collateral_delay_wide_fetch_tile_wrapped(const std::string& name, std::ostream& out, const int depth) {

  generate_lake_collateral_delay_wide_fetch_tile(name + "_inner", out, depth);

  vector<string> outer_port_decls;
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");
  outer_port_decls.push_back("output logic [15:0] rdata");
  outer_port_decls.push_back("output logic [15:0] wdata");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  //pds.push_back("input logic [0:0] [15:0] addr_in");
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  // Agg ports
  pds.push_back("input logic [15:0] strg_ub_tb_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_tb_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_tb_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_tb_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_tb_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_tb_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_tb_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_tb_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_tb_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_tb_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_tb_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_tb_write_sched_gen_sched_addr_gen_strides");


  // Input ports
  pds.push_back("input logic [15:0] strg_ub_input_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_input_addr_gen_strides");
  pds.push_back("input logic [15:0] strg_ub_input_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides");

  // Agg ports
  pds.push_back("input logic [15:0] strg_ub_agg_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_agg_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_agg_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_agg_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_agg_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_agg_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_agg_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_agg_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_agg_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_agg_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_agg_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_agg_write_sched_gen_sched_addr_gen_strides");


  //// SRAM ports
  //pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  //pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  //pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  //pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  //pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  //pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");
  pds.push_back("input logic wen_in");

  out << "module " << name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : outer_port_decls) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    //if (!elem(name, external)) {
      //vector<string> decl = f;
      //reverse(decl);
      //decl.pop_back();
      //decl.push_back("wire");
      //reverse(decl);
      //out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      //string default_val = "0";

    //}

    if (name == "wdata") {
      decls.push_back(".data_in" + parens(f.back()));
    } else if (name == "rdata") {
      decls.push_back(".data_out" + parens(f.back()));
    } else {
      decls.push_back("." + f.back() + parens(f.back()));
    }
  }
  out << endl;
  out << tab(1) << name << "_inner lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

void generate_lake_collateral_delay_wdata_wrapped(const std::string& name, std::ostream& out, const int depth) {

  generate_lake_collateral_delay(name + "_inner", out, depth);

  vector<string> outer_port_decls;
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");
  outer_port_decls.push_back("output logic [15:0] rdata");
  outer_port_decls.push_back("output logic [15:0] wdata");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  //pds.push_back("input logic [0:0] [15:0] addr_in");
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");
  pds.push_back("input logic wen_in");

  out << "module " << name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : outer_port_decls) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    //if (!elem(name, external)) {
      //vector<string> decl = f;
      //reverse(decl);
      //decl.pop_back();
      //decl.push_back("wire");
      //reverse(decl);
      //out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      //string default_val = "0";

    //}

    if (name == "wdata") {
      decls.push_back(".data_in" + parens(f.back()));
    } else if (name == "rdata") {
      decls.push_back(".data_out" + parens(f.back()));
    } else {
      decls.push_back("." + f.back() + parens(f.back()));
    }
  }
  out << endl;
  out << tab(1) << name << "_inner lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

void generate_lake_collateral_affine_controller(const std::string& name, std::ostream& out, isl_set* dom, isl_aff* aff) {
  int sched_start = to_int(const_coeff(aff));

  vector<string> strides;
  for (int d = 0; d < num_in_dims(aff); d++) {
    strides.push_back("16'd" + str(get_coeff(aff, d)));
  }
  reverse(strides);


  vector<string> write_ranges;
  cout << "write dom: " << str(dom) << endl;
  for (int d = 0; d < num_dims(dom); d++) {
    auto pr = project_all_but(dom, d);
    cout << "projected: " << str(pr) << endl;
    int minp = to_int(lexminval(pr));
    assert(minp == 0);
    int maxp = to_int(lexmaxval(pr));
    cout << tab(1) << "maxp = " << maxp << endl;
    write_ranges.push_back("16'd" + str(maxp));
  }
  reverse(write_ranges);

  vector<string> outer_port_decls;
  outer_port_decls.push_back("output logic [15:0] d [" + str(num_dims(dom) - 1) + ":0]");
  outer_port_decls.push_back("output logic valid");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic flush");
  pds.push_back("input logic rst_n");

  //pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  //pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  //pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  //pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  //pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  //pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  //pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  //pds.push_back("input logic tile_en");

  //pds.push_back("output logic valid_out");

  //pds.push_back("input logic wen_in");

  out << "module " << name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : pds) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    if (!elem(name, external)) {
      vector<string> decl = f;
      reverse(decl);
      decl.pop_back();
      decl.push_back("wire");
      reverse(decl);
      out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      string default_val = "0";
      //if (name == "clk_en" || name == "tile_en") {
        //default_val = "1";
      //} else if (name == "strg_ub_sram_read_addr_gen_starting_addr") {
        //default_val = str(read_start);
      //} else if (name == "strg_ub_sram_read_addr_gen_strides") {
        //default_val = sep_list(read_strides, "{", "}", ", "); //"{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      //} else if (name == "strg_ub_sram_read_loops_dimensionality") {
        //default_val = str(num_dims(read_dom));
      //} else if (name == "strg_ub_sram_read_loops_ranges") {
        //default_val = sep_list(read_ranges, "{", "}", ", "); //"{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
      //} else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr") {
        //default_val = str(read_sched_start);
      //} else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_strides") {
        //default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
      //} else if (name == "strg_ub_sram_write_addr_gen_starting_addr") {
        //default_val = str(write_start);
      //} else if (name == "strg_ub_sram_write_addr_gen_strides") {
        //default_val = sep_list(write_strides, "{", "}", ", ");
        //// "{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      //} else if (name == "strg_ub_sram_write_loops_dimensionality") {
        //default_val = str(num_dims(write_dom));
      //} else if (name == "strg_ub_sram_write_loops_ranges") {
        ////default_val = "{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
        //default_val = sep_list(write_ranges, "{", "}", ", ");
      //} else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr") {
        //default_val = str(write_sched_start);
      //} else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_strides") {
        //default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
      //}
      //out << tab(1) << "assign " << name << " = " << default_val << ";" << endl;
    }

  }
  decls.push_back(".clk(clk)");
  decls.push_back(".clk_en(1)");
  decls.push_back(".rst_n(rst_n)");
  decls.push_back(".flush(flush)");
  decls.push_back(".step(valid)");
  decls.push_back(".dimensionality(" + str(num_dims(dom)) + ")");
  decls.push_back(".ranges(" + sep_list(write_ranges, "{", "}", ", ") + ")");
  decls.push_back(".strides(" + sep_list(strides, "{", "}", ", ") + ")");
  decls.push_back(".starting_addr(" + str(sched_start) + ")");

  out << endl;

  //out << tab(1) << "reg [15:0] cycle_time;" << endl;

  //out << "assign valid = cycle_time == addr_out;" << endl;

  //out << "always_ff @(posedge clk, negedge rst_n) begin" << endl;
  //out << "if (~rst_n) begin" << endl;
  //out << "cycle_time <= 16'h0;" << endl;
  //out << "end" << endl;
  //out << "else begin" << endl;
  //out << "cycle_time <= cycle_time + 16'd1;" << endl;
  //out << "end" << endl;
  //out << "end" << endl << endl;

  out << tab(1) << "inner_affine_controller lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

void generate_lake_collateral_delay_fabric_addrgen(const std::string& name, std::ostream& out, const int depth) {

  //int write_sched_start = to_int(const_coeff(write_sched));
  //int read_sched_start = to_int(const_coeff(read_sched));

  //int write_start = to_int(const_coeff(write_addr));
  //int read_start = to_int(const_coeff(read_addr));

  //vector<string> write_strides;
  //for (int d = 0; d < num_in_dims(write_addr); d++) {
    //write_strides.push_back("16'd" + str(get_coeff(write_addr, d)));
  //}

  //vector<string> read_strides;
  //for (int d = 0; d < num_in_dims(read_addr); d++) {
    //read_strides.push_back("16'd" + str(get_coeff(read_addr, d)));
  //}

  //vector<string> write_ranges;
  //cout << "write dom: " << str(write_dom) << endl;
  //for (int d = 0; d < num_dims(write_dom); d++) {
    //auto pr = project_all_but(write_dom, d);
    //cout << "projected: " << str(pr) << endl;
    //int minp = to_int(lexminval(pr));
    //assert(minp == 0);
    //int maxp = to_int(lexmaxval(pr));
    //cout << tab(1) << "maxp = " << maxp << endl;
    //write_ranges.push_back("16'd" + str(maxp));
  //}

  //vector<string> read_ranges;
  //for (int d = 0; d < num_dims(read_dom); d++) {
    //auto pr = project_all_but(read_dom, d);
    //int minp = to_int(lexminval(pr));
    //assert(minp == 0);
    //int maxp = to_int(lexmaxval(pr));
    ////read_ranges.push_back("16'd" + str(maxp + 1));
    //read_ranges.push_back("16'd" + str(maxp));
  //}

  vector<string> outer_port_decls;
  //outer_port_decls.push_back("input logic [0:0] [15:0] addr_in");
  outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  //pds.push_back("input logic chain_idx_input");
  //pds.push_back("input logic chain_idx_output");
  //pds.push_back("input logic chain_valid_in");
  outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic [0:0] [15:0] data_in");
  outer_port_decls.push_back("output logic [0:0] [15:0] data_out");
  //pds.push_back("input logic enable_chain_input");
  //pds.push_back("input logic enable_chain_output");
  outer_port_decls.push_back("input logic flush");
  //pds.push_back("input logic ren_in");
  outer_port_decls.push_back("input logic rst_n");
  outer_port_decls.push_back("output logic valid_out");
  //pds.push_back("input logic wen_in");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  //pds.push_back("input logic [0:0] [15:0] addr_in");
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");

  out << "module " << name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : pds) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    //if (!elem(name, external)) {
      //vector<string> decl = f;
      //reverse(decl);
      //decl.pop_back();
      //decl.push_back("wire");
      //reverse(decl);
      //out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      //string default_val = "0";
      //if (name == "clk_en" || name == "tile_en") {
        //default_val = "1";
      //} else if (name == "strg_ub_sram_read_addr_gen_starting_addr") {
        //default_val = str(read_start);
      //} else if (name == "strg_ub_sram_read_addr_gen_strides") {
        //default_val = sep_list(read_strides, "{", "}", ", "); //"{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      //} else if (name == "strg_ub_sram_read_loops_dimensionality") {
        //default_val = str(num_dims(read_dom));
      //} else if (name == "strg_ub_sram_read_loops_ranges") {
        //default_val = sep_list(read_ranges, "{", "}", ", "); //"{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
      //} else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr") {
        //default_val = str(read_sched_start);
      //} else if (name == "strg_ub_sram_read_sched_gen_sched_addr_gen_strides") {
        //default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
      //} else if (name == "strg_ub_sram_write_addr_gen_starting_addr") {
        //default_val = str(write_start);
      //} else if (name == "strg_ub_sram_write_addr_gen_strides") {
        //default_val = sep_list(write_strides, "{", "}", ", ");
        //// "{16'd0, 16'd0, 16'0, 16'd0, 16'd0, 16'd0}";
      //} else if (name == "strg_ub_sram_write_loops_dimensionality") {
        //default_val = str(num_dims(write_dom));
      //} else if (name == "strg_ub_sram_write_loops_ranges") {
        ////default_val = "{16'd10, 16'd10, 16'd10, 16'd10, 16'd10, 16'd10}";
        //default_val = sep_list(write_ranges, "{", "}", ", ");
      //} else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr") {
        //default_val = str(write_sched_start);
      //} else if (name == "strg_ub_sram_write_sched_gen_sched_addr_gen_strides") {
        //default_val = "{16'd1, 16'd1, 16'd1, 16'd100, 16'd10, 16'd1}";
        ////pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
        ////pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

        ////pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
        ////pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
        ////pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
        ////pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
        ////pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
        ////pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

      //}
      //out << tab(1) << "assign " << name << " = " << default_val << ";" << endl;
    //}

    decls.push_back("." + f.back() + parens(f.back()));
  }
  out << endl;
  out << tab(1) << "LakeTop lake(" << comma_list(decls) << ");" << endl;
  out << endl;

  out << "endmodule" << endl;
}

void generate_lake_collateral_dual_sram_raw(const std::string& mod_name, std::ostream& out) {
  vector<string> outer_port_decls;
  //outer_port_decls.push_back("input logic [0:0] [15:0] chain_data_in");
  //outer_port_decls.push_back("output logic [0:0] [15:0] chain_data_out");
  //outer_port_decls.push_back("output logic chain_valid_out");
  outer_port_decls.push_back("input logic clk");
  outer_port_decls.push_back("input logic flush");
  outer_port_decls.push_back("input logic rst_n");
  //outer_port_decls.push_back("output logic valid_out");
  outer_port_decls.push_back("output logic [15:0] rdata");
  outer_port_decls.push_back("output logic [15:0] wdata");
  outer_port_decls.push_back("output logic [15:0] raddr");
  outer_port_decls.push_back("output logic [15:0] waddr");
  outer_port_decls.push_back("output logic ren_in");
  outer_port_decls.push_back("output logic wen_in");

  vector<string> external;
  for (auto s : outer_port_decls) {
    string name = split_at(s, " ").back();
    external.push_back(name);
  }

  vector<string> pds;
  //pds.push_back("input logic [0:0] [15:0] addr_in");
  pds.push_back("input logic [0:0] [15:0] chain_data_in");
  pds.push_back("output logic [0:0] [15:0] chain_data_out");
  pds.push_back("input logic chain_idx_input");
  pds.push_back("input logic chain_idx_output");
  pds.push_back("input logic chain_valid_in");
  pds.push_back("output logic chain_valid_out");
  pds.push_back("input logic clk");
  pds.push_back("input logic clk_en");
  pds.push_back("input logic [7:0] config_addr_in");
  pds.push_back("input logic [31:0] config_data_in");
  pds.push_back("output logic [0:0] [31:0] config_data_out");
  pds.push_back("input logic config_en");
  pds.push_back("input logic config_read");
  pds.push_back("input logic config_write");
  pds.push_back("input logic [0:0] [15:0] data_in");
  pds.push_back("output logic [0:0] [15:0] data_out");
  pds.push_back("input logic enable_chain_input");
  pds.push_back("input logic enable_chain_output");
  pds.push_back("input logic flush");
  pds.push_back("input logic [1:0] mode");
  pds.push_back("input logic ren_in");
  pds.push_back("input logic rst_n");

  pds.push_back("input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_read_loops_dimensionality");

  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges");

  pds.push_back("input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides");
  pds.push_back("input logic [3:0] strg_ub_sram_write_loops_dimensionality");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges");
  pds.push_back("input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr");
  pds.push_back("input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides");

  pds.push_back("input logic tile_en");

  pds.push_back("output logic valid_out");

  pds.push_back("input logic wen_in");
  pds.push_back("input logic wen_in");

  out << "module " << mod_name << "(" << comma_list(outer_port_decls) << ");" << endl;

  vector<string> decls;
  for (auto s : outer_port_decls) {
    vector<string> f = split_at(s, " ");
    assert(f.size() > 0);
    string name = f.back();
    //if (!elem(name, external)) {
      //vector<string> decl = f;
      //reverse(decl);
      //decl.pop_back();
      //decl.push_back("wire");
      //reverse(decl);
      //out << tab(1) << sep_list(decl, "", "", " ") << ";" << endl;
      //string default_val = "0";

    //}

    if (name == "wdata") {
      decls.push_back(".data_in" + parens(f.back()));
    } else if (name == "rdata") {
      decls.push_back(".data_out" + parens(f.back()));
    } else if (name == "clk_en") {
      decls.push_back(".clk_en(1)");
    } else if (name == "tile_en") {
      decls.push_back(".tile_en(1)");
    } else {
      decls.push_back("." + f.back() + parens(f.back()));
    }
  }
  decls.push_back(".clk_en(1)");
  decls.push_back(".tile_en(1)");
  out << endl;
  out << tab(1) << "LakeTop lake(" << comma_list(decls) << ");" << endl;
  out << endl;
  out << "endmodule" << endl;
}

void generate_lake_collateral_dual_sram_cyclic_banks(const std::string& mod_name, std::ostream& out, const std::vector<int>& factors, const int in_ports, const int out_ports) {

}

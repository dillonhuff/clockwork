  // min: { [15446] }
  // max: { [2097677] }

  // min: { [7718] }
  // max: { [2097665] }

  // min: { [11580] }
  // max: { [2097669] }

  // min: { [11586] }
  // max: { [2097673] }

  // min: { [11582] }
  // max: { [2097671] }

  // min: { [15448] }
  // max: { [2097679] }

  // min: { [11588] }
  // max: { [2097675] }

  // min: { [7720] }
  // max: { [2097667] }

  // min: { [1] }
  // max: { [2097664] }

  // min: { [15452] }
  // max: { [2097683] }

  // min: { [15450] }
  // max: { [2097681] }

  // sched min: { [1] }
  // sched max: { [2097683] }
module memtile_long_delay__U420_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 3863;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U420(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U420_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U426_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1927;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U426(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U426_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U428_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1927;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U428(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U428_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U460_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1925;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U460(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U460_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U468_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1925;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U468(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U468_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U495_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1923;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U495(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U495_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U509_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1923;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U509(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U509_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U523_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1923;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U523(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U523_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule
module memtile_long_delay__U537_inner(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic [0:0] [15:0] data_in, output logic [0:0] [15:0] data_out, input logic flush, input logic rst_n, output logic valid_out);
  wire logic chain_idx_input;
  assign chain_idx_input = 0;
  wire logic chain_idx_output;
  assign chain_idx_output = 0;
  wire logic chain_valid_in;
  assign chain_valid_in = 0;
  wire logic clk_en;
  assign clk_en = 1;
  wire logic [7:0] config_addr_in;
  assign config_addr_in = 0;
  wire logic [31:0] config_data_in;
  assign config_data_in = 0;
  wire logic [0:0] [31:0] config_data_out;
  assign config_data_out = 0;
  wire logic config_en;
  assign config_en = 0;
  wire logic config_read;
  assign config_read = 0;
  wire logic config_write;
  assign config_write = 0;
  wire logic enable_chain_input;
  assign enable_chain_input = 0;
  wire logic enable_chain_output;
  assign enable_chain_output = 0;
  wire logic [1:0] mode;
  assign mode = 0;
  wire logic ren_in;
  assign ren_in = 0;
  wire logic [15:0] strg_ub_sram_write_addr_gen_starting_addr;
  assign strg_ub_sram_write_addr_gen_starting_addr = 1923;
  wire logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides;
  assign strg_ub_sram_write_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_write_loops_dimensionality;
  assign strg_ub_sram_write_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_write_loops_ranges;
  assign strg_ub_sram_write_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_write_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic [15:0] strg_ub_sram_read_addr_gen_starting_addr;
  assign strg_ub_sram_read_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides;
  assign strg_ub_sram_read_addr_gen_strides = {16'd1};
  wire logic [3:0] strg_ub_sram_read_loops_dimensionality;
  assign strg_ub_sram_read_loops_dimensionality = 1;
  wire logic [5:0] [15:0] strg_ub_sram_read_loops_ranges;
  assign strg_ub_sram_read_loops_ranges = {16'd65535};
  wire logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr = 0;
  wire logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
  assign strg_ub_sram_read_sched_gen_sched_addr_gen_strides = {16'd1};
  wire logic tile_en;
  assign tile_en = 1;
  wire logic wen_in;
  assign wen_in = 0;

  LakeTop lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_idx_input(chain_idx_input), .chain_idx_output(chain_idx_output), .chain_valid_in(chain_valid_in), .chain_valid_out(chain_valid_out), .clk(clk), .clk_en(clk_en), .config_addr_in(config_addr_in), .config_data_in(config_data_in), .config_data_out(config_data_out), .config_en(config_en), .config_read(config_read), .config_write(config_write), .data_in(data_in), .data_out(data_out), .enable_chain_input(enable_chain_input), .enable_chain_output(enable_chain_output), .flush(flush), .mode(mode), .ren_in(ren_in), .rst_n(rst_n), .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr), .strg_ub_sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides), .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality), .strg_ub_sram_write_loops_ranges(strg_ub_sram_write_loops_ranges), .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides), .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr), .strg_ub_sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides), .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality), .strg_ub_sram_read_loops_ranges(strg_ub_sram_read_loops_ranges), .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr), .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides), .tile_en(tile_en), .valid_out(valid_out), .wen_in(wen_in));

endmodule
module memtile_long_delay__U537(input logic [0:0] [15:0] chain_data_in, output logic [0:0] [15:0] chain_data_out, output logic chain_valid_out, input logic clk, input logic flush, input logic rst_n, output logic valid_out, output logic [15:0] rdata, output logic [15:0] wdata);

  memtile_long_delay__U537_inner lake(.chain_data_in(chain_data_in), .chain_data_out(chain_data_out), .chain_valid_out(chain_valid_out), .clk(clk), .flush(flush), .rst_n(rst_n), .valid_out(valid_out), .data_out(rdata), .data_in(wdata));

endmodule

module cgralib_Mem_amber__ID_U16__has_flushTrue__has_resetFalse__has_stencil_validTrue__has_validFalse__num_inputs1__num_outputs2__width16 (
  input logic [15:0] addr_in_0,
  input logic [15:0] addr_in_1,
  input logic chain_chain_en,
  input logic [15:0] chain_data_in_0,
  input logic [15:0] chain_data_in_1,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [31:0] config_data_in,
  input logic [1:0] config_en,
  input logic config_read,
  input logic config_write,
  input logic [15:0] data_in_0,
  input logic [15:0] data_in_1,
  input logic [15:0] fifo_ctrl_fifo_depth,
  input logic flush,
  input logic [1:0] ren_in,
  input logic rst_n,
  input logic [1:0] wen_in,
  output logic [31:0] config_data_out_0,
  output logic [31:0] config_data_out_1,
  output logic [15:0] data_out_0,
  output logic [15:0] data_out_1,
  output logic empty,
  output logic full,
  output logic sram_ready_out,
  output logic stencil_valid,
  output logic [1:0] valid_out
);
wire [3:0] strg_ub_agg_read_addr_gen_0_starting_addr = 0;
wire [8:0] strg_ub_input_addr_gen_starting_addr = 0;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_starting_addr = 134;
wire [3:0] strg_ub_loops_in2buf_autovec_write_dimensionality = 3;
wire [8:0] strg_ub_output_addr_gen_starting_addr = 0;
wire [3:0] strg_ub_tb_write_addr_gen_0_starting_addr = 0;
wire [3:0] strg_ub_tb_write_addr_gen_1_starting_addr = 0;
wire [3:0] strg_ub_out_port_sel_addr_starting_addr = 0;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_starting_addr = 253;
wire [3:0] strg_ub_loops_buf2out_autovec_read_dimensionality = 4;
wire [3:0] strg_ub_agg_write_addr_gen_0_starting_addr = 0;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr = 130;
wire [3:0] strg_ub_loops_in2buf_0_dimensionality = 4;
wire [3:0] strg_ub_tb_read_addr_gen_0_starting_addr = 0;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr = 258;
wire [3:0] strg_ub_loops_buf2out_read_0_dimensionality = 4;
wire [3:0] strg_ub_tb_read_addr_gen_1_starting_addr = 0;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_starting_addr = 258;
wire [3:0] strg_ub_loops_buf2out_read_1_dimensionality = 4;
wire [1:0] mode = 0;
wire [0:0] tile_en = 1;
wire [3:0] loops_stencil_valid_dimensionality = 3;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_starting_addr = 260;
wire [15:0] loops_stencil_valid_ranges_0 = 58;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_strides_0 = 1;
wire [15:0] loops_stencil_valid_ranges_1 = 58;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_strides_1 = 5;
wire [15:0] loops_stencil_valid_ranges_2 = 65535;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_strides_2 = 61701;
wire [15:0] strg_ub_loops_in2buf_0_ranges_0 = 2;
wire [3:0] strg_ub_agg_write_addr_gen_0_strides_0 = 1;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_0 = 1;
wire [15:0] strg_ub_loops_in2buf_0_ranges_1 = 14;
wire [3:0] strg_ub_agg_write_addr_gen_0_strides_1 = 13;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_1 = 1;
wire [15:0] strg_ub_loops_in2buf_0_ranges_2 = 60;
wire [3:0] strg_ub_agg_write_addr_gen_0_strides_2 = 13;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_2 = 1;
wire [15:0] strg_ub_loops_in2buf_0_ranges_3 = 65535;
wire [3:0] strg_ub_agg_write_addr_gen_0_strides_3 = 13;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_3 = 61569;
wire [3:0] strg_ub_agg_read_addr_gen_0_strides_0 = 0;
wire [15:0] strg_ub_loops_in2buf_autovec_write_ranges_0 = 14;
wire [8:0] strg_ub_input_addr_gen_strides_0 = 1;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides_0 = 4;
wire [3:0] strg_ub_agg_read_addr_gen_0_strides_1 = 0;
wire [15:0] strg_ub_loops_in2buf_autovec_write_ranges_1 = 60;
wire [8:0] strg_ub_input_addr_gen_strides_1 = 1;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides_1 = 4;
wire [3:0] strg_ub_agg_read_addr_gen_0_strides_2 = 0;
wire [15:0] strg_ub_loops_in2buf_autovec_write_ranges_2 = 65535;
wire [8:0] strg_ub_input_addr_gen_strides_2 = 33;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides_2 = 61572;
wire [15:0] strg_ub_loops_buf2out_autovec_read_ranges_0 = 0;
wire [8:0] strg_ub_output_addr_gen_strides_0 = 16;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides_0 = 2;
wire [3:0] strg_ub_out_port_sel_addr_strides_0 = 1;
wire [3:0] strg_ub_tb_write_addr_gen_0_strides_0 = 0;
wire [3:0] strg_ub_tb_write_addr_gen_1_strides_0 = 0;
wire [15:0] strg_ub_loops_buf2out_autovec_read_ranges_1 = 14;
wire [8:0] strg_ub_output_addr_gen_strides_1 = 497;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides_1 = 2;
wire [3:0] strg_ub_out_port_sel_addr_strides_1 = 15;
wire [3:0] strg_ub_tb_write_addr_gen_0_strides_1 = 1;
wire [3:0] strg_ub_tb_write_addr_gen_1_strides_1 = 1;
wire [15:0] strg_ub_loops_buf2out_autovec_read_ranges_2 = 58;
wire [8:0] strg_ub_output_addr_gen_strides_2 = 497;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides_2 = 2;
wire [3:0] strg_ub_out_port_sel_addr_strides_2 = 15;
wire [3:0] strg_ub_tb_write_addr_gen_0_strides_2 = 1;
wire [3:0] strg_ub_tb_write_addr_gen_1_strides_2 = 1;
wire [15:0] strg_ub_loops_buf2out_autovec_read_ranges_3 = 65535;
wire [8:0] strg_ub_output_addr_gen_strides_3 = 49;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides_3 = 61698;
wire [3:0] strg_ub_out_port_sel_addr_strides_3 = 15;
wire [3:0] strg_ub_tb_write_addr_gen_0_strides_3 = 1;
wire [3:0] strg_ub_tb_write_addr_gen_1_strides_3 = 1;
wire [15:0] strg_ub_loops_buf2out_read_0_ranges_0 = 2;
wire [3:0] strg_ub_tb_read_addr_gen_0_strides_0 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_0 = 1;
wire [15:0] strg_ub_loops_buf2out_read_0_ranges_1 = 14;
wire [3:0] strg_ub_tb_read_addr_gen_0_strides_1 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_1 = 1;
wire [15:0] strg_ub_loops_buf2out_read_0_ranges_2 = 58;
wire [3:0] strg_ub_tb_read_addr_gen_0_strides_2 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_2 = 1;
wire [15:0] strg_ub_loops_buf2out_read_0_ranges_3 = 65535;
wire [3:0] strg_ub_tb_read_addr_gen_0_strides_3 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_3 = 61697;
wire [15:0] strg_ub_loops_buf2out_read_1_ranges_0 = 2;
wire [3:0] strg_ub_tb_read_addr_gen_1_strides_0 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_0 = 1;
wire [15:0] strg_ub_loops_buf2out_read_1_ranges_1 = 14;
wire [3:0] strg_ub_tb_read_addr_gen_1_strides_1 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_1 = 1;
wire [15:0] strg_ub_loops_buf2out_read_1_ranges_2 = 58;
wire [3:0] strg_ub_tb_read_addr_gen_1_strides_2 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_2 = 1;
wire [15:0] strg_ub_loops_buf2out_read_1_ranges_3 = 65535;
wire [3:0] strg_ub_tb_read_addr_gen_1_strides_3 = 1;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_3 = 61697;
wire [15:0] loops_stencil_valid_ranges_3 = 0;
wire [15:0] loops_stencil_valid_ranges_4 = 0;
wire [15:0] loops_stencil_valid_ranges_5 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides_3 = 0;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_port_sel_addr_strides_0 = 0;
wire [15:0] strg_ub_port_sel_addr_strides_1 = 0;
wire [15:0] strg_ub_port_sel_addr_strides_2 = 0;
wire [15:0] strg_ub_port_sel_addr_strides_3 = 0;
wire [15:0] strg_ub_port_sel_addr_strides_4 = 0;
wire [15:0] strg_ub_port_sel_addr_strides_5 = 0;
wire [15:0] strg_ub_loops_buf2out_read_0_ranges_4 = 0;
wire [15:0] strg_ub_loops_buf2out_read_0_ranges_5 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_starting_addr = 0;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_strides_3 = 0;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_strides_4 = 0;
wire [15:0] stencil_valid_sched_gen_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_strides_0 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_strides_1 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_strides_2 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_strides_3 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_strides_4 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_strides_5 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_0 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_1 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_2 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_3 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_loops_in2buf_1_dimensionality = 0;
wire [15:0] strg_ub_tb_write_addr_gen_1_strides_4 = 0;
wire [15:0] strg_ub_tb_write_addr_gen_1_strides_5 = 0;
wire [15:0] strg_ub_agg_write_sched_gen_1_sched_addr_gen_starting_addr = 0;
wire [15:0] strg_ub_agg_write_addr_gen_1_starting_addr = 0;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_loops_buf2out_read_1_ranges_4 = 0;
wire [15:0] strg_ub_loops_buf2out_read_1_ranges_5 = 0;
wire [15:0] strg_ub_loops_in2buf_1_ranges_0 = 0;
wire [15:0] strg_ub_loops_in2buf_1_ranges_1 = 0;
wire [15:0] strg_ub_loops_in2buf_1_ranges_2 = 0;
wire [15:0] strg_ub_loops_in2buf_1_ranges_3 = 0;
wire [15:0] strg_ub_loops_in2buf_1_ranges_4 = 0;
wire [15:0] strg_ub_loops_in2buf_1_ranges_5 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_0_strides_4 = 0;
wire [15:0] strg_ub_agg_write_addr_gen_0_strides_5 = 0;
wire [15:0] strg_ub_output_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_output_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_port_sel_addr_starting_addr = 0;
wire [15:0] strg_ub_tb_write_addr_gen_0_strides_4 = 0;
wire [15:0] strg_ub_tb_write_addr_gen_0_strides_5 = 0;
wire [15:0] strg_ub_loops_in2buf_0_ranges_4 = 0;
wire [15:0] strg_ub_loops_in2buf_0_ranges_5 = 0;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_0_strides_3 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_0_strides_4 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_0_strides_5 = 0;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_strides_0 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_strides_1 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_strides_2 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_strides_3 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_strides_4 = 0;
wire [15:0] strg_ub_agg_read_addr_gen_1_strides_5 = 0;
wire [15:0] strg_ub_input_addr_gen_strides_3 = 0;
wire [15:0] strg_ub_input_addr_gen_strides_4 = 0;
wire [15:0] strg_ub_input_addr_gen_strides_5 = 0;
wire [15:0] strg_ub_out_port_sel_addr_strides_4 = 0;
wire [15:0] strg_ub_out_port_sel_addr_strides_5 = 0;
wire [15:0] strg_ub_tb_read_addr_gen_1_strides_4 = 0;
wire [15:0] strg_ub_tb_read_addr_gen_1_strides_5 = 0;
wire [15:0] strg_ub_tb_read_addr_gen_0_strides_4 = 0;
wire [15:0] strg_ub_tb_read_addr_gen_0_strides_5 = 0;
wire [15:0] strg_ub_loops_buf2out_autovec_read_ranges_4 = 0;
wire [15:0] strg_ub_loops_buf2out_autovec_read_ranges_5 = 0;
wire [15:0] strg_ub_loops_in2buf_autovec_write_ranges_3 = 0;
wire [15:0] strg_ub_loops_in2buf_autovec_write_ranges_4 = 0;
wire [15:0] strg_ub_loops_in2buf_autovec_write_ranges_5 = 0;
LakeTop_W LakeTop_W (
. addr_in_0( addr_in_0),
. addr_in_1( addr_in_1),
. chain_chain_en( chain_chain_en),
. chain_data_in_0( chain_data_in_0),
. chain_data_in_1( chain_data_in_1),
. clk( clk),
. clk_en( clk_en),
. config_addr_in( config_addr_in),
. config_data_in( config_data_in),
. config_en( config_en),
. config_read( config_read),
. config_write( config_write),
. data_in_0( data_in_0),
. data_in_1( data_in_1),
. fifo_ctrl_fifo_depth( fifo_ctrl_fifo_depth),
. flush( flush),
. ren_in( ren_in),
. rst_n( rst_n),
. wen_in( wen_in),
. config_data_out_0( config_data_out_0),
. config_data_out_1( config_data_out_1),
. data_out_0( data_out_0),
. data_out_1( data_out_1),
. empty( empty),
. full( full),
. sram_ready_out( sram_ready_out),
. stencil_valid( stencil_valid),
. valid_out
( valid_out
),
.strg_ub_agg_read_addr_gen_0_starting_addr(strg_ub_agg_read_addr_gen_0_starting_addr),
.strg_ub_input_addr_gen_starting_addr(strg_ub_input_addr_gen_starting_addr),
.strg_ub_input_sched_gen_sched_addr_gen_starting_addr(strg_ub_input_sched_gen_sched_addr_gen_starting_addr),
.strg_ub_loops_in2buf_autovec_write_dimensionality(strg_ub_loops_in2buf_autovec_write_dimensionality),
.strg_ub_output_addr_gen_starting_addr(strg_ub_output_addr_gen_starting_addr),
.strg_ub_tb_write_addr_gen_0_starting_addr(strg_ub_tb_write_addr_gen_0_starting_addr),
.strg_ub_tb_write_addr_gen_1_starting_addr(strg_ub_tb_write_addr_gen_1_starting_addr),
.strg_ub_out_port_sel_addr_starting_addr(strg_ub_out_port_sel_addr_starting_addr),
.strg_ub_output_sched_gen_sched_addr_gen_starting_addr(strg_ub_output_sched_gen_sched_addr_gen_starting_addr),
.strg_ub_loops_buf2out_autovec_read_dimensionality(strg_ub_loops_buf2out_autovec_read_dimensionality),
.strg_ub_agg_write_addr_gen_0_starting_addr(strg_ub_agg_write_addr_gen_0_starting_addr),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr(strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr),
.strg_ub_loops_in2buf_0_dimensionality(strg_ub_loops_in2buf_0_dimensionality),
.strg_ub_tb_read_addr_gen_0_starting_addr(strg_ub_tb_read_addr_gen_0_starting_addr),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr(strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr),
.strg_ub_loops_buf2out_read_0_dimensionality(strg_ub_loops_buf2out_read_0_dimensionality),
.strg_ub_tb_read_addr_gen_1_starting_addr(strg_ub_tb_read_addr_gen_1_starting_addr),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_starting_addr(strg_ub_tb_read_sched_gen_1_sched_addr_gen_starting_addr),
.strg_ub_loops_buf2out_read_1_dimensionality(strg_ub_loops_buf2out_read_1_dimensionality),
.mode(mode),
.tile_en(tile_en),
.loops_stencil_valid_dimensionality(loops_stencil_valid_dimensionality),
.stencil_valid_sched_gen_sched_addr_gen_starting_addr(stencil_valid_sched_gen_sched_addr_gen_starting_addr),
.loops_stencil_valid_ranges_0(loops_stencil_valid_ranges_0),
.stencil_valid_sched_gen_sched_addr_gen_strides_0(stencil_valid_sched_gen_sched_addr_gen_strides_0),
.loops_stencil_valid_ranges_1(loops_stencil_valid_ranges_1),
.stencil_valid_sched_gen_sched_addr_gen_strides_1(stencil_valid_sched_gen_sched_addr_gen_strides_1),
.loops_stencil_valid_ranges_2(loops_stencil_valid_ranges_2),
.stencil_valid_sched_gen_sched_addr_gen_strides_2(stencil_valid_sched_gen_sched_addr_gen_strides_2),
.strg_ub_loops_in2buf_0_ranges_0(strg_ub_loops_in2buf_0_ranges_0),
.strg_ub_agg_write_addr_gen_0_strides_0(strg_ub_agg_write_addr_gen_0_strides_0),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_0(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_0),
.strg_ub_loops_in2buf_0_ranges_1(strg_ub_loops_in2buf_0_ranges_1),
.strg_ub_agg_write_addr_gen_0_strides_1(strg_ub_agg_write_addr_gen_0_strides_1),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_1(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_1),
.strg_ub_loops_in2buf_0_ranges_2(strg_ub_loops_in2buf_0_ranges_2),
.strg_ub_agg_write_addr_gen_0_strides_2(strg_ub_agg_write_addr_gen_0_strides_2),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_2(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_2),
.strg_ub_loops_in2buf_0_ranges_3(strg_ub_loops_in2buf_0_ranges_3),
.strg_ub_agg_write_addr_gen_0_strides_3(strg_ub_agg_write_addr_gen_0_strides_3),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_3(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_3),
.strg_ub_agg_read_addr_gen_0_strides_0(strg_ub_agg_read_addr_gen_0_strides_0),
.strg_ub_loops_in2buf_autovec_write_ranges_0(strg_ub_loops_in2buf_autovec_write_ranges_0),
.strg_ub_input_addr_gen_strides_0(strg_ub_input_addr_gen_strides_0),
.strg_ub_input_sched_gen_sched_addr_gen_strides_0(strg_ub_input_sched_gen_sched_addr_gen_strides_0),
.strg_ub_agg_read_addr_gen_0_strides_1(strg_ub_agg_read_addr_gen_0_strides_1),
.strg_ub_loops_in2buf_autovec_write_ranges_1(strg_ub_loops_in2buf_autovec_write_ranges_1),
.strg_ub_input_addr_gen_strides_1(strg_ub_input_addr_gen_strides_1),
.strg_ub_input_sched_gen_sched_addr_gen_strides_1(strg_ub_input_sched_gen_sched_addr_gen_strides_1),
.strg_ub_agg_read_addr_gen_0_strides_2(strg_ub_agg_read_addr_gen_0_strides_2),
.strg_ub_loops_in2buf_autovec_write_ranges_2(strg_ub_loops_in2buf_autovec_write_ranges_2),
.strg_ub_input_addr_gen_strides_2(strg_ub_input_addr_gen_strides_2),
.strg_ub_input_sched_gen_sched_addr_gen_strides_2(strg_ub_input_sched_gen_sched_addr_gen_strides_2),
.strg_ub_loops_buf2out_autovec_read_ranges_0(strg_ub_loops_buf2out_autovec_read_ranges_0),
.strg_ub_output_addr_gen_strides_0(strg_ub_output_addr_gen_strides_0),
.strg_ub_output_sched_gen_sched_addr_gen_strides_0(strg_ub_output_sched_gen_sched_addr_gen_strides_0),
.strg_ub_out_port_sel_addr_strides_0(strg_ub_out_port_sel_addr_strides_0),
.strg_ub_tb_write_addr_gen_0_strides_0(strg_ub_tb_write_addr_gen_0_strides_0),
.strg_ub_tb_write_addr_gen_1_strides_0(strg_ub_tb_write_addr_gen_1_strides_0),
.strg_ub_loops_buf2out_autovec_read_ranges_1(strg_ub_loops_buf2out_autovec_read_ranges_1),
.strg_ub_output_addr_gen_strides_1(strg_ub_output_addr_gen_strides_1),
.strg_ub_output_sched_gen_sched_addr_gen_strides_1(strg_ub_output_sched_gen_sched_addr_gen_strides_1),
.strg_ub_out_port_sel_addr_strides_1(strg_ub_out_port_sel_addr_strides_1),
.strg_ub_tb_write_addr_gen_0_strides_1(strg_ub_tb_write_addr_gen_0_strides_1),
.strg_ub_tb_write_addr_gen_1_strides_1(strg_ub_tb_write_addr_gen_1_strides_1),
.strg_ub_loops_buf2out_autovec_read_ranges_2(strg_ub_loops_buf2out_autovec_read_ranges_2),
.strg_ub_output_addr_gen_strides_2(strg_ub_output_addr_gen_strides_2),
.strg_ub_output_sched_gen_sched_addr_gen_strides_2(strg_ub_output_sched_gen_sched_addr_gen_strides_2),
.strg_ub_out_port_sel_addr_strides_2(strg_ub_out_port_sel_addr_strides_2),
.strg_ub_tb_write_addr_gen_0_strides_2(strg_ub_tb_write_addr_gen_0_strides_2),
.strg_ub_tb_write_addr_gen_1_strides_2(strg_ub_tb_write_addr_gen_1_strides_2),
.strg_ub_loops_buf2out_autovec_read_ranges_3(strg_ub_loops_buf2out_autovec_read_ranges_3),
.strg_ub_output_addr_gen_strides_3(strg_ub_output_addr_gen_strides_3),
.strg_ub_output_sched_gen_sched_addr_gen_strides_3(strg_ub_output_sched_gen_sched_addr_gen_strides_3),
.strg_ub_out_port_sel_addr_strides_3(strg_ub_out_port_sel_addr_strides_3),
.strg_ub_tb_write_addr_gen_0_strides_3(strg_ub_tb_write_addr_gen_0_strides_3),
.strg_ub_tb_write_addr_gen_1_strides_3(strg_ub_tb_write_addr_gen_1_strides_3),
.strg_ub_loops_buf2out_read_0_ranges_0(strg_ub_loops_buf2out_read_0_ranges_0),
.strg_ub_tb_read_addr_gen_0_strides_0(strg_ub_tb_read_addr_gen_0_strides_0),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_0(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_0),
.strg_ub_loops_buf2out_read_0_ranges_1(strg_ub_loops_buf2out_read_0_ranges_1),
.strg_ub_tb_read_addr_gen_0_strides_1(strg_ub_tb_read_addr_gen_0_strides_1),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_1(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_1),
.strg_ub_loops_buf2out_read_0_ranges_2(strg_ub_loops_buf2out_read_0_ranges_2),
.strg_ub_tb_read_addr_gen_0_strides_2(strg_ub_tb_read_addr_gen_0_strides_2),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_2(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_2),
.strg_ub_loops_buf2out_read_0_ranges_3(strg_ub_loops_buf2out_read_0_ranges_3),
.strg_ub_tb_read_addr_gen_0_strides_3(strg_ub_tb_read_addr_gen_0_strides_3),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_3(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_3),
.strg_ub_loops_buf2out_read_1_ranges_0(strg_ub_loops_buf2out_read_1_ranges_0),
.strg_ub_tb_read_addr_gen_1_strides_0(strg_ub_tb_read_addr_gen_1_strides_0),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_0(strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_0),
.strg_ub_loops_buf2out_read_1_ranges_1(strg_ub_loops_buf2out_read_1_ranges_1),
.strg_ub_tb_read_addr_gen_1_strides_1(strg_ub_tb_read_addr_gen_1_strides_1),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_1(strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_1),
.strg_ub_loops_buf2out_read_1_ranges_2(strg_ub_loops_buf2out_read_1_ranges_2),
.strg_ub_tb_read_addr_gen_1_strides_2(strg_ub_tb_read_addr_gen_1_strides_2),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_2(strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_2),
.strg_ub_loops_buf2out_read_1_ranges_3(strg_ub_loops_buf2out_read_1_ranges_3),
.strg_ub_tb_read_addr_gen_1_strides_3(strg_ub_tb_read_addr_gen_1_strides_3),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_3(strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_3),
.loops_stencil_valid_ranges_3(loops_stencil_valid_ranges_3),
.loops_stencil_valid_ranges_4(loops_stencil_valid_ranges_4),
.loops_stencil_valid_ranges_5(loops_stencil_valid_ranges_5),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_4(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_4),
.strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_5(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides_5),
.strg_ub_input_sched_gen_sched_addr_gen_strides_3(strg_ub_input_sched_gen_sched_addr_gen_strides_3),
.strg_ub_input_sched_gen_sched_addr_gen_strides_4(strg_ub_input_sched_gen_sched_addr_gen_strides_4),
.strg_ub_input_sched_gen_sched_addr_gen_strides_5(strg_ub_input_sched_gen_sched_addr_gen_strides_5),
.strg_ub_port_sel_addr_strides_0(strg_ub_port_sel_addr_strides_0),
.strg_ub_port_sel_addr_strides_1(strg_ub_port_sel_addr_strides_1),
.strg_ub_port_sel_addr_strides_2(strg_ub_port_sel_addr_strides_2),
.strg_ub_port_sel_addr_strides_3(strg_ub_port_sel_addr_strides_3),
.strg_ub_port_sel_addr_strides_4(strg_ub_port_sel_addr_strides_4),
.strg_ub_port_sel_addr_strides_5(strg_ub_port_sel_addr_strides_5),
.strg_ub_loops_buf2out_read_0_ranges_4(strg_ub_loops_buf2out_read_0_ranges_4),
.strg_ub_loops_buf2out_read_0_ranges_5(strg_ub_loops_buf2out_read_0_ranges_5),
.strg_ub_agg_read_addr_gen_1_starting_addr(strg_ub_agg_read_addr_gen_1_starting_addr),
.stencil_valid_sched_gen_sched_addr_gen_strides_3(stencil_valid_sched_gen_sched_addr_gen_strides_3),
.stencil_valid_sched_gen_sched_addr_gen_strides_4(stencil_valid_sched_gen_sched_addr_gen_strides_4),
.stencil_valid_sched_gen_sched_addr_gen_strides_5(stencil_valid_sched_gen_sched_addr_gen_strides_5),
.strg_ub_agg_write_addr_gen_1_strides_0(strg_ub_agg_write_addr_gen_1_strides_0),
.strg_ub_agg_write_addr_gen_1_strides_1(strg_ub_agg_write_addr_gen_1_strides_1),
.strg_ub_agg_write_addr_gen_1_strides_2(strg_ub_agg_write_addr_gen_1_strides_2),
.strg_ub_agg_write_addr_gen_1_strides_3(strg_ub_agg_write_addr_gen_1_strides_3),
.strg_ub_agg_write_addr_gen_1_strides_4(strg_ub_agg_write_addr_gen_1_strides_4),
.strg_ub_agg_write_addr_gen_1_strides_5(strg_ub_agg_write_addr_gen_1_strides_5),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_0(strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_0),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_1(strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_1),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_2(strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_2),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_3(strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_3),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_4(strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_4),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_5(strg_ub_agg_write_sched_gen_1_sched_addr_gen_strides_5),
.strg_ub_loops_in2buf_1_dimensionality(strg_ub_loops_in2buf_1_dimensionality),
.strg_ub_tb_write_addr_gen_1_strides_4(strg_ub_tb_write_addr_gen_1_strides_4),
.strg_ub_tb_write_addr_gen_1_strides_5(strg_ub_tb_write_addr_gen_1_strides_5),
.strg_ub_agg_write_sched_gen_1_sched_addr_gen_starting_addr(strg_ub_agg_write_sched_gen_1_sched_addr_gen_starting_addr),
.strg_ub_agg_write_addr_gen_1_starting_addr(strg_ub_agg_write_addr_gen_1_starting_addr),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_4(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_4),
.strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_5(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides_5),
.strg_ub_loops_buf2out_read_1_ranges_4(strg_ub_loops_buf2out_read_1_ranges_4),
.strg_ub_loops_buf2out_read_1_ranges_5(strg_ub_loops_buf2out_read_1_ranges_5),
.strg_ub_loops_in2buf_1_ranges_0(strg_ub_loops_in2buf_1_ranges_0),
.strg_ub_loops_in2buf_1_ranges_1(strg_ub_loops_in2buf_1_ranges_1),
.strg_ub_loops_in2buf_1_ranges_2(strg_ub_loops_in2buf_1_ranges_2),
.strg_ub_loops_in2buf_1_ranges_3(strg_ub_loops_in2buf_1_ranges_3),
.strg_ub_loops_in2buf_1_ranges_4(strg_ub_loops_in2buf_1_ranges_4),
.strg_ub_loops_in2buf_1_ranges_5(strg_ub_loops_in2buf_1_ranges_5),
.strg_ub_agg_write_addr_gen_0_strides_4(strg_ub_agg_write_addr_gen_0_strides_4),
.strg_ub_agg_write_addr_gen_0_strides_5(strg_ub_agg_write_addr_gen_0_strides_5),
.strg_ub_output_addr_gen_strides_4(strg_ub_output_addr_gen_strides_4),
.strg_ub_output_addr_gen_strides_5(strg_ub_output_addr_gen_strides_5),
.strg_ub_port_sel_addr_starting_addr(strg_ub_port_sel_addr_starting_addr),
.strg_ub_tb_write_addr_gen_0_strides_4(strg_ub_tb_write_addr_gen_0_strides_4),
.strg_ub_tb_write_addr_gen_0_strides_5(strg_ub_tb_write_addr_gen_0_strides_5),
.strg_ub_loops_in2buf_0_ranges_4(strg_ub_loops_in2buf_0_ranges_4),
.strg_ub_loops_in2buf_0_ranges_5(strg_ub_loops_in2buf_0_ranges_5),
.strg_ub_output_sched_gen_sched_addr_gen_strides_4(strg_ub_output_sched_gen_sched_addr_gen_strides_4),
.strg_ub_output_sched_gen_sched_addr_gen_strides_5(strg_ub_output_sched_gen_sched_addr_gen_strides_5),
.strg_ub_agg_read_addr_gen_0_strides_3(strg_ub_agg_read_addr_gen_0_strides_3),
.strg_ub_agg_read_addr_gen_0_strides_4(strg_ub_agg_read_addr_gen_0_strides_4),
.strg_ub_agg_read_addr_gen_0_strides_5(strg_ub_agg_read_addr_gen_0_strides_5),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_4(strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_4),
.strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_5(strg_ub_tb_read_sched_gen_1_sched_addr_gen_strides_5),
.strg_ub_agg_read_addr_gen_1_strides_0(strg_ub_agg_read_addr_gen_1_strides_0),
.strg_ub_agg_read_addr_gen_1_strides_1(strg_ub_agg_read_addr_gen_1_strides_1),
.strg_ub_agg_read_addr_gen_1_strides_2(strg_ub_agg_read_addr_gen_1_strides_2),
.strg_ub_agg_read_addr_gen_1_strides_3(strg_ub_agg_read_addr_gen_1_strides_3),
.strg_ub_agg_read_addr_gen_1_strides_4(strg_ub_agg_read_addr_gen_1_strides_4),
.strg_ub_agg_read_addr_gen_1_strides_5(strg_ub_agg_read_addr_gen_1_strides_5),
.strg_ub_input_addr_gen_strides_3(strg_ub_input_addr_gen_strides_3),
.strg_ub_input_addr_gen_strides_4(strg_ub_input_addr_gen_strides_4),
.strg_ub_input_addr_gen_strides_5(strg_ub_input_addr_gen_strides_5),
.strg_ub_out_port_sel_addr_strides_4(strg_ub_out_port_sel_addr_strides_4),
.strg_ub_out_port_sel_addr_strides_5(strg_ub_out_port_sel_addr_strides_5),
.strg_ub_tb_read_addr_gen_1_strides_4(strg_ub_tb_read_addr_gen_1_strides_4),
.strg_ub_tb_read_addr_gen_1_strides_5(strg_ub_tb_read_addr_gen_1_strides_5),
.strg_ub_tb_read_addr_gen_0_strides_4(strg_ub_tb_read_addr_gen_0_strides_4),
.strg_ub_tb_read_addr_gen_0_strides_5(strg_ub_tb_read_addr_gen_0_strides_5),
.strg_ub_loops_buf2out_autovec_read_ranges_4(strg_ub_loops_buf2out_autovec_read_ranges_4),
.strg_ub_loops_buf2out_autovec_read_ranges_5(strg_ub_loops_buf2out_autovec_read_ranges_5),
.strg_ub_loops_in2buf_autovec_write_ranges_3(strg_ub_loops_in2buf_autovec_write_ranges_3),
.strg_ub_loops_in2buf_autovec_write_ranges_4(strg_ub_loops_in2buf_autovec_write_ranges_4),
.strg_ub_loops_in2buf_autovec_write_ranges_5(strg_ub_loops_in2buf_autovec_write_ranges_5)
);
endmodule


  // min: { [132] }
  // max: { [4097] }

  // min: { [133] }
  // max: { [4098] }

  // min: { [2] }
  // max: { [4097] }

  // min: { [134] }
  // max: { [4099] }

  // sched min: { [2] }
  // sched max: { [4099] }
module cgralib_Buffet__IDconv_stencil_0__data_width16__idx_width16 (input clk,
input nreset_i,
input [15:0] push_data,
input push_data_valid,
output push_data_ready,
input [15:0] update_data,
input update_data_valid,
output reg update_data_ready,
output update_idx_ready,
input update_idx_valid,
input [15:0] update_idx,
output [15:0] read_data,
output read_data_valid,
input read_data_ready,
input [15:0] read_idx,
input read_idx_valid,
output read_idx_ready,
input read_will_update); 
  reg credit = 0;
  reg is_shrink = 0;
  assign update_data_ready = 1; 
  buffet buffet_core (
    .nreset_i(nreset_i), 
    .clk(clk), 
    .read_data(read_data), 
    .read_data_valid(read_data_valid), 
    .read_data_ready(read_data_ready), 
    .push_data(push_data), 
    .read_idx(read_idx), 
    .read_idx_valid(read_idx_valid), 
    .read_idx_ready(read_idx_ready), 
    .update_data(update_data), 
    .update_data_valid(update_data_valid), 
    .update_idx(update_idx), 
    .update_idx_valid(update_idx_valid), 
    .update_ready(update_idx_ready), 
    .push_data_valid(push_data_valid), 
    .push_data_ready(push_data_ready), 
    .read_will_update(read_will_update), 
    .credit_ready(credit), 
    .is_shrink(is_shrink) 
  );
endmodule

module cgralib_Buffet__IDconv_stencil_clkwrk_dsa0_0__data_width16__idx_width16 (input clk,
input nreset_i,
input [15:0] push_data,
input push_data_valid,
output push_data_ready,
input [15:0] update_data,
input update_data_valid,
output reg update_data_ready,
output update_idx_ready,
input update_idx_valid,
input [15:0] update_idx,
output [15:0] read_data,
output read_data_valid,
input read_data_ready,
input [15:0] read_idx,
input read_idx_valid,
output read_idx_ready,
input read_will_update); 
  reg credit = 0;
  reg is_shrink = 0;
  assign update_data_ready = 1; 
  buffet buffet_core (
    .nreset_i(nreset_i), 
    .clk(clk), 
    .read_data(read_data), 
    .read_data_valid(read_data_valid), 
    .read_data_ready(read_data_ready), 
    .push_data(push_data), 
    .read_idx(read_idx), 
    .read_idx_valid(read_idx_valid), 
    .read_idx_ready(read_idx_ready), 
    .update_data(update_data), 
    .update_data_valid(update_data_valid), 
    .update_idx(update_idx), 
    .update_idx_valid(update_idx_valid), 
    .update_ready(update_idx_ready), 
    .push_data_valid(push_data_valid), 
    .push_data_ready(push_data_ready), 
    .read_will_update(read_will_update), 
    .credit_ready(credit), 
    .is_shrink(is_shrink) 
  );
endmodule

module cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U227__data_width16__idx_width16 (input clk,
input nreset_i,
input [15:0] push_data,
input push_data_valid,
output push_data_ready,
input [15:0] update_data,
input update_data_valid,
output reg update_data_ready,
output update_idx_ready,
input update_idx_valid,
input [15:0] update_idx,
output [15:0] read_data,
output read_data_valid,
input read_data_ready,
input [15:0] read_idx,
input read_idx_valid,
output read_idx_ready,
input read_will_update); 
  reg credit = 0;
  reg is_shrink = 0;
  assign update_data_ready = 1; 
  buffet buffet_core (
    .nreset_i(nreset_i), 
    .clk(clk), 
    .read_data(read_data), 
    .read_data_valid(read_data_valid), 
    .read_data_ready(read_data_ready), 
    .push_data(push_data), 
    .read_idx(read_idx), 
    .read_idx_valid(read_idx_valid), 
    .read_idx_ready(read_idx_ready), 
    .update_data(update_data), 
    .update_data_valid(update_data_valid), 
    .update_idx(update_idx), 
    .update_idx_valid(update_idx_valid), 
    .update_ready(update_idx_ready), 
    .push_data_valid(push_data_valid), 
    .push_data_ready(push_data_ready), 
    .read_will_update(read_will_update), 
    .credit_ready(credit), 
    .is_shrink(is_shrink) 
  );
endmodule

module cgralib_SIPO_reg__ID_U261__data_width16__depth2 (input clk,
input rst_n,
input valid_in,
output ready_in,
output reg valid_out,
input ready_out,
input [15:0] in_data,
output [15:0] out_data  [2: 0] ); 
  logic [15:0] temp [2:0];
  reg [15:0] counter;

  reg data_pushed;

  wire full;

  integer i;

  always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
      counter <= 16'd0;
      data_pushed <= 1'd0;
    end else if(valid_in && ready_in) begin
      temp[0] <= in_data;
      data_pushed <= 1'd1;
      for (i = 1; i < 3; i ++)
        temp[i] <=  temp[i - 1];
      if (counter == 16'd64)
        counter <= 16'd1;
      else
        counter <= counter + 1;
    end
    else begin 
      if (ready_out & valid_out) begin
        data_pushed <= 1'd0; 
      end if (counter == 16'd64)
        counter <= 16'd0;
      end
  end

  assign out_data = temp;
  assign ready_in = full ? ready_out : 1'd1;
  assign full = counter > 2;
  assign valid_out= full && data_pushed;
  endmodule
module cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U264__data_width16__idx_width16 (input clk,
input nreset_i,
input [15:0] push_data,
input push_data_valid,
output push_data_ready,
input [15:0] update_data,
input update_data_valid,
output reg update_data_ready,
output update_idx_ready,
input update_idx_valid,
input [15:0] update_idx,
output [15:0] read_data,
output read_data_valid,
input read_data_ready,
input [15:0] read_idx,
input read_idx_valid,
output read_idx_ready,
input read_will_update); 
  reg credit = 0;
  reg is_shrink = 0;
  assign update_data_ready = 1; 
  buffet buffet_core (
    .nreset_i(nreset_i), 
    .clk(clk), 
    .read_data(read_data), 
    .read_data_valid(read_data_valid), 
    .read_data_ready(read_data_ready), 
    .push_data(push_data), 
    .read_idx(read_idx), 
    .read_idx_valid(read_idx_valid), 
    .read_idx_ready(read_idx_ready), 
    .update_data(update_data), 
    .update_data_valid(update_data_valid), 
    .update_idx(update_idx), 
    .update_idx_valid(update_idx_valid), 
    .update_ready(update_idx_ready), 
    .push_data_valid(push_data_valid), 
    .push_data_ready(push_data_ready), 
    .read_will_update(read_will_update), 
    .credit_ready(credit), 
    .is_shrink(is_shrink) 
  );
endmodule

module cgralib_SIPO_reg__ID_U298__data_width16__depth2 (input clk,
input rst_n,
input valid_in,
output ready_in,
output reg valid_out,
input ready_out,
input [15:0] in_data,
output [15:0] out_data  [2: 0] ); 
  logic [15:0] temp [2:0];
  reg [15:0] counter;

  reg data_pushed;

  wire full;

  integer i;

  always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
      counter <= 16'd0;
      data_pushed <= 1'd0;
    end else if(valid_in && ready_in) begin
      temp[0] <= in_data;
      data_pushed <= 1'd1;
      for (i = 1; i < 3; i ++)
        temp[i] <=  temp[i - 1];
      if (counter == 16'd64)
        counter <= 16'd1;
      else
        counter <= counter + 1;
    end
    else begin 
      if (ready_out & valid_out) begin
        data_pushed <= 1'd0; 
      end if (counter == 16'd64)
        counter <= 16'd0;
      end
  end

  assign out_data = temp;
  assign ready_in = full ? ready_out : 1'd1;
  assign full = counter > 2;
  assign valid_out= full && data_pushed;
  endmodule
module cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U301__data_width16__idx_width16 (input clk,
input nreset_i,
input [15:0] push_data,
input push_data_valid,
output push_data_ready,
input [15:0] update_data,
input update_data_valid,
output reg update_data_ready,
output update_idx_ready,
input update_idx_valid,
input [15:0] update_idx,
output [15:0] read_data,
output read_data_valid,
input read_data_ready,
input [15:0] read_idx,
input read_idx_valid,
output read_idx_ready,
input read_will_update); 
  reg credit = 0;
  reg is_shrink = 0;
  assign update_data_ready = 1; 
  buffet buffet_core (
    .nreset_i(nreset_i), 
    .clk(clk), 
    .read_data(read_data), 
    .read_data_valid(read_data_valid), 
    .read_data_ready(read_data_ready), 
    .push_data(push_data), 
    .read_idx(read_idx), 
    .read_idx_valid(read_idx_valid), 
    .read_idx_ready(read_idx_ready), 
    .update_data(update_data), 
    .update_data_valid(update_data_valid), 
    .update_idx(update_idx), 
    .update_idx_valid(update_idx_valid), 
    .update_ready(update_idx_ready), 
    .push_data_valid(push_data_valid), 
    .push_data_ready(push_data_ready), 
    .read_will_update(read_will_update), 
    .credit_ready(credit), 
    .is_shrink(is_shrink) 
  );
endmodule

module cgralib_SIPO_reg__ID_U335__data_width16__depth2 (input clk,
input rst_n,
input valid_in,
output ready_in,
output reg valid_out,
input ready_out,
input [15:0] in_data,
output [15:0] out_data  [2: 0] ); 
  logic [15:0] temp [2:0];
  reg [15:0] counter;

  reg data_pushed;

  wire full;

  integer i;

  always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
      counter <= 16'd0;
      data_pushed <= 1'd0;
    end else if(valid_in && ready_in) begin
      temp[0] <= in_data;
      data_pushed <= 1'd1;
      for (i = 1; i < 3; i ++)
        temp[i] <=  temp[i - 1];
      if (counter == 16'd64)
        counter <= 16'd1;
      else
        counter <= counter + 1;
    end
    else begin 
      if (ready_out & valid_out) begin
        data_pushed <= 1'd0; 
      end if (counter == 16'd64)
        counter <= 16'd0;
      end
  end

  assign out_data = temp;
  assign ready_in = full ? ready_out : 1'd1;
  assign full = counter > 2;
  assign valid_out= full && data_pushed;
  endmodule

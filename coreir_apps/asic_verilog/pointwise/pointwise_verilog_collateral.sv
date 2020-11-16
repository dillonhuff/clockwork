// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 64hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module affine_controller__U0(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=63 && d[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          d[2]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_mult_stencil[root, mult_s0_y, mult_s0_x] -> [(3 + 64mult_s0_y + mult_s0_x)] }
module affine_controller__U7(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=63 && d[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==2) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          d[2]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(8 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U44(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=63 && d[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==7) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          d[2]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule

module hw_input_global_wrapper_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 64hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<=63 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_mult_stencil[root, mult_s0_y, mult_s0_x] -> [(3 + 64mult_s0_y + mult_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_mult_stencil_read_ctrl_vars[2:0], output op_hcompute_mult_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_mult_stencil_read_ren =(on && on2 && op_hcompute_mult_stencil_read_ctrl_vars[0]==0 && op_hcompute_mult_stencil_read_ctrl_vars[1]<=63 && op_hcompute_mult_stencil_read_ctrl_vars[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_mult_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_mult_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_mult_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==2) begin
        on <=1;
        on2 <= 1;
        op_hcompute_mult_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_mult_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_mult_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_mult_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_mult_stencil_read_ctrl_vars[1] <= op_hcompute_mult_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_mult_stencil_read_ctrl_vars[2] <= op_hcompute_mult_stencil_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module hw_input_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] ,
	input op_hcompute_mult_stencil_read_ren,
	input [15:0] op_hcompute_mult_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_mult_stencil_read [0:0] );

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_sr hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_mult_stencil_read[0]));


  // Storage capacity pre-banking: 4096
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_mult_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_mult_stencil_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_fsm hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_mult_stencil_read_ctrl_vars( op_hcompute_mult_stencil_read_ctrl_vars_fsm_out), .op_hcompute_mult_stencil_read_ren(op_hcompute_mult_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [4096];
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_0 = (((1*op_hcompute_mult_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_1 = (((1*op_hcompute_mult_stencil_read_ctrl_vars_fsm_out[2])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*64);
  logic [15:0] delay_wire_0;
  always @(posedge clk) begin
    delay_wire_0 <= addr0;  end
  logic [15:0] delay_wire_1;
  always @(posedge clk) begin
    delay_wire_1 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out;  end
  logic [15:0] delay_wire_2;
  always @(posedge clk) begin
    delay_wire_2 <= op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_3;
  always @(posedge clk) begin
    delay_wire_3 <= op_hcompute_hw_input_global_wrapper_stencil_write[0];  end
  always @(posedge clk) begin
    if (delay_wire_2) begin
      case( delay_wire_1)
        0:bank_0[delay_wire_0] <= delay_wire_3;
      endcase
    end
  end
  always @(posedge clk) begin
  end

endmodule


module mult_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_to_mult_stencil_op_hcompute_mult_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

// { op_hcompute_mult_stencil[root, mult_s0_y, mult_s0_x] -> [(6 + 64mult_s0_y + mult_s0_x)] }
module mult_stencil_op_hcompute_mult_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_mult_stencil_write_ctrl_vars[2:0], output op_hcompute_mult_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_mult_stencil_write_wen =(on && on2 && op_hcompute_mult_stencil_write_ctrl_vars[0]==0 && op_hcompute_mult_stencil_write_ctrl_vars[1]<=63 && op_hcompute_mult_stencil_write_ctrl_vars[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_mult_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_mult_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_mult_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==5) begin
        on <=1;
        on2 <= 1;
        op_hcompute_mult_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_mult_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_mult_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_mult_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_mult_stencil_write_ctrl_vars[1] <= op_hcompute_mult_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_mult_stencil_write_ctrl_vars[2] <= op_hcompute_mult_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(8 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module mult_stencil_op_hcompute_hw_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_read_ren =(on && on2 && op_hcompute_hw_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_read_ctrl_vars[1]<=63 && op_hcompute_hw_output_stencil_read_ctrl_vars[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==7) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module mult_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] ,
	input op_hcompute_mult_stencil_write_wen,
	input [15:0] op_hcompute_mult_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_mult_stencil_write [0:0] );

    mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_to_mult_stencil_op_hcompute_mult_stencil_0_sr mult_stencil_op_hcompute_hw_output_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_mult_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  // Storage capacity pre-banking: 4096
  logic [15:0]op_hcompute_mult_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_mult_stencil_write_wen_fsm_out;
  mult_stencil_op_hcompute_mult_stencil_write_fsm mult_stencil_op_hcompute_mult_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_mult_stencil_write_ctrl_vars( op_hcompute_mult_stencil_write_ctrl_vars_fsm_out), .op_hcompute_mult_stencil_write_wen(op_hcompute_mult_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  mult_stencil_op_hcompute_hw_output_stencil_read_fsm mult_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [4096];
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_0;
  assign mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_0 = (((1*op_hcompute_mult_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_1;
  assign mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_1 = (((1*op_hcompute_mult_stencil_write_ctrl_vars_fsm_out[2])) - 0);
mult_stencil_bank_selector mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector(.d({mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_1,mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_0}));
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_0;
  assign mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_1;
  assign mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
mult_stencil_bank_selector mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_bank_selector(.d({mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_1,mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_mult_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_mult_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*64);
  logic [15:0] delay_wire_4;
  always @(posedge clk) begin
    delay_wire_4 <= addr0;  end
  logic [15:0] delay_wire_5;
  always @(posedge clk) begin
    delay_wire_5 <= mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out;  end
  logic [15:0] delay_wire_6;
  always @(posedge clk) begin
    delay_wire_6 <= op_hcompute_mult_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_7;
  always @(posedge clk) begin
    delay_wire_7 <= op_hcompute_mult_stencil_write[0];  end
  always @(posedge clk) begin
    if (delay_wire_6) begin
      case( delay_wire_5)
        0:bank_0[delay_wire_4] <= delay_wire_7;
      endcase
    end
  end
  always @(posedge clk) begin
  end

endmodule


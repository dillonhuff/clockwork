  // min: { [264] }
  // max: { [4099] }

  // min: { [261] }
  // max: { [4096] }

  // min: { [264] }
  // max: { [4099] }

  // min: { [264] }
  // max: { [4099] }

  // min: { [265] }
  // max: { [4100] }

  // min: { [261] }
  // max: { [4096] }

  // min: { [396] }
  // max: { [4101] }

  // min: { [397] }
  // max: { [4102] }

  // min: { [133] }
  // max: { [4098] }

  // min: { [132] }
  // max: { [4097] }

  // min: { [1] }
  // max: { [4096] }

  // min: { [261] }
  // max: { [4096] }

  // min: { [133] }
  // max: { [4098] }

  // min: { [132] }
  // max: { [4097] }

  // min: { [133] }
  // max: { [4098] }

  // sched min: { [1] }
  // sched max: { [4102] }
// cim_output_stencil has embarassing partition: 1

module cim_output_stencil_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_to_cim_output_stencil_op_hcompute_cim_output_stencil_65_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_3;
  always @(posedge clk) begin
    delay_wire_3 <= in;
  end
  assign out = delay_wire_3;
endmodule

// { op_hcompute_cim_output_stencil[root, cim_output_s0_y, cim_output_s0_x] -> [(396 + 64cim_output_s0_y + cim_output_s0_x)] }
module cim_output_stencil_op_hcompute_cim_output_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars[2:0], output op_hcompute_cim_output_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_output_stencil_write_wen =(on && on2 && op_hcompute_cim_output_stencil_write_ctrl_vars[0]==0 && op_hcompute_cim_output_stencil_write_ctrl_vars[1]<=57 && op_hcompute_cim_output_stencil_write_ctrl_vars[2]<=57);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_output_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_output_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_output_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==395) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_output_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_output_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_output_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_output_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_cim_output_stencil_write_ctrl_vars[1] <= op_hcompute_cim_output_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_output_stencil_write_ctrl_vars[2] <= op_hcompute_cim_output_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(397 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module cim_output_stencil_op_hcompute_hw_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_read_ren =(on && on2 && op_hcompute_hw_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_read_ctrl_vars[1]<=57 && op_hcompute_hw_output_stencil_read_ctrl_vars[2]<=57);
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
      if(counter[0] ==396) begin
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
module cim_output_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_output_stencil_write_wen,
	input [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_cim_output_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

    cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_to_cim_output_stencil_op_hcompute_cim_output_stencil_65_sr cim_output_stencil_op_hcompute_hw_output_stencil_46_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_output_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  // Storage capacity pre-banking: 3364
  logic [15:0]op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_output_stencil_write_wen_fsm_out;
  cim_output_stencil_op_hcompute_cim_output_stencil_write_fsm cim_output_stencil_op_hcompute_cim_output_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_output_stencil_write_ctrl_vars( op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out), .op_hcompute_cim_output_stencil_write_wen(op_hcompute_cim_output_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  cim_output_stencil_op_hcompute_hw_output_stencil_read_fsm cim_output_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3364];
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_0;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_0 = (((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_1;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_1 = (((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2])) - 0);
cim_output_stencil_embarassing_bank_selector cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector(.d({cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_1,cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_0}));
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_0;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_1;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
cim_output_stencil_embarassing_bank_selector cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_bank_selector(.d({cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_1,cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2])) - 0))*58);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_cim_output_stencil_write_wen_fsm_out) begin
      case( cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_output_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_cim_output_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// cim_stencil has embarassing partition: 0

module cim_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_4;
  logic [15:0] delay_wire_5;
  logic [15:0] delay_wire_6;
  logic [15:0] delay_wire_7;
  logic [15:0] delay_wire_8;
  logic [15:0] delay_wire_9;
  logic [15:0] delay_wire_10;
  logic [15:0] delay_wire_11;
  logic [15:0] delay_wire_12;
  logic [15:0] delay_wire_13;
  logic [15:0] delay_wire_14;
  logic [15:0] delay_wire_15;
  logic [15:0] delay_wire_16;
  logic [15:0] delay_wire_17;
  logic [15:0] delay_wire_18;
  logic [15:0] delay_wire_19;
  logic [15:0] delay_wire_20;
  logic [15:0] delay_wire_21;
  logic [15:0] delay_wire_22;
  logic [15:0] delay_wire_23;
  logic [15:0] delay_wire_24;
  logic [15:0] delay_wire_25;
  logic [15:0] delay_wire_26;
  logic [15:0] delay_wire_27;
  logic [15:0] delay_wire_28;
  logic [15:0] delay_wire_29;
  logic [15:0] delay_wire_30;
  logic [15:0] delay_wire_31;
  logic [15:0] delay_wire_32;
  logic [15:0] delay_wire_33;
  logic [15:0] delay_wire_34;
  logic [15:0] delay_wire_35;
  logic [15:0] delay_wire_36;
  logic [15:0] delay_wire_37;
  logic [15:0] delay_wire_38;
  logic [15:0] delay_wire_39;
  logic [15:0] delay_wire_40;
  logic [15:0] delay_wire_41;
  logic [15:0] delay_wire_42;
  logic [15:0] delay_wire_43;
  logic [15:0] delay_wire_44;
  logic [15:0] delay_wire_45;
  logic [15:0] delay_wire_46;
  logic [15:0] delay_wire_47;
  logic [15:0] delay_wire_48;
  logic [15:0] delay_wire_49;
  logic [15:0] delay_wire_50;
  logic [15:0] delay_wire_51;
  logic [15:0] delay_wire_52;
  logic [15:0] delay_wire_53;
  logic [15:0] delay_wire_54;
  logic [15:0] delay_wire_55;
  logic [15:0] delay_wire_56;
  logic [15:0] delay_wire_57;
  logic [15:0] delay_wire_58;
  logic [15:0] delay_wire_59;
  logic [15:0] delay_wire_60;
  logic [15:0] delay_wire_61;
  logic [15:0] delay_wire_62;
  logic [15:0] delay_wire_63;
  logic [15:0] delay_wire_64;
  logic [15:0] delay_wire_65;
  logic [15:0] delay_wire_66;
  logic [15:0] delay_wire_67;
  logic [15:0] delay_wire_68;
  logic [15:0] delay_wire_69;
  logic [15:0] delay_wire_70;
  logic [15:0] delay_wire_71;
  logic [15:0] delay_wire_72;
  logic [15:0] delay_wire_73;
  logic [15:0] delay_wire_74;
  logic [15:0] delay_wire_75;
  logic [15:0] delay_wire_76;
  logic [15:0] delay_wire_77;
  logic [15:0] delay_wire_78;
  logic [15:0] delay_wire_79;
  logic [15:0] delay_wire_80;
  logic [15:0] delay_wire_81;
  logic [15:0] delay_wire_82;
  logic [15:0] delay_wire_83;
  logic [15:0] delay_wire_84;
  logic [15:0] delay_wire_85;
  logic [15:0] delay_wire_86;
  logic [15:0] delay_wire_87;
  logic [15:0] delay_wire_88;
  logic [15:0] delay_wire_89;
  logic [15:0] delay_wire_90;
  logic [15:0] delay_wire_91;
  logic [15:0] delay_wire_92;
  logic [15:0] delay_wire_93;
  logic [15:0] delay_wire_94;
  logic [15:0] delay_wire_95;
  logic [15:0] delay_wire_96;
  logic [15:0] delay_wire_97;
  logic [15:0] delay_wire_98;
  logic [15:0] delay_wire_99;
  logic [15:0] delay_wire_100;
  logic [15:0] delay_wire_101;
  logic [15:0] delay_wire_102;
  logic [15:0] delay_wire_103;
  logic [15:0] delay_wire_104;
  logic [15:0] delay_wire_105;
  logic [15:0] delay_wire_106;
  logic [15:0] delay_wire_107;
  logic [15:0] delay_wire_108;
  logic [15:0] delay_wire_109;
  logic [15:0] delay_wire_110;
  logic [15:0] delay_wire_111;
  logic [15:0] delay_wire_112;
  logic [15:0] delay_wire_113;
  logic [15:0] delay_wire_114;
  logic [15:0] delay_wire_115;
  logic [15:0] delay_wire_116;
  logic [15:0] delay_wire_117;
  logic [15:0] delay_wire_118;
  logic [15:0] delay_wire_119;
  logic [15:0] delay_wire_120;
  logic [15:0] delay_wire_121;
  logic [15:0] delay_wire_122;
  logic [15:0] delay_wire_123;
  logic [15:0] delay_wire_124;
  logic [15:0] delay_wire_125;
  logic [15:0] delay_wire_126;
  logic [15:0] delay_wire_127;
  logic [15:0] delay_wire_128;
  logic [15:0] delay_wire_129;
  logic [15:0] delay_wire_130;
  logic [15:0] delay_wire_131;
  logic [15:0] delay_wire_132;
  logic [15:0] delay_wire_133;
  logic [15:0] delay_wire_134;
  always @(posedge clk) begin
    delay_wire_4 <= in;
    delay_wire_5 <= delay_wire_4;
    delay_wire_6 <= delay_wire_5;
    delay_wire_7 <= delay_wire_6;
    delay_wire_8 <= delay_wire_7;
    delay_wire_9 <= delay_wire_8;
    delay_wire_10 <= delay_wire_9;
    delay_wire_11 <= delay_wire_10;
    delay_wire_12 <= delay_wire_11;
    delay_wire_13 <= delay_wire_12;
    delay_wire_14 <= delay_wire_13;
    delay_wire_15 <= delay_wire_14;
    delay_wire_16 <= delay_wire_15;
    delay_wire_17 <= delay_wire_16;
    delay_wire_18 <= delay_wire_17;
    delay_wire_19 <= delay_wire_18;
    delay_wire_20 <= delay_wire_19;
    delay_wire_21 <= delay_wire_20;
    delay_wire_22 <= delay_wire_21;
    delay_wire_23 <= delay_wire_22;
    delay_wire_24 <= delay_wire_23;
    delay_wire_25 <= delay_wire_24;
    delay_wire_26 <= delay_wire_25;
    delay_wire_27 <= delay_wire_26;
    delay_wire_28 <= delay_wire_27;
    delay_wire_29 <= delay_wire_28;
    delay_wire_30 <= delay_wire_29;
    delay_wire_31 <= delay_wire_30;
    delay_wire_32 <= delay_wire_31;
    delay_wire_33 <= delay_wire_32;
    delay_wire_34 <= delay_wire_33;
    delay_wire_35 <= delay_wire_34;
    delay_wire_36 <= delay_wire_35;
    delay_wire_37 <= delay_wire_36;
    delay_wire_38 <= delay_wire_37;
    delay_wire_39 <= delay_wire_38;
    delay_wire_40 <= delay_wire_39;
    delay_wire_41 <= delay_wire_40;
    delay_wire_42 <= delay_wire_41;
    delay_wire_43 <= delay_wire_42;
    delay_wire_44 <= delay_wire_43;
    delay_wire_45 <= delay_wire_44;
    delay_wire_46 <= delay_wire_45;
    delay_wire_47 <= delay_wire_46;
    delay_wire_48 <= delay_wire_47;
    delay_wire_49 <= delay_wire_48;
    delay_wire_50 <= delay_wire_49;
    delay_wire_51 <= delay_wire_50;
    delay_wire_52 <= delay_wire_51;
    delay_wire_53 <= delay_wire_52;
    delay_wire_54 <= delay_wire_53;
    delay_wire_55 <= delay_wire_54;
    delay_wire_56 <= delay_wire_55;
    delay_wire_57 <= delay_wire_56;
    delay_wire_58 <= delay_wire_57;
    delay_wire_59 <= delay_wire_58;
    delay_wire_60 <= delay_wire_59;
    delay_wire_61 <= delay_wire_60;
    delay_wire_62 <= delay_wire_61;
    delay_wire_63 <= delay_wire_62;
    delay_wire_64 <= delay_wire_63;
    delay_wire_65 <= delay_wire_64;
    delay_wire_66 <= delay_wire_65;
    delay_wire_67 <= delay_wire_66;
    delay_wire_68 <= delay_wire_67;
    delay_wire_69 <= delay_wire_68;
    delay_wire_70 <= delay_wire_69;
    delay_wire_71 <= delay_wire_70;
    delay_wire_72 <= delay_wire_71;
    delay_wire_73 <= delay_wire_72;
    delay_wire_74 <= delay_wire_73;
    delay_wire_75 <= delay_wire_74;
    delay_wire_76 <= delay_wire_75;
    delay_wire_77 <= delay_wire_76;
    delay_wire_78 <= delay_wire_77;
    delay_wire_79 <= delay_wire_78;
    delay_wire_80 <= delay_wire_79;
    delay_wire_81 <= delay_wire_80;
    delay_wire_82 <= delay_wire_81;
    delay_wire_83 <= delay_wire_82;
    delay_wire_84 <= delay_wire_83;
    delay_wire_85 <= delay_wire_84;
    delay_wire_86 <= delay_wire_85;
    delay_wire_87 <= delay_wire_86;
    delay_wire_88 <= delay_wire_87;
    delay_wire_89 <= delay_wire_88;
    delay_wire_90 <= delay_wire_89;
    delay_wire_91 <= delay_wire_90;
    delay_wire_92 <= delay_wire_91;
    delay_wire_93 <= delay_wire_92;
    delay_wire_94 <= delay_wire_93;
    delay_wire_95 <= delay_wire_94;
    delay_wire_96 <= delay_wire_95;
    delay_wire_97 <= delay_wire_96;
    delay_wire_98 <= delay_wire_97;
    delay_wire_99 <= delay_wire_98;
    delay_wire_100 <= delay_wire_99;
    delay_wire_101 <= delay_wire_100;
    delay_wire_102 <= delay_wire_101;
    delay_wire_103 <= delay_wire_102;
    delay_wire_104 <= delay_wire_103;
    delay_wire_105 <= delay_wire_104;
    delay_wire_106 <= delay_wire_105;
    delay_wire_107 <= delay_wire_106;
    delay_wire_108 <= delay_wire_107;
    delay_wire_109 <= delay_wire_108;
    delay_wire_110 <= delay_wire_109;
    delay_wire_111 <= delay_wire_110;
    delay_wire_112 <= delay_wire_111;
    delay_wire_113 <= delay_wire_112;
    delay_wire_114 <= delay_wire_113;
    delay_wire_115 <= delay_wire_114;
    delay_wire_116 <= delay_wire_115;
    delay_wire_117 <= delay_wire_116;
    delay_wire_118 <= delay_wire_117;
    delay_wire_119 <= delay_wire_118;
    delay_wire_120 <= delay_wire_119;
    delay_wire_121 <= delay_wire_120;
    delay_wire_122 <= delay_wire_121;
    delay_wire_123 <= delay_wire_122;
    delay_wire_124 <= delay_wire_123;
    delay_wire_125 <= delay_wire_124;
    delay_wire_126 <= delay_wire_125;
    delay_wire_127 <= delay_wire_126;
    delay_wire_128 <= delay_wire_127;
    delay_wire_129 <= delay_wire_128;
    delay_wire_130 <= delay_wire_129;
    delay_wire_131 <= delay_wire_130;
    delay_wire_132 <= delay_wire_131;
    delay_wire_133 <= delay_wire_132;
    delay_wire_134 <= delay_wire_133;
  end
  assign out = delay_wire_134;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_135;
  logic [15:0] delay_wire_136;
  logic [15:0] delay_wire_137;
  logic [15:0] delay_wire_138;
  logic [15:0] delay_wire_139;
  logic [15:0] delay_wire_140;
  logic [15:0] delay_wire_141;
  logic [15:0] delay_wire_142;
  logic [15:0] delay_wire_143;
  logic [15:0] delay_wire_144;
  logic [15:0] delay_wire_145;
  logic [15:0] delay_wire_146;
  logic [15:0] delay_wire_147;
  logic [15:0] delay_wire_148;
  logic [15:0] delay_wire_149;
  logic [15:0] delay_wire_150;
  logic [15:0] delay_wire_151;
  logic [15:0] delay_wire_152;
  logic [15:0] delay_wire_153;
  logic [15:0] delay_wire_154;
  logic [15:0] delay_wire_155;
  logic [15:0] delay_wire_156;
  logic [15:0] delay_wire_157;
  logic [15:0] delay_wire_158;
  logic [15:0] delay_wire_159;
  logic [15:0] delay_wire_160;
  logic [15:0] delay_wire_161;
  logic [15:0] delay_wire_162;
  logic [15:0] delay_wire_163;
  logic [15:0] delay_wire_164;
  logic [15:0] delay_wire_165;
  logic [15:0] delay_wire_166;
  logic [15:0] delay_wire_167;
  logic [15:0] delay_wire_168;
  logic [15:0] delay_wire_169;
  logic [15:0] delay_wire_170;
  logic [15:0] delay_wire_171;
  logic [15:0] delay_wire_172;
  logic [15:0] delay_wire_173;
  logic [15:0] delay_wire_174;
  logic [15:0] delay_wire_175;
  logic [15:0] delay_wire_176;
  logic [15:0] delay_wire_177;
  logic [15:0] delay_wire_178;
  logic [15:0] delay_wire_179;
  logic [15:0] delay_wire_180;
  logic [15:0] delay_wire_181;
  logic [15:0] delay_wire_182;
  logic [15:0] delay_wire_183;
  logic [15:0] delay_wire_184;
  logic [15:0] delay_wire_185;
  logic [15:0] delay_wire_186;
  logic [15:0] delay_wire_187;
  logic [15:0] delay_wire_188;
  logic [15:0] delay_wire_189;
  logic [15:0] delay_wire_190;
  logic [15:0] delay_wire_191;
  logic [15:0] delay_wire_192;
  logic [15:0] delay_wire_193;
  logic [15:0] delay_wire_194;
  logic [15:0] delay_wire_195;
  logic [15:0] delay_wire_196;
  logic [15:0] delay_wire_197;
  logic [15:0] delay_wire_198;
  logic [15:0] delay_wire_199;
  logic [15:0] delay_wire_200;
  always @(posedge clk) begin
    delay_wire_135 <= in;
    delay_wire_136 <= delay_wire_135;
    delay_wire_137 <= delay_wire_136;
    delay_wire_138 <= delay_wire_137;
    delay_wire_139 <= delay_wire_138;
    delay_wire_140 <= delay_wire_139;
    delay_wire_141 <= delay_wire_140;
    delay_wire_142 <= delay_wire_141;
    delay_wire_143 <= delay_wire_142;
    delay_wire_144 <= delay_wire_143;
    delay_wire_145 <= delay_wire_144;
    delay_wire_146 <= delay_wire_145;
    delay_wire_147 <= delay_wire_146;
    delay_wire_148 <= delay_wire_147;
    delay_wire_149 <= delay_wire_148;
    delay_wire_150 <= delay_wire_149;
    delay_wire_151 <= delay_wire_150;
    delay_wire_152 <= delay_wire_151;
    delay_wire_153 <= delay_wire_152;
    delay_wire_154 <= delay_wire_153;
    delay_wire_155 <= delay_wire_154;
    delay_wire_156 <= delay_wire_155;
    delay_wire_157 <= delay_wire_156;
    delay_wire_158 <= delay_wire_157;
    delay_wire_159 <= delay_wire_158;
    delay_wire_160 <= delay_wire_159;
    delay_wire_161 <= delay_wire_160;
    delay_wire_162 <= delay_wire_161;
    delay_wire_163 <= delay_wire_162;
    delay_wire_164 <= delay_wire_163;
    delay_wire_165 <= delay_wire_164;
    delay_wire_166 <= delay_wire_165;
    delay_wire_167 <= delay_wire_166;
    delay_wire_168 <= delay_wire_167;
    delay_wire_169 <= delay_wire_168;
    delay_wire_170 <= delay_wire_169;
    delay_wire_171 <= delay_wire_170;
    delay_wire_172 <= delay_wire_171;
    delay_wire_173 <= delay_wire_172;
    delay_wire_174 <= delay_wire_173;
    delay_wire_175 <= delay_wire_174;
    delay_wire_176 <= delay_wire_175;
    delay_wire_177 <= delay_wire_176;
    delay_wire_178 <= delay_wire_177;
    delay_wire_179 <= delay_wire_178;
    delay_wire_180 <= delay_wire_179;
    delay_wire_181 <= delay_wire_180;
    delay_wire_182 <= delay_wire_181;
    delay_wire_183 <= delay_wire_182;
    delay_wire_184 <= delay_wire_183;
    delay_wire_185 <= delay_wire_184;
    delay_wire_186 <= delay_wire_185;
    delay_wire_187 <= delay_wire_186;
    delay_wire_188 <= delay_wire_187;
    delay_wire_189 <= delay_wire_188;
    delay_wire_190 <= delay_wire_189;
    delay_wire_191 <= delay_wire_190;
    delay_wire_192 <= delay_wire_191;
    delay_wire_193 <= delay_wire_192;
    delay_wire_194 <= delay_wire_193;
    delay_wire_195 <= delay_wire_194;
    delay_wire_196 <= delay_wire_195;
    delay_wire_197 <= delay_wire_196;
    delay_wire_198 <= delay_wire_197;
    delay_wire_199 <= delay_wire_198;
    delay_wire_200 <= delay_wire_199;
  end
  assign out = delay_wire_200;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_201;
  logic [15:0] delay_wire_202;
  logic [15:0] delay_wire_203;
  logic [15:0] delay_wire_204;
  logic [15:0] delay_wire_205;
  logic [15:0] delay_wire_206;
  logic [15:0] delay_wire_207;
  logic [15:0] delay_wire_208;
  logic [15:0] delay_wire_209;
  logic [15:0] delay_wire_210;
  logic [15:0] delay_wire_211;
  logic [15:0] delay_wire_212;
  logic [15:0] delay_wire_213;
  logic [15:0] delay_wire_214;
  logic [15:0] delay_wire_215;
  logic [15:0] delay_wire_216;
  logic [15:0] delay_wire_217;
  logic [15:0] delay_wire_218;
  logic [15:0] delay_wire_219;
  logic [15:0] delay_wire_220;
  logic [15:0] delay_wire_221;
  logic [15:0] delay_wire_222;
  logic [15:0] delay_wire_223;
  logic [15:0] delay_wire_224;
  logic [15:0] delay_wire_225;
  logic [15:0] delay_wire_226;
  logic [15:0] delay_wire_227;
  logic [15:0] delay_wire_228;
  logic [15:0] delay_wire_229;
  logic [15:0] delay_wire_230;
  logic [15:0] delay_wire_231;
  logic [15:0] delay_wire_232;
  logic [15:0] delay_wire_233;
  logic [15:0] delay_wire_234;
  logic [15:0] delay_wire_235;
  logic [15:0] delay_wire_236;
  logic [15:0] delay_wire_237;
  logic [15:0] delay_wire_238;
  logic [15:0] delay_wire_239;
  logic [15:0] delay_wire_240;
  logic [15:0] delay_wire_241;
  logic [15:0] delay_wire_242;
  logic [15:0] delay_wire_243;
  logic [15:0] delay_wire_244;
  logic [15:0] delay_wire_245;
  logic [15:0] delay_wire_246;
  logic [15:0] delay_wire_247;
  logic [15:0] delay_wire_248;
  logic [15:0] delay_wire_249;
  logic [15:0] delay_wire_250;
  logic [15:0] delay_wire_251;
  logic [15:0] delay_wire_252;
  logic [15:0] delay_wire_253;
  logic [15:0] delay_wire_254;
  logic [15:0] delay_wire_255;
  logic [15:0] delay_wire_256;
  logic [15:0] delay_wire_257;
  logic [15:0] delay_wire_258;
  logic [15:0] delay_wire_259;
  logic [15:0] delay_wire_260;
  logic [15:0] delay_wire_261;
  logic [15:0] delay_wire_262;
  logic [15:0] delay_wire_263;
  logic [15:0] delay_wire_264;
  logic [15:0] delay_wire_265;
  logic [15:0] delay_wire_266;
  logic [15:0] delay_wire_267;
  logic [15:0] delay_wire_268;
  logic [15:0] delay_wire_269;
  logic [15:0] delay_wire_270;
  logic [15:0] delay_wire_271;
  logic [15:0] delay_wire_272;
  logic [15:0] delay_wire_273;
  logic [15:0] delay_wire_274;
  logic [15:0] delay_wire_275;
  logic [15:0] delay_wire_276;
  logic [15:0] delay_wire_277;
  logic [15:0] delay_wire_278;
  logic [15:0] delay_wire_279;
  logic [15:0] delay_wire_280;
  logic [15:0] delay_wire_281;
  logic [15:0] delay_wire_282;
  logic [15:0] delay_wire_283;
  logic [15:0] delay_wire_284;
  logic [15:0] delay_wire_285;
  logic [15:0] delay_wire_286;
  logic [15:0] delay_wire_287;
  logic [15:0] delay_wire_288;
  logic [15:0] delay_wire_289;
  logic [15:0] delay_wire_290;
  logic [15:0] delay_wire_291;
  logic [15:0] delay_wire_292;
  logic [15:0] delay_wire_293;
  logic [15:0] delay_wire_294;
  logic [15:0] delay_wire_295;
  logic [15:0] delay_wire_296;
  logic [15:0] delay_wire_297;
  logic [15:0] delay_wire_298;
  logic [15:0] delay_wire_299;
  logic [15:0] delay_wire_300;
  logic [15:0] delay_wire_301;
  logic [15:0] delay_wire_302;
  logic [15:0] delay_wire_303;
  logic [15:0] delay_wire_304;
  logic [15:0] delay_wire_305;
  logic [15:0] delay_wire_306;
  logic [15:0] delay_wire_307;
  logic [15:0] delay_wire_308;
  logic [15:0] delay_wire_309;
  logic [15:0] delay_wire_310;
  logic [15:0] delay_wire_311;
  logic [15:0] delay_wire_312;
  logic [15:0] delay_wire_313;
  logic [15:0] delay_wire_314;
  logic [15:0] delay_wire_315;
  logic [15:0] delay_wire_316;
  logic [15:0] delay_wire_317;
  logic [15:0] delay_wire_318;
  logic [15:0] delay_wire_319;
  logic [15:0] delay_wire_320;
  logic [15:0] delay_wire_321;
  logic [15:0] delay_wire_322;
  logic [15:0] delay_wire_323;
  logic [15:0] delay_wire_324;
  logic [15:0] delay_wire_325;
  logic [15:0] delay_wire_326;
  logic [15:0] delay_wire_327;
  logic [15:0] delay_wire_328;
  logic [15:0] delay_wire_329;
  logic [15:0] delay_wire_330;
  always @(posedge clk) begin
    delay_wire_201 <= in;
    delay_wire_202 <= delay_wire_201;
    delay_wire_203 <= delay_wire_202;
    delay_wire_204 <= delay_wire_203;
    delay_wire_205 <= delay_wire_204;
    delay_wire_206 <= delay_wire_205;
    delay_wire_207 <= delay_wire_206;
    delay_wire_208 <= delay_wire_207;
    delay_wire_209 <= delay_wire_208;
    delay_wire_210 <= delay_wire_209;
    delay_wire_211 <= delay_wire_210;
    delay_wire_212 <= delay_wire_211;
    delay_wire_213 <= delay_wire_212;
    delay_wire_214 <= delay_wire_213;
    delay_wire_215 <= delay_wire_214;
    delay_wire_216 <= delay_wire_215;
    delay_wire_217 <= delay_wire_216;
    delay_wire_218 <= delay_wire_217;
    delay_wire_219 <= delay_wire_218;
    delay_wire_220 <= delay_wire_219;
    delay_wire_221 <= delay_wire_220;
    delay_wire_222 <= delay_wire_221;
    delay_wire_223 <= delay_wire_222;
    delay_wire_224 <= delay_wire_223;
    delay_wire_225 <= delay_wire_224;
    delay_wire_226 <= delay_wire_225;
    delay_wire_227 <= delay_wire_226;
    delay_wire_228 <= delay_wire_227;
    delay_wire_229 <= delay_wire_228;
    delay_wire_230 <= delay_wire_229;
    delay_wire_231 <= delay_wire_230;
    delay_wire_232 <= delay_wire_231;
    delay_wire_233 <= delay_wire_232;
    delay_wire_234 <= delay_wire_233;
    delay_wire_235 <= delay_wire_234;
    delay_wire_236 <= delay_wire_235;
    delay_wire_237 <= delay_wire_236;
    delay_wire_238 <= delay_wire_237;
    delay_wire_239 <= delay_wire_238;
    delay_wire_240 <= delay_wire_239;
    delay_wire_241 <= delay_wire_240;
    delay_wire_242 <= delay_wire_241;
    delay_wire_243 <= delay_wire_242;
    delay_wire_244 <= delay_wire_243;
    delay_wire_245 <= delay_wire_244;
    delay_wire_246 <= delay_wire_245;
    delay_wire_247 <= delay_wire_246;
    delay_wire_248 <= delay_wire_247;
    delay_wire_249 <= delay_wire_248;
    delay_wire_250 <= delay_wire_249;
    delay_wire_251 <= delay_wire_250;
    delay_wire_252 <= delay_wire_251;
    delay_wire_253 <= delay_wire_252;
    delay_wire_254 <= delay_wire_253;
    delay_wire_255 <= delay_wire_254;
    delay_wire_256 <= delay_wire_255;
    delay_wire_257 <= delay_wire_256;
    delay_wire_258 <= delay_wire_257;
    delay_wire_259 <= delay_wire_258;
    delay_wire_260 <= delay_wire_259;
    delay_wire_261 <= delay_wire_260;
    delay_wire_262 <= delay_wire_261;
    delay_wire_263 <= delay_wire_262;
    delay_wire_264 <= delay_wire_263;
    delay_wire_265 <= delay_wire_264;
    delay_wire_266 <= delay_wire_265;
    delay_wire_267 <= delay_wire_266;
    delay_wire_268 <= delay_wire_267;
    delay_wire_269 <= delay_wire_268;
    delay_wire_270 <= delay_wire_269;
    delay_wire_271 <= delay_wire_270;
    delay_wire_272 <= delay_wire_271;
    delay_wire_273 <= delay_wire_272;
    delay_wire_274 <= delay_wire_273;
    delay_wire_275 <= delay_wire_274;
    delay_wire_276 <= delay_wire_275;
    delay_wire_277 <= delay_wire_276;
    delay_wire_278 <= delay_wire_277;
    delay_wire_279 <= delay_wire_278;
    delay_wire_280 <= delay_wire_279;
    delay_wire_281 <= delay_wire_280;
    delay_wire_282 <= delay_wire_281;
    delay_wire_283 <= delay_wire_282;
    delay_wire_284 <= delay_wire_283;
    delay_wire_285 <= delay_wire_284;
    delay_wire_286 <= delay_wire_285;
    delay_wire_287 <= delay_wire_286;
    delay_wire_288 <= delay_wire_287;
    delay_wire_289 <= delay_wire_288;
    delay_wire_290 <= delay_wire_289;
    delay_wire_291 <= delay_wire_290;
    delay_wire_292 <= delay_wire_291;
    delay_wire_293 <= delay_wire_292;
    delay_wire_294 <= delay_wire_293;
    delay_wire_295 <= delay_wire_294;
    delay_wire_296 <= delay_wire_295;
    delay_wire_297 <= delay_wire_296;
    delay_wire_298 <= delay_wire_297;
    delay_wire_299 <= delay_wire_298;
    delay_wire_300 <= delay_wire_299;
    delay_wire_301 <= delay_wire_300;
    delay_wire_302 <= delay_wire_301;
    delay_wire_303 <= delay_wire_302;
    delay_wire_304 <= delay_wire_303;
    delay_wire_305 <= delay_wire_304;
    delay_wire_306 <= delay_wire_305;
    delay_wire_307 <= delay_wire_306;
    delay_wire_308 <= delay_wire_307;
    delay_wire_309 <= delay_wire_308;
    delay_wire_310 <= delay_wire_309;
    delay_wire_311 <= delay_wire_310;
    delay_wire_312 <= delay_wire_311;
    delay_wire_313 <= delay_wire_312;
    delay_wire_314 <= delay_wire_313;
    delay_wire_315 <= delay_wire_314;
    delay_wire_316 <= delay_wire_315;
    delay_wire_317 <= delay_wire_316;
    delay_wire_318 <= delay_wire_317;
    delay_wire_319 <= delay_wire_318;
    delay_wire_320 <= delay_wire_319;
    delay_wire_321 <= delay_wire_320;
    delay_wire_322 <= delay_wire_321;
    delay_wire_323 <= delay_wire_322;
    delay_wire_324 <= delay_wire_323;
    delay_wire_325 <= delay_wire_324;
    delay_wire_326 <= delay_wire_325;
    delay_wire_327 <= delay_wire_326;
    delay_wire_328 <= delay_wire_327;
    delay_wire_329 <= delay_wire_328;
    delay_wire_330 <= delay_wire_329;
  end
  assign out = delay_wire_330;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_331;
  logic [15:0] delay_wire_332;
  logic [15:0] delay_wire_333;
  logic [15:0] delay_wire_334;
  logic [15:0] delay_wire_335;
  logic [15:0] delay_wire_336;
  logic [15:0] delay_wire_337;
  logic [15:0] delay_wire_338;
  logic [15:0] delay_wire_339;
  logic [15:0] delay_wire_340;
  logic [15:0] delay_wire_341;
  logic [15:0] delay_wire_342;
  logic [15:0] delay_wire_343;
  logic [15:0] delay_wire_344;
  logic [15:0] delay_wire_345;
  logic [15:0] delay_wire_346;
  logic [15:0] delay_wire_347;
  logic [15:0] delay_wire_348;
  logic [15:0] delay_wire_349;
  logic [15:0] delay_wire_350;
  logic [15:0] delay_wire_351;
  logic [15:0] delay_wire_352;
  logic [15:0] delay_wire_353;
  logic [15:0] delay_wire_354;
  logic [15:0] delay_wire_355;
  logic [15:0] delay_wire_356;
  logic [15:0] delay_wire_357;
  logic [15:0] delay_wire_358;
  logic [15:0] delay_wire_359;
  logic [15:0] delay_wire_360;
  logic [15:0] delay_wire_361;
  logic [15:0] delay_wire_362;
  logic [15:0] delay_wire_363;
  logic [15:0] delay_wire_364;
  logic [15:0] delay_wire_365;
  logic [15:0] delay_wire_366;
  logic [15:0] delay_wire_367;
  logic [15:0] delay_wire_368;
  logic [15:0] delay_wire_369;
  logic [15:0] delay_wire_370;
  logic [15:0] delay_wire_371;
  logic [15:0] delay_wire_372;
  logic [15:0] delay_wire_373;
  logic [15:0] delay_wire_374;
  logic [15:0] delay_wire_375;
  logic [15:0] delay_wire_376;
  logic [15:0] delay_wire_377;
  logic [15:0] delay_wire_378;
  logic [15:0] delay_wire_379;
  logic [15:0] delay_wire_380;
  logic [15:0] delay_wire_381;
  logic [15:0] delay_wire_382;
  logic [15:0] delay_wire_383;
  logic [15:0] delay_wire_384;
  logic [15:0] delay_wire_385;
  logic [15:0] delay_wire_386;
  logic [15:0] delay_wire_387;
  logic [15:0] delay_wire_388;
  logic [15:0] delay_wire_389;
  logic [15:0] delay_wire_390;
  logic [15:0] delay_wire_391;
  logic [15:0] delay_wire_392;
  logic [15:0] delay_wire_393;
  logic [15:0] delay_wire_394;
  logic [15:0] delay_wire_395;
  logic [15:0] delay_wire_396;
  logic [15:0] delay_wire_397;
  logic [15:0] delay_wire_398;
  logic [15:0] delay_wire_399;
  logic [15:0] delay_wire_400;
  logic [15:0] delay_wire_401;
  logic [15:0] delay_wire_402;
  logic [15:0] delay_wire_403;
  logic [15:0] delay_wire_404;
  logic [15:0] delay_wire_405;
  logic [15:0] delay_wire_406;
  logic [15:0] delay_wire_407;
  logic [15:0] delay_wire_408;
  logic [15:0] delay_wire_409;
  logic [15:0] delay_wire_410;
  logic [15:0] delay_wire_411;
  logic [15:0] delay_wire_412;
  logic [15:0] delay_wire_413;
  logic [15:0] delay_wire_414;
  logic [15:0] delay_wire_415;
  logic [15:0] delay_wire_416;
  logic [15:0] delay_wire_417;
  logic [15:0] delay_wire_418;
  logic [15:0] delay_wire_419;
  logic [15:0] delay_wire_420;
  logic [15:0] delay_wire_421;
  logic [15:0] delay_wire_422;
  logic [15:0] delay_wire_423;
  logic [15:0] delay_wire_424;
  logic [15:0] delay_wire_425;
  logic [15:0] delay_wire_426;
  logic [15:0] delay_wire_427;
  logic [15:0] delay_wire_428;
  logic [15:0] delay_wire_429;
  logic [15:0] delay_wire_430;
  logic [15:0] delay_wire_431;
  logic [15:0] delay_wire_432;
  logic [15:0] delay_wire_433;
  logic [15:0] delay_wire_434;
  logic [15:0] delay_wire_435;
  logic [15:0] delay_wire_436;
  logic [15:0] delay_wire_437;
  logic [15:0] delay_wire_438;
  logic [15:0] delay_wire_439;
  logic [15:0] delay_wire_440;
  logic [15:0] delay_wire_441;
  logic [15:0] delay_wire_442;
  logic [15:0] delay_wire_443;
  logic [15:0] delay_wire_444;
  logic [15:0] delay_wire_445;
  logic [15:0] delay_wire_446;
  logic [15:0] delay_wire_447;
  logic [15:0] delay_wire_448;
  logic [15:0] delay_wire_449;
  logic [15:0] delay_wire_450;
  logic [15:0] delay_wire_451;
  logic [15:0] delay_wire_452;
  logic [15:0] delay_wire_453;
  logic [15:0] delay_wire_454;
  logic [15:0] delay_wire_455;
  logic [15:0] delay_wire_456;
  logic [15:0] delay_wire_457;
  logic [15:0] delay_wire_458;
  logic [15:0] delay_wire_459;
  always @(posedge clk) begin
    delay_wire_331 <= in;
    delay_wire_332 <= delay_wire_331;
    delay_wire_333 <= delay_wire_332;
    delay_wire_334 <= delay_wire_333;
    delay_wire_335 <= delay_wire_334;
    delay_wire_336 <= delay_wire_335;
    delay_wire_337 <= delay_wire_336;
    delay_wire_338 <= delay_wire_337;
    delay_wire_339 <= delay_wire_338;
    delay_wire_340 <= delay_wire_339;
    delay_wire_341 <= delay_wire_340;
    delay_wire_342 <= delay_wire_341;
    delay_wire_343 <= delay_wire_342;
    delay_wire_344 <= delay_wire_343;
    delay_wire_345 <= delay_wire_344;
    delay_wire_346 <= delay_wire_345;
    delay_wire_347 <= delay_wire_346;
    delay_wire_348 <= delay_wire_347;
    delay_wire_349 <= delay_wire_348;
    delay_wire_350 <= delay_wire_349;
    delay_wire_351 <= delay_wire_350;
    delay_wire_352 <= delay_wire_351;
    delay_wire_353 <= delay_wire_352;
    delay_wire_354 <= delay_wire_353;
    delay_wire_355 <= delay_wire_354;
    delay_wire_356 <= delay_wire_355;
    delay_wire_357 <= delay_wire_356;
    delay_wire_358 <= delay_wire_357;
    delay_wire_359 <= delay_wire_358;
    delay_wire_360 <= delay_wire_359;
    delay_wire_361 <= delay_wire_360;
    delay_wire_362 <= delay_wire_361;
    delay_wire_363 <= delay_wire_362;
    delay_wire_364 <= delay_wire_363;
    delay_wire_365 <= delay_wire_364;
    delay_wire_366 <= delay_wire_365;
    delay_wire_367 <= delay_wire_366;
    delay_wire_368 <= delay_wire_367;
    delay_wire_369 <= delay_wire_368;
    delay_wire_370 <= delay_wire_369;
    delay_wire_371 <= delay_wire_370;
    delay_wire_372 <= delay_wire_371;
    delay_wire_373 <= delay_wire_372;
    delay_wire_374 <= delay_wire_373;
    delay_wire_375 <= delay_wire_374;
    delay_wire_376 <= delay_wire_375;
    delay_wire_377 <= delay_wire_376;
    delay_wire_378 <= delay_wire_377;
    delay_wire_379 <= delay_wire_378;
    delay_wire_380 <= delay_wire_379;
    delay_wire_381 <= delay_wire_380;
    delay_wire_382 <= delay_wire_381;
    delay_wire_383 <= delay_wire_382;
    delay_wire_384 <= delay_wire_383;
    delay_wire_385 <= delay_wire_384;
    delay_wire_386 <= delay_wire_385;
    delay_wire_387 <= delay_wire_386;
    delay_wire_388 <= delay_wire_387;
    delay_wire_389 <= delay_wire_388;
    delay_wire_390 <= delay_wire_389;
    delay_wire_391 <= delay_wire_390;
    delay_wire_392 <= delay_wire_391;
    delay_wire_393 <= delay_wire_392;
    delay_wire_394 <= delay_wire_393;
    delay_wire_395 <= delay_wire_394;
    delay_wire_396 <= delay_wire_395;
    delay_wire_397 <= delay_wire_396;
    delay_wire_398 <= delay_wire_397;
    delay_wire_399 <= delay_wire_398;
    delay_wire_400 <= delay_wire_399;
    delay_wire_401 <= delay_wire_400;
    delay_wire_402 <= delay_wire_401;
    delay_wire_403 <= delay_wire_402;
    delay_wire_404 <= delay_wire_403;
    delay_wire_405 <= delay_wire_404;
    delay_wire_406 <= delay_wire_405;
    delay_wire_407 <= delay_wire_406;
    delay_wire_408 <= delay_wire_407;
    delay_wire_409 <= delay_wire_408;
    delay_wire_410 <= delay_wire_409;
    delay_wire_411 <= delay_wire_410;
    delay_wire_412 <= delay_wire_411;
    delay_wire_413 <= delay_wire_412;
    delay_wire_414 <= delay_wire_413;
    delay_wire_415 <= delay_wire_414;
    delay_wire_416 <= delay_wire_415;
    delay_wire_417 <= delay_wire_416;
    delay_wire_418 <= delay_wire_417;
    delay_wire_419 <= delay_wire_418;
    delay_wire_420 <= delay_wire_419;
    delay_wire_421 <= delay_wire_420;
    delay_wire_422 <= delay_wire_421;
    delay_wire_423 <= delay_wire_422;
    delay_wire_424 <= delay_wire_423;
    delay_wire_425 <= delay_wire_424;
    delay_wire_426 <= delay_wire_425;
    delay_wire_427 <= delay_wire_426;
    delay_wire_428 <= delay_wire_427;
    delay_wire_429 <= delay_wire_428;
    delay_wire_430 <= delay_wire_429;
    delay_wire_431 <= delay_wire_430;
    delay_wire_432 <= delay_wire_431;
    delay_wire_433 <= delay_wire_432;
    delay_wire_434 <= delay_wire_433;
    delay_wire_435 <= delay_wire_434;
    delay_wire_436 <= delay_wire_435;
    delay_wire_437 <= delay_wire_436;
    delay_wire_438 <= delay_wire_437;
    delay_wire_439 <= delay_wire_438;
    delay_wire_440 <= delay_wire_439;
    delay_wire_441 <= delay_wire_440;
    delay_wire_442 <= delay_wire_441;
    delay_wire_443 <= delay_wire_442;
    delay_wire_444 <= delay_wire_443;
    delay_wire_445 <= delay_wire_444;
    delay_wire_446 <= delay_wire_445;
    delay_wire_447 <= delay_wire_446;
    delay_wire_448 <= delay_wire_447;
    delay_wire_449 <= delay_wire_448;
    delay_wire_450 <= delay_wire_449;
    delay_wire_451 <= delay_wire_450;
    delay_wire_452 <= delay_wire_451;
    delay_wire_453 <= delay_wire_452;
    delay_wire_454 <= delay_wire_453;
    delay_wire_455 <= delay_wire_454;
    delay_wire_456 <= delay_wire_455;
    delay_wire_457 <= delay_wire_456;
    delay_wire_458 <= delay_wire_457;
    delay_wire_459 <= delay_wire_458;
  end
  assign out = delay_wire_459;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_460;
  logic [15:0] delay_wire_461;
  logic [15:0] delay_wire_462;
  logic [15:0] delay_wire_463;
  logic [15:0] delay_wire_464;
  logic [15:0] delay_wire_465;
  logic [15:0] delay_wire_466;
  logic [15:0] delay_wire_467;
  logic [15:0] delay_wire_468;
  logic [15:0] delay_wire_469;
  logic [15:0] delay_wire_470;
  logic [15:0] delay_wire_471;
  logic [15:0] delay_wire_472;
  logic [15:0] delay_wire_473;
  logic [15:0] delay_wire_474;
  logic [15:0] delay_wire_475;
  logic [15:0] delay_wire_476;
  logic [15:0] delay_wire_477;
  logic [15:0] delay_wire_478;
  logic [15:0] delay_wire_479;
  logic [15:0] delay_wire_480;
  logic [15:0] delay_wire_481;
  logic [15:0] delay_wire_482;
  logic [15:0] delay_wire_483;
  logic [15:0] delay_wire_484;
  logic [15:0] delay_wire_485;
  logic [15:0] delay_wire_486;
  logic [15:0] delay_wire_487;
  logic [15:0] delay_wire_488;
  logic [15:0] delay_wire_489;
  logic [15:0] delay_wire_490;
  logic [15:0] delay_wire_491;
  logic [15:0] delay_wire_492;
  logic [15:0] delay_wire_493;
  logic [15:0] delay_wire_494;
  logic [15:0] delay_wire_495;
  logic [15:0] delay_wire_496;
  logic [15:0] delay_wire_497;
  logic [15:0] delay_wire_498;
  logic [15:0] delay_wire_499;
  logic [15:0] delay_wire_500;
  logic [15:0] delay_wire_501;
  logic [15:0] delay_wire_502;
  logic [15:0] delay_wire_503;
  logic [15:0] delay_wire_504;
  logic [15:0] delay_wire_505;
  logic [15:0] delay_wire_506;
  logic [15:0] delay_wire_507;
  logic [15:0] delay_wire_508;
  logic [15:0] delay_wire_509;
  logic [15:0] delay_wire_510;
  logic [15:0] delay_wire_511;
  logic [15:0] delay_wire_512;
  logic [15:0] delay_wire_513;
  logic [15:0] delay_wire_514;
  logic [15:0] delay_wire_515;
  logic [15:0] delay_wire_516;
  logic [15:0] delay_wire_517;
  logic [15:0] delay_wire_518;
  logic [15:0] delay_wire_519;
  logic [15:0] delay_wire_520;
  logic [15:0] delay_wire_521;
  logic [15:0] delay_wire_522;
  logic [15:0] delay_wire_523;
  logic [15:0] delay_wire_524;
  logic [15:0] delay_wire_525;
  logic [15:0] delay_wire_526;
  always @(posedge clk) begin
    delay_wire_460 <= in;
    delay_wire_461 <= delay_wire_460;
    delay_wire_462 <= delay_wire_461;
    delay_wire_463 <= delay_wire_462;
    delay_wire_464 <= delay_wire_463;
    delay_wire_465 <= delay_wire_464;
    delay_wire_466 <= delay_wire_465;
    delay_wire_467 <= delay_wire_466;
    delay_wire_468 <= delay_wire_467;
    delay_wire_469 <= delay_wire_468;
    delay_wire_470 <= delay_wire_469;
    delay_wire_471 <= delay_wire_470;
    delay_wire_472 <= delay_wire_471;
    delay_wire_473 <= delay_wire_472;
    delay_wire_474 <= delay_wire_473;
    delay_wire_475 <= delay_wire_474;
    delay_wire_476 <= delay_wire_475;
    delay_wire_477 <= delay_wire_476;
    delay_wire_478 <= delay_wire_477;
    delay_wire_479 <= delay_wire_478;
    delay_wire_480 <= delay_wire_479;
    delay_wire_481 <= delay_wire_480;
    delay_wire_482 <= delay_wire_481;
    delay_wire_483 <= delay_wire_482;
    delay_wire_484 <= delay_wire_483;
    delay_wire_485 <= delay_wire_484;
    delay_wire_486 <= delay_wire_485;
    delay_wire_487 <= delay_wire_486;
    delay_wire_488 <= delay_wire_487;
    delay_wire_489 <= delay_wire_488;
    delay_wire_490 <= delay_wire_489;
    delay_wire_491 <= delay_wire_490;
    delay_wire_492 <= delay_wire_491;
    delay_wire_493 <= delay_wire_492;
    delay_wire_494 <= delay_wire_493;
    delay_wire_495 <= delay_wire_494;
    delay_wire_496 <= delay_wire_495;
    delay_wire_497 <= delay_wire_496;
    delay_wire_498 <= delay_wire_497;
    delay_wire_499 <= delay_wire_498;
    delay_wire_500 <= delay_wire_499;
    delay_wire_501 <= delay_wire_500;
    delay_wire_502 <= delay_wire_501;
    delay_wire_503 <= delay_wire_502;
    delay_wire_504 <= delay_wire_503;
    delay_wire_505 <= delay_wire_504;
    delay_wire_506 <= delay_wire_505;
    delay_wire_507 <= delay_wire_506;
    delay_wire_508 <= delay_wire_507;
    delay_wire_509 <= delay_wire_508;
    delay_wire_510 <= delay_wire_509;
    delay_wire_511 <= delay_wire_510;
    delay_wire_512 <= delay_wire_511;
    delay_wire_513 <= delay_wire_512;
    delay_wire_514 <= delay_wire_513;
    delay_wire_515 <= delay_wire_514;
    delay_wire_516 <= delay_wire_515;
    delay_wire_517 <= delay_wire_516;
    delay_wire_518 <= delay_wire_517;
    delay_wire_519 <= delay_wire_518;
    delay_wire_520 <= delay_wire_519;
    delay_wire_521 <= delay_wire_520;
    delay_wire_522 <= delay_wire_521;
    delay_wire_523 <= delay_wire_522;
    delay_wire_524 <= delay_wire_523;
    delay_wire_525 <= delay_wire_524;
    delay_wire_526 <= delay_wire_525;
  end
  assign out = delay_wire_526;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_527;
  logic [15:0] delay_wire_528;
  logic [15:0] delay_wire_529;
  logic [15:0] delay_wire_530;
  logic [15:0] delay_wire_531;
  logic [15:0] delay_wire_532;
  logic [15:0] delay_wire_533;
  logic [15:0] delay_wire_534;
  logic [15:0] delay_wire_535;
  logic [15:0] delay_wire_536;
  logic [15:0] delay_wire_537;
  logic [15:0] delay_wire_538;
  logic [15:0] delay_wire_539;
  logic [15:0] delay_wire_540;
  logic [15:0] delay_wire_541;
  logic [15:0] delay_wire_542;
  logic [15:0] delay_wire_543;
  logic [15:0] delay_wire_544;
  logic [15:0] delay_wire_545;
  logic [15:0] delay_wire_546;
  logic [15:0] delay_wire_547;
  logic [15:0] delay_wire_548;
  logic [15:0] delay_wire_549;
  logic [15:0] delay_wire_550;
  logic [15:0] delay_wire_551;
  logic [15:0] delay_wire_552;
  logic [15:0] delay_wire_553;
  logic [15:0] delay_wire_554;
  logic [15:0] delay_wire_555;
  logic [15:0] delay_wire_556;
  logic [15:0] delay_wire_557;
  logic [15:0] delay_wire_558;
  logic [15:0] delay_wire_559;
  logic [15:0] delay_wire_560;
  logic [15:0] delay_wire_561;
  logic [15:0] delay_wire_562;
  logic [15:0] delay_wire_563;
  logic [15:0] delay_wire_564;
  logic [15:0] delay_wire_565;
  logic [15:0] delay_wire_566;
  logic [15:0] delay_wire_567;
  logic [15:0] delay_wire_568;
  logic [15:0] delay_wire_569;
  logic [15:0] delay_wire_570;
  logic [15:0] delay_wire_571;
  logic [15:0] delay_wire_572;
  logic [15:0] delay_wire_573;
  logic [15:0] delay_wire_574;
  logic [15:0] delay_wire_575;
  logic [15:0] delay_wire_576;
  logic [15:0] delay_wire_577;
  logic [15:0] delay_wire_578;
  logic [15:0] delay_wire_579;
  logic [15:0] delay_wire_580;
  logic [15:0] delay_wire_581;
  logic [15:0] delay_wire_582;
  logic [15:0] delay_wire_583;
  logic [15:0] delay_wire_584;
  logic [15:0] delay_wire_585;
  logic [15:0] delay_wire_586;
  logic [15:0] delay_wire_587;
  logic [15:0] delay_wire_588;
  logic [15:0] delay_wire_589;
  logic [15:0] delay_wire_590;
  logic [15:0] delay_wire_591;
  always @(posedge clk) begin
    delay_wire_527 <= in;
    delay_wire_528 <= delay_wire_527;
    delay_wire_529 <= delay_wire_528;
    delay_wire_530 <= delay_wire_529;
    delay_wire_531 <= delay_wire_530;
    delay_wire_532 <= delay_wire_531;
    delay_wire_533 <= delay_wire_532;
    delay_wire_534 <= delay_wire_533;
    delay_wire_535 <= delay_wire_534;
    delay_wire_536 <= delay_wire_535;
    delay_wire_537 <= delay_wire_536;
    delay_wire_538 <= delay_wire_537;
    delay_wire_539 <= delay_wire_538;
    delay_wire_540 <= delay_wire_539;
    delay_wire_541 <= delay_wire_540;
    delay_wire_542 <= delay_wire_541;
    delay_wire_543 <= delay_wire_542;
    delay_wire_544 <= delay_wire_543;
    delay_wire_545 <= delay_wire_544;
    delay_wire_546 <= delay_wire_545;
    delay_wire_547 <= delay_wire_546;
    delay_wire_548 <= delay_wire_547;
    delay_wire_549 <= delay_wire_548;
    delay_wire_550 <= delay_wire_549;
    delay_wire_551 <= delay_wire_550;
    delay_wire_552 <= delay_wire_551;
    delay_wire_553 <= delay_wire_552;
    delay_wire_554 <= delay_wire_553;
    delay_wire_555 <= delay_wire_554;
    delay_wire_556 <= delay_wire_555;
    delay_wire_557 <= delay_wire_556;
    delay_wire_558 <= delay_wire_557;
    delay_wire_559 <= delay_wire_558;
    delay_wire_560 <= delay_wire_559;
    delay_wire_561 <= delay_wire_560;
    delay_wire_562 <= delay_wire_561;
    delay_wire_563 <= delay_wire_562;
    delay_wire_564 <= delay_wire_563;
    delay_wire_565 <= delay_wire_564;
    delay_wire_566 <= delay_wire_565;
    delay_wire_567 <= delay_wire_566;
    delay_wire_568 <= delay_wire_567;
    delay_wire_569 <= delay_wire_568;
    delay_wire_570 <= delay_wire_569;
    delay_wire_571 <= delay_wire_570;
    delay_wire_572 <= delay_wire_571;
    delay_wire_573 <= delay_wire_572;
    delay_wire_574 <= delay_wire_573;
    delay_wire_575 <= delay_wire_574;
    delay_wire_576 <= delay_wire_575;
    delay_wire_577 <= delay_wire_576;
    delay_wire_578 <= delay_wire_577;
    delay_wire_579 <= delay_wire_578;
    delay_wire_580 <= delay_wire_579;
    delay_wire_581 <= delay_wire_580;
    delay_wire_582 <= delay_wire_581;
    delay_wire_583 <= delay_wire_582;
    delay_wire_584 <= delay_wire_583;
    delay_wire_585 <= delay_wire_584;
    delay_wire_586 <= delay_wire_585;
    delay_wire_587 <= delay_wire_586;
    delay_wire_588 <= delay_wire_587;
    delay_wire_589 <= delay_wire_588;
    delay_wire_590 <= delay_wire_589;
    delay_wire_591 <= delay_wire_590;
  end
  assign out = delay_wire_591;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_592;
  logic [15:0] delay_wire_593;
  logic [15:0] delay_wire_594;
  always @(posedge clk) begin
    delay_wire_592 <= in;
    delay_wire_593 <= delay_wire_592;
    delay_wire_594 <= delay_wire_593;
  end
  assign out = delay_wire_594;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_595;
  logic [15:0] delay_wire_596;
  always @(posedge clk) begin
    delay_wire_595 <= in;
    delay_wire_596 <= delay_wire_595;
  end
  assign out = delay_wire_596;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_597;
  always @(posedge clk) begin
    delay_wire_597 <= in;
  end
  assign out = delay_wire_597;
endmodule

// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(265 + 64cim_s0_y + cim_s0_x)] }
module cim_stencil_op_hcompute_cim_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_write_ctrl_vars[2:0], output op_hcompute_cim_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_write_wen =(on && on2 && op_hcompute_cim_stencil_write_ctrl_vars[0]==0 && op_hcompute_cim_stencil_write_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_write_ctrl_vars[1] <= op_hcompute_cim_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_write_ctrl_vars[2] <= op_hcompute_cim_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_output_stencil[root, cim_output_s0_y, cim_output_s0_x] -> [(396 + 64cim_output_s0_y + cim_output_s0_x)] }
module cim_stencil_op_hcompute_cim_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_output_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_output_stencil_read_ren =(on && on2 && op_hcompute_cim_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_output_stencil_read_ctrl_vars[1]<=57 && op_hcompute_cim_output_stencil_read_ctrl_vars[2]<=57);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_output_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_output_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_output_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==395) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_output_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_output_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_output_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_output_stencil_read_ctrl_vars[1] <= op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_output_stencil_read_ctrl_vars[2] <= op_hcompute_cim_output_stencil_read_ctrl_vars[2] + 1;
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
module cim_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_output_stencil_read_ren,
	input [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_output_stencil_read [8:0] ,
	input op_hcompute_cim_stencil_write_wen,
	input [15:0] op_hcompute_cim_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_cim_stencil_write [0:0] );

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_66_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[0]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_67_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[1]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_68_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[2]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_69_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[3]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_70_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[4]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_71_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[5]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_72_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[6]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_73_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[7]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_74_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[8]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_write_wen_fsm_out;
  cim_stencil_op_hcompute_cim_stencil_write_fsm cim_stencil_op_hcompute_cim_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_write_ctrl_vars( op_hcompute_cim_stencil_write_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_write_wen(op_hcompute_cim_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_output_stencil_read_ren_fsm_out;
  cim_stencil_op_hcompute_cim_output_stencil_read_fsm cim_stencil_op_hcompute_cim_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_output_stencil_read_ctrl_vars( op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_output_stencil_read_ren(op_hcompute_cim_output_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3600];
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_0 = (((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_1 = (((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_1,cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_0 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_1 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_0 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_1 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_0 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_1 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_0 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_1 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_0 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_1 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_0 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_1 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_0 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_1 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_0 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_1 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_0 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_1 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>0)*1+((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>0)*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_cim_stencil_write_wen_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_cim_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// grad_x_stencil has embarassing partition: 0

module grad_x_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_598;
  always @(posedge clk) begin
    delay_wire_598 <= in;
  end
  assign out = delay_wire_598;
endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_599;
  always @(posedge clk) begin
    delay_wire_599 <= in;
  end
  assign out = delay_wire_599;
endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_lxy_stencil_5_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_lxx_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

// { op_hcompute_grad_x_stencil[root, grad_x_s0_y, grad_x_s0_x] -> [(132 + 64grad_x_s0_y + grad_x_s0_x)] }
module grad_x_stencil_op_hcompute_grad_x_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars[2:0], output op_hcompute_grad_x_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_x_stencil_write_wen =(on && on2 && op_hcompute_grad_x_stencil_write_ctrl_vars[0]==0 && op_hcompute_grad_x_stencil_write_ctrl_vars[1]<=61 && op_hcompute_grad_x_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_x_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_x_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_x_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==131) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_x_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_x_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_x_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_x_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_grad_x_stencil_write_ctrl_vars[1] <= op_hcompute_grad_x_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_x_stencil_write_ctrl_vars[2] <= op_hcompute_grad_x_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lxx_stencil[root, lxx_s0_y, lxx_s0_x] -> [(133 + 64lxx_s0_y + lxx_s0_x)] }
module grad_x_stencil_op_hcompute_lxx_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxx_stencil_read_ctrl_vars[2:0], output op_hcompute_lxx_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxx_stencil_read_ren =(on && on2 && op_hcompute_lxx_stencil_read_ctrl_vars[0]==0 && op_hcompute_lxx_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lxx_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxx_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxx_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxx_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxx_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxx_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxx_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxx_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lxx_stencil_read_ctrl_vars[1] <= op_hcompute_lxx_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxx_stencil_read_ctrl_vars[2] <= op_hcompute_lxx_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(133 + 64lxy_s0_y + lxy_s0_x)] }
module grad_x_stencil_op_hcompute_lxy_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxy_stencil_read_ctrl_vars[2:0], output op_hcompute_lxy_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxy_stencil_read_ren =(on && on2 && op_hcompute_lxy_stencil_read_ctrl_vars[0]==0 && op_hcompute_lxy_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lxy_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[1] <= op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2] <= op_hcompute_lxy_stencil_read_ctrl_vars[2] + 1;
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
module grad_x_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_x_stencil_write_wen,
	input [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_grad_x_stencil_write [0:0] ,
	input op_hcompute_lxx_stencil_read_ren,
	input [15:0] op_hcompute_lxx_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxx_stencil_read [0:0] ,
	input op_hcompute_lxy_stencil_read_ren,
	input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxy_stencil_read [0:0] );

    grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_lxy_stencil_5_sr grad_x_stencil_op_hcompute_lxx_stencil_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_read[0]), .out(op_hcompute_lxx_stencil_read[0]));

    grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr grad_x_stencil_op_hcompute_lxy_stencil_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_write[0]), .out(op_hcompute_lxy_stencil_read[0]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_x_stencil_write_wen_fsm_out;
  grad_x_stencil_op_hcompute_grad_x_stencil_write_fsm grad_x_stencil_op_hcompute_grad_x_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_x_stencil_write_ctrl_vars( op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out), .op_hcompute_grad_x_stencil_write_wen(op_hcompute_grad_x_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxx_stencil_read_ren_fsm_out;
  grad_x_stencil_op_hcompute_lxx_stencil_read_fsm grad_x_stencil_op_hcompute_lxx_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxx_stencil_read_ctrl_vars( op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lxx_stencil_read_ren(op_hcompute_lxx_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxy_stencil_read_ren_fsm_out;
  grad_x_stencil_op_hcompute_lxy_stencil_read_fsm grad_x_stencil_op_hcompute_lxy_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxy_stencil_read_ctrl_vars( op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lxy_stencil_read_ren(op_hcompute_lxy_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_0;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_0 = (((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_1;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_1 = (((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2])) - -2);
grad_x_stencil_bank_selector grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector(.d({grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_1,grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_0}));
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_0;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_0 = (((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_1;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_1 = (((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_x_stencil_bank_selector grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_bank_selector(.d({grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_1,grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_0}));
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_0;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_0 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_1;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_1 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_x_stencil_bank_selector grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_bank_selector(.d({grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_1,grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_grad_x_stencil_write_wen_fsm_out) begin
      case( grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_x_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_grad_x_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// grad_y_stencil has embarassing partition: 0

module grad_y_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_600;
  always @(posedge clk) begin
    delay_wire_600 <= in;
  end
  assign out = delay_wire_600;
endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_601;
  always @(posedge clk) begin
    delay_wire_601 <= in;
  end
  assign out = delay_wire_601;
endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_lyy_stencil_3_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_lxy_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

// { op_hcompute_grad_y_stencil[root, grad_y_s0_y, grad_y_s0_x] -> [(132 + 64grad_y_s0_y + grad_y_s0_x)] }
module grad_y_stencil_op_hcompute_grad_y_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars[2:0], output op_hcompute_grad_y_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_y_stencil_write_wen =(on && on2 && op_hcompute_grad_y_stencil_write_ctrl_vars[0]==0 && op_hcompute_grad_y_stencil_write_ctrl_vars[1]<=61 && op_hcompute_grad_y_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_y_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_y_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_y_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==131) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_y_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_y_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_y_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_y_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_grad_y_stencil_write_ctrl_vars[1] <= op_hcompute_grad_y_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_y_stencil_write_ctrl_vars[2] <= op_hcompute_grad_y_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(133 + 64lxy_s0_y + lxy_s0_x)] }
module grad_y_stencil_op_hcompute_lxy_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxy_stencil_read_ctrl_vars[2:0], output op_hcompute_lxy_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxy_stencil_read_ren =(on && on2 && op_hcompute_lxy_stencil_read_ctrl_vars[0]==0 && op_hcompute_lxy_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lxy_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[1] <= op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2] <= op_hcompute_lxy_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lyy_stencil[root, lyy_s0_y, lyy_s0_x] -> [(133 + 64lyy_s0_y + lyy_s0_x)] }
module grad_y_stencil_op_hcompute_lyy_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lyy_stencil_read_ctrl_vars[2:0], output op_hcompute_lyy_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lyy_stencil_read_ren =(on && on2 && op_hcompute_lyy_stencil_read_ctrl_vars[0]==0 && op_hcompute_lyy_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lyy_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lyy_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lyy_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lyy_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lyy_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lyy_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lyy_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lyy_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lyy_stencil_read_ctrl_vars[1] <= op_hcompute_lyy_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lyy_stencil_read_ctrl_vars[2] <= op_hcompute_lyy_stencil_read_ctrl_vars[2] + 1;
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
module grad_y_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_y_stencil_write_wen,
	input [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_grad_y_stencil_write [0:0] ,
	input op_hcompute_lxy_stencil_read_ren,
	input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxy_stencil_read [0:0] ,
	input op_hcompute_lyy_stencil_read_ren,
	input [15:0] op_hcompute_lyy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lyy_stencil_read [0:0] );

    grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_lyy_stencil_3_sr grad_y_stencil_op_hcompute_lxy_stencil_6_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_read[0]), .out(op_hcompute_lxy_stencil_read[0]));

    grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr grad_y_stencil_op_hcompute_lyy_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_write[0]), .out(op_hcompute_lyy_stencil_read[0]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_y_stencil_write_wen_fsm_out;
  grad_y_stencil_op_hcompute_grad_y_stencil_write_fsm grad_y_stencil_op_hcompute_grad_y_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_y_stencil_write_ctrl_vars( op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out), .op_hcompute_grad_y_stencil_write_wen(op_hcompute_grad_y_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxy_stencil_read_ren_fsm_out;
  grad_y_stencil_op_hcompute_lxy_stencil_read_fsm grad_y_stencil_op_hcompute_lxy_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxy_stencil_read_ctrl_vars( op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lxy_stencil_read_ren(op_hcompute_lxy_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lyy_stencil_read_ren_fsm_out;
  grad_y_stencil_op_hcompute_lyy_stencil_read_fsm grad_y_stencil_op_hcompute_lyy_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lyy_stencil_read_ctrl_vars( op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lyy_stencil_read_ren(op_hcompute_lyy_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_0;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_0 = (((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_1;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_1 = (((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2])) - -2);
grad_y_stencil_bank_selector grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector(.d({grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_1,grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_0}));
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_0;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_0 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_1;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_1 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_y_stencil_bank_selector grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_bank_selector(.d({grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_1,grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_0}));
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_0;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_0 = (((-2 + 1*op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_1;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_1 = (((-2 + 1*op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_y_stencil_bank_selector grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_bank_selector(.d({grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_1,grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_grad_y_stencil_write_wen_fsm_out) begin
      case( grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_y_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_grad_y_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lgxx_stencil has embarassing partition: 1

module lgxx_stencil_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_to_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_602;
  always @(posedge clk) begin
    delay_wire_602 <= in;
  end
  assign out = delay_wire_602;
endmodule

// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(264 + 64lgxx_s1_y + lgxx_s1_x)] }
module lgxx_stencil_op_hcompute_lgxx_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_1_write_wen =(on && on2 && op_hcompute_lgxx_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_1_write_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] <= op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] <= op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(265 + 64cim_s0_y + cim_s0_x)] }
module lgxx_stencil_op_hcompute_cim_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_read_ren =(on && on2 && op_hcompute_cim_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_stencil_read_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[1] <= op_hcompute_cim_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2] <= op_hcompute_cim_stencil_read_ctrl_vars[2] + 1;
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
module lgxx_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgxx_stencil_1_write_wen,
	input [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxx_stencil_1_write [0:0] );

    lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_to_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_sr lgxx_stencil_op_hcompute_cim_stencil_62_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxx_stencil_1_write[0]), .out(op_hcompute_cim_stencil_read[0]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_1_write_wen_fsm_out;
  lgxx_stencil_op_hcompute_lgxx_stencil_1_write_fsm lgxx_stencil_op_hcompute_lgxx_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_1_write_ctrl_vars( op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_1_write_wen(op_hcompute_lgxx_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_read_ren_fsm_out;
  lgxx_stencil_op_hcompute_cim_stencil_read_fsm lgxx_stencil_op_hcompute_cim_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_read_ctrl_vars( op_hcompute_cim_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3600];
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_0;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_1;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_embarassing_bank_selector lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector(.d({lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_1,lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_0}));
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_0;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_0 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_1;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_1 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_embarassing_bank_selector lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector(.d({lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_1,lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[1])) - -1))*1+((((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2])) - -1))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        default:bank_0[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lgxx_stencil_clkwrk_dsa0 has embarassing partition: 1

module lgxx_stencil_clkwrk_dsa0_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_603;
  logic [15:0] delay_wire_604;
  logic [15:0] delay_wire_605;
  always @(posedge clk) begin
    delay_wire_603 <= in;
    delay_wire_604 <= delay_wire_603;
    delay_wire_605 <= delay_wire_604;
  end
  assign out = delay_wire_605;
endmodule

// { op_hcompute_lgxx_stencil[root, lgxx_s0_y, lgxx_s0_x] -> [(261 + 64lgxx_s0_y + lgxx_s0_x)] }
module lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_write_wen =(on && on2 && op_hcompute_lgxx_stencil_write_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_write_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==260) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_write_ctrl_vars[1] <= op_hcompute_lgxx_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_write_ctrl_vars[2] <= op_hcompute_lgxx_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(264 + 64lgxx_s1_y + lgxx_s1_x)] }
module lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_1_read_ren =(on && on2 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] + 1;
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
module lgxx_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxx_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxx_stencil_1_read [0:0] ,
	input op_hcompute_lgxx_stencil_write_wen,
	input [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxx_stencil_write [0:0] );

    lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_sr lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[0]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_write_wen_fsm_out;
  lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_fsm lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_write_ctrl_vars( op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_write_wen(op_hcompute_lgxx_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_1_read_ren_fsm_out;
  lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_fsm lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_1_read_ctrl_vars( op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_1_read_ren(op_hcompute_lgxx_stencil_1_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3600];
  logic [15:0] lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_0;
  assign lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_0 = (((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_1;
  assign lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_1 = (((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_clkwrk_dsa0_embarassing_bank_selector lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_bank_selector(.d({lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_1,lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_0}));
  logic [15:0] lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_0;
  assign lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_1;
  assign lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_clkwrk_dsa0_embarassing_bank_selector lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_bank_selector(.d({lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_1,lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[1])) - -1))*1+((((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2])) - -1))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_write_wen_fsm_out) begin
      case( lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxx_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_lgxx_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lgxy_stencil has embarassing partition: 1

module lgxy_stencil_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_to_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_606;
  always @(posedge clk) begin
    delay_wire_606 <= in;
  end
  assign out = delay_wire_606;
endmodule

// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(264 + 64lgxy_s1_y + lgxy_s1_x)] }
module lgxy_stencil_op_hcompute_lgxy_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_1_write_wen =(on && on2 && op_hcompute_lgxy_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_1_write_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] <= op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] <= op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(265 + 64cim_s0_y + cim_s0_x)] }
module lgxy_stencil_op_hcompute_cim_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_read_ren =(on && on2 && op_hcompute_cim_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_stencil_read_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[1] <= op_hcompute_cim_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2] <= op_hcompute_cim_stencil_read_ctrl_vars[2] + 1;
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
module lgxy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgxy_stencil_1_write_wen,
	input [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxy_stencil_1_write [0:0] );

    lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_to_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_sr lgxy_stencil_op_hcompute_cim_stencil_63_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxy_stencil_1_write[0]), .out(op_hcompute_cim_stencil_read[0]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_1_write_wen_fsm_out;
  lgxy_stencil_op_hcompute_lgxy_stencil_1_write_fsm lgxy_stencil_op_hcompute_lgxy_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_1_write_ctrl_vars( op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_1_write_wen(op_hcompute_lgxy_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_read_ren_fsm_out;
  lgxy_stencil_op_hcompute_cim_stencil_read_fsm lgxy_stencil_op_hcompute_cim_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_read_ctrl_vars( op_hcompute_cim_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3600];
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_0;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_1;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_embarassing_bank_selector lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector(.d({lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_1,lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_0}));
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_0;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_0 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_1;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_1 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_embarassing_bank_selector lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector(.d({lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_1,lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1))*1+((((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        default:bank_0[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lgxy_stencil_clkwrk_dsa1 has embarassing partition: 1

module lgxy_stencil_clkwrk_dsa1_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_607;
  logic [15:0] delay_wire_608;
  logic [15:0] delay_wire_609;
  always @(posedge clk) begin
    delay_wire_607 <= in;
    delay_wire_608 <= delay_wire_607;
    delay_wire_609 <= delay_wire_608;
  end
  assign out = delay_wire_609;
endmodule

// { op_hcompute_lgxy_stencil[root, lgxy_s0_y, lgxy_s0_x] -> [(261 + 64lgxy_s0_y + lgxy_s0_x)] }
module lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_write_wen =(on && on2 && op_hcompute_lgxy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_write_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==260) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_write_ctrl_vars[1] <= op_hcompute_lgxy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_write_ctrl_vars[2] <= op_hcompute_lgxy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(264 + 64lgxy_s1_y + lgxy_s1_x)] }
module lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_1_read_ren =(on && on2 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] + 1;
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
module lgxy_stencil_clkwrk_dsa1_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxy_stencil_1_read [0:0] ,
	input op_hcompute_lgxy_stencil_write_wen,
	input [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxy_stencil_write [0:0] );

    lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_sr lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[0]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_write_wen_fsm_out;
  lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_fsm lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_write_ctrl_vars( op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_write_wen(op_hcompute_lgxy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_1_read_ren_fsm_out;
  lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_fsm lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_1_read_ctrl_vars( op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_1_read_ren(op_hcompute_lgxy_stencil_1_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3600];
  logic [15:0] lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_0;
  assign lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_0 = (((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_1;
  assign lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_1 = (((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_clkwrk_dsa1_embarassing_bank_selector lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_bank_selector(.d({lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_1,lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_0}));
  logic [15:0] lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_0;
  assign lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_1;
  assign lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_clkwrk_dsa1_embarassing_bank_selector lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_bank_selector(.d({lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_1,lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[1])) - -1))*1+((((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2])) - -1))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_write_wen_fsm_out) begin
      case( lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxy_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_lgxy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lgyy_stencil has embarassing partition: 1

module lgyy_stencil_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_to_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_610;
  always @(posedge clk) begin
    delay_wire_610 <= in;
  end
  assign out = delay_wire_610;
endmodule

// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(264 + 64lgyy_s1_y + lgyy_s1_x)] }
module lgyy_stencil_op_hcompute_lgyy_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_1_write_wen =(on && on2 && op_hcompute_lgyy_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_1_write_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] <= op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] <= op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(265 + 64cim_s0_y + cim_s0_x)] }
module lgyy_stencil_op_hcompute_cim_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_read_ren =(on && on2 && op_hcompute_cim_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_stencil_read_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[1] <= op_hcompute_cim_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2] <= op_hcompute_cim_stencil_read_ctrl_vars[2] + 1;
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
module lgyy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgyy_stencil_1_write_wen,
	input [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgyy_stencil_1_write [0:0] );

    lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_to_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_sr lgyy_stencil_op_hcompute_cim_stencil_64_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgyy_stencil_1_write[0]), .out(op_hcompute_cim_stencil_read[0]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_1_write_wen_fsm_out;
  lgyy_stencil_op_hcompute_lgyy_stencil_1_write_fsm lgyy_stencil_op_hcompute_lgyy_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_1_write_ctrl_vars( op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_1_write_wen(op_hcompute_lgyy_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_read_ren_fsm_out;
  lgyy_stencil_op_hcompute_cim_stencil_read_fsm lgyy_stencil_op_hcompute_cim_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_read_ctrl_vars( op_hcompute_cim_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3600];
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_0;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_1;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_embarassing_bank_selector lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector(.d({lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_1,lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_0}));
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_0;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_0 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_1;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_1 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_embarassing_bank_selector lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_bank_selector(.d({lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_1,lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1))*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_1_write_wen_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
        default:bank_0[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lgyy_stencil_clkwrk_dsa2 has embarassing partition: 1

module lgyy_stencil_clkwrk_dsa2_embarassing_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  assign out = 0;

endmodule

module lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_611;
  logic [15:0] delay_wire_612;
  logic [15:0] delay_wire_613;
  always @(posedge clk) begin
    delay_wire_611 <= in;
    delay_wire_612 <= delay_wire_611;
    delay_wire_613 <= delay_wire_612;
  end
  assign out = delay_wire_613;
endmodule

// { op_hcompute_lgyy_stencil[root, lgyy_s0_y, lgyy_s0_x] -> [(261 + 64lgyy_s0_y + lgyy_s0_x)] }
module lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_write_wen =(on && on2 && op_hcompute_lgyy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_write_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==260) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_write_ctrl_vars[1] <= op_hcompute_lgyy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_write_ctrl_vars[2] <= op_hcompute_lgyy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(264 + 64lgyy_s1_y + lgyy_s1_x)] }
module lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_1_read_ren =(on && on2 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] + 1;
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
module lgyy_stencil_clkwrk_dsa2_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgyy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgyy_stencil_1_read [0:0] ,
	input op_hcompute_lgyy_stencil_write_wen,
	input [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgyy_stencil_write [0:0] );

    lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_sr lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[0]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_write_wen_fsm_out;
  lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_fsm lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_write_ctrl_vars( op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_write_wen(op_hcompute_lgyy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_1_read_ren_fsm_out;
  lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_fsm lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_1_read_ctrl_vars( op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_1_read_ren(op_hcompute_lgyy_stencil_1_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0]  bank_0 [3600];
  logic [15:0] lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_0;
  assign lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_0 = (((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_1;
  assign lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_1 = (((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_clkwrk_dsa2_embarassing_bank_selector lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_bank_selector(.d({lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_1,lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_0}));
  logic [15:0] lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_0;
  assign lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_1;
  assign lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_clkwrk_dsa2_embarassing_bank_selector lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_bank_selector(.d({lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_1,lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[1])) - -1))*1+((((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2])) - -1))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_write_wen_fsm_out) begin
      case( lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgyy_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_lgyy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lxx_stencil has embarassing partition: 0

module lxx_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_614;
  logic [15:0] delay_wire_615;
  logic [15:0] delay_wire_616;
  logic [15:0] delay_wire_617;
  logic [15:0] delay_wire_618;
  logic [15:0] delay_wire_619;
  logic [15:0] delay_wire_620;
  logic [15:0] delay_wire_621;
  logic [15:0] delay_wire_622;
  logic [15:0] delay_wire_623;
  logic [15:0] delay_wire_624;
  logic [15:0] delay_wire_625;
  logic [15:0] delay_wire_626;
  logic [15:0] delay_wire_627;
  logic [15:0] delay_wire_628;
  logic [15:0] delay_wire_629;
  logic [15:0] delay_wire_630;
  logic [15:0] delay_wire_631;
  logic [15:0] delay_wire_632;
  logic [15:0] delay_wire_633;
  logic [15:0] delay_wire_634;
  logic [15:0] delay_wire_635;
  logic [15:0] delay_wire_636;
  logic [15:0] delay_wire_637;
  logic [15:0] delay_wire_638;
  logic [15:0] delay_wire_639;
  logic [15:0] delay_wire_640;
  logic [15:0] delay_wire_641;
  logic [15:0] delay_wire_642;
  logic [15:0] delay_wire_643;
  logic [15:0] delay_wire_644;
  logic [15:0] delay_wire_645;
  logic [15:0] delay_wire_646;
  logic [15:0] delay_wire_647;
  logic [15:0] delay_wire_648;
  logic [15:0] delay_wire_649;
  logic [15:0] delay_wire_650;
  logic [15:0] delay_wire_651;
  logic [15:0] delay_wire_652;
  logic [15:0] delay_wire_653;
  logic [15:0] delay_wire_654;
  logic [15:0] delay_wire_655;
  logic [15:0] delay_wire_656;
  logic [15:0] delay_wire_657;
  logic [15:0] delay_wire_658;
  logic [15:0] delay_wire_659;
  logic [15:0] delay_wire_660;
  logic [15:0] delay_wire_661;
  logic [15:0] delay_wire_662;
  logic [15:0] delay_wire_663;
  logic [15:0] delay_wire_664;
  logic [15:0] delay_wire_665;
  logic [15:0] delay_wire_666;
  logic [15:0] delay_wire_667;
  logic [15:0] delay_wire_668;
  logic [15:0] delay_wire_669;
  logic [15:0] delay_wire_670;
  logic [15:0] delay_wire_671;
  logic [15:0] delay_wire_672;
  logic [15:0] delay_wire_673;
  logic [15:0] delay_wire_674;
  logic [15:0] delay_wire_675;
  logic [15:0] delay_wire_676;
  logic [15:0] delay_wire_677;
  logic [15:0] delay_wire_678;
  logic [15:0] delay_wire_679;
  logic [15:0] delay_wire_680;
  logic [15:0] delay_wire_681;
  logic [15:0] delay_wire_682;
  logic [15:0] delay_wire_683;
  logic [15:0] delay_wire_684;
  logic [15:0] delay_wire_685;
  logic [15:0] delay_wire_686;
  logic [15:0] delay_wire_687;
  logic [15:0] delay_wire_688;
  logic [15:0] delay_wire_689;
  logic [15:0] delay_wire_690;
  logic [15:0] delay_wire_691;
  logic [15:0] delay_wire_692;
  logic [15:0] delay_wire_693;
  logic [15:0] delay_wire_694;
  logic [15:0] delay_wire_695;
  logic [15:0] delay_wire_696;
  logic [15:0] delay_wire_697;
  logic [15:0] delay_wire_698;
  logic [15:0] delay_wire_699;
  logic [15:0] delay_wire_700;
  logic [15:0] delay_wire_701;
  logic [15:0] delay_wire_702;
  logic [15:0] delay_wire_703;
  logic [15:0] delay_wire_704;
  logic [15:0] delay_wire_705;
  logic [15:0] delay_wire_706;
  logic [15:0] delay_wire_707;
  logic [15:0] delay_wire_708;
  logic [15:0] delay_wire_709;
  logic [15:0] delay_wire_710;
  logic [15:0] delay_wire_711;
  logic [15:0] delay_wire_712;
  logic [15:0] delay_wire_713;
  logic [15:0] delay_wire_714;
  logic [15:0] delay_wire_715;
  logic [15:0] delay_wire_716;
  logic [15:0] delay_wire_717;
  logic [15:0] delay_wire_718;
  logic [15:0] delay_wire_719;
  logic [15:0] delay_wire_720;
  logic [15:0] delay_wire_721;
  logic [15:0] delay_wire_722;
  logic [15:0] delay_wire_723;
  logic [15:0] delay_wire_724;
  logic [15:0] delay_wire_725;
  logic [15:0] delay_wire_726;
  logic [15:0] delay_wire_727;
  logic [15:0] delay_wire_728;
  logic [15:0] delay_wire_729;
  logic [15:0] delay_wire_730;
  logic [15:0] delay_wire_731;
  logic [15:0] delay_wire_732;
  logic [15:0] delay_wire_733;
  logic [15:0] delay_wire_734;
  logic [15:0] delay_wire_735;
  logic [15:0] delay_wire_736;
  logic [15:0] delay_wire_737;
  logic [15:0] delay_wire_738;
  logic [15:0] delay_wire_739;
  logic [15:0] delay_wire_740;
  logic [15:0] delay_wire_741;
  logic [15:0] delay_wire_742;
  logic [15:0] delay_wire_743;
  logic [15:0] delay_wire_744;
  always @(posedge clk) begin
    delay_wire_614 <= in;
    delay_wire_615 <= delay_wire_614;
    delay_wire_616 <= delay_wire_615;
    delay_wire_617 <= delay_wire_616;
    delay_wire_618 <= delay_wire_617;
    delay_wire_619 <= delay_wire_618;
    delay_wire_620 <= delay_wire_619;
    delay_wire_621 <= delay_wire_620;
    delay_wire_622 <= delay_wire_621;
    delay_wire_623 <= delay_wire_622;
    delay_wire_624 <= delay_wire_623;
    delay_wire_625 <= delay_wire_624;
    delay_wire_626 <= delay_wire_625;
    delay_wire_627 <= delay_wire_626;
    delay_wire_628 <= delay_wire_627;
    delay_wire_629 <= delay_wire_628;
    delay_wire_630 <= delay_wire_629;
    delay_wire_631 <= delay_wire_630;
    delay_wire_632 <= delay_wire_631;
    delay_wire_633 <= delay_wire_632;
    delay_wire_634 <= delay_wire_633;
    delay_wire_635 <= delay_wire_634;
    delay_wire_636 <= delay_wire_635;
    delay_wire_637 <= delay_wire_636;
    delay_wire_638 <= delay_wire_637;
    delay_wire_639 <= delay_wire_638;
    delay_wire_640 <= delay_wire_639;
    delay_wire_641 <= delay_wire_640;
    delay_wire_642 <= delay_wire_641;
    delay_wire_643 <= delay_wire_642;
    delay_wire_644 <= delay_wire_643;
    delay_wire_645 <= delay_wire_644;
    delay_wire_646 <= delay_wire_645;
    delay_wire_647 <= delay_wire_646;
    delay_wire_648 <= delay_wire_647;
    delay_wire_649 <= delay_wire_648;
    delay_wire_650 <= delay_wire_649;
    delay_wire_651 <= delay_wire_650;
    delay_wire_652 <= delay_wire_651;
    delay_wire_653 <= delay_wire_652;
    delay_wire_654 <= delay_wire_653;
    delay_wire_655 <= delay_wire_654;
    delay_wire_656 <= delay_wire_655;
    delay_wire_657 <= delay_wire_656;
    delay_wire_658 <= delay_wire_657;
    delay_wire_659 <= delay_wire_658;
    delay_wire_660 <= delay_wire_659;
    delay_wire_661 <= delay_wire_660;
    delay_wire_662 <= delay_wire_661;
    delay_wire_663 <= delay_wire_662;
    delay_wire_664 <= delay_wire_663;
    delay_wire_665 <= delay_wire_664;
    delay_wire_666 <= delay_wire_665;
    delay_wire_667 <= delay_wire_666;
    delay_wire_668 <= delay_wire_667;
    delay_wire_669 <= delay_wire_668;
    delay_wire_670 <= delay_wire_669;
    delay_wire_671 <= delay_wire_670;
    delay_wire_672 <= delay_wire_671;
    delay_wire_673 <= delay_wire_672;
    delay_wire_674 <= delay_wire_673;
    delay_wire_675 <= delay_wire_674;
    delay_wire_676 <= delay_wire_675;
    delay_wire_677 <= delay_wire_676;
    delay_wire_678 <= delay_wire_677;
    delay_wire_679 <= delay_wire_678;
    delay_wire_680 <= delay_wire_679;
    delay_wire_681 <= delay_wire_680;
    delay_wire_682 <= delay_wire_681;
    delay_wire_683 <= delay_wire_682;
    delay_wire_684 <= delay_wire_683;
    delay_wire_685 <= delay_wire_684;
    delay_wire_686 <= delay_wire_685;
    delay_wire_687 <= delay_wire_686;
    delay_wire_688 <= delay_wire_687;
    delay_wire_689 <= delay_wire_688;
    delay_wire_690 <= delay_wire_689;
    delay_wire_691 <= delay_wire_690;
    delay_wire_692 <= delay_wire_691;
    delay_wire_693 <= delay_wire_692;
    delay_wire_694 <= delay_wire_693;
    delay_wire_695 <= delay_wire_694;
    delay_wire_696 <= delay_wire_695;
    delay_wire_697 <= delay_wire_696;
    delay_wire_698 <= delay_wire_697;
    delay_wire_699 <= delay_wire_698;
    delay_wire_700 <= delay_wire_699;
    delay_wire_701 <= delay_wire_700;
    delay_wire_702 <= delay_wire_701;
    delay_wire_703 <= delay_wire_702;
    delay_wire_704 <= delay_wire_703;
    delay_wire_705 <= delay_wire_704;
    delay_wire_706 <= delay_wire_705;
    delay_wire_707 <= delay_wire_706;
    delay_wire_708 <= delay_wire_707;
    delay_wire_709 <= delay_wire_708;
    delay_wire_710 <= delay_wire_709;
    delay_wire_711 <= delay_wire_710;
    delay_wire_712 <= delay_wire_711;
    delay_wire_713 <= delay_wire_712;
    delay_wire_714 <= delay_wire_713;
    delay_wire_715 <= delay_wire_714;
    delay_wire_716 <= delay_wire_715;
    delay_wire_717 <= delay_wire_716;
    delay_wire_718 <= delay_wire_717;
    delay_wire_719 <= delay_wire_718;
    delay_wire_720 <= delay_wire_719;
    delay_wire_721 <= delay_wire_720;
    delay_wire_722 <= delay_wire_721;
    delay_wire_723 <= delay_wire_722;
    delay_wire_724 <= delay_wire_723;
    delay_wire_725 <= delay_wire_724;
    delay_wire_726 <= delay_wire_725;
    delay_wire_727 <= delay_wire_726;
    delay_wire_728 <= delay_wire_727;
    delay_wire_729 <= delay_wire_728;
    delay_wire_730 <= delay_wire_729;
    delay_wire_731 <= delay_wire_730;
    delay_wire_732 <= delay_wire_731;
    delay_wire_733 <= delay_wire_732;
    delay_wire_734 <= delay_wire_733;
    delay_wire_735 <= delay_wire_734;
    delay_wire_736 <= delay_wire_735;
    delay_wire_737 <= delay_wire_736;
    delay_wire_738 <= delay_wire_737;
    delay_wire_739 <= delay_wire_738;
    delay_wire_740 <= delay_wire_739;
    delay_wire_741 <= delay_wire_740;
    delay_wire_742 <= delay_wire_741;
    delay_wire_743 <= delay_wire_742;
    delay_wire_744 <= delay_wire_743;
  end
  assign out = delay_wire_744;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_745;
  logic [15:0] delay_wire_746;
  logic [15:0] delay_wire_747;
  logic [15:0] delay_wire_748;
  logic [15:0] delay_wire_749;
  logic [15:0] delay_wire_750;
  logic [15:0] delay_wire_751;
  logic [15:0] delay_wire_752;
  logic [15:0] delay_wire_753;
  logic [15:0] delay_wire_754;
  logic [15:0] delay_wire_755;
  logic [15:0] delay_wire_756;
  logic [15:0] delay_wire_757;
  logic [15:0] delay_wire_758;
  logic [15:0] delay_wire_759;
  logic [15:0] delay_wire_760;
  logic [15:0] delay_wire_761;
  logic [15:0] delay_wire_762;
  logic [15:0] delay_wire_763;
  logic [15:0] delay_wire_764;
  logic [15:0] delay_wire_765;
  logic [15:0] delay_wire_766;
  logic [15:0] delay_wire_767;
  logic [15:0] delay_wire_768;
  logic [15:0] delay_wire_769;
  logic [15:0] delay_wire_770;
  logic [15:0] delay_wire_771;
  logic [15:0] delay_wire_772;
  logic [15:0] delay_wire_773;
  logic [15:0] delay_wire_774;
  logic [15:0] delay_wire_775;
  logic [15:0] delay_wire_776;
  logic [15:0] delay_wire_777;
  logic [15:0] delay_wire_778;
  logic [15:0] delay_wire_779;
  logic [15:0] delay_wire_780;
  logic [15:0] delay_wire_781;
  logic [15:0] delay_wire_782;
  logic [15:0] delay_wire_783;
  logic [15:0] delay_wire_784;
  logic [15:0] delay_wire_785;
  logic [15:0] delay_wire_786;
  logic [15:0] delay_wire_787;
  logic [15:0] delay_wire_788;
  logic [15:0] delay_wire_789;
  logic [15:0] delay_wire_790;
  logic [15:0] delay_wire_791;
  logic [15:0] delay_wire_792;
  logic [15:0] delay_wire_793;
  logic [15:0] delay_wire_794;
  logic [15:0] delay_wire_795;
  logic [15:0] delay_wire_796;
  logic [15:0] delay_wire_797;
  logic [15:0] delay_wire_798;
  logic [15:0] delay_wire_799;
  logic [15:0] delay_wire_800;
  logic [15:0] delay_wire_801;
  logic [15:0] delay_wire_802;
  logic [15:0] delay_wire_803;
  logic [15:0] delay_wire_804;
  logic [15:0] delay_wire_805;
  logic [15:0] delay_wire_806;
  logic [15:0] delay_wire_807;
  logic [15:0] delay_wire_808;
  logic [15:0] delay_wire_809;
  logic [15:0] delay_wire_810;
  logic [15:0] delay_wire_811;
  logic [15:0] delay_wire_812;
  logic [15:0] delay_wire_813;
  logic [15:0] delay_wire_814;
  logic [15:0] delay_wire_815;
  logic [15:0] delay_wire_816;
  logic [15:0] delay_wire_817;
  logic [15:0] delay_wire_818;
  logic [15:0] delay_wire_819;
  logic [15:0] delay_wire_820;
  logic [15:0] delay_wire_821;
  logic [15:0] delay_wire_822;
  logic [15:0] delay_wire_823;
  logic [15:0] delay_wire_824;
  logic [15:0] delay_wire_825;
  logic [15:0] delay_wire_826;
  logic [15:0] delay_wire_827;
  logic [15:0] delay_wire_828;
  logic [15:0] delay_wire_829;
  logic [15:0] delay_wire_830;
  logic [15:0] delay_wire_831;
  logic [15:0] delay_wire_832;
  logic [15:0] delay_wire_833;
  logic [15:0] delay_wire_834;
  logic [15:0] delay_wire_835;
  logic [15:0] delay_wire_836;
  logic [15:0] delay_wire_837;
  logic [15:0] delay_wire_838;
  logic [15:0] delay_wire_839;
  logic [15:0] delay_wire_840;
  logic [15:0] delay_wire_841;
  logic [15:0] delay_wire_842;
  logic [15:0] delay_wire_843;
  logic [15:0] delay_wire_844;
  logic [15:0] delay_wire_845;
  logic [15:0] delay_wire_846;
  logic [15:0] delay_wire_847;
  logic [15:0] delay_wire_848;
  logic [15:0] delay_wire_849;
  logic [15:0] delay_wire_850;
  logic [15:0] delay_wire_851;
  logic [15:0] delay_wire_852;
  logic [15:0] delay_wire_853;
  logic [15:0] delay_wire_854;
  logic [15:0] delay_wire_855;
  logic [15:0] delay_wire_856;
  logic [15:0] delay_wire_857;
  logic [15:0] delay_wire_858;
  logic [15:0] delay_wire_859;
  logic [15:0] delay_wire_860;
  logic [15:0] delay_wire_861;
  logic [15:0] delay_wire_862;
  logic [15:0] delay_wire_863;
  logic [15:0] delay_wire_864;
  logic [15:0] delay_wire_865;
  logic [15:0] delay_wire_866;
  logic [15:0] delay_wire_867;
  logic [15:0] delay_wire_868;
  logic [15:0] delay_wire_869;
  logic [15:0] delay_wire_870;
  logic [15:0] delay_wire_871;
  logic [15:0] delay_wire_872;
  logic [15:0] delay_wire_873;
  logic [15:0] delay_wire_874;
  always @(posedge clk) begin
    delay_wire_745 <= in;
    delay_wire_746 <= delay_wire_745;
    delay_wire_747 <= delay_wire_746;
    delay_wire_748 <= delay_wire_747;
    delay_wire_749 <= delay_wire_748;
    delay_wire_750 <= delay_wire_749;
    delay_wire_751 <= delay_wire_750;
    delay_wire_752 <= delay_wire_751;
    delay_wire_753 <= delay_wire_752;
    delay_wire_754 <= delay_wire_753;
    delay_wire_755 <= delay_wire_754;
    delay_wire_756 <= delay_wire_755;
    delay_wire_757 <= delay_wire_756;
    delay_wire_758 <= delay_wire_757;
    delay_wire_759 <= delay_wire_758;
    delay_wire_760 <= delay_wire_759;
    delay_wire_761 <= delay_wire_760;
    delay_wire_762 <= delay_wire_761;
    delay_wire_763 <= delay_wire_762;
    delay_wire_764 <= delay_wire_763;
    delay_wire_765 <= delay_wire_764;
    delay_wire_766 <= delay_wire_765;
    delay_wire_767 <= delay_wire_766;
    delay_wire_768 <= delay_wire_767;
    delay_wire_769 <= delay_wire_768;
    delay_wire_770 <= delay_wire_769;
    delay_wire_771 <= delay_wire_770;
    delay_wire_772 <= delay_wire_771;
    delay_wire_773 <= delay_wire_772;
    delay_wire_774 <= delay_wire_773;
    delay_wire_775 <= delay_wire_774;
    delay_wire_776 <= delay_wire_775;
    delay_wire_777 <= delay_wire_776;
    delay_wire_778 <= delay_wire_777;
    delay_wire_779 <= delay_wire_778;
    delay_wire_780 <= delay_wire_779;
    delay_wire_781 <= delay_wire_780;
    delay_wire_782 <= delay_wire_781;
    delay_wire_783 <= delay_wire_782;
    delay_wire_784 <= delay_wire_783;
    delay_wire_785 <= delay_wire_784;
    delay_wire_786 <= delay_wire_785;
    delay_wire_787 <= delay_wire_786;
    delay_wire_788 <= delay_wire_787;
    delay_wire_789 <= delay_wire_788;
    delay_wire_790 <= delay_wire_789;
    delay_wire_791 <= delay_wire_790;
    delay_wire_792 <= delay_wire_791;
    delay_wire_793 <= delay_wire_792;
    delay_wire_794 <= delay_wire_793;
    delay_wire_795 <= delay_wire_794;
    delay_wire_796 <= delay_wire_795;
    delay_wire_797 <= delay_wire_796;
    delay_wire_798 <= delay_wire_797;
    delay_wire_799 <= delay_wire_798;
    delay_wire_800 <= delay_wire_799;
    delay_wire_801 <= delay_wire_800;
    delay_wire_802 <= delay_wire_801;
    delay_wire_803 <= delay_wire_802;
    delay_wire_804 <= delay_wire_803;
    delay_wire_805 <= delay_wire_804;
    delay_wire_806 <= delay_wire_805;
    delay_wire_807 <= delay_wire_806;
    delay_wire_808 <= delay_wire_807;
    delay_wire_809 <= delay_wire_808;
    delay_wire_810 <= delay_wire_809;
    delay_wire_811 <= delay_wire_810;
    delay_wire_812 <= delay_wire_811;
    delay_wire_813 <= delay_wire_812;
    delay_wire_814 <= delay_wire_813;
    delay_wire_815 <= delay_wire_814;
    delay_wire_816 <= delay_wire_815;
    delay_wire_817 <= delay_wire_816;
    delay_wire_818 <= delay_wire_817;
    delay_wire_819 <= delay_wire_818;
    delay_wire_820 <= delay_wire_819;
    delay_wire_821 <= delay_wire_820;
    delay_wire_822 <= delay_wire_821;
    delay_wire_823 <= delay_wire_822;
    delay_wire_824 <= delay_wire_823;
    delay_wire_825 <= delay_wire_824;
    delay_wire_826 <= delay_wire_825;
    delay_wire_827 <= delay_wire_826;
    delay_wire_828 <= delay_wire_827;
    delay_wire_829 <= delay_wire_828;
    delay_wire_830 <= delay_wire_829;
    delay_wire_831 <= delay_wire_830;
    delay_wire_832 <= delay_wire_831;
    delay_wire_833 <= delay_wire_832;
    delay_wire_834 <= delay_wire_833;
    delay_wire_835 <= delay_wire_834;
    delay_wire_836 <= delay_wire_835;
    delay_wire_837 <= delay_wire_836;
    delay_wire_838 <= delay_wire_837;
    delay_wire_839 <= delay_wire_838;
    delay_wire_840 <= delay_wire_839;
    delay_wire_841 <= delay_wire_840;
    delay_wire_842 <= delay_wire_841;
    delay_wire_843 <= delay_wire_842;
    delay_wire_844 <= delay_wire_843;
    delay_wire_845 <= delay_wire_844;
    delay_wire_846 <= delay_wire_845;
    delay_wire_847 <= delay_wire_846;
    delay_wire_848 <= delay_wire_847;
    delay_wire_849 <= delay_wire_848;
    delay_wire_850 <= delay_wire_849;
    delay_wire_851 <= delay_wire_850;
    delay_wire_852 <= delay_wire_851;
    delay_wire_853 <= delay_wire_852;
    delay_wire_854 <= delay_wire_853;
    delay_wire_855 <= delay_wire_854;
    delay_wire_856 <= delay_wire_855;
    delay_wire_857 <= delay_wire_856;
    delay_wire_858 <= delay_wire_857;
    delay_wire_859 <= delay_wire_858;
    delay_wire_860 <= delay_wire_859;
    delay_wire_861 <= delay_wire_860;
    delay_wire_862 <= delay_wire_861;
    delay_wire_863 <= delay_wire_862;
    delay_wire_864 <= delay_wire_863;
    delay_wire_865 <= delay_wire_864;
    delay_wire_866 <= delay_wire_865;
    delay_wire_867 <= delay_wire_866;
    delay_wire_868 <= delay_wire_867;
    delay_wire_869 <= delay_wire_868;
    delay_wire_870 <= delay_wire_869;
    delay_wire_871 <= delay_wire_870;
    delay_wire_872 <= delay_wire_871;
    delay_wire_873 <= delay_wire_872;
    delay_wire_874 <= delay_wire_873;
  end
  assign out = delay_wire_874;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_875;
  logic [15:0] delay_wire_876;
  logic [15:0] delay_wire_877;
  logic [15:0] delay_wire_878;
  logic [15:0] delay_wire_879;
  logic [15:0] delay_wire_880;
  logic [15:0] delay_wire_881;
  logic [15:0] delay_wire_882;
  logic [15:0] delay_wire_883;
  logic [15:0] delay_wire_884;
  logic [15:0] delay_wire_885;
  logic [15:0] delay_wire_886;
  logic [15:0] delay_wire_887;
  logic [15:0] delay_wire_888;
  logic [15:0] delay_wire_889;
  logic [15:0] delay_wire_890;
  logic [15:0] delay_wire_891;
  logic [15:0] delay_wire_892;
  logic [15:0] delay_wire_893;
  logic [15:0] delay_wire_894;
  logic [15:0] delay_wire_895;
  logic [15:0] delay_wire_896;
  logic [15:0] delay_wire_897;
  logic [15:0] delay_wire_898;
  logic [15:0] delay_wire_899;
  logic [15:0] delay_wire_900;
  logic [15:0] delay_wire_901;
  logic [15:0] delay_wire_902;
  logic [15:0] delay_wire_903;
  logic [15:0] delay_wire_904;
  logic [15:0] delay_wire_905;
  logic [15:0] delay_wire_906;
  logic [15:0] delay_wire_907;
  logic [15:0] delay_wire_908;
  logic [15:0] delay_wire_909;
  logic [15:0] delay_wire_910;
  logic [15:0] delay_wire_911;
  logic [15:0] delay_wire_912;
  logic [15:0] delay_wire_913;
  logic [15:0] delay_wire_914;
  logic [15:0] delay_wire_915;
  logic [15:0] delay_wire_916;
  logic [15:0] delay_wire_917;
  logic [15:0] delay_wire_918;
  logic [15:0] delay_wire_919;
  logic [15:0] delay_wire_920;
  logic [15:0] delay_wire_921;
  logic [15:0] delay_wire_922;
  logic [15:0] delay_wire_923;
  logic [15:0] delay_wire_924;
  logic [15:0] delay_wire_925;
  logic [15:0] delay_wire_926;
  logic [15:0] delay_wire_927;
  logic [15:0] delay_wire_928;
  logic [15:0] delay_wire_929;
  logic [15:0] delay_wire_930;
  logic [15:0] delay_wire_931;
  logic [15:0] delay_wire_932;
  logic [15:0] delay_wire_933;
  logic [15:0] delay_wire_934;
  logic [15:0] delay_wire_935;
  logic [15:0] delay_wire_936;
  logic [15:0] delay_wire_937;
  logic [15:0] delay_wire_938;
  logic [15:0] delay_wire_939;
  logic [15:0] delay_wire_940;
  logic [15:0] delay_wire_941;
  logic [15:0] delay_wire_942;
  logic [15:0] delay_wire_943;
  logic [15:0] delay_wire_944;
  logic [15:0] delay_wire_945;
  logic [15:0] delay_wire_946;
  logic [15:0] delay_wire_947;
  logic [15:0] delay_wire_948;
  logic [15:0] delay_wire_949;
  logic [15:0] delay_wire_950;
  logic [15:0] delay_wire_951;
  logic [15:0] delay_wire_952;
  logic [15:0] delay_wire_953;
  logic [15:0] delay_wire_954;
  logic [15:0] delay_wire_955;
  logic [15:0] delay_wire_956;
  logic [15:0] delay_wire_957;
  logic [15:0] delay_wire_958;
  logic [15:0] delay_wire_959;
  logic [15:0] delay_wire_960;
  logic [15:0] delay_wire_961;
  logic [15:0] delay_wire_962;
  logic [15:0] delay_wire_963;
  logic [15:0] delay_wire_964;
  logic [15:0] delay_wire_965;
  logic [15:0] delay_wire_966;
  logic [15:0] delay_wire_967;
  logic [15:0] delay_wire_968;
  logic [15:0] delay_wire_969;
  logic [15:0] delay_wire_970;
  logic [15:0] delay_wire_971;
  logic [15:0] delay_wire_972;
  logic [15:0] delay_wire_973;
  logic [15:0] delay_wire_974;
  logic [15:0] delay_wire_975;
  logic [15:0] delay_wire_976;
  logic [15:0] delay_wire_977;
  logic [15:0] delay_wire_978;
  logic [15:0] delay_wire_979;
  logic [15:0] delay_wire_980;
  logic [15:0] delay_wire_981;
  logic [15:0] delay_wire_982;
  logic [15:0] delay_wire_983;
  logic [15:0] delay_wire_984;
  logic [15:0] delay_wire_985;
  logic [15:0] delay_wire_986;
  logic [15:0] delay_wire_987;
  logic [15:0] delay_wire_988;
  logic [15:0] delay_wire_989;
  logic [15:0] delay_wire_990;
  logic [15:0] delay_wire_991;
  logic [15:0] delay_wire_992;
  logic [15:0] delay_wire_993;
  logic [15:0] delay_wire_994;
  logic [15:0] delay_wire_995;
  logic [15:0] delay_wire_996;
  logic [15:0] delay_wire_997;
  logic [15:0] delay_wire_998;
  logic [15:0] delay_wire_999;
  logic [15:0] delay_wire_1000;
  logic [15:0] delay_wire_1001;
  logic [15:0] delay_wire_1002;
  logic [15:0] delay_wire_1003;
  always @(posedge clk) begin
    delay_wire_875 <= in;
    delay_wire_876 <= delay_wire_875;
    delay_wire_877 <= delay_wire_876;
    delay_wire_878 <= delay_wire_877;
    delay_wire_879 <= delay_wire_878;
    delay_wire_880 <= delay_wire_879;
    delay_wire_881 <= delay_wire_880;
    delay_wire_882 <= delay_wire_881;
    delay_wire_883 <= delay_wire_882;
    delay_wire_884 <= delay_wire_883;
    delay_wire_885 <= delay_wire_884;
    delay_wire_886 <= delay_wire_885;
    delay_wire_887 <= delay_wire_886;
    delay_wire_888 <= delay_wire_887;
    delay_wire_889 <= delay_wire_888;
    delay_wire_890 <= delay_wire_889;
    delay_wire_891 <= delay_wire_890;
    delay_wire_892 <= delay_wire_891;
    delay_wire_893 <= delay_wire_892;
    delay_wire_894 <= delay_wire_893;
    delay_wire_895 <= delay_wire_894;
    delay_wire_896 <= delay_wire_895;
    delay_wire_897 <= delay_wire_896;
    delay_wire_898 <= delay_wire_897;
    delay_wire_899 <= delay_wire_898;
    delay_wire_900 <= delay_wire_899;
    delay_wire_901 <= delay_wire_900;
    delay_wire_902 <= delay_wire_901;
    delay_wire_903 <= delay_wire_902;
    delay_wire_904 <= delay_wire_903;
    delay_wire_905 <= delay_wire_904;
    delay_wire_906 <= delay_wire_905;
    delay_wire_907 <= delay_wire_906;
    delay_wire_908 <= delay_wire_907;
    delay_wire_909 <= delay_wire_908;
    delay_wire_910 <= delay_wire_909;
    delay_wire_911 <= delay_wire_910;
    delay_wire_912 <= delay_wire_911;
    delay_wire_913 <= delay_wire_912;
    delay_wire_914 <= delay_wire_913;
    delay_wire_915 <= delay_wire_914;
    delay_wire_916 <= delay_wire_915;
    delay_wire_917 <= delay_wire_916;
    delay_wire_918 <= delay_wire_917;
    delay_wire_919 <= delay_wire_918;
    delay_wire_920 <= delay_wire_919;
    delay_wire_921 <= delay_wire_920;
    delay_wire_922 <= delay_wire_921;
    delay_wire_923 <= delay_wire_922;
    delay_wire_924 <= delay_wire_923;
    delay_wire_925 <= delay_wire_924;
    delay_wire_926 <= delay_wire_925;
    delay_wire_927 <= delay_wire_926;
    delay_wire_928 <= delay_wire_927;
    delay_wire_929 <= delay_wire_928;
    delay_wire_930 <= delay_wire_929;
    delay_wire_931 <= delay_wire_930;
    delay_wire_932 <= delay_wire_931;
    delay_wire_933 <= delay_wire_932;
    delay_wire_934 <= delay_wire_933;
    delay_wire_935 <= delay_wire_934;
    delay_wire_936 <= delay_wire_935;
    delay_wire_937 <= delay_wire_936;
    delay_wire_938 <= delay_wire_937;
    delay_wire_939 <= delay_wire_938;
    delay_wire_940 <= delay_wire_939;
    delay_wire_941 <= delay_wire_940;
    delay_wire_942 <= delay_wire_941;
    delay_wire_943 <= delay_wire_942;
    delay_wire_944 <= delay_wire_943;
    delay_wire_945 <= delay_wire_944;
    delay_wire_946 <= delay_wire_945;
    delay_wire_947 <= delay_wire_946;
    delay_wire_948 <= delay_wire_947;
    delay_wire_949 <= delay_wire_948;
    delay_wire_950 <= delay_wire_949;
    delay_wire_951 <= delay_wire_950;
    delay_wire_952 <= delay_wire_951;
    delay_wire_953 <= delay_wire_952;
    delay_wire_954 <= delay_wire_953;
    delay_wire_955 <= delay_wire_954;
    delay_wire_956 <= delay_wire_955;
    delay_wire_957 <= delay_wire_956;
    delay_wire_958 <= delay_wire_957;
    delay_wire_959 <= delay_wire_958;
    delay_wire_960 <= delay_wire_959;
    delay_wire_961 <= delay_wire_960;
    delay_wire_962 <= delay_wire_961;
    delay_wire_963 <= delay_wire_962;
    delay_wire_964 <= delay_wire_963;
    delay_wire_965 <= delay_wire_964;
    delay_wire_966 <= delay_wire_965;
    delay_wire_967 <= delay_wire_966;
    delay_wire_968 <= delay_wire_967;
    delay_wire_969 <= delay_wire_968;
    delay_wire_970 <= delay_wire_969;
    delay_wire_971 <= delay_wire_970;
    delay_wire_972 <= delay_wire_971;
    delay_wire_973 <= delay_wire_972;
    delay_wire_974 <= delay_wire_973;
    delay_wire_975 <= delay_wire_974;
    delay_wire_976 <= delay_wire_975;
    delay_wire_977 <= delay_wire_976;
    delay_wire_978 <= delay_wire_977;
    delay_wire_979 <= delay_wire_978;
    delay_wire_980 <= delay_wire_979;
    delay_wire_981 <= delay_wire_980;
    delay_wire_982 <= delay_wire_981;
    delay_wire_983 <= delay_wire_982;
    delay_wire_984 <= delay_wire_983;
    delay_wire_985 <= delay_wire_984;
    delay_wire_986 <= delay_wire_985;
    delay_wire_987 <= delay_wire_986;
    delay_wire_988 <= delay_wire_987;
    delay_wire_989 <= delay_wire_988;
    delay_wire_990 <= delay_wire_989;
    delay_wire_991 <= delay_wire_990;
    delay_wire_992 <= delay_wire_991;
    delay_wire_993 <= delay_wire_992;
    delay_wire_994 <= delay_wire_993;
    delay_wire_995 <= delay_wire_994;
    delay_wire_996 <= delay_wire_995;
    delay_wire_997 <= delay_wire_996;
    delay_wire_998 <= delay_wire_997;
    delay_wire_999 <= delay_wire_998;
    delay_wire_1000 <= delay_wire_999;
    delay_wire_1001 <= delay_wire_1000;
    delay_wire_1002 <= delay_wire_1001;
    delay_wire_1003 <= delay_wire_1002;
  end
  assign out = delay_wire_1003;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1004;
  logic [15:0] delay_wire_1005;
  logic [15:0] delay_wire_1006;
  logic [15:0] delay_wire_1007;
  logic [15:0] delay_wire_1008;
  logic [15:0] delay_wire_1009;
  logic [15:0] delay_wire_1010;
  logic [15:0] delay_wire_1011;
  logic [15:0] delay_wire_1012;
  logic [15:0] delay_wire_1013;
  logic [15:0] delay_wire_1014;
  logic [15:0] delay_wire_1015;
  logic [15:0] delay_wire_1016;
  logic [15:0] delay_wire_1017;
  logic [15:0] delay_wire_1018;
  logic [15:0] delay_wire_1019;
  logic [15:0] delay_wire_1020;
  logic [15:0] delay_wire_1021;
  logic [15:0] delay_wire_1022;
  logic [15:0] delay_wire_1023;
  logic [15:0] delay_wire_1024;
  logic [15:0] delay_wire_1025;
  logic [15:0] delay_wire_1026;
  logic [15:0] delay_wire_1027;
  logic [15:0] delay_wire_1028;
  logic [15:0] delay_wire_1029;
  logic [15:0] delay_wire_1030;
  logic [15:0] delay_wire_1031;
  logic [15:0] delay_wire_1032;
  logic [15:0] delay_wire_1033;
  logic [15:0] delay_wire_1034;
  logic [15:0] delay_wire_1035;
  logic [15:0] delay_wire_1036;
  logic [15:0] delay_wire_1037;
  logic [15:0] delay_wire_1038;
  logic [15:0] delay_wire_1039;
  logic [15:0] delay_wire_1040;
  logic [15:0] delay_wire_1041;
  logic [15:0] delay_wire_1042;
  logic [15:0] delay_wire_1043;
  logic [15:0] delay_wire_1044;
  logic [15:0] delay_wire_1045;
  logic [15:0] delay_wire_1046;
  logic [15:0] delay_wire_1047;
  logic [15:0] delay_wire_1048;
  logic [15:0] delay_wire_1049;
  logic [15:0] delay_wire_1050;
  logic [15:0] delay_wire_1051;
  logic [15:0] delay_wire_1052;
  logic [15:0] delay_wire_1053;
  logic [15:0] delay_wire_1054;
  logic [15:0] delay_wire_1055;
  logic [15:0] delay_wire_1056;
  logic [15:0] delay_wire_1057;
  logic [15:0] delay_wire_1058;
  logic [15:0] delay_wire_1059;
  logic [15:0] delay_wire_1060;
  logic [15:0] delay_wire_1061;
  logic [15:0] delay_wire_1062;
  logic [15:0] delay_wire_1063;
  logic [15:0] delay_wire_1064;
  logic [15:0] delay_wire_1065;
  logic [15:0] delay_wire_1066;
  logic [15:0] delay_wire_1067;
  logic [15:0] delay_wire_1068;
  logic [15:0] delay_wire_1069;
  logic [15:0] delay_wire_1070;
  always @(posedge clk) begin
    delay_wire_1004 <= in;
    delay_wire_1005 <= delay_wire_1004;
    delay_wire_1006 <= delay_wire_1005;
    delay_wire_1007 <= delay_wire_1006;
    delay_wire_1008 <= delay_wire_1007;
    delay_wire_1009 <= delay_wire_1008;
    delay_wire_1010 <= delay_wire_1009;
    delay_wire_1011 <= delay_wire_1010;
    delay_wire_1012 <= delay_wire_1011;
    delay_wire_1013 <= delay_wire_1012;
    delay_wire_1014 <= delay_wire_1013;
    delay_wire_1015 <= delay_wire_1014;
    delay_wire_1016 <= delay_wire_1015;
    delay_wire_1017 <= delay_wire_1016;
    delay_wire_1018 <= delay_wire_1017;
    delay_wire_1019 <= delay_wire_1018;
    delay_wire_1020 <= delay_wire_1019;
    delay_wire_1021 <= delay_wire_1020;
    delay_wire_1022 <= delay_wire_1021;
    delay_wire_1023 <= delay_wire_1022;
    delay_wire_1024 <= delay_wire_1023;
    delay_wire_1025 <= delay_wire_1024;
    delay_wire_1026 <= delay_wire_1025;
    delay_wire_1027 <= delay_wire_1026;
    delay_wire_1028 <= delay_wire_1027;
    delay_wire_1029 <= delay_wire_1028;
    delay_wire_1030 <= delay_wire_1029;
    delay_wire_1031 <= delay_wire_1030;
    delay_wire_1032 <= delay_wire_1031;
    delay_wire_1033 <= delay_wire_1032;
    delay_wire_1034 <= delay_wire_1033;
    delay_wire_1035 <= delay_wire_1034;
    delay_wire_1036 <= delay_wire_1035;
    delay_wire_1037 <= delay_wire_1036;
    delay_wire_1038 <= delay_wire_1037;
    delay_wire_1039 <= delay_wire_1038;
    delay_wire_1040 <= delay_wire_1039;
    delay_wire_1041 <= delay_wire_1040;
    delay_wire_1042 <= delay_wire_1041;
    delay_wire_1043 <= delay_wire_1042;
    delay_wire_1044 <= delay_wire_1043;
    delay_wire_1045 <= delay_wire_1044;
    delay_wire_1046 <= delay_wire_1045;
    delay_wire_1047 <= delay_wire_1046;
    delay_wire_1048 <= delay_wire_1047;
    delay_wire_1049 <= delay_wire_1048;
    delay_wire_1050 <= delay_wire_1049;
    delay_wire_1051 <= delay_wire_1050;
    delay_wire_1052 <= delay_wire_1051;
    delay_wire_1053 <= delay_wire_1052;
    delay_wire_1054 <= delay_wire_1053;
    delay_wire_1055 <= delay_wire_1054;
    delay_wire_1056 <= delay_wire_1055;
    delay_wire_1057 <= delay_wire_1056;
    delay_wire_1058 <= delay_wire_1057;
    delay_wire_1059 <= delay_wire_1058;
    delay_wire_1060 <= delay_wire_1059;
    delay_wire_1061 <= delay_wire_1060;
    delay_wire_1062 <= delay_wire_1061;
    delay_wire_1063 <= delay_wire_1062;
    delay_wire_1064 <= delay_wire_1063;
    delay_wire_1065 <= delay_wire_1064;
    delay_wire_1066 <= delay_wire_1065;
    delay_wire_1067 <= delay_wire_1066;
    delay_wire_1068 <= delay_wire_1067;
    delay_wire_1069 <= delay_wire_1068;
    delay_wire_1070 <= delay_wire_1069;
  end
  assign out = delay_wire_1070;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1071;
  logic [15:0] delay_wire_1072;
  logic [15:0] delay_wire_1073;
  logic [15:0] delay_wire_1074;
  logic [15:0] delay_wire_1075;
  logic [15:0] delay_wire_1076;
  logic [15:0] delay_wire_1077;
  logic [15:0] delay_wire_1078;
  logic [15:0] delay_wire_1079;
  logic [15:0] delay_wire_1080;
  logic [15:0] delay_wire_1081;
  logic [15:0] delay_wire_1082;
  logic [15:0] delay_wire_1083;
  logic [15:0] delay_wire_1084;
  logic [15:0] delay_wire_1085;
  logic [15:0] delay_wire_1086;
  logic [15:0] delay_wire_1087;
  logic [15:0] delay_wire_1088;
  logic [15:0] delay_wire_1089;
  logic [15:0] delay_wire_1090;
  logic [15:0] delay_wire_1091;
  logic [15:0] delay_wire_1092;
  logic [15:0] delay_wire_1093;
  logic [15:0] delay_wire_1094;
  logic [15:0] delay_wire_1095;
  logic [15:0] delay_wire_1096;
  logic [15:0] delay_wire_1097;
  logic [15:0] delay_wire_1098;
  logic [15:0] delay_wire_1099;
  logic [15:0] delay_wire_1100;
  logic [15:0] delay_wire_1101;
  logic [15:0] delay_wire_1102;
  logic [15:0] delay_wire_1103;
  logic [15:0] delay_wire_1104;
  logic [15:0] delay_wire_1105;
  logic [15:0] delay_wire_1106;
  logic [15:0] delay_wire_1107;
  logic [15:0] delay_wire_1108;
  logic [15:0] delay_wire_1109;
  logic [15:0] delay_wire_1110;
  logic [15:0] delay_wire_1111;
  logic [15:0] delay_wire_1112;
  logic [15:0] delay_wire_1113;
  logic [15:0] delay_wire_1114;
  logic [15:0] delay_wire_1115;
  logic [15:0] delay_wire_1116;
  logic [15:0] delay_wire_1117;
  logic [15:0] delay_wire_1118;
  logic [15:0] delay_wire_1119;
  logic [15:0] delay_wire_1120;
  logic [15:0] delay_wire_1121;
  logic [15:0] delay_wire_1122;
  logic [15:0] delay_wire_1123;
  logic [15:0] delay_wire_1124;
  logic [15:0] delay_wire_1125;
  logic [15:0] delay_wire_1126;
  logic [15:0] delay_wire_1127;
  logic [15:0] delay_wire_1128;
  logic [15:0] delay_wire_1129;
  logic [15:0] delay_wire_1130;
  logic [15:0] delay_wire_1131;
  logic [15:0] delay_wire_1132;
  logic [15:0] delay_wire_1133;
  logic [15:0] delay_wire_1134;
  logic [15:0] delay_wire_1135;
  logic [15:0] delay_wire_1136;
  always @(posedge clk) begin
    delay_wire_1071 <= in;
    delay_wire_1072 <= delay_wire_1071;
    delay_wire_1073 <= delay_wire_1072;
    delay_wire_1074 <= delay_wire_1073;
    delay_wire_1075 <= delay_wire_1074;
    delay_wire_1076 <= delay_wire_1075;
    delay_wire_1077 <= delay_wire_1076;
    delay_wire_1078 <= delay_wire_1077;
    delay_wire_1079 <= delay_wire_1078;
    delay_wire_1080 <= delay_wire_1079;
    delay_wire_1081 <= delay_wire_1080;
    delay_wire_1082 <= delay_wire_1081;
    delay_wire_1083 <= delay_wire_1082;
    delay_wire_1084 <= delay_wire_1083;
    delay_wire_1085 <= delay_wire_1084;
    delay_wire_1086 <= delay_wire_1085;
    delay_wire_1087 <= delay_wire_1086;
    delay_wire_1088 <= delay_wire_1087;
    delay_wire_1089 <= delay_wire_1088;
    delay_wire_1090 <= delay_wire_1089;
    delay_wire_1091 <= delay_wire_1090;
    delay_wire_1092 <= delay_wire_1091;
    delay_wire_1093 <= delay_wire_1092;
    delay_wire_1094 <= delay_wire_1093;
    delay_wire_1095 <= delay_wire_1094;
    delay_wire_1096 <= delay_wire_1095;
    delay_wire_1097 <= delay_wire_1096;
    delay_wire_1098 <= delay_wire_1097;
    delay_wire_1099 <= delay_wire_1098;
    delay_wire_1100 <= delay_wire_1099;
    delay_wire_1101 <= delay_wire_1100;
    delay_wire_1102 <= delay_wire_1101;
    delay_wire_1103 <= delay_wire_1102;
    delay_wire_1104 <= delay_wire_1103;
    delay_wire_1105 <= delay_wire_1104;
    delay_wire_1106 <= delay_wire_1105;
    delay_wire_1107 <= delay_wire_1106;
    delay_wire_1108 <= delay_wire_1107;
    delay_wire_1109 <= delay_wire_1108;
    delay_wire_1110 <= delay_wire_1109;
    delay_wire_1111 <= delay_wire_1110;
    delay_wire_1112 <= delay_wire_1111;
    delay_wire_1113 <= delay_wire_1112;
    delay_wire_1114 <= delay_wire_1113;
    delay_wire_1115 <= delay_wire_1114;
    delay_wire_1116 <= delay_wire_1115;
    delay_wire_1117 <= delay_wire_1116;
    delay_wire_1118 <= delay_wire_1117;
    delay_wire_1119 <= delay_wire_1118;
    delay_wire_1120 <= delay_wire_1119;
    delay_wire_1121 <= delay_wire_1120;
    delay_wire_1122 <= delay_wire_1121;
    delay_wire_1123 <= delay_wire_1122;
    delay_wire_1124 <= delay_wire_1123;
    delay_wire_1125 <= delay_wire_1124;
    delay_wire_1126 <= delay_wire_1125;
    delay_wire_1127 <= delay_wire_1126;
    delay_wire_1128 <= delay_wire_1127;
    delay_wire_1129 <= delay_wire_1128;
    delay_wire_1130 <= delay_wire_1129;
    delay_wire_1131 <= delay_wire_1130;
    delay_wire_1132 <= delay_wire_1131;
    delay_wire_1133 <= delay_wire_1132;
    delay_wire_1134 <= delay_wire_1133;
    delay_wire_1135 <= delay_wire_1134;
    delay_wire_1136 <= delay_wire_1135;
  end
  assign out = delay_wire_1136;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1137;
  logic [15:0] delay_wire_1138;
  logic [15:0] delay_wire_1139;
  logic [15:0] delay_wire_1140;
  logic [15:0] delay_wire_1141;
  logic [15:0] delay_wire_1142;
  logic [15:0] delay_wire_1143;
  logic [15:0] delay_wire_1144;
  logic [15:0] delay_wire_1145;
  logic [15:0] delay_wire_1146;
  logic [15:0] delay_wire_1147;
  logic [15:0] delay_wire_1148;
  logic [15:0] delay_wire_1149;
  logic [15:0] delay_wire_1150;
  logic [15:0] delay_wire_1151;
  logic [15:0] delay_wire_1152;
  logic [15:0] delay_wire_1153;
  logic [15:0] delay_wire_1154;
  logic [15:0] delay_wire_1155;
  logic [15:0] delay_wire_1156;
  logic [15:0] delay_wire_1157;
  logic [15:0] delay_wire_1158;
  logic [15:0] delay_wire_1159;
  logic [15:0] delay_wire_1160;
  logic [15:0] delay_wire_1161;
  logic [15:0] delay_wire_1162;
  logic [15:0] delay_wire_1163;
  logic [15:0] delay_wire_1164;
  logic [15:0] delay_wire_1165;
  logic [15:0] delay_wire_1166;
  logic [15:0] delay_wire_1167;
  logic [15:0] delay_wire_1168;
  logic [15:0] delay_wire_1169;
  logic [15:0] delay_wire_1170;
  logic [15:0] delay_wire_1171;
  logic [15:0] delay_wire_1172;
  logic [15:0] delay_wire_1173;
  logic [15:0] delay_wire_1174;
  logic [15:0] delay_wire_1175;
  logic [15:0] delay_wire_1176;
  logic [15:0] delay_wire_1177;
  logic [15:0] delay_wire_1178;
  logic [15:0] delay_wire_1179;
  logic [15:0] delay_wire_1180;
  logic [15:0] delay_wire_1181;
  logic [15:0] delay_wire_1182;
  logic [15:0] delay_wire_1183;
  logic [15:0] delay_wire_1184;
  logic [15:0] delay_wire_1185;
  logic [15:0] delay_wire_1186;
  logic [15:0] delay_wire_1187;
  logic [15:0] delay_wire_1188;
  logic [15:0] delay_wire_1189;
  logic [15:0] delay_wire_1190;
  logic [15:0] delay_wire_1191;
  logic [15:0] delay_wire_1192;
  logic [15:0] delay_wire_1193;
  logic [15:0] delay_wire_1194;
  logic [15:0] delay_wire_1195;
  logic [15:0] delay_wire_1196;
  logic [15:0] delay_wire_1197;
  logic [15:0] delay_wire_1198;
  logic [15:0] delay_wire_1199;
  logic [15:0] delay_wire_1200;
  logic [15:0] delay_wire_1201;
  always @(posedge clk) begin
    delay_wire_1137 <= in;
    delay_wire_1138 <= delay_wire_1137;
    delay_wire_1139 <= delay_wire_1138;
    delay_wire_1140 <= delay_wire_1139;
    delay_wire_1141 <= delay_wire_1140;
    delay_wire_1142 <= delay_wire_1141;
    delay_wire_1143 <= delay_wire_1142;
    delay_wire_1144 <= delay_wire_1143;
    delay_wire_1145 <= delay_wire_1144;
    delay_wire_1146 <= delay_wire_1145;
    delay_wire_1147 <= delay_wire_1146;
    delay_wire_1148 <= delay_wire_1147;
    delay_wire_1149 <= delay_wire_1148;
    delay_wire_1150 <= delay_wire_1149;
    delay_wire_1151 <= delay_wire_1150;
    delay_wire_1152 <= delay_wire_1151;
    delay_wire_1153 <= delay_wire_1152;
    delay_wire_1154 <= delay_wire_1153;
    delay_wire_1155 <= delay_wire_1154;
    delay_wire_1156 <= delay_wire_1155;
    delay_wire_1157 <= delay_wire_1156;
    delay_wire_1158 <= delay_wire_1157;
    delay_wire_1159 <= delay_wire_1158;
    delay_wire_1160 <= delay_wire_1159;
    delay_wire_1161 <= delay_wire_1160;
    delay_wire_1162 <= delay_wire_1161;
    delay_wire_1163 <= delay_wire_1162;
    delay_wire_1164 <= delay_wire_1163;
    delay_wire_1165 <= delay_wire_1164;
    delay_wire_1166 <= delay_wire_1165;
    delay_wire_1167 <= delay_wire_1166;
    delay_wire_1168 <= delay_wire_1167;
    delay_wire_1169 <= delay_wire_1168;
    delay_wire_1170 <= delay_wire_1169;
    delay_wire_1171 <= delay_wire_1170;
    delay_wire_1172 <= delay_wire_1171;
    delay_wire_1173 <= delay_wire_1172;
    delay_wire_1174 <= delay_wire_1173;
    delay_wire_1175 <= delay_wire_1174;
    delay_wire_1176 <= delay_wire_1175;
    delay_wire_1177 <= delay_wire_1176;
    delay_wire_1178 <= delay_wire_1177;
    delay_wire_1179 <= delay_wire_1178;
    delay_wire_1180 <= delay_wire_1179;
    delay_wire_1181 <= delay_wire_1180;
    delay_wire_1182 <= delay_wire_1181;
    delay_wire_1183 <= delay_wire_1182;
    delay_wire_1184 <= delay_wire_1183;
    delay_wire_1185 <= delay_wire_1184;
    delay_wire_1186 <= delay_wire_1185;
    delay_wire_1187 <= delay_wire_1186;
    delay_wire_1188 <= delay_wire_1187;
    delay_wire_1189 <= delay_wire_1188;
    delay_wire_1190 <= delay_wire_1189;
    delay_wire_1191 <= delay_wire_1190;
    delay_wire_1192 <= delay_wire_1191;
    delay_wire_1193 <= delay_wire_1192;
    delay_wire_1194 <= delay_wire_1193;
    delay_wire_1195 <= delay_wire_1194;
    delay_wire_1196 <= delay_wire_1195;
    delay_wire_1197 <= delay_wire_1196;
    delay_wire_1198 <= delay_wire_1197;
    delay_wire_1199 <= delay_wire_1198;
    delay_wire_1200 <= delay_wire_1199;
    delay_wire_1201 <= delay_wire_1200;
  end
  assign out = delay_wire_1201;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1202;
  logic [15:0] delay_wire_1203;
  logic [15:0] delay_wire_1204;
  always @(posedge clk) begin
    delay_wire_1202 <= in;
    delay_wire_1203 <= delay_wire_1202;
    delay_wire_1204 <= delay_wire_1203;
  end
  assign out = delay_wire_1204;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1205;
  always @(posedge clk) begin
    delay_wire_1205 <= in;
  end
  assign out = delay_wire_1205;
endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1206;
  logic [15:0] delay_wire_1207;
  always @(posedge clk) begin
    delay_wire_1206 <= in;
    delay_wire_1207 <= delay_wire_1206;
  end
  assign out = delay_wire_1207;
endmodule

// { op_hcompute_lxx_stencil[root, lxx_s0_y, lxx_s0_x] -> [(133 + 64lxx_s0_y + lxx_s0_x)] }
module lxx_stencil_op_hcompute_lxx_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxx_stencil_write_ctrl_vars[2:0], output op_hcompute_lxx_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxx_stencil_write_wen =(on && on2 && op_hcompute_lxx_stencil_write_ctrl_vars[0]==0 && op_hcompute_lxx_stencil_write_ctrl_vars[1]<=61 && op_hcompute_lxx_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxx_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxx_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxx_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxx_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxx_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxx_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxx_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lxx_stencil_write_ctrl_vars[1] <= op_hcompute_lxx_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxx_stencil_write_ctrl_vars[2] <= op_hcompute_lxx_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(264 + 64lgxx_s1_y + lgxx_s1_x)] }
module lxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_1_read_ren =(on && on2 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] + 1;
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
module lxx_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxx_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxx_stencil_1_read [8:0] ,
	input op_hcompute_lxx_stencil_write_wen,
	input [15:0] op_hcompute_lxx_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lxx_stencil_write [0:0] );

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_35_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[0]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_36_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[1]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_37_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[2]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_38_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[3]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_39_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[4]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_40_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[5]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_41_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[6]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_42_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[7]));

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_43_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]), .out(op_hcompute_lgxx_stencil_1_read[8]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxx_stencil_write_wen_fsm_out;
  lxx_stencil_op_hcompute_lxx_stencil_write_fsm lxx_stencil_op_hcompute_lxx_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxx_stencil_write_ctrl_vars( op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lxx_stencil_write_wen(op_hcompute_lxx_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_1_read_ren_fsm_out;
  lxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm lxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_1_read_ctrl_vars( op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_1_read_ren(op_hcompute_lgxx_stencil_1_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_0 = (((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_1 = (((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_1,lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_0 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_1 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_0 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_0 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_1 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_1 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_1 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_0 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_1 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_0 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_1 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_0 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lxx_stencil_write_wen_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lxx_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_lxx_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lxy_stencil has embarassing partition: 0

module lxy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1208;
  logic [15:0] delay_wire_1209;
  logic [15:0] delay_wire_1210;
  logic [15:0] delay_wire_1211;
  logic [15:0] delay_wire_1212;
  logic [15:0] delay_wire_1213;
  logic [15:0] delay_wire_1214;
  logic [15:0] delay_wire_1215;
  logic [15:0] delay_wire_1216;
  logic [15:0] delay_wire_1217;
  logic [15:0] delay_wire_1218;
  logic [15:0] delay_wire_1219;
  logic [15:0] delay_wire_1220;
  logic [15:0] delay_wire_1221;
  logic [15:0] delay_wire_1222;
  logic [15:0] delay_wire_1223;
  logic [15:0] delay_wire_1224;
  logic [15:0] delay_wire_1225;
  logic [15:0] delay_wire_1226;
  logic [15:0] delay_wire_1227;
  logic [15:0] delay_wire_1228;
  logic [15:0] delay_wire_1229;
  logic [15:0] delay_wire_1230;
  logic [15:0] delay_wire_1231;
  logic [15:0] delay_wire_1232;
  logic [15:0] delay_wire_1233;
  logic [15:0] delay_wire_1234;
  logic [15:0] delay_wire_1235;
  logic [15:0] delay_wire_1236;
  logic [15:0] delay_wire_1237;
  logic [15:0] delay_wire_1238;
  logic [15:0] delay_wire_1239;
  logic [15:0] delay_wire_1240;
  logic [15:0] delay_wire_1241;
  logic [15:0] delay_wire_1242;
  logic [15:0] delay_wire_1243;
  logic [15:0] delay_wire_1244;
  logic [15:0] delay_wire_1245;
  logic [15:0] delay_wire_1246;
  logic [15:0] delay_wire_1247;
  logic [15:0] delay_wire_1248;
  logic [15:0] delay_wire_1249;
  logic [15:0] delay_wire_1250;
  logic [15:0] delay_wire_1251;
  logic [15:0] delay_wire_1252;
  logic [15:0] delay_wire_1253;
  logic [15:0] delay_wire_1254;
  logic [15:0] delay_wire_1255;
  logic [15:0] delay_wire_1256;
  logic [15:0] delay_wire_1257;
  logic [15:0] delay_wire_1258;
  logic [15:0] delay_wire_1259;
  logic [15:0] delay_wire_1260;
  logic [15:0] delay_wire_1261;
  logic [15:0] delay_wire_1262;
  logic [15:0] delay_wire_1263;
  logic [15:0] delay_wire_1264;
  logic [15:0] delay_wire_1265;
  logic [15:0] delay_wire_1266;
  logic [15:0] delay_wire_1267;
  logic [15:0] delay_wire_1268;
  logic [15:0] delay_wire_1269;
  logic [15:0] delay_wire_1270;
  logic [15:0] delay_wire_1271;
  logic [15:0] delay_wire_1272;
  logic [15:0] delay_wire_1273;
  logic [15:0] delay_wire_1274;
  logic [15:0] delay_wire_1275;
  logic [15:0] delay_wire_1276;
  logic [15:0] delay_wire_1277;
  logic [15:0] delay_wire_1278;
  logic [15:0] delay_wire_1279;
  logic [15:0] delay_wire_1280;
  logic [15:0] delay_wire_1281;
  logic [15:0] delay_wire_1282;
  logic [15:0] delay_wire_1283;
  logic [15:0] delay_wire_1284;
  logic [15:0] delay_wire_1285;
  logic [15:0] delay_wire_1286;
  logic [15:0] delay_wire_1287;
  logic [15:0] delay_wire_1288;
  logic [15:0] delay_wire_1289;
  logic [15:0] delay_wire_1290;
  logic [15:0] delay_wire_1291;
  logic [15:0] delay_wire_1292;
  logic [15:0] delay_wire_1293;
  logic [15:0] delay_wire_1294;
  logic [15:0] delay_wire_1295;
  logic [15:0] delay_wire_1296;
  logic [15:0] delay_wire_1297;
  logic [15:0] delay_wire_1298;
  logic [15:0] delay_wire_1299;
  logic [15:0] delay_wire_1300;
  logic [15:0] delay_wire_1301;
  logic [15:0] delay_wire_1302;
  logic [15:0] delay_wire_1303;
  logic [15:0] delay_wire_1304;
  logic [15:0] delay_wire_1305;
  logic [15:0] delay_wire_1306;
  logic [15:0] delay_wire_1307;
  logic [15:0] delay_wire_1308;
  logic [15:0] delay_wire_1309;
  logic [15:0] delay_wire_1310;
  logic [15:0] delay_wire_1311;
  logic [15:0] delay_wire_1312;
  logic [15:0] delay_wire_1313;
  logic [15:0] delay_wire_1314;
  logic [15:0] delay_wire_1315;
  logic [15:0] delay_wire_1316;
  logic [15:0] delay_wire_1317;
  logic [15:0] delay_wire_1318;
  logic [15:0] delay_wire_1319;
  logic [15:0] delay_wire_1320;
  logic [15:0] delay_wire_1321;
  logic [15:0] delay_wire_1322;
  logic [15:0] delay_wire_1323;
  logic [15:0] delay_wire_1324;
  logic [15:0] delay_wire_1325;
  logic [15:0] delay_wire_1326;
  logic [15:0] delay_wire_1327;
  logic [15:0] delay_wire_1328;
  logic [15:0] delay_wire_1329;
  logic [15:0] delay_wire_1330;
  logic [15:0] delay_wire_1331;
  logic [15:0] delay_wire_1332;
  logic [15:0] delay_wire_1333;
  logic [15:0] delay_wire_1334;
  logic [15:0] delay_wire_1335;
  logic [15:0] delay_wire_1336;
  logic [15:0] delay_wire_1337;
  logic [15:0] delay_wire_1338;
  always @(posedge clk) begin
    delay_wire_1208 <= in;
    delay_wire_1209 <= delay_wire_1208;
    delay_wire_1210 <= delay_wire_1209;
    delay_wire_1211 <= delay_wire_1210;
    delay_wire_1212 <= delay_wire_1211;
    delay_wire_1213 <= delay_wire_1212;
    delay_wire_1214 <= delay_wire_1213;
    delay_wire_1215 <= delay_wire_1214;
    delay_wire_1216 <= delay_wire_1215;
    delay_wire_1217 <= delay_wire_1216;
    delay_wire_1218 <= delay_wire_1217;
    delay_wire_1219 <= delay_wire_1218;
    delay_wire_1220 <= delay_wire_1219;
    delay_wire_1221 <= delay_wire_1220;
    delay_wire_1222 <= delay_wire_1221;
    delay_wire_1223 <= delay_wire_1222;
    delay_wire_1224 <= delay_wire_1223;
    delay_wire_1225 <= delay_wire_1224;
    delay_wire_1226 <= delay_wire_1225;
    delay_wire_1227 <= delay_wire_1226;
    delay_wire_1228 <= delay_wire_1227;
    delay_wire_1229 <= delay_wire_1228;
    delay_wire_1230 <= delay_wire_1229;
    delay_wire_1231 <= delay_wire_1230;
    delay_wire_1232 <= delay_wire_1231;
    delay_wire_1233 <= delay_wire_1232;
    delay_wire_1234 <= delay_wire_1233;
    delay_wire_1235 <= delay_wire_1234;
    delay_wire_1236 <= delay_wire_1235;
    delay_wire_1237 <= delay_wire_1236;
    delay_wire_1238 <= delay_wire_1237;
    delay_wire_1239 <= delay_wire_1238;
    delay_wire_1240 <= delay_wire_1239;
    delay_wire_1241 <= delay_wire_1240;
    delay_wire_1242 <= delay_wire_1241;
    delay_wire_1243 <= delay_wire_1242;
    delay_wire_1244 <= delay_wire_1243;
    delay_wire_1245 <= delay_wire_1244;
    delay_wire_1246 <= delay_wire_1245;
    delay_wire_1247 <= delay_wire_1246;
    delay_wire_1248 <= delay_wire_1247;
    delay_wire_1249 <= delay_wire_1248;
    delay_wire_1250 <= delay_wire_1249;
    delay_wire_1251 <= delay_wire_1250;
    delay_wire_1252 <= delay_wire_1251;
    delay_wire_1253 <= delay_wire_1252;
    delay_wire_1254 <= delay_wire_1253;
    delay_wire_1255 <= delay_wire_1254;
    delay_wire_1256 <= delay_wire_1255;
    delay_wire_1257 <= delay_wire_1256;
    delay_wire_1258 <= delay_wire_1257;
    delay_wire_1259 <= delay_wire_1258;
    delay_wire_1260 <= delay_wire_1259;
    delay_wire_1261 <= delay_wire_1260;
    delay_wire_1262 <= delay_wire_1261;
    delay_wire_1263 <= delay_wire_1262;
    delay_wire_1264 <= delay_wire_1263;
    delay_wire_1265 <= delay_wire_1264;
    delay_wire_1266 <= delay_wire_1265;
    delay_wire_1267 <= delay_wire_1266;
    delay_wire_1268 <= delay_wire_1267;
    delay_wire_1269 <= delay_wire_1268;
    delay_wire_1270 <= delay_wire_1269;
    delay_wire_1271 <= delay_wire_1270;
    delay_wire_1272 <= delay_wire_1271;
    delay_wire_1273 <= delay_wire_1272;
    delay_wire_1274 <= delay_wire_1273;
    delay_wire_1275 <= delay_wire_1274;
    delay_wire_1276 <= delay_wire_1275;
    delay_wire_1277 <= delay_wire_1276;
    delay_wire_1278 <= delay_wire_1277;
    delay_wire_1279 <= delay_wire_1278;
    delay_wire_1280 <= delay_wire_1279;
    delay_wire_1281 <= delay_wire_1280;
    delay_wire_1282 <= delay_wire_1281;
    delay_wire_1283 <= delay_wire_1282;
    delay_wire_1284 <= delay_wire_1283;
    delay_wire_1285 <= delay_wire_1284;
    delay_wire_1286 <= delay_wire_1285;
    delay_wire_1287 <= delay_wire_1286;
    delay_wire_1288 <= delay_wire_1287;
    delay_wire_1289 <= delay_wire_1288;
    delay_wire_1290 <= delay_wire_1289;
    delay_wire_1291 <= delay_wire_1290;
    delay_wire_1292 <= delay_wire_1291;
    delay_wire_1293 <= delay_wire_1292;
    delay_wire_1294 <= delay_wire_1293;
    delay_wire_1295 <= delay_wire_1294;
    delay_wire_1296 <= delay_wire_1295;
    delay_wire_1297 <= delay_wire_1296;
    delay_wire_1298 <= delay_wire_1297;
    delay_wire_1299 <= delay_wire_1298;
    delay_wire_1300 <= delay_wire_1299;
    delay_wire_1301 <= delay_wire_1300;
    delay_wire_1302 <= delay_wire_1301;
    delay_wire_1303 <= delay_wire_1302;
    delay_wire_1304 <= delay_wire_1303;
    delay_wire_1305 <= delay_wire_1304;
    delay_wire_1306 <= delay_wire_1305;
    delay_wire_1307 <= delay_wire_1306;
    delay_wire_1308 <= delay_wire_1307;
    delay_wire_1309 <= delay_wire_1308;
    delay_wire_1310 <= delay_wire_1309;
    delay_wire_1311 <= delay_wire_1310;
    delay_wire_1312 <= delay_wire_1311;
    delay_wire_1313 <= delay_wire_1312;
    delay_wire_1314 <= delay_wire_1313;
    delay_wire_1315 <= delay_wire_1314;
    delay_wire_1316 <= delay_wire_1315;
    delay_wire_1317 <= delay_wire_1316;
    delay_wire_1318 <= delay_wire_1317;
    delay_wire_1319 <= delay_wire_1318;
    delay_wire_1320 <= delay_wire_1319;
    delay_wire_1321 <= delay_wire_1320;
    delay_wire_1322 <= delay_wire_1321;
    delay_wire_1323 <= delay_wire_1322;
    delay_wire_1324 <= delay_wire_1323;
    delay_wire_1325 <= delay_wire_1324;
    delay_wire_1326 <= delay_wire_1325;
    delay_wire_1327 <= delay_wire_1326;
    delay_wire_1328 <= delay_wire_1327;
    delay_wire_1329 <= delay_wire_1328;
    delay_wire_1330 <= delay_wire_1329;
    delay_wire_1331 <= delay_wire_1330;
    delay_wire_1332 <= delay_wire_1331;
    delay_wire_1333 <= delay_wire_1332;
    delay_wire_1334 <= delay_wire_1333;
    delay_wire_1335 <= delay_wire_1334;
    delay_wire_1336 <= delay_wire_1335;
    delay_wire_1337 <= delay_wire_1336;
    delay_wire_1338 <= delay_wire_1337;
  end
  assign out = delay_wire_1338;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1339;
  logic [15:0] delay_wire_1340;
  logic [15:0] delay_wire_1341;
  logic [15:0] delay_wire_1342;
  logic [15:0] delay_wire_1343;
  logic [15:0] delay_wire_1344;
  logic [15:0] delay_wire_1345;
  logic [15:0] delay_wire_1346;
  logic [15:0] delay_wire_1347;
  logic [15:0] delay_wire_1348;
  logic [15:0] delay_wire_1349;
  logic [15:0] delay_wire_1350;
  logic [15:0] delay_wire_1351;
  logic [15:0] delay_wire_1352;
  logic [15:0] delay_wire_1353;
  logic [15:0] delay_wire_1354;
  logic [15:0] delay_wire_1355;
  logic [15:0] delay_wire_1356;
  logic [15:0] delay_wire_1357;
  logic [15:0] delay_wire_1358;
  logic [15:0] delay_wire_1359;
  logic [15:0] delay_wire_1360;
  logic [15:0] delay_wire_1361;
  logic [15:0] delay_wire_1362;
  logic [15:0] delay_wire_1363;
  logic [15:0] delay_wire_1364;
  logic [15:0] delay_wire_1365;
  logic [15:0] delay_wire_1366;
  logic [15:0] delay_wire_1367;
  logic [15:0] delay_wire_1368;
  logic [15:0] delay_wire_1369;
  logic [15:0] delay_wire_1370;
  logic [15:0] delay_wire_1371;
  logic [15:0] delay_wire_1372;
  logic [15:0] delay_wire_1373;
  logic [15:0] delay_wire_1374;
  logic [15:0] delay_wire_1375;
  logic [15:0] delay_wire_1376;
  logic [15:0] delay_wire_1377;
  logic [15:0] delay_wire_1378;
  logic [15:0] delay_wire_1379;
  logic [15:0] delay_wire_1380;
  logic [15:0] delay_wire_1381;
  logic [15:0] delay_wire_1382;
  logic [15:0] delay_wire_1383;
  logic [15:0] delay_wire_1384;
  logic [15:0] delay_wire_1385;
  logic [15:0] delay_wire_1386;
  logic [15:0] delay_wire_1387;
  logic [15:0] delay_wire_1388;
  logic [15:0] delay_wire_1389;
  logic [15:0] delay_wire_1390;
  logic [15:0] delay_wire_1391;
  logic [15:0] delay_wire_1392;
  logic [15:0] delay_wire_1393;
  logic [15:0] delay_wire_1394;
  logic [15:0] delay_wire_1395;
  logic [15:0] delay_wire_1396;
  logic [15:0] delay_wire_1397;
  logic [15:0] delay_wire_1398;
  logic [15:0] delay_wire_1399;
  logic [15:0] delay_wire_1400;
  logic [15:0] delay_wire_1401;
  logic [15:0] delay_wire_1402;
  logic [15:0] delay_wire_1403;
  logic [15:0] delay_wire_1404;
  logic [15:0] delay_wire_1405;
  logic [15:0] delay_wire_1406;
  logic [15:0] delay_wire_1407;
  logic [15:0] delay_wire_1408;
  logic [15:0] delay_wire_1409;
  logic [15:0] delay_wire_1410;
  logic [15:0] delay_wire_1411;
  logic [15:0] delay_wire_1412;
  logic [15:0] delay_wire_1413;
  logic [15:0] delay_wire_1414;
  logic [15:0] delay_wire_1415;
  logic [15:0] delay_wire_1416;
  logic [15:0] delay_wire_1417;
  logic [15:0] delay_wire_1418;
  logic [15:0] delay_wire_1419;
  logic [15:0] delay_wire_1420;
  logic [15:0] delay_wire_1421;
  logic [15:0] delay_wire_1422;
  logic [15:0] delay_wire_1423;
  logic [15:0] delay_wire_1424;
  logic [15:0] delay_wire_1425;
  logic [15:0] delay_wire_1426;
  logic [15:0] delay_wire_1427;
  logic [15:0] delay_wire_1428;
  logic [15:0] delay_wire_1429;
  logic [15:0] delay_wire_1430;
  logic [15:0] delay_wire_1431;
  logic [15:0] delay_wire_1432;
  logic [15:0] delay_wire_1433;
  logic [15:0] delay_wire_1434;
  logic [15:0] delay_wire_1435;
  logic [15:0] delay_wire_1436;
  logic [15:0] delay_wire_1437;
  logic [15:0] delay_wire_1438;
  logic [15:0] delay_wire_1439;
  logic [15:0] delay_wire_1440;
  logic [15:0] delay_wire_1441;
  logic [15:0] delay_wire_1442;
  logic [15:0] delay_wire_1443;
  logic [15:0] delay_wire_1444;
  logic [15:0] delay_wire_1445;
  logic [15:0] delay_wire_1446;
  logic [15:0] delay_wire_1447;
  logic [15:0] delay_wire_1448;
  logic [15:0] delay_wire_1449;
  logic [15:0] delay_wire_1450;
  logic [15:0] delay_wire_1451;
  logic [15:0] delay_wire_1452;
  logic [15:0] delay_wire_1453;
  logic [15:0] delay_wire_1454;
  logic [15:0] delay_wire_1455;
  logic [15:0] delay_wire_1456;
  logic [15:0] delay_wire_1457;
  logic [15:0] delay_wire_1458;
  logic [15:0] delay_wire_1459;
  logic [15:0] delay_wire_1460;
  logic [15:0] delay_wire_1461;
  logic [15:0] delay_wire_1462;
  logic [15:0] delay_wire_1463;
  logic [15:0] delay_wire_1464;
  logic [15:0] delay_wire_1465;
  logic [15:0] delay_wire_1466;
  logic [15:0] delay_wire_1467;
  logic [15:0] delay_wire_1468;
  always @(posedge clk) begin
    delay_wire_1339 <= in;
    delay_wire_1340 <= delay_wire_1339;
    delay_wire_1341 <= delay_wire_1340;
    delay_wire_1342 <= delay_wire_1341;
    delay_wire_1343 <= delay_wire_1342;
    delay_wire_1344 <= delay_wire_1343;
    delay_wire_1345 <= delay_wire_1344;
    delay_wire_1346 <= delay_wire_1345;
    delay_wire_1347 <= delay_wire_1346;
    delay_wire_1348 <= delay_wire_1347;
    delay_wire_1349 <= delay_wire_1348;
    delay_wire_1350 <= delay_wire_1349;
    delay_wire_1351 <= delay_wire_1350;
    delay_wire_1352 <= delay_wire_1351;
    delay_wire_1353 <= delay_wire_1352;
    delay_wire_1354 <= delay_wire_1353;
    delay_wire_1355 <= delay_wire_1354;
    delay_wire_1356 <= delay_wire_1355;
    delay_wire_1357 <= delay_wire_1356;
    delay_wire_1358 <= delay_wire_1357;
    delay_wire_1359 <= delay_wire_1358;
    delay_wire_1360 <= delay_wire_1359;
    delay_wire_1361 <= delay_wire_1360;
    delay_wire_1362 <= delay_wire_1361;
    delay_wire_1363 <= delay_wire_1362;
    delay_wire_1364 <= delay_wire_1363;
    delay_wire_1365 <= delay_wire_1364;
    delay_wire_1366 <= delay_wire_1365;
    delay_wire_1367 <= delay_wire_1366;
    delay_wire_1368 <= delay_wire_1367;
    delay_wire_1369 <= delay_wire_1368;
    delay_wire_1370 <= delay_wire_1369;
    delay_wire_1371 <= delay_wire_1370;
    delay_wire_1372 <= delay_wire_1371;
    delay_wire_1373 <= delay_wire_1372;
    delay_wire_1374 <= delay_wire_1373;
    delay_wire_1375 <= delay_wire_1374;
    delay_wire_1376 <= delay_wire_1375;
    delay_wire_1377 <= delay_wire_1376;
    delay_wire_1378 <= delay_wire_1377;
    delay_wire_1379 <= delay_wire_1378;
    delay_wire_1380 <= delay_wire_1379;
    delay_wire_1381 <= delay_wire_1380;
    delay_wire_1382 <= delay_wire_1381;
    delay_wire_1383 <= delay_wire_1382;
    delay_wire_1384 <= delay_wire_1383;
    delay_wire_1385 <= delay_wire_1384;
    delay_wire_1386 <= delay_wire_1385;
    delay_wire_1387 <= delay_wire_1386;
    delay_wire_1388 <= delay_wire_1387;
    delay_wire_1389 <= delay_wire_1388;
    delay_wire_1390 <= delay_wire_1389;
    delay_wire_1391 <= delay_wire_1390;
    delay_wire_1392 <= delay_wire_1391;
    delay_wire_1393 <= delay_wire_1392;
    delay_wire_1394 <= delay_wire_1393;
    delay_wire_1395 <= delay_wire_1394;
    delay_wire_1396 <= delay_wire_1395;
    delay_wire_1397 <= delay_wire_1396;
    delay_wire_1398 <= delay_wire_1397;
    delay_wire_1399 <= delay_wire_1398;
    delay_wire_1400 <= delay_wire_1399;
    delay_wire_1401 <= delay_wire_1400;
    delay_wire_1402 <= delay_wire_1401;
    delay_wire_1403 <= delay_wire_1402;
    delay_wire_1404 <= delay_wire_1403;
    delay_wire_1405 <= delay_wire_1404;
    delay_wire_1406 <= delay_wire_1405;
    delay_wire_1407 <= delay_wire_1406;
    delay_wire_1408 <= delay_wire_1407;
    delay_wire_1409 <= delay_wire_1408;
    delay_wire_1410 <= delay_wire_1409;
    delay_wire_1411 <= delay_wire_1410;
    delay_wire_1412 <= delay_wire_1411;
    delay_wire_1413 <= delay_wire_1412;
    delay_wire_1414 <= delay_wire_1413;
    delay_wire_1415 <= delay_wire_1414;
    delay_wire_1416 <= delay_wire_1415;
    delay_wire_1417 <= delay_wire_1416;
    delay_wire_1418 <= delay_wire_1417;
    delay_wire_1419 <= delay_wire_1418;
    delay_wire_1420 <= delay_wire_1419;
    delay_wire_1421 <= delay_wire_1420;
    delay_wire_1422 <= delay_wire_1421;
    delay_wire_1423 <= delay_wire_1422;
    delay_wire_1424 <= delay_wire_1423;
    delay_wire_1425 <= delay_wire_1424;
    delay_wire_1426 <= delay_wire_1425;
    delay_wire_1427 <= delay_wire_1426;
    delay_wire_1428 <= delay_wire_1427;
    delay_wire_1429 <= delay_wire_1428;
    delay_wire_1430 <= delay_wire_1429;
    delay_wire_1431 <= delay_wire_1430;
    delay_wire_1432 <= delay_wire_1431;
    delay_wire_1433 <= delay_wire_1432;
    delay_wire_1434 <= delay_wire_1433;
    delay_wire_1435 <= delay_wire_1434;
    delay_wire_1436 <= delay_wire_1435;
    delay_wire_1437 <= delay_wire_1436;
    delay_wire_1438 <= delay_wire_1437;
    delay_wire_1439 <= delay_wire_1438;
    delay_wire_1440 <= delay_wire_1439;
    delay_wire_1441 <= delay_wire_1440;
    delay_wire_1442 <= delay_wire_1441;
    delay_wire_1443 <= delay_wire_1442;
    delay_wire_1444 <= delay_wire_1443;
    delay_wire_1445 <= delay_wire_1444;
    delay_wire_1446 <= delay_wire_1445;
    delay_wire_1447 <= delay_wire_1446;
    delay_wire_1448 <= delay_wire_1447;
    delay_wire_1449 <= delay_wire_1448;
    delay_wire_1450 <= delay_wire_1449;
    delay_wire_1451 <= delay_wire_1450;
    delay_wire_1452 <= delay_wire_1451;
    delay_wire_1453 <= delay_wire_1452;
    delay_wire_1454 <= delay_wire_1453;
    delay_wire_1455 <= delay_wire_1454;
    delay_wire_1456 <= delay_wire_1455;
    delay_wire_1457 <= delay_wire_1456;
    delay_wire_1458 <= delay_wire_1457;
    delay_wire_1459 <= delay_wire_1458;
    delay_wire_1460 <= delay_wire_1459;
    delay_wire_1461 <= delay_wire_1460;
    delay_wire_1462 <= delay_wire_1461;
    delay_wire_1463 <= delay_wire_1462;
    delay_wire_1464 <= delay_wire_1463;
    delay_wire_1465 <= delay_wire_1464;
    delay_wire_1466 <= delay_wire_1465;
    delay_wire_1467 <= delay_wire_1466;
    delay_wire_1468 <= delay_wire_1467;
  end
  assign out = delay_wire_1468;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1469;
  logic [15:0] delay_wire_1470;
  logic [15:0] delay_wire_1471;
  logic [15:0] delay_wire_1472;
  logic [15:0] delay_wire_1473;
  logic [15:0] delay_wire_1474;
  logic [15:0] delay_wire_1475;
  logic [15:0] delay_wire_1476;
  logic [15:0] delay_wire_1477;
  logic [15:0] delay_wire_1478;
  logic [15:0] delay_wire_1479;
  logic [15:0] delay_wire_1480;
  logic [15:0] delay_wire_1481;
  logic [15:0] delay_wire_1482;
  logic [15:0] delay_wire_1483;
  logic [15:0] delay_wire_1484;
  logic [15:0] delay_wire_1485;
  logic [15:0] delay_wire_1486;
  logic [15:0] delay_wire_1487;
  logic [15:0] delay_wire_1488;
  logic [15:0] delay_wire_1489;
  logic [15:0] delay_wire_1490;
  logic [15:0] delay_wire_1491;
  logic [15:0] delay_wire_1492;
  logic [15:0] delay_wire_1493;
  logic [15:0] delay_wire_1494;
  logic [15:0] delay_wire_1495;
  logic [15:0] delay_wire_1496;
  logic [15:0] delay_wire_1497;
  logic [15:0] delay_wire_1498;
  logic [15:0] delay_wire_1499;
  logic [15:0] delay_wire_1500;
  logic [15:0] delay_wire_1501;
  logic [15:0] delay_wire_1502;
  logic [15:0] delay_wire_1503;
  logic [15:0] delay_wire_1504;
  logic [15:0] delay_wire_1505;
  logic [15:0] delay_wire_1506;
  logic [15:0] delay_wire_1507;
  logic [15:0] delay_wire_1508;
  logic [15:0] delay_wire_1509;
  logic [15:0] delay_wire_1510;
  logic [15:0] delay_wire_1511;
  logic [15:0] delay_wire_1512;
  logic [15:0] delay_wire_1513;
  logic [15:0] delay_wire_1514;
  logic [15:0] delay_wire_1515;
  logic [15:0] delay_wire_1516;
  logic [15:0] delay_wire_1517;
  logic [15:0] delay_wire_1518;
  logic [15:0] delay_wire_1519;
  logic [15:0] delay_wire_1520;
  logic [15:0] delay_wire_1521;
  logic [15:0] delay_wire_1522;
  logic [15:0] delay_wire_1523;
  logic [15:0] delay_wire_1524;
  logic [15:0] delay_wire_1525;
  logic [15:0] delay_wire_1526;
  logic [15:0] delay_wire_1527;
  logic [15:0] delay_wire_1528;
  logic [15:0] delay_wire_1529;
  logic [15:0] delay_wire_1530;
  logic [15:0] delay_wire_1531;
  logic [15:0] delay_wire_1532;
  logic [15:0] delay_wire_1533;
  logic [15:0] delay_wire_1534;
  logic [15:0] delay_wire_1535;
  logic [15:0] delay_wire_1536;
  logic [15:0] delay_wire_1537;
  logic [15:0] delay_wire_1538;
  logic [15:0] delay_wire_1539;
  logic [15:0] delay_wire_1540;
  logic [15:0] delay_wire_1541;
  logic [15:0] delay_wire_1542;
  logic [15:0] delay_wire_1543;
  logic [15:0] delay_wire_1544;
  logic [15:0] delay_wire_1545;
  logic [15:0] delay_wire_1546;
  logic [15:0] delay_wire_1547;
  logic [15:0] delay_wire_1548;
  logic [15:0] delay_wire_1549;
  logic [15:0] delay_wire_1550;
  logic [15:0] delay_wire_1551;
  logic [15:0] delay_wire_1552;
  logic [15:0] delay_wire_1553;
  logic [15:0] delay_wire_1554;
  logic [15:0] delay_wire_1555;
  logic [15:0] delay_wire_1556;
  logic [15:0] delay_wire_1557;
  logic [15:0] delay_wire_1558;
  logic [15:0] delay_wire_1559;
  logic [15:0] delay_wire_1560;
  logic [15:0] delay_wire_1561;
  logic [15:0] delay_wire_1562;
  logic [15:0] delay_wire_1563;
  logic [15:0] delay_wire_1564;
  logic [15:0] delay_wire_1565;
  logic [15:0] delay_wire_1566;
  logic [15:0] delay_wire_1567;
  logic [15:0] delay_wire_1568;
  logic [15:0] delay_wire_1569;
  logic [15:0] delay_wire_1570;
  logic [15:0] delay_wire_1571;
  logic [15:0] delay_wire_1572;
  logic [15:0] delay_wire_1573;
  logic [15:0] delay_wire_1574;
  logic [15:0] delay_wire_1575;
  logic [15:0] delay_wire_1576;
  logic [15:0] delay_wire_1577;
  logic [15:0] delay_wire_1578;
  logic [15:0] delay_wire_1579;
  logic [15:0] delay_wire_1580;
  logic [15:0] delay_wire_1581;
  logic [15:0] delay_wire_1582;
  logic [15:0] delay_wire_1583;
  logic [15:0] delay_wire_1584;
  logic [15:0] delay_wire_1585;
  logic [15:0] delay_wire_1586;
  logic [15:0] delay_wire_1587;
  logic [15:0] delay_wire_1588;
  logic [15:0] delay_wire_1589;
  logic [15:0] delay_wire_1590;
  logic [15:0] delay_wire_1591;
  logic [15:0] delay_wire_1592;
  logic [15:0] delay_wire_1593;
  logic [15:0] delay_wire_1594;
  logic [15:0] delay_wire_1595;
  logic [15:0] delay_wire_1596;
  logic [15:0] delay_wire_1597;
  always @(posedge clk) begin
    delay_wire_1469 <= in;
    delay_wire_1470 <= delay_wire_1469;
    delay_wire_1471 <= delay_wire_1470;
    delay_wire_1472 <= delay_wire_1471;
    delay_wire_1473 <= delay_wire_1472;
    delay_wire_1474 <= delay_wire_1473;
    delay_wire_1475 <= delay_wire_1474;
    delay_wire_1476 <= delay_wire_1475;
    delay_wire_1477 <= delay_wire_1476;
    delay_wire_1478 <= delay_wire_1477;
    delay_wire_1479 <= delay_wire_1478;
    delay_wire_1480 <= delay_wire_1479;
    delay_wire_1481 <= delay_wire_1480;
    delay_wire_1482 <= delay_wire_1481;
    delay_wire_1483 <= delay_wire_1482;
    delay_wire_1484 <= delay_wire_1483;
    delay_wire_1485 <= delay_wire_1484;
    delay_wire_1486 <= delay_wire_1485;
    delay_wire_1487 <= delay_wire_1486;
    delay_wire_1488 <= delay_wire_1487;
    delay_wire_1489 <= delay_wire_1488;
    delay_wire_1490 <= delay_wire_1489;
    delay_wire_1491 <= delay_wire_1490;
    delay_wire_1492 <= delay_wire_1491;
    delay_wire_1493 <= delay_wire_1492;
    delay_wire_1494 <= delay_wire_1493;
    delay_wire_1495 <= delay_wire_1494;
    delay_wire_1496 <= delay_wire_1495;
    delay_wire_1497 <= delay_wire_1496;
    delay_wire_1498 <= delay_wire_1497;
    delay_wire_1499 <= delay_wire_1498;
    delay_wire_1500 <= delay_wire_1499;
    delay_wire_1501 <= delay_wire_1500;
    delay_wire_1502 <= delay_wire_1501;
    delay_wire_1503 <= delay_wire_1502;
    delay_wire_1504 <= delay_wire_1503;
    delay_wire_1505 <= delay_wire_1504;
    delay_wire_1506 <= delay_wire_1505;
    delay_wire_1507 <= delay_wire_1506;
    delay_wire_1508 <= delay_wire_1507;
    delay_wire_1509 <= delay_wire_1508;
    delay_wire_1510 <= delay_wire_1509;
    delay_wire_1511 <= delay_wire_1510;
    delay_wire_1512 <= delay_wire_1511;
    delay_wire_1513 <= delay_wire_1512;
    delay_wire_1514 <= delay_wire_1513;
    delay_wire_1515 <= delay_wire_1514;
    delay_wire_1516 <= delay_wire_1515;
    delay_wire_1517 <= delay_wire_1516;
    delay_wire_1518 <= delay_wire_1517;
    delay_wire_1519 <= delay_wire_1518;
    delay_wire_1520 <= delay_wire_1519;
    delay_wire_1521 <= delay_wire_1520;
    delay_wire_1522 <= delay_wire_1521;
    delay_wire_1523 <= delay_wire_1522;
    delay_wire_1524 <= delay_wire_1523;
    delay_wire_1525 <= delay_wire_1524;
    delay_wire_1526 <= delay_wire_1525;
    delay_wire_1527 <= delay_wire_1526;
    delay_wire_1528 <= delay_wire_1527;
    delay_wire_1529 <= delay_wire_1528;
    delay_wire_1530 <= delay_wire_1529;
    delay_wire_1531 <= delay_wire_1530;
    delay_wire_1532 <= delay_wire_1531;
    delay_wire_1533 <= delay_wire_1532;
    delay_wire_1534 <= delay_wire_1533;
    delay_wire_1535 <= delay_wire_1534;
    delay_wire_1536 <= delay_wire_1535;
    delay_wire_1537 <= delay_wire_1536;
    delay_wire_1538 <= delay_wire_1537;
    delay_wire_1539 <= delay_wire_1538;
    delay_wire_1540 <= delay_wire_1539;
    delay_wire_1541 <= delay_wire_1540;
    delay_wire_1542 <= delay_wire_1541;
    delay_wire_1543 <= delay_wire_1542;
    delay_wire_1544 <= delay_wire_1543;
    delay_wire_1545 <= delay_wire_1544;
    delay_wire_1546 <= delay_wire_1545;
    delay_wire_1547 <= delay_wire_1546;
    delay_wire_1548 <= delay_wire_1547;
    delay_wire_1549 <= delay_wire_1548;
    delay_wire_1550 <= delay_wire_1549;
    delay_wire_1551 <= delay_wire_1550;
    delay_wire_1552 <= delay_wire_1551;
    delay_wire_1553 <= delay_wire_1552;
    delay_wire_1554 <= delay_wire_1553;
    delay_wire_1555 <= delay_wire_1554;
    delay_wire_1556 <= delay_wire_1555;
    delay_wire_1557 <= delay_wire_1556;
    delay_wire_1558 <= delay_wire_1557;
    delay_wire_1559 <= delay_wire_1558;
    delay_wire_1560 <= delay_wire_1559;
    delay_wire_1561 <= delay_wire_1560;
    delay_wire_1562 <= delay_wire_1561;
    delay_wire_1563 <= delay_wire_1562;
    delay_wire_1564 <= delay_wire_1563;
    delay_wire_1565 <= delay_wire_1564;
    delay_wire_1566 <= delay_wire_1565;
    delay_wire_1567 <= delay_wire_1566;
    delay_wire_1568 <= delay_wire_1567;
    delay_wire_1569 <= delay_wire_1568;
    delay_wire_1570 <= delay_wire_1569;
    delay_wire_1571 <= delay_wire_1570;
    delay_wire_1572 <= delay_wire_1571;
    delay_wire_1573 <= delay_wire_1572;
    delay_wire_1574 <= delay_wire_1573;
    delay_wire_1575 <= delay_wire_1574;
    delay_wire_1576 <= delay_wire_1575;
    delay_wire_1577 <= delay_wire_1576;
    delay_wire_1578 <= delay_wire_1577;
    delay_wire_1579 <= delay_wire_1578;
    delay_wire_1580 <= delay_wire_1579;
    delay_wire_1581 <= delay_wire_1580;
    delay_wire_1582 <= delay_wire_1581;
    delay_wire_1583 <= delay_wire_1582;
    delay_wire_1584 <= delay_wire_1583;
    delay_wire_1585 <= delay_wire_1584;
    delay_wire_1586 <= delay_wire_1585;
    delay_wire_1587 <= delay_wire_1586;
    delay_wire_1588 <= delay_wire_1587;
    delay_wire_1589 <= delay_wire_1588;
    delay_wire_1590 <= delay_wire_1589;
    delay_wire_1591 <= delay_wire_1590;
    delay_wire_1592 <= delay_wire_1591;
    delay_wire_1593 <= delay_wire_1592;
    delay_wire_1594 <= delay_wire_1593;
    delay_wire_1595 <= delay_wire_1594;
    delay_wire_1596 <= delay_wire_1595;
    delay_wire_1597 <= delay_wire_1596;
  end
  assign out = delay_wire_1597;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1598;
  logic [15:0] delay_wire_1599;
  logic [15:0] delay_wire_1600;
  logic [15:0] delay_wire_1601;
  logic [15:0] delay_wire_1602;
  logic [15:0] delay_wire_1603;
  logic [15:0] delay_wire_1604;
  logic [15:0] delay_wire_1605;
  logic [15:0] delay_wire_1606;
  logic [15:0] delay_wire_1607;
  logic [15:0] delay_wire_1608;
  logic [15:0] delay_wire_1609;
  logic [15:0] delay_wire_1610;
  logic [15:0] delay_wire_1611;
  logic [15:0] delay_wire_1612;
  logic [15:0] delay_wire_1613;
  logic [15:0] delay_wire_1614;
  logic [15:0] delay_wire_1615;
  logic [15:0] delay_wire_1616;
  logic [15:0] delay_wire_1617;
  logic [15:0] delay_wire_1618;
  logic [15:0] delay_wire_1619;
  logic [15:0] delay_wire_1620;
  logic [15:0] delay_wire_1621;
  logic [15:0] delay_wire_1622;
  logic [15:0] delay_wire_1623;
  logic [15:0] delay_wire_1624;
  logic [15:0] delay_wire_1625;
  logic [15:0] delay_wire_1626;
  logic [15:0] delay_wire_1627;
  logic [15:0] delay_wire_1628;
  logic [15:0] delay_wire_1629;
  logic [15:0] delay_wire_1630;
  logic [15:0] delay_wire_1631;
  logic [15:0] delay_wire_1632;
  logic [15:0] delay_wire_1633;
  logic [15:0] delay_wire_1634;
  logic [15:0] delay_wire_1635;
  logic [15:0] delay_wire_1636;
  logic [15:0] delay_wire_1637;
  logic [15:0] delay_wire_1638;
  logic [15:0] delay_wire_1639;
  logic [15:0] delay_wire_1640;
  logic [15:0] delay_wire_1641;
  logic [15:0] delay_wire_1642;
  logic [15:0] delay_wire_1643;
  logic [15:0] delay_wire_1644;
  logic [15:0] delay_wire_1645;
  logic [15:0] delay_wire_1646;
  logic [15:0] delay_wire_1647;
  logic [15:0] delay_wire_1648;
  logic [15:0] delay_wire_1649;
  logic [15:0] delay_wire_1650;
  logic [15:0] delay_wire_1651;
  logic [15:0] delay_wire_1652;
  logic [15:0] delay_wire_1653;
  logic [15:0] delay_wire_1654;
  logic [15:0] delay_wire_1655;
  logic [15:0] delay_wire_1656;
  logic [15:0] delay_wire_1657;
  logic [15:0] delay_wire_1658;
  logic [15:0] delay_wire_1659;
  logic [15:0] delay_wire_1660;
  logic [15:0] delay_wire_1661;
  logic [15:0] delay_wire_1662;
  logic [15:0] delay_wire_1663;
  logic [15:0] delay_wire_1664;
  always @(posedge clk) begin
    delay_wire_1598 <= in;
    delay_wire_1599 <= delay_wire_1598;
    delay_wire_1600 <= delay_wire_1599;
    delay_wire_1601 <= delay_wire_1600;
    delay_wire_1602 <= delay_wire_1601;
    delay_wire_1603 <= delay_wire_1602;
    delay_wire_1604 <= delay_wire_1603;
    delay_wire_1605 <= delay_wire_1604;
    delay_wire_1606 <= delay_wire_1605;
    delay_wire_1607 <= delay_wire_1606;
    delay_wire_1608 <= delay_wire_1607;
    delay_wire_1609 <= delay_wire_1608;
    delay_wire_1610 <= delay_wire_1609;
    delay_wire_1611 <= delay_wire_1610;
    delay_wire_1612 <= delay_wire_1611;
    delay_wire_1613 <= delay_wire_1612;
    delay_wire_1614 <= delay_wire_1613;
    delay_wire_1615 <= delay_wire_1614;
    delay_wire_1616 <= delay_wire_1615;
    delay_wire_1617 <= delay_wire_1616;
    delay_wire_1618 <= delay_wire_1617;
    delay_wire_1619 <= delay_wire_1618;
    delay_wire_1620 <= delay_wire_1619;
    delay_wire_1621 <= delay_wire_1620;
    delay_wire_1622 <= delay_wire_1621;
    delay_wire_1623 <= delay_wire_1622;
    delay_wire_1624 <= delay_wire_1623;
    delay_wire_1625 <= delay_wire_1624;
    delay_wire_1626 <= delay_wire_1625;
    delay_wire_1627 <= delay_wire_1626;
    delay_wire_1628 <= delay_wire_1627;
    delay_wire_1629 <= delay_wire_1628;
    delay_wire_1630 <= delay_wire_1629;
    delay_wire_1631 <= delay_wire_1630;
    delay_wire_1632 <= delay_wire_1631;
    delay_wire_1633 <= delay_wire_1632;
    delay_wire_1634 <= delay_wire_1633;
    delay_wire_1635 <= delay_wire_1634;
    delay_wire_1636 <= delay_wire_1635;
    delay_wire_1637 <= delay_wire_1636;
    delay_wire_1638 <= delay_wire_1637;
    delay_wire_1639 <= delay_wire_1638;
    delay_wire_1640 <= delay_wire_1639;
    delay_wire_1641 <= delay_wire_1640;
    delay_wire_1642 <= delay_wire_1641;
    delay_wire_1643 <= delay_wire_1642;
    delay_wire_1644 <= delay_wire_1643;
    delay_wire_1645 <= delay_wire_1644;
    delay_wire_1646 <= delay_wire_1645;
    delay_wire_1647 <= delay_wire_1646;
    delay_wire_1648 <= delay_wire_1647;
    delay_wire_1649 <= delay_wire_1648;
    delay_wire_1650 <= delay_wire_1649;
    delay_wire_1651 <= delay_wire_1650;
    delay_wire_1652 <= delay_wire_1651;
    delay_wire_1653 <= delay_wire_1652;
    delay_wire_1654 <= delay_wire_1653;
    delay_wire_1655 <= delay_wire_1654;
    delay_wire_1656 <= delay_wire_1655;
    delay_wire_1657 <= delay_wire_1656;
    delay_wire_1658 <= delay_wire_1657;
    delay_wire_1659 <= delay_wire_1658;
    delay_wire_1660 <= delay_wire_1659;
    delay_wire_1661 <= delay_wire_1660;
    delay_wire_1662 <= delay_wire_1661;
    delay_wire_1663 <= delay_wire_1662;
    delay_wire_1664 <= delay_wire_1663;
  end
  assign out = delay_wire_1664;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1665;
  logic [15:0] delay_wire_1666;
  logic [15:0] delay_wire_1667;
  logic [15:0] delay_wire_1668;
  logic [15:0] delay_wire_1669;
  logic [15:0] delay_wire_1670;
  logic [15:0] delay_wire_1671;
  logic [15:0] delay_wire_1672;
  logic [15:0] delay_wire_1673;
  logic [15:0] delay_wire_1674;
  logic [15:0] delay_wire_1675;
  logic [15:0] delay_wire_1676;
  logic [15:0] delay_wire_1677;
  logic [15:0] delay_wire_1678;
  logic [15:0] delay_wire_1679;
  logic [15:0] delay_wire_1680;
  logic [15:0] delay_wire_1681;
  logic [15:0] delay_wire_1682;
  logic [15:0] delay_wire_1683;
  logic [15:0] delay_wire_1684;
  logic [15:0] delay_wire_1685;
  logic [15:0] delay_wire_1686;
  logic [15:0] delay_wire_1687;
  logic [15:0] delay_wire_1688;
  logic [15:0] delay_wire_1689;
  logic [15:0] delay_wire_1690;
  logic [15:0] delay_wire_1691;
  logic [15:0] delay_wire_1692;
  logic [15:0] delay_wire_1693;
  logic [15:0] delay_wire_1694;
  logic [15:0] delay_wire_1695;
  logic [15:0] delay_wire_1696;
  logic [15:0] delay_wire_1697;
  logic [15:0] delay_wire_1698;
  logic [15:0] delay_wire_1699;
  logic [15:0] delay_wire_1700;
  logic [15:0] delay_wire_1701;
  logic [15:0] delay_wire_1702;
  logic [15:0] delay_wire_1703;
  logic [15:0] delay_wire_1704;
  logic [15:0] delay_wire_1705;
  logic [15:0] delay_wire_1706;
  logic [15:0] delay_wire_1707;
  logic [15:0] delay_wire_1708;
  logic [15:0] delay_wire_1709;
  logic [15:0] delay_wire_1710;
  logic [15:0] delay_wire_1711;
  logic [15:0] delay_wire_1712;
  logic [15:0] delay_wire_1713;
  logic [15:0] delay_wire_1714;
  logic [15:0] delay_wire_1715;
  logic [15:0] delay_wire_1716;
  logic [15:0] delay_wire_1717;
  logic [15:0] delay_wire_1718;
  logic [15:0] delay_wire_1719;
  logic [15:0] delay_wire_1720;
  logic [15:0] delay_wire_1721;
  logic [15:0] delay_wire_1722;
  logic [15:0] delay_wire_1723;
  logic [15:0] delay_wire_1724;
  logic [15:0] delay_wire_1725;
  logic [15:0] delay_wire_1726;
  logic [15:0] delay_wire_1727;
  logic [15:0] delay_wire_1728;
  logic [15:0] delay_wire_1729;
  logic [15:0] delay_wire_1730;
  always @(posedge clk) begin
    delay_wire_1665 <= in;
    delay_wire_1666 <= delay_wire_1665;
    delay_wire_1667 <= delay_wire_1666;
    delay_wire_1668 <= delay_wire_1667;
    delay_wire_1669 <= delay_wire_1668;
    delay_wire_1670 <= delay_wire_1669;
    delay_wire_1671 <= delay_wire_1670;
    delay_wire_1672 <= delay_wire_1671;
    delay_wire_1673 <= delay_wire_1672;
    delay_wire_1674 <= delay_wire_1673;
    delay_wire_1675 <= delay_wire_1674;
    delay_wire_1676 <= delay_wire_1675;
    delay_wire_1677 <= delay_wire_1676;
    delay_wire_1678 <= delay_wire_1677;
    delay_wire_1679 <= delay_wire_1678;
    delay_wire_1680 <= delay_wire_1679;
    delay_wire_1681 <= delay_wire_1680;
    delay_wire_1682 <= delay_wire_1681;
    delay_wire_1683 <= delay_wire_1682;
    delay_wire_1684 <= delay_wire_1683;
    delay_wire_1685 <= delay_wire_1684;
    delay_wire_1686 <= delay_wire_1685;
    delay_wire_1687 <= delay_wire_1686;
    delay_wire_1688 <= delay_wire_1687;
    delay_wire_1689 <= delay_wire_1688;
    delay_wire_1690 <= delay_wire_1689;
    delay_wire_1691 <= delay_wire_1690;
    delay_wire_1692 <= delay_wire_1691;
    delay_wire_1693 <= delay_wire_1692;
    delay_wire_1694 <= delay_wire_1693;
    delay_wire_1695 <= delay_wire_1694;
    delay_wire_1696 <= delay_wire_1695;
    delay_wire_1697 <= delay_wire_1696;
    delay_wire_1698 <= delay_wire_1697;
    delay_wire_1699 <= delay_wire_1698;
    delay_wire_1700 <= delay_wire_1699;
    delay_wire_1701 <= delay_wire_1700;
    delay_wire_1702 <= delay_wire_1701;
    delay_wire_1703 <= delay_wire_1702;
    delay_wire_1704 <= delay_wire_1703;
    delay_wire_1705 <= delay_wire_1704;
    delay_wire_1706 <= delay_wire_1705;
    delay_wire_1707 <= delay_wire_1706;
    delay_wire_1708 <= delay_wire_1707;
    delay_wire_1709 <= delay_wire_1708;
    delay_wire_1710 <= delay_wire_1709;
    delay_wire_1711 <= delay_wire_1710;
    delay_wire_1712 <= delay_wire_1711;
    delay_wire_1713 <= delay_wire_1712;
    delay_wire_1714 <= delay_wire_1713;
    delay_wire_1715 <= delay_wire_1714;
    delay_wire_1716 <= delay_wire_1715;
    delay_wire_1717 <= delay_wire_1716;
    delay_wire_1718 <= delay_wire_1717;
    delay_wire_1719 <= delay_wire_1718;
    delay_wire_1720 <= delay_wire_1719;
    delay_wire_1721 <= delay_wire_1720;
    delay_wire_1722 <= delay_wire_1721;
    delay_wire_1723 <= delay_wire_1722;
    delay_wire_1724 <= delay_wire_1723;
    delay_wire_1725 <= delay_wire_1724;
    delay_wire_1726 <= delay_wire_1725;
    delay_wire_1727 <= delay_wire_1726;
    delay_wire_1728 <= delay_wire_1727;
    delay_wire_1729 <= delay_wire_1728;
    delay_wire_1730 <= delay_wire_1729;
  end
  assign out = delay_wire_1730;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1731;
  logic [15:0] delay_wire_1732;
  logic [15:0] delay_wire_1733;
  logic [15:0] delay_wire_1734;
  logic [15:0] delay_wire_1735;
  logic [15:0] delay_wire_1736;
  logic [15:0] delay_wire_1737;
  logic [15:0] delay_wire_1738;
  logic [15:0] delay_wire_1739;
  logic [15:0] delay_wire_1740;
  logic [15:0] delay_wire_1741;
  logic [15:0] delay_wire_1742;
  logic [15:0] delay_wire_1743;
  logic [15:0] delay_wire_1744;
  logic [15:0] delay_wire_1745;
  logic [15:0] delay_wire_1746;
  logic [15:0] delay_wire_1747;
  logic [15:0] delay_wire_1748;
  logic [15:0] delay_wire_1749;
  logic [15:0] delay_wire_1750;
  logic [15:0] delay_wire_1751;
  logic [15:0] delay_wire_1752;
  logic [15:0] delay_wire_1753;
  logic [15:0] delay_wire_1754;
  logic [15:0] delay_wire_1755;
  logic [15:0] delay_wire_1756;
  logic [15:0] delay_wire_1757;
  logic [15:0] delay_wire_1758;
  logic [15:0] delay_wire_1759;
  logic [15:0] delay_wire_1760;
  logic [15:0] delay_wire_1761;
  logic [15:0] delay_wire_1762;
  logic [15:0] delay_wire_1763;
  logic [15:0] delay_wire_1764;
  logic [15:0] delay_wire_1765;
  logic [15:0] delay_wire_1766;
  logic [15:0] delay_wire_1767;
  logic [15:0] delay_wire_1768;
  logic [15:0] delay_wire_1769;
  logic [15:0] delay_wire_1770;
  logic [15:0] delay_wire_1771;
  logic [15:0] delay_wire_1772;
  logic [15:0] delay_wire_1773;
  logic [15:0] delay_wire_1774;
  logic [15:0] delay_wire_1775;
  logic [15:0] delay_wire_1776;
  logic [15:0] delay_wire_1777;
  logic [15:0] delay_wire_1778;
  logic [15:0] delay_wire_1779;
  logic [15:0] delay_wire_1780;
  logic [15:0] delay_wire_1781;
  logic [15:0] delay_wire_1782;
  logic [15:0] delay_wire_1783;
  logic [15:0] delay_wire_1784;
  logic [15:0] delay_wire_1785;
  logic [15:0] delay_wire_1786;
  logic [15:0] delay_wire_1787;
  logic [15:0] delay_wire_1788;
  logic [15:0] delay_wire_1789;
  logic [15:0] delay_wire_1790;
  logic [15:0] delay_wire_1791;
  logic [15:0] delay_wire_1792;
  logic [15:0] delay_wire_1793;
  logic [15:0] delay_wire_1794;
  logic [15:0] delay_wire_1795;
  always @(posedge clk) begin
    delay_wire_1731 <= in;
    delay_wire_1732 <= delay_wire_1731;
    delay_wire_1733 <= delay_wire_1732;
    delay_wire_1734 <= delay_wire_1733;
    delay_wire_1735 <= delay_wire_1734;
    delay_wire_1736 <= delay_wire_1735;
    delay_wire_1737 <= delay_wire_1736;
    delay_wire_1738 <= delay_wire_1737;
    delay_wire_1739 <= delay_wire_1738;
    delay_wire_1740 <= delay_wire_1739;
    delay_wire_1741 <= delay_wire_1740;
    delay_wire_1742 <= delay_wire_1741;
    delay_wire_1743 <= delay_wire_1742;
    delay_wire_1744 <= delay_wire_1743;
    delay_wire_1745 <= delay_wire_1744;
    delay_wire_1746 <= delay_wire_1745;
    delay_wire_1747 <= delay_wire_1746;
    delay_wire_1748 <= delay_wire_1747;
    delay_wire_1749 <= delay_wire_1748;
    delay_wire_1750 <= delay_wire_1749;
    delay_wire_1751 <= delay_wire_1750;
    delay_wire_1752 <= delay_wire_1751;
    delay_wire_1753 <= delay_wire_1752;
    delay_wire_1754 <= delay_wire_1753;
    delay_wire_1755 <= delay_wire_1754;
    delay_wire_1756 <= delay_wire_1755;
    delay_wire_1757 <= delay_wire_1756;
    delay_wire_1758 <= delay_wire_1757;
    delay_wire_1759 <= delay_wire_1758;
    delay_wire_1760 <= delay_wire_1759;
    delay_wire_1761 <= delay_wire_1760;
    delay_wire_1762 <= delay_wire_1761;
    delay_wire_1763 <= delay_wire_1762;
    delay_wire_1764 <= delay_wire_1763;
    delay_wire_1765 <= delay_wire_1764;
    delay_wire_1766 <= delay_wire_1765;
    delay_wire_1767 <= delay_wire_1766;
    delay_wire_1768 <= delay_wire_1767;
    delay_wire_1769 <= delay_wire_1768;
    delay_wire_1770 <= delay_wire_1769;
    delay_wire_1771 <= delay_wire_1770;
    delay_wire_1772 <= delay_wire_1771;
    delay_wire_1773 <= delay_wire_1772;
    delay_wire_1774 <= delay_wire_1773;
    delay_wire_1775 <= delay_wire_1774;
    delay_wire_1776 <= delay_wire_1775;
    delay_wire_1777 <= delay_wire_1776;
    delay_wire_1778 <= delay_wire_1777;
    delay_wire_1779 <= delay_wire_1778;
    delay_wire_1780 <= delay_wire_1779;
    delay_wire_1781 <= delay_wire_1780;
    delay_wire_1782 <= delay_wire_1781;
    delay_wire_1783 <= delay_wire_1782;
    delay_wire_1784 <= delay_wire_1783;
    delay_wire_1785 <= delay_wire_1784;
    delay_wire_1786 <= delay_wire_1785;
    delay_wire_1787 <= delay_wire_1786;
    delay_wire_1788 <= delay_wire_1787;
    delay_wire_1789 <= delay_wire_1788;
    delay_wire_1790 <= delay_wire_1789;
    delay_wire_1791 <= delay_wire_1790;
    delay_wire_1792 <= delay_wire_1791;
    delay_wire_1793 <= delay_wire_1792;
    delay_wire_1794 <= delay_wire_1793;
    delay_wire_1795 <= delay_wire_1794;
  end
  assign out = delay_wire_1795;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1796;
  logic [15:0] delay_wire_1797;
  logic [15:0] delay_wire_1798;
  always @(posedge clk) begin
    delay_wire_1796 <= in;
    delay_wire_1797 <= delay_wire_1796;
    delay_wire_1798 <= delay_wire_1797;
  end
  assign out = delay_wire_1798;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1799;
  always @(posedge clk) begin
    delay_wire_1799 <= in;
  end
  assign out = delay_wire_1799;
endmodule

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1800;
  logic [15:0] delay_wire_1801;
  always @(posedge clk) begin
    delay_wire_1800 <= in;
    delay_wire_1801 <= delay_wire_1800;
  end
  assign out = delay_wire_1801;
endmodule

// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(133 + 64lxy_s0_y + lxy_s0_x)] }
module lxy_stencil_op_hcompute_lxy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxy_stencil_write_ctrl_vars[2:0], output op_hcompute_lxy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxy_stencil_write_wen =(on && on2 && op_hcompute_lxy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lxy_stencil_write_ctrl_vars[1]<=61 && op_hcompute_lxy_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lxy_stencil_write_ctrl_vars[1] <= op_hcompute_lxy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxy_stencil_write_ctrl_vars[2] <= op_hcompute_lxy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(264 + 64lgxy_s1_y + lgxy_s1_x)] }
module lxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_1_read_ren =(on && on2 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] + 1;
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
module lxy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxy_stencil_1_read [8:0] ,
	input op_hcompute_lxy_stencil_write_wen,
	input [15:0] op_hcompute_lxy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lxy_stencil_write [0:0] );

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_23_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[0]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_24_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[1]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_25_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[2]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_26_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[3]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_27_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[4]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_28_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[5]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_29_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[6]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_30_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[7]));

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_31_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]), .out(op_hcompute_lgxy_stencil_1_read[8]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxy_stencil_write_wen_fsm_out;
  lxy_stencil_op_hcompute_lxy_stencil_write_fsm lxy_stencil_op_hcompute_lxy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxy_stencil_write_ctrl_vars( op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lxy_stencil_write_wen(op_hcompute_lxy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_1_read_ren_fsm_out;
  lxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm lxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_1_read_ctrl_vars( op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_1_read_ren(op_hcompute_lgxy_stencil_1_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_0 = (((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_1 = (((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_1,lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_0 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_1 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_0 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_0 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_1 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_1 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_1 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_0 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_1 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_0 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_1 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_0 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lxy_stencil_write_wen_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lxy_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_lxy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// lyy_stencil has embarassing partition: 0

module lyy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1802;
  logic [15:0] delay_wire_1803;
  logic [15:0] delay_wire_1804;
  logic [15:0] delay_wire_1805;
  logic [15:0] delay_wire_1806;
  logic [15:0] delay_wire_1807;
  logic [15:0] delay_wire_1808;
  logic [15:0] delay_wire_1809;
  logic [15:0] delay_wire_1810;
  logic [15:0] delay_wire_1811;
  logic [15:0] delay_wire_1812;
  logic [15:0] delay_wire_1813;
  logic [15:0] delay_wire_1814;
  logic [15:0] delay_wire_1815;
  logic [15:0] delay_wire_1816;
  logic [15:0] delay_wire_1817;
  logic [15:0] delay_wire_1818;
  logic [15:0] delay_wire_1819;
  logic [15:0] delay_wire_1820;
  logic [15:0] delay_wire_1821;
  logic [15:0] delay_wire_1822;
  logic [15:0] delay_wire_1823;
  logic [15:0] delay_wire_1824;
  logic [15:0] delay_wire_1825;
  logic [15:0] delay_wire_1826;
  logic [15:0] delay_wire_1827;
  logic [15:0] delay_wire_1828;
  logic [15:0] delay_wire_1829;
  logic [15:0] delay_wire_1830;
  logic [15:0] delay_wire_1831;
  logic [15:0] delay_wire_1832;
  logic [15:0] delay_wire_1833;
  logic [15:0] delay_wire_1834;
  logic [15:0] delay_wire_1835;
  logic [15:0] delay_wire_1836;
  logic [15:0] delay_wire_1837;
  logic [15:0] delay_wire_1838;
  logic [15:0] delay_wire_1839;
  logic [15:0] delay_wire_1840;
  logic [15:0] delay_wire_1841;
  logic [15:0] delay_wire_1842;
  logic [15:0] delay_wire_1843;
  logic [15:0] delay_wire_1844;
  logic [15:0] delay_wire_1845;
  logic [15:0] delay_wire_1846;
  logic [15:0] delay_wire_1847;
  logic [15:0] delay_wire_1848;
  logic [15:0] delay_wire_1849;
  logic [15:0] delay_wire_1850;
  logic [15:0] delay_wire_1851;
  logic [15:0] delay_wire_1852;
  logic [15:0] delay_wire_1853;
  logic [15:0] delay_wire_1854;
  logic [15:0] delay_wire_1855;
  logic [15:0] delay_wire_1856;
  logic [15:0] delay_wire_1857;
  logic [15:0] delay_wire_1858;
  logic [15:0] delay_wire_1859;
  logic [15:0] delay_wire_1860;
  logic [15:0] delay_wire_1861;
  logic [15:0] delay_wire_1862;
  logic [15:0] delay_wire_1863;
  logic [15:0] delay_wire_1864;
  logic [15:0] delay_wire_1865;
  logic [15:0] delay_wire_1866;
  logic [15:0] delay_wire_1867;
  logic [15:0] delay_wire_1868;
  logic [15:0] delay_wire_1869;
  logic [15:0] delay_wire_1870;
  logic [15:0] delay_wire_1871;
  logic [15:0] delay_wire_1872;
  logic [15:0] delay_wire_1873;
  logic [15:0] delay_wire_1874;
  logic [15:0] delay_wire_1875;
  logic [15:0] delay_wire_1876;
  logic [15:0] delay_wire_1877;
  logic [15:0] delay_wire_1878;
  logic [15:0] delay_wire_1879;
  logic [15:0] delay_wire_1880;
  logic [15:0] delay_wire_1881;
  logic [15:0] delay_wire_1882;
  logic [15:0] delay_wire_1883;
  logic [15:0] delay_wire_1884;
  logic [15:0] delay_wire_1885;
  logic [15:0] delay_wire_1886;
  logic [15:0] delay_wire_1887;
  logic [15:0] delay_wire_1888;
  logic [15:0] delay_wire_1889;
  logic [15:0] delay_wire_1890;
  logic [15:0] delay_wire_1891;
  logic [15:0] delay_wire_1892;
  logic [15:0] delay_wire_1893;
  logic [15:0] delay_wire_1894;
  logic [15:0] delay_wire_1895;
  logic [15:0] delay_wire_1896;
  logic [15:0] delay_wire_1897;
  logic [15:0] delay_wire_1898;
  logic [15:0] delay_wire_1899;
  logic [15:0] delay_wire_1900;
  logic [15:0] delay_wire_1901;
  logic [15:0] delay_wire_1902;
  logic [15:0] delay_wire_1903;
  logic [15:0] delay_wire_1904;
  logic [15:0] delay_wire_1905;
  logic [15:0] delay_wire_1906;
  logic [15:0] delay_wire_1907;
  logic [15:0] delay_wire_1908;
  logic [15:0] delay_wire_1909;
  logic [15:0] delay_wire_1910;
  logic [15:0] delay_wire_1911;
  logic [15:0] delay_wire_1912;
  logic [15:0] delay_wire_1913;
  logic [15:0] delay_wire_1914;
  logic [15:0] delay_wire_1915;
  logic [15:0] delay_wire_1916;
  logic [15:0] delay_wire_1917;
  logic [15:0] delay_wire_1918;
  logic [15:0] delay_wire_1919;
  logic [15:0] delay_wire_1920;
  logic [15:0] delay_wire_1921;
  logic [15:0] delay_wire_1922;
  logic [15:0] delay_wire_1923;
  logic [15:0] delay_wire_1924;
  logic [15:0] delay_wire_1925;
  logic [15:0] delay_wire_1926;
  logic [15:0] delay_wire_1927;
  logic [15:0] delay_wire_1928;
  logic [15:0] delay_wire_1929;
  logic [15:0] delay_wire_1930;
  logic [15:0] delay_wire_1931;
  logic [15:0] delay_wire_1932;
  always @(posedge clk) begin
    delay_wire_1802 <= in;
    delay_wire_1803 <= delay_wire_1802;
    delay_wire_1804 <= delay_wire_1803;
    delay_wire_1805 <= delay_wire_1804;
    delay_wire_1806 <= delay_wire_1805;
    delay_wire_1807 <= delay_wire_1806;
    delay_wire_1808 <= delay_wire_1807;
    delay_wire_1809 <= delay_wire_1808;
    delay_wire_1810 <= delay_wire_1809;
    delay_wire_1811 <= delay_wire_1810;
    delay_wire_1812 <= delay_wire_1811;
    delay_wire_1813 <= delay_wire_1812;
    delay_wire_1814 <= delay_wire_1813;
    delay_wire_1815 <= delay_wire_1814;
    delay_wire_1816 <= delay_wire_1815;
    delay_wire_1817 <= delay_wire_1816;
    delay_wire_1818 <= delay_wire_1817;
    delay_wire_1819 <= delay_wire_1818;
    delay_wire_1820 <= delay_wire_1819;
    delay_wire_1821 <= delay_wire_1820;
    delay_wire_1822 <= delay_wire_1821;
    delay_wire_1823 <= delay_wire_1822;
    delay_wire_1824 <= delay_wire_1823;
    delay_wire_1825 <= delay_wire_1824;
    delay_wire_1826 <= delay_wire_1825;
    delay_wire_1827 <= delay_wire_1826;
    delay_wire_1828 <= delay_wire_1827;
    delay_wire_1829 <= delay_wire_1828;
    delay_wire_1830 <= delay_wire_1829;
    delay_wire_1831 <= delay_wire_1830;
    delay_wire_1832 <= delay_wire_1831;
    delay_wire_1833 <= delay_wire_1832;
    delay_wire_1834 <= delay_wire_1833;
    delay_wire_1835 <= delay_wire_1834;
    delay_wire_1836 <= delay_wire_1835;
    delay_wire_1837 <= delay_wire_1836;
    delay_wire_1838 <= delay_wire_1837;
    delay_wire_1839 <= delay_wire_1838;
    delay_wire_1840 <= delay_wire_1839;
    delay_wire_1841 <= delay_wire_1840;
    delay_wire_1842 <= delay_wire_1841;
    delay_wire_1843 <= delay_wire_1842;
    delay_wire_1844 <= delay_wire_1843;
    delay_wire_1845 <= delay_wire_1844;
    delay_wire_1846 <= delay_wire_1845;
    delay_wire_1847 <= delay_wire_1846;
    delay_wire_1848 <= delay_wire_1847;
    delay_wire_1849 <= delay_wire_1848;
    delay_wire_1850 <= delay_wire_1849;
    delay_wire_1851 <= delay_wire_1850;
    delay_wire_1852 <= delay_wire_1851;
    delay_wire_1853 <= delay_wire_1852;
    delay_wire_1854 <= delay_wire_1853;
    delay_wire_1855 <= delay_wire_1854;
    delay_wire_1856 <= delay_wire_1855;
    delay_wire_1857 <= delay_wire_1856;
    delay_wire_1858 <= delay_wire_1857;
    delay_wire_1859 <= delay_wire_1858;
    delay_wire_1860 <= delay_wire_1859;
    delay_wire_1861 <= delay_wire_1860;
    delay_wire_1862 <= delay_wire_1861;
    delay_wire_1863 <= delay_wire_1862;
    delay_wire_1864 <= delay_wire_1863;
    delay_wire_1865 <= delay_wire_1864;
    delay_wire_1866 <= delay_wire_1865;
    delay_wire_1867 <= delay_wire_1866;
    delay_wire_1868 <= delay_wire_1867;
    delay_wire_1869 <= delay_wire_1868;
    delay_wire_1870 <= delay_wire_1869;
    delay_wire_1871 <= delay_wire_1870;
    delay_wire_1872 <= delay_wire_1871;
    delay_wire_1873 <= delay_wire_1872;
    delay_wire_1874 <= delay_wire_1873;
    delay_wire_1875 <= delay_wire_1874;
    delay_wire_1876 <= delay_wire_1875;
    delay_wire_1877 <= delay_wire_1876;
    delay_wire_1878 <= delay_wire_1877;
    delay_wire_1879 <= delay_wire_1878;
    delay_wire_1880 <= delay_wire_1879;
    delay_wire_1881 <= delay_wire_1880;
    delay_wire_1882 <= delay_wire_1881;
    delay_wire_1883 <= delay_wire_1882;
    delay_wire_1884 <= delay_wire_1883;
    delay_wire_1885 <= delay_wire_1884;
    delay_wire_1886 <= delay_wire_1885;
    delay_wire_1887 <= delay_wire_1886;
    delay_wire_1888 <= delay_wire_1887;
    delay_wire_1889 <= delay_wire_1888;
    delay_wire_1890 <= delay_wire_1889;
    delay_wire_1891 <= delay_wire_1890;
    delay_wire_1892 <= delay_wire_1891;
    delay_wire_1893 <= delay_wire_1892;
    delay_wire_1894 <= delay_wire_1893;
    delay_wire_1895 <= delay_wire_1894;
    delay_wire_1896 <= delay_wire_1895;
    delay_wire_1897 <= delay_wire_1896;
    delay_wire_1898 <= delay_wire_1897;
    delay_wire_1899 <= delay_wire_1898;
    delay_wire_1900 <= delay_wire_1899;
    delay_wire_1901 <= delay_wire_1900;
    delay_wire_1902 <= delay_wire_1901;
    delay_wire_1903 <= delay_wire_1902;
    delay_wire_1904 <= delay_wire_1903;
    delay_wire_1905 <= delay_wire_1904;
    delay_wire_1906 <= delay_wire_1905;
    delay_wire_1907 <= delay_wire_1906;
    delay_wire_1908 <= delay_wire_1907;
    delay_wire_1909 <= delay_wire_1908;
    delay_wire_1910 <= delay_wire_1909;
    delay_wire_1911 <= delay_wire_1910;
    delay_wire_1912 <= delay_wire_1911;
    delay_wire_1913 <= delay_wire_1912;
    delay_wire_1914 <= delay_wire_1913;
    delay_wire_1915 <= delay_wire_1914;
    delay_wire_1916 <= delay_wire_1915;
    delay_wire_1917 <= delay_wire_1916;
    delay_wire_1918 <= delay_wire_1917;
    delay_wire_1919 <= delay_wire_1918;
    delay_wire_1920 <= delay_wire_1919;
    delay_wire_1921 <= delay_wire_1920;
    delay_wire_1922 <= delay_wire_1921;
    delay_wire_1923 <= delay_wire_1922;
    delay_wire_1924 <= delay_wire_1923;
    delay_wire_1925 <= delay_wire_1924;
    delay_wire_1926 <= delay_wire_1925;
    delay_wire_1927 <= delay_wire_1926;
    delay_wire_1928 <= delay_wire_1927;
    delay_wire_1929 <= delay_wire_1928;
    delay_wire_1930 <= delay_wire_1929;
    delay_wire_1931 <= delay_wire_1930;
    delay_wire_1932 <= delay_wire_1931;
  end
  assign out = delay_wire_1932;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1933;
  logic [15:0] delay_wire_1934;
  logic [15:0] delay_wire_1935;
  logic [15:0] delay_wire_1936;
  logic [15:0] delay_wire_1937;
  logic [15:0] delay_wire_1938;
  logic [15:0] delay_wire_1939;
  logic [15:0] delay_wire_1940;
  logic [15:0] delay_wire_1941;
  logic [15:0] delay_wire_1942;
  logic [15:0] delay_wire_1943;
  logic [15:0] delay_wire_1944;
  logic [15:0] delay_wire_1945;
  logic [15:0] delay_wire_1946;
  logic [15:0] delay_wire_1947;
  logic [15:0] delay_wire_1948;
  logic [15:0] delay_wire_1949;
  logic [15:0] delay_wire_1950;
  logic [15:0] delay_wire_1951;
  logic [15:0] delay_wire_1952;
  logic [15:0] delay_wire_1953;
  logic [15:0] delay_wire_1954;
  logic [15:0] delay_wire_1955;
  logic [15:0] delay_wire_1956;
  logic [15:0] delay_wire_1957;
  logic [15:0] delay_wire_1958;
  logic [15:0] delay_wire_1959;
  logic [15:0] delay_wire_1960;
  logic [15:0] delay_wire_1961;
  logic [15:0] delay_wire_1962;
  logic [15:0] delay_wire_1963;
  logic [15:0] delay_wire_1964;
  logic [15:0] delay_wire_1965;
  logic [15:0] delay_wire_1966;
  logic [15:0] delay_wire_1967;
  logic [15:0] delay_wire_1968;
  logic [15:0] delay_wire_1969;
  logic [15:0] delay_wire_1970;
  logic [15:0] delay_wire_1971;
  logic [15:0] delay_wire_1972;
  logic [15:0] delay_wire_1973;
  logic [15:0] delay_wire_1974;
  logic [15:0] delay_wire_1975;
  logic [15:0] delay_wire_1976;
  logic [15:0] delay_wire_1977;
  logic [15:0] delay_wire_1978;
  logic [15:0] delay_wire_1979;
  logic [15:0] delay_wire_1980;
  logic [15:0] delay_wire_1981;
  logic [15:0] delay_wire_1982;
  logic [15:0] delay_wire_1983;
  logic [15:0] delay_wire_1984;
  logic [15:0] delay_wire_1985;
  logic [15:0] delay_wire_1986;
  logic [15:0] delay_wire_1987;
  logic [15:0] delay_wire_1988;
  logic [15:0] delay_wire_1989;
  logic [15:0] delay_wire_1990;
  logic [15:0] delay_wire_1991;
  logic [15:0] delay_wire_1992;
  logic [15:0] delay_wire_1993;
  logic [15:0] delay_wire_1994;
  logic [15:0] delay_wire_1995;
  logic [15:0] delay_wire_1996;
  logic [15:0] delay_wire_1997;
  logic [15:0] delay_wire_1998;
  logic [15:0] delay_wire_1999;
  logic [15:0] delay_wire_2000;
  logic [15:0] delay_wire_2001;
  logic [15:0] delay_wire_2002;
  logic [15:0] delay_wire_2003;
  logic [15:0] delay_wire_2004;
  logic [15:0] delay_wire_2005;
  logic [15:0] delay_wire_2006;
  logic [15:0] delay_wire_2007;
  logic [15:0] delay_wire_2008;
  logic [15:0] delay_wire_2009;
  logic [15:0] delay_wire_2010;
  logic [15:0] delay_wire_2011;
  logic [15:0] delay_wire_2012;
  logic [15:0] delay_wire_2013;
  logic [15:0] delay_wire_2014;
  logic [15:0] delay_wire_2015;
  logic [15:0] delay_wire_2016;
  logic [15:0] delay_wire_2017;
  logic [15:0] delay_wire_2018;
  logic [15:0] delay_wire_2019;
  logic [15:0] delay_wire_2020;
  logic [15:0] delay_wire_2021;
  logic [15:0] delay_wire_2022;
  logic [15:0] delay_wire_2023;
  logic [15:0] delay_wire_2024;
  logic [15:0] delay_wire_2025;
  logic [15:0] delay_wire_2026;
  logic [15:0] delay_wire_2027;
  logic [15:0] delay_wire_2028;
  logic [15:0] delay_wire_2029;
  logic [15:0] delay_wire_2030;
  logic [15:0] delay_wire_2031;
  logic [15:0] delay_wire_2032;
  logic [15:0] delay_wire_2033;
  logic [15:0] delay_wire_2034;
  logic [15:0] delay_wire_2035;
  logic [15:0] delay_wire_2036;
  logic [15:0] delay_wire_2037;
  logic [15:0] delay_wire_2038;
  logic [15:0] delay_wire_2039;
  logic [15:0] delay_wire_2040;
  logic [15:0] delay_wire_2041;
  logic [15:0] delay_wire_2042;
  logic [15:0] delay_wire_2043;
  logic [15:0] delay_wire_2044;
  logic [15:0] delay_wire_2045;
  logic [15:0] delay_wire_2046;
  logic [15:0] delay_wire_2047;
  logic [15:0] delay_wire_2048;
  logic [15:0] delay_wire_2049;
  logic [15:0] delay_wire_2050;
  logic [15:0] delay_wire_2051;
  logic [15:0] delay_wire_2052;
  logic [15:0] delay_wire_2053;
  logic [15:0] delay_wire_2054;
  logic [15:0] delay_wire_2055;
  logic [15:0] delay_wire_2056;
  logic [15:0] delay_wire_2057;
  logic [15:0] delay_wire_2058;
  logic [15:0] delay_wire_2059;
  logic [15:0] delay_wire_2060;
  logic [15:0] delay_wire_2061;
  logic [15:0] delay_wire_2062;
  always @(posedge clk) begin
    delay_wire_1933 <= in;
    delay_wire_1934 <= delay_wire_1933;
    delay_wire_1935 <= delay_wire_1934;
    delay_wire_1936 <= delay_wire_1935;
    delay_wire_1937 <= delay_wire_1936;
    delay_wire_1938 <= delay_wire_1937;
    delay_wire_1939 <= delay_wire_1938;
    delay_wire_1940 <= delay_wire_1939;
    delay_wire_1941 <= delay_wire_1940;
    delay_wire_1942 <= delay_wire_1941;
    delay_wire_1943 <= delay_wire_1942;
    delay_wire_1944 <= delay_wire_1943;
    delay_wire_1945 <= delay_wire_1944;
    delay_wire_1946 <= delay_wire_1945;
    delay_wire_1947 <= delay_wire_1946;
    delay_wire_1948 <= delay_wire_1947;
    delay_wire_1949 <= delay_wire_1948;
    delay_wire_1950 <= delay_wire_1949;
    delay_wire_1951 <= delay_wire_1950;
    delay_wire_1952 <= delay_wire_1951;
    delay_wire_1953 <= delay_wire_1952;
    delay_wire_1954 <= delay_wire_1953;
    delay_wire_1955 <= delay_wire_1954;
    delay_wire_1956 <= delay_wire_1955;
    delay_wire_1957 <= delay_wire_1956;
    delay_wire_1958 <= delay_wire_1957;
    delay_wire_1959 <= delay_wire_1958;
    delay_wire_1960 <= delay_wire_1959;
    delay_wire_1961 <= delay_wire_1960;
    delay_wire_1962 <= delay_wire_1961;
    delay_wire_1963 <= delay_wire_1962;
    delay_wire_1964 <= delay_wire_1963;
    delay_wire_1965 <= delay_wire_1964;
    delay_wire_1966 <= delay_wire_1965;
    delay_wire_1967 <= delay_wire_1966;
    delay_wire_1968 <= delay_wire_1967;
    delay_wire_1969 <= delay_wire_1968;
    delay_wire_1970 <= delay_wire_1969;
    delay_wire_1971 <= delay_wire_1970;
    delay_wire_1972 <= delay_wire_1971;
    delay_wire_1973 <= delay_wire_1972;
    delay_wire_1974 <= delay_wire_1973;
    delay_wire_1975 <= delay_wire_1974;
    delay_wire_1976 <= delay_wire_1975;
    delay_wire_1977 <= delay_wire_1976;
    delay_wire_1978 <= delay_wire_1977;
    delay_wire_1979 <= delay_wire_1978;
    delay_wire_1980 <= delay_wire_1979;
    delay_wire_1981 <= delay_wire_1980;
    delay_wire_1982 <= delay_wire_1981;
    delay_wire_1983 <= delay_wire_1982;
    delay_wire_1984 <= delay_wire_1983;
    delay_wire_1985 <= delay_wire_1984;
    delay_wire_1986 <= delay_wire_1985;
    delay_wire_1987 <= delay_wire_1986;
    delay_wire_1988 <= delay_wire_1987;
    delay_wire_1989 <= delay_wire_1988;
    delay_wire_1990 <= delay_wire_1989;
    delay_wire_1991 <= delay_wire_1990;
    delay_wire_1992 <= delay_wire_1991;
    delay_wire_1993 <= delay_wire_1992;
    delay_wire_1994 <= delay_wire_1993;
    delay_wire_1995 <= delay_wire_1994;
    delay_wire_1996 <= delay_wire_1995;
    delay_wire_1997 <= delay_wire_1996;
    delay_wire_1998 <= delay_wire_1997;
    delay_wire_1999 <= delay_wire_1998;
    delay_wire_2000 <= delay_wire_1999;
    delay_wire_2001 <= delay_wire_2000;
    delay_wire_2002 <= delay_wire_2001;
    delay_wire_2003 <= delay_wire_2002;
    delay_wire_2004 <= delay_wire_2003;
    delay_wire_2005 <= delay_wire_2004;
    delay_wire_2006 <= delay_wire_2005;
    delay_wire_2007 <= delay_wire_2006;
    delay_wire_2008 <= delay_wire_2007;
    delay_wire_2009 <= delay_wire_2008;
    delay_wire_2010 <= delay_wire_2009;
    delay_wire_2011 <= delay_wire_2010;
    delay_wire_2012 <= delay_wire_2011;
    delay_wire_2013 <= delay_wire_2012;
    delay_wire_2014 <= delay_wire_2013;
    delay_wire_2015 <= delay_wire_2014;
    delay_wire_2016 <= delay_wire_2015;
    delay_wire_2017 <= delay_wire_2016;
    delay_wire_2018 <= delay_wire_2017;
    delay_wire_2019 <= delay_wire_2018;
    delay_wire_2020 <= delay_wire_2019;
    delay_wire_2021 <= delay_wire_2020;
    delay_wire_2022 <= delay_wire_2021;
    delay_wire_2023 <= delay_wire_2022;
    delay_wire_2024 <= delay_wire_2023;
    delay_wire_2025 <= delay_wire_2024;
    delay_wire_2026 <= delay_wire_2025;
    delay_wire_2027 <= delay_wire_2026;
    delay_wire_2028 <= delay_wire_2027;
    delay_wire_2029 <= delay_wire_2028;
    delay_wire_2030 <= delay_wire_2029;
    delay_wire_2031 <= delay_wire_2030;
    delay_wire_2032 <= delay_wire_2031;
    delay_wire_2033 <= delay_wire_2032;
    delay_wire_2034 <= delay_wire_2033;
    delay_wire_2035 <= delay_wire_2034;
    delay_wire_2036 <= delay_wire_2035;
    delay_wire_2037 <= delay_wire_2036;
    delay_wire_2038 <= delay_wire_2037;
    delay_wire_2039 <= delay_wire_2038;
    delay_wire_2040 <= delay_wire_2039;
    delay_wire_2041 <= delay_wire_2040;
    delay_wire_2042 <= delay_wire_2041;
    delay_wire_2043 <= delay_wire_2042;
    delay_wire_2044 <= delay_wire_2043;
    delay_wire_2045 <= delay_wire_2044;
    delay_wire_2046 <= delay_wire_2045;
    delay_wire_2047 <= delay_wire_2046;
    delay_wire_2048 <= delay_wire_2047;
    delay_wire_2049 <= delay_wire_2048;
    delay_wire_2050 <= delay_wire_2049;
    delay_wire_2051 <= delay_wire_2050;
    delay_wire_2052 <= delay_wire_2051;
    delay_wire_2053 <= delay_wire_2052;
    delay_wire_2054 <= delay_wire_2053;
    delay_wire_2055 <= delay_wire_2054;
    delay_wire_2056 <= delay_wire_2055;
    delay_wire_2057 <= delay_wire_2056;
    delay_wire_2058 <= delay_wire_2057;
    delay_wire_2059 <= delay_wire_2058;
    delay_wire_2060 <= delay_wire_2059;
    delay_wire_2061 <= delay_wire_2060;
    delay_wire_2062 <= delay_wire_2061;
  end
  assign out = delay_wire_2062;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2063;
  logic [15:0] delay_wire_2064;
  logic [15:0] delay_wire_2065;
  logic [15:0] delay_wire_2066;
  logic [15:0] delay_wire_2067;
  logic [15:0] delay_wire_2068;
  logic [15:0] delay_wire_2069;
  logic [15:0] delay_wire_2070;
  logic [15:0] delay_wire_2071;
  logic [15:0] delay_wire_2072;
  logic [15:0] delay_wire_2073;
  logic [15:0] delay_wire_2074;
  logic [15:0] delay_wire_2075;
  logic [15:0] delay_wire_2076;
  logic [15:0] delay_wire_2077;
  logic [15:0] delay_wire_2078;
  logic [15:0] delay_wire_2079;
  logic [15:0] delay_wire_2080;
  logic [15:0] delay_wire_2081;
  logic [15:0] delay_wire_2082;
  logic [15:0] delay_wire_2083;
  logic [15:0] delay_wire_2084;
  logic [15:0] delay_wire_2085;
  logic [15:0] delay_wire_2086;
  logic [15:0] delay_wire_2087;
  logic [15:0] delay_wire_2088;
  logic [15:0] delay_wire_2089;
  logic [15:0] delay_wire_2090;
  logic [15:0] delay_wire_2091;
  logic [15:0] delay_wire_2092;
  logic [15:0] delay_wire_2093;
  logic [15:0] delay_wire_2094;
  logic [15:0] delay_wire_2095;
  logic [15:0] delay_wire_2096;
  logic [15:0] delay_wire_2097;
  logic [15:0] delay_wire_2098;
  logic [15:0] delay_wire_2099;
  logic [15:0] delay_wire_2100;
  logic [15:0] delay_wire_2101;
  logic [15:0] delay_wire_2102;
  logic [15:0] delay_wire_2103;
  logic [15:0] delay_wire_2104;
  logic [15:0] delay_wire_2105;
  logic [15:0] delay_wire_2106;
  logic [15:0] delay_wire_2107;
  logic [15:0] delay_wire_2108;
  logic [15:0] delay_wire_2109;
  logic [15:0] delay_wire_2110;
  logic [15:0] delay_wire_2111;
  logic [15:0] delay_wire_2112;
  logic [15:0] delay_wire_2113;
  logic [15:0] delay_wire_2114;
  logic [15:0] delay_wire_2115;
  logic [15:0] delay_wire_2116;
  logic [15:0] delay_wire_2117;
  logic [15:0] delay_wire_2118;
  logic [15:0] delay_wire_2119;
  logic [15:0] delay_wire_2120;
  logic [15:0] delay_wire_2121;
  logic [15:0] delay_wire_2122;
  logic [15:0] delay_wire_2123;
  logic [15:0] delay_wire_2124;
  logic [15:0] delay_wire_2125;
  logic [15:0] delay_wire_2126;
  logic [15:0] delay_wire_2127;
  logic [15:0] delay_wire_2128;
  logic [15:0] delay_wire_2129;
  logic [15:0] delay_wire_2130;
  logic [15:0] delay_wire_2131;
  logic [15:0] delay_wire_2132;
  logic [15:0] delay_wire_2133;
  logic [15:0] delay_wire_2134;
  logic [15:0] delay_wire_2135;
  logic [15:0] delay_wire_2136;
  logic [15:0] delay_wire_2137;
  logic [15:0] delay_wire_2138;
  logic [15:0] delay_wire_2139;
  logic [15:0] delay_wire_2140;
  logic [15:0] delay_wire_2141;
  logic [15:0] delay_wire_2142;
  logic [15:0] delay_wire_2143;
  logic [15:0] delay_wire_2144;
  logic [15:0] delay_wire_2145;
  logic [15:0] delay_wire_2146;
  logic [15:0] delay_wire_2147;
  logic [15:0] delay_wire_2148;
  logic [15:0] delay_wire_2149;
  logic [15:0] delay_wire_2150;
  logic [15:0] delay_wire_2151;
  logic [15:0] delay_wire_2152;
  logic [15:0] delay_wire_2153;
  logic [15:0] delay_wire_2154;
  logic [15:0] delay_wire_2155;
  logic [15:0] delay_wire_2156;
  logic [15:0] delay_wire_2157;
  logic [15:0] delay_wire_2158;
  logic [15:0] delay_wire_2159;
  logic [15:0] delay_wire_2160;
  logic [15:0] delay_wire_2161;
  logic [15:0] delay_wire_2162;
  logic [15:0] delay_wire_2163;
  logic [15:0] delay_wire_2164;
  logic [15:0] delay_wire_2165;
  logic [15:0] delay_wire_2166;
  logic [15:0] delay_wire_2167;
  logic [15:0] delay_wire_2168;
  logic [15:0] delay_wire_2169;
  logic [15:0] delay_wire_2170;
  logic [15:0] delay_wire_2171;
  logic [15:0] delay_wire_2172;
  logic [15:0] delay_wire_2173;
  logic [15:0] delay_wire_2174;
  logic [15:0] delay_wire_2175;
  logic [15:0] delay_wire_2176;
  logic [15:0] delay_wire_2177;
  logic [15:0] delay_wire_2178;
  logic [15:0] delay_wire_2179;
  logic [15:0] delay_wire_2180;
  logic [15:0] delay_wire_2181;
  logic [15:0] delay_wire_2182;
  logic [15:0] delay_wire_2183;
  logic [15:0] delay_wire_2184;
  logic [15:0] delay_wire_2185;
  logic [15:0] delay_wire_2186;
  logic [15:0] delay_wire_2187;
  logic [15:0] delay_wire_2188;
  logic [15:0] delay_wire_2189;
  logic [15:0] delay_wire_2190;
  logic [15:0] delay_wire_2191;
  always @(posedge clk) begin
    delay_wire_2063 <= in;
    delay_wire_2064 <= delay_wire_2063;
    delay_wire_2065 <= delay_wire_2064;
    delay_wire_2066 <= delay_wire_2065;
    delay_wire_2067 <= delay_wire_2066;
    delay_wire_2068 <= delay_wire_2067;
    delay_wire_2069 <= delay_wire_2068;
    delay_wire_2070 <= delay_wire_2069;
    delay_wire_2071 <= delay_wire_2070;
    delay_wire_2072 <= delay_wire_2071;
    delay_wire_2073 <= delay_wire_2072;
    delay_wire_2074 <= delay_wire_2073;
    delay_wire_2075 <= delay_wire_2074;
    delay_wire_2076 <= delay_wire_2075;
    delay_wire_2077 <= delay_wire_2076;
    delay_wire_2078 <= delay_wire_2077;
    delay_wire_2079 <= delay_wire_2078;
    delay_wire_2080 <= delay_wire_2079;
    delay_wire_2081 <= delay_wire_2080;
    delay_wire_2082 <= delay_wire_2081;
    delay_wire_2083 <= delay_wire_2082;
    delay_wire_2084 <= delay_wire_2083;
    delay_wire_2085 <= delay_wire_2084;
    delay_wire_2086 <= delay_wire_2085;
    delay_wire_2087 <= delay_wire_2086;
    delay_wire_2088 <= delay_wire_2087;
    delay_wire_2089 <= delay_wire_2088;
    delay_wire_2090 <= delay_wire_2089;
    delay_wire_2091 <= delay_wire_2090;
    delay_wire_2092 <= delay_wire_2091;
    delay_wire_2093 <= delay_wire_2092;
    delay_wire_2094 <= delay_wire_2093;
    delay_wire_2095 <= delay_wire_2094;
    delay_wire_2096 <= delay_wire_2095;
    delay_wire_2097 <= delay_wire_2096;
    delay_wire_2098 <= delay_wire_2097;
    delay_wire_2099 <= delay_wire_2098;
    delay_wire_2100 <= delay_wire_2099;
    delay_wire_2101 <= delay_wire_2100;
    delay_wire_2102 <= delay_wire_2101;
    delay_wire_2103 <= delay_wire_2102;
    delay_wire_2104 <= delay_wire_2103;
    delay_wire_2105 <= delay_wire_2104;
    delay_wire_2106 <= delay_wire_2105;
    delay_wire_2107 <= delay_wire_2106;
    delay_wire_2108 <= delay_wire_2107;
    delay_wire_2109 <= delay_wire_2108;
    delay_wire_2110 <= delay_wire_2109;
    delay_wire_2111 <= delay_wire_2110;
    delay_wire_2112 <= delay_wire_2111;
    delay_wire_2113 <= delay_wire_2112;
    delay_wire_2114 <= delay_wire_2113;
    delay_wire_2115 <= delay_wire_2114;
    delay_wire_2116 <= delay_wire_2115;
    delay_wire_2117 <= delay_wire_2116;
    delay_wire_2118 <= delay_wire_2117;
    delay_wire_2119 <= delay_wire_2118;
    delay_wire_2120 <= delay_wire_2119;
    delay_wire_2121 <= delay_wire_2120;
    delay_wire_2122 <= delay_wire_2121;
    delay_wire_2123 <= delay_wire_2122;
    delay_wire_2124 <= delay_wire_2123;
    delay_wire_2125 <= delay_wire_2124;
    delay_wire_2126 <= delay_wire_2125;
    delay_wire_2127 <= delay_wire_2126;
    delay_wire_2128 <= delay_wire_2127;
    delay_wire_2129 <= delay_wire_2128;
    delay_wire_2130 <= delay_wire_2129;
    delay_wire_2131 <= delay_wire_2130;
    delay_wire_2132 <= delay_wire_2131;
    delay_wire_2133 <= delay_wire_2132;
    delay_wire_2134 <= delay_wire_2133;
    delay_wire_2135 <= delay_wire_2134;
    delay_wire_2136 <= delay_wire_2135;
    delay_wire_2137 <= delay_wire_2136;
    delay_wire_2138 <= delay_wire_2137;
    delay_wire_2139 <= delay_wire_2138;
    delay_wire_2140 <= delay_wire_2139;
    delay_wire_2141 <= delay_wire_2140;
    delay_wire_2142 <= delay_wire_2141;
    delay_wire_2143 <= delay_wire_2142;
    delay_wire_2144 <= delay_wire_2143;
    delay_wire_2145 <= delay_wire_2144;
    delay_wire_2146 <= delay_wire_2145;
    delay_wire_2147 <= delay_wire_2146;
    delay_wire_2148 <= delay_wire_2147;
    delay_wire_2149 <= delay_wire_2148;
    delay_wire_2150 <= delay_wire_2149;
    delay_wire_2151 <= delay_wire_2150;
    delay_wire_2152 <= delay_wire_2151;
    delay_wire_2153 <= delay_wire_2152;
    delay_wire_2154 <= delay_wire_2153;
    delay_wire_2155 <= delay_wire_2154;
    delay_wire_2156 <= delay_wire_2155;
    delay_wire_2157 <= delay_wire_2156;
    delay_wire_2158 <= delay_wire_2157;
    delay_wire_2159 <= delay_wire_2158;
    delay_wire_2160 <= delay_wire_2159;
    delay_wire_2161 <= delay_wire_2160;
    delay_wire_2162 <= delay_wire_2161;
    delay_wire_2163 <= delay_wire_2162;
    delay_wire_2164 <= delay_wire_2163;
    delay_wire_2165 <= delay_wire_2164;
    delay_wire_2166 <= delay_wire_2165;
    delay_wire_2167 <= delay_wire_2166;
    delay_wire_2168 <= delay_wire_2167;
    delay_wire_2169 <= delay_wire_2168;
    delay_wire_2170 <= delay_wire_2169;
    delay_wire_2171 <= delay_wire_2170;
    delay_wire_2172 <= delay_wire_2171;
    delay_wire_2173 <= delay_wire_2172;
    delay_wire_2174 <= delay_wire_2173;
    delay_wire_2175 <= delay_wire_2174;
    delay_wire_2176 <= delay_wire_2175;
    delay_wire_2177 <= delay_wire_2176;
    delay_wire_2178 <= delay_wire_2177;
    delay_wire_2179 <= delay_wire_2178;
    delay_wire_2180 <= delay_wire_2179;
    delay_wire_2181 <= delay_wire_2180;
    delay_wire_2182 <= delay_wire_2181;
    delay_wire_2183 <= delay_wire_2182;
    delay_wire_2184 <= delay_wire_2183;
    delay_wire_2185 <= delay_wire_2184;
    delay_wire_2186 <= delay_wire_2185;
    delay_wire_2187 <= delay_wire_2186;
    delay_wire_2188 <= delay_wire_2187;
    delay_wire_2189 <= delay_wire_2188;
    delay_wire_2190 <= delay_wire_2189;
    delay_wire_2191 <= delay_wire_2190;
  end
  assign out = delay_wire_2191;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2192;
  logic [15:0] delay_wire_2193;
  logic [15:0] delay_wire_2194;
  logic [15:0] delay_wire_2195;
  logic [15:0] delay_wire_2196;
  logic [15:0] delay_wire_2197;
  logic [15:0] delay_wire_2198;
  logic [15:0] delay_wire_2199;
  logic [15:0] delay_wire_2200;
  logic [15:0] delay_wire_2201;
  logic [15:0] delay_wire_2202;
  logic [15:0] delay_wire_2203;
  logic [15:0] delay_wire_2204;
  logic [15:0] delay_wire_2205;
  logic [15:0] delay_wire_2206;
  logic [15:0] delay_wire_2207;
  logic [15:0] delay_wire_2208;
  logic [15:0] delay_wire_2209;
  logic [15:0] delay_wire_2210;
  logic [15:0] delay_wire_2211;
  logic [15:0] delay_wire_2212;
  logic [15:0] delay_wire_2213;
  logic [15:0] delay_wire_2214;
  logic [15:0] delay_wire_2215;
  logic [15:0] delay_wire_2216;
  logic [15:0] delay_wire_2217;
  logic [15:0] delay_wire_2218;
  logic [15:0] delay_wire_2219;
  logic [15:0] delay_wire_2220;
  logic [15:0] delay_wire_2221;
  logic [15:0] delay_wire_2222;
  logic [15:0] delay_wire_2223;
  logic [15:0] delay_wire_2224;
  logic [15:0] delay_wire_2225;
  logic [15:0] delay_wire_2226;
  logic [15:0] delay_wire_2227;
  logic [15:0] delay_wire_2228;
  logic [15:0] delay_wire_2229;
  logic [15:0] delay_wire_2230;
  logic [15:0] delay_wire_2231;
  logic [15:0] delay_wire_2232;
  logic [15:0] delay_wire_2233;
  logic [15:0] delay_wire_2234;
  logic [15:0] delay_wire_2235;
  logic [15:0] delay_wire_2236;
  logic [15:0] delay_wire_2237;
  logic [15:0] delay_wire_2238;
  logic [15:0] delay_wire_2239;
  logic [15:0] delay_wire_2240;
  logic [15:0] delay_wire_2241;
  logic [15:0] delay_wire_2242;
  logic [15:0] delay_wire_2243;
  logic [15:0] delay_wire_2244;
  logic [15:0] delay_wire_2245;
  logic [15:0] delay_wire_2246;
  logic [15:0] delay_wire_2247;
  logic [15:0] delay_wire_2248;
  logic [15:0] delay_wire_2249;
  logic [15:0] delay_wire_2250;
  logic [15:0] delay_wire_2251;
  logic [15:0] delay_wire_2252;
  logic [15:0] delay_wire_2253;
  logic [15:0] delay_wire_2254;
  logic [15:0] delay_wire_2255;
  logic [15:0] delay_wire_2256;
  logic [15:0] delay_wire_2257;
  logic [15:0] delay_wire_2258;
  always @(posedge clk) begin
    delay_wire_2192 <= in;
    delay_wire_2193 <= delay_wire_2192;
    delay_wire_2194 <= delay_wire_2193;
    delay_wire_2195 <= delay_wire_2194;
    delay_wire_2196 <= delay_wire_2195;
    delay_wire_2197 <= delay_wire_2196;
    delay_wire_2198 <= delay_wire_2197;
    delay_wire_2199 <= delay_wire_2198;
    delay_wire_2200 <= delay_wire_2199;
    delay_wire_2201 <= delay_wire_2200;
    delay_wire_2202 <= delay_wire_2201;
    delay_wire_2203 <= delay_wire_2202;
    delay_wire_2204 <= delay_wire_2203;
    delay_wire_2205 <= delay_wire_2204;
    delay_wire_2206 <= delay_wire_2205;
    delay_wire_2207 <= delay_wire_2206;
    delay_wire_2208 <= delay_wire_2207;
    delay_wire_2209 <= delay_wire_2208;
    delay_wire_2210 <= delay_wire_2209;
    delay_wire_2211 <= delay_wire_2210;
    delay_wire_2212 <= delay_wire_2211;
    delay_wire_2213 <= delay_wire_2212;
    delay_wire_2214 <= delay_wire_2213;
    delay_wire_2215 <= delay_wire_2214;
    delay_wire_2216 <= delay_wire_2215;
    delay_wire_2217 <= delay_wire_2216;
    delay_wire_2218 <= delay_wire_2217;
    delay_wire_2219 <= delay_wire_2218;
    delay_wire_2220 <= delay_wire_2219;
    delay_wire_2221 <= delay_wire_2220;
    delay_wire_2222 <= delay_wire_2221;
    delay_wire_2223 <= delay_wire_2222;
    delay_wire_2224 <= delay_wire_2223;
    delay_wire_2225 <= delay_wire_2224;
    delay_wire_2226 <= delay_wire_2225;
    delay_wire_2227 <= delay_wire_2226;
    delay_wire_2228 <= delay_wire_2227;
    delay_wire_2229 <= delay_wire_2228;
    delay_wire_2230 <= delay_wire_2229;
    delay_wire_2231 <= delay_wire_2230;
    delay_wire_2232 <= delay_wire_2231;
    delay_wire_2233 <= delay_wire_2232;
    delay_wire_2234 <= delay_wire_2233;
    delay_wire_2235 <= delay_wire_2234;
    delay_wire_2236 <= delay_wire_2235;
    delay_wire_2237 <= delay_wire_2236;
    delay_wire_2238 <= delay_wire_2237;
    delay_wire_2239 <= delay_wire_2238;
    delay_wire_2240 <= delay_wire_2239;
    delay_wire_2241 <= delay_wire_2240;
    delay_wire_2242 <= delay_wire_2241;
    delay_wire_2243 <= delay_wire_2242;
    delay_wire_2244 <= delay_wire_2243;
    delay_wire_2245 <= delay_wire_2244;
    delay_wire_2246 <= delay_wire_2245;
    delay_wire_2247 <= delay_wire_2246;
    delay_wire_2248 <= delay_wire_2247;
    delay_wire_2249 <= delay_wire_2248;
    delay_wire_2250 <= delay_wire_2249;
    delay_wire_2251 <= delay_wire_2250;
    delay_wire_2252 <= delay_wire_2251;
    delay_wire_2253 <= delay_wire_2252;
    delay_wire_2254 <= delay_wire_2253;
    delay_wire_2255 <= delay_wire_2254;
    delay_wire_2256 <= delay_wire_2255;
    delay_wire_2257 <= delay_wire_2256;
    delay_wire_2258 <= delay_wire_2257;
  end
  assign out = delay_wire_2258;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2259;
  logic [15:0] delay_wire_2260;
  logic [15:0] delay_wire_2261;
  logic [15:0] delay_wire_2262;
  logic [15:0] delay_wire_2263;
  logic [15:0] delay_wire_2264;
  logic [15:0] delay_wire_2265;
  logic [15:0] delay_wire_2266;
  logic [15:0] delay_wire_2267;
  logic [15:0] delay_wire_2268;
  logic [15:0] delay_wire_2269;
  logic [15:0] delay_wire_2270;
  logic [15:0] delay_wire_2271;
  logic [15:0] delay_wire_2272;
  logic [15:0] delay_wire_2273;
  logic [15:0] delay_wire_2274;
  logic [15:0] delay_wire_2275;
  logic [15:0] delay_wire_2276;
  logic [15:0] delay_wire_2277;
  logic [15:0] delay_wire_2278;
  logic [15:0] delay_wire_2279;
  logic [15:0] delay_wire_2280;
  logic [15:0] delay_wire_2281;
  logic [15:0] delay_wire_2282;
  logic [15:0] delay_wire_2283;
  logic [15:0] delay_wire_2284;
  logic [15:0] delay_wire_2285;
  logic [15:0] delay_wire_2286;
  logic [15:0] delay_wire_2287;
  logic [15:0] delay_wire_2288;
  logic [15:0] delay_wire_2289;
  logic [15:0] delay_wire_2290;
  logic [15:0] delay_wire_2291;
  logic [15:0] delay_wire_2292;
  logic [15:0] delay_wire_2293;
  logic [15:0] delay_wire_2294;
  logic [15:0] delay_wire_2295;
  logic [15:0] delay_wire_2296;
  logic [15:0] delay_wire_2297;
  logic [15:0] delay_wire_2298;
  logic [15:0] delay_wire_2299;
  logic [15:0] delay_wire_2300;
  logic [15:0] delay_wire_2301;
  logic [15:0] delay_wire_2302;
  logic [15:0] delay_wire_2303;
  logic [15:0] delay_wire_2304;
  logic [15:0] delay_wire_2305;
  logic [15:0] delay_wire_2306;
  logic [15:0] delay_wire_2307;
  logic [15:0] delay_wire_2308;
  logic [15:0] delay_wire_2309;
  logic [15:0] delay_wire_2310;
  logic [15:0] delay_wire_2311;
  logic [15:0] delay_wire_2312;
  logic [15:0] delay_wire_2313;
  logic [15:0] delay_wire_2314;
  logic [15:0] delay_wire_2315;
  logic [15:0] delay_wire_2316;
  logic [15:0] delay_wire_2317;
  logic [15:0] delay_wire_2318;
  logic [15:0] delay_wire_2319;
  logic [15:0] delay_wire_2320;
  logic [15:0] delay_wire_2321;
  logic [15:0] delay_wire_2322;
  logic [15:0] delay_wire_2323;
  logic [15:0] delay_wire_2324;
  always @(posedge clk) begin
    delay_wire_2259 <= in;
    delay_wire_2260 <= delay_wire_2259;
    delay_wire_2261 <= delay_wire_2260;
    delay_wire_2262 <= delay_wire_2261;
    delay_wire_2263 <= delay_wire_2262;
    delay_wire_2264 <= delay_wire_2263;
    delay_wire_2265 <= delay_wire_2264;
    delay_wire_2266 <= delay_wire_2265;
    delay_wire_2267 <= delay_wire_2266;
    delay_wire_2268 <= delay_wire_2267;
    delay_wire_2269 <= delay_wire_2268;
    delay_wire_2270 <= delay_wire_2269;
    delay_wire_2271 <= delay_wire_2270;
    delay_wire_2272 <= delay_wire_2271;
    delay_wire_2273 <= delay_wire_2272;
    delay_wire_2274 <= delay_wire_2273;
    delay_wire_2275 <= delay_wire_2274;
    delay_wire_2276 <= delay_wire_2275;
    delay_wire_2277 <= delay_wire_2276;
    delay_wire_2278 <= delay_wire_2277;
    delay_wire_2279 <= delay_wire_2278;
    delay_wire_2280 <= delay_wire_2279;
    delay_wire_2281 <= delay_wire_2280;
    delay_wire_2282 <= delay_wire_2281;
    delay_wire_2283 <= delay_wire_2282;
    delay_wire_2284 <= delay_wire_2283;
    delay_wire_2285 <= delay_wire_2284;
    delay_wire_2286 <= delay_wire_2285;
    delay_wire_2287 <= delay_wire_2286;
    delay_wire_2288 <= delay_wire_2287;
    delay_wire_2289 <= delay_wire_2288;
    delay_wire_2290 <= delay_wire_2289;
    delay_wire_2291 <= delay_wire_2290;
    delay_wire_2292 <= delay_wire_2291;
    delay_wire_2293 <= delay_wire_2292;
    delay_wire_2294 <= delay_wire_2293;
    delay_wire_2295 <= delay_wire_2294;
    delay_wire_2296 <= delay_wire_2295;
    delay_wire_2297 <= delay_wire_2296;
    delay_wire_2298 <= delay_wire_2297;
    delay_wire_2299 <= delay_wire_2298;
    delay_wire_2300 <= delay_wire_2299;
    delay_wire_2301 <= delay_wire_2300;
    delay_wire_2302 <= delay_wire_2301;
    delay_wire_2303 <= delay_wire_2302;
    delay_wire_2304 <= delay_wire_2303;
    delay_wire_2305 <= delay_wire_2304;
    delay_wire_2306 <= delay_wire_2305;
    delay_wire_2307 <= delay_wire_2306;
    delay_wire_2308 <= delay_wire_2307;
    delay_wire_2309 <= delay_wire_2308;
    delay_wire_2310 <= delay_wire_2309;
    delay_wire_2311 <= delay_wire_2310;
    delay_wire_2312 <= delay_wire_2311;
    delay_wire_2313 <= delay_wire_2312;
    delay_wire_2314 <= delay_wire_2313;
    delay_wire_2315 <= delay_wire_2314;
    delay_wire_2316 <= delay_wire_2315;
    delay_wire_2317 <= delay_wire_2316;
    delay_wire_2318 <= delay_wire_2317;
    delay_wire_2319 <= delay_wire_2318;
    delay_wire_2320 <= delay_wire_2319;
    delay_wire_2321 <= delay_wire_2320;
    delay_wire_2322 <= delay_wire_2321;
    delay_wire_2323 <= delay_wire_2322;
    delay_wire_2324 <= delay_wire_2323;
  end
  assign out = delay_wire_2324;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2325;
  logic [15:0] delay_wire_2326;
  logic [15:0] delay_wire_2327;
  logic [15:0] delay_wire_2328;
  logic [15:0] delay_wire_2329;
  logic [15:0] delay_wire_2330;
  logic [15:0] delay_wire_2331;
  logic [15:0] delay_wire_2332;
  logic [15:0] delay_wire_2333;
  logic [15:0] delay_wire_2334;
  logic [15:0] delay_wire_2335;
  logic [15:0] delay_wire_2336;
  logic [15:0] delay_wire_2337;
  logic [15:0] delay_wire_2338;
  logic [15:0] delay_wire_2339;
  logic [15:0] delay_wire_2340;
  logic [15:0] delay_wire_2341;
  logic [15:0] delay_wire_2342;
  logic [15:0] delay_wire_2343;
  logic [15:0] delay_wire_2344;
  logic [15:0] delay_wire_2345;
  logic [15:0] delay_wire_2346;
  logic [15:0] delay_wire_2347;
  logic [15:0] delay_wire_2348;
  logic [15:0] delay_wire_2349;
  logic [15:0] delay_wire_2350;
  logic [15:0] delay_wire_2351;
  logic [15:0] delay_wire_2352;
  logic [15:0] delay_wire_2353;
  logic [15:0] delay_wire_2354;
  logic [15:0] delay_wire_2355;
  logic [15:0] delay_wire_2356;
  logic [15:0] delay_wire_2357;
  logic [15:0] delay_wire_2358;
  logic [15:0] delay_wire_2359;
  logic [15:0] delay_wire_2360;
  logic [15:0] delay_wire_2361;
  logic [15:0] delay_wire_2362;
  logic [15:0] delay_wire_2363;
  logic [15:0] delay_wire_2364;
  logic [15:0] delay_wire_2365;
  logic [15:0] delay_wire_2366;
  logic [15:0] delay_wire_2367;
  logic [15:0] delay_wire_2368;
  logic [15:0] delay_wire_2369;
  logic [15:0] delay_wire_2370;
  logic [15:0] delay_wire_2371;
  logic [15:0] delay_wire_2372;
  logic [15:0] delay_wire_2373;
  logic [15:0] delay_wire_2374;
  logic [15:0] delay_wire_2375;
  logic [15:0] delay_wire_2376;
  logic [15:0] delay_wire_2377;
  logic [15:0] delay_wire_2378;
  logic [15:0] delay_wire_2379;
  logic [15:0] delay_wire_2380;
  logic [15:0] delay_wire_2381;
  logic [15:0] delay_wire_2382;
  logic [15:0] delay_wire_2383;
  logic [15:0] delay_wire_2384;
  logic [15:0] delay_wire_2385;
  logic [15:0] delay_wire_2386;
  logic [15:0] delay_wire_2387;
  logic [15:0] delay_wire_2388;
  logic [15:0] delay_wire_2389;
  always @(posedge clk) begin
    delay_wire_2325 <= in;
    delay_wire_2326 <= delay_wire_2325;
    delay_wire_2327 <= delay_wire_2326;
    delay_wire_2328 <= delay_wire_2327;
    delay_wire_2329 <= delay_wire_2328;
    delay_wire_2330 <= delay_wire_2329;
    delay_wire_2331 <= delay_wire_2330;
    delay_wire_2332 <= delay_wire_2331;
    delay_wire_2333 <= delay_wire_2332;
    delay_wire_2334 <= delay_wire_2333;
    delay_wire_2335 <= delay_wire_2334;
    delay_wire_2336 <= delay_wire_2335;
    delay_wire_2337 <= delay_wire_2336;
    delay_wire_2338 <= delay_wire_2337;
    delay_wire_2339 <= delay_wire_2338;
    delay_wire_2340 <= delay_wire_2339;
    delay_wire_2341 <= delay_wire_2340;
    delay_wire_2342 <= delay_wire_2341;
    delay_wire_2343 <= delay_wire_2342;
    delay_wire_2344 <= delay_wire_2343;
    delay_wire_2345 <= delay_wire_2344;
    delay_wire_2346 <= delay_wire_2345;
    delay_wire_2347 <= delay_wire_2346;
    delay_wire_2348 <= delay_wire_2347;
    delay_wire_2349 <= delay_wire_2348;
    delay_wire_2350 <= delay_wire_2349;
    delay_wire_2351 <= delay_wire_2350;
    delay_wire_2352 <= delay_wire_2351;
    delay_wire_2353 <= delay_wire_2352;
    delay_wire_2354 <= delay_wire_2353;
    delay_wire_2355 <= delay_wire_2354;
    delay_wire_2356 <= delay_wire_2355;
    delay_wire_2357 <= delay_wire_2356;
    delay_wire_2358 <= delay_wire_2357;
    delay_wire_2359 <= delay_wire_2358;
    delay_wire_2360 <= delay_wire_2359;
    delay_wire_2361 <= delay_wire_2360;
    delay_wire_2362 <= delay_wire_2361;
    delay_wire_2363 <= delay_wire_2362;
    delay_wire_2364 <= delay_wire_2363;
    delay_wire_2365 <= delay_wire_2364;
    delay_wire_2366 <= delay_wire_2365;
    delay_wire_2367 <= delay_wire_2366;
    delay_wire_2368 <= delay_wire_2367;
    delay_wire_2369 <= delay_wire_2368;
    delay_wire_2370 <= delay_wire_2369;
    delay_wire_2371 <= delay_wire_2370;
    delay_wire_2372 <= delay_wire_2371;
    delay_wire_2373 <= delay_wire_2372;
    delay_wire_2374 <= delay_wire_2373;
    delay_wire_2375 <= delay_wire_2374;
    delay_wire_2376 <= delay_wire_2375;
    delay_wire_2377 <= delay_wire_2376;
    delay_wire_2378 <= delay_wire_2377;
    delay_wire_2379 <= delay_wire_2378;
    delay_wire_2380 <= delay_wire_2379;
    delay_wire_2381 <= delay_wire_2380;
    delay_wire_2382 <= delay_wire_2381;
    delay_wire_2383 <= delay_wire_2382;
    delay_wire_2384 <= delay_wire_2383;
    delay_wire_2385 <= delay_wire_2384;
    delay_wire_2386 <= delay_wire_2385;
    delay_wire_2387 <= delay_wire_2386;
    delay_wire_2388 <= delay_wire_2387;
    delay_wire_2389 <= delay_wire_2388;
  end
  assign out = delay_wire_2389;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2390;
  logic [15:0] delay_wire_2391;
  logic [15:0] delay_wire_2392;
  always @(posedge clk) begin
    delay_wire_2390 <= in;
    delay_wire_2391 <= delay_wire_2390;
    delay_wire_2392 <= delay_wire_2391;
  end
  assign out = delay_wire_2392;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2393;
  always @(posedge clk) begin
    delay_wire_2393 <= in;
  end
  assign out = delay_wire_2393;
endmodule

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2394;
  logic [15:0] delay_wire_2395;
  always @(posedge clk) begin
    delay_wire_2394 <= in;
    delay_wire_2395 <= delay_wire_2394;
  end
  assign out = delay_wire_2395;
endmodule

// { op_hcompute_lyy_stencil[root, lyy_s0_y, lyy_s0_x] -> [(133 + 64lyy_s0_y + lyy_s0_x)] }
module lyy_stencil_op_hcompute_lyy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lyy_stencil_write_ctrl_vars[2:0], output op_hcompute_lyy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lyy_stencil_write_wen =(on && on2 && op_hcompute_lyy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lyy_stencil_write_ctrl_vars[1]<=61 && op_hcompute_lyy_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lyy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lyy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lyy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lyy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lyy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lyy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lyy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lyy_stencil_write_ctrl_vars[1] <= op_hcompute_lyy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lyy_stencil_write_ctrl_vars[2] <= op_hcompute_lyy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(264 + 64lgyy_s1_y + lgyy_s1_x)] }
module lyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_1_read_ren =(on && on2 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] + 1;
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
module lyy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgyy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgyy_stencil_1_read [8:0] ,
	input op_hcompute_lyy_stencil_write_wen,
	input [15:0] op_hcompute_lyy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lyy_stencil_write [0:0] );

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[0]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[1]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[2]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_14_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[3]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_15_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[4]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_16_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[5]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_17_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[6]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_18_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[7]));

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_19_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]), .out(op_hcompute_lgyy_stencil_1_read[8]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lyy_stencil_write_wen_fsm_out;
  lyy_stencil_op_hcompute_lyy_stencil_write_fsm lyy_stencil_op_hcompute_lyy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lyy_stencil_write_ctrl_vars( op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lyy_stencil_write_wen(op_hcompute_lyy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_1_read_ren_fsm_out;
  lyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm lyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_1_read_ctrl_vars( op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_1_read_ren(op_hcompute_lgyy_stencil_1_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_0 = (((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_1 = (((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_1,lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_0 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_1 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_0 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_0 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_1 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_1 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_1 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_0 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_1 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_0 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_1 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_0 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_lyy_stencil_write_wen_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lyy_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_lyy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

// padded16_global_wrapper_stencil has embarassing partition: 0

module padded16_global_wrapper_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2396;
  logic [15:0] delay_wire_2397;
  logic [15:0] delay_wire_2398;
  logic [15:0] delay_wire_2399;
  logic [15:0] delay_wire_2400;
  logic [15:0] delay_wire_2401;
  logic [15:0] delay_wire_2402;
  logic [15:0] delay_wire_2403;
  logic [15:0] delay_wire_2404;
  logic [15:0] delay_wire_2405;
  logic [15:0] delay_wire_2406;
  logic [15:0] delay_wire_2407;
  logic [15:0] delay_wire_2408;
  logic [15:0] delay_wire_2409;
  logic [15:0] delay_wire_2410;
  logic [15:0] delay_wire_2411;
  logic [15:0] delay_wire_2412;
  logic [15:0] delay_wire_2413;
  logic [15:0] delay_wire_2414;
  logic [15:0] delay_wire_2415;
  logic [15:0] delay_wire_2416;
  logic [15:0] delay_wire_2417;
  logic [15:0] delay_wire_2418;
  logic [15:0] delay_wire_2419;
  logic [15:0] delay_wire_2420;
  logic [15:0] delay_wire_2421;
  logic [15:0] delay_wire_2422;
  logic [15:0] delay_wire_2423;
  logic [15:0] delay_wire_2424;
  logic [15:0] delay_wire_2425;
  logic [15:0] delay_wire_2426;
  logic [15:0] delay_wire_2427;
  logic [15:0] delay_wire_2428;
  logic [15:0] delay_wire_2429;
  logic [15:0] delay_wire_2430;
  logic [15:0] delay_wire_2431;
  logic [15:0] delay_wire_2432;
  logic [15:0] delay_wire_2433;
  logic [15:0] delay_wire_2434;
  logic [15:0] delay_wire_2435;
  logic [15:0] delay_wire_2436;
  logic [15:0] delay_wire_2437;
  logic [15:0] delay_wire_2438;
  logic [15:0] delay_wire_2439;
  logic [15:0] delay_wire_2440;
  logic [15:0] delay_wire_2441;
  logic [15:0] delay_wire_2442;
  logic [15:0] delay_wire_2443;
  logic [15:0] delay_wire_2444;
  logic [15:0] delay_wire_2445;
  logic [15:0] delay_wire_2446;
  logic [15:0] delay_wire_2447;
  logic [15:0] delay_wire_2448;
  logic [15:0] delay_wire_2449;
  logic [15:0] delay_wire_2450;
  logic [15:0] delay_wire_2451;
  logic [15:0] delay_wire_2452;
  logic [15:0] delay_wire_2453;
  logic [15:0] delay_wire_2454;
  logic [15:0] delay_wire_2455;
  logic [15:0] delay_wire_2456;
  logic [15:0] delay_wire_2457;
  logic [15:0] delay_wire_2458;
  logic [15:0] delay_wire_2459;
  logic [15:0] delay_wire_2460;
  logic [15:0] delay_wire_2461;
  logic [15:0] delay_wire_2462;
  logic [15:0] delay_wire_2463;
  logic [15:0] delay_wire_2464;
  logic [15:0] delay_wire_2465;
  logic [15:0] delay_wire_2466;
  logic [15:0] delay_wire_2467;
  logic [15:0] delay_wire_2468;
  logic [15:0] delay_wire_2469;
  logic [15:0] delay_wire_2470;
  logic [15:0] delay_wire_2471;
  logic [15:0] delay_wire_2472;
  logic [15:0] delay_wire_2473;
  logic [15:0] delay_wire_2474;
  logic [15:0] delay_wire_2475;
  logic [15:0] delay_wire_2476;
  logic [15:0] delay_wire_2477;
  logic [15:0] delay_wire_2478;
  logic [15:0] delay_wire_2479;
  logic [15:0] delay_wire_2480;
  logic [15:0] delay_wire_2481;
  logic [15:0] delay_wire_2482;
  logic [15:0] delay_wire_2483;
  logic [15:0] delay_wire_2484;
  logic [15:0] delay_wire_2485;
  logic [15:0] delay_wire_2486;
  logic [15:0] delay_wire_2487;
  logic [15:0] delay_wire_2488;
  logic [15:0] delay_wire_2489;
  logic [15:0] delay_wire_2490;
  logic [15:0] delay_wire_2491;
  logic [15:0] delay_wire_2492;
  logic [15:0] delay_wire_2493;
  logic [15:0] delay_wire_2494;
  logic [15:0] delay_wire_2495;
  logic [15:0] delay_wire_2496;
  logic [15:0] delay_wire_2497;
  logic [15:0] delay_wire_2498;
  logic [15:0] delay_wire_2499;
  logic [15:0] delay_wire_2500;
  logic [15:0] delay_wire_2501;
  logic [15:0] delay_wire_2502;
  logic [15:0] delay_wire_2503;
  logic [15:0] delay_wire_2504;
  logic [15:0] delay_wire_2505;
  logic [15:0] delay_wire_2506;
  logic [15:0] delay_wire_2507;
  logic [15:0] delay_wire_2508;
  logic [15:0] delay_wire_2509;
  logic [15:0] delay_wire_2510;
  logic [15:0] delay_wire_2511;
  logic [15:0] delay_wire_2512;
  logic [15:0] delay_wire_2513;
  logic [15:0] delay_wire_2514;
  logic [15:0] delay_wire_2515;
  logic [15:0] delay_wire_2516;
  logic [15:0] delay_wire_2517;
  logic [15:0] delay_wire_2518;
  logic [15:0] delay_wire_2519;
  logic [15:0] delay_wire_2520;
  logic [15:0] delay_wire_2521;
  logic [15:0] delay_wire_2522;
  logic [15:0] delay_wire_2523;
  logic [15:0] delay_wire_2524;
  always @(posedge clk) begin
    delay_wire_2396 <= in;
    delay_wire_2397 <= delay_wire_2396;
    delay_wire_2398 <= delay_wire_2397;
    delay_wire_2399 <= delay_wire_2398;
    delay_wire_2400 <= delay_wire_2399;
    delay_wire_2401 <= delay_wire_2400;
    delay_wire_2402 <= delay_wire_2401;
    delay_wire_2403 <= delay_wire_2402;
    delay_wire_2404 <= delay_wire_2403;
    delay_wire_2405 <= delay_wire_2404;
    delay_wire_2406 <= delay_wire_2405;
    delay_wire_2407 <= delay_wire_2406;
    delay_wire_2408 <= delay_wire_2407;
    delay_wire_2409 <= delay_wire_2408;
    delay_wire_2410 <= delay_wire_2409;
    delay_wire_2411 <= delay_wire_2410;
    delay_wire_2412 <= delay_wire_2411;
    delay_wire_2413 <= delay_wire_2412;
    delay_wire_2414 <= delay_wire_2413;
    delay_wire_2415 <= delay_wire_2414;
    delay_wire_2416 <= delay_wire_2415;
    delay_wire_2417 <= delay_wire_2416;
    delay_wire_2418 <= delay_wire_2417;
    delay_wire_2419 <= delay_wire_2418;
    delay_wire_2420 <= delay_wire_2419;
    delay_wire_2421 <= delay_wire_2420;
    delay_wire_2422 <= delay_wire_2421;
    delay_wire_2423 <= delay_wire_2422;
    delay_wire_2424 <= delay_wire_2423;
    delay_wire_2425 <= delay_wire_2424;
    delay_wire_2426 <= delay_wire_2425;
    delay_wire_2427 <= delay_wire_2426;
    delay_wire_2428 <= delay_wire_2427;
    delay_wire_2429 <= delay_wire_2428;
    delay_wire_2430 <= delay_wire_2429;
    delay_wire_2431 <= delay_wire_2430;
    delay_wire_2432 <= delay_wire_2431;
    delay_wire_2433 <= delay_wire_2432;
    delay_wire_2434 <= delay_wire_2433;
    delay_wire_2435 <= delay_wire_2434;
    delay_wire_2436 <= delay_wire_2435;
    delay_wire_2437 <= delay_wire_2436;
    delay_wire_2438 <= delay_wire_2437;
    delay_wire_2439 <= delay_wire_2438;
    delay_wire_2440 <= delay_wire_2439;
    delay_wire_2441 <= delay_wire_2440;
    delay_wire_2442 <= delay_wire_2441;
    delay_wire_2443 <= delay_wire_2442;
    delay_wire_2444 <= delay_wire_2443;
    delay_wire_2445 <= delay_wire_2444;
    delay_wire_2446 <= delay_wire_2445;
    delay_wire_2447 <= delay_wire_2446;
    delay_wire_2448 <= delay_wire_2447;
    delay_wire_2449 <= delay_wire_2448;
    delay_wire_2450 <= delay_wire_2449;
    delay_wire_2451 <= delay_wire_2450;
    delay_wire_2452 <= delay_wire_2451;
    delay_wire_2453 <= delay_wire_2452;
    delay_wire_2454 <= delay_wire_2453;
    delay_wire_2455 <= delay_wire_2454;
    delay_wire_2456 <= delay_wire_2455;
    delay_wire_2457 <= delay_wire_2456;
    delay_wire_2458 <= delay_wire_2457;
    delay_wire_2459 <= delay_wire_2458;
    delay_wire_2460 <= delay_wire_2459;
    delay_wire_2461 <= delay_wire_2460;
    delay_wire_2462 <= delay_wire_2461;
    delay_wire_2463 <= delay_wire_2462;
    delay_wire_2464 <= delay_wire_2463;
    delay_wire_2465 <= delay_wire_2464;
    delay_wire_2466 <= delay_wire_2465;
    delay_wire_2467 <= delay_wire_2466;
    delay_wire_2468 <= delay_wire_2467;
    delay_wire_2469 <= delay_wire_2468;
    delay_wire_2470 <= delay_wire_2469;
    delay_wire_2471 <= delay_wire_2470;
    delay_wire_2472 <= delay_wire_2471;
    delay_wire_2473 <= delay_wire_2472;
    delay_wire_2474 <= delay_wire_2473;
    delay_wire_2475 <= delay_wire_2474;
    delay_wire_2476 <= delay_wire_2475;
    delay_wire_2477 <= delay_wire_2476;
    delay_wire_2478 <= delay_wire_2477;
    delay_wire_2479 <= delay_wire_2478;
    delay_wire_2480 <= delay_wire_2479;
    delay_wire_2481 <= delay_wire_2480;
    delay_wire_2482 <= delay_wire_2481;
    delay_wire_2483 <= delay_wire_2482;
    delay_wire_2484 <= delay_wire_2483;
    delay_wire_2485 <= delay_wire_2484;
    delay_wire_2486 <= delay_wire_2485;
    delay_wire_2487 <= delay_wire_2486;
    delay_wire_2488 <= delay_wire_2487;
    delay_wire_2489 <= delay_wire_2488;
    delay_wire_2490 <= delay_wire_2489;
    delay_wire_2491 <= delay_wire_2490;
    delay_wire_2492 <= delay_wire_2491;
    delay_wire_2493 <= delay_wire_2492;
    delay_wire_2494 <= delay_wire_2493;
    delay_wire_2495 <= delay_wire_2494;
    delay_wire_2496 <= delay_wire_2495;
    delay_wire_2497 <= delay_wire_2496;
    delay_wire_2498 <= delay_wire_2497;
    delay_wire_2499 <= delay_wire_2498;
    delay_wire_2500 <= delay_wire_2499;
    delay_wire_2501 <= delay_wire_2500;
    delay_wire_2502 <= delay_wire_2501;
    delay_wire_2503 <= delay_wire_2502;
    delay_wire_2504 <= delay_wire_2503;
    delay_wire_2505 <= delay_wire_2504;
    delay_wire_2506 <= delay_wire_2505;
    delay_wire_2507 <= delay_wire_2506;
    delay_wire_2508 <= delay_wire_2507;
    delay_wire_2509 <= delay_wire_2508;
    delay_wire_2510 <= delay_wire_2509;
    delay_wire_2511 <= delay_wire_2510;
    delay_wire_2512 <= delay_wire_2511;
    delay_wire_2513 <= delay_wire_2512;
    delay_wire_2514 <= delay_wire_2513;
    delay_wire_2515 <= delay_wire_2514;
    delay_wire_2516 <= delay_wire_2515;
    delay_wire_2517 <= delay_wire_2516;
    delay_wire_2518 <= delay_wire_2517;
    delay_wire_2519 <= delay_wire_2518;
    delay_wire_2520 <= delay_wire_2519;
    delay_wire_2521 <= delay_wire_2520;
    delay_wire_2522 <= delay_wire_2521;
    delay_wire_2523 <= delay_wire_2522;
    delay_wire_2524 <= delay_wire_2523;
  end
  assign out = delay_wire_2524;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2525;
  always @(posedge clk) begin
    delay_wire_2525 <= in;
  end
  assign out = delay_wire_2525;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2526;
  logic [15:0] delay_wire_2527;
  logic [15:0] delay_wire_2528;
  logic [15:0] delay_wire_2529;
  logic [15:0] delay_wire_2530;
  logic [15:0] delay_wire_2531;
  logic [15:0] delay_wire_2532;
  logic [15:0] delay_wire_2533;
  logic [15:0] delay_wire_2534;
  logic [15:0] delay_wire_2535;
  logic [15:0] delay_wire_2536;
  logic [15:0] delay_wire_2537;
  logic [15:0] delay_wire_2538;
  logic [15:0] delay_wire_2539;
  logic [15:0] delay_wire_2540;
  logic [15:0] delay_wire_2541;
  logic [15:0] delay_wire_2542;
  logic [15:0] delay_wire_2543;
  logic [15:0] delay_wire_2544;
  logic [15:0] delay_wire_2545;
  logic [15:0] delay_wire_2546;
  logic [15:0] delay_wire_2547;
  logic [15:0] delay_wire_2548;
  logic [15:0] delay_wire_2549;
  logic [15:0] delay_wire_2550;
  logic [15:0] delay_wire_2551;
  logic [15:0] delay_wire_2552;
  logic [15:0] delay_wire_2553;
  logic [15:0] delay_wire_2554;
  logic [15:0] delay_wire_2555;
  logic [15:0] delay_wire_2556;
  logic [15:0] delay_wire_2557;
  logic [15:0] delay_wire_2558;
  logic [15:0] delay_wire_2559;
  logic [15:0] delay_wire_2560;
  logic [15:0] delay_wire_2561;
  logic [15:0] delay_wire_2562;
  logic [15:0] delay_wire_2563;
  logic [15:0] delay_wire_2564;
  logic [15:0] delay_wire_2565;
  logic [15:0] delay_wire_2566;
  logic [15:0] delay_wire_2567;
  logic [15:0] delay_wire_2568;
  logic [15:0] delay_wire_2569;
  logic [15:0] delay_wire_2570;
  logic [15:0] delay_wire_2571;
  logic [15:0] delay_wire_2572;
  logic [15:0] delay_wire_2573;
  logic [15:0] delay_wire_2574;
  logic [15:0] delay_wire_2575;
  logic [15:0] delay_wire_2576;
  logic [15:0] delay_wire_2577;
  logic [15:0] delay_wire_2578;
  logic [15:0] delay_wire_2579;
  logic [15:0] delay_wire_2580;
  logic [15:0] delay_wire_2581;
  logic [15:0] delay_wire_2582;
  logic [15:0] delay_wire_2583;
  logic [15:0] delay_wire_2584;
  logic [15:0] delay_wire_2585;
  logic [15:0] delay_wire_2586;
  logic [15:0] delay_wire_2587;
  logic [15:0] delay_wire_2588;
  logic [15:0] delay_wire_2589;
  logic [15:0] delay_wire_2590;
  always @(posedge clk) begin
    delay_wire_2526 <= in;
    delay_wire_2527 <= delay_wire_2526;
    delay_wire_2528 <= delay_wire_2527;
    delay_wire_2529 <= delay_wire_2528;
    delay_wire_2530 <= delay_wire_2529;
    delay_wire_2531 <= delay_wire_2530;
    delay_wire_2532 <= delay_wire_2531;
    delay_wire_2533 <= delay_wire_2532;
    delay_wire_2534 <= delay_wire_2533;
    delay_wire_2535 <= delay_wire_2534;
    delay_wire_2536 <= delay_wire_2535;
    delay_wire_2537 <= delay_wire_2536;
    delay_wire_2538 <= delay_wire_2537;
    delay_wire_2539 <= delay_wire_2538;
    delay_wire_2540 <= delay_wire_2539;
    delay_wire_2541 <= delay_wire_2540;
    delay_wire_2542 <= delay_wire_2541;
    delay_wire_2543 <= delay_wire_2542;
    delay_wire_2544 <= delay_wire_2543;
    delay_wire_2545 <= delay_wire_2544;
    delay_wire_2546 <= delay_wire_2545;
    delay_wire_2547 <= delay_wire_2546;
    delay_wire_2548 <= delay_wire_2547;
    delay_wire_2549 <= delay_wire_2548;
    delay_wire_2550 <= delay_wire_2549;
    delay_wire_2551 <= delay_wire_2550;
    delay_wire_2552 <= delay_wire_2551;
    delay_wire_2553 <= delay_wire_2552;
    delay_wire_2554 <= delay_wire_2553;
    delay_wire_2555 <= delay_wire_2554;
    delay_wire_2556 <= delay_wire_2555;
    delay_wire_2557 <= delay_wire_2556;
    delay_wire_2558 <= delay_wire_2557;
    delay_wire_2559 <= delay_wire_2558;
    delay_wire_2560 <= delay_wire_2559;
    delay_wire_2561 <= delay_wire_2560;
    delay_wire_2562 <= delay_wire_2561;
    delay_wire_2563 <= delay_wire_2562;
    delay_wire_2564 <= delay_wire_2563;
    delay_wire_2565 <= delay_wire_2564;
    delay_wire_2566 <= delay_wire_2565;
    delay_wire_2567 <= delay_wire_2566;
    delay_wire_2568 <= delay_wire_2567;
    delay_wire_2569 <= delay_wire_2568;
    delay_wire_2570 <= delay_wire_2569;
    delay_wire_2571 <= delay_wire_2570;
    delay_wire_2572 <= delay_wire_2571;
    delay_wire_2573 <= delay_wire_2572;
    delay_wire_2574 <= delay_wire_2573;
    delay_wire_2575 <= delay_wire_2574;
    delay_wire_2576 <= delay_wire_2575;
    delay_wire_2577 <= delay_wire_2576;
    delay_wire_2578 <= delay_wire_2577;
    delay_wire_2579 <= delay_wire_2578;
    delay_wire_2580 <= delay_wire_2579;
    delay_wire_2581 <= delay_wire_2580;
    delay_wire_2582 <= delay_wire_2581;
    delay_wire_2583 <= delay_wire_2582;
    delay_wire_2584 <= delay_wire_2583;
    delay_wire_2585 <= delay_wire_2584;
    delay_wire_2586 <= delay_wire_2585;
    delay_wire_2587 <= delay_wire_2586;
    delay_wire_2588 <= delay_wire_2587;
    delay_wire_2589 <= delay_wire_2588;
    delay_wire_2590 <= delay_wire_2589;
  end
  assign out = delay_wire_2590;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2591;
  logic [15:0] delay_wire_2592;
  logic [15:0] delay_wire_2593;
  logic [15:0] delay_wire_2594;
  logic [15:0] delay_wire_2595;
  logic [15:0] delay_wire_2596;
  logic [15:0] delay_wire_2597;
  logic [15:0] delay_wire_2598;
  logic [15:0] delay_wire_2599;
  logic [15:0] delay_wire_2600;
  logic [15:0] delay_wire_2601;
  logic [15:0] delay_wire_2602;
  logic [15:0] delay_wire_2603;
  logic [15:0] delay_wire_2604;
  logic [15:0] delay_wire_2605;
  logic [15:0] delay_wire_2606;
  logic [15:0] delay_wire_2607;
  logic [15:0] delay_wire_2608;
  logic [15:0] delay_wire_2609;
  logic [15:0] delay_wire_2610;
  logic [15:0] delay_wire_2611;
  logic [15:0] delay_wire_2612;
  logic [15:0] delay_wire_2613;
  logic [15:0] delay_wire_2614;
  logic [15:0] delay_wire_2615;
  logic [15:0] delay_wire_2616;
  logic [15:0] delay_wire_2617;
  logic [15:0] delay_wire_2618;
  logic [15:0] delay_wire_2619;
  logic [15:0] delay_wire_2620;
  logic [15:0] delay_wire_2621;
  logic [15:0] delay_wire_2622;
  logic [15:0] delay_wire_2623;
  logic [15:0] delay_wire_2624;
  logic [15:0] delay_wire_2625;
  logic [15:0] delay_wire_2626;
  logic [15:0] delay_wire_2627;
  logic [15:0] delay_wire_2628;
  logic [15:0] delay_wire_2629;
  logic [15:0] delay_wire_2630;
  logic [15:0] delay_wire_2631;
  logic [15:0] delay_wire_2632;
  logic [15:0] delay_wire_2633;
  logic [15:0] delay_wire_2634;
  logic [15:0] delay_wire_2635;
  logic [15:0] delay_wire_2636;
  logic [15:0] delay_wire_2637;
  logic [15:0] delay_wire_2638;
  logic [15:0] delay_wire_2639;
  logic [15:0] delay_wire_2640;
  logic [15:0] delay_wire_2641;
  logic [15:0] delay_wire_2642;
  logic [15:0] delay_wire_2643;
  logic [15:0] delay_wire_2644;
  logic [15:0] delay_wire_2645;
  logic [15:0] delay_wire_2646;
  logic [15:0] delay_wire_2647;
  logic [15:0] delay_wire_2648;
  logic [15:0] delay_wire_2649;
  logic [15:0] delay_wire_2650;
  logic [15:0] delay_wire_2651;
  logic [15:0] delay_wire_2652;
  logic [15:0] delay_wire_2653;
  logic [15:0] delay_wire_2654;
  logic [15:0] delay_wire_2655;
  logic [15:0] delay_wire_2656;
  logic [15:0] delay_wire_2657;
  logic [15:0] delay_wire_2658;
  logic [15:0] delay_wire_2659;
  logic [15:0] delay_wire_2660;
  logic [15:0] delay_wire_2661;
  logic [15:0] delay_wire_2662;
  logic [15:0] delay_wire_2663;
  logic [15:0] delay_wire_2664;
  logic [15:0] delay_wire_2665;
  logic [15:0] delay_wire_2666;
  logic [15:0] delay_wire_2667;
  logic [15:0] delay_wire_2668;
  logic [15:0] delay_wire_2669;
  logic [15:0] delay_wire_2670;
  logic [15:0] delay_wire_2671;
  logic [15:0] delay_wire_2672;
  logic [15:0] delay_wire_2673;
  logic [15:0] delay_wire_2674;
  logic [15:0] delay_wire_2675;
  logic [15:0] delay_wire_2676;
  logic [15:0] delay_wire_2677;
  logic [15:0] delay_wire_2678;
  logic [15:0] delay_wire_2679;
  logic [15:0] delay_wire_2680;
  logic [15:0] delay_wire_2681;
  logic [15:0] delay_wire_2682;
  logic [15:0] delay_wire_2683;
  logic [15:0] delay_wire_2684;
  logic [15:0] delay_wire_2685;
  logic [15:0] delay_wire_2686;
  logic [15:0] delay_wire_2687;
  logic [15:0] delay_wire_2688;
  logic [15:0] delay_wire_2689;
  logic [15:0] delay_wire_2690;
  logic [15:0] delay_wire_2691;
  logic [15:0] delay_wire_2692;
  logic [15:0] delay_wire_2693;
  logic [15:0] delay_wire_2694;
  logic [15:0] delay_wire_2695;
  logic [15:0] delay_wire_2696;
  logic [15:0] delay_wire_2697;
  logic [15:0] delay_wire_2698;
  logic [15:0] delay_wire_2699;
  logic [15:0] delay_wire_2700;
  logic [15:0] delay_wire_2701;
  logic [15:0] delay_wire_2702;
  logic [15:0] delay_wire_2703;
  logic [15:0] delay_wire_2704;
  logic [15:0] delay_wire_2705;
  logic [15:0] delay_wire_2706;
  logic [15:0] delay_wire_2707;
  logic [15:0] delay_wire_2708;
  logic [15:0] delay_wire_2709;
  logic [15:0] delay_wire_2710;
  logic [15:0] delay_wire_2711;
  logic [15:0] delay_wire_2712;
  logic [15:0] delay_wire_2713;
  logic [15:0] delay_wire_2714;
  logic [15:0] delay_wire_2715;
  logic [15:0] delay_wire_2716;
  logic [15:0] delay_wire_2717;
  logic [15:0] delay_wire_2718;
  logic [15:0] delay_wire_2719;
  logic [15:0] delay_wire_2720;
  logic [15:0] delay_wire_2721;
  always @(posedge clk) begin
    delay_wire_2591 <= in;
    delay_wire_2592 <= delay_wire_2591;
    delay_wire_2593 <= delay_wire_2592;
    delay_wire_2594 <= delay_wire_2593;
    delay_wire_2595 <= delay_wire_2594;
    delay_wire_2596 <= delay_wire_2595;
    delay_wire_2597 <= delay_wire_2596;
    delay_wire_2598 <= delay_wire_2597;
    delay_wire_2599 <= delay_wire_2598;
    delay_wire_2600 <= delay_wire_2599;
    delay_wire_2601 <= delay_wire_2600;
    delay_wire_2602 <= delay_wire_2601;
    delay_wire_2603 <= delay_wire_2602;
    delay_wire_2604 <= delay_wire_2603;
    delay_wire_2605 <= delay_wire_2604;
    delay_wire_2606 <= delay_wire_2605;
    delay_wire_2607 <= delay_wire_2606;
    delay_wire_2608 <= delay_wire_2607;
    delay_wire_2609 <= delay_wire_2608;
    delay_wire_2610 <= delay_wire_2609;
    delay_wire_2611 <= delay_wire_2610;
    delay_wire_2612 <= delay_wire_2611;
    delay_wire_2613 <= delay_wire_2612;
    delay_wire_2614 <= delay_wire_2613;
    delay_wire_2615 <= delay_wire_2614;
    delay_wire_2616 <= delay_wire_2615;
    delay_wire_2617 <= delay_wire_2616;
    delay_wire_2618 <= delay_wire_2617;
    delay_wire_2619 <= delay_wire_2618;
    delay_wire_2620 <= delay_wire_2619;
    delay_wire_2621 <= delay_wire_2620;
    delay_wire_2622 <= delay_wire_2621;
    delay_wire_2623 <= delay_wire_2622;
    delay_wire_2624 <= delay_wire_2623;
    delay_wire_2625 <= delay_wire_2624;
    delay_wire_2626 <= delay_wire_2625;
    delay_wire_2627 <= delay_wire_2626;
    delay_wire_2628 <= delay_wire_2627;
    delay_wire_2629 <= delay_wire_2628;
    delay_wire_2630 <= delay_wire_2629;
    delay_wire_2631 <= delay_wire_2630;
    delay_wire_2632 <= delay_wire_2631;
    delay_wire_2633 <= delay_wire_2632;
    delay_wire_2634 <= delay_wire_2633;
    delay_wire_2635 <= delay_wire_2634;
    delay_wire_2636 <= delay_wire_2635;
    delay_wire_2637 <= delay_wire_2636;
    delay_wire_2638 <= delay_wire_2637;
    delay_wire_2639 <= delay_wire_2638;
    delay_wire_2640 <= delay_wire_2639;
    delay_wire_2641 <= delay_wire_2640;
    delay_wire_2642 <= delay_wire_2641;
    delay_wire_2643 <= delay_wire_2642;
    delay_wire_2644 <= delay_wire_2643;
    delay_wire_2645 <= delay_wire_2644;
    delay_wire_2646 <= delay_wire_2645;
    delay_wire_2647 <= delay_wire_2646;
    delay_wire_2648 <= delay_wire_2647;
    delay_wire_2649 <= delay_wire_2648;
    delay_wire_2650 <= delay_wire_2649;
    delay_wire_2651 <= delay_wire_2650;
    delay_wire_2652 <= delay_wire_2651;
    delay_wire_2653 <= delay_wire_2652;
    delay_wire_2654 <= delay_wire_2653;
    delay_wire_2655 <= delay_wire_2654;
    delay_wire_2656 <= delay_wire_2655;
    delay_wire_2657 <= delay_wire_2656;
    delay_wire_2658 <= delay_wire_2657;
    delay_wire_2659 <= delay_wire_2658;
    delay_wire_2660 <= delay_wire_2659;
    delay_wire_2661 <= delay_wire_2660;
    delay_wire_2662 <= delay_wire_2661;
    delay_wire_2663 <= delay_wire_2662;
    delay_wire_2664 <= delay_wire_2663;
    delay_wire_2665 <= delay_wire_2664;
    delay_wire_2666 <= delay_wire_2665;
    delay_wire_2667 <= delay_wire_2666;
    delay_wire_2668 <= delay_wire_2667;
    delay_wire_2669 <= delay_wire_2668;
    delay_wire_2670 <= delay_wire_2669;
    delay_wire_2671 <= delay_wire_2670;
    delay_wire_2672 <= delay_wire_2671;
    delay_wire_2673 <= delay_wire_2672;
    delay_wire_2674 <= delay_wire_2673;
    delay_wire_2675 <= delay_wire_2674;
    delay_wire_2676 <= delay_wire_2675;
    delay_wire_2677 <= delay_wire_2676;
    delay_wire_2678 <= delay_wire_2677;
    delay_wire_2679 <= delay_wire_2678;
    delay_wire_2680 <= delay_wire_2679;
    delay_wire_2681 <= delay_wire_2680;
    delay_wire_2682 <= delay_wire_2681;
    delay_wire_2683 <= delay_wire_2682;
    delay_wire_2684 <= delay_wire_2683;
    delay_wire_2685 <= delay_wire_2684;
    delay_wire_2686 <= delay_wire_2685;
    delay_wire_2687 <= delay_wire_2686;
    delay_wire_2688 <= delay_wire_2687;
    delay_wire_2689 <= delay_wire_2688;
    delay_wire_2690 <= delay_wire_2689;
    delay_wire_2691 <= delay_wire_2690;
    delay_wire_2692 <= delay_wire_2691;
    delay_wire_2693 <= delay_wire_2692;
    delay_wire_2694 <= delay_wire_2693;
    delay_wire_2695 <= delay_wire_2694;
    delay_wire_2696 <= delay_wire_2695;
    delay_wire_2697 <= delay_wire_2696;
    delay_wire_2698 <= delay_wire_2697;
    delay_wire_2699 <= delay_wire_2698;
    delay_wire_2700 <= delay_wire_2699;
    delay_wire_2701 <= delay_wire_2700;
    delay_wire_2702 <= delay_wire_2701;
    delay_wire_2703 <= delay_wire_2702;
    delay_wire_2704 <= delay_wire_2703;
    delay_wire_2705 <= delay_wire_2704;
    delay_wire_2706 <= delay_wire_2705;
    delay_wire_2707 <= delay_wire_2706;
    delay_wire_2708 <= delay_wire_2707;
    delay_wire_2709 <= delay_wire_2708;
    delay_wire_2710 <= delay_wire_2709;
    delay_wire_2711 <= delay_wire_2710;
    delay_wire_2712 <= delay_wire_2711;
    delay_wire_2713 <= delay_wire_2712;
    delay_wire_2714 <= delay_wire_2713;
    delay_wire_2715 <= delay_wire_2714;
    delay_wire_2716 <= delay_wire_2715;
    delay_wire_2717 <= delay_wire_2716;
    delay_wire_2718 <= delay_wire_2717;
    delay_wire_2719 <= delay_wire_2718;
    delay_wire_2720 <= delay_wire_2719;
    delay_wire_2721 <= delay_wire_2720;
  end
  assign out = delay_wire_2721;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2722;
  logic [15:0] delay_wire_2723;
  logic [15:0] delay_wire_2724;
  logic [15:0] delay_wire_2725;
  logic [15:0] delay_wire_2726;
  logic [15:0] delay_wire_2727;
  logic [15:0] delay_wire_2728;
  logic [15:0] delay_wire_2729;
  logic [15:0] delay_wire_2730;
  logic [15:0] delay_wire_2731;
  logic [15:0] delay_wire_2732;
  logic [15:0] delay_wire_2733;
  logic [15:0] delay_wire_2734;
  logic [15:0] delay_wire_2735;
  logic [15:0] delay_wire_2736;
  logic [15:0] delay_wire_2737;
  logic [15:0] delay_wire_2738;
  logic [15:0] delay_wire_2739;
  logic [15:0] delay_wire_2740;
  logic [15:0] delay_wire_2741;
  logic [15:0] delay_wire_2742;
  logic [15:0] delay_wire_2743;
  logic [15:0] delay_wire_2744;
  logic [15:0] delay_wire_2745;
  logic [15:0] delay_wire_2746;
  logic [15:0] delay_wire_2747;
  logic [15:0] delay_wire_2748;
  logic [15:0] delay_wire_2749;
  logic [15:0] delay_wire_2750;
  logic [15:0] delay_wire_2751;
  logic [15:0] delay_wire_2752;
  logic [15:0] delay_wire_2753;
  logic [15:0] delay_wire_2754;
  logic [15:0] delay_wire_2755;
  logic [15:0] delay_wire_2756;
  logic [15:0] delay_wire_2757;
  logic [15:0] delay_wire_2758;
  logic [15:0] delay_wire_2759;
  logic [15:0] delay_wire_2760;
  logic [15:0] delay_wire_2761;
  logic [15:0] delay_wire_2762;
  logic [15:0] delay_wire_2763;
  logic [15:0] delay_wire_2764;
  logic [15:0] delay_wire_2765;
  logic [15:0] delay_wire_2766;
  logic [15:0] delay_wire_2767;
  logic [15:0] delay_wire_2768;
  logic [15:0] delay_wire_2769;
  logic [15:0] delay_wire_2770;
  logic [15:0] delay_wire_2771;
  logic [15:0] delay_wire_2772;
  logic [15:0] delay_wire_2773;
  logic [15:0] delay_wire_2774;
  logic [15:0] delay_wire_2775;
  logic [15:0] delay_wire_2776;
  logic [15:0] delay_wire_2777;
  logic [15:0] delay_wire_2778;
  logic [15:0] delay_wire_2779;
  logic [15:0] delay_wire_2780;
  logic [15:0] delay_wire_2781;
  logic [15:0] delay_wire_2782;
  logic [15:0] delay_wire_2783;
  logic [15:0] delay_wire_2784;
  logic [15:0] delay_wire_2785;
  logic [15:0] delay_wire_2786;
  logic [15:0] delay_wire_2787;
  logic [15:0] delay_wire_2788;
  always @(posedge clk) begin
    delay_wire_2722 <= in;
    delay_wire_2723 <= delay_wire_2722;
    delay_wire_2724 <= delay_wire_2723;
    delay_wire_2725 <= delay_wire_2724;
    delay_wire_2726 <= delay_wire_2725;
    delay_wire_2727 <= delay_wire_2726;
    delay_wire_2728 <= delay_wire_2727;
    delay_wire_2729 <= delay_wire_2728;
    delay_wire_2730 <= delay_wire_2729;
    delay_wire_2731 <= delay_wire_2730;
    delay_wire_2732 <= delay_wire_2731;
    delay_wire_2733 <= delay_wire_2732;
    delay_wire_2734 <= delay_wire_2733;
    delay_wire_2735 <= delay_wire_2734;
    delay_wire_2736 <= delay_wire_2735;
    delay_wire_2737 <= delay_wire_2736;
    delay_wire_2738 <= delay_wire_2737;
    delay_wire_2739 <= delay_wire_2738;
    delay_wire_2740 <= delay_wire_2739;
    delay_wire_2741 <= delay_wire_2740;
    delay_wire_2742 <= delay_wire_2741;
    delay_wire_2743 <= delay_wire_2742;
    delay_wire_2744 <= delay_wire_2743;
    delay_wire_2745 <= delay_wire_2744;
    delay_wire_2746 <= delay_wire_2745;
    delay_wire_2747 <= delay_wire_2746;
    delay_wire_2748 <= delay_wire_2747;
    delay_wire_2749 <= delay_wire_2748;
    delay_wire_2750 <= delay_wire_2749;
    delay_wire_2751 <= delay_wire_2750;
    delay_wire_2752 <= delay_wire_2751;
    delay_wire_2753 <= delay_wire_2752;
    delay_wire_2754 <= delay_wire_2753;
    delay_wire_2755 <= delay_wire_2754;
    delay_wire_2756 <= delay_wire_2755;
    delay_wire_2757 <= delay_wire_2756;
    delay_wire_2758 <= delay_wire_2757;
    delay_wire_2759 <= delay_wire_2758;
    delay_wire_2760 <= delay_wire_2759;
    delay_wire_2761 <= delay_wire_2760;
    delay_wire_2762 <= delay_wire_2761;
    delay_wire_2763 <= delay_wire_2762;
    delay_wire_2764 <= delay_wire_2763;
    delay_wire_2765 <= delay_wire_2764;
    delay_wire_2766 <= delay_wire_2765;
    delay_wire_2767 <= delay_wire_2766;
    delay_wire_2768 <= delay_wire_2767;
    delay_wire_2769 <= delay_wire_2768;
    delay_wire_2770 <= delay_wire_2769;
    delay_wire_2771 <= delay_wire_2770;
    delay_wire_2772 <= delay_wire_2771;
    delay_wire_2773 <= delay_wire_2772;
    delay_wire_2774 <= delay_wire_2773;
    delay_wire_2775 <= delay_wire_2774;
    delay_wire_2776 <= delay_wire_2775;
    delay_wire_2777 <= delay_wire_2776;
    delay_wire_2778 <= delay_wire_2777;
    delay_wire_2779 <= delay_wire_2778;
    delay_wire_2780 <= delay_wire_2779;
    delay_wire_2781 <= delay_wire_2780;
    delay_wire_2782 <= delay_wire_2781;
    delay_wire_2783 <= delay_wire_2782;
    delay_wire_2784 <= delay_wire_2783;
    delay_wire_2785 <= delay_wire_2784;
    delay_wire_2786 <= delay_wire_2785;
    delay_wire_2787 <= delay_wire_2786;
    delay_wire_2788 <= delay_wire_2787;
  end
  assign out = delay_wire_2788;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2789;
  logic [15:0] delay_wire_2790;
  logic [15:0] delay_wire_2791;
  always @(posedge clk) begin
    delay_wire_2789 <= in;
    delay_wire_2790 <= delay_wire_2789;
    delay_wire_2791 <= delay_wire_2790;
  end
  assign out = delay_wire_2791;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2792;
  logic [15:0] delay_wire_2793;
  logic [15:0] delay_wire_2794;
  logic [15:0] delay_wire_2795;
  logic [15:0] delay_wire_2796;
  logic [15:0] delay_wire_2797;
  logic [15:0] delay_wire_2798;
  logic [15:0] delay_wire_2799;
  logic [15:0] delay_wire_2800;
  logic [15:0] delay_wire_2801;
  logic [15:0] delay_wire_2802;
  logic [15:0] delay_wire_2803;
  logic [15:0] delay_wire_2804;
  logic [15:0] delay_wire_2805;
  logic [15:0] delay_wire_2806;
  logic [15:0] delay_wire_2807;
  logic [15:0] delay_wire_2808;
  logic [15:0] delay_wire_2809;
  logic [15:0] delay_wire_2810;
  logic [15:0] delay_wire_2811;
  logic [15:0] delay_wire_2812;
  logic [15:0] delay_wire_2813;
  logic [15:0] delay_wire_2814;
  logic [15:0] delay_wire_2815;
  logic [15:0] delay_wire_2816;
  logic [15:0] delay_wire_2817;
  logic [15:0] delay_wire_2818;
  logic [15:0] delay_wire_2819;
  logic [15:0] delay_wire_2820;
  logic [15:0] delay_wire_2821;
  logic [15:0] delay_wire_2822;
  logic [15:0] delay_wire_2823;
  logic [15:0] delay_wire_2824;
  logic [15:0] delay_wire_2825;
  logic [15:0] delay_wire_2826;
  logic [15:0] delay_wire_2827;
  logic [15:0] delay_wire_2828;
  logic [15:0] delay_wire_2829;
  logic [15:0] delay_wire_2830;
  logic [15:0] delay_wire_2831;
  logic [15:0] delay_wire_2832;
  logic [15:0] delay_wire_2833;
  logic [15:0] delay_wire_2834;
  logic [15:0] delay_wire_2835;
  logic [15:0] delay_wire_2836;
  logic [15:0] delay_wire_2837;
  logic [15:0] delay_wire_2838;
  logic [15:0] delay_wire_2839;
  logic [15:0] delay_wire_2840;
  logic [15:0] delay_wire_2841;
  logic [15:0] delay_wire_2842;
  logic [15:0] delay_wire_2843;
  logic [15:0] delay_wire_2844;
  logic [15:0] delay_wire_2845;
  logic [15:0] delay_wire_2846;
  logic [15:0] delay_wire_2847;
  logic [15:0] delay_wire_2848;
  logic [15:0] delay_wire_2849;
  logic [15:0] delay_wire_2850;
  logic [15:0] delay_wire_2851;
  logic [15:0] delay_wire_2852;
  logic [15:0] delay_wire_2853;
  logic [15:0] delay_wire_2854;
  logic [15:0] delay_wire_2855;
  logic [15:0] delay_wire_2856;
  logic [15:0] delay_wire_2857;
  logic [15:0] delay_wire_2858;
  logic [15:0] delay_wire_2859;
  logic [15:0] delay_wire_2860;
  logic [15:0] delay_wire_2861;
  logic [15:0] delay_wire_2862;
  logic [15:0] delay_wire_2863;
  logic [15:0] delay_wire_2864;
  logic [15:0] delay_wire_2865;
  logic [15:0] delay_wire_2866;
  logic [15:0] delay_wire_2867;
  logic [15:0] delay_wire_2868;
  logic [15:0] delay_wire_2869;
  logic [15:0] delay_wire_2870;
  logic [15:0] delay_wire_2871;
  logic [15:0] delay_wire_2872;
  logic [15:0] delay_wire_2873;
  logic [15:0] delay_wire_2874;
  logic [15:0] delay_wire_2875;
  logic [15:0] delay_wire_2876;
  logic [15:0] delay_wire_2877;
  logic [15:0] delay_wire_2878;
  logic [15:0] delay_wire_2879;
  logic [15:0] delay_wire_2880;
  logic [15:0] delay_wire_2881;
  logic [15:0] delay_wire_2882;
  logic [15:0] delay_wire_2883;
  logic [15:0] delay_wire_2884;
  logic [15:0] delay_wire_2885;
  logic [15:0] delay_wire_2886;
  logic [15:0] delay_wire_2887;
  logic [15:0] delay_wire_2888;
  logic [15:0] delay_wire_2889;
  logic [15:0] delay_wire_2890;
  logic [15:0] delay_wire_2891;
  logic [15:0] delay_wire_2892;
  logic [15:0] delay_wire_2893;
  logic [15:0] delay_wire_2894;
  logic [15:0] delay_wire_2895;
  logic [15:0] delay_wire_2896;
  logic [15:0] delay_wire_2897;
  logic [15:0] delay_wire_2898;
  logic [15:0] delay_wire_2899;
  logic [15:0] delay_wire_2900;
  logic [15:0] delay_wire_2901;
  logic [15:0] delay_wire_2902;
  logic [15:0] delay_wire_2903;
  logic [15:0] delay_wire_2904;
  logic [15:0] delay_wire_2905;
  logic [15:0] delay_wire_2906;
  logic [15:0] delay_wire_2907;
  logic [15:0] delay_wire_2908;
  logic [15:0] delay_wire_2909;
  logic [15:0] delay_wire_2910;
  logic [15:0] delay_wire_2911;
  logic [15:0] delay_wire_2912;
  logic [15:0] delay_wire_2913;
  logic [15:0] delay_wire_2914;
  logic [15:0] delay_wire_2915;
  logic [15:0] delay_wire_2916;
  logic [15:0] delay_wire_2917;
  logic [15:0] delay_wire_2918;
  logic [15:0] delay_wire_2919;
  logic [15:0] delay_wire_2920;
  logic [15:0] delay_wire_2921;
  logic [15:0] delay_wire_2922;
  always @(posedge clk) begin
    delay_wire_2792 <= in;
    delay_wire_2793 <= delay_wire_2792;
    delay_wire_2794 <= delay_wire_2793;
    delay_wire_2795 <= delay_wire_2794;
    delay_wire_2796 <= delay_wire_2795;
    delay_wire_2797 <= delay_wire_2796;
    delay_wire_2798 <= delay_wire_2797;
    delay_wire_2799 <= delay_wire_2798;
    delay_wire_2800 <= delay_wire_2799;
    delay_wire_2801 <= delay_wire_2800;
    delay_wire_2802 <= delay_wire_2801;
    delay_wire_2803 <= delay_wire_2802;
    delay_wire_2804 <= delay_wire_2803;
    delay_wire_2805 <= delay_wire_2804;
    delay_wire_2806 <= delay_wire_2805;
    delay_wire_2807 <= delay_wire_2806;
    delay_wire_2808 <= delay_wire_2807;
    delay_wire_2809 <= delay_wire_2808;
    delay_wire_2810 <= delay_wire_2809;
    delay_wire_2811 <= delay_wire_2810;
    delay_wire_2812 <= delay_wire_2811;
    delay_wire_2813 <= delay_wire_2812;
    delay_wire_2814 <= delay_wire_2813;
    delay_wire_2815 <= delay_wire_2814;
    delay_wire_2816 <= delay_wire_2815;
    delay_wire_2817 <= delay_wire_2816;
    delay_wire_2818 <= delay_wire_2817;
    delay_wire_2819 <= delay_wire_2818;
    delay_wire_2820 <= delay_wire_2819;
    delay_wire_2821 <= delay_wire_2820;
    delay_wire_2822 <= delay_wire_2821;
    delay_wire_2823 <= delay_wire_2822;
    delay_wire_2824 <= delay_wire_2823;
    delay_wire_2825 <= delay_wire_2824;
    delay_wire_2826 <= delay_wire_2825;
    delay_wire_2827 <= delay_wire_2826;
    delay_wire_2828 <= delay_wire_2827;
    delay_wire_2829 <= delay_wire_2828;
    delay_wire_2830 <= delay_wire_2829;
    delay_wire_2831 <= delay_wire_2830;
    delay_wire_2832 <= delay_wire_2831;
    delay_wire_2833 <= delay_wire_2832;
    delay_wire_2834 <= delay_wire_2833;
    delay_wire_2835 <= delay_wire_2834;
    delay_wire_2836 <= delay_wire_2835;
    delay_wire_2837 <= delay_wire_2836;
    delay_wire_2838 <= delay_wire_2837;
    delay_wire_2839 <= delay_wire_2838;
    delay_wire_2840 <= delay_wire_2839;
    delay_wire_2841 <= delay_wire_2840;
    delay_wire_2842 <= delay_wire_2841;
    delay_wire_2843 <= delay_wire_2842;
    delay_wire_2844 <= delay_wire_2843;
    delay_wire_2845 <= delay_wire_2844;
    delay_wire_2846 <= delay_wire_2845;
    delay_wire_2847 <= delay_wire_2846;
    delay_wire_2848 <= delay_wire_2847;
    delay_wire_2849 <= delay_wire_2848;
    delay_wire_2850 <= delay_wire_2849;
    delay_wire_2851 <= delay_wire_2850;
    delay_wire_2852 <= delay_wire_2851;
    delay_wire_2853 <= delay_wire_2852;
    delay_wire_2854 <= delay_wire_2853;
    delay_wire_2855 <= delay_wire_2854;
    delay_wire_2856 <= delay_wire_2855;
    delay_wire_2857 <= delay_wire_2856;
    delay_wire_2858 <= delay_wire_2857;
    delay_wire_2859 <= delay_wire_2858;
    delay_wire_2860 <= delay_wire_2859;
    delay_wire_2861 <= delay_wire_2860;
    delay_wire_2862 <= delay_wire_2861;
    delay_wire_2863 <= delay_wire_2862;
    delay_wire_2864 <= delay_wire_2863;
    delay_wire_2865 <= delay_wire_2864;
    delay_wire_2866 <= delay_wire_2865;
    delay_wire_2867 <= delay_wire_2866;
    delay_wire_2868 <= delay_wire_2867;
    delay_wire_2869 <= delay_wire_2868;
    delay_wire_2870 <= delay_wire_2869;
    delay_wire_2871 <= delay_wire_2870;
    delay_wire_2872 <= delay_wire_2871;
    delay_wire_2873 <= delay_wire_2872;
    delay_wire_2874 <= delay_wire_2873;
    delay_wire_2875 <= delay_wire_2874;
    delay_wire_2876 <= delay_wire_2875;
    delay_wire_2877 <= delay_wire_2876;
    delay_wire_2878 <= delay_wire_2877;
    delay_wire_2879 <= delay_wire_2878;
    delay_wire_2880 <= delay_wire_2879;
    delay_wire_2881 <= delay_wire_2880;
    delay_wire_2882 <= delay_wire_2881;
    delay_wire_2883 <= delay_wire_2882;
    delay_wire_2884 <= delay_wire_2883;
    delay_wire_2885 <= delay_wire_2884;
    delay_wire_2886 <= delay_wire_2885;
    delay_wire_2887 <= delay_wire_2886;
    delay_wire_2888 <= delay_wire_2887;
    delay_wire_2889 <= delay_wire_2888;
    delay_wire_2890 <= delay_wire_2889;
    delay_wire_2891 <= delay_wire_2890;
    delay_wire_2892 <= delay_wire_2891;
    delay_wire_2893 <= delay_wire_2892;
    delay_wire_2894 <= delay_wire_2893;
    delay_wire_2895 <= delay_wire_2894;
    delay_wire_2896 <= delay_wire_2895;
    delay_wire_2897 <= delay_wire_2896;
    delay_wire_2898 <= delay_wire_2897;
    delay_wire_2899 <= delay_wire_2898;
    delay_wire_2900 <= delay_wire_2899;
    delay_wire_2901 <= delay_wire_2900;
    delay_wire_2902 <= delay_wire_2901;
    delay_wire_2903 <= delay_wire_2902;
    delay_wire_2904 <= delay_wire_2903;
    delay_wire_2905 <= delay_wire_2904;
    delay_wire_2906 <= delay_wire_2905;
    delay_wire_2907 <= delay_wire_2906;
    delay_wire_2908 <= delay_wire_2907;
    delay_wire_2909 <= delay_wire_2908;
    delay_wire_2910 <= delay_wire_2909;
    delay_wire_2911 <= delay_wire_2910;
    delay_wire_2912 <= delay_wire_2911;
    delay_wire_2913 <= delay_wire_2912;
    delay_wire_2914 <= delay_wire_2913;
    delay_wire_2915 <= delay_wire_2914;
    delay_wire_2916 <= delay_wire_2915;
    delay_wire_2917 <= delay_wire_2916;
    delay_wire_2918 <= delay_wire_2917;
    delay_wire_2919 <= delay_wire_2918;
    delay_wire_2920 <= delay_wire_2919;
    delay_wire_2921 <= delay_wire_2920;
    delay_wire_2922 <= delay_wire_2921;
  end
  assign out = delay_wire_2922;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_2923;
  logic [15:0] delay_wire_2924;
  logic [15:0] delay_wire_2925;
  logic [15:0] delay_wire_2926;
  logic [15:0] delay_wire_2927;
  logic [15:0] delay_wire_2928;
  logic [15:0] delay_wire_2929;
  logic [15:0] delay_wire_2930;
  logic [15:0] delay_wire_2931;
  logic [15:0] delay_wire_2932;
  logic [15:0] delay_wire_2933;
  logic [15:0] delay_wire_2934;
  logic [15:0] delay_wire_2935;
  logic [15:0] delay_wire_2936;
  logic [15:0] delay_wire_2937;
  logic [15:0] delay_wire_2938;
  logic [15:0] delay_wire_2939;
  logic [15:0] delay_wire_2940;
  logic [15:0] delay_wire_2941;
  logic [15:0] delay_wire_2942;
  logic [15:0] delay_wire_2943;
  logic [15:0] delay_wire_2944;
  logic [15:0] delay_wire_2945;
  logic [15:0] delay_wire_2946;
  logic [15:0] delay_wire_2947;
  logic [15:0] delay_wire_2948;
  logic [15:0] delay_wire_2949;
  logic [15:0] delay_wire_2950;
  logic [15:0] delay_wire_2951;
  logic [15:0] delay_wire_2952;
  logic [15:0] delay_wire_2953;
  logic [15:0] delay_wire_2954;
  logic [15:0] delay_wire_2955;
  logic [15:0] delay_wire_2956;
  logic [15:0] delay_wire_2957;
  logic [15:0] delay_wire_2958;
  logic [15:0] delay_wire_2959;
  logic [15:0] delay_wire_2960;
  logic [15:0] delay_wire_2961;
  logic [15:0] delay_wire_2962;
  logic [15:0] delay_wire_2963;
  logic [15:0] delay_wire_2964;
  logic [15:0] delay_wire_2965;
  logic [15:0] delay_wire_2966;
  logic [15:0] delay_wire_2967;
  logic [15:0] delay_wire_2968;
  logic [15:0] delay_wire_2969;
  logic [15:0] delay_wire_2970;
  logic [15:0] delay_wire_2971;
  logic [15:0] delay_wire_2972;
  logic [15:0] delay_wire_2973;
  logic [15:0] delay_wire_2974;
  logic [15:0] delay_wire_2975;
  logic [15:0] delay_wire_2976;
  logic [15:0] delay_wire_2977;
  logic [15:0] delay_wire_2978;
  logic [15:0] delay_wire_2979;
  logic [15:0] delay_wire_2980;
  logic [15:0] delay_wire_2981;
  logic [15:0] delay_wire_2982;
  logic [15:0] delay_wire_2983;
  logic [15:0] delay_wire_2984;
  logic [15:0] delay_wire_2985;
  logic [15:0] delay_wire_2986;
  logic [15:0] delay_wire_2987;
  logic [15:0] delay_wire_2988;
  logic [15:0] delay_wire_2989;
  logic [15:0] delay_wire_2990;
  logic [15:0] delay_wire_2991;
  logic [15:0] delay_wire_2992;
  logic [15:0] delay_wire_2993;
  logic [15:0] delay_wire_2994;
  logic [15:0] delay_wire_2995;
  logic [15:0] delay_wire_2996;
  logic [15:0] delay_wire_2997;
  logic [15:0] delay_wire_2998;
  logic [15:0] delay_wire_2999;
  logic [15:0] delay_wire_3000;
  logic [15:0] delay_wire_3001;
  logic [15:0] delay_wire_3002;
  logic [15:0] delay_wire_3003;
  logic [15:0] delay_wire_3004;
  logic [15:0] delay_wire_3005;
  logic [15:0] delay_wire_3006;
  logic [15:0] delay_wire_3007;
  logic [15:0] delay_wire_3008;
  logic [15:0] delay_wire_3009;
  logic [15:0] delay_wire_3010;
  logic [15:0] delay_wire_3011;
  logic [15:0] delay_wire_3012;
  logic [15:0] delay_wire_3013;
  logic [15:0] delay_wire_3014;
  logic [15:0] delay_wire_3015;
  logic [15:0] delay_wire_3016;
  logic [15:0] delay_wire_3017;
  logic [15:0] delay_wire_3018;
  logic [15:0] delay_wire_3019;
  logic [15:0] delay_wire_3020;
  logic [15:0] delay_wire_3021;
  logic [15:0] delay_wire_3022;
  logic [15:0] delay_wire_3023;
  logic [15:0] delay_wire_3024;
  logic [15:0] delay_wire_3025;
  logic [15:0] delay_wire_3026;
  logic [15:0] delay_wire_3027;
  logic [15:0] delay_wire_3028;
  logic [15:0] delay_wire_3029;
  logic [15:0] delay_wire_3030;
  logic [15:0] delay_wire_3031;
  logic [15:0] delay_wire_3032;
  logic [15:0] delay_wire_3033;
  logic [15:0] delay_wire_3034;
  logic [15:0] delay_wire_3035;
  logic [15:0] delay_wire_3036;
  logic [15:0] delay_wire_3037;
  logic [15:0] delay_wire_3038;
  logic [15:0] delay_wire_3039;
  logic [15:0] delay_wire_3040;
  logic [15:0] delay_wire_3041;
  logic [15:0] delay_wire_3042;
  logic [15:0] delay_wire_3043;
  logic [15:0] delay_wire_3044;
  logic [15:0] delay_wire_3045;
  logic [15:0] delay_wire_3046;
  logic [15:0] delay_wire_3047;
  logic [15:0] delay_wire_3048;
  logic [15:0] delay_wire_3049;
  logic [15:0] delay_wire_3050;
  logic [15:0] delay_wire_3051;
  logic [15:0] delay_wire_3052;
  always @(posedge clk) begin
    delay_wire_2923 <= in;
    delay_wire_2924 <= delay_wire_2923;
    delay_wire_2925 <= delay_wire_2924;
    delay_wire_2926 <= delay_wire_2925;
    delay_wire_2927 <= delay_wire_2926;
    delay_wire_2928 <= delay_wire_2927;
    delay_wire_2929 <= delay_wire_2928;
    delay_wire_2930 <= delay_wire_2929;
    delay_wire_2931 <= delay_wire_2930;
    delay_wire_2932 <= delay_wire_2931;
    delay_wire_2933 <= delay_wire_2932;
    delay_wire_2934 <= delay_wire_2933;
    delay_wire_2935 <= delay_wire_2934;
    delay_wire_2936 <= delay_wire_2935;
    delay_wire_2937 <= delay_wire_2936;
    delay_wire_2938 <= delay_wire_2937;
    delay_wire_2939 <= delay_wire_2938;
    delay_wire_2940 <= delay_wire_2939;
    delay_wire_2941 <= delay_wire_2940;
    delay_wire_2942 <= delay_wire_2941;
    delay_wire_2943 <= delay_wire_2942;
    delay_wire_2944 <= delay_wire_2943;
    delay_wire_2945 <= delay_wire_2944;
    delay_wire_2946 <= delay_wire_2945;
    delay_wire_2947 <= delay_wire_2946;
    delay_wire_2948 <= delay_wire_2947;
    delay_wire_2949 <= delay_wire_2948;
    delay_wire_2950 <= delay_wire_2949;
    delay_wire_2951 <= delay_wire_2950;
    delay_wire_2952 <= delay_wire_2951;
    delay_wire_2953 <= delay_wire_2952;
    delay_wire_2954 <= delay_wire_2953;
    delay_wire_2955 <= delay_wire_2954;
    delay_wire_2956 <= delay_wire_2955;
    delay_wire_2957 <= delay_wire_2956;
    delay_wire_2958 <= delay_wire_2957;
    delay_wire_2959 <= delay_wire_2958;
    delay_wire_2960 <= delay_wire_2959;
    delay_wire_2961 <= delay_wire_2960;
    delay_wire_2962 <= delay_wire_2961;
    delay_wire_2963 <= delay_wire_2962;
    delay_wire_2964 <= delay_wire_2963;
    delay_wire_2965 <= delay_wire_2964;
    delay_wire_2966 <= delay_wire_2965;
    delay_wire_2967 <= delay_wire_2966;
    delay_wire_2968 <= delay_wire_2967;
    delay_wire_2969 <= delay_wire_2968;
    delay_wire_2970 <= delay_wire_2969;
    delay_wire_2971 <= delay_wire_2970;
    delay_wire_2972 <= delay_wire_2971;
    delay_wire_2973 <= delay_wire_2972;
    delay_wire_2974 <= delay_wire_2973;
    delay_wire_2975 <= delay_wire_2974;
    delay_wire_2976 <= delay_wire_2975;
    delay_wire_2977 <= delay_wire_2976;
    delay_wire_2978 <= delay_wire_2977;
    delay_wire_2979 <= delay_wire_2978;
    delay_wire_2980 <= delay_wire_2979;
    delay_wire_2981 <= delay_wire_2980;
    delay_wire_2982 <= delay_wire_2981;
    delay_wire_2983 <= delay_wire_2982;
    delay_wire_2984 <= delay_wire_2983;
    delay_wire_2985 <= delay_wire_2984;
    delay_wire_2986 <= delay_wire_2985;
    delay_wire_2987 <= delay_wire_2986;
    delay_wire_2988 <= delay_wire_2987;
    delay_wire_2989 <= delay_wire_2988;
    delay_wire_2990 <= delay_wire_2989;
    delay_wire_2991 <= delay_wire_2990;
    delay_wire_2992 <= delay_wire_2991;
    delay_wire_2993 <= delay_wire_2992;
    delay_wire_2994 <= delay_wire_2993;
    delay_wire_2995 <= delay_wire_2994;
    delay_wire_2996 <= delay_wire_2995;
    delay_wire_2997 <= delay_wire_2996;
    delay_wire_2998 <= delay_wire_2997;
    delay_wire_2999 <= delay_wire_2998;
    delay_wire_3000 <= delay_wire_2999;
    delay_wire_3001 <= delay_wire_3000;
    delay_wire_3002 <= delay_wire_3001;
    delay_wire_3003 <= delay_wire_3002;
    delay_wire_3004 <= delay_wire_3003;
    delay_wire_3005 <= delay_wire_3004;
    delay_wire_3006 <= delay_wire_3005;
    delay_wire_3007 <= delay_wire_3006;
    delay_wire_3008 <= delay_wire_3007;
    delay_wire_3009 <= delay_wire_3008;
    delay_wire_3010 <= delay_wire_3009;
    delay_wire_3011 <= delay_wire_3010;
    delay_wire_3012 <= delay_wire_3011;
    delay_wire_3013 <= delay_wire_3012;
    delay_wire_3014 <= delay_wire_3013;
    delay_wire_3015 <= delay_wire_3014;
    delay_wire_3016 <= delay_wire_3015;
    delay_wire_3017 <= delay_wire_3016;
    delay_wire_3018 <= delay_wire_3017;
    delay_wire_3019 <= delay_wire_3018;
    delay_wire_3020 <= delay_wire_3019;
    delay_wire_3021 <= delay_wire_3020;
    delay_wire_3022 <= delay_wire_3021;
    delay_wire_3023 <= delay_wire_3022;
    delay_wire_3024 <= delay_wire_3023;
    delay_wire_3025 <= delay_wire_3024;
    delay_wire_3026 <= delay_wire_3025;
    delay_wire_3027 <= delay_wire_3026;
    delay_wire_3028 <= delay_wire_3027;
    delay_wire_3029 <= delay_wire_3028;
    delay_wire_3030 <= delay_wire_3029;
    delay_wire_3031 <= delay_wire_3030;
    delay_wire_3032 <= delay_wire_3031;
    delay_wire_3033 <= delay_wire_3032;
    delay_wire_3034 <= delay_wire_3033;
    delay_wire_3035 <= delay_wire_3034;
    delay_wire_3036 <= delay_wire_3035;
    delay_wire_3037 <= delay_wire_3036;
    delay_wire_3038 <= delay_wire_3037;
    delay_wire_3039 <= delay_wire_3038;
    delay_wire_3040 <= delay_wire_3039;
    delay_wire_3041 <= delay_wire_3040;
    delay_wire_3042 <= delay_wire_3041;
    delay_wire_3043 <= delay_wire_3042;
    delay_wire_3044 <= delay_wire_3043;
    delay_wire_3045 <= delay_wire_3044;
    delay_wire_3046 <= delay_wire_3045;
    delay_wire_3047 <= delay_wire_3046;
    delay_wire_3048 <= delay_wire_3047;
    delay_wire_3049 <= delay_wire_3048;
    delay_wire_3050 <= delay_wire_3049;
    delay_wire_3051 <= delay_wire_3050;
    delay_wire_3052 <= delay_wire_3051;
  end
  assign out = delay_wire_3052;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_3053;
  logic [15:0] delay_wire_3054;
  logic [15:0] delay_wire_3055;
  logic [15:0] delay_wire_3056;
  logic [15:0] delay_wire_3057;
  logic [15:0] delay_wire_3058;
  logic [15:0] delay_wire_3059;
  logic [15:0] delay_wire_3060;
  logic [15:0] delay_wire_3061;
  logic [15:0] delay_wire_3062;
  logic [15:0] delay_wire_3063;
  logic [15:0] delay_wire_3064;
  logic [15:0] delay_wire_3065;
  logic [15:0] delay_wire_3066;
  logic [15:0] delay_wire_3067;
  logic [15:0] delay_wire_3068;
  logic [15:0] delay_wire_3069;
  logic [15:0] delay_wire_3070;
  logic [15:0] delay_wire_3071;
  logic [15:0] delay_wire_3072;
  logic [15:0] delay_wire_3073;
  logic [15:0] delay_wire_3074;
  logic [15:0] delay_wire_3075;
  logic [15:0] delay_wire_3076;
  logic [15:0] delay_wire_3077;
  logic [15:0] delay_wire_3078;
  logic [15:0] delay_wire_3079;
  logic [15:0] delay_wire_3080;
  logic [15:0] delay_wire_3081;
  logic [15:0] delay_wire_3082;
  logic [15:0] delay_wire_3083;
  logic [15:0] delay_wire_3084;
  logic [15:0] delay_wire_3085;
  logic [15:0] delay_wire_3086;
  logic [15:0] delay_wire_3087;
  logic [15:0] delay_wire_3088;
  logic [15:0] delay_wire_3089;
  logic [15:0] delay_wire_3090;
  logic [15:0] delay_wire_3091;
  logic [15:0] delay_wire_3092;
  logic [15:0] delay_wire_3093;
  logic [15:0] delay_wire_3094;
  logic [15:0] delay_wire_3095;
  logic [15:0] delay_wire_3096;
  logic [15:0] delay_wire_3097;
  logic [15:0] delay_wire_3098;
  logic [15:0] delay_wire_3099;
  logic [15:0] delay_wire_3100;
  logic [15:0] delay_wire_3101;
  logic [15:0] delay_wire_3102;
  logic [15:0] delay_wire_3103;
  logic [15:0] delay_wire_3104;
  logic [15:0] delay_wire_3105;
  logic [15:0] delay_wire_3106;
  logic [15:0] delay_wire_3107;
  logic [15:0] delay_wire_3108;
  logic [15:0] delay_wire_3109;
  logic [15:0] delay_wire_3110;
  logic [15:0] delay_wire_3111;
  logic [15:0] delay_wire_3112;
  logic [15:0] delay_wire_3113;
  logic [15:0] delay_wire_3114;
  logic [15:0] delay_wire_3115;
  logic [15:0] delay_wire_3116;
  logic [15:0] delay_wire_3117;
  logic [15:0] delay_wire_3118;
  logic [15:0] delay_wire_3119;
  logic [15:0] delay_wire_3120;
  logic [15:0] delay_wire_3121;
  logic [15:0] delay_wire_3122;
  logic [15:0] delay_wire_3123;
  logic [15:0] delay_wire_3124;
  logic [15:0] delay_wire_3125;
  logic [15:0] delay_wire_3126;
  logic [15:0] delay_wire_3127;
  logic [15:0] delay_wire_3128;
  logic [15:0] delay_wire_3129;
  logic [15:0] delay_wire_3130;
  logic [15:0] delay_wire_3131;
  logic [15:0] delay_wire_3132;
  logic [15:0] delay_wire_3133;
  logic [15:0] delay_wire_3134;
  logic [15:0] delay_wire_3135;
  logic [15:0] delay_wire_3136;
  logic [15:0] delay_wire_3137;
  logic [15:0] delay_wire_3138;
  logic [15:0] delay_wire_3139;
  logic [15:0] delay_wire_3140;
  logic [15:0] delay_wire_3141;
  logic [15:0] delay_wire_3142;
  logic [15:0] delay_wire_3143;
  logic [15:0] delay_wire_3144;
  logic [15:0] delay_wire_3145;
  logic [15:0] delay_wire_3146;
  logic [15:0] delay_wire_3147;
  logic [15:0] delay_wire_3148;
  logic [15:0] delay_wire_3149;
  logic [15:0] delay_wire_3150;
  logic [15:0] delay_wire_3151;
  logic [15:0] delay_wire_3152;
  logic [15:0] delay_wire_3153;
  logic [15:0] delay_wire_3154;
  logic [15:0] delay_wire_3155;
  logic [15:0] delay_wire_3156;
  logic [15:0] delay_wire_3157;
  logic [15:0] delay_wire_3158;
  logic [15:0] delay_wire_3159;
  logic [15:0] delay_wire_3160;
  logic [15:0] delay_wire_3161;
  logic [15:0] delay_wire_3162;
  logic [15:0] delay_wire_3163;
  logic [15:0] delay_wire_3164;
  logic [15:0] delay_wire_3165;
  logic [15:0] delay_wire_3166;
  logic [15:0] delay_wire_3167;
  logic [15:0] delay_wire_3168;
  logic [15:0] delay_wire_3169;
  logic [15:0] delay_wire_3170;
  logic [15:0] delay_wire_3171;
  logic [15:0] delay_wire_3172;
  logic [15:0] delay_wire_3173;
  logic [15:0] delay_wire_3174;
  logic [15:0] delay_wire_3175;
  logic [15:0] delay_wire_3176;
  logic [15:0] delay_wire_3177;
  logic [15:0] delay_wire_3178;
  logic [15:0] delay_wire_3179;
  logic [15:0] delay_wire_3180;
  logic [15:0] delay_wire_3181;
  always @(posedge clk) begin
    delay_wire_3053 <= in;
    delay_wire_3054 <= delay_wire_3053;
    delay_wire_3055 <= delay_wire_3054;
    delay_wire_3056 <= delay_wire_3055;
    delay_wire_3057 <= delay_wire_3056;
    delay_wire_3058 <= delay_wire_3057;
    delay_wire_3059 <= delay_wire_3058;
    delay_wire_3060 <= delay_wire_3059;
    delay_wire_3061 <= delay_wire_3060;
    delay_wire_3062 <= delay_wire_3061;
    delay_wire_3063 <= delay_wire_3062;
    delay_wire_3064 <= delay_wire_3063;
    delay_wire_3065 <= delay_wire_3064;
    delay_wire_3066 <= delay_wire_3065;
    delay_wire_3067 <= delay_wire_3066;
    delay_wire_3068 <= delay_wire_3067;
    delay_wire_3069 <= delay_wire_3068;
    delay_wire_3070 <= delay_wire_3069;
    delay_wire_3071 <= delay_wire_3070;
    delay_wire_3072 <= delay_wire_3071;
    delay_wire_3073 <= delay_wire_3072;
    delay_wire_3074 <= delay_wire_3073;
    delay_wire_3075 <= delay_wire_3074;
    delay_wire_3076 <= delay_wire_3075;
    delay_wire_3077 <= delay_wire_3076;
    delay_wire_3078 <= delay_wire_3077;
    delay_wire_3079 <= delay_wire_3078;
    delay_wire_3080 <= delay_wire_3079;
    delay_wire_3081 <= delay_wire_3080;
    delay_wire_3082 <= delay_wire_3081;
    delay_wire_3083 <= delay_wire_3082;
    delay_wire_3084 <= delay_wire_3083;
    delay_wire_3085 <= delay_wire_3084;
    delay_wire_3086 <= delay_wire_3085;
    delay_wire_3087 <= delay_wire_3086;
    delay_wire_3088 <= delay_wire_3087;
    delay_wire_3089 <= delay_wire_3088;
    delay_wire_3090 <= delay_wire_3089;
    delay_wire_3091 <= delay_wire_3090;
    delay_wire_3092 <= delay_wire_3091;
    delay_wire_3093 <= delay_wire_3092;
    delay_wire_3094 <= delay_wire_3093;
    delay_wire_3095 <= delay_wire_3094;
    delay_wire_3096 <= delay_wire_3095;
    delay_wire_3097 <= delay_wire_3096;
    delay_wire_3098 <= delay_wire_3097;
    delay_wire_3099 <= delay_wire_3098;
    delay_wire_3100 <= delay_wire_3099;
    delay_wire_3101 <= delay_wire_3100;
    delay_wire_3102 <= delay_wire_3101;
    delay_wire_3103 <= delay_wire_3102;
    delay_wire_3104 <= delay_wire_3103;
    delay_wire_3105 <= delay_wire_3104;
    delay_wire_3106 <= delay_wire_3105;
    delay_wire_3107 <= delay_wire_3106;
    delay_wire_3108 <= delay_wire_3107;
    delay_wire_3109 <= delay_wire_3108;
    delay_wire_3110 <= delay_wire_3109;
    delay_wire_3111 <= delay_wire_3110;
    delay_wire_3112 <= delay_wire_3111;
    delay_wire_3113 <= delay_wire_3112;
    delay_wire_3114 <= delay_wire_3113;
    delay_wire_3115 <= delay_wire_3114;
    delay_wire_3116 <= delay_wire_3115;
    delay_wire_3117 <= delay_wire_3116;
    delay_wire_3118 <= delay_wire_3117;
    delay_wire_3119 <= delay_wire_3118;
    delay_wire_3120 <= delay_wire_3119;
    delay_wire_3121 <= delay_wire_3120;
    delay_wire_3122 <= delay_wire_3121;
    delay_wire_3123 <= delay_wire_3122;
    delay_wire_3124 <= delay_wire_3123;
    delay_wire_3125 <= delay_wire_3124;
    delay_wire_3126 <= delay_wire_3125;
    delay_wire_3127 <= delay_wire_3126;
    delay_wire_3128 <= delay_wire_3127;
    delay_wire_3129 <= delay_wire_3128;
    delay_wire_3130 <= delay_wire_3129;
    delay_wire_3131 <= delay_wire_3130;
    delay_wire_3132 <= delay_wire_3131;
    delay_wire_3133 <= delay_wire_3132;
    delay_wire_3134 <= delay_wire_3133;
    delay_wire_3135 <= delay_wire_3134;
    delay_wire_3136 <= delay_wire_3135;
    delay_wire_3137 <= delay_wire_3136;
    delay_wire_3138 <= delay_wire_3137;
    delay_wire_3139 <= delay_wire_3138;
    delay_wire_3140 <= delay_wire_3139;
    delay_wire_3141 <= delay_wire_3140;
    delay_wire_3142 <= delay_wire_3141;
    delay_wire_3143 <= delay_wire_3142;
    delay_wire_3144 <= delay_wire_3143;
    delay_wire_3145 <= delay_wire_3144;
    delay_wire_3146 <= delay_wire_3145;
    delay_wire_3147 <= delay_wire_3146;
    delay_wire_3148 <= delay_wire_3147;
    delay_wire_3149 <= delay_wire_3148;
    delay_wire_3150 <= delay_wire_3149;
    delay_wire_3151 <= delay_wire_3150;
    delay_wire_3152 <= delay_wire_3151;
    delay_wire_3153 <= delay_wire_3152;
    delay_wire_3154 <= delay_wire_3153;
    delay_wire_3155 <= delay_wire_3154;
    delay_wire_3156 <= delay_wire_3155;
    delay_wire_3157 <= delay_wire_3156;
    delay_wire_3158 <= delay_wire_3157;
    delay_wire_3159 <= delay_wire_3158;
    delay_wire_3160 <= delay_wire_3159;
    delay_wire_3161 <= delay_wire_3160;
    delay_wire_3162 <= delay_wire_3161;
    delay_wire_3163 <= delay_wire_3162;
    delay_wire_3164 <= delay_wire_3163;
    delay_wire_3165 <= delay_wire_3164;
    delay_wire_3166 <= delay_wire_3165;
    delay_wire_3167 <= delay_wire_3166;
    delay_wire_3168 <= delay_wire_3167;
    delay_wire_3169 <= delay_wire_3168;
    delay_wire_3170 <= delay_wire_3169;
    delay_wire_3171 <= delay_wire_3170;
    delay_wire_3172 <= delay_wire_3171;
    delay_wire_3173 <= delay_wire_3172;
    delay_wire_3174 <= delay_wire_3173;
    delay_wire_3175 <= delay_wire_3174;
    delay_wire_3176 <= delay_wire_3175;
    delay_wire_3177 <= delay_wire_3176;
    delay_wire_3178 <= delay_wire_3177;
    delay_wire_3179 <= delay_wire_3178;
    delay_wire_3180 <= delay_wire_3179;
    delay_wire_3181 <= delay_wire_3180;
  end
  assign out = delay_wire_3181;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_3182;
  logic [15:0] delay_wire_3183;
  logic [15:0] delay_wire_3184;
  always @(posedge clk) begin
    delay_wire_3182 <= in;
    delay_wire_3183 <= delay_wire_3182;
    delay_wire_3184 <= delay_wire_3183;
  end
  assign out = delay_wire_3184;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_3185;
  always @(posedge clk) begin
    delay_wire_3185 <= in;
  end
  assign out = delay_wire_3185;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_3186;
  logic [15:0] delay_wire_3187;
  always @(posedge clk) begin
    delay_wire_3186 <= in;
    delay_wire_3187 <= delay_wire_3186;
  end
  assign out = delay_wire_3187;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

// { op_hcompute_padded16_global_wrapper_stencil[root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> [(1 + 64padded16_global_wrapper_s0_y + padded16_global_wrapper_s0_x)] }
module padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2:0], output op_hcompute_padded16_global_wrapper_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_padded16_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1]<=63 && op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_grad_x_stencil[root, grad_x_s0_y, grad_x_s0_x] -> [(132 + 64grad_x_s0_y + grad_x_s0_x)] }
module padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars[2:0], output op_hcompute_grad_x_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_x_stencil_read_ren =(on && on2 && op_hcompute_grad_x_stencil_read_ctrl_vars[0]==0 && op_hcompute_grad_x_stencil_read_ctrl_vars[1]<=61 && op_hcompute_grad_x_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_x_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_x_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_x_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==131) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_x_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_x_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_x_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_x_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_grad_x_stencil_read_ctrl_vars[1] <= op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_x_stencil_read_ctrl_vars[2] <= op_hcompute_grad_x_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_grad_y_stencil[root, grad_y_s0_y, grad_y_s0_x] -> [(132 + 64grad_y_s0_y + grad_y_s0_x)] }
module padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars[2:0], output op_hcompute_grad_y_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_y_stencil_read_ren =(on && on2 && op_hcompute_grad_y_stencil_read_ctrl_vars[0]==0 && op_hcompute_grad_y_stencil_read_ctrl_vars[1]<=61 && op_hcompute_grad_y_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_y_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_y_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_y_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==131) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_y_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_y_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_y_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_y_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_grad_y_stencil_read_ctrl_vars[1] <= op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_y_stencil_read_ctrl_vars[2] <= op_hcompute_grad_y_stencil_read_ctrl_vars[2] + 1;
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
module padded16_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_x_stencil_read_ren,
	input [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_grad_x_stencil_read [5:0] ,
	input op_hcompute_grad_y_stencil_read_ren,
	input [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_grad_y_stencil_read [5:0] ,
	input op_hcompute_padded16_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0] );

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_read[2]), .out(op_hcompute_grad_x_stencil_read[0]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_read[4]), .out(op_hcompute_grad_x_stencil_read[1]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_read[0]), .out(op_hcompute_grad_x_stencil_read[3]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_read[3]), .out(op_hcompute_grad_x_stencil_read[5]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[2]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[4]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[0]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[1]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[2]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[3]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[4]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[5]));


  // Storage capacity pre-banking: 4096
  logic [15:0]op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out;
  padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_fsm padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars( op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_padded16_global_wrapper_stencil_write_wen(op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_x_stencil_read_ren_fsm_out;
  padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_fsm padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_x_stencil_read_ctrl_vars( op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out), .op_hcompute_grad_x_stencil_read_ren(op_hcompute_grad_x_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_y_stencil_read_ren_fsm_out;
  padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_fsm padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_y_stencil_read_ctrl_vars( op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out), .op_hcompute_grad_y_stencil_read_ren(op_hcompute_grad_y_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [4096];
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_0 = (((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_1 = (((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_0 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_1 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_0 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_1 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_0 = (((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_1 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_0 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_1 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_0 = (((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_1 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_0 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_1 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_0 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_1 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_0 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_1 = (((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_0 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_1 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_0 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_1 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_0 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_1 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_0 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_1 = (((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - -3)>>0)*1+((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - -3)>>0)*64);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        default:bank_0[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

